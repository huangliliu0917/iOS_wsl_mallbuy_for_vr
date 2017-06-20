#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_RenderHeads_Media_AVProVideo_Med1032549801.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.MediaPlayer/PlatformOptions
struct  PlatformOptions_t3722615293  : public Il2CppObject
{
public:
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer/PlatformOptions::overridePath
	bool ___overridePath_0;
	// RenderHeads.Media.AVProVideo.MediaPlayer/FileLocation RenderHeads.Media.AVProVideo.MediaPlayer/PlatformOptions::pathLocation
	int32_t ___pathLocation_1;
	// System.String RenderHeads.Media.AVProVideo.MediaPlayer/PlatformOptions::path
	String_t* ___path_2;

public:
	inline static int32_t get_offset_of_overridePath_0() { return static_cast<int32_t>(offsetof(PlatformOptions_t3722615293, ___overridePath_0)); }
	inline bool get_overridePath_0() const { return ___overridePath_0; }
	inline bool* get_address_of_overridePath_0() { return &___overridePath_0; }
	inline void set_overridePath_0(bool value)
	{
		___overridePath_0 = value;
	}

	inline static int32_t get_offset_of_pathLocation_1() { return static_cast<int32_t>(offsetof(PlatformOptions_t3722615293, ___pathLocation_1)); }
	inline int32_t get_pathLocation_1() const { return ___pathLocation_1; }
	inline int32_t* get_address_of_pathLocation_1() { return &___pathLocation_1; }
	inline void set_pathLocation_1(int32_t value)
	{
		___pathLocation_1 = value;
	}

	inline static int32_t get_offset_of_path_2() { return static_cast<int32_t>(offsetof(PlatformOptions_t3722615293, ___path_2)); }
	inline String_t* get_path_2() const { return ___path_2; }
	inline String_t** get_address_of_path_2() { return &___path_2; }
	inline void set_path_2(String_t* value)
	{
		___path_2 = value;
		Il2CppCodeGenWriteBarrier(&___path_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
