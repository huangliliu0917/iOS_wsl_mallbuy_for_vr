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

// RenderHeads.Media.AVProVideo.Demos.ChangeVideoExample
struct  ChangeVideoExample_t4052504565  : public MonoBehaviour_t1158329972
{
public:
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.ChangeVideoExample::mp
	MediaPlayer_t797690829 * ___mp_2;

public:
	inline static int32_t get_offset_of_mp_2() { return static_cast<int32_t>(offsetof(ChangeVideoExample_t4052504565, ___mp_2)); }
	inline MediaPlayer_t797690829 * get_mp_2() const { return ___mp_2; }
	inline MediaPlayer_t797690829 ** get_address_of_mp_2() { return &___mp_2; }
	inline void set_mp_2(MediaPlayer_t797690829 * value)
	{
		___mp_2 = value;
		Il2CppCodeGenWriteBarrier(&___mp_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
