#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Wanshili_LogLevel454476228.h"

// Wanshili.LogWriter
struct LogWriter_t3956304435;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t1848877068;
// UnityEngine.Application/LogCallback
struct LogCallback_t1867914413;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wanshili.LogManager
struct  LogManager_t4014096501  : public Il2CppObject
{
public:

public:
};

struct LogManager_t4014096501_StaticFields
{
public:
	// Wanshili.LogLevel Wanshili.LogManager::m_logLevel
	int32_t ___m_logLevel_0;
	// Wanshili.LogWriter Wanshili.LogManager::m_logWriter
	LogWriter_t3956304435 * ___m_logWriter_1;
	// System.Collections.Generic.Queue`1<System.String> Wanshili.LogManager::LogQueue
	Queue_1_t1848877068 * ___LogQueue_2;
	// System.Int32 Wanshili.LogManager::m_logQueueLength
	int32_t ___m_logQueueLength_3;
	// UnityEngine.Application/LogCallback Wanshili.LogManager::<>f__mg$cache0
	LogCallback_t1867914413 * ___U3CU3Ef__mgU24cache0_4;

public:
	inline static int32_t get_offset_of_m_logLevel_0() { return static_cast<int32_t>(offsetof(LogManager_t4014096501_StaticFields, ___m_logLevel_0)); }
	inline int32_t get_m_logLevel_0() const { return ___m_logLevel_0; }
	inline int32_t* get_address_of_m_logLevel_0() { return &___m_logLevel_0; }
	inline void set_m_logLevel_0(int32_t value)
	{
		___m_logLevel_0 = value;
	}

	inline static int32_t get_offset_of_m_logWriter_1() { return static_cast<int32_t>(offsetof(LogManager_t4014096501_StaticFields, ___m_logWriter_1)); }
	inline LogWriter_t3956304435 * get_m_logWriter_1() const { return ___m_logWriter_1; }
	inline LogWriter_t3956304435 ** get_address_of_m_logWriter_1() { return &___m_logWriter_1; }
	inline void set_m_logWriter_1(LogWriter_t3956304435 * value)
	{
		___m_logWriter_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_logWriter_1, value);
	}

	inline static int32_t get_offset_of_LogQueue_2() { return static_cast<int32_t>(offsetof(LogManager_t4014096501_StaticFields, ___LogQueue_2)); }
	inline Queue_1_t1848877068 * get_LogQueue_2() const { return ___LogQueue_2; }
	inline Queue_1_t1848877068 ** get_address_of_LogQueue_2() { return &___LogQueue_2; }
	inline void set_LogQueue_2(Queue_1_t1848877068 * value)
	{
		___LogQueue_2 = value;
		Il2CppCodeGenWriteBarrier(&___LogQueue_2, value);
	}

	inline static int32_t get_offset_of_m_logQueueLength_3() { return static_cast<int32_t>(offsetof(LogManager_t4014096501_StaticFields, ___m_logQueueLength_3)); }
	inline int32_t get_m_logQueueLength_3() const { return ___m_logQueueLength_3; }
	inline int32_t* get_address_of_m_logQueueLength_3() { return &___m_logQueueLength_3; }
	inline void set_m_logQueueLength_3(int32_t value)
	{
		___m_logQueueLength_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_4() { return static_cast<int32_t>(offsetof(LogManager_t4014096501_StaticFields, ___U3CU3Ef__mgU24cache0_4)); }
	inline LogCallback_t1867914413 * get_U3CU3Ef__mgU24cache0_4() const { return ___U3CU3Ef__mgU24cache0_4; }
	inline LogCallback_t1867914413 ** get_address_of_U3CU3Ef__mgU24cache0_4() { return &___U3CU3Ef__mgU24cache0_4; }
	inline void set_U3CU3Ef__mgU24cache0_4(LogCallback_t1867914413 * value)
	{
		___U3CU3Ef__mgU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
