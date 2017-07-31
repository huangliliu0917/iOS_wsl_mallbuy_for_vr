#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream3255436806.h"

// SevenZip.CRC
struct CRC_t3360462988;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.LzmaBench/CrcOutStream
struct  CrcOutStream_t1984195059  : public Stream_t3255436806
{
public:
	// SevenZip.CRC SevenZip.LzmaBench/CrcOutStream::CRC
	CRC_t3360462988 * ___CRC_1;

public:
	inline static int32_t get_offset_of_CRC_1() { return static_cast<int32_t>(offsetof(CrcOutStream_t1984195059, ___CRC_1)); }
	inline CRC_t3360462988 * get_CRC_1() const { return ___CRC_1; }
	inline CRC_t3360462988 ** get_address_of_CRC_1() { return &___CRC_1; }
	inline void set_CRC_1(CRC_t3360462988 * value)
	{
		___CRC_1 = value;
		Il2CppCodeGenWriteBarrier(&___CRC_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
