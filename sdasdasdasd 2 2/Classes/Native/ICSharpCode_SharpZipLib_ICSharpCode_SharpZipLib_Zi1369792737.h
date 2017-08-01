#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip663799889.h"

// ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler
struct ReadDataHandler_t1814344764;
// ICSharpCode.SharpZipLib.Checksums.Crc32
struct Crc32_t3420759743;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t1764014695;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.ZipInputStream
struct  ZipInputStream_t1369792737  : public InflaterInputStream_t663799889
{
public:
	// ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler ICSharpCode.SharpZipLib.Zip.ZipInputStream::internalReader
	ReadDataHandler_t1814344764 * ___internalReader_7;
	// ICSharpCode.SharpZipLib.Checksums.Crc32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::crc
	Crc32_t3420759743 * ___crc_8;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipInputStream::entry
	ZipEntry_t1764014695 * ___entry_9;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipInputStream::size
	int64_t ___size_10;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::method
	int32_t ___method_11;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::flags
	int32_t ___flags_12;
	// System.String ICSharpCode.SharpZipLib.Zip.ZipInputStream::password
	String_t* ___password_13;

public:
	inline static int32_t get_offset_of_internalReader_7() { return static_cast<int32_t>(offsetof(ZipInputStream_t1369792737, ___internalReader_7)); }
	inline ReadDataHandler_t1814344764 * get_internalReader_7() const { return ___internalReader_7; }
	inline ReadDataHandler_t1814344764 ** get_address_of_internalReader_7() { return &___internalReader_7; }
	inline void set_internalReader_7(ReadDataHandler_t1814344764 * value)
	{
		___internalReader_7 = value;
		Il2CppCodeGenWriteBarrier(&___internalReader_7, value);
	}

	inline static int32_t get_offset_of_crc_8() { return static_cast<int32_t>(offsetof(ZipInputStream_t1369792737, ___crc_8)); }
	inline Crc32_t3420759743 * get_crc_8() const { return ___crc_8; }
	inline Crc32_t3420759743 ** get_address_of_crc_8() { return &___crc_8; }
	inline void set_crc_8(Crc32_t3420759743 * value)
	{
		___crc_8 = value;
		Il2CppCodeGenWriteBarrier(&___crc_8, value);
	}

	inline static int32_t get_offset_of_entry_9() { return static_cast<int32_t>(offsetof(ZipInputStream_t1369792737, ___entry_9)); }
	inline ZipEntry_t1764014695 * get_entry_9() const { return ___entry_9; }
	inline ZipEntry_t1764014695 ** get_address_of_entry_9() { return &___entry_9; }
	inline void set_entry_9(ZipEntry_t1764014695 * value)
	{
		___entry_9 = value;
		Il2CppCodeGenWriteBarrier(&___entry_9, value);
	}

	inline static int32_t get_offset_of_size_10() { return static_cast<int32_t>(offsetof(ZipInputStream_t1369792737, ___size_10)); }
	inline int64_t get_size_10() const { return ___size_10; }
	inline int64_t* get_address_of_size_10() { return &___size_10; }
	inline void set_size_10(int64_t value)
	{
		___size_10 = value;
	}

	inline static int32_t get_offset_of_method_11() { return static_cast<int32_t>(offsetof(ZipInputStream_t1369792737, ___method_11)); }
	inline int32_t get_method_11() const { return ___method_11; }
	inline int32_t* get_address_of_method_11() { return &___method_11; }
	inline void set_method_11(int32_t value)
	{
		___method_11 = value;
	}

	inline static int32_t get_offset_of_flags_12() { return static_cast<int32_t>(offsetof(ZipInputStream_t1369792737, ___flags_12)); }
	inline int32_t get_flags_12() const { return ___flags_12; }
	inline int32_t* get_address_of_flags_12() { return &___flags_12; }
	inline void set_flags_12(int32_t value)
	{
		___flags_12 = value;
	}

	inline static int32_t get_offset_of_password_13() { return static_cast<int32_t>(offsetof(ZipInputStream_t1369792737, ___password_13)); }
	inline String_t* get_password_13() const { return ___password_13; }
	inline String_t** get_address_of_password_13() { return &___password_13; }
	inline void set_password_13(String_t* value)
	{
		___password_13 = value;
		Il2CppCodeGenWriteBarrier(&___password_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
