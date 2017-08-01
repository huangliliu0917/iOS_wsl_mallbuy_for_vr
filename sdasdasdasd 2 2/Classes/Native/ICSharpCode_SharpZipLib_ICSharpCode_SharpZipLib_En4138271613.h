#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_En1612326202.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged
struct  PkzipClassicManaged_t4138271613  : public PkzipClassic_t1612326202
{
public:
	// System.Byte[] ICSharpCode.SharpZipLib.Encryption.PkzipClassicManaged::key_
	ByteU5BU5D_t3397334013* ___key__10;

public:
	inline static int32_t get_offset_of_key__10() { return static_cast<int32_t>(offsetof(PkzipClassicManaged_t4138271613, ___key__10)); }
	inline ByteU5BU5D_t3397334013* get_key__10() const { return ___key__10; }
	inline ByteU5BU5D_t3397334013** get_address_of_key__10() { return &___key__10; }
	inline void set_key__10(ByteU5BU5D_t3397334013* value)
	{
		___key__10 = value;
		Il2CppCodeGenWriteBarrier(&___key__10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
