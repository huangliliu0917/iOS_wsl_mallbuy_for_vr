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
// SevenZip.CommandLineParser.SwitchResult[]
struct SwitchResultU5BU5D_t3638846216;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.CommandLineParser.Parser
struct  Parser_t107488017  : public Il2CppObject
{
public:
	// System.Collections.ArrayList SevenZip.CommandLineParser.Parser::NonSwitchStrings
	ArrayList_t4252133567 * ___NonSwitchStrings_0;
	// SevenZip.CommandLineParser.SwitchResult[] SevenZip.CommandLineParser.Parser::_switches
	SwitchResultU5BU5D_t3638846216* ____switches_1;

public:
	inline static int32_t get_offset_of_NonSwitchStrings_0() { return static_cast<int32_t>(offsetof(Parser_t107488017, ___NonSwitchStrings_0)); }
	inline ArrayList_t4252133567 * get_NonSwitchStrings_0() const { return ___NonSwitchStrings_0; }
	inline ArrayList_t4252133567 ** get_address_of_NonSwitchStrings_0() { return &___NonSwitchStrings_0; }
	inline void set_NonSwitchStrings_0(ArrayList_t4252133567 * value)
	{
		___NonSwitchStrings_0 = value;
		Il2CppCodeGenWriteBarrier(&___NonSwitchStrings_0, value);
	}

	inline static int32_t get_offset_of__switches_1() { return static_cast<int32_t>(offsetof(Parser_t107488017, ____switches_1)); }
	inline SwitchResultU5BU5D_t3638846216* get__switches_1() const { return ____switches_1; }
	inline SwitchResultU5BU5D_t3638846216** get_address_of__switches_1() { return &____switches_1; }
	inline void set__switches_1(SwitchResultU5BU5D_t3638846216* value)
	{
		____switches_1 = value;
		Il2CppCodeGenWriteBarrier(&____switches_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
