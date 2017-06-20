﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_Base2098138749.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.VideoPlayer>
struct Dictionary_2_t547990818;
// EasyAR.VideoPlayer/CallBack
struct CallBack_t3844454365;
// System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus>
struct Action_2_t3996631044;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.VideoPlayer
struct  VideoPlayer_t105965500  : public Base_t2098138749
{
public:
	// System.Boolean EasyAR.VideoPlayer::IsCheckNeeded
	bool ___IsCheckNeeded_2;
	// System.IntPtr EasyAR.VideoPlayer::_objCallback
	IntPtr_t ____objCallback_4;
	// EasyAR.VideoPlayer/CallBack EasyAR.VideoPlayer::_callBack
	CallBack_t3844454365 * ____callBack_5;
	// System.Boolean EasyAR.VideoPlayer::_isMultithreadCallback
	bool ____isMultithreadCallback_6;
	// System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus> EasyAR.VideoPlayer::PlayerStatusChanged
	Action_2_t3996631044 * ___PlayerStatusChanged_7;

public:
	inline static int32_t get_offset_of_IsCheckNeeded_2() { return static_cast<int32_t>(offsetof(VideoPlayer_t105965500, ___IsCheckNeeded_2)); }
	inline bool get_IsCheckNeeded_2() const { return ___IsCheckNeeded_2; }
	inline bool* get_address_of_IsCheckNeeded_2() { return &___IsCheckNeeded_2; }
	inline void set_IsCheckNeeded_2(bool value)
	{
		___IsCheckNeeded_2 = value;
	}

	inline static int32_t get_offset_of__objCallback_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t105965500, ____objCallback_4)); }
	inline IntPtr_t get__objCallback_4() const { return ____objCallback_4; }
	inline IntPtr_t* get_address_of__objCallback_4() { return &____objCallback_4; }
	inline void set__objCallback_4(IntPtr_t value)
	{
		____objCallback_4 = value;
	}

	inline static int32_t get_offset_of__callBack_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t105965500, ____callBack_5)); }
	inline CallBack_t3844454365 * get__callBack_5() const { return ____callBack_5; }
	inline CallBack_t3844454365 ** get_address_of__callBack_5() { return &____callBack_5; }
	inline void set__callBack_5(CallBack_t3844454365 * value)
	{
		____callBack_5 = value;
		Il2CppCodeGenWriteBarrier(&____callBack_5, value);
	}

	inline static int32_t get_offset_of__isMultithreadCallback_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t105965500, ____isMultithreadCallback_6)); }
	inline bool get__isMultithreadCallback_6() const { return ____isMultithreadCallback_6; }
	inline bool* get_address_of__isMultithreadCallback_6() { return &____isMultithreadCallback_6; }
	inline void set__isMultithreadCallback_6(bool value)
	{
		____isMultithreadCallback_6 = value;
	}

	inline static int32_t get_offset_of_PlayerStatusChanged_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t105965500, ___PlayerStatusChanged_7)); }
	inline Action_2_t3996631044 * get_PlayerStatusChanged_7() const { return ___PlayerStatusChanged_7; }
	inline Action_2_t3996631044 ** get_address_of_PlayerStatusChanged_7() { return &___PlayerStatusChanged_7; }
	inline void set_PlayerStatusChanged_7(Action_2_t3996631044 * value)
	{
		___PlayerStatusChanged_7 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerStatusChanged_7, value);
	}
};

struct VideoPlayer_t105965500_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.VideoPlayer> EasyAR.VideoPlayer::players
	Dictionary_2_t547990818 * ___players_3;

public:
	inline static int32_t get_offset_of_players_3() { return static_cast<int32_t>(offsetof(VideoPlayer_t105965500_StaticFields, ___players_3)); }
	inline Dictionary_2_t547990818 * get_players_3() const { return ___players_3; }
	inline Dictionary_2_t547990818 ** get_address_of_players_3() { return &___players_3; }
	inline void set_players_3(Dictionary_2_t547990818 * value)
	{
		___players_3 = value;
		Il2CppCodeGenWriteBarrier(&___players_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
