#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// RenderHeads.Media.AVProVideo.IMediaProducer
struct IMediaProducer_t805459367;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.DisplayBackground
struct  DisplayBackground_t4042404380  : public MonoBehaviour_t1158329972
{
public:
	// RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.DisplayBackground::_source
	Il2CppObject * ____source_2;
	// UnityEngine.Texture2D RenderHeads.Media.AVProVideo.DisplayBackground::_texture
	Texture2D_t3542995729 * ____texture_3;
	// UnityEngine.Material RenderHeads.Media.AVProVideo.DisplayBackground::_material
	Material_t193706927 * ____material_4;

public:
	inline static int32_t get_offset_of__source_2() { return static_cast<int32_t>(offsetof(DisplayBackground_t4042404380, ____source_2)); }
	inline Il2CppObject * get__source_2() const { return ____source_2; }
	inline Il2CppObject ** get_address_of__source_2() { return &____source_2; }
	inline void set__source_2(Il2CppObject * value)
	{
		____source_2 = value;
		Il2CppCodeGenWriteBarrier(&____source_2, value);
	}

	inline static int32_t get_offset_of__texture_3() { return static_cast<int32_t>(offsetof(DisplayBackground_t4042404380, ____texture_3)); }
	inline Texture2D_t3542995729 * get__texture_3() const { return ____texture_3; }
	inline Texture2D_t3542995729 ** get_address_of__texture_3() { return &____texture_3; }
	inline void set__texture_3(Texture2D_t3542995729 * value)
	{
		____texture_3 = value;
		Il2CppCodeGenWriteBarrier(&____texture_3, value);
	}

	inline static int32_t get_offset_of__material_4() { return static_cast<int32_t>(offsetof(DisplayBackground_t4042404380, ____material_4)); }
	inline Material_t193706927 * get__material_4() const { return ____material_4; }
	inline Material_t193706927 ** get_address_of__material_4() { return &____material_4; }
	inline void set__material_4(Material_t193706927 * value)
	{
		____material_4 = value;
		Il2CppCodeGenWriteBarrier(&____material_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
