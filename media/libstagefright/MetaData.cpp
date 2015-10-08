/* fprintf macros for signed integers */
#define	PRId8			"d"		/* int8_t */
#define	PRId16			"d"		/* int16_t */
#define	PRId32			"d"		/* int32_t */
#define	PRId64			"lld"		/* int64_t */

#define	PRIdLEAST8		"d"		/* int_least8_t */
#define	PRIdLEAST16		"d"		/* int_least16_t */
#define	PRIdLEAST32		"d"		/* int_least32_t */
#define	PRIdLEAST64		"lld"		/* int_least64_t */

#define	PRIdFAST8		"d"		/* int_fast8_t */
#define	PRIdFAST16		"d"		/* int_fast16_t */
#define	PRIdFAST32		"d"		/* int_fast32_t */
#define	PRIdFAST64		"lld"		/* int_fast64_t */

#define	PRIdMAX			"jd"		/* intmax_t */
#define	PRIdPTR			"d"		/* intptr_t */

#define	PRIi8			"i"		/* int8_t */
#define	PRIi16			"i"		/* int16_t */
#define	PRIi32			"i"		/* int32_t */
#define	PRIi64			"lli"		/* int64_t */

#define	PRIiLEAST8		"i"		/* int_least8_t */
#define	PRIiLEAST16		"i"		/* int_least16_t */
#define	PRIiLEAST32		"i"		/* int_least32_t */
#define	PRIiLEAST64		"lli"		/* int_least64_t */

#define	PRIiFAST8		"i"		/* int_fast8_t */
#define	PRIiFAST16		"i"		/* int_fast16_t */
#define	PRIiFAST32		"i"		/* int_fast32_t */
#define	PRIiFAST64		"lli"		/* int_fast64_t */

#define	PRIiMAX			"ji"		/* intmax_t */
#define	PRIiPTR			"i"		/* intptr_t */

/* fprintf macros for unsigned integers */
#define	PRIo8			"o"		/* int8_t */
#define	PRIo16			"o"		/* int16_t */
#define	PRIo32			"o"		/* int32_t */
#define	PRIo64			"llo"		/* int64_t */

#define	PRIoLEAST8		"o"		/* int_least8_t */
#define	PRIoLEAST16		"o"		/* int_least16_t */
#define	PRIoLEAST32		"o"		/* int_least32_t */
#define	PRIoLEAST64		"llo"		/* int_least64_t */

#define	PRIoFAST8		"o"		/* int_fast8_t */
#define	PRIoFAST16		"o"		/* int_fast16_t */
#define	PRIoFAST32		"o"		/* int_fast32_t */
#define	PRIoFAST64		"llo"		/* int_fast64_t */

#define	PRIoMAX			"jo"		/* intmax_t */
#define	PRIoPTR			"o"		/* intptr_t */

#define	PRIu8			"u"		/* uint8_t */
#define	PRIu16			"u"		/* uint16_t */
#define	PRIu32			"u"		/* uint32_t */
#define	PRIu64			"llu"		/* uint64_t */

#define	PRIuLEAST8		"u"		/* uint_least8_t */
#define	PRIuLEAST16		"u"		/* uint_least16_t */
#define	PRIuLEAST32		"u"		/* uint_least32_t */
#define	PRIuLEAST64		"llu"		/* uint_least64_t */

#define	PRIuFAST8		"u"		/* uint_fast8_t */
#define	PRIuFAST16		"u"		/* uint_fast16_t */
#define	PRIuFAST32		"u"		/* uint_fast32_t */
#define	PRIuFAST64		"llu"		/* uint_fast64_t */

#define	PRIuMAX			"ju"		/* uintmax_t */
#define	PRIuPTR			"u"		/* uintptr_t */

#define	PRIx8			"x"		/* uint8_t */
#define	PRIx16			"x"		/* uint16_t */
#define	PRIx32			"x"		/* uint32_t */
#define	PRIx64			"llx"		/* uint64_t */

#define	PRIxLEAST8		"x"		/* uint_least8_t */
#define	PRIxLEAST16		"x"		/* uint_least16_t */
#define	PRIxLEAST32		"x"		/* uint_least32_t */
#define	PRIxLEAST64		"llx"		/* uint_least64_t */

#define	PRIxFAST8		"x"		/* uint_fast8_t */
#define	PRIxFAST16		"x"		/* uint_fast16_t */
#define	PRIxFAST32		"x"		/* uint_fast32_t */
#define	PRIxFAST64		"llx"		/* uint_fast64_t */

#define	PRIxMAX			"jx"		/* uintmax_t */
#define	PRIxPTR			"x"		/* uintptr_t */

#define	PRIX8			"X"		/* uint8_t */
#define	PRIX16			"X"		/* uint16_t */
#define	PRIX32			"X"		/* uint32_t */
#define	PRIX64			"llX"		/* uint64_t */

#define	PRIXLEAST8		"X"		/* uint_least8_t */
#define	PRIXLEAST16		"X"		/* uint_least16_t */
#define	PRIXLEAST32		"X"		/* uint_least32_t */
#define	PRIXLEAST64		"llX"		/* uint_least64_t */

#define	PRIXFAST8		"X"		/* uint_fast8_t */
#define	PRIXFAST16		"X"		/* uint_fast16_t */
#define	PRIXFAST32		"X"		/* uint_fast32_t */
#define	PRIXFAST64		"llX"		/* uint_fast64_t */

#define	PRIXMAX			"jX"		/* uintmax_t */
#define	PRIXPTR			"X"		/* uintptr_t */

/* fscanf macros for signed integers */
#define	SCNd8			"hhd"		/* int8_t */
#define	SCNd16			"hd"		/* int16_t */
#define	SCNd32			"d"		/* int32_t */
#define	SCNd64			"lld"		/* int64_t */

#define	SCNdLEAST8		"hhd"		/* int_least8_t */
#define	SCNdLEAST16		"hd"		/* int_least16_t */
#define	SCNdLEAST32		"d"		/* int_least32_t */
#define	SCNdLEAST64		"lld"		/* int_least64_t */

#define	SCNdFAST8		"hhd"		/* int_fast8_t */
#define	SCNdFAST16		"hd"		/* int_fast16_t */
#define	SCNdFAST32		"d"		/* int_fast32_t */
#define	SCNdFAST64		"lld"		/* int_fast64_t */

#define	SCNdMAX			"jd"		/* intmax_t */
#define	SCNdPTR			"d"		/* intptr_t */

#define	SCNi8			"hhi"		/* int8_t */
#define	SCNi16			"hi"		/* int16_t */
#define	SCNi32			"i"		/* int32_t */
#define	SCNi64			"lli"		/* int64_t */

#define	SCNiLEAST8		"hhi"		/* int_least8_t */
#define	SCNiLEAST16		"hi"		/* int_least16_t */
#define	SCNiLEAST32		"i"		/* int_least32_t */
#define	SCNiLEAST64		"lli"		/* int_least64_t */

#define	SCNiFAST8		"hhi"		/* int_fast8_t */
#define	SCNiFAST16		"hi"		/* int_fast16_t */
#define	SCNiFAST32		"i"		/* int_fast32_t */
#define	SCNiFAST64		"lli"		/* int_fast64_t */

#define	SCNiMAX			"ji"		/* intmax_t */
#define	SCNiPTR			"i"		/* intptr_t */

/* fscanf macros for unsigned integers */
#define	SCNo8			"hho"		/* uint8_t */
#define	SCNo16			"ho"		/* uint16_t */
#define	SCNo32			"o"		/* uint32_t */
#define	SCNo64			"llo"		/* uint64_t */

#define	SCNoLEAST8		"hho"		/* uint_least8_t */
#define	SCNoLEAST16		"ho"		/* uint_least16_t */
#define	SCNoLEAST32		"o"		/* uint_least32_t */
#define	SCNoLEAST64		"llo"		/* uint_least64_t */

#define	SCNoFAST8		"hho"		/* uint_fast8_t */
#define	SCNoFAST16		"ho"		/* uint_fast16_t */
#define	SCNoFAST32		"o"		/* uint_fast32_t */
#define	SCNoFAST64		"llo"		/* uint_fast64_t */

#define	SCNoMAX			"jo"		/* uintmax_t */
#define	SCNoPTR			"o"		/* uintptr_t */

#define	SCNu8			"hhu"		/* uint8_t */
#define	SCNu16			"hu"		/* uint16_t */
#define	SCNu32			"u"		/* uint32_t */
#define	SCNu64			"llu"		/* uint64_t */

#define	SCNuLEAST8		"hhu"		/* uint_least8_t */
#define	SCNuLEAST16		"hu"		/* uint_least16_t */
#define	SCNuLEAST32		"u"		/* uint_least32_t */
#define	SCNuLEAST64		"llu"		/* uint_least64_t */

#define	SCNuFAST8		"hhu"		/* uint_fast8_t */
#define	SCNuFAST16		"hu"		/* uint_fast16_t */
#define	SCNuFAST32		"u"		/* uint_fast32_t */
#define	SCNuFAST64		"llu"		/* uint_fast64_t */

#define	SCNuMAX			"ju"		/* uintmax_t */
#define	SCNuPTR			"u"		/* uintptr_t */

#define	SCNx8			"hhx"		/* uint8_t */
#define	SCNx16			"hx"		/* uint16_t */
#define	SCNx32			"x"		/* uint32_t */
#define	SCNx64			"llx"		/* uint64_t */

#define	SCNxLEAST8		"hhx"		/* uint_least8_t */
#define	SCNxLEAST16		"hx"		/* uint_least16_t */
#define	SCNxLEAST32		"x"		/* uint_least32_t */
#define	SCNxLEAST64		"llx"		/* uint_least64_t */

#define	SCNxFAST8		"hhx"		/* uint_fast8_t */
#define	SCNxFAST16		"hx"		/* uint_fast16_t */
#define	SCNxFAST32		"x"		/* uint_fast32_t */
#define	SCNxFAST64		"llx"		/* uint_fast64_t */

#define	SCNxMAX			"jx"		/* uintmax_t */
#define	SCNxPTR			"x"		/* uintptr_t */
/* fprintf macros for signed integers */
#define	PRId8			"d"		/* int8_t */
#define	PRId16			"d"		/* int16_t */
#define	PRId32			"d"		/* int32_t */
#define	PRId64			"lld"		/* int64_t */

#define	PRIdLEAST8		"d"		/* int_least8_t */
#define	PRIdLEAST16		"d"		/* int_least16_t */
#define	PRIdLEAST32		"d"		/* int_least32_t */
#define	PRIdLEAST64		"lld"		/* int_least64_t */

#define	PRIdFAST8		"d"		/* int_fast8_t */
#define	PRIdFAST16		"d"		/* int_fast16_t */
#define	PRIdFAST32		"d"		/* int_fast32_t */
#define	PRIdFAST64		"lld"		/* int_fast64_t */

#define	PRIdMAX			"jd"		/* intmax_t */
#define	PRIdPTR			"d"		/* intptr_t */

#define	PRIi8			"i"		/* int8_t */
#define	PRIi16			"i"		/* int16_t */
#define	PRIi32			"i"		/* int32_t */
#define	PRIi64			"lli"		/* int64_t */

#define	PRIiLEAST8		"i"		/* int_least8_t */
#define	PRIiLEAST16		"i"		/* int_least16_t */
#define	PRIiLEAST32		"i"		/* int_least32_t */
#define	PRIiLEAST64		"lli"		/* int_least64_t */

#define	PRIiFAST8		"i"		/* int_fast8_t */
#define	PRIiFAST16		"i"		/* int_fast16_t */
#define	PRIiFAST32		"i"		/* int_fast32_t */
#define	PRIiFAST64		"lli"		/* int_fast64_t */

#define	PRIiMAX			"ji"		/* intmax_t */
#define	PRIiPTR			"i"		/* intptr_t */

/* fprintf macros for unsigned integers */
#define	PRIo8			"o"		/* int8_t */
#define	PRIo16			"o"		/* int16_t */
#define	PRIo32			"o"		/* int32_t */
#define	PRIo64			"llo"		/* int64_t */

#define	PRIoLEAST8		"o"		/* int_least8_t */
#define	PRIoLEAST16		"o"		/* int_least16_t */
#define	PRIoLEAST32		"o"		/* int_least32_t */
#define	PRIoLEAST64		"llo"		/* int_least64_t */

#define	PRIoFAST8		"o"		/* int_fast8_t */
#define	PRIoFAST16		"o"		/* int_fast16_t */
#define	PRIoFAST32		"o"		/* int_fast32_t */
#define	PRIoFAST64		"llo"		/* int_fast64_t */

#define	PRIoMAX			"jo"		/* intmax_t */
#define	PRIoPTR			"o"		/* intptr_t */

#define	PRIu8			"u"		/* uint8_t */
#define	PRIu16			"u"		/* uint16_t */
#define	PRIu32			"u"		/* uint32_t */
#define	PRIu64			"llu"		/* uint64_t */

#define	PRIuLEAST8		"u"		/* uint_least8_t */
#define	PRIuLEAST16		"u"		/* uint_least16_t */
#define	PRIuLEAST32		"u"		/* uint_least32_t */
#define	PRIuLEAST64		"llu"		/* uint_least64_t */

#define	PRIuFAST8		"u"		/* uint_fast8_t */
#define	PRIuFAST16		"u"		/* uint_fast16_t */
#define	PRIuFAST32		"u"		/* uint_fast32_t */
#define	PRIuFAST64		"llu"		/* uint_fast64_t */

#define	PRIuMAX			"ju"		/* uintmax_t */
#define	PRIuPTR			"u"		/* uintptr_t */

#define	PRIx8			"x"		/* uint8_t */
#define	PRIx16			"x"		/* uint16_t */
#define	PRIx32			"x"		/* uint32_t */
#define	PRIx64			"llx"		/* uint64_t */

#define	PRIxLEAST8		"x"		/* uint_least8_t */
#define	PRIxLEAST16		"x"		/* uint_least16_t */
#define	PRIxLEAST32		"x"		/* uint_least32_t */
#define	PRIxLEAST64		"llx"		/* uint_least64_t */

#define	PRIxFAST8		"x"		/* uint_fast8_t */
#define	PRIxFAST16		"x"		/* uint_fast16_t */
#define	PRIxFAST32		"x"		/* uint_fast32_t */
#define	PRIxFAST64		"llx"		/* uint_fast64_t */

#define	PRIxMAX			"jx"		/* uintmax_t */
#define	PRIxPTR			"x"		/* uintptr_t */

#define	PRIX8			"X"		/* uint8_t */
#define	PRIX16			"X"		/* uint16_t */
#define	PRIX32			"X"		/* uint32_t */
#define	PRIX64			"llX"		/* uint64_t */

#define	PRIXLEAST8		"X"		/* uint_least8_t */
#define	PRIXLEAST16		"X"		/* uint_least16_t */
#define	PRIXLEAST32		"X"		/* uint_least32_t */
#define	PRIXLEAST64		"llX"		/* uint_least64_t */

#define	PRIXFAST8		"X"		/* uint_fast8_t */
#define	PRIXFAST16		"X"		/* uint_fast16_t */
#define	PRIXFAST32		"X"		/* uint_fast32_t */
#define	PRIXFAST64		"llX"		/* uint_fast64_t */

#define	PRIXMAX			"jX"		/* uintmax_t */
#define	PRIXPTR			"X"		/* uintptr_t */

/* fscanf macros for signed integers */
#define	SCNd8			"hhd"		/* int8_t */
#define	SCNd16			"hd"		/* int16_t */
#define	SCNd32			"d"		/* int32_t */
#define	SCNd64			"lld"		/* int64_t */

#define	SCNdLEAST8		"hhd"		/* int_least8_t */
#define	SCNdLEAST16		"hd"		/* int_least16_t */
#define	SCNdLEAST32		"d"		/* int_least32_t */
#define	SCNdLEAST64		"lld"		/* int_least64_t */

#define	SCNdFAST8		"hhd"		/* int_fast8_t */
#define	SCNdFAST16		"hd"		/* int_fast16_t */
#define	SCNdFAST32		"d"		/* int_fast32_t */
#define	SCNdFAST64		"lld"		/* int_fast64_t */

#define	SCNdMAX			"jd"		/* intmax_t */
#define	SCNdPTR			"d"		/* intptr_t */

#define	SCNi8			"hhi"		/* int8_t */
#define	SCNi16			"hi"		/* int16_t */
#define	SCNi32			"i"		/* int32_t */
#define	SCNi64			"lli"		/* int64_t */

#define	SCNiLEAST8		"hhi"		/* int_least8_t */
#define	SCNiLEAST16		"hi"		/* int_least16_t */
#define	SCNiLEAST32		"i"		/* int_least32_t */
#define	SCNiLEAST64		"lli"		/* int_least64_t */

#define	SCNiFAST8		"hhi"		/* int_fast8_t */
#define	SCNiFAST16		"hi"		/* int_fast16_t */
#define	SCNiFAST32		"i"		/* int_fast32_t */
#define	SCNiFAST64		"lli"		/* int_fast64_t */

#define	SCNiMAX			"ji"		/* intmax_t */
#define	SCNiPTR			"i"		/* intptr_t */

/* fscanf macros for unsigned integers */
#define	SCNo8			"hho"		/* uint8_t */
#define	SCNo16			"ho"		/* uint16_t */
#define	SCNo32			"o"		/* uint32_t */
#define	SCNo64			"llo"		/* uint64_t */

#define	SCNoLEAST8		"hho"		/* uint_least8_t */
#define	SCNoLEAST16		"ho"		/* uint_least16_t */
#define	SCNoLEAST32		"o"		/* uint_least32_t */
#define	SCNoLEAST64		"llo"		/* uint_least64_t */

#define	SCNoFAST8		"hho"		/* uint_fast8_t */
#define	SCNoFAST16		"ho"		/* uint_fast16_t */
#define	SCNoFAST32		"o"		/* uint_fast32_t */
#define	SCNoFAST64		"llo"		/* uint_fast64_t */

#define	SCNoMAX			"jo"		/* uintmax_t */
#define	SCNoPTR			"o"		/* uintptr_t */

#define	SCNu8			"hhu"		/* uint8_t */
#define	SCNu16			"hu"		/* uint16_t */
#define	SCNu32			"u"		/* uint32_t */
#define	SCNu64			"llu"		/* uint64_t */

#define	SCNuLEAST8		"hhu"		/* uint_least8_t */
#define	SCNuLEAST16		"hu"		/* uint_least16_t */
#define	SCNuLEAST32		"u"		/* uint_least32_t */
#define	SCNuLEAST64		"llu"		/* uint_least64_t */

#define	SCNuFAST8		"hhu"		/* uint_fast8_t */
#define	SCNuFAST16		"hu"		/* uint_fast16_t */
#define	SCNuFAST32		"u"		/* uint_fast32_t */
#define	SCNuFAST64		"llu"		/* uint_fast64_t */

#define	SCNuMAX			"ju"		/* uintmax_t */
#define	SCNuPTR			"u"		/* uintptr_t */

#define	SCNx8			"hhx"		/* uint8_t */
#define	SCNx16			"hx"		/* uint16_t */
#define	SCNx32			"x"		/* uint32_t */
#define	SCNx64			"llx"		/* uint64_t */

#define	SCNxLEAST8		"hhx"		/* uint_least8_t */
#define	SCNxLEAST16		"hx"		/* uint_least16_t */
#define	SCNxLEAST32		"x"		/* uint_least32_t */
#define	SCNxLEAST64		"llx"		/* uint_least64_t */

#define	SCNxFAST8		"hhx"		/* uint_fast8_t */
#define	SCNxFAST16		"hx"		/* uint_fast16_t */
#define	SCNxFAST32		"x"		/* uint_fast32_t */
#define	SCNxFAST64		"llx"		/* uint_fast64_t */

#define	SCNxMAX			"jx"		/* uintmax_t */
#define	SCNxPTR			"x"		/* uintptr_t */
/*
 * Copyright (C) 2009 The Android Open Source Project
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
#define LOG_TAG "MetaData"
#include <inttypes.h>
#include <utils/Log.h>

#include <stdlib.h>
#include <string.h>

#include <media/stagefright/foundation/ADebug.h>
#include <media/stagefright/foundation/AString.h>
#include <media/stagefright/foundation/hexdump.h>
#include <media/stagefright/MetaData.h>

namespace android {

MetaData::MetaData() {
}

MetaData::MetaData(const MetaData &from)
    : RefBase(),
      mItems(from.mItems) {
}

MetaData::~MetaData() {
    clear();
}

void MetaData::clear() {
    mItems.clear();
}

bool MetaData::remove(uint32_t key) {
    ssize_t i = mItems.indexOfKey(key);

    if (i < 0) {
        return false;
    }

    mItems.removeItemsAt(i);

    return true;
}

bool MetaData::setCString(uint32_t key, const char *value) {
    return setData(key, TYPE_C_STRING, value, strlen(value) + 1);
}

bool MetaData::setInt32(uint32_t key, int32_t value) {
    return setData(key, TYPE_INT32, &value, sizeof(value));
}

bool MetaData::setInt64(uint32_t key, int64_t value) {
    return setData(key, TYPE_INT64, &value, sizeof(value));
}

bool MetaData::setFloat(uint32_t key, float value) {
    return setData(key, TYPE_FLOAT, &value, sizeof(value));
}

bool MetaData::setPointer(uint32_t key, void *value) {
    return setData(key, TYPE_POINTER, &value, sizeof(value));
}

bool MetaData::setRect(
        uint32_t key,
        int32_t left, int32_t top,
        int32_t right, int32_t bottom) {
    Rect r;
    r.mLeft = left;
    r.mTop = top;
    r.mRight = right;
    r.mBottom = bottom;

    return setData(key, TYPE_RECT, &r, sizeof(r));
}

/**
 * Note that the returned pointer becomes invalid when additional metadata is set.
 */
bool MetaData::findCString(uint32_t key, const char **value) {
    uint32_t type;
    const void *data;
    size_t size;
    if (!findData(key, &type, &data, &size) || type != TYPE_C_STRING) {
        return false;
    }

    *value = (const char *)data;

    return true;
}

bool MetaData::findInt32(uint32_t key, int32_t *value) {
    uint32_t type;
    const void *data;
    size_t size;
    if (!findData(key, &type, &data, &size) || type != TYPE_INT32) {
        return false;
    }

    CHECK_EQ(size, sizeof(*value));

    *value = *(int32_t *)data;

    return true;
}

bool MetaData::findInt64(uint32_t key, int64_t *value) {
    uint32_t type;
    const void *data;
    size_t size;
    if (!findData(key, &type, &data, &size) || type != TYPE_INT64) {
        return false;
    }

    CHECK_EQ(size, sizeof(*value));

    *value = *(int64_t *)data;

    return true;
}

bool MetaData::findFloat(uint32_t key, float *value) {
    uint32_t type;
    const void *data;
    size_t size;
    if (!findData(key, &type, &data, &size) || type != TYPE_FLOAT) {
        return false;
    }

    CHECK_EQ(size, sizeof(*value));

    *value = *(float *)data;

    return true;
}

bool MetaData::findPointer(uint32_t key, void **value) {
    uint32_t type;
    const void *data;
    size_t size;
    if (!findData(key, &type, &data, &size) || type != TYPE_POINTER) {
        return false;
    }

    CHECK_EQ(size, sizeof(*value));

    *value = *(void **)data;

    return true;
}

bool MetaData::findRect(
        uint32_t key,
        int32_t *left, int32_t *top,
        int32_t *right, int32_t *bottom) {
    uint32_t type;
    const void *data;
    size_t size;
    if (!findData(key, &type, &data, &size) || type != TYPE_RECT) {
        return false;
    }

    CHECK_EQ(size, sizeof(Rect));

    const Rect *r = (const Rect *)data;
    *left = r->mLeft;
    *top = r->mTop;
    *right = r->mRight;
    *bottom = r->mBottom;

    return true;
}

bool MetaData::setData(
        uint32_t key, uint32_t type, const void *data, size_t size) {
    bool overwrote_existing = true;

    ssize_t i = mItems.indexOfKey(key);
    if (i < 0) {
        typed_data item;
        i = mItems.add(key, item);

        overwrote_existing = false;
    }

    typed_data &item = mItems.editValueAt(i);

    item.setData(type, data, size);

    return overwrote_existing;
}

bool MetaData::findData(uint32_t key, uint32_t *type,
                        const void **data, size_t *size) const {
    ssize_t i = mItems.indexOfKey(key);

    if (i < 0) {
        return false;
    }

    const typed_data &item = mItems.valueAt(i);

    item.getData(type, data, size);

    return true;
}

bool MetaData::hasData(uint32_t key) const {
    ssize_t i = mItems.indexOfKey(key);

    if (i < 0) {
        return false;
    }

    return true;
}

MetaData::typed_data::typed_data()
    : mType(0),
      mSize(0) {
}

MetaData::typed_data::~typed_data() {
    clear();
}

MetaData::typed_data::typed_data(const typed_data &from)
    : mType(from.mType),
      mSize(0) {
    allocateStorage(from.mSize);
    memcpy(storage(), from.storage(), mSize);
}

MetaData::typed_data &MetaData::typed_data::operator=(
        const MetaData::typed_data &from) {
    if (this != &from) {
        clear();
        mType = from.mType;
        allocateStorage(from.mSize);
        memcpy(storage(), from.storage(), mSize);
    }

    return *this;
}

void MetaData::typed_data::clear() {
    freeStorage();

    mType = 0;
}

void MetaData::typed_data::setData(
        uint32_t type, const void *data, size_t size) {
    clear();

    mType = type;
    allocateStorage(size);
    memcpy(storage(), data, size);
}

void MetaData::typed_data::getData(
        uint32_t *type, const void **data, size_t *size) const {
    *type = mType;
    *size = mSize;
    *data = storage();
}

void MetaData::typed_data::allocateStorage(size_t size) {
    mSize = size;

    if (usesReservoir()) {
        return;
    }

    u.ext_data = malloc(mSize);
}

void MetaData::typed_data::freeStorage() {
    if (!usesReservoir()) {
        if (u.ext_data) {
            free(u.ext_data);
            u.ext_data = NULL;
        }
    }

    mSize = 0;
}

String8 MetaData::typed_data::asString() const {
    String8 out;
    const void *data = storage();
    switch(mType) {
        case TYPE_NONE:
            out = String8::format("no type, size %zu)", mSize);
            break;
        case TYPE_C_STRING:
            out = String8::format("(char*) %s", (const char *)data);
            break;
        case TYPE_INT32:
            out = String8::format("(int32_t) %d", *(int32_t *)data);
            break;
        case TYPE_INT64:
            out = String8::format("(int64_t) %" PRId64, *(int64_t *)data);
            break;
        case TYPE_FLOAT:
            out = String8::format("(float) %f", *(float *)data);
            break;
        case TYPE_POINTER:
            out = String8::format("(void*) %p", *(void **)data);
            break;
        case TYPE_RECT:
        {
            const Rect *r = (const Rect *)data;
            out = String8::format("Rect(%d, %d, %d, %d)",
                                  r->mLeft, r->mTop, r->mRight, r->mBottom);
            break;
        }

        default:
            out = String8::format("(unknown type %d, size %zu)", mType, mSize);
            if (mSize <= 48) { // if it's less than three lines of hex data, dump it
                AString foo;
                hexdump(data, mSize, 0, &foo);
                out.append("\n");
                out.append(foo.c_str());
            }
            break;
    }
    return out;
}

static void MakeFourCCString(uint32_t x, char *s) {
    s[0] = x >> 24;
    s[1] = (x >> 16) & 0xff;
    s[2] = (x >> 8) & 0xff;
    s[3] = x & 0xff;
    s[4] = '\0';
}

void MetaData::dumpToLog() const {
    for (int i = mItems.size(); --i >= 0;) {
        int32_t key = mItems.keyAt(i);
        char cc[5];
        MakeFourCCString(key, cc);
        const typed_data &item = mItems.valueAt(i);
        ALOGI("%s: %s", cc, item.asString().string());
    }
}

}  // namespace android

