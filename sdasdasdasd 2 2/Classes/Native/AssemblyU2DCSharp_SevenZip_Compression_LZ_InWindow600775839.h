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

// SevenZip.Compression.LZ.InWindow
struct  InWindow_t600775839  : public Il2CppObject
{
public:
	// System.Byte[] SevenZip.Compression.LZ.InWindow::_bufferBase
	ByteU5BU5D_t3397334013* ____bufferBase_0;
	// System.IO.Stream SevenZip.Compression.LZ.InWindow::_stream
	Stream_t3255436806 * ____stream_1;
	// System.UInt32 SevenZip.Compression.LZ.InWindow::_posLimit
	uint32_t ____posLimit_2;
	// System.Boolean SevenZip.Compression.LZ.InWindow::_streamEndWasReached
	bool ____streamEndWasReached_3;
	// System.UInt32 SevenZip.Compression.LZ.InWindow::_pointerToLastSafePosition
	uint32_t ____pointerToLastSafePosition_4;
	// System.UInt32 SevenZip.Compression.LZ.InWindow::_bufferOffset
	uint32_t ____bufferOffset_5;
	// System.UInt32 SevenZip.Compression.LZ.InWindow::_blockSize
	uint32_t ____blockSize_6;
	// System.UInt32 SevenZip.Compression.LZ.InWindow::_pos
	uint32_t ____pos_7;
	// System.UInt32 SevenZip.Compression.LZ.InWindow::_keepSizeBefore
	uint32_t ____keepSizeBefore_8;
	// System.UInt32 SevenZip.Compression.LZ.InWindow::_keepSizeAfter
	uint32_t ____keepSizeAfter_9;
	// System.UInt32 SevenZip.Compression.LZ.InWindow::_streamPos
	uint32_t ____streamPos_10;

public:
	inline static int32_t get_offset_of__bufferBase_0() { return static_cast<int32_t>(offsetof(InWindow_t600775839, ____bufferBase_0)); }
	inline ByteU5BU5D_t3397334013* get__bufferBase_0() const { return ____bufferBase_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__bufferBase_0() { return &____bufferBase_0; }
	inline void set__bufferBase_0(ByteU5BU5D_t3397334013* value)
	{
		____bufferBase_0 = value;
		Il2CppCodeGenWriteBarrier(&____bufferBase_0, value);
	}

	inline static int32_t get_offset_of__stream_1() { return static_cast<int32_t>(offsetof(InWindow_t600775839, ____stream_1)); }
	inline Stream_t3255436806 * get__stream_1() const { return ____stream_1; }
	inline Stream_t3255436806 ** get_address_of__stream_1() { return &____stream_1; }
	inline void set__stream_1(Stream_t3255436806 * value)
	{
		____stream_1 = value;
		Il2CppCodeGenWriteBarrier(&____stream_1, value);
	}

	inline static int32_t get_offset_of__posLimit_2() { return static_cast<int32_t>(offsetof(InWindow_t600775839, ____posLimit_2)); }
	inline uint32_t get__posLimit_2() const { return ____posLimit_2; }
	inline uint32_t* get_address_of__posLimit_2() { return &____posLimit_2; }
	inline void set__posLimit_2(uint32_t value)
	{
		____posLimit_2 = value;
	}

	inline static int32_t get_offset_of__streamEndWasReached_3() { return static_cast<int32_t>(offsetof(InWindow_t600775839, ____streamEndWasReached_3)); }
	inline bool get__streamEndWasReached_3() const { return ____streamEndWasReached_3; }
	inline bool* get_address_of__streamEndWasReached_3() { return &____streamEndWasReached_3; }
	inline void set__streamEndWasReached_3(bool value)
	{
		____streamEndWasReached_3 = value;
	}

	inline static int32_t get_offset_of__pointerToLastSafePosition_4() { return static_cast<int32_t>(offsetof(InWindow_t600775839, ____pointerToLastSafePosition_4)); }
	inline uint32_t get__pointerToLastSafePosition_4() const { return ____pointerToLastSafePosition_4; }
	inline uint32_t* get_address_of__pointerToLastSafePosition_4() { return &____pointerToLastSafePosition_4; }
	inline void set__pointerToLastSafePosition_4(uint32_t value)
	{
		____pointerToLastSafePosition_4 = value;
	}

	inline static int32_t get_offset_of__bufferOffset_5() { return static_cast<int32_t>(offsetof(InWindow_t600775839, ____bufferOffset_5)); }
	inline uint32_t get__bufferOffset_5() const { return ____bufferOffset_5; }
	inline uint32_t* get_address_of__bufferOffset_5() { return &____bufferOffset_5; }
	inline void set__bufferOffset_5(uint32_t value)
	{
		____bufferOffset_5 = value;
	}

	inline static int32_t get_offset_of__blockSize_6() { return static_cast<int32_t>(offsetof(InWindow_t600775839, ____blockSize_6)); }
	inline uint32_t get__blockSize_6() const { return ____blockSize_6; }
	inline uint32_t* get_address_of__blockSize_6() { return &____blockSize_6; }
	inline void set__blockSize_6(uint32_t value)
	{
		____blockSize_6 = value;
	}

	inline static int32_t get_offset_of__pos_7() { return static_cast<int32_t>(offsetof(InWindow_t600775839, ____pos_7)); }
	inline uint32_t get__pos_7() const { return ____pos_7; }
	inline uint32_t* get_address_of__pos_7() { return &____pos_7; }
	inline void set__pos_7(uint32_t value)
	{
		____pos_7 = value;
	}

	inline static int32_t get_offset_of__keepSizeBefore_8() { return static_cast<int32_t>(offsetof(InWindow_t600775839, ____keepSizeBefore_8)); }
	inline uint32_t get__keepSizeBefore_8() const { return ____keepSizeBefore_8; }
	inline uint32_t* get_address_of__keepSizeBefore_8() { return &____keepSizeBefore_8; }
	inline void set__keepSizeBefore_8(uint32_t value)
	{
		____keepSizeBefore_8 = value;
	}

	inline static int32_t get_offset_of__keepSizeAfter_9() { return static_cast<int32_t>(offsetof(InWindow_t600775839, ____keepSizeAfter_9)); }
	inline uint32_t get__keepSizeAfter_9() const { return ____keepSizeAfter_9; }
	inline uint32_t* get_address_of__keepSizeAfter_9() { return &____keepSizeAfter_9; }
	inline void set__keepSizeAfter_9(uint32_t value)
	{
		____keepSizeAfter_9 = value;
	}

	inline static int32_t get_offset_of__streamPos_10() { return static_cast<int32_t>(offsetof(InWindow_t600775839, ____streamPos_10)); }
	inline uint32_t get__streamPos_10() const { return ____streamPos_10; }
	inline uint32_t* get_address_of__streamPos_10() { return &____streamPos_10; }
	inline void set__streamPos_10(uint32_t value)
	{
		____streamPos_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
