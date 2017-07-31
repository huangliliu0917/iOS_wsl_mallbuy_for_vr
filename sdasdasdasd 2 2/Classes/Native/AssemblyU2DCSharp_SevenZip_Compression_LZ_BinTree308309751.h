#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_SevenZip_Compression_LZ_InWindow600775839.h"

// System.UInt32[]
struct UInt32U5BU5D_t59386216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SevenZip.Compression.LZ.BinTree
struct  BinTree_t308309751  : public InWindow_t600775839
{
public:
	// System.UInt32 SevenZip.Compression.LZ.BinTree::_cyclicBufferPos
	uint32_t ____cyclicBufferPos_11;
	// System.UInt32 SevenZip.Compression.LZ.BinTree::_cyclicBufferSize
	uint32_t ____cyclicBufferSize_12;
	// System.UInt32 SevenZip.Compression.LZ.BinTree::_matchMaxLen
	uint32_t ____matchMaxLen_13;
	// System.UInt32[] SevenZip.Compression.LZ.BinTree::_son
	UInt32U5BU5D_t59386216* ____son_14;
	// System.UInt32[] SevenZip.Compression.LZ.BinTree::_hash
	UInt32U5BU5D_t59386216* ____hash_15;
	// System.UInt32 SevenZip.Compression.LZ.BinTree::_cutValue
	uint32_t ____cutValue_16;
	// System.UInt32 SevenZip.Compression.LZ.BinTree::_hashMask
	uint32_t ____hashMask_17;
	// System.UInt32 SevenZip.Compression.LZ.BinTree::_hashSizeSum
	uint32_t ____hashSizeSum_18;
	// System.Boolean SevenZip.Compression.LZ.BinTree::HASH_ARRAY
	bool ___HASH_ARRAY_19;
	// System.UInt32 SevenZip.Compression.LZ.BinTree::kNumHashDirectBytes
	uint32_t ___kNumHashDirectBytes_27;
	// System.UInt32 SevenZip.Compression.LZ.BinTree::kMinMatchCheck
	uint32_t ___kMinMatchCheck_28;
	// System.UInt32 SevenZip.Compression.LZ.BinTree::kFixHashSize
	uint32_t ___kFixHashSize_29;

public:
	inline static int32_t get_offset_of__cyclicBufferPos_11() { return static_cast<int32_t>(offsetof(BinTree_t308309751, ____cyclicBufferPos_11)); }
	inline uint32_t get__cyclicBufferPos_11() const { return ____cyclicBufferPos_11; }
	inline uint32_t* get_address_of__cyclicBufferPos_11() { return &____cyclicBufferPos_11; }
	inline void set__cyclicBufferPos_11(uint32_t value)
	{
		____cyclicBufferPos_11 = value;
	}

	inline static int32_t get_offset_of__cyclicBufferSize_12() { return static_cast<int32_t>(offsetof(BinTree_t308309751, ____cyclicBufferSize_12)); }
	inline uint32_t get__cyclicBufferSize_12() const { return ____cyclicBufferSize_12; }
	inline uint32_t* get_address_of__cyclicBufferSize_12() { return &____cyclicBufferSize_12; }
	inline void set__cyclicBufferSize_12(uint32_t value)
	{
		____cyclicBufferSize_12 = value;
	}

	inline static int32_t get_offset_of__matchMaxLen_13() { return static_cast<int32_t>(offsetof(BinTree_t308309751, ____matchMaxLen_13)); }
	inline uint32_t get__matchMaxLen_13() const { return ____matchMaxLen_13; }
	inline uint32_t* get_address_of__matchMaxLen_13() { return &____matchMaxLen_13; }
	inline void set__matchMaxLen_13(uint32_t value)
	{
		____matchMaxLen_13 = value;
	}

	inline static int32_t get_offset_of__son_14() { return static_cast<int32_t>(offsetof(BinTree_t308309751, ____son_14)); }
	inline UInt32U5BU5D_t59386216* get__son_14() const { return ____son_14; }
	inline UInt32U5BU5D_t59386216** get_address_of__son_14() { return &____son_14; }
	inline void set__son_14(UInt32U5BU5D_t59386216* value)
	{
		____son_14 = value;
		Il2CppCodeGenWriteBarrier(&____son_14, value);
	}

	inline static int32_t get_offset_of__hash_15() { return static_cast<int32_t>(offsetof(BinTree_t308309751, ____hash_15)); }
	inline UInt32U5BU5D_t59386216* get__hash_15() const { return ____hash_15; }
	inline UInt32U5BU5D_t59386216** get_address_of__hash_15() { return &____hash_15; }
	inline void set__hash_15(UInt32U5BU5D_t59386216* value)
	{
		____hash_15 = value;
		Il2CppCodeGenWriteBarrier(&____hash_15, value);
	}

	inline static int32_t get_offset_of__cutValue_16() { return static_cast<int32_t>(offsetof(BinTree_t308309751, ____cutValue_16)); }
	inline uint32_t get__cutValue_16() const { return ____cutValue_16; }
	inline uint32_t* get_address_of__cutValue_16() { return &____cutValue_16; }
	inline void set__cutValue_16(uint32_t value)
	{
		____cutValue_16 = value;
	}

	inline static int32_t get_offset_of__hashMask_17() { return static_cast<int32_t>(offsetof(BinTree_t308309751, ____hashMask_17)); }
	inline uint32_t get__hashMask_17() const { return ____hashMask_17; }
	inline uint32_t* get_address_of__hashMask_17() { return &____hashMask_17; }
	inline void set__hashMask_17(uint32_t value)
	{
		____hashMask_17 = value;
	}

	inline static int32_t get_offset_of__hashSizeSum_18() { return static_cast<int32_t>(offsetof(BinTree_t308309751, ____hashSizeSum_18)); }
	inline uint32_t get__hashSizeSum_18() const { return ____hashSizeSum_18; }
	inline uint32_t* get_address_of__hashSizeSum_18() { return &____hashSizeSum_18; }
	inline void set__hashSizeSum_18(uint32_t value)
	{
		____hashSizeSum_18 = value;
	}

	inline static int32_t get_offset_of_HASH_ARRAY_19() { return static_cast<int32_t>(offsetof(BinTree_t308309751, ___HASH_ARRAY_19)); }
	inline bool get_HASH_ARRAY_19() const { return ___HASH_ARRAY_19; }
	inline bool* get_address_of_HASH_ARRAY_19() { return &___HASH_ARRAY_19; }
	inline void set_HASH_ARRAY_19(bool value)
	{
		___HASH_ARRAY_19 = value;
	}

	inline static int32_t get_offset_of_kNumHashDirectBytes_27() { return static_cast<int32_t>(offsetof(BinTree_t308309751, ___kNumHashDirectBytes_27)); }
	inline uint32_t get_kNumHashDirectBytes_27() const { return ___kNumHashDirectBytes_27; }
	inline uint32_t* get_address_of_kNumHashDirectBytes_27() { return &___kNumHashDirectBytes_27; }
	inline void set_kNumHashDirectBytes_27(uint32_t value)
	{
		___kNumHashDirectBytes_27 = value;
	}

	inline static int32_t get_offset_of_kMinMatchCheck_28() { return static_cast<int32_t>(offsetof(BinTree_t308309751, ___kMinMatchCheck_28)); }
	inline uint32_t get_kMinMatchCheck_28() const { return ___kMinMatchCheck_28; }
	inline uint32_t* get_address_of_kMinMatchCheck_28() { return &___kMinMatchCheck_28; }
	inline void set_kMinMatchCheck_28(uint32_t value)
	{
		___kMinMatchCheck_28 = value;
	}

	inline static int32_t get_offset_of_kFixHashSize_29() { return static_cast<int32_t>(offsetof(BinTree_t308309751, ___kFixHashSize_29)); }
	inline uint32_t get_kFixHashSize_29() const { return ___kFixHashSize_29; }
	inline uint32_t* get_address_of_kFixHashSize_29() { return &___kFixHashSize_29; }
	inline void set_kFixHashSize_29(uint32_t value)
	{
		___kFixHashSize_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
