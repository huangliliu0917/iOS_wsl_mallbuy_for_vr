#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.Demos.Mapping3D
struct  Mapping3D_t402850869  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject RenderHeads.Media.AVProVideo.Demos.Mapping3D::_cubePrefab
	GameObject_t1756533147 * ____cubePrefab_2;
	// System.Single RenderHeads.Media.AVProVideo.Demos.Mapping3D::_timer
	float ____timer_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> RenderHeads.Media.AVProVideo.Demos.Mapping3D::_cubes
	List_1_t1125654279 * ____cubes_6;

public:
	inline static int32_t get_offset_of__cubePrefab_2() { return static_cast<int32_t>(offsetof(Mapping3D_t402850869, ____cubePrefab_2)); }
	inline GameObject_t1756533147 * get__cubePrefab_2() const { return ____cubePrefab_2; }
	inline GameObject_t1756533147 ** get_address_of__cubePrefab_2() { return &____cubePrefab_2; }
	inline void set__cubePrefab_2(GameObject_t1756533147 * value)
	{
		____cubePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&____cubePrefab_2, value);
	}

	inline static int32_t get_offset_of__timer_5() { return static_cast<int32_t>(offsetof(Mapping3D_t402850869, ____timer_5)); }
	inline float get__timer_5() const { return ____timer_5; }
	inline float* get_address_of__timer_5() { return &____timer_5; }
	inline void set__timer_5(float value)
	{
		____timer_5 = value;
	}

	inline static int32_t get_offset_of__cubes_6() { return static_cast<int32_t>(offsetof(Mapping3D_t402850869, ____cubes_6)); }
	inline List_1_t1125654279 * get__cubes_6() const { return ____cubes_6; }
	inline List_1_t1125654279 ** get_address_of__cubes_6() { return &____cubes_6; }
	inline void set__cubes_6(List_1_t1125654279 * value)
	{
		____cubes_6 = value;
		Il2CppCodeGenWriteBarrier(&____cubes_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
