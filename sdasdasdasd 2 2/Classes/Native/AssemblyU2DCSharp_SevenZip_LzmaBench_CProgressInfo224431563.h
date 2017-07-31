#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.LzmaBench/CProgressInfo
struct  CProgressInfo_t224431563  : public Il2CppObject
{
public:
	// System.Int64 SevenZip.LzmaBench/CProgressInfo::ApprovedStart
	int64_t ___ApprovedStart_0;
	// System.Int64 SevenZip.LzmaBench/CProgressInfo::InSize
	int64_t ___InSize_1;
	// System.DateTime SevenZip.LzmaBench/CProgressInfo::Time
	DateTime_t693205669  ___Time_2;

public:
	inline static int32_t get_offset_of_ApprovedStart_0() { return static_cast<int32_t>(offsetof(CProgressInfo_t224431563, ___ApprovedStart_0)); }
	inline int64_t get_ApprovedStart_0() const { return ___ApprovedStart_0; }
	inline int64_t* get_address_of_ApprovedStart_0() { return &___ApprovedStart_0; }
	inline void set_ApprovedStart_0(int64_t value)
	{
		___ApprovedStart_0 = value;
	}

	inline static int32_t get_offset_of_InSize_1() { return static_cast<int32_t>(offsetof(CProgressInfo_t224431563, ___InSize_1)); }
	inline int64_t get_InSize_1() const { return ___InSize_1; }
	inline int64_t* get_address_of_InSize_1() { return &___InSize_1; }
	inline void set_InSize_1(int64_t value)
	{
		___InSize_1 = value;
	}

	inline static int32_t get_offset_of_Time_2() { return static_cast<int32_t>(offsetof(CProgressInfo_t224431563, ___Time_2)); }
	inline DateTime_t693205669  get_Time_2() const { return ___Time_2; }
	inline DateTime_t693205669 * get_address_of_Time_2() { return &___Time_2; }
	inline void set_Time_2(DateTime_t693205669  value)
	{
		___Time_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
