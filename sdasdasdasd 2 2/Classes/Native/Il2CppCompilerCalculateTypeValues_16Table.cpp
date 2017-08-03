#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_CameraDevice_Device2067663071.h"
#include "EasyAR_Unity_EasyAR_CameraDevice_PermissionStatus3575660436.h"
#include "EasyAR_Unity_EasyAR_CameraDevice_CallBack1595487770.h"
#include "EasyAR_Unity_EasyAR_CameraFrameStreamer1453505805.h"
#include "EasyAR_Unity_EasyAR_CloudRecognizer1351065861.h"
#include "EasyAR_Unity_EasyAR_CloudRecognizer_Status3067127017.h"
#include "EasyAR_Unity_EasyAR_CloudRecognizer_CallBack3632015034.h"
#include "EasyAR_Unity_EasyAR_CloudRecognizer_CallBackInit2516005744.h"
#include "EasyAR_Unity_EasyAR_Engine442764764.h"
#include "EasyAR_Unity_EasyAR_Engine_RotationOffsetMode1216227286.h"
#include "EasyAR_Unity_EasyAR_EngineNative1378544621.h"
#include "EasyAR_Unity_EasyAR_EngineNative_LogFunc2622061371.h"
#include "EasyAR_Unity_EasyAR_EngineNativeIOS522804628.h"
#include "EasyAR_Unity_EasyAR_EngineNativeIOS_LogFunc1070115558.h"
#include "EasyAR_Unity_EasyAR_Frame4169268659.h"
#include "EasyAR_Unity_EasyAR_Image1545723599.h"
#include "EasyAR_Unity_EasyAR_Image_PixelFormat1387677658.h"
#include "EasyAR_Unity_EasyAR_ImageTarget3451047956.h"
#include "EasyAR_Unity_EasyAR_ImageTracker1657723447.h"
#include "EasyAR_Unity_EasyAR_ImageTracker_TargetLoadCallbac1450795014.h"
#include "EasyAR_Unity_EasyAR_ObjectTarget2086352254.h"
#include "EasyAR_Unity_EasyAR_ObjectTracker2493679459.h"
#include "EasyAR_Unity_EasyAR_ObjectTracker_TargetLoadCallba1090767794.h"
#include "EasyAR_Unity_EasyAR_RecorderNative3567071093.h"
#include "EasyAR_Unity_EasyAR_RecorderNative_RecorderStatus2801822159.h"
#include "EasyAR_Unity_EasyAR_RecorderNative_RecorderProfile1325732328.h"
#include "EasyAR_Unity_EasyAR_RecorderNative_RecorderZoomMod1981695863.h"
#include "EasyAR_Unity_EasyAR_RecorderNative_RecordVideoOrie2964857395.h"
#include "EasyAR_Unity_EasyAR_RecorderNative_PermissionStatus845759904.h"
#include "EasyAR_Unity_EasyAR_RecorderNative_CallBack3993155758.h"
#include "EasyAR_Unity_EasyAR_StorageType2201494719.h"
#include "EasyAR_Unity_EasyAR_Target1023893241.h"
#include "EasyAR_Unity_EasyAR_TargetInstance2263011922.h"
#include "EasyAR_Unity_EasyAR_TargetInstance_TrackStatus1470002045.h"
#include "EasyAR_Unity_EasyAR_Vector2I2111311848.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer105965500.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer_PlayerStatus1429656199.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer_VideoType1078708273.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer_CallBack3844454365.h"
#include "EasyAR_Unity_EasyAR_ARCameraBaseBehaviour2732358512.h"
#include "EasyAR_Unity_EasyAR_ARCameraBaseBehaviour_CenterMo2861287498.h"
#include "EasyAR_Unity_EasyAR_ARSceneBaseBehaviour1541967111.h"
#include "EasyAR_Unity_EasyAR_ARSceneTrackerBaseBehaviour3296208543.h"
#include "EasyAR_Unity_EasyAR_CameraDeviceBaseBehaviour2009432565.h"
#include "EasyAR_Unity_EasyAR_CameraDeviceBaseBehaviour_Focu2337489056.h"
#include "EasyAR_Unity_EasyAR_CameraDeviceBaseBehaviour_Devi4223376611.h"
#include "EasyAR_Unity_EasyAR_CameraDeviceBaseBehaviour_U3CO2189160779.h"
#include "EasyAR_Unity_EasyAR_CloudRecognizerBaseBehaviour340861329.h"
#include "EasyAR_Unity_EasyAR_CloudRecognizerBaseBehaviour_S3217423081.h"
#include "EasyAR_Unity_EasyAR_CloudRecognizerBaseBehaviour_U2351743434.h"
#include "EasyAR_Unity_EasyAR_DeviceAbstractBehaviour2172147305.h"
#include "EasyAR_Unity_EasyAR_DeviceUserAbstractBehaviour366754298.h"
#include "EasyAR_Unity_EasyAR_ImageTargetBaseBehaviour490214224.h"
#include "EasyAR_Unity_EasyAR_ImageTrackerBaseBehaviour4017183443.h"
#include "EasyAR_Unity_EasyAR_ObjectTargetBaseBehaviour958778738.h"
#include "EasyAR_Unity_EasyAR_ObjectTrackerBaseBehaviour2290032151.h"
#include "EasyAR_Unity_EasyAR_QRCodeScannerBaseBehaviour4251360290.h"
#include "EasyAR_Unity_EasyAR_RealityPlaneBaseBehaviour2966538638.h"
#include "EasyAR_Unity_EasyAR_RecorderBaseBehaviour946255784.h"
#include "EasyAR_Unity_EasyAR_RecorderBaseBehaviour_Status3150688544.h"
#include "EasyAR_Unity_EasyAR_RecorderBaseBehaviour_Recorder1331472989.h"
#include "EasyAR_Unity_EasyAR_RecorderBaseBehaviour_RecorderZo80546400.h"
#include "EasyAR_Unity_EasyAR_RecorderBaseBehaviour_BaseNoti2598052438.h"
#include "EasyAR_Unity_EasyAR_RecorderBaseBehaviour_U3CStart2343579522.h"
#include "EasyAR_Unity_EasyAR_RenderCameraBaseBehaviour1129024871.h"
#include "EasyAR_Unity_EasyAR_TargetAbstractBehaviour1292968490.h"
#include "EasyAR_Unity_EasyAR_VideoPlayerBaseBehaviour3469208080.h"
#include "EasyAR_Unity_EasyAR_VideoPlayerBaseBehaviour_Video3309001893.h"
#include "EasyAR_Unity_EasyAR_VideoPlayerBaseBehaviour_Scale2324043923.h"
#include "EasyAR_Unity_EasyAR_VideoPlayerBaseBehaviour_Scale2741606492.h"
#include "EasyAR_Unity_EasyAR_MeshGenerator775006378.h"
#include "ICSharpCode_SharpZipLib_U3CModuleU3E3783534214.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Sh4116900137.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Ch1759601101.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Ch3420759743.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_En1612326202.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_En4134149114.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Encr13679930.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_En1369162510.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_En4138271613.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_En2148616552.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip663799889.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip504213360.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi3211561891.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip824811027.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi1922289728.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi1011217589.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi2687135006.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi2279466364.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zi3651656047.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip343008798.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip462950507.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip545820551.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip558046012.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1600 = { sizeof (Device_t2067663071)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1600[4] = 
{
	Device_t2067663071::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1601 = { sizeof (PermissionStatus_t3575660436)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1601[4] = 
{
	PermissionStatus_t3575660436::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1602 = { sizeof (CallBack_t1595487770), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1603 = { sizeof (CameraFrameStreamer_t1453505805), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1604 = { sizeof (CloudRecognizer_t1351065861), -1, sizeof(CloudRecognizer_t1351065861_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1604[8] = 
{
	CloudRecognizer_t1351065861::get_offset_of_IsCheckNeeded_2(),
	CloudRecognizer_t1351065861_StaticFields::get_offset_of_clouds_3(),
	CloudRecognizer_t1351065861::get_offset_of__objCallback_4(),
	CloudRecognizer_t1351065861::get_offset_of__callBack_5(),
	CloudRecognizer_t1351065861::get_offset_of__callBackInit_6(),
	CloudRecognizer_t1351065861::get_offset_of__isMultithreadCallback_7(),
	CloudRecognizer_t1351065861::get_offset_of_CloudInitialize_8(),
	CloudRecognizer_t1351065861::get_offset_of_CloudUpdate_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1605 = { sizeof (Status_t3067127017)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1605[4] = 
{
	Status_t3067127017::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1606 = { sizeof (CallBack_t3632015034), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1607 = { sizeof (CallBackInit_t2516005744), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1608 = { sizeof (Engine_t442764764), -1, sizeof(Engine_t442764764_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1608[9] = 
{
	Engine_t442764764_StaticFields::get_offset_of_instance_0(),
	Engine_t442764764_StaticFields::get_offset_of_Rotation_1(),
	Engine_t442764764_StaticFields::get_offset_of__orientation_2(),
	Engine_t442764764_StaticFields::get_offset_of_initialized_3(),
	Engine_t442764764_StaticFields::get_offset_of_rotationOffset_4(),
	Engine_t442764764_StaticFields::get_offset_of_rotationOffsetSet_5(),
	Engine_t442764764_StaticFields::get_offset_of_isPro_6(),
	Engine_t442764764_StaticFields::get_offset_of_ExceptionEvent_7(),
	Engine_t442764764_StaticFields::get_offset_of_U3CHasExceptionU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1609 = { sizeof (RotationOffsetMode_t1216227286)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1609[5] = 
{
	RotationOffsetMode_t1216227286::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1610 = { sizeof (EngineNative_t1378544621), -1, sizeof(EngineNative_t1378544621_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1610[1] = 
{
	EngineNative_t1378544621_StaticFields::get_offset_of__log_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1611 = { sizeof (LogFunc_t2622061371), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1612 = { sizeof (EngineNativeIOS_t522804628), -1, sizeof(EngineNativeIOS_t522804628_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1612[1] = 
{
	EngineNativeIOS_t522804628_StaticFields::get_offset_of__log_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1613 = { sizeof (LogFunc_t1070115558), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1614 = { sizeof (Frame_t4169268659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1614[4] = 
{
	Frame_t4169268659::get_offset_of_U3CTimeStampU3Ek__BackingField_2(),
	Frame_t4169268659::get_offset_of_U3CIndexU3Ek__BackingField_3(),
	Frame_t4169268659::get_offset_of_U3CTargetsU3Ek__BackingField_4(),
	Frame_t4169268659::get_offset_of_U3CTextU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1615 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1616 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1617 = { sizeof (Image_t1545723599), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1618 = { sizeof (PixelFormat_t1387677658)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1618[8] = 
{
	PixelFormat_t1387677658::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1619 = { sizeof (ImageTarget_t3451047956), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1619[7] = 
{
	ImageTarget_t3451047956::get_offset_of_BehaviourStorage_2(),
	ImageTarget_t3451047956::get_offset_of_BehaviourPath_3(),
	ImageTarget_t3451047956::get_offset_of_TargetSelfLoad_4(),
	ImageTarget_t3451047956::get_offset_of_U3CIdU3Ek__BackingField_5(),
	ImageTarget_t3451047956::get_offset_of_U3CNameU3Ek__BackingField_6(),
	ImageTarget_t3451047956::get_offset_of_U3CUidU3Ek__BackingField_7(),
	ImageTarget_t3451047956::get_offset_of_U3CMetaDataU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1620 = { sizeof (ImageTracker_t1657723447), -1, sizeof(ImageTracker_t1657723447_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1620[9] = 
{
	ImageTracker_t1657723447::get_offset_of_IsCheckNeeded_2(),
	ImageTracker_t1657723447::get_offset_of__objCallbackLoad_3(),
	ImageTracker_t1657723447::get_offset_of__objCallbackUnload_4(),
	ImageTracker_t1657723447::get_offset_of__onload_5(),
	ImageTracker_t1657723447::get_offset_of__onunload_6(),
	ImageTracker_t1657723447::get_offset_of__isMultithreadCallback_7(),
	ImageTracker_t1657723447_StaticFields::get_offset_of_trackers_8(),
	ImageTracker_t1657723447::get_offset_of_TargetLoad_9(),
	ImageTracker_t1657723447::get_offset_of_TargetUnload_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1621 = { sizeof (TargetLoadCallbackC_t1450795014), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1622 = { sizeof (ObjectTarget_t2086352254), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1622[7] = 
{
	ObjectTarget_t2086352254::get_offset_of_BehaviourStorage_2(),
	ObjectTarget_t2086352254::get_offset_of_BehaviourPath_3(),
	ObjectTarget_t2086352254::get_offset_of_TargetSelfLoad_4(),
	ObjectTarget_t2086352254::get_offset_of_U3CIdU3Ek__BackingField_5(),
	ObjectTarget_t2086352254::get_offset_of_U3CNameU3Ek__BackingField_6(),
	ObjectTarget_t2086352254::get_offset_of_U3CUidU3Ek__BackingField_7(),
	ObjectTarget_t2086352254::get_offset_of_U3CMetaDataU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1623 = { sizeof (ObjectTracker_t2493679459), -1, sizeof(ObjectTracker_t2493679459_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1623[9] = 
{
	ObjectTracker_t2493679459::get_offset_of_IsCheckNeeded_2(),
	ObjectTracker_t2493679459::get_offset_of__objCallbackLoad_3(),
	ObjectTracker_t2493679459::get_offset_of__objCallbackUnload_4(),
	ObjectTracker_t2493679459::get_offset_of__onload_5(),
	ObjectTracker_t2493679459::get_offset_of__onunload_6(),
	ObjectTracker_t2493679459::get_offset_of__isMultithreadCallback_7(),
	ObjectTracker_t2493679459_StaticFields::get_offset_of_trackers_8(),
	ObjectTracker_t2493679459::get_offset_of_TargetLoad_9(),
	ObjectTracker_t2493679459::get_offset_of_TargetUnload_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1624 = { sizeof (TargetLoadCallbackC_t1090767794), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1625 = { sizeof (RecorderNative_t3567071093), -1, sizeof(RecorderNative_t3567071093_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1625[8] = 
{
	RecorderNative_t3567071093_StaticFields::get_offset_of__mutex_2(),
	RecorderNative_t3567071093_StaticFields::get_offset_of__notifys_3(),
	RecorderNative_t3567071093_StaticFields::get_offset_of_recorders_4(),
	RecorderNative_t3567071093::get_offset_of__callBack_5(),
	RecorderNative_t3567071093::get_offset_of__objCallback_6(),
	RecorderNative_t3567071093::get_offset_of__permissionCallBack_7(),
	RecorderNative_t3567071093::get_offset_of__permissionObjCallback_8(),
	RecorderNative_t3567071093::get_offset_of_PermissionStatusNotify_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1626 = { sizeof (RecorderStatus_t2801822159)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1626[8] = 
{
	RecorderStatus_t2801822159::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1627 = { sizeof (RecorderProfile_t1325732328)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1627[11] = 
{
	RecorderProfile_t1325732328::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1628 = { sizeof (RecorderZoomMode_t1981695863)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1628[3] = 
{
	RecorderZoomMode_t1981695863::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1629 = { sizeof (RecordVideoOrientation_t2964857395)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1629[3] = 
{
	RecordVideoOrientation_t2964857395::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1630 = { sizeof (PermissionStatus_t845759904)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1630[4] = 
{
	PermissionStatus_t845759904::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1631 = { sizeof (CallBack_t3993155758), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1632 = { sizeof (StorageType_t2201494719)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1632[5] = 
{
	StorageType_t2201494719::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1633 = { sizeof (Target_t1023893241), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1633[4] = 
{
	Target_t1023893241::get_offset_of_U3CIdU3Ek__BackingField_2(),
	Target_t1023893241::get_offset_of_U3CNameU3Ek__BackingField_3(),
	Target_t1023893241::get_offset_of_U3CUidU3Ek__BackingField_4(),
	Target_t1023893241::get_offset_of_U3CMetaDataU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1634 = { sizeof (TargetInstance_t2263011922), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1634[4] = 
{
	TargetInstance_t2263011922::get_offset_of_U3CStatusU3Ek__BackingField_2(),
	TargetInstance_t2263011922::get_offset_of_U3CTargetU3Ek__BackingField_3(),
	TargetInstance_t2263011922::get_offset_of_U3CRotationU3Ek__BackingField_4(),
	TargetInstance_t2263011922::get_offset_of_U3CPositionU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1635 = { sizeof (TrackStatus_t1470002045)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1635[5] = 
{
	TrackStatus_t1470002045::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1636 = { sizeof (Vector2I_t2111311848)+ sizeof (Il2CppObject), sizeof(Vector2I_t2111311848 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1636[2] = 
{
	Vector2I_t2111311848::get_offset_of_x_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Vector2I_t2111311848::get_offset_of_y_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1637 = { sizeof (VideoPlayer_t105965500), -1, sizeof(VideoPlayer_t105965500_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1637[6] = 
{
	VideoPlayer_t105965500::get_offset_of_IsCheckNeeded_2(),
	VideoPlayer_t105965500_StaticFields::get_offset_of_players_3(),
	VideoPlayer_t105965500::get_offset_of__objCallback_4(),
	VideoPlayer_t105965500::get_offset_of__callBack_5(),
	VideoPlayer_t105965500::get_offset_of__isMultithreadCallback_6(),
	VideoPlayer_t105965500::get_offset_of_PlayerStatusChanged_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1638 = { sizeof (PlayerStatus_t1429656199)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1638[4] = 
{
	PlayerStatus_t1429656199::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1639 = { sizeof (VideoType_t1078708273)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1639[4] = 
{
	VideoType_t1078708273::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1640 = { sizeof (CallBack_t3844454365), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1641 = { sizeof (ARCameraBaseBehaviour_t2732358512), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1641[18] = 
{
	ARCameraBaseBehaviour_t2732358512::get_offset_of_Augmenter_2(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_RenderReality_3(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_WorldCenter_4(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_rFlag_5(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_texCreated_6(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_streamer_7(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_previousTargets_8(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_deviceBehaviour_9(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_preRenderReality_10(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_preFrameIdx_11(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_CenterTarget_12(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of__size_13(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_PlaneTextureCreated_14(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_FrameUpdate_15(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_TargetFound_16(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_TargetLost_17(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_TextMessage_18(),
	ARCameraBaseBehaviour_t2732358512::get_offset_of_PlaneTextureRenderChanged_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1642 = { sizeof (CenterMode_t2861287498)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1642[4] = 
{
	CenterMode_t2861287498::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1643 = { sizeof (ARSceneBaseBehaviour_t1541967111), -1, sizeof(ARSceneBaseBehaviour_t1541967111_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1643[2] = 
{
	ARSceneBaseBehaviour_t1541967111::get_offset_of_Target_8(),
	ARSceneBaseBehaviour_t1541967111_StaticFields::get_offset_of_planeTargetBaseBehaviour_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1644 = { sizeof (ARSceneTrackerBaseBehaviour_t3296208543), -1, sizeof(ARSceneTrackerBaseBehaviour_t3296208543_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1644[3] = 
{
	ARSceneTrackerBaseBehaviour_t3296208543::get_offset_of_Tracker_5(),
	ARSceneTrackerBaseBehaviour_t3296208543::get_offset_of_cameraDevice_6(),
	ARSceneTrackerBaseBehaviour_t3296208543_StaticFields::get_offset_of_planeTrackerBaseBehaviour_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1645 = { sizeof (CameraDeviceBaseBehaviour_t2009432565), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1645[12] = 
{
	CameraDeviceBaseBehaviour_t2009432565::get_offset_of_CaptureWhenStart_4(),
	CameraDeviceBaseBehaviour_t2009432565::get_offset_of_RequestPlatformPermission_5(),
	CameraDeviceBaseBehaviour_t2009432565::get_offset_of_cameraDeviceType_6(),
	CameraDeviceBaseBehaviour_t2009432565::get_offset_of_cameraIndex_7(),
	CameraDeviceBaseBehaviour_t2009432565::get_offset_of_horizontalFlip_8(),
	CameraDeviceBaseBehaviour_t2009432565::get_offset_of_CameraSize_9(),
	CameraDeviceBaseBehaviour_t2009432565::get_offset_of_CameraFPS_10(),
	CameraDeviceBaseBehaviour_t2009432565::get_offset_of_Device_11(),
	CameraDeviceBaseBehaviour_t2009432565::get_offset_of_Streamer_12(),
	CameraDeviceBaseBehaviour_t2009432565::get_offset_of_coroutine_13(),
	CameraDeviceBaseBehaviour_t2009432565::get_offset_of_validGranted__14(),
	CameraDeviceBaseBehaviour_t2009432565::get_offset_of_granted__15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1646 = { sizeof (FocusMode_t2337489056)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1646[6] = 
{
	FocusMode_t2337489056::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1647 = { sizeof (DeviceType_t4223376611)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1647[4] = 
{
	DeviceType_t4223376611::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1648 = { sizeof (U3COpenAfterGrantedU3Ec__Iterator0_t2189160779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1648[3] = 
{
	U3COpenAfterGrantedU3Ec__Iterator0_t2189160779::get_offset_of_U24PC_0(),
	U3COpenAfterGrantedU3Ec__Iterator0_t2189160779::get_offset_of_U24current_1(),
	U3COpenAfterGrantedU3Ec__Iterator0_t2189160779::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1649 = { sizeof (CloudRecognizerBaseBehaviour_t340861329), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1649[7] = 
{
	CloudRecognizerBaseBehaviour_t340861329::get_offset_of_Server_5(),
	CloudRecognizerBaseBehaviour_t340861329::get_offset_of_Key_6(),
	CloudRecognizerBaseBehaviour_t340861329::get_offset_of_Secret_7(),
	CloudRecognizerBaseBehaviour_t340861329::get_offset_of_CloudRecognizer_8(),
	CloudRecognizerBaseBehaviour_t340861329::get_offset_of_cameraDevice_9(),
	CloudRecognizerBaseBehaviour_t340861329::get_offset_of_initReconnectMessage_10(),
	CloudRecognizerBaseBehaviour_t340861329::get_offset_of_CloudUpdate_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1650 = { sizeof (Status_t3217423081)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1650[4] = 
{
	Status_t3217423081::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1651 = { sizeof (U3COnConnectU3Ec__Iterator1_t2351743434), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1651[3] = 
{
	U3COnConnectU3Ec__Iterator1_t2351743434::get_offset_of_U24PC_0(),
	U3COnConnectU3Ec__Iterator1_t2351743434::get_offset_of_U24current_1(),
	U3COnConnectU3Ec__Iterator1_t2351743434::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1652 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1653 = { sizeof (DeviceAbstractBehaviour_t2172147305), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1653[2] = 
{
	DeviceAbstractBehaviour_t2172147305::get_offset_of_DeviceStart_2(),
	DeviceAbstractBehaviour_t2172147305::get_offset_of_U3CEasyAR_IDevice_IsOpenedU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1654 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1655 = { sizeof (DeviceUserAbstractBehaviour_t366754298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1655[3] = 
{
	DeviceUserAbstractBehaviour_t366754298::get_offset_of_deviceBehaviour_2(),
	DeviceUserAbstractBehaviour_t366754298::get_offset_of_WorkStart_3(),
	DeviceUserAbstractBehaviour_t366754298::get_offset_of_WorkStop_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1656 = { sizeof (ImageTargetBaseBehaviour_t490214224), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1656[15] = 
{
	ImageTargetBaseBehaviour_t490214224::get_offset_of_Storage_8(),
	ImageTargetBaseBehaviour_t490214224::get_offset_of_Path_9(),
	ImageTargetBaseBehaviour_t490214224::get_offset_of_Name_10(),
	ImageTargetBaseBehaviour_t490214224::get_offset_of_Size_11(),
	ImageTargetBaseBehaviour_t490214224::get_offset_of_ActiveTargetOnStart_12(),
	ImageTargetBaseBehaviour_t490214224::get_offset_of_Target_13(),
	ImageTargetBaseBehaviour_t490214224::get_offset_of_loaders_14(),
	ImageTargetBaseBehaviour_t490214224::get_offset_of_trackerBaseBehaviour_15(),
	ImageTargetBaseBehaviour_t490214224::get_offset_of_trackerBaseBehaviourHasSet_16(),
	ImageTargetBaseBehaviour_t490214224::get_offset_of_lockSizeRatio_17(),
	ImageTargetBaseBehaviour_t490214224::get_offset_of_preScale_18(),
	ImageTargetBaseBehaviour_t490214224::get_offset_of_preSize_19(),
	ImageTargetBaseBehaviour_t490214224::get_offset_of_alreadysetup_20(),
	ImageTargetBaseBehaviour_t490214224::get_offset_of_TargetLoad_21(),
	ImageTargetBaseBehaviour_t490214224::get_offset_of_TargetUnload_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1657 = { sizeof (ImageTrackerBaseBehaviour_t4017183443), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1657[8] = 
{
	ImageTrackerBaseBehaviour_t4017183443::get_offset_of_Tracker_5(),
	ImageTrackerBaseBehaviour_t4017183443::get_offset_of_imageTargetBaseBehaviours_6(),
	ImageTrackerBaseBehaviour_t4017183443::get_offset_of_imageTargetBaseBehaviours_loadqueue_7(),
	ImageTrackerBaseBehaviour_t4017183443::get_offset_of__arStarted_8(),
	ImageTrackerBaseBehaviour_t4017183443::get_offset_of_cameraDevice_9(),
	ImageTrackerBaseBehaviour_t4017183443::get_offset_of_simultaneousNum_10(),
	ImageTrackerBaseBehaviour_t4017183443::get_offset_of_TargetLoad_11(),
	ImageTrackerBaseBehaviour_t4017183443::get_offset_of_TargetUnload_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1658 = { sizeof (ObjectTargetBaseBehaviour_t958778738), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1658[14] = 
{
	ObjectTargetBaseBehaviour_t958778738::get_offset_of_Storage_8(),
	ObjectTargetBaseBehaviour_t958778738::get_offset_of_Path_9(),
	ObjectTargetBaseBehaviour_t958778738::get_offset_of_Name_10(),
	ObjectTargetBaseBehaviour_t958778738::get_offset_of_Scale_11(),
	ObjectTargetBaseBehaviour_t958778738::get_offset_of_ActiveTargetOnStart_12(),
	ObjectTargetBaseBehaviour_t958778738::get_offset_of_Target_13(),
	ObjectTargetBaseBehaviour_t958778738::get_offset_of_loaders_14(),
	ObjectTargetBaseBehaviour_t958778738::get_offset_of_trackerBaseBehaviour_15(),
	ObjectTargetBaseBehaviour_t958778738::get_offset_of_trackerBaseBehaviourHasSet_16(),
	ObjectTargetBaseBehaviour_t958778738::get_offset_of_preScale_17(),
	ObjectTargetBaseBehaviour_t958778738::get_offset_of_preSize_18(),
	ObjectTargetBaseBehaviour_t958778738::get_offset_of_alreadysetup_19(),
	ObjectTargetBaseBehaviour_t958778738::get_offset_of_TargetLoad_20(),
	ObjectTargetBaseBehaviour_t958778738::get_offset_of_TargetUnload_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1659 = { sizeof (ObjectTrackerBaseBehaviour_t2290032151), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1659[8] = 
{
	ObjectTrackerBaseBehaviour_t2290032151::get_offset_of_Tracker_5(),
	ObjectTrackerBaseBehaviour_t2290032151::get_offset_of_imageTargetBaseBehaviours_6(),
	ObjectTrackerBaseBehaviour_t2290032151::get_offset_of_imageTargetBaseBehaviours_loadqueue_7(),
	ObjectTrackerBaseBehaviour_t2290032151::get_offset_of__arStarted_8(),
	ObjectTrackerBaseBehaviour_t2290032151::get_offset_of_cameraDevice_9(),
	ObjectTrackerBaseBehaviour_t2290032151::get_offset_of_simultaneousNum_10(),
	ObjectTrackerBaseBehaviour_t2290032151::get_offset_of_TargetLoad_11(),
	ObjectTrackerBaseBehaviour_t2290032151::get_offset_of_TargetUnload_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1660 = { sizeof (QRCodeScannerBaseBehaviour_t4251360290), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1660[2] = 
{
	QRCodeScannerBaseBehaviour_t4251360290::get_offset_of_BarCodeScanner_5(),
	QRCodeScannerBaseBehaviour_t4251360290::get_offset_of_cameraDevice_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1661 = { sizeof (RealityPlaneBaseBehaviour_t2966538638), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1661[6] = 
{
	RealityPlaneBaseBehaviour_t2966538638::get_offset_of_meshGenerator_2(),
	RealityPlaneBaseBehaviour_t2966538638::get_offset_of_rotation_3(),
	RealityPlaneBaseBehaviour_t2966538638::get_offset_of__scale_4(),
	RealityPlaneBaseBehaviour_t2966538638::get_offset_of_initRotation_5(),
	RealityPlaneBaseBehaviour_t2966538638::get_offset_of_hFlip_6(),
	RealityPlaneBaseBehaviour_t2966538638::get_offset_of_isTextureSet_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1662 = { sizeof (RecorderBaseBehaviour_t946255784), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1662[18] = 
{
	RecorderBaseBehaviour_t946255784::get_offset_of_RequestPlatformPermission_2(),
	RecorderBaseBehaviour_t946255784::get_offset_of_Profile_3(),
	RecorderBaseBehaviour_t946255784::get_offset_of_Mode_4(),
	RecorderBaseBehaviour_t946255784::get_offset_of_recorder_5(),
	RecorderBaseBehaviour_t946255784::get_offset_of__notify_6(),
	RecorderBaseBehaviour_t946255784::get_offset_of__width_7(),
	RecorderBaseBehaviour_t946255784::get_offset_of__height_8(),
	RecorderBaseBehaviour_t946255784::get_offset_of__texId_9(),
	RecorderBaseBehaviour_t946255784::get_offset_of__recording_10(),
	RecorderBaseBehaviour_t946255784::get_offset_of_started_11(),
	RecorderBaseBehaviour_t946255784::get_offset_of_coroutine_12(),
	RecorderBaseBehaviour_t946255784::get_offset_of__coroutine_texture_13(),
	RecorderBaseBehaviour_t946255784::get_offset_of_validate_14(),
	RecorderBaseBehaviour_t946255784::get_offset_of_granted_15(),
	RecorderBaseBehaviour_t946255784::get_offset_of_coroutineStarted__16(),
	RecorderBaseBehaviour_t946255784::get_offset_of_FrameUpdate_17(),
	RecorderBaseBehaviour_t946255784::get_offset_of_StatusUpdate_18(),
	RecorderBaseBehaviour_t946255784::get_offset_of_U3COutputFileU3Ek__BackingField_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1663 = { sizeof (Status_t3150688544)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1663[8] = 
{
	Status_t3150688544::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1664 = { sizeof (RecorderProfile_t1331472989)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1664[11] = 
{
	RecorderProfile_t1331472989::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1665 = { sizeof (RecorderZoomMode_t80546400)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1665[3] = 
{
	RecorderZoomMode_t80546400::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1666 = { sizeof (BaseNotify_t2598052438), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1666[1] = 
{
	BaseNotify_t2598052438::get_offset_of__parent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1667 = { sizeof (U3CStartAfterGrantedU3Ec__Iterator2_t2343579522), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1667[3] = 
{
	U3CStartAfterGrantedU3Ec__Iterator2_t2343579522::get_offset_of_U24PC_0(),
	U3CStartAfterGrantedU3Ec__Iterator2_t2343579522::get_offset_of_U24current_1(),
	U3CStartAfterGrantedU3Ec__Iterator2_t2343579522::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1668 = { sizeof (RenderCameraBaseBehaviour_t1129024871), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1668[11] = 
{
	RenderCameraBaseBehaviour_t1129024871::get_offset_of_RenderCamera_2(),
	RenderCameraBaseBehaviour_t1129024871::get_offset_of__projection_3(),
	RenderCameraBaseBehaviour_t1129024871::get_offset_of__camSize_4(),
	RenderCameraBaseBehaviour_t1129024871::get_offset_of__screenSize_5(),
	RenderCameraBaseBehaviour_t1129024871::get_offset_of__device_6(),
	RenderCameraBaseBehaviour_t1129024871::get_offset_of_rotation_7(),
	RenderCameraBaseBehaviour_t1129024871::get_offset_of_hFlip_8(),
	RenderCameraBaseBehaviour_t1129024871::get_offset_of_hFlipChanged_9(),
	RenderCameraBaseBehaviour_t1129024871::get_offset_of_clipPlanes_10(),
	RenderCameraBaseBehaviour_t1129024871::get_offset_of_deviceBehaviour_11(),
	RenderCameraBaseBehaviour_t1129024871::get_offset_of_augmenterBaseBehaviour_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1669 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1670 = { sizeof (TargetAbstractBehaviour_t1292968490), -1, sizeof(TargetAbstractBehaviour_t1292968490_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1670[6] = 
{
	TargetAbstractBehaviour_t1292968490_StaticFields::get_offset_of_allTargetBehaviours_2(),
	TargetAbstractBehaviour_t1292968490::get_offset_of_registeredID_3(),
	TargetAbstractBehaviour_t1292968490::get_offset_of_isFound_4(),
	TargetAbstractBehaviour_t1292968490::get_offset_of_gameObjectActiveControl_5(),
	TargetAbstractBehaviour_t1292968490::get_offset_of_TargetFound_6(),
	TargetAbstractBehaviour_t1292968490::get_offset_of_TargetLost_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1671 = { sizeof (VideoPlayerBaseBehaviour_t3469208080), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1671[18] = 
{
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_Path_2(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_Storage_3(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_Type_4(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_VideoScaleMode_5(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_VideoScalePlane_6(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_VideoScaleFactorBase_7(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_EnableAutoPlay_8(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_EnableLoop_9(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_OpenWhenStart_10(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_DisplayTextMessage_11(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_VideoPlayer_12(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_targetSize_13(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_targetBehaviour_14(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_isPlaying_15(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_needScale_16(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_VideoReadyEvent_17(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_VideoReachEndEvent_18(),
	VideoPlayerBaseBehaviour_t3469208080::get_offset_of_VideoErrorEvent_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1672 = { sizeof (VideoType_t3309001893)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1672[4] = 
{
	VideoType_t3309001893::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1673 = { sizeof (ScaleMode_t2324043923)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1673[6] = 
{
	ScaleMode_t2324043923::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1674 = { sizeof (ScalePlane_t2741606492)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1674[7] = 
{
	ScalePlane_t2741606492::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1675 = { sizeof (MeshGenerator_t775006378), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1675[8] = 
{
	MeshGenerator_t775006378::get_offset_of_meshXNum_0(),
	MeshGenerator_t775006378::get_offset_of_meshYNum_1(),
	MeshGenerator_t775006378::get_offset_of_vertices_2(),
	MeshGenerator_t775006378::get_offset_of_uvs_3(),
	MeshGenerator_t775006378::get_offset_of_triangles_4(),
	MeshGenerator_t775006378::get_offset_of_imageWidth_5(),
	MeshGenerator_t775006378::get_offset_of_imageHeight_6(),
	MeshGenerator_t775006378::get_offset_of_invertY_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1676 = { sizeof (U3CModuleU3E_t3783534220), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1677 = { sizeof (SharpZipBaseException_t4116900137), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1678 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1679 = { sizeof (Adler32_t1759601101), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1679[1] = 
{
	Adler32_t1759601101::get_offset_of_checksum_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1680 = { sizeof (Crc32_t3420759743), -1, sizeof(Crc32_t3420759743_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1680[2] = 
{
	Crc32_t3420759743_StaticFields::get_offset_of_CrcTable_0(),
	Crc32_t3420759743::get_offset_of_crc_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1681 = { sizeof (PkzipClassic_t1612326202), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1682 = { sizeof (PkzipClassicCryptoBase_t4134149114), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1682[1] = 
{
	PkzipClassicCryptoBase_t4134149114::get_offset_of_keys_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1683 = { sizeof (PkzipClassicEncryptCryptoTransform_t13679930), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1684 = { sizeof (PkzipClassicDecryptCryptoTransform_t1369162510), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1685 = { sizeof (PkzipClassicManaged_t4138271613), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1685[1] = 
{
	PkzipClassicManaged_t4138271613::get_offset_of_key__10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1686 = { sizeof (ZipAESTransform_t2148616552), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1686[9] = 
{
	ZipAESTransform_t2148616552::get_offset_of__blockSize_0(),
	ZipAESTransform_t2148616552::get_offset_of__encryptor_1(),
	ZipAESTransform_t2148616552::get_offset_of__counterNonce_2(),
	ZipAESTransform_t2148616552::get_offset_of__encryptBuffer_3(),
	ZipAESTransform_t2148616552::get_offset_of__encrPos_4(),
	ZipAESTransform_t2148616552::get_offset_of__pwdVerifier_5(),
	ZipAESTransform_t2148616552::get_offset_of__hmacsha1_6(),
	ZipAESTransform_t2148616552::get_offset_of__finalised_7(),
	ZipAESTransform_t2148616552::get_offset_of__writeMode_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1687 = { sizeof (InflaterInputStream_t663799889), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1687[6] = 
{
	InflaterInputStream_t663799889::get_offset_of_inf_1(),
	InflaterInputStream_t663799889::get_offset_of_inputBuffer_2(),
	InflaterInputStream_t663799889::get_offset_of_baseInputStream_3(),
	InflaterInputStream_t663799889::get_offset_of_csize_4(),
	InflaterInputStream_t663799889::get_offset_of_isClosed_5(),
	InflaterInputStream_t663799889::get_offset_of_isStreamOwner_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1688 = { sizeof (DeflaterOutputStream_t504213360), -1, sizeof(DeflaterOutputStream_t504213360_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1688[9] = 
{
	DeflaterOutputStream_t504213360::get_offset_of_password_1(),
	DeflaterOutputStream_t504213360::get_offset_of_cryptoTransform__2(),
	DeflaterOutputStream_t504213360::get_offset_of_AESAuthCode_3(),
	DeflaterOutputStream_t504213360::get_offset_of_buffer__4(),
	DeflaterOutputStream_t504213360::get_offset_of_deflater__5(),
	DeflaterOutputStream_t504213360::get_offset_of_baseOutputStream__6(),
	DeflaterOutputStream_t504213360::get_offset_of_isClosed__7(),
	DeflaterOutputStream_t504213360::get_offset_of_isStreamOwner__8(),
	DeflaterOutputStream_t504213360_StaticFields::get_offset_of__aesRnd_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1689 = { sizeof (InflaterInputBuffer_t3211561891), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1689[8] = 
{
	InflaterInputBuffer_t3211561891::get_offset_of_rawLength_0(),
	InflaterInputBuffer_t3211561891::get_offset_of_rawData_1(),
	InflaterInputBuffer_t3211561891::get_offset_of_clearTextLength_2(),
	InflaterInputBuffer_t3211561891::get_offset_of_clearText_3(),
	InflaterInputBuffer_t3211561891::get_offset_of_internalClearText_4(),
	InflaterInputBuffer_t3211561891::get_offset_of_available_5(),
	InflaterInputBuffer_t3211561891::get_offset_of_cryptoTransform_6(),
	InflaterInputBuffer_t3211561891::get_offset_of_inputStream_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1690 = { sizeof (OutputWindow_t824811027), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1690[3] = 
{
	OutputWindow_t824811027::get_offset_of_window_0(),
	OutputWindow_t824811027::get_offset_of_windowEnd_1(),
	OutputWindow_t824811027::get_offset_of_windowFilled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1691 = { sizeof (StreamManipulator_t1922289728), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1691[5] = 
{
	StreamManipulator_t1922289728::get_offset_of_window__0(),
	StreamManipulator_t1922289728::get_offset_of_windowStart__1(),
	StreamManipulator_t1922289728::get_offset_of_windowEnd__2(),
	StreamManipulator_t1922289728::get_offset_of_buffer__3(),
	StreamManipulator_t1922289728::get_offset_of_bitsInBuffer__4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1692 = { sizeof (Deflater_t1011217589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1692[6] = 
{
	Deflater_t1011217589::get_offset_of_level_0(),
	Deflater_t1011217589::get_offset_of_noZlibHeaderOrFooter_1(),
	Deflater_t1011217589::get_offset_of_state_2(),
	Deflater_t1011217589::get_offset_of_totalOut_3(),
	Deflater_t1011217589::get_offset_of_pending_4(),
	Deflater_t1011217589::get_offset_of_engine_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1693 = { sizeof (DeflaterConstants_t2687135006), -1, sizeof(DeflaterConstants_t2687135006_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1693[6] = 
{
	DeflaterConstants_t2687135006_StaticFields::get_offset_of_MAX_BLOCK_SIZE_0(),
	DeflaterConstants_t2687135006_StaticFields::get_offset_of_GOOD_LENGTH_1(),
	DeflaterConstants_t2687135006_StaticFields::get_offset_of_MAX_LAZY_2(),
	DeflaterConstants_t2687135006_StaticFields::get_offset_of_NICE_LENGTH_3(),
	DeflaterConstants_t2687135006_StaticFields::get_offset_of_MAX_CHAIN_4(),
	DeflaterConstants_t2687135006_StaticFields::get_offset_of_COMPR_FUNC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1694 = { sizeof (DeflateStrategy_t2279466364)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1694[4] = 
{
	DeflateStrategy_t2279466364::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1695 = { sizeof (DeflaterEngine_t3651656047), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1695[23] = 
{
	DeflaterEngine_t3651656047::get_offset_of_ins_h_6(),
	DeflaterEngine_t3651656047::get_offset_of_head_7(),
	DeflaterEngine_t3651656047::get_offset_of_prev_8(),
	DeflaterEngine_t3651656047::get_offset_of_matchStart_9(),
	DeflaterEngine_t3651656047::get_offset_of_matchLen_10(),
	DeflaterEngine_t3651656047::get_offset_of_prevAvailable_11(),
	DeflaterEngine_t3651656047::get_offset_of_blockStart_12(),
	DeflaterEngine_t3651656047::get_offset_of_strstart_13(),
	DeflaterEngine_t3651656047::get_offset_of_lookahead_14(),
	DeflaterEngine_t3651656047::get_offset_of_window_15(),
	DeflaterEngine_t3651656047::get_offset_of_strategy_16(),
	DeflaterEngine_t3651656047::get_offset_of_max_chain_17(),
	DeflaterEngine_t3651656047::get_offset_of_max_lazy_18(),
	DeflaterEngine_t3651656047::get_offset_of_niceLength_19(),
	DeflaterEngine_t3651656047::get_offset_of_goodLength_20(),
	DeflaterEngine_t3651656047::get_offset_of_compressionFunction_21(),
	DeflaterEngine_t3651656047::get_offset_of_inputBuf_22(),
	DeflaterEngine_t3651656047::get_offset_of_totalIn_23(),
	DeflaterEngine_t3651656047::get_offset_of_inputOff_24(),
	DeflaterEngine_t3651656047::get_offset_of_inputEnd_25(),
	DeflaterEngine_t3651656047::get_offset_of_pending_26(),
	DeflaterEngine_t3651656047::get_offset_of_huffman_27(),
	DeflaterEngine_t3651656047::get_offset_of_adler_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1696 = { sizeof (DeflaterHuffman_t343008798), -1, sizeof(DeflaterHuffman_t343008798_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1696[14] = 
{
	DeflaterHuffman_t343008798_StaticFields::get_offset_of_BL_ORDER_0(),
	DeflaterHuffman_t343008798_StaticFields::get_offset_of_bit4Reverse_1(),
	DeflaterHuffman_t343008798_StaticFields::get_offset_of_staticLCodes_2(),
	DeflaterHuffman_t343008798_StaticFields::get_offset_of_staticLLength_3(),
	DeflaterHuffman_t343008798_StaticFields::get_offset_of_staticDCodes_4(),
	DeflaterHuffman_t343008798_StaticFields::get_offset_of_staticDLength_5(),
	DeflaterHuffman_t343008798::get_offset_of_pending_6(),
	DeflaterHuffman_t343008798::get_offset_of_literalTree_7(),
	DeflaterHuffman_t343008798::get_offset_of_distTree_8(),
	DeflaterHuffman_t343008798::get_offset_of_blTree_9(),
	DeflaterHuffman_t343008798::get_offset_of_d_buf_10(),
	DeflaterHuffman_t343008798::get_offset_of_l_buf_11(),
	DeflaterHuffman_t343008798::get_offset_of_last_lit_12(),
	DeflaterHuffman_t343008798::get_offset_of_extra_bits_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1697 = { sizeof (Tree_t462950507), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1697[8] = 
{
	Tree_t462950507::get_offset_of_freqs_0(),
	Tree_t462950507::get_offset_of_length_1(),
	Tree_t462950507::get_offset_of_minNumCodes_2(),
	Tree_t462950507::get_offset_of_numCodes_3(),
	Tree_t462950507::get_offset_of_codes_4(),
	Tree_t462950507::get_offset_of_bl_counts_5(),
	Tree_t462950507::get_offset_of_maxLength_6(),
	Tree_t462950507::get_offset_of_dh_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1698 = { sizeof (PendingBuffer_t545820551), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1698[5] = 
{
	PendingBuffer_t545820551::get_offset_of_buffer__0(),
	PendingBuffer_t545820551::get_offset_of_start_1(),
	PendingBuffer_t545820551::get_offset_of_end_2(),
	PendingBuffer_t545820551::get_offset_of_bits_3(),
	PendingBuffer_t545820551::get_offset_of_bitCount_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1699 = { sizeof (DeflaterPending_t558046012), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
