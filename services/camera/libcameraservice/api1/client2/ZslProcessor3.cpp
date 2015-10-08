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

#define LOG_TAG "Camera2-ZslProcessor3"
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
#include "api1/client2/ZslProcessor3.h"
#include "device3/Camera3Device.h"

namespace android {
namespace camera2 {

ZslProcessor3::ZslProcessor3(
    sp<Camera2Client> client,
    wp<CaptureSequencer> sequencer):
        Thread(false),
        mState(RUNNING),
        mClient(client),
        mSequencer(sequencer),
        mId(client->getCameraId()),
        mZslStreamId(NO_STREAM),
        mFrameListHead(0),
        mZslQueueHead(0),
        mZslQueueTail(0) {
    mZslQueue.insertAt(0, kZslBufferDepth);
    mFrameList.insertAt(0, kFrameListDepth);
    sp<CaptureSequencer> captureSequencer = mSequencer.promote();
    if (captureSequencer != 0) captureSequencer->setZslProcessor(this);
}

ZslProcessor3::~ZslProcessor3() {
    ALOGV("%s: Exit", __FUNCTION__);
    deleteStream();
}

void ZslProcessor3::onFrameAvailable(int32_t /*requestId*/,
                                     const CameraMetadata &frame) {
    Mutex::Autolock l(mInputMutex);
    camera_metadata_ro_entry_t entry;
    entry = frame.find(ANDROID_SENSOR_TIMESTAMP);
    nsecs_t timestamp = entry.data.i64[0];
    (void)timestamp;
    ALOGVV("Got preview metadata for timestamp %" PRId64, timestamp);

    if (mState != RUNNING) return;

    mFrameList.editItemAt(mFrameListHead) = frame;
    mFrameListHead = (mFrameListHead + 1) % kFrameListDepth;
}

status_t ZslProcessor3::updateStream(const Parameters &params) {
    ATRACE_CALL();
    ALOGV("%s: Configuring ZSL streams", __FUNCTION__);
    status_t res;

    Mutex::Autolock l(mInputMutex);

    sp<Camera2Client> client = mClient.promote();
    if (client == 0) {
        ALOGE("%s: Camera %d: Client does not exist", __FUNCTION__, mId);
        return INVALID_OPERATION;
    }
    sp<Camera3Device> device =
        static_cast<Camera3Device*>(client->getCameraDevice().get());
    if (device == 0) {
        ALOGE("%s: Camera %d: Device does not exist", __FUNCTION__, mId);
        return INVALID_OPERATION;
    }

    if (mZslStreamId != NO_STREAM) {
        // Check if stream parameters have to change
        uint32_t currentWidth, currentHeight;
        res = device->getStreamInfo(mZslStreamId,
                &currentWidth, &currentHeight, 0);
        if (res != OK) {
            ALOGE("%s: Camera %d: Error querying capture output stream info: "
                    "%s (%d)", __FUNCTION__,
                    client->getCameraId(), strerror(-res), res);
            return res;
        }
        if (currentWidth != (uint32_t)params.fastInfo.arrayWidth ||
                currentHeight != (uint32_t)params.fastInfo.arrayHeight) {
            ALOGV("%s: Camera %d: Deleting stream %d since the buffer "
                  "dimensions changed",
                __FUNCTION__, client->getCameraId(), mZslStreamId);
            res = device->deleteStream(mZslStreamId);
            if (res == -EBUSY) {
                ALOGV("%s: Camera %d: Device is busy, call updateStream again "
                      " after it becomes idle", __FUNCTION__, mId);
                return res;
            } else if(res != OK) {
                ALOGE("%s: Camera %d: Unable to delete old output stream "
                        "for ZSL: %s (%d)", __FUNCTION__,
                        client->getCameraId(), strerror(-res), res);
                return res;
            }
            mZslStreamId = NO_STREAM;
        }
    }

    if (mZslStreamId == NO_STREAM) {
        // Create stream for HAL production
        // TODO: Sort out better way to select resolution for ZSL

        // Note that format specified internally in Camera3ZslStream
        res = device->createZslStream(
                params.fastInfo.arrayWidth, params.fastInfo.arrayHeight,
                kZslBufferDepth,
                &mZslStreamId,
                &mZslStream);
        if (res != OK) {
            ALOGE("%s: Camera %d: Can't create ZSL stream: "
                    "%s (%d)", __FUNCTION__, client->getCameraId(),
                    strerror(-res), res);
            return res;
        }
    }
    client->registerFrameListener(Camera2Client::kPreviewRequestIdStart,
            Camera2Client::kPreviewRequestIdEnd,
            this);

    return OK;
}

status_t ZslProcessor3::deleteStream() {
    ATRACE_CALL();
    status_t res;

    Mutex::Autolock l(mInputMutex);

    if (mZslStreamId != NO_STREAM) {
        sp<Camera2Client> client = mClient.promote();
        if (client == 0) {
            ALOGE("%s: Camera %d: Client does not exist", __FUNCTION__, mId);
            return INVALID_OPERATION;
        }

        sp<Camera3Device> device =
            reinterpret_cast<Camera3Device*>(client->getCameraDevice().get());
        if (device == 0) {
            ALOGE("%s: Camera %d: Device does not exist", __FUNCTION__, mId);
            return INVALID_OPERATION;
        }

        res = device->deleteStream(mZslStreamId);
        if (res != OK) {
            ALOGE("%s: Camera %d: Cannot delete ZSL output stream %d: "
                    "%s (%d)", __FUNCTION__, client->getCameraId(),
                    mZslStreamId, strerror(-res), res);
            return res;
        }

        mZslStreamId = NO_STREAM;
    }
    return OK;
}

int ZslProcessor3::getStreamId() const {
    Mutex::Autolock l(mInputMutex);
    return mZslStreamId;
}

status_t ZslProcessor3::pushToReprocess(int32_t requestId) {
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

    size_t metadataIdx;
    nsecs_t candidateTimestamp = getCandidateTimestampLocked(&metadataIdx);

    if (candidateTimestamp == -1) {
        ALOGE("%s: Could not find good candidate for ZSL reprocessing",
              __FUNCTION__);
        return NOT_ENOUGH_DATA;
    }

    res = mZslStream->enqueueInputBufferByTimestamp(candidateTimestamp,
                                                    /*actualTimestamp*/NULL);

    if (res == mZslStream->NO_BUFFER_AVAILABLE) {
        ALOGV("%s: No ZSL buffers yet", __FUNCTION__);
        return NOT_ENOUGH_DATA;
    } else if (res != OK) {
        ALOGE("%s: Unable to push buffer for reprocessing: %s (%d)",
                __FUNCTION__, strerror(-res), res);
        return res;
    }

    {
        CameraMetadata request = mFrameList[metadataIdx];

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

        uint8_t requestType = ANDROID_REQUEST_TYPE_REPROCESS;
        res = request.update(ANDROID_REQUEST_TYPE,
                &requestType, 1);
        int32_t inputStreams[1] =
                { mZslStreamId };
        if (res == OK) request.update(ANDROID_REQUEST_INPUT_STREAMS,
                inputStreams, 1);
        // TODO: Shouldn't we also update the latest preview frame?
        int32_t outputStreams[1] =
                { client->getCaptureStreamId() };
        if (res == OK) request.update(ANDROID_REQUEST_OUTPUT_STREAMS,
                outputStreams, 1);
        res = request.update(ANDROID_REQUEST_ID,
                &requestId, 1);

        if (res != OK ) {
            ALOGE("%s: Unable to update frame to a reprocess request",
                  __FUNCTION__);
            return INVALID_OPERATION;
        }

        res = client->stopStream();
        if (res != OK) {
            ALOGE("%s: Camera %d: Unable to stop preview for ZSL capture: "
                "%s (%d)",
                __FUNCTION__, client->getCameraId(), strerror(-res), res);
            return INVALID_OPERATION;
        }

        // Update JPEG settings
        {
            SharedParameters::Lock l(client->getParameters());
            res = l.mParameters.updateRequestJpeg(&request);
            if (res != OK) {
                ALOGE("%s: Camera %d: Unable to update JPEG entries of ZSL "
                        "capture request: %s (%d)", __FUNCTION__,
                        client->getCameraId(),
                        strerror(-res), res);
                return res;
            }
        }

        mLatestCapturedRequest = request;
        res = client->getCameraDevice()->capture(request);
        if (res != OK ) {
            ALOGE("%s: Unable to send ZSL reprocess request to capture: %s"
                  " (%d)", __FUNCTION__, strerror(-res), res);
            return res;
        }

        mState = LOCKED;
    }

    return OK;
}

status_t ZslProcessor3::clearZslQueue() {
    Mutex::Autolock l(mInputMutex);
    // If in middle of capture, can't clear out queue
    if (mState == LOCKED) return OK;

    return clearZslQueueLocked();
}

status_t ZslProcessor3::clearZslQueueLocked() {
    if (mZslStream != 0) {
        return mZslStream->clearInputRingBuffer();
    }
    return OK;
}

void ZslProcessor3::dump(int fd, const Vector<String16>& /*args*/) const {
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

bool ZslProcessor3::threadLoop() {
    // TODO: remove dependency on thread. For now, shut thread down right
    // away.
    return false;
}

void ZslProcessor3::dumpZslQueue(int fd) const {
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

nsecs_t ZslProcessor3::getCandidateTimestampLocked(size_t* metadataIdx) const {
    /**
     * Find the smallest timestamp we know about so far
     * - ensure that aeState is either converged or locked
     */

    size_t idx = 0;
    nsecs_t minTimestamp = -1;

    size_t emptyCount = mFrameList.size();

    for (size_t j = 0; j < mFrameList.size(); j++) {
        const CameraMetadata &frame = mFrameList[j];
        if (!frame.isEmpty()) {

            emptyCount--;

            camera_metadata_ro_entry_t entry;
            entry = frame.find(ANDROID_SENSOR_TIMESTAMP);
            if (entry.count == 0) {
                ALOGE("%s: Can't find timestamp in frame!",
                        __FUNCTION__);
                continue;
            }
            nsecs_t frameTimestamp = entry.data.i64[0];
            if (minTimestamp > frameTimestamp || minTimestamp == -1) {

                entry = frame.find(ANDROID_CONTROL_AE_STATE);

                if (entry.count == 0) {
                    /**
                     * This is most likely a HAL bug. The aeState field is
                     * mandatory, so it should always be in a metadata packet.
                     */
                    ALOGW("%s: ZSL queue frame has no AE state field!",
                            __FUNCTION__);
                    continue;
                }
                if (entry.data.u8[0] != ANDROID_CONTROL_AE_STATE_CONVERGED &&
                        entry.data.u8[0] != ANDROID_CONTROL_AE_STATE_LOCKED) {
                    ALOGVV("%s: ZSL queue frame AE state is %d, need "
                           "full capture",  __FUNCTION__, entry.data.u8[0]);
                    continue;
                }

                minTimestamp = frameTimestamp;
                idx = j;
            }

            ALOGVV("%s: Saw timestamp %" PRId64, __FUNCTION__, frameTimestamp);
        }
    }

    if (emptyCount == mFrameList.size()) {
        /**
         * This could be mildly bad and means our ZSL was triggered before
         * there were any frames yet received by the camera framework.
         *
         * This is a fairly corner case which can happen under:
         * + a user presses the shutter button real fast when the camera starts
         *     (startPreview followed immediately by takePicture).
         * + burst capture case (hitting shutter button as fast possible)
         *
         * If this happens in steady case (preview running for a while, call
         *     a single takePicture) then this might be a fwk bug.
         */
        ALOGW("%s: ZSL queue has no metadata frames", __FUNCTION__);
    }

    ALOGV("%s: Candidate timestamp %" PRId64 " (idx %zu), empty frames: %zu",
          __FUNCTION__, minTimestamp, idx, emptyCount);

    if (metadataIdx) {
        *metadataIdx = idx;
    }

    return minTimestamp;
}

void ZslProcessor3::onBufferAcquired(const BufferInfo& /*bufferInfo*/) {
    // Intentionally left empty
    // Although theoretically we could use this to get better dump info
}

void ZslProcessor3::onBufferReleased(const BufferInfo& bufferInfo) {
    Mutex::Autolock l(mInputMutex);

    // ignore output buffers
    if (bufferInfo.mOutput) {
        return;
    }

    // TODO: Verify that the buffer is in our queue by looking at timestamp
    // theoretically unnecessary unless we change the following assumptions:
    // -- only 1 buffer reprocessed at a time (which is the case now)

    // Erase entire ZSL queue since we've now completed the capture and preview
    // is stopped.
    //
    // We need to guarantee that if we do two back-to-back captures,
    // the second won't use a buffer that's older/the same as the first, which
    // is theoretically possible if we don't clear out the queue and the
    // selection criteria is something like 'newest'. Clearing out the queue
    // on a completed capture ensures we'll only use new data.
    ALOGV("%s: Memory optimization, clearing ZSL queue",
          __FUNCTION__);
    clearZslQueueLocked();

    // Required so we accept more ZSL requests
    mState = RUNNING;
}

}; // namespace camera2
}; // namespace android
