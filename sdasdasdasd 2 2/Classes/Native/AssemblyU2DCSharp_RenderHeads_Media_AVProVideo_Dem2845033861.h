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

// RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack
struct  ChangeAudioTrack_t2845033861  : public MonoBehaviour_t1158329972
{
public:
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack::_mediaPlayer
	MediaPlayer_t797690829 * ____mediaPlayer_2;
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack::_trackIndex
	int32_t ____trackIndex_3;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.ChangeAudioTrack::_isQueued
	bool ____isQueued_4;

public:
	inline static int32_t get_offset_of__mediaPlayer_2() { return static_cast<int32_t>(offsetof(ChangeAudioTrack_t2845033861, ____mediaPlayer_2)); }
	inline MediaPlayer_t797690829 * get__mediaPlayer_2() const { return ____mediaPlayer_2; }
	inline MediaPlayer_t797690829 ** get_address_of__mediaPlayer_2() { return &____mediaPlayer_2; }
	inline void set__mediaPlayer_2(MediaPlayer_t797690829 * value)
	{
		____mediaPlayer_2 = value;
		Il2CppCodeGenWriteBarrier(&____mediaPlayer_2, value);
	}

	inline static int32_t get_offset_of__trackIndex_3() { return static_cast<int32_t>(offsetof(ChangeAudioTrack_t2845033861, ____trackIndex_3)); }
	inline int32_t get__trackIndex_3() const { return ____trackIndex_3; }
	inline int32_t* get_address_of__trackIndex_3() { return &____trackIndex_3; }
	inline void set__trackIndex_3(int32_t value)
	{
		____trackIndex_3 = value;
	}

	inline static int32_t get_offset_of__isQueued_4() { return static_cast<int32_t>(offsetof(ChangeAudioTrack_t2845033861, ____isQueued_4)); }
	inline bool get__isQueued_4() const { return ____isQueued_4; }
	inline bool* get_address_of__isQueued_4() { return &____isQueued_4; }
	inline void set__isQueued_4(bool value)
	{
		____isQueued_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
