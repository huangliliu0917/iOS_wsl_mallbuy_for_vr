#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic540192618.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_ScaleMode324459649.h"

// RenderHeads.Media.AVProVideo.MediaPlayer
struct MediaPlayer_t797690829;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderHeads.Media.AVProVideo.DisplayUGUI
struct  DisplayUGUI_t2578908018  : public MaskableGraphic_t540192618
{
public:
	// RenderHeads.Media.AVProVideo.MediaPlayer RenderHeads.Media.AVProVideo.DisplayUGUI::_mediaPlayer
	MediaPlayer_t797690829 * ____mediaPlayer_28;
	// UnityEngine.Rect RenderHeads.Media.AVProVideo.DisplayUGUI::m_UVRect
	Rect_t3681755626  ___m_UVRect_29;
	// System.Boolean RenderHeads.Media.AVProVideo.DisplayUGUI::_setNativeSize
	bool ____setNativeSize_30;
	// UnityEngine.ScaleMode RenderHeads.Media.AVProVideo.DisplayUGUI::_scaleMode
	int32_t ____scaleMode_31;
	// System.Boolean RenderHeads.Media.AVProVideo.DisplayUGUI::_noDefaultDisplay
	bool ____noDefaultDisplay_32;
	// System.Boolean RenderHeads.Media.AVProVideo.DisplayUGUI::_displayInEditor
	bool ____displayInEditor_33;
	// UnityEngine.Texture RenderHeads.Media.AVProVideo.DisplayUGUI::_defaultTexture
	Texture_t2243626319 * ____defaultTexture_34;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayUGUI::_lastWidth
	int32_t ____lastWidth_35;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayUGUI::_lastHeight
	int32_t ____lastHeight_36;
	// System.Boolean RenderHeads.Media.AVProVideo.DisplayUGUI::_flipY
	bool ____flipY_37;
	// UnityEngine.Texture RenderHeads.Media.AVProVideo.DisplayUGUI::_lastTexture
	Texture_t2243626319 * ____lastTexture_38;
	// System.Boolean RenderHeads.Media.AVProVideo.DisplayUGUI::_userMaterial
	bool ____userMaterial_45;
	// UnityEngine.Material RenderHeads.Media.AVProVideo.DisplayUGUI::_material
	Material_t193706927 * ____material_46;

public:
	inline static int32_t get_offset_of__mediaPlayer_28() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018, ____mediaPlayer_28)); }
	inline MediaPlayer_t797690829 * get__mediaPlayer_28() const { return ____mediaPlayer_28; }
	inline MediaPlayer_t797690829 ** get_address_of__mediaPlayer_28() { return &____mediaPlayer_28; }
	inline void set__mediaPlayer_28(MediaPlayer_t797690829 * value)
	{
		____mediaPlayer_28 = value;
		Il2CppCodeGenWriteBarrier(&____mediaPlayer_28, value);
	}

	inline static int32_t get_offset_of_m_UVRect_29() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018, ___m_UVRect_29)); }
	inline Rect_t3681755626  get_m_UVRect_29() const { return ___m_UVRect_29; }
	inline Rect_t3681755626 * get_address_of_m_UVRect_29() { return &___m_UVRect_29; }
	inline void set_m_UVRect_29(Rect_t3681755626  value)
	{
		___m_UVRect_29 = value;
	}

	inline static int32_t get_offset_of__setNativeSize_30() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018, ____setNativeSize_30)); }
	inline bool get__setNativeSize_30() const { return ____setNativeSize_30; }
	inline bool* get_address_of__setNativeSize_30() { return &____setNativeSize_30; }
	inline void set__setNativeSize_30(bool value)
	{
		____setNativeSize_30 = value;
	}

	inline static int32_t get_offset_of__scaleMode_31() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018, ____scaleMode_31)); }
	inline int32_t get__scaleMode_31() const { return ____scaleMode_31; }
	inline int32_t* get_address_of__scaleMode_31() { return &____scaleMode_31; }
	inline void set__scaleMode_31(int32_t value)
	{
		____scaleMode_31 = value;
	}

	inline static int32_t get_offset_of__noDefaultDisplay_32() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018, ____noDefaultDisplay_32)); }
	inline bool get__noDefaultDisplay_32() const { return ____noDefaultDisplay_32; }
	inline bool* get_address_of__noDefaultDisplay_32() { return &____noDefaultDisplay_32; }
	inline void set__noDefaultDisplay_32(bool value)
	{
		____noDefaultDisplay_32 = value;
	}

	inline static int32_t get_offset_of__displayInEditor_33() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018, ____displayInEditor_33)); }
	inline bool get__displayInEditor_33() const { return ____displayInEditor_33; }
	inline bool* get_address_of__displayInEditor_33() { return &____displayInEditor_33; }
	inline void set__displayInEditor_33(bool value)
	{
		____displayInEditor_33 = value;
	}

	inline static int32_t get_offset_of__defaultTexture_34() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018, ____defaultTexture_34)); }
	inline Texture_t2243626319 * get__defaultTexture_34() const { return ____defaultTexture_34; }
	inline Texture_t2243626319 ** get_address_of__defaultTexture_34() { return &____defaultTexture_34; }
	inline void set__defaultTexture_34(Texture_t2243626319 * value)
	{
		____defaultTexture_34 = value;
		Il2CppCodeGenWriteBarrier(&____defaultTexture_34, value);
	}

	inline static int32_t get_offset_of__lastWidth_35() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018, ____lastWidth_35)); }
	inline int32_t get__lastWidth_35() const { return ____lastWidth_35; }
	inline int32_t* get_address_of__lastWidth_35() { return &____lastWidth_35; }
	inline void set__lastWidth_35(int32_t value)
	{
		____lastWidth_35 = value;
	}

	inline static int32_t get_offset_of__lastHeight_36() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018, ____lastHeight_36)); }
	inline int32_t get__lastHeight_36() const { return ____lastHeight_36; }
	inline int32_t* get_address_of__lastHeight_36() { return &____lastHeight_36; }
	inline void set__lastHeight_36(int32_t value)
	{
		____lastHeight_36 = value;
	}

	inline static int32_t get_offset_of__flipY_37() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018, ____flipY_37)); }
	inline bool get__flipY_37() const { return ____flipY_37; }
	inline bool* get_address_of__flipY_37() { return &____flipY_37; }
	inline void set__flipY_37(bool value)
	{
		____flipY_37 = value;
	}

	inline static int32_t get_offset_of__lastTexture_38() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018, ____lastTexture_38)); }
	inline Texture_t2243626319 * get__lastTexture_38() const { return ____lastTexture_38; }
	inline Texture_t2243626319 ** get_address_of__lastTexture_38() { return &____lastTexture_38; }
	inline void set__lastTexture_38(Texture_t2243626319 * value)
	{
		____lastTexture_38 = value;
		Il2CppCodeGenWriteBarrier(&____lastTexture_38, value);
	}

	inline static int32_t get_offset_of__userMaterial_45() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018, ____userMaterial_45)); }
	inline bool get__userMaterial_45() const { return ____userMaterial_45; }
	inline bool* get_address_of__userMaterial_45() { return &____userMaterial_45; }
	inline void set__userMaterial_45(bool value)
	{
		____userMaterial_45 = value;
	}

	inline static int32_t get_offset_of__material_46() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018, ____material_46)); }
	inline Material_t193706927 * get__material_46() const { return ____material_46; }
	inline Material_t193706927 ** get_address_of__material_46() { return &____material_46; }
	inline void set__material_46(Material_t193706927 * value)
	{
		____material_46 = value;
		Il2CppCodeGenWriteBarrier(&____material_46, value);
	}
};

struct DisplayUGUI_t2578908018_StaticFields
{
public:
	// UnityEngine.Shader RenderHeads.Media.AVProVideo.DisplayUGUI::_shaderStereoPacking
	Shader_t2430389951 * ____shaderStereoPacking_39;
	// UnityEngine.Shader RenderHeads.Media.AVProVideo.DisplayUGUI::_shaderAlphaPacking
	Shader_t2430389951 * ____shaderAlphaPacking_40;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayUGUI::_propAlphaPack
	int32_t ____propAlphaPack_41;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayUGUI::_propVertScale
	int32_t ____propVertScale_42;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayUGUI::_propStereo
	int32_t ____propStereo_43;
	// System.Int32 RenderHeads.Media.AVProVideo.DisplayUGUI::_propApplyGamma
	int32_t ____propApplyGamma_44;

public:
	inline static int32_t get_offset_of__shaderStereoPacking_39() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018_StaticFields, ____shaderStereoPacking_39)); }
	inline Shader_t2430389951 * get__shaderStereoPacking_39() const { return ____shaderStereoPacking_39; }
	inline Shader_t2430389951 ** get_address_of__shaderStereoPacking_39() { return &____shaderStereoPacking_39; }
	inline void set__shaderStereoPacking_39(Shader_t2430389951 * value)
	{
		____shaderStereoPacking_39 = value;
		Il2CppCodeGenWriteBarrier(&____shaderStereoPacking_39, value);
	}

	inline static int32_t get_offset_of__shaderAlphaPacking_40() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018_StaticFields, ____shaderAlphaPacking_40)); }
	inline Shader_t2430389951 * get__shaderAlphaPacking_40() const { return ____shaderAlphaPacking_40; }
	inline Shader_t2430389951 ** get_address_of__shaderAlphaPacking_40() { return &____shaderAlphaPacking_40; }
	inline void set__shaderAlphaPacking_40(Shader_t2430389951 * value)
	{
		____shaderAlphaPacking_40 = value;
		Il2CppCodeGenWriteBarrier(&____shaderAlphaPacking_40, value);
	}

	inline static int32_t get_offset_of__propAlphaPack_41() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018_StaticFields, ____propAlphaPack_41)); }
	inline int32_t get__propAlphaPack_41() const { return ____propAlphaPack_41; }
	inline int32_t* get_address_of__propAlphaPack_41() { return &____propAlphaPack_41; }
	inline void set__propAlphaPack_41(int32_t value)
	{
		____propAlphaPack_41 = value;
	}

	inline static int32_t get_offset_of__propVertScale_42() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018_StaticFields, ____propVertScale_42)); }
	inline int32_t get__propVertScale_42() const { return ____propVertScale_42; }
	inline int32_t* get_address_of__propVertScale_42() { return &____propVertScale_42; }
	inline void set__propVertScale_42(int32_t value)
	{
		____propVertScale_42 = value;
	}

	inline static int32_t get_offset_of__propStereo_43() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018_StaticFields, ____propStereo_43)); }
	inline int32_t get__propStereo_43() const { return ____propStereo_43; }
	inline int32_t* get_address_of__propStereo_43() { return &____propStereo_43; }
	inline void set__propStereo_43(int32_t value)
	{
		____propStereo_43 = value;
	}

	inline static int32_t get_offset_of__propApplyGamma_44() { return static_cast<int32_t>(offsetof(DisplayUGUI_t2578908018_StaticFields, ____propApplyGamma_44)); }
	inline int32_t get__propApplyGamma_44() const { return ____propApplyGamma_44; }
	inline int32_t* get_address_of__propApplyGamma_44() { return &____propApplyGamma_44; }
	inline void set__propApplyGamma_44(int32_t value)
	{
		____propApplyGamma_44 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
