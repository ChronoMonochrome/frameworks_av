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

//#define LOG_NDEBUG 0
#define LOG_TAG "TimedTextPlayer"
#include <utils/Log.h>

#include <inttypes.h>
#include <limits.h>
#include <media/stagefright/foundation/ADebug.h>
#include <media/stagefright/foundation/AMessage.h>
#include <media/stagefright/timedtext/TimedTextDriver.h>
#include <media/stagefright/MediaErrors.h>
#include <media/MediaPlayerInterface.h>

#include "TimedTextPlayer.h"

#include "TimedTextSource.h"

namespace android {

// Event should be fired a bit earlier considering the processing time till
// application actually gets the notification message.
static const int64_t kAdjustmentProcessingTimeUs = 100000ll;
static const int64_t kMaxDelayUs = 5000000ll;
static const int64_t kWaitTimeUsToRetryRead = 100000ll;
static const int64_t kInvalidTimeUs = INT_MIN;

TimedTextPlayer::TimedTextPlayer(const wp<MediaPlayerBase> &listener)
    : mListener(listener),
      mSource(NULL),
      mPendingSeekTimeUs(kInvalidTimeUs),
      mPaused(false),
      mSendSubtitleGeneration(0) {
}

TimedTextPlayer::~TimedTextPlayer() {
    if (mSource != NULL) {
        mSource->stop();
        mSource.clear();
        mSource = NULL;
    }
}

void TimedTextPlayer::start() {
    (new AMessage(kWhatStart, id()))->post();
}

void TimedTextPlayer::pause() {
    (new AMessage(kWhatPause, id()))->post();
}

void TimedTextPlayer::resume() {
    (new AMessage(kWhatResume, id()))->post();
}

void TimedTextPlayer::seekToAsync(int64_t timeUs) {
    sp<AMessage> msg = new AMessage(kWhatSeek, id());
    msg->setInt64("seekTimeUs", timeUs);
    msg->post();
}

void TimedTextPlayer::setDataSource(sp<TimedTextSource> source) {
    sp<AMessage> msg = new AMessage(kWhatSetSource, id());
    msg->setObject("source", source);
    msg->post();
}

void TimedTextPlayer::onMessageReceived(const sp<AMessage> &msg) {
    switch (msg->what()) {
        case kWhatPause: {
            mPaused = true;
            break;
        }
        case kWhatResume: {
            mPaused = false;
            if (mPendingSeekTimeUs != kInvalidTimeUs) {
                seekToAsync(mPendingSeekTimeUs);
                mPendingSeekTimeUs = kInvalidTimeUs;
            } else {
                doRead();
            }
            break;
        }
        case kWhatStart: {
            sp<MediaPlayerBase> listener = mListener.promote();
            if (listener == NULL) {
                ALOGE("Listener is NULL when kWhatStart is received.");
                break;
            }
            mPaused = false;
            mPendingSeekTimeUs = kInvalidTimeUs;
            int32_t positionMs = 0;
            listener->getCurrentPosition(&positionMs);
            int64_t seekTimeUs = positionMs * 1000ll;

            notifyListener();
            mSendSubtitleGeneration++;
            doSeekAndRead(seekTimeUs);
            break;
        }
        case kWhatRetryRead: {
            int32_t generation = -1;
            CHECK(msg->findInt32("generation", &generation));
            if (generation != mSendSubtitleGeneration) {
                // Drop obsolete msg.
                break;
            }
            int64_t seekTimeUs;
            int seekMode;
            if (msg->findInt64("seekTimeUs", &seekTimeUs) &&
                msg->findInt32("seekMode", &seekMode)) {
                MediaSource::ReadOptions options;
                options.setSeekTo(
                    seekTimeUs,
                    static_cast<MediaSource::ReadOptions::SeekMode>(seekMode));
                doRead(&options);
            } else {
                doRead();
            }
            break;
        }
        case kWhatSeek: {
            int64_t seekTimeUs = kInvalidTimeUs;
            // Clear a displayed timed text before seeking.
            notifyListener();
            msg->findInt64("seekTimeUs", &seekTimeUs);
            if (seekTimeUs == kInvalidTimeUs) {
                sp<MediaPlayerBase> listener = mListener.promote();
                if (listener != NULL) {
                    int32_t positionMs = 0;
                    listener->getCurrentPosition(&positionMs);
                    seekTimeUs = positionMs * 1000ll;
                }
            }
            if (mPaused) {
                mPendingSeekTimeUs = seekTimeUs;
                break;
            }
            mSendSubtitleGeneration++;
            doSeekAndRead(seekTimeUs);
            break;
        }
        case kWhatSendSubtitle: {
            int32_t generation;
            CHECK(msg->findInt32("generation", &generation));
            if (generation != mSendSubtitleGeneration) {
                // Drop obsolete msg.
                break;
            }
            // If current time doesn't reach to the fire time,
            // re-post the message with the adjusted delay time.
            int64_t fireTimeUs = kInvalidTimeUs;
            if (msg->findInt64("fireTimeUs", &fireTimeUs)) {
                // TODO: check if fireTimeUs is not kInvalidTimeUs.
                int64_t delayUs = delayUsFromCurrentTime(fireTimeUs);
                if (delayUs > 0) {
                    msg->post(delayUs);
                    break;
                }
            }
            sp<RefBase> obj;
            if (msg->findObject("subtitle", &obj)) {
                sp<ParcelEvent> parcelEvent;
                parcelEvent = static_cast<ParcelEvent*>(obj.get());
                notifyListener(&(parcelEvent->parcel));
                doRead();
            } else {
                notifyListener();
            }
            break;
        }
        case kWhatSetSource: {
            mSendSubtitleGeneration++;
            sp<RefBase> obj;
            msg->findObject("source", &obj);
            if (mSource != NULL) {
                mSource->stop();
                mSource.clear();
                mSource = NULL;
            }
            // null source means deselect track.
            if (obj == NULL) {
                mPendingSeekTimeUs = kInvalidTimeUs;
                mPaused = false;
                notifyListener();
                break;
            }
            mSource = static_cast<TimedTextSource*>(obj.get());
            status_t err = mSource->start();
            if (err != OK) {
                notifyError(err);
                break;
            }
            Parcel parcel;
            err = mSource->extractGlobalDescriptions(&parcel);
            if (err != OK) {
                notifyError(err);
                break;
            }
            notifyListener(&parcel);
            break;
        }
    }
}

void TimedTextPlayer::doSeekAndRead(int64_t seekTimeUs) {
    MediaSource::ReadOptions options;
    options.setSeekTo(seekTimeUs, MediaSource::ReadOptions::SEEK_PREVIOUS_SYNC);
    doRead(&options);
}

void TimedTextPlayer::doRead(MediaSource::ReadOptions* options) {
    int64_t startTimeUs = 0;
    int64_t endTimeUs = 0;
    sp<ParcelEvent> parcelEvent = new ParcelEvent();
    CHECK(mSource != NULL);
    status_t err = mSource->read(&startTimeUs, &endTimeUs,
                                 &(parcelEvent->parcel), options);
    if (err == WOULD_BLOCK) {
        sp<AMessage> msg = new AMessage(kWhatRetryRead, id());
        if (options != NULL) {
            int64_t seekTimeUs = kInvalidTimeUs;
            MediaSource::ReadOptions::SeekMode seekMode =
                MediaSource::ReadOptions::SEEK_PREVIOUS_SYNC;
            CHECK(options->getSeekTo(&seekTimeUs, &seekMode));
            msg->setInt64("seekTimeUs", seekTimeUs);
            msg->setInt32("seekMode", seekMode);
        }
        msg->setInt32("generation", mSendSubtitleGeneration);
        msg->post(kWaitTimeUsToRetryRead);
        return;
    } else if (err != OK) {
        notifyError(err);
        return;
    }

    postTextEvent(parcelEvent, startTimeUs);
    if (endTimeUs > 0) {
        CHECK_GE(endTimeUs, startTimeUs);
        // send an empty timed text to clear the subtitle when it reaches to the
        // end time.
        postTextEvent(NULL, endTimeUs);
    }
}

void TimedTextPlayer::postTextEvent(const sp<ParcelEvent>& parcel, int64_t timeUs) {
    int64_t delayUs = delayUsFromCurrentTime(timeUs);
    sp<AMessage> msg = new AMessage(kWhatSendSubtitle, id());
    msg->setInt32("generation", mSendSubtitleGeneration);
    if (parcel != NULL) {
        msg->setObject("subtitle", parcel);
    }
    msg->setInt64("fireTimeUs", timeUs);
    msg->post(delayUs);
}

int64_t TimedTextPlayer::delayUsFromCurrentTime(int64_t fireTimeUs) {
    sp<MediaPlayerBase> listener = mListener.promote();
    if (listener == NULL) {
        // TODO: it may be better to return kInvalidTimeUs
        ALOGE("%s: Listener is NULL. (fireTimeUs = %" PRId64" )",
              __FUNCTION__, fireTimeUs);
        return 0;
    }
    int32_t positionMs = 0;
    listener->getCurrentPosition(&positionMs);
    int64_t positionUs = positionMs * 1000ll;

    if (fireTimeUs <= positionUs + kAdjustmentProcessingTimeUs) {
        return 0;
    } else {
        int64_t delayUs = fireTimeUs - positionUs - kAdjustmentProcessingTimeUs;
        if (delayUs > kMaxDelayUs) {
            return kMaxDelayUs;
        }
        return delayUs;
    }
}

void TimedTextPlayer::notifyError(int error) {
    sp<MediaPlayerBase> listener = mListener.promote();
    if (listener == NULL) {
        ALOGE("%s(error=%d): Listener is NULL.", __FUNCTION__, error);
        return;
    }
    listener->sendEvent(MEDIA_INFO, MEDIA_INFO_TIMED_TEXT_ERROR, error);
}

void TimedTextPlayer::notifyListener(const Parcel *parcel) {
    sp<MediaPlayerBase> listener = mListener.promote();
    if (listener == NULL) {
        ALOGE("%s: Listener is NULL.", __FUNCTION__);
        return;
    }
    if (parcel != NULL && (parcel->dataSize() > 0)) {
        listener->sendEvent(MEDIA_TIMED_TEXT, 0, 0, parcel);
    } else {  // send an empty timed text to clear the screen
        listener->sendEvent(MEDIA_TIMED_TEXT);
    }
}

}  // namespace android
