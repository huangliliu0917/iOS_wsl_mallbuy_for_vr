#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_SevenZip_Compression_RangeCoder_1794318791.h"
#include "AssemblyU2DCSharp_SevenZip_Compression_RangeCoder_B673053005.h"

// SevenZip.Compression.RangeCoder.BitTreeDecoder[]
struct BitTreeDecoderU5BU5D_t714669792;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.Compression.LZMA.Decoder/LenDecoder
struct  LenDecoder_t1029379164  : public Il2CppObject
{
public:
	// SevenZip.Compression.RangeCoder.BitDecoder SevenZip.Compression.LZMA.Decoder/LenDecoder::m_Choice
	BitDecoder_t1794318791  ___m_Choice_0;
	// SevenZip.Compression.RangeCoder.BitDecoder SevenZip.Compression.LZMA.Decoder/LenDecoder::m_Choice2
	BitDecoder_t1794318791  ___m_Choice2_1;
	// SevenZip.Compression.RangeCoder.BitTreeDecoder[] SevenZip.Compression.LZMA.Decoder/LenDecoder::m_LowCoder
	BitTreeDecoderU5BU5D_t714669792* ___m_LowCoder_2;
	// SevenZip.Compression.RangeCoder.BitTreeDecoder[] SevenZip.Compression.LZMA.Decoder/LenDecoder::m_MidCoder
	BitTreeDecoderU5BU5D_t714669792* ___m_MidCoder_3;
	// SevenZip.Compression.RangeCoder.BitTreeDecoder SevenZip.Compression.LZMA.Decoder/LenDecoder::m_HighCoder
	BitTreeDecoder_t673053005  ___m_HighCoder_4;
	// System.UInt32 SevenZip.Compression.LZMA.Decoder/LenDecoder::m_NumPosStates
	uint32_t ___m_NumPosStates_5;

public:
	inline static int32_t get_offset_of_m_Choice_0() { return static_cast<int32_t>(offsetof(LenDecoder_t1029379164, ___m_Choice_0)); }
	inline BitDecoder_t1794318791  get_m_Choice_0() const { return ___m_Choice_0; }
	inline BitDecoder_t1794318791 * get_address_of_m_Choice_0() { return &___m_Choice_0; }
	inline void set_m_Choice_0(BitDecoder_t1794318791  value)
	{
		___m_Choice_0 = value;
	}

	inline static int32_t get_offset_of_m_Choice2_1() { return static_cast<int32_t>(offsetof(LenDecoder_t1029379164, ___m_Choice2_1)); }
	inline BitDecoder_t1794318791  get_m_Choice2_1() const { return ___m_Choice2_1; }
	inline BitDecoder_t1794318791 * get_address_of_m_Choice2_1() { return &___m_Choice2_1; }
	inline void set_m_Choice2_1(BitDecoder_t1794318791  value)
	{
		___m_Choice2_1 = value;
	}

	inline static int32_t get_offset_of_m_LowCoder_2() { return static_cast<int32_t>(offsetof(LenDecoder_t1029379164, ___m_LowCoder_2)); }
	inline BitTreeDecoderU5BU5D_t714669792* get_m_LowCoder_2() const { return ___m_LowCoder_2; }
	inline BitTreeDecoderU5BU5D_t714669792** get_address_of_m_LowCoder_2() { return &___m_LowCoder_2; }
	inline void set_m_LowCoder_2(BitTreeDecoderU5BU5D_t714669792* value)
	{
		___m_LowCoder_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_LowCoder_2, value);
	}

	inline static int32_t get_offset_of_m_MidCoder_3() { return static_cast<int32_t>(offsetof(LenDecoder_t1029379164, ___m_MidCoder_3)); }
	inline BitTreeDecoderU5BU5D_t714669792* get_m_MidCoder_3() const { return ___m_MidCoder_3; }
	inline BitTreeDecoderU5BU5D_t714669792** get_address_of_m_MidCoder_3() { return &___m_MidCoder_3; }
	inline void set_m_MidCoder_3(BitTreeDecoderU5BU5D_t714669792* value)
	{
		___m_MidCoder_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_MidCoder_3, value);
	}

	inline static int32_t get_offset_of_m_HighCoder_4() { return static_cast<int32_t>(offsetof(LenDecoder_t1029379164, ___m_HighCoder_4)); }
	inline BitTreeDecoder_t673053005  get_m_HighCoder_4() const { return ___m_HighCoder_4; }
	inline BitTreeDecoder_t673053005 * get_address_of_m_HighCoder_4() { return &___m_HighCoder_4; }
	inline void set_m_HighCoder_4(BitTreeDecoder_t673053005  value)
	{
		___m_HighCoder_4 = value;
	}

	inline static int32_t get_offset_of_m_NumPosStates_5() { return static_cast<int32_t>(offsetof(LenDecoder_t1029379164, ___m_NumPosStates_5)); }
	inline uint32_t get_m_NumPosStates_5() const { return ___m_NumPosStates_5; }
	inline uint32_t* get_address_of_m_NumPosStates_5() { return &___m_NumPosStates_5; }
	inline void set_m_NumPosStates_5(uint32_t value)
	{
		___m_NumPosStates_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
