#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.UInt32[]
struct UInt32U5BU5D_t59386216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.Compression.RangeCoder.BitEncoder
struct  BitEncoder_t1457660417 
{
public:
	// System.UInt32 SevenZip.Compression.RangeCoder.BitEncoder::Prob
	uint32_t ___Prob_5;

public:
	inline static int32_t get_offset_of_Prob_5() { return static_cast<int32_t>(offsetof(BitEncoder_t1457660417, ___Prob_5)); }
	inline uint32_t get_Prob_5() const { return ___Prob_5; }
	inline uint32_t* get_address_of_Prob_5() { return &___Prob_5; }
	inline void set_Prob_5(uint32_t value)
	{
		___Prob_5 = value;
	}
};

struct BitEncoder_t1457660417_StaticFields
{
public:
	// System.UInt32[] SevenZip.Compression.RangeCoder.BitEncoder::ProbPrices
	UInt32U5BU5D_t59386216* ___ProbPrices_6;

public:
	inline static int32_t get_offset_of_ProbPrices_6() { return static_cast<int32_t>(offsetof(BitEncoder_t1457660417_StaticFields, ___ProbPrices_6)); }
	inline UInt32U5BU5D_t59386216* get_ProbPrices_6() const { return ___ProbPrices_6; }
	inline UInt32U5BU5D_t59386216** get_address_of_ProbPrices_6() { return &___ProbPrices_6; }
	inline void set_ProbPrices_6(UInt32U5BU5D_t59386216* value)
	{
		___ProbPrices_6 = value;
		Il2CppCodeGenWriteBarrier(&___ProbPrices_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
