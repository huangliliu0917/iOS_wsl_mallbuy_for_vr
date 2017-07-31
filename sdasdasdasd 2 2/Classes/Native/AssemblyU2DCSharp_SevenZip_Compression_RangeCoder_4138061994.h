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

// SevenZip.Compression.RangeCoder.Encoder
struct  Encoder_t4138061994  : public Il2CppObject
{
public:
	// System.IO.Stream SevenZip.Compression.RangeCoder.Encoder::Stream
	Stream_t3255436806 * ___Stream_1;
	// System.UInt64 SevenZip.Compression.RangeCoder.Encoder::Low
	uint64_t ___Low_2;
	// System.UInt32 SevenZip.Compression.RangeCoder.Encoder::Range
	uint32_t ___Range_3;
	// System.UInt32 SevenZip.Compression.RangeCoder.Encoder::_cacheSize
	uint32_t ____cacheSize_4;
	// System.Byte SevenZip.Compression.RangeCoder.Encoder::_cache
	uint8_t ____cache_5;
	// System.Int64 SevenZip.Compression.RangeCoder.Encoder::StartPosition
	int64_t ___StartPosition_6;

public:
	inline static int32_t get_offset_of_Stream_1() { return static_cast<int32_t>(offsetof(Encoder_t4138061994, ___Stream_1)); }
	inline Stream_t3255436806 * get_Stream_1() const { return ___Stream_1; }
	inline Stream_t3255436806 ** get_address_of_Stream_1() { return &___Stream_1; }
	inline void set_Stream_1(Stream_t3255436806 * value)
	{
		___Stream_1 = value;
		Il2CppCodeGenWriteBarrier(&___Stream_1, value);
	}

	inline static int32_t get_offset_of_Low_2() { return static_cast<int32_t>(offsetof(Encoder_t4138061994, ___Low_2)); }
	inline uint64_t get_Low_2() const { return ___Low_2; }
	inline uint64_t* get_address_of_Low_2() { return &___Low_2; }
	inline void set_Low_2(uint64_t value)
	{
		___Low_2 = value;
	}

	inline static int32_t get_offset_of_Range_3() { return static_cast<int32_t>(offsetof(Encoder_t4138061994, ___Range_3)); }
	inline uint32_t get_Range_3() const { return ___Range_3; }
	inline uint32_t* get_address_of_Range_3() { return &___Range_3; }
	inline void set_Range_3(uint32_t value)
	{
		___Range_3 = value;
	}

	inline static int32_t get_offset_of__cacheSize_4() { return static_cast<int32_t>(offsetof(Encoder_t4138061994, ____cacheSize_4)); }
	inline uint32_t get__cacheSize_4() const { return ____cacheSize_4; }
	inline uint32_t* get_address_of__cacheSize_4() { return &____cacheSize_4; }
	inline void set__cacheSize_4(uint32_t value)
	{
		____cacheSize_4 = value;
	}

	inline static int32_t get_offset_of__cache_5() { return static_cast<int32_t>(offsetof(Encoder_t4138061994, ____cache_5)); }
	inline uint8_t get__cache_5() const { return ____cache_5; }
	inline uint8_t* get_address_of__cache_5() { return &____cache_5; }
	inline void set__cache_5(uint8_t value)
	{
		____cache_5 = value;
	}

	inline static int32_t get_offset_of_StartPosition_6() { return static_cast<int32_t>(offsetof(Encoder_t4138061994, ___StartPosition_6)); }
	inline int64_t get_StartPosition_6() const { return ___StartPosition_6; }
	inline int64_t* get_address_of_StartPosition_6() { return &___StartPosition_6; }
	inline void set_StartPosition_6(int64_t value)
	{
		___StartPosition_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
