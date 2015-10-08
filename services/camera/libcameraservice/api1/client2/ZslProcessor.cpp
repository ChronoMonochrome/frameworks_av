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
 * Copyright (C) 2012 The Android Open Source Project
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

#define LOG_TAG "Camera2-ZslProcessor"
#define ATRACE_TAG ATRACE_TAG_CAMERA
//#define LOG_NDEBUG 0
//#define LOG_NNDEBUG 0

#ifdef LOG_NNDEBUG
#define ALOGVV(...) ALOGV(__VA_ARGS__)
#else
#define ALOGVV(...) ((void)0)
#endif

#include <inttypes.h>

#include <utils/Log.h>
#include <utils/Trace.h>
#include <gui/Surface.h>

#include "common/CameraDeviceBase.h"
#include "api1/Camera2Client.h"
#include "api1/client2/CaptureSequencer.h"
#include "api1/client2/ZslProcessor.h"

namespace android {
namespace camera2 {

ZslProcessor::ZslProcessor(
    sp<Camera2Client> client,
    wp<CaptureSequencer> sequencer):
        Thread(false),
        mState(RUNNING),
        mClient(client),
        mDevice(client->getCameraDevice()),
        mSequencer(sequencer),
        mId(client->getCameraId()),
        mZslBufferAvailable(false),
        mZslStreamId(NO_STREAM),
        mZslReprocessStreamId(NO_STREAM),
        mFrameListHead(0),
        mZslQueueHead(0),
        mZslQueueTail(0) {
    mZslQueue.insertAt(0, kZslBufferDepth);
    mFrameList.insertAt(0, kFrameListDepth);
    sp<CaptureSequencer> captureSequencer = mSequencer.promote();
    if (captureSequencer != 0) captureSequencer->setZslProcessor(this);
}

ZslProcessor::~ZslProcessor() {
    ALOGV("%s: Exit", __FUNCTION__);
    deleteStream();
}

void ZslProcessor::onFrameAvailable() {
    Mutex::Autolock l(mInputMutex);
    if (!mZslBufferAvailable) {
        mZslBufferAvailable = true;
        mZslBufferAvailableSignal.signal();
    }
}

void ZslProcessor::onFrameAvailable(int32_t /*requestId*/,
        const CameraMetadata &frame) {
    Mutex::Autolock l(mInputMutex);
    camera_metadata_ro_entry_t entry;
    entry = frame.find(ANDROID_SENSOR_TIMESTAMP);
    nsecs_t timestamp = entry.data.i64[0];
    (void)timestamp;
    ALOGVV("Got preview frame for timestamp %" PRId64, timestamp);

    if (mState != RUNNING) return;

    mFrameList.editItemAt(mFrameListHead) = frame;
    mFrameListHead = (mFrameListHead + 1) % kFrameListDepth;

    findMatchesLocked();
}

void ZslProcessor::onBufferReleased(buffer_handle_t *handle) {
    Mutex::Autolock l(mInputMutex);

    // Verify that the buffer is in our queue
    size_t i = 0;
    for (; i < mZslQueue.size(); i++) {
        if (&(mZslQueue[i].buffer.mGraphicBuffer->handle) == handle) break;
    }
    if (i == mZslQueue.size()) {
        ALOGW("%s: Released buffer %p not found in queue",
                __FUNCTION__, handle);
    }

    // Erase entire ZSL queue since we've now completed the capture and preview
    // is stopped.
    clearZslQueueLocked();

    mState = RUNNING;
}

status_t ZslProcessor::updateStream(const Parameters &params) {
    ATRACE_CALL();
    ALOGV("%s: Configuring ZSL streams", __FUNCTION__);
    status_t res;

    Mutex::Autolock l(mInputMutex);

    sp<Camera2Client> client = mClient.promote();
    if (client == 0) {
        ALOGE("%s: Camera %d: Client does not exist", __FUNCTION__, mId);
        return INVALID_OPERATION;
    }
    sp<CameraDeviceBase> device = mDevice.promote();
    if (device == 0) {
        ALOGE("%s: Camera %d: Device does not exist", __FUNCTION__, mId);
        return INVALID_OPERATION;
    }

    if (mZslConsumer == 0) {
        // Create CPU buffer queue endpoint
        sp<BufferQueue> bq = new BufferQueue();
        mZslConsumer = new BufferItemConsumer(bq,
            GRALLOC_USAGE_HW_CAMERA_ZSL,
            kZslBufferDepth);
        mZslConsumer->setFrameAvailableListener(this);
        mZslConsumer->setName(String8("Camera2Client::ZslConsumer"));
        mZslWindow = new Surface(bq);
    }

    if (mZslStreamId != NO_STREAM) {
        // Check if stream parameters have to change
        uint32_t currentWidth, currentHeight;
        res = device->getStreamInfo(mZslStreamId,
                &currentWidth, &currentHeight, 0);
        if (res != OK) {
            ALOGE("%s: Camera %d: Error querying capture output stream info: "
                    "%s (%d)", __FUNCTION__,
                    mId, strerror(-res), res);
            return res;
        }
        if (currentWidth != (uint32_t)params.fastInfo.arrayWidth ||
                currentHeight != (uint32_t)params.fastInfo.arrayHeight) {
            res = device->deleteReprocessStream(mZslReprocessStreamId);
            if (res != OK) {
                ALOGE("%s: Camera %d: Unable to delete old reprocess stream "
                        "for ZSL: %s (%d)", __FUNCTION__,
                        mId, strerror(-res), res);
                return res;
            }
            ALOGV("%s: Camera %d: Deleting stream %d since the buffer dimensions changed",
                __FUNCTION__, mId, mZslStreamId);
            res = device->deleteStream(mZslStreamId);
            if (res != OK) {
                ALOGE("%s: Camera %d: Unable to delete old output stream "
                        "for ZSL: %s (%d)", __FUNCTION__,
                        mId, strerror(-res), res);
                return res;
            }
            mZslStreamId = NO_STREAM;
        }
    }

    if (mZslStreamId == NO_STREAM) {
        // Create stream for HAL production
        // TODO: Sort out better way to select resolution for ZSL
        int streamType = params.quirks.useZslFormat ?
                (int)CAMERA2_HAL_PIXEL_FORMAT_ZSL :
                (int)HAL_PIXEL_FORMAT_IMPLEMENTATION_DEFINED;
        res = device->createStream(mZslWindow,
                params.fastInfo.arrayWidth, params.fastInfo.arrayHeight,
                streamType, 0,
                &mZslStreamId);
        if (res != OK) {
            ALOGE("%s: Camera %d: Can't create output stream for ZSL: "
                    "%s (%d)", __FUNCTION__, mId,
                    strerror(-res), res);
            return res;
        }
        res = device->createReprocessStreamFromStream(mZslStreamId,
                &mZslReprocessStreamId);
        if (res != OK) {
            ALOGE("%s: Camera %d: Can't create reprocess stream for ZSL: "
                    "%s (%d)", __FUNCTION__, mId,
                    strerror(-res), res);
            return res;
        }
    }
    client->registerFrameListener(Camera2Client::kPreviewRequestIdStart,
            Camera2Client::kPreviewRequestIdEnd,
            this);

    return OK;
}

status_t ZslProcessor::deleteStream() {
    ATRACE_CALL();
    status_t res;

    Mutex::Autolock l(mInputMutex);

    if (mZslStreamId != NO_STREAM) {
        sp<CameraDeviceBase> device = mDevice.promote();
        if (device == 0) {
            ALOGE("%s: Camera %d: Device does not exist", __FUNCTION__, mId);
            return INVALID_OPERATION;
        }

        clearZslQueueLocked();

        res = device->deleteReprocessStream(mZslReprocessStreamId);
        if (res != OK) {
            ALOGE("%s: Camera %d: Cannot delete ZSL reprocessing stream %d: "
                    "%s (%d)", __FUNCTION__, mId,
                    mZslReprocessStreamId, strerror(-res), res);
            return res;
        }

        mZslReprocessStreamId = NO_STREAM;
        res = device->deleteStream(mZslStreamId);
        if (res != OK) {
            ALOGE("%s: Camera %d: Cannot delete ZSL output stream %d: "
                    "%s (%d)", __FUNCTION__, mId,
                    mZslStreamId, strerror(-res), res);
            return res;
        }

        mZslWindow.clear();
        mZslConsumer.clear();

        mZslStreamId = NO_STREAM;
    }
    return OK;
}

int ZslProcessor::getStreamId() const {
    Mutex::Autolock l(mInputMutex);
    return mZslStreamId;
}

status_t ZslProcessor::pushToReprocess(int32_t requestId) {
    ALOGV("%s: Send in reprocess request with id %d",
            __FUNCTION__, requestId);
    Mutex::Autolock l(mInputMutex);
    status_t res;
    sp<Camera2Client> client = mClient.promote();

    if (client == 0) {
        ALOGE("%s: Camera %d: Client does not exist", __FUNCTION__, mId);
        return INVALID_OPERATION;
    }

    IF_ALOGV() {
        dumpZslQueue(-1);
    }

    if (mZslQueueTail != mZslQueueHead) {
        CameraMetadata request;
        size_t index = mZslQueueTail;
        while (index != mZslQueueHead) {
            if (!mZslQueue[index].frame.isEmpty()) {
                request = mZslQueue[index].frame;
                break;
            }
            index = (index + 1) % kZslBufferDepth;
        }
        if (index == mZslQueueHead) {
            ALOGV("%s: ZSL queue has no valid frames to send yet.",
                  __FUNCTION__);
            return NOT_ENOUGH_DATA;
        }
        // Verify that the frame is reasonable for reprocessing

        camera_metadata_entry_t entry;
        entry = request.find(ANDROID_CONTROL_AE_STATE);
        if (entry.count == 0) {
            ALOGE("%s: ZSL queue frame has no AE state field!",
                    __FUNCTION__);
            return BAD_VALUE;
        }
        if (entry.data.u8[0] != ANDROID_CONTROL_AE_STATE_CONVERGED &&
                entry.data.u8[0] != ANDROID_CONTROL_AE_STATE_LOCKED) {
            ALOGV("%s: ZSL queue frame AE state is %d, need full capture",
                    __FUNCTION__, entry.data.u8[0]);
            return NOT_ENOUGH_DATA;
        }

        buffer_handle_t *handle =
            &(mZslQueue[index].buffer.mGraphicBuffer->handle);

        uint8_t requestType = ANDROID_REQUEST_TYPE_REPROCESS;
        res = request.update(ANDROID_REQUEST_TYPE,
                &requestType, 1);
        int32_t inputStreams[1] =
                { mZslReprocessStreamId };
        if (res == OK) request.update(ANDROID_REQUEST_INPUT_STREAMS,
                inputStreams, 1);
        int32_t outputStreams[1] =
                { client->getCaptureStreamId() };
        if (res == OK) request.update(ANDROID_REQUEST_OUTPUT_STREAMS,
                outputStreams, 1);
        res = request.update(ANDROID_REQUEST_ID,
                &requestId, 1);

        if (res != OK ) {
            ALOGE("%s: Unable to update frame to a reprocess request", __FUNCTION__);
            return INVALID_OPERATION;
        }

        res = client->stopStream();
        if (res != OK) {
            ALOGE("%s: Camera %d: Unable to stop preview for ZSL capture: "
                "%s (%d)",
                __FUNCTION__, mId, strerror(-res), res);
            return INVALID_OPERATION;
        }
        // TODO: have push-and-clear be atomic
        res = client->getCameraDevice()->pushReprocessBuffer(mZslReprocessStreamId,
                handle, this);
        if (res != OK) {
            ALOGE("%s: Unable to push buffer for reprocessing: %s (%d)",
                    __FUNCTION__, strerror(-res), res);
            return res;
        }

        // Update JPEG settings
        {
            SharedParameters::Lock l(client->getParameters());
            res = l.mParameters.updateRequestJpeg(&request);
            if (res != OK) {
                ALOGE("%s: Camera %d: Unable to update JPEG entries of ZSL "
                        "capture request: %s (%d)", __FUNCTION__,
                        mId,
                        strerror(-res), res);
                return res;
            }
        }

        mLatestCapturedRequest = request;
        res = client->getCameraDevice()->capture(request);
        if (res != OK ) {
            ALOGE("%s: Unable to send ZSL reprocess request to capture: %s (%d)",
                    __FUNCTION__, strerror(-res), res);
            return res;
        }

        mState = LOCKED;
    } else {
        ALOGV("%s: No ZSL buffers yet", __FUNCTION__);
        return NOT_ENOUGH_DATA;
    }
    return OK;
}

status_t ZslProcessor::clearZslQueue() {
    Mutex::Autolock l(mInputMutex);
    // If in middle of capture, can't clear out queue
    if (mState == LOCKED) return OK;

    return clearZslQueueLocked();
}

status_t ZslProcessor::clearZslQueueLocked() {
    for (size_t i = 0; i < mZslQueue.size(); i++) {
        if (mZslQueue[i].buffer.mTimestamp != 0) {
            mZslConsumer->releaseBuffer(mZslQueue[i].buffer);
        }
        mZslQueue.replaceAt(i);
    }
    mZslQueueHead = 0;
    mZslQueueTail = 0;
    return OK;
}

void ZslProcessor::dump(int fd, const Vector<String16>& /*args*/) const {
    Mutex::Autolock l(mInputMutex);
    if (!mLatestCapturedRequest.isEmpty()) {
        String8 result("    Latest ZSL capture request:\n");
        write(fd, result.string(), result.size());
        mLatestCapturedRequest.dump(fd, 2, 6);
    } else {
        String8 result("    Latest ZSL capture request: none yet\n");
        write(fd, result.string(), result.size());
    }
    dumpZslQueue(fd);
}

bool ZslProcessor::threadLoop() {
    status_t res;

    {
        Mutex::Autolock l(mInputMutex);
        while (!mZslBufferAvailable) {
            res = mZslBufferAvailableSignal.waitRelative(mInputMutex,
                    kWaitDuration);
            if (res == TIMED_OUT) return true;
        }
        mZslBufferAvailable = false;
    }

    do {
        res = processNewZslBuffer();
    } while (res == OK);

    return true;
}

status_t ZslProcessor::processNewZslBuffer() {
    ATRACE_CALL();
    status_t res;
    sp<BufferItemConsumer> zslConsumer;
    {
        Mutex::Autolock l(mInputMutex);
        if (mZslConsumer == 0) return OK;
        zslConsumer = mZslConsumer;
    }
    ALOGVV("Trying to get next buffer");
    BufferItemConsumer::BufferItem item;
    res = zslConsumer->acquireBuffer(&item, 0);
    if (res != OK) {
        if (res != BufferItemConsumer::NO_BUFFER_AVAILABLE) {
            ALOGE("%s: Camera %d: Error receiving ZSL image buffer: "
                    "%s (%d)", __FUNCTION__,
                    mId, strerror(-res), res);
        } else {
            ALOGVV("  No buffer");
        }
        return res;
    }

    Mutex::Autolock l(mInputMutex);

    if (mState == LOCKED) {
        ALOGVV("In capture, discarding new ZSL buffers");
        zslConsumer->releaseBuffer(item);
        return OK;
    }

    ALOGVV("Got ZSL buffer: head: %d, tail: %d", mZslQueueHead, mZslQueueTail);

    if ( (mZslQueueHead + 1) % kZslBufferDepth == mZslQueueTail) {
        ALOGVV("Releasing oldest buffer");
        zslConsumer->releaseBuffer(mZslQueue[mZslQueueTail].buffer);
        mZslQueue.replaceAt(mZslQueueTail);
        mZslQueueTail = (mZslQueueTail + 1) % kZslBufferDepth;
    }

    ZslPair &queueHead = mZslQueue.editItemAt(mZslQueueHead);

    queueHead.buffer = item;
    queueHead.frame.release();

    mZslQueueHead = (mZslQueueHead + 1) % kZslBufferDepth;

    ALOGVV("  Acquired buffer, timestamp %" PRId64, queueHead.buffer.mTimestamp);

    findMatchesLocked();

    return OK;
}

void ZslProcessor::findMatchesLocked() {
    ALOGVV("Scanning");
    for (size_t i = 0; i < mZslQueue.size(); i++) {
        ZslPair &queueEntry = mZslQueue.editItemAt(i);
        nsecs_t bufferTimestamp = queueEntry.buffer.mTimestamp;
        IF_ALOGV() {
            camera_metadata_entry_t entry;
            nsecs_t frameTimestamp = 0;
            if (!queueEntry.frame.isEmpty()) {
                entry = queueEntry.frame.find(ANDROID_SENSOR_TIMESTAMP);
                frameTimestamp = entry.data.i64[0];
            }
            ALOGVV("   %d: b: %" PRId64 "\tf: %" PRId64, i,
                    bufferTimestamp, frameTimestamp );
        }
        if (queueEntry.frame.isEmpty() && bufferTimestamp != 0) {
            // Have buffer, no matching frame. Look for one
            for (size_t j = 0; j < mFrameList.size(); j++) {
                bool match = false;
                CameraMetadata &frame = mFrameList.editItemAt(j);
                if (!frame.isEmpty()) {
                    camera_metadata_entry_t entry;
                    entry = frame.find(ANDROID_SENSOR_TIMESTAMP);
                    if (entry.count == 0) {
                        ALOGE("%s: Can't find timestamp in frame!",
                                __FUNCTION__);
                        continue;
                    }
                    nsecs_t frameTimestamp = entry.data.i64[0];
                    if (bufferTimestamp == frameTimestamp) {
                        ALOGVV("%s: Found match %" PRId64, __FUNCTION__,
                                frameTimestamp);
                        match = true;
                    } else {
                        int64_t delta = abs(bufferTimestamp - frameTimestamp);
                        if ( delta < 1000000) {
                            ALOGVV("%s: Found close match %" PRId64 " (delta %" PRId64 ")",
                                    __FUNCTION__, bufferTimestamp, delta);
                            match = true;
                        }
                    }
                }
                if (match) {
                    queueEntry.frame.acquire(frame);
                    break;
                }
            }
        }
    }
}

void ZslProcessor::dumpZslQueue(int fd) const {
    String8 header("ZSL queue contents:");
    String8 indent("    ");
    ALOGV("%s", header.string());
    if (fd != -1) {
        header = indent + header + "\n";
        write(fd, header.string(), header.size());
    }
    for (size_t i = 0; i < mZslQueue.size(); i++) {
        const ZslPair &queueEntry = mZslQueue[i];
        nsecs_t bufferTimestamp = queueEntry.buffer.mTimestamp;
        camera_metadata_ro_entry_t entry;
        nsecs_t frameTimestamp = 0;
        int frameAeState = -1;
        if (!queueEntry.frame.isEmpty()) {
            entry = queueEntry.frame.find(ANDROID_SENSOR_TIMESTAMP);
            if (entry.count > 0) frameTimestamp = entry.data.i64[0];
            entry = queueEntry.frame.find(ANDROID_CONTROL_AE_STATE);
            if (entry.count > 0) frameAeState = entry.data.u8[0];
        }
        String8 result =
                String8::format("   %zu: b: %" PRId64 "\tf: %" PRId64 ", AE state: %d", i,
                        bufferTimestamp, frameTimestamp, frameAeState);
        ALOGV("%s", result.string());
        if (fd != -1) {
            result = indent + result + "\n";
            write(fd, result.string(), result.size());
        }

    }
}

}; // namespace camera2
}; // namespace android
