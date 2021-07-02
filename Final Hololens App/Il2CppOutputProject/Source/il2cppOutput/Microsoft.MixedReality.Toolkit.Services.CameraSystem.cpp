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
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_tA7203EB27AD7800E6A73CFA0BAB39419EB8A5767;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_t722BC96B146A1D719630BF9353E6A1766F946E4C;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_t92B08083DEC0CD4EA66D2F561C0BCFD96A124488;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t16B2C7F0CC5EC1AF3646CF0469CD33CE7D029372;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t5AFD7FC0194A9030B32E260CF4E74C230A14AFB5;
// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tE5E85BA0D00C0A95087488B3DCB5828289607864;
// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tE71518C4E7DEC9DD2AE1F42BBDEEF7E0E0348955;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t3C77354788A4DF55DF61D75480F9A815C0A99DBA;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider
struct IMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t7FAF3EA59F62B1D5C725CF570E42BCC0607F7715;
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7;
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[]
struct MixedRealityCameraSettingsConfigurationU5BU5D_t1C1D7D928817A6139902087218F301F17C0E3BDB;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C RuntimeClass* BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6B93F3CE3A1A9C3F38BBEEF4D3D7C5CE1F2DA99E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t57F690D37B9BDB055298BF466DE13CEAA4190AE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityService_t8C03EB647E3C9EE21D05C3C04A890139C53154A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t54193573EC82F060056D8AB91DEF57EFB393CFDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t9A3ED8756AF9A47E7FB24CD9C34C355A8E9E43B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t9D59FE370664E420A540CCF9E2B297D5B9B5C729_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral196C8C01929CBAF19C0D357B9C59A48315353628;
IL2CPP_EXTERN_C String_t* _stringLiteral477D591F1FC256A3C3E8E9B6CB4C57DD7113F1B9;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF56F0DB79ED48F92A89FC9BCCE0794BDA6075F;
IL2CPP_EXTERN_C String_t* _stringLiteral5DE6C8E7701D8D9660152721AEC14FBFED3B0408;
IL2CPP_EXTERN_C String_t* _stringLiteral615E7AE91B5D8E95D171FD00609751001072553C;
IL2CPP_EXTERN_C String_t* _stringLiteral7EFBD08779CD30AA4BB155A03A7A8843252129C1;
IL2CPP_EXTERN_C String_t* _stringLiteralA4093EA4CA3DFEE691E40B5C6CB894E117A3C3B9;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProvider_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_m6F5E08B7992484624C2E6131527E2B0C26F04DFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_mC65DB681375561FD8E0B02587BCE5AEED9C0668A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_m991CE48AF5BE6E062CE88AF7DE074CBC29A743C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_m6BD800BA6DA362EB81EDC002A37366FFEBCAD06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m4E0F7D41F7A0C824A7399CC5C6D39F71A010571C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m7946A083DF930CCE0D6509DD807F5D177749413C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Destroy_m6FC82020EB6C432DBB5602E741AFB91805CFC305_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Disable_m287C69AACE7D0C9589EAA32AA1C55063691A91D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Enable_m97E2955FE753DEA111F3E11D6DDF566FA99F9AFE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Initialize_m429F85CAC348F6F7A53BE164191E9FEBC9790035_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_mFF17CF85730A4EB940E8079DF4E37812F125C046_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_Update_m7581008C3DDD7E63A9664F8E8A48F99B5BFCC368_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem__cctor_mAC2A3B6B2F39F1F0506C0AF458866BF90A8D5679_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem__ctor_m5B81508697D42F64070F5194B6B715B63AC9A9F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_get_CameraProfile_m519104A11667AC8221DF1CFC65170381FFC27DF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityCameraSystem_get_IsOpaque_mB7E6E89506B96056DD5D19720DBD40AB91F220F5_MetadataUsageId;

struct MixedRealityCameraSettingsConfigurationU5BU5D_t1C1D7D928817A6139902087218F301F17C0E3BDB;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tEE8627C8157AB6B156D938AC4A752A8728F180D5 
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


// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct  SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Utilities.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};

struct SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.SystemType::ReferenceMappings
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___ReferenceMappings_2;

public:
	inline static int32_t get_offset_of_ReferenceMappings_2() { return static_cast<int32_t>(offsetof(SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711_StaticFields, ___ReferenceMappings_2)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_ReferenceMappings_2() const { return ___ReferenceMappings_2; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_ReferenceMappings_2() { return &___ReferenceMappings_2; }
	inline void set_ReferenceMappings_2(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___ReferenceMappings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReferenceMappings_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
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


// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType
struct  DisplayType_tBB34771A13B21FD27EB35CF0A2C0723CBE3B712D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_tBB34771A13B21FD27EB35CF0A2C0723CBE3B712D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms
struct  SupportedPlatforms_tA3D48634DA06238865A3950E795EC1DF3320687E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedPlatforms_tA3D48634DA06238865A3950E795EC1DF3320687E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
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


// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_t5CCA5C0FD787D780C128B8B0D6ACC80BB41B1DE7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct  BaseEventSystem_tE71518C4E7DEC9DD2AE1F42BBDEEF7E0E0348955  : public BaseService_t3C77354788A4DF55DF61D75480F9A815C0A99DBA
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_6;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_7;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t16B2C7F0CC5EC1AF3646CF0469CD33CE7D029372 * ___postponedActions_8;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_t92B08083DEC0CD4EA66D2F561C0BCFD96A124488 * ___postponedObjectActions_9;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem_EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_tA7203EB27AD7800E6A73CFA0BAB39419EB8A5767 * ___U3CEventHandlersByTypeU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_6() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE71518C4E7DEC9DD2AE1F42BBDEEF7E0E0348955, ___eventExecutionDepth_6)); }
	inline int32_t get_eventExecutionDepth_6() const { return ___eventExecutionDepth_6; }
	inline int32_t* get_address_of_eventExecutionDepth_6() { return &___eventExecutionDepth_6; }
	inline void set_eventExecutionDepth_6(int32_t value)
	{
		___eventExecutionDepth_6 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_7() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE71518C4E7DEC9DD2AE1F42BBDEEF7E0E0348955, ___eventSystemHandlerType_7)); }
	inline Type_t * get_eventSystemHandlerType_7() const { return ___eventSystemHandlerType_7; }
	inline Type_t ** get_address_of_eventSystemHandlerType_7() { return &___eventSystemHandlerType_7; }
	inline void set_eventSystemHandlerType_7(Type_t * value)
	{
		___eventSystemHandlerType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_7), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE71518C4E7DEC9DD2AE1F42BBDEEF7E0E0348955, ___postponedActions_8)); }
	inline List_1_t16B2C7F0CC5EC1AF3646CF0469CD33CE7D029372 * get_postponedActions_8() const { return ___postponedActions_8; }
	inline List_1_t16B2C7F0CC5EC1AF3646CF0469CD33CE7D029372 ** get_address_of_postponedActions_8() { return &___postponedActions_8; }
	inline void set_postponedActions_8(List_1_t16B2C7F0CC5EC1AF3646CF0469CD33CE7D029372 * value)
	{
		___postponedActions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_8), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE71518C4E7DEC9DD2AE1F42BBDEEF7E0E0348955, ___postponedObjectActions_9)); }
	inline List_1_t92B08083DEC0CD4EA66D2F561C0BCFD96A124488 * get_postponedObjectActions_9() const { return ___postponedObjectActions_9; }
	inline List_1_t92B08083DEC0CD4EA66D2F561C0BCFD96A124488 ** get_address_of_postponedObjectActions_9() { return &___postponedObjectActions_9; }
	inline void set_postponedObjectActions_9(List_1_t92B08083DEC0CD4EA66D2F561C0BCFD96A124488 * value)
	{
		___postponedObjectActions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE71518C4E7DEC9DD2AE1F42BBDEEF7E0E0348955, ___U3CEventHandlersByTypeU3Ek__BackingField_10)); }
	inline Dictionary_2_tA7203EB27AD7800E6A73CFA0BAB39419EB8A5767 * get_U3CEventHandlersByTypeU3Ek__BackingField_10() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline Dictionary_2_tA7203EB27AD7800E6A73CFA0BAB39419EB8A5767 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return &___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_10(Dictionary_2_tA7203EB27AD7800E6A73CFA0BAB39419EB8A5767 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE71518C4E7DEC9DD2AE1F42BBDEEF7E0E0348955, ___U3CEventListenersU3Ek__BackingField_11)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_11() const { return ___U3CEventListenersU3Ek__BackingField_11; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_11() { return &___U3CEventListenersU3Ek__BackingField_11; }
	inline void set_U3CEventListenersU3Ek__BackingField_11(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_11), (void*)value);
	}
};

struct BaseEventSystem_tE71518C4E7DEC9DD2AE1F42BBDEEF7E0E0348955_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_12;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_5() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE71518C4E7DEC9DD2AE1F42BBDEEF7E0E0348955_StaticFields, ___enableDanglingHandlerDiagnostics_5)); }
	inline bool get_enableDanglingHandlerDiagnostics_5() const { return ___enableDanglingHandlerDiagnostics_5; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_5() { return &___enableDanglingHandlerDiagnostics_5; }
	inline void set_enableDanglingHandlerDiagnostics_5(bool value)
	{
		___enableDanglingHandlerDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_tE71518C4E7DEC9DD2AE1F42BBDEEF7E0E0348955_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_12)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_12() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_12; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_12() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_12; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_12(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_12 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct  MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::componentType
	SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * ___componentType_0;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::componentName
	String_t* ___componentName_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::priority
	uint32_t ___priority_2;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::runtimePlatform
	int32_t ___runtimePlatform_3;
	// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::settingsProfile
	BaseCameraSettingsProfile_t5AFD7FC0194A9030B32E260CF4E74C230A14AFB5 * ___settingsProfile_4;

public:
	inline static int32_t get_offset_of_componentType_0() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79, ___componentType_0)); }
	inline SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * get_componentType_0() const { return ___componentType_0; }
	inline SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 ** get_address_of_componentType_0() { return &___componentType_0; }
	inline void set_componentType_0(SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * value)
	{
		___componentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_componentName_1() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79, ___componentName_1)); }
	inline String_t* get_componentName_1() const { return ___componentName_1; }
	inline String_t** get_address_of_componentName_1() { return &___componentName_1; }
	inline void set_componentName_1(String_t* value)
	{
		___componentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___componentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79, ___priority_2)); }
	inline uint32_t get_priority_2() const { return ___priority_2; }
	inline uint32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(uint32_t value)
	{
		___priority_2 = value;
	}

	inline static int32_t get_offset_of_runtimePlatform_3() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79, ___runtimePlatform_3)); }
	inline int32_t get_runtimePlatform_3() const { return ___runtimePlatform_3; }
	inline int32_t* get_address_of_runtimePlatform_3() { return &___runtimePlatform_3; }
	inline void set_runtimePlatform_3(int32_t value)
	{
		___runtimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_settingsProfile_4() { return static_cast<int32_t>(offsetof(MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79, ___settingsProfile_4)); }
	inline BaseCameraSettingsProfile_t5AFD7FC0194A9030B32E260CF4E74C230A14AFB5 * get_settingsProfile_4() const { return ___settingsProfile_4; }
	inline BaseCameraSettingsProfile_t5AFD7FC0194A9030B32E260CF4E74C230A14AFB5 ** get_address_of_settingsProfile_4() { return &___settingsProfile_4; }
	inline void set_settingsProfile_4(BaseCameraSettingsProfile_t5AFD7FC0194A9030B32E260CF4E74C230A14AFB5 * value)
	{
		___settingsProfile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingsProfile_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79_marshaled_pinvoke
{
	SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * ___componentType_0;
	char* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseCameraSettingsProfile_t5AFD7FC0194A9030B32E260CF4E74C230A14AFB5 * ___settingsProfile_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration
struct MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79_marshaled_com
{
	SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * ___componentType_0;
	Il2CppChar* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseCameraSettingsProfile_t5AFD7FC0194A9030B32E260CF4E74C230A14AFB5 * ___settingsProfile_4;
};

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct  BaseCoreSystem_tE5E85BA0D00C0A95087488B3DCB5828289607864  : public BaseEventSystem_tE71518C4E7DEC9DD2AE1F42BBDEEF7E0E0348955
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tE5E85BA0D00C0A95087488B3DCB5828289607864, ___U3CRegistrarU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_13() const { return ___U3CRegistrarU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_13() { return &___U3CRegistrarU3Ek__BackingField_13; }
	inline void set_U3CRegistrarU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_13), (void*)value);
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


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct  BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB  : public BaseCoreSystem_tE5E85BA0D00C0A95087488B3DCB5828289607864
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_t722BC96B146A1D719630BF9353E6A1766F946E4C * ___dataProviders_14;

public:
	inline static int32_t get_offset_of_dataProviders_14() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB, ___dataProviders_14)); }
	inline List_1_t722BC96B146A1D719630BF9353E6A1766F946E4C * get_dataProviders_14() const { return ___dataProviders_14; }
	inline List_1_t722BC96B146A1D719630BF9353E6A1766F946E4C ** get_address_of_dataProviders_14() { return &___dataProviders_14; }
	inline void set_dataProviders_14(List_1_t722BC96B146A1D719630BF9353E6A1766F946E4C * value)
	{
		___dataProviders_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviders_14), (void*)value);
	}
};

struct BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_16;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_15() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB_StaticFields, ___UpdatePerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_15() const { return ___UpdatePerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_15() { return &___UpdatePerfMarker_15; }
	inline void set_UpdatePerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_16() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB_StaticFields, ___LateUpdatePerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_16() const { return ___LateUpdatePerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_16() { return &___LateUpdatePerfMarker_16; }
	inline void set_LateUpdatePerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_16 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct  BaseCameraSettingsProfile_t5AFD7FC0194A9030B32E260CF4E74C230A14AFB5  : public BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct  MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7  : public BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1
{
public:
	// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[] Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::settingsConfigurations
	MixedRealityCameraSettingsConfigurationU5BU5D_t1C1D7D928817A6139902087218F301F17C0E3BDB* ___settingsConfigurations_5;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::nearClipPlaneOpaqueDisplay
	float ___nearClipPlaneOpaqueDisplay_6;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::farClipPlaneOpaqueDisplay
	float ___farClipPlaneOpaqueDisplay_7;
	// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::cameraClearFlagsOpaqueDisplay
	int32_t ___cameraClearFlagsOpaqueDisplay_8;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::backgroundColorOpaqueDisplay
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___backgroundColorOpaqueDisplay_9;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::opaqueQualityLevel
	int32_t ___opaqueQualityLevel_10;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::nearClipPlaneTransparentDisplay
	float ___nearClipPlaneTransparentDisplay_11;
	// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::farClipPlaneTransparentDisplay
	float ___farClipPlaneTransparentDisplay_12;
	// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::cameraClearFlagsTransparentDisplay
	int32_t ___cameraClearFlagsTransparentDisplay_13;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::backgroundColorTransparentDisplay
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___backgroundColorTransparentDisplay_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::transparentQualityLevel
	int32_t ___transparentQualityLevel_15;

public:
	inline static int32_t get_offset_of_settingsConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7, ___settingsConfigurations_5)); }
	inline MixedRealityCameraSettingsConfigurationU5BU5D_t1C1D7D928817A6139902087218F301F17C0E3BDB* get_settingsConfigurations_5() const { return ___settingsConfigurations_5; }
	inline MixedRealityCameraSettingsConfigurationU5BU5D_t1C1D7D928817A6139902087218F301F17C0E3BDB** get_address_of_settingsConfigurations_5() { return &___settingsConfigurations_5; }
	inline void set_settingsConfigurations_5(MixedRealityCameraSettingsConfigurationU5BU5D_t1C1D7D928817A6139902087218F301F17C0E3BDB* value)
	{
		___settingsConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingsConfigurations_5), (void*)value);
	}

	inline static int32_t get_offset_of_nearClipPlaneOpaqueDisplay_6() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7, ___nearClipPlaneOpaqueDisplay_6)); }
	inline float get_nearClipPlaneOpaqueDisplay_6() const { return ___nearClipPlaneOpaqueDisplay_6; }
	inline float* get_address_of_nearClipPlaneOpaqueDisplay_6() { return &___nearClipPlaneOpaqueDisplay_6; }
	inline void set_nearClipPlaneOpaqueDisplay_6(float value)
	{
		___nearClipPlaneOpaqueDisplay_6 = value;
	}

	inline static int32_t get_offset_of_farClipPlaneOpaqueDisplay_7() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7, ___farClipPlaneOpaqueDisplay_7)); }
	inline float get_farClipPlaneOpaqueDisplay_7() const { return ___farClipPlaneOpaqueDisplay_7; }
	inline float* get_address_of_farClipPlaneOpaqueDisplay_7() { return &___farClipPlaneOpaqueDisplay_7; }
	inline void set_farClipPlaneOpaqueDisplay_7(float value)
	{
		___farClipPlaneOpaqueDisplay_7 = value;
	}

	inline static int32_t get_offset_of_cameraClearFlagsOpaqueDisplay_8() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7, ___cameraClearFlagsOpaqueDisplay_8)); }
	inline int32_t get_cameraClearFlagsOpaqueDisplay_8() const { return ___cameraClearFlagsOpaqueDisplay_8; }
	inline int32_t* get_address_of_cameraClearFlagsOpaqueDisplay_8() { return &___cameraClearFlagsOpaqueDisplay_8; }
	inline void set_cameraClearFlagsOpaqueDisplay_8(int32_t value)
	{
		___cameraClearFlagsOpaqueDisplay_8 = value;
	}

	inline static int32_t get_offset_of_backgroundColorOpaqueDisplay_9() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7, ___backgroundColorOpaqueDisplay_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_backgroundColorOpaqueDisplay_9() const { return ___backgroundColorOpaqueDisplay_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_backgroundColorOpaqueDisplay_9() { return &___backgroundColorOpaqueDisplay_9; }
	inline void set_backgroundColorOpaqueDisplay_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___backgroundColorOpaqueDisplay_9 = value;
	}

	inline static int32_t get_offset_of_opaqueQualityLevel_10() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7, ___opaqueQualityLevel_10)); }
	inline int32_t get_opaqueQualityLevel_10() const { return ___opaqueQualityLevel_10; }
	inline int32_t* get_address_of_opaqueQualityLevel_10() { return &___opaqueQualityLevel_10; }
	inline void set_opaqueQualityLevel_10(int32_t value)
	{
		___opaqueQualityLevel_10 = value;
	}

	inline static int32_t get_offset_of_nearClipPlaneTransparentDisplay_11() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7, ___nearClipPlaneTransparentDisplay_11)); }
	inline float get_nearClipPlaneTransparentDisplay_11() const { return ___nearClipPlaneTransparentDisplay_11; }
	inline float* get_address_of_nearClipPlaneTransparentDisplay_11() { return &___nearClipPlaneTransparentDisplay_11; }
	inline void set_nearClipPlaneTransparentDisplay_11(float value)
	{
		___nearClipPlaneTransparentDisplay_11 = value;
	}

	inline static int32_t get_offset_of_farClipPlaneTransparentDisplay_12() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7, ___farClipPlaneTransparentDisplay_12)); }
	inline float get_farClipPlaneTransparentDisplay_12() const { return ___farClipPlaneTransparentDisplay_12; }
	inline float* get_address_of_farClipPlaneTransparentDisplay_12() { return &___farClipPlaneTransparentDisplay_12; }
	inline void set_farClipPlaneTransparentDisplay_12(float value)
	{
		___farClipPlaneTransparentDisplay_12 = value;
	}

	inline static int32_t get_offset_of_cameraClearFlagsTransparentDisplay_13() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7, ___cameraClearFlagsTransparentDisplay_13)); }
	inline int32_t get_cameraClearFlagsTransparentDisplay_13() const { return ___cameraClearFlagsTransparentDisplay_13; }
	inline int32_t* get_address_of_cameraClearFlagsTransparentDisplay_13() { return &___cameraClearFlagsTransparentDisplay_13; }
	inline void set_cameraClearFlagsTransparentDisplay_13(int32_t value)
	{
		___cameraClearFlagsTransparentDisplay_13 = value;
	}

	inline static int32_t get_offset_of_backgroundColorTransparentDisplay_14() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7, ___backgroundColorTransparentDisplay_14)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_backgroundColorTransparentDisplay_14() const { return ___backgroundColorTransparentDisplay_14; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_backgroundColorTransparentDisplay_14() { return &___backgroundColorTransparentDisplay_14; }
	inline void set_backgroundColorTransparentDisplay_14(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___backgroundColorTransparentDisplay_14 = value;
	}

	inline static int32_t get_offset_of_transparentQualityLevel_15() { return static_cast<int32_t>(offsetof(MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7, ___transparentQualityLevel_15)); }
	inline int32_t get_transparentQualityLevel_15() const { return ___transparentQualityLevel_15; }
	inline int32_t* get_address_of_transparentQualityLevel_15() { return &___transparentQualityLevel_15; }
	inline void set_transparentQualityLevel_15(int32_t value)
	{
		___transparentQualityLevel_15 = value;
	}
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


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct  MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690  : public BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB
{
public:
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_17;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_18;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_19;
	// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::currentDisplayType
	int32_t ___currentDisplayType_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::cameraOpaqueLastFrame
	bool ___cameraOpaqueLastFrame_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::useFallbackBehavior
	bool ___useFallbackBehavior_22;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690, ___U3CNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CNameU3Ek__BackingField_17() const { return ___U3CNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_17() { return &___U3CNameU3Ek__BackingField_17; }
	inline void set_U3CNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690, ___U3CSourceIdU3Ek__BackingField_18)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_18() const { return ___U3CSourceIdU3Ek__BackingField_18; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_18() { return &___U3CSourceIdU3Ek__BackingField_18; }
	inline void set_U3CSourceIdU3Ek__BackingField_18(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690, ___U3CSourceNameU3Ek__BackingField_19)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_19() const { return ___U3CSourceNameU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_19() { return &___U3CSourceNameU3Ek__BackingField_19; }
	inline void set_U3CSourceNameU3Ek__BackingField_19(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_currentDisplayType_20() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690, ___currentDisplayType_20)); }
	inline int32_t get_currentDisplayType_20() const { return ___currentDisplayType_20; }
	inline int32_t* get_address_of_currentDisplayType_20() { return &___currentDisplayType_20; }
	inline void set_currentDisplayType_20(int32_t value)
	{
		___currentDisplayType_20 = value;
	}

	inline static int32_t get_offset_of_cameraOpaqueLastFrame_21() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690, ___cameraOpaqueLastFrame_21)); }
	inline bool get_cameraOpaqueLastFrame_21() const { return ___cameraOpaqueLastFrame_21; }
	inline bool* get_address_of_cameraOpaqueLastFrame_21() { return &___cameraOpaqueLastFrame_21; }
	inline void set_cameraOpaqueLastFrame_21(bool value)
	{
		___cameraOpaqueLastFrame_21 = value;
	}

	inline static int32_t get_offset_of_useFallbackBehavior_22() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690, ___useFallbackBehavior_22)); }
	inline bool get_useFallbackBehavior_22() const { return ___useFallbackBehavior_22; }
	inline bool* get_address_of_useFallbackBehavior_22() { return &___useFallbackBehavior_22; }
	inline void set_useFallbackBehavior_22(bool value)
	{
		___useFallbackBehavior_22 = value;
	}
};

struct MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaquePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForOpaquePerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForTransparentPerfMarker_25;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_23() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_StaticFields, ___UpdatePerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_23() const { return ___UpdatePerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_23() { return &___UpdatePerfMarker_23; }
	inline void set_UpdatePerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForOpaquePerfMarker_24() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_StaticFields, ___ApplySettingsForOpaquePerfMarker_24)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForOpaquePerfMarker_24() const { return ___ApplySettingsForOpaquePerfMarker_24; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForOpaquePerfMarker_24() { return &___ApplySettingsForOpaquePerfMarker_24; }
	inline void set_ApplySettingsForOpaquePerfMarker_24(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForOpaquePerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForTransparentPerfMarker_25() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_StaticFields, ___ApplySettingsForTransparentPerfMarker_25)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForTransparentPerfMarker_25() const { return ___ApplySettingsForTransparentPerfMarker_25; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForTransparentPerfMarker_25() { return &___ApplySettingsForTransparentPerfMarker_25; }
	inline void set_ApplySettingsForTransparentPerfMarker_25(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForTransparentPerfMarker_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[]
struct MixedRealityCameraSettingsConfigurationU5BU5D_t1C1D7D928817A6139902087218F301F17C0E3BDB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79  m_Items[1];

public:
	inline MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___settingsProfile_4), (void*)NULL);
		#endif
	}
	inline MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___componentName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___settingsProfile_4), (void*)NULL);
		#endif
	}
};


// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<System.Object>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m8878D17BBA166DAD4D2F95118EF772DE2BC9AF19_gshared (BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB * __this, Type_t * ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_m59374D4675B50202021C67094185289F27FEBF16_gshared (BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB * __this, RuntimeObject * ___dataProviderInstance0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_m5B81508697D42F64070F5194B6B715B63AC9A9F9 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m0F8B0D8BD392A1E7E37852A060D40930BFDE7802_inline (BaseCoreSystem_tE5E85BA0D00C0A95087488B3DCB5828289607864 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem__ctor_m3226CAFCA54B4025D6AE86EA8D3F5BF9D3CF0A18 (BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB * __this, BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * ___profile0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration[] Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_SettingsConfigurations()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityCameraSettingsConfigurationU5BU5D_t1C1D7D928817A6139902087218F301F17C0E3BDB* MixedRealityCameraProfile_get_SettingsConfigurations_mCFB115CBE9C6B1ADCD8CEE444ABBCFD7286A13C7_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_ComponentType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * MixedRealityCameraSettingsConfiguration_get_ComponentType_m9F6753B16E1B5BD32581C24DEA51331DAAFA8B03_inline (MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_mFAA918B6E4F9820651DF69F1FDE16D69B212B085_inline (SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_ComponentName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSettingsConfiguration_get_ComponentName_m02139D3CF7E72E5F1EA9770CFDF0010D0250A79C_inline (MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_Priority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSettingsConfiguration_get_Priority_mDFA730BC8E68D3EA27A75BEE14D80CE454261D50_inline (MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_SettingsProfile()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseCameraSettingsProfile_t5AFD7FC0194A9030B32E260CF4E74C230A14AFB5 * MixedRealityCameraSettingsConfiguration_get_SettingsProfile_mEAC74850DD1364799FC0C2CACA10D126C80B8509_inline (MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSettingsConfiguration::get_RuntimePlatform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m9F628DF5149A8273689A0BECD02E5A23C55D9344_inline (MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>(System.Type,System.String,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
inline bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_m991CE48AF5BE6E062CE88AF7DE074CBC29A743C9 (BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB * __this, Type_t * ___concreteType0, String_t* ___providerName1, int32_t ___supportedPlatforms2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB *, Type_t *, String_t*, int32_t, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_m8878D17BBA166DAD4D2F95118EF772DE2BC9AF19_gshared)(__this, ___concreteType0, ___providerName1, ___supportedPlatforms2, ___args3, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_get_IsOpaque_mB7E6E89506B96056DD5D19720DBD40AB91F220F5 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaqueDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m4E0F7D41F7A0C824A7399CC5C6D39F71A010571C (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m7946A083DF930CCE0D6509DD807F5D177749413C (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Position_mE1049767EEDBCCAB1BB120A524F025510CF1ABFA (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPlayspace_set_Rotation_m53178CE06D4E9449484892EECE072C40FBEFA428 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6 (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m37169F3E8ADDA24A5A221AD7397835B437B71439 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Enable_m3F6D1FAF91A9662E2396B3BCB8CC364D28FCF04A (BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m994C663ABB5A9FD8235698D86BE897AA972D74EB (BaseService_t3C77354788A4DF55DF61D75480F9A815C0A99DBA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>(!!0)
inline bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_m6BD800BA6DA362EB81EDC002A37366FFEBCAD06E (BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB * __this, RuntimeObject* ___dataProviderInstance0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB *, RuntimeObject*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_m59374D4675B50202021C67094185289F27FEBF16_gshared)(__this, ___dataProviderInstance0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_m3A0F55B084573FFE0D06446E4893A8D0735BD82E (BaseEventSystem_tE71518C4E7DEC9DD2AE1F42BBDEEF7E0E0348955 * __this, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_CameraProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * MixedRealityCameraSystem_get_CameraProfile_m519104A11667AC8221DF1CFC65170381FFC27DF5 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method);
// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_CameraClearFlagsOpaqueDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m0D5E913217ADB8639741922E5F1775FB8319D6F7_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_mE79A756CD7C9C84C86B6676F5C6342A45AE5F373 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_NearClipPlaneOpaqueDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mE4B19893A5F6008D9429CE5388B2B54C36E08380_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m4EA1D92F6E1D17E423EC036561E115F434DC2263 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_FarClipPlaneOpaqueDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_mE334BEE691A9EAD388879EA166F7E38ADB3817ED_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_BackgroundColorOpaqueDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_m49D541879AC4AD44D1F74E0BB859FC42CA42D27B_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_OpaqueQualityLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_OpaqueQualityLevel_m84C4AEA2738466774453AAAFB5F2E08D89CC8693_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::SetQualityLevel(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_SetQualityLevel_m7925838FC6013484091AB48C3E8FE7B09150A7C6 (int32_t ___index0, bool ___applyExpensiveChanges1, const RuntimeMethod* method);
// UnityEngine.CameraClearFlags Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_CameraClearFlagsTransparentDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m5A0F88BC56B8B16AB9B7DE6B33C98216D83ED8AB_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method);
// UnityEngine.Color Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_BackgroundColorTransparentDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m0226458FC2CBAD70ED0BE6904B0FED3202E6C6B3_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_NearClipPlaneTransparentDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_mEBC4B7D5D95B7A559BEC2F4E2DBA48A783732E37_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_FarClipPlaneTransparentDisplay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m8215DD1E1FCE02D9C6832CD87F43F5887B26B97D_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile::get_TransparentQualityLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_TransparentQualityLevel_m34343CDEA4E09C57247127FFE378245860D1FF06_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_mB347A7DC8D5901C98D7D68DE128348364A666784_inline (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0 (int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_m0B460160340279A63D1332CF147C9B5923E4A181 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, RuntimeObject* ___registrar0, BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * ___profile1, const RuntimeMethod* method)
{
	{
		// BaseMixedRealityProfile profile = null) : this(profile)
		BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * L_0 = ___profile1;
		MixedRealityCameraSystem__ctor_m5B81508697D42F64070F5194B6B715B63AC9A9F9(__this, L_0, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_m0F8B0D8BD392A1E7E37852A060D40930BFDE7802_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__ctor_m5B81508697D42F64070F5194B6B715B63AC9A9F9 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem__ctor_m5B81508697D42F64070F5194B6B715B63AC9A9F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		__this->set_U3CNameU3Ek__BackingField_17(_stringLiteral196C8C01929CBAF19C0D357B9C59A48315353628);
		// public string SourceName { get; } = "Mixed Reality Camera System";
		__this->set_U3CSourceNameU3Ek__BackingField_19(_stringLiteral196C8C01929CBAF19C0D357B9C59A48315353628);
		// private bool useFallbackBehavior = true;
		__this->set_useFallbackBehavior_22((bool)1);
		// BaseMixedRealityProfile profile = null) : base(profile)
		BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * L_0 = ___profile0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseDataProviderAccessCoreSystem_t250C466122983C1CA09A654BD5E38C6165D22BCB_il2cpp_TypeInfo_var);
		BaseDataProviderAccessCoreSystem__ctor_m3226CAFCA54B4025D6AE86EA8D3F5BF9D3CF0A18(__this, L_0, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_Name_m98AADC0E0509383A11165530599110DDC5F4CF4F (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_set_Name_m4446A78DD2AE3350AF3B715E5C22334400853C59 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Camera System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_get_IsOpaque_mB7E6E89506B96056DD5D19720DBD40AB91F220F5 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_get_IsOpaque_mB7E6E89506B96056DD5D19720DBD40AB91F220F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// currentDisplayType = DisplayType.Opaque;
		__this->set_currentDisplayType_20(0);
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> dataProviders = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_mC65DB681375561FD8E0B02587BCE5AEED9C0668A_RuntimeMethod_var, __this);
		V_0 = L_0;
		// if (dataProviders.Count > 0)
		RuntimeObject* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t54193573EC82F060056D8AB91DEF57EFB393CFDC_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		// if (!dataProviders[0].IsOpaque)
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_t9A3ED8756AF9A47E7FB24CD9C34C355A8E9E43B9_il2cpp_TypeInfo_var, L_3, 0);
		NullCheck(L_4);
		bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider::get_IsOpaque() */, IMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		// currentDisplayType = DisplayType.Transparent;
		__this->set_currentDisplayType_20(1);
		// }
		goto IL_0038;
	}

IL_002e:
	{
		// Debug.LogWarning("Windows Mixed Reality specific camera code has been moved into Windows Mixed Reality Camera Settings. Please ensure you have this added under your Camera System's Settings Providers, as this deprecated code path may be removed in a future update.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralA4093EA4CA3DFEE691E40B5C6CB894E117A3C3B9, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// return currentDisplayType == DisplayType.Opaque;
		int32_t L_6 = __this->get_currentDisplayType_20();
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSystem_get_SourceId_m3C33B9C42C734D30102077E04B26E1CEDD1B255A (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method)
{
	{
		// public uint SourceId { get; } = 0;
		uint32_t L_0 = __this->get_U3CSourceIdU3Ek__BackingField_18();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_mB347A7DC8D5901C98D7D68DE128348364A666784 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_19();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::get_CameraProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * MixedRealityCameraSystem_get_CameraProfile_m519104A11667AC8221DF1CFC65170381FFC27DF5 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_get_CameraProfile_m519104A11667AC8221DF1CFC65170381FFC27DF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MixedRealityCameraProfile CameraProfile => ConfigurationProfile as MixedRealityCameraProfile;
		BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		return ((MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 *)IsInstClass((RuntimeObject*)L_0, MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7_il2cpp_TypeInfo_var));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Initialize_m429F85CAC348F6F7A53BE164191E9FEBC9790035 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Initialize_m429F85CAC348F6F7A53BE164191E9FEBC9790035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * V_0 = NULL;
	int32_t V_1 = 0;
	MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_3 = NULL;
	SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * G_B5_0 = NULL;
	SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * G_B4_0 = NULL;
	Type_t * G_B6_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	{
		// MixedRealityCameraProfile profile = ConfigurationProfile as MixedRealityCameraProfile;
		BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_t0F1BC2220D3C6B6A340CABAA6FC402B7FE795FC1 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 *)IsInstClass((RuntimeObject*)L_0, MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7_il2cpp_TypeInfo_var));
		// if ((GetDataProviders<IMixedRealityCameraSettingsProvider>().Count == 0) && (profile != null))
		RuntimeObject* L_1 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_mC65DB681375561FD8E0B02587BCE5AEED9C0668A_RuntimeMethod_var, __this);
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t54193573EC82F060056D8AB91DEF57EFB393CFDC_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_00d2;
		}
	}
	{
		MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00d2;
		}
	}
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		V_1 = 0;
		goto IL_00c4;
	}

IL_002f:
	{
		// MixedRealityCameraSettingsConfiguration configuration = profile.SettingsConfigurations[i];
		MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * L_5 = V_0;
		NullCheck(L_5);
		MixedRealityCameraSettingsConfigurationU5BU5D_t1C1D7D928817A6139902087218F301F17C0E3BDB* L_6 = MixedRealityCameraProfile_get_SettingsConfigurations_mCFB115CBE9C6B1ADCD8CEE444ABBCFD7286A13C7_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// if (configuration.ComponentType?.Type == null)
		SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * L_10 = MixedRealityCameraSettingsConfiguration_get_ComponentType_m9F6753B16E1B5BD32581C24DEA51331DAAFA8B03_inline((MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 *)(&V_2), /*hidden argument*/NULL);
		SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_004a;
		}
	}
	{
		G_B6_0 = ((Type_t *)(NULL));
		goto IL_004f;
	}

IL_004a:
	{
		NullCheck(G_B5_0);
		Type_t * L_12 = SystemType_get_Type_mFAA918B6E4F9820651DF69F1FDE16D69B212B085_inline(G_B5_0, /*hidden argument*/NULL);
		G_B6_0 = L_12;
	}

IL_004f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_13 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(G_B6_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00c0;
		}
	}
	{
		// object[] args = { this, configuration.ComponentName, configuration.Priority, configuration.SettingsProfile };
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, __this);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
		String_t* L_17 = MixedRealityCameraSettingsConfiguration_get_ComponentName_m02139D3CF7E72E5F1EA9770CFDF0010D0250A79C_inline((MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_17);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_16;
		uint32_t L_19 = MixedRealityCameraSettingsConfiguration_get_Priority_mDFA730BC8E68D3EA27A75BEE14D80CE454261D50_inline((MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 *)(&V_2), /*hidden argument*/NULL);
		uint32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_18;
		BaseCameraSettingsProfile_t5AFD7FC0194A9030B32E260CF4E74C230A14AFB5 * L_23 = MixedRealityCameraSettingsConfiguration_get_SettingsProfile_mEAC74850DD1364799FC0C2CACA10D126C80B8509_inline((MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_23);
		V_3 = L_22;
		// if (RegisterDataProvider<IMixedRealityCameraSettingsProvider>(
		//     configuration.ComponentType.Type,
		//     configuration.ComponentName,
		//     configuration.RuntimePlatform,
		//     args))
		SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * L_24 = MixedRealityCameraSettingsConfiguration_get_ComponentType_m9F6753B16E1B5BD32581C24DEA51331DAAFA8B03_inline((MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_24);
		Type_t * L_25 = SystemType_get_Type_mFAA918B6E4F9820651DF69F1FDE16D69B212B085_inline(L_24, /*hidden argument*/NULL);
		String_t* L_26 = MixedRealityCameraSettingsConfiguration_get_ComponentName_m02139D3CF7E72E5F1EA9770CFDF0010D0250A79C_inline((MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 *)(&V_2), /*hidden argument*/NULL);
		int32_t L_27 = MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m9F628DF5149A8273689A0BECD02E5A23C55D9344_inline((MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 *)(&V_2), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = V_3;
		bool L_29 = BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_m991CE48AF5BE6E062CE88AF7DE074CBC29A743C9(__this, L_25, L_26, L_27, L_28, /*hidden argument*/BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_m991CE48AF5BE6E062CE88AF7DE074CBC29A743C9_RuntimeMethod_var);
		if (!L_29)
		{
			goto IL_00c0;
		}
	}
	{
		// IMixedRealityCameraSettingsProvider provider = GetDataProvider<IMixedRealityCameraSettingsProvider>(configuration.ComponentName);
		String_t* L_30 = MixedRealityCameraSettingsConfiguration_get_ComponentName_m02139D3CF7E72E5F1EA9770CFDF0010D0250A79C_inline((MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 *)(&V_2), /*hidden argument*/NULL);
		RuntimeObject* L_31 = GenericVirtFuncInvoker1< RuntimeObject*, String_t* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProvider_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_m6F5E08B7992484624C2E6131527E2B0C26F04DFF_RuntimeMethod_var, __this, L_30);
		// provider?.ApplyConfiguration();
		RuntimeObject* L_32 = L_31;
		G_B9_0 = L_32;
		if (L_32)
		{
			G_B10_0 = L_32;
			goto IL_00bb;
		}
	}
	{
		goto IL_00c0;
	}

IL_00bb:
	{
		NullCheck(G_B10_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider::ApplyConfiguration() */, IMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_il2cpp_TypeInfo_var, G_B10_0);
	}

IL_00c0:
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00c4:
	{
		// for (int i = 0; i < profile.SettingsConfigurations.Length; i++)
		int32_t L_34 = V_1;
		MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * L_35 = V_0;
		NullCheck(L_35);
		MixedRealityCameraSettingsConfigurationU5BU5D_t1C1D7D928817A6139902087218F301F17C0E3BDB* L_36 = MixedRealityCameraProfile_get_SettingsConfigurations_mCFB115CBE9C6B1ADCD8CEE444ABBCFD7286A13C7_inline(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		if ((((int32_t)L_34) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))))
		{
			goto IL_002f;
		}
	}

IL_00d2:
	{
		// useFallbackBehavior = (GetDataProviders<IMixedRealityCameraSettingsProvider>().Count == 0);
		RuntimeObject* L_37 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_mC65DB681375561FD8E0B02587BCE5AEED9C0668A_RuntimeMethod_var, __this);
		NullCheck(L_37);
		int32_t L_38 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t54193573EC82F060056D8AB91DEF57EFB393CFDC_il2cpp_TypeInfo_var, L_37);
		__this->set_useFallbackBehavior_22((bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0));
		// if (useFallbackBehavior)
		bool L_39 = __this->get_useFallbackBehavior_22();
		if (!L_39)
		{
			goto IL_0180;
		}
	}
	{
		// cameraOpaqueLastFrame = IsOpaque;
		bool L_40 = MixedRealityCameraSystem_get_IsOpaque_mB7E6E89506B96056DD5D19720DBD40AB91F220F5(__this, /*hidden argument*/NULL);
		__this->set_cameraOpaqueLastFrame_21(L_40);
		// if (IsOpaque)
		bool L_41 = MixedRealityCameraSystem_get_IsOpaque_mB7E6E89506B96056DD5D19720DBD40AB91F220F5(__this, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_010d;
		}
	}
	{
		// ApplySettingsForOpaqueDisplay();
		MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m4E0F7D41F7A0C824A7399CC5C6D39F71A010571C(__this, /*hidden argument*/NULL);
		// }
		goto IL_0113;
	}

IL_010d:
	{
		// ApplySettingsForTransparentDisplay();
		MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m7946A083DF930CCE0D6509DD807F5D177749413C(__this, /*hidden argument*/NULL);
	}

IL_0113:
	{
		// MixedRealityPlayspace.Position = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t9D59FE370664E420A540CCF9E2B297D5B9B5C729_il2cpp_TypeInfo_var);
		MixedRealityPlayspace_set_Position_mE1049767EEDBCCAB1BB120A524F025510CF1ABFA(L_42, /*hidden argument*/NULL);
		// MixedRealityPlayspace.Rotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_43 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		MixedRealityPlayspace_set_Rotation_m53178CE06D4E9449484892EECE072C40FBEFA428(L_43, /*hidden argument*/NULL);
		// if (CameraCache.Main.transform.position != Vector3.zero)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_44 = CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6(/*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_48 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_46, L_47, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_015b;
		}
	}
	{
		// Debug.LogWarning($"The main camera is not positioned at the origin ({Vector3.zero}), experiences may not behave as expected.");
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = L_49;
		RuntimeObject * L_51 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_50);
		String_t* L_52 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral4FF56F0DB79ED48F92A89FC9BCCE0794BDA6075F, L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_52, /*hidden argument*/NULL);
	}

IL_015b:
	{
		// if (CameraCache.Main.transform.rotation != Quaternion.identity)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_53 = CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6(/*hidden argument*/NULL);
		NullCheck(L_53);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		bool L_57 = Quaternion_op_Inequality_m37169F3E8ADDA24A5A221AD7397835B437B71439(L_55, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_0180;
		}
	}
	{
		// Debug.LogWarning($"The main camera is configured with a non-zero rotation, experiences may not behave as expected.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral5DE6C8E7701D8D9660152721AEC14FBFED3B0408, /*hidden argument*/NULL);
	}

IL_0180:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Enable_m97E2955FE753DEA111F3E11D6DDF566FA99F9AFE (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Enable_m97E2955FE753DEA111F3E11D6DDF566FA99F9AFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// base.Enable();
		BaseDataProviderAccessCoreSystem_Enable_m3F6D1FAF91A9662E2396B3BCB8CC364D28FCF04A(__this, /*hidden argument*/NULL);
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> providers = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_mC65DB681375561FD8E0B02587BCE5AEED9C0668A_RuntimeMethod_var, __this);
		V_0 = L_0;
		// for (int i = 0; i < providers.Count; i++)
		V_1 = 0;
		goto IL_0021;
	}

IL_0011:
	{
		// providers[i].Enable();
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		RuntimeObject* L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_t9A3ED8756AF9A47E7FB24CD9C34C355A8E9E43B9_il2cpp_TypeInfo_var, L_1, L_2);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityService::Enable() */, IMixedRealityService_t8C03EB647E3C9EE21D05C3C04A890139C53154A0_il2cpp_TypeInfo_var, L_3);
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0021:
	{
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t54193573EC82F060056D8AB91DEF57EFB393CFDC_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Disable_m287C69AACE7D0C9589EAA32AA1C55063691A91D9 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Disable_m287C69AACE7D0C9589EAA32AA1C55063691A91D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// IReadOnlyList<IMixedRealityCameraSettingsProvider> providers = GetDataProviders<IMixedRealityCameraSettingsProvider>();
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_mC65DB681375561FD8E0B02587BCE5AEED9C0668A_RuntimeMethod_var, __this);
		V_0 = L_0;
		// for (int i = 0; i < providers.Count; i++)
		V_1 = 0;
		goto IL_001b;
	}

IL_000b:
	{
		// providers[i].Disable();
		RuntimeObject* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		RuntimeObject* L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Item(System.Int32) */, IReadOnlyList_1_t9A3ED8756AF9A47E7FB24CD9C34C355A8E9E43B9_il2cpp_TypeInfo_var, L_1, L_2);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.IMixedRealityService::Disable() */, IMixedRealityService_t8C03EB647E3C9EE21D05C3C04A890139C53154A0_il2cpp_TypeInfo_var, L_3);
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001b:
	{
		// for (int i = 0; i < providers.Count; i++)
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Count() */, IReadOnlyCollection_1_t54193573EC82F060056D8AB91DEF57EFB393CFDC_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		// base.Disable();
		BaseService_Disable_m994C663ABB5A9FD8235698D86BE897AA972D74EB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Destroy_m6FC82020EB6C432DBB5602E741AFB91805CFC305 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Destroy_m6FC82020EB6C432DBB5602E741AFB91805CFC305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_mC65DB681375561FD8E0B02587BCE5AEED9C0668A_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::GetEnumerator() */, IEnumerable_1_t6B93F3CE3A1A9C3F38BBEEF4D3D7C5CE1F2DA99E_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001d;
		}

IL_000e:
		{
			// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSettingsProvider>::get_Current() */, IEnumerator_1_t57F690D37B9BDB055298BF466DE13CEAA4190AE8_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// UnregisterDataProvider(provider);
			RuntimeObject* L_4 = V_1;
			BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_m6BD800BA6DA362EB81EDC002A37366FFEBCAD06E(__this, L_4, /*hidden argument*/BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealityCameraSettingsProvider_tB73EA25F6BE6D6D4C7A4D2323B5C3A9FA6B6602E_m6BD800BA6DA362EB81EDC002A37366FFEBCAD06E_RuntimeMethod_var);
		}

IL_001d:
		{
			// foreach (var provider in GetDataProviders<IMixedRealityCameraSettingsProvider>())
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_0025:
		{
			IL2CPP_LEAVE(0x31, FINALLY_0027);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_0030;
			}
		}

IL_002a:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0030:
		{
			IL2CPP_END_FINALLY(39)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_JUMP_TBL(0x31, IL_0031)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0031:
	{
		// useFallbackBehavior = true;
		__this->set_useFallbackBehavior_22((bool)1);
		// base.Destroy();
		BaseEventSystem_Destroy_m3A0F55B084573FFE0D06446E4893A8D0735BD82E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_Update_m7581008C3DDD7E63A9664F8E8A48F99B5BFCC368 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_Update_m7581008C3DDD7E63A9664F8E8A48F99B5BFCC368_MetadataUsageId);
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
	{
		// if (!useFallbackBehavior) { return; }
		bool L_0 = __this->get_useFallbackBehavior_22();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!useFallbackBehavior) { return; }
		return;
	}

IL_0009:
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1 = ((MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_23();
		V_1 = L_1;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// if (IsOpaque != cameraOpaqueLastFrame)
			bool L_3 = MixedRealityCameraSystem_get_IsOpaque_mB7E6E89506B96056DD5D19720DBD40AB91F220F5(__this, /*hidden argument*/NULL);
			bool L_4 = __this->get_cameraOpaqueLastFrame_21();
			if ((((int32_t)L_3) == ((int32_t)L_4)))
			{
				goto IL_0047;
			}
		}

IL_0025:
		{
			// cameraOpaqueLastFrame = IsOpaque;
			bool L_5 = MixedRealityCameraSystem_get_IsOpaque_mB7E6E89506B96056DD5D19720DBD40AB91F220F5(__this, /*hidden argument*/NULL);
			__this->set_cameraOpaqueLastFrame_21(L_5);
			// if (IsOpaque)
			bool L_6 = MixedRealityCameraSystem_get_IsOpaque_mB7E6E89506B96056DD5D19720DBD40AB91F220F5(__this, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0041;
			}
		}

IL_0039:
		{
			// ApplySettingsForOpaqueDisplay();
			MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m4E0F7D41F7A0C824A7399CC5C6D39F71A010571C(__this, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}

IL_0041:
		{
			// ApplySettingsForTransparentDisplay();
			MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m7946A083DF930CCE0D6509DD807F5D177749413C(__this, /*hidden argument*/NULL);
		}

IL_0047:
		{
			// }
			IL2CPP_LEAVE(0x57, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(73)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaqueDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m4E0F7D41F7A0C824A7399CC5C6D39F71A010571C (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_ApplySettingsForOpaqueDisplay_m4E0F7D41F7A0C824A7399CC5C6D39F71A010571C_MetadataUsageId);
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
		// using (ApplySettingsForOpaquePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_il2cpp_TypeInfo_var))->get_ApplySettingsForOpaquePerfMarker_24();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// CameraCache.Main.clearFlags = CameraProfile.CameraClearFlagsOpaqueDisplay;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * L_3 = MixedRealityCameraSystem_get_CameraProfile_m519104A11667AC8221DF1CFC65170381FFC27DF5(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m0D5E913217ADB8639741922E5F1775FB8319D6F7_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_clearFlags_mE79A756CD7C9C84C86B6676F5C6342A45AE5F373(L_2, L_4, /*hidden argument*/NULL);
		// CameraCache.Main.nearClipPlane = CameraProfile.NearClipPlaneOpaqueDisplay;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * L_6 = MixedRealityCameraSystem_get_CameraProfile_m519104A11667AC8221DF1CFC65170381FFC27DF5(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		float L_7 = MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mE4B19893A5F6008D9429CE5388B2B54C36E08380_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_nearClipPlane_m4EA1D92F6E1D17E423EC036561E115F434DC2263(L_5, L_7, /*hidden argument*/NULL);
		// CameraCache.Main.farClipPlane = CameraProfile.FarClipPlaneOpaqueDisplay;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * L_9 = MixedRealityCameraSystem_get_CameraProfile_m519104A11667AC8221DF1CFC65170381FFC27DF5(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10 = MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_mE334BEE691A9EAD388879EA166F7E38ADB3817ED_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41(L_8, L_10, /*hidden argument*/NULL);
		// CameraCache.Main.backgroundColor = CameraProfile.BackgroundColorOpaqueDisplay;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * L_12 = MixedRealityCameraSystem_get_CameraProfile_m519104A11667AC8221DF1CFC65170381FFC27DF5(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13 = MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_m49D541879AC4AD44D1F74E0BB859FC42CA42D27B_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF(L_11, L_13, /*hidden argument*/NULL);
		// QualitySettings.SetQualityLevel(CameraProfile.OpaqueQualityLevel, false);
		MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * L_14 = MixedRealityCameraSystem_get_CameraProfile_m519104A11667AC8221DF1CFC65170381FFC27DF5(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = MixedRealityCameraProfile_get_OpaqueQualityLevel_m84C4AEA2738466774453AAAFB5F2E08D89CC8693_inline(L_14, /*hidden argument*/NULL);
		QualitySettings_SetQualityLevel_m7925838FC6013484091AB48C3E8FE7B09150A7C6(L_15, (bool)0, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x83, FINALLY_0075);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(117)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x83, IL_0083)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m7946A083DF930CCE0D6509DD807F5D177749413C (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_ApplySettingsForTransparentDisplay_m7946A083DF930CCE0D6509DD807F5D177749413C_MetadataUsageId);
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
		// using (ApplySettingsForTransparentPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_il2cpp_TypeInfo_var))->get_ApplySettingsForTransparentPerfMarker_25();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		// CameraCache.Main.clearFlags = CameraProfile.CameraClearFlagsTransparentDisplay;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * L_3 = MixedRealityCameraSystem_get_CameraProfile_m519104A11667AC8221DF1CFC65170381FFC27DF5(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m5A0F88BC56B8B16AB9B7DE6B33C98216D83ED8AB_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Camera_set_clearFlags_mE79A756CD7C9C84C86B6676F5C6342A45AE5F373(L_2, L_4, /*hidden argument*/NULL);
		// CameraCache.Main.backgroundColor = CameraProfile.BackgroundColorTransparentDisplay;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * L_6 = MixedRealityCameraSystem_get_CameraProfile_m519104A11667AC8221DF1CFC65170381FFC27DF5(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m0226458FC2CBAD70ED0BE6904B0FED3202E6C6B3_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Camera_set_backgroundColor_m7083574094F4031F3289444E1AF4CBC4FEDACFCF(L_5, L_7, /*hidden argument*/NULL);
		// CameraCache.Main.nearClipPlane = CameraProfile.NearClipPlaneTransparentDisplay;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * L_9 = MixedRealityCameraSystem_get_CameraProfile_m519104A11667AC8221DF1CFC65170381FFC27DF5(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		float L_10 = MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_mEBC4B7D5D95B7A559BEC2F4E2DBA48A783732E37_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Camera_set_nearClipPlane_m4EA1D92F6E1D17E423EC036561E115F434DC2263(L_8, L_10, /*hidden argument*/NULL);
		// CameraCache.Main.farClipPlane = CameraProfile.FarClipPlaneTransparentDisplay;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = CameraCache_get_Main_m3FA99EEDF034677E3A3E2A0C72FC97FDEE9667F6(/*hidden argument*/NULL);
		MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * L_12 = MixedRealityCameraSystem_get_CameraProfile_m519104A11667AC8221DF1CFC65170381FFC27DF5(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		float L_13 = MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m8215DD1E1FCE02D9C6832CD87F43F5887B26B97D_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41(L_11, L_13, /*hidden argument*/NULL);
		// QualitySettings.SetQualityLevel(CameraProfile.TransparentQualityLevel, false);
		MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * L_14 = MixedRealityCameraSystem_get_CameraProfile_m519104A11667AC8221DF1CFC65170381FFC27DF5(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = MixedRealityCameraProfile_get_TransparentQualityLevel_m34343CDEA4E09C57247127FFE378245860D1FF06_inline(L_14, /*hidden argument*/NULL);
		QualitySettings_SetQualityLevel_m7925838FC6013484091AB48C3E8FE7B09150A7C6(L_15, (bool)0, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x83, FINALLY_0075);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(117)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x83, IL_0083)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityCameraSystem_System_Collections_IEqualityComparer_Equals_mD39F230427D9899D3D9664BD1320322DC30861C9 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::System.Collections.IEqualityComparer.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_mFF17CF85730A4EB940E8079DF4E37812F125C046 (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem_System_Collections_IEqualityComparer_GetHashCode_mFF17CF85730A4EB940E8079DF4E37812F125C046_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Mathf.Abs(SourceName.GetHashCode());
		String_t* L_0 = MixedRealityCameraSystem_get_SourceName_mB347A7DC8D5901C98D7D68DE128348364A666784_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityCameraSystem__cctor_mAC2A3B6B2F39F1F0506C0AF458866BF90A8D5679 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityCameraSystem__cctor_mAC2A3B6B2F39F1F0506C0AF458866BF90A8D5679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.Update");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral615E7AE91B5D8E95D171FD00609751001072553C, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_23(L_0);
		// private static readonly ProfilerMarker ApplySettingsForOpaquePerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.ApplySettingsForOpaqueDisplay");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral7EFBD08779CD30AA4BB155A03A7A8843252129C1, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_il2cpp_TypeInfo_var))->set_ApplySettingsForOpaquePerfMarker_24(L_1);
		// private static readonly ProfilerMarker ApplySettingsForTransparentPerfMarker = new ProfilerMarker("[MRTK] MixedRealityCameraSystem.ApplySettingsForTransparentDisplay");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_2), _stringLiteral477D591F1FC256A3C3E8E9B6CB4C57DD7113F1B9, /*hidden argument*/NULL);
		((MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690_il2cpp_TypeInfo_var))->set_ApplySettingsForTransparentPerfMarker_25(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_m0F8B0D8BD392A1E7E37852A060D40930BFDE7802_inline (BaseCoreSystem_tE5E85BA0D00C0A95087488B3DCB5828289607864 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected IMixedRealityServiceRegistrar Registrar { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRegistrarU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityCameraSettingsConfigurationU5BU5D_t1C1D7D928817A6139902087218F301F17C0E3BDB* MixedRealityCameraProfile_get_SettingsConfigurations_mCFB115CBE9C6B1ADCD8CEE444ABBCFD7286A13C7_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method)
{
	{
		// get { return settingsConfigurations; }
		MixedRealityCameraSettingsConfigurationU5BU5D_t1C1D7D928817A6139902087218F301F17C0E3BDB* L_0 = __this->get_settingsConfigurations_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * MixedRealityCameraSettingsConfiguration_get_ComponentType_m9F6753B16E1B5BD32581C24DEA51331DAAFA8B03_inline (MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 * __this, const RuntimeMethod* method)
{
	{
		// public SystemType ComponentType => componentType;
		SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * L_0 = __this->get_componentType_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_mFAA918B6E4F9820651DF69F1FDE16D69B212B085_inline (SystemType_t691F81C5E59635E99DAEB08BBBE92ED8A2A1F711 * __this, const RuntimeMethod* method)
{
	{
		// get => type;
		Type_t * L_0 = __this->get_type_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSettingsConfiguration_get_ComponentName_m02139D3CF7E72E5F1EA9770CFDF0010D0250A79C_inline (MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 * __this, const RuntimeMethod* method)
{
	{
		// public string ComponentName => componentName;
		String_t* L_0 = __this->get_componentName_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t MixedRealityCameraSettingsConfiguration_get_Priority_mDFA730BC8E68D3EA27A75BEE14D80CE454261D50_inline (MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 * __this, const RuntimeMethod* method)
{
	{
		// public uint Priority => priority;
		uint32_t L_0 = __this->get_priority_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseCameraSettingsProfile_t5AFD7FC0194A9030B32E260CF4E74C230A14AFB5 * MixedRealityCameraSettingsConfiguration_get_SettingsProfile_mEAC74850DD1364799FC0C2CACA10D126C80B8509_inline (MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 * __this, const RuntimeMethod* method)
{
	{
		// public BaseCameraSettingsProfile SettingsProfile => settingsProfile;
		BaseCameraSettingsProfile_t5AFD7FC0194A9030B32E260CF4E74C230A14AFB5 * L_0 = __this->get_settingsProfile_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraSettingsConfiguration_get_RuntimePlatform_m9F628DF5149A8273689A0BECD02E5A23C55D9344_inline (MixedRealityCameraSettingsConfiguration_tA8E91C34183BE15C71F47E88D518F30365052E79 * __this, const RuntimeMethod* method)
{
	{
		// public SupportedPlatforms RuntimePlatform => runtimePlatform;
		int32_t L_0 = __this->get_runtimePlatform_3();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsOpaqueDisplay_m0D5E913217ADB8639741922E5F1775FB8319D6F7_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method)
{
	{
		// public CameraClearFlags CameraClearFlagsOpaqueDisplay => cameraClearFlagsOpaqueDisplay;
		int32_t L_0 = __this->get_cameraClearFlagsOpaqueDisplay_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneOpaqueDisplay_mE4B19893A5F6008D9429CE5388B2B54C36E08380_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method)
{
	{
		// public float NearClipPlaneOpaqueDisplay => nearClipPlaneOpaqueDisplay;
		float L_0 = __this->get_nearClipPlaneOpaqueDisplay_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneOpaqueDisplay_mE334BEE691A9EAD388879EA166F7E38ADB3817ED_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method)
{
	{
		// public float FarClipPlaneOpaqueDisplay => farClipPlaneOpaqueDisplay;
		float L_0 = __this->get_farClipPlaneOpaqueDisplay_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  MixedRealityCameraProfile_get_BackgroundColorOpaqueDisplay_m49D541879AC4AD44D1F74E0BB859FC42CA42D27B_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method)
{
	{
		// public Color BackgroundColorOpaqueDisplay => backgroundColorOpaqueDisplay;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_backgroundColorOpaqueDisplay_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_OpaqueQualityLevel_m84C4AEA2738466774453AAAFB5F2E08D89CC8693_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method)
{
	{
		// public int OpaqueQualityLevel => opaqueQualityLevel;
		int32_t L_0 = __this->get_opaqueQualityLevel_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_CameraClearFlagsTransparentDisplay_m5A0F88BC56B8B16AB9B7DE6B33C98216D83ED8AB_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method)
{
	{
		// public CameraClearFlags CameraClearFlagsTransparentDisplay => cameraClearFlagsTransparentDisplay;
		int32_t L_0 = __this->get_cameraClearFlagsTransparentDisplay_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  MixedRealityCameraProfile_get_BackgroundColorTransparentDisplay_m0226458FC2CBAD70ED0BE6904B0FED3202E6C6B3_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method)
{
	{
		// public Color BackgroundColorTransparentDisplay => backgroundColorTransparentDisplay;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get_backgroundColorTransparentDisplay_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_NearClipPlaneTransparentDisplay_mEBC4B7D5D95B7A559BEC2F4E2DBA48A783732E37_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method)
{
	{
		// public float NearClipPlaneTransparentDisplay => nearClipPlaneTransparentDisplay;
		float L_0 = __this->get_nearClipPlaneTransparentDisplay_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityCameraProfile_get_FarClipPlaneTransparentDisplay_m8215DD1E1FCE02D9C6832CD87F43F5887B26B97D_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method)
{
	{
		// public float FarClipPlaneTransparentDisplay => farClipPlaneTransparentDisplay;
		float L_0 = __this->get_farClipPlaneTransparentDisplay_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityCameraProfile_get_TransparentQualityLevel_m34343CDEA4E09C57247127FFE378245860D1FF06_inline (MixedRealityCameraProfile_t40C70B9DA58F18309461E2E94B8FCF88C0DC07D7 * __this, const RuntimeMethod* method)
{
	{
		// public int TransparentQualityLevel => transparentQualityLevel;
		int32_t L_0 = __this->get_transparentQualityLevel_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityCameraSystem_get_SourceName_mB347A7DC8D5901C98D7D68DE128348364A666784_inline (MixedRealityCameraSystem_tA77C98A85A97F64ACE4EE309EA3044C55B8EA690 * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; } = "Mixed Reality Camera System";
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_19();
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
