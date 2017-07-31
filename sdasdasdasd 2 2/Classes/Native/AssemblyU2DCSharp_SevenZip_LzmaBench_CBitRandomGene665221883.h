#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SevenZip.LzmaBench/CRandomGenerator
struct CRandomGenerator_t595795402;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.LzmaBench/CBitRandomGenerator
struct  CBitRandomGenerator_t665221883  : public Il2CppObject
{
public:
	// SevenZip.LzmaBench/CRandomGenerator SevenZip.LzmaBench/CBitRandomGenerator::RG
	CRandomGenerator_t595795402 * ___RG_0;
	// System.UInt32 SevenZip.LzmaBench/CBitRandomGenerator::Value
	uint32_t ___Value_1;
	// System.Int32 SevenZip.LzmaBench/CBitRandomGenerator::NumBits
	int32_t ___NumBits_2;

public:
	inline static int32_t get_offset_of_RG_0() { return static_cast<int32_t>(offsetof(CBitRandomGenerator_t665221883, ___RG_0)); }
	inline CRandomGenerator_t595795402 * get_RG_0() const { return ___RG_0; }
	inline CRandomGenerator_t595795402 ** get_address_of_RG_0() { return &___RG_0; }
	inline void set_RG_0(CRandomGenerator_t595795402 * value)
	{
		___RG_0 = value;
		Il2CppCodeGenWriteBarrier(&___RG_0, value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(CBitRandomGenerator_t665221883, ___Value_1)); }
	inline uint32_t get_Value_1() const { return ___Value_1; }
	inline uint32_t* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(uint32_t value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_NumBits_2() { return static_cast<int32_t>(offsetof(CBitRandomGenerator_t665221883, ___NumBits_2)); }
	inline int32_t get_NumBits_2() const { return ___NumBits_2; }
	inline int32_t* get_address_of_NumBits_2() { return &___NumBits_2; }
	inline void set_NumBits_2(int32_t value)
	{
		___NumBits_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
