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

#define LOG_TAG "Camera2ClientBase"
#define ATRACE_TAG ATRACE_TAG_CAMERA
//#define LOG_NDEBUG 0

#include <inttypes.h>

#include <utils/Log.h>
#include <utils/Trace.h>

#include <cutils/properties.h>
#include <gui/Surface.h>
#include <gui/Surface.h>

#include "common/Camera2ClientBase.h"

#include "api2/CameraDeviceClient.h"

#include "CameraDeviceFactory.h"

namespace android {
using namespace camera2;

static int getCallingPid() {
    return IPCThreadState::self()->getCallingPid();
}

// Interface used by CameraService

template <typename TClientBase>
Camera2ClientBase<TClientBase>::Camera2ClientBase(
        const sp<CameraService>& cameraService,
        const sp<TCamCallbacks>& remoteCallback,
        const String16& clientPackageName,
        int cameraId,
        int cameraFacing,
        int clientPid,
        uid_t clientUid,
        int servicePid):
        TClientBase(cameraService, remoteCallback, clientPackageName,
                cameraId, cameraFacing, clientPid, clientUid, servicePid),
        mSharedCameraCallbacks(remoteCallback)
{
    ALOGI("Camera %d: Opened", cameraId);

    mDevice = CameraDeviceFactory::createDevice(cameraId);
    LOG_ALWAYS_FATAL_IF(mDevice == 0, "Device should never be NULL here.");
}

template <typename TClientBase>
status_t Camera2ClientBase<TClientBase>::checkPid(const char* checkLocation)
        const {

    int callingPid = getCallingPid();
    if (callingPid == TClientBase::mClientPid) return NO_ERROR;

    ALOGE("%s: attempt to use a locked camera from a different process"
            " (old pid %d, new pid %d)", checkLocation, TClientBase::mClientPid, callingPid);
    return PERMISSION_DENIED;
}

template <typename TClientBase>
status_t Camera2ClientBase<TClientBase>::initialize(camera_module_t *module) {
    ATRACE_CALL();
    ALOGV("%s: Initializing client for camera %d", __FUNCTION__,
          TClientBase::mCameraId);
    status_t res;

    // Verify ops permissions
    res = TClientBase::startCameraOps();
    if (res != OK) {
        return res;
    }

    if (mDevice == NULL) {
        ALOGE("%s: Camera %d: No device connected",
                __FUNCTION__, TClientBase::mCameraId);
        return NO_INIT;
    }

    res = mDevice->initialize(module);
    if (res != OK) {
        ALOGE("%s: Camera %d: unable to initialize device: %s (%d)",
                __FUNCTION__, TClientBase::mCameraId, strerror(-res), res);
        return res;
    }

    res = mDevice->setNotifyCallback(this);

    return OK;
}

template <typename TClientBase>
Camera2ClientBase<TClientBase>::~Camera2ClientBase() {
    ATRACE_CALL();

    TClientBase::mDestructionStarted = true;

    TClientBase::finishCameraOps();

    disconnect();

    ALOGI("Closed Camera %d", TClientBase::mCameraId);
}

template <typename TClientBase>
status_t Camera2ClientBase<TClientBase>::dump(int fd,
                                              const Vector<String16>& args) {
    String8 result;
    result.appendFormat("Camera2ClientBase[%d] (%p) PID: %d, dump:\n",
            TClientBase::mCameraId,
            TClientBase::getRemoteCallback()->asBinder().get(),
            TClientBase::mClientPid);
    result.append("  State: ");

    write(fd, result.string(), result.size());
    // TODO: print dynamic/request section from most recent requests

    return dumpDevice(fd, args);
}

template <typename TClientBase>
status_t Camera2ClientBase<TClientBase>::dumpDevice(
                                                int fd,
                                                const Vector<String16>& args) {
    String8 result;

    result = "  Device dump:\n";
    write(fd, result.string(), result.size());

    if (!mDevice.get()) {
        result = "  *** Device is detached\n";
        write(fd, result.string(), result.size());
        return NO_ERROR;
    }

    status_t res = mDevice->dump(fd, args);
    if (res != OK) {
        result = String8::format("   Error dumping device: %s (%d)",
                strerror(-res), res);
        write(fd, result.string(), result.size());
    }

    return NO_ERROR;
}

// ICameraClient2BaseUser interface


template <typename TClientBase>
void Camera2ClientBase<TClientBase>::disconnect() {
    ATRACE_CALL();
    Mutex::Autolock icl(mBinderSerializationLock);

    // Allow both client and the media server to disconnect at all times
    int callingPid = getCallingPid();
    if (callingPid != TClientBase::mClientPid &&
        callingPid != TClientBase::mServicePid) return;

    ALOGV("Camera %d: Shutting down", TClientBase::mCameraId);

    detachDevice();

    CameraService::BasicClient::disconnect();

    ALOGV("Camera %d: Shut down complete complete", TClientBase::mCameraId);
}

template <typename TClientBase>
void Camera2ClientBase<TClientBase>::detachDevice() {
    if (mDevice == 0) return;
    mDevice->disconnect();

    mDevice.clear();

    ALOGV("Camera %d: Detach complete", TClientBase::mCameraId);
}

template <typename TClientBase>
status_t Camera2ClientBase<TClientBase>::connect(
        const sp<TCamCallbacks>& client) {
    ATRACE_CALL();
    ALOGV("%s: E", __FUNCTION__);
    Mutex::Autolock icl(mBinderSerializationLock);

    if (TClientBase::mClientPid != 0 &&
        getCallingPid() != TClientBase::mClientPid) {

        ALOGE("%s: Camera %d: Connection attempt from pid %d; "
                "current locked to pid %d",
                __FUNCTION__,
                TClientBase::mCameraId,
                getCallingPid(),
                TClientBase::mClientPid);
        return BAD_VALUE;
    }

    TClientBase::mClientPid = getCallingPid();

    TClientBase::mRemoteCallback = client;
    mSharedCameraCallbacks = client;

    return OK;
}

/** Device-related methods */

template <typename TClientBase>
void Camera2ClientBase<TClientBase>::notifyError(int errorCode, int arg1,
                                                 int arg2) {
    ALOGE("Error condition %d reported by HAL, arguments %d, %d", errorCode,
          arg1, arg2);
}

template <typename TClientBase>
void Camera2ClientBase<TClientBase>::notifyIdle() {
    ALOGV("Camera device is now idle");
}

template <typename TClientBase>
void Camera2ClientBase<TClientBase>::notifyShutter(int requestId,
                                                   nsecs_t timestamp) {
    (void)requestId;
    (void)timestamp;

    ALOGV("%s: Shutter notification for request id %d at time %" PRId64,
            __FUNCTION__, requestId, timestamp);
}

template <typename TClientBase>
void Camera2ClientBase<TClientBase>::notifyAutoFocus(uint8_t newState,
                                                     int triggerId) {
    (void)newState;
    (void)triggerId;

    ALOGV("%s: Autofocus state now %d, last trigger %d",
          __FUNCTION__, newState, triggerId);

}

template <typename TClientBase>
void Camera2ClientBase<TClientBase>::notifyAutoExposure(uint8_t newState,
                                                        int triggerId) {
    (void)newState;
    (void)triggerId;

    ALOGV("%s: Autoexposure state now %d, last trigger %d",
            __FUNCTION__, newState, triggerId);
}

template <typename TClientBase>
void Camera2ClientBase<TClientBase>::notifyAutoWhitebalance(uint8_t newState,
                                                            int triggerId) {
    (void)newState;
    (void)triggerId;

    ALOGV("%s: Auto-whitebalance state now %d, last trigger %d",
            __FUNCTION__, newState, triggerId);
}

template <typename TClientBase>
int Camera2ClientBase<TClientBase>::getCameraId() const {
    return TClientBase::mCameraId;
}

template <typename TClientBase>
const sp<CameraDeviceBase>& Camera2ClientBase<TClientBase>::getCameraDevice() {
    return mDevice;
}

template <typename TClientBase>
const sp<CameraService>& Camera2ClientBase<TClientBase>::getCameraService() {
    return TClientBase::mCameraService;
}

template <typename TClientBase>
Camera2ClientBase<TClientBase>::SharedCameraCallbacks::Lock::Lock(
        SharedCameraCallbacks &client) :

        mRemoteCallback(client.mRemoteCallback),
        mSharedClient(client) {

    mSharedClient.mRemoteCallbackLock.lock();
}

template <typename TClientBase>
Camera2ClientBase<TClientBase>::SharedCameraCallbacks::Lock::~Lock() {
    mSharedClient.mRemoteCallbackLock.unlock();
}

template <typename TClientBase>
Camera2ClientBase<TClientBase>::SharedCameraCallbacks::SharedCameraCallbacks(
        const sp<TCamCallbacks>&client) :

        mRemoteCallback(client) {
}

template <typename TClientBase>
typename Camera2ClientBase<TClientBase>::SharedCameraCallbacks&
Camera2ClientBase<TClientBase>::SharedCameraCallbacks::operator=(
        const sp<TCamCallbacks>&client) {

    Mutex::Autolock l(mRemoteCallbackLock);
    mRemoteCallback = client;
    return *this;
}

template <typename TClientBase>
void Camera2ClientBase<TClientBase>::SharedCameraCallbacks::clear() {
    Mutex::Autolock l(mRemoteCallbackLock);
    mRemoteCallback.clear();
}

template class Camera2ClientBase<CameraService::ProClient>;
template class Camera2ClientBase<CameraService::Client>;
template class Camera2ClientBase<CameraDeviceClientBase>;

} // namespace android
