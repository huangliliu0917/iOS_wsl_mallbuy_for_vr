#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream3255436806.h"

// System.IO.Stream
struct Stream_t3255436806;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.CDoubleStream
struct  CDoubleStream_t4045919250  : public Stream_t3255436806
{
public:
	// System.IO.Stream SevenZip.CDoubleStream::s1
	Stream_t3255436806 * ___s1_1;
	// System.IO.Stream SevenZip.CDoubleStream::s2
	Stream_t3255436806 * ___s2_2;
	// System.Int32 SevenZip.CDoubleStream::fileIndex
	int32_t ___fileIndex_3;
	// System.Int64 SevenZip.CDoubleStream::skipSize
	int64_t ___skipSize_4;

public:
	inline static int32_t get_offset_of_s1_1() { return static_cast<int32_t>(offsetof(CDoubleStream_t4045919250, ___s1_1)); }
	inline Stream_t3255436806 * get_s1_1() const { return ___s1_1; }
	inline Stream_t3255436806 ** get_address_of_s1_1() { return &___s1_1; }
	inline void set_s1_1(Stream_t3255436806 * value)
	{
		___s1_1 = value;
		Il2CppCodeGenWriteBarrier(&___s1_1, value);
	}

	inline static int32_t get_offset_of_s2_2() { return static_cast<int32_t>(offsetof(CDoubleStream_t4045919250, ___s2_2)); }
	inline Stream_t3255436806 * get_s2_2() const { return ___s2_2; }
	inline Stream_t3255436806 ** get_address_of_s2_2() { return &___s2_2; }
	inline void set_s2_2(Stream_t3255436806 * value)
	{
		___s2_2 = value;
		Il2CppCodeGenWriteBarrier(&___s2_2, value);
	}

	inline static int32_t get_offset_of_fileIndex_3() { return static_cast<int32_t>(offsetof(CDoubleStream_t4045919250, ___fileIndex_3)); }
	inline int32_t get_fileIndex_3() const { return ___fileIndex_3; }
	inline int32_t* get_address_of_fileIndex_3() { return &___fileIndex_3; }
	inline void set_fileIndex_3(int32_t value)
	{
		___fileIndex_3 = value;
	}

	inline static int32_t get_offset_of_skipSize_4() { return static_cast<int32_t>(offsetof(CDoubleStream_t4045919250, ___skipSize_4)); }
	inline int64_t get_skipSize_4() const { return ___skipSize_4; }
	inline int64_t* get_address_of_skipSize_4() { return &___skipSize_4; }
	inline void set_skipSize_4(int64_t value)
	{
		___skipSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
