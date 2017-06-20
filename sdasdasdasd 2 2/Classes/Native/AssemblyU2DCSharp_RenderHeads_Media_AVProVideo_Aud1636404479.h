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
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.AudioOutput
struct  AudioOutput_t1636404479  : public MonoBehaviour_t1158329972
{
public:
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.AudioOutput::_mediaPlayer
	MediaPlayer_t797690829 * ____mediaPlayer_2;
	// UnityEngine.AudioSource RenderHeads.Media.AVProVideo.AudioOutput::_audioSource
	AudioSource_t1135106623 * ____audioSource_3;

public:
	inline static int32_t get_offset_of__mediaPlayer_2() { return static_cast<int32_t>(offsetof(AudioOutput_t1636404479, ____mediaPlayer_2)); }
	inline MediaPlayer_t797690829 * get__mediaPlayer_2() const { return ____mediaPlayer_2; }
	inline MediaPlayer_t797690829 ** get_address_of__mediaPlayer_2() { return &____mediaPlayer_2; }
	inline void set__mediaPlayer_2(MediaPlayer_t797690829 * value)
	{
		____mediaPlayer_2 = value;
		Il2CppCodeGenWriteBarrier(&____mediaPlayer_2, value);
	}

	inline static int32_t get_offset_of__audioSource_3() { return static_cast<int32_t>(offsetof(AudioOutput_t1636404479, ____audioSource_3)); }
	inline AudioSource_t1135106623 * get__audioSource_3() const { return ____audioSource_3; }
	inline AudioSource_t1135106623 ** get_address_of__audioSource_3() { return &____audioSource_3; }
	inline void set__audioSource_3(AudioSource_t1135106623 * value)
	{
		____audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&____audioSource_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
