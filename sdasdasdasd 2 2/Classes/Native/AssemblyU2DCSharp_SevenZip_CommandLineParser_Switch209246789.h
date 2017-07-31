#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.ArrayList
struct ArrayList_t4252133567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.CommandLineParser.SwitchResult
struct  SwitchResult_t209246789  : public Il2CppObject
{
public:
	// System.Boolean SevenZip.CommandLineParser.SwitchResult::ThereIs
	bool ___ThereIs_0;
	// System.Boolean SevenZip.CommandLineParser.SwitchResult::WithMinus
	bool ___WithMinus_1;
	// System.Collections.ArrayList SevenZip.CommandLineParser.SwitchResult::PostStrings
	ArrayList_t4252133567 * ___PostStrings_2;
	// System.Int32 SevenZip.CommandLineParser.SwitchResult::PostCharIndex
	int32_t ___PostCharIndex_3;

public:
	inline static int32_t get_offset_of_ThereIs_0() { return static_cast<int32_t>(offsetof(SwitchResult_t209246789, ___ThereIs_0)); }
	inline bool get_ThereIs_0() const { return ___ThereIs_0; }
	inline bool* get_address_of_ThereIs_0() { return &___ThereIs_0; }
	inline void set_ThereIs_0(bool value)
	{
		___ThereIs_0 = value;
	}

	inline static int32_t get_offset_of_WithMinus_1() { return static_cast<int32_t>(offsetof(SwitchResult_t209246789, ___WithMinus_1)); }
	inline bool get_WithMinus_1() const { return ___WithMinus_1; }
	inline bool* get_address_of_WithMinus_1() { return &___WithMinus_1; }
	inline void set_WithMinus_1(bool value)
	{
		___WithMinus_1 = value;
	}

	inline static int32_t get_offset_of_PostStrings_2() { return static_cast<int32_t>(offsetof(SwitchResult_t209246789, ___PostStrings_2)); }
	inline ArrayList_t4252133567 * get_PostStrings_2() const { return ___PostStrings_2; }
	inline ArrayList_t4252133567 ** get_address_of_PostStrings_2() { return &___PostStrings_2; }
	inline void set_PostStrings_2(ArrayList_t4252133567 * value)
	{
		___PostStrings_2 = value;
		Il2CppCodeGenWriteBarrier(&___PostStrings_2, value);
	}

	inline static int32_t get_offset_of_PostCharIndex_3() { return static_cast<int32_t>(offsetof(SwitchResult_t209246789, ___PostCharIndex_3)); }
	inline int32_t get_PostCharIndex_3() const { return ___PostCharIndex_3; }
	inline int32_t* get_address_of_PostCharIndex_3() { return &___PostCharIndex_3; }
	inline void set_PostCharIndex_3(int32_t value)
	{
		___PostCharIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
