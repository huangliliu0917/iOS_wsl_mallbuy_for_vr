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

// UnityEngine.Renderer
struct Renderer_t257310565;
// RenderHeads.Media.AVProVideo.MediaPlayer
struct MediaPlayer_t797690829;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.ApplyToMesh
struct  ApplyToMesh_t2002801166  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 RenderHeads.Media.AVProVideo.ApplyToMesh::_offset
	Vector2_t2243707579  ____offset_2;
	// UnityEngine.Vector2 RenderHeads.Media.AVProVideo.ApplyToMesh::_scale
	Vector2_t2243707579  ____scale_3;
	// UnityEngine.Renderer RenderHeads.Media.AVProVideo.ApplyToMesh::_mesh
	Renderer_t257310565 * ____mesh_4;
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.ApplyToMesh::_media
	MediaPlayer_t797690829 * ____media_5;
	// UnityEngine.Texture2D RenderHeads.Media.AVProVideo.ApplyToMesh::_defaultTexture
	Texture2D_t3542995729 * ____defaultTexture_6;

public:
	inline static int32_t get_offset_of__offset_2() { return static_cast<int32_t>(offsetof(ApplyToMesh_t2002801166, ____offset_2)); }
	inline Vector2_t2243707579  get__offset_2() const { return ____offset_2; }
	inline Vector2_t2243707579 * get_address_of__offset_2() { return &____offset_2; }
	inline void set__offset_2(Vector2_t2243707579  value)
	{
		____offset_2 = value;
	}

	inline static int32_t get_offset_of__scale_3() { return static_cast<int32_t>(offsetof(ApplyToMesh_t2002801166, ____scale_3)); }
	inline Vector2_t2243707579  get__scale_3() const { return ____scale_3; }
	inline Vector2_t2243707579 * get_address_of__scale_3() { return &____scale_3; }
	inline void set__scale_3(Vector2_t2243707579  value)
	{
		____scale_3 = value;
	}

	inline static int32_t get_offset_of__mesh_4() { return static_cast<int32_t>(offsetof(ApplyToMesh_t2002801166, ____mesh_4)); }
	inline Renderer_t257310565 * get__mesh_4() const { return ____mesh_4; }
	inline Renderer_t257310565 ** get_address_of__mesh_4() { return &____mesh_4; }
	inline void set__mesh_4(Renderer_t257310565 * value)
	{
		____mesh_4 = value;
		Il2CppCodeGenWriteBarrier(&____mesh_4, value);
	}

	inline static int32_t get_offset_of__media_5() { return static_cast<int32_t>(offsetof(ApplyToMesh_t2002801166, ____media_5)); }
	inline MediaPlayer_t797690829 * get__media_5() const { return ____media_5; }
	inline MediaPlayer_t797690829 ** get_address_of__media_5() { return &____media_5; }
	inline void set__media_5(MediaPlayer_t797690829 * value)
	{
		____media_5 = value;
		Il2CppCodeGenWriteBarrier(&____media_5, value);
	}

	inline static int32_t get_offset_of__defaultTexture_6() { return static_cast<int32_t>(offsetof(ApplyToMesh_t2002801166, ____defaultTexture_6)); }
	inline Texture2D_t3542995729 * get__defaultTexture_6() const { return ____defaultTexture_6; }
	inline Texture2D_t3542995729 ** get_address_of__defaultTexture_6() { return &____defaultTexture_6; }
	inline void set__defaultTexture_6(Texture2D_t3542995729 * value)
	{
		____defaultTexture_6 = value;
		Il2CppCodeGenWriteBarrier(&____defaultTexture_6, value);
	}
};

struct ApplyToMesh_t2002801166_StaticFields
{
public:
	// System.Int32 RenderHeads.Media.AVProVideo.ApplyToMesh::_propStereo
	int32_t ____propStereo_7;
	// System.Int32 RenderHeads.Media.AVProVideo.ApplyToMesh::_propAlphaPack
	int32_t ____propAlphaPack_8;
	// System.Int32 RenderHeads.Media.AVProVideo.ApplyToMesh::_propApplyGamma
	int32_t ____propApplyGamma_9;

public:
	inline static int32_t get_offset_of__propStereo_7() { return static_cast<int32_t>(offsetof(ApplyToMesh_t2002801166_StaticFields, ____propStereo_7)); }
	inline int32_t get__propStereo_7() const { return ____propStereo_7; }
	inline int32_t* get_address_of__propStereo_7() { return &____propStereo_7; }
	inline void set__propStereo_7(int32_t value)
	{
		____propStereo_7 = value;
	}

	inline static int32_t get_offset_of__propAlphaPack_8() { return static_cast<int32_t>(offsetof(ApplyToMesh_t2002801166_StaticFields, ____propAlphaPack_8)); }
	inline int32_t get__propAlphaPack_8() const { return ____propAlphaPack_8; }
	inline int32_t* get_address_of__propAlphaPack_8() { return &____propAlphaPack_8; }
	inline void set__propAlphaPack_8(int32_t value)
	{
		____propAlphaPack_8 = value;
	}

	inline static int32_t get_offset_of__propApplyGamma_9() { return static_cast<int32_t>(offsetof(ApplyToMesh_t2002801166_StaticFields, ____propApplyGamma_9)); }
	inline int32_t get__propApplyGamma_9() const { return ____propApplyGamma_9; }
	inline int32_t* get_address_of__propApplyGamma_9() { return &____propApplyGamma_9; }
	inline void set__propApplyGamma_9(int32_t value)
	{
		____propApplyGamma_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
