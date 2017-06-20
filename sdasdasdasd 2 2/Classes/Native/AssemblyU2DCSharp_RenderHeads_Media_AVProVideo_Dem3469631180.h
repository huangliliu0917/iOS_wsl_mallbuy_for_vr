#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_RenderHeads_Media_AVProVideo_Dem1129624112.h"

// RenderHeads.Media.AVProVideo.MediaPlayer
struct MediaPlayer_t797690829;
// RenderHeads.Media.AVProVideo.MediaPlayer[]
struct MediaPlayerU5BU5D_t2512458336;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.Demos.PlaybackSync
struct  PlaybackSync_t3469631180  : public MonoBehaviour_t1158329972
{
public:
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.PlaybackSync::_masterPlayer
	MediaPlayer_t797690829 * ____masterPlayer_2;
	// RenderHeads.Media.AVProVideo.MediaPlayer[] RenderHeads.Media.AVProVideo.Demos.PlaybackSync::_slavePlayers
	MediaPlayerU5BU5D_t2512458336* ____slavePlayers_3;
	// System.Single RenderHeads.Media.AVProVideo.Demos.PlaybackSync::_toleranceMs
	float ____toleranceMs_4;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.PlaybackSync::_matchVideo
	bool ____matchVideo_5;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.PlaybackSync::_muteSlaves
	bool ____muteSlaves_6;
	// RenderHeads.Media.AVProVideo.Demos.PlaybackSync/State RenderHeads.Media.AVProVideo.Demos.PlaybackSync::_state
	int32_t ____state_7;

public:
	inline static int32_t get_offset_of__masterPlayer_2() { return static_cast<int32_t>(offsetof(PlaybackSync_t3469631180, ____masterPlayer_2)); }
	inline MediaPlayer_t797690829 * get__masterPlayer_2() const { return ____masterPlayer_2; }
	inline MediaPlayer_t797690829 ** get_address_of__masterPlayer_2() { return &____masterPlayer_2; }
	inline void set__masterPlayer_2(MediaPlayer_t797690829 * value)
	{
		____masterPlayer_2 = value;
		Il2CppCodeGenWriteBarrier(&____masterPlayer_2, value);
	}

	inline static int32_t get_offset_of__slavePlayers_3() { return static_cast<int32_t>(offsetof(PlaybackSync_t3469631180, ____slavePlayers_3)); }
	inline MediaPlayerU5BU5D_t2512458336* get__slavePlayers_3() const { return ____slavePlayers_3; }
	inline MediaPlayerU5BU5D_t2512458336** get_address_of__slavePlayers_3() { return &____slavePlayers_3; }
	inline void set__slavePlayers_3(MediaPlayerU5BU5D_t2512458336* value)
	{
		____slavePlayers_3 = value;
		Il2CppCodeGenWriteBarrier(&____slavePlayers_3, value);
	}

	inline static int32_t get_offset_of__toleranceMs_4() { return static_cast<int32_t>(offsetof(PlaybackSync_t3469631180, ____toleranceMs_4)); }
	inline float get__toleranceMs_4() const { return ____toleranceMs_4; }
	inline float* get_address_of__toleranceMs_4() { return &____toleranceMs_4; }
	inline void set__toleranceMs_4(float value)
	{
		____toleranceMs_4 = value;
	}

	inline static int32_t get_offset_of__matchVideo_5() { return static_cast<int32_t>(offsetof(PlaybackSync_t3469631180, ____matchVideo_5)); }
	inline bool get__matchVideo_5() const { return ____matchVideo_5; }
	inline bool* get_address_of__matchVideo_5() { return &____matchVideo_5; }
	inline void set__matchVideo_5(bool value)
	{
		____matchVideo_5 = value;
	}

	inline static int32_t get_offset_of__muteSlaves_6() { return static_cast<int32_t>(offsetof(PlaybackSync_t3469631180, ____muteSlaves_6)); }
	inline bool get__muteSlaves_6() const { return ____muteSlaves_6; }
	inline bool* get_address_of__muteSlaves_6() { return &____muteSlaves_6; }
	inline void set__muteSlaves_6(bool value)
	{
		____muteSlaves_6 = value;
	}

	inline static int32_t get_offset_of__state_7() { return static_cast<int32_t>(offsetof(PlaybackSync_t3469631180, ____state_7)); }
	inline int32_t get__state_7() const { return ____state_7; }
	inline int32_t* get_address_of__state_7() { return &____state_7; }
	inline void set__state_7(int32_t value)
	{
		____state_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
