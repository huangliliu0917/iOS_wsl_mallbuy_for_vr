#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

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
struct  UIPageModule_t1803851549  : public Il2CppObject
{
public:
	// Wanshili.IMainPageUIController Wanshili.UIPageModule::m_mainPage
	Il2CppObject * ___m_mainPage_1;
	// Wanshili.IVideoPlayerController Wanshili.UIPageModule::m_videoPage
	Il2CppObject * ___m_videoPage_2;

public:
	inline static int32_t get_offset_of_m_mainPage_1() { return static_cast<int32_t>(offsetof(UIPageModule_t1803851549, ___m_mainPage_1)); }
	inline Il2CppObject * get_m_mainPage_1() const { return ___m_mainPage_1; }
	inline Il2CppObject ** get_address_of_m_mainPage_1() { return &___m_mainPage_1; }
	inline void set_m_mainPage_1(Il2CppObject * value)
	{
		___m_mainPage_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_mainPage_1, value);
	}

	inline static int32_t get_offset_of_m_videoPage_2() { return static_cast<int32_t>(offsetof(UIPageModule_t1803851549, ___m_videoPage_2)); }
	inline Il2CppObject * get_m_videoPage_2() const { return ___m_videoPage_2; }
	inline Il2CppObject ** get_address_of_m_videoPage_2() { return &___m_videoPage_2; }
	inline void set_m_videoPage_2(Il2CppObject * value)
	{
		___m_videoPage_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_videoPage_2, value);
	}
};

struct UIPageModule_t1803851549_StaticFields
{
public:
	// Wanshili.UIPageModule Wanshili.UIPageModule::m_instance
	UIPageModule_t1803851549 * ___m_instance_0;

public:
	inline static int32_t get_offset_of_m_instance_0() { return static_cast<int32_t>(offsetof(UIPageModule_t1803851549_StaticFields, ___m_instance_0)); }
	inline UIPageModule_t1803851549 * get_m_instance_0() const { return ___m_instance_0; }
	inline UIPageModule_t1803851549 ** get_address_of_m_instance_0() { return &___m_instance_0; }
	inline void set_m_instance_0(UIPageModule_t1803851549 * value)
	{
		___m_instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
