#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual
struct BasicLostTrackingVisual_tE27DEC2DBAB681A1D623FD928CDBD1253508F78C;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual
struct ILostTrackingVisual_t1FD6B654F61E3A941FF22760ADBADE77AB79FA04;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService
struct LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497;
// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile
struct LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_tE68B22546964CFD048999DD9950F7814986A0B2A;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t7FAF3EA59F62B1D5C725CF570E42BCC0607F7715;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem[]
struct XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILostTrackingVisual_t1FD6B654F61E3A941FF22760ADBADE77AB79FA04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral54D70F3C5F44278C054CF3FB5ABAD3E4F00CAB12;
IL2CPP_EXTERN_C String_t* _stringLiteral6B05A48D559A106AA113C27CF6FB5433A6F2A646;
IL2CPP_EXTERN_C String_t* _stringLiteral73BD705371F6F76E4B2220CB27E7D2462676AB56;
IL2CPP_EXTERN_C String_t* _stringLiteral94F959FA44A6F233489BB7CFD109C9933D03C86B;
IL2CPP_EXTERN_C String_t* _stringLiteralA192EC5B45A30530ADDE5C1632196DCCF679B9C2;
IL2CPP_EXTERN_C String_t* _stringLiteralCD7CB0336FE46A3623C8B1B5409F67F0FD2BFA5B;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0C77E187BA75E078CCF43F1C05C91B7BE51619;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m965435E8B1A526DA58EE2BF9D23D9593B758F0AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m260D606E1EF659DB2F8EF5AA1CD75F4C9731F05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m16C2BE2C4F2D7C18A3EF115573BF3DE2416798EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisILostTrackingVisual_t1FD6B654F61E3A941FF22760ADBADE77AB79FA04_mABDE41D433B04C610E4378D7FDEF75E7461BDA8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m813E673677879A74DAFEAEAD08CE3369C5B30C55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA342648D5AD9A5257CAEB13BE9446EE3A4FD563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD_m3E8B8F1977A591C483278A261B5094C8DD9C3976_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BasicLostTrackingVisual_ResetVisual_mE6CA9C1BE286A57104A385D9B052761F0F1E76A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicLostTrackingVisual_SetLayer_mA338858851DFF5A238EA735E6511D88BD2745258_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BasicLostTrackingVisual_Update_m27C3888EE4B9A3F19D7905CCE03A8682FE4DD131_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_DisableTrackingLostVisual_m363F3B6A0A99371ABFF7DBE645ED035B60BEC504_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_EnableTrackingLostVisual_m379817441CAB4120AA55D915BFF7130C77F98EDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_SetTrackingLost_m505576EAD9F7FC16801F969B22352A2E31DB605E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_Update_mB4E2702339FE00A973ABA819030C0A4CBA5D10B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService__cctor_m215779B9BA4713682ADA03A5339CDB9FDDC272BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService__ctor_mF46145822915BAE4B8A407AA9BEAEC7D9F9661F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LostTrackingService_get_SessionSubsystem_m5E5B4FD39C386825B960BD1A4292BD418151E926_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2B5E70866C276A2479D69647EA3977CE5A493715 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_t3C77354788A4DF55DF61D75480F9A815C0A99DBA  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t3C77354788A4DF55DF61D75480F9A815C0A99DBA, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t3C77354788A4DF55DF61D75480F9A815C0A99DBA, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t3C77354788A4DF55DF61D75480F9A815C0A99DBA, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BaseService_t3C77354788A4DF55DF61D75480F9A815C0A99DBA, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct  List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3, ____items_1)); }
	inline XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4* get__items_1() const { return ____items_1; }
	inline XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3_StaticFields, ____emptyArray_5)); }
	inline XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRSessionSubsystemU5BU5D_tD6A4F7B29724BAC4ED09E1E6910B244D54342EC4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.Subsystem
struct  Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct  BaseExtensionService_tE68B22546964CFD048999DD9950F7814986A0B2A  : public BaseService_t3C77354788A4DF55DF61D75480F9A815C0A99DBA
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseExtensionService::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseExtensionService_tE68B22546964CFD048999DD9950F7814986A0B2A, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct  Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310, ___list_0)); }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * get_list_0() const { return ___list_0; }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310, ___current_3)); }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * get_current_3() const { return ___current_3; }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.LayerMask
struct  LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  Subsystem_1_tB1D5F14A3E3355FA54EA71B587D64873AC6C7237  : public Subsystem_t2D97454A946149D608974CB6B674F5F5C613A6A4
{
public:

public:
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Unity.Profiling.LowLevel.MarkerFlags
struct  MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct  ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker_AutoScope
struct  AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker_AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct  NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t853CA5527FA4E156B45DD1BD3E3E978C78BC49A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  XRSubsystem_1_t0F35293BB968891335B58BEFE3611D582FBB1A83  : public Subsystem_1_tB1D5F14A3E3355FA54EA71B587D64873AC6C7237
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRSubsystem_1_t0F35293BB968891335B58BEFE3611D582FBB1A83, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService
struct  LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497  : public BaseExtensionService_tE68B22546964CFD048999DD9950F7814986A0B2A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<TrackingLost>k__BackingField
	bool ___U3CTrackingLostU3Ek__BackingField_6;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<OnTrackingLost>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTrackingLostU3Ek__BackingField_7;
	// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::<OnTrackingRestored>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COnTrackingRestoredU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::profile
	LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * ___profile_9;
	// Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::visual
	RuntimeObject* ___visual_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::cullingMaskOnTrackingLost
	int32_t ___cullingMaskOnTrackingLost_11;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::timeScaleOnTrackingLost
	float ___timeScaleOnTrackingLost_12;
	// UnityEngine.XR.ARSubsystems.TrackingState Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::lastTrackingState
	int32_t ___lastTrackingState_13;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::lastNotTrackingReason
	int32_t ___lastNotTrackingReason_14;

public:
	inline static int32_t get_offset_of_U3CTrackingLostU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497, ___U3CTrackingLostU3Ek__BackingField_6)); }
	inline bool get_U3CTrackingLostU3Ek__BackingField_6() const { return ___U3CTrackingLostU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CTrackingLostU3Ek__BackingField_6() { return &___U3CTrackingLostU3Ek__BackingField_6; }
	inline void set_U3CTrackingLostU3Ek__BackingField_6(bool value)
	{
		___U3CTrackingLostU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3COnTrackingLostU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497, ___U3COnTrackingLostU3Ek__BackingField_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTrackingLostU3Ek__BackingField_7() const { return ___U3COnTrackingLostU3Ek__BackingField_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTrackingLostU3Ek__BackingField_7() { return &___U3COnTrackingLostU3Ek__BackingField_7; }
	inline void set_U3COnTrackingLostU3Ek__BackingField_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTrackingLostU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTrackingLostU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnTrackingRestoredU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497, ___U3COnTrackingRestoredU3Ek__BackingField_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COnTrackingRestoredU3Ek__BackingField_8() const { return ___U3COnTrackingRestoredU3Ek__BackingField_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COnTrackingRestoredU3Ek__BackingField_8() { return &___U3COnTrackingRestoredU3Ek__BackingField_8; }
	inline void set_U3COnTrackingRestoredU3Ek__BackingField_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COnTrackingRestoredU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnTrackingRestoredU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_profile_9() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497, ___profile_9)); }
	inline LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * get_profile_9() const { return ___profile_9; }
	inline LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 ** get_address_of_profile_9() { return &___profile_9; }
	inline void set_profile_9(LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * value)
	{
		___profile_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profile_9), (void*)value);
	}

	inline static int32_t get_offset_of_visual_10() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497, ___visual_10)); }
	inline RuntimeObject* get_visual_10() const { return ___visual_10; }
	inline RuntimeObject** get_address_of_visual_10() { return &___visual_10; }
	inline void set_visual_10(RuntimeObject* value)
	{
		___visual_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visual_10), (void*)value);
	}

	inline static int32_t get_offset_of_cullingMaskOnTrackingLost_11() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497, ___cullingMaskOnTrackingLost_11)); }
	inline int32_t get_cullingMaskOnTrackingLost_11() const { return ___cullingMaskOnTrackingLost_11; }
	inline int32_t* get_address_of_cullingMaskOnTrackingLost_11() { return &___cullingMaskOnTrackingLost_11; }
	inline void set_cullingMaskOnTrackingLost_11(int32_t value)
	{
		___cullingMaskOnTrackingLost_11 = value;
	}

	inline static int32_t get_offset_of_timeScaleOnTrackingLost_12() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497, ___timeScaleOnTrackingLost_12)); }
	inline float get_timeScaleOnTrackingLost_12() const { return ___timeScaleOnTrackingLost_12; }
	inline float* get_address_of_timeScaleOnTrackingLost_12() { return &___timeScaleOnTrackingLost_12; }
	inline void set_timeScaleOnTrackingLost_12(float value)
	{
		___timeScaleOnTrackingLost_12 = value;
	}

	inline static int32_t get_offset_of_lastTrackingState_13() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497, ___lastTrackingState_13)); }
	inline int32_t get_lastTrackingState_13() const { return ___lastTrackingState_13; }
	inline int32_t* get_address_of_lastTrackingState_13() { return &___lastTrackingState_13; }
	inline void set_lastTrackingState_13(int32_t value)
	{
		___lastTrackingState_13 = value;
	}

	inline static int32_t get_offset_of_lastNotTrackingReason_14() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497, ___lastNotTrackingReason_14)); }
	inline int32_t get_lastNotTrackingReason_14() const { return ___lastNotTrackingReason_14; }
	inline int32_t* get_address_of_lastNotTrackingReason_14() { return &___lastNotTrackingReason_14; }
	inline void set_lastNotTrackingReason_14(int32_t value)
	{
		___lastNotTrackingReason_14 = value;
	}
};

struct LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisualPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DisableTrackingLostVisualPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisualPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___EnableTrackingLostVisualPerfMarker_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetTrackingLostPerfMarker_18;
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::sessionSubsystem
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * ___sessionSubsystem_19;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem> Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::XRSessionSubsystems
	List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___XRSessionSubsystems_20;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_15() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields, ___UpdatePerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_15() const { return ___UpdatePerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_15() { return &___UpdatePerfMarker_15; }
	inline void set_UpdatePerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_DisableTrackingLostVisualPerfMarker_16() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields, ___DisableTrackingLostVisualPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DisableTrackingLostVisualPerfMarker_16() const { return ___DisableTrackingLostVisualPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DisableTrackingLostVisualPerfMarker_16() { return &___DisableTrackingLostVisualPerfMarker_16; }
	inline void set_DisableTrackingLostVisualPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DisableTrackingLostVisualPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_EnableTrackingLostVisualPerfMarker_17() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields, ___EnableTrackingLostVisualPerfMarker_17)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_EnableTrackingLostVisualPerfMarker_17() const { return ___EnableTrackingLostVisualPerfMarker_17; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_EnableTrackingLostVisualPerfMarker_17() { return &___EnableTrackingLostVisualPerfMarker_17; }
	inline void set_EnableTrackingLostVisualPerfMarker_17(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___EnableTrackingLostVisualPerfMarker_17 = value;
	}

	inline static int32_t get_offset_of_SetTrackingLostPerfMarker_18() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields, ___SetTrackingLostPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetTrackingLostPerfMarker_18() const { return ___SetTrackingLostPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetTrackingLostPerfMarker_18() { return &___SetTrackingLostPerfMarker_18; }
	inline void set_SetTrackingLostPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetTrackingLostPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_sessionSubsystem_19() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields, ___sessionSubsystem_19)); }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * get_sessionSubsystem_19() const { return ___sessionSubsystem_19; }
	inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD ** get_address_of_sessionSubsystem_19() { return &___sessionSubsystem_19; }
	inline void set_sessionSubsystem_19(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * value)
	{
		___sessionSubsystem_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionSubsystem_19), (void*)value);
	}

	inline static int32_t get_offset_of_XRSessionSubsystems_20() { return static_cast<int32_t>(offsetof(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields, ___XRSessionSubsystems_20)); }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * get_XRSessionSubsystems_20() const { return ___XRSessionSubsystems_20; }
	inline List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 ** get_address_of_XRSessionSubsystems_20() { return &___XRSessionSubsystems_20; }
	inline void set_XRSessionSubsystems_20(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * value)
	{
		___XRSessionSubsystems_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___XRSessionSubsystems_20), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.AudioClip
struct  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip_PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip_PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct  XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD  : public XRSubsystem_1_t0F35293BB968891335B58BEFE3611D582FBB1A83
{
public:
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Provider
	Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * ___m_Provider_2;

public:
	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD, ___m_Provider_2)); }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * get_m_Provider_2() const { return ___m_Provider_2; }
	inline Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(Provider_t4C3675997BB8AF3A6A32C3EC3C93C10E4D3E8D1A * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile
struct  LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47  : public BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::trackingLostVisualPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___trackingLostVisualPrefab_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::trackingLostVisualLayer
	int32_t ___trackingLostVisualLayer_6;
	// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::trackingLostCullingMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___trackingLostCullingMask_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::haltTimeWhileTrackingLost
	bool ___haltTimeWhileTrackingLost_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::haltAudioWhileTrackingLost
	bool ___haltAudioWhileTrackingLost_9;

public:
	inline static int32_t get_offset_of_trackingLostVisualPrefab_5() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47, ___trackingLostVisualPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_trackingLostVisualPrefab_5() const { return ___trackingLostVisualPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_trackingLostVisualPrefab_5() { return &___trackingLostVisualPrefab_5; }
	inline void set_trackingLostVisualPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___trackingLostVisualPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingLostVisualPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_trackingLostVisualLayer_6() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47, ___trackingLostVisualLayer_6)); }
	inline int32_t get_trackingLostVisualLayer_6() const { return ___trackingLostVisualLayer_6; }
	inline int32_t* get_address_of_trackingLostVisualLayer_6() { return &___trackingLostVisualLayer_6; }
	inline void set_trackingLostVisualLayer_6(int32_t value)
	{
		___trackingLostVisualLayer_6 = value;
	}

	inline static int32_t get_offset_of_trackingLostCullingMask_7() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47, ___trackingLostCullingMask_7)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_trackingLostCullingMask_7() const { return ___trackingLostCullingMask_7; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_trackingLostCullingMask_7() { return &___trackingLostCullingMask_7; }
	inline void set_trackingLostCullingMask_7(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___trackingLostCullingMask_7 = value;
	}

	inline static int32_t get_offset_of_haltTimeWhileTrackingLost_8() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47, ___haltTimeWhileTrackingLost_8)); }
	inline bool get_haltTimeWhileTrackingLost_8() const { return ___haltTimeWhileTrackingLost_8; }
	inline bool* get_address_of_haltTimeWhileTrackingLost_8() { return &___haltTimeWhileTrackingLost_8; }
	inline void set_haltTimeWhileTrackingLost_8(bool value)
	{
		___haltTimeWhileTrackingLost_8 = value;
	}

	inline static int32_t get_offset_of_haltAudioWhileTrackingLost_9() { return static_cast<int32_t>(offsetof(LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47, ___haltAudioWhileTrackingLost_9)); }
	inline bool get_haltAudioWhileTrackingLost_9() const { return ___haltAudioWhileTrackingLost_9; }
	inline bool* get_address_of_haltAudioWhileTrackingLost_9() { return &___haltAudioWhileTrackingLost_9; }
	inline void set_haltAudioWhileTrackingLost_9(bool value)
	{
		___haltAudioWhileTrackingLost_9 = value;
	}
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual
struct  BasicLostTrackingVisual_tE27DEC2DBAB681A1D623FD928CDBD1253508F78C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::gridRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___gridRenderer_4;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::loopClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___loopClip_5;
	// UnityEngine.AudioSource Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_6;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::pulseTimer
	float ___pulseTimer_7;
	// System.Single Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::pulseDuration
	float ___pulseDuration_8;

public:
	inline static int32_t get_offset_of_gridRenderer_4() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_tE27DEC2DBAB681A1D623FD928CDBD1253508F78C, ___gridRenderer_4)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_gridRenderer_4() const { return ___gridRenderer_4; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_gridRenderer_4() { return &___gridRenderer_4; }
	inline void set_gridRenderer_4(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___gridRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridRenderer_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopClip_5() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_tE27DEC2DBAB681A1D623FD928CDBD1253508F78C, ___loopClip_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_loopClip_5() const { return ___loopClip_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_loopClip_5() { return &___loopClip_5; }
	inline void set_loopClip_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___loopClip_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopClip_5), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_6() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_tE27DEC2DBAB681A1D623FD928CDBD1253508F78C, ___audioSource_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_6() const { return ___audioSource_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_6() { return &___audioSource_6; }
	inline void set_audioSource_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_6), (void*)value);
	}

	inline static int32_t get_offset_of_pulseTimer_7() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_tE27DEC2DBAB681A1D623FD928CDBD1253508F78C, ___pulseTimer_7)); }
	inline float get_pulseTimer_7() const { return ___pulseTimer_7; }
	inline float* get_address_of_pulseTimer_7() { return &___pulseTimer_7; }
	inline void set_pulseTimer_7(float value)
	{
		___pulseTimer_7 = value;
	}

	inline static int32_t get_offset_of_pulseDuration_8() { return static_cast<int32_t>(offsetof(BasicLostTrackingVisual_tE27DEC2DBAB681A1D623FD928CDBD1253508F78C, ___pulseDuration_8)); }
	inline float get_pulseDuration_8() const { return ___pulseDuration_8; }
	inline float* get_address_of_pulseDuration_8() { return &___pulseDuration_8; }
	inline void set_pulseDuration_8(float value)
	{
		___pulseDuration_8 = value;
	}
};


// UnityEngine.AudioSource
struct  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___instances0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__ctor_mF46145822915BAE4B8A407AA9BEAEC7D9F9661F5 (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * ___profile2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseExtensionService_set_Registrar_mA76D2D1035048BAFA8AA16DB7F31A3D280D8A5AF_inline (BaseExtensionService_tE68B22546964CFD048999DD9950F7814986A0B2A * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseExtensionService__ctor_m67388D6D8DC89737AE9EBC8EEEAD92B34C39A026 (BaseExtensionService_tE68B22546964CFD048999DD9950F7814986A0B2A * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * ___profile2, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_SessionSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * LostTrackingService_get_SessionSubsystem_m5E5B4FD39C386825B960BD1A4292BD418151E926 (const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_trackingState_m65EE2B0335117F7508AC8A82DB81421AC88AC687 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_notTrackingReason_m2FB94CC40A6732E380A9713537C13D1067EC8928 (XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_SetTrackingLost_m505576EAD9F7FC16801F969B22352A2E31DB605E (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, bool ___trackingLost0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6 (const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltTimeWhileTrackingLost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m2AD0B0FB01FF4E405D168C26B76C069282B3DB2F_inline (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltAudioOnTrackingLost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m58917A9067BBE7923A3DBA812B6FC3DB6976CDD8_inline (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::set_pause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_pause_m31B1DCCAD9D3B48EEE8A6F221FD550F2CBAED389 (bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * LostTrackingServiceProfile_get_TrackingLostVisualPrefab_m083FCE1C002BF0DA55091C590519A9B6FAB6BFA9_inline (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual>()
inline RuntimeObject* GameObject_GetComponentInChildren_TisILostTrackingVisual_t1FD6B654F61E3A941FF22760ADBADE77AB79FA04_mABDE41D433B04C610E4378D7FDEF75E7461BDA8D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_cullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4 (const RuntimeMethod* method);
// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostCullingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LostTrackingServiceProfile_get_TrackingLostCullingMask_m9C37218F06A038ADBBFF68A09A3A6F8ED7FAD855_inline (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LostTrackingServiceProfile_get_TrackingLostVisualLayer_mD2A7B62EBF89381F66C40B6AC0E7687EFF4796A7_inline (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_TrackingLost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LostTrackingService_get_TrackingLost_m54B5CDB841ADE3B08EA0DD7E78DB5BA0ECCB03A4_inline (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_TrackingLost(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LostTrackingService_set_TrackingLost_m32F2BF2888BAB05006B204362617C4EF1BBA0B20_inline (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, bool ___value0, const RuntimeMethod* method);
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingLost()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * LostTrackingService_get_OnTrackingLost_mCA48BDDDEF3C36360BD9718AC52F93ADAA68A63B_inline (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_EnableTrackingLostVisual_m379817441CAB4120AA55D915BFF7130C77F98EDA (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method);
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingRestored()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * LostTrackingService_get_OnTrackingRestored_m2F80D0D6077ABBF90F46787FDB3CE33570C86CD3_inline (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_DisableTrackingLostVisual_m363F3B6A0A99371ABFF7DBE645ED035B60BEC504 (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD_m3E8B8F1977A591C483278A261B5094C8DD9C3976 (List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * ___instances0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_mEBEE4B7C644D83790D043140B9C063CA261CD902_gshared)(___instances0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::GetEnumerator()
inline Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310  List_1_GetEnumerator_m813E673677879A74DAFEAEAD08CE3369C5B30C55 (List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310  (*) (List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::get_Current()
inline XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * Enumerator_get_Current_m16C2BE2C4F2D7C18A3EF115573BF3DE2416798EA_inline (Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 * __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * (*) (Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m260D606E1EF659DB2F8EF5AA1CD75F4C9731F05E (Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::Dispose()
inline void Enumerator_Dispose_m965435E8B1A526DA58EE2BF9D23D9593B758F0AD (Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::.ctor()
inline void List_1__ctor_mDA342648D5AD9A5257CAEB13BE9446EE3A4FD563 (List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerMask_set_value_mE825B6131A75814FCF2EA32ECBE2A205E6531585 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_mF3BF67E8AB03CA55110F1714B3FAF519064AEE63 (BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BasicLostTrackingVisual_get_Enabled_m08B8DD4171F8FEC16A50187EE8C58C27250F1678 (BasicLostTrackingVisual_tE27DEC2DBAB681A1D623FD928CDBD1253508F78C * __this, const RuntimeMethod* method)
{
	{
		// get { return gameObject.activeSelf; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_set_Enabled_m7F5CB0B4600436B2050601221062458BADC4D662 (BasicLostTrackingVisual_tE27DEC2DBAB681A1D623FD928CDBD1253508F78C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { gameObject.SetActive(value); }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_1 = ___value0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, L_1, /*hidden argument*/NULL);
		// set { gameObject.SetActive(value); }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::ResetVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_ResetVisual_mE6CA9C1BE286A57104A385D9B052761F0F1E76A0 (BasicLostTrackingVisual_tE27DEC2DBAB681A1D623FD928CDBD1253508F78C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicLostTrackingVisual_ResetVisual_mE6CA9C1BE286A57104A385D9B052761F0F1E76A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (audioSource != null && loopClip != null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_loopClip_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// audioSource.clip = loopClip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = __this->get_audioSource_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = __this->get_loopClip_5();
		NullCheck(L_4);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_4, L_5, /*hidden argument*/NULL);
		// audioSource.loop = true;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = __this->get_audioSource_6();
		NullCheck(L_6);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_6, (bool)1, /*hidden argument*/NULL);
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_audioSource_6();
		NullCheck(L_7);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
		// pulseTimer = 0.0f;
		__this->set_pulseTimer_7((0.0f));
		// if (gridRenderer != null)
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_8 = __this->get_gridRenderer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		// gridRenderer.material.SetFloat("_Pulse_", 0.0f);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_10 = __this->get_gridRenderer_4();
		NullCheck(L_10);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_11, _stringLiteral94F959FA44A6F233489BB7CFD109C9933D03C86B, (0.0f), /*hidden argument*/NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::SetLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_SetLayer_mA338858851DFF5A238EA735E6511D88BD2745258 (BasicLostTrackingVisual_tE27DEC2DBAB681A1D623FD928CDBD1253508F78C * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicLostTrackingVisual_SetLayer_mA338858851DFF5A238EA735E6511D88BD2745258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (Transform child in transform.GetComponentsInChildren<Transform>())
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_1 = Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C(L_0, /*hidden argument*/Component_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mF2B4E2828789B863B83BCBC705EDFAF6F3DCE21C_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0022;
	}

IL_0010:
	{
		// foreach (Transform child in transform.GetComponentsInChildren<Transform>())
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// child.gameObject.layer = layer;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		int32_t L_7 = ___layer0;
		NullCheck(L_6);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0022:
	{
		// foreach (Transform child in transform.GetComponentsInChildren<Transform>())
		int32_t L_9 = V_1;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual_Update_m27C3888EE4B9A3F19D7905CCE03A8682FE4DD131 (BasicLostTrackingVisual_tE27DEC2DBAB681A1D623FD928CDBD1253508F78C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicLostTrackingVisual_Update_m27C3888EE4B9A3F19D7905CCE03A8682FE4DD131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// pulseTimer += Time.unscaledDeltaTime;
		float L_0 = __this->get_pulseTimer_7();
		float L_1 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		__this->set_pulseTimer_7(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// float normalizedPulseValue = Mathf.Clamp01(pulseTimer / pulseDuration);
		float L_2 = __this->get_pulseTimer_7();
		float L_3 = __this->get_pulseDuration_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_2/(float)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		// if (pulseTimer >= pulseDuration)
		float L_5 = __this->get_pulseTimer_7();
		float L_6 = __this->get_pulseDuration_8();
		if ((!(((float)L_5) >= ((float)L_6))))
		{
			goto IL_003e;
		}
	}
	{
		// pulseTimer = 0;
		__this->set_pulseTimer_7((0.0f));
	}

IL_003e:
	{
		// if (gridRenderer != null)
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_7 = __this->get_gridRenderer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_008c;
		}
	}
	{
		// gridRenderer.material.SetFloat("_Pulse_", normalizedPulseValue);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_9 = __this->get_gridRenderer_4();
		NullCheck(L_9);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_9, /*hidden argument*/NULL);
		float L_11 = V_0;
		NullCheck(L_10);
		Material_SetFloat_mBE01E05D49E5C7045E010F49A38E96B101D82768(L_10, _stringLiteral94F959FA44A6F233489BB7CFD109C9933D03C86B, L_11, /*hidden argument*/NULL);
		// gridRenderer.material.SetVector("_Pulse_Origin_", gridRenderer.transform.position);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_12 = __this->get_gridRenderer_4();
		NullCheck(L_12);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_12, /*hidden argument*/NULL);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_14 = __this->get_gridRenderer_4();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_il2cpp_TypeInfo_var);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_17 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_13, _stringLiteralA192EC5B45A30530ADDE5C1632196DCCF679B9C2, L_17, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.BasicLostTrackingVisual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicLostTrackingVisual__ctor_m5D06B70673D0F405F12E41D8BBCDD026273A21F8 (BasicLostTrackingVisual_tE27DEC2DBAB681A1D623FD928CDBD1253508F78C * __this, const RuntimeMethod* method)
{
	{
		// private float pulseDuration = 2.0f;
		__this->set_pulseDuration_8((2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_TrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LostTrackingService_get_TrackingLost_m54B5CDB841ADE3B08EA0DD7E78DB5BA0ECCB03A4 (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = __this->get_U3CTrackingLostU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_TrackingLost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_set_TrackingLost_m32F2BF2888BAB05006B204362617C4EF1BBA0B20 (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CTrackingLostU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * LostTrackingService_get_OnTrackingLost_mCA48BDDDEF3C36360BD9718AC52F93ADAA68A63B (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingLost { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTrackingLostU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_OnTrackingLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_set_OnTrackingLost_mC0A33999085C60F7811BA1F39D2D93181A2E6D84 (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingLost { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___value0;
		__this->set_U3COnTrackingLostU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Action Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_OnTrackingRestored()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * LostTrackingService_get_OnTrackingRestored_m2F80D0D6077ABBF90F46787FDB3CE33570C86CD3 (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingRestored { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTrackingRestoredU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::set_OnTrackingRestored(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_set_OnTrackingRestored_mCC148744DBE1FEF0129505A2D06643A915A2C794 (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingRestored { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___value0;
		__this->set_U3COnTrackingRestoredU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__ctor_m11E580A37C2CCE9F9B62DC09F9B7C8E8C76A2BFB (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, RuntimeObject* ___registrar0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * ___profile3, const RuntimeMethod* method)
{
	{
		// BaseMixedRealityProfile profile) : this(name, priority, profile)
		String_t* L_0 = ___name1;
		uint32_t L_1 = ___priority2;
		BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * L_2 = ___profile3;
		LostTrackingService__ctor_mF46145822915BAE4B8A407AA9BEAEC7D9F9661F5(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_3 = ___registrar0;
		BaseExtensionService_set_Registrar_mA76D2D1035048BAFA8AA16DB7F31A3D280D8A5AF_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__ctor_mF46145822915BAE4B8A407AA9BEAEC7D9F9661F5 (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * ___profile2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService__ctor_mF46145822915BAE4B8A407AA9BEAEC7D9F9661F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile) : base(name, priority, profile)
		String_t* L_0 = ___name0;
		uint32_t L_1 = ___priority1;
		BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * L_2 = ___profile2;
		BaseExtensionService__ctor_m67388D6D8DC89737AE9EBC8EEEAD92B34C39A026(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// this.profile = profile as LostTrackingServiceProfile;
		BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * L_3 = ___profile2;
		__this->set_profile_9(((LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 *)IsInstClass((RuntimeObject*)L_3, LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_Initialize_mE5D4D5733BF22AFF9FA572B0DEB25244D0264D41 (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_Update_mB4E2702339FE00A973ABA819030C0A4CBA5D10B5 (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_Update_mB4E2702339FE00A973ABA819030C0A4CBA5D10B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_15();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// XRSessionSubsystem sessionSubsystem = SessionSubsystem;
			IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var);
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_2 = LostTrackingService_get_SessionSubsystem_m5E5B4FD39C386825B960BD1A4292BD418151E926(/*hidden argument*/NULL);
			V_2 = L_2;
			// if (sessionSubsystem == null)
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_3 = V_2;
			if (L_3)
			{
				goto IL_0019;
			}
		}

IL_0017:
		{
			// return;
			IL2CPP_LEAVE(0x80, FINALLY_0072);
		}

IL_0019:
		{
			// if (sessionSubsystem.trackingState == lastTrackingState && sessionSubsystem.notTrackingReason == lastNotTrackingReason)
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_4 = V_2;
			NullCheck(L_4);
			int32_t L_5 = XRSessionSubsystem_get_trackingState_m65EE2B0335117F7508AC8A82DB81421AC88AC687(L_4, /*hidden argument*/NULL);
			int32_t L_6 = __this->get_lastTrackingState_13();
			if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
			{
				goto IL_0037;
			}
		}

IL_0027:
		{
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_7 = V_2;
			NullCheck(L_7);
			int32_t L_8 = XRSessionSubsystem_get_notTrackingReason_m2FB94CC40A6732E380A9713537C13D1067EC8928(L_7, /*hidden argument*/NULL);
			int32_t L_9 = __this->get_lastNotTrackingReason_14();
			if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
			{
				goto IL_0037;
			}
		}

IL_0035:
		{
			// return;
			IL2CPP_LEAVE(0x80, FINALLY_0072);
		}

IL_0037:
		{
			// if (sessionSubsystem.trackingState == UnityEngine.XR.ARSubsystems.TrackingState.None && sessionSubsystem.notTrackingReason == NotTrackingReason.Relocalizing)
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_10 = V_2;
			NullCheck(L_10);
			int32_t L_11 = XRSessionSubsystem_get_trackingState_m65EE2B0335117F7508AC8A82DB81421AC88AC687(L_10, /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0051;
			}
		}

IL_003f:
		{
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_12 = V_2;
			NullCheck(L_12);
			int32_t L_13 = XRSessionSubsystem_get_notTrackingReason_m2FB94CC40A6732E380A9713537C13D1067EC8928(L_12, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_13) == ((uint32_t)2))))
			{
				goto IL_0051;
			}
		}

IL_0048:
		{
			// SetTrackingLost(true);
			LostTrackingService_SetTrackingLost_m505576EAD9F7FC16801F969B22352A2E31DB605E(__this, (bool)1, /*hidden argument*/NULL);
			// }
			goto IL_0058;
		}

IL_0051:
		{
			// SetTrackingLost(false);
			LostTrackingService_SetTrackingLost_m505576EAD9F7FC16801F969B22352A2E31DB605E(__this, (bool)0, /*hidden argument*/NULL);
		}

IL_0058:
		{
			// lastTrackingState = sessionSubsystem.trackingState;
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_14 = V_2;
			NullCheck(L_14);
			int32_t L_15 = XRSessionSubsystem_get_trackingState_m65EE2B0335117F7508AC8A82DB81421AC88AC687(L_14, /*hidden argument*/NULL);
			__this->set_lastTrackingState_13(L_15);
			// lastNotTrackingReason = sessionSubsystem.notTrackingReason;
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_16 = V_2;
			NullCheck(L_16);
			int32_t L_17 = XRSessionSubsystem_get_notTrackingReason_m2FB94CC40A6732E380A9713537C13D1067EC8928(L_16, /*hidden argument*/NULL);
			__this->set_lastNotTrackingReason_14(L_17);
			// }
			IL2CPP_LEAVE(0x80, FINALLY_0072);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0072;
	}

FINALLY_0072:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(114)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_JUMP_TBL(0x80, IL_0080)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::DisableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_DisableTrackingLostVisual_m363F3B6A0A99371ABFF7DBE645ED035B60BEC504 (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_DisableTrackingLostVisual_m363F3B6A0A99371ABFF7DBE645ED035B60BEC504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (DisableTrackingLostVisualPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->get_DisableTrackingLostVisualPerfMarker_16();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (visual != null && visual.Enabled)
			RuntimeObject* L_2 = __this->get_visual_10();
			if (!L_2)
			{
				goto IL_006a;
			}
		}

IL_0016:
		{
			RuntimeObject* L_3 = __this->get_visual_10();
			NullCheck(L_3);
			bool L_4 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::get_Enabled() */, ILostTrackingVisual_t1FD6B654F61E3A941FF22760ADBADE77AB79FA04_il2cpp_TypeInfo_var, L_3);
			if (!L_4)
			{
				goto IL_006a;
			}
		}

IL_0023:
		{
			// CameraCache.Main.cullingMask = cullingMaskOnTrackingLost;
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6(/*hidden argument*/NULL);
			int32_t L_6 = __this->get_cullingMaskOnTrackingLost_11();
			NullCheck(L_5);
			Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC(L_5, L_6, /*hidden argument*/NULL);
			// if (profile.HaltTimeWhileTrackingLost)
			LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * L_7 = __this->get_profile_9();
			NullCheck(L_7);
			bool L_8 = LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m2AD0B0FB01FF4E405D168C26B76C069282B3DB2F_inline(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_004b;
			}
		}

IL_0040:
		{
			// Time.timeScale = timeScaleOnTrackingLost;
			float L_9 = __this->get_timeScaleOnTrackingLost_12();
			Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA(L_9, /*hidden argument*/NULL);
		}

IL_004b:
		{
			// if (profile.HaltAudioOnTrackingLost)
			LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * L_10 = __this->get_profile_9();
			NullCheck(L_10);
			bool L_11 = LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m58917A9067BBE7923A3DBA812B6FC3DB6976CDD8_inline(L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_005e;
			}
		}

IL_0058:
		{
			// AudioListener.pause = false;
			AudioListener_set_pause_m31B1DCCAD9D3B48EEE8A6F221FD550F2CBAED389((bool)0, /*hidden argument*/NULL);
		}

IL_005e:
		{
			// visual.Enabled = false;
			RuntimeObject* L_12 = __this->get_visual_10();
			NullCheck(L_12);
			InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::set_Enabled(System.Boolean) */, ILostTrackingVisual_t1FD6B654F61E3A941FF22760ADBADE77AB79FA04_il2cpp_TypeInfo_var, L_12, (bool)0);
		}

IL_006a:
		{
			// }
			IL2CPP_LEAVE(0x7A, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(108)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::EnableTrackingLostVisual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_EnableTrackingLostVisual_m379817441CAB4120AA55D915BFF7130C77F98EDA (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_EnableTrackingLostVisual_m379817441CAB4120AA55D915BFF7130C77F98EDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (EnableTrackingLostVisualPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->get_EnableTrackingLostVisualPerfMarker_17();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (visual == null)
			RuntimeObject* L_2 = __this->get_visual_10();
			if (L_2)
			{
				goto IL_005f;
			}
		}

IL_0016:
		{
			// GameObject visualObject = UnityEngine.Object.Instantiate(profile.TrackingLostVisualPrefab);
			LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * L_3 = __this->get_profile_9();
			NullCheck(L_3);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = LostTrackingServiceProfile_get_TrackingLostVisualPrefab_m083FCE1C002BF0DA55091C590519A9B6FAB6BFA9_inline(L_3, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
			V_2 = L_5;
			// if (visualObject != null)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_2;
			bool L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003c;
			}
		}

IL_0030:
		{
			// visual = visualObject.GetComponentInChildren<ILostTrackingVisual>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_2;
			NullCheck(L_8);
			RuntimeObject* L_9 = GameObject_GetComponentInChildren_TisILostTrackingVisual_t1FD6B654F61E3A941FF22760ADBADE77AB79FA04_mABDE41D433B04C610E4378D7FDEF75E7461BDA8D(L_8, /*hidden argument*/GameObject_GetComponentInChildren_TisILostTrackingVisual_t1FD6B654F61E3A941FF22760ADBADE77AB79FA04_mABDE41D433B04C610E4378D7FDEF75E7461BDA8D_RuntimeMethod_var);
			__this->set_visual_10(L_9);
		}

IL_003c:
		{
			// if (visual == null)
			RuntimeObject* L_10 = __this->get_visual_10();
			if (L_10)
			{
				goto IL_0053;
			}
		}

IL_0044:
		{
			// Debug.LogError("No ILostTrackingVisual found on prefab supplied by LostTrackingServiceProfile.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralFC0C77E187BA75E078CCF43F1C05C91B7BE51619, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x10B, FINALLY_00fd);
		}

IL_0053:
		{
			// visual.Enabled = false;
			RuntimeObject* L_11 = __this->get_visual_10();
			NullCheck(L_11);
			InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::set_Enabled(System.Boolean) */, ILostTrackingVisual_t1FD6B654F61E3A941FF22760ADBADE77AB79FA04_il2cpp_TypeInfo_var, L_11, (bool)0);
		}

IL_005f:
		{
			// if (!visual.Enabled)
			RuntimeObject* L_12 = __this->get_visual_10();
			NullCheck(L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::get_Enabled() */, ILostTrackingVisual_t1FD6B654F61E3A941FF22760ADBADE77AB79FA04_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_00fb;
			}
		}

IL_006f:
		{
			// cullingMaskOnTrackingLost = CameraCache.Main.cullingMask;
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_14 = CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6(/*hidden argument*/NULL);
			NullCheck(L_14);
			int32_t L_15 = Camera_get_cullingMask_m63492ED3AFA8F571FBED0B1729264A2E3BB64236(L_14, /*hidden argument*/NULL);
			__this->set_cullingMaskOnTrackingLost_11(L_15);
			// timeScaleOnTrackingLost = Time.timeScale;
			float L_16 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
			__this->set_timeScaleOnTrackingLost_12(L_16);
			// CameraCache.Main.cullingMask = profile.TrackingLostCullingMask;
			Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_17 = CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6(/*hidden argument*/NULL);
			LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * L_18 = __this->get_profile_9();
			NullCheck(L_18);
			LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_19 = LostTrackingServiceProfile_get_TrackingLostCullingMask_m9C37218F06A038ADBBFF68A09A3A6F8ED7FAD855_inline(L_18, /*hidden argument*/NULL);
			int32_t L_20 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_19, /*hidden argument*/NULL);
			NullCheck(L_17);
			Camera_set_cullingMask_mB4B1EE4C6CC355625EDE08EAF17E99DAB242E0CC(L_17, L_20, /*hidden argument*/NULL);
			// if (profile.HaltTimeWhileTrackingLost)
			LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * L_21 = __this->get_profile_9();
			NullCheck(L_21);
			bool L_22 = LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m2AD0B0FB01FF4E405D168C26B76C069282B3DB2F_inline(L_21, /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_00bb;
			}
		}

IL_00b1:
		{
			// Time.timeScale = 0.0f;
			Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		}

IL_00bb:
		{
			// if (profile.HaltAudioOnTrackingLost)
			LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * L_23 = __this->get_profile_9();
			NullCheck(L_23);
			bool L_24 = LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m58917A9067BBE7923A3DBA812B6FC3DB6976CDD8_inline(L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00ce;
			}
		}

IL_00c8:
		{
			// AudioListener.pause = true;
			AudioListener_set_pause_m31B1DCCAD9D3B48EEE8A6F221FD550F2CBAED389((bool)1, /*hidden argument*/NULL);
		}

IL_00ce:
		{
			// visual.Enabled = true;
			RuntimeObject* L_25 = __this->get_visual_10();
			NullCheck(L_25);
			InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::set_Enabled(System.Boolean) */, ILostTrackingVisual_t1FD6B654F61E3A941FF22760ADBADE77AB79FA04_il2cpp_TypeInfo_var, L_25, (bool)1);
			// visual.SetLayer(profile.TrackingLostVisualLayer);
			RuntimeObject* L_26 = __this->get_visual_10();
			LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * L_27 = __this->get_profile_9();
			NullCheck(L_27);
			int32_t L_28 = LostTrackingServiceProfile_get_TrackingLostVisualLayer_mD2A7B62EBF89381F66C40B6AC0E7687EFF4796A7_inline(L_27, /*hidden argument*/NULL);
			NullCheck(L_26);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::SetLayer(System.Int32) */, ILostTrackingVisual_t1FD6B654F61E3A941FF22760ADBADE77AB79FA04_il2cpp_TypeInfo_var, L_26, L_28);
			// visual.ResetVisual();
			RuntimeObject* L_29 = __this->get_visual_10();
			NullCheck(L_29);
			InterfaceActionInvoker0::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.ILostTrackingVisual::ResetVisual() */, ILostTrackingVisual_t1FD6B654F61E3A941FF22760ADBADE77AB79FA04_il2cpp_TypeInfo_var, L_29);
		}

IL_00fb:
		{
			// }
			IL2CPP_LEAVE(0x10B, FINALLY_00fd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fd;
	}

FINALLY_00fd:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(253)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(253)
	{
		IL2CPP_JUMP_TBL(0x10B, IL_010b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_010b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::SetTrackingLost(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService_SetTrackingLost_m505576EAD9F7FC16801F969B22352A2E31DB605E (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, bool ___trackingLost0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_SetTrackingLost_m505576EAD9F7FC16801F969B22352A2E31DB605E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B9_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B8_0 = NULL;
	{
		// using (SetTrackingLostPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->get_SetTrackingLostPerfMarker_18();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (TrackingLost != trackingLost)
			bool L_2 = LostTrackingService_get_TrackingLost_m54B5CDB841ADE3B08EA0DD7E78DB5BA0ECCB03A4_inline(__this, /*hidden argument*/NULL);
			bool L_3 = ___trackingLost0;
			if ((((int32_t)L_2) == ((int32_t)L_3)))
			{
				goto IL_0056;
			}
		}

IL_0017:
		{
			// TrackingLost = trackingLost;
			bool L_4 = ___trackingLost0;
			LostTrackingService_set_TrackingLost_m32F2BF2888BAB05006B204362617C4EF1BBA0B20_inline(__this, L_4, /*hidden argument*/NULL);
			// if (TrackingLost)
			bool L_5 = LostTrackingService_get_TrackingLost_m54B5CDB841ADE3B08EA0DD7E78DB5BA0ECCB03A4_inline(__this, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_003f;
			}
		}

IL_0026:
		{
			// OnTrackingLost?.Invoke();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = LostTrackingService_get_OnTrackingLost_mCA48BDDDEF3C36360BD9718AC52F93ADAA68A63B_inline(__this, /*hidden argument*/NULL);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = L_6;
			G_B4_0 = L_7;
			if (L_7)
			{
				G_B5_0 = L_7;
				goto IL_0032;
			}
		}

IL_002f:
		{
			goto IL_0037;
		}

IL_0032:
		{
			NullCheck(G_B5_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B5_0, /*hidden argument*/NULL);
		}

IL_0037:
		{
			// EnableTrackingLostVisual();
			LostTrackingService_EnableTrackingLostVisual_m379817441CAB4120AA55D915BFF7130C77F98EDA(__this, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x66, FINALLY_0058);
		}

IL_003f:
		{
			// OnTrackingRestored?.Invoke();
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = LostTrackingService_get_OnTrackingRestored_m2F80D0D6077ABBF90F46787FDB3CE33570C86CD3_inline(__this, /*hidden argument*/NULL);
			Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = L_8;
			G_B8_0 = L_9;
			if (L_9)
			{
				G_B9_0 = L_9;
				goto IL_004b;
			}
		}

IL_0048:
		{
			goto IL_0050;
		}

IL_004b:
		{
			NullCheck(G_B9_0);
			Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B9_0, /*hidden argument*/NULL);
		}

IL_0050:
		{
			// DisableTrackingLostVisual();
			LostTrackingService_DisableTrackingLostVisual_m363F3B6A0A99371ABFF7DBE645ED035B60BEC504(__this, /*hidden argument*/NULL);
		}

IL_0056:
		{
			// }
			IL2CPP_LEAVE(0x66, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(88)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::get_SessionSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * LostTrackingService_get_SessionSubsystem_m5E5B4FD39C386825B960BD1A4292BD418151E926 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService_get_SessionSubsystem_m5E5B4FD39C386825B960BD1A4292BD418151E926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (sessionSubsystem == null || !sessionSubsystem.running)
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_0 = ((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->get_sessionSubsystem_19();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_1 = ((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->get_sessionSubsystem_19();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.Subsystem::get_running() */, L_1);
		if (L_2)
		{
			goto IL_0061;
		}
	}

IL_0013:
	{
		// sessionSubsystem = null;
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var);
		((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->set_sessionSubsystem_19((XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD *)NULL);
		// SubsystemManager.GetInstances(XRSessionSubsystems);
		List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * L_3 = ((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->get_XRSessionSubsystems_20();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD_m3E8B8F1977A591C483278A261B5094C8DD9C3976(L_3, /*hidden argument*/SubsystemManager_GetInstances_TisXRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD_m3E8B8F1977A591C483278A261B5094C8DD9C3976_RuntimeMethod_var);
		// foreach (XRSessionSubsystem xrSessionSubsystem in XRSessionSubsystems)
		List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * L_4 = ((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->get_XRSessionSubsystems_20();
		NullCheck(L_4);
		Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310  L_5 = List_1_GetEnumerator_m813E673677879A74DAFEAEAD08CE3369C5B30C55(L_4, /*hidden argument*/List_1_GetEnumerator_m813E673677879A74DAFEAEAD08CE3369C5B30C55_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_0030:
		{
			// foreach (XRSessionSubsystem xrSessionSubsystem in XRSessionSubsystems)
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_6 = Enumerator_get_Current_m16C2BE2C4F2D7C18A3EF115573BF3DE2416798EA_inline((Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m16C2BE2C4F2D7C18A3EF115573BF3DE2416798EA_RuntimeMethod_var);
			V_1 = L_6;
			// if (xrSessionSubsystem.running)
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.Subsystem::get_running() */, L_7);
			if (!L_8)
			{
				goto IL_0048;
			}
		}

IL_0040:
		{
			// sessionSubsystem = xrSessionSubsystem;
			XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_9 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var);
			((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->set_sessionSubsystem_19(L_9);
			// break;
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}

IL_0048:
		{
			// foreach (XRSessionSubsystem xrSessionSubsystem in XRSessionSubsystems)
			bool L_10 = Enumerator_MoveNext_m260D606E1EF659DB2F8EF5AA1CD75F4C9731F05E((Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m260D606E1EF659DB2F8EF5AA1CD75F4C9731F05E_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0030;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m965435E8B1A526DA58EE2BF9D23D9593B758F0AD((Enumerator_tAE6CC660EE41DC8894774BA723D8CEA02818C310 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m965435E8B1A526DA58EE2BF9D23D9593B758F0AD_RuntimeMethod_var);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0061:
	{
		// return sessionSubsystem;
		IL2CPP_RUNTIME_CLASS_INIT(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var);
		XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD * L_11 = ((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->get_sessionSubsystem_19();
		return L_11;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingService__cctor_m215779B9BA4713682ADA03A5339CDB9FDDC272BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LostTrackingService__cctor_m215779B9BA4713682ADA03A5339CDB9FDDC272BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.Update");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral6B05A48D559A106AA113C27CF6FB5433A6F2A646, /*hidden argument*/NULL);
		((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_15(L_0);
		// private static readonly ProfilerMarker DisableTrackingLostVisualPerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.DisableTrackingLostVisual");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteralCD7CB0336FE46A3623C8B1B5409F67F0FD2BFA5B, /*hidden argument*/NULL);
		((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->set_DisableTrackingLostVisualPerfMarker_16(L_1);
		// private static readonly ProfilerMarker EnableTrackingLostVisualPerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.EnableTrackingLostVisual");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteral73BD705371F6F76E4B2220CB27E7D2462676AB56, /*hidden argument*/NULL);
		((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->set_EnableTrackingLostVisualPerfMarker_17(L_2);
		// private static readonly ProfilerMarker SetTrackingLostPerfMarker = new ProfilerMarker("[MRTK] LostTrackingService.SetTrackingLost");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_3), _stringLiteral54D70F3C5F44278C054CF3FB5ABAD3E4F00CAB12, /*hidden argument*/NULL);
		((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->set_SetTrackingLostPerfMarker_18(L_3);
		// private static XRSessionSubsystem sessionSubsystem = null;
		((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->set_sessionSubsystem_19((XRSessionSubsystem_t8AD3C01568AA19BF038D23A6031FF9814CAF93CD *)NULL);
		// private static readonly List<XRSessionSubsystem> XRSessionSubsystems = new List<XRSessionSubsystem>();
		List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 * L_4 = (List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3 *)il2cpp_codegen_object_new(List_1_tC3943A359D121C56123E4142DF967EF5FCCAF2C3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA342648D5AD9A5257CAEB13BE9446EE3A4FD563(L_4, /*hidden argument*/List_1__ctor_mDA342648D5AD9A5257CAEB13BE9446EE3A4FD563_RuntimeMethod_var);
		((LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_StaticFields*)il2cpp_codegen_static_fields_for(LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497_il2cpp_TypeInfo_var))->set_XRSessionSubsystems_20(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * LostTrackingServiceProfile_get_TrackingLostVisualPrefab_m083FCE1C002BF0DA55091C590519A9B6FAB6BFA9 (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject TrackingLostVisualPrefab => trackingLostVisualPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_trackingLostVisualPrefab_5();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostVisualLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LostTrackingServiceProfile_get_TrackingLostVisualLayer_mD2A7B62EBF89381F66C40B6AC0E7687EFF4796A7 (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method)
{
	{
		// public int TrackingLostVisualLayer => trackingLostVisualLayer;
		int32_t L_0 = __this->get_trackingLostVisualLayer_6();
		return L_0;
	}
}
// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_TrackingLostCullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LostTrackingServiceProfile_get_TrackingLostCullingMask_m9C37218F06A038ADBBFF68A09A3A6F8ED7FAD855 (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method)
{
	{
		// public LayerMask TrackingLostCullingMask => trackingLostCullingMask;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0 = __this->get_trackingLostCullingMask_7();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltTimeWhileTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m2AD0B0FB01FF4E405D168C26B76C069282B3DB2F (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltTimeWhileTrackingLost => haltTimeWhileTrackingLost;
		bool L_0 = __this->get_haltTimeWhileTrackingLost_8();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::get_HaltAudioOnTrackingLost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m58917A9067BBE7923A3DBA812B6FC3DB6976CDD8 (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltAudioOnTrackingLost => haltAudioWhileTrackingLost;
		bool L_0 = __this->get_haltAudioWhileTrackingLost_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingServiceProfile_OnValidate_m834688D1E707239D96A8AA085F52B3C54ACD425A (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method)
{
	{
		// trackingLostCullingMask.value |= 1 << trackingLostVisualLayer;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * L_0 = __this->get_address_of_trackingLostCullingMask_7();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * L_1 = L_0;
		int32_t L_2 = LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9((LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)L_1, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_trackingLostVisualLayer_6();
		LayerMask_set_value_mE825B6131A75814FCF2EA32ECBE2A205E6531585((LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)L_1, ((int32_t)((int32_t)L_2|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.Tracking.LostTrackingServiceProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LostTrackingServiceProfile__ctor_m0A6D59B150CDF7A9FF3E6451945CA763D6DCEFD6 (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method)
{
	{
		// private int trackingLostVisualLayer = 31;
		__this->set_trackingLostVisualLayer_6(((int32_t)31));
		// private bool haltTimeWhileTrackingLost = true;
		__this->set_haltTimeWhileTrackingLost_8((bool)1);
		// private bool haltAudioWhileTrackingLost = true;
		__this->set_haltAudioWhileTrackingLost_9((bool)1);
		BaseMixedRealityProfile__ctor_mF3BF67E8AB03CA55110F1714B3FAF519064AEE63(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseExtensionService_set_Registrar_mA76D2D1035048BAFA8AA16DB7F31A3D280D8A5AF_inline (BaseExtensionService_tE68B22546964CFD048999DD9950F7814986A0B2A * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltTimeWhileTrackingLost_m2AD0B0FB01FF4E405D168C26B76C069282B3DB2F_inline (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltTimeWhileTrackingLost => haltTimeWhileTrackingLost;
		bool L_0 = __this->get_haltTimeWhileTrackingLost_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LostTrackingServiceProfile_get_HaltAudioOnTrackingLost_m58917A9067BBE7923A3DBA812B6FC3DB6976CDD8_inline (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method)
{
	{
		// public bool HaltAudioOnTrackingLost => haltAudioWhileTrackingLost;
		bool L_0 = __this->get_haltAudioWhileTrackingLost_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * LostTrackingServiceProfile_get_TrackingLostVisualPrefab_m083FCE1C002BF0DA55091C590519A9B6FAB6BFA9_inline (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject TrackingLostVisualPrefab => trackingLostVisualPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_trackingLostVisualPrefab_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LostTrackingServiceProfile_get_TrackingLostCullingMask_m9C37218F06A038ADBBFF68A09A3A6F8ED7FAD855_inline (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method)
{
	{
		// public LayerMask TrackingLostCullingMask => trackingLostCullingMask;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0 = __this->get_trackingLostCullingMask_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LostTrackingServiceProfile_get_TrackingLostVisualLayer_mD2A7B62EBF89381F66C40B6AC0E7687EFF4796A7_inline (LostTrackingServiceProfile_t77530C9878FEBCC852A167D882531A6F22494F47 * __this, const RuntimeMethod* method)
{
	{
		// public int TrackingLostVisualLayer => trackingLostVisualLayer;
		int32_t L_0 = __this->get_trackingLostVisualLayer_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LostTrackingService_get_TrackingLost_m54B5CDB841ADE3B08EA0DD7E78DB5BA0ECCB03A4_inline (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = __this->get_U3CTrackingLostU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LostTrackingService_set_TrackingLost_m32F2BF2888BAB05006B204362617C4EF1BBA0B20_inline (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool TrackingLost { get; private set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CTrackingLostU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * LostTrackingService_get_OnTrackingLost_mCA48BDDDEF3C36360BD9718AC52F93ADAA68A63B_inline (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingLost { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTrackingLostU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * LostTrackingService_get_OnTrackingRestored_m2F80D0D6077ABBF90F46787FDB3CE33570C86CD3_inline (LostTrackingService_t6EA98AD0767DA522BE6892CB261F62412841D497 * __this, const RuntimeMethod* method)
{
	{
		// public Action OnTrackingRestored { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COnTrackingRestoredU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
