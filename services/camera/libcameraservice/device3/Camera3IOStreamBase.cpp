#define INT64_MAX 9223372036854775807LL
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

#define LOG_TAG "Camera3-IOStreamBase"
#define ATRACE_TAG ATRACE_TAG_CAMERA
//#define LOG_NDEBUG 0

#include <inttypes.h>

#include <utils/Log.h>
#include <utils/Trace.h>
#include "device3/Camera3IOStreamBase.h"
#include "device3/StatusTracker.h"

namespace android {

namespace camera3 {

Camera3IOStreamBase::Camera3IOStreamBase(int id, camera3_stream_type_t type,
        uint32_t width, uint32_t height, size_t maxSize, int format) :
        Camera3Stream(id, type,
                width, height, maxSize, format),
        mTotalBufferCount(0),
        mDequeuedBufferCount(0),
        mFrameCount(0),
        mLastTimestamp(0) {

    mCombinedFence = new Fence();

    if (maxSize > 0 && format != HAL_PIXEL_FORMAT_BLOB) {
        ALOGE("%s: Bad format for size-only stream: %d", __FUNCTION__,
                format);
        mState = STATE_ERROR;
    }
}

Camera3IOStreamBase::~Camera3IOStreamBase() {
    disconnectLocked();
}

bool Camera3IOStreamBase::hasOutstandingBuffersLocked() const {
    nsecs_t signalTime = mCombinedFence->getSignalTime();
    ALOGV("%s: Stream %d: Has %zu outstanding buffers,"
            " buffer signal time is %" PRId64,
            __FUNCTION__, mId, mDequeuedBufferCount, signalTime);
    if (mDequeuedBufferCount > 0 || signalTime == INT64_MAX) {
        return true;
    }
    return false;
}

void Camera3IOStreamBase::dump(int fd, const Vector<String16> &args) const {
    (void) args;
    String8 lines;
    lines.appendFormat("      State: %d\n", mState);
    lines.appendFormat("      Dims: %d x %d, format 0x%x\n",
            camera3_stream::width, camera3_stream::height,
            camera3_stream::format);
    lines.appendFormat("      Max size: %zu\n", mMaxSize);
    lines.appendFormat("      Usage: %d, max HAL buffers: %d\n",
            camera3_stream::usage, camera3_stream::max_buffers);
    lines.appendFormat("      Frames produced: %d, last timestamp: %" PRId64 " ns\n",
            mFrameCount, mLastTimestamp);
    lines.appendFormat("      Total buffers: %zu, currently dequeued: %zu\n",
            mTotalBufferCount, mDequeuedBufferCount);
    write(fd, lines.string(), lines.size());
}

status_t Camera3IOStreamBase::configureQueueLocked() {
    status_t res;

    switch (mState) {
        case STATE_IN_RECONFIG:
            res = disconnectLocked();
            if (res != OK) {
                return res;
            }
            break;
        case STATE_IN_CONFIG:
            // OK
            break;
        default:
            ALOGE("%s: Bad state: %d", __FUNCTION__, mState);
            return INVALID_OPERATION;
    }

    return OK;
}

size_t Camera3IOStreamBase::getBufferCountLocked() {
    return mTotalBufferCount;
}

status_t Camera3IOStreamBase::disconnectLocked() {
    switch (mState) {
        case STATE_IN_RECONFIG:
        case STATE_CONFIGURED:
            // OK
            break;
        default:
            // No connection, nothing to do
            ALOGV("%s: Stream %d: Already disconnected",
                  __FUNCTION__, mId);
            return -ENOTCONN;
    }

    if (mDequeuedBufferCount > 0) {
        ALOGE("%s: Can't disconnect with %zu buffers still dequeued!",
                __FUNCTION__, mDequeuedBufferCount);
        return INVALID_OPERATION;
    }

   return OK;
}

void Camera3IOStreamBase::handoutBufferLocked(camera3_stream_buffer &buffer,
                                              buffer_handle_t *handle,
                                              int acquireFence,
                                              int releaseFence,
                                              camera3_buffer_status_t status) {
    /**
     * Note that all fences are now owned by HAL.
     */

    // Handing out a raw pointer to this object. Increment internal refcount.
    incStrong(this);
    buffer.stream = this;
    buffer.buffer = handle;
    buffer.acquire_fence = acquireFence;
    buffer.release_fence = releaseFence;
    buffer.status = status;

    // Inform tracker about becoming busy
    if (mDequeuedBufferCount == 0 && mState != STATE_IN_CONFIG &&
            mState != STATE_IN_RECONFIG) {
        sp<StatusTracker> statusTracker = mStatusTracker.promote();
        if (statusTracker != 0) {
            statusTracker->markComponentActive(mStatusId);
        }
    }
    mDequeuedBufferCount++;
}

status_t Camera3IOStreamBase::getBufferPreconditionCheckLocked() const {
    // Allow dequeue during IN_[RE]CONFIG for registration
    if (mState != STATE_CONFIGURED &&
            mState != STATE_IN_CONFIG && mState != STATE_IN_RECONFIG) {
        ALOGE("%s: Stream %d: Can't get buffers in unconfigured state %d",
                __FUNCTION__, mId, mState);
        return INVALID_OPERATION;
    }

    // Only limit dequeue amount when fully configured
    if (mState == STATE_CONFIGURED &&
            mDequeuedBufferCount == camera3_stream::max_buffers) {
        ALOGE("%s: Stream %d: Already dequeued maximum number of simultaneous"
                " buffers (%d)", __FUNCTION__, mId,
                camera3_stream::max_buffers);
        return INVALID_OPERATION;
    }

    return OK;
}

status_t Camera3IOStreamBase::returnBufferPreconditionCheckLocked() const {
    // Allow buffers to be returned in the error state, to allow for disconnect
    // and in the in-config states for registration
    if (mState == STATE_CONSTRUCTED) {
        ALOGE("%s: Stream %d: Can't return buffers in unconfigured state %d",
                __FUNCTION__, mId, mState);
        return INVALID_OPERATION;
    }
    if (mDequeuedBufferCount == 0) {
        ALOGE("%s: Stream %d: No buffers outstanding to return", __FUNCTION__,
                mId);
        return INVALID_OPERATION;
    }

    return OK;
}

status_t Camera3IOStreamBase::returnAnyBufferLocked(
        const camera3_stream_buffer &buffer,
        nsecs_t timestamp,
        bool output) {
    status_t res;

    // returnBuffer may be called from a raw pointer, not a sp<>, and we'll be
    // decrementing the internal refcount next. In case this is the last ref, we
    // might get destructed on the decStrong(), so keep an sp around until the
    // end of the call - otherwise have to sprinkle the decStrong on all exit
    // points.
    sp<Camera3IOStreamBase> keepAlive(this);
    decStrong(this);

    if ((res = returnBufferPreconditionCheckLocked()) != OK) {
        return res;
    }

    sp<Fence> releaseFence;
    res = returnBufferCheckedLocked(buffer, timestamp, output,
                                    &releaseFence);
    // Res may be an error, but we still want to decrement our owned count
    // to enable clean shutdown. So we'll just return the error but otherwise
    // carry on

    if (releaseFence != 0) {
        mCombinedFence = Fence::merge(mName, mCombinedFence, releaseFence);
    }

    mDequeuedBufferCount--;
    if (mDequeuedBufferCount == 0 && mState != STATE_IN_CONFIG &&
            mState != STATE_IN_RECONFIG) {
        ALOGV("%s: Stream %d: All buffers returned; now idle", __FUNCTION__,
                mId);
        sp<StatusTracker> statusTracker = mStatusTracker.promote();
        if (statusTracker != 0) {
            statusTracker->markComponentIdle(mStatusId, mCombinedFence);
        }
    }

    mBufferReturnedSignal.signal();

    if (output) {
        mLastTimestamp = timestamp;
    }

    return res;
}



}; // namespace camera3

}; // namespace android
