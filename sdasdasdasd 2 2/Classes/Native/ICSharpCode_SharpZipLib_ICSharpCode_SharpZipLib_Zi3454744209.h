#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream3255436806.h"

// System.IO.Stream
struct Stream_t3255436806;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.ZipHelperStream
struct  ZipHelperStream_t3454744209  : public Stream_t3255436806
{
public:
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::isOwner_
	bool ___isOwner__1;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipHelperStream::stream_
	Stream_t3255436806 * ___stream__2;

public:
	inline static int32_t get_offset_of_isOwner__1() { return static_cast<int32_t>(offsetof(ZipHelperStream_t3454744209, ___isOwner__1)); }
	inline bool get_isOwner__1() const { return ___isOwner__1; }
	inline bool* get_address_of_isOwner__1() { return &___isOwner__1; }
	inline void set_isOwner__1(bool value)
	{
		___isOwner__1 = value;
	}

	inline static int32_t get_offset_of_stream__2() { return static_cast<int32_t>(offsetof(ZipHelperStream_t3454744209, ___stream__2)); }
	inline Stream_t3255436806 * get_stream__2() const { return ___stream__2; }
	inline Stream_t3255436806 ** get_address_of_stream__2() { return &___stream__2; }
	inline void set_stream__2(Stream_t3255436806 * value)
	{
		___stream__2 = value;
		Il2CppCodeGenWriteBarrier(&___stream__2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
