#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RenderHeads_Media_AVProVideo_Med3722615293.h"
#include "AssemblyU2DCSharp_RenderHeads_Media_AVProVideo_Wind913864927.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindows
struct  OptionsWindows_t1980873137  : public PlatformOptions_t3722615293
{
public:
	// RenderHeads.Media.AVProVideo.Windows/VideoApi RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindows::videoApi
	int32_t ___videoApi_3;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindows::useHardwareDecoding
	bool ___useHardwareDecoding_4;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindows::useUnityAudio
	bool ___useUnityAudio_5;
	// System.String RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindows::forceAudioOutputDeviceName
	String_t* ___forceAudioOutputDeviceName_6;

public:
	inline static int32_t get_offset_of_videoApi_3() { return static_cast<int32_t>(offsetof(OptionsWindows_t1980873137, ___videoApi_3)); }
	inline int32_t get_videoApi_3() const { return ___videoApi_3; }
	inline int32_t* get_address_of_videoApi_3() { return &___videoApi_3; }
	inline void set_videoApi_3(int32_t value)
	{
		___videoApi_3 = value;
	}

	inline static int32_t get_offset_of_useHardwareDecoding_4() { return static_cast<int32_t>(offsetof(OptionsWindows_t1980873137, ___useHardwareDecoding_4)); }
	inline bool get_useHardwareDecoding_4() const { return ___useHardwareDecoding_4; }
	inline bool* get_address_of_useHardwareDecoding_4() { return &___useHardwareDecoding_4; }
	inline void set_useHardwareDecoding_4(bool value)
	{
		___useHardwareDecoding_4 = value;
	}

	inline static int32_t get_offset_of_useUnityAudio_5() { return static_cast<int32_t>(offsetof(OptionsWindows_t1980873137, ___useUnityAudio_5)); }
	inline bool get_useUnityAudio_5() const { return ___useUnityAudio_5; }
	inline bool* get_address_of_useUnityAudio_5() { return &___useUnityAudio_5; }
	inline void set_useUnityAudio_5(bool value)
	{
		___useUnityAudio_5 = value;
	}

	inline static int32_t get_offset_of_forceAudioOutputDeviceName_6() { return static_cast<int32_t>(offsetof(OptionsWindows_t1980873137, ___forceAudioOutputDeviceName_6)); }
	inline String_t* get_forceAudioOutputDeviceName_6() const { return ___forceAudioOutputDeviceName_6; }
	inline String_t** get_address_of_forceAudioOutputDeviceName_6() { return &___forceAudioOutputDeviceName_6; }
	inline void set_forceAudioOutputDeviceName_6(String_t* value)
	{
		___forceAudioOutputDeviceName_6 = value;
		Il2CppCodeGenWriteBarrier(&___forceAudioOutputDeviceName_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
