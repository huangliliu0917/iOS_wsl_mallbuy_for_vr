#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_SevenZip_CommandLineParser_Switc3041602746.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.CommandLineParser.SwitchForm
struct  SwitchForm_t2470562392  : public Il2CppObject
{
public:
	// System.String SevenZip.CommandLineParser.SwitchForm::IDString
	String_t* ___IDString_0;
	// SevenZip.CommandLineParser.SwitchType SevenZip.CommandLineParser.SwitchForm::Type
	int32_t ___Type_1;
	// System.Boolean SevenZip.CommandLineParser.SwitchForm::Multi
	bool ___Multi_2;
	// System.Int32 SevenZip.CommandLineParser.SwitchForm::MinLen
	int32_t ___MinLen_3;
	// System.Int32 SevenZip.CommandLineParser.SwitchForm::MaxLen
	int32_t ___MaxLen_4;
	// System.String SevenZip.CommandLineParser.SwitchForm::PostCharSet
	String_t* ___PostCharSet_5;

public:
	inline static int32_t get_offset_of_IDString_0() { return static_cast<int32_t>(offsetof(SwitchForm_t2470562392, ___IDString_0)); }
	inline String_t* get_IDString_0() const { return ___IDString_0; }
	inline String_t** get_address_of_IDString_0() { return &___IDString_0; }
	inline void set_IDString_0(String_t* value)
	{
		___IDString_0 = value;
		Il2CppCodeGenWriteBarrier(&___IDString_0, value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(SwitchForm_t2470562392, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Multi_2() { return static_cast<int32_t>(offsetof(SwitchForm_t2470562392, ___Multi_2)); }
	inline bool get_Multi_2() const { return ___Multi_2; }
	inline bool* get_address_of_Multi_2() { return &___Multi_2; }
	inline void set_Multi_2(bool value)
	{
		___Multi_2 = value;
	}

	inline static int32_t get_offset_of_MinLen_3() { return static_cast<int32_t>(offsetof(SwitchForm_t2470562392, ___MinLen_3)); }
	inline int32_t get_MinLen_3() const { return ___MinLen_3; }
	inline int32_t* get_address_of_MinLen_3() { return &___MinLen_3; }
	inline void set_MinLen_3(int32_t value)
	{
		___MinLen_3 = value;
	}

	inline static int32_t get_offset_of_MaxLen_4() { return static_cast<int32_t>(offsetof(SwitchForm_t2470562392, ___MaxLen_4)); }
	inline int32_t get_MaxLen_4() const { return ___MaxLen_4; }
	inline int32_t* get_address_of_MaxLen_4() { return &___MaxLen_4; }
	inline void set_MaxLen_4(int32_t value)
	{
		___MaxLen_4 = value;
	}

	inline static int32_t get_offset_of_PostCharSet_5() { return static_cast<int32_t>(offsetof(SwitchForm_t2470562392, ___PostCharSet_5)); }
	inline String_t* get_PostCharSet_5() const { return ___PostCharSet_5; }
	inline String_t** get_address_of_PostCharSet_5() { return &___PostCharSet_5; }
	inline void set_PostCharSet_5(String_t* value)
	{
		___PostCharSet_5 = value;
		Il2CppCodeGenWriteBarrier(&___PostCharSet_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
