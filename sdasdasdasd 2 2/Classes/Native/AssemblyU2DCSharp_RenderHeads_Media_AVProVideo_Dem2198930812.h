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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// RenderHeads.Media.AVProVideo.MediaPlayer
struct MediaPlayer_t797690829;
// RenderHeads.Media.AVProVideo.DisplayIMGUI
struct DisplayIMGUI_t35468519;
// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t1848877068;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.Demos.SimpleController
struct  SimpleController_t2198930812  : public MonoBehaviour_t1158329972
{
public:
	// System.String RenderHeads.Media.AVProVideo.Demos.SimpleController::_folder
	String_t* ____folder_2;
	// System.String[] RenderHeads.Media.AVProVideo.Demos.SimpleController::_filenames
	StringU5BU5D_t1642385972* ____filenames_3;
	// System.String[] RenderHeads.Media.AVProVideo.Demos.SimpleController::_streams
	StringU5BU5D_t1642385972* ____streams_4;
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.SimpleController::_mediaPlayer
	MediaPlayer_t797690829 * ____mediaPlayer_5;
	// RenderHeads.Media.AVProVideo.DisplayIMGUI RenderHeads.Media.AVProVideo.Demos.SimpleController::_display
	DisplayIMGUI_t35468519 * ____display_6;
	// UnityEngine.GUISkin RenderHeads.Media.AVProVideo.Demos.SimpleController::_guiSkin
	GUISkin_t1436893342 * ____guiSkin_7;
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.SimpleController::_width
	int32_t ____width_8;
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.SimpleController::_height
	int32_t ____height_9;
	// System.Single RenderHeads.Media.AVProVideo.Demos.SimpleController::_durationSeconds
	float ____durationSeconds_10;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.SimpleController::_useFading
	bool ____useFading_11;
	// System.Collections.Generic.Queue`1<System.String> RenderHeads.Media.AVProVideo.Demos.SimpleController::_eventLog
	Queue_1_t1848877068 * ____eventLog_12;
	// System.Single RenderHeads.Media.AVProVideo.Demos.SimpleController::_eventTimer
	float ____eventTimer_13;
	// RenderHeads.Media.AVProVideo.MediaPlayer/FileLocation RenderHeads.Media.AVProVideo.Demos.SimpleController::_nextVideoLocation
	int32_t ____nextVideoLocation_14;
	// System.String RenderHeads.Media.AVProVideo.Demos.SimpleController::_nextVideoPath
	String_t* ____nextVideoPath_15;

public:
	inline static int32_t get_offset_of__folder_2() { return static_cast<int32_t>(offsetof(SimpleController_t2198930812, ____folder_2)); }
	inline String_t* get__folder_2() const { return ____folder_2; }
	inline String_t** get_address_of__folder_2() { return &____folder_2; }
	inline void set__folder_2(String_t* value)
	{
		____folder_2 = value;
		Il2CppCodeGenWriteBarrier(&____folder_2, value);
	}

	inline static int32_t get_offset_of__filenames_3() { return static_cast<int32_t>(offsetof(SimpleController_t2198930812, ____filenames_3)); }
	inline StringU5BU5D_t1642385972* get__filenames_3() const { return ____filenames_3; }
	inline StringU5BU5D_t1642385972** get_address_of__filenames_3() { return &____filenames_3; }
	inline void set__filenames_3(StringU5BU5D_t1642385972* value)
	{
		____filenames_3 = value;
		Il2CppCodeGenWriteBarrier(&____filenames_3, value);
	}

	inline static int32_t get_offset_of__streams_4() { return static_cast<int32_t>(offsetof(SimpleController_t2198930812, ____streams_4)); }
	inline StringU5BU5D_t1642385972* get__streams_4() const { return ____streams_4; }
	inline StringU5BU5D_t1642385972** get_address_of__streams_4() { return &____streams_4; }
	inline void set__streams_4(StringU5BU5D_t1642385972* value)
	{
		____streams_4 = value;
		Il2CppCodeGenWriteBarrier(&____streams_4, value);
	}

	inline static int32_t get_offset_of__mediaPlayer_5() { return static_cast<int32_t>(offsetof(SimpleController_t2198930812, ____mediaPlayer_5)); }
	inline MediaPlayer_t797690829 * get__mediaPlayer_5() const { return ____mediaPlayer_5; }
	inline MediaPlayer_t797690829 ** get_address_of__mediaPlayer_5() { return &____mediaPlayer_5; }
	inline void set__mediaPlayer_5(MediaPlayer_t797690829 * value)
	{
		____mediaPlayer_5 = value;
		Il2CppCodeGenWriteBarrier(&____mediaPlayer_5, value);
	}

	inline static int32_t get_offset_of__display_6() { return static_cast<int32_t>(offsetof(SimpleController_t2198930812, ____display_6)); }
	inline DisplayIMGUI_t35468519 * get__display_6() const { return ____display_6; }
	inline DisplayIMGUI_t35468519 ** get_address_of__display_6() { return &____display_6; }
	inline void set__display_6(DisplayIMGUI_t35468519 * value)
	{
		____display_6 = value;
		Il2CppCodeGenWriteBarrier(&____display_6, value);
	}

	inline static int32_t get_offset_of__guiSkin_7() { return static_cast<int32_t>(offsetof(SimpleController_t2198930812, ____guiSkin_7)); }
	inline GUISkin_t1436893342 * get__guiSkin_7() const { return ____guiSkin_7; }
	inline GUISkin_t1436893342 ** get_address_of__guiSkin_7() { return &____guiSkin_7; }
	inline void set__guiSkin_7(GUISkin_t1436893342 * value)
	{
		____guiSkin_7 = value;
		Il2CppCodeGenWriteBarrier(&____guiSkin_7, value);
	}

	inline static int32_t get_offset_of__width_8() { return static_cast<int32_t>(offsetof(SimpleController_t2198930812, ____width_8)); }
	inline int32_t get__width_8() const { return ____width_8; }
	inline int32_t* get_address_of__width_8() { return &____width_8; }
	inline void set__width_8(int32_t value)
	{
		____width_8 = value;
	}

	inline static int32_t get_offset_of__height_9() { return static_cast<int32_t>(offsetof(SimpleController_t2198930812, ____height_9)); }
	inline int32_t get__height_9() const { return ____height_9; }
	inline int32_t* get_address_of__height_9() { return &____height_9; }
	inline void set__height_9(int32_t value)
	{
		____height_9 = value;
	}

	inline static int32_t get_offset_of__durationSeconds_10() { return static_cast<int32_t>(offsetof(SimpleController_t2198930812, ____durationSeconds_10)); }
	inline float get__durationSeconds_10() const { return ____durationSeconds_10; }
	inline float* get_address_of__durationSeconds_10() { return &____durationSeconds_10; }
	inline void set__durationSeconds_10(float value)
	{
		____durationSeconds_10 = value;
	}

	inline static int32_t get_offset_of__useFading_11() { return static_cast<int32_t>(offsetof(SimpleController_t2198930812, ____useFading_11)); }
	inline bool get__useFading_11() const { return ____useFading_11; }
	inline bool* get_address_of__useFading_11() { return &____useFading_11; }
	inline void set__useFading_11(bool value)
	{
		____useFading_11 = value;
	}

	inline static int32_t get_offset_of__eventLog_12() { return static_cast<int32_t>(offsetof(SimpleController_t2198930812, ____eventLog_12)); }
	inline Queue_1_t1848877068 * get__eventLog_12() const { return ____eventLog_12; }
	inline Queue_1_t1848877068 ** get_address_of__eventLog_12() { return &____eventLog_12; }
	inline void set__eventLog_12(Queue_1_t1848877068 * value)
	{
		____eventLog_12 = value;
		Il2CppCodeGenWriteBarrier(&____eventLog_12, value);
	}

	inline static int32_t get_offset_of__eventTimer_13() { return static_cast<int32_t>(offsetof(SimpleController_t2198930812, ____eventTimer_13)); }
	inline float get__eventTimer_13() const { return ____eventTimer_13; }
	inline float* get_address_of__eventTimer_13() { return &____eventTimer_13; }
	inline void set__eventTimer_13(float value)
	{
		____eventTimer_13 = value;
	}

	inline static int32_t get_offset_of__nextVideoLocation_14() { return static_cast<int32_t>(offsetof(SimpleController_t2198930812, ____nextVideoLocation_14)); }
	inline int32_t get__nextVideoLocation_14() const { return ____nextVideoLocation_14; }
	inline int32_t* get_address_of__nextVideoLocation_14() { return &____nextVideoLocation_14; }
	inline void set__nextVideoLocation_14(int32_t value)
	{
		____nextVideoLocation_14 = value;
	}

	inline static int32_t get_offset_of__nextVideoPath_15() { return static_cast<int32_t>(offsetof(SimpleController_t2198930812, ____nextVideoPath_15)); }
	inline String_t* get__nextVideoPath_15() const { return ____nextVideoPath_15; }
	inline String_t** get_address_of__nextVideoPath_15() { return &____nextVideoPath_15; }
	inline void set__nextVideoPath_15(String_t* value)
	{
		____nextVideoPath_15 = value;
		Il2CppCodeGenWriteBarrier(&____nextVideoPath_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
