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

// Wanshili.LogWriter
struct  LogWriter_t3956304435  : public Il2CppObject
{
public:
	// System.String Wanshili.LogWriter::m_logPath
	String_t* ___m_logPath_0;
	// System.String Wanshili.LogWriter::m_logFileName
	String_t* ___m_logFileName_1;
	// System.String Wanshili.LogWriter::m_logFilePath
	String_t* ___m_logFilePath_2;

public:
	inline static int32_t get_offset_of_m_logPath_0() { return static_cast<int32_t>(offsetof(LogWriter_t3956304435, ___m_logPath_0)); }
	inline String_t* get_m_logPath_0() const { return ___m_logPath_0; }
	inline String_t** get_address_of_m_logPath_0() { return &___m_logPath_0; }
	inline void set_m_logPath_0(String_t* value)
	{
		___m_logPath_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_logPath_0, value);
	}

	inline static int32_t get_offset_of_m_logFileName_1() { return static_cast<int32_t>(offsetof(LogWriter_t3956304435, ___m_logFileName_1)); }
	inline String_t* get_m_logFileName_1() const { return ___m_logFileName_1; }
	inline String_t** get_address_of_m_logFileName_1() { return &___m_logFileName_1; }
	inline void set_m_logFileName_1(String_t* value)
	{
		___m_logFileName_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_logFileName_1, value);
	}

	inline static int32_t get_offset_of_m_logFilePath_2() { return static_cast<int32_t>(offsetof(LogWriter_t3956304435, ___m_logFilePath_2)); }
	inline String_t* get_m_logFilePath_2() const { return ___m_logFilePath_2; }
	inline String_t** get_address_of_m_logFilePath_2() { return &___m_logFilePath_2; }
	inline void set_m_logFilePath_2(String_t* value)
	{
		___m_logFilePath_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_logFilePath_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
