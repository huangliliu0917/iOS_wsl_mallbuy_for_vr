#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.Buffer.OutBuffer
struct  OutBuffer_t262865936  : public Il2CppObject
{
public:
	// System.Byte[] SevenZip.Buffer.OutBuffer::m_Buffer
	ByteU5BU5D_t3397334013* ___m_Buffer_0;
	// System.UInt32 SevenZip.Buffer.OutBuffer::m_Pos
	uint32_t ___m_Pos_1;
	// System.UInt32 SevenZip.Buffer.OutBuffer::m_BufferSize
	uint32_t ___m_BufferSize_2;
	// System.IO.Stream SevenZip.Buffer.OutBuffer::m_Stream
	Stream_t3255436806 * ___m_Stream_3;
	// System.UInt64 SevenZip.Buffer.OutBuffer::m_ProcessedSize
	uint64_t ___m_ProcessedSize_4;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(OutBuffer_t262865936, ___m_Buffer_0)); }
	inline ByteU5BU5D_t3397334013* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(ByteU5BU5D_t3397334013* value)
	{
		___m_Buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Buffer_0, value);
	}

	inline static int32_t get_offset_of_m_Pos_1() { return static_cast<int32_t>(offsetof(OutBuffer_t262865936, ___m_Pos_1)); }
	inline uint32_t get_m_Pos_1() const { return ___m_Pos_1; }
	inline uint32_t* get_address_of_m_Pos_1() { return &___m_Pos_1; }
	inline void set_m_Pos_1(uint32_t value)
	{
		___m_Pos_1 = value;
	}

	inline static int32_t get_offset_of_m_BufferSize_2() { return static_cast<int32_t>(offsetof(OutBuffer_t262865936, ___m_BufferSize_2)); }
	inline uint32_t get_m_BufferSize_2() const { return ___m_BufferSize_2; }
	inline uint32_t* get_address_of_m_BufferSize_2() { return &___m_BufferSize_2; }
	inline void set_m_BufferSize_2(uint32_t value)
	{
		___m_BufferSize_2 = value;
	}

	inline static int32_t get_offset_of_m_Stream_3() { return static_cast<int32_t>(offsetof(OutBuffer_t262865936, ___m_Stream_3)); }
	inline Stream_t3255436806 * get_m_Stream_3() const { return ___m_Stream_3; }
	inline Stream_t3255436806 ** get_address_of_m_Stream_3() { return &___m_Stream_3; }
	inline void set_m_Stream_3(Stream_t3255436806 * value)
	{
		___m_Stream_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Stream_3, value);
	}

	inline static int32_t get_offset_of_m_ProcessedSize_4() { return static_cast<int32_t>(offsetof(OutBuffer_t262865936, ___m_ProcessedSize_4)); }
	inline uint64_t get_m_ProcessedSize_4() const { return ___m_ProcessedSize_4; }
	inline uint64_t* get_address_of_m_ProcessedSize_4() { return &___m_ProcessedSize_4; }
	inline void set_m_ProcessedSize_4(uint64_t value)
	{
		___m_ProcessedSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
