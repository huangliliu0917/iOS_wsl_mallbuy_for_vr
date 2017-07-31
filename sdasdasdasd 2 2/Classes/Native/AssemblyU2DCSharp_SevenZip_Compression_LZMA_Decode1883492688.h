#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SevenZip.Compression.LZMA.Decoder/LiteralDecoder/Decoder2[]
struct Decoder2U5BU5D_t1981543714;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.Compression.LZMA.Decoder/LiteralDecoder
struct  LiteralDecoder_t1883492688  : public Il2CppObject
{
public:
	// SevenZip.Compression.LZMA.Decoder/LiteralDecoder/Decoder2[] SevenZip.Compression.LZMA.Decoder/LiteralDecoder::m_Coders
	Decoder2U5BU5D_t1981543714* ___m_Coders_0;
	// System.Int32 SevenZip.Compression.LZMA.Decoder/LiteralDecoder::m_NumPrevBits
	int32_t ___m_NumPrevBits_1;
	// System.Int32 SevenZip.Compression.LZMA.Decoder/LiteralDecoder::m_NumPosBits
	int32_t ___m_NumPosBits_2;
	// System.UInt32 SevenZip.Compression.LZMA.Decoder/LiteralDecoder::m_PosMask
	uint32_t ___m_PosMask_3;

public:
	inline static int32_t get_offset_of_m_Coders_0() { return static_cast<int32_t>(offsetof(LiteralDecoder_t1883492688, ___m_Coders_0)); }
	inline Decoder2U5BU5D_t1981543714* get_m_Coders_0() const { return ___m_Coders_0; }
	inline Decoder2U5BU5D_t1981543714** get_address_of_m_Coders_0() { return &___m_Coders_0; }
	inline void set_m_Coders_0(Decoder2U5BU5D_t1981543714* value)
	{
		___m_Coders_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Coders_0, value);
	}

	inline static int32_t get_offset_of_m_NumPrevBits_1() { return static_cast<int32_t>(offsetof(LiteralDecoder_t1883492688, ___m_NumPrevBits_1)); }
	inline int32_t get_m_NumPrevBits_1() const { return ___m_NumPrevBits_1; }
	inline int32_t* get_address_of_m_NumPrevBits_1() { return &___m_NumPrevBits_1; }
	inline void set_m_NumPrevBits_1(int32_t value)
	{
		___m_NumPrevBits_1 = value;
	}

	inline static int32_t get_offset_of_m_NumPosBits_2() { return static_cast<int32_t>(offsetof(LiteralDecoder_t1883492688, ___m_NumPosBits_2)); }
	inline int32_t get_m_NumPosBits_2() const { return ___m_NumPosBits_2; }
	inline int32_t* get_address_of_m_NumPosBits_2() { return &___m_NumPosBits_2; }
	inline void set_m_NumPosBits_2(int32_t value)
	{
		___m_NumPosBits_2 = value;
	}

	inline static int32_t get_offset_of_m_PosMask_3() { return static_cast<int32_t>(offsetof(LiteralDecoder_t1883492688, ___m_PosMask_3)); }
	inline uint32_t get_m_PosMask_3() const { return ___m_PosMask_3; }
	inline uint32_t* get_address_of_m_PosMask_3() { return &___m_PosMask_3; }
	inline void set_m_PosMask_3(uint32_t value)
	{
		___m_PosMask_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
