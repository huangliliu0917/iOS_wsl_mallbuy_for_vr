#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_DeriveBytes1087525826.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.HMACSHA1
struct HMACSHA1_t1958407246;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rfc2898DeriveBytes
struct  Rfc2898DeriveBytes_t1773348698  : public DeriveBytes_t1087525826
{
public:
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_iteration
	int32_t ____iteration_0;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_salt
	ByteU5BU5D_t3397334013* ____salt_1;
	// System.Security.Cryptography.HMACSHA1 System.Security.Cryptography.Rfc2898DeriveBytes::_hmac
	HMACSHA1_t1958407246 * ____hmac_2;
	// System.Byte[] System.Security.Cryptography.Rfc2898DeriveBytes::_buffer
	ByteU5BU5D_t3397334013* ____buffer_3;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_pos
	int32_t ____pos_4;
	// System.Int32 System.Security.Cryptography.Rfc2898DeriveBytes::_f
	int32_t ____f_5;

public:
	inline static int32_t get_offset_of__iteration_0() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t1773348698, ____iteration_0)); }
	inline int32_t get__iteration_0() const { return ____iteration_0; }
	inline int32_t* get_address_of__iteration_0() { return &____iteration_0; }
	inline void set__iteration_0(int32_t value)
	{
		____iteration_0 = value;
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t1773348698, ____salt_1)); }
	inline ByteU5BU5D_t3397334013* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t3397334013** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t3397334013* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier(&____salt_1, value);
	}

	inline static int32_t get_offset_of__hmac_2() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t1773348698, ____hmac_2)); }
	inline HMACSHA1_t1958407246 * get__hmac_2() const { return ____hmac_2; }
	inline HMACSHA1_t1958407246 ** get_address_of__hmac_2() { return &____hmac_2; }
	inline void set__hmac_2(HMACSHA1_t1958407246 * value)
	{
		____hmac_2 = value;
		Il2CppCodeGenWriteBarrier(&____hmac_2, value);
	}

	inline static int32_t get_offset_of__buffer_3() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t1773348698, ____buffer_3)); }
	inline ByteU5BU5D_t3397334013* get__buffer_3() const { return ____buffer_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__buffer_3() { return &____buffer_3; }
	inline void set__buffer_3(ByteU5BU5D_t3397334013* value)
	{
		____buffer_3 = value;
		Il2CppCodeGenWriteBarrier(&____buffer_3, value);
	}

	inline static int32_t get_offset_of__pos_4() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t1773348698, ____pos_4)); }
	inline int32_t get__pos_4() const { return ____pos_4; }
	inline int32_t* get_address_of__pos_4() { return &____pos_4; }
	inline void set__pos_4(int32_t value)
	{
		____pos_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Rfc2898DeriveBytes_t1773348698, ____f_5)); }
	inline int32_t get__f_5() const { return ____f_5; }
	inline int32_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(int32_t value)
	{
		____f_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
