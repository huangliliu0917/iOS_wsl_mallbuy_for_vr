#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip504213360.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi1510270153.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi2471403746.h"

// System.Collections.ArrayList
struct ArrayList_t4252133567;
// ICSharpCode.SharpZipLib.Checksums.Crc32
struct Crc32_t3420759743;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t1764014695;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.ZipOutputStream
struct  ZipOutputStream_t4168488204  : public DeflaterOutputStream_t504213360
{
public:
	// System.Collections.ArrayList ICSharpCode.SharpZipLib.Zip.ZipOutputStream::entries
	ArrayList_t4252133567 * ___entries_10;
	// ICSharpCode.SharpZipLib.Checksums.Crc32 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::crc
	Crc32_t3420759743 * ___crc_11;
	// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipOutputStream::curEntry
	ZipEntry_t1764014695 * ___curEntry_12;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::defaultCompressionLevel
	int32_t ___defaultCompressionLevel_13;
	// ICSharpCode.SharpZipLib.Zip.CompressionMethod ICSharpCode.SharpZipLib.Zip.ZipOutputStream::curMethod
	int32_t ___curMethod_14;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::size
	int64_t ___size_15;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::offset
	int64_t ___offset_16;
	// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipOutputStream::zipComment
	ByteU5BU5D_t3397334013* ___zipComment_17;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipOutputStream::patchEntryHeader
	bool ___patchEntryHeader_18;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::crcPatchPos
	int64_t ___crcPatchPos_19;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::sizePatchPos
	int64_t ___sizePatchPos_20;
	// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::useZip64_
	int32_t ___useZip64__21;

public:
	inline static int32_t get_offset_of_entries_10() { return static_cast<int32_t>(offsetof(ZipOutputStream_t4168488204, ___entries_10)); }
	inline ArrayList_t4252133567 * get_entries_10() const { return ___entries_10; }
	inline ArrayList_t4252133567 ** get_address_of_entries_10() { return &___entries_10; }
	inline void set_entries_10(ArrayList_t4252133567 * value)
	{
		___entries_10 = value;
		Il2CppCodeGenWriteBarrier(&___entries_10, value);
	}

	inline static int32_t get_offset_of_crc_11() { return static_cast<int32_t>(offsetof(ZipOutputStream_t4168488204, ___crc_11)); }
	inline Crc32_t3420759743 * get_crc_11() const { return ___crc_11; }
	inline Crc32_t3420759743 ** get_address_of_crc_11() { return &___crc_11; }
	inline void set_crc_11(Crc32_t3420759743 * value)
	{
		___crc_11 = value;
		Il2CppCodeGenWriteBarrier(&___crc_11, value);
	}

	inline static int32_t get_offset_of_curEntry_12() { return static_cast<int32_t>(offsetof(ZipOutputStream_t4168488204, ___curEntry_12)); }
	inline ZipEntry_t1764014695 * get_curEntry_12() const { return ___curEntry_12; }
	inline ZipEntry_t1764014695 ** get_address_of_curEntry_12() { return &___curEntry_12; }
	inline void set_curEntry_12(ZipEntry_t1764014695 * value)
	{
		___curEntry_12 = value;
		Il2CppCodeGenWriteBarrier(&___curEntry_12, value);
	}

	inline static int32_t get_offset_of_defaultCompressionLevel_13() { return static_cast<int32_t>(offsetof(ZipOutputStream_t4168488204, ___defaultCompressionLevel_13)); }
	inline int32_t get_defaultCompressionLevel_13() const { return ___defaultCompressionLevel_13; }
	inline int32_t* get_address_of_defaultCompressionLevel_13() { return &___defaultCompressionLevel_13; }
	inline void set_defaultCompressionLevel_13(int32_t value)
	{
		___defaultCompressionLevel_13 = value;
	}

	inline static int32_t get_offset_of_curMethod_14() { return static_cast<int32_t>(offsetof(ZipOutputStream_t4168488204, ___curMethod_14)); }
	inline int32_t get_curMethod_14() const { return ___curMethod_14; }
	inline int32_t* get_address_of_curMethod_14() { return &___curMethod_14; }
	inline void set_curMethod_14(int32_t value)
	{
		___curMethod_14 = value;
	}

	inline static int32_t get_offset_of_size_15() { return static_cast<int32_t>(offsetof(ZipOutputStream_t4168488204, ___size_15)); }
	inline int64_t get_size_15() const { return ___size_15; }
	inline int64_t* get_address_of_size_15() { return &___size_15; }
	inline void set_size_15(int64_t value)
	{
		___size_15 = value;
	}

	inline static int32_t get_offset_of_offset_16() { return static_cast<int32_t>(offsetof(ZipOutputStream_t4168488204, ___offset_16)); }
	inline int64_t get_offset_16() const { return ___offset_16; }
	inline int64_t* get_address_of_offset_16() { return &___offset_16; }
	inline void set_offset_16(int64_t value)
	{
		___offset_16 = value;
	}

	inline static int32_t get_offset_of_zipComment_17() { return static_cast<int32_t>(offsetof(ZipOutputStream_t4168488204, ___zipComment_17)); }
	inline ByteU5BU5D_t3397334013* get_zipComment_17() const { return ___zipComment_17; }
	inline ByteU5BU5D_t3397334013** get_address_of_zipComment_17() { return &___zipComment_17; }
	inline void set_zipComment_17(ByteU5BU5D_t3397334013* value)
	{
		___zipComment_17 = value;
		Il2CppCodeGenWriteBarrier(&___zipComment_17, value);
	}

	inline static int32_t get_offset_of_patchEntryHeader_18() { return static_cast<int32_t>(offsetof(ZipOutputStream_t4168488204, ___patchEntryHeader_18)); }
	inline bool get_patchEntryHeader_18() const { return ___patchEntryHeader_18; }
	inline bool* get_address_of_patchEntryHeader_18() { return &___patchEntryHeader_18; }
	inline void set_patchEntryHeader_18(bool value)
	{
		___patchEntryHeader_18 = value;
	}

	inline static int32_t get_offset_of_crcPatchPos_19() { return static_cast<int32_t>(offsetof(ZipOutputStream_t4168488204, ___crcPatchPos_19)); }
	inline int64_t get_crcPatchPos_19() const { return ___crcPatchPos_19; }
	inline int64_t* get_address_of_crcPatchPos_19() { return &___crcPatchPos_19; }
	inline void set_crcPatchPos_19(int64_t value)
	{
		___crcPatchPos_19 = value;
	}

	inline static int32_t get_offset_of_sizePatchPos_20() { return static_cast<int32_t>(offsetof(ZipOutputStream_t4168488204, ___sizePatchPos_20)); }
	inline int64_t get_sizePatchPos_20() const { return ___sizePatchPos_20; }
	inline int64_t* get_address_of_sizePatchPos_20() { return &___sizePatchPos_20; }
	inline void set_sizePatchPos_20(int64_t value)
	{
		___sizePatchPos_20 = value;
	}

	inline static int32_t get_offset_of_useZip64__21() { return static_cast<int32_t>(offsetof(ZipOutputStream_t4168488204, ___useZip64__21)); }
	inline int32_t get_useZip64__21() const { return ___useZip64__21; }
	inline int32_t* get_address_of_useZip64__21() { return &___useZip64__21; }
	inline void set_useZip64__21(int32_t value)
	{
		___useZip64__21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
