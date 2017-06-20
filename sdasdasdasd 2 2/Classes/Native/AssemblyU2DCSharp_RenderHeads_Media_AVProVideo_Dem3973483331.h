#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// RenderHeads.Media.AVProVideo.MediaPlayer
struct MediaPlayer_t797690829;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.Demos.DemoInfo
struct  DemoInfo_t3973483331  : public MonoBehaviour_t1158329972
{
public:
	// System.String RenderHeads.Media.AVProVideo.Demos.DemoInfo::_title
	String_t* ____title_2;
	// System.String RenderHeads.Media.AVProVideo.Demos.DemoInfo::_description
	String_t* ____description_3;
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.DemoInfo::_media
	MediaPlayer_t797690829 * ____media_4;

public:
	inline static int32_t get_offset_of__title_2() { return static_cast<int32_t>(offsetof(DemoInfo_t3973483331, ____title_2)); }
	inline String_t* get__title_2() const { return ____title_2; }
	inline String_t** get_address_of__title_2() { return &____title_2; }
	inline void set__title_2(String_t* value)
	{
		____title_2 = value;
		Il2CppCodeGenWriteBarrier(&____title_2, value);
	}

	inline static int32_t get_offset_of__description_3() { return static_cast<int32_t>(offsetof(DemoInfo_t3973483331, ____description_3)); }
	inline String_t* get__description_3() const { return ____description_3; }
	inline String_t** get_address_of__description_3() { return &____description_3; }
	inline void set__description_3(String_t* value)
	{
		____description_3 = value;
		Il2CppCodeGenWriteBarrier(&____description_3, value);
	}

	inline static int32_t get_offset_of__media_4() { return static_cast<int32_t>(offsetof(DemoInfo_t3973483331, ____media_4)); }
	inline MediaPlayer_t797690829 * get__media_4() const { return ____media_4; }
	inline MediaPlayer_t797690829 ** get_address_of__media_4() { return &____media_4; }
	inline void set__media_4(MediaPlayer_t797690829 * value)
	{
		____media_4 = value;
		Il2CppCodeGenWriteBarrier(&____media_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
