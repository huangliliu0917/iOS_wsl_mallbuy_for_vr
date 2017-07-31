#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// SevenZip.Compression.RangeCoder.BitEncoder[]
struct BitEncoderU5BU5D_t3186735324;
struct BitEncoder_t1457660417 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.Compression.RangeCoder.BitTreeEncoder
struct  BitTreeEncoder_t1009728003 
{
public:
	// SevenZip.Compression.RangeCoder.BitEncoder[] SevenZip.Compression.RangeCoder.BitTreeEncoder::Models
	BitEncoderU5BU5D_t3186735324* ___Models_0;
	// System.Int32 SevenZip.Compression.RangeCoder.BitTreeEncoder::NumBitLevels
	int32_t ___NumBitLevels_1;

public:
	inline static int32_t get_offset_of_Models_0() { return static_cast<int32_t>(offsetof(BitTreeEncoder_t1009728003, ___Models_0)); }
	inline BitEncoderU5BU5D_t3186735324* get_Models_0() const { return ___Models_0; }
	inline BitEncoderU5BU5D_t3186735324** get_address_of_Models_0() { return &___Models_0; }
	inline void set_Models_0(BitEncoderU5BU5D_t3186735324* value)
	{
		___Models_0 = value;
		Il2CppCodeGenWriteBarrier(&___Models_0, value);
	}

	inline static int32_t get_offset_of_NumBitLevels_1() { return static_cast<int32_t>(offsetof(BitTreeEncoder_t1009728003, ___NumBitLevels_1)); }
	inline int32_t get_NumBitLevels_1() const { return ___NumBitLevels_1; }
	inline int32_t* get_address_of_NumBitLevels_1() { return &___NumBitLevels_1; }
	inline void set_NumBitLevels_1(int32_t value)
	{
		___NumBitLevels_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SevenZip.Compression.RangeCoder.BitTreeEncoder
struct BitTreeEncoder_t1009728003_marshaled_pinvoke
{
	BitEncoder_t1457660417 * ___Models_0;
	int32_t ___NumBitLevels_1;
};
// Native definition for COM marshalling of SevenZip.Compression.RangeCoder.BitTreeEncoder
struct BitTreeEncoder_t1009728003_marshaled_com
{
	BitEncoder_t1457660417 * ___Models_0;
	int32_t ___NumBitLevels_1;
};
