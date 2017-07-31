#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_SevenZip_Compression_LZMA_Base_St932797237.h"
#include "AssemblyU2DCSharp_SevenZip_Compression_RangeCoder_1009728003.h"
#include "AssemblyU2DCSharp_SevenZip_Compression_LZMA_Encode2083853187.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// SevenZip.Compression.LZMA.Encoder/Optimal[]
struct OptimalU5BU5D_t937800156;
// SevenZip.Compression.LZ.IMatchFinder
struct IMatchFinder_t402388282;
// SevenZip.Compression.RangeCoder.Encoder
struct Encoder_t4138061994;
// SevenZip.Compression.RangeCoder.BitEncoder[]
struct BitEncoderU5BU5D_t3186735324;
// SevenZip.Compression.RangeCoder.BitTreeEncoder[]
struct BitTreeEncoderU5BU5D_t1510639250;
// SevenZip.Compression.LZMA.Encoder/LenPriceTableEncoder
struct LenPriceTableEncoder_t1105478683;
// SevenZip.Compression.LZMA.Encoder/LiteralEncoder
struct LiteralEncoder_t2284659944;
// System.IO.Stream
struct Stream_t3255436806;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.Compression.LZMA.Encoder
struct  Encoder_t4232000206  : public Il2CppObject
{
public:
	// SevenZip.Compression.LZMA.Base/State SevenZip.Compression.LZMA.Encoder::_state
	State_t932797237  ____state_2;
	// System.Byte SevenZip.Compression.LZMA.Encoder::_previousByte
	uint8_t ____previousByte_3;
	// System.UInt32[] SevenZip.Compression.LZMA.Encoder::_repDistances
	UInt32U5BU5D_t59386216* ____repDistances_4;
	// SevenZip.Compression.LZMA.Encoder/Optimal[] SevenZip.Compression.LZMA.Encoder::_optimum
	OptimalU5BU5D_t937800156* ____optimum_9;
	// SevenZip.Compression.LZ.IMatchFinder SevenZip.Compression.LZMA.Encoder::_matchFinder
	Il2CppObject * ____matchFinder_10;
	// SevenZip.Compression.RangeCoder.Encoder SevenZip.Compression.LZMA.Encoder::_rangeEncoder
	Encoder_t4138061994 * ____rangeEncoder_11;
	// SevenZip.Compression.RangeCoder.BitEncoder[] SevenZip.Compression.LZMA.Encoder::_isMatch
	BitEncoderU5BU5D_t3186735324* ____isMatch_12;
	// SevenZip.Compression.RangeCoder.BitEncoder[] SevenZip.Compression.LZMA.Encoder::_isRep
	BitEncoderU5BU5D_t3186735324* ____isRep_13;
	// SevenZip.Compression.RangeCoder.BitEncoder[] SevenZip.Compression.LZMA.Encoder::_isRepG0
	BitEncoderU5BU5D_t3186735324* ____isRepG0_14;
	// SevenZip.Compression.RangeCoder.BitEncoder[] SevenZip.Compression.LZMA.Encoder::_isRepG1
	BitEncoderU5BU5D_t3186735324* ____isRepG1_15;
	// SevenZip.Compression.RangeCoder.BitEncoder[] SevenZip.Compression.LZMA.Encoder::_isRepG2
	BitEncoderU5BU5D_t3186735324* ____isRepG2_16;
	// SevenZip.Compression.RangeCoder.BitEncoder[] SevenZip.Compression.LZMA.Encoder::_isRep0Long
	BitEncoderU5BU5D_t3186735324* ____isRep0Long_17;
	// SevenZip.Compression.RangeCoder.BitTreeEncoder[] SevenZip.Compression.LZMA.Encoder::_posSlotEncoder
	BitTreeEncoderU5BU5D_t1510639250* ____posSlotEncoder_18;
	// SevenZip.Compression.RangeCoder.BitEncoder[] SevenZip.Compression.LZMA.Encoder::_posEncoders
	BitEncoderU5BU5D_t3186735324* ____posEncoders_19;
	// SevenZip.Compression.RangeCoder.BitTreeEncoder SevenZip.Compression.LZMA.Encoder::_posAlignEncoder
	BitTreeEncoder_t1009728003  ____posAlignEncoder_20;
	// SevenZip.Compression.LZMA.Encoder/LenPriceTableEncoder SevenZip.Compression.LZMA.Encoder::_lenEncoder
	LenPriceTableEncoder_t1105478683 * ____lenEncoder_21;
	// SevenZip.Compression.LZMA.Encoder/LenPriceTableEncoder SevenZip.Compression.LZMA.Encoder::_repMatchLenEncoder
	LenPriceTableEncoder_t1105478683 * ____repMatchLenEncoder_22;
	// SevenZip.Compression.LZMA.Encoder/LiteralEncoder SevenZip.Compression.LZMA.Encoder::_literalEncoder
	LiteralEncoder_t2284659944 * ____literalEncoder_23;
	// System.UInt32[] SevenZip.Compression.LZMA.Encoder::_matchDistances
	UInt32U5BU5D_t59386216* ____matchDistances_24;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder::_numFastBytes
	uint32_t ____numFastBytes_25;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder::_longestMatchLength
	uint32_t ____longestMatchLength_26;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder::_numDistancePairs
	uint32_t ____numDistancePairs_27;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder::_additionalOffset
	uint32_t ____additionalOffset_28;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder::_optimumEndIndex
	uint32_t ____optimumEndIndex_29;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder::_optimumCurrentIndex
	uint32_t ____optimumCurrentIndex_30;
	// System.Boolean SevenZip.Compression.LZMA.Encoder::_longestMatchWasFound
	bool ____longestMatchWasFound_31;
	// System.UInt32[] SevenZip.Compression.LZMA.Encoder::_posSlotPrices
	UInt32U5BU5D_t59386216* ____posSlotPrices_32;
	// System.UInt32[] SevenZip.Compression.LZMA.Encoder::_distancesPrices
	UInt32U5BU5D_t59386216* ____distancesPrices_33;
	// System.UInt32[] SevenZip.Compression.LZMA.Encoder::_alignPrices
	UInt32U5BU5D_t59386216* ____alignPrices_34;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder::_alignPriceCount
	uint32_t ____alignPriceCount_35;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder::_distTableSize
	uint32_t ____distTableSize_36;
	// System.Int32 SevenZip.Compression.LZMA.Encoder::_posStateBits
	int32_t ____posStateBits_37;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder::_posStateMask
	uint32_t ____posStateMask_38;
	// System.Int32 SevenZip.Compression.LZMA.Encoder::_numLiteralPosStateBits
	int32_t ____numLiteralPosStateBits_39;
	// System.Int32 SevenZip.Compression.LZMA.Encoder::_numLiteralContextBits
	int32_t ____numLiteralContextBits_40;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder::_dictionarySize
	uint32_t ____dictionarySize_41;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder::_dictionarySizePrev
	uint32_t ____dictionarySizePrev_42;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder::_numFastBytesPrev
	uint32_t ____numFastBytesPrev_43;
	// System.Int64 SevenZip.Compression.LZMA.Encoder::nowPos64
	int64_t ___nowPos64_44;
	// System.Boolean SevenZip.Compression.LZMA.Encoder::_finished
	bool ____finished_45;
	// System.IO.Stream SevenZip.Compression.LZMA.Encoder::_inStream
	Stream_t3255436806 * ____inStream_46;
	// SevenZip.Compression.LZMA.Encoder/EMatchFinderType SevenZip.Compression.LZMA.Encoder::_matchFinderType
	int32_t ____matchFinderType_47;
	// System.Boolean SevenZip.Compression.LZMA.Encoder::_writeEndMark
	bool ____writeEndMark_48;
	// System.Boolean SevenZip.Compression.LZMA.Encoder::_needReleaseMFStream
	bool ____needReleaseMFStream_49;
	// System.UInt32[] SevenZip.Compression.LZMA.Encoder::reps
	UInt32U5BU5D_t59386216* ___reps_50;
	// System.UInt32[] SevenZip.Compression.LZMA.Encoder::repLens
	UInt32U5BU5D_t59386216* ___repLens_51;
	// System.Byte[] SevenZip.Compression.LZMA.Encoder::properties
	ByteU5BU5D_t3397334013* ___properties_53;
	// System.UInt32[] SevenZip.Compression.LZMA.Encoder::tempPrices
	UInt32U5BU5D_t59386216* ___tempPrices_54;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder::_matchPriceCount
	uint32_t ____matchPriceCount_55;
	// System.UInt32 SevenZip.Compression.LZMA.Encoder::_trainSize
	uint32_t ____trainSize_57;

public:
	inline static int32_t get_offset_of__state_2() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____state_2)); }
	inline State_t932797237  get__state_2() const { return ____state_2; }
	inline State_t932797237 * get_address_of__state_2() { return &____state_2; }
	inline void set__state_2(State_t932797237  value)
	{
		____state_2 = value;
	}

	inline static int32_t get_offset_of__previousByte_3() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____previousByte_3)); }
	inline uint8_t get__previousByte_3() const { return ____previousByte_3; }
	inline uint8_t* get_address_of__previousByte_3() { return &____previousByte_3; }
	inline void set__previousByte_3(uint8_t value)
	{
		____previousByte_3 = value;
	}

	inline static int32_t get_offset_of__repDistances_4() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____repDistances_4)); }
	inline UInt32U5BU5D_t59386216* get__repDistances_4() const { return ____repDistances_4; }
	inline UInt32U5BU5D_t59386216** get_address_of__repDistances_4() { return &____repDistances_4; }
	inline void set__repDistances_4(UInt32U5BU5D_t59386216* value)
	{
		____repDistances_4 = value;
		Il2CppCodeGenWriteBarrier(&____repDistances_4, value);
	}

	inline static int32_t get_offset_of__optimum_9() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____optimum_9)); }
	inline OptimalU5BU5D_t937800156* get__optimum_9() const { return ____optimum_9; }
	inline OptimalU5BU5D_t937800156** get_address_of__optimum_9() { return &____optimum_9; }
	inline void set__optimum_9(OptimalU5BU5D_t937800156* value)
	{
		____optimum_9 = value;
		Il2CppCodeGenWriteBarrier(&____optimum_9, value);
	}

	inline static int32_t get_offset_of__matchFinder_10() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____matchFinder_10)); }
	inline Il2CppObject * get__matchFinder_10() const { return ____matchFinder_10; }
	inline Il2CppObject ** get_address_of__matchFinder_10() { return &____matchFinder_10; }
	inline void set__matchFinder_10(Il2CppObject * value)
	{
		____matchFinder_10 = value;
		Il2CppCodeGenWriteBarrier(&____matchFinder_10, value);
	}

	inline static int32_t get_offset_of__rangeEncoder_11() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____rangeEncoder_11)); }
	inline Encoder_t4138061994 * get__rangeEncoder_11() const { return ____rangeEncoder_11; }
	inline Encoder_t4138061994 ** get_address_of__rangeEncoder_11() { return &____rangeEncoder_11; }
	inline void set__rangeEncoder_11(Encoder_t4138061994 * value)
	{
		____rangeEncoder_11 = value;
		Il2CppCodeGenWriteBarrier(&____rangeEncoder_11, value);
	}

	inline static int32_t get_offset_of__isMatch_12() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____isMatch_12)); }
	inline BitEncoderU5BU5D_t3186735324* get__isMatch_12() const { return ____isMatch_12; }
	inline BitEncoderU5BU5D_t3186735324** get_address_of__isMatch_12() { return &____isMatch_12; }
	inline void set__isMatch_12(BitEncoderU5BU5D_t3186735324* value)
	{
		____isMatch_12 = value;
		Il2CppCodeGenWriteBarrier(&____isMatch_12, value);
	}

	inline static int32_t get_offset_of__isRep_13() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____isRep_13)); }
	inline BitEncoderU5BU5D_t3186735324* get__isRep_13() const { return ____isRep_13; }
	inline BitEncoderU5BU5D_t3186735324** get_address_of__isRep_13() { return &____isRep_13; }
	inline void set__isRep_13(BitEncoderU5BU5D_t3186735324* value)
	{
		____isRep_13 = value;
		Il2CppCodeGenWriteBarrier(&____isRep_13, value);
	}

	inline static int32_t get_offset_of__isRepG0_14() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____isRepG0_14)); }
	inline BitEncoderU5BU5D_t3186735324* get__isRepG0_14() const { return ____isRepG0_14; }
	inline BitEncoderU5BU5D_t3186735324** get_address_of__isRepG0_14() { return &____isRepG0_14; }
	inline void set__isRepG0_14(BitEncoderU5BU5D_t3186735324* value)
	{
		____isRepG0_14 = value;
		Il2CppCodeGenWriteBarrier(&____isRepG0_14, value);
	}

	inline static int32_t get_offset_of__isRepG1_15() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____isRepG1_15)); }
	inline BitEncoderU5BU5D_t3186735324* get__isRepG1_15() const { return ____isRepG1_15; }
	inline BitEncoderU5BU5D_t3186735324** get_address_of__isRepG1_15() { return &____isRepG1_15; }
	inline void set__isRepG1_15(BitEncoderU5BU5D_t3186735324* value)
	{
		____isRepG1_15 = value;
		Il2CppCodeGenWriteBarrier(&____isRepG1_15, value);
	}

	inline static int32_t get_offset_of__isRepG2_16() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____isRepG2_16)); }
	inline BitEncoderU5BU5D_t3186735324* get__isRepG2_16() const { return ____isRepG2_16; }
	inline BitEncoderU5BU5D_t3186735324** get_address_of__isRepG2_16() { return &____isRepG2_16; }
	inline void set__isRepG2_16(BitEncoderU5BU5D_t3186735324* value)
	{
		____isRepG2_16 = value;
		Il2CppCodeGenWriteBarrier(&____isRepG2_16, value);
	}

	inline static int32_t get_offset_of__isRep0Long_17() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____isRep0Long_17)); }
	inline BitEncoderU5BU5D_t3186735324* get__isRep0Long_17() const { return ____isRep0Long_17; }
	inline BitEncoderU5BU5D_t3186735324** get_address_of__isRep0Long_17() { return &____isRep0Long_17; }
	inline void set__isRep0Long_17(BitEncoderU5BU5D_t3186735324* value)
	{
		____isRep0Long_17 = value;
		Il2CppCodeGenWriteBarrier(&____isRep0Long_17, value);
	}

	inline static int32_t get_offset_of__posSlotEncoder_18() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____posSlotEncoder_18)); }
	inline BitTreeEncoderU5BU5D_t1510639250* get__posSlotEncoder_18() const { return ____posSlotEncoder_18; }
	inline BitTreeEncoderU5BU5D_t1510639250** get_address_of__posSlotEncoder_18() { return &____posSlotEncoder_18; }
	inline void set__posSlotEncoder_18(BitTreeEncoderU5BU5D_t1510639250* value)
	{
		____posSlotEncoder_18 = value;
		Il2CppCodeGenWriteBarrier(&____posSlotEncoder_18, value);
	}

	inline static int32_t get_offset_of__posEncoders_19() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____posEncoders_19)); }
	inline BitEncoderU5BU5D_t3186735324* get__posEncoders_19() const { return ____posEncoders_19; }
	inline BitEncoderU5BU5D_t3186735324** get_address_of__posEncoders_19() { return &____posEncoders_19; }
	inline void set__posEncoders_19(BitEncoderU5BU5D_t3186735324* value)
	{
		____posEncoders_19 = value;
		Il2CppCodeGenWriteBarrier(&____posEncoders_19, value);
	}

	inline static int32_t get_offset_of__posAlignEncoder_20() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____posAlignEncoder_20)); }
	inline BitTreeEncoder_t1009728003  get__posAlignEncoder_20() const { return ____posAlignEncoder_20; }
	inline BitTreeEncoder_t1009728003 * get_address_of__posAlignEncoder_20() { return &____posAlignEncoder_20; }
	inline void set__posAlignEncoder_20(BitTreeEncoder_t1009728003  value)
	{
		____posAlignEncoder_20 = value;
	}

	inline static int32_t get_offset_of__lenEncoder_21() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____lenEncoder_21)); }
	inline LenPriceTableEncoder_t1105478683 * get__lenEncoder_21() const { return ____lenEncoder_21; }
	inline LenPriceTableEncoder_t1105478683 ** get_address_of__lenEncoder_21() { return &____lenEncoder_21; }
	inline void set__lenEncoder_21(LenPriceTableEncoder_t1105478683 * value)
	{
		____lenEncoder_21 = value;
		Il2CppCodeGenWriteBarrier(&____lenEncoder_21, value);
	}

	inline static int32_t get_offset_of__repMatchLenEncoder_22() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____repMatchLenEncoder_22)); }
	inline LenPriceTableEncoder_t1105478683 * get__repMatchLenEncoder_22() const { return ____repMatchLenEncoder_22; }
	inline LenPriceTableEncoder_t1105478683 ** get_address_of__repMatchLenEncoder_22() { return &____repMatchLenEncoder_22; }
	inline void set__repMatchLenEncoder_22(LenPriceTableEncoder_t1105478683 * value)
	{
		____repMatchLenEncoder_22 = value;
		Il2CppCodeGenWriteBarrier(&____repMatchLenEncoder_22, value);
	}

	inline static int32_t get_offset_of__literalEncoder_23() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____literalEncoder_23)); }
	inline LiteralEncoder_t2284659944 * get__literalEncoder_23() const { return ____literalEncoder_23; }
	inline LiteralEncoder_t2284659944 ** get_address_of__literalEncoder_23() { return &____literalEncoder_23; }
	inline void set__literalEncoder_23(LiteralEncoder_t2284659944 * value)
	{
		____literalEncoder_23 = value;
		Il2CppCodeGenWriteBarrier(&____literalEncoder_23, value);
	}

	inline static int32_t get_offset_of__matchDistances_24() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____matchDistances_24)); }
	inline UInt32U5BU5D_t59386216* get__matchDistances_24() const { return ____matchDistances_24; }
	inline UInt32U5BU5D_t59386216** get_address_of__matchDistances_24() { return &____matchDistances_24; }
	inline void set__matchDistances_24(UInt32U5BU5D_t59386216* value)
	{
		____matchDistances_24 = value;
		Il2CppCodeGenWriteBarrier(&____matchDistances_24, value);
	}

	inline static int32_t get_offset_of__numFastBytes_25() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____numFastBytes_25)); }
	inline uint32_t get__numFastBytes_25() const { return ____numFastBytes_25; }
	inline uint32_t* get_address_of__numFastBytes_25() { return &____numFastBytes_25; }
	inline void set__numFastBytes_25(uint32_t value)
	{
		____numFastBytes_25 = value;
	}

	inline static int32_t get_offset_of__longestMatchLength_26() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____longestMatchLength_26)); }
	inline uint32_t get__longestMatchLength_26() const { return ____longestMatchLength_26; }
	inline uint32_t* get_address_of__longestMatchLength_26() { return &____longestMatchLength_26; }
	inline void set__longestMatchLength_26(uint32_t value)
	{
		____longestMatchLength_26 = value;
	}

	inline static int32_t get_offset_of__numDistancePairs_27() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____numDistancePairs_27)); }
	inline uint32_t get__numDistancePairs_27() const { return ____numDistancePairs_27; }
	inline uint32_t* get_address_of__numDistancePairs_27() { return &____numDistancePairs_27; }
	inline void set__numDistancePairs_27(uint32_t value)
	{
		____numDistancePairs_27 = value;
	}

	inline static int32_t get_offset_of__additionalOffset_28() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____additionalOffset_28)); }
	inline uint32_t get__additionalOffset_28() const { return ____additionalOffset_28; }
	inline uint32_t* get_address_of__additionalOffset_28() { return &____additionalOffset_28; }
	inline void set__additionalOffset_28(uint32_t value)
	{
		____additionalOffset_28 = value;
	}

	inline static int32_t get_offset_of__optimumEndIndex_29() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____optimumEndIndex_29)); }
	inline uint32_t get__optimumEndIndex_29() const { return ____optimumEndIndex_29; }
	inline uint32_t* get_address_of__optimumEndIndex_29() { return &____optimumEndIndex_29; }
	inline void set__optimumEndIndex_29(uint32_t value)
	{
		____optimumEndIndex_29 = value;
	}

	inline static int32_t get_offset_of__optimumCurrentIndex_30() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____optimumCurrentIndex_30)); }
	inline uint32_t get__optimumCurrentIndex_30() const { return ____optimumCurrentIndex_30; }
	inline uint32_t* get_address_of__optimumCurrentIndex_30() { return &____optimumCurrentIndex_30; }
	inline void set__optimumCurrentIndex_30(uint32_t value)
	{
		____optimumCurrentIndex_30 = value;
	}

	inline static int32_t get_offset_of__longestMatchWasFound_31() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____longestMatchWasFound_31)); }
	inline bool get__longestMatchWasFound_31() const { return ____longestMatchWasFound_31; }
	inline bool* get_address_of__longestMatchWasFound_31() { return &____longestMatchWasFound_31; }
	inline void set__longestMatchWasFound_31(bool value)
	{
		____longestMatchWasFound_31 = value;
	}

	inline static int32_t get_offset_of__posSlotPrices_32() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____posSlotPrices_32)); }
	inline UInt32U5BU5D_t59386216* get__posSlotPrices_32() const { return ____posSlotPrices_32; }
	inline UInt32U5BU5D_t59386216** get_address_of__posSlotPrices_32() { return &____posSlotPrices_32; }
	inline void set__posSlotPrices_32(UInt32U5BU5D_t59386216* value)
	{
		____posSlotPrices_32 = value;
		Il2CppCodeGenWriteBarrier(&____posSlotPrices_32, value);
	}

	inline static int32_t get_offset_of__distancesPrices_33() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____distancesPrices_33)); }
	inline UInt32U5BU5D_t59386216* get__distancesPrices_33() const { return ____distancesPrices_33; }
	inline UInt32U5BU5D_t59386216** get_address_of__distancesPrices_33() { return &____distancesPrices_33; }
	inline void set__distancesPrices_33(UInt32U5BU5D_t59386216* value)
	{
		____distancesPrices_33 = value;
		Il2CppCodeGenWriteBarrier(&____distancesPrices_33, value);
	}

	inline static int32_t get_offset_of__alignPrices_34() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____alignPrices_34)); }
	inline UInt32U5BU5D_t59386216* get__alignPrices_34() const { return ____alignPrices_34; }
	inline UInt32U5BU5D_t59386216** get_address_of__alignPrices_34() { return &____alignPrices_34; }
	inline void set__alignPrices_34(UInt32U5BU5D_t59386216* value)
	{
		____alignPrices_34 = value;
		Il2CppCodeGenWriteBarrier(&____alignPrices_34, value);
	}

	inline static int32_t get_offset_of__alignPriceCount_35() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____alignPriceCount_35)); }
	inline uint32_t get__alignPriceCount_35() const { return ____alignPriceCount_35; }
	inline uint32_t* get_address_of__alignPriceCount_35() { return &____alignPriceCount_35; }
	inline void set__alignPriceCount_35(uint32_t value)
	{
		____alignPriceCount_35 = value;
	}

	inline static int32_t get_offset_of__distTableSize_36() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____distTableSize_36)); }
	inline uint32_t get__distTableSize_36() const { return ____distTableSize_36; }
	inline uint32_t* get_address_of__distTableSize_36() { return &____distTableSize_36; }
	inline void set__distTableSize_36(uint32_t value)
	{
		____distTableSize_36 = value;
	}

	inline static int32_t get_offset_of__posStateBits_37() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____posStateBits_37)); }
	inline int32_t get__posStateBits_37() const { return ____posStateBits_37; }
	inline int32_t* get_address_of__posStateBits_37() { return &____posStateBits_37; }
	inline void set__posStateBits_37(int32_t value)
	{
		____posStateBits_37 = value;
	}

	inline static int32_t get_offset_of__posStateMask_38() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____posStateMask_38)); }
	inline uint32_t get__posStateMask_38() const { return ____posStateMask_38; }
	inline uint32_t* get_address_of__posStateMask_38() { return &____posStateMask_38; }
	inline void set__posStateMask_38(uint32_t value)
	{
		____posStateMask_38 = value;
	}

	inline static int32_t get_offset_of__numLiteralPosStateBits_39() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____numLiteralPosStateBits_39)); }
	inline int32_t get__numLiteralPosStateBits_39() const { return ____numLiteralPosStateBits_39; }
	inline int32_t* get_address_of__numLiteralPosStateBits_39() { return &____numLiteralPosStateBits_39; }
	inline void set__numLiteralPosStateBits_39(int32_t value)
	{
		____numLiteralPosStateBits_39 = value;
	}

	inline static int32_t get_offset_of__numLiteralContextBits_40() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____numLiteralContextBits_40)); }
	inline int32_t get__numLiteralContextBits_40() const { return ____numLiteralContextBits_40; }
	inline int32_t* get_address_of__numLiteralContextBits_40() { return &____numLiteralContextBits_40; }
	inline void set__numLiteralContextBits_40(int32_t value)
	{
		____numLiteralContextBits_40 = value;
	}

	inline static int32_t get_offset_of__dictionarySize_41() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____dictionarySize_41)); }
	inline uint32_t get__dictionarySize_41() const { return ____dictionarySize_41; }
	inline uint32_t* get_address_of__dictionarySize_41() { return &____dictionarySize_41; }
	inline void set__dictionarySize_41(uint32_t value)
	{
		____dictionarySize_41 = value;
	}

	inline static int32_t get_offset_of__dictionarySizePrev_42() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____dictionarySizePrev_42)); }
	inline uint32_t get__dictionarySizePrev_42() const { return ____dictionarySizePrev_42; }
	inline uint32_t* get_address_of__dictionarySizePrev_42() { return &____dictionarySizePrev_42; }
	inline void set__dictionarySizePrev_42(uint32_t value)
	{
		____dictionarySizePrev_42 = value;
	}

	inline static int32_t get_offset_of__numFastBytesPrev_43() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____numFastBytesPrev_43)); }
	inline uint32_t get__numFastBytesPrev_43() const { return ____numFastBytesPrev_43; }
	inline uint32_t* get_address_of__numFastBytesPrev_43() { return &____numFastBytesPrev_43; }
	inline void set__numFastBytesPrev_43(uint32_t value)
	{
		____numFastBytesPrev_43 = value;
	}

	inline static int32_t get_offset_of_nowPos64_44() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ___nowPos64_44)); }
	inline int64_t get_nowPos64_44() const { return ___nowPos64_44; }
	inline int64_t* get_address_of_nowPos64_44() { return &___nowPos64_44; }
	inline void set_nowPos64_44(int64_t value)
	{
		___nowPos64_44 = value;
	}

	inline static int32_t get_offset_of__finished_45() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____finished_45)); }
	inline bool get__finished_45() const { return ____finished_45; }
	inline bool* get_address_of__finished_45() { return &____finished_45; }
	inline void set__finished_45(bool value)
	{
		____finished_45 = value;
	}

	inline static int32_t get_offset_of__inStream_46() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____inStream_46)); }
	inline Stream_t3255436806 * get__inStream_46() const { return ____inStream_46; }
	inline Stream_t3255436806 ** get_address_of__inStream_46() { return &____inStream_46; }
	inline void set__inStream_46(Stream_t3255436806 * value)
	{
		____inStream_46 = value;
		Il2CppCodeGenWriteBarrier(&____inStream_46, value);
	}

	inline static int32_t get_offset_of__matchFinderType_47() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____matchFinderType_47)); }
	inline int32_t get__matchFinderType_47() const { return ____matchFinderType_47; }
	inline int32_t* get_address_of__matchFinderType_47() { return &____matchFinderType_47; }
	inline void set__matchFinderType_47(int32_t value)
	{
		____matchFinderType_47 = value;
	}

	inline static int32_t get_offset_of__writeEndMark_48() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____writeEndMark_48)); }
	inline bool get__writeEndMark_48() const { return ____writeEndMark_48; }
	inline bool* get_address_of__writeEndMark_48() { return &____writeEndMark_48; }
	inline void set__writeEndMark_48(bool value)
	{
		____writeEndMark_48 = value;
	}

	inline static int32_t get_offset_of__needReleaseMFStream_49() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____needReleaseMFStream_49)); }
	inline bool get__needReleaseMFStream_49() const { return ____needReleaseMFStream_49; }
	inline bool* get_address_of__needReleaseMFStream_49() { return &____needReleaseMFStream_49; }
	inline void set__needReleaseMFStream_49(bool value)
	{
		____needReleaseMFStream_49 = value;
	}

	inline static int32_t get_offset_of_reps_50() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ___reps_50)); }
	inline UInt32U5BU5D_t59386216* get_reps_50() const { return ___reps_50; }
	inline UInt32U5BU5D_t59386216** get_address_of_reps_50() { return &___reps_50; }
	inline void set_reps_50(UInt32U5BU5D_t59386216* value)
	{
		___reps_50 = value;
		Il2CppCodeGenWriteBarrier(&___reps_50, value);
	}

	inline static int32_t get_offset_of_repLens_51() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ___repLens_51)); }
	inline UInt32U5BU5D_t59386216* get_repLens_51() const { return ___repLens_51; }
	inline UInt32U5BU5D_t59386216** get_address_of_repLens_51() { return &___repLens_51; }
	inline void set_repLens_51(UInt32U5BU5D_t59386216* value)
	{
		___repLens_51 = value;
		Il2CppCodeGenWriteBarrier(&___repLens_51, value);
	}

	inline static int32_t get_offset_of_properties_53() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ___properties_53)); }
	inline ByteU5BU5D_t3397334013* get_properties_53() const { return ___properties_53; }
	inline ByteU5BU5D_t3397334013** get_address_of_properties_53() { return &___properties_53; }
	inline void set_properties_53(ByteU5BU5D_t3397334013* value)
	{
		___properties_53 = value;
		Il2CppCodeGenWriteBarrier(&___properties_53, value);
	}

	inline static int32_t get_offset_of_tempPrices_54() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ___tempPrices_54)); }
	inline UInt32U5BU5D_t59386216* get_tempPrices_54() const { return ___tempPrices_54; }
	inline UInt32U5BU5D_t59386216** get_address_of_tempPrices_54() { return &___tempPrices_54; }
	inline void set_tempPrices_54(UInt32U5BU5D_t59386216* value)
	{
		___tempPrices_54 = value;
		Il2CppCodeGenWriteBarrier(&___tempPrices_54, value);
	}

	inline static int32_t get_offset_of__matchPriceCount_55() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____matchPriceCount_55)); }
	inline uint32_t get__matchPriceCount_55() const { return ____matchPriceCount_55; }
	inline uint32_t* get_address_of__matchPriceCount_55() { return &____matchPriceCount_55; }
	inline void set__matchPriceCount_55(uint32_t value)
	{
		____matchPriceCount_55 = value;
	}

	inline static int32_t get_offset_of__trainSize_57() { return static_cast<int32_t>(offsetof(Encoder_t4232000206, ____trainSize_57)); }
	inline uint32_t get__trainSize_57() const { return ____trainSize_57; }
	inline uint32_t* get_address_of__trainSize_57() { return &____trainSize_57; }
	inline void set__trainSize_57(uint32_t value)
	{
		____trainSize_57 = value;
	}
};

struct Encoder_t4232000206_StaticFields
{
public:
	// System.Byte[] SevenZip.Compression.LZMA.Encoder::g_FastPos
	ByteU5BU5D_t3397334013* ___g_FastPos_1;
	// System.String[] SevenZip.Compression.LZMA.Encoder::kMatchFinderIDs
	StringU5BU5D_t1642385972* ___kMatchFinderIDs_56;

public:
	inline static int32_t get_offset_of_g_FastPos_1() { return static_cast<int32_t>(offsetof(Encoder_t4232000206_StaticFields, ___g_FastPos_1)); }
	inline ByteU5BU5D_t3397334013* get_g_FastPos_1() const { return ___g_FastPos_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_g_FastPos_1() { return &___g_FastPos_1; }
	inline void set_g_FastPos_1(ByteU5BU5D_t3397334013* value)
	{
		___g_FastPos_1 = value;
		Il2CppCodeGenWriteBarrier(&___g_FastPos_1, value);
	}

	inline static int32_t get_offset_of_kMatchFinderIDs_56() { return static_cast<int32_t>(offsetof(Encoder_t4232000206_StaticFields, ___kMatchFinderIDs_56)); }
	inline StringU5BU5D_t1642385972* get_kMatchFinderIDs_56() const { return ___kMatchFinderIDs_56; }
	inline StringU5BU5D_t1642385972** get_address_of_kMatchFinderIDs_56() { return &___kMatchFinderIDs_56; }
	inline void set_kMatchFinderIDs_56(StringU5BU5D_t1642385972* value)
	{
		___kMatchFinderIDs_56 = value;
		Il2CppCodeGenWriteBarrier(&___kMatchFinderIDs_56, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
