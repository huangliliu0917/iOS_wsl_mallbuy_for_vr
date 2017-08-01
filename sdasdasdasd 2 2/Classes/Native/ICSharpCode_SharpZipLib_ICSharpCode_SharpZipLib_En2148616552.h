#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t281704372;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.HMACSHA1
struct HMACSHA1_t1958407246;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Encryption.ZipAESTransform
struct  ZipAESTransform_t2148616552  : public Il2CppObject
{
public:
	// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_blockSize
	int32_t ____blockSize_0;
	// System.Security.Cryptography.ICryptoTransform ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_encryptor
	Il2CppObject * ____encryptor_1;
	// System.Byte[] ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_counterNonce
	ByteU5BU5D_t3397334013* ____counterNonce_2;
	// System.Byte[] ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_encryptBuffer
	ByteU5BU5D_t3397334013* ____encryptBuffer_3;
	// System.Int32 ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_encrPos
	int32_t ____encrPos_4;
	// System.Byte[] ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_pwdVerifier
	ByteU5BU5D_t3397334013* ____pwdVerifier_5;
	// System.Security.Cryptography.HMACSHA1 ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_hmacsha1
	HMACSHA1_t1958407246 * ____hmacsha1_6;
	// System.Boolean ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_finalised
	bool ____finalised_7;
	// System.Boolean ICSharpCode.SharpZipLib.Encryption.ZipAESTransform::_writeMode
	bool ____writeMode_8;

public:
	inline static int32_t get_offset_of__blockSize_0() { return static_cast<int32_t>(offsetof(ZipAESTransform_t2148616552, ____blockSize_0)); }
	inline int32_t get__blockSize_0() const { return ____blockSize_0; }
	inline int32_t* get_address_of__blockSize_0() { return &____blockSize_0; }
	inline void set__blockSize_0(int32_t value)
	{
		____blockSize_0 = value;
	}

	inline static int32_t get_offset_of__encryptor_1() { return static_cast<int32_t>(offsetof(ZipAESTransform_t2148616552, ____encryptor_1)); }
	inline Il2CppObject * get__encryptor_1() const { return ____encryptor_1; }
	inline Il2CppObject ** get_address_of__encryptor_1() { return &____encryptor_1; }
	inline void set__encryptor_1(Il2CppObject * value)
	{
		____encryptor_1 = value;
		Il2CppCodeGenWriteBarrier(&____encryptor_1, value);
	}

	inline static int32_t get_offset_of__counterNonce_2() { return static_cast<int32_t>(offsetof(ZipAESTransform_t2148616552, ____counterNonce_2)); }
	inline ByteU5BU5D_t3397334013* get__counterNonce_2() const { return ____counterNonce_2; }
	inline ByteU5BU5D_t3397334013** get_address_of__counterNonce_2() { return &____counterNonce_2; }
	inline void set__counterNonce_2(ByteU5BU5D_t3397334013* value)
	{
		____counterNonce_2 = value;
		Il2CppCodeGenWriteBarrier(&____counterNonce_2, value);
	}

	inline static int32_t get_offset_of__encryptBuffer_3() { return static_cast<int32_t>(offsetof(ZipAESTransform_t2148616552, ____encryptBuffer_3)); }
	inline ByteU5BU5D_t3397334013* get__encryptBuffer_3() const { return ____encryptBuffer_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__encryptBuffer_3() { return &____encryptBuffer_3; }
	inline void set__encryptBuffer_3(ByteU5BU5D_t3397334013* value)
	{
		____encryptBuffer_3 = value;
		Il2CppCodeGenWriteBarrier(&____encryptBuffer_3, value);
	}

	inline static int32_t get_offset_of__encrPos_4() { return static_cast<int32_t>(offsetof(ZipAESTransform_t2148616552, ____encrPos_4)); }
	inline int32_t get__encrPos_4() const { return ____encrPos_4; }
	inline int32_t* get_address_of__encrPos_4() { return &____encrPos_4; }
	inline void set__encrPos_4(int32_t value)
	{
		____encrPos_4 = value;
	}

	inline static int32_t get_offset_of__pwdVerifier_5() { return static_cast<int32_t>(offsetof(ZipAESTransform_t2148616552, ____pwdVerifier_5)); }
	inline ByteU5BU5D_t3397334013* get__pwdVerifier_5() const { return ____pwdVerifier_5; }
	inline ByteU5BU5D_t3397334013** get_address_of__pwdVerifier_5() { return &____pwdVerifier_5; }
	inline void set__pwdVerifier_5(ByteU5BU5D_t3397334013* value)
	{
		____pwdVerifier_5 = value;
		Il2CppCodeGenWriteBarrier(&____pwdVerifier_5, value);
	}

	inline static int32_t get_offset_of__hmacsha1_6() { return static_cast<int32_t>(offsetof(ZipAESTransform_t2148616552, ____hmacsha1_6)); }
	inline HMACSHA1_t1958407246 * get__hmacsha1_6() const { return ____hmacsha1_6; }
	inline HMACSHA1_t1958407246 ** get_address_of__hmacsha1_6() { return &____hmacsha1_6; }
	inline void set__hmacsha1_6(HMACSHA1_t1958407246 * value)
	{
		____hmacsha1_6 = value;
		Il2CppCodeGenWriteBarrier(&____hmacsha1_6, value);
	}

	inline static int32_t get_offset_of__finalised_7() { return static_cast<int32_t>(offsetof(ZipAESTransform_t2148616552, ____finalised_7)); }
	inline bool get__finalised_7() const { return ____finalised_7; }
	inline bool* get_address_of__finalised_7() { return &____finalised_7; }
	inline void set__finalised_7(bool value)
	{
		____finalised_7 = value;
	}

	inline static int32_t get_offset_of__writeMode_8() { return static_cast<int32_t>(offsetof(ZipAESTransform_t2148616552, ____writeMode_8)); }
	inline bool get__writeMode_8() const { return ____writeMode_8; }
	inline bool* get_address_of__writeMode_8() { return &____writeMode_8; }
	inline void set__writeMode_8(bool value)
	{
		____writeMode_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
