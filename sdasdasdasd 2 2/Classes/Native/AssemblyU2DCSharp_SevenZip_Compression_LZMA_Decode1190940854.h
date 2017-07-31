#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_SevenZip_Compression_RangeCoder_B673053005.h"

// SevenZip.Compression.LZ.OutWindow
struct OutWindow_t779643166;
// SevenZip.Compression.RangeCoder.Decoder
struct Decoder_t2906543358;
// SevenZip.Compression.RangeCoder.BitDecoder[]
struct BitDecoderU5BU5D_t431215422;
// SevenZip.Compression.RangeCoder.BitTreeDecoder[]
struct BitTreeDecoderU5BU5D_t714669792;
// SevenZip.Compression.LZMA.Decoder/LenDecoder
struct LenDecoder_t1029379164;
// SevenZip.Compression.LZMA.Decoder/LiteralDecoder
struct LiteralDecoder_t1883492688;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.Compression.LZMA.Decoder
struct  Decoder_t1190940854  : public Il2CppObject
{
public:
	// SevenZip.Compression.LZ.OutWindow SevenZip.Compression.LZMA.Decoder::m_OutWindow
	OutWindow_t779643166 * ___m_OutWindow_0;
	// SevenZip.Compression.RangeCoder.Decoder SevenZip.Compression.LZMA.Decoder::m_RangeDecoder
	Decoder_t2906543358 * ___m_RangeDecoder_1;
	// SevenZip.Compression.RangeCoder.BitDecoder[] SevenZip.Compression.LZMA.Decoder::m_IsMatchDecoders
	BitDecoderU5BU5D_t431215422* ___m_IsMatchDecoders_2;
	// SevenZip.Compression.RangeCoder.BitDecoder[] SevenZip.Compression.LZMA.Decoder::m_IsRepDecoders
	BitDecoderU5BU5D_t431215422* ___m_IsRepDecoders_3;
	// SevenZip.Compression.RangeCoder.BitDecoder[] SevenZip.Compression.LZMA.Decoder::m_IsRepG0Decoders
	BitDecoderU5BU5D_t431215422* ___m_IsRepG0Decoders_4;
	// SevenZip.Compression.RangeCoder.BitDecoder[] SevenZip.Compression.LZMA.Decoder::m_IsRepG1Decoders
	BitDecoderU5BU5D_t431215422* ___m_IsRepG1Decoders_5;
	// SevenZip.Compression.RangeCoder.BitDecoder[] SevenZip.Compression.LZMA.Decoder::m_IsRepG2Decoders
	BitDecoderU5BU5D_t431215422* ___m_IsRepG2Decoders_6;
	// SevenZip.Compression.RangeCoder.BitDecoder[] SevenZip.Compression.LZMA.Decoder::m_IsRep0LongDecoders
	BitDecoderU5BU5D_t431215422* ___m_IsRep0LongDecoders_7;
	// SevenZip.Compression.RangeCoder.BitTreeDecoder[] SevenZip.Compression.LZMA.Decoder::m_PosSlotDecoder
	BitTreeDecoderU5BU5D_t714669792* ___m_PosSlotDecoder_8;
	// SevenZip.Compression.RangeCoder.BitDecoder[] SevenZip.Compression.LZMA.Decoder::m_PosDecoders
	BitDecoderU5BU5D_t431215422* ___m_PosDecoders_9;
	// SevenZip.Compression.RangeCoder.BitTreeDecoder SevenZip.Compression.LZMA.Decoder::m_PosAlignDecoder
	BitTreeDecoder_t673053005  ___m_PosAlignDecoder_10;
	// SevenZip.Compression.LZMA.Decoder/LenDecoder SevenZip.Compression.LZMA.Decoder::m_LenDecoder
	LenDecoder_t1029379164 * ___m_LenDecoder_11;
	// SevenZip.Compression.LZMA.Decoder/LenDecoder SevenZip.Compression.LZMA.Decoder::m_RepLenDecoder
	LenDecoder_t1029379164 * ___m_RepLenDecoder_12;
	// SevenZip.Compression.LZMA.Decoder/LiteralDecoder SevenZip.Compression.LZMA.Decoder::m_LiteralDecoder
	LiteralDecoder_t1883492688 * ___m_LiteralDecoder_13;
	// System.UInt32 SevenZip.Compression.LZMA.Decoder::m_DictionarySize
	uint32_t ___m_DictionarySize_14;
	// System.UInt32 SevenZip.Compression.LZMA.Decoder::m_DictionarySizeCheck
	uint32_t ___m_DictionarySizeCheck_15;
	// System.UInt32 SevenZip.Compression.LZMA.Decoder::m_PosStateMask
	uint32_t ___m_PosStateMask_16;
	// System.Boolean SevenZip.Compression.LZMA.Decoder::_solid
	bool ____solid_17;

public:
	inline static int32_t get_offset_of_m_OutWindow_0() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_OutWindow_0)); }
	inline OutWindow_t779643166 * get_m_OutWindow_0() const { return ___m_OutWindow_0; }
	inline OutWindow_t779643166 ** get_address_of_m_OutWindow_0() { return &___m_OutWindow_0; }
	inline void set_m_OutWindow_0(OutWindow_t779643166 * value)
	{
		___m_OutWindow_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_OutWindow_0, value);
	}

	inline static int32_t get_offset_of_m_RangeDecoder_1() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_RangeDecoder_1)); }
	inline Decoder_t2906543358 * get_m_RangeDecoder_1() const { return ___m_RangeDecoder_1; }
	inline Decoder_t2906543358 ** get_address_of_m_RangeDecoder_1() { return &___m_RangeDecoder_1; }
	inline void set_m_RangeDecoder_1(Decoder_t2906543358 * value)
	{
		___m_RangeDecoder_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_RangeDecoder_1, value);
	}

	inline static int32_t get_offset_of_m_IsMatchDecoders_2() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_IsMatchDecoders_2)); }
	inline BitDecoderU5BU5D_t431215422* get_m_IsMatchDecoders_2() const { return ___m_IsMatchDecoders_2; }
	inline BitDecoderU5BU5D_t431215422** get_address_of_m_IsMatchDecoders_2() { return &___m_IsMatchDecoders_2; }
	inline void set_m_IsMatchDecoders_2(BitDecoderU5BU5D_t431215422* value)
	{
		___m_IsMatchDecoders_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_IsMatchDecoders_2, value);
	}

	inline static int32_t get_offset_of_m_IsRepDecoders_3() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_IsRepDecoders_3)); }
	inline BitDecoderU5BU5D_t431215422* get_m_IsRepDecoders_3() const { return ___m_IsRepDecoders_3; }
	inline BitDecoderU5BU5D_t431215422** get_address_of_m_IsRepDecoders_3() { return &___m_IsRepDecoders_3; }
	inline void set_m_IsRepDecoders_3(BitDecoderU5BU5D_t431215422* value)
	{
		___m_IsRepDecoders_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_IsRepDecoders_3, value);
	}

	inline static int32_t get_offset_of_m_IsRepG0Decoders_4() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_IsRepG0Decoders_4)); }
	inline BitDecoderU5BU5D_t431215422* get_m_IsRepG0Decoders_4() const { return ___m_IsRepG0Decoders_4; }
	inline BitDecoderU5BU5D_t431215422** get_address_of_m_IsRepG0Decoders_4() { return &___m_IsRepG0Decoders_4; }
	inline void set_m_IsRepG0Decoders_4(BitDecoderU5BU5D_t431215422* value)
	{
		___m_IsRepG0Decoders_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_IsRepG0Decoders_4, value);
	}

	inline static int32_t get_offset_of_m_IsRepG1Decoders_5() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_IsRepG1Decoders_5)); }
	inline BitDecoderU5BU5D_t431215422* get_m_IsRepG1Decoders_5() const { return ___m_IsRepG1Decoders_5; }
	inline BitDecoderU5BU5D_t431215422** get_address_of_m_IsRepG1Decoders_5() { return &___m_IsRepG1Decoders_5; }
	inline void set_m_IsRepG1Decoders_5(BitDecoderU5BU5D_t431215422* value)
	{
		___m_IsRepG1Decoders_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_IsRepG1Decoders_5, value);
	}

	inline static int32_t get_offset_of_m_IsRepG2Decoders_6() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_IsRepG2Decoders_6)); }
	inline BitDecoderU5BU5D_t431215422* get_m_IsRepG2Decoders_6() const { return ___m_IsRepG2Decoders_6; }
	inline BitDecoderU5BU5D_t431215422** get_address_of_m_IsRepG2Decoders_6() { return &___m_IsRepG2Decoders_6; }
	inline void set_m_IsRepG2Decoders_6(BitDecoderU5BU5D_t431215422* value)
	{
		___m_IsRepG2Decoders_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_IsRepG2Decoders_6, value);
	}

	inline static int32_t get_offset_of_m_IsRep0LongDecoders_7() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_IsRep0LongDecoders_7)); }
	inline BitDecoderU5BU5D_t431215422* get_m_IsRep0LongDecoders_7() const { return ___m_IsRep0LongDecoders_7; }
	inline BitDecoderU5BU5D_t431215422** get_address_of_m_IsRep0LongDecoders_7() { return &___m_IsRep0LongDecoders_7; }
	inline void set_m_IsRep0LongDecoders_7(BitDecoderU5BU5D_t431215422* value)
	{
		___m_IsRep0LongDecoders_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_IsRep0LongDecoders_7, value);
	}

	inline static int32_t get_offset_of_m_PosSlotDecoder_8() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_PosSlotDecoder_8)); }
	inline BitTreeDecoderU5BU5D_t714669792* get_m_PosSlotDecoder_8() const { return ___m_PosSlotDecoder_8; }
	inline BitTreeDecoderU5BU5D_t714669792** get_address_of_m_PosSlotDecoder_8() { return &___m_PosSlotDecoder_8; }
	inline void set_m_PosSlotDecoder_8(BitTreeDecoderU5BU5D_t714669792* value)
	{
		___m_PosSlotDecoder_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_PosSlotDecoder_8, value);
	}

	inline static int32_t get_offset_of_m_PosDecoders_9() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_PosDecoders_9)); }
	inline BitDecoderU5BU5D_t431215422* get_m_PosDecoders_9() const { return ___m_PosDecoders_9; }
	inline BitDecoderU5BU5D_t431215422** get_address_of_m_PosDecoders_9() { return &___m_PosDecoders_9; }
	inline void set_m_PosDecoders_9(BitDecoderU5BU5D_t431215422* value)
	{
		___m_PosDecoders_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_PosDecoders_9, value);
	}

	inline static int32_t get_offset_of_m_PosAlignDecoder_10() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_PosAlignDecoder_10)); }
	inline BitTreeDecoder_t673053005  get_m_PosAlignDecoder_10() const { return ___m_PosAlignDecoder_10; }
	inline BitTreeDecoder_t673053005 * get_address_of_m_PosAlignDecoder_10() { return &___m_PosAlignDecoder_10; }
	inline void set_m_PosAlignDecoder_10(BitTreeDecoder_t673053005  value)
	{
		___m_PosAlignDecoder_10 = value;
	}

	inline static int32_t get_offset_of_m_LenDecoder_11() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_LenDecoder_11)); }
	inline LenDecoder_t1029379164 * get_m_LenDecoder_11() const { return ___m_LenDecoder_11; }
	inline LenDecoder_t1029379164 ** get_address_of_m_LenDecoder_11() { return &___m_LenDecoder_11; }
	inline void set_m_LenDecoder_11(LenDecoder_t1029379164 * value)
	{
		___m_LenDecoder_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_LenDecoder_11, value);
	}

	inline static int32_t get_offset_of_m_RepLenDecoder_12() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_RepLenDecoder_12)); }
	inline LenDecoder_t1029379164 * get_m_RepLenDecoder_12() const { return ___m_RepLenDecoder_12; }
	inline LenDecoder_t1029379164 ** get_address_of_m_RepLenDecoder_12() { return &___m_RepLenDecoder_12; }
	inline void set_m_RepLenDecoder_12(LenDecoder_t1029379164 * value)
	{
		___m_RepLenDecoder_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_RepLenDecoder_12, value);
	}

	inline static int32_t get_offset_of_m_LiteralDecoder_13() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_LiteralDecoder_13)); }
	inline LiteralDecoder_t1883492688 * get_m_LiteralDecoder_13() const { return ___m_LiteralDecoder_13; }
	inline LiteralDecoder_t1883492688 ** get_address_of_m_LiteralDecoder_13() { return &___m_LiteralDecoder_13; }
	inline void set_m_LiteralDecoder_13(LiteralDecoder_t1883492688 * value)
	{
		___m_LiteralDecoder_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_LiteralDecoder_13, value);
	}

	inline static int32_t get_offset_of_m_DictionarySize_14() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_DictionarySize_14)); }
	inline uint32_t get_m_DictionarySize_14() const { return ___m_DictionarySize_14; }
	inline uint32_t* get_address_of_m_DictionarySize_14() { return &___m_DictionarySize_14; }
	inline void set_m_DictionarySize_14(uint32_t value)
	{
		___m_DictionarySize_14 = value;
	}

	inline static int32_t get_offset_of_m_DictionarySizeCheck_15() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_DictionarySizeCheck_15)); }
	inline uint32_t get_m_DictionarySizeCheck_15() const { return ___m_DictionarySizeCheck_15; }
	inline uint32_t* get_address_of_m_DictionarySizeCheck_15() { return &___m_DictionarySizeCheck_15; }
	inline void set_m_DictionarySizeCheck_15(uint32_t value)
	{
		___m_DictionarySizeCheck_15 = value;
	}

	inline static int32_t get_offset_of_m_PosStateMask_16() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ___m_PosStateMask_16)); }
	inline uint32_t get_m_PosStateMask_16() const { return ___m_PosStateMask_16; }
	inline uint32_t* get_address_of_m_PosStateMask_16() { return &___m_PosStateMask_16; }
	inline void set_m_PosStateMask_16(uint32_t value)
	{
		___m_PosStateMask_16 = value;
	}

	inline static int32_t get_offset_of__solid_17() { return static_cast<int32_t>(offsetof(Decoder_t1190940854, ____solid_17)); }
	inline bool get__solid_17() const { return ____solid_17; }
	inline bool* get_address_of__solid_17() { return &____solid_17; }
	inline void set__solid_17(bool value)
	{
		____solid_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
