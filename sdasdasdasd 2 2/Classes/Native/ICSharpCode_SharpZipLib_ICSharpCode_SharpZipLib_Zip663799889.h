#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream3255436806.h"

// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t3958302971;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct InflaterInputBuffer_t3211561891;
// System.IO.Stream
struct Stream_t3255436806;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
struct  InflaterInputStream_t663799889  : public Stream_t3255436806
{
public:
	// ICSharpCode.SharpZipLib.Zip.Compression.Inflater ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::inf
	Inflater_t3958302971 * ___inf_1;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::inputBuffer
	InflaterInputBuffer_t3211561891 * ___inputBuffer_2;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::baseInputStream
	Stream_t3255436806 * ___baseInputStream_3;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::csize
	int64_t ___csize_4;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::isClosed
	bool ___isClosed_5;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::isStreamOwner
	bool ___isStreamOwner_6;

public:
	inline static int32_t get_offset_of_inf_1() { return static_cast<int32_t>(offsetof(InflaterInputStream_t663799889, ___inf_1)); }
	inline Inflater_t3958302971 * get_inf_1() const { return ___inf_1; }
	inline Inflater_t3958302971 ** get_address_of_inf_1() { return &___inf_1; }
	inline void set_inf_1(Inflater_t3958302971 * value)
	{
		___inf_1 = value;
		Il2CppCodeGenWriteBarrier(&___inf_1, value);
	}

	inline static int32_t get_offset_of_inputBuffer_2() { return static_cast<int32_t>(offsetof(InflaterInputStream_t663799889, ___inputBuffer_2)); }
	inline InflaterInputBuffer_t3211561891 * get_inputBuffer_2() const { return ___inputBuffer_2; }
	inline InflaterInputBuffer_t3211561891 ** get_address_of_inputBuffer_2() { return &___inputBuffer_2; }
	inline void set_inputBuffer_2(InflaterInputBuffer_t3211561891 * value)
	{
		___inputBuffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___inputBuffer_2, value);
	}

	inline static int32_t get_offset_of_baseInputStream_3() { return static_cast<int32_t>(offsetof(InflaterInputStream_t663799889, ___baseInputStream_3)); }
	inline Stream_t3255436806 * get_baseInputStream_3() const { return ___baseInputStream_3; }
	inline Stream_t3255436806 ** get_address_of_baseInputStream_3() { return &___baseInputStream_3; }
	inline void set_baseInputStream_3(Stream_t3255436806 * value)
	{
		___baseInputStream_3 = value;
		Il2CppCodeGenWriteBarrier(&___baseInputStream_3, value);
	}

	inline static int32_t get_offset_of_csize_4() { return static_cast<int32_t>(offsetof(InflaterInputStream_t663799889, ___csize_4)); }
	inline int64_t get_csize_4() const { return ___csize_4; }
	inline int64_t* get_address_of_csize_4() { return &___csize_4; }
	inline void set_csize_4(int64_t value)
	{
		___csize_4 = value;
	}

	inline static int32_t get_offset_of_isClosed_5() { return static_cast<int32_t>(offsetof(InflaterInputStream_t663799889, ___isClosed_5)); }
	inline bool get_isClosed_5() const { return ___isClosed_5; }
	inline bool* get_address_of_isClosed_5() { return &___isClosed_5; }
	inline void set_isClosed_5(bool value)
	{
		___isClosed_5 = value;
	}

	inline static int32_t get_offset_of_isStreamOwner_6() { return static_cast<int32_t>(offsetof(InflaterInputStream_t663799889, ___isStreamOwner_6)); }
	inline bool get_isStreamOwner_6() const { return ___isStreamOwner_6; }
	inline bool* get_address_of_isStreamOwner_6() { return &___isStreamOwner_6; }
	inline void set_isStreamOwner_6(bool value)
	{
		___isStreamOwner_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
