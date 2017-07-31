#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_SevenZip_Compression_RangeCoder_1457660417.h"
#include "AssemblyU2DCSharp_SevenZip_Compression_RangeCoder_1009728003.h"

// SevenZip.Compression.RangeCoder.BitTreeEncoder[]
struct BitTreeEncoderU5BU5D_t1510639250;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.Compression.LZMA.Encoder/LenEncoder
struct  LenEncoder_t973145956  : public Il2CppObject
{
public:
	// SevenZip.Compression.RangeCoder.BitEncoder SevenZip.Compression.LZMA.Encoder/LenEncoder::_choice
	BitEncoder_t1457660417  ____choice_0;
	// SevenZip.Compression.RangeCoder.BitEncoder SevenZip.Compression.LZMA.Encoder/LenEncoder::_choice2
	BitEncoder_t1457660417  ____choice2_1;
	// SevenZip.Compression.RangeCoder.BitTreeEncoder[] SevenZip.Compression.LZMA.Encoder/LenEncoder::_lowCoder
	BitTreeEncoderU5BU5D_t1510639250* ____lowCoder_2;
	// SevenZip.Compression.RangeCoder.BitTreeEncoder[] SevenZip.Compression.LZMA.Encoder/LenEncoder::_midCoder
	BitTreeEncoderU5BU5D_t1510639250* ____midCoder_3;
	// SevenZip.Compression.RangeCoder.BitTreeEncoder SevenZip.Compression.LZMA.Encoder/LenEncoder::_highCoder
	BitTreeEncoder_t1009728003  ____highCoder_4;

public:
	inline static int32_t get_offset_of__choice_0() { return static_cast<int32_t>(offsetof(LenEncoder_t973145956, ____choice_0)); }
	inline BitEncoder_t1457660417  get__choice_0() const { return ____choice_0; }
	inline BitEncoder_t1457660417 * get_address_of__choice_0() { return &____choice_0; }
	inline void set__choice_0(BitEncoder_t1457660417  value)
	{
		____choice_0 = value;
	}

	inline static int32_t get_offset_of__choice2_1() { return static_cast<int32_t>(offsetof(LenEncoder_t973145956, ____choice2_1)); }
	inline BitEncoder_t1457660417  get__choice2_1() const { return ____choice2_1; }
	inline BitEncoder_t1457660417 * get_address_of__choice2_1() { return &____choice2_1; }
	inline void set__choice2_1(BitEncoder_t1457660417  value)
	{
		____choice2_1 = value;
	}

	inline static int32_t get_offset_of__lowCoder_2() { return static_cast<int32_t>(offsetof(LenEncoder_t973145956, ____lowCoder_2)); }
	inline BitTreeEncoderU5BU5D_t1510639250* get__lowCoder_2() const { return ____lowCoder_2; }
	inline BitTreeEncoderU5BU5D_t1510639250** get_address_of__lowCoder_2() { return &____lowCoder_2; }
	inline void set__lowCoder_2(BitTreeEncoderU5BU5D_t1510639250* value)
	{
		____lowCoder_2 = value;
		Il2CppCodeGenWriteBarrier(&____lowCoder_2, value);
	}

	inline static int32_t get_offset_of__midCoder_3() { return static_cast<int32_t>(offsetof(LenEncoder_t973145956, ____midCoder_3)); }
	inline BitTreeEncoderU5BU5D_t1510639250* get__midCoder_3() const { return ____midCoder_3; }
	inline BitTreeEncoderU5BU5D_t1510639250** get_address_of__midCoder_3() { return &____midCoder_3; }
	inline void set__midCoder_3(BitTreeEncoderU5BU5D_t1510639250* value)
	{
		____midCoder_3 = value;
		Il2CppCodeGenWriteBarrier(&____midCoder_3, value);
	}

	inline static int32_t get_offset_of__highCoder_4() { return static_cast<int32_t>(offsetof(LenEncoder_t973145956, ____highCoder_4)); }
	inline BitTreeEncoder_t1009728003  get__highCoder_4() const { return ____highCoder_4; }
	inline BitTreeEncoder_t1009728003 * get_address_of__highCoder_4() { return &____highCoder_4; }
	inline void set__highCoder_4(BitTreeEncoder_t1009728003  value)
	{
		____highCoder_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
