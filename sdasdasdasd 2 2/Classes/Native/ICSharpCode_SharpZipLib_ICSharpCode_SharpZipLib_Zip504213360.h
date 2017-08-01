#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream3255436806.h"

// System.String
struct String_t;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t281704372;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// ICSharpCode.SharpZipLib.Zip.Compression.Deflater
struct Deflater_t1011217589;
// System.IO.Stream
struct Stream_t3255436806;
// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t2688843926;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream
struct  DeflaterOutputStream_t504213360  : public Stream_t3255436806
{
public:
	// System.String ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::password
	String_t* ___password_1;
	// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::cryptoTransform_
	Il2CppObject * ___cryptoTransform__2;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::AESAuthCode
	ByteU5BU5D_t3397334013* ___AESAuthCode_3;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::buffer_
	ByteU5BU5D_t3397334013* ___buffer__4;
	// ICSharpCode.SharpZipLib.Zip.Compression.Deflater ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::deflater_
	Deflater_t1011217589 * ___deflater__5;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::baseOutputStream_
	Stream_t3255436806 * ___baseOutputStream__6;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::isClosed_
	bool ___isClosed__7;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::isStreamOwner_
	bool ___isStreamOwner__8;

public:
	inline static int32_t get_offset_of_password_1() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t504213360, ___password_1)); }
	inline String_t* get_password_1() const { return ___password_1; }
	inline String_t** get_address_of_password_1() { return &___password_1; }
	inline void set_password_1(String_t* value)
	{
		___password_1 = value;
		Il2CppCodeGenWriteBarrier(&___password_1, value);
	}

	inline static int32_t get_offset_of_cryptoTransform__2() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t504213360, ___cryptoTransform__2)); }
	inline Il2CppObject * get_cryptoTransform__2() const { return ___cryptoTransform__2; }
	inline Il2CppObject ** get_address_of_cryptoTransform__2() { return &___cryptoTransform__2; }
	inline void set_cryptoTransform__2(Il2CppObject * value)
	{
		___cryptoTransform__2 = value;
		Il2CppCodeGenWriteBarrier(&___cryptoTransform__2, value);
	}

	inline static int32_t get_offset_of_AESAuthCode_3() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t504213360, ___AESAuthCode_3)); }
	inline ByteU5BU5D_t3397334013* get_AESAuthCode_3() const { return ___AESAuthCode_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_AESAuthCode_3() { return &___AESAuthCode_3; }
	inline void set_AESAuthCode_3(ByteU5BU5D_t3397334013* value)
	{
		___AESAuthCode_3 = value;
		Il2CppCodeGenWriteBarrier(&___AESAuthCode_3, value);
	}

	inline static int32_t get_offset_of_buffer__4() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t504213360, ___buffer__4)); }
	inline ByteU5BU5D_t3397334013* get_buffer__4() const { return ___buffer__4; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer__4() { return &___buffer__4; }
	inline void set_buffer__4(ByteU5BU5D_t3397334013* value)
	{
		___buffer__4 = value;
		Il2CppCodeGenWriteBarrier(&___buffer__4, value);
	}

	inline static int32_t get_offset_of_deflater__5() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t504213360, ___deflater__5)); }
	inline Deflater_t1011217589 * get_deflater__5() const { return ___deflater__5; }
	inline Deflater_t1011217589 ** get_address_of_deflater__5() { return &___deflater__5; }
	inline void set_deflater__5(Deflater_t1011217589 * value)
	{
		___deflater__5 = value;
		Il2CppCodeGenWriteBarrier(&___deflater__5, value);
	}

	inline static int32_t get_offset_of_baseOutputStream__6() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t504213360, ___baseOutputStream__6)); }
	inline Stream_t3255436806 * get_baseOutputStream__6() const { return ___baseOutputStream__6; }
	inline Stream_t3255436806 ** get_address_of_baseOutputStream__6() { return &___baseOutputStream__6; }
	inline void set_baseOutputStream__6(Stream_t3255436806 * value)
	{
		___baseOutputStream__6 = value;
		Il2CppCodeGenWriteBarrier(&___baseOutputStream__6, value);
	}

	inline static int32_t get_offset_of_isClosed__7() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t504213360, ___isClosed__7)); }
	inline bool get_isClosed__7() const { return ___isClosed__7; }
	inline bool* get_address_of_isClosed__7() { return &___isClosed__7; }
	inline void set_isClosed__7(bool value)
	{
		___isClosed__7 = value;
	}

	inline static int32_t get_offset_of_isStreamOwner__8() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t504213360, ___isStreamOwner__8)); }
	inline bool get_isStreamOwner__8() const { return ___isStreamOwner__8; }
	inline bool* get_address_of_isStreamOwner__8() { return &___isStreamOwner__8; }
	inline void set_isStreamOwner__8(bool value)
	{
		___isStreamOwner__8 = value;
	}
};

struct DeflaterOutputStream_t504213360_StaticFields
{
public:
	// System.Security.Cryptography.RNGCryptoServiceProvider ICSharpCode.SharpZipLib.Zip.Compression.Streams.DeflaterOutputStream::_aesRnd
	RNGCryptoServiceProvider_t2688843926 * ____aesRnd_9;

public:
	inline static int32_t get_offset_of__aesRnd_9() { return static_cast<int32_t>(offsetof(DeflaterOutputStream_t504213360_StaticFields, ____aesRnd_9)); }
	inline RNGCryptoServiceProvider_t2688843926 * get__aesRnd_9() const { return ____aesRnd_9; }
	inline RNGCryptoServiceProvider_t2688843926 ** get_address_of__aesRnd_9() { return &____aesRnd_9; }
	inline void set__aesRnd_9(RNGCryptoServiceProvider_t2688843926 * value)
	{
		____aesRnd_9 = value;
		Il2CppCodeGenWriteBarrier(&____aesRnd_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
