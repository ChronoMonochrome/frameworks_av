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
#define LOG_TAG "RingBufferConsumer"
#define ATRACE_TAG ATRACE_TAG_GRAPHICS

#include <inttypes.h>

#include <utils/Log.h>

#include <gui/RingBufferConsumer.h>

#define BI_LOGV(x, ...) ALOGV("[%s] " x, mName.string(), ##__VA_ARGS__)
#define BI_LOGD(x, ...) ALOGD("[%s] " x, mName.string(), ##__VA_ARGS__)
#define BI_LOGI(x, ...) ALOGI("[%s] " x, mName.string(), ##__VA_ARGS__)
#define BI_LOGW(x, ...) ALOGW("[%s] " x, mName.string(), ##__VA_ARGS__)
#define BI_LOGE(x, ...) ALOGE("[%s] " x, mName.string(), ##__VA_ARGS__)

#define PRIu8                   "u"             /* uint8_t */
#define PRIu16                  "u"             /* uint16_t */
#define PRIu32                  "u"             /* uint32_t */
#define PRIu64                  "llu"           /* uint64_t */
#define PRId8                   "d"             /* int8_t */
#define PRId16                  "d"             /* int16_t */
#define PRId32                  "d"             /* int32_t */

#undef assert
#define assert(x) ALOG_ASSERT((x), #x)

typedef android::RingBufferConsumer::PinnedBufferItem PinnedBufferItem;

namespace android {

RingBufferConsumer::RingBufferConsumer(const sp<IGraphicBufferConsumer>& consumer,
        uint32_t consumerUsage,
        int bufferCount) :
    ConsumerBase(consumer),
    mBufferCount(bufferCount)
{
    mConsumer->setConsumerUsageBits(consumerUsage);
    mConsumer->setMaxAcquiredBufferCount(bufferCount);

    assert(bufferCount > 0);
}

RingBufferConsumer::~RingBufferConsumer() {
}

void RingBufferConsumer::setName(const String8& name) {
    Mutex::Autolock _l(mMutex);
    mName = name;
    mConsumer->setConsumerName(name);
}

sp<PinnedBufferItem> RingBufferConsumer::pinSelectedBuffer(
        const RingBufferComparator& filter,
        bool waitForFence) {

    sp<PinnedBufferItem> pinnedBuffer;

    {
        List<RingBufferItem>::iterator it, end, accIt;
        BufferInfo acc, cur;
        BufferInfo* accPtr = NULL;

        Mutex::Autolock _l(mMutex);

        for (it = mBufferItemList.begin(), end = mBufferItemList.end();
             it != end;
             ++it) {

            const RingBufferItem& item = *it;

            cur.mCrop = item.mCrop;
            cur.mTransform = item.mTransform;
            cur.mScalingMode = item.mScalingMode;
            cur.mTimestamp = item.mTimestamp;
            cur.mFrameNumber = item.mFrameNumber;
            cur.mPinned = item.mPinCount > 0;

            int ret = filter.compare(accPtr, &cur);

            if (ret == 0) {
                accPtr = NULL;
            } else if (ret > 0) {
                acc = cur;
                accPtr = &acc;
                accIt = it;
            } // else acc = acc
        }

        if (!accPtr) {
            return NULL;
        }

        pinnedBuffer = new PinnedBufferItem(this, *accIt);
        pinBufferLocked(pinnedBuffer->getBufferItem());

    } // end scope of mMutex autolock

    if (waitForFence) {
        status_t err = pinnedBuffer->getBufferItem().mFence->waitForever(
                "RingBufferConsumer::pinSelectedBuffer");
        if (err != OK) {
            BI_LOGE("Failed to wait for fence of acquired buffer: %s (%d)",
                    strerror(-err), err);
        }
    }

    return pinnedBuffer;
}

status_t RingBufferConsumer::clear() {

    status_t err;
    Mutex::Autolock _l(mMutex);

    BI_LOGV("%s", __FUNCTION__);

    // Avoid annoying log warnings by returning early
    if (mBufferItemList.size() == 0) {
        return OK;
    }

    do {
        size_t pinnedFrames = 0;
        err = releaseOldestBufferLocked(&pinnedFrames);

        if (err == NO_BUFFER_AVAILABLE) {
            assert(pinnedFrames == mBufferItemList.size());
            break;
        }

        if (err == NOT_ENOUGH_DATA) {
            // Fine. Empty buffer item list.
            break;
        }

        if (err != OK) {
            BI_LOGE("Clear failed, could not release buffer");
            return err;
        }

    } while(true);

    return OK;
}

void RingBufferConsumer::pinBufferLocked(const BufferItem& item) {
    List<RingBufferItem>::iterator it, end;

    for (it = mBufferItemList.begin(), end = mBufferItemList.end();
         it != end;
         ++it) {

        RingBufferItem& find = *it;
        if (item.mGraphicBuffer == find.mGraphicBuffer) {
            find.mPinCount++;
            break;
        }
    }

    if (it == end) {
        BI_LOGE("Failed to pin buffer (timestamp %" PRId64 ", framenumber %" PRIu64 ")",
                 item.mTimestamp, item.mFrameNumber);
    } else {
        BI_LOGV("Pinned buffer (frame %" PRIu64 ", timestamp %" PRId64 ")",
                item.mFrameNumber, item.mTimestamp);
    }
}

status_t RingBufferConsumer::releaseOldestBufferLocked(size_t* pinnedFrames) {
    status_t err = OK;

    List<RingBufferItem>::iterator it, end, accIt;

    it = mBufferItemList.begin();
    end = mBufferItemList.end();
    accIt = end;

    if (it == end) {
        /**
         * This is fine. We really care about being able to acquire a buffer
         * successfully after this function completes, not about it releasing
         * some buffer.
         */
        BI_LOGV("%s: No buffers yet acquired, can't release anything",
              __FUNCTION__);
        return NOT_ENOUGH_DATA;
    }

    for (; it != end; ++it) {
        RingBufferItem& find = *it;

        if (find.mPinCount > 0) {
            if (pinnedFrames != NULL) {
                ++(*pinnedFrames);
            }
            // Filter out pinned frame when searching for buffer to release
            continue;
        }

        if (find.mTimestamp < accIt->mTimestamp || accIt == end) {
            accIt = it;
        }
    }

    if (accIt != end) {
        RingBufferItem& item = *accIt;

        // In case the object was never pinned, pass the acquire fence
        // back to the release fence. If the fence was already waited on,
        // it'll just be a no-op to wait on it again.

        // item.mGraphicBuffer was populated with the proper graphic-buffer
        // at acquire even if it was previously acquired
        err = addReleaseFenceLocked(item.mBuf,
                item.mGraphicBuffer, item.mFence);

        if (err != OK) {
            BI_LOGE("Failed to add release fence to buffer "
                    "(timestamp %" PRId64 ", framenumber %" PRIu64,
                    item.mTimestamp, item.mFrameNumber);
            return err;
        }

        BI_LOGV("Attempting to release buffer timestamp %" PRId64 ", frame %" PRIu64,
                item.mTimestamp, item.mFrameNumber);

        // item.mGraphicBuffer was populated with the proper graphic-buffer
        // at acquire even if it was previously acquired
        err = releaseBufferLocked(item.mBuf, item.mGraphicBuffer,
                                  EGL_NO_DISPLAY,
                                  EGL_NO_SYNC_KHR);
        if (err != OK) {
            BI_LOGE("Failed to release buffer: %s (%d)",
                    strerror(-err), err);
            return err;
        }

        BI_LOGV("Buffer timestamp %" PRId64 ", frame %" PRIu64 " evicted",
                item.mTimestamp, item.mFrameNumber);

        size_t currentSize = mBufferItemList.size();
        mBufferItemList.erase(accIt);
        assert(mBufferItemList.size() == currentSize - 1);
    } else {
        BI_LOGW("All buffers pinned, could not find any to release");
        return NO_BUFFER_AVAILABLE;

    }

    return OK;
}

void RingBufferConsumer::onFrameAvailable() {
    status_t err;

    {
        Mutex::Autolock _l(mMutex);

        /**
         * Release oldest frame
         */
        if (mBufferItemList.size() >= (size_t)mBufferCount) {
            err = releaseOldestBufferLocked(/*pinnedFrames*/NULL);
            assert(err != NOT_ENOUGH_DATA);

            // TODO: implement the case for NO_BUFFER_AVAILABLE
            assert(err != NO_BUFFER_AVAILABLE);
            if (err != OK) {
                return;
            }
            // TODO: in unpinBuffer rerun this routine if we had buffers
            // we could've locked but didn't because there was no space
        }

        RingBufferItem& item = *mBufferItemList.insert(mBufferItemList.end(),
                                                       RingBufferItem());

        /**
         * Acquire new frame
         */
        err = acquireBufferLocked(&item, 0);
        if (err != OK) {
            if (err != NO_BUFFER_AVAILABLE) {
                BI_LOGE("Error acquiring buffer: %s (%d)", strerror(err), err);
            }

            mBufferItemList.erase(--mBufferItemList.end());
            return;
        }

        BI_LOGV("New buffer acquired (timestamp %" PRId64 "), "
                "buffer items %zu out of %d",
                item.mTimestamp,
                mBufferItemList.size(), mBufferCount);

        item.mGraphicBuffer = mSlots[item.mBuf].mGraphicBuffer;
    } // end of mMutex lock

    ConsumerBase::onFrameAvailable();
}

void RingBufferConsumer::unpinBuffer(const BufferItem& item) {
    Mutex::Autolock _l(mMutex);

    List<RingBufferItem>::iterator it, end, accIt;

    for (it = mBufferItemList.begin(), end = mBufferItemList.end();
         it != end;
         ++it) {

        RingBufferItem& find = *it;
        if (item.mGraphicBuffer == find.mGraphicBuffer) {
            status_t res = addReleaseFenceLocked(item.mBuf,
                    item.mGraphicBuffer, item.mFence);

            if (res != OK) {
                BI_LOGE("Failed to add release fence to buffer "
                        "(timestamp %" PRId64 ", framenumber %" PRIu64,
                        item.mTimestamp, item.mFrameNumber);
                return;
            }

            find.mPinCount--;
            break;
        }
    }

    if (it == end) {
        // This should never happen. If it happens, we have a bug.
        BI_LOGE("Failed to unpin buffer (timestamp %" PRId64 ", framenumber %" PRIu64 ")",
                 item.mTimestamp, item.mFrameNumber);
    } else {
        BI_LOGV("Unpinned buffer (timestamp %" PRId64 ", framenumber %" PRIu64 ")",
                 item.mTimestamp, item.mFrameNumber);
    }
}

status_t RingBufferConsumer::setDefaultBufferSize(uint32_t w, uint32_t h) {
    Mutex::Autolock _l(mMutex);
    return mConsumer->setDefaultBufferSize(w, h);
}

status_t RingBufferConsumer::setDefaultBufferFormat(uint32_t defaultFormat) {
    Mutex::Autolock _l(mMutex);
    return mConsumer->setDefaultBufferFormat(defaultFormat);
}

status_t RingBufferConsumer::setConsumerUsage(uint32_t usage) {
    Mutex::Autolock _l(mMutex);
    return mConsumer->setConsumerUsageBits(usage);
}

} // namespace android
