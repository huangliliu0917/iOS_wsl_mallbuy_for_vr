#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_Events_BaseInvokableCall2229564840.h"

// UnityEngine.Events.UnityAction`3<RenderHeads.Media.AVProVideo.MediaPlayer,RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType,RenderHeads.Media.AVProVideo.ErrorCode>
struct UnityAction_3_t630923759;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall`3<RenderHeads.Media.AVProVideo.MediaPlayer,RenderHeads.Media.AVProVideo.MediaPlayerEvent/EventType,RenderHeads.Media.AVProVideo.ErrorCode>
struct  InvokableCall_3_t3634792741  : public BaseInvokableCall_t2229564840
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t630923759 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t3634792741, ___Delegate_0)); }
	inline UnityAction_3_t630923759 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t630923759 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t630923759 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier(&___Delegate_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
