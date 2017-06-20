#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wanshili.GiftInforn
struct  GiftInforn_t3036474116  : public Il2CppObject
{
public:
	// System.Int32 Wanshili.GiftInforn::type
	int32_t ___type_0;
	// System.String Wanshili.GiftInforn::path
	String_t* ___path_1;
	// System.String Wanshili.GiftInforn::modelName
	String_t* ___modelName_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GiftInforn_t3036474116, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_path_1() { return static_cast<int32_t>(offsetof(GiftInforn_t3036474116, ___path_1)); }
	inline String_t* get_path_1() const { return ___path_1; }
	inline String_t** get_address_of_path_1() { return &___path_1; }
	inline void set_path_1(String_t* value)
	{
		___path_1 = value;
		Il2CppCodeGenWriteBarrier(&___path_1, value);
	}

	inline static int32_t get_offset_of_modelName_2() { return static_cast<int32_t>(offsetof(GiftInforn_t3036474116, ___modelName_2)); }
	inline String_t* get_modelName_2() const { return ___modelName_2; }
	inline String_t** get_address_of_modelName_2() { return &___modelName_2; }
	inline void set_modelName_2(String_t* value)
	{
		___modelName_2 = value;
		Il2CppCodeGenWriteBarrier(&___modelName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
