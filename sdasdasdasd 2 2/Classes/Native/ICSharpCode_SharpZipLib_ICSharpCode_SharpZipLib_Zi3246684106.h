﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Int16[]
struct Int16U5BU5D_t3104283263;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_t3246684106;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct  InflaterHuffmanTree_t3246684106  : public Il2CppObject
{
public:
	// System.Int16[] ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::tree
	Int16U5BU5D_t3104283263* ___tree_0;

public:
	inline static int32_t get_offset_of_tree_0() { return static_cast<int32_t>(offsetof(InflaterHuffmanTree_t3246684106, ___tree_0)); }
	inline Int16U5BU5D_t3104283263* get_tree_0() const { return ___tree_0; }
	inline Int16U5BU5D_t3104283263** get_address_of_tree_0() { return &___tree_0; }
	inline void set_tree_0(Int16U5BU5D_t3104283263* value)
	{
		___tree_0 = value;
		Il2CppCodeGenWriteBarrier(&___tree_0, value);
	}
};

struct InflaterHuffmanTree_t3246684106_StaticFields
{
public:
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::defLitLenTree
	InflaterHuffmanTree_t3246684106 * ___defLitLenTree_1;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree::defDistTree
	InflaterHuffmanTree_t3246684106 * ___defDistTree_2;

public:
	inline static int32_t get_offset_of_defLitLenTree_1() { return static_cast<int32_t>(offsetof(InflaterHuffmanTree_t3246684106_StaticFields, ___defLitLenTree_1)); }
	inline InflaterHuffmanTree_t3246684106 * get_defLitLenTree_1() const { return ___defLitLenTree_1; }
	inline InflaterHuffmanTree_t3246684106 ** get_address_of_defLitLenTree_1() { return &___defLitLenTree_1; }
	inline void set_defLitLenTree_1(InflaterHuffmanTree_t3246684106 * value)
	{
		___defLitLenTree_1 = value;
		Il2CppCodeGenWriteBarrier(&___defLitLenTree_1, value);
	}

	inline static int32_t get_offset_of_defDistTree_2() { return static_cast<int32_t>(offsetof(InflaterHuffmanTree_t3246684106_StaticFields, ___defDistTree_2)); }
	inline InflaterHuffmanTree_t3246684106 * get_defDistTree_2() const { return ___defDistTree_2; }
	inline InflaterHuffmanTree_t3246684106 ** get_address_of_defDistTree_2() { return &___defDistTree_2; }
	inline void set_defDistTree_2(InflaterHuffmanTree_t3246684106 * value)
	{
		___defDistTree_2 = value;
		Il2CppCodeGenWriteBarrier(&___defDistTree_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
