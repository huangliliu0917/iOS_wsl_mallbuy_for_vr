#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SevenZip.LzmaBench/CBitRandomGenerator
struct CBitRandomGenerator_t665221883;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.LzmaBench/CBenchRandomGenerator
struct  CBenchRandomGenerator_t3710262280  : public Il2CppObject
{
public:
	// SevenZip.LzmaBench/CBitRandomGenerator SevenZip.LzmaBench/CBenchRandomGenerator::RG
	CBitRandomGenerator_t665221883 * ___RG_0;
	// System.UInt32 SevenZip.LzmaBench/CBenchRandomGenerator::Pos
	uint32_t ___Pos_1;
	// System.UInt32 SevenZip.LzmaBench/CBenchRandomGenerator::Rep0
	uint32_t ___Rep0_2;
	// System.UInt32 SevenZip.LzmaBench/CBenchRandomGenerator::BufferSize
	uint32_t ___BufferSize_3;
	// System.Byte[] SevenZip.LzmaBench/CBenchRandomGenerator::Buffer
	ByteU5BU5D_t3397334013* ___Buffer_4;

public:
	inline static int32_t get_offset_of_RG_0() { return static_cast<int32_t>(offsetof(CBenchRandomGenerator_t3710262280, ___RG_0)); }
	inline CBitRandomGenerator_t665221883 * get_RG_0() const { return ___RG_0; }
	inline CBitRandomGenerator_t665221883 ** get_address_of_RG_0() { return &___RG_0; }
	inline void set_RG_0(CBitRandomGenerator_t665221883 * value)
	{
		___RG_0 = value;
		Il2CppCodeGenWriteBarrier(&___RG_0, value);
	}

	inline static int32_t get_offset_of_Pos_1() { return static_cast<int32_t>(offsetof(CBenchRandomGenerator_t3710262280, ___Pos_1)); }
	inline uint32_t get_Pos_1() const { return ___Pos_1; }
	inline uint32_t* get_address_of_Pos_1() { return &___Pos_1; }
	inline void set_Pos_1(uint32_t value)
	{
		___Pos_1 = value;
	}

	inline static int32_t get_offset_of_Rep0_2() { return static_cast<int32_t>(offsetof(CBenchRandomGenerator_t3710262280, ___Rep0_2)); }
	inline uint32_t get_Rep0_2() const { return ___Rep0_2; }
	inline uint32_t* get_address_of_Rep0_2() { return &___Rep0_2; }
	inline void set_Rep0_2(uint32_t value)
	{
		___Rep0_2 = value;
	}

	inline static int32_t get_offset_of_BufferSize_3() { return static_cast<int32_t>(offsetof(CBenchRandomGenerator_t3710262280, ___BufferSize_3)); }
	inline uint32_t get_BufferSize_3() const { return ___BufferSize_3; }
	inline uint32_t* get_address_of_BufferSize_3() { return &___BufferSize_3; }
	inline void set_BufferSize_3(uint32_t value)
	{
		___BufferSize_3 = value;
	}

	inline static int32_t get_offset_of_Buffer_4() { return static_cast<int32_t>(offsetof(CBenchRandomGenerator_t3710262280, ___Buffer_4)); }
	inline ByteU5BU5D_t3397334013* get_Buffer_4() const { return ___Buffer_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_Buffer_4() { return &___Buffer_4; }
	inline void set_Buffer_4(ByteU5BU5D_t3397334013* value)
	{
		___Buffer_4 = value;
		Il2CppCodeGenWriteBarrier(&___Buffer_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
