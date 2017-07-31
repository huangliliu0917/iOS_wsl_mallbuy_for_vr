#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// CameraLookAt
struct CameraLookAt_t949393781;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraLookAt
struct  CameraLookAt_t949393781  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean CameraLookAt::isShow
	bool ___isShow_2;
	// UnityEngine.Transform CameraLookAt::m_target
	Transform_t3275118058 * ___m_target_3;
	// System.Single CameraLookAt::m_distance
	float ___m_distance_4;
	// UnityEngine.Vector3 CameraLookAt::m_initRotation
	Vector3_t2243707580  ___m_initRotation_5;
	// System.Single CameraLookAt::m_scaleSpeed
	float ___m_scaleSpeed_6;
	// System.Single CameraLookAt::m_xSpeed
	float ___m_xSpeed_7;
	// System.Single CameraLookAt::m_ySpeed
	float ___m_ySpeed_8;
	// System.Single CameraLookAt::m_minDistance
	float ___m_minDistance_9;
	// System.Single CameraLookAt::m_maxDistance
	float ___m_maxDistance_10;
	// System.Single CameraLookAt::m_xMaxLimit
	float ___m_xMaxLimit_11;
	// System.Single CameraLookAt::m_xMinLimit
	float ___m_xMinLimit_12;
	// System.Single CameraLookAt::m_yMinLimit
	float ___m_yMinLimit_13;
	// System.Single CameraLookAt::m_yMaxLimit
	float ___m_yMaxLimit_14;
	// System.Single CameraLookAt::m_x
	float ___m_x_15;
	// System.Single CameraLookAt::m_y
	float ___m_y_16;
	// UnityEngine.Vector2 CameraLookAt::oldPosition1
	Vector2_t2243707579  ___oldPosition1_17;
	// UnityEngine.Vector2 CameraLookAt::oldPosition2
	Vector2_t2243707579  ___oldPosition2_18;
	// UnityEngine.Vector3 CameraLookAt::m_resetPos
	Vector3_t2243707580  ___m_resetPos_19;
	// UnityEngine.Quaternion CameraLookAt::m_restRotation
	Quaternion_t4030073918  ___m_restRotation_20;

public:
	inline static int32_t get_offset_of_isShow_2() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___isShow_2)); }
	inline bool get_isShow_2() const { return ___isShow_2; }
	inline bool* get_address_of_isShow_2() { return &___isShow_2; }
	inline void set_isShow_2(bool value)
	{
		___isShow_2 = value;
	}

	inline static int32_t get_offset_of_m_target_3() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_target_3)); }
	inline Transform_t3275118058 * get_m_target_3() const { return ___m_target_3; }
	inline Transform_t3275118058 ** get_address_of_m_target_3() { return &___m_target_3; }
	inline void set_m_target_3(Transform_t3275118058 * value)
	{
		___m_target_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_target_3, value);
	}

	inline static int32_t get_offset_of_m_distance_4() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_distance_4)); }
	inline float get_m_distance_4() const { return ___m_distance_4; }
	inline float* get_address_of_m_distance_4() { return &___m_distance_4; }
	inline void set_m_distance_4(float value)
	{
		___m_distance_4 = value;
	}

	inline static int32_t get_offset_of_m_initRotation_5() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_initRotation_5)); }
	inline Vector3_t2243707580  get_m_initRotation_5() const { return ___m_initRotation_5; }
	inline Vector3_t2243707580 * get_address_of_m_initRotation_5() { return &___m_initRotation_5; }
	inline void set_m_initRotation_5(Vector3_t2243707580  value)
	{
		___m_initRotation_5 = value;
	}

	inline static int32_t get_offset_of_m_scaleSpeed_6() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_scaleSpeed_6)); }
	inline float get_m_scaleSpeed_6() const { return ___m_scaleSpeed_6; }
	inline float* get_address_of_m_scaleSpeed_6() { return &___m_scaleSpeed_6; }
	inline void set_m_scaleSpeed_6(float value)
	{
		___m_scaleSpeed_6 = value;
	}

	inline static int32_t get_offset_of_m_xSpeed_7() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_xSpeed_7)); }
	inline float get_m_xSpeed_7() const { return ___m_xSpeed_7; }
	inline float* get_address_of_m_xSpeed_7() { return &___m_xSpeed_7; }
	inline void set_m_xSpeed_7(float value)
	{
		___m_xSpeed_7 = value;
	}

	inline static int32_t get_offset_of_m_ySpeed_8() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_ySpeed_8)); }
	inline float get_m_ySpeed_8() const { return ___m_ySpeed_8; }
	inline float* get_address_of_m_ySpeed_8() { return &___m_ySpeed_8; }
	inline void set_m_ySpeed_8(float value)
	{
		___m_ySpeed_8 = value;
	}

	inline static int32_t get_offset_of_m_minDistance_9() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_minDistance_9)); }
	inline float get_m_minDistance_9() const { return ___m_minDistance_9; }
	inline float* get_address_of_m_minDistance_9() { return &___m_minDistance_9; }
	inline void set_m_minDistance_9(float value)
	{
		___m_minDistance_9 = value;
	}

	inline static int32_t get_offset_of_m_maxDistance_10() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_maxDistance_10)); }
	inline float get_m_maxDistance_10() const { return ___m_maxDistance_10; }
	inline float* get_address_of_m_maxDistance_10() { return &___m_maxDistance_10; }
	inline void set_m_maxDistance_10(float value)
	{
		___m_maxDistance_10 = value;
	}

	inline static int32_t get_offset_of_m_xMaxLimit_11() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_xMaxLimit_11)); }
	inline float get_m_xMaxLimit_11() const { return ___m_xMaxLimit_11; }
	inline float* get_address_of_m_xMaxLimit_11() { return &___m_xMaxLimit_11; }
	inline void set_m_xMaxLimit_11(float value)
	{
		___m_xMaxLimit_11 = value;
	}

	inline static int32_t get_offset_of_m_xMinLimit_12() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_xMinLimit_12)); }
	inline float get_m_xMinLimit_12() const { return ___m_xMinLimit_12; }
	inline float* get_address_of_m_xMinLimit_12() { return &___m_xMinLimit_12; }
	inline void set_m_xMinLimit_12(float value)
	{
		___m_xMinLimit_12 = value;
	}

	inline static int32_t get_offset_of_m_yMinLimit_13() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_yMinLimit_13)); }
	inline float get_m_yMinLimit_13() const { return ___m_yMinLimit_13; }
	inline float* get_address_of_m_yMinLimit_13() { return &___m_yMinLimit_13; }
	inline void set_m_yMinLimit_13(float value)
	{
		___m_yMinLimit_13 = value;
	}

	inline static int32_t get_offset_of_m_yMaxLimit_14() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_yMaxLimit_14)); }
	inline float get_m_yMaxLimit_14() const { return ___m_yMaxLimit_14; }
	inline float* get_address_of_m_yMaxLimit_14() { return &___m_yMaxLimit_14; }
	inline void set_m_yMaxLimit_14(float value)
	{
		___m_yMaxLimit_14 = value;
	}

	inline static int32_t get_offset_of_m_x_15() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_x_15)); }
	inline float get_m_x_15() const { return ___m_x_15; }
	inline float* get_address_of_m_x_15() { return &___m_x_15; }
	inline void set_m_x_15(float value)
	{
		___m_x_15 = value;
	}

	inline static int32_t get_offset_of_m_y_16() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_y_16)); }
	inline float get_m_y_16() const { return ___m_y_16; }
	inline float* get_address_of_m_y_16() { return &___m_y_16; }
	inline void set_m_y_16(float value)
	{
		___m_y_16 = value;
	}

	inline static int32_t get_offset_of_oldPosition1_17() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___oldPosition1_17)); }
	inline Vector2_t2243707579  get_oldPosition1_17() const { return ___oldPosition1_17; }
	inline Vector2_t2243707579 * get_address_of_oldPosition1_17() { return &___oldPosition1_17; }
	inline void set_oldPosition1_17(Vector2_t2243707579  value)
	{
		___oldPosition1_17 = value;
	}

	inline static int32_t get_offset_of_oldPosition2_18() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___oldPosition2_18)); }
	inline Vector2_t2243707579  get_oldPosition2_18() const { return ___oldPosition2_18; }
	inline Vector2_t2243707579 * get_address_of_oldPosition2_18() { return &___oldPosition2_18; }
	inline void set_oldPosition2_18(Vector2_t2243707579  value)
	{
		___oldPosition2_18 = value;
	}

	inline static int32_t get_offset_of_m_resetPos_19() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_resetPos_19)); }
	inline Vector3_t2243707580  get_m_resetPos_19() const { return ___m_resetPos_19; }
	inline Vector3_t2243707580 * get_address_of_m_resetPos_19() { return &___m_resetPos_19; }
	inline void set_m_resetPos_19(Vector3_t2243707580  value)
	{
		___m_resetPos_19 = value;
	}

	inline static int32_t get_offset_of_m_restRotation_20() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781, ___m_restRotation_20)); }
	inline Quaternion_t4030073918  get_m_restRotation_20() const { return ___m_restRotation_20; }
	inline Quaternion_t4030073918 * get_address_of_m_restRotation_20() { return &___m_restRotation_20; }
	inline void set_m_restRotation_20(Quaternion_t4030073918  value)
	{
		___m_restRotation_20 = value;
	}
};

struct CameraLookAt_t949393781_StaticFields
{
public:
	// CameraLookAt CameraLookAt::m_instance
	CameraLookAt_t949393781 * ___m_instance_21;

public:
	inline static int32_t get_offset_of_m_instance_21() { return static_cast<int32_t>(offsetof(CameraLookAt_t949393781_StaticFields, ___m_instance_21)); }
	inline CameraLookAt_t949393781 * get_m_instance_21() const { return ___m_instance_21; }
	inline CameraLookAt_t949393781 ** get_address_of_m_instance_21() { return &___m_instance_21; }
	inline void set_m_instance_21(CameraLookAt_t949393781 * value)
	{
		___m_instance_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
