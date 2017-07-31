#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// SevenZip.Compression.RangeCoder.BitDecoder[]
struct BitDecoderU5BU5D_t431215422;
struct BitDecoder_t1794318791 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.Compression.LZMA.Decoder/LiteralDecoder/Decoder2
struct  Decoder2_t824255155 
{
public:
	// SevenZip.Compression.RangeCoder.BitDecoder[] SevenZip.Compression.LZMA.Decoder/LiteralDecoder/Decoder2::m_Decoders
	BitDecoderU5BU5D_t431215422* ___m_Decoders_0;

public:
	inline static int32_t get_offset_of_m_Decoders_0() { return static_cast<int32_t>(offsetof(Decoder2_t824255155, ___m_Decoders_0)); }
	inline BitDecoderU5BU5D_t431215422* get_m_Decoders_0() const { return ___m_Decoders_0; }
	inline BitDecoderU5BU5D_t431215422** get_address_of_m_Decoders_0() { return &___m_Decoders_0; }
	inline void set_m_Decoders_0(BitDecoderU5BU5D_t431215422* value)
	{
		___m_Decoders_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Decoders_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SevenZip.Compression.LZMA.Decoder/LiteralDecoder/Decoder2
struct Decoder2_t824255155_marshaled_pinvoke
{
	BitDecoder_t1794318791 * ___m_Decoders_0;
};
// Native definition for COM marshalling of SevenZip.Compression.LZMA.Decoder/LiteralDecoder/Decoder2
struct Decoder2_t824255155_marshaled_com
{
	BitDecoder_t1794318791 * ___m_Decoders_0;
};
