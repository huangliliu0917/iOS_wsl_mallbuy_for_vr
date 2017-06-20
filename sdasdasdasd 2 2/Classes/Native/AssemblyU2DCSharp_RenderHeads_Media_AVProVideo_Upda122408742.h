#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.UpdateStereoMaterial
struct  UpdateStereoMaterial_t122408742  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera RenderHeads.Media.AVProVideo.UpdateStereoMaterial::_camera
	Camera_t189460977 * ____camera_2;
	// UnityEngine.MeshRenderer RenderHeads.Media.AVProVideo.UpdateStereoMaterial::_renderer
	MeshRenderer_t1268241104 * ____renderer_3;
	// UnityEngine.Material RenderHeads.Media.AVProVideo.UpdateStereoMaterial::_material
	Material_t193706927 * ____material_4;
	// System.Int32 RenderHeads.Media.AVProVideo.UpdateStereoMaterial::_cameraPositionId
	int32_t ____cameraPositionId_5;
	// System.Int32 RenderHeads.Media.AVProVideo.UpdateStereoMaterial::_viewMatrixId
	int32_t ____viewMatrixId_6;

public:
	inline static int32_t get_offset_of__camera_2() { return static_cast<int32_t>(offsetof(UpdateStereoMaterial_t122408742, ____camera_2)); }
	inline Camera_t189460977 * get__camera_2() const { return ____camera_2; }
	inline Camera_t189460977 ** get_address_of__camera_2() { return &____camera_2; }
	inline void set__camera_2(Camera_t189460977 * value)
	{
		____camera_2 = value;
		Il2CppCodeGenWriteBarrier(&____camera_2, value);
	}

	inline static int32_t get_offset_of__renderer_3() { return static_cast<int32_t>(offsetof(UpdateStereoMaterial_t122408742, ____renderer_3)); }
	inline MeshRenderer_t1268241104 * get__renderer_3() const { return ____renderer_3; }
	inline MeshRenderer_t1268241104 ** get_address_of__renderer_3() { return &____renderer_3; }
	inline void set__renderer_3(MeshRenderer_t1268241104 * value)
	{
		____renderer_3 = value;
		Il2CppCodeGenWriteBarrier(&____renderer_3, value);
	}

	inline static int32_t get_offset_of__material_4() { return static_cast<int32_t>(offsetof(UpdateStereoMaterial_t122408742, ____material_4)); }
	inline Material_t193706927 * get__material_4() const { return ____material_4; }
	inline Material_t193706927 ** get_address_of__material_4() { return &____material_4; }
	inline void set__material_4(Material_t193706927 * value)
	{
		____material_4 = value;
		Il2CppCodeGenWriteBarrier(&____material_4, value);
	}

	inline static int32_t get_offset_of__cameraPositionId_5() { return static_cast<int32_t>(offsetof(UpdateStereoMaterial_t122408742, ____cameraPositionId_5)); }
	inline int32_t get__cameraPositionId_5() const { return ____cameraPositionId_5; }
	inline int32_t* get_address_of__cameraPositionId_5() { return &____cameraPositionId_5; }
	inline void set__cameraPositionId_5(int32_t value)
	{
		____cameraPositionId_5 = value;
	}

	inline static int32_t get_offset_of__viewMatrixId_6() { return static_cast<int32_t>(offsetof(UpdateStereoMaterial_t122408742, ____viewMatrixId_6)); }
	inline int32_t get__viewMatrixId_6() const { return ____viewMatrixId_6; }
	inline int32_t* get_address_of__viewMatrixId_6() { return &____viewMatrixId_6; }
	inline void set__viewMatrixId_6(int32_t value)
	{
		____viewMatrixId_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
