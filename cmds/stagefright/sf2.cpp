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
 * Copyright (C) 2010 The Android Open Source Project
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
#define LOG_TAG "sf2"
#include <inttypes.h>
#include <utils/Log.h>

#include <binder/ProcessState.h>

#include <media/stagefright/foundation/hexdump.h>
#include <media/stagefright/foundation/ABuffer.h>
#include <media/stagefright/foundation/ADebug.h>
#include <media/stagefright/foundation/ALooper.h>
#include <media/stagefright/foundation/AMessage.h>

#include <media/stagefright/ACodec.h>
#include <media/stagefright/DataSource.h>
#include <media/stagefright/MediaBuffer.h>
#include <media/stagefright/MediaDefs.h>
#include <media/stagefright/MediaExtractor.h>
#include <media/stagefright/MediaSource.h>
#include <media/stagefright/MetaData.h>
#include <media/stagefright/NativeWindowWrapper.h>
#include <media/stagefright/Utils.h>

#include <gui/SurfaceComposerClient.h>

#include "include/ESDS.h"

using namespace android;

struct Controller : public AHandler {
    Controller(const char *uri, bool decodeAudio,
               const sp<Surface> &surface, bool renderToSurface)
        : mURI(uri),
          mDecodeAudio(decodeAudio),
          mSurface(surface),
          mRenderToSurface(renderToSurface),
          mCodec(new ACodec),
          mIsVorbis(false) {
        CHECK(!mDecodeAudio || mSurface == NULL);
    }

    void startAsync() {
        (new AMessage(kWhatStart, id()))->post();
    }

protected:
    virtual ~Controller() {
    }

    virtual void onMessageReceived(const sp<AMessage> &msg) {
        switch (msg->what()) {
            case kWhatStart:
            {
#if 1
                mDecodeLooper = looper();
#else
                mDecodeLooper = new ALooper;
                mDecodeLooper->setName("sf2 decode looper");
                mDecodeLooper->start();
#endif

                sp<DataSource> dataSource =
                    DataSource::CreateFromURI(mURI.c_str());

                sp<MediaExtractor> extractor =
                    MediaExtractor::Create(dataSource);

                for (size_t i = 0; i < extractor->countTracks(); ++i) {
                    sp<MetaData> meta = extractor->getTrackMetaData(i);

                    const char *mime;
                    CHECK(meta->findCString(kKeyMIMEType, &mime));

                    if (!strncasecmp(mDecodeAudio ? "audio/" : "video/",
                                     mime, 6)) {
                        mSource = extractor->getTrack(i);

                        if (!strcasecmp(mime, MEDIA_MIMETYPE_AUDIO_VORBIS)) {
                            mIsVorbis = true;
                        } else {
                            mIsVorbis = false;
                        }
                        break;
                    }
                }
                CHECK(mSource != NULL);

                CHECK_EQ(mSource->start(), (status_t)OK);

                mDecodeLooper->registerHandler(mCodec);

                mCodec->setNotificationMessage(
                        new AMessage(kWhatCodecNotify, id()));

                sp<AMessage> format = makeFormat(mSource->getFormat());

                if (mSurface != NULL) {
                    format->setObject(
                            "native-window", new NativeWindowWrapper(mSurface));
                }

                mCodec->initiateSetup(format);

                mCSDIndex = 0;
                mStartTimeUs = ALooper::GetNowUs();
                mNumOutputBuffersReceived = 0;
                mTotalBytesReceived = 0;
                mLeftOverBuffer = NULL;
                mFinalResult = OK;
                mSeekState = SEEK_NONE;

                // (new AMessage(kWhatSeek, id()))->post(5000000ll);
                break;
            }

            case kWhatSeek:
            {
                printf("+");
                fflush(stdout);

                CHECK(mSeekState == SEEK_NONE
                        || mSeekState == SEEK_FLUSH_COMPLETED);

                if (mLeftOverBuffer != NULL) {
                    mLeftOverBuffer->release();
                    mLeftOverBuffer = NULL;
                }

                mSeekState = SEEK_FLUSHING;
                mSeekTimeUs = 30000000ll;

                mCodec->signalFlush();
                break;
            }

            case kWhatStop:
            {
                if (mLeftOverBuffer != NULL) {
                    mLeftOverBuffer->release();
                    mLeftOverBuffer = NULL;
                }

                CHECK_EQ(mSource->stop(), (status_t)OK);
                mSource.clear();

                mCodec->initiateShutdown();
                break;
            }

            case kWhatCodecNotify:
            {
                int32_t what;
                CHECK(msg->findInt32("what", &what));

                if (what == ACodec::kWhatFillThisBuffer) {
                    onFillThisBuffer(msg);
                } else if (what == ACodec::kWhatDrainThisBuffer) {
                    if ((mNumOutputBuffersReceived++ % 16) == 0) {
                        printf(".");
                        fflush(stdout);
                    }

                    onDrainThisBuffer(msg);
                } else if (what == ACodec::kWhatEOS
                        || what == ACodec::kWhatError) {
                    printf((what == ACodec::kWhatEOS) ? "$\n" : "E\n");

                    int64_t delayUs = ALooper::GetNowUs() - mStartTimeUs;

                    if (mDecodeAudio) {
                        printf("%" PRId64 " bytes received. %.2f KB/sec\n",
                               mTotalBytesReceived,
                               mTotalBytesReceived * 1E6 / 1024 / delayUs);
                    } else {
                        printf("%d frames decoded, %.2f fps. %" PRId64 " bytes "
                               "received. %.2f KB/sec\n",
                               mNumOutputBuffersReceived,
                               mNumOutputBuffersReceived * 1E6 / delayUs,
                               mTotalBytesReceived,
                               mTotalBytesReceived * 1E6 / 1024 / delayUs);
                    }

                    (new AMessage(kWhatStop, id()))->post();
                } else if (what == ACodec::kWhatFlushCompleted) {
                    mSeekState = SEEK_FLUSH_COMPLETED;
                    mCodec->signalResume();

                    (new AMessage(kWhatSeek, id()))->post(5000000ll);
                } else if (what == ACodec::kWhatOutputFormatChanged) {
                } else if (what == ACodec::kWhatShutdownCompleted) {
                    mDecodeLooper->unregisterHandler(mCodec->id());

                    if (mDecodeLooper != looper()) {
                        mDecodeLooper->stop();
                    }

                    looper()->stop();
                } else if (what == ACodec::kWhatError) {
                    ALOGE("something went wrong, codec reported an error.");

                    printf("E\n");

                    (new AMessage(kWhatStop, id()))->post();
                }
                break;
            }

            default:
                TRESPASS();
                break;
        }
    }

private:
    enum {
        kWhatStart             = 'strt',
        kWhatStop              = 'stop',
        kWhatCodecNotify       = 'noti',
        kWhatSeek              = 'seek',
    };

    sp<ALooper> mDecodeLooper;

    AString mURI;
    bool mDecodeAudio;
    sp<Surface> mSurface;
    bool mRenderToSurface;
    sp<ACodec> mCodec;
    sp<MediaSource> mSource;
    bool mIsVorbis;

    Vector<sp<ABuffer> > mCSD;
    size_t mCSDIndex;

    MediaBuffer *mLeftOverBuffer;
    status_t mFinalResult;

    int64_t mStartTimeUs;
    int32_t mNumOutputBuffersReceived;
    int64_t mTotalBytesReceived;

    enum SeekState {
        SEEK_NONE,
        SEEK_FLUSHING,
        SEEK_FLUSH_COMPLETED,
    };
    SeekState mSeekState;
    int64_t mSeekTimeUs;

    sp<AMessage> makeFormat(const sp<MetaData> &meta) {
        CHECK(mCSD.isEmpty());

        const char *mime;
        CHECK(meta->findCString(kKeyMIMEType, &mime));

        sp<AMessage> msg = new AMessage;
        msg->setString("mime", mime);

        if (!strncasecmp("video/", mime, 6)) {
            int32_t width, height;
            CHECK(meta->findInt32(kKeyWidth, &width));
            CHECK(meta->findInt32(kKeyHeight, &height));

            msg->setInt32("width", width);
            msg->setInt32("height", height);
        } else {
            CHECK(!strncasecmp("audio/", mime, 6));

            int32_t numChannels, sampleRate;
            CHECK(meta->findInt32(kKeyChannelCount, &numChannels));
            CHECK(meta->findInt32(kKeySampleRate, &sampleRate));

            msg->setInt32("channel-count", numChannels);
            msg->setInt32("sample-rate", sampleRate);

            int32_t isADTS;
            if (meta->findInt32(kKeyIsADTS, &isADTS) && isADTS != 0) {
                msg->setInt32("is-adts", true);
            }
        }

        uint32_t type;
        const void *data;
        size_t size;
        if (meta->findData(kKeyAVCC, &type, &data, &size)) {
            // Parse the AVCDecoderConfigurationRecord

            const uint8_t *ptr = (const uint8_t *)data;

            CHECK(size >= 7);
            CHECK_EQ((unsigned)ptr[0], 1u);  // configurationVersion == 1
            uint8_t profile = ptr[1];
            uint8_t level = ptr[3];

            // There is decodable content out there that fails the following
            // assertion, let's be lenient for now...
            // CHECK((ptr[4] >> 2) == 0x3f);  // reserved

            size_t lengthSize = 1 + (ptr[4] & 3);

            // commented out check below as H264_QVGA_500_NO_AUDIO.3gp
            // violates it...
            // CHECK((ptr[5] >> 5) == 7);  // reserved

            size_t numSeqParameterSets = ptr[5] & 31;

            ptr += 6;
            size -= 6;

            sp<ABuffer> buffer = new ABuffer(1024);
            buffer->setRange(0, 0);

            for (size_t i = 0; i < numSeqParameterSets; ++i) {
                CHECK(size >= 2);
                size_t length = U16_AT(ptr);

                ptr += 2;
                size -= 2;

                CHECK(size >= length);

                memcpy(buffer->data() + buffer->size(), "\x00\x00\x00\x01", 4);
                memcpy(buffer->data() + buffer->size() + 4, ptr, length);
                buffer->setRange(0, buffer->size() + 4 + length);

                ptr += length;
                size -= length;
            }

            buffer->meta()->setInt32("csd", true);
            mCSD.push(buffer);

            buffer = new ABuffer(1024);
            buffer->setRange(0, 0);

            CHECK(size >= 1);
            size_t numPictureParameterSets = *ptr;
            ++ptr;
            --size;

            for (size_t i = 0; i < numPictureParameterSets; ++i) {
                CHECK(size >= 2);
                size_t length = U16_AT(ptr);

                ptr += 2;
                size -= 2;

                CHECK(size >= length);

                memcpy(buffer->data() + buffer->size(), "\x00\x00\x00\x01", 4);
                memcpy(buffer->data() + buffer->size() + 4, ptr, length);
                buffer->setRange(0, buffer->size() + 4 + length);

                ptr += length;
                size -= length;
            }

            buffer->meta()->setInt32("csd", true);
            mCSD.push(buffer);

            msg->setBuffer("csd", buffer);
        } else if (meta->findData(kKeyESDS, &type, &data, &size)) {
            ESDS esds((const char *)data, size);
            CHECK_EQ(esds.InitCheck(), (status_t)OK);

            const void *codec_specific_data;
            size_t codec_specific_data_size;
            esds.getCodecSpecificInfo(
                    &codec_specific_data, &codec_specific_data_size);

            sp<ABuffer> buffer = new ABuffer(codec_specific_data_size);

            memcpy(buffer->data(), codec_specific_data,
                   codec_specific_data_size);

            buffer->meta()->setInt32("csd", true);
            mCSD.push(buffer);
        } else if (meta->findData(kKeyVorbisInfo, &type, &data, &size)) {
            sp<ABuffer> buffer = new ABuffer(size);
            memcpy(buffer->data(), data, size);

            buffer->meta()->setInt32("csd", true);
            mCSD.push(buffer);

            CHECK(meta->findData(kKeyVorbisBooks, &type, &data, &size));

            buffer = new ABuffer(size);
            memcpy(buffer->data(), data, size);

            buffer->meta()->setInt32("csd", true);
            mCSD.push(buffer);
        }

        int32_t maxInputSize;
        if (meta->findInt32(kKeyMaxInputSize, &maxInputSize)) {
            msg->setInt32("max-input-size", maxInputSize);
        }

        return msg;
    }

    void onFillThisBuffer(const sp<AMessage> &msg) {
        sp<AMessage> reply;
        CHECK(msg->findMessage("reply", &reply));

        if (mSource == NULL || mSeekState == SEEK_FLUSHING) {
            reply->setInt32("err", ERROR_END_OF_STREAM);
            reply->post();
            return;
        }

        sp<ABuffer> outBuffer;
        CHECK(msg->findBuffer("buffer", &outBuffer));

        if (mCSDIndex < mCSD.size()) {
            outBuffer = mCSD.editItemAt(mCSDIndex++);
            outBuffer->meta()->setInt64("timeUs", 0);
        } else {
            size_t sizeLeft = outBuffer->capacity();
            outBuffer->setRange(0, 0);

            int32_t n = 0;

            for (;;) {
                MediaBuffer *inBuffer;

                if (mLeftOverBuffer != NULL) {
                    inBuffer = mLeftOverBuffer;
                    mLeftOverBuffer = NULL;
                } else if (mFinalResult != OK) {
                    break;
                } else {
                    MediaSource::ReadOptions options;
                    if (mSeekState == SEEK_FLUSH_COMPLETED) {
                        options.setSeekTo(mSeekTimeUs);
                        mSeekState = SEEK_NONE;
                    }
                    status_t err = mSource->read(&inBuffer, &options);

                    if (err != OK) {
                        mFinalResult = err;
                        break;
                    }
                }

                size_t sizeNeeded = inBuffer->range_length();
                if (mIsVorbis) {
                    // Vorbis data is suffixed with the number of
                    // valid samples on the page.
                    sizeNeeded += sizeof(int32_t);
                }

                if (sizeNeeded > sizeLeft) {
                    if (outBuffer->size() == 0) {
                        ALOGE("Unable to fit even a single input buffer of size %d.",
                             sizeNeeded);
                    }
                    CHECK_GT(outBuffer->size(), 0u);

                    mLeftOverBuffer = inBuffer;
                    break;
                }

                ++n;

                if (outBuffer->size() == 0) {
                    int64_t timeUs;
                    CHECK(inBuffer->meta_data()->findInt64(kKeyTime, &timeUs));

                    outBuffer->meta()->setInt64("timeUs", timeUs);
                }

                memcpy(outBuffer->data() + outBuffer->size(),
                       (const uint8_t *)inBuffer->data()
                        + inBuffer->range_offset(),
                       inBuffer->range_length());

                if (mIsVorbis) {
                    int32_t numPageSamples;
                    if (!inBuffer->meta_data()->findInt32(
                                kKeyValidSamples, &numPageSamples)) {
                        numPageSamples = -1;
                    }

                    memcpy(outBuffer->data()
                            + outBuffer->size() + inBuffer->range_length(),
                           &numPageSamples, sizeof(numPageSamples));
                }

                outBuffer->setRange(
                        0, outBuffer->size() + sizeNeeded);

                sizeLeft -= sizeNeeded;

                inBuffer->release();
                inBuffer = NULL;

                break;  // Don't coalesce
            }

            ALOGV("coalesced %d input buffers", n);

            if (outBuffer->size() == 0) {
                CHECK_NE(mFinalResult, (status_t)OK);

                reply->setInt32("err", mFinalResult);
                reply->post();
                return;
            }
        }

        reply->setBuffer("buffer", outBuffer);
        reply->post();
    }

    void onDrainThisBuffer(const sp<AMessage> &msg) {
        sp<ABuffer> buffer;
        CHECK(msg->findBuffer("buffer", &buffer));

        mTotalBytesReceived += buffer->size();

        sp<AMessage> reply;
        CHECK(msg->findMessage("reply", &reply));

        if (mRenderToSurface) {
            reply->setInt32("render", 1);
        }

        reply->post();
    }

    DISALLOW_EVIL_CONSTRUCTORS(Controller);
};

static void usage(const char *me) {
    fprintf(stderr, "usage: %s\n", me);
    fprintf(stderr, "       -h(elp)\n");
    fprintf(stderr, "       -a(udio)\n");

    fprintf(stderr,
            "       -S(urface) Allocate output buffers on a surface.\n"
            "       -R(ender)  Render surface-allocated buffers.\n");
}

int main(int argc, char **argv) {
    android::ProcessState::self()->startThreadPool();

    bool decodeAudio = false;
    bool useSurface = false;
    bool renderToSurface = false;

    int res;
    while ((res = getopt(argc, argv, "haSR")) >= 0) {
        switch (res) {
            case 'a':
                decodeAudio = true;
                break;

            case 'S':
                useSurface = true;
                break;

            case 'R':
                renderToSurface = true;
                break;

            case '?':
            case 'h':
            default:
            {
                usage(argv[0]);
                return 1;
            }
        }
    }

    argc -= optind;
    argv += optind;

    if (argc != 1) {
        usage(argv[-optind]);
        return 1;
    }

    //DataSource::RegisterDefaultSniffers();

    sp<ALooper> looper = new ALooper;
    looper->setName("sf2");

    sp<SurfaceComposerClient> composerClient;
    sp<SurfaceControl> control;
    sp<Surface> surface;

    if (!decodeAudio && useSurface) {
        composerClient = new SurfaceComposerClient;
        CHECK_EQ(composerClient->initCheck(), (status_t)OK);

        control = composerClient->createSurface(
                String8("A Surface"),
                1280,
                800,
                PIXEL_FORMAT_RGB_565,
                0);

        CHECK(control != NULL);
        CHECK(control->isValid());

        SurfaceComposerClient::openGlobalTransaction();
        CHECK_EQ(control->setLayer(INT_MAX), (status_t)OK);
        CHECK_EQ(control->show(), (status_t)OK);
        SurfaceComposerClient::closeGlobalTransaction();

        surface = control->getSurface();
        CHECK(surface != NULL);

        CHECK_EQ((status_t)OK,
                 native_window_api_connect(
                     surface.get(), NATIVE_WINDOW_API_MEDIA));
    }

    sp<Controller> controller =
        new Controller(argv[0], decodeAudio, surface, renderToSurface);

    looper->registerHandler(controller);

    controller->startAsync();

    CHECK_EQ(looper->start(true /* runOnCallingThread */), (status_t)OK);

    looper->unregisterHandler(controller->id());

    if (!decodeAudio && useSurface) {
        CHECK_EQ((status_t)OK,
                 native_window_api_disconnect(
                     surface.get(), NATIVE_WINDOW_API_MEDIA));

        composerClient->dispose();
    }

    return 0;
}

