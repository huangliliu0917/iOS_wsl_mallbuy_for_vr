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
// UnityEngine.GameObject
struct GameObject_t1756533147;
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
	// UnityEngine.GameObject Wanshili.GameManager::m_loadedObject
	GameObject_t1756533147 * ___m_loadedObject_4;
	// UnityEngine.GameObject Wanshili.GameManager::m_targetObject
	GameObject_t1756533147 * ___m_targetObject_5;
	// System.String Wanshili.GameManager::m_targetName
	String_t* ___m_targetName_6;
	// System.Boolean Wanshili.GameManager::isLoaded
	bool ___isLoaded_7;
	// System.String Wanshili.GameManager::m_assetbundlePath
	String_t* ___m_assetbundlePath_8;

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

	inline static int32_t get_offset_of_m_loadedObject_4() { return static_cast<int32_t>(offsetof(GameManager_t1384011863, ___m_loadedObject_4)); }
	inline GameObject_t1756533147 * get_m_loadedObject_4() const { return ___m_loadedObject_4; }
	inline GameObject_t1756533147 ** get_address_of_m_loadedObject_4() { return &___m_loadedObject_4; }
	inline void set_m_loadedObject_4(GameObject_t1756533147 * value)
	{
		___m_loadedObject_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_loadedObject_4, value);
	}

	inline static int32_t get_offset_of_m_targetObject_5() { return static_cast<int32_t>(offsetof(GameManager_t1384011863, ___m_targetObject_5)); }
	inline GameObject_t1756533147 * get_m_targetObject_5() const { return ___m_targetObject_5; }
	inline GameObject_t1756533147 ** get_address_of_m_targetObject_5() { return &___m_targetObject_5; }
	inline void set_m_targetObject_5(GameObject_t1756533147 * value)
	{
		___m_targetObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_targetObject_5, value);
	}

	inline static int32_t get_offset_of_m_targetName_6() { return static_cast<int32_t>(offsetof(GameManager_t1384011863, ___m_targetName_6)); }
	inline String_t* get_m_targetName_6() const { return ___m_targetName_6; }
	inline String_t** get_address_of_m_targetName_6() { return &___m_targetName_6; }
	inline void set_m_targetName_6(String_t* value)
	{
		___m_targetName_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_targetName_6, value);
	}

	inline static int32_t get_offset_of_isLoaded_7() { return static_cast<int32_t>(offsetof(GameManager_t1384011863, ___isLoaded_7)); }
	inline bool get_isLoaded_7() const { return ___isLoaded_7; }
	inline bool* get_address_of_isLoaded_7() { return &___isLoaded_7; }
	inline void set_isLoaded_7(bool value)
	{
		___isLoaded_7 = value;
	}

	inline static int32_t get_offset_of_m_assetbundlePath_8() { return static_cast<int32_t>(offsetof(GameManager_t1384011863, ___m_assetbundlePath_8)); }
	inline String_t* get_m_assetbundlePath_8() const { return ___m_assetbundlePath_8; }
	inline String_t** get_address_of_m_assetbundlePath_8() { return &___m_assetbundlePath_8; }
	inline void set_m_assetbundlePath_8(String_t* value)
	{
		___m_assetbundlePath_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_assetbundlePath_8, value);
	}
};

struct GameManager_t1384011863_StaticFields
{
public:
	// Wanshili.GameManager Wanshili.GameManager::m_instance
	GameManager_t1384011863 * ___m_instance_9;

public:
	inline static int32_t get_offset_of_m_instance_9() { return static_cast<int32_t>(offsetof(GameManager_t1384011863_StaticFields, ___m_instance_9)); }
	inline GameManager_t1384011863 * get_m_instance_9() const { return ___m_instance_9; }
	inline GameManager_t1384011863 ** get_address_of_m_instance_9() { return &___m_instance_9; }
	inline void set_m_instance_9(GameManager_t1384011863 * value)
	{
		___m_instance_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_instance_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
