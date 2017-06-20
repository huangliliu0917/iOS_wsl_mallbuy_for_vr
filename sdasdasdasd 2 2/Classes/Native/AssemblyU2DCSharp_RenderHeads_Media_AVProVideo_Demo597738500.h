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
// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.DisplayUGUI>
struct List_1_t1948029150;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple
struct  SampleApp_Multiple_t597738500  : public MonoBehaviour_t1158329972
{
public:
	// System.String RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple::m_videoPath
	String_t* ___m_videoPath_2;
	// System.Int32 RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple::m_NumVideosAdded
	int32_t ___m_NumVideosAdded_3;
	// System.Collections.Generic.List`1<RenderHeads.Media.AVProVideo.DisplayUGUI> RenderHeads.Media.AVProVideo.Demos.SampleApp_Multiple::m_aAddedVideos
	List_1_t1948029150 * ___m_aAddedVideos_4;

public:
	inline static int32_t get_offset_of_m_videoPath_2() { return static_cast<int32_t>(offsetof(SampleApp_Multiple_t597738500, ___m_videoPath_2)); }
	inline String_t* get_m_videoPath_2() const { return ___m_videoPath_2; }
	inline String_t** get_address_of_m_videoPath_2() { return &___m_videoPath_2; }
	inline void set_m_videoPath_2(String_t* value)
	{
		___m_videoPath_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_videoPath_2, value);
	}

	inline static int32_t get_offset_of_m_NumVideosAdded_3() { return static_cast<int32_t>(offsetof(SampleApp_Multiple_t597738500, ___m_NumVideosAdded_3)); }
	inline int32_t get_m_NumVideosAdded_3() const { return ___m_NumVideosAdded_3; }
	inline int32_t* get_address_of_m_NumVideosAdded_3() { return &___m_NumVideosAdded_3; }
	inline void set_m_NumVideosAdded_3(int32_t value)
	{
		___m_NumVideosAdded_3 = value;
	}

	inline static int32_t get_offset_of_m_aAddedVideos_4() { return static_cast<int32_t>(offsetof(SampleApp_Multiple_t597738500, ___m_aAddedVideos_4)); }
	inline List_1_t1948029150 * get_m_aAddedVideos_4() const { return ___m_aAddedVideos_4; }
	inline List_1_t1948029150 ** get_address_of_m_aAddedVideos_4() { return &___m_aAddedVideos_4; }
	inline void set_m_aAddedVideos_4(List_1_t1948029150 * value)
	{
		___m_aAddedVideos_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_aAddedVideos_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
