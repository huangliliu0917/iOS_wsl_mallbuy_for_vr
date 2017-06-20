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
// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.Demos.FrameExtract
struct  FrameExtract_t2306783548  : public MonoBehaviour_t1158329972
{
public:
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.Demos.FrameExtract::_mediaPlayer
	MediaPlayer_t797690829 * ____mediaPlayer_3;
	// System.Boolean RenderHeads.Media.AVProVideo.Demos.FrameExtract::_accurateSeek
	bool ____accurateSeek_4;
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.FrameExtract::_timeoutMs
	int32_t ____timeoutMs_5;
	// UnityEngine.GUISkin RenderHeads.Media.AVProVideo.Demos.FrameExtract::_skin
	GUISkin_t1436893342 * ____skin_6;
	// System.Single RenderHeads.Media.AVProVideo.Demos.FrameExtract::_timeStepSeconds
	float ____timeStepSeconds_7;
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.FrameExtract::_frameIndex
	int32_t ____frameIndex_8;
	// UnityEngine.Texture2D RenderHeads.Media.AVProVideo.Demos.FrameExtract::_texture
	Texture2D_t3542995729 * ____texture_9;
	// UnityEngine.RenderTexture RenderHeads.Media.AVProVideo.Demos.FrameExtract::_displaySheet
	RenderTexture_t2666733923 * ____displaySheet_10;

public:
	inline static int32_t get_offset_of__mediaPlayer_3() { return static_cast<int32_t>(offsetof(FrameExtract_t2306783548, ____mediaPlayer_3)); }
	inline MediaPlayer_t797690829 * get__mediaPlayer_3() const { return ____mediaPlayer_3; }
	inline MediaPlayer_t797690829 ** get_address_of__mediaPlayer_3() { return &____mediaPlayer_3; }
	inline void set__mediaPlayer_3(MediaPlayer_t797690829 * value)
	{
		____mediaPlayer_3 = value;
		Il2CppCodeGenWriteBarrier(&____mediaPlayer_3, value);
	}

	inline static int32_t get_offset_of__accurateSeek_4() { return static_cast<int32_t>(offsetof(FrameExtract_t2306783548, ____accurateSeek_4)); }
	inline bool get__accurateSeek_4() const { return ____accurateSeek_4; }
	inline bool* get_address_of__accurateSeek_4() { return &____accurateSeek_4; }
	inline void set__accurateSeek_4(bool value)
	{
		____accurateSeek_4 = value;
	}

	inline static int32_t get_offset_of__timeoutMs_5() { return static_cast<int32_t>(offsetof(FrameExtract_t2306783548, ____timeoutMs_5)); }
	inline int32_t get__timeoutMs_5() const { return ____timeoutMs_5; }
	inline int32_t* get_address_of__timeoutMs_5() { return &____timeoutMs_5; }
	inline void set__timeoutMs_5(int32_t value)
	{
		____timeoutMs_5 = value;
	}

	inline static int32_t get_offset_of__skin_6() { return static_cast<int32_t>(offsetof(FrameExtract_t2306783548, ____skin_6)); }
	inline GUISkin_t1436893342 * get__skin_6() const { return ____skin_6; }
	inline GUISkin_t1436893342 ** get_address_of__skin_6() { return &____skin_6; }
	inline void set__skin_6(GUISkin_t1436893342 * value)
	{
		____skin_6 = value;
		Il2CppCodeGenWriteBarrier(&____skin_6, value);
	}

	inline static int32_t get_offset_of__timeStepSeconds_7() { return static_cast<int32_t>(offsetof(FrameExtract_t2306783548, ____timeStepSeconds_7)); }
	inline float get__timeStepSeconds_7() const { return ____timeStepSeconds_7; }
	inline float* get_address_of__timeStepSeconds_7() { return &____timeStepSeconds_7; }
	inline void set__timeStepSeconds_7(float value)
	{
		____timeStepSeconds_7 = value;
	}

	inline static int32_t get_offset_of__frameIndex_8() { return static_cast<int32_t>(offsetof(FrameExtract_t2306783548, ____frameIndex_8)); }
	inline int32_t get__frameIndex_8() const { return ____frameIndex_8; }
	inline int32_t* get_address_of__frameIndex_8() { return &____frameIndex_8; }
	inline void set__frameIndex_8(int32_t value)
	{
		____frameIndex_8 = value;
	}

	inline static int32_t get_offset_of__texture_9() { return static_cast<int32_t>(offsetof(FrameExtract_t2306783548, ____texture_9)); }
	inline Texture2D_t3542995729 * get__texture_9() const { return ____texture_9; }
	inline Texture2D_t3542995729 ** get_address_of__texture_9() { return &____texture_9; }
	inline void set__texture_9(Texture2D_t3542995729 * value)
	{
		____texture_9 = value;
		Il2CppCodeGenWriteBarrier(&____texture_9, value);
	}

	inline static int32_t get_offset_of__displaySheet_10() { return static_cast<int32_t>(offsetof(FrameExtract_t2306783548, ____displaySheet_10)); }
	inline RenderTexture_t2666733923 * get__displaySheet_10() const { return ____displaySheet_10; }
	inline RenderTexture_t2666733923 ** get_address_of__displaySheet_10() { return &____displaySheet_10; }
	inline void set__displaySheet_10(RenderTexture_t2666733923 * value)
	{
		____displaySheet_10 = value;
		Il2CppCodeGenWriteBarrier(&____displaySheet_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
