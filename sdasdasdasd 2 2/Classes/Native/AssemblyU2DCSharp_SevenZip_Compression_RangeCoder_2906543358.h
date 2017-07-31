#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.IO.Stream
struct Stream_t3255436806;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.Compression.RangeCoder.Decoder
struct  Decoder_t2906543358  : public Il2CppObject
{
public:
	// System.UInt32 SevenZip.Compression.RangeCoder.Decoder::Range
	uint32_t ___Range_1;
	// System.UInt32 SevenZip.Compression.RangeCoder.Decoder::Code
	uint32_t ___Code_2;
	// System.IO.Stream SevenZip.Compression.RangeCoder.Decoder::Stream
	Stream_t3255436806 * ___Stream_3;

public:
	inline static int32_t get_offset_of_Range_1() { return static_cast<int32_t>(offsetof(Decoder_t2906543358, ___Range_1)); }
	inline uint32_t get_Range_1() const { return ___Range_1; }
	inline uint32_t* get_address_of_Range_1() { return &___Range_1; }
	inline void set_Range_1(uint32_t value)
	{
		___Range_1 = value;
	}

	inline static int32_t get_offset_of_Code_2() { return static_cast<int32_t>(offsetof(Decoder_t2906543358, ___Code_2)); }
	inline uint32_t get_Code_2() const { return ___Code_2; }
	inline uint32_t* get_address_of_Code_2() { return &___Code_2; }
	inline void set_Code_2(uint32_t value)
	{
		___Code_2 = value;
	}

	inline static int32_t get_offset_of_Stream_3() { return static_cast<int32_t>(offsetof(Decoder_t2906543358, ___Stream_3)); }
	inline Stream_t3255436806 * get_Stream_3() const { return ___Stream_3; }
	inline Stream_t3255436806 ** get_address_of_Stream_3() { return &___Stream_3; }
	inline void set_Stream_3(Stream_t3255436806 * value)
	{
		___Stream_3 = value;
		Il2CppCodeGenWriteBarrier(&___Stream_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
