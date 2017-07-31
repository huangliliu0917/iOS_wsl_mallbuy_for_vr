#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wanshili.ModelInteraction
struct  ModelInteraction_t4187170511  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource Wanshili.ModelInteraction::m_audioManager
	AudioSource_t1135106623 * ___m_audioManager_2;

public:
	inline static int32_t get_offset_of_m_audioManager_2() { return static_cast<int32_t>(offsetof(ModelInteraction_t4187170511, ___m_audioManager_2)); }
	inline AudioSource_t1135106623 * get_m_audioManager_2() const { return ___m_audioManager_2; }
	inline AudioSource_t1135106623 ** get_address_of_m_audioManager_2() { return &___m_audioManager_2; }
	inline void set_m_audioManager_2(AudioSource_t1135106623 * value)
	{
		___m_audioManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_audioManager_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
