#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// Wanshili.GameManager
struct GameManager_t1384011863;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wanshili.GameManager
struct  GameManager_t1384011863  : public MonoBehaviour_t1158329972
{
public:
	// System.String Wanshili.GameManager::m_photoPath
	String_t* ___m_photoPath_2;
	// System.Boolean Wanshili.GameManager::isObjectTracking
	bool ___isObjectTracking_3;

public:
	inline static int32_t get_offset_of_m_photoPath_2() { return static_cast<int32_t>(offsetof(GameManager_t1384011863, ___m_photoPath_2)); }
	inline String_t* get_m_photoPath_2() const { return ___m_photoPath_2; }
	inline String_t** get_address_of_m_photoPath_2() { return &___m_photoPath_2; }
	inline void set_m_photoPath_2(String_t* value)
	{
		___m_photoPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_photoPath_2, value);
	}

	inline static int32_t get_offset_of_isObjectTracking_3() { return static_cast<int32_t>(offsetof(GameManager_t1384011863, ___isObjectTracking_3)); }
	inline bool get_isObjectTracking_3() const { return ___isObjectTracking_3; }
	inline bool* get_address_of_isObjectTracking_3() { return &___isObjectTracking_3; }
	inline void set_isObjectTracking_3(bool value)
	{
		___isObjectTracking_3 = value;
	}
};

struct GameManager_t1384011863_StaticFields
{
public:
	// Wanshili.GameManager Wanshili.GameManager::m_instance
	GameManager_t1384011863 * ___m_instance_4;

public:
	inline static int32_t get_offset_of_m_instance_4() { return static_cast<int32_t>(offsetof(GameManager_t1384011863_StaticFields, ___m_instance_4)); }
	inline GameManager_t1384011863 * get_m_instance_4() const { return ___m_instance_4; }
	inline GameManager_t1384011863 ** get_address_of_m_instance_4() { return &___m_instance_4; }
	inline void set_m_instance_4(GameManager_t1384011863 * value)
	{
		___m_instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
