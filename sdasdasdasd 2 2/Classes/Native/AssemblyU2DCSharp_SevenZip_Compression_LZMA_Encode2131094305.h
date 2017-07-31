#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// SevenZip.Compression.RangeCoder.BitEncoder[]
struct BitEncoderU5BU5D_t3186735324;
struct BitEncoder_t1457660417 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.Compression.LZMA.Encoder/LiteralEncoder/Encoder2
struct  Encoder2_t2131094305 
{
public:
	// SevenZip.Compression.RangeCoder.BitEncoder[] SevenZip.Compression.LZMA.Encoder/LiteralEncoder/Encoder2::m_Encoders
	BitEncoderU5BU5D_t3186735324* ___m_Encoders_0;

public:
	inline static int32_t get_offset_of_m_Encoders_0() { return static_cast<int32_t>(offsetof(Encoder2_t2131094305, ___m_Encoders_0)); }
	inline BitEncoderU5BU5D_t3186735324* get_m_Encoders_0() const { return ___m_Encoders_0; }
	inline BitEncoderU5BU5D_t3186735324** get_address_of_m_Encoders_0() { return &___m_Encoders_0; }
	inline void set_m_Encoders_0(BitEncoderU5BU5D_t3186735324* value)
	{
		___m_Encoders_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Encoders_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of SevenZip.Compression.LZMA.Encoder/LiteralEncoder/Encoder2
struct Encoder2_t2131094305_marshaled_pinvoke
{
	BitEncoder_t1457660417 * ___m_Encoders_0;
};
// Native definition for COM marshalling of SevenZip.Compression.LZMA.Encoder/LiteralEncoder/Encoder2
struct Encoder2_t2131094305_marshaled_com
{
	BitEncoder_t1457660417 * ___m_Encoders_0;
};
