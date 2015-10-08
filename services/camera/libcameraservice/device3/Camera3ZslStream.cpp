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

#define LOG_TAG "Camera3-ZslStream"
#define ATRACE_TAG ATRACE_TAG_CAMERA
//#define LOG_NDEBUG 0

#include <inttypes.h>

#include <utils/Log.h>
#include <utils/Trace.h>
#include "Camera3ZslStream.h"

typedef android::RingBufferConsumer::PinnedBufferItem PinnedBufferItem;

namespace android {

namespace camera3 {

namespace {
struct TimestampFinder : public RingBufferConsumer::RingBufferComparator {
    typedef RingBufferConsumer::BufferInfo BufferInfo;

    enum {
        SELECT_I1 = -1,
        SELECT_I2 = 1,
        SELECT_NEITHER = 0,
    };

    TimestampFinder(nsecs_t timestamp) : mTimestamp(timestamp) {}
    ~TimestampFinder() {}

    template <typename T>
    static void swap(T& a, T& b) {
        T tmp = a;
        a = b;
        b = tmp;
    }

    /**
     * Try to find the best candidate for a ZSL buffer.
     * Match priority from best to worst:
     *  1) Timestamps match.
     *  2) Timestamp is closest to the needle (and lower).
     *  3) Timestamp is closest to the needle (and higher).
     *
     */
    virtual int compare(const BufferInfo *i1,
                        const BufferInfo *i2) const {
        // Try to select non-null object first.
        if (i1 == NULL) {
            return SELECT_I2;
        } else if (i2 == NULL) {
            return SELECT_I1;
        }

        // Best result: timestamp is identical
        if (i1->mTimestamp == mTimestamp) {
            return SELECT_I1;
        } else if (i2->mTimestamp == mTimestamp) {
            return SELECT_I2;
        }

        const BufferInfo* infoPtrs[2] = {
            i1,
            i2
        };
        int infoSelectors[2] = {
            SELECT_I1,
            SELECT_I2
        };

        // Order i1,i2 so that always i1.timestamp < i2.timestamp
        if (i1->mTimestamp > i2->mTimestamp) {
            swap(infoPtrs[0], infoPtrs[1]);
            swap(infoSelectors[0], infoSelectors[1]);
        }

        // Second best: closest (lower) timestamp
        if (infoPtrs[1]->mTimestamp < mTimestamp) {
            return infoSelectors[1];
        } else if (infoPtrs[0]->mTimestamp < mTimestamp) {
            return infoSelectors[0];
        }

        // Worst: closest (higher) timestamp
        return infoSelectors[0];

        /**
         * The above cases should cover all the possibilities,
         * and we get an 'empty' result only if the ring buffer
         * was empty itself
         */
    }

    const nsecs_t mTimestamp;
}; // struct TimestampFinder
} // namespace anonymous

Camera3ZslStream::Camera3ZslStream(int id, uint32_t width, uint32_t height,
        int depth) :
        Camera3OutputStream(id, CAMERA3_STREAM_BIDIRECTIONAL,
                            width, height,
                            HAL_PIXEL_FORMAT_IMPLEMENTATION_DEFINED),
        mDepth(depth) {

    sp<BufferQueue> bq = new BufferQueue();
    mProducer = new RingBufferConsumer(bq, GRALLOC_USAGE_HW_CAMERA_ZSL, depth);
    mConsumer = new Surface(bq);
}

Camera3ZslStream::~Camera3ZslStream() {
}

status_t Camera3ZslStream::getInputBufferLocked(camera3_stream_buffer *buffer) {
    ATRACE_CALL();

    status_t res;

    // TODO: potentially register from inputBufferLocked
    // this should be ok, registerBuffersLocked only calls getBuffer for now
    // register in output mode instead of input mode for ZSL streams.
    if (mState == STATE_IN_CONFIG || mState == STATE_IN_RECONFIG) {
        ALOGE("%s: Stream %d: Buffer registration for input streams"
              " not implemented (state %d)",
              __FUNCTION__, mId, mState);
        return INVALID_OPERATION;
    }

    if ((res = getBufferPreconditionCheckLocked()) != OK) {
        return res;
    }

    ANativeWindowBuffer* anb;
    int fenceFd;

    assert(mProducer != 0);

    sp<PinnedBufferItem> bufferItem;
    {
        List<sp<RingBufferConsumer::PinnedBufferItem> >::iterator it, end;
        it = mInputBufferQueue.begin();
        end = mInputBufferQueue.end();

        // Need to call enqueueInputBufferByTimestamp as a prerequisite
        if (it == end) {
            ALOGE("%s: Stream %d: No input buffer was queued",
                    __FUNCTION__, mId);
            return INVALID_OPERATION;
        }
        bufferItem = *it;
        mInputBufferQueue.erase(it);
    }

    anb = bufferItem->getBufferItem().mGraphicBuffer->getNativeBuffer();
    assert(anb != NULL);
    fenceFd = bufferItem->getBufferItem().mFence->dup();

    /**
     * FenceFD now owned by HAL except in case of error,
     * in which case we reassign it to acquire_fence
     */
    handoutBufferLocked(*buffer, &(anb->handle), /*acquireFence*/fenceFd,
                         /*releaseFence*/-1, CAMERA3_BUFFER_STATUS_OK);

    mBuffersInFlight.push_back(bufferItem);

    return OK;
}

status_t Camera3ZslStream::returnBufferCheckedLocked(
            const camera3_stream_buffer &buffer,
            nsecs_t timestamp,
            bool output,
            /*out*/
            sp<Fence> *releaseFenceOut) {

    if (output) {
        // Output stream path
        return Camera3OutputStream::returnBufferCheckedLocked(buffer,
                                                              timestamp,
                                                              output,
                                                              releaseFenceOut);
    }

    /**
     * Input stream path
     */
    bool bufferFound = false;
    sp<PinnedBufferItem> bufferItem;
    {
        // Find the buffer we are returning
        Vector<sp<PinnedBufferItem> >::iterator it, end;
        for (it = mBuffersInFlight.begin(), end = mBuffersInFlight.end();
             it != end;
             ++it) {

            const sp<PinnedBufferItem>& tmp = *it;
            ANativeWindowBuffer *anb =
                    tmp->getBufferItem().mGraphicBuffer->getNativeBuffer();
            if (anb != NULL && &(anb->handle) == buffer.buffer) {
                bufferFound = true;
                bufferItem = tmp;
                mBuffersInFlight.erase(it);
                break;
            }
        }
    }
    if (!bufferFound) {
        ALOGE("%s: Stream %d: Can't return buffer that wasn't sent to HAL",
              __FUNCTION__, mId);
        return INVALID_OPERATION;
    }

    int releaseFenceFd = buffer.release_fence;

    if (buffer.status == CAMERA3_BUFFER_STATUS_ERROR) {
        if (buffer.release_fence != -1) {
            ALOGE("%s: Stream %d: HAL should not set release_fence(%d) when "
                  "there is an error", __FUNCTION__, mId, buffer.release_fence);
            close(buffer.release_fence);
        }

        /**
         * Reassign release fence as the acquire fence incase of error
         */
        releaseFenceFd = buffer.acquire_fence;
    }

    /**
     * Unconditionally return buffer to the buffer queue.
     * - Fwk takes over the release_fence ownership
     */
    sp<Fence> releaseFence = new Fence(releaseFenceFd);
    bufferItem->getBufferItem().mFence = releaseFence;
    bufferItem.clear(); // dropping last reference unpins buffer

    *releaseFenceOut = releaseFence;

    return OK;
}

status_t Camera3ZslStream::returnInputBufferLocked(
        const camera3_stream_buffer &buffer) {
    ATRACE_CALL();

    status_t res = returnAnyBufferLocked(buffer, /*timestamp*/0,
                                         /*output*/false);

    return res;
}

void Camera3ZslStream::dump(int fd, const Vector<String16> &args) const {
    (void) args;

    String8 lines;
    lines.appendFormat("    Stream[%d]: ZSL\n", mId);
    write(fd, lines.string(), lines.size());

    Camera3IOStreamBase::dump(fd, args);

    lines = String8();
    lines.appendFormat("      Input buffers pending: %zu, in flight %zu\n",
            mInputBufferQueue.size(), mBuffersInFlight.size());
    write(fd, lines.string(), lines.size());
}

status_t Camera3ZslStream::enqueueInputBufferByTimestamp(
        nsecs_t timestamp,
        nsecs_t* actualTimestamp) {

    Mutex::Autolock l(mLock);

    TimestampFinder timestampFinder = TimestampFinder(timestamp);

    sp<RingBufferConsumer::PinnedBufferItem> pinnedBuffer =
            mProducer->pinSelectedBuffer(timestampFinder,
                                        /*waitForFence*/false);

    if (pinnedBuffer == 0) {
        ALOGE("%s: No ZSL buffers were available yet", __FUNCTION__);
        return NO_BUFFER_AVAILABLE;
    }

    nsecs_t actual = pinnedBuffer->getBufferItem().mTimestamp;

    if (actual != timestamp) {
        ALOGW("%s: ZSL buffer candidate search didn't find an exact match --"
              " requested timestamp = %" PRId64 ", actual timestamp = %" PRId64,
              __FUNCTION__, timestamp, actual);
    }

    mInputBufferQueue.push_back(pinnedBuffer);

    if (actualTimestamp != NULL) {
        *actualTimestamp = actual;
    }

    return OK;
}

status_t Camera3ZslStream::clearInputRingBuffer() {
    Mutex::Autolock l(mLock);

    mInputBufferQueue.clear();

    return mProducer->clear();
}

status_t Camera3ZslStream::setTransform(int /*transform*/) {
    ALOGV("%s: Not implemented", __FUNCTION__);
    return INVALID_OPERATION;
}

}; // namespace camera3

}; // namespace android
