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

#define LOG_TAG "MtpProperty"

#include <inttypes.h>
#include "MtpDataPacket.h"
#include "MtpDebug.h"
#include "MtpProperty.h"
#include "MtpStringBuffer.h"
#include "MtpUtils.h"

namespace android {

MtpProperty::MtpProperty()
    :   mCode(0),
        mType(0),
        mWriteable(false),
        mDefaultArrayLength(0),
        mDefaultArrayValues(NULL),
        mCurrentArrayLength(0),
        mCurrentArrayValues(NULL),
        mGroupCode(0),
        mFormFlag(kFormNone),
        mEnumLength(0),
        mEnumValues(NULL)
{
    memset(&mDefaultValue, 0, sizeof(mDefaultValue));
    memset(&mCurrentValue, 0, sizeof(mCurrentValue));
    memset(&mMinimumValue, 0, sizeof(mMinimumValue));
    memset(&mMaximumValue, 0, sizeof(mMaximumValue));
}

MtpProperty::MtpProperty(MtpPropertyCode propCode,
                         MtpDataType type,
                         bool writeable,
                         int defaultValue)
    :   mCode(propCode),
        mType(type),
        mWriteable(writeable),
        mDefaultArrayLength(0),
        mDefaultArrayValues(NULL),
        mCurrentArrayLength(0),
        mCurrentArrayValues(NULL),
        mGroupCode(0),
        mFormFlag(kFormNone),
        mEnumLength(0),
        mEnumValues(NULL)
{
    memset(&mDefaultValue, 0, sizeof(mDefaultValue));
    memset(&mCurrentValue, 0, sizeof(mCurrentValue));
    memset(&mMinimumValue, 0, sizeof(mMinimumValue));
    memset(&mMaximumValue, 0, sizeof(mMaximumValue));

    if (defaultValue) {
        switch (type) {
            case MTP_TYPE_INT8:
                mDefaultValue.u.i8 = defaultValue;
                break;
            case MTP_TYPE_UINT8:
                mDefaultValue.u.u8 = defaultValue;
                break;
            case MTP_TYPE_INT16:
                mDefaultValue.u.i16 = defaultValue;
                break;
            case MTP_TYPE_UINT16:
                mDefaultValue.u.u16 = defaultValue;
                break;
            case MTP_TYPE_INT32:
                mDefaultValue.u.i32 = defaultValue;
                break;
            case MTP_TYPE_UINT32:
                mDefaultValue.u.u32 = defaultValue;
                break;
            case MTP_TYPE_INT64:
                mDefaultValue.u.i64 = defaultValue;
                break;
            case MTP_TYPE_UINT64:
                mDefaultValue.u.u64 = defaultValue;
                break;
            default:
                ALOGE("unknown type %04X in MtpProperty::MtpProperty", type);
        }
    }
}

MtpProperty::~MtpProperty() {
    if (mType == MTP_TYPE_STR) {
        // free all strings
        free(mDefaultValue.str);
        free(mCurrentValue.str);
        free(mMinimumValue.str);
        free(mMaximumValue.str);
        if (mDefaultArrayValues) {
            for (int i = 0; i < mDefaultArrayLength; i++)
                free(mDefaultArrayValues[i].str);
        }
        if (mCurrentArrayValues) {
            for (int i = 0; i < mCurrentArrayLength; i++)
                free(mCurrentArrayValues[i].str);
        }
        if (mEnumValues) {
            for (int i = 0; i < mEnumLength; i++)
                free(mEnumValues[i].str);
        }
    }
    delete[] mDefaultArrayValues;
    delete[] mCurrentArrayValues;
    delete[] mEnumValues;
}

void MtpProperty::read(MtpDataPacket& packet) {
    mCode = packet.getUInt16();
    bool deviceProp = isDeviceProperty();
    mType = packet.getUInt16();
    mWriteable = (packet.getUInt8() == 1);
    switch (mType) {
        case MTP_TYPE_AINT8:
        case MTP_TYPE_AUINT8:
        case MTP_TYPE_AINT16:
        case MTP_TYPE_AUINT16:
        case MTP_TYPE_AINT32:
        case MTP_TYPE_AUINT32:
        case MTP_TYPE_AINT64:
        case MTP_TYPE_AUINT64:
        case MTP_TYPE_AINT128:
        case MTP_TYPE_AUINT128:
            mDefaultArrayValues = readArrayValues(packet, mDefaultArrayLength);
            if (deviceProp)
                mCurrentArrayValues = readArrayValues(packet, mCurrentArrayLength);
            break;
        default:
            readValue(packet, mDefaultValue);
            if (deviceProp)
                readValue(packet, mCurrentValue);
    }
    if (!deviceProp)
        mGroupCode = packet.getUInt32();
    mFormFlag = packet.getUInt8();

    if (mFormFlag == kFormRange) {
            readValue(packet, mMinimumValue);
            readValue(packet, mMaximumValue);
            readValue(packet, mStepSize);
    } else if (mFormFlag == kFormEnum) {
        mEnumLength = packet.getUInt16();
        mEnumValues = new MtpPropertyValue[mEnumLength];
        for (int i = 0; i < mEnumLength; i++)
            readValue(packet, mEnumValues[i]);
    }
}

void MtpProperty::write(MtpDataPacket& packet) {
    bool deviceProp = isDeviceProperty();

    packet.putUInt16(mCode);
    packet.putUInt16(mType);
    packet.putUInt8(mWriteable ? 1 : 0);

    switch (mType) {
        case MTP_TYPE_AINT8:
        case MTP_TYPE_AUINT8:
        case MTP_TYPE_AINT16:
        case MTP_TYPE_AUINT16:
        case MTP_TYPE_AINT32:
        case MTP_TYPE_AUINT32:
        case MTP_TYPE_AINT64:
        case MTP_TYPE_AUINT64:
        case MTP_TYPE_AINT128:
        case MTP_TYPE_AUINT128:
            writeArrayValues(packet, mDefaultArrayValues, mDefaultArrayLength);
            if (deviceProp)
                writeArrayValues(packet, mCurrentArrayValues, mCurrentArrayLength);
            break;
        default:
            writeValue(packet, mDefaultValue);
            if (deviceProp)
                writeValue(packet, mCurrentValue);
    }
    packet.putUInt32(mGroupCode);
    if (!deviceProp)
        packet.putUInt8(mFormFlag);
    if (mFormFlag == kFormRange) {
            writeValue(packet, mMinimumValue);
            writeValue(packet, mMaximumValue);
            writeValue(packet, mStepSize);
    } else if (mFormFlag == kFormEnum) {
        packet.putUInt16(mEnumLength);
        for (int i = 0; i < mEnumLength; i++)
            writeValue(packet, mEnumValues[i]);
    }
}

void MtpProperty::setDefaultValue(const uint16_t* string) {
    free(mDefaultValue.str);
    if (string) {
        MtpStringBuffer buffer(string);
        mDefaultValue.str = strdup(buffer);
    }
    else
        mDefaultValue.str = NULL;
}

void MtpProperty::setCurrentValue(const uint16_t* string) {
    free(mCurrentValue.str);
    if (string) {
        MtpStringBuffer buffer(string);
        mCurrentValue.str = strdup(buffer);
    }
    else
        mCurrentValue.str = NULL;
}

void MtpProperty::setFormRange(int min, int max, int step) {
    mFormFlag = kFormRange;
    switch (mType) {
        case MTP_TYPE_INT8:
            mMinimumValue.u.i8 = min;
            mMaximumValue.u.i8 = max;
            mStepSize.u.i8 = step;
            break;
        case MTP_TYPE_UINT8:
            mMinimumValue.u.u8 = min;
            mMaximumValue.u.u8 = max;
            mStepSize.u.u8 = step;
            break;
        case MTP_TYPE_INT16:
            mMinimumValue.u.i16 = min;
            mMaximumValue.u.i16 = max;
            mStepSize.u.i16 = step;
            break;
        case MTP_TYPE_UINT16:
            mMinimumValue.u.u16 = min;
            mMaximumValue.u.u16 = max;
            mStepSize.u.u16 = step;
            break;
        case MTP_TYPE_INT32:
            mMinimumValue.u.i32 = min;
            mMaximumValue.u.i32 = max;
            mStepSize.u.i32 = step;
            break;
        case MTP_TYPE_UINT32:
            mMinimumValue.u.u32 = min;
            mMaximumValue.u.u32 = max;
            mStepSize.u.u32 = step;
            break;
        case MTP_TYPE_INT64:
            mMinimumValue.u.i64 = min;
            mMaximumValue.u.i64 = max;
            mStepSize.u.i64 = step;
            break;
        case MTP_TYPE_UINT64:
            mMinimumValue.u.u64 = min;
            mMaximumValue.u.u64 = max;
            mStepSize.u.u64 = step;
            break;
        default:
            ALOGE("unsupported type for MtpProperty::setRange");
            break;
    }
}

void MtpProperty::setFormEnum(const int* values, int count) {
     mFormFlag = kFormEnum;
     delete[] mEnumValues;
     mEnumValues = new MtpPropertyValue[count];
     mEnumLength = count;

    for (int i = 0; i < count; i++) {
        int value = *values++;
            switch (mType) {
                case MTP_TYPE_INT8:
                    mEnumValues[i].u.i8 = value;
                    break;
                case MTP_TYPE_UINT8:
                    mEnumValues[i].u.u8 = value;
                    break;
                case MTP_TYPE_INT16:
                    mEnumValues[i].u.i16 = value;
                    break;
                case MTP_TYPE_UINT16:
                    mEnumValues[i].u.u16 = value;
                    break;
                case MTP_TYPE_INT32:
                    mEnumValues[i].u.i32 = value;
                    break;
                case MTP_TYPE_UINT32:
                    mEnumValues[i].u.u32 = value;
                    break;
                case MTP_TYPE_INT64:
                    mEnumValues[i].u.i64 = value;
                    break;
                case MTP_TYPE_UINT64:
                    mEnumValues[i].u.u64 = value;
                    break;
                default:
                    ALOGE("unsupported type for MtpProperty::setEnum");
                    break;
        }
    }
}

void MtpProperty::setFormDateTime() {
     mFormFlag = kFormDateTime;
}

void MtpProperty::print() {
    MtpString buffer;
    bool deviceProp = isDeviceProperty();
    if (deviceProp)
        ALOGI("    %s (%04X)", MtpDebug::getDevicePropCodeName(mCode), mCode);
    else
        ALOGI("    %s (%04X)", MtpDebug::getObjectPropCodeName(mCode), mCode);
    ALOGI("    type %04X", mType);
    ALOGI("    writeable %s", (mWriteable ? "true" : "false"));
    buffer = "    default value: ";
    print(mDefaultValue, buffer);
    ALOGI("%s", (const char *)buffer);
    if (deviceProp) {
        buffer = "    current value: ";
        print(mCurrentValue, buffer);
        ALOGI("%s", (const char *)buffer);
    }
    switch (mFormFlag) {
        case kFormNone:
            break;
        case kFormRange:
            buffer = "    Range (";
            print(mMinimumValue, buffer);
            buffer += ", ";
            print(mMaximumValue, buffer);
            buffer += ", ";
            print(mStepSize, buffer);
            buffer += ")";
            ALOGI("%s", (const char *)buffer);
            break;
        case kFormEnum:
            buffer = "    Enum { ";
            for (int i = 0; i < mEnumLength; i++) {
                print(mEnumValues[i], buffer);
                buffer += " ";
            }
            buffer += "}";
            ALOGI("%s", (const char *)buffer);
            break;
        case kFormDateTime:
            ALOGI("    DateTime\n");
            break;
        default:
            ALOGI("    form %d\n", mFormFlag);
            break;
    }
}

void MtpProperty::print(MtpPropertyValue& value, MtpString& buffer) {
    switch (mType) {
        case MTP_TYPE_INT8:
            buffer.appendFormat("%d", value.u.i8);
            break;
        case MTP_TYPE_UINT8:
            buffer.appendFormat("%d", value.u.u8);
            break;
        case MTP_TYPE_INT16:
            buffer.appendFormat("%d", value.u.i16);
            break;
        case MTP_TYPE_UINT16:
            buffer.appendFormat("%d", value.u.u16);
            break;
        case MTP_TYPE_INT32:
            buffer.appendFormat("%d", value.u.i32);
            break;
        case MTP_TYPE_UINT32:
            buffer.appendFormat("%d", value.u.u32);
            break;
        case MTP_TYPE_INT64:
            buffer.appendFormat("%" PRId64, value.u.i64);
            break;
        case MTP_TYPE_UINT64:
            buffer.appendFormat("%" PRIu64, value.u.u64);
            break;
        case MTP_TYPE_INT128:
            buffer.appendFormat("%08X%08X%08X%08X", value.u.i128[0], value.u.i128[1],
                    value.u.i128[2], value.u.i128[3]);
            break;
        case MTP_TYPE_UINT128:
            buffer.appendFormat("%08X%08X%08X%08X", value.u.u128[0], value.u.u128[1],
                    value.u.u128[2], value.u.u128[3]);
            break;
        case MTP_TYPE_STR:
            buffer.appendFormat("%s", value.str);
            break;
        default:
            ALOGE("unsupported type for MtpProperty::print\n");
            break;
    }
}

void MtpProperty::readValue(MtpDataPacket& packet, MtpPropertyValue& value) {
    MtpStringBuffer stringBuffer;

    switch (mType) {
        case MTP_TYPE_INT8:
        case MTP_TYPE_AINT8:
            value.u.i8 = packet.getInt8();
            break;
        case MTP_TYPE_UINT8:
        case MTP_TYPE_AUINT8:
            value.u.u8 = packet.getUInt8();
            break;
        case MTP_TYPE_INT16:
        case MTP_TYPE_AINT16:
            value.u.i16 = packet.getInt16();
            break;
        case MTP_TYPE_UINT16:
        case MTP_TYPE_AUINT16:
            value.u.u16 = packet.getUInt16();
            break;
        case MTP_TYPE_INT32:
        case MTP_TYPE_AINT32:
            value.u.i32 = packet.getInt32();
            break;
        case MTP_TYPE_UINT32:
        case MTP_TYPE_AUINT32:
            value.u.u32 = packet.getUInt32();
            break;
        case MTP_TYPE_INT64:
        case MTP_TYPE_AINT64:
            value.u.i64 = packet.getInt64();
            break;
        case MTP_TYPE_UINT64:
        case MTP_TYPE_AUINT64:
            value.u.u64 = packet.getUInt64();
            break;
        case MTP_TYPE_INT128:
        case MTP_TYPE_AINT128:
            packet.getInt128(value.u.i128);
            break;
        case MTP_TYPE_UINT128:
        case MTP_TYPE_AUINT128:
            packet.getUInt128(value.u.u128);
            break;
        case MTP_TYPE_STR:
            packet.getString(stringBuffer);
            value.str = strdup(stringBuffer);
            break;
        default:
            ALOGE("unknown type %04X in MtpProperty::readValue", mType);
    }
}

void MtpProperty::writeValue(MtpDataPacket& packet, MtpPropertyValue& value) {
    MtpStringBuffer stringBuffer;

    switch (mType) {
        case MTP_TYPE_INT8:
        case MTP_TYPE_AINT8:
            packet.putInt8(value.u.i8);
            break;
        case MTP_TYPE_UINT8:
        case MTP_TYPE_AUINT8:
            packet.putUInt8(value.u.u8);
            break;
        case MTP_TYPE_INT16:
        case MTP_TYPE_AINT16:
            packet.putInt16(value.u.i16);
            break;
        case MTP_TYPE_UINT16:
        case MTP_TYPE_AUINT16:
            packet.putUInt16(value.u.u16);
            break;
        case MTP_TYPE_INT32:
        case MTP_TYPE_AINT32:
            packet.putInt32(value.u.i32);
            break;
        case MTP_TYPE_UINT32:
        case MTP_TYPE_AUINT32:
            packet.putUInt32(value.u.u32);
            break;
        case MTP_TYPE_INT64:
        case MTP_TYPE_AINT64:
            packet.putInt64(value.u.i64);
            break;
        case MTP_TYPE_UINT64:
        case MTP_TYPE_AUINT64:
            packet.putUInt64(value.u.u64);
            break;
        case MTP_TYPE_INT128:
        case MTP_TYPE_AINT128:
            packet.putInt128(value.u.i128);
            break;
        case MTP_TYPE_UINT128:
        case MTP_TYPE_AUINT128:
            packet.putUInt128(value.u.u128);
            break;
        case MTP_TYPE_STR:
            if (value.str)
                packet.putString(value.str);
            else
                packet.putEmptyString();
            break;
        default:
            ALOGE("unknown type %04X in MtpProperty::writeValue", mType);
    }
}

MtpPropertyValue* MtpProperty::readArrayValues(MtpDataPacket& packet, int& length) {
    length = packet.getUInt32();
    if (length == 0)
        return NULL;
    MtpPropertyValue* result = new MtpPropertyValue[length];
    for (int i = 0; i < length; i++)
        readValue(packet, result[i]);
    return result;
}

void MtpProperty::writeArrayValues(MtpDataPacket& packet, MtpPropertyValue* values, int length) {
    packet.putUInt32(length);
    for (int i = 0; i < length; i++)
        writeValue(packet, values[i]);
}

}  // namespace android
