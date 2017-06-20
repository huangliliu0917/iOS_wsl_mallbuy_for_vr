#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RenderHeads_Media_AVProVideo_Bas2631503292.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.OSXMediaPlayer
struct  OSXMediaPlayer_t2382385233  : public BaseMediaPlayer_t2631503292
{
public:
	// System.IntPtr RenderHeads.Media.AVProVideo.OSXMediaPlayer::_player
	IntPtr_t ____player_8;
	// System.Int32 RenderHeads.Media.AVProVideo.OSXMediaPlayer::_handle
	int32_t ____handle_9;
	// UnityEngine.Texture2D RenderHeads.Media.AVProVideo.OSXMediaPlayer::_texture
	Texture2D_t3542995729 * ____texture_10;
	// System.Int32 RenderHeads.Media.AVProVideo.OSXMediaPlayer::_width
	int32_t ____width_11;
	// System.Int32 RenderHeads.Media.AVProVideo.OSXMediaPlayer::_height
	int32_t ____height_12;
	// System.Boolean RenderHeads.Media.AVProVideo.OSXMediaPlayer::_flipped
	bool ____flipped_13;
	// System.Boolean RenderHeads.Media.AVProVideo.OSXMediaPlayer::_isMetaDataReady
	bool ____isMetaDataReady_14;
	// System.Text.RegularExpressions.Regex RenderHeads.Media.AVProVideo.OSXMediaPlayer::_matchURLRegex
	Regex_t1803876613 * ____matchURLRegex_15;

public:
	inline static int32_t get_offset_of__player_8() { return static_cast<int32_t>(offsetof(OSXMediaPlayer_t2382385233, ____player_8)); }
	inline IntPtr_t get__player_8() const { return ____player_8; }
	inline IntPtr_t* get_address_of__player_8() { return &____player_8; }
	inline void set__player_8(IntPtr_t value)
	{
		____player_8 = value;
	}

	inline static int32_t get_offset_of__handle_9() { return static_cast<int32_t>(offsetof(OSXMediaPlayer_t2382385233, ____handle_9)); }
	inline int32_t get__handle_9() const { return ____handle_9; }
	inline int32_t* get_address_of__handle_9() { return &____handle_9; }
	inline void set__handle_9(int32_t value)
	{
		____handle_9 = value;
	}

	inline static int32_t get_offset_of__texture_10() { return static_cast<int32_t>(offsetof(OSXMediaPlayer_t2382385233, ____texture_10)); }
	inline Texture2D_t3542995729 * get__texture_10() const { return ____texture_10; }
	inline Texture2D_t3542995729 ** get_address_of__texture_10() { return &____texture_10; }
	inline void set__texture_10(Texture2D_t3542995729 * value)
	{
		____texture_10 = value;
		Il2CppCodeGenWriteBarrier(&____texture_10, value);
	}

	inline static int32_t get_offset_of__width_11() { return static_cast<int32_t>(offsetof(OSXMediaPlayer_t2382385233, ____width_11)); }
	inline int32_t get__width_11() const { return ____width_11; }
	inline int32_t* get_address_of__width_11() { return &____width_11; }
	inline void set__width_11(int32_t value)
	{
		____width_11 = value;
	}

	inline static int32_t get_offset_of__height_12() { return static_cast<int32_t>(offsetof(OSXMediaPlayer_t2382385233, ____height_12)); }
	inline int32_t get__height_12() const { return ____height_12; }
	inline int32_t* get_address_of__height_12() { return &____height_12; }
	inline void set__height_12(int32_t value)
	{
		____height_12 = value;
	}

	inline static int32_t get_offset_of__flipped_13() { return static_cast<int32_t>(offsetof(OSXMediaPlayer_t2382385233, ____flipped_13)); }
	inline bool get__flipped_13() const { return ____flipped_13; }
	inline bool* get_address_of__flipped_13() { return &____flipped_13; }
	inline void set__flipped_13(bool value)
	{
		____flipped_13 = value;
	}

	inline static int32_t get_offset_of__isMetaDataReady_14() { return static_cast<int32_t>(offsetof(OSXMediaPlayer_t2382385233, ____isMetaDataReady_14)); }
	inline bool get__isMetaDataReady_14() const { return ____isMetaDataReady_14; }
	inline bool* get_address_of__isMetaDataReady_14() { return &____isMetaDataReady_14; }
	inline void set__isMetaDataReady_14(bool value)
	{
		____isMetaDataReady_14 = value;
	}

	inline static int32_t get_offset_of__matchURLRegex_15() { return static_cast<int32_t>(offsetof(OSXMediaPlayer_t2382385233, ____matchURLRegex_15)); }
	inline Regex_t1803876613 * get__matchURLRegex_15() const { return ____matchURLRegex_15; }
	inline Regex_t1803876613 ** get_address_of__matchURLRegex_15() { return &____matchURLRegex_15; }
	inline void set__matchURLRegex_15(Regex_t1803876613 * value)
	{
		____matchURLRegex_15 = value;
		Il2CppCodeGenWriteBarrier(&____matchURLRegex_15, value);
	}
};

struct OSXMediaPlayer_t2382385233_StaticFields
{
public:
	// System.Boolean RenderHeads.Media.AVProVideo.OSXMediaPlayer::_initialised
	bool ____initialised_6;
	// System.IntPtr RenderHeads.Media.AVProVideo.OSXMediaPlayer::_renderEventFunc
	IntPtr_t ____renderEventFunc_7;

public:
	inline static int32_t get_offset_of__initialised_6() { return static_cast<int32_t>(offsetof(OSXMediaPlayer_t2382385233_StaticFields, ____initialised_6)); }
	inline bool get__initialised_6() const { return ____initialised_6; }
	inline bool* get_address_of__initialised_6() { return &____initialised_6; }
	inline void set__initialised_6(bool value)
	{
		____initialised_6 = value;
	}

	inline static int32_t get_offset_of__renderEventFunc_7() { return static_cast<int32_t>(offsetof(OSXMediaPlayer_t2382385233_StaticFields, ____renderEventFunc_7)); }
	inline IntPtr_t get__renderEventFunc_7() const { return ____renderEventFunc_7; }
	inline IntPtr_t* get_address_of__renderEventFunc_7() { return &____renderEventFunc_7; }
	inline void set__renderEventFunc_7(IntPtr_t value)
	{
		____renderEventFunc_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
