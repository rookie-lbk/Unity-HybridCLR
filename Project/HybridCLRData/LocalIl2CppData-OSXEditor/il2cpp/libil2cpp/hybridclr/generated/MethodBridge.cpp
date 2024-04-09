#include <codegen/il2cpp-codegen-metadata.h>
#include "vm/ClassInlines.h"
#include "vm/Object.h"
#include "vm/Class.h"

#include "../metadata/MetadataModule.h"
#include "../metadata/MetadataUtil.h"

#include "../interpreter/MethodBridge.h"
#include "../interpreter/Interpreter.h"
#include "../interpreter/MemoryUtil.h"
#include "../interpreter/InstrinctDef.h"

using namespace hybridclr::interpreter;

//!!!{{CODE
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct __struct_0__ {
	uintptr_t __0; // key
	uintptr_t __1; // value
};
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord
struct __struct_1__ {
	int32_t __0; // tileX
	int32_t __1; // tileZ
};
// System.Resources.ResourceLocator
struct __struct_2__ {
	uintptr_t __0; // _value
	int32_t __1; // _dataPos
};
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct __struct_3__ {
	int32_t __0; // key
	uintptr_t __1; // value
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Resources.ResourceLocator>
struct __struct_5__ {
	uintptr_t __0; // key
	__struct_2__ __1; // value
};
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct __struct_6__ {
	__struct_1__ __0; // key
	uintptr_t __1; // value
};
// System.DateTime
struct __struct_15__ {
	uint64_t __0; // dateData
};
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>
struct __struct_7__ {
	__struct_15__ __0; // key
	uintptr_t __1; // value
};
// System.Nullable`1<System.Object>
struct __struct_8__ {
	uintptr_t __0; // value
	uint8_t __1; // has_value
};
// UnityEngine.UnitySynchronizationContext/WorkRequest
struct __struct_10__ {
	uintptr_t __0; // m_DelagateCallback
	uintptr_t __1; // m_DelagateState
	uintptr_t __2; // m_WaitHandle
};
// System.ConsoleKeyInfo
struct __struct_13__ {
	uint16_t __0; // _keyChar
	int32_t __1; // _key
	int32_t __2; // _mods
};
// System.Decimal
struct __struct_14__ {
	int32_t __0; // flags
	int32_t __1; // hi
	int32_t __2; // lo
	int32_t __3; // mid
};
// System.Guid
struct __struct_16__ {
	int32_t __0; // _a
	int16_t __1; // _b
	int16_t __2; // _c
	uint8_t __3; // _d
	uint8_t __4; // _e
	uint8_t __5; // _f
	uint8_t __6; // _g
	uint8_t __7; // _h
	uint8_t __8; // _i
	uint8_t __9; // _j
	uint8_t __10; // _k
};
// System.TimeSpan
struct __struct_18__ {
	int64_t __0; // _ticks
};
// System.TimeZoneInfo/TransitionTime
struct __struct_19__ {
	__struct_15__ __0; // m_timeOfDay
	uint8_t __1; // m_month
	uint8_t __2; // m_week
	uint8_t __3; // m_day
	int32_t __4; // m_dayOfWeek
	uint8_t __5; // m_isFixedDateRule
};
// Unity.Collections.NativeArray`1<System.Object>
struct __struct_20__ {
	uintptr_t __0; // m_Buffer
	int32_t __1; // m_Length
	int32_t __2; // m_AllocatorLabel
};
// UnityEngine.Vector3
struct __struct_54__ {
	float __0; // x
	float __1; // y
	float __2; // z
};
// UnityEngine.Bounds
struct __struct_32__ {
	__struct_54__ __0; // m_Center
	__struct_54__ __1; // m_Extents
};
// UnityEngine.Color
struct __struct_33__ {
	float __0; // r
	float __1; // g
	float __2; // b
	float __3; // a
};
// UnityEngine.Matrix4x4
struct __struct_38__ {
	float __0; // m00
	float __1; // m10
	float __2; // m20
	float __3; // m30
	float __4; // m01
	float __5; // m11
	float __6; // m21
	float __7; // m31
	float __8; // m02
	float __9; // m12
	float __10; // m22
	float __11; // m32
	float __12; // m03
	float __13; // m13
	float __14; // m23
	float __15; // m33
};
// UnityEngine.PhysicsScene2D
struct __struct_39__ {
	int32_t __0; // m_Handle
};
// UnityEngine.Playables.PlayableHandle
struct __struct_41__ {
	intptr_t __0; // m_Handle
	uint32_t __1; // m_Version
};
// UnityEngine.Rendering.LODParameters
struct __struct_48__ {
	int32_t __0; // m_IsOrthographic
	__struct_54__ __1; // m_CameraPosition
	float __2; // m_FieldOfView
	float __3; // m_OrthoSize
	int32_t __4; // m_CameraPixelHeight
};
// UnityEngine.Rendering.RenderTargetIdentifier
struct __struct_49__ {
	int32_t __0; // m_Type
	int32_t __1; // m_NameID
	int32_t __2; // m_InstanceID
	intptr_t __3; // m_BufferPointer
	int32_t __4; // m_MipLevel
	int32_t __5; // m_CubeFace
	int32_t __6; // m_DepthSlice
};
// UnityEngine.Rendering.ScriptableRenderContext
struct __struct_50__ {
	intptr_t __0; // m_Ptr
};
// UnityEngine.Vector2
struct __struct_52__ {
	float __0; // x
	float __1; // y
};
// UnityEngine.Vector3Int
struct __struct_53__ {
	int32_t __0; // m_X
	int32_t __1; // m_Y
	int32_t __2; // m_Z
};
// UnityEngine.XR.Bone
struct __struct_56__ {
	uint64_t __0; // m_DeviceId
	uint32_t __1; // m_FeatureIndex
};
// UnityEngine.XR.InputDevice
struct __struct_59__ {
	uint64_t __0; // m_DeviceId
	uint8_t __1; // m_Initialized
};
// UnityEngine.XR.InputFeatureUsage
struct __struct_60__ {
	uintptr_t __0; // m_Name
	uint32_t __1; // m_InternalType
};
// UnityEngine.XR.MeshId
struct __struct_62__ {
	uint64_t __0; // m_SubId1
	uint64_t __1; // m_SubId2
};
// UnityEngine.XR.MeshGenerationResult
struct __struct_61__ {
	__struct_62__ __0; // <MeshId>k__BackingField
	uintptr_t __1; // <Mesh>k__BackingField
	uintptr_t __2; // <MeshCollider>k__BackingField
	int32_t __3; // <Status>k__BackingField
	int32_t __4; // <Attributes>k__BackingField
};
// System.Nullable`1<System.Byte>
struct __struct_63__ {
	uint8_t __0; // value
	uint8_t __1; // has_value
};
// System.Nullable`1<System.Int32>
struct __struct_64__ {
	int32_t __0; // value
	uint8_t __1; // has_value
};
// System.Threading.CancellationToken
struct __struct_66__ {
	uintptr_t __0; // m_source
};
// System.Threading.Tasks.VoidTaskResult
union __struct_67__ {
	struct { char __fieldSize_offsetPadding[1];};
	struct {
	};
};
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct __struct_72__ {
	uintptr_t __0; // dictionary
	int32_t __1; // version
	int32_t __2; // index
	__struct_3__ __3; // current
	int32_t __4; // getEnumeratorRetType
};
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct __struct_73__ {
	uintptr_t __0; // dictionary
	int32_t __1; // version
	int32_t __2; // index
	__struct_2__ __3; // current
	int32_t __4; // getEnumeratorRetType
};
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct __struct_74__ {
	uintptr_t __0; // dictionary
	int32_t __1; // version
	int32_t __2; // index
	__struct_0__ __3; // current
	int32_t __4; // getEnumeratorRetType
};
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Resources.ResourceLocator>
struct __struct_75__ {
	uintptr_t __0; // dictionary
	int32_t __1; // version
	int32_t __2; // index
	__struct_5__ __3; // current
	int32_t __4; // getEnumeratorRetType
};
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct __struct_76__ {
	uintptr_t __0; // dictionary
	int32_t __1; // version
	int32_t __2; // index
	__struct_6__ __3; // current
	int32_t __4; // getEnumeratorRetType
};
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Object>
struct __struct_77__ {
	uintptr_t __0; // dictionary
	int32_t __1; // index
	int32_t __2; // version
	int32_t __3; // currentKey
};
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>
struct __struct_78__ {
	uintptr_t __0; // dictionary
	int32_t __1; // index
	int32_t __2; // version
	uintptr_t __3; // currentKey
};
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct __struct_81__ {
	uintptr_t __0; // dictionary
	int32_t __1; // index
	int32_t __2; // version
	__struct_1__ __3; // currentKey
};
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Resources.ResourceLocator>
struct __struct_85__ {
	uintptr_t __0; // dictionary
	int32_t __1; // index
	int32_t __2; // version
	__struct_2__ __3; // currentValue
};
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
struct __struct_87__ {
	uintptr_t __0; // _list
	uintptr_t __1; // _node
	int32_t __2; // _version
	uintptr_t __3; // _current
	int32_t __4; // _index
};
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>
struct __struct_88__ {
	uintptr_t __0; // list
	int32_t __1; // index
	int32_t __2; // version
	__struct_7__ __3; // current
};
// System.Collections.Generic.List`1/Enumerator<UnityEngine.BeforeRenderHelper/OrderBlock>
struct __struct_91__ {
	uintptr_t __0; // list
	int32_t __1; // index
	int32_t __2; // version
	__struct_3__ __3; // current
};
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct __struct_92__ {
	uintptr_t __0; // list
	int32_t __1; // index
	int32_t __2; // version
	__struct_10__ __3; // current
};
// UnityEngine.XR.XRNodeState
struct __struct_94__ {
	int32_t __0; // m_Type
	int32_t __1; // m_AvailableFields
	__struct_54__ __2; // m_Position
	__struct_33__ __3; // m_Rotation
	__struct_54__ __4; // m_Velocity
	__struct_54__ __5; // m_AngularVelocity
	__struct_54__ __6; // m_Acceleration
	__struct_54__ __7; // m_AngularAcceleration
	int32_t __8; // m_Tracked
	uint64_t __9; // m_UniqueID
};
// UnityEngine.Profiling.Experimental.DebugScreenCapture
struct __struct_95__ {
	__struct_20__ __0; // <rawImageDataReference>k__BackingField
	int32_t __1; // <imageFormat>k__BackingField
	int32_t __2; // <width>k__BackingField
	int32_t __3; // <height>k__BackingField
};
// UnityEngine.CullingGroupEvent
struct __struct_97__ {
	int32_t __0; // m_Index
	uint8_t __1; // m_PrevState
	uint8_t __2; // m_ThisState
};
// UnityEngine.Rendering.BatchCullingContext
struct __struct_100__ {
	__struct_20__ __0; // cullingPlanes
	__struct_20__ __1; // batchVisibility
	__struct_20__ __2; // visibleIndices
	__struct_20__ __3; // visibleIndicesY
	__struct_48__ __4; // lodParameters
	__struct_38__ __5; // cullingMatrix
	float __6; // nearPlane
};
// UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct __struct_101__ {
	int32_t __0; // confidence
	uintptr_t __1; // semanticMeanings
	uintptr_t __2; // text
	__struct_15__ __3; // phraseStartTime
	__struct_18__ __4; // phraseDuration
};
// UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult
struct __struct_102__ {
	int32_t __0; // resultType
	int64_t __1; // hResult
};
// UnityEngine.ContactFilter2D
struct __struct_104__ {
	uint8_t __0; // useTriggers
	uint8_t __1; // useLayerMask
	uint8_t __2; // useDepth
	uint8_t __3; // useOutsideDepth
	uint8_t __4; // useNormalAngle
	uint8_t __5; // useOutsideNormalAngle
	__struct_39__ __6; // layerMask
	float __7; // minDepth
	float __8; // maxDepth
	float __9; // minNormalAngle
	float __10; // maxNormalAngle
};
// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct __struct_127__ {
	int32_t __0; // instanceID
	int32_t __1; // cookieID
	float __2; // cookieScale
	__struct_33__ __3; // color
	__struct_33__ __4; // indirectColor
	__struct_33__ __5; // orientation
	__struct_54__ __6; // position
	float __7; // range
	float __8; // coneAngle
	float __9; // innerConeAngle
	float __10; // shape0
	float __11; // shape1
	uint8_t __12; // type
	uint8_t __13; // mode
	uint8_t __14; // shadow
	uint8_t __15; // falloff
};
// UnityEngine.Color32
union __struct_129__ {
	#pragma pack(push, 1)
	struct {   int32_t __0;}; // rgba
	#pragma pack(pop)
	struct { int32_t __0_forAlignmentOnly;}; // rgba
	#pragma pack(push, 1)
	struct {   uint8_t __1;}; // r
	#pragma pack(pop)
	struct { uint8_t __1_forAlignmentOnly;}; // r
	#pragma pack(push, 1)
	struct { char __2_offsetPadding[1];  uint8_t __2;}; // g
	#pragma pack(pop)
	struct { uint8_t __2_forAlignmentOnly;}; // g
	#pragma pack(push, 1)
	struct { char __3_offsetPadding[2];  uint8_t __3;}; // b
	#pragma pack(pop)
	struct { uint8_t __3_forAlignmentOnly;}; // b
	#pragma pack(push, 1)
	struct { char __4_offsetPadding[3];  uint8_t __4;}; // a
	#pragma pack(pop)
	struct { uint8_t __4_forAlignmentOnly;}; // a
};
// UnityEngine.ParticleSystem/Particle
struct __struct_131__ {
	__struct_54__ __0; // m_Position
	__struct_54__ __1; // m_Velocity
	__struct_54__ __2; // m_AnimatedVelocity
	__struct_54__ __3; // m_InitialVelocity
	__struct_54__ __4; // m_AxisOfRotation
	__struct_54__ __5; // m_Rotation
	__struct_54__ __6; // m_AngularVelocity
	__struct_54__ __7; // m_StartSize
	__struct_129__ __8; // m_StartColor
	uint32_t __9; // m_RandomSeed
	uint32_t __10; // m_ParentRandomSeed
	float __11; // m_Lifetime
	float __12; // m_StartLifetime
	int32_t __13; // m_MeshIndex
	float __14; // m_EmitAccumulator0
	float __15; // m_EmitAccumulator1
	uint32_t __16; // m_Flags
};
// UnityEngine.ParticleSystem/EmitParams
struct __struct_130__ {
	__struct_131__ __0; // m_Particle
	uint8_t __1; // m_PositionSet
	uint8_t __2; // m_VelocitySet
	uint8_t __3; // m_AxisOfRotationSet
	uint8_t __4; // m_RotationSet
	uint8_t __5; // m_AngularVelocitySet
	uint8_t __6; // m_StartSizeSet
	uint8_t __7; // m_StartColorSet
	uint8_t __8; // m_RandomSeedSet
	uint8_t __9; // m_StartLifetimeSet
	uint8_t __10; // m_MeshIndexSet
	uint8_t __11; // m_ApplyShapeToPosition
};
// UnityEngine.Playables.FrameData
struct __struct_132__ {
	uint64_t __0; // m_FrameID
	double __1; // m_DeltaTime
	float __2; // m_Weight
	float __3; // m_EffectiveWeight
	double __4; // m_EffectiveParentDelay
	float __5; // m_EffectiveParentSpeed
	float __6; // m_EffectiveSpeed
	int32_t __7; // m_Flags
	__struct_41__ __8; // m_Output
};
// UnityEngine.RenderTextureDescriptor
struct __struct_134__ {
	int32_t __0; // <width>k__BackingField
	int32_t __1; // <height>k__BackingField
	int32_t __2; // <msaaSamples>k__BackingField
	int32_t __3; // <volumeDepth>k__BackingField
	int32_t __4; // <mipCount>k__BackingField
	int32_t __5; // _graphicsFormat
	int32_t __6; // <stencilFormat>k__BackingField
	int32_t __7; // _depthBufferBits
	int32_t __8; // <dimension>k__BackingField
	int32_t __9; // <shadowSamplingMode>k__BackingField
	int32_t __10; // <vrUsage>k__BackingField
	int32_t __11; // _flags
	int32_t __12; // <memoryless>k__BackingField
};
// UnityEngine.AnimatorStateInfo
struct __struct_135__ {
	int32_t __0; // m_Name
	int32_t __1; // m_Path
	int32_t __2; // m_FullPath
	float __3; // m_NormalizedTime
	float __4; // m_Length
	float __5; // m_Speed
	float __6; // m_SpeedMultiplier
	int32_t __7; // m_Tag
	int32_t __8; // m_Loop
};
// Unity.Jobs.JobHandle
struct __struct_141__ {
	intptr_t __0; // jobGroup
	int32_t __1; // version
};
// UnityEngine.LightBakingOutput
struct __struct_143__ {
	int32_t __0; // probeOcclusionLightIndex
	int32_t __1; // occlusionMaskChannel
	int32_t __2; // lightmapBakeType
	int32_t __3; // mixedLightingMode
	uint8_t __4; // isBaked
};
// UnityEngine.RaycastHit2D
struct __struct_144__ {
	__struct_52__ __0; // m_Centroid
	__struct_52__ __1; // m_Point
	__struct_52__ __2; // m_Normal
	float __3; // m_Distance
	float __4; // m_Fraction
	int32_t __5; // m_Collider
};
FullName2Signature hybridclr::interpreter::g_fullName2SignatureStub[] = {
	{"System.Collections.Generic.KeyValuePair`2<u,u>", "s0"},
	{"UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord", "s1"},
	{"System.Resources.ResourceLocator", "s2"},
	{"System.Collections.Generic.KeyValuePair`2<i4,u>", "s3"},
	{"System.Collections.Generic.KeyValuePair`2<u,i4>", "s2"},
	{"System.Collections.Generic.KeyValuePair`2<u,System.Resources.ResourceLocator>", "s5"},
	{"System.Collections.Generic.KeyValuePair`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,u>", "s6"},
	{"System.Collections.Generic.KeyValuePair`2<System.DateTime,u>", "s7"},
	{"System.Nullable`1<u>", "s8"},
	{"UnityEngine.BeforeRenderHelper/OrderBlock", "s3"},
	{"UnityEngine.UnitySynchronizationContext/WorkRequest", "s10"},
	{"System.Reflection.CustomAttributeNamedArgument", "s10"},
	{"System.Reflection.CustomAttributeTypedArgument", "s0"},
	{"System.ConsoleKeyInfo", "s13"},
	{"System.Decimal", "s14"},
	{"System.DateTime", "s15"},
	{"System.Guid", "s16"},
	{"System.Threading.CancellationTokenRegistration", "s5"},
	{"System.TimeSpan", "s18"},
	{"System.TimeZoneInfo/TransitionTime", "s19"},
	{"Unity.Collections.NativeArray`1<u>", "s20"},
	{"UnityEngine.Animations.AnimationClipPlayable", "s41"},
	{"UnityEngine.Animations.AnimationLayerMixerPlayable", "s41"},
	{"UnityEngine.Animations.AnimationMixerPlayable", "s41"},
	{"UnityEngine.Animations.AnimationMotionXToDeltaPlayable", "s41"},
	{"UnityEngine.Animations.AnimationOffsetPlayable", "s41"},
	{"UnityEngine.Animations.AnimationPosePlayable", "s41"},
	{"UnityEngine.Animations.AnimationRemoveScalePlayable", "s41"},
	{"UnityEngine.Animations.AnimationScriptPlayable", "s41"},
	{"UnityEngine.Animations.AnimatorControllerPlayable", "s41"},
	{"UnityEngine.Audio.AudioClipPlayable", "s41"},
	{"UnityEngine.Audio.AudioMixerPlayable", "s41"},
	{"UnityEngine.Bounds", "s32"},
	{"UnityEngine.Color", "s33"},
	{"UnityEngine.Experimental.Playables.CameraPlayable", "s41"},
	{"UnityEngine.Experimental.Playables.MaterialEffectPlayable", "s41"},
	{"UnityEngine.Experimental.Playables.TextureMixerPlayable", "s41"},
	{"UnityEngine.Experimental.Video.VideoClipPlayable", "s41"},
	{"UnityEngine.Matrix4x4", "s38"},
	{"UnityEngine.PhysicsScene2D", "s39"},
	{"UnityEngine.PhysicsScene", "s39"},
	{"UnityEngine.Playables.PlayableHandle", "s41"},
	{"UnityEngine.Playables.PlayableOutputHandle", "s41"},
	{"UnityEngine.Playables.PlayableOutput", "s41"},
	{"UnityEngine.Playables.Playable", "s41"},
	{"UnityEngine.Quaternion", "s33"},
	{"UnityEngine.RectInt", "s14"},
	{"UnityEngine.Rect", "s33"},
	{"UnityEngine.Rendering.LODParameters", "s48"},
	{"UnityEngine.Rendering.RenderTargetIdentifier", "s49"},
	{"UnityEngine.Rendering.ScriptableRenderContext", "s50"},
	{"UnityEngine.Rendering.ShaderTagId", "s39"},
	{"UnityEngine.Vector2", "s52"},
	{"UnityEngine.Vector3Int", "s53"},
	{"UnityEngine.Vector3", "s54"},
	{"UnityEngine.Vector4", "s33"},
	{"UnityEngine.XR.Bone", "s56"},
	{"UnityEngine.XR.Eyes", "s56"},
	{"UnityEngine.XR.Hand", "s56"},
	{"UnityEngine.XR.InputDevice", "s59"},
	{"UnityEngine.XR.InputFeatureUsage", "s60"},
	{"UnityEngine.XR.MeshGenerationResult", "s61"},
	{"UnityEngine.XR.MeshId", "s62"},
	{"System.Nullable`1<u1>", "s63"},
	{"System.Nullable`1<i4>", "s64"},
	{"System.Runtime.InteropServices.GCHandle", "s39"},
	{"System.Threading.CancellationToken", "s66"},
	{"System.Threading.Tasks.VoidTaskResult", "s67"},
	{"Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>", "s20"},
	{"UnityEngine.Ray", "s32"},
	{"UnityEngine.SendMouseEvents/HitInfo", "s0"},
	{"System.Collections.DictionaryEntry", "s0"},
	{"System.Collections.Generic.Dictionary`2/Enumerator<i4,u>", "s72"},
	{"System.Collections.Generic.Dictionary`2/Enumerator<u,i4>", "s73"},
	{"System.Collections.Generic.Dictionary`2/Enumerator<u,u>", "s74"},
	{"System.Collections.Generic.Dictionary`2/Enumerator<u,System.Resources.ResourceLocator>", "s75"},
	{"System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,u>", "s76"},
	{"System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<i4,u>", "s77"},
	{"System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<u,i4>", "s78"},
	{"System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<u,u>", "s78"},
	{"System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<u,System.Resources.ResourceLocator>", "s78"},
	{"System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,u>", "s81"},
	{"System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<i4,u>", "s78"},
	{"System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<u,i4>", "s77"},
	{"System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<u,u>", "s78"},
	{"System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<u,System.Resources.ResourceLocator>", "s85"},
	{"System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,u>", "s78"},
	{"System:System.Collections.Generic.LinkedList`1/Enumerator<u>", "s87"},
	{"System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.DateTime,u>>", "s88"},
	{"System.Collections.Generic.List`1/Enumerator<i4>", "s77"},
	{"System.Collections.Generic.List`1/Enumerator<u>", "s78"},
	{"System.Collections.Generic.List`1/Enumerator<UnityEngine.BeforeRenderHelper/OrderBlock>", "s91"},
	{"System.Collections.Generic.List`1/Enumerator<UnityEngine.UnitySynchronizationContext/WorkRequest>", "s92"},
	{"UnityEngine.VFX.VFXOutputEventArgs", "s3"},
	{"UnityEngine.XR.XRNodeState", "s94"},
	{"UnityEngine.Profiling.Experimental.DebugScreenCapture", "s95"},
	{"System.Runtime.Serialization.StreamingContext", "s2"},
	{"UnityEngine.CullingGroupEvent", "s97"},
	{"UnityEngine.SceneManagement.Scene", "s39"},
	{"UnityEngine.Playables.PlayableGraph", "s41"},
	{"UnityEngine.Rendering.BatchCullingContext", "s100"},
	{"UnityEngine.Windows.Speech.PhraseRecognizedEventArgs", "s101"},
	{"UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult", "s102"},
	{"UnityEngine.Windows.WebCam.VideoCapture/VideoCaptureResult", "s102"},
	{"UnityEngine.ContactFilter2D", "s104"},
	{"System.ParameterizedStrings/FormatParam", "s3"},
	{"System.RuntimeFieldHandle", "s50"},
	{"System.RuntimeTypeHandle", "s50"},
	{"System.RuntimeMethodHandle", "s50"},
	{"System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<u1>", "s10"},
	{"System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<u>", "s10"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<u1>", "s8"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<i4>", "s8"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<u>", "s8"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Threading.Tasks.VoidTaskResult>", "s8"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<u1>", "s8"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<i4>", "s8"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<u>", "s8"},
	{"System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Threading.Tasks.VoidTaskResult>", "s8"},
	{"System.Runtime.CompilerServices.TaskAwaiter`1<u1>", "s66"},
	{"System.Runtime.CompilerServices.TaskAwaiter`1<i4>", "s66"},
	{"System.Runtime.CompilerServices.TaskAwaiter`1<u>", "s66"},
	{"System.Runtime.CompilerServices.TaskAwaiter`1<System.Threading.Tasks.VoidTaskResult>", "s66"},
	{"System.Runtime.Remoting.Messaging.LogicalCallContext/Reader", "s66"},
	{"System.Runtime.Serialization.SerializationEntry", "s10"},
	{"System.Threading.SparselyPopulatedArrayAddInfo`1<u>", "s2"},
	{"System.RuntimeArgumentHandle", "s50"},
	{"UnityEngine.Experimental.GlobalIllumination.LightDataGI", "s127"},
	{"UnityEngine.LayerMask", "s39"},
	{"UnityEngine.Color32", "s129"},
	{"UnityEngine.ParticleSystem/EmitParams", "s130"},
	{"UnityEngine.ParticleSystem/Particle", "s131"},
	{"UnityEngine.Playables.FrameData", "s132"},
	{"Unity.Collections.NativeArray`1<u1>", "s20"},
	{"UnityEngine.RenderTextureDescriptor", "s134"},
	{"UnityEngine.AnimatorStateInfo", "s135"},
	{"Unity.Collections.NativeArray`1/Enumerator<u>", "s77"},
	{"Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Experimental.GlobalIllumination.LightDataGI>", "s77"},
	{"Unity.Collections.NativeArray`1<i4>", "s20"},
	{"Unity.Collections.NativeArray`1<UnityEngine.Plane>", "s20"},
	{"Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>", "s20"},
	{"Unity.Jobs.JobHandle", "s141"},
	{"UnityEngine.Experimental.GlobalIllumination.LinearColor", "s33"},
	{"UnityEngine.LightBakingOutput", "s143"},
	{"UnityEngine.RaycastHit2D", "s144"},
	{"UnityEngine.Yoga.YogaSize", "s52"},
	{ nullptr, nullptr},
};

static void __M2N_i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_i1i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i1r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1s14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(__struct_14__ __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i1ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i1uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i2i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i2r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2s14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(__struct_14__ __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i2ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i2ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i2uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i2uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_i4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4s14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_14__ __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4s32u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_32__ __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4s32ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_32__ __arg0, uintptr_t __arg1, float __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4s32ur4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_32__ __arg0, uintptr_t __arg1, float __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4s32ur4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_32__ __arg0, uintptr_t __arg1, float __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4s52s52s104u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_52__ __arg0, __struct_52__ __arg1, __struct_104__ __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_104__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4s52s52s104ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_52__ __arg0, __struct_52__ __arg1, __struct_104__ __arg2, uintptr_t __arg3, float __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_104__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4s54s54u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4s54s54ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, uintptr_t __arg2, float __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4s54s54ur4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, uintptr_t __arg2, float __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4s54s54ur4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, uintptr_t __arg2, float __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i4ui1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4ui2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4ui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4ui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4ui4i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4ui4i4s10u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, __struct_10__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4ui4i4s3u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, __struct_3__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4ui4i4s7u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, __struct_7__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4ui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4ui4i4u8u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uint64_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4ui4i4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4ui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4ui4ui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4ui4ui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4ui4ui4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4ui4ui4i4u1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_i4ui4ui4i4ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, uintptr_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_i4ui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, float __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4ur8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, double __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_1__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_1__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us10(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_10__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us10i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_10__ __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4us10s10(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_10__ __arg1, __struct_10__ __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4us14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_14__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us15(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_16__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_16__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us18u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_18__ __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4us2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_2__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_2__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us3(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us32r4ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_32__ __arg1, float __arg2, uintptr_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4us3i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_3__ __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4us3s3(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_3__ __arg1, __struct_3__ __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4us52s52r4s104u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_52__ __arg1, __struct_52__ __arg2, float __arg3, __struct_104__ __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_104__>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4us54s54ur4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_54__ __arg1, __struct_54__ __arg2, uintptr_t __arg3, float __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_i4us7(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us7i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_7__ __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4us7s7(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_7__ __arg1, __struct_7__ __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4us8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_8__ __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_8__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4us8s8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, __struct_8__ __arg1, __struct_8__ __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_8__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_8__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4uu2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4uu2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4uu2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4uu4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4uu8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i4uu8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4uui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4uui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4uui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uui4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uui4i4ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4uui4i4ui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_i4uui4i4ui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_i4uui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4uui4ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uui4ui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i4uus10i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_10__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uus1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_1__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_1__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uus2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_2__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_2__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uus3i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_3__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uus7i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_7__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uus8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_8__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_8__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4uuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i4uuu1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uuu1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4uuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i4uuui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_i4uuui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_i8i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8s14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(__struct_14__ __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_i8ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8ui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8ui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8ui8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8ui8i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_i8ui8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_i8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_i8uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_ii(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_ii4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_ii4ii(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(int32_t __arg0, intptr_t __arg1, intptr_t __arg2, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_ii8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_iii(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_iii4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_iiiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_iiuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_iiuuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(intptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_is39(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(__struct_39__ __arg0, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_39__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_iu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_iu1u1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uint8_t __arg0, uint8_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_iui(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_iui4i4i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_iuii(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, intptr_t __arg2, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_iuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_iuu2u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_iuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef intptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(intptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_r4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4s14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(__struct_14__ __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4s54(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(__struct_54__ __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r4ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, float __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r4ur4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r4uur4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, float __arg2, float __arg3, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_r4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r8i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, double __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r8s14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(__struct_14__ __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_r8ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r8ur8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uintptr_t __arg0, double __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r8ur8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uintptr_t __arg0, double __arg1, double __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_r8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_r8uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s0u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_0__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_0__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s0ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_0__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_0__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s10(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_10__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_10__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s10u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_10__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_10__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s10ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_10__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_10__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s127u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_127__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_127__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s127ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_127__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_127__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s13(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_13__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_13__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s134u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_134__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_134__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s13u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_13__ (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(__struct_13__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s13uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_13__ (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(__struct_13__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s141uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_141__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(__struct_141__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s141uus100(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_141__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_100__ __arg2, const MethodInfo* method);
    *(__struct_141__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_100__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s143u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_143__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_143__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s144s52s52(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_144__ (*NativeMethod)(__struct_52__ __arg0, __struct_52__ __arg1, const MethodInfo* method);
    *(__struct_144__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s144s52s52r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_144__ (*NativeMethod)(__struct_52__ __arg0, __struct_52__ __arg1, float __arg2, const MethodInfo* method);
    *(__struct_144__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s144s52s52r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_144__ (*NativeMethod)(__struct_52__ __arg0, __struct_52__ __arg1, float __arg2, int32_t __arg3, const MethodInfo* method);
    *(__struct_144__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_s144s52s52r4i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_144__ (*NativeMethod)(__struct_52__ __arg0, __struct_52__ __arg1, float __arg2, int32_t __arg3, float __arg4, const MethodInfo* method);
    *(__struct_144__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_s144s52s52r4i4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_144__ (*NativeMethod)(__struct_52__ __arg0, __struct_52__ __arg1, float __arg2, int32_t __arg3, float __arg4, float __arg5, const MethodInfo* method);
    *(__struct_144__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_s144us52s52r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_144__ (*NativeMethod)(uintptr_t __arg0, __struct_52__ __arg1, __struct_52__ __arg2, float __arg3, int32_t __arg4, const MethodInfo* method);
    *(__struct_144__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_s144us52s52r4s104(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_144__ (*NativeMethod)(uintptr_t __arg0, __struct_52__ __arg1, __struct_52__ __arg2, float __arg3, __struct_104__ __arg4, const MethodInfo* method);
    *(__struct_144__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_104__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_s14i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s14i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s14i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s14i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s14r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s14r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s14s14i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(__struct_14__ __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s14u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s14u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s14u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s14u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s14u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s14ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s14uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_14__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(__struct_14__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s15(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_15__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_15__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s15i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_15__ (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(__struct_15__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s15s15i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_15__ (*NativeMethod)(__struct_15__ __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_15__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s15s15s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_15__ (*NativeMethod)(__struct_15__ __arg0, __struct_18__ __arg1, const MethodInfo* method);
    *(__struct_15__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s15s15u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_15__ (*NativeMethod)(__struct_15__ __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(__struct_15__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s15s15uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_15__ (*NativeMethod)(__struct_15__ __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(__struct_15__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s15u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_15__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_15__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s15ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_15__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_15__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s15ui4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_15__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    *(__struct_15__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_s15ui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_15__ (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(__struct_15__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s15ur8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_15__ (*NativeMethod)(uintptr_t __arg0, double __arg1, const MethodInfo* method);
    *(__struct_15__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s15us18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_15__ (*NativeMethod)(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method);
    *(__struct_15__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s15uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_15__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(__struct_15__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_16__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_16__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s16u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_16__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_16__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s18i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18s15s15(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(__struct_15__ __arg0, __struct_15__ __arg1, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s18s18s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(__struct_18__ __arg0, __struct_18__ __arg1, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s18u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s18us15(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s18us18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s18uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_18__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(__struct_18__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s19s15i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_19__ (*NativeMethod)(__struct_15__ __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(__struct_19__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s19s15i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_19__ (*NativeMethod)(__struct_15__ __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(__struct_19__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_s19u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_19__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_19__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_1__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_1__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s20ui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_20__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(__struct_20__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s2u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_2__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_2__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s2uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_2__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(__struct_2__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s32us54(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_32__ (*NativeMethod)(uintptr_t __arg0, __struct_54__ __arg1, const MethodInfo* method);
    *(__struct_32__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s32us54i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_32__ (*NativeMethod)(uintptr_t __arg0, __struct_54__ __arg1, int32_t __arg2, const MethodInfo* method);
    *(__struct_32__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s33(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_33__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_33__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s33s33(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_33__ (*NativeMethod)(__struct_33__ __arg0, const MethodInfo* method);
    *(__struct_33__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s33s33r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_33__ (*NativeMethod)(__struct_33__ __arg0, float __arg1, const MethodInfo* method);
    *(__struct_33__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s33u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_33__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_33__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s33ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_33__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_33__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s38(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_38__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_38__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s38s54s33s54(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_38__ (*NativeMethod)(__struct_54__ __arg0, __struct_33__ __arg1, __struct_54__ __arg2, const MethodInfo* method);
    *(__struct_38__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s38u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_38__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_38__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s39(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_39__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_39__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s39i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_39__ (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(__struct_39__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s39i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_39__ (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(__struct_39__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s39u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_39__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_39__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s39ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_39__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_39__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s3i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_3__ (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(__struct_3__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s3u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_3__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_3__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s3ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_3__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_3__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s41(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_41__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_41__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s41u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_41__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_41__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s41us41u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_41__ (*NativeMethod)(uintptr_t __arg0, __struct_41__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(__struct_41__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_41__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_s41uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_41__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(__struct_41__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s50u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_50__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_50__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s52(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_52__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_52__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s52s54(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_52__ (*NativeMethod)(__struct_54__ __arg0, const MethodInfo* method);
    *(__struct_52__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s52u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_52__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_52__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s52ur4i4r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_52__ (*NativeMethod)(uintptr_t __arg0, float __arg1, int32_t __arg2, float __arg3, int32_t __arg4, const MethodInfo* method);
    *(__struct_52__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_s52uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_52__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(__struct_52__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s52uur4i4r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_52__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, float __arg2, int32_t __arg3, float __arg4, int32_t __arg5, const MethodInfo* method);
    *(__struct_52__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_s54(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_54__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_54__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s54s54(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_54__ (*NativeMethod)(__struct_54__ __arg0, const MethodInfo* method);
    *(__struct_54__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s54s54r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_54__ (*NativeMethod)(__struct_54__ __arg0, float __arg1, const MethodInfo* method);
    *(__struct_54__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s54s54s54(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_54__ (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, const MethodInfo* method);
    *(__struct_54__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s54u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_54__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_54__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s5u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_5__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_5__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s62u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_62__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_62__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s63u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_63__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_63__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s64u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_64__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_64__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s66(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_66__ (*NativeMethod)(const MethodInfo* method);
    *(__struct_66__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_s66u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_66__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_66__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s67u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_67__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_67__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s67uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_67__ (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(__struct_67__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s67uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_67__ (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(__struct_67__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s6u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_6__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_6__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s72u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_72__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_72__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s73u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_73__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_73__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s74u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_74__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_74__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s75u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_75__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_75__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s76u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_76__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_76__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s77u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_77__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_77__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s78u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_78__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_78__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s7u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_7__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_7__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s7ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_7__ (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(__struct_7__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s81u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_81__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_81__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s85u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_85__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_85__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s87u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_87__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_87__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s88u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_88__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_88__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s8u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_8__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_8__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s8uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_8__ (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(__struct_8__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_s91u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_91__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_91__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_s92u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef __struct_92__ (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(__struct_92__*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_typedbyrefu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef Il2CppTypedRef (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(Il2CppTypedRef*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_typedbyrefuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef Il2CppTypedRef (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(Il2CppTypedRef*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_u1i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1i4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1ii(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1iu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(intptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1iuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(intptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1s0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_0__ __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1s0s0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_0__ __arg0, __struct_0__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_14__ __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1s14s14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_14__ __arg0, __struct_14__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s15s15(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_15__ __arg0, __struct_15__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s16s16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_16__ __arg0, __struct_16__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_16__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_16__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s18s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_18__ __arg0, __struct_18__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s19s19(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_19__ __arg0, __struct_19__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_32__ __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1s32r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_32__ __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s32r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_32__ __arg0, float __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1s32r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_32__ __arg0, float __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1s32u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_32__ __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s32ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_32__ __arg0, uintptr_t __arg1, float __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1s32ur4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_32__ __arg0, uintptr_t __arg1, float __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1s32ur4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_32__ __arg0, uintptr_t __arg1, float __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1s39s39(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_39__ __arg0, __struct_39__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_39__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_39__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s41s41(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_41__ __arg0, __struct_41__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_41__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_41__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s52s52(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_52__ __arg0, __struct_52__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s53s53(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_53__ __arg0, __struct_53__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_53__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_53__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s54s54(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1s54s54r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, float __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1s54s54r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, float __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1s54s54r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, float __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1s54s54u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1s54s54ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, uintptr_t __arg2, float __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1s54s54ur4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, uintptr_t __arg2, float __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u1s54s54ur4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, uintptr_t __arg2, float __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_u1s66s66(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(__struct_66__ __arg0, __struct_66__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u1ui1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1ui2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1ui4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, intptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1ui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1ui4s66(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_66__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1ui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1ui4uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1ui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1ur8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, double __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_1__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_1__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us10(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_10__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us10s10(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_10__ __arg1, __struct_10__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us13(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_13__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_13__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_14__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us15(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_16__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_16__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_16__ __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_16__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us16u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_16__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_16__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us16ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_16__ __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_16__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1us18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us18s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_18__ __arg1, __struct_18__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us19(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_19__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us1s1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_1__ __arg1, __struct_1__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_1__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_1__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_1__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_1__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us1uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_1__ __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_1__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1us2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_2__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_2__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us2s2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_2__ __arg1, __struct_2__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_2__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_2__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us3(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_32__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us33(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_33__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us38(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_38__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_38__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us39(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_39__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_39__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us3s3(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_3__ __arg1, __struct_3__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us41(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_41__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_41__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us48(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_48__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_48__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us49(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_49__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_49__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us5(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_5__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us50(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_50__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_50__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us52(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_52__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us53(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_53__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_53__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us53uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_53__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_53__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1us54(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_54__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us54s54r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_54__ __arg1, __struct_54__ __arg2, float __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_u1us54s54ur4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_54__ __arg1, __struct_54__ __arg2, uintptr_t __arg3, float __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_u1us56(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_56__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_56__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us59(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_59__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_59__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us6(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_6__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us60(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_60__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_60__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us61(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_61__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_61__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us62(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_62__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_62__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us63(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_63__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_63__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_64__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_64__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us66(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_66__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us66u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_66__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us67(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_67__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_67__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us7(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us7s7(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_7__ __arg1, __struct_7__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1us8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_8__ __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_8__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1us8s8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, __struct_8__ __arg1, __struct_8__ __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_8__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_8__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1uu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1uu2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1uu2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1uu2u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uu4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1uu8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u1uui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1uui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uui4uu1u1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uint8_t __arg4, uint8_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_u1uus2u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_2__ __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_2__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1uuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u1uuu1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uuui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_u1uuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uuuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_u1uuuu1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_u2i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2iiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u2r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2s14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(__struct_14__ __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2u2u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint16_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u2u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u2ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u2ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u2uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u2uu2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u2uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_u4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4s14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(__struct_14__ __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u4ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u4ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8s14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(__struct_14__ __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_u8ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_u8ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_u8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_ui(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_ui2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_ui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_ui4i4i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint16_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_ui4s66(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int32_t __arg0, __struct_66__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_ui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int32_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_ui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int32_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_ui8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(int64_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uiiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_ur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_ur4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(float __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_ur8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(double __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_us14(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_14__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us14uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_14__ __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_us15s15s18s19s19(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_15__ __arg0, __struct_15__ __arg1, __struct_18__ __arg2, __struct_19__ __arg3, __struct_19__ __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_19__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_us32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_32__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us32r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_32__ __arg0, float __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_us32r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_32__ __arg0, float __arg1, int32_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_us32r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_32__ __arg0, float __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_32__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_us50(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_50__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_50__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us50s50(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_50__ __arg0, __struct_50__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_50__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_50__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_us52s52uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_52__ __arg0, __struct_52__ __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_us54s54(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_us54s54r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, float __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_us54s54r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, float __arg2, int32_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_us54s54r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, float __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_us63(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_63__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_63__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_64__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_64__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us66(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_66__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_us66s66(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_66__ __arg0, __struct_66__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_us8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(__struct_8__ __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_8__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_utypedbyref(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(Il2CppTypedRef __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<Il2CppTypedRef>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_uu2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_uu2u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uint16_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uu4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uint32_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uu8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uint64_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uui(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uui4i4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uui4i8i8u1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, uint8_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_uui4iuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, intptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uui4s66(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_66__ __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uui4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uui4ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uui4ui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uui4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uui4uuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uui4uuuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, uintptr_t __arg7, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_uui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uui8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uui8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uui8u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuiuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uur4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, float __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uur4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, float __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uur8u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, double __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uus1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_1__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_1__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uus101uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_101__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_101__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uus102uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_102__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_102__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uus102uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_102__ __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_102__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uus10s10uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_10__ __arg1, __struct_10__ __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uus10uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_10__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uus14u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_14__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uus16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_16__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_16__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uus18uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_18__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uus18uuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_18__ __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uus18uuuuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_18__ __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uint8_t __arg6, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_uus2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_2__ __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_2__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uus2uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_2__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_2__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uus39i4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_39__ __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_39__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uus39s39uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_39__ __arg1, __struct_39__ __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_39__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_39__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uus39uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_39__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_39__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uus3s3uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_3__ __arg1, __struct_3__ __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uus3uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_3__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uus41uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_41__ __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_41__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uus54s33(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_54__ __arg1, __struct_33__ __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uus54s33u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_54__ __arg1, __struct_33__ __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uus59uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_59__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_59__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uus61uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_61__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_61__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uus7s7uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_7__ __arg1, __struct_7__ __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uus7uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_7__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uus94uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_94__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_94__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uus97uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, __struct_97__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_97__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uuu1i4i4i4ui4i4i4i4u1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uintptr_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, uint8_t __arg10, uintptr_t __arg11, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[8]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[9]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[10]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[11]), method);
}


static void __M2N_uuu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuu1u1i4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uuu1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuu1uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuu2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_uuu2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuu2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuu4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuu8u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint64_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuu8u8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uint64_t __arg1, uint64_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuui4i4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uuui4i4uu1uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, uint8_t __arg5, uintptr_t __arg6, uintptr_t __arg7, uintptr_t __arg8, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[7]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_uuui4ui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, int32_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_uuui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuui4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uuui4uuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_uuui4uuuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, uintptr_t __arg7, uintptr_t __arg8, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[7]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_uuui8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int64_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuur4i4r4i4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, float __arg2, int32_t __arg3, float __arg4, int32_t __arg5, uintptr_t __arg6, uintptr_t __arg7, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_uuur4r4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, float __arg2, float __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uuur8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, double __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuus100uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_100__ __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_100__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuus14u1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_14__ __arg2, uint8_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uuus20uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_20__ __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuus2u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_2__ __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_2__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_uuuu1s95uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, __struct_95__ __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_95__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uuuu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuuu1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuuu4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuuui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuuui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uuuus14u1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_14__ __arg3, uint8_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_uuuus18u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_18__ __arg3, uint8_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuuus2u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_2__ __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_2__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuuus66i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_66__ __arg3, int32_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuuuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_uuuuu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuuuu1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uuuuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_uuuuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_uuuuuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uintptr_t (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    *(uintptr_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_v(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


static void __M2N_vi(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(intptr_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vi4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vi4i4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi4uui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vi8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vii4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(intptr_t __arg0, int32_t __arg1, intptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_viiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(intptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_viui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(intptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_viuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(intptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vs18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_18__ __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vs33uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_33__ __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vs38(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_38__ __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_38__>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vs54s54(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vs54s54s33(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, __struct_33__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vs54s54s33r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, __struct_33__ __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vs54s54s33r4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(__struct_54__ __arg0, __struct_54__ __arg1, __struct_33__ __arg2, float __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vtypedbyrefu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(Il2CppTypedRef __arg0, uintptr_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<Il2CppTypedRef>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), method);
}


static void __M2N_vu1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vu1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vu1uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vui2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vui4i4i4i4i4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, intptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vui4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vui4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vui4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vui4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vui4i4i4i4u1i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, intptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vui4i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vui4i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui4i4u1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4i4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vui4i8i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4r4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, float __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui4r4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, float __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4s0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_0__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s10(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_10__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s127(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_127__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_127__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s3(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_3__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4s7(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, __struct_7__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4u1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uint8_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uint16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui4ui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui4uuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vui8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vui8ui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, uintptr_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vui8ui8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, uintptr_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vui8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, int64_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuiu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, intptr_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, float __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vur4i4r4i4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, float __arg1, int32_t __arg2, float __arg3, int32_t __arg4, intptr_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vur4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vur4r4i(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, float __arg1, float __arg2, intptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vur4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, float __arg1, float __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vur4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, float __arg1, float __arg2, float __arg3, float __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vur4r4r4r4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, float __arg1, float __arg2, float __arg3, float __arg4, uintptr_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vur8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, double __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus0(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_0__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_1__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_1__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus10(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_10__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_10__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus101(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_101__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_101__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus102(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_102__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_102__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus102u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_102__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_102__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus129(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_129__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_129__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus13(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_13__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_13__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus130i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_130__ __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_130__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus131(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_131__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_131__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus134(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_134__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_134__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus15u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_15__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_16__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_16__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus16u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_16__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_16__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus16ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_16__ __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_16__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vus18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_1__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_1__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_2__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_2__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus3(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_3__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus33(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_33__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus33s33s33s33(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_33__ __arg1, __struct_33__ __arg2, __struct_33__ __arg3, __struct_33__ __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vus33uu1u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_33__ __arg1, uintptr_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_33__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vus38(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_38__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_38__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus39(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_39__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_39__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus39i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_39__ __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_39__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus39s39(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_39__ __arg1, __struct_39__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_39__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_39__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus41(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_41__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_41__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus41s132(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_41__ __arg1, __struct_132__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_41__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_132__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus41s132u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_41__ __arg1, __struct_132__ __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_41__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_132__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vus41uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_41__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_41__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vus5(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_5__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus50(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_50__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_50__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus50u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_50__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_50__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus50uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_50__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_50__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vus52s52(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_52__ __arg1, __struct_52__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_52__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus53(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_53__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_53__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus53u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_53__ __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_53__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus53uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_53__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_53__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vus54(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_54__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus54s54(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_54__ __arg1, __struct_54__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vus54s54r4r4s129(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_54__ __arg1, __struct_54__ __arg2, float __arg3, float __arg4, __struct_129__ __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_54__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<__struct_129__>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vus59(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_59__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_59__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus6(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_6__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_6__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus61(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_61__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_61__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus66i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_66__ __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vus67(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_67__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_67__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus7(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_7__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus94(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_94__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_94__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vus97(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, __struct_97__ __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<__struct_97__>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vutypedbyrefu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, Il2CppTypedRef __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<Il2CppTypedRef>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vuu1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuu1i4i4s66(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, __struct_66__ __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu1i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuu1s67i4s66(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, __struct_67__ __arg2, int32_t __arg3, __struct_66__ __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_67__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuu1u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuu1u1i4s66(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, __struct_66__ __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu1u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuu1u1u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, uint32_t __arg3, uint32_t __arg4, uint32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuu1ui4s66(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uintptr_t __arg2, int32_t __arg3, __struct_66__ __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu1uu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uintptr_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu1uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuu1uuuui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint8_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, int32_t __arg6, int32_t __arg7, uintptr_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_vuu2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vuu2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuu2i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[8]), method);
}


static void __M2N_vuu2i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuu4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vuu8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[1]), method);
}


static void __M2N_vuui(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, intptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuui4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuui4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuui4i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuui4s41(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, __struct_41__ __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_41__>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuui8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuui8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuui8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuui8ui8uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int64_t __arg2, uintptr_t __arg3, int64_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vuui8us15ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, int64_t __arg2, uintptr_t __arg3, __struct_15__ __arg4, uintptr_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<int64_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vuuiu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, intptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<intptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuur4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, float __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuur8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, double __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuur8u1u1s15(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, double __arg2, uint8_t __arg3, uint8_t __arg4, __struct_15__ __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<double>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuus135i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_135__ __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_135__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuus135i4s41(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_135__ __arg2, int32_t __arg3, __struct_41__ __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_135__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_41__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuus14u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_14__ __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuus15(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_15__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_15__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuus2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_2__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_2__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuus20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_20__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_20__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuus66(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, __struct_66__ __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuuu1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuu1s95(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, __struct_95__ __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_95__>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuu1u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuu1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuu1ui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uintptr_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuu1uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuu2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint16_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuuu4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint32_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuuu8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uint64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uint64_t>(localVarBase+argVarIndexs[2]), method);
}


static void __M2N_vuuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuui4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuuui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuui4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuui4uu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuuui4uuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vuuur4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<float>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuus14u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_14__ __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_14__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuus18s18(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_18__ __arg3, __struct_18__ __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_18__>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuus2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_2__ __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_2__>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuus66i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_66__ __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuuu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), method);
}


static void __M2N_vuuuu1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuuu1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuuuui4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuuui4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, int32_t __arg4, int32_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vuuuui4uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, int32_t __arg4, uintptr_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vuuuus66i4i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, __struct_66__ __arg4, int32_t __arg5, int32_t __arg6, uintptr_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<__struct_66__>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vuuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), method);
}


static void __M2N_vuuuuu1i4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uint8_t __arg4, int32_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vuuuuui4u(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, int32_t __arg5, uintptr_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), method);
}


static void __M2N_vuuuuui4uu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, int32_t __arg5, uintptr_t __arg6, uint8_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[7]), method);
}


static void __M2N_vuuuuuu(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), method);
}


static void __M2N_vuuuuuuu1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uint8_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[0]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[1]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[2]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[3]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[4]), M2NFromValueOrAddress<uintptr_t>(localVarBase+argVarIndexs[5]), M2NFromValueOrAddress<uint8_t>(localVarBase+argVarIndexs[6]), M2NFromValueOrAddress<int32_t>(localVarBase+argVarIndexs[7]), method);
}


Managed2NativeMethodInfo hybridclr::interpreter::g_managed2nativeStub[] = 
{

	{"i", __M2N_i},
	{"i1i", __M2N_i1i},
	{"i1i2", __M2N_i1i2},
	{"i1i4", __M2N_i1i4},
	{"i1i8", __M2N_i1i8},
	{"i1iiu", __M2N_i1iiu},
	{"i1r4", __M2N_i1r4},
	{"i1r8", __M2N_i1r8},
	{"i1s14", __M2N_i1s14},
	{"i1u", __M2N_i1u},
	{"i1u1", __M2N_i1u1},
	{"i1u2", __M2N_i1u2},
	{"i1u4", __M2N_i1u4},
	{"i1u8", __M2N_i1u8},
	{"i1ui4u", __M2N_i1ui4u},
	{"i1uu", __M2N_i1uu},
	{"i1uuu", __M2N_i1uuu},
	{"i2i", __M2N_i2i},
	{"i2i1", __M2N_i2i1},
	{"i2i4", __M2N_i2i4},
	{"i2i8", __M2N_i2i8},
	{"i2iiu", __M2N_i2iiu},
	{"i2r4", __M2N_i2r4},
	{"i2r8", __M2N_i2r8},
	{"i2s14", __M2N_i2s14},
	{"i2u", __M2N_i2u},
	{"i2u1", __M2N_i2u1},
	{"i2u2", __M2N_i2u2},
	{"i2u4", __M2N_i2u4},
	{"i2u8", __M2N_i2u8},
	{"i2ui4", __M2N_i2ui4},
	{"i2ui4u", __M2N_i2ui4u},
	{"i2uu", __M2N_i2uu},
	{"i2uuu", __M2N_i2uuu},
	{"i4", __M2N_i4},
	{"i4i", __M2N_i4i},
	{"i4i2", __M2N_i4i2},
	{"i4i4", __M2N_i4i4},
	{"i4i4i4", __M2N_i4i4i4},
	{"i4i4u1", __M2N_i4i4u1},
	{"i4i8", __M2N_i4i8},
	{"i4iiu", __M2N_i4iiu},
	{"i4r4", __M2N_i4r4},
	{"i4r8", __M2N_i4r8},
	{"i4s14", __M2N_i4s14},
	{"i4s32u", __M2N_i4s32u},
	{"i4s32ur4", __M2N_i4s32ur4},
	{"i4s32ur4i4", __M2N_i4s32ur4i4},
	{"i4s32ur4i4i4", __M2N_i4s32ur4i4i4},
	{"i4s52s52s104u", __M2N_i4s52s52s104u},
	{"i4s52s52s104ur4", __M2N_i4s52s52s104ur4},
	{"i4s54s54u", __M2N_i4s54s54u},
	{"i4s54s54ur4", __M2N_i4s54s54ur4},
	{"i4s54s54ur4i4", __M2N_i4s54s54ur4i4},
	{"i4s54s54ur4i4i4", __M2N_i4s54s54ur4i4i4},
	{"i4u", __M2N_i4u},
	{"i4u1", __M2N_i4u1},
	{"i4u2", __M2N_i4u2},
	{"i4u2i4", __M2N_i4u2i4},
	{"i4u2u2", __M2N_i4u2u2},
	{"i4u4", __M2N_i4u4},
	{"i4u4i4", __M2N_i4u4i4},
	{"i4u8", __M2N_i4u8},
	{"i4ui1", __M2N_i4ui1},
	{"i4ui2", __M2N_i4ui2},
	{"i4ui4", __M2N_i4ui4},
	{"i4ui4i4", __M2N_i4ui4i4},
	{"i4ui4i4i4", __M2N_i4ui4i4i4},
	{"i4ui4i4i4u", __M2N_i4ui4i4i4u},
	{"i4ui4i4s10u", __M2N_i4ui4i4s10u},
	{"i4ui4i4s3u", __M2N_i4ui4i4s3u},
	{"i4ui4i4s7u", __M2N_i4ui4i4s7u},
	{"i4ui4i4u", __M2N_i4ui4i4u},
	{"i4ui4i4u8u", __M2N_i4ui4i4u8u},
	{"i4ui4i4uu", __M2N_i4ui4i4uu},
	{"i4ui4u", __M2N_i4ui4u},
	{"i4ui4u1", __M2N_i4ui4u1},
	{"i4ui4ui4i4", __M2N_i4ui4ui4i4},
	{"i4ui4ui4i4i4", __M2N_i4ui4ui4i4i4},
	{"i4ui4ui4i4u1", __M2N_i4ui4ui4i4u1},
	{"i4ui4ui4i4u1u", __M2N_i4ui4ui4i4u1u},
	{"i4ui4ui4i4ui4", __M2N_i4ui4ui4i4ui4},
	{"i4ui8", __M2N_i4ui8},
	{"i4ur4", __M2N_i4ur4},
	{"i4ur8", __M2N_i4ur8},
	{"i4us0", __M2N_i4us0},
	{"i4us1", __M2N_i4us1},
	{"i4us10", __M2N_i4us10},
	{"i4us10i4i4", __M2N_i4us10i4i4},
	{"i4us10s10", __M2N_i4us10s10},
	{"i4us14", __M2N_i4us14},
	{"i4us15", __M2N_i4us15},
	{"i4us16", __M2N_i4us16},
	{"i4us18", __M2N_i4us18},
	{"i4us18u1", __M2N_i4us18u1},
	{"i4us2", __M2N_i4us2},
	{"i4us3", __M2N_i4us3},
	{"i4us32r4ui4", __M2N_i4us32r4ui4},
	{"i4us3i4i4", __M2N_i4us3i4i4},
	{"i4us3s3", __M2N_i4us3s3},
	{"i4us52s52r4s104u", __M2N_i4us52s52r4s104u},
	{"i4us54s54ur4i4i4", __M2N_i4us54s54ur4i4i4},
	{"i4us7", __M2N_i4us7},
	{"i4us7i4i4", __M2N_i4us7i4i4},
	{"i4us7s7", __M2N_i4us7s7},
	{"i4us8", __M2N_i4us8},
	{"i4us8s8", __M2N_i4us8s8},
	{"i4uu", __M2N_i4uu},
	{"i4uu1", __M2N_i4uu1},
	{"i4uu2", __M2N_i4uu2},
	{"i4uu2i4", __M2N_i4uu2i4},
	{"i4uu2i4i4", __M2N_i4uu2i4i4},
	{"i4uu4", __M2N_i4uu4},
	{"i4uu8", __M2N_i4uu8},
	{"i4uu8u8", __M2N_i4uu8u8},
	{"i4uui4", __M2N_i4uui4},
	{"i4uui4i4", __M2N_i4uui4i4},
	{"i4uui4i4i4", __M2N_i4uui4i4i4},
	{"i4uui4i4u", __M2N_i4uui4i4u},
	{"i4uui4i4u1", __M2N_i4uui4i4u1},
	{"i4uui4i4ui4", __M2N_i4uui4i4ui4},
	{"i4uui4i4ui4i4i4", __M2N_i4uui4i4ui4i4i4},
	{"i4uui4i4ui4u1", __M2N_i4uui4i4ui4u1},
	{"i4uui4u1", __M2N_i4uui4u1},
	{"i4uui4ui4", __M2N_i4uui4ui4},
	{"i4uui4ui4u1", __M2N_i4uui4ui4u1},
	{"i4uus10i4i4", __M2N_i4uus10i4i4},
	{"i4uus1i4i4", __M2N_i4uus1i4i4},
	{"i4uus2i4i4", __M2N_i4uus2i4i4},
	{"i4uus3i4i4", __M2N_i4uus3i4i4},
	{"i4uus7i4i4", __M2N_i4uus7i4i4},
	{"i4uus8i4i4", __M2N_i4uus8i4i4},
	{"i4uuu", __M2N_i4uuu},
	{"i4uuu1", __M2N_i4uuu1},
	{"i4uuu1i4i4", __M2N_i4uuu1i4i4},
	{"i4uuu1u", __M2N_i4uuu1u},
	{"i4uuui4", __M2N_i4uuui4},
	{"i4uuui4i4", __M2N_i4uuui4i4},
	{"i4uuui4i4i4", __M2N_i4uuui4i4i4},
	{"i8", __M2N_i8},
	{"i8i", __M2N_i8i},
	{"i8i1", __M2N_i8i1},
	{"i8i2", __M2N_i8i2},
	{"i8i4", __M2N_i8i4},
	{"i8iiu", __M2N_i8iiu},
	{"i8r4", __M2N_i8r4},
	{"i8r8", __M2N_i8r8},
	{"i8s14", __M2N_i8s14},
	{"i8u", __M2N_i8u},
	{"i8u1", __M2N_i8u1},
	{"i8u2", __M2N_i8u2},
	{"i8u4", __M2N_i8u4},
	{"i8u8", __M2N_i8u8},
	{"i8ui4", __M2N_i8ui4},
	{"i8ui4i4u", __M2N_i8ui4i4u},
	{"i8ui4u", __M2N_i8ui4u},
	{"i8ui8", __M2N_i8ui8},
	{"i8ui8i4", __M2N_i8ui8i4},
	{"i8ui8i4u", __M2N_i8ui8i4u},
	{"i8ui8i8", __M2N_i8ui8i8},
	{"i8uu", __M2N_i8uu},
	{"i8uuu", __M2N_i8uuu},
	{"ii", __M2N_ii},
	{"ii4", __M2N_ii4},
	{"ii4ii", __M2N_ii4ii},
	{"ii8", __M2N_ii8},
	{"iii", __M2N_iii},
	{"iii4", __M2N_iii4},
	{"iiiu", __M2N_iiiu},
	{"iiu", __M2N_iiu},
	{"iiuu", __M2N_iiuu},
	{"iiuuu1", __M2N_iiuuu1},
	{"is39", __M2N_is39},
	{"iu", __M2N_iu},
	{"iu1u1uu", __M2N_iu1u1uu},
	{"iui", __M2N_iui},
	{"iui4i4i4i4u", __M2N_iui4i4i4i4u},
	{"iuii", __M2N_iuii},
	{"iuu", __M2N_iuu},
	{"iuu2u2i4", __M2N_iuu2u2i4},
	{"iuuuu", __M2N_iuuuu},
	{"r4i", __M2N_r4i},
	{"r4i1", __M2N_r4i1},
	{"r4i2", __M2N_r4i2},
	{"r4i4", __M2N_r4i4},
	{"r4i8", __M2N_r4i8},
	{"r4iiu", __M2N_r4iiu},
	{"r4r4", __M2N_r4r4},
	{"r4r4r4", __M2N_r4r4r4},
	{"r4r4r4r4", __M2N_r4r4r4r4},
	{"r4r8", __M2N_r4r8},
	{"r4s14", __M2N_r4s14},
	{"r4s54", __M2N_r4s54},
	{"r4u", __M2N_r4u},
	{"r4u1", __M2N_r4u1},
	{"r4u2", __M2N_r4u2},
	{"r4u4", __M2N_r4u4},
	{"r4u8", __M2N_r4u8},
	{"r4ui4u", __M2N_r4ui4u},
	{"r4ur4", __M2N_r4ur4},
	{"r4ur4r4", __M2N_r4ur4r4},
	{"r4uu", __M2N_r4uu},
	{"r4uur4r4", __M2N_r4uur4r4},
	{"r4uuu", __M2N_r4uuu},
	{"r8i", __M2N_r8i},
	{"r8i1", __M2N_r8i1},
	{"r8i2", __M2N_r8i2},
	{"r8i4", __M2N_r8i4},
	{"r8i8", __M2N_r8i8},
	{"r8iiu", __M2N_r8iiu},
	{"r8r4", __M2N_r8r4},
	{"r8r8", __M2N_r8r8},
	{"r8r8r8", __M2N_r8r8r8},
	{"r8s14", __M2N_r8s14},
	{"r8u", __M2N_r8u},
	{"r8u1", __M2N_r8u1},
	{"r8u2", __M2N_r8u2},
	{"r8u4", __M2N_r8u4},
	{"r8u8", __M2N_r8u8},
	{"r8ui4u", __M2N_r8ui4u},
	{"r8ur8", __M2N_r8ur8},
	{"r8ur8r8", __M2N_r8ur8r8},
	{"r8uu", __M2N_r8uu},
	{"r8uuu", __M2N_r8uuu},
	{"s0u", __M2N_s0u},
	{"s0ui4", __M2N_s0ui4},
	{"s10", __M2N_s10},
	{"s10u", __M2N_s10u},
	{"s10ui4", __M2N_s10ui4},
	{"s127u", __M2N_s127u},
	{"s127ui4", __M2N_s127ui4},
	{"s13", __M2N_s13},
	{"s134u", __M2N_s134u},
	{"s13u1", __M2N_s13u1},
	{"s13uu1", __M2N_s13uu1},
	{"s141uu", __M2N_s141uu},
	{"s141uus100", __M2N_s141uus100},
	{"s143u", __M2N_s143u},
	{"s144s52s52", __M2N_s144s52s52},
	{"s144s52s52r4", __M2N_s144s52s52r4},
	{"s144s52s52r4i4", __M2N_s144s52s52r4i4},
	{"s144s52s52r4i4r4", __M2N_s144s52s52r4i4r4},
	{"s144s52s52r4i4r4r4", __M2N_s144s52s52r4i4r4r4},
	{"s144us52s52r4i4", __M2N_s144us52s52r4i4},
	{"s144us52s52r4s104", __M2N_s144us52s52r4s104},
	{"s14i1", __M2N_s14i1},
	{"s14i2", __M2N_s14i2},
	{"s14i4", __M2N_s14i4},
	{"s14i8", __M2N_s14i8},
	{"s14r4", __M2N_s14r4},
	{"s14r8", __M2N_s14r8},
	{"s14s14i4", __M2N_s14s14i4},
	{"s14u", __M2N_s14u},
	{"s14u1", __M2N_s14u1},
	{"s14u2", __M2N_s14u2},
	{"s14u4", __M2N_s14u4},
	{"s14u8", __M2N_s14u8},
	{"s14ui4u", __M2N_s14ui4u},
	{"s14uu", __M2N_s14uu},
	{"s15", __M2N_s15},
	{"s15i8", __M2N_s15i8},
	{"s15s15i4", __M2N_s15s15i4},
	{"s15s15s18", __M2N_s15s15s18},
	{"s15s15u", __M2N_s15s15u},
	{"s15s15uu", __M2N_s15s15uu},
	{"s15u", __M2N_s15u},
	{"s15ui4", __M2N_s15ui4},
	{"s15ui4i4i4i4i4i4i4i4", __M2N_s15ui4i4i4i4i4i4i4i4},
	{"s15ui8", __M2N_s15ui8},
	{"s15ur8", __M2N_s15ur8},
	{"s15us18", __M2N_s15us18},
	{"s15uu", __M2N_s15uu},
	{"s16", __M2N_s16},
	{"s16u", __M2N_s16u},
	{"s18", __M2N_s18},
	{"s18i8", __M2N_s18i8},
	{"s18r8", __M2N_s18r8},
	{"s18s15s15", __M2N_s18s15s15},
	{"s18s18s18", __M2N_s18s18s18},
	{"s18u", __M2N_s18u},
	{"s18us15", __M2N_s18us15},
	{"s18us18", __M2N_s18us18},
	{"s18uu", __M2N_s18uu},
	{"s19s15i4i4", __M2N_s19s15i4i4},
	{"s19s15i4i4i4", __M2N_s19s15i4i4i4},
	{"s19u", __M2N_s19u},
	{"s1u", __M2N_s1u},
	{"s20ui4i4", __M2N_s20ui4i4},
	{"s2u", __M2N_s2u},
	{"s2uu", __M2N_s2uu},
	{"s32us54", __M2N_s32us54},
	{"s32us54i4", __M2N_s32us54i4},
	{"s33", __M2N_s33},
	{"s33s33", __M2N_s33s33},
	{"s33s33r4", __M2N_s33s33r4},
	{"s33u", __M2N_s33u},
	{"s33ui4", __M2N_s33ui4},
	{"s38", __M2N_s38},
	{"s38s54s33s54", __M2N_s38s54s33s54},
	{"s38u", __M2N_s38u},
	{"s39", __M2N_s39},
	{"s39i", __M2N_s39i},
	{"s39i4", __M2N_s39i4},
	{"s39u", __M2N_s39u},
	{"s39ui4", __M2N_s39ui4},
	{"s3i4", __M2N_s3i4},
	{"s3u", __M2N_s3u},
	{"s3ui4", __M2N_s3ui4},
	{"s41", __M2N_s41},
	{"s41u", __M2N_s41u},
	{"s41us41u", __M2N_s41us41u},
	{"s41uu", __M2N_s41uu},
	{"s50u", __M2N_s50u},
	{"s52", __M2N_s52},
	{"s52s54", __M2N_s52s54},
	{"s52u", __M2N_s52u},
	{"s52ur4i4r4i4", __M2N_s52ur4i4r4i4},
	{"s52uu", __M2N_s52uu},
	{"s52uur4i4r4i4", __M2N_s52uur4i4r4i4},
	{"s54", __M2N_s54},
	{"s54s54", __M2N_s54s54},
	{"s54s54r4", __M2N_s54s54r4},
	{"s54s54s54", __M2N_s54s54s54},
	{"s54u", __M2N_s54u},
	{"s5u", __M2N_s5u},
	{"s62u", __M2N_s62u},
	{"s63u", __M2N_s63u},
	{"s64u", __M2N_s64u},
	{"s66", __M2N_s66},
	{"s66u", __M2N_s66u},
	{"s67u", __M2N_s67u},
	{"s67uu", __M2N_s67uu},
	{"s67uu1", __M2N_s67uu1},
	{"s6u", __M2N_s6u},
	{"s72u", __M2N_s72u},
	{"s73u", __M2N_s73u},
	{"s74u", __M2N_s74u},
	{"s75u", __M2N_s75u},
	{"s76u", __M2N_s76u},
	{"s77u", __M2N_s77u},
	{"s78u", __M2N_s78u},
	{"s7u", __M2N_s7u},
	{"s7ui4", __M2N_s7ui4},
	{"s81u", __M2N_s81u},
	{"s85u", __M2N_s85u},
	{"s87u", __M2N_s87u},
	{"s88u", __M2N_s88u},
	{"s8u", __M2N_s8u},
	{"s8uu1", __M2N_s8uu1},
	{"s91u", __M2N_s91u},
	{"s92u", __M2N_s92u},
	{"typedbyrefu", __M2N_typedbyrefu},
	{"typedbyrefuu", __M2N_typedbyrefuu},
	{"u", __M2N_u},
	{"u1", __M2N_u1},
	{"u1i", __M2N_u1i},
	{"u1i1", __M2N_u1i1},
	{"u1i2", __M2N_u1i2},
	{"u1i4", __M2N_u1i4},
	{"u1i4i4", __M2N_u1i4i4},
	{"u1i4u1", __M2N_u1i4u1},
	{"u1i4uuu", __M2N_u1i4uuu},
	{"u1i8", __M2N_u1i8},
	{"u1ii", __M2N_u1ii},
	{"u1iiu", __M2N_u1iiu},
	{"u1iu", __M2N_u1iu},
	{"u1iuuu", __M2N_u1iuuu},
	{"u1r4", __M2N_u1r4},
	{"u1r4r4", __M2N_u1r4r4},
	{"u1r8", __M2N_u1r8},
	{"u1s0", __M2N_u1s0},
	{"u1s0s0", __M2N_u1s0s0},
	{"u1s14", __M2N_u1s14},
	{"u1s14s14", __M2N_u1s14s14},
	{"u1s15s15", __M2N_u1s15s15},
	{"u1s16s16", __M2N_u1s16s16},
	{"u1s18s18", __M2N_u1s18s18},
	{"u1s19s19", __M2N_u1s19s19},
	{"u1s32", __M2N_u1s32},
	{"u1s32r4", __M2N_u1s32r4},
	{"u1s32r4i4", __M2N_u1s32r4i4},
	{"u1s32r4i4i4", __M2N_u1s32r4i4i4},
	{"u1s32u", __M2N_u1s32u},
	{"u1s32ur4", __M2N_u1s32ur4},
	{"u1s32ur4i4", __M2N_u1s32ur4i4},
	{"u1s32ur4i4i4", __M2N_u1s32ur4i4i4},
	{"u1s39s39", __M2N_u1s39s39},
	{"u1s41s41", __M2N_u1s41s41},
	{"u1s52s52", __M2N_u1s52s52},
	{"u1s53s53", __M2N_u1s53s53},
	{"u1s54s54", __M2N_u1s54s54},
	{"u1s54s54r4", __M2N_u1s54s54r4},
	{"u1s54s54r4i4", __M2N_u1s54s54r4i4},
	{"u1s54s54r4i4i4", __M2N_u1s54s54r4i4i4},
	{"u1s54s54u", __M2N_u1s54s54u},
	{"u1s54s54ur4", __M2N_u1s54s54ur4},
	{"u1s54s54ur4i4", __M2N_u1s54s54ur4i4},
	{"u1s54s54ur4i4i4", __M2N_u1s54s54ur4i4i4},
	{"u1s66s66", __M2N_u1s66s66},
	{"u1u", __M2N_u1u},
	{"u1u1", __M2N_u1u1},
	{"u1u2", __M2N_u1u2},
	{"u1u2u2", __M2N_u1u2u2},
	{"u1u4", __M2N_u1u4},
	{"u1u8", __M2N_u1u8},
	{"u1ui1", __M2N_u1ui1},
	{"u1ui2", __M2N_u1ui2},
	{"u1ui4", __M2N_u1ui4},
	{"u1ui4i", __M2N_u1ui4i},
	{"u1ui4i4", __M2N_u1ui4i4},
	{"u1ui4s66", __M2N_u1ui4s66},
	{"u1ui4u", __M2N_u1ui4u},
	{"u1ui4u1", __M2N_u1ui4u1},
	{"u1ui4uu1", __M2N_u1ui4uu1},
	{"u1ui8", __M2N_u1ui8},
	{"u1ur4", __M2N_u1ur4},
	{"u1ur8", __M2N_u1ur8},
	{"u1us0", __M2N_u1us0},
	{"u1us1", __M2N_u1us1},
	{"u1us10", __M2N_u1us10},
	{"u1us10s10", __M2N_u1us10s10},
	{"u1us13", __M2N_u1us13},
	{"u1us14", __M2N_u1us14},
	{"u1us15", __M2N_u1us15},
	{"u1us16", __M2N_u1us16},
	{"u1us16i4", __M2N_u1us16i4},
	{"u1us16u", __M2N_u1us16u},
	{"u1us16ui4", __M2N_u1us16ui4},
	{"u1us18", __M2N_u1us18},
	{"u1us18s18", __M2N_u1us18s18},
	{"u1us19", __M2N_u1us19},
	{"u1us1s1", __M2N_u1us1s1},
	{"u1us1u", __M2N_u1us1u},
	{"u1us1uu1", __M2N_u1us1uu1},
	{"u1us2", __M2N_u1us2},
	{"u1us20", __M2N_u1us20},
	{"u1us2s2", __M2N_u1us2s2},
	{"u1us3", __M2N_u1us3},
	{"u1us32", __M2N_u1us32},
	{"u1us33", __M2N_u1us33},
	{"u1us38", __M2N_u1us38},
	{"u1us39", __M2N_u1us39},
	{"u1us3s3", __M2N_u1us3s3},
	{"u1us41", __M2N_u1us41},
	{"u1us48", __M2N_u1us48},
	{"u1us49", __M2N_u1us49},
	{"u1us5", __M2N_u1us5},
	{"u1us50", __M2N_u1us50},
	{"u1us52", __M2N_u1us52},
	{"u1us53", __M2N_u1us53},
	{"u1us53uu", __M2N_u1us53uu},
	{"u1us54", __M2N_u1us54},
	{"u1us54s54r4i4i4", __M2N_u1us54s54r4i4i4},
	{"u1us54s54ur4i4i4", __M2N_u1us54s54ur4i4i4},
	{"u1us56", __M2N_u1us56},
	{"u1us59", __M2N_u1us59},
	{"u1us6", __M2N_u1us6},
	{"u1us60", __M2N_u1us60},
	{"u1us61", __M2N_u1us61},
	{"u1us62", __M2N_u1us62},
	{"u1us63", __M2N_u1us63},
	{"u1us64", __M2N_u1us64},
	{"u1us66", __M2N_u1us66},
	{"u1us66u", __M2N_u1us66u},
	{"u1us67", __M2N_u1us67},
	{"u1us7", __M2N_u1us7},
	{"u1us7s7", __M2N_u1us7s7},
	{"u1us8", __M2N_u1us8},
	{"u1us8s8", __M2N_u1us8s8},
	{"u1uu", __M2N_u1uu},
	{"u1uu1", __M2N_u1uu1},
	{"u1uu1u1", __M2N_u1uu1u1},
	{"u1uu2", __M2N_u1uu2},
	{"u1uu2i4", __M2N_u1uu2i4},
	{"u1uu2u2i4", __M2N_u1uu2u2i4},
	{"u1uu4", __M2N_u1uu4},
	{"u1uu8", __M2N_u1uu8},
	{"u1uui4", __M2N_u1uui4},
	{"u1uui4u", __M2N_u1uui4u},
	{"u1uui4u1", __M2N_u1uui4u1},
	{"u1uui4uu1u1u", __M2N_u1uui4uu1u1u},
	{"u1uus2u1", __M2N_u1uus2u1},
	{"u1uuu", __M2N_u1uuu},
	{"u1uuu1", __M2N_u1uuu1},
	{"u1uuu1u", __M2N_u1uuu1u},
	{"u1uuui4", __M2N_u1uuui4},
	{"u1uuui4i4i4", __M2N_u1uuui4i4i4},
	{"u1uuuu", __M2N_u1uuuu},
	{"u1uuuu1", __M2N_u1uuuu1},
	{"u1uuuu1u", __M2N_u1uuuu1u},
	{"u2", __M2N_u2},
	{"u2i", __M2N_u2i},
	{"u2i1", __M2N_u2i1},
	{"u2i2", __M2N_u2i2},
	{"u2i4", __M2N_u2i4},
	{"u2i8", __M2N_u2i8},
	{"u2iiu", __M2N_u2iiu},
	{"u2r4", __M2N_u2r4},
	{"u2r8", __M2N_u2r8},
	{"u2s14", __M2N_u2s14},
	{"u2u", __M2N_u2u},
	{"u2u1", __M2N_u2u1},
	{"u2u2", __M2N_u2u2},
	{"u2u2u", __M2N_u2u2u},
	{"u2u4", __M2N_u2u4},
	{"u2u8", __M2N_u2u8},
	{"u2ui4", __M2N_u2ui4},
	{"u2ui4u", __M2N_u2ui4u},
	{"u2uu", __M2N_u2uu},
	{"u2uu2", __M2N_u2uu2},
	{"u2uuu", __M2N_u2uuu},
	{"u4", __M2N_u4},
	{"u4i1", __M2N_u4i1},
	{"u4i2", __M2N_u4i2},
	{"u4i4", __M2N_u4i4},
	{"u4i8", __M2N_u4i8},
	{"u4r4", __M2N_u4r4},
	{"u4r8", __M2N_u4r8},
	{"u4s14", __M2N_u4s14},
	{"u4u", __M2N_u4u},
	{"u4u1", __M2N_u4u1},
	{"u4u2", __M2N_u4u2},
	{"u4u8", __M2N_u4u8},
	{"u4ui4", __M2N_u4ui4},
	{"u4ui4u", __M2N_u4ui4u},
	{"u4uu", __M2N_u4uu},
	{"u8i1", __M2N_u8i1},
	{"u8i2", __M2N_u8i2},
	{"u8i4", __M2N_u8i4},
	{"u8i8", __M2N_u8i8},
	{"u8r4", __M2N_u8r4},
	{"u8r8", __M2N_u8r8},
	{"u8s14", __M2N_u8s14},
	{"u8u", __M2N_u8u},
	{"u8u1", __M2N_u8u1},
	{"u8u2", __M2N_u8u2},
	{"u8u4", __M2N_u8u4},
	{"u8ui4", __M2N_u8ui4},
	{"u8ui4u", __M2N_u8ui4u},
	{"u8uu", __M2N_u8uu},
	{"ui", __M2N_ui},
	{"ui2", __M2N_ui2},
	{"ui4", __M2N_ui4},
	{"ui4i4", __M2N_ui4i4},
	{"ui4i4i4u2i4", __M2N_ui4i4i4u2i4},
	{"ui4s66", __M2N_ui4s66},
	{"ui4u", __M2N_ui4u},
	{"ui4uu", __M2N_ui4uu},
	{"ui8uu", __M2N_ui8uu},
	{"uiiu", __M2N_uiiu},
	{"ur4", __M2N_ur4},
	{"ur4uu", __M2N_ur4uu},
	{"ur8uu", __M2N_ur8uu},
	{"us14", __M2N_us14},
	{"us14uu", __M2N_us14uu},
	{"us15s15s18s19s19", __M2N_us15s15s18s19s19},
	{"us32", __M2N_us32},
	{"us32r4", __M2N_us32r4},
	{"us32r4i4", __M2N_us32r4i4},
	{"us32r4i4i4", __M2N_us32r4i4i4},
	{"us50", __M2N_us50},
	{"us50s50", __M2N_us50s50},
	{"us52s52uu1", __M2N_us52s52uu1},
	{"us54s54", __M2N_us54s54},
	{"us54s54r4", __M2N_us54s54r4},
	{"us54s54r4i4", __M2N_us54s54r4i4},
	{"us54s54r4i4i4", __M2N_us54s54r4i4i4},
	{"us63", __M2N_us63},
	{"us64", __M2N_us64},
	{"us66", __M2N_us66},
	{"us66s66", __M2N_us66s66},
	{"us8", __M2N_us8},
	{"utypedbyref", __M2N_utypedbyref},
	{"uu", __M2N_uu},
	{"uu1", __M2N_uu1},
	{"uu2", __M2N_uu2},
	{"uu2u", __M2N_uu2u},
	{"uu4uu", __M2N_uu4uu},
	{"uu8uu", __M2N_uu8uu},
	{"uui", __M2N_uui},
	{"uui4", __M2N_uui4},
	{"uui4i4", __M2N_uui4i4},
	{"uui4i4i4", __M2N_uui4i4i4},
	{"uui4i4u", __M2N_uui4i4u},
	{"uui4i4uu", __M2N_uui4i4uu},
	{"uui4i8i8u1uu", __M2N_uui4i8i8u1uu},
	{"uui4iuu", __M2N_uui4iuu},
	{"uui4s66", __M2N_uui4s66},
	{"uui4u", __M2N_uui4u},
	{"uui4u2", __M2N_uui4u2},
	{"uui4ui4", __M2N_uui4ui4},
	{"uui4ui4uu", __M2N_uui4ui4uu},
	{"uui4uu", __M2N_uui4uu},
	{"uui4uuu", __M2N_uui4uuu},
	{"uui4uuuu", __M2N_uui4uuuu},
	{"uui4uuuuuu", __M2N_uui4uuuuuu},
	{"uui8", __M2N_uui8},
	{"uui8i8", __M2N_uui8i8},
	{"uui8i8i8", __M2N_uui8i8i8},
	{"uui8u", __M2N_uui8u},
	{"uuiuu", __M2N_uuiuu},
	{"uur4u", __M2N_uur4u},
	{"uur4uu", __M2N_uur4uu},
	{"uur8u", __M2N_uur8u},
	{"uus1", __M2N_uus1},
	{"uus101uu", __M2N_uus101uu},
	{"uus102uu", __M2N_uus102uu},
	{"uus102uuu", __M2N_uus102uuu},
	{"uus10s10uu", __M2N_uus10s10uu},
	{"uus10uu", __M2N_uus10uu},
	{"uus14u", __M2N_uus14u},
	{"uus16", __M2N_uus16},
	{"uus18uu", __M2N_uus18uu},
	{"uus18uuuu", __M2N_uus18uuuu},
	{"uus18uuuuu1", __M2N_uus18uuuuu1},
	{"uus2", __M2N_uus2},
	{"uus2uu", __M2N_uus2uu},
	{"uus39i4uu", __M2N_uus39i4uu},
	{"uus39s39uu", __M2N_uus39s39uu},
	{"uus39uu", __M2N_uus39uu},
	{"uus3s3uu", __M2N_uus3s3uu},
	{"uus3uu", __M2N_uus3uu},
	{"uus41uuu", __M2N_uus41uuu},
	{"uus54s33", __M2N_uus54s33},
	{"uus54s33u", __M2N_uus54s33u},
	{"uus59uu", __M2N_uus59uu},
	{"uus61uu", __M2N_uus61uu},
	{"uus7s7uu", __M2N_uus7s7uu},
	{"uus7uu", __M2N_uus7uu},
	{"uus94uu", __M2N_uus94uu},
	{"uus97uu", __M2N_uus97uu},
	{"uuu", __M2N_uuu},
	{"uuu1", __M2N_uuu1},
	{"uuu1i4i4i4ui4i4i4i4u1u", __M2N_uuu1i4i4i4ui4i4i4i4u1u},
	{"uuu1u1", __M2N_uuu1u1},
	{"uuu1u1i4uu", __M2N_uuu1u1i4uu},
	{"uuu1uu", __M2N_uuu1uu},
	{"uuu1uuu", __M2N_uuu1uuu},
	{"uuu2", __M2N_uuu2},
	{"uuu2i4", __M2N_uuu2i4},
	{"uuu2u2", __M2N_uuu2u2},
	{"uuu4u", __M2N_uuu4u},
	{"uuu8u", __M2N_uuu8u},
	{"uuu8u8uu", __M2N_uuu8u8uu},
	{"uuui4", __M2N_uuui4},
	{"uuui4i4", __M2N_uuui4i4},
	{"uuui4i4i4", __M2N_uuui4i4i4},
	{"uuui4i4uu", __M2N_uuui4i4uu},
	{"uuui4i4uu1uuu", __M2N_uuui4i4uu1uuu},
	{"uuui4ui4uu", __M2N_uuui4ui4uu},
	{"uuui4uu", __M2N_uuui4uu},
	{"uuui4uuu", __M2N_uuui4uuu},
	{"uuui4uuuu", __M2N_uuui4uuuu},
	{"uuui4uuuuuu", __M2N_uuui4uuuuuu},
	{"uuui8uu", __M2N_uuui8uu},
	{"uuur4i4r4i4uu", __M2N_uuur4i4r4i4uu},
	{"uuur4r4uu", __M2N_uuur4r4uu},
	{"uuur8uu", __M2N_uuur8uu},
	{"uuus100uu", __M2N_uuus100uu},
	{"uuus14u1uu", __M2N_uuus14u1uu},
	{"uuus20uu", __M2N_uuus20uu},
	{"uuus2u", __M2N_uuus2u},
	{"uuuu", __M2N_uuuu},
	{"uuuu1", __M2N_uuuu1},
	{"uuuu1s95uu", __M2N_uuuu1s95uu},
	{"uuuu1u1", __M2N_uuuu1u1},
	{"uuuu1uu", __M2N_uuuu1uu},
	{"uuuu4uu", __M2N_uuuu4uu},
	{"uuuui4", __M2N_uuuui4},
	{"uuuui4i4", __M2N_uuuui4i4},
	{"uuuui4uu", __M2N_uuuui4uu},
	{"uuuus14u1uu", __M2N_uuuus14u1uu},
	{"uuuus18u1", __M2N_uuuus18u1},
	{"uuuus2u", __M2N_uuuus2u},
	{"uuuus66i4u", __M2N_uuuus66i4u},
	{"uuuuu", __M2N_uuuuu},
	{"uuuuu1", __M2N_uuuuu1},
	{"uuuuu1u1", __M2N_uuuuu1u1},
	{"uuuuu1uu", __M2N_uuuuu1uu},
	{"uuuuui4", __M2N_uuuuui4},
	{"uuuuuu", __M2N_uuuuuu},
	{"uuuuuuu", __M2N_uuuuuuu},
	{"uuuuuuuu", __M2N_uuuuuuuu},
	{"v", __M2N_v},
	{"vi", __M2N_vi},
	{"vi4", __M2N_vi4},
	{"vi4i4uuu", __M2N_vi4i4uuu},
	{"vi4uui4i4", __M2N_vi4uui4i4},
	{"vi8", __M2N_vi8},
	{"vii4i", __M2N_vii4i},
	{"viiu", __M2N_viiu},
	{"viui4i4", __M2N_viui4i4},
	{"viuu1", __M2N_viuu1},
	{"vs18", __M2N_vs18},
	{"vs33uu", __M2N_vs33uu},
	{"vs38", __M2N_vs38},
	{"vs54s54", __M2N_vs54s54},
	{"vs54s54s33", __M2N_vs54s54s33},
	{"vs54s54s33r4", __M2N_vs54s54s33r4},
	{"vs54s54s33r4u1", __M2N_vs54s54s33r4u1},
	{"vtypedbyrefu", __M2N_vtypedbyrefu},
	{"vu", __M2N_vu},
	{"vu1", __M2N_vu1},
	{"vu1u", __M2N_vu1u},
	{"vu1uu", __M2N_vu1uu},
	{"vu1uuu", __M2N_vu1uuu},
	{"vui", __M2N_vui},
	{"vui2", __M2N_vui2},
	{"vui4", __M2N_vui4},
	{"vui4i4", __M2N_vui4i4},
	{"vui4i4i4", __M2N_vui4i4i4},
	{"vui4i4i4i4", __M2N_vui4i4i4i4},
	{"vui4i4i4i4i4", __M2N_vui4i4i4i4i4},
	{"vui4i4i4i4i4i", __M2N_vui4i4i4i4i4i},
	{"vui4i4i4i4i4i4", __M2N_vui4i4i4i4i4i4},
	{"vui4i4i4i4i4i4i4", __M2N_vui4i4i4i4i4i4i4},
	{"vui4i4i4i4i4u1", __M2N_vui4i4i4i4i4u1},
	{"vui4i4i4i4u1", __M2N_vui4i4i4i4u1},
	{"vui4i4i4i4u1i", __M2N_vui4i4i4i4u1i},
	{"vui4i4i4i4u1u1", __M2N_vui4i4i4i4u1u1},
	{"vui4i4i4u", __M2N_vui4i4i4u},
	{"vui4i4i4u1", __M2N_vui4i4i4u1},
	{"vui4i4i4u1u1", __M2N_vui4i4i4u1u1},
	{"vui4i4u", __M2N_vui4i4u},
	{"vui4i4u1", __M2N_vui4i4u1},
	{"vui4i4u1u", __M2N_vui4i4u1u},
	{"vui4i4uuu", __M2N_vui4i4uuu},
	{"vui4i8i8u1", __M2N_vui4i8i8u1},
	{"vui4r4", __M2N_vui4r4},
	{"vui4r4u", __M2N_vui4r4u},
	{"vui4r4uu", __M2N_vui4r4uu},
	{"vui4s0", __M2N_vui4s0},
	{"vui4s10", __M2N_vui4s10},
	{"vui4s127", __M2N_vui4s127},
	{"vui4s3", __M2N_vui4s3},
	{"vui4s7", __M2N_vui4s7},
	{"vui4u", __M2N_vui4u},
	{"vui4u1", __M2N_vui4u1},
	{"vui4u1u", __M2N_vui4u1u},
	{"vui4u2", __M2N_vui4u2},
	{"vui4ui4i4", __M2N_vui4ui4i4},
	{"vui4uu", __M2N_vui4uu},
	{"vui4uuu", __M2N_vui4uuu},
	{"vui4uuuuu", __M2N_vui4uuuuu},
	{"vui8", __M2N_vui8},
	{"vui8i4", __M2N_vui8i4},
	{"vui8ui8", __M2N_vui8ui8},
	{"vui8ui8i8", __M2N_vui8ui8i8},
	{"vui8uu", __M2N_vui8uu},
	{"vuiu1", __M2N_vuiu1},
	{"vur4", __M2N_vur4},
	{"vur4i4r4i4i", __M2N_vur4i4r4i4i},
	{"vur4r4", __M2N_vur4r4},
	{"vur4r4i", __M2N_vur4r4i},
	{"vur4r4r4", __M2N_vur4r4r4},
	{"vur4r4r4r4", __M2N_vur4r4r4r4},
	{"vur4r4r4r4u", __M2N_vur4r4r4r4u},
	{"vur8", __M2N_vur8},
	{"vus0", __M2N_vus0},
	{"vus1", __M2N_vus1},
	{"vus10", __M2N_vus10},
	{"vus101", __M2N_vus101},
	{"vus102", __M2N_vus102},
	{"vus102u", __M2N_vus102u},
	{"vus129", __M2N_vus129},
	{"vus13", __M2N_vus13},
	{"vus130i4", __M2N_vus130i4},
	{"vus131", __M2N_vus131},
	{"vus134", __M2N_vus134},
	{"vus15u", __M2N_vus15u},
	{"vus16", __M2N_vus16},
	{"vus16u", __M2N_vus16u},
	{"vus16ui4", __M2N_vus16ui4},
	{"vus18", __M2N_vus18},
	{"vus1u", __M2N_vus1u},
	{"vus2", __M2N_vus2},
	{"vus20", __M2N_vus20},
	{"vus3", __M2N_vus3},
	{"vus33", __M2N_vus33},
	{"vus33s33s33s33", __M2N_vus33s33s33s33},
	{"vus33uu1u1u1u1", __M2N_vus33uu1u1u1u1},
	{"vus38", __M2N_vus38},
	{"vus39", __M2N_vus39},
	{"vus39i4", __M2N_vus39i4},
	{"vus39s39", __M2N_vus39s39},
	{"vus41", __M2N_vus41},
	{"vus41s132", __M2N_vus41s132},
	{"vus41s132u", __M2N_vus41s132u},
	{"vus41uu", __M2N_vus41uu},
	{"vus5", __M2N_vus5},
	{"vus50", __M2N_vus50},
	{"vus50u", __M2N_vus50u},
	{"vus50uu", __M2N_vus50uu},
	{"vus52s52", __M2N_vus52s52},
	{"vus53", __M2N_vus53},
	{"vus53u", __M2N_vus53u},
	{"vus53uu", __M2N_vus53uu},
	{"vus54", __M2N_vus54},
	{"vus54s54", __M2N_vus54s54},
	{"vus54s54r4r4s129", __M2N_vus54s54r4r4s129},
	{"vus59", __M2N_vus59},
	{"vus6", __M2N_vus6},
	{"vus61", __M2N_vus61},
	{"vus66i4i4u", __M2N_vus66i4i4u},
	{"vus67", __M2N_vus67},
	{"vus7", __M2N_vus7},
	{"vus94", __M2N_vus94},
	{"vus97", __M2N_vus97},
	{"vutypedbyrefu", __M2N_vutypedbyrefu},
	{"vuu", __M2N_vuu},
	{"vuu1", __M2N_vuu1},
	{"vuu1i4", __M2N_vuu1i4},
	{"vuu1i4i4s66", __M2N_vuu1i4i4s66},
	{"vuu1i4u", __M2N_vuu1i4u},
	{"vuu1s67i4s66", __M2N_vuu1s67i4s66},
	{"vuu1u", __M2N_vuu1u},
	{"vuu1u1", __M2N_vuu1u1},
	{"vuu1u1i4", __M2N_vuu1u1i4},
	{"vuu1u1i4s66", __M2N_vuu1u1i4s66},
	{"vuu1u1i4u1", __M2N_vuu1u1i4u1},
	{"vuu1u1u1", __M2N_vuu1u1u1},
	{"vuu1u1u4u4u4", __M2N_vuu1u1u4u4u4},
	{"vuu1ui4s66", __M2N_vuu1ui4s66},
	{"vuu1uu1u1", __M2N_vuu1uu1u1},
	{"vuu1uuu", __M2N_vuu1uuu},
	{"vuu1uuuui4i4u", __M2N_vuu1uuuui4i4u},
	{"vuu2", __M2N_vuu2},
	{"vuu2i4", __M2N_vuu2i4},
	{"vuu2i4i4i4i4i4i4i4", __M2N_vuu2i4i4i4i4i4i4i4},
	{"vuu2i4u1u1u1", __M2N_vuu2i4u1u1u1},
	{"vuu4", __M2N_vuu4},
	{"vuu8", __M2N_vuu8},
	{"vuui", __M2N_vuui},
	{"vuui4", __M2N_vuui4},
	{"vuui4i4", __M2N_vuui4i4},
	{"vuui4i4i4", __M2N_vuui4i4i4},
	{"vuui4i4i4i4", __M2N_vuui4i4i4i4},
	{"vuui4i4i4u", __M2N_vuui4i4i4u},
	{"vuui4i4u", __M2N_vuui4i4u},
	{"vuui4s41", __M2N_vuui4s41},
	{"vuui4u1", __M2N_vuui4u1},
	{"vuui8", __M2N_vuui8},
	{"vuui8i8", __M2N_vuui8i8},
	{"vuui8i8i8", __M2N_vuui8i8i8},
	{"vuui8ui8uu", __M2N_vuui8ui8uu},
	{"vuui8us15ui4", __M2N_vuui8us15ui4},
	{"vuuiu", __M2N_vuuiu},
	{"vuur4", __M2N_vuur4},
	{"vuur4r4", __M2N_vuur4r4},
	{"vuur8", __M2N_vuur8},
	{"vuur8u1u1s15", __M2N_vuur8u1u1s15},
	{"vuus135i4", __M2N_vuus135i4},
	{"vuus135i4s41", __M2N_vuus135i4s41},
	{"vuus14u1", __M2N_vuus14u1},
	{"vuus15", __M2N_vuus15},
	{"vuus2", __M2N_vuus2},
	{"vuus20", __M2N_vuus20},
	{"vuus66", __M2N_vuus66},
	{"vuuu", __M2N_vuuu},
	{"vuuu1", __M2N_vuuu1},
	{"vuuu1i4", __M2N_vuuu1i4},
	{"vuuu1s95", __M2N_vuuu1s95},
	{"vuuu1u", __M2N_vuuu1u},
	{"vuuu1u1", __M2N_vuuu1u1},
	{"vuuu1ui4", __M2N_vuuu1ui4},
	{"vuuu1uu", __M2N_vuuu1uu},
	{"vuuu2", __M2N_vuuu2},
	{"vuuu4", __M2N_vuuu4},
	{"vuuu8", __M2N_vuuu8},
	{"vuuui4", __M2N_vuuui4},
	{"vuuui4i4", __M2N_vuuui4i4},
	{"vuuui4i4u", __M2N_vuuui4i4u},
	{"vuuui4u", __M2N_vuuui4u},
	{"vuuui4u1", __M2N_vuuui4u1},
	{"vuuui4uu", __M2N_vuuui4uu},
	{"vuuui4uuu", __M2N_vuuui4uuu},
	{"vuuur4", __M2N_vuuur4},
	{"vuuus14u1", __M2N_vuuus14u1},
	{"vuuus18s18", __M2N_vuuus18s18},
	{"vuuus2", __M2N_vuuus2},
	{"vuuus66i4", __M2N_vuuus66i4},
	{"vuuuu", __M2N_vuuuu},
	{"vuuuu1", __M2N_vuuuu1},
	{"vuuuu1i4", __M2N_vuuuu1i4},
	{"vuuuu1i4u1", __M2N_vuuuu1i4u1},
	{"vuuuui4", __M2N_vuuuui4},
	{"vuuuui4i4u", __M2N_vuuuui4i4u},
	{"vuuuui4uu1", __M2N_vuuuui4uu1},
	{"vuuuus66i4i4u", __M2N_vuuuus66i4i4u},
	{"vuuuuu", __M2N_vuuuuu},
	{"vuuuuu1i4u", __M2N_vuuuuu1i4u},
	{"vuuuuui4u", __M2N_vuuuuui4u},
	{"vuuuuui4uu1", __M2N_vuuuuui4uu1},
	{"vuuuuuu", __M2N_vuuuuuu},
	{"vuuuuuuu1i4", __M2N_vuuuuuuu1i4},
	{nullptr, nullptr},
};

static int8_t __N2M_i1u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    int8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int8_t __N2M_i1uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int16_t __N2M_i2u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    int16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int16_t __N2M_i2uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4(const MethodInfo* method)
{
    
	constexpr int __TOTAL_ARG_SIZE__ = 1;

    StackObject args[__TOTAL_ARG_SIZE__];

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(int32_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4s10s10(__struct_10__ __arg0, __struct_10__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_10__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_10__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4s3s3(__struct_3__ __arg0, __struct_3__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_3__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4s7s7(__struct_7__ __arg0, __struct_7__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_7__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4u8u8(uint64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uint64_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ui1(uintptr_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ui2(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ui4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ui4i4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ui8(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ur4(uintptr_t __arg0, float __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4ur8(uintptr_t __arg0, double __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(double*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us0(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_0__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us1(uintptr_t __arg0, __struct_1__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_1__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us10(uintptr_t __arg0, __struct_10__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_10__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us10s10(uintptr_t __arg0, __struct_10__ __arg1, __struct_10__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_10__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_10__*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us14(uintptr_t __arg0, __struct_14__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_14__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us15(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_15__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us16(uintptr_t __arg0, __struct_16__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_16__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us18(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_18__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us2(uintptr_t __arg0, __struct_2__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_2__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us3(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us3s3(uintptr_t __arg0, __struct_3__ __arg1, __struct_3__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_3__*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us7(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us7s7(uintptr_t __arg0, __struct_7__ __arg1, __struct_7__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_7__*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us8(uintptr_t __arg0, __struct_8__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_8__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4us8s8(uintptr_t __arg0, __struct_8__ __arg1, __struct_8__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_8__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_8__*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uu2(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uu4(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uu8(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uu8u8(uintptr_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uint64_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4i4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4i4i4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4i4u1(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	args[__ARG_OFFSET_4__].u64 = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4i4ui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4i4ui4i4i4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __ARG_OFFSET_7__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;
	constexpr int __ARG_SIZE_7__ = (sizeof(__arg7) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_7__ + __ARG_SIZE_7__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(int32_t*)(args + __ARG_OFFSET_6__) = __arg6;
	*(int32_t*)(args + __ARG_OFFSET_7__) = __arg7;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4i4ui4u1(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;
	args[__ARG_OFFSET_6__].u64 = __arg6;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4u1(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4ui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uui4ui4u1(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;
	args[__ARG_OFFSET_5__].u64 = __arg5;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uus10i4i4(uintptr_t __arg0, uintptr_t __arg1, __struct_10__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_10__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uus1i4i4(uintptr_t __arg0, uintptr_t __arg1, __struct_1__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_1__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uus2i4i4(uintptr_t __arg0, uintptr_t __arg1, __struct_2__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_2__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uus3i4i4(uintptr_t __arg0, uintptr_t __arg1, __struct_3__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_3__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uus7i4i4(uintptr_t __arg0, uintptr_t __arg1, __struct_7__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_7__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uus8i4i4(uintptr_t __arg0, uintptr_t __arg1, __struct_8__ __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_8__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uuu1i4i4(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uuui4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uuui4i4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_i4uuui4i4i4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int64_t __N2M_i8u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    int64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int64_t __N2M_i8ui8i4(uintptr_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int64_t __N2M_i8uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int64_t __N2M_i8uuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static intptr_t __N2M_iuu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    intptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static float __N2M_r4u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    float ret; Interpreter::Execute(method, args, &ret); return ret;
}


static float __N2M_r4ur4r4(uintptr_t __arg0, float __arg1, float __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;
	*(float*)(args + __ARG_OFFSET_2__) = __arg2;

    float ret; Interpreter::Execute(method, args, &ret); return ret;
}


static float __N2M_r4uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    float ret; Interpreter::Execute(method, args, &ret); return ret;
}


static float __N2M_r4uur4r4(uintptr_t __arg0, uintptr_t __arg1, float __arg2, float __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(float*)(args + __ARG_OFFSET_2__) = __arg2;
	*(float*)(args + __ARG_OFFSET_3__) = __arg3;

    float ret; Interpreter::Execute(method, args, &ret); return ret;
}


static double __N2M_r8u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    double ret; Interpreter::Execute(method, args, &ret); return ret;
}


static double __N2M_r8uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    double ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_0__ __N2M_s0u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_0__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_0__ __N2M_s0ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_0__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_10__ __N2M_s10u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_10__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_10__ __N2M_s10ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_10__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_127__ __N2M_s127u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_127__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_13__ __N2M_s13uu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    __struct_13__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_141__ __N2M_s141us100(uintptr_t __arg0, __struct_100__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_100__*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_141__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_141__ __N2M_s141uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_141__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_141__ __N2M_s141uus100(uintptr_t __arg0, uintptr_t __arg1, __struct_100__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_100__*)(args + __ARG_OFFSET_2__) = __arg2;

    __struct_141__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_14__ __N2M_s14u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_14__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_14__ __N2M_s14uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_14__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_15__ __N2M_s15u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_15__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_15__ __N2M_s15ui4i4i4i4i4i4i4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __ARG_OFFSET_7__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;
	constexpr int __ARG_SIZE_7__ = (sizeof(__arg7) + 7)/8;
	constexpr int __ARG_OFFSET_8__ = __ARG_OFFSET_7__ + __ARG_SIZE_7__;
	constexpr int __ARG_SIZE_8__ = (sizeof(__arg8) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_8__ + __ARG_SIZE_8__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(int32_t*)(args + __ARG_OFFSET_6__) = __arg6;
	*(int32_t*)(args + __ARG_OFFSET_7__) = __arg7;
	*(int32_t*)(args + __ARG_OFFSET_8__) = __arg8;

    __struct_15__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_15__ __N2M_s15uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_15__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_16__ __N2M_s16u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_16__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_18__ __N2M_s18u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_18__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_18__ __N2M_s18us18(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_18__*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_18__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_18__ __N2M_s18uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_18__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_1__ __N2M_s1u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_1__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_2__ __N2M_s2u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_2__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_2__ __N2M_s2uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_2__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_3__ __N2M_s3u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_3__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_3__ __N2M_s3ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_3__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_41__ __N2M_s41s41u(__struct_41__ __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_41__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_41__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_41__ __N2M_s41u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_41__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_41__ __N2M_s41us41u(uintptr_t __arg0, __struct_41__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_41__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    __struct_41__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_41__ __N2M_s41uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_41__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_50__ __N2M_s50u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_50__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_52__ __N2M_s52ur4i4r4i4(uintptr_t __arg0, float __arg1, int32_t __arg2, float __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(float*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    __struct_52__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_52__ __N2M_s52uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_52__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_52__ __N2M_s52uur4i4r4i4(uintptr_t __arg0, uintptr_t __arg1, float __arg2, int32_t __arg3, float __arg4, int32_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(float*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(float*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;

    __struct_52__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_5__ __N2M_s5u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_5__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_64__ __N2M_s64u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_64__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_67__ __N2M_s67(const MethodInfo* method)
{
    
	constexpr int __TOTAL_ARG_SIZE__ = 1;

    StackObject args[__TOTAL_ARG_SIZE__];

    __struct_67__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_67__ __N2M_s67u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_67__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_67__ __N2M_s67uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_67__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_6__ __N2M_s6u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_6__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_7__ __N2M_s7u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_7__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_7__ __N2M_s7ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_7__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_u(const MethodInfo* method)
{
    
	constexpr int __TOTAL_ARG_SIZE__ = 1;

    StackObject args[__TOTAL_ARG_SIZE__];

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1(const MethodInfo* method)
{
    
	constexpr int __TOTAL_ARG_SIZE__ = 1;

    StackObject args[__TOTAL_ARG_SIZE__];

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1i4(int32_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(int32_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1i4i(int32_t __arg0, intptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(int32_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1s10(__struct_10__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_10__*)(args + __ARG_OFFSET_0__) = __arg0;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1s3(__struct_3__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_3__*)(args + __ARG_OFFSET_0__) = __arg0;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1s7(__struct_7__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_7__*)(args + __ARG_OFFSET_0__) = __arg0;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui1(uintptr_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui2(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui4i(uintptr_t __arg0, int32_t __arg1, intptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(intptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui4u(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui4u1(uintptr_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ui8(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ur4(uintptr_t __arg0, float __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1ur8(uintptr_t __arg0, double __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(double*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us0(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_0__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us1(uintptr_t __arg0, __struct_1__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_1__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us10(uintptr_t __arg0, __struct_10__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_10__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us10s10(uintptr_t __arg0, __struct_10__ __arg1, __struct_10__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_10__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_10__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us14(uintptr_t __arg0, __struct_14__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_14__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us15(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_15__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us16(uintptr_t __arg0, __struct_16__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_16__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us16u(uintptr_t __arg0, __struct_16__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_16__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us16ui4(uintptr_t __arg0, __struct_16__ __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_16__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us18(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_18__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us19(uintptr_t __arg0, __struct_19__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_19__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us1s1(uintptr_t __arg0, __struct_1__ __arg1, __struct_1__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_1__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_1__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us1u(uintptr_t __arg0, __struct_1__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_1__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us2(uintptr_t __arg0, __struct_2__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_2__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us20(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us2s2(uintptr_t __arg0, __struct_2__ __arg1, __struct_2__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_2__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_2__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us3(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us32(uintptr_t __arg0, __struct_32__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_32__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us33(uintptr_t __arg0, __struct_33__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_33__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us38(uintptr_t __arg0, __struct_38__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_38__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us39(uintptr_t __arg0, __struct_39__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_39__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us3s3(uintptr_t __arg0, __struct_3__ __arg1, __struct_3__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_3__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us41(uintptr_t __arg0, __struct_41__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_41__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us48(uintptr_t __arg0, __struct_48__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_48__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us49(uintptr_t __arg0, __struct_49__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_49__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us5(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_5__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us50(uintptr_t __arg0, __struct_50__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_50__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us52(uintptr_t __arg0, __struct_52__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_52__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us53(uintptr_t __arg0, __struct_53__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_53__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us53uu(uintptr_t __arg0, __struct_53__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_53__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us54(uintptr_t __arg0, __struct_54__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_54__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us56(uintptr_t __arg0, __struct_56__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_56__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us59(uintptr_t __arg0, __struct_59__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_59__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us6(uintptr_t __arg0, __struct_6__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_6__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us60(uintptr_t __arg0, __struct_60__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_60__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us61(uintptr_t __arg0, __struct_61__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_61__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us62(uintptr_t __arg0, __struct_62__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_62__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us7(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us7s7(uintptr_t __arg0, __struct_7__ __arg1, __struct_7__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_7__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1us8s8(uintptr_t __arg0, __struct_8__ __arg1, __struct_8__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_8__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_8__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu1u1(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu2(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu2i4(uintptr_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu2u2i4(uintptr_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu4(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uu8(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uui4u(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uuu1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uuui4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_u1uuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint16_t __N2M_u2u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uint16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint16_t __N2M_u2uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint16_t __N2M_u2uu2(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint32_t __N2M_u4u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uint32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint32_t __N2M_u4uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint64_t __N2M_u8u(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uint64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint64_t __N2M_u8uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uu(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4i4uu(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4i8i8u1uu(uintptr_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, uint8_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int64_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int64_t*)(args + __ARG_OFFSET_3__) = __arg3;
	args[__ARG_OFFSET_4__].u64 = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4iuu(uintptr_t __arg0, int32_t __arg1, intptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(intptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4ui4uu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4uu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4uuu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4uuuu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui4uuuuuu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, uintptr_t __arg7, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __ARG_OFFSET_7__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;
	constexpr int __ARG_SIZE_7__ = (sizeof(__arg7) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_7__ + __ARG_SIZE_7__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;
	*(uintptr_t*)(args + __ARG_OFFSET_7__) = __arg7;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uui8(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuiuu(uintptr_t __arg0, intptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uur4uu(uintptr_t __arg0, float __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus1(uintptr_t __arg0, __struct_1__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_1__*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus101uu(uintptr_t __arg0, __struct_101__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_101__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus102uu(uintptr_t __arg0, __struct_102__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_102__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus102uuu(uintptr_t __arg0, __struct_102__ __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_102__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus10s10uu(uintptr_t __arg0, __struct_10__ __arg1, __struct_10__ __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_10__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_10__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus10uu(uintptr_t __arg0, __struct_10__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_10__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus2(uintptr_t __arg0, __struct_2__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_2__*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus2uu(uintptr_t __arg0, __struct_2__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_2__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus39i4uu(uintptr_t __arg0, __struct_39__ __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_39__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus39s39uu(uintptr_t __arg0, __struct_39__ __arg1, __struct_39__ __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_39__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_39__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus39uu(uintptr_t __arg0, __struct_39__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_39__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus3s3uu(uintptr_t __arg0, __struct_3__ __arg1, __struct_3__ __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_3__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus3uu(uintptr_t __arg0, __struct_3__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus41uuu(uintptr_t __arg0, __struct_41__ __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_41__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus59uu(uintptr_t __arg0, __struct_59__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_59__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus61uu(uintptr_t __arg0, __struct_61__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_61__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus7s7uu(uintptr_t __arg0, __struct_7__ __arg1, __struct_7__ __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_7__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus7uu(uintptr_t __arg0, __struct_7__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus94uu(uintptr_t __arg0, __struct_94__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_94__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uus97uu(uintptr_t __arg0, __struct_97__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_97__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuu1u1i4uu(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuu1uu(uintptr_t __arg0, uint8_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuu1uuu(uintptr_t __arg0, uint8_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuu8u8uu(uintptr_t __arg0, uint64_t __arg1, uint64_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uint64_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4i4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4i4uu(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4ui4uu(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, int32_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4uu(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4uuu(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4uuuu(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui4uuuuuu(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, uintptr_t __arg7, uintptr_t __arg8, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __ARG_OFFSET_7__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;
	constexpr int __ARG_SIZE_7__ = (sizeof(__arg7) + 7)/8;
	constexpr int __ARG_OFFSET_8__ = __ARG_OFFSET_7__ + __ARG_SIZE_7__;
	constexpr int __ARG_SIZE_8__ = (sizeof(__arg8) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_8__ + __ARG_SIZE_8__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;
	*(uintptr_t*)(args + __ARG_OFFSET_7__) = __arg7;
	*(uintptr_t*)(args + __ARG_OFFSET_8__) = __arg8;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuui8uu(uintptr_t __arg0, uintptr_t __arg1, int64_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int64_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuur4i4r4i4uu(uintptr_t __arg0, uintptr_t __arg1, float __arg2, int32_t __arg3, float __arg4, int32_t __arg5, uintptr_t __arg6, uintptr_t __arg7, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __ARG_OFFSET_7__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;
	constexpr int __ARG_SIZE_7__ = (sizeof(__arg7) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_7__ + __ARG_SIZE_7__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(float*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(float*)(args + __ARG_OFFSET_4__) = __arg4;
	*(int32_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;
	*(uintptr_t*)(args + __ARG_OFFSET_7__) = __arg7;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuur4r4uu(uintptr_t __arg0, uintptr_t __arg1, float __arg2, float __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(float*)(args + __ARG_OFFSET_2__) = __arg2;
	*(float*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuur8uu(uintptr_t __arg0, uintptr_t __arg1, double __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(double*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuus100uu(uintptr_t __arg0, uintptr_t __arg1, __struct_100__ __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_100__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuus14u1uu(uintptr_t __arg0, uintptr_t __arg1, __struct_14__ __arg2, uint8_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_14__*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuus20uu(uintptr_t __arg0, uintptr_t __arg1, __struct_20__ __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_20__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuus2u(uintptr_t __arg0, uintptr_t __arg1, __struct_2__ __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_2__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuu1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuu1s95uu(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, __struct_95__ __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	*(__struct_95__*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuu1u1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuu1uu(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuu4uu(uintptr_t __arg0, uintptr_t __arg1, uint32_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uint32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuui4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuui4uu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuus14u1uu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_14__ __arg3, uint8_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_14__*)(args + __ARG_OFFSET_3__) = __arg3;
	args[__ARG_OFFSET_4__].u64 = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuus2u(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_2__ __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_2__*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuuu1(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuuu1uu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuuui4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_uuuuuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static void __N2M_v(const MethodInfo* method)
{
    
	constexpr int __TOTAL_ARG_SIZE__ = 1;

    StackObject args[__TOTAL_ARG_SIZE__];

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vi(intptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(intptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vi4(int32_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(int32_t*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vi4i8i8u1(int32_t __arg0, int64_t __arg1, int64_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(int32_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int64_t*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vi4u(int32_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(int32_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vr4(float __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(float*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs101(__struct_101__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_101__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs102(__struct_102__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_102__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs102u(__struct_102__ __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_102__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs2(__struct_2__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_2__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs3(__struct_3__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_3__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs39(__struct_39__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_39__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs39i4(__struct_39__ __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_39__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs39s39(__struct_39__ __arg0, __struct_39__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_39__*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_39__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs59(__struct_59__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_59__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs61(__struct_61__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_61__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs94(__struct_94__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_94__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vs97(__struct_97__ __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(__struct_97__*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vu(uintptr_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vu1(uint8_t __arg0, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	args[__ARG_OFFSET_0__].u64 = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vu1u(uint8_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	args[__ARG_OFFSET_0__].u64 = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vu1u1i4(uint8_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	args[__ARG_OFFSET_0__].u64 = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui2(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4i8i8u1(uintptr_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, uint8_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int64_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int64_t*)(args + __ARG_OFFSET_3__) = __arg3;
	args[__ARG_OFFSET_4__].u64 = __arg4;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4s0(uintptr_t __arg0, int32_t __arg1, __struct_0__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_0__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4s10(uintptr_t __arg0, int32_t __arg1, __struct_10__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_10__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4s3(uintptr_t __arg0, int32_t __arg1, __struct_3__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_3__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4s7(uintptr_t __arg0, int32_t __arg1, __struct_7__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_7__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4u(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4uu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui4uuu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui8(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vui8ui8(uintptr_t __arg0, int64_t __arg1, uintptr_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int64_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vur4(uintptr_t __arg0, float __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vur4r4(uintptr_t __arg0, float __arg1, float __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;
	*(float*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vur8(uintptr_t __arg0, double __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(double*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus0(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_0__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus1(uintptr_t __arg0, __struct_1__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_1__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus10(uintptr_t __arg0, __struct_10__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_10__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus101(uintptr_t __arg0, __struct_101__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_101__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus102(uintptr_t __arg0, __struct_102__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_102__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus102u(uintptr_t __arg0, __struct_102__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_102__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus14u1(uintptr_t __arg0, __struct_14__ __arg1, uint8_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_14__*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus16(uintptr_t __arg0, __struct_16__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_16__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus16u(uintptr_t __arg0, __struct_16__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_16__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus16ui4(uintptr_t __arg0, __struct_16__ __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_16__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus1u(uintptr_t __arg0, __struct_1__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_1__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus2(uintptr_t __arg0, __struct_2__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_2__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus20(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus3(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus39(uintptr_t __arg0, __struct_39__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_39__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus39i4(uintptr_t __arg0, __struct_39__ __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_39__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus39s39(uintptr_t __arg0, __struct_39__ __arg1, __struct_39__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_39__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_39__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus41(uintptr_t __arg0, __struct_41__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_41__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus41s132(uintptr_t __arg0, __struct_41__ __arg1, __struct_132__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_41__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_132__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus41s132u(uintptr_t __arg0, __struct_41__ __arg1, __struct_132__ __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_41__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_132__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus41uu(uintptr_t __arg0, __struct_41__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_41__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus5(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_5__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus50u(uintptr_t __arg0, __struct_50__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_50__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus50uu(uintptr_t __arg0, __struct_50__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_50__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus53u(uintptr_t __arg0, __struct_53__ __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_53__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus53uu(uintptr_t __arg0, __struct_53__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_53__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus59(uintptr_t __arg0, __struct_59__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_59__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus6(uintptr_t __arg0, __struct_6__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_6__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus61(uintptr_t __arg0, __struct_61__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_61__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus7(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus94(uintptr_t __arg0, __struct_94__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_94__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vus97(uintptr_t __arg0, __struct_97__ __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_97__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vutypedbyrefu(uintptr_t __arg0, Il2CppTypedRef __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(Il2CppTypedRef*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu1s95(uintptr_t __arg0, uint8_t __arg1, __struct_95__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	*(__struct_95__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu1u(uintptr_t __arg0, uint8_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu1u1i4(uintptr_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu2(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu4(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuu8(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuui4i4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuui4s41(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, __struct_41__ __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_41__*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuui8(uintptr_t __arg0, uintptr_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int64_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuur8(uintptr_t __arg0, uintptr_t __arg1, double __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(double*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuus135i4(uintptr_t __arg0, uintptr_t __arg1, __struct_135__ __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_135__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuus135i4s41(uintptr_t __arg0, uintptr_t __arg1, __struct_135__ __arg2, int32_t __arg3, __struct_41__ __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_135__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(__struct_41__*)(args + __ARG_OFFSET_4__) = __arg4;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuus14u1(uintptr_t __arg0, uintptr_t __arg1, __struct_14__ __arg2, uint8_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_14__*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuus2(uintptr_t __arg0, uintptr_t __arg1, __struct_2__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_2__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuus20(uintptr_t __arg0, uintptr_t __arg1, __struct_20__ __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_20__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuu1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuu1s95(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, __struct_95__ __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	*(__struct_95__*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuu1u1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuu4(uintptr_t __arg0, uintptr_t __arg1, uint32_t __arg2, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uint32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuui4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuui4uu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuui4uuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, int32_t __arg3, uintptr_t __arg4, uintptr_t __arg5, uintptr_t __arg6, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __ARG_OFFSET_5__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;
	constexpr int __ARG_SIZE_5__ = (sizeof(__arg5) + 7)/8;
	constexpr int __ARG_OFFSET_6__ = __ARG_OFFSET_5__ + __ARG_SIZE_5__;
	constexpr int __ARG_SIZE_6__ = (sizeof(__arg6) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_6__ + __ARG_SIZE_6__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;
	*(uintptr_t*)(args + __ARG_OFFSET_5__) = __arg5;
	*(uintptr_t*)(args + __ARG_OFFSET_6__) = __arg6;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuus14u1(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_14__ __arg3, uint8_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_14__*)(args + __ARG_OFFSET_3__) = __arg3;
	args[__ARG_OFFSET_4__].u64 = __arg4;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuus2(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_2__ __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_2__*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuuu1(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_vuuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    Interpreter::Execute(method, args, nullptr);
}


Native2ManagedMethodInfo hybridclr::interpreter::g_native2managedStub[] = 
{

	{"i1u", (Il2CppMethodPointer)__N2M_i1u},
	{"i1uu", (Il2CppMethodPointer)__N2M_i1uu},
	{"i2u", (Il2CppMethodPointer)__N2M_i2u},
	{"i2uu", (Il2CppMethodPointer)__N2M_i2uu},
	{"i4", (Il2CppMethodPointer)__N2M_i4},
	{"i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4},
	{"i4s10s10", (Il2CppMethodPointer)__N2M_i4s10s10},
	{"i4s3s3", (Il2CppMethodPointer)__N2M_i4s3s3},
	{"i4s7s7", (Il2CppMethodPointer)__N2M_i4s7s7},
	{"i4u", (Il2CppMethodPointer)__N2M_i4u},
	{"i4u8u8", (Il2CppMethodPointer)__N2M_i4u8u8},
	{"i4ui1", (Il2CppMethodPointer)__N2M_i4ui1},
	{"i4ui2", (Il2CppMethodPointer)__N2M_i4ui2},
	{"i4ui4", (Il2CppMethodPointer)__N2M_i4ui4},
	{"i4ui4i4", (Il2CppMethodPointer)__N2M_i4ui4i4},
	{"i4ui4i4i4", (Il2CppMethodPointer)__N2M_i4ui4i4i4},
	{"i4ui8", (Il2CppMethodPointer)__N2M_i4ui8},
	{"i4ur4", (Il2CppMethodPointer)__N2M_i4ur4},
	{"i4ur8", (Il2CppMethodPointer)__N2M_i4ur8},
	{"i4us0", (Il2CppMethodPointer)__N2M_i4us0},
	{"i4us1", (Il2CppMethodPointer)__N2M_i4us1},
	{"i4us10", (Il2CppMethodPointer)__N2M_i4us10},
	{"i4us10s10", (Il2CppMethodPointer)__N2M_i4us10s10},
	{"i4us14", (Il2CppMethodPointer)__N2M_i4us14},
	{"i4us15", (Il2CppMethodPointer)__N2M_i4us15},
	{"i4us16", (Il2CppMethodPointer)__N2M_i4us16},
	{"i4us18", (Il2CppMethodPointer)__N2M_i4us18},
	{"i4us2", (Il2CppMethodPointer)__N2M_i4us2},
	{"i4us3", (Il2CppMethodPointer)__N2M_i4us3},
	{"i4us3s3", (Il2CppMethodPointer)__N2M_i4us3s3},
	{"i4us7", (Il2CppMethodPointer)__N2M_i4us7},
	{"i4us7s7", (Il2CppMethodPointer)__N2M_i4us7s7},
	{"i4us8", (Il2CppMethodPointer)__N2M_i4us8},
	{"i4us8s8", (Il2CppMethodPointer)__N2M_i4us8s8},
	{"i4uu", (Il2CppMethodPointer)__N2M_i4uu},
	{"i4uu1", (Il2CppMethodPointer)__N2M_i4uu1},
	{"i4uu2", (Il2CppMethodPointer)__N2M_i4uu2},
	{"i4uu4", (Il2CppMethodPointer)__N2M_i4uu4},
	{"i4uu8", (Il2CppMethodPointer)__N2M_i4uu8},
	{"i4uu8u8", (Il2CppMethodPointer)__N2M_i4uu8u8},
	{"i4uui4", (Il2CppMethodPointer)__N2M_i4uui4},
	{"i4uui4i4", (Il2CppMethodPointer)__N2M_i4uui4i4},
	{"i4uui4i4i4", (Il2CppMethodPointer)__N2M_i4uui4i4i4},
	{"i4uui4i4u1", (Il2CppMethodPointer)__N2M_i4uui4i4u1},
	{"i4uui4i4ui4", (Il2CppMethodPointer)__N2M_i4uui4i4ui4},
	{"i4uui4i4ui4i4i4", (Il2CppMethodPointer)__N2M_i4uui4i4ui4i4i4},
	{"i4uui4i4ui4u1", (Il2CppMethodPointer)__N2M_i4uui4i4ui4u1},
	{"i4uui4u1", (Il2CppMethodPointer)__N2M_i4uui4u1},
	{"i4uui4ui4", (Il2CppMethodPointer)__N2M_i4uui4ui4},
	{"i4uui4ui4u1", (Il2CppMethodPointer)__N2M_i4uui4ui4u1},
	{"i4uus10i4i4", (Il2CppMethodPointer)__N2M_i4uus10i4i4},
	{"i4uus1i4i4", (Il2CppMethodPointer)__N2M_i4uus1i4i4},
	{"i4uus2i4i4", (Il2CppMethodPointer)__N2M_i4uus2i4i4},
	{"i4uus3i4i4", (Il2CppMethodPointer)__N2M_i4uus3i4i4},
	{"i4uus7i4i4", (Il2CppMethodPointer)__N2M_i4uus7i4i4},
	{"i4uus8i4i4", (Il2CppMethodPointer)__N2M_i4uus8i4i4},
	{"i4uuu", (Il2CppMethodPointer)__N2M_i4uuu},
	{"i4uuu1i4i4", (Il2CppMethodPointer)__N2M_i4uuu1i4i4},
	{"i4uuui4", (Il2CppMethodPointer)__N2M_i4uuui4},
	{"i4uuui4i4", (Il2CppMethodPointer)__N2M_i4uuui4i4},
	{"i4uuui4i4i4", (Il2CppMethodPointer)__N2M_i4uuui4i4i4},
	{"i8u", (Il2CppMethodPointer)__N2M_i8u},
	{"i8ui8i4", (Il2CppMethodPointer)__N2M_i8ui8i4},
	{"i8uu", (Il2CppMethodPointer)__N2M_i8uu},
	{"i8uuu", (Il2CppMethodPointer)__N2M_i8uuu},
	{"iuu", (Il2CppMethodPointer)__N2M_iuu},
	{"r4u", (Il2CppMethodPointer)__N2M_r4u},
	{"r4ur4r4", (Il2CppMethodPointer)__N2M_r4ur4r4},
	{"r4uu", (Il2CppMethodPointer)__N2M_r4uu},
	{"r4uur4r4", (Il2CppMethodPointer)__N2M_r4uur4r4},
	{"r8u", (Il2CppMethodPointer)__N2M_r8u},
	{"r8uu", (Il2CppMethodPointer)__N2M_r8uu},
	{"s0u", (Il2CppMethodPointer)__N2M_s0u},
	{"s0ui4", (Il2CppMethodPointer)__N2M_s0ui4},
	{"s10u", (Il2CppMethodPointer)__N2M_s10u},
	{"s10ui4", (Il2CppMethodPointer)__N2M_s10ui4},
	{"s127u", (Il2CppMethodPointer)__N2M_s127u},
	{"s13uu1", (Il2CppMethodPointer)__N2M_s13uu1},
	{"s141us100", (Il2CppMethodPointer)__N2M_s141us100},
	{"s141uu", (Il2CppMethodPointer)__N2M_s141uu},
	{"s141uus100", (Il2CppMethodPointer)__N2M_s141uus100},
	{"s14u", (Il2CppMethodPointer)__N2M_s14u},
	{"s14uu", (Il2CppMethodPointer)__N2M_s14uu},
	{"s15u", (Il2CppMethodPointer)__N2M_s15u},
	{"s15ui4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_s15ui4i4i4i4i4i4i4i4},
	{"s15uu", (Il2CppMethodPointer)__N2M_s15uu},
	{"s16u", (Il2CppMethodPointer)__N2M_s16u},
	{"s18u", (Il2CppMethodPointer)__N2M_s18u},
	{"s18us18", (Il2CppMethodPointer)__N2M_s18us18},
	{"s18uu", (Il2CppMethodPointer)__N2M_s18uu},
	{"s1u", (Il2CppMethodPointer)__N2M_s1u},
	{"s2u", (Il2CppMethodPointer)__N2M_s2u},
	{"s2uu", (Il2CppMethodPointer)__N2M_s2uu},
	{"s3u", (Il2CppMethodPointer)__N2M_s3u},
	{"s3ui4", (Il2CppMethodPointer)__N2M_s3ui4},
	{"s41s41u", (Il2CppMethodPointer)__N2M_s41s41u},
	{"s41u", (Il2CppMethodPointer)__N2M_s41u},
	{"s41us41u", (Il2CppMethodPointer)__N2M_s41us41u},
	{"s41uu", (Il2CppMethodPointer)__N2M_s41uu},
	{"s50u", (Il2CppMethodPointer)__N2M_s50u},
	{"s52ur4i4r4i4", (Il2CppMethodPointer)__N2M_s52ur4i4r4i4},
	{"s52uu", (Il2CppMethodPointer)__N2M_s52uu},
	{"s52uur4i4r4i4", (Il2CppMethodPointer)__N2M_s52uur4i4r4i4},
	{"s5u", (Il2CppMethodPointer)__N2M_s5u},
	{"s64u", (Il2CppMethodPointer)__N2M_s64u},
	{"s67", (Il2CppMethodPointer)__N2M_s67},
	{"s67u", (Il2CppMethodPointer)__N2M_s67u},
	{"s67uu", (Il2CppMethodPointer)__N2M_s67uu},
	{"s6u", (Il2CppMethodPointer)__N2M_s6u},
	{"s7u", (Il2CppMethodPointer)__N2M_s7u},
	{"s7ui4", (Il2CppMethodPointer)__N2M_s7ui4},
	{"u", (Il2CppMethodPointer)__N2M_u},
	{"u1", (Il2CppMethodPointer)__N2M_u1},
	{"u1i4", (Il2CppMethodPointer)__N2M_u1i4},
	{"u1i4i", (Il2CppMethodPointer)__N2M_u1i4i},
	{"u1s10", (Il2CppMethodPointer)__N2M_u1s10},
	{"u1s3", (Il2CppMethodPointer)__N2M_u1s3},
	{"u1s7", (Il2CppMethodPointer)__N2M_u1s7},
	{"u1u", (Il2CppMethodPointer)__N2M_u1u},
	{"u1ui1", (Il2CppMethodPointer)__N2M_u1ui1},
	{"u1ui2", (Il2CppMethodPointer)__N2M_u1ui2},
	{"u1ui4", (Il2CppMethodPointer)__N2M_u1ui4},
	{"u1ui4i", (Il2CppMethodPointer)__N2M_u1ui4i},
	{"u1ui4i4", (Il2CppMethodPointer)__N2M_u1ui4i4},
	{"u1ui4u", (Il2CppMethodPointer)__N2M_u1ui4u},
	{"u1ui4u1", (Il2CppMethodPointer)__N2M_u1ui4u1},
	{"u1ui8", (Il2CppMethodPointer)__N2M_u1ui8},
	{"u1ur4", (Il2CppMethodPointer)__N2M_u1ur4},
	{"u1ur8", (Il2CppMethodPointer)__N2M_u1ur8},
	{"u1us0", (Il2CppMethodPointer)__N2M_u1us0},
	{"u1us1", (Il2CppMethodPointer)__N2M_u1us1},
	{"u1us10", (Il2CppMethodPointer)__N2M_u1us10},
	{"u1us10s10", (Il2CppMethodPointer)__N2M_u1us10s10},
	{"u1us14", (Il2CppMethodPointer)__N2M_u1us14},
	{"u1us15", (Il2CppMethodPointer)__N2M_u1us15},
	{"u1us16", (Il2CppMethodPointer)__N2M_u1us16},
	{"u1us16u", (Il2CppMethodPointer)__N2M_u1us16u},
	{"u1us16ui4", (Il2CppMethodPointer)__N2M_u1us16ui4},
	{"u1us18", (Il2CppMethodPointer)__N2M_u1us18},
	{"u1us19", (Il2CppMethodPointer)__N2M_u1us19},
	{"u1us1s1", (Il2CppMethodPointer)__N2M_u1us1s1},
	{"u1us1u", (Il2CppMethodPointer)__N2M_u1us1u},
	{"u1us2", (Il2CppMethodPointer)__N2M_u1us2},
	{"u1us20", (Il2CppMethodPointer)__N2M_u1us20},
	{"u1us2s2", (Il2CppMethodPointer)__N2M_u1us2s2},
	{"u1us3", (Il2CppMethodPointer)__N2M_u1us3},
	{"u1us32", (Il2CppMethodPointer)__N2M_u1us32},
	{"u1us33", (Il2CppMethodPointer)__N2M_u1us33},
	{"u1us38", (Il2CppMethodPointer)__N2M_u1us38},
	{"u1us39", (Il2CppMethodPointer)__N2M_u1us39},
	{"u1us3s3", (Il2CppMethodPointer)__N2M_u1us3s3},
	{"u1us41", (Il2CppMethodPointer)__N2M_u1us41},
	{"u1us48", (Il2CppMethodPointer)__N2M_u1us48},
	{"u1us49", (Il2CppMethodPointer)__N2M_u1us49},
	{"u1us5", (Il2CppMethodPointer)__N2M_u1us5},
	{"u1us50", (Il2CppMethodPointer)__N2M_u1us50},
	{"u1us52", (Il2CppMethodPointer)__N2M_u1us52},
	{"u1us53", (Il2CppMethodPointer)__N2M_u1us53},
	{"u1us53uu", (Il2CppMethodPointer)__N2M_u1us53uu},
	{"u1us54", (Il2CppMethodPointer)__N2M_u1us54},
	{"u1us56", (Il2CppMethodPointer)__N2M_u1us56},
	{"u1us59", (Il2CppMethodPointer)__N2M_u1us59},
	{"u1us6", (Il2CppMethodPointer)__N2M_u1us6},
	{"u1us60", (Il2CppMethodPointer)__N2M_u1us60},
	{"u1us61", (Il2CppMethodPointer)__N2M_u1us61},
	{"u1us62", (Il2CppMethodPointer)__N2M_u1us62},
	{"u1us7", (Il2CppMethodPointer)__N2M_u1us7},
	{"u1us7s7", (Il2CppMethodPointer)__N2M_u1us7s7},
	{"u1us8s8", (Il2CppMethodPointer)__N2M_u1us8s8},
	{"u1uu", (Il2CppMethodPointer)__N2M_u1uu},
	{"u1uu1", (Il2CppMethodPointer)__N2M_u1uu1},
	{"u1uu1u1", (Il2CppMethodPointer)__N2M_u1uu1u1},
	{"u1uu2", (Il2CppMethodPointer)__N2M_u1uu2},
	{"u1uu2i4", (Il2CppMethodPointer)__N2M_u1uu2i4},
	{"u1uu2u2i4", (Il2CppMethodPointer)__N2M_u1uu2u2i4},
	{"u1uu4", (Il2CppMethodPointer)__N2M_u1uu4},
	{"u1uu8", (Il2CppMethodPointer)__N2M_u1uu8},
	{"u1uui4", (Il2CppMethodPointer)__N2M_u1uui4},
	{"u1uui4u", (Il2CppMethodPointer)__N2M_u1uui4u},
	{"u1uuu", (Il2CppMethodPointer)__N2M_u1uuu},
	{"u1uuu1", (Il2CppMethodPointer)__N2M_u1uuu1},
	{"u1uuui4", (Il2CppMethodPointer)__N2M_u1uuui4},
	{"u1uuuu", (Il2CppMethodPointer)__N2M_u1uuuu},
	{"u2u", (Il2CppMethodPointer)__N2M_u2u},
	{"u2uu", (Il2CppMethodPointer)__N2M_u2uu},
	{"u2uu2", (Il2CppMethodPointer)__N2M_u2uu2},
	{"u4u", (Il2CppMethodPointer)__N2M_u4u},
	{"u4uu", (Il2CppMethodPointer)__N2M_u4uu},
	{"u8u", (Il2CppMethodPointer)__N2M_u8u},
	{"u8uu", (Il2CppMethodPointer)__N2M_u8uu},
	{"uu", (Il2CppMethodPointer)__N2M_uu},
	{"uui", (Il2CppMethodPointer)__N2M_uui},
	{"uui4", (Il2CppMethodPointer)__N2M_uui4},
	{"uui4i4uu", (Il2CppMethodPointer)__N2M_uui4i4uu},
	{"uui4i8i8u1uu", (Il2CppMethodPointer)__N2M_uui4i8i8u1uu},
	{"uui4iuu", (Il2CppMethodPointer)__N2M_uui4iuu},
	{"uui4ui4uu", (Il2CppMethodPointer)__N2M_uui4ui4uu},
	{"uui4uu", (Il2CppMethodPointer)__N2M_uui4uu},
	{"uui4uuu", (Il2CppMethodPointer)__N2M_uui4uuu},
	{"uui4uuuu", (Il2CppMethodPointer)__N2M_uui4uuuu},
	{"uui4uuuuuu", (Il2CppMethodPointer)__N2M_uui4uuuuuu},
	{"uui8", (Il2CppMethodPointer)__N2M_uui8},
	{"uuiuu", (Il2CppMethodPointer)__N2M_uuiuu},
	{"uur4uu", (Il2CppMethodPointer)__N2M_uur4uu},
	{"uus1", (Il2CppMethodPointer)__N2M_uus1},
	{"uus101uu", (Il2CppMethodPointer)__N2M_uus101uu},
	{"uus102uu", (Il2CppMethodPointer)__N2M_uus102uu},
	{"uus102uuu", (Il2CppMethodPointer)__N2M_uus102uuu},
	{"uus10s10uu", (Il2CppMethodPointer)__N2M_uus10s10uu},
	{"uus10uu", (Il2CppMethodPointer)__N2M_uus10uu},
	{"uus2", (Il2CppMethodPointer)__N2M_uus2},
	{"uus2uu", (Il2CppMethodPointer)__N2M_uus2uu},
	{"uus39i4uu", (Il2CppMethodPointer)__N2M_uus39i4uu},
	{"uus39s39uu", (Il2CppMethodPointer)__N2M_uus39s39uu},
	{"uus39uu", (Il2CppMethodPointer)__N2M_uus39uu},
	{"uus3s3uu", (Il2CppMethodPointer)__N2M_uus3s3uu},
	{"uus3uu", (Il2CppMethodPointer)__N2M_uus3uu},
	{"uus41uuu", (Il2CppMethodPointer)__N2M_uus41uuu},
	{"uus59uu", (Il2CppMethodPointer)__N2M_uus59uu},
	{"uus61uu", (Il2CppMethodPointer)__N2M_uus61uu},
	{"uus7s7uu", (Il2CppMethodPointer)__N2M_uus7s7uu},
	{"uus7uu", (Il2CppMethodPointer)__N2M_uus7uu},
	{"uus94uu", (Il2CppMethodPointer)__N2M_uus94uu},
	{"uus97uu", (Il2CppMethodPointer)__N2M_uus97uu},
	{"uuu", (Il2CppMethodPointer)__N2M_uuu},
	{"uuu1", (Il2CppMethodPointer)__N2M_uuu1},
	{"uuu1u1i4uu", (Il2CppMethodPointer)__N2M_uuu1u1i4uu},
	{"uuu1uu", (Il2CppMethodPointer)__N2M_uuu1uu},
	{"uuu1uuu", (Il2CppMethodPointer)__N2M_uuu1uuu},
	{"uuu8u8uu", (Il2CppMethodPointer)__N2M_uuu8u8uu},
	{"uuui4", (Il2CppMethodPointer)__N2M_uuui4},
	{"uuui4i4", (Il2CppMethodPointer)__N2M_uuui4i4},
	{"uuui4i4uu", (Il2CppMethodPointer)__N2M_uuui4i4uu},
	{"uuui4ui4uu", (Il2CppMethodPointer)__N2M_uuui4ui4uu},
	{"uuui4uu", (Il2CppMethodPointer)__N2M_uuui4uu},
	{"uuui4uuu", (Il2CppMethodPointer)__N2M_uuui4uuu},
	{"uuui4uuuu", (Il2CppMethodPointer)__N2M_uuui4uuuu},
	{"uuui4uuuuuu", (Il2CppMethodPointer)__N2M_uuui4uuuuuu},
	{"uuui8uu", (Il2CppMethodPointer)__N2M_uuui8uu},
	{"uuur4i4r4i4uu", (Il2CppMethodPointer)__N2M_uuur4i4r4i4uu},
	{"uuur4r4uu", (Il2CppMethodPointer)__N2M_uuur4r4uu},
	{"uuur8uu", (Il2CppMethodPointer)__N2M_uuur8uu},
	{"uuus100uu", (Il2CppMethodPointer)__N2M_uuus100uu},
	{"uuus14u1uu", (Il2CppMethodPointer)__N2M_uuus14u1uu},
	{"uuus20uu", (Il2CppMethodPointer)__N2M_uuus20uu},
	{"uuus2u", (Il2CppMethodPointer)__N2M_uuus2u},
	{"uuuu", (Il2CppMethodPointer)__N2M_uuuu},
	{"uuuu1", (Il2CppMethodPointer)__N2M_uuuu1},
	{"uuuu1s95uu", (Il2CppMethodPointer)__N2M_uuuu1s95uu},
	{"uuuu1u1", (Il2CppMethodPointer)__N2M_uuuu1u1},
	{"uuuu1uu", (Il2CppMethodPointer)__N2M_uuuu1uu},
	{"uuuu4uu", (Il2CppMethodPointer)__N2M_uuuu4uu},
	{"uuuui4", (Il2CppMethodPointer)__N2M_uuuui4},
	{"uuuui4uu", (Il2CppMethodPointer)__N2M_uuuui4uu},
	{"uuuus14u1uu", (Il2CppMethodPointer)__N2M_uuuus14u1uu},
	{"uuuus2u", (Il2CppMethodPointer)__N2M_uuuus2u},
	{"uuuuu", (Il2CppMethodPointer)__N2M_uuuuu},
	{"uuuuu1", (Il2CppMethodPointer)__N2M_uuuuu1},
	{"uuuuu1uu", (Il2CppMethodPointer)__N2M_uuuuu1uu},
	{"uuuuui4", (Il2CppMethodPointer)__N2M_uuuuui4},
	{"uuuuuu", (Il2CppMethodPointer)__N2M_uuuuuu},
	{"uuuuuuu", (Il2CppMethodPointer)__N2M_uuuuuuu},
	{"uuuuuuuu", (Il2CppMethodPointer)__N2M_uuuuuuuu},
	{"v", (Il2CppMethodPointer)__N2M_v},
	{"vi", (Il2CppMethodPointer)__N2M_vi},
	{"vi4", (Il2CppMethodPointer)__N2M_vi4},
	{"vi4i8i8u1", (Il2CppMethodPointer)__N2M_vi4i8i8u1},
	{"vi4u", (Il2CppMethodPointer)__N2M_vi4u},
	{"vr4", (Il2CppMethodPointer)__N2M_vr4},
	{"vs101", (Il2CppMethodPointer)__N2M_vs101},
	{"vs102", (Il2CppMethodPointer)__N2M_vs102},
	{"vs102u", (Il2CppMethodPointer)__N2M_vs102u},
	{"vs2", (Il2CppMethodPointer)__N2M_vs2},
	{"vs3", (Il2CppMethodPointer)__N2M_vs3},
	{"vs39", (Il2CppMethodPointer)__N2M_vs39},
	{"vs39i4", (Il2CppMethodPointer)__N2M_vs39i4},
	{"vs39s39", (Il2CppMethodPointer)__N2M_vs39s39},
	{"vs59", (Il2CppMethodPointer)__N2M_vs59},
	{"vs61", (Il2CppMethodPointer)__N2M_vs61},
	{"vs94", (Il2CppMethodPointer)__N2M_vs94},
	{"vs97", (Il2CppMethodPointer)__N2M_vs97},
	{"vu", (Il2CppMethodPointer)__N2M_vu},
	{"vu1", (Il2CppMethodPointer)__N2M_vu1},
	{"vu1u", (Il2CppMethodPointer)__N2M_vu1u},
	{"vu1u1i4", (Il2CppMethodPointer)__N2M_vu1u1i4},
	{"vui", (Il2CppMethodPointer)__N2M_vui},
	{"vui2", (Il2CppMethodPointer)__N2M_vui2},
	{"vui4", (Il2CppMethodPointer)__N2M_vui4},
	{"vui4i4", (Il2CppMethodPointer)__N2M_vui4i4},
	{"vui4i8i8u1", (Il2CppMethodPointer)__N2M_vui4i8i8u1},
	{"vui4s0", (Il2CppMethodPointer)__N2M_vui4s0},
	{"vui4s10", (Il2CppMethodPointer)__N2M_vui4s10},
	{"vui4s3", (Il2CppMethodPointer)__N2M_vui4s3},
	{"vui4s7", (Il2CppMethodPointer)__N2M_vui4s7},
	{"vui4u", (Il2CppMethodPointer)__N2M_vui4u},
	{"vui4uu", (Il2CppMethodPointer)__N2M_vui4uu},
	{"vui4uuu", (Il2CppMethodPointer)__N2M_vui4uuu},
	{"vui8", (Il2CppMethodPointer)__N2M_vui8},
	{"vui8ui8", (Il2CppMethodPointer)__N2M_vui8ui8},
	{"vur4", (Il2CppMethodPointer)__N2M_vur4},
	{"vur4r4", (Il2CppMethodPointer)__N2M_vur4r4},
	{"vur8", (Il2CppMethodPointer)__N2M_vur8},
	{"vus0", (Il2CppMethodPointer)__N2M_vus0},
	{"vus1", (Il2CppMethodPointer)__N2M_vus1},
	{"vus10", (Il2CppMethodPointer)__N2M_vus10},
	{"vus101", (Il2CppMethodPointer)__N2M_vus101},
	{"vus102", (Il2CppMethodPointer)__N2M_vus102},
	{"vus102u", (Il2CppMethodPointer)__N2M_vus102u},
	{"vus14u1", (Il2CppMethodPointer)__N2M_vus14u1},
	{"vus16", (Il2CppMethodPointer)__N2M_vus16},
	{"vus16u", (Il2CppMethodPointer)__N2M_vus16u},
	{"vus16ui4", (Il2CppMethodPointer)__N2M_vus16ui4},
	{"vus1u", (Il2CppMethodPointer)__N2M_vus1u},
	{"vus2", (Il2CppMethodPointer)__N2M_vus2},
	{"vus20", (Il2CppMethodPointer)__N2M_vus20},
	{"vus3", (Il2CppMethodPointer)__N2M_vus3},
	{"vus39", (Il2CppMethodPointer)__N2M_vus39},
	{"vus39i4", (Il2CppMethodPointer)__N2M_vus39i4},
	{"vus39s39", (Il2CppMethodPointer)__N2M_vus39s39},
	{"vus41", (Il2CppMethodPointer)__N2M_vus41},
	{"vus41s132", (Il2CppMethodPointer)__N2M_vus41s132},
	{"vus41s132u", (Il2CppMethodPointer)__N2M_vus41s132u},
	{"vus41uu", (Il2CppMethodPointer)__N2M_vus41uu},
	{"vus5", (Il2CppMethodPointer)__N2M_vus5},
	{"vus50u", (Il2CppMethodPointer)__N2M_vus50u},
	{"vus50uu", (Il2CppMethodPointer)__N2M_vus50uu},
	{"vus53u", (Il2CppMethodPointer)__N2M_vus53u},
	{"vus53uu", (Il2CppMethodPointer)__N2M_vus53uu},
	{"vus59", (Il2CppMethodPointer)__N2M_vus59},
	{"vus6", (Il2CppMethodPointer)__N2M_vus6},
	{"vus61", (Il2CppMethodPointer)__N2M_vus61},
	{"vus7", (Il2CppMethodPointer)__N2M_vus7},
	{"vus94", (Il2CppMethodPointer)__N2M_vus94},
	{"vus97", (Il2CppMethodPointer)__N2M_vus97},
	{"vutypedbyrefu", (Il2CppMethodPointer)__N2M_vutypedbyrefu},
	{"vuu", (Il2CppMethodPointer)__N2M_vuu},
	{"vuu1", (Il2CppMethodPointer)__N2M_vuu1},
	{"vuu1s95", (Il2CppMethodPointer)__N2M_vuu1s95},
	{"vuu1u", (Il2CppMethodPointer)__N2M_vuu1u},
	{"vuu1u1i4", (Il2CppMethodPointer)__N2M_vuu1u1i4},
	{"vuu2", (Il2CppMethodPointer)__N2M_vuu2},
	{"vuu4", (Il2CppMethodPointer)__N2M_vuu4},
	{"vuu8", (Il2CppMethodPointer)__N2M_vuu8},
	{"vuui4", (Il2CppMethodPointer)__N2M_vuui4},
	{"vuui4i4", (Il2CppMethodPointer)__N2M_vuui4i4},
	{"vuui4s41", (Il2CppMethodPointer)__N2M_vuui4s41},
	{"vuui8", (Il2CppMethodPointer)__N2M_vuui8},
	{"vuur8", (Il2CppMethodPointer)__N2M_vuur8},
	{"vuus135i4", (Il2CppMethodPointer)__N2M_vuus135i4},
	{"vuus135i4s41", (Il2CppMethodPointer)__N2M_vuus135i4s41},
	{"vuus14u1", (Il2CppMethodPointer)__N2M_vuus14u1},
	{"vuus2", (Il2CppMethodPointer)__N2M_vuus2},
	{"vuus20", (Il2CppMethodPointer)__N2M_vuus20},
	{"vuuu", (Il2CppMethodPointer)__N2M_vuuu},
	{"vuuu1", (Il2CppMethodPointer)__N2M_vuuu1},
	{"vuuu1s95", (Il2CppMethodPointer)__N2M_vuuu1s95},
	{"vuuu1u1", (Il2CppMethodPointer)__N2M_vuuu1u1},
	{"vuuu4", (Il2CppMethodPointer)__N2M_vuuu4},
	{"vuuui4", (Il2CppMethodPointer)__N2M_vuuui4},
	{"vuuui4uu", (Il2CppMethodPointer)__N2M_vuuui4uu},
	{"vuuui4uuu", (Il2CppMethodPointer)__N2M_vuuui4uuu},
	{"vuuus14u1", (Il2CppMethodPointer)__N2M_vuuus14u1},
	{"vuuus2", (Il2CppMethodPointer)__N2M_vuuus2},
	{"vuuuu", (Il2CppMethodPointer)__N2M_vuuuu},
	{"vuuuu1", (Il2CppMethodPointer)__N2M_vuuuu1},
	{"vuuuuu", (Il2CppMethodPointer)__N2M_vuuuuu},
	{nullptr, nullptr},
};

static int8_t __N2M_AdjustorThunk_i1uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int16_t __N2M_AdjustorThunk_i2uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4ui1(uintptr_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4ui2(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4ui4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4ui8(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4ur4(uintptr_t __arg0, float __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4ur8(uintptr_t __arg0, double __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(double*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us0(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_0__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us1(uintptr_t __arg0, __struct_1__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_1__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us10(uintptr_t __arg0, __struct_10__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_10__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us10s10(uintptr_t __arg0, __struct_10__ __arg1, __struct_10__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_10__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_10__*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us14(uintptr_t __arg0, __struct_14__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_14__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us15(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_15__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us16(uintptr_t __arg0, __struct_16__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_16__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us18(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_18__*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us3s3(uintptr_t __arg0, __struct_3__ __arg1, __struct_3__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_3__*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4us7s7(uintptr_t __arg0, __struct_7__ __arg1, __struct_7__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_7__*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uu2(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uu4(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uu8(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uu8u8(uintptr_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uint64_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int32_t __N2M_AdjustorThunk_i4uuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    int32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static int64_t __N2M_AdjustorThunk_i8uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    int64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static intptr_t __N2M_AdjustorThunk_iuu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    intptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static float __N2M_AdjustorThunk_r4uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    float ret; Interpreter::Execute(method, args, &ret); return ret;
}


static double __N2M_AdjustorThunk_r8uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    double ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_0__ __N2M_AdjustorThunk_s0u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_0__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_0__ __N2M_AdjustorThunk_s0ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_0__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_10__ __N2M_AdjustorThunk_s10u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_10__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_10__ __N2M_AdjustorThunk_s10ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_10__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_13__ __N2M_AdjustorThunk_s13uu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    __struct_13__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_14__ __N2M_AdjustorThunk_s14uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_14__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_15__ __N2M_AdjustorThunk_s15uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_15__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_18__ __N2M_AdjustorThunk_s18u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_18__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_18__ __N2M_AdjustorThunk_s18us18(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_18__*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_18__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_18__ __N2M_AdjustorThunk_s18uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    __struct_18__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_3__ __N2M_AdjustorThunk_s3u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_3__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static __struct_7__ __N2M_AdjustorThunk_s7u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    __struct_7__ ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ui1(uintptr_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ui2(uintptr_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ui4i4(uintptr_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ui8(uintptr_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ur4(uintptr_t __arg0, float __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(float*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1ur8(uintptr_t __arg0, double __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(double*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us0(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_0__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us10(uintptr_t __arg0, __struct_10__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_10__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us14(uintptr_t __arg0, __struct_14__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_14__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us15(uintptr_t __arg0, __struct_15__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_15__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us16(uintptr_t __arg0, __struct_16__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_16__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us16ui4(uintptr_t __arg0, __struct_16__ __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_16__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us18(uintptr_t __arg0, __struct_18__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_18__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us19(uintptr_t __arg0, __struct_19__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_19__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us1s1(uintptr_t __arg0, __struct_1__ __arg1, __struct_1__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_1__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_1__*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us20(uintptr_t __arg0, __struct_20__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_20__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us3(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us32(uintptr_t __arg0, __struct_32__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_32__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us33(uintptr_t __arg0, __struct_33__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_33__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us38(uintptr_t __arg0, __struct_38__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_38__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us39(uintptr_t __arg0, __struct_39__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_39__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us41(uintptr_t __arg0, __struct_41__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_41__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us48(uintptr_t __arg0, __struct_48__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_48__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us49(uintptr_t __arg0, __struct_49__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_49__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us5(uintptr_t __arg0, __struct_5__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_5__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us50(uintptr_t __arg0, __struct_50__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_50__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us52(uintptr_t __arg0, __struct_52__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_52__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us53(uintptr_t __arg0, __struct_53__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_53__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us54(uintptr_t __arg0, __struct_54__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_54__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us56(uintptr_t __arg0, __struct_56__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_56__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us59(uintptr_t __arg0, __struct_59__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_59__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us60(uintptr_t __arg0, __struct_60__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_60__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us61(uintptr_t __arg0, __struct_61__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_61__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us62(uintptr_t __arg0, __struct_62__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_62__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1us7(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uu2(uintptr_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uu4(uintptr_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uu8(uintptr_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uint64_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint8_t __N2M_AdjustorThunk_u1uuu1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    uint8_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint16_t __N2M_AdjustorThunk_u2u(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uint16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint16_t __N2M_AdjustorThunk_u2uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint16_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint32_t __N2M_AdjustorThunk_u4uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint32_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uint64_t __N2M_AdjustorThunk_u8uu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uint64_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uu(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uui(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uus2(uintptr_t __arg0, __struct_2__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_2__*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuus2u(uintptr_t __arg0, uintptr_t __arg1, __struct_2__ __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_2__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuuu1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuuus2u(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_2__ __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_2__*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuuuu1(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static uintptr_t __N2M_AdjustorThunk_uuuuui4(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uintptr_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(int32_t*)(args + __ARG_OFFSET_4__) = __arg4;

    uintptr_t ret; Interpreter::Execute(method, args, &ret); return ret;
}


static void __N2M_AdjustorThunk_vu(uintptr_t __arg0, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vui(uintptr_t __arg0, intptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(intptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vui4(uintptr_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vui4s0(uintptr_t __arg0, int32_t __arg1, __struct_0__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_0__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vui4s10(uintptr_t __arg0, int32_t __arg1, __struct_10__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_10__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vui4u(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vui4uu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vui4uuu(uintptr_t __arg0, int32_t __arg1, uintptr_t __arg2, uintptr_t __arg3, uintptr_t __arg4, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __ARG_OFFSET_4__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;
	constexpr int __ARG_SIZE_4__ = (sizeof(__arg4) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_4__ + __ARG_SIZE_4__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(int32_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;
	*(uintptr_t*)(args + __ARG_OFFSET_4__) = __arg4;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus0(uintptr_t __arg0, __struct_0__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_0__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus10(uintptr_t __arg0, __struct_10__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_10__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus16(uintptr_t __arg0, __struct_16__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_16__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus16ui4(uintptr_t __arg0, __struct_16__ __arg1, uintptr_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_16__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(int32_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus3(uintptr_t __arg0, __struct_3__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_3__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus41(uintptr_t __arg0, __struct_41__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_41__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus41s132(uintptr_t __arg0, __struct_41__ __arg1, __struct_132__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_41__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_132__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus41s132u(uintptr_t __arg0, __struct_41__ __arg1, __struct_132__ __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_41__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_132__*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus41uu(uintptr_t __arg0, __struct_41__ __arg1, uintptr_t __arg2, uintptr_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_41__*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(uintptr_t*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vus7(uintptr_t __arg0, __struct_7__ __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(__struct_7__*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuu(uintptr_t __arg0, uintptr_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuu1(uintptr_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	args[__ARG_OFFSET_1__].u64 = __arg1;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuui4(uintptr_t __arg0, uintptr_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(int32_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuus2(uintptr_t __arg0, uintptr_t __arg1, __struct_2__ __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(__struct_2__*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuuu(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuuu1u1(uintptr_t __arg0, uintptr_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	args[__ARG_OFFSET_2__].u64 = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuuus2(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, __struct_2__ __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	*(__struct_2__*)(args + __ARG_OFFSET_3__) = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


static void __N2M_AdjustorThunk_vuuuu1(uintptr_t __arg0, uintptr_t __arg1, uintptr_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    __arg0 += sizeof(Il2CppObject);
	constexpr int __ARG_OFFSET_0__ = 0;
	constexpr int __ARG_SIZE_0__ = (sizeof(__arg0) + 7)/8;
	constexpr int __ARG_OFFSET_1__ = __ARG_OFFSET_0__ + __ARG_SIZE_0__;
	constexpr int __ARG_SIZE_1__ = (sizeof(__arg1) + 7)/8;
	constexpr int __ARG_OFFSET_2__ = __ARG_OFFSET_1__ + __ARG_SIZE_1__;
	constexpr int __ARG_SIZE_2__ = (sizeof(__arg2) + 7)/8;
	constexpr int __ARG_OFFSET_3__ = __ARG_OFFSET_2__ + __ARG_SIZE_2__;
	constexpr int __ARG_SIZE_3__ = (sizeof(__arg3) + 7)/8;
	constexpr int __TOTAL_ARG_SIZE__ = __ARG_OFFSET_3__ + __ARG_SIZE_3__;

    StackObject args[__TOTAL_ARG_SIZE__];
	*(uintptr_t*)(args + __ARG_OFFSET_0__) = __arg0;
	*(uintptr_t*)(args + __ARG_OFFSET_1__) = __arg1;
	*(uintptr_t*)(args + __ARG_OFFSET_2__) = __arg2;
	args[__ARG_OFFSET_3__].u64 = __arg3;

    Interpreter::Execute(method, args, nullptr);
}


NativeAdjustThunkMethodInfo hybridclr::interpreter::g_adjustThunkStub[] = 
{

	{"i1uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_i1uu},
	{"i2uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_i2uu},
	{"i4u", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4u},
	{"i4ui1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4ui1},
	{"i4ui2", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4ui2},
	{"i4ui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4ui4},
	{"i4ui4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4ui4i4},
	{"i4ui8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4ui8},
	{"i4ur4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4ur4},
	{"i4ur8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4ur8},
	{"i4us0", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us0},
	{"i4us1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us1},
	{"i4us10", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us10},
	{"i4us10s10", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us10s10},
	{"i4us14", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us14},
	{"i4us15", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us15},
	{"i4us16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us16},
	{"i4us18", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us18},
	{"i4us3s3", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us3s3},
	{"i4us7s7", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4us7s7},
	{"i4uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uu},
	{"i4uu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uu1},
	{"i4uu2", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uu2},
	{"i4uu4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uu4},
	{"i4uu8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uu8},
	{"i4uu8u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uu8u8},
	{"i4uuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4uuu},
	{"i8uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8uu},
	{"iuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_iuu},
	{"r4uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_r4uu},
	{"r8uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_r8uu},
	{"s0u", (Il2CppMethodPointer)__N2M_AdjustorThunk_s0u},
	{"s0ui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_s0ui4},
	{"s10u", (Il2CppMethodPointer)__N2M_AdjustorThunk_s10u},
	{"s10ui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_s10ui4},
	{"s13uu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_s13uu1},
	{"s14uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_s14uu},
	{"s15uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_s15uu},
	{"s18u", (Il2CppMethodPointer)__N2M_AdjustorThunk_s18u},
	{"s18us18", (Il2CppMethodPointer)__N2M_AdjustorThunk_s18us18},
	{"s18uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_s18uu},
	{"s3u", (Il2CppMethodPointer)__N2M_AdjustorThunk_s3u},
	{"s7u", (Il2CppMethodPointer)__N2M_AdjustorThunk_s7u},
	{"u1u", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1u},
	{"u1ui1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ui1},
	{"u1ui2", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ui2},
	{"u1ui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ui4},
	{"u1ui4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ui4i4},
	{"u1ui8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ui8},
	{"u1ur4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ur4},
	{"u1ur8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1ur8},
	{"u1us0", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us0},
	{"u1us10", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us10},
	{"u1us14", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us14},
	{"u1us15", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us15},
	{"u1us16", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us16},
	{"u1us16ui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us16ui4},
	{"u1us18", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us18},
	{"u1us19", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us19},
	{"u1us1s1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us1s1},
	{"u1us20", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us20},
	{"u1us3", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us3},
	{"u1us32", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us32},
	{"u1us33", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us33},
	{"u1us38", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us38},
	{"u1us39", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us39},
	{"u1us41", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us41},
	{"u1us48", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us48},
	{"u1us49", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us49},
	{"u1us5", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us5},
	{"u1us50", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us50},
	{"u1us52", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us52},
	{"u1us53", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us53},
	{"u1us54", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us54},
	{"u1us56", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us56},
	{"u1us59", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us59},
	{"u1us60", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us60},
	{"u1us61", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us61},
	{"u1us62", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us62},
	{"u1us7", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1us7},
	{"u1uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uu},
	{"u1uu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uu1},
	{"u1uu2", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uu2},
	{"u1uu4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uu4},
	{"u1uu8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uu8},
	{"u1uuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uuu},
	{"u1uuu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1uuu1},
	{"u2u", (Il2CppMethodPointer)__N2M_AdjustorThunk_u2u},
	{"u2uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_u2uu},
	{"u4uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_u4uu},
	{"u8uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_u8uu},
	{"uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_uu},
	{"uui", (Il2CppMethodPointer)__N2M_AdjustorThunk_uui},
	{"uui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_uui4},
	{"uus2", (Il2CppMethodPointer)__N2M_AdjustorThunk_uus2},
	{"uuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuu},
	{"uuus2u", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuus2u},
	{"uuuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuuu},
	{"uuuu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuuu1},
	{"uuuus2u", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuuus2u},
	{"uuuuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuuuu},
	{"uuuuu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuuuu1},
	{"uuuuui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_uuuuui4},
	{"vu", (Il2CppMethodPointer)__N2M_AdjustorThunk_vu},
	{"vui", (Il2CppMethodPointer)__N2M_AdjustorThunk_vui},
	{"vui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vui4},
	{"vui4s0", (Il2CppMethodPointer)__N2M_AdjustorThunk_vui4s0},
	{"vui4s10", (Il2CppMethodPointer)__N2M_AdjustorThunk_vui4s10},
	{"vui4u", (Il2CppMethodPointer)__N2M_AdjustorThunk_vui4u},
	{"vui4uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_vui4uu},
	{"vui4uuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_vui4uuu},
	{"vus0", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus0},
	{"vus10", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus10},
	{"vus16", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus16},
	{"vus16ui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus16ui4},
	{"vus3", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus3},
	{"vus41", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus41},
	{"vus41s132", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus41s132},
	{"vus41s132u", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus41s132u},
	{"vus41uu", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus41uu},
	{"vus7", (Il2CppMethodPointer)__N2M_AdjustorThunk_vus7},
	{"vuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuu},
	{"vuu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuu1},
	{"vuui4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuui4},
	{"vuus2", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuus2},
	{"vuuu", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuuu},
	{"vuuu1u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuuu1u1},
	{"vuuus2", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuuus2},
	{"vuuuu1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vuuuu1},
	{nullptr, nullptr},
};

//!!!}}CODE
