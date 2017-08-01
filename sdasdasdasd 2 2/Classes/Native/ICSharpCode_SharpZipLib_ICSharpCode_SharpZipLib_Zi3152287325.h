#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.ZipExtraData
struct  ZipExtraData_t3152287325  : public Il2CppObject
{
public:
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::_index
	int32_t ____index_0;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::_readValueStart
	int32_t ____readValueStart_1;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipExtraData::_readValueLength
	int32_t ____readValueLength_2;
	// System.IO.MemoryStream ICSharpCode.SharpZipLib.Zip.ZipExtraData::_newEntry
	MemoryStream_t743994179 * ____newEntry_3;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipExtraData::_data
	ByteU5BU5D_t3397334013* ____data_4;

public:
	inline static int32_t get_offset_of__index_0() { return static_cast<int32_t>(offsetof(ZipExtraData_t3152287325, ____index_0)); }
	inline int32_t get__index_0() const { return ____index_0; }
	inline int32_t* get_address_of__index_0() { return &____index_0; }
	inline void set__index_0(int32_t value)
	{
		____index_0 = value;
	}

	inline static int32_t get_offset_of__readValueStart_1() { return static_cast<int32_t>(offsetof(ZipExtraData_t3152287325, ____readValueStart_1)); }
	inline int32_t get__readValueStart_1() const { return ____readValueStart_1; }
	inline int32_t* get_address_of__readValueStart_1() { return &____readValueStart_1; }
	inline void set__readValueStart_1(int32_t value)
	{
		____readValueStart_1 = value;
	}

	inline static int32_t get_offset_of__readValueLength_2() { return static_cast<int32_t>(offsetof(ZipExtraData_t3152287325, ____readValueLength_2)); }
	inline int32_t get__readValueLength_2() const { return ____readValueLength_2; }
	inline int32_t* get_address_of__readValueLength_2() { return &____readValueLength_2; }
	inline void set__readValueLength_2(int32_t value)
	{
		____readValueLength_2 = value;
	}

	inline static int32_t get_offset_of__newEntry_3() { return static_cast<int32_t>(offsetof(ZipExtraData_t3152287325, ____newEntry_3)); }
	inline MemoryStream_t743994179 * get__newEntry_3() const { return ____newEntry_3; }
	inline MemoryStream_t743994179 ** get_address_of__newEntry_3() { return &____newEntry_3; }
	inline void set__newEntry_3(MemoryStream_t743994179 * value)
	{
		____newEntry_3 = value;
		Il2CppCodeGenWriteBarrier(&____newEntry_3, value);
	}

	inline static int32_t get_offset_of__data_4() { return static_cast<int32_t>(offsetof(ZipExtraData_t3152287325, ____data_4)); }
	inline ByteU5BU5D_t3397334013* get__data_4() const { return ____data_4; }
	inline ByteU5BU5D_t3397334013** get_address_of__data_4() { return &____data_4; }
	inline void set__data_4(ByteU5BU5D_t3397334013* value)
	{
		____data_4 = value;
		Il2CppCodeGenWriteBarrier(&____data_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
