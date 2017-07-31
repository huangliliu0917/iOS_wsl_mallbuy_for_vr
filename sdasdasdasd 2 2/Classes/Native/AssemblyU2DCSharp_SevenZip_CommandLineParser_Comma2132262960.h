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

// SevenZip.CommandLineParser.CommandSubCharsSet
struct  CommandSubCharsSet_t2132262960  : public Il2CppObject
{
public:
	// System.String SevenZip.CommandLineParser.CommandSubCharsSet::Chars
	String_t* ___Chars_0;
	// System.Boolean SevenZip.CommandLineParser.CommandSubCharsSet::EmptyAllowed
	bool ___EmptyAllowed_1;

public:
	inline static int32_t get_offset_of_Chars_0() { return static_cast<int32_t>(offsetof(CommandSubCharsSet_t2132262960, ___Chars_0)); }
	inline String_t* get_Chars_0() const { return ___Chars_0; }
	inline String_t** get_address_of_Chars_0() { return &___Chars_0; }
	inline void set_Chars_0(String_t* value)
	{
		___Chars_0 = value;
		Il2CppCodeGenWriteBarrier(&___Chars_0, value);
	}

	inline static int32_t get_offset_of_EmptyAllowed_1() { return static_cast<int32_t>(offsetof(CommandSubCharsSet_t2132262960, ___EmptyAllowed_1)); }
	inline bool get_EmptyAllowed_1() const { return ___EmptyAllowed_1; }
	inline bool* get_address_of_EmptyAllowed_1() { return &___EmptyAllowed_1; }
	inline void set_EmptyAllowed_1(bool value)
	{
		___EmptyAllowed_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
