#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_CloudRecognizerBaseBehaviour340861329.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// EasyAR.ImageTrackerBaseBehaviour
struct ImageTrackerBaseBehaviour_t4017183443;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CloudRecognizerBehaviour
struct  CloudRecognizerBehaviour_t1207467500  : public CloudRecognizerBaseBehaviour_t340861329
{
public:
	// System.Collections.Generic.List`1<System.String> EasyAR.CloudRecognizerBehaviour::uids
	List_1_t1398341365 * ___uids_12;
	// EasyAR.ImageTrackerBaseBehaviour EasyAR.CloudRecognizerBehaviour::trackerBehaviour
	ImageTrackerBaseBehaviour_t4017183443 * ___trackerBehaviour_13;
	// System.String EasyAR.CloudRecognizerBehaviour::persistentDataPath
	String_t* ___persistentDataPath_14;
	// System.Boolean EasyAR.CloudRecognizerBehaviour::SaveNewTarget
	bool ___SaveNewTarget_15;

public:
	inline static int32_t get_offset_of_uids_12() { return static_cast<int32_t>(offsetof(CloudRecognizerBehaviour_t1207467500, ___uids_12)); }
	inline List_1_t1398341365 * get_uids_12() const { return ___uids_12; }
	inline List_1_t1398341365 ** get_address_of_uids_12() { return &___uids_12; }
	inline void set_uids_12(List_1_t1398341365 * value)
	{
		___uids_12 = value;
		Il2CppCodeGenWriteBarrier(&___uids_12, value);
	}

	inline static int32_t get_offset_of_trackerBehaviour_13() { return static_cast<int32_t>(offsetof(CloudRecognizerBehaviour_t1207467500, ___trackerBehaviour_13)); }
	inline ImageTrackerBaseBehaviour_t4017183443 * get_trackerBehaviour_13() const { return ___trackerBehaviour_13; }
	inline ImageTrackerBaseBehaviour_t4017183443 ** get_address_of_trackerBehaviour_13() { return &___trackerBehaviour_13; }
	inline void set_trackerBehaviour_13(ImageTrackerBaseBehaviour_t4017183443 * value)
	{
		___trackerBehaviour_13 = value;
		Il2CppCodeGenWriteBarrier(&___trackerBehaviour_13, value);
	}

	inline static int32_t get_offset_of_persistentDataPath_14() { return static_cast<int32_t>(offsetof(CloudRecognizerBehaviour_t1207467500, ___persistentDataPath_14)); }
	inline String_t* get_persistentDataPath_14() const { return ___persistentDataPath_14; }
	inline String_t** get_address_of_persistentDataPath_14() { return &___persistentDataPath_14; }
	inline void set_persistentDataPath_14(String_t* value)
	{
		___persistentDataPath_14 = value;
		Il2CppCodeGenWriteBarrier(&___persistentDataPath_14, value);
	}

	inline static int32_t get_offset_of_SaveNewTarget_15() { return static_cast<int32_t>(offsetof(CloudRecognizerBehaviour_t1207467500, ___SaveNewTarget_15)); }
	inline bool get_SaveNewTarget_15() const { return ___SaveNewTarget_15; }
	inline bool* get_address_of_SaveNewTarget_15() { return &___SaveNewTarget_15; }
	inline void set_SaveNewTarget_15(bool value)
	{
		___SaveNewTarget_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
