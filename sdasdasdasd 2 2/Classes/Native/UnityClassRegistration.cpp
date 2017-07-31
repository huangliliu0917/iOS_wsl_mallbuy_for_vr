template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_Input();
	RegisterModule_Input();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; 
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; template <> void RegisterClass<NetworkView>();
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; 
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; 
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; 
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; 
class SpriteRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterClass<TextRenderingPrivate::TextMesh>();
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; template <> void RegisterClass<AssetBundle>();
class AssetBundleManifest; template <> void RegisterClass<AssetBundleManifest>();
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; template <> void RegisterClass<CGProgram>();
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; 
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 75 non stripped classes
	//0. AssetBundle
	RegisterClass<AssetBundle>();
	//1. NamedObject
	RegisterClass<NamedObject>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. AssetBundleManifest
	RegisterClass<AssetBundleManifest>();
	//4. Behaviour
	RegisterClass<Behaviour>();
	//5. Unity::Component
	RegisterClass<Unity::Component>();
	//6. Camera
	RegisterClass<Camera>();
	//7. GameObject
	RegisterClass<GameObject>();
	//8. QualitySettings
	RegisterClass<QualitySettings>();
	//9. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//10. GameManager
	RegisterClass<GameManager>();
	//11. MeshFilter
	RegisterClass<MeshFilter>();
	//12. Renderer
	RegisterClass<Renderer>();
	//13. GUILayer
	RegisterClass<GUILayer>();
	//14. Mesh
	RegisterClass<Mesh>();
	//15. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//16. NetworkView
	RegisterClass<NetworkView>();
	//17. Shader
	RegisterClass<Shader>();
	//18. Material
	RegisterClass<Material>();
	//19. Sprite
	RegisterClass<Sprite>();
	//20. Texture
	RegisterClass<Texture>();
	//21. Texture2D
	RegisterClass<Texture2D>();
	//22. RenderTexture
	RegisterClass<RenderTexture>();
	//23. Transform
	RegisterClass<Transform>();
	//24. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//25. Rigidbody
	RegisterClass<Rigidbody>();
	//26. Collider
	RegisterClass<Collider>();
	//27. AudioClip
	RegisterClass<AudioClip>();
	//28. SampleClip
	RegisterClass<SampleClip>();
	//29. AudioSource
	RegisterClass<AudioSource>();
	//30. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//31. Animation
	RegisterClass<Animation>();
	//32. Animator
	RegisterClass<Animator>();
	//33. TextRenderingPrivate::TextMesh
	RegisterClass<TextRenderingPrivate::TextMesh>();
	//34. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//35. UI::Canvas
	RegisterClass<UI::Canvas>();
	//36. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//37. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//38. MeshRenderer
	RegisterClass<MeshRenderer>();
	//39. PreloadData
	RegisterClass<PreloadData>();
	//40. Cubemap
	RegisterClass<Cubemap>();
	//41. Texture3D
	RegisterClass<Texture3D>();
	//42. Texture2DArray
	RegisterClass<Texture2DArray>();
	//43. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//44. TimeManager
	RegisterClass<TimeManager>();
	//45. AudioManager
	RegisterClass<AudioManager>();
	//46. InputManager
	RegisterClass<InputManager>();
	//47. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//48. TextAsset
	RegisterClass<TextAsset>();
	//49. PhysicsManager
	RegisterClass<PhysicsManager>();
	//50. TagManager
	RegisterClass<TagManager>();
	//51. ScriptMapper
	RegisterClass<ScriptMapper>();
	//52. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//53. MonoScript
	RegisterClass<MonoScript>();
	//54. MonoManager
	RegisterClass<MonoManager>();
	//55. PlayerSettings
	RegisterClass<PlayerSettings>();
	//56. BuildSettings
	RegisterClass<BuildSettings>();
	//57. ResourceManager
	RegisterClass<ResourceManager>();
	//58. NetworkManager
	RegisterClass<NetworkManager>();
	//59. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//60. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//61. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//62. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//63. LevelGameManager
	RegisterClass<LevelGameManager>();
	//64. AnimationClip
	RegisterClass<AnimationClip>();
	//65. Motion
	RegisterClass<Motion>();
	//66. AudioListener
	RegisterClass<AudioListener>();
	//67. AnimatorController
	RegisterClass<AnimatorController>();
	//68. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//69. RenderSettings
	RegisterClass<RenderSettings>();
	//70. Light
	RegisterClass<Light>();
	//71. CGProgram
	RegisterClass<CGProgram>();
	//72. FlareLayer
	RegisterClass<FlareLayer>();
	//73. LightmapSettings
	RegisterClass<LightmapSettings>();
	//74. LightProbes
	RegisterClass<LightProbes>();

}
