#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// RenderHeads.Media.AVProVideo.MediaPlayer
struct MediaPlayer_t797690829;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.Demos.StartEndPoint
struct  StartEndPoint_t422108561  : public MonoBehaviour_t1158329972
{
public:
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.StartEndPoint::_mediaPlayer
	MediaPlayer_t797690829 * ____mediaPlayer_2;
	// System.Single RenderHeads.Media.AVProVideo.Demos.StartEndPoint::_startPointSeconds
	float ____startPointSeconds_3;
	// System.Single RenderHeads.Media.AVProVideo.Demos.StartEndPoint::_endPointSeconds
	float ____endPointSeconds_4;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.StartEndPoint::_loop
	bool ____loop_5;
	// System.Single RenderHeads.Media.AVProVideo.Demos.StartEndPoint::_startLoopSeconds
	float ____startLoopSeconds_6;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.StartEndPoint::_isStartQueued
	bool ____isStartQueued_7;

public:
	inline static int32_t get_offset_of__mediaPlayer_2() { return static_cast<int32_t>(offsetof(StartEndPoint_t422108561, ____mediaPlayer_2)); }
	inline MediaPlayer_t797690829 * get__mediaPlayer_2() const { return ____mediaPlayer_2; }
	inline MediaPlayer_t797690829 ** get_address_of__mediaPlayer_2() { return &____mediaPlayer_2; }
	inline void set__mediaPlayer_2(MediaPlayer_t797690829 * value)
	{
		____mediaPlayer_2 = value;
		Il2CppCodeGenWriteBarrier(&____mediaPlayer_2, value);
	}

	inline static int32_t get_offset_of__startPointSeconds_3() { return static_cast<int32_t>(offsetof(StartEndPoint_t422108561, ____startPointSeconds_3)); }
	inline float get__startPointSeconds_3() const { return ____startPointSeconds_3; }
	inline float* get_address_of__startPointSeconds_3() { return &____startPointSeconds_3; }
	inline void set__startPointSeconds_3(float value)
	{
		____startPointSeconds_3 = value;
	}

	inline static int32_t get_offset_of__endPointSeconds_4() { return static_cast<int32_t>(offsetof(StartEndPoint_t422108561, ____endPointSeconds_4)); }
	inline float get__endPointSeconds_4() const { return ____endPointSeconds_4; }
	inline float* get_address_of__endPointSeconds_4() { return &____endPointSeconds_4; }
	inline void set__endPointSeconds_4(float value)
	{
		____endPointSeconds_4 = value;
	}

	inline static int32_t get_offset_of__loop_5() { return static_cast<int32_t>(offsetof(StartEndPoint_t422108561, ____loop_5)); }
	inline bool get__loop_5() const { return ____loop_5; }
	inline bool* get_address_of__loop_5() { return &____loop_5; }
	inline void set__loop_5(bool value)
	{
		____loop_5 = value;
	}

	inline static int32_t get_offset_of__startLoopSeconds_6() { return static_cast<int32_t>(offsetof(StartEndPoint_t422108561, ____startLoopSeconds_6)); }
	inline float get__startLoopSeconds_6() const { return ____startLoopSeconds_6; }
	inline float* get_address_of__startLoopSeconds_6() { return &____startLoopSeconds_6; }
	inline void set__startLoopSeconds_6(float value)
	{
		____startLoopSeconds_6 = value;
	}

	inline static int32_t get_offset_of__isStartQueued_7() { return static_cast<int32_t>(offsetof(StartEndPoint_t422108561, ____isStartQueued_7)); }
	inline bool get__isStartQueued_7() const { return ____isStartQueued_7; }
	inline bool* get_address_of__isStartQueued_7() { return &____isStartQueued_7; }
	inline void set__isStartQueued_7(bool value)
	{
		____isStartQueued_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
