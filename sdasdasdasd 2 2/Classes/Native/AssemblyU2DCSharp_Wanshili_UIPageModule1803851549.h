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
// Wanshili.UIPageModule
struct UIPageModule_t1803851549;
// Wanshili.IMainPageUIController
struct IMainPageUIController_t1153666173;
// Wanshili.IVideoPlayerController
struct IVideoPlayerController_t4180005279;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wanshili.UIPageModule
struct  UIPageModule_t1803851549  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Wanshili.UIPageModule::m_mianUI
	GameObject_t1756533147 * ___m_mianUI_2;
	// UnityEngine.GameObject Wanshili.UIPageModule::m_playerUI
	GameObject_t1756533147 * ___m_playerUI_3;
	// Wanshili.IMainPageUIController Wanshili.UIPageModule::m_mainPage
	Il2CppObject * ___m_mainPage_5;
	// Wanshili.IVideoPlayerController Wanshili.UIPageModule::m_videoPage
	Il2CppObject * ___m_videoPage_6;

public:
	inline static int32_t get_offset_of_m_mianUI_2() { return static_cast<int32_t>(offsetof(UIPageModule_t1803851549, ___m_mianUI_2)); }
	inline GameObject_t1756533147 * get_m_mianUI_2() const { return ___m_mianUI_2; }
	inline GameObject_t1756533147 ** get_address_of_m_mianUI_2() { return &___m_mianUI_2; }
	inline void set_m_mianUI_2(GameObject_t1756533147 * value)
	{
		___m_mianUI_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_mianUI_2, value);
	}

	inline static int32_t get_offset_of_m_playerUI_3() { return static_cast<int32_t>(offsetof(UIPageModule_t1803851549, ___m_playerUI_3)); }
	inline GameObject_t1756533147 * get_m_playerUI_3() const { return ___m_playerUI_3; }
	inline GameObject_t1756533147 ** get_address_of_m_playerUI_3() { return &___m_playerUI_3; }
	inline void set_m_playerUI_3(GameObject_t1756533147 * value)
	{
		___m_playerUI_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_playerUI_3, value);
	}

	inline static int32_t get_offset_of_m_mainPage_5() { return static_cast<int32_t>(offsetof(UIPageModule_t1803851549, ___m_mainPage_5)); }
	inline Il2CppObject * get_m_mainPage_5() const { return ___m_mainPage_5; }
	inline Il2CppObject ** get_address_of_m_mainPage_5() { return &___m_mainPage_5; }
	inline void set_m_mainPage_5(Il2CppObject * value)
	{
		___m_mainPage_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_mainPage_5, value);
	}

	inline static int32_t get_offset_of_m_videoPage_6() { return static_cast<int32_t>(offsetof(UIPageModule_t1803851549, ___m_videoPage_6)); }
	inline Il2CppObject * get_m_videoPage_6() const { return ___m_videoPage_6; }
	inline Il2CppObject ** get_address_of_m_videoPage_6() { return &___m_videoPage_6; }
	inline void set_m_videoPage_6(Il2CppObject * value)
	{
		___m_videoPage_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_videoPage_6, value);
	}
};

struct UIPageModule_t1803851549_StaticFields
{
public:
	// Wanshili.UIPageModule Wanshili.UIPageModule::m_instance
	UIPageModule_t1803851549 * ___m_instance_4;

public:
	inline static int32_t get_offset_of_m_instance_4() { return static_cast<int32_t>(offsetof(UIPageModule_t1803851549_StaticFields, ___m_instance_4)); }
	inline UIPageModule_t1803851549 * get_m_instance_4() const { return ___m_instance_4; }
	inline UIPageModule_t1803851549 ** get_address_of_m_instance_4() { return &___m_instance_4; }
	inline void set_m_instance_4(UIPageModule_t1803851549 * value)
	{
		___m_instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
