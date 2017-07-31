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

// SevenZip.Compression.LZ.OutWindow
struct  OutWindow_t779643166  : public Il2CppObject
{
public:
	// System.Byte[] SevenZip.Compression.LZ.OutWindow::_buffer
	ByteU5BU5D_t3397334013* ____buffer_0;
	// System.UInt32 SevenZip.Compression.LZ.OutWindow::_pos
	uint32_t ____pos_1;
	// System.UInt32 SevenZip.Compression.LZ.OutWindow::_windowSize
	uint32_t ____windowSize_2;
	// System.UInt32 SevenZip.Compression.LZ.OutWindow::_streamPos
	uint32_t ____streamPos_3;
	// System.IO.Stream SevenZip.Compression.LZ.OutWindow::_stream
	Stream_t3255436806 * ____stream_4;
	// System.UInt32 SevenZip.Compression.LZ.OutWindow::TrainSize
	uint32_t ___TrainSize_5;

public:
	inline static int32_t get_offset_of__buffer_0() { return static_cast<int32_t>(offsetof(OutWindow_t779643166, ____buffer_0)); }
	inline ByteU5BU5D_t3397334013* get__buffer_0() const { return ____buffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__buffer_0() { return &____buffer_0; }
	inline void set__buffer_0(ByteU5BU5D_t3397334013* value)
	{
		____buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&____buffer_0, value);
	}

	inline static int32_t get_offset_of__pos_1() { return static_cast<int32_t>(offsetof(OutWindow_t779643166, ____pos_1)); }
	inline uint32_t get__pos_1() const { return ____pos_1; }
	inline uint32_t* get_address_of__pos_1() { return &____pos_1; }
	inline void set__pos_1(uint32_t value)
	{
		____pos_1 = value;
	}

	inline static int32_t get_offset_of__windowSize_2() { return static_cast<int32_t>(offsetof(OutWindow_t779643166, ____windowSize_2)); }
	inline uint32_t get__windowSize_2() const { return ____windowSize_2; }
	inline uint32_t* get_address_of__windowSize_2() { return &____windowSize_2; }
	inline void set__windowSize_2(uint32_t value)
	{
		____windowSize_2 = value;
	}

	inline static int32_t get_offset_of__streamPos_3() { return static_cast<int32_t>(offsetof(OutWindow_t779643166, ____streamPos_3)); }
	inline uint32_t get__streamPos_3() const { return ____streamPos_3; }
	inline uint32_t* get_address_of__streamPos_3() { return &____streamPos_3; }
	inline void set__streamPos_3(uint32_t value)
	{
		____streamPos_3 = value;
	}

	inline static int32_t get_offset_of__stream_4() { return static_cast<int32_t>(offsetof(OutWindow_t779643166, ____stream_4)); }
	inline Stream_t3255436806 * get__stream_4() const { return ____stream_4; }
	inline Stream_t3255436806 ** get_address_of__stream_4() { return &____stream_4; }
	inline void set__stream_4(Stream_t3255436806 * value)
	{
		____stream_4 = value;
		Il2CppCodeGenWriteBarrier(&____stream_4, value);
	}

	inline static int32_t get_offset_of_TrainSize_5() { return static_cast<int32_t>(offsetof(OutWindow_t779643166, ___TrainSize_5)); }
	inline uint32_t get_TrainSize_5() const { return ___TrainSize_5; }
	inline uint32_t* get_address_of_TrainSize_5() { return &___TrainSize_5; }
	inline void set_TrainSize_5(uint32_t value)
	{
		___TrainSize_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
