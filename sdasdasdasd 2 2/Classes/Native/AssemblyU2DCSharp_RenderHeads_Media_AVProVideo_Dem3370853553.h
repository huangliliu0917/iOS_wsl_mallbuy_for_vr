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
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.Demos.VCR
struct  VCR_t3370853553  : public MonoBehaviour_t1158329972
{
public:
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.VCR::_mediaPlayer
	MediaPlayer_t797690829 * ____mediaPlayer_2;
	// UnityEngine.UI.Slider RenderHeads.Media.AVProVideo.Demos.VCR::_videoSeekSlider
	Slider_t297367283 * ____videoSeekSlider_3;
	// System.Single RenderHeads.Media.AVProVideo.Demos.VCR::_setVideoSeekSliderValue
	float ____setVideoSeekSliderValue_4;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.VCR::_wasPlayingOnScrub
	bool ____wasPlayingOnScrub_5;
	// UnityEngine.UI.Slider RenderHeads.Media.AVProVideo.Demos.VCR::_audioVolumeSlider
	Slider_t297367283 * ____audioVolumeSlider_6;
	// System.Single RenderHeads.Media.AVProVideo.Demos.VCR::_setAudioVolumeSliderValue
	float ____setAudioVolumeSliderValue_7;
	// UnityEngine.UI.Toggle RenderHeads.Media.AVProVideo.Demos.VCR::_AutoStartToggle
	Toggle_t3976754468 * ____AutoStartToggle_8;
	// UnityEngine.UI.Toggle RenderHeads.Media.AVProVideo.Demos.VCR::_MuteToggle
	Toggle_t3976754468 * ____MuteToggle_9;
	// System.String RenderHeads.Media.AVProVideo.Demos.VCR::_folder
	String_t* ____folder_10;
	// System.String[] RenderHeads.Media.AVProVideo.Demos.VCR::_videoFiles
	StringU5BU5D_t1642385972* ____videoFiles_11;
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.VCR::_VideoIndex
	int32_t ____VideoIndex_12;

public:
	inline static int32_t get_offset_of__mediaPlayer_2() { return static_cast<int32_t>(offsetof(VCR_t3370853553, ____mediaPlayer_2)); }
	inline MediaPlayer_t797690829 * get__mediaPlayer_2() const { return ____mediaPlayer_2; }
	inline MediaPlayer_t797690829 ** get_address_of__mediaPlayer_2() { return &____mediaPlayer_2; }
	inline void set__mediaPlayer_2(MediaPlayer_t797690829 * value)
	{
		____mediaPlayer_2 = value;
		Il2CppCodeGenWriteBarrier(&____mediaPlayer_2, value);
	}

	inline static int32_t get_offset_of__videoSeekSlider_3() { return static_cast<int32_t>(offsetof(VCR_t3370853553, ____videoSeekSlider_3)); }
	inline Slider_t297367283 * get__videoSeekSlider_3() const { return ____videoSeekSlider_3; }
	inline Slider_t297367283 ** get_address_of__videoSeekSlider_3() { return &____videoSeekSlider_3; }
	inline void set__videoSeekSlider_3(Slider_t297367283 * value)
	{
		____videoSeekSlider_3 = value;
		Il2CppCodeGenWriteBarrier(&____videoSeekSlider_3, value);
	}

	inline static int32_t get_offset_of__setVideoSeekSliderValue_4() { return static_cast<int32_t>(offsetof(VCR_t3370853553, ____setVideoSeekSliderValue_4)); }
	inline float get__setVideoSeekSliderValue_4() const { return ____setVideoSeekSliderValue_4; }
	inline float* get_address_of__setVideoSeekSliderValue_4() { return &____setVideoSeekSliderValue_4; }
	inline void set__setVideoSeekSliderValue_4(float value)
	{
		____setVideoSeekSliderValue_4 = value;
	}

	inline static int32_t get_offset_of__wasPlayingOnScrub_5() { return static_cast<int32_t>(offsetof(VCR_t3370853553, ____wasPlayingOnScrub_5)); }
	inline bool get__wasPlayingOnScrub_5() const { return ____wasPlayingOnScrub_5; }
	inline bool* get_address_of__wasPlayingOnScrub_5() { return &____wasPlayingOnScrub_5; }
	inline void set__wasPlayingOnScrub_5(bool value)
	{
		____wasPlayingOnScrub_5 = value;
	}

	inline static int32_t get_offset_of__audioVolumeSlider_6() { return static_cast<int32_t>(offsetof(VCR_t3370853553, ____audioVolumeSlider_6)); }
	inline Slider_t297367283 * get__audioVolumeSlider_6() const { return ____audioVolumeSlider_6; }
	inline Slider_t297367283 ** get_address_of__audioVolumeSlider_6() { return &____audioVolumeSlider_6; }
	inline void set__audioVolumeSlider_6(Slider_t297367283 * value)
	{
		____audioVolumeSlider_6 = value;
		Il2CppCodeGenWriteBarrier(&____audioVolumeSlider_6, value);
	}

	inline static int32_t get_offset_of__setAudioVolumeSliderValue_7() { return static_cast<int32_t>(offsetof(VCR_t3370853553, ____setAudioVolumeSliderValue_7)); }
	inline float get__setAudioVolumeSliderValue_7() const { return ____setAudioVolumeSliderValue_7; }
	inline float* get_address_of__setAudioVolumeSliderValue_7() { return &____setAudioVolumeSliderValue_7; }
	inline void set__setAudioVolumeSliderValue_7(float value)
	{
		____setAudioVolumeSliderValue_7 = value;
	}

	inline static int32_t get_offset_of__AutoStartToggle_8() { return static_cast<int32_t>(offsetof(VCR_t3370853553, ____AutoStartToggle_8)); }
	inline Toggle_t3976754468 * get__AutoStartToggle_8() const { return ____AutoStartToggle_8; }
	inline Toggle_t3976754468 ** get_address_of__AutoStartToggle_8() { return &____AutoStartToggle_8; }
	inline void set__AutoStartToggle_8(Toggle_t3976754468 * value)
	{
		____AutoStartToggle_8 = value;
		Il2CppCodeGenWriteBarrier(&____AutoStartToggle_8, value);
	}

	inline static int32_t get_offset_of__MuteToggle_9() { return static_cast<int32_t>(offsetof(VCR_t3370853553, ____MuteToggle_9)); }
	inline Toggle_t3976754468 * get__MuteToggle_9() const { return ____MuteToggle_9; }
	inline Toggle_t3976754468 ** get_address_of__MuteToggle_9() { return &____MuteToggle_9; }
	inline void set__MuteToggle_9(Toggle_t3976754468 * value)
	{
		____MuteToggle_9 = value;
		Il2CppCodeGenWriteBarrier(&____MuteToggle_9, value);
	}

	inline static int32_t get_offset_of__folder_10() { return static_cast<int32_t>(offsetof(VCR_t3370853553, ____folder_10)); }
	inline String_t* get__folder_10() const { return ____folder_10; }
	inline String_t** get_address_of__folder_10() { return &____folder_10; }
	inline void set__folder_10(String_t* value)
	{
		____folder_10 = value;
		Il2CppCodeGenWriteBarrier(&____folder_10, value);
	}

	inline static int32_t get_offset_of__videoFiles_11() { return static_cast<int32_t>(offsetof(VCR_t3370853553, ____videoFiles_11)); }
	inline StringU5BU5D_t1642385972* get__videoFiles_11() const { return ____videoFiles_11; }
	inline StringU5BU5D_t1642385972** get_address_of__videoFiles_11() { return &____videoFiles_11; }
	inline void set__videoFiles_11(StringU5BU5D_t1642385972* value)
	{
		____videoFiles_11 = value;
		Il2CppCodeGenWriteBarrier(&____videoFiles_11, value);
	}

	inline static int32_t get_offset_of__VideoIndex_12() { return static_cast<int32_t>(offsetof(VCR_t3370853553, ____VideoIndex_12)); }
	inline int32_t get__VideoIndex_12() const { return ____VideoIndex_12; }
	inline int32_t* get_address_of__VideoIndex_12() { return &____VideoIndex_12; }
	inline void set__VideoIndex_12(int32_t value)
	{
		____VideoIndex_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
