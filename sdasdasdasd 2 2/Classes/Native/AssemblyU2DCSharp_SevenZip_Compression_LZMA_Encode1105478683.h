#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_SevenZip_Compression_LZMA_Encoder973145956.h"

// System.UInt32[]
struct UInt32U5BU5D_t59386216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.Compression.LZMA.Encoder/LenPriceTableEncoder
struct  LenPriceTableEncoder_t1105478683  : public LenEncoder_t973145956
{
public:
	// System.UInt32[] SevenZip.Compression.LZMA.Encoder/LenPriceTableEncoder::_prices
	UInt32U5BU5D_t59386216* ____prices_5;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder/LenPriceTableEncoder::_tableSize
	uint32_t ____tableSize_6;
	// System.UInt32[] SevenZip.Compression.LZMA.Encoder/LenPriceTableEncoder::_counters
	UInt32U5BU5D_t59386216* ____counters_7;

public:
	inline static int32_t get_offset_of__prices_5() { return static_cast<int32_t>(offsetof(LenPriceTableEncoder_t1105478683, ____prices_5)); }
	inline UInt32U5BU5D_t59386216* get__prices_5() const { return ____prices_5; }
	inline UInt32U5BU5D_t59386216** get_address_of__prices_5() { return &____prices_5; }
	inline void set__prices_5(UInt32U5BU5D_t59386216* value)
	{
		____prices_5 = value;
		Il2CppCodeGenWriteBarrier(&____prices_5, value);
	}

	inline static int32_t get_offset_of__tableSize_6() { return static_cast<int32_t>(offsetof(LenPriceTableEncoder_t1105478683, ____tableSize_6)); }
	inline uint32_t get__tableSize_6() const { return ____tableSize_6; }
	inline uint32_t* get_address_of__tableSize_6() { return &____tableSize_6; }
	inline void set__tableSize_6(uint32_t value)
	{
		____tableSize_6 = value;
	}

	inline static int32_t get_offset_of__counters_7() { return static_cast<int32_t>(offsetof(LenPriceTableEncoder_t1105478683, ____counters_7)); }
	inline UInt32U5BU5D_t59386216* get__counters_7() const { return ____counters_7; }
	inline UInt32U5BU5D_t59386216** get_address_of__counters_7() { return &____counters_7; }
	inline void set__counters_7(UInt32U5BU5D_t59386216* value)
	{
		____counters_7 = value;
		Il2CppCodeGenWriteBarrier(&____counters_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
