/*
 * Copyright (C) 2013 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//#define LOG_NDEBUG 0
#define LOG_TAG "CharacterEncodingDector"
#include <utils/Log.h>

#include "CharacterEncodingDetector.h"
#include "CharacterEncodingDetectorTables.h"

#include "utils/Vector.h"
#include "StringArray.h"

#include "unicode/ucnv.h"
#include "unicode/ucsdet.h"
#include "unicode/ustring.h"

namespace android {

CharacterEncodingDetector::CharacterEncodingDetector() {

    UErrorCode status = U_ZERO_ERROR;
    mUtf8Conv = ucnv_open("UTF-8", &status);
    if (U_FAILURE(status)) {
        ALOGE("could not create UConverter for UTF-8");
        mUtf8Conv = NULL;
    }
}

CharacterEncodingDetector::~CharacterEncodingDetector() {
    ucnv_close(mUtf8Conv);
}

void CharacterEncodingDetector::addTag(const char *name, const char *value) {
    mNames.push_back(name);
    mValues.push_back(value);
}

size_t CharacterEncodingDetector::size() {
    return mNames.size();
}

status_t CharacterEncodingDetector::getTag(int index, const char **name, const char**value) {
    if (index >= mNames.size()) {
        return BAD_VALUE;
    }

    *name = mNames.getEntry(index);
    *value = mValues.getEntry(index);
    return OK;
}

static bool isPrintableAscii(const char *value, size_t len) {
    for (size_t i = 0; i < len; i++) {
        if ((value[i] & 0x80) || value[i] < 0x20 || value[i] == 0x7f) {
            return false;
        }
    }
    return true;
}

void CharacterEncodingDetector::detectAndConvert() {

    int size = mNames.size();
    ALOGV("%d tags before conversion", size);
    for (int i = 0; i < size; i++) {
        ALOGV("%s: %s", mNames.getEntry(i), mValues.getEntry(i));
    }

    if (size && mUtf8Conv) {

        UErrorCode status = U_ZERO_ERROR;
        UCharsetDetector *csd = ucsdet_open(&status);
        const UCharsetMatch *ucm;

        // try combined detection of artist/album/title etc.
        char buf[1024];
        buf[0] = 0;
        int idx;
        for (int i = 0; i < size; i++) {
            const char *name = mNames.getEntry(i);
            const char *value = mValues.getEntry(i);
            if (!isPrintableAscii(value, strlen(value)) && (
                        !strcmp(name, "artist") ||
                        !strcmp(name, "albumartist") ||
                        !strcmp(name, "composer") ||
                        !strcmp(name, "genre") ||
                        !strcmp(name, "album") ||
                        !strcmp(name, "title"))) {
                strlcat(buf, value, sizeof(buf));
                // separate tags by space so ICU's ngram detector can do its job
                strlcat(buf, " ", sizeof(buf));
            }
        }
        ucsdet_setText(csd, buf, strlen(buf), &status);

        int32_t matches;
        const UCharsetMatch** ucma = ucsdet_detectAll(csd, &matches, &status);
        const char *combinedenc = "???";

        const UCharsetMatch* bestCombinedMatch = getPreferred(buf, strlen(buf), ucma, matches);

        if (bestCombinedMatch != NULL) {
            combinedenc = ucsdet_getName(bestCombinedMatch, &status);
        }

        for (int i = 0; i < size; i++) {
            const char *name = mNames.getEntry(i);
            uint8_t* src = (uint8_t *)mValues.getEntry(i);
            int len = strlen((char *)src);
            uint8_t* dest = src;

            ALOGV("@@@ checking %s", name);
            const char *s = mValues.getEntry(i);
            int32_t inputLength = strlen(s);
            const char *enc;

            if (!strcmp(name, "artist") ||
                    !strcmp(name, "albumartist") ||
                    !strcmp(name, "composer") ||
                    !strcmp(name, "genre") ||
                    !strcmp(name, "album") ||
                    !strcmp(name, "title")) {
                // use encoding determined from the combination of artist/album/title etc.
                enc = combinedenc;
            } else {
                ucsdet_setText(csd, s, inputLength, &status);
                ucm = ucsdet_detect(csd, &status);
                if (!ucm) {
                    mValues.setEntry(i, "???");
                    continue;
                }
                enc = ucsdet_getName(ucm, &status);
                ALOGV("@@@@ recognized charset: %s for %s confidence %d",
                        enc, mNames.getEntry(i), ucsdet_getConfidence(ucm, &status));
            }

            if (strcmp(enc,"UTF-8") != 0) {
                // only convert if the source encoding isn't already UTF-8
                ALOGV("@@@ using converter %s for %s", enc, mNames.getEntry(i));
                UConverter *conv = ucnv_open(enc, &status);
                if (U_FAILURE(status)) {
                    ALOGE("could not create UConverter for %s", enc);
                    continue;
                }

                // convert from native encoding to UTF-8
                const char* source = mValues.getEntry(i);
                int targetLength = len * 3 + 1;
                char* buffer = new char[targetLength];
                // don't normally check for NULL, but in this case targetLength may be large
                if (!buffer)
                    break;
                char* target = buffer;

                ucnv_convertEx(mUtf8Conv, conv, &target, target + targetLength,
                        &source, source + strlen(source),
                        NULL, NULL, NULL, NULL, TRUE, TRUE, &status);

                if (U_FAILURE(status)) {
                    ALOGE("ucnv_convertEx failed: %d", status);
                    mValues.setEntry(i, "???");
                } else {
                    // zero terminate
                    *target = 0;
                    mValues.setEntry(i, buffer);
                }

                delete[] buffer;

                ucnv_close(conv);
            }
        }

        for (int i = size - 1; i >= 0; --i) {
            if (strlen(mValues.getEntry(i)) == 0) {
                ALOGV("erasing %s because entry is empty", mNames.getEntry(i));
                mNames.erase(i);
                mValues.erase(i);
            }
        }

        ucsdet_close(csd);
    }
}

/*
 * When ICU detects multiple encoding matches, apply additional heuristics to determine
 * which one is the best match, since ICU can't always be trusted to make the right choice.
 *
 * What this method does is:
 * - decode the input using each of the matches found
 * - recalculate the starting confidence level for multibyte encodings using a different
 *   algorithm and larger frequent character lists than ICU
 * - devalue encoding where the conversion contains unlikely characters (symbols, reserved, etc)
 * - pick the highest match
 */
const UCharsetMatch *CharacterEncodingDetector::getPreferred(
        const char *input, size_t len, const UCharsetMatch** ucma, size_t nummatches) {

    Vector<const UCharsetMatch*> matches;
    UErrorCode status = U_ZERO_ERROR;

    ALOGV("%d matches", nummatches);
    for (size_t i = 0; i < nummatches; i++) {
        const char *encname = ucsdet_getName(ucma[i], &status);
        int confidence = ucsdet_getConfidence(ucma[i], &status);
        ALOGV("%d: %s %d", i, encname, confidence);
        matches.push_back(ucma[i]);
    }

    size_t num = matches.size();
    if (num == 0) {
        return NULL;
    }
    if (num == 1) {
        return matches[0];
    }

    ALOGV("considering %d matches", num);

    // keep track of how many "special" characters result when converting the input using each
    // encoding
    Vector<int> newconfidence;
    for (size_t i = 0; i < num; i++) {
        const uint16_t *freqdata = NULL;
        float freqcoverage = 0;
        status = U_ZERO_ERROR;
        const char *encname = ucsdet_getName(matches[i], &status);
        int confidence = ucsdet_getConfidence(matches[i], &status);
        if (!strcmp("GB18030", encname)) {
            freqdata = frequent_zhCN;
            freqcoverage = frequent_zhCN_coverage;
        } else if (!strcmp("Big5", encname)) {
            freqdata = frequent_zhTW;
            freqcoverage = frequent_zhTW_coverage;
        } else if (!strcmp("EUC-KR", encname)) {
            freqdata = frequent_ko;
            freqcoverage = frequent_ko_coverage;
        } else if (!strcmp("EUC-JP", encname)) {
            freqdata = frequent_ja;
            freqcoverage = frequent_ja_coverage;
        } else if (!strcmp("Shift_JIS", encname)) {
            freqdata = frequent_ja;
            freqcoverage = frequent_ja_coverage;
        }

        ALOGV("%d: %s %d", i, encname, confidence);
        UConverter *conv = ucnv_open(encname, &status);
        const char *source = input;
        const char *sourceLimit = input + len;
        status = U_ZERO_ERROR;
        int demerit = 0;
        int frequentchars = 0;
        int totalchars = 0;
        while (true) {
            // demerit the current encoding for each "special" character found after conversion.
            // The amount of demerit is somewhat arbitrarily chosen.
            int inchar;
            if (source != sourceLimit) {
                inchar = (source[0] << 8) + source[1];
            }
            UChar32 c = ucnv_getNextUChar(conv, &source, sourceLimit, &status);
            if (!U_SUCCESS(status)) {
                break;
            }
            if (c < 0x20 || (c >= 0x7f && c <= 0x009f)) {
                ALOGV("control character %x", c);
                demerit += 100;
            } else if ((c >= 0xa0 && c <= 0xbe)         // symbols, superscripts
                    || (c == 0xd7) || (c == 0xf7)       // multiplication and division signs
                    || (c >= 0x2000 && c <= 0x209f)) {  // punctuation, superscripts
                ALOGV("unlikely character %x", c);
                demerit += 10;
            } else if (c >= 0xe000 && c <= 0xf8ff) {
                ALOGV("private use character %x", c);
                demerit += 30;
            } else if (c >= 0x2190 && c <= 0x2bff) {
                // this range comprises various symbol ranges that are unlikely to appear in
                // music file metadata.
                ALOGV("symbol %x", c);
                demerit += 10;
            } else if (c == 0xfffd) {
                ALOGV("replacement character");
                demerit += 50;
            } else if (c >= 0xfff0 && c <= 0xfffc) {
                ALOGV("unicode special %x", c);
                demerit += 50;
            } else if (freqdata != NULL) {
                totalchars++;
                if (isFrequent(freqdata, c)) {
                    frequentchars++;
                }
            }
        }
        if (freqdata != NULL && totalchars != 0) {
            int myconfidence = 10 + float((100 * frequentchars) / totalchars) / freqcoverage;
            ALOGV("ICU confidence: %d, my confidence: %d (%d %d)", confidence, myconfidence,
                    totalchars, frequentchars);
            if (myconfidence > 100) myconfidence = 100;
            if (myconfidence < 0) myconfidence = 0;
            confidence = myconfidence;
        }
        ALOGV("%d-%d=%d", confidence, demerit, confidence - demerit);
        newconfidence.push_back(confidence - demerit);
        ucnv_close(conv);
        if (i == 0 && (confidence - demerit) == 100) {
            // no need to check any further, we'll end up using this match anyway
            break;
        }
    }

    // find match with highest confidence after adjusting for unlikely characters
    int highest = newconfidence[0];
    size_t highestidx = 0;
    num = newconfidence.size();
    for (size_t i = 1; i < num; i++) {
        if (newconfidence[i] > highest) {
            highest = newconfidence[i];
            highestidx = i;
        }
    }
    status = U_ZERO_ERROR;
    ALOGV("selecting '%s' w/ %d confidence", ucsdet_getName(matches[highestidx], &status), highest);
    return matches[highestidx];
}


bool CharacterEncodingDetector::isFrequent(const uint16_t *values, uint32_t c) {

    int start = 0;
    int end = 511; // All the tables have 512 entries
    int mid = (start+end)/2;

    while(start <= end) {
        if(c == values[mid]) {
            return true;
        } else if (c > values[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return false;
}


}  // namespace android
