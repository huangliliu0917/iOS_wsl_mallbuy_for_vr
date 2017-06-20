#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_RenderHeads_Media_AVProVideo_Med1032549801.h"
#include "AssemblyU2DCSharp_RenderHeads_Media_AVProVideo_Ste2213358877.h"
#include "AssemblyU2DCSharp_RenderHeads_Media_AVProVideo_Alp2834178843.h"
#include "UnityEngine_UnityEngine_FilterMode10814199.h"
#include "UnityEngine_UnityEngine_TextureWrapMode3683976566.h"

// System.String
struct String_t;
// RenderHeads.Media.AVProVideo.MediaPlayerEvent
struct MediaPlayerEvent_t136298857;
// RenderHeads.Media.AVProVideo.IMediaControl
struct IMediaControl_t4180159252;
// RenderHeads.Media.AVProVideo.IMediaProducer
struct IMediaProducer_t805459367;
// RenderHeads.Media.AVProVideo.IMediaInfo
struct IMediaInfo_t1469385285;
// RenderHeads.Media.AVProVideo.IMediaPlayer
struct IMediaPlayer_t3284732318;
// System.IDisposable
struct IDisposable_t2427283555;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindows
struct OptionsWindows_t1980873137;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsMacOSX
struct OptionsMacOSX_t2739201253;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsIOS
struct OptionsIOS_t2286580139;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsTVOS
struct OptionsTVOS_t981353918;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsAndroid
struct OptionsAndroid_t986194977;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindowsPhone
struct OptionsWindowsPhone_t3788679085;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindowsUWP
struct OptionsWindowsUWP_t3299716819;
// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWebGL
struct OptionsWebGL_t233255005;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.MediaPlayer
struct  MediaPlayer_t797690829  : public MonoBehaviour_t1158329972
{
public:
	// RenderHeads.Media.AVProVideo.MediaPlayer/FileLocation RenderHeads.Media.AVProVideo.MediaPlayer::m_VideoLocation
	int32_t ___m_VideoLocation_2;
	// System.String RenderHeads.Media.AVProVideo.MediaPlayer::m_VideoPath
	String_t* ___m_VideoPath_3;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_AutoOpen
	bool ___m_AutoOpen_4;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_AutoStart
	bool ___m_AutoStart_5;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_Loop
	bool ___m_Loop_6;
	// System.Single RenderHeads.Media.AVProVideo.MediaPlayer::m_Volume
	float ___m_Volume_7;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_Muted
	bool ___m_Muted_8;
	// System.Single RenderHeads.Media.AVProVideo.MediaPlayer::m_PlaybackRate
	float ___m_PlaybackRate_9;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_DebugGui
	bool ___m_DebugGui_10;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_Persistent
	bool ___m_Persistent_11;
	// RenderHeads.Media.AVProVideo.StereoPacking RenderHeads.Media.AVProVideo.MediaPlayer::m_StereoPacking
	int32_t ___m_StereoPacking_12;
	// RenderHeads.Media.AVProVideo.AlphaPacking RenderHeads.Media.AVProVideo.MediaPlayer::m_AlphaPacking
	int32_t ___m_AlphaPacking_13;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_DisplayDebugStereoColorTint
	bool ___m_DisplayDebugStereoColorTint_14;
	// UnityEngine.FilterMode RenderHeads.Media.AVProVideo.MediaPlayer::m_FilterMode
	int32_t ___m_FilterMode_15;
	// UnityEngine.TextureWrapMode RenderHeads.Media.AVProVideo.MediaPlayer::m_WrapMode
	int32_t ___m_WrapMode_16;
	// System.Int32 RenderHeads.Media.AVProVideo.MediaPlayer::m_AnisoLevel
	int32_t ___m_AnisoLevel_17;
	// RenderHeads.Media.AVProVideo.MediaPlayerEvent RenderHeads.Media.AVProVideo.MediaPlayer::m_events
	MediaPlayerEvent_t136298857 * ___m_events_18;
	// RenderHeads.Media.AVProVideo.IMediaControl RenderHeads.Media.AVProVideo.MediaPlayer::m_Control
	Il2CppObject * ___m_Control_19;
	// RenderHeads.Media.AVProVideo.IMediaProducer RenderHeads.Media.AVProVideo.MediaPlayer::m_Texture
	Il2CppObject * ___m_Texture_20;
	// RenderHeads.Media.AVProVideo.IMediaInfo RenderHeads.Media.AVProVideo.MediaPlayer::m_Info
	Il2CppObject * ___m_Info_21;
	// RenderHeads.Media.AVProVideo.IMediaPlayer RenderHeads.Media.AVProVideo.MediaPlayer::m_Player
	Il2CppObject * ___m_Player_22;
	// System.IDisposable RenderHeads.Media.AVProVideo.MediaPlayer::m_Dispose
	Il2CppObject * ___m_Dispose_23;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_VideoOpened
	bool ___m_VideoOpened_24;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_AutoStartTriggered
	bool ___m_AutoStartTriggered_25;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_WasPlayingOnPause
	bool ___m_WasPlayingOnPause_26;
	// UnityEngine.Coroutine RenderHeads.Media.AVProVideo.MediaPlayer::_renderingCoroutine
	Coroutine_t2299508840 * ____renderingCoroutine_27;
	// System.Int32 RenderHeads.Media.AVProVideo.MediaPlayer::m_GuiPositionX
	int32_t ___m_GuiPositionX_32;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_EventFired_ReadyToPlay
	bool ___m_EventFired_ReadyToPlay_34;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_EventFired_Started
	bool ___m_EventFired_Started_35;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_EventFired_FirstFrameReady
	bool ___m_EventFired_FirstFrameReady_36;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_EventFired_FinishedPlaying
	bool ___m_EventFired_FinishedPlaying_37;
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::m_EventFired_MetaDataReady
	bool ___m_EventFired_MetaDataReady_38;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindows RenderHeads.Media.AVProVideo.MediaPlayer::_optionsWindows
	OptionsWindows_t1980873137 * ____optionsWindows_39;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsMacOSX RenderHeads.Media.AVProVideo.MediaPlayer::_optionsMacOSX
	OptionsMacOSX_t2739201253 * ____optionsMacOSX_40;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsIOS RenderHeads.Media.AVProVideo.MediaPlayer::_optionsIOS
	OptionsIOS_t2286580139 * ____optionsIOS_41;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsTVOS RenderHeads.Media.AVProVideo.MediaPlayer::_optionsTVOS
	OptionsTVOS_t981353918 * ____optionsTVOS_42;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsAndroid RenderHeads.Media.AVProVideo.MediaPlayer::_optionsAndroid
	OptionsAndroid_t986194977 * ____optionsAndroid_43;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindowsPhone RenderHeads.Media.AVProVideo.MediaPlayer::_optionsWindowsPhone
	OptionsWindowsPhone_t3788679085 * ____optionsWindowsPhone_44;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWindowsUWP RenderHeads.Media.AVProVideo.MediaPlayer::_optionsWindowsUWP
	OptionsWindowsUWP_t3299716819 * ____optionsWindowsUWP_45;
	// RenderHeads.Media.AVProVideo.MediaPlayer/OptionsWebGL RenderHeads.Media.AVProVideo.MediaPlayer::_optionsWebGL
	OptionsWebGL_t233255005 * ____optionsWebGL_46;

public:
	inline static int32_t get_offset_of_m_VideoLocation_2() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_VideoLocation_2)); }
	inline int32_t get_m_VideoLocation_2() const { return ___m_VideoLocation_2; }
	inline int32_t* get_address_of_m_VideoLocation_2() { return &___m_VideoLocation_2; }
	inline void set_m_VideoLocation_2(int32_t value)
	{
		___m_VideoLocation_2 = value;
	}

	inline static int32_t get_offset_of_m_VideoPath_3() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_VideoPath_3)); }
	inline String_t* get_m_VideoPath_3() const { return ___m_VideoPath_3; }
	inline String_t** get_address_of_m_VideoPath_3() { return &___m_VideoPath_3; }
	inline void set_m_VideoPath_3(String_t* value)
	{
		___m_VideoPath_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_VideoPath_3, value);
	}

	inline static int32_t get_offset_of_m_AutoOpen_4() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_AutoOpen_4)); }
	inline bool get_m_AutoOpen_4() const { return ___m_AutoOpen_4; }
	inline bool* get_address_of_m_AutoOpen_4() { return &___m_AutoOpen_4; }
	inline void set_m_AutoOpen_4(bool value)
	{
		___m_AutoOpen_4 = value;
	}

	inline static int32_t get_offset_of_m_AutoStart_5() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_AutoStart_5)); }
	inline bool get_m_AutoStart_5() const { return ___m_AutoStart_5; }
	inline bool* get_address_of_m_AutoStart_5() { return &___m_AutoStart_5; }
	inline void set_m_AutoStart_5(bool value)
	{
		___m_AutoStart_5 = value;
	}

	inline static int32_t get_offset_of_m_Loop_6() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_Loop_6)); }
	inline bool get_m_Loop_6() const { return ___m_Loop_6; }
	inline bool* get_address_of_m_Loop_6() { return &___m_Loop_6; }
	inline void set_m_Loop_6(bool value)
	{
		___m_Loop_6 = value;
	}

	inline static int32_t get_offset_of_m_Volume_7() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_Volume_7)); }
	inline float get_m_Volume_7() const { return ___m_Volume_7; }
	inline float* get_address_of_m_Volume_7() { return &___m_Volume_7; }
	inline void set_m_Volume_7(float value)
	{
		___m_Volume_7 = value;
	}

	inline static int32_t get_offset_of_m_Muted_8() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_Muted_8)); }
	inline bool get_m_Muted_8() const { return ___m_Muted_8; }
	inline bool* get_address_of_m_Muted_8() { return &___m_Muted_8; }
	inline void set_m_Muted_8(bool value)
	{
		___m_Muted_8 = value;
	}

	inline static int32_t get_offset_of_m_PlaybackRate_9() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_PlaybackRate_9)); }
	inline float get_m_PlaybackRate_9() const { return ___m_PlaybackRate_9; }
	inline float* get_address_of_m_PlaybackRate_9() { return &___m_PlaybackRate_9; }
	inline void set_m_PlaybackRate_9(float value)
	{
		___m_PlaybackRate_9 = value;
	}

	inline static int32_t get_offset_of_m_DebugGui_10() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_DebugGui_10)); }
	inline bool get_m_DebugGui_10() const { return ___m_DebugGui_10; }
	inline bool* get_address_of_m_DebugGui_10() { return &___m_DebugGui_10; }
	inline void set_m_DebugGui_10(bool value)
	{
		___m_DebugGui_10 = value;
	}

	inline static int32_t get_offset_of_m_Persistent_11() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_Persistent_11)); }
	inline bool get_m_Persistent_11() const { return ___m_Persistent_11; }
	inline bool* get_address_of_m_Persistent_11() { return &___m_Persistent_11; }
	inline void set_m_Persistent_11(bool value)
	{
		___m_Persistent_11 = value;
	}

	inline static int32_t get_offset_of_m_StereoPacking_12() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_StereoPacking_12)); }
	inline int32_t get_m_StereoPacking_12() const { return ___m_StereoPacking_12; }
	inline int32_t* get_address_of_m_StereoPacking_12() { return &___m_StereoPacking_12; }
	inline void set_m_StereoPacking_12(int32_t value)
	{
		___m_StereoPacking_12 = value;
	}

	inline static int32_t get_offset_of_m_AlphaPacking_13() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_AlphaPacking_13)); }
	inline int32_t get_m_AlphaPacking_13() const { return ___m_AlphaPacking_13; }
	inline int32_t* get_address_of_m_AlphaPacking_13() { return &___m_AlphaPacking_13; }
	inline void set_m_AlphaPacking_13(int32_t value)
	{
		___m_AlphaPacking_13 = value;
	}

	inline static int32_t get_offset_of_m_DisplayDebugStereoColorTint_14() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_DisplayDebugStereoColorTint_14)); }
	inline bool get_m_DisplayDebugStereoColorTint_14() const { return ___m_DisplayDebugStereoColorTint_14; }
	inline bool* get_address_of_m_DisplayDebugStereoColorTint_14() { return &___m_DisplayDebugStereoColorTint_14; }
	inline void set_m_DisplayDebugStereoColorTint_14(bool value)
	{
		___m_DisplayDebugStereoColorTint_14 = value;
	}

	inline static int32_t get_offset_of_m_FilterMode_15() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_FilterMode_15)); }
	inline int32_t get_m_FilterMode_15() const { return ___m_FilterMode_15; }
	inline int32_t* get_address_of_m_FilterMode_15() { return &___m_FilterMode_15; }
	inline void set_m_FilterMode_15(int32_t value)
	{
		___m_FilterMode_15 = value;
	}

	inline static int32_t get_offset_of_m_WrapMode_16() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_WrapMode_16)); }
	inline int32_t get_m_WrapMode_16() const { return ___m_WrapMode_16; }
	inline int32_t* get_address_of_m_WrapMode_16() { return &___m_WrapMode_16; }
	inline void set_m_WrapMode_16(int32_t value)
	{
		___m_WrapMode_16 = value;
	}

	inline static int32_t get_offset_of_m_AnisoLevel_17() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_AnisoLevel_17)); }
	inline int32_t get_m_AnisoLevel_17() const { return ___m_AnisoLevel_17; }
	inline int32_t* get_address_of_m_AnisoLevel_17() { return &___m_AnisoLevel_17; }
	inline void set_m_AnisoLevel_17(int32_t value)
	{
		___m_AnisoLevel_17 = value;
	}

	inline static int32_t get_offset_of_m_events_18() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_events_18)); }
	inline MediaPlayerEvent_t136298857 * get_m_events_18() const { return ___m_events_18; }
	inline MediaPlayerEvent_t136298857 ** get_address_of_m_events_18() { return &___m_events_18; }
	inline void set_m_events_18(MediaPlayerEvent_t136298857 * value)
	{
		___m_events_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_events_18, value);
	}

	inline static int32_t get_offset_of_m_Control_19() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_Control_19)); }
	inline Il2CppObject * get_m_Control_19() const { return ___m_Control_19; }
	inline Il2CppObject ** get_address_of_m_Control_19() { return &___m_Control_19; }
	inline void set_m_Control_19(Il2CppObject * value)
	{
		___m_Control_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_Control_19, value);
	}

	inline static int32_t get_offset_of_m_Texture_20() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_Texture_20)); }
	inline Il2CppObject * get_m_Texture_20() const { return ___m_Texture_20; }
	inline Il2CppObject ** get_address_of_m_Texture_20() { return &___m_Texture_20; }
	inline void set_m_Texture_20(Il2CppObject * value)
	{
		___m_Texture_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_Texture_20, value);
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_Info_21)); }
	inline Il2CppObject * get_m_Info_21() const { return ___m_Info_21; }
	inline Il2CppObject ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(Il2CppObject * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_Info_21, value);
	}

	inline static int32_t get_offset_of_m_Player_22() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_Player_22)); }
	inline Il2CppObject * get_m_Player_22() const { return ___m_Player_22; }
	inline Il2CppObject ** get_address_of_m_Player_22() { return &___m_Player_22; }
	inline void set_m_Player_22(Il2CppObject * value)
	{
		___m_Player_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_Player_22, value);
	}

	inline static int32_t get_offset_of_m_Dispose_23() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_Dispose_23)); }
	inline Il2CppObject * get_m_Dispose_23() const { return ___m_Dispose_23; }
	inline Il2CppObject ** get_address_of_m_Dispose_23() { return &___m_Dispose_23; }
	inline void set_m_Dispose_23(Il2CppObject * value)
	{
		___m_Dispose_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_Dispose_23, value);
	}

	inline static int32_t get_offset_of_m_VideoOpened_24() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_VideoOpened_24)); }
	inline bool get_m_VideoOpened_24() const { return ___m_VideoOpened_24; }
	inline bool* get_address_of_m_VideoOpened_24() { return &___m_VideoOpened_24; }
	inline void set_m_VideoOpened_24(bool value)
	{
		___m_VideoOpened_24 = value;
	}

	inline static int32_t get_offset_of_m_AutoStartTriggered_25() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_AutoStartTriggered_25)); }
	inline bool get_m_AutoStartTriggered_25() const { return ___m_AutoStartTriggered_25; }
	inline bool* get_address_of_m_AutoStartTriggered_25() { return &___m_AutoStartTriggered_25; }
	inline void set_m_AutoStartTriggered_25(bool value)
	{
		___m_AutoStartTriggered_25 = value;
	}

	inline static int32_t get_offset_of_m_WasPlayingOnPause_26() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_WasPlayingOnPause_26)); }
	inline bool get_m_WasPlayingOnPause_26() const { return ___m_WasPlayingOnPause_26; }
	inline bool* get_address_of_m_WasPlayingOnPause_26() { return &___m_WasPlayingOnPause_26; }
	inline void set_m_WasPlayingOnPause_26(bool value)
	{
		___m_WasPlayingOnPause_26 = value;
	}

	inline static int32_t get_offset_of__renderingCoroutine_27() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ____renderingCoroutine_27)); }
	inline Coroutine_t2299508840 * get__renderingCoroutine_27() const { return ____renderingCoroutine_27; }
	inline Coroutine_t2299508840 ** get_address_of__renderingCoroutine_27() { return &____renderingCoroutine_27; }
	inline void set__renderingCoroutine_27(Coroutine_t2299508840 * value)
	{
		____renderingCoroutine_27 = value;
		Il2CppCodeGenWriteBarrier(&____renderingCoroutine_27, value);
	}

	inline static int32_t get_offset_of_m_GuiPositionX_32() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_GuiPositionX_32)); }
	inline int32_t get_m_GuiPositionX_32() const { return ___m_GuiPositionX_32; }
	inline int32_t* get_address_of_m_GuiPositionX_32() { return &___m_GuiPositionX_32; }
	inline void set_m_GuiPositionX_32(int32_t value)
	{
		___m_GuiPositionX_32 = value;
	}

	inline static int32_t get_offset_of_m_EventFired_ReadyToPlay_34() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_EventFired_ReadyToPlay_34)); }
	inline bool get_m_EventFired_ReadyToPlay_34() const { return ___m_EventFired_ReadyToPlay_34; }
	inline bool* get_address_of_m_EventFired_ReadyToPlay_34() { return &___m_EventFired_ReadyToPlay_34; }
	inline void set_m_EventFired_ReadyToPlay_34(bool value)
	{
		___m_EventFired_ReadyToPlay_34 = value;
	}

	inline static int32_t get_offset_of_m_EventFired_Started_35() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_EventFired_Started_35)); }
	inline bool get_m_EventFired_Started_35() const { return ___m_EventFired_Started_35; }
	inline bool* get_address_of_m_EventFired_Started_35() { return &___m_EventFired_Started_35; }
	inline void set_m_EventFired_Started_35(bool value)
	{
		___m_EventFired_Started_35 = value;
	}

	inline static int32_t get_offset_of_m_EventFired_FirstFrameReady_36() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_EventFired_FirstFrameReady_36)); }
	inline bool get_m_EventFired_FirstFrameReady_36() const { return ___m_EventFired_FirstFrameReady_36; }
	inline bool* get_address_of_m_EventFired_FirstFrameReady_36() { return &___m_EventFired_FirstFrameReady_36; }
	inline void set_m_EventFired_FirstFrameReady_36(bool value)
	{
		___m_EventFired_FirstFrameReady_36 = value;
	}

	inline static int32_t get_offset_of_m_EventFired_FinishedPlaying_37() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_EventFired_FinishedPlaying_37)); }
	inline bool get_m_EventFired_FinishedPlaying_37() const { return ___m_EventFired_FinishedPlaying_37; }
	inline bool* get_address_of_m_EventFired_FinishedPlaying_37() { return &___m_EventFired_FinishedPlaying_37; }
	inline void set_m_EventFired_FinishedPlaying_37(bool value)
	{
		___m_EventFired_FinishedPlaying_37 = value;
	}

	inline static int32_t get_offset_of_m_EventFired_MetaDataReady_38() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ___m_EventFired_MetaDataReady_38)); }
	inline bool get_m_EventFired_MetaDataReady_38() const { return ___m_EventFired_MetaDataReady_38; }
	inline bool* get_address_of_m_EventFired_MetaDataReady_38() { return &___m_EventFired_MetaDataReady_38; }
	inline void set_m_EventFired_MetaDataReady_38(bool value)
	{
		___m_EventFired_MetaDataReady_38 = value;
	}

	inline static int32_t get_offset_of__optionsWindows_39() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ____optionsWindows_39)); }
	inline OptionsWindows_t1980873137 * get__optionsWindows_39() const { return ____optionsWindows_39; }
	inline OptionsWindows_t1980873137 ** get_address_of__optionsWindows_39() { return &____optionsWindows_39; }
	inline void set__optionsWindows_39(OptionsWindows_t1980873137 * value)
	{
		____optionsWindows_39 = value;
		Il2CppCodeGenWriteBarrier(&____optionsWindows_39, value);
	}

	inline static int32_t get_offset_of__optionsMacOSX_40() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ____optionsMacOSX_40)); }
	inline OptionsMacOSX_t2739201253 * get__optionsMacOSX_40() const { return ____optionsMacOSX_40; }
	inline OptionsMacOSX_t2739201253 ** get_address_of__optionsMacOSX_40() { return &____optionsMacOSX_40; }
	inline void set__optionsMacOSX_40(OptionsMacOSX_t2739201253 * value)
	{
		____optionsMacOSX_40 = value;
		Il2CppCodeGenWriteBarrier(&____optionsMacOSX_40, value);
	}

	inline static int32_t get_offset_of__optionsIOS_41() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ____optionsIOS_41)); }
	inline OptionsIOS_t2286580139 * get__optionsIOS_41() const { return ____optionsIOS_41; }
	inline OptionsIOS_t2286580139 ** get_address_of__optionsIOS_41() { return &____optionsIOS_41; }
	inline void set__optionsIOS_41(OptionsIOS_t2286580139 * value)
	{
		____optionsIOS_41 = value;
		Il2CppCodeGenWriteBarrier(&____optionsIOS_41, value);
	}

	inline static int32_t get_offset_of__optionsTVOS_42() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ____optionsTVOS_42)); }
	inline OptionsTVOS_t981353918 * get__optionsTVOS_42() const { return ____optionsTVOS_42; }
	inline OptionsTVOS_t981353918 ** get_address_of__optionsTVOS_42() { return &____optionsTVOS_42; }
	inline void set__optionsTVOS_42(OptionsTVOS_t981353918 * value)
	{
		____optionsTVOS_42 = value;
		Il2CppCodeGenWriteBarrier(&____optionsTVOS_42, value);
	}

	inline static int32_t get_offset_of__optionsAndroid_43() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ____optionsAndroid_43)); }
	inline OptionsAndroid_t986194977 * get__optionsAndroid_43() const { return ____optionsAndroid_43; }
	inline OptionsAndroid_t986194977 ** get_address_of__optionsAndroid_43() { return &____optionsAndroid_43; }
	inline void set__optionsAndroid_43(OptionsAndroid_t986194977 * value)
	{
		____optionsAndroid_43 = value;
		Il2CppCodeGenWriteBarrier(&____optionsAndroid_43, value);
	}

	inline static int32_t get_offset_of__optionsWindowsPhone_44() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ____optionsWindowsPhone_44)); }
	inline OptionsWindowsPhone_t3788679085 * get__optionsWindowsPhone_44() const { return ____optionsWindowsPhone_44; }
	inline OptionsWindowsPhone_t3788679085 ** get_address_of__optionsWindowsPhone_44() { return &____optionsWindowsPhone_44; }
	inline void set__optionsWindowsPhone_44(OptionsWindowsPhone_t3788679085 * value)
	{
		____optionsWindowsPhone_44 = value;
		Il2CppCodeGenWriteBarrier(&____optionsWindowsPhone_44, value);
	}

	inline static int32_t get_offset_of__optionsWindowsUWP_45() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ____optionsWindowsUWP_45)); }
	inline OptionsWindowsUWP_t3299716819 * get__optionsWindowsUWP_45() const { return ____optionsWindowsUWP_45; }
	inline OptionsWindowsUWP_t3299716819 ** get_address_of__optionsWindowsUWP_45() { return &____optionsWindowsUWP_45; }
	inline void set__optionsWindowsUWP_45(OptionsWindowsUWP_t3299716819 * value)
	{
		____optionsWindowsUWP_45 = value;
		Il2CppCodeGenWriteBarrier(&____optionsWindowsUWP_45, value);
	}

	inline static int32_t get_offset_of__optionsWebGL_46() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829, ____optionsWebGL_46)); }
	inline OptionsWebGL_t233255005 * get__optionsWebGL_46() const { return ____optionsWebGL_46; }
	inline OptionsWebGL_t233255005 ** get_address_of__optionsWebGL_46() { return &____optionsWebGL_46; }
	inline void set__optionsWebGL_46(OptionsWebGL_t233255005 * value)
	{
		____optionsWebGL_46 = value;
		Il2CppCodeGenWriteBarrier(&____optionsWebGL_46, value);
	}
};

struct MediaPlayer_t797690829_StaticFields
{
public:
	// System.Boolean RenderHeads.Media.AVProVideo.MediaPlayer::s_GlobalStartup
	bool ___s_GlobalStartup_33;

public:
	inline static int32_t get_offset_of_s_GlobalStartup_33() { return static_cast<int32_t>(offsetof(MediaPlayer_t797690829_StaticFields, ___s_GlobalStartup_33)); }
	inline bool get_s_GlobalStartup_33() const { return ___s_GlobalStartup_33; }
	inline bool* get_address_of_s_GlobalStartup_33() { return &___s_GlobalStartup_33; }
	inline void set_s_GlobalStartup_33(bool value)
	{
		___s_GlobalStartup_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
