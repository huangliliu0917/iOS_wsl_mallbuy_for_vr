#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.UInt32[]
struct UInt32U5BU5D_t59386216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.CRC
struct  CRC_t3360462988  : public Il2CppObject
{
public:
	// System.UInt32 SevenZip.CRC::_value
	uint32_t ____value_1;

public:
	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(CRC_t3360462988, ____value_1)); }
	inline uint32_t get__value_1() const { return ____value_1; }
	inline uint32_t* get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(uint32_t value)
	{
		____value_1 = value;
	}
};

struct CRC_t3360462988_StaticFields
{
public:
	// System.UInt32[] SevenZip.CRC::Table
	UInt32U5BU5D_t59386216* ___Table_0;

public:
	inline static int32_t get_offset_of_Table_0() { return static_cast<int32_t>(offsetof(CRC_t3360462988_StaticFields, ___Table_0)); }
	inline UInt32U5BU5D_t59386216* get_Table_0() const { return ___Table_0; }
	inline UInt32U5BU5D_t59386216** get_address_of_Table_0() { return &___Table_0; }
	inline void set_Table_0(UInt32U5BU5D_t59386216* value)
	{
		___Table_0 = value;
		Il2CppCodeGenWriteBarrier(&___Table_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
