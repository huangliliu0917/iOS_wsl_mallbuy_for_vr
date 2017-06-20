#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_RenderHeads_Media_AVProVideo_Erro259631595.h"
#include "UnityEngine_UnityEngine_FilterMode10814199.h"
#include "UnityEngine_UnityEngine_TextureWrapMode3683976566.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.BaseMediaPlayer
struct  BaseMediaPlayer_t2631503292  : public Il2CppObject
{
public:
	// System.String RenderHeads.Media.AVProVideo.BaseMediaPlayer::_playerDescription
	String_t* ____playerDescription_0;
	// RenderHeads.Media.AVProVideo.ErrorCode RenderHeads.Media.AVProVideo.BaseMediaPlayer::_lastError
	int32_t ____lastError_1;
	// UnityEngine.FilterMode RenderHeads.Media.AVProVideo.BaseMediaPlayer::_defaultTextureFilterMode
	int32_t ____defaultTextureFilterMode_2;
	// UnityEngine.TextureWrapMode RenderHeads.Media.AVProVideo.BaseMediaPlayer::_defaultTextureWrapMode
	int32_t ____defaultTextureWrapMode_3;
	// System.Int32 RenderHeads.Media.AVProVideo.BaseMediaPlayer::_defaultTextureAnisoLevel
	int32_t ____defaultTextureAnisoLevel_4;

public:
	inline static int32_t get_offset_of__playerDescription_0() { return static_cast<int32_t>(offsetof(BaseMediaPlayer_t2631503292, ____playerDescription_0)); }
	inline String_t* get__playerDescription_0() const { return ____playerDescription_0; }
	inline String_t** get_address_of__playerDescription_0() { return &____playerDescription_0; }
	inline void set__playerDescription_0(String_t* value)
	{
		____playerDescription_0 = value;
		Il2CppCodeGenWriteBarrier(&____playerDescription_0, value);
	}

	inline static int32_t get_offset_of__lastError_1() { return static_cast<int32_t>(offsetof(BaseMediaPlayer_t2631503292, ____lastError_1)); }
	inline int32_t get__lastError_1() const { return ____lastError_1; }
	inline int32_t* get_address_of__lastError_1() { return &____lastError_1; }
	inline void set__lastError_1(int32_t value)
	{
		____lastError_1 = value;
	}

	inline static int32_t get_offset_of__defaultTextureFilterMode_2() { return static_cast<int32_t>(offsetof(BaseMediaPlayer_t2631503292, ____defaultTextureFilterMode_2)); }
	inline int32_t get__defaultTextureFilterMode_2() const { return ____defaultTextureFilterMode_2; }
	inline int32_t* get_address_of__defaultTextureFilterMode_2() { return &____defaultTextureFilterMode_2; }
	inline void set__defaultTextureFilterMode_2(int32_t value)
	{
		____defaultTextureFilterMode_2 = value;
	}

	inline static int32_t get_offset_of__defaultTextureWrapMode_3() { return static_cast<int32_t>(offsetof(BaseMediaPlayer_t2631503292, ____defaultTextureWrapMode_3)); }
	inline int32_t get__defaultTextureWrapMode_3() const { return ____defaultTextureWrapMode_3; }
	inline int32_t* get_address_of__defaultTextureWrapMode_3() { return &____defaultTextureWrapMode_3; }
	inline void set__defaultTextureWrapMode_3(int32_t value)
	{
		____defaultTextureWrapMode_3 = value;
	}

	inline static int32_t get_offset_of__defaultTextureAnisoLevel_4() { return static_cast<int32_t>(offsetof(BaseMediaPlayer_t2631503292, ____defaultTextureAnisoLevel_4)); }
	inline int32_t get__defaultTextureAnisoLevel_4() const { return ____defaultTextureAnisoLevel_4; }
	inline int32_t* get_address_of__defaultTextureAnisoLevel_4() { return &____defaultTextureAnisoLevel_4; }
	inline void set__defaultTextureAnisoLevel_4(int32_t value)
	{
		____defaultTextureAnisoLevel_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
