#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.Material
struct Material_t193706927;
// System.String
struct String_t;
// RenderHeads.Media.AVProVideo.MediaPlayer
struct MediaPlayer_t797690829;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Texture
struct Texture_t2243626319;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.ApplyToMaterial
struct  ApplyToMaterial_t3838669542  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 RenderHeads.Media.AVProVideo.ApplyToMaterial::_offset
	Vector2_t2243707579  ____offset_2;
	// UnityEngine.Vector2 RenderHeads.Media.AVProVideo.ApplyToMaterial::_scale
	Vector2_t2243707579  ____scale_3;
	// UnityEngine.Material RenderHeads.Media.AVProVideo.ApplyToMaterial::_material
	Material_t193706927 * ____material_4;
	// System.String RenderHeads.Media.AVProVideo.ApplyToMaterial::_texturePropertyName
	String_t* ____texturePropertyName_5;
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.ApplyToMaterial::_media
	MediaPlayer_t797690829 * ____media_6;
	// UnityEngine.Texture2D RenderHeads.Media.AVProVideo.ApplyToMaterial::_defaultTexture
	Texture2D_t3542995729 * ____defaultTexture_7;
	// UnityEngine.Texture RenderHeads.Media.AVProVideo.ApplyToMaterial::_originalTexture
	Texture_t2243626319 * ____originalTexture_8;
	// UnityEngine.Vector2 RenderHeads.Media.AVProVideo.ApplyToMaterial::_originalScale
	Vector2_t2243707579  ____originalScale_9;
	// UnityEngine.Vector2 RenderHeads.Media.AVProVideo.ApplyToMaterial::_originalOffset
	Vector2_t2243707579  ____originalOffset_10;

public:
	inline static int32_t get_offset_of__offset_2() { return static_cast<int32_t>(offsetof(ApplyToMaterial_t3838669542, ____offset_2)); }
	inline Vector2_t2243707579  get__offset_2() const { return ____offset_2; }
	inline Vector2_t2243707579 * get_address_of__offset_2() { return &____offset_2; }
	inline void set__offset_2(Vector2_t2243707579  value)
	{
		____offset_2 = value;
	}

	inline static int32_t get_offset_of__scale_3() { return static_cast<int32_t>(offsetof(ApplyToMaterial_t3838669542, ____scale_3)); }
	inline Vector2_t2243707579  get__scale_3() const { return ____scale_3; }
	inline Vector2_t2243707579 * get_address_of__scale_3() { return &____scale_3; }
	inline void set__scale_3(Vector2_t2243707579  value)
	{
		____scale_3 = value;
	}

	inline static int32_t get_offset_of__material_4() { return static_cast<int32_t>(offsetof(ApplyToMaterial_t3838669542, ____material_4)); }
	inline Material_t193706927 * get__material_4() const { return ____material_4; }
	inline Material_t193706927 ** get_address_of__material_4() { return &____material_4; }
	inline void set__material_4(Material_t193706927 * value)
	{
		____material_4 = value;
		Il2CppCodeGenWriteBarrier(&____material_4, value);
	}

	inline static int32_t get_offset_of__texturePropertyName_5() { return static_cast<int32_t>(offsetof(ApplyToMaterial_t3838669542, ____texturePropertyName_5)); }
	inline String_t* get__texturePropertyName_5() const { return ____texturePropertyName_5; }
	inline String_t** get_address_of__texturePropertyName_5() { return &____texturePropertyName_5; }
	inline void set__texturePropertyName_5(String_t* value)
	{
		____texturePropertyName_5 = value;
		Il2CppCodeGenWriteBarrier(&____texturePropertyName_5, value);
	}

	inline static int32_t get_offset_of__media_6() { return static_cast<int32_t>(offsetof(ApplyToMaterial_t3838669542, ____media_6)); }
	inline MediaPlayer_t797690829 * get__media_6() const { return ____media_6; }
	inline MediaPlayer_t797690829 ** get_address_of__media_6() { return &____media_6; }
	inline void set__media_6(MediaPlayer_t797690829 * value)
	{
		____media_6 = value;
		Il2CppCodeGenWriteBarrier(&____media_6, value);
	}

	inline static int32_t get_offset_of__defaultTexture_7() { return static_cast<int32_t>(offsetof(ApplyToMaterial_t3838669542, ____defaultTexture_7)); }
	inline Texture2D_t3542995729 * get__defaultTexture_7() const { return ____defaultTexture_7; }
	inline Texture2D_t3542995729 ** get_address_of__defaultTexture_7() { return &____defaultTexture_7; }
	inline void set__defaultTexture_7(Texture2D_t3542995729 * value)
	{
		____defaultTexture_7 = value;
		Il2CppCodeGenWriteBarrier(&____defaultTexture_7, value);
	}

	inline static int32_t get_offset_of__originalTexture_8() { return static_cast<int32_t>(offsetof(ApplyToMaterial_t3838669542, ____originalTexture_8)); }
	inline Texture_t2243626319 * get__originalTexture_8() const { return ____originalTexture_8; }
	inline Texture_t2243626319 ** get_address_of__originalTexture_8() { return &____originalTexture_8; }
	inline void set__originalTexture_8(Texture_t2243626319 * value)
	{
		____originalTexture_8 = value;
		Il2CppCodeGenWriteBarrier(&____originalTexture_8, value);
	}

	inline static int32_t get_offset_of__originalScale_9() { return static_cast<int32_t>(offsetof(ApplyToMaterial_t3838669542, ____originalScale_9)); }
	inline Vector2_t2243707579  get__originalScale_9() const { return ____originalScale_9; }
	inline Vector2_t2243707579 * get_address_of__originalScale_9() { return &____originalScale_9; }
	inline void set__originalScale_9(Vector2_t2243707579  value)
	{
		____originalScale_9 = value;
	}

	inline static int32_t get_offset_of__originalOffset_10() { return static_cast<int32_t>(offsetof(ApplyToMaterial_t3838669542, ____originalOffset_10)); }
	inline Vector2_t2243707579  get__originalOffset_10() const { return ____originalOffset_10; }
	inline Vector2_t2243707579 * get_address_of__originalOffset_10() { return &____originalOffset_10; }
	inline void set__originalOffset_10(Vector2_t2243707579  value)
	{
		____originalOffset_10 = value;
	}
};

struct ApplyToMaterial_t3838669542_StaticFields
{
public:
	// System.Int32 RenderHeads.Media.AVProVideo.ApplyToMaterial::_propStereo
	int32_t ____propStereo_11;
	// System.Int32 RenderHeads.Media.AVProVideo.ApplyToMaterial::_propAlphaPack
	int32_t ____propAlphaPack_12;
	// System.Int32 RenderHeads.Media.AVProVideo.ApplyToMaterial::_propApplyGamma
	int32_t ____propApplyGamma_13;

public:
	inline static int32_t get_offset_of__propStereo_11() { return static_cast<int32_t>(offsetof(ApplyToMaterial_t3838669542_StaticFields, ____propStereo_11)); }
	inline int32_t get__propStereo_11() const { return ____propStereo_11; }
	inline int32_t* get_address_of__propStereo_11() { return &____propStereo_11; }
	inline void set__propStereo_11(int32_t value)
	{
		____propStereo_11 = value;
	}

	inline static int32_t get_offset_of__propAlphaPack_12() { return static_cast<int32_t>(offsetof(ApplyToMaterial_t3838669542_StaticFields, ____propAlphaPack_12)); }
	inline int32_t get__propAlphaPack_12() const { return ____propAlphaPack_12; }
	inline int32_t* get_address_of__propAlphaPack_12() { return &____propAlphaPack_12; }
	inline void set__propAlphaPack_12(int32_t value)
	{
		____propAlphaPack_12 = value;
	}

	inline static int32_t get_offset_of__propApplyGamma_13() { return static_cast<int32_t>(offsetof(ApplyToMaterial_t3838669542_StaticFields, ____propApplyGamma_13)); }
	inline int32_t get__propApplyGamma_13() const { return ____propApplyGamma_13; }
	inline int32_t* get_address_of__propApplyGamma_13() { return &____propApplyGamma_13; }
	inline void set__propApplyGamma_13(int32_t value)
	{
		____propApplyGamma_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
