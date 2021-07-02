#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.WSA.WorldAnchor
struct WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE;
// UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700;
// UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate
struct GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate
struct HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate
struct HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate
struct HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate
struct ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate
struct ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate
struct ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate
struct ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate
struct NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate
struct NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate
struct NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate
struct NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate
struct RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate
struct RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F;
// UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate
struct TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154;
// UnityEngine.XR.WSA.Input.InteractionManager/SourceEventHandler
struct SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate
struct SurfaceChangedDelegate_t99D796E4D8B27B4ED884282C83AE3C7C09966030;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate
struct SurfaceDataReadyDelegate_tC004767784492E456A3434A621DE6FC0DF8E502A;
// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
struct OnTrackingChangedDelegate_t3297C23267B6E94FCD1A2723D6022B62DC787DC1;
// UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate
struct GetAsyncDelegate_t9B7E3154444245DE2C2C70E1D71F218566F4CB4E;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate
struct DeserializationCompleteDelegate_t019A334F65CA223A93A00CAD4BDC42E26AD004EC;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate
struct SerializationCompleteDelegate_t5692DCDB8E68933ADB6793AD978460B7853526A1;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate
struct SerializationDataAvailableDelegate_tF621DFE3ADA62C9005BB32FA1B93C755E4F80D3E;
// UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate
struct OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0;
// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>
struct Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>
struct Action_1_t29368AEE60F045C5477E88401669BA353A78D947;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>
struct Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>
struct Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>
struct Action_1_t70029448BD80398612B0E649BCC3DACBA30B8C32;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>
struct Action_1_t2F32A241CCCFDCDCD49CF7681670050EF53BAF5B;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>
struct Action_1_t84959BD5083335276C37995687123234C711E6DD;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>
struct Action_1_t492DC3C44A0EBF2D98FD19A46FB58934E771B1CE;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>
struct Action_1_tC1573040D0F2D26EE10A60F17D1DD91D64DE0265;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>
struct Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>
struct Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>
struct Action_1_tF04767A1A349F98AC6979DF21720774196690BB8;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>
struct Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct Action_1_t767395F23F17500B4C75DD5C5D99565951502B61;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>
struct Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>
struct Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A;
// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t29368AEE60F045C5477E88401669BA353A78D947_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t767395F23F17500B4C75DD5C5D99565951502B61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF04767A1A349F98AC6979DF21720774196690BB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PositionalLocatorState_t4E1FD40D33A693B62B75C13B5BD5F7F17458E214_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationCompletionReason_t7E94C94E7ED2DF5A5CEC77366C08E7EEE4FEE390_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceChange_t5104ED7EA27E3D8F47AB9952124740504996005C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldManager_tF5AC92E303AC5A2AEF2B8E3D7CB3B5858CA6323A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3272CAE0EC5B3BF8505115AE17B42DB6F1D51730;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m014642777A4594FD9C25AC9E36DF944E0C63392B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m111950D713E74D7CB9C041F09B757E4540F4DEDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m2F5F111E446B264A39D29D058EBC689DFB904524_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m34A5C85EB7608C248BF817D4BD44EC615561C6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m3B3E8A4CCC2A274EC621A5D473FA7ECBEB5837AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m3BE7B438CB7DD205CD2671FC9DE60D34F64A5C40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m4EC55C15B38D7D231C8A98682DF6FD56458C4D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6D41982FA1F1BA976C592600CBF810318255CC6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m79008B8FA657F7125139F348B65025C7882A2F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7BC941EF6B3FA232A754081134E7E1CB7F9E7B40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7CCD02EDE9064CE685FC35D8BE970DC4B18BC759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mBE0FF6894091EB05A36EF95ACCC87AEDE340FE46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mC18D2E2B78640B265E29E3B3FC1984718482FC7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mC9D9C90FEDD95C77460F4DE2A358E4241601BDBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mD05F50A6F1DB797F5652F943CACB6DF85F33435A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mE6A36B1146C67FC85A63D7318087C2182A98B8A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mE712C64E2596B843399B6E81448E8A7A550CD0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mEB2473592B4FCA9AA0771BFD25407B1B32755161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFA3E6800956F44169773B74CA4A5953FBF71AFB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFEEFA464FC51CE43CFF3D1309E358D6FC5283D76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionManager_OnSourceEvent_m77829E7E0F02BB401511E6C56B8AA0EBB0B3ED78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m272F5501C6E97F8FE6DE7D35442F80620AEAB7FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mFD35424B0A127299B92F572A318E3BB8C35D86CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DeserializationCompleteDelegate_BeginInvoke_mB7795FE27520A0D927EAF09C6871D9F2E3723DD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureErrorDelegate_BeginInvoke_m28A68354898DBB3505DA67BB468AF8FD9C682700_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeErrorEvent_mD7B42EF32B1456C62B62666DB4F1F86F5CC1CC61_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeHoldCanceled_m52EE50501EC77642A3E4D5FC064761930961446C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeHoldCompleted_m4B67C322C6C4283B481595DC7346D2F6DB64B314_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeHoldStarted_mD40EA61EE5D2DB08D3FF641D861ABDEAC2409120_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeManipulationCanceled_mE331A0DABC7E29FF022A43536C96CC4D4C14BB74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeManipulationCompleted_mC983C150F9072B7E68E2BFE8538C03194A5F47A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeManipulationStarted_m3F9A33DCEF2D37AAA8B48F545B5D2E4DCC4F4608_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeManipulationUpdated_m2B43DF8F269F0C83ABF3A37724E7E48995F20009_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeNavigationCanceled_mA782771A075F860A7784690B359E63305226E52E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeNavigationCompleted_m4F8A915760F77989CA4821FDB43D8F2B7B55C609_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeNavigationStarted_m9DDB25457CB4AE77F76D13901308BA91378F0024_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeNavigationUpdated_m44C24D477E18BB396DB6D6D4BF024047069A44EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeRecognitionEnded_m1C5F940B3D464A233F510597382334EF8D4E86DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeRecognitionStarted_mA41E6F4F30311280C198790554DDA653847E3F1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeTapped_m51A6A9DF4BC7D260B95CE37F767C379C0039FD25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoldCanceledEventDelegate_BeginInvoke_mC14761BD887C179CE2F024788DE94A75721F74B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoldCompletedEventDelegate_BeginInvoke_mC7AF12D5AB19CE94E147E96FFF126E7379A130E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoldStartedEventDelegate_BeginInvoke_m13F5779A1EE02390C83DE5EC96CF89931661AF87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_OnSourceEvent_m77829E7E0F02BB401511E6C56B8AA0EBB0B3ED78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionSource_Equals_m3114603E5F78B5F92A29495B9B3ED8FD7E64D4C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManipulationCanceledEventDelegate_BeginInvoke_m19D3FB1012A0A2D298E74FF4F1B64332F2AA7B29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManipulationCompletedEventDelegate_BeginInvoke_m18542AA8F75F82556397541068709FB07A1ACBA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManipulationStartedEventDelegate_BeginInvoke_mE49642EDCB93FCA23EFD02E3538F9C69111E2309_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManipulationUpdatedEventDelegate_BeginInvoke_m5F876963B67928C563E8A46477A25EC58264E6F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationCanceledEventDelegate_BeginInvoke_m61330AB2F9F177783CDE64B21B946A5B4D2617C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationCompletedEventDelegate_BeginInvoke_m9A632DD52B3B9FCD4F53EE6799702BA2436FBCD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationStartedEventDelegate_BeginInvoke_m6A278B39F2F4D65F3F66E8891638F53FC2142ACD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationUpdatedEventDelegate_BeginInvoke_m6764939E5ED0BA98D640E875334C4F6B01F2E9D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPositionalLocatorStateChangedDelegate_BeginInvoke_m4140021818D7DFB6883E61DB3CB6D5EAEA914384_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnTrackingChangedDelegate_BeginInvoke_m7503CDE6FBD0436F6CB028718EE1E1F5BF9ADD3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RecognitionEndedEventDelegate_BeginInvoke_m6C38179BDD600EE69BF55EC37FE265853545AAF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RecognitionStartedEventDelegate_BeginInvoke_mBFB4837369897AD1E7667ACD5AF4009544F08107_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SerializationCompleteDelegate_BeginInvoke_m6044563BB153F54E9896D7A5D1D1C3D1BD8E6889_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SourceEventHandler_BeginInvoke_mD2A4ED7313E53DA353AE318F8AE267AB726CB330_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceChangedDelegate_BeginInvoke_m9B9FF4BFAEDD7A779B144CFB2F04843C229A7938_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceDataReadyDelegate_BeginInvoke_m9CBC9D88B5D3DE8A5015518B22DC3E8A51EE70BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceObserver_InvokeSurfaceChangedEvent_mF84E329EBED7FCC6B7CCA86D6C4B68499A93F3B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TappedEventDelegate_BeginInvoke_mB423C846FC95EAD917E09F7E15E5D4E9ECBF882C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorStore_Dispose_mED7696B4F76550A047F721A531F0846CC287F189_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorStore_InvokeGetAsyncDelegate_m5E2084EC6F2FB8AAA6FA8988BB9203F308DC2687_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorStore__cctor_mDFBFF9F5FC238B9D4EE6B4024999D558DEB3BEE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorTransferBatch_Dispose_m6FEE402DD0FE5D51DC1583287649BAC022B7D0C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorTransferBatch_Finalize_m6F2498F4A473ACCF6EEC673EBFC4A25A09871398_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_m147C2BBC058EEECBD3223E376B8BA4F2410A56FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorTransferBatch__ctor_mC13D3B8D21F2B0BB7D01D99FB45BF1344076A4B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchor_Internal_TriggerEventOnTrackingLost_m31FBB379F3CA7DD61B08643B390C5216C48B1EF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldManager_Internal_TriggerPositionalLocatorStateChanged_m34E8996CC3BEFD88E596EBC2A054DD5550DA9326_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRDevice_InvokeDeviceLoaded_m3BDF6825A2A56E4923D4E6593C7BA2949B6A3581_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRDevice__cctor_mC83C1293819B81E68EC72D01A5CC107DFE29B98C_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786;;
struct WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_pinvoke;
struct WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_pinvoke;;
struct WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700;;
struct WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_pinvoke;
struct WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_pinvoke;;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t48EDC7BC6664810A516BA165C1DF8F3DE2ECA8E0 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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

// UnityEngine.XR.WSA.HolographicSettings
struct  HolographicSettings_t09FFB307DF9DF19848CE6D2A7F8FAB9520E74027  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.WSA.Input.InteractionManager
struct  InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE  : public RuntimeObject
{
public:

public:
};

struct InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceDetected
	Action_1_t70029448BD80398612B0E649BCC3DACBA30B8C32 * ___InteractionSourceDetected_0;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceLost
	Action_1_t2F32A241CCCFDCDCD49CF7681670050EF53BAF5B * ___InteractionSourceLost_1;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourcePressed
	Action_1_t84959BD5083335276C37995687123234C711E6DD * ___InteractionSourcePressed_2;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceReleased
	Action_1_t492DC3C44A0EBF2D98FD19A46FB58934E771B1CE * ___InteractionSourceReleased_3;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceUpdated
	Action_1_tC1573040D0F2D26EE10A60F17D1DD91D64DE0265 * ___InteractionSourceUpdated_4;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceDetectedLegacy
	SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * ___InteractionSourceDetectedLegacy_5;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceLostLegacy
	SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * ___InteractionSourceLostLegacy_6;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourcePressedLegacy
	SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * ___InteractionSourcePressedLegacy_7;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceReleasedLegacy
	SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * ___InteractionSourceReleasedLegacy_8;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceUpdatedLegacy
	SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * ___InteractionSourceUpdatedLegacy_9;

public:
	inline static int32_t get_offset_of_InteractionSourceDetected_0() { return static_cast<int32_t>(offsetof(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields, ___InteractionSourceDetected_0)); }
	inline Action_1_t70029448BD80398612B0E649BCC3DACBA30B8C32 * get_InteractionSourceDetected_0() const { return ___InteractionSourceDetected_0; }
	inline Action_1_t70029448BD80398612B0E649BCC3DACBA30B8C32 ** get_address_of_InteractionSourceDetected_0() { return &___InteractionSourceDetected_0; }
	inline void set_InteractionSourceDetected_0(Action_1_t70029448BD80398612B0E649BCC3DACBA30B8C32 * value)
	{
		___InteractionSourceDetected_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceDetected_0), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceLost_1() { return static_cast<int32_t>(offsetof(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields, ___InteractionSourceLost_1)); }
	inline Action_1_t2F32A241CCCFDCDCD49CF7681670050EF53BAF5B * get_InteractionSourceLost_1() const { return ___InteractionSourceLost_1; }
	inline Action_1_t2F32A241CCCFDCDCD49CF7681670050EF53BAF5B ** get_address_of_InteractionSourceLost_1() { return &___InteractionSourceLost_1; }
	inline void set_InteractionSourceLost_1(Action_1_t2F32A241CCCFDCDCD49CF7681670050EF53BAF5B * value)
	{
		___InteractionSourceLost_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceLost_1), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourcePressed_2() { return static_cast<int32_t>(offsetof(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields, ___InteractionSourcePressed_2)); }
	inline Action_1_t84959BD5083335276C37995687123234C711E6DD * get_InteractionSourcePressed_2() const { return ___InteractionSourcePressed_2; }
	inline Action_1_t84959BD5083335276C37995687123234C711E6DD ** get_address_of_InteractionSourcePressed_2() { return &___InteractionSourcePressed_2; }
	inline void set_InteractionSourcePressed_2(Action_1_t84959BD5083335276C37995687123234C711E6DD * value)
	{
		___InteractionSourcePressed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourcePressed_2), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceReleased_3() { return static_cast<int32_t>(offsetof(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields, ___InteractionSourceReleased_3)); }
	inline Action_1_t492DC3C44A0EBF2D98FD19A46FB58934E771B1CE * get_InteractionSourceReleased_3() const { return ___InteractionSourceReleased_3; }
	inline Action_1_t492DC3C44A0EBF2D98FD19A46FB58934E771B1CE ** get_address_of_InteractionSourceReleased_3() { return &___InteractionSourceReleased_3; }
	inline void set_InteractionSourceReleased_3(Action_1_t492DC3C44A0EBF2D98FD19A46FB58934E771B1CE * value)
	{
		___InteractionSourceReleased_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceReleased_3), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceUpdated_4() { return static_cast<int32_t>(offsetof(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields, ___InteractionSourceUpdated_4)); }
	inline Action_1_tC1573040D0F2D26EE10A60F17D1DD91D64DE0265 * get_InteractionSourceUpdated_4() const { return ___InteractionSourceUpdated_4; }
	inline Action_1_tC1573040D0F2D26EE10A60F17D1DD91D64DE0265 ** get_address_of_InteractionSourceUpdated_4() { return &___InteractionSourceUpdated_4; }
	inline void set_InteractionSourceUpdated_4(Action_1_tC1573040D0F2D26EE10A60F17D1DD91D64DE0265 * value)
	{
		___InteractionSourceUpdated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceUpdated_4), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceDetectedLegacy_5() { return static_cast<int32_t>(offsetof(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields, ___InteractionSourceDetectedLegacy_5)); }
	inline SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * get_InteractionSourceDetectedLegacy_5() const { return ___InteractionSourceDetectedLegacy_5; }
	inline SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 ** get_address_of_InteractionSourceDetectedLegacy_5() { return &___InteractionSourceDetectedLegacy_5; }
	inline void set_InteractionSourceDetectedLegacy_5(SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * value)
	{
		___InteractionSourceDetectedLegacy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceDetectedLegacy_5), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceLostLegacy_6() { return static_cast<int32_t>(offsetof(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields, ___InteractionSourceLostLegacy_6)); }
	inline SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * get_InteractionSourceLostLegacy_6() const { return ___InteractionSourceLostLegacy_6; }
	inline SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 ** get_address_of_InteractionSourceLostLegacy_6() { return &___InteractionSourceLostLegacy_6; }
	inline void set_InteractionSourceLostLegacy_6(SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * value)
	{
		___InteractionSourceLostLegacy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceLostLegacy_6), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourcePressedLegacy_7() { return static_cast<int32_t>(offsetof(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields, ___InteractionSourcePressedLegacy_7)); }
	inline SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * get_InteractionSourcePressedLegacy_7() const { return ___InteractionSourcePressedLegacy_7; }
	inline SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 ** get_address_of_InteractionSourcePressedLegacy_7() { return &___InteractionSourcePressedLegacy_7; }
	inline void set_InteractionSourcePressedLegacy_7(SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * value)
	{
		___InteractionSourcePressedLegacy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourcePressedLegacy_7), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceReleasedLegacy_8() { return static_cast<int32_t>(offsetof(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields, ___InteractionSourceReleasedLegacy_8)); }
	inline SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * get_InteractionSourceReleasedLegacy_8() const { return ___InteractionSourceReleasedLegacy_8; }
	inline SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 ** get_address_of_InteractionSourceReleasedLegacy_8() { return &___InteractionSourceReleasedLegacy_8; }
	inline void set_InteractionSourceReleasedLegacy_8(SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * value)
	{
		___InteractionSourceReleasedLegacy_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceReleasedLegacy_8), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceUpdatedLegacy_9() { return static_cast<int32_t>(offsetof(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields, ___InteractionSourceUpdatedLegacy_9)); }
	inline SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * get_InteractionSourceUpdatedLegacy_9() const { return ___InteractionSourceUpdatedLegacy_9; }
	inline SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 ** get_address_of_InteractionSourceUpdatedLegacy_9() { return &___InteractionSourceUpdatedLegacy_9; }
	inline void set_InteractionSourceUpdatedLegacy_9(SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * value)
	{
		___InteractionSourceUpdatedLegacy_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceUpdatedLegacy_9), (void*)value);
	}
};


// UnityEngine.XR.WSA.SurfaceObserver
struct  SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceObserver::m_Observer
	int32_t ___m_Observer_0;

public:
	inline static int32_t get_offset_of_m_Observer_0() { return static_cast<int32_t>(offsetof(SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9, ___m_Observer_0)); }
	inline int32_t get_m_Observer_0() const { return ___m_Observer_0; }
	inline int32_t* get_address_of_m_Observer_0() { return &___m_Observer_0; }
	inline void set_m_Observer_0(int32_t value)
	{
		___m_Observer_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9_marshaled_pinvoke
{
	int32_t ___m_Observer_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9_marshaled_com
{
	int32_t ___m_Observer_0;
};

// UnityEngine.XR.WSA.WorldManager
struct  WorldManager_tF5AC92E303AC5A2AEF2B8E3D7CB3B5858CA6323A  : public RuntimeObject
{
public:

public:
};

struct WorldManager_tF5AC92E303AC5A2AEF2B8E3D7CB3B5858CA6323A_StaticFields
{
public:
	// UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate UnityEngine.XR.WSA.WorldManager::OnPositionalLocatorStateChanged
	OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0 * ___OnPositionalLocatorStateChanged_0;

public:
	inline static int32_t get_offset_of_OnPositionalLocatorStateChanged_0() { return static_cast<int32_t>(offsetof(WorldManager_tF5AC92E303AC5A2AEF2B8E3D7CB3B5858CA6323A_StaticFields, ___OnPositionalLocatorStateChanged_0)); }
	inline OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0 * get_OnPositionalLocatorStateChanged_0() const { return ___OnPositionalLocatorStateChanged_0; }
	inline OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0 ** get_address_of_OnPositionalLocatorStateChanged_0() { return &___OnPositionalLocatorStateChanged_0; }
	inline void set_OnPositionalLocatorStateChanged_0(OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0 * value)
	{
		___OnPositionalLocatorStateChanged_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPositionalLocatorStateChanged_0), (void*)value);
	}
};


// UnityEngine.XR.XRDevice
struct  XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA  : public RuntimeObject
{
public:

public:
};

struct XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_StaticFields
{
public:
	// System.Action`1<System.String> UnityEngine.XR.XRDevice::deviceLoaded
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___deviceLoaded_0;

public:
	inline static int32_t get_offset_of_deviceLoaded_0() { return static_cast<int32_t>(offsetof(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_StaticFields, ___deviceLoaded_0)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_deviceLoaded_0() const { return ___deviceLoaded_0; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_deviceLoaded_0() { return &___deviceLoaded_0; }
	inline void set_deviceLoaded_0(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___deviceLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceLoaded_0), (void*)value);
	}
};


// UnityEngineInternal.XR.WSA.RemoteSpeechAccess
struct  RemoteSpeechAccess_t700B26EE8B82D8843319E0366F917206E4262B0C  : public RuntimeObject
{
public:

public:
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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


// UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct  GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 
{
public:
	// System.String UnityEngine.XR.WSA.Input.GestureErrorEventArgs::<error>k__BackingField
	String_t* ___U3CerrorU3Ek__BackingField_0;
	// System.Int32 UnityEngine.XR.WSA.Input.GestureErrorEventArgs::<hresult>k__BackingField
	int32_t ___U3ChresultU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CerrorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8, ___U3CerrorU3Ek__BackingField_0)); }
	inline String_t* get_U3CerrorU3Ek__BackingField_0() const { return ___U3CerrorU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CerrorU3Ek__BackingField_0() { return &___U3CerrorU3Ek__BackingField_0; }
	inline void set_U3CerrorU3Ek__BackingField_0(String_t* value)
	{
		___U3CerrorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CerrorU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChresultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8, ___U3ChresultU3Ek__BackingField_1)); }
	inline int32_t get_U3ChresultU3Ek__BackingField_1() const { return ___U3ChresultU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3ChresultU3Ek__BackingField_1() { return &___U3ChresultU3Ek__BackingField_1; }
	inline void set_U3ChresultU3Ek__BackingField_1(int32_t value)
	{
		___U3ChresultU3Ek__BackingField_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8_marshaled_pinvoke
{
	char* ___U3CerrorU3Ek__BackingField_0;
	int32_t ___U3ChresultU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8_marshaled_com
{
	Il2CppChar* ___U3CerrorU3Ek__BackingField_0;
	int32_t ___U3ChresultU3Ek__BackingField_1;
};

// UnityEngine.XR.WSA.SurfaceId
struct  SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceId::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
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

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Bounds
struct  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
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

// UnityEngine.Pose
struct  Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Ray
struct  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.XR.WSA.Input.GestureRecognizer
struct  GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Input.GestureRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceled
	Action_1_t29368AEE60F045C5477E88401669BA353A78D947 * ___HoldCanceled_1;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompleted
	Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C * ___HoldCompleted_2;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStarted
	Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5 * ___HoldStarted_3;
	// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::Tapped
	Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84 * ___Tapped_4;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceled
	Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680 * ___ManipulationCanceled_5;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompleted
	Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E * ___ManipulationCompleted_6;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStarted
	Action_1_tF04767A1A349F98AC6979DF21720774196690BB8 * ___ManipulationStarted_7;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdated
	Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4 * ___ManipulationUpdated_8;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceled
	Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0 * ___NavigationCanceled_9;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompleted
	Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A * ___NavigationCompleted_10;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStarted
	Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA * ___NavigationStarted_11;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdated
	Action_1_t767395F23F17500B4C75DD5C5D99565951502B61 * ___NavigationUpdated_12;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEnded
	Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3 * ___RecognitionEnded_13;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStarted
	Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A * ___RecognitionStarted_14;
	// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::GestureError
	Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344 * ___GestureError_15;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceledEvent
	HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 * ___HoldCanceledEvent_16;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompletedEvent
	HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE * ___HoldCompletedEvent_17;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStartedEvent
	HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE * ___HoldStartedEvent_18;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::TappedEvent
	TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 * ___TappedEvent_19;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceledEvent
	ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 * ___ManipulationCanceledEvent_20;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompletedEvent
	ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 * ___ManipulationCompletedEvent_21;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStartedEvent
	ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 * ___ManipulationStartedEvent_22;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdatedEvent
	ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE * ___ManipulationUpdatedEvent_23;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceledEvent
	NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 * ___NavigationCanceledEvent_24;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompletedEvent
	NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 * ___NavigationCompletedEvent_25;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStartedEvent
	NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD * ___NavigationStartedEvent_26;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdatedEvent
	NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 * ___NavigationUpdatedEvent_27;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEndedEvent
	RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB * ___RecognitionEndedEvent_28;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStartedEvent
	RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F * ___RecognitionStartedEvent_29;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::GestureErrorEvent
	GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB * ___GestureErrorEvent_30;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_HoldCanceled_1() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___HoldCanceled_1)); }
	inline Action_1_t29368AEE60F045C5477E88401669BA353A78D947 * get_HoldCanceled_1() const { return ___HoldCanceled_1; }
	inline Action_1_t29368AEE60F045C5477E88401669BA353A78D947 ** get_address_of_HoldCanceled_1() { return &___HoldCanceled_1; }
	inline void set_HoldCanceled_1(Action_1_t29368AEE60F045C5477E88401669BA353A78D947 * value)
	{
		___HoldCanceled_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCanceled_1), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCompleted_2() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___HoldCompleted_2)); }
	inline Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C * get_HoldCompleted_2() const { return ___HoldCompleted_2; }
	inline Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C ** get_address_of_HoldCompleted_2() { return &___HoldCompleted_2; }
	inline void set_HoldCompleted_2(Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C * value)
	{
		___HoldCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCompleted_2), (void*)value);
	}

	inline static int32_t get_offset_of_HoldStarted_3() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___HoldStarted_3)); }
	inline Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5 * get_HoldStarted_3() const { return ___HoldStarted_3; }
	inline Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5 ** get_address_of_HoldStarted_3() { return &___HoldStarted_3; }
	inline void set_HoldStarted_3(Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5 * value)
	{
		___HoldStarted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldStarted_3), (void*)value);
	}

	inline static int32_t get_offset_of_Tapped_4() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___Tapped_4)); }
	inline Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84 * get_Tapped_4() const { return ___Tapped_4; }
	inline Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84 ** get_address_of_Tapped_4() { return &___Tapped_4; }
	inline void set_Tapped_4(Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84 * value)
	{
		___Tapped_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tapped_4), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCanceled_5() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___ManipulationCanceled_5)); }
	inline Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680 * get_ManipulationCanceled_5() const { return ___ManipulationCanceled_5; }
	inline Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680 ** get_address_of_ManipulationCanceled_5() { return &___ManipulationCanceled_5; }
	inline void set_ManipulationCanceled_5(Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680 * value)
	{
		___ManipulationCanceled_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCanceled_5), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCompleted_6() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___ManipulationCompleted_6)); }
	inline Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E * get_ManipulationCompleted_6() const { return ___ManipulationCompleted_6; }
	inline Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E ** get_address_of_ManipulationCompleted_6() { return &___ManipulationCompleted_6; }
	inline void set_ManipulationCompleted_6(Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E * value)
	{
		___ManipulationCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCompleted_6), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationStarted_7() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___ManipulationStarted_7)); }
	inline Action_1_tF04767A1A349F98AC6979DF21720774196690BB8 * get_ManipulationStarted_7() const { return ___ManipulationStarted_7; }
	inline Action_1_tF04767A1A349F98AC6979DF21720774196690BB8 ** get_address_of_ManipulationStarted_7() { return &___ManipulationStarted_7; }
	inline void set_ManipulationStarted_7(Action_1_tF04767A1A349F98AC6979DF21720774196690BB8 * value)
	{
		___ManipulationStarted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationStarted_7), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationUpdated_8() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___ManipulationUpdated_8)); }
	inline Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4 * get_ManipulationUpdated_8() const { return ___ManipulationUpdated_8; }
	inline Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4 ** get_address_of_ManipulationUpdated_8() { return &___ManipulationUpdated_8; }
	inline void set_ManipulationUpdated_8(Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4 * value)
	{
		___ManipulationUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationUpdated_8), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCanceled_9() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___NavigationCanceled_9)); }
	inline Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0 * get_NavigationCanceled_9() const { return ___NavigationCanceled_9; }
	inline Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0 ** get_address_of_NavigationCanceled_9() { return &___NavigationCanceled_9; }
	inline void set_NavigationCanceled_9(Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0 * value)
	{
		___NavigationCanceled_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCanceled_9), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCompleted_10() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___NavigationCompleted_10)); }
	inline Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A * get_NavigationCompleted_10() const { return ___NavigationCompleted_10; }
	inline Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A ** get_address_of_NavigationCompleted_10() { return &___NavigationCompleted_10; }
	inline void set_NavigationCompleted_10(Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A * value)
	{
		___NavigationCompleted_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCompleted_10), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationStarted_11() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___NavigationStarted_11)); }
	inline Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA * get_NavigationStarted_11() const { return ___NavigationStarted_11; }
	inline Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA ** get_address_of_NavigationStarted_11() { return &___NavigationStarted_11; }
	inline void set_NavigationStarted_11(Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA * value)
	{
		___NavigationStarted_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationStarted_11), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationUpdated_12() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___NavigationUpdated_12)); }
	inline Action_1_t767395F23F17500B4C75DD5C5D99565951502B61 * get_NavigationUpdated_12() const { return ___NavigationUpdated_12; }
	inline Action_1_t767395F23F17500B4C75DD5C5D99565951502B61 ** get_address_of_NavigationUpdated_12() { return &___NavigationUpdated_12; }
	inline void set_NavigationUpdated_12(Action_1_t767395F23F17500B4C75DD5C5D99565951502B61 * value)
	{
		___NavigationUpdated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationUpdated_12), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionEnded_13() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___RecognitionEnded_13)); }
	inline Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3 * get_RecognitionEnded_13() const { return ___RecognitionEnded_13; }
	inline Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3 ** get_address_of_RecognitionEnded_13() { return &___RecognitionEnded_13; }
	inline void set_RecognitionEnded_13(Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3 * value)
	{
		___RecognitionEnded_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionEnded_13), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionStarted_14() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___RecognitionStarted_14)); }
	inline Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A * get_RecognitionStarted_14() const { return ___RecognitionStarted_14; }
	inline Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A ** get_address_of_RecognitionStarted_14() { return &___RecognitionStarted_14; }
	inline void set_RecognitionStarted_14(Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A * value)
	{
		___RecognitionStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionStarted_14), (void*)value);
	}

	inline static int32_t get_offset_of_GestureError_15() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___GestureError_15)); }
	inline Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344 * get_GestureError_15() const { return ___GestureError_15; }
	inline Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344 ** get_address_of_GestureError_15() { return &___GestureError_15; }
	inline void set_GestureError_15(Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344 * value)
	{
		___GestureError_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GestureError_15), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCanceledEvent_16() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___HoldCanceledEvent_16)); }
	inline HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 * get_HoldCanceledEvent_16() const { return ___HoldCanceledEvent_16; }
	inline HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 ** get_address_of_HoldCanceledEvent_16() { return &___HoldCanceledEvent_16; }
	inline void set_HoldCanceledEvent_16(HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 * value)
	{
		___HoldCanceledEvent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCanceledEvent_16), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCompletedEvent_17() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___HoldCompletedEvent_17)); }
	inline HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE * get_HoldCompletedEvent_17() const { return ___HoldCompletedEvent_17; }
	inline HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE ** get_address_of_HoldCompletedEvent_17() { return &___HoldCompletedEvent_17; }
	inline void set_HoldCompletedEvent_17(HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE * value)
	{
		___HoldCompletedEvent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCompletedEvent_17), (void*)value);
	}

	inline static int32_t get_offset_of_HoldStartedEvent_18() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___HoldStartedEvent_18)); }
	inline HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE * get_HoldStartedEvent_18() const { return ___HoldStartedEvent_18; }
	inline HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE ** get_address_of_HoldStartedEvent_18() { return &___HoldStartedEvent_18; }
	inline void set_HoldStartedEvent_18(HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE * value)
	{
		___HoldStartedEvent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldStartedEvent_18), (void*)value);
	}

	inline static int32_t get_offset_of_TappedEvent_19() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___TappedEvent_19)); }
	inline TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 * get_TappedEvent_19() const { return ___TappedEvent_19; }
	inline TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 ** get_address_of_TappedEvent_19() { return &___TappedEvent_19; }
	inline void set_TappedEvent_19(TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 * value)
	{
		___TappedEvent_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TappedEvent_19), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCanceledEvent_20() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___ManipulationCanceledEvent_20)); }
	inline ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 * get_ManipulationCanceledEvent_20() const { return ___ManipulationCanceledEvent_20; }
	inline ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 ** get_address_of_ManipulationCanceledEvent_20() { return &___ManipulationCanceledEvent_20; }
	inline void set_ManipulationCanceledEvent_20(ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 * value)
	{
		___ManipulationCanceledEvent_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCanceledEvent_20), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCompletedEvent_21() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___ManipulationCompletedEvent_21)); }
	inline ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 * get_ManipulationCompletedEvent_21() const { return ___ManipulationCompletedEvent_21; }
	inline ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 ** get_address_of_ManipulationCompletedEvent_21() { return &___ManipulationCompletedEvent_21; }
	inline void set_ManipulationCompletedEvent_21(ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 * value)
	{
		___ManipulationCompletedEvent_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCompletedEvent_21), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationStartedEvent_22() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___ManipulationStartedEvent_22)); }
	inline ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 * get_ManipulationStartedEvent_22() const { return ___ManipulationStartedEvent_22; }
	inline ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 ** get_address_of_ManipulationStartedEvent_22() { return &___ManipulationStartedEvent_22; }
	inline void set_ManipulationStartedEvent_22(ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 * value)
	{
		___ManipulationStartedEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationStartedEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationUpdatedEvent_23() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___ManipulationUpdatedEvent_23)); }
	inline ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE * get_ManipulationUpdatedEvent_23() const { return ___ManipulationUpdatedEvent_23; }
	inline ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE ** get_address_of_ManipulationUpdatedEvent_23() { return &___ManipulationUpdatedEvent_23; }
	inline void set_ManipulationUpdatedEvent_23(ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE * value)
	{
		___ManipulationUpdatedEvent_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationUpdatedEvent_23), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCanceledEvent_24() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___NavigationCanceledEvent_24)); }
	inline NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 * get_NavigationCanceledEvent_24() const { return ___NavigationCanceledEvent_24; }
	inline NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 ** get_address_of_NavigationCanceledEvent_24() { return &___NavigationCanceledEvent_24; }
	inline void set_NavigationCanceledEvent_24(NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 * value)
	{
		___NavigationCanceledEvent_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCanceledEvent_24), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCompletedEvent_25() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___NavigationCompletedEvent_25)); }
	inline NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 * get_NavigationCompletedEvent_25() const { return ___NavigationCompletedEvent_25; }
	inline NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 ** get_address_of_NavigationCompletedEvent_25() { return &___NavigationCompletedEvent_25; }
	inline void set_NavigationCompletedEvent_25(NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 * value)
	{
		___NavigationCompletedEvent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCompletedEvent_25), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationStartedEvent_26() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___NavigationStartedEvent_26)); }
	inline NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD * get_NavigationStartedEvent_26() const { return ___NavigationStartedEvent_26; }
	inline NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD ** get_address_of_NavigationStartedEvent_26() { return &___NavigationStartedEvent_26; }
	inline void set_NavigationStartedEvent_26(NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD * value)
	{
		___NavigationStartedEvent_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationStartedEvent_26), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationUpdatedEvent_27() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___NavigationUpdatedEvent_27)); }
	inline NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 * get_NavigationUpdatedEvent_27() const { return ___NavigationUpdatedEvent_27; }
	inline NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 ** get_address_of_NavigationUpdatedEvent_27() { return &___NavigationUpdatedEvent_27; }
	inline void set_NavigationUpdatedEvent_27(NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 * value)
	{
		___NavigationUpdatedEvent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationUpdatedEvent_27), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionEndedEvent_28() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___RecognitionEndedEvent_28)); }
	inline RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB * get_RecognitionEndedEvent_28() const { return ___RecognitionEndedEvent_28; }
	inline RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB ** get_address_of_RecognitionEndedEvent_28() { return &___RecognitionEndedEvent_28; }
	inline void set_RecognitionEndedEvent_28(RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB * value)
	{
		___RecognitionEndedEvent_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionEndedEvent_28), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionStartedEvent_29() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___RecognitionStartedEvent_29)); }
	inline RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F * get_RecognitionStartedEvent_29() const { return ___RecognitionStartedEvent_29; }
	inline RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F ** get_address_of_RecognitionStartedEvent_29() { return &___RecognitionStartedEvent_29; }
	inline void set_RecognitionStartedEvent_29(RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F * value)
	{
		___RecognitionStartedEvent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionStartedEvent_29), (void*)value);
	}

	inline static int32_t get_offset_of_GestureErrorEvent_30() { return static_cast<int32_t>(offsetof(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9, ___GestureErrorEvent_30)); }
	inline GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB * get_GestureErrorEvent_30() const { return ___GestureErrorEvent_30; }
	inline GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB ** get_address_of_GestureErrorEvent_30() { return &___GestureErrorEvent_30; }
	inline void set_GestureErrorEvent_30(GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB * value)
	{
		___GestureErrorEvent_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GestureErrorEvent_30), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_marshaled_pinvoke
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_marshaled_com
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};

// UnityEngine.XR.WSA.Input.InteractionManager_EventType
struct  EventType_tDC5657ACBAF7270E73919044DD711C868768BAA1 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionManager_EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_tDC5657ACBAF7270E73919044DD711C868768BAA1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceFlags
struct  InteractionSourceFlags_tA1D78469CB1519D4A9EC6907328A853B3C27FCC0 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceFlags_tA1D78469CB1519D4A9EC6907328A853B3C27FCC0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceHandedness
struct  InteractionSourceHandedness_t4690D1771C26C99774E938745D5827E4E031C48B 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceHandedness_t4690D1771C26C99774E938745D5827E4E031C48B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceKind
struct  InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags
struct  InteractionSourcePoseFlags_tF121BE794885D9CA1F3DBDC047A5F82C14412E44 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePoseFlags_tF121BE794885D9CA1F3DBDC047A5F82C14412E44, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy
struct  InteractionSourcePositionAccuracy_t081C81ED7415825454E0DEDE6DA3122BC2A40400 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePositionAccuracy_t081C81ED7415825454E0DEDE6DA3122BC2A40400, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePressType
struct  InteractionSourcePressType_t007113BD0133B206C40253C8248BE7A447620F07 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePressType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePressType_t007113BD0133B206C40253C8248BE7A447620F07, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceStateFlags
struct  InteractionSourceStateFlags_tA3B28D960B53057948E3BA1CCC07459936A3DA81 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceStateFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceStateFlags_tA3B28D960B53057948E3BA1CCC07459936A3DA81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct  WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Persistence.WorldAnchorStore::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_StaticFields
{
public:
	// UnityEngine.XR.WSA.Persistence.WorldAnchorStore UnityEngine.XR.WSA.Persistence.WorldAnchorStore::s_Instance
	WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * ___s_Instance_1;

public:
	inline static int32_t get_offset_of_s_Instance_1() { return static_cast<int32_t>(offsetof(WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_StaticFields, ___s_Instance_1)); }
	inline WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * get_s_Instance_1() const { return ___s_Instance_1; }
	inline WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 ** get_address_of_s_Instance_1() { return &___s_Instance_1; }
	inline void set_s_Instance_1(WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * value)
	{
		___s_Instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// UnityEngine.XR.WSA.PositionalLocatorState
struct  PositionalLocatorState_t4E1FD40D33A693B62B75C13B5BD5F7F17458E214 
{
public:
	// System.Int32 UnityEngine.XR.WSA.PositionalLocatorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionalLocatorState_t4E1FD40D33A693B62B75C13B5BD5F7F17458E214, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.RemoteDeviceVersion
struct  RemoteDeviceVersion_t19476212098C6EC9A476297CF9E9936A4870E035 
{
public:
	// System.Int32 UnityEngine.XR.WSA.RemoteDeviceVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RemoteDeviceVersion_t19476212098C6EC9A476297CF9E9936A4870E035, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Sharing.SerializationCompletionReason
struct  SerializationCompletionReason_t7E94C94E7ED2DF5A5CEC77366C08E7EEE4FEE390 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Sharing.SerializationCompletionReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationCompletionReason_t7E94C94E7ED2DF5A5CEC77366C08E7EEE4FEE390, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct  WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// UnityEngine.XR.WSA.SurfaceChange
struct  SurfaceChange_t5104ED7EA27E3D8F47AB9952124740504996005C 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SurfaceChange_t5104ED7EA27E3D8F47AB9952124740504996005C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.SurfaceData
struct  SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84 
{
public:
	// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SurfaceData::id
	SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066  ___id_0;
	// UnityEngine.MeshFilter UnityEngine.XR.WSA.SurfaceData::outputMesh
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___outputMesh_1;
	// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SurfaceData::outputAnchor
	WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * ___outputAnchor_2;
	// UnityEngine.MeshCollider UnityEngine.XR.WSA.SurfaceData::outputCollider
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___outputCollider_3;
	// System.Single UnityEngine.XR.WSA.SurfaceData::trianglesPerCubicMeter
	float ___trianglesPerCubicMeter_4;
	// System.Boolean UnityEngine.XR.WSA.SurfaceData::bakeCollider
	bool ___bakeCollider_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84, ___id_0)); }
	inline SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066  get_id_0() const { return ___id_0; }
	inline SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066 * get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066  value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_outputMesh_1() { return static_cast<int32_t>(offsetof(SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84, ___outputMesh_1)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_outputMesh_1() const { return ___outputMesh_1; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_outputMesh_1() { return &___outputMesh_1; }
	inline void set_outputMesh_1(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___outputMesh_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputMesh_1), (void*)value);
	}

	inline static int32_t get_offset_of_outputAnchor_2() { return static_cast<int32_t>(offsetof(SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84, ___outputAnchor_2)); }
	inline WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * get_outputAnchor_2() const { return ___outputAnchor_2; }
	inline WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE ** get_address_of_outputAnchor_2() { return &___outputAnchor_2; }
	inline void set_outputAnchor_2(WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * value)
	{
		___outputAnchor_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputAnchor_2), (void*)value);
	}

	inline static int32_t get_offset_of_outputCollider_3() { return static_cast<int32_t>(offsetof(SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84, ___outputCollider_3)); }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * get_outputCollider_3() const { return ___outputCollider_3; }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 ** get_address_of_outputCollider_3() { return &___outputCollider_3; }
	inline void set_outputCollider_3(MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * value)
	{
		___outputCollider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputCollider_3), (void*)value);
	}

	inline static int32_t get_offset_of_trianglesPerCubicMeter_4() { return static_cast<int32_t>(offsetof(SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84, ___trianglesPerCubicMeter_4)); }
	inline float get_trianglesPerCubicMeter_4() const { return ___trianglesPerCubicMeter_4; }
	inline float* get_address_of_trianglesPerCubicMeter_4() { return &___trianglesPerCubicMeter_4; }
	inline void set_trianglesPerCubicMeter_4(float value)
	{
		___trianglesPerCubicMeter_4 = value;
	}

	inline static int32_t get_offset_of_bakeCollider_5() { return static_cast<int32_t>(offsetof(SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84, ___bakeCollider_5)); }
	inline bool get_bakeCollider_5() const { return ___bakeCollider_5; }
	inline bool* get_address_of_bakeCollider_5() { return &___bakeCollider_5; }
	inline void set_bakeCollider_5(bool value)
	{
		___bakeCollider_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_marshaled_pinvoke
{
	SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066  ___id_0;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___outputMesh_1;
	WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * ___outputAnchor_2;
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_marshaled_com
{
	SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066  ___id_0;
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___outputMesh_1;
	WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * ___outputAnchor_2;
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.WSA.Input.InteractionSource
struct  InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 
{
public:
	// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::m_Id
	uint32_t ___m_Id_0;
	// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::m_SourceKind
	int32_t ___m_SourceKind_1;
	// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::m_Handedness
	int32_t ___m_Handedness_2;
	// UnityEngine.XR.WSA.Input.InteractionSourceFlags UnityEngine.XR.WSA.Input.InteractionSource::m_Flags
	int32_t ___m_Flags_3;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_VendorId
	uint16_t ___m_VendorId_4;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductId
	uint16_t ___m_ProductId_5;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductVersion
	uint16_t ___m_ProductVersion_6;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8, ___m_Id_0)); }
	inline uint32_t get_m_Id_0() const { return ___m_Id_0; }
	inline uint32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(uint32_t value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceKind_1() { return static_cast<int32_t>(offsetof(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8, ___m_SourceKind_1)); }
	inline int32_t get_m_SourceKind_1() const { return ___m_SourceKind_1; }
	inline int32_t* get_address_of_m_SourceKind_1() { return &___m_SourceKind_1; }
	inline void set_m_SourceKind_1(int32_t value)
	{
		___m_SourceKind_1 = value;
	}

	inline static int32_t get_offset_of_m_Handedness_2() { return static_cast<int32_t>(offsetof(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8, ___m_Handedness_2)); }
	inline int32_t get_m_Handedness_2() const { return ___m_Handedness_2; }
	inline int32_t* get_address_of_m_Handedness_2() { return &___m_Handedness_2; }
	inline void set_m_Handedness_2(int32_t value)
	{
		___m_Handedness_2 = value;
	}

	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_VendorId_4() { return static_cast<int32_t>(offsetof(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8, ___m_VendorId_4)); }
	inline uint16_t get_m_VendorId_4() const { return ___m_VendorId_4; }
	inline uint16_t* get_address_of_m_VendorId_4() { return &___m_VendorId_4; }
	inline void set_m_VendorId_4(uint16_t value)
	{
		___m_VendorId_4 = value;
	}

	inline static int32_t get_offset_of_m_ProductId_5() { return static_cast<int32_t>(offsetof(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8, ___m_ProductId_5)); }
	inline uint16_t get_m_ProductId_5() const { return ___m_ProductId_5; }
	inline uint16_t* get_address_of_m_ProductId_5() { return &___m_ProductId_5; }
	inline void set_m_ProductId_5(uint16_t value)
	{
		___m_ProductId_5 = value;
	}

	inline static int32_t get_offset_of_m_ProductVersion_6() { return static_cast<int32_t>(offsetof(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8, ___m_ProductVersion_6)); }
	inline uint16_t get_m_ProductVersion_6() const { return ___m_ProductVersion_6; }
	inline uint16_t* get_address_of_m_ProductVersion_6() { return &___m_ProductVersion_6; }
	inline void set_m_ProductVersion_6(uint16_t value)
	{
		___m_ProductVersion_6 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePose
struct  InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 
{
public:
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_GripRotation_0;
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_PointerRotation_1;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_GripPosition_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_PointerPosition_3;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_AngularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AngularVelocity_5;
	// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PositionAccuracy
	int32_t ___m_PositionAccuracy_6;
	// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Flags
	int32_t ___m_Flags_7;

public:
	inline static int32_t get_offset_of_m_GripRotation_0() { return static_cast<int32_t>(offsetof(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599, ___m_GripRotation_0)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_GripRotation_0() const { return ___m_GripRotation_0; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_GripRotation_0() { return &___m_GripRotation_0; }
	inline void set_m_GripRotation_0(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_GripRotation_0 = value;
	}

	inline static int32_t get_offset_of_m_PointerRotation_1() { return static_cast<int32_t>(offsetof(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599, ___m_PointerRotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_PointerRotation_1() const { return ___m_PointerRotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_PointerRotation_1() { return &___m_PointerRotation_1; }
	inline void set_m_PointerRotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_PointerRotation_1 = value;
	}

	inline static int32_t get_offset_of_m_GripPosition_2() { return static_cast<int32_t>(offsetof(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599, ___m_GripPosition_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_GripPosition_2() const { return ___m_GripPosition_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_GripPosition_2() { return &___m_GripPosition_2; }
	inline void set_m_GripPosition_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_GripPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PointerPosition_3() { return static_cast<int32_t>(offsetof(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599, ___m_PointerPosition_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_PointerPosition_3() const { return ___m_PointerPosition_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_PointerPosition_3() { return &___m_PointerPosition_3; }
	inline void set_m_PointerPosition_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_PointerPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599, ___m_Velocity_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599, ___m_AngularVelocity_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_PositionAccuracy_6() { return static_cast<int32_t>(offsetof(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599, ___m_PositionAccuracy_6)); }
	inline int32_t get_m_PositionAccuracy_6() const { return ___m_PositionAccuracy_6; }
	inline int32_t* get_address_of_m_PositionAccuracy_6() { return &___m_PositionAccuracy_6; }
	inline void set_m_PositionAccuracy_6(int32_t value)
	{
		___m_PositionAccuracy_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}
};


// System.Action`1<System.String>
struct  Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>
struct  Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>
struct  Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65 
{
public:
	// T System.Nullable`1::value
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65, ___value_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_value_0() const { return ___value_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate
struct  GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate
struct  HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate
struct  HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate
struct  HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate
struct  ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate
struct  ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate
struct  ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate
struct  ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate
struct  NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate
struct  NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate
struct  NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate
struct  NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate
struct  RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate
struct  RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate
struct  TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.HoldCanceledEventArgs
struct  HoldCanceledEventArgs_t651D1D0315F5C220D7B7CC376247C0E65B0B5EA0 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t651D1D0315F5C220D7B7CC376247C0E65B0B5EA0, ___m_Source_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t651D1D0315F5C220D7B7CC376247C0E65B0B5EA0, ___m_SourcePose_1)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t651D1D0315F5C220D7B7CC376247C0E65B0B5EA0, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.HoldCompletedEventArgs
struct  HoldCompletedEventArgs_tBE542E3244B083D2F1878678255FD7A8EA9FE93A 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_tBE542E3244B083D2F1878678255FD7A8EA9FE93A, ___m_Source_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_tBE542E3244B083D2F1878678255FD7A8EA9FE93A, ___m_SourcePose_1)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_tBE542E3244B083D2F1878678255FD7A8EA9FE93A, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.HoldStartedEventArgs
struct  HoldStartedEventArgs_t3F204F104C7DF85013C0F4BC7577BF82A20B10D7 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_t3F204F104C7DF85013C0F4BC7577BF82A20B10D7, ___m_Source_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_t3F204F104C7DF85013C0F4BC7577BF82A20B10D7, ___m_SourcePose_1)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_t3F204F104C7DF85013C0F4BC7577BF82A20B10D7, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceProperties
struct  InteractionSourceProperties_t8EDC59DD4D6DA8CD0DCDA260523F05C682DC90AB 
{
public:
	// System.Double UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourceLossRisk
	double ___m_SourceLossRisk_0;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourceLossMitigationDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_SourceLossMitigationDirection_1;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_2;

public:
	inline static int32_t get_offset_of_m_SourceLossRisk_0() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t8EDC59DD4D6DA8CD0DCDA260523F05C682DC90AB, ___m_SourceLossRisk_0)); }
	inline double get_m_SourceLossRisk_0() const { return ___m_SourceLossRisk_0; }
	inline double* get_address_of_m_SourceLossRisk_0() { return &___m_SourceLossRisk_0; }
	inline void set_m_SourceLossRisk_0(double value)
	{
		___m_SourceLossRisk_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceLossMitigationDirection_1() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t8EDC59DD4D6DA8CD0DCDA260523F05C682DC90AB, ___m_SourceLossMitigationDirection_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_SourceLossMitigationDirection_1() const { return ___m_SourceLossMitigationDirection_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_SourceLossMitigationDirection_1() { return &___m_SourceLossMitigationDirection_1; }
	inline void set_m_SourceLossMitigationDirection_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_SourceLossMitigationDirection_1 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_2() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t8EDC59DD4D6DA8CD0DCDA260523F05C682DC90AB, ___m_SourcePose_2)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_2() const { return ___m_SourcePose_2; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_2() { return &___m_SourcePose_2; }
	inline void set_m_SourcePose_2(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs
struct  ManipulationCanceledEventArgs_t9C4C85673F50BEF214FC4F8729B881521C348153 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t9C4C85673F50BEF214FC4F8729B881521C348153, ___m_Source_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t9C4C85673F50BEF214FC4F8729B881521C348153, ___m_SourcePose_1)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t9C4C85673F50BEF214FC4F8729B881521C348153, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs
struct  ManipulationCompletedEventArgs_tE7D44000ED4017D2156B096639AF8B299DE30A29 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_CumulativeDelta
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_CumulativeDelta_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_tE7D44000ED4017D2156B096639AF8B299DE30A29, ___m_Source_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_tE7D44000ED4017D2156B096639AF8B299DE30A29, ___m_SourcePose_1)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_tE7D44000ED4017D2156B096639AF8B299DE30A29, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_CumulativeDelta_3() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_tE7D44000ED4017D2156B096639AF8B299DE30A29, ___m_CumulativeDelta_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_CumulativeDelta_3() const { return ___m_CumulativeDelta_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_CumulativeDelta_3() { return &___m_CumulativeDelta_3; }
	inline void set_m_CumulativeDelta_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_CumulativeDelta_3 = value;
	}
};


// UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs
struct  ManipulationStartedEventArgs_tB3A5E1A630FD14E611B89B711F195A56767B587D 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_tB3A5E1A630FD14E611B89B711F195A56767B587D, ___m_Source_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_tB3A5E1A630FD14E611B89B711F195A56767B587D, ___m_SourcePose_1)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_tB3A5E1A630FD14E611B89B711F195A56767B587D, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs
struct  ManipulationUpdatedEventArgs_t8BF7AEE84974D33195C0B3CB72159CD4AC38C853 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_CumulativeDelta
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_CumulativeDelta_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t8BF7AEE84974D33195C0B3CB72159CD4AC38C853, ___m_Source_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t8BF7AEE84974D33195C0B3CB72159CD4AC38C853, ___m_SourcePose_1)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t8BF7AEE84974D33195C0B3CB72159CD4AC38C853, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_CumulativeDelta_3() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t8BF7AEE84974D33195C0B3CB72159CD4AC38C853, ___m_CumulativeDelta_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_CumulativeDelta_3() const { return ___m_CumulativeDelta_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_CumulativeDelta_3() { return &___m_CumulativeDelta_3; }
	inline void set_m_CumulativeDelta_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_CumulativeDelta_3 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs
struct  NavigationCanceledEventArgs_t3E39D901C1E6F9B91FBED769A2CFBCFA519A961D 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_t3E39D901C1E6F9B91FBED769A2CFBCFA519A961D, ___m_Source_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_t3E39D901C1E6F9B91FBED769A2CFBCFA519A961D, ___m_SourcePose_1)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_t3E39D901C1E6F9B91FBED769A2CFBCFA519A961D, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs
struct  NavigationCompletedEventArgs_tFEEE697B12D1B47BF1AB02FB7BC3D8D0D1DAE02B 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_NormalizedOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_NormalizedOffset_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tFEEE697B12D1B47BF1AB02FB7BC3D8D0D1DAE02B, ___m_Source_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tFEEE697B12D1B47BF1AB02FB7BC3D8D0D1DAE02B, ___m_SourcePose_1)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tFEEE697B12D1B47BF1AB02FB7BC3D8D0D1DAE02B, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_3() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tFEEE697B12D1B47BF1AB02FB7BC3D8D0D1DAE02B, ___m_NormalizedOffset_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_NormalizedOffset_3() const { return ___m_NormalizedOffset_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_NormalizedOffset_3() { return &___m_NormalizedOffset_3; }
	inline void set_m_NormalizedOffset_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_NormalizedOffset_3 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationStartedEventArgs
struct  NavigationStartedEventArgs_t616BCC53F4EA8C74449891ED96FF089F9A5FB575 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t616BCC53F4EA8C74449891ED96FF089F9A5FB575, ___m_Source_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t616BCC53F4EA8C74449891ED96FF089F9A5FB575, ___m_SourcePose_1)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t616BCC53F4EA8C74449891ED96FF089F9A5FB575, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs
struct  NavigationUpdatedEventArgs_t2CA5531F33392E23DD5810671259EA447322BFC0 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_NormalizedOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_NormalizedOffset_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_t2CA5531F33392E23DD5810671259EA447322BFC0, ___m_Source_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_t2CA5531F33392E23DD5810671259EA447322BFC0, ___m_SourcePose_1)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_t2CA5531F33392E23DD5810671259EA447322BFC0, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_3() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_t2CA5531F33392E23DD5810671259EA447322BFC0, ___m_NormalizedOffset_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_NormalizedOffset_3() const { return ___m_NormalizedOffset_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_NormalizedOffset_3() { return &___m_NormalizedOffset_3; }
	inline void set_m_NormalizedOffset_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_NormalizedOffset_3 = value;
	}
};


// UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs
struct  RecognitionEndedEventArgs_tB08194C0CB288DD9CA6F9DD45F3E3D0533A84DCA 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_tB08194C0CB288DD9CA6F9DD45F3E3D0533A84DCA, ___m_Source_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_tB08194C0CB288DD9CA6F9DD45F3E3D0533A84DCA, ___m_SourcePose_1)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_tB08194C0CB288DD9CA6F9DD45F3E3D0533A84DCA, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs
struct  RecognitionStartedEventArgs_tE0689333118E01D539F2EE1A59151048D13DEA1F 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_tE0689333118E01D539F2EE1A59151048D13DEA1F, ___m_Source_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_tE0689333118E01D539F2EE1A59151048D13DEA1F, ___m_SourcePose_1)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_tE0689333118E01D539F2EE1A59151048D13DEA1F, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.TappedEventArgs
struct  TappedEventArgs_t2CE682DB9CD4D8645DAD6F7733914A5398104E06 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.TappedEventArgs::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.TappedEventArgs::m_SourcePose
	InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.TappedEventArgs::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;
	// System.Int32 UnityEngine.XR.WSA.Input.TappedEventArgs::m_TapCount
	int32_t ___m_TapCount_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(TappedEventArgs_t2CE682DB9CD4D8645DAD6F7733914A5398104E06, ___m_Source_0)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(TappedEventArgs_t2CE682DB9CD4D8645DAD6F7733914A5398104E06, ___m_SourcePose_1)); }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(TappedEventArgs_t2CE682DB9CD4D8645DAD6F7733914A5398104E06, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_3() { return static_cast<int32_t>(offsetof(TappedEventArgs_t2CE682DB9CD4D8645DAD6F7733914A5398104E06, ___m_TapCount_3)); }
	inline int32_t get_m_TapCount_3() const { return ___m_TapCount_3; }
	inline int32_t* get_address_of_m_TapCount_3() { return &___m_TapCount_3; }
	inline void set_m_TapCount_3(int32_t value)
	{
		___m_TapCount_3 = value;
	}
};


// UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate
struct  GetAsyncDelegate_t9B7E3154444245DE2C2C70E1D71F218566F4CB4E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate
struct  DeserializationCompleteDelegate_t019A334F65CA223A93A00CAD4BDC42E26AD004EC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate
struct  SerializationCompleteDelegate_t5692DCDB8E68933ADB6793AD978460B7853526A1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate
struct  SerializationDataAvailableDelegate_tF621DFE3ADA62C9005BB32FA1B93C755E4F80D3E  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate
struct  SurfaceChangedDelegate_t99D796E4D8B27B4ED884282C83AE3C7C09966030  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate
struct  SurfaceDataReadyDelegate_tC004767784492E456A3434A621DE6FC0DF8E502A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.WorldAnchor
struct  WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:
	// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate UnityEngine.XR.WSA.WorldAnchor::OnTrackingChanged
	OnTrackingChangedDelegate_t3297C23267B6E94FCD1A2723D6022B62DC787DC1 * ___OnTrackingChanged_4;

public:
	inline static int32_t get_offset_of_OnTrackingChanged_4() { return static_cast<int32_t>(offsetof(WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE, ___OnTrackingChanged_4)); }
	inline OnTrackingChangedDelegate_t3297C23267B6E94FCD1A2723D6022B62DC787DC1 * get_OnTrackingChanged_4() const { return ___OnTrackingChanged_4; }
	inline OnTrackingChangedDelegate_t3297C23267B6E94FCD1A2723D6022B62DC787DC1 ** get_address_of_OnTrackingChanged_4() { return &___OnTrackingChanged_4; }
	inline void set_OnTrackingChanged_4(OnTrackingChangedDelegate_t3297C23267B6E94FCD1A2723D6022B62DC787DC1 * value)
	{
		___OnTrackingChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackingChanged_4), (void*)value);
	}
};


// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate
struct  OnTrackingChangedDelegate_t3297C23267B6E94FCD1A2723D6022B62DC787DC1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate
struct  OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>
struct  Action_1_t29368AEE60F045C5477E88401669BA353A78D947  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>
struct  Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>
struct  Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>
struct  Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>
struct  Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>
struct  Action_1_tF04767A1A349F98AC6979DF21720774196690BB8  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>
struct  Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct  Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct  Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct  Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct  Action_1_t767395F23F17500B4C75DD5C5D99565951502B61  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>
struct  Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>
struct  Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct  Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MeshCollider
struct  MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.XR.WSA.Input.InteractionSourceState
struct  InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceProperties UnityEngine.XR.WSA.Input.InteractionSourceState::m_Properties
	InteractionSourceProperties_t8EDC59DD4D6DA8CD0DCDA260523F05C682DC90AB  ___m_Properties_0;
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.InteractionSourceState::m_Source
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___m_Source_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.InteractionSourceState::m_HeadPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_HeadPose_2;
	// UnityEngine.Vector2 UnityEngine.XR.WSA.Input.InteractionSourceState::m_ThumbstickPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_ThumbstickPosition_3;
	// UnityEngine.Vector2 UnityEngine.XR.WSA.Input.InteractionSourceState::m_TouchpadPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_TouchpadPosition_4;
	// System.Single UnityEngine.XR.WSA.Input.InteractionSourceState::m_SelectPressedAmount
	float ___m_SelectPressedAmount_5;
	// UnityEngine.XR.WSA.Input.InteractionSourceStateFlags UnityEngine.XR.WSA.Input.InteractionSourceState::m_Flags
	int32_t ___m_Flags_6;

public:
	inline static int32_t get_offset_of_m_Properties_0() { return static_cast<int32_t>(offsetof(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490, ___m_Properties_0)); }
	inline InteractionSourceProperties_t8EDC59DD4D6DA8CD0DCDA260523F05C682DC90AB  get_m_Properties_0() const { return ___m_Properties_0; }
	inline InteractionSourceProperties_t8EDC59DD4D6DA8CD0DCDA260523F05C682DC90AB * get_address_of_m_Properties_0() { return &___m_Properties_0; }
	inline void set_m_Properties_0(InteractionSourceProperties_t8EDC59DD4D6DA8CD0DCDA260523F05C682DC90AB  value)
	{
		___m_Properties_0 = value;
	}

	inline static int32_t get_offset_of_m_Source_1() { return static_cast<int32_t>(offsetof(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490, ___m_Source_1)); }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  get_m_Source_1() const { return ___m_Source_1; }
	inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * get_address_of_m_Source_1() { return &___m_Source_1; }
	inline void set_m_Source_1(InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  value)
	{
		___m_Source_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490, ___m_HeadPose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_ThumbstickPosition_3() { return static_cast<int32_t>(offsetof(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490, ___m_ThumbstickPosition_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_ThumbstickPosition_3() const { return ___m_ThumbstickPosition_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_ThumbstickPosition_3() { return &___m_ThumbstickPosition_3; }
	inline void set_m_ThumbstickPosition_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_ThumbstickPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_TouchpadPosition_4() { return static_cast<int32_t>(offsetof(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490, ___m_TouchpadPosition_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_TouchpadPosition_4() const { return ___m_TouchpadPosition_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_TouchpadPosition_4() { return &___m_TouchpadPosition_4; }
	inline void set_m_TouchpadPosition_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_TouchpadPosition_4 = value;
	}

	inline static int32_t get_offset_of_m_SelectPressedAmount_5() { return static_cast<int32_t>(offsetof(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490, ___m_SelectPressedAmount_5)); }
	inline float get_m_SelectPressedAmount_5() const { return ___m_SelectPressedAmount_5; }
	inline float* get_address_of_m_SelectPressedAmount_5() { return &___m_SelectPressedAmount_5; }
	inline void set_m_SelectPressedAmount_5(float value)
	{
		___m_SelectPressedAmount_5 = value;
	}

	inline static int32_t get_offset_of_m_Flags_6() { return static_cast<int32_t>(offsetof(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490, ___m_Flags_6)); }
	inline int32_t get_m_Flags_6() const { return ___m_Flags_6; }
	inline int32_t* get_address_of_m_Flags_6() { return &___m_Flags_6; }
	inline void set_m_Flags_6(int32_t value)
	{
		___m_Flags_6 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler
struct  SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs
struct  InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::<state>k__BackingField
	InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___U3CstateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs
struct  InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::<state>k__BackingField
	InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___U3CstateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs
struct  InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::<state>k__BackingField
	InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___U3CstateU3Ek__BackingField_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePressType UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::<pressType>k__BackingField
	int32_t ___U3CpressTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpressTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1, ___U3CpressTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CpressTypeU3Ek__BackingField_1() const { return ___U3CpressTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CpressTypeU3Ek__BackingField_1() { return &___U3CpressTypeU3Ek__BackingField_1; }
	inline void set_U3CpressTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CpressTypeU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs
struct  InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::<state>k__BackingField
	InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___U3CstateU3Ek__BackingField_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePressType UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::<pressType>k__BackingField
	int32_t ___U3CpressTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpressTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04, ___U3CpressTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CpressTypeU3Ek__BackingField_1() const { return ___U3CpressTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CpressTypeU3Ek__BackingField_1() { return &___U3CpressTypeU3Ek__BackingField_1; }
	inline void set_U3CpressTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CpressTypeU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs
struct  InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::<state>k__BackingField
	InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___U3CstateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>
struct  Action_1_t70029448BD80398612B0E649BCC3DACBA30B8C32  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>
struct  Action_1_t2F32A241CCCFDCDCD49CF7681670050EF53BAF5B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>
struct  Action_1_t84959BD5083335276C37995687123234C711E6DD  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>
struct  Action_1_t492DC3C44A0EBF2D98FD19A46FB58934E771B1CE  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>
struct  Action_1_tC1573040D0F2D26EE10A60F17D1DD91D64DE0265  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshal_pinvoke(const WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786& unmarshaled, WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshal_pinvoke_back(const WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_pinvoke& marshaled, WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786& unmarshaled);
IL2CPP_EXTERN_C void WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshal_pinvoke_cleanup(WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshal_pinvoke(const WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700& unmarshaled, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshal_pinvoke_back(const WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_pinvoke& marshaled, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700& unmarshaled);
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshal_pinvoke_cleanup(WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_pinvoke& marshaled);

// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m3B3E8A4CCC2A274EC621A5D473FA7ECBEB5837AA_gshared (Action_1_t29368AEE60F045C5477E88401669BA353A78D947 * __this, HoldCanceledEventArgs_t651D1D0315F5C220D7B7CC376247C0E65B0B5EA0  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m7CCD02EDE9064CE685FC35D8BE970DC4B18BC759_gshared (Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C * __this, HoldCompletedEventArgs_tBE542E3244B083D2F1878678255FD7A8EA9FE93A  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mD05F50A6F1DB797F5652F943CACB6DF85F33435A_gshared (Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5 * __this, HoldStartedEventArgs_t3F204F104C7DF85013C0F4BC7577BF82A20B10D7  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mFA3E6800956F44169773B74CA4A5953FBF71AFB7_gshared (Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84 * __this, TappedEventArgs_t2CE682DB9CD4D8645DAD6F7733914A5398104E06  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mEB2473592B4FCA9AA0771BFD25407B1B32755161_gshared (Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680 * __this, ManipulationCanceledEventArgs_t9C4C85673F50BEF214FC4F8729B881521C348153  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m014642777A4594FD9C25AC9E36DF944E0C63392B_gshared (Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E * __this, ManipulationCompletedEventArgs_tE7D44000ED4017D2156B096639AF8B299DE30A29  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m79008B8FA657F7125139F348B65025C7882A2F94_gshared (Action_1_tF04767A1A349F98AC6979DF21720774196690BB8 * __this, ManipulationStartedEventArgs_tB3A5E1A630FD14E611B89B711F195A56767B587D  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mC18D2E2B78640B265E29E3B3FC1984718482FC7F_gshared (Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4 * __this, ManipulationUpdatedEventArgs_t8BF7AEE84974D33195C0B3CB72159CD4AC38C853  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m34A5C85EB7608C248BF817D4BD44EC615561C6A0_gshared (Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0 * __this, NavigationCanceledEventArgs_t3E39D901C1E6F9B91FBED769A2CFBCFA519A961D  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m4EC55C15B38D7D231C8A98682DF6FD56458C4D4E_gshared (Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A * __this, NavigationCompletedEventArgs_tFEEE697B12D1B47BF1AB02FB7BC3D8D0D1DAE02B  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m7BC941EF6B3FA232A754081134E7E1CB7F9E7B40_gshared (Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA * __this, NavigationStartedEventArgs_t616BCC53F4EA8C74449891ED96FF089F9A5FB575  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m3BE7B438CB7DD205CD2671FC9DE60D34F64A5C40_gshared (Action_1_t767395F23F17500B4C75DD5C5D99565951502B61 * __this, NavigationUpdatedEventArgs_t2CA5531F33392E23DD5810671259EA447322BFC0  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mE712C64E2596B843399B6E81448E8A7A550CD0C3_gshared (Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3 * __this, RecognitionEndedEventArgs_tB08194C0CB288DD9CA6F9DD45F3E3D0533A84DCA  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mFEEFA464FC51CE43CFF3D1309E358D6FC5283D76_gshared (Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A * __this, RecognitionStartedEventArgs_tE0689333118E01D539F2EE1A59151048D13DEA1F  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m2F5F111E446B264A39D29D058EBC689DFB904524_gshared (Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344 * __this, GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m111950D713E74D7CB9C041F09B757E4540F4DEDE_gshared (Action_1_t70029448BD80398612B0E649BCC3DACBA30B8C32 * __this, InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mE6A36B1146C67FC85A63D7318087C2182A98B8A5_gshared (Action_1_t2F32A241CCCFDCDCD49CF7681670050EF53BAF5B * __this, InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m6D41982FA1F1BA976C592600CBF810318255CC6E_gshared (Action_1_tC1573040D0F2D26EE10A60F17D1DD91D64DE0265 * __this, InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mBE0FF6894091EB05A36EF95ACCC87AEDE340FE46_gshared (Action_1_t84959BD5083335276C37995687123234C711E6DD * __this, InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mC9D9C90FEDD95C77460F4DE2A358E4241601BDBE_gshared (Action_1_t492DC3C44A0EBF2D98FD19A46FB58934E771B1CE * __this, InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m272F5501C6E97F8FE6DE7D35442F80620AEAB7FC_gshared_inline (Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  Nullable_1_get_Value_mFD35424B0A127299B92F572A318E3BB8C35D86CF_gshared (Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_error(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_error_m0FB476E259CEF15C65C404683D30315F4D8051D0_inline (GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_hresult(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_hresult_m16FCEF473196E4696FEC1A5040F17EC933902BFE_inline (GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorEventArgs__ctor_m3D0A023BE01BDB5719D81D5FDC8A213299D40CA7 (GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_Invoke_m6DB0912FFE4F853A5591D2E15983E64501E1AE63 (HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m3B3E8A4CCC2A274EC621A5D473FA7ECBEB5837AA (Action_1_t29368AEE60F045C5477E88401669BA353A78D947 * __this, HoldCanceledEventArgs_t651D1D0315F5C220D7B7CC376247C0E65B0B5EA0  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t29368AEE60F045C5477E88401669BA353A78D947 *, HoldCanceledEventArgs_t651D1D0315F5C220D7B7CC376247C0E65B0B5EA0 , const RuntimeMethod*))Action_1_Invoke_m3B3E8A4CCC2A274EC621A5D473FA7ECBEB5837AA_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_Invoke_m2892AA940C90A8C7A2F45FB4DDCA4D0E1E18040F (HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m7CCD02EDE9064CE685FC35D8BE970DC4B18BC759 (Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C * __this, HoldCompletedEventArgs_tBE542E3244B083D2F1878678255FD7A8EA9FE93A  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C *, HoldCompletedEventArgs_tBE542E3244B083D2F1878678255FD7A8EA9FE93A , const RuntimeMethod*))Action_1_Invoke_m7CCD02EDE9064CE685FC35D8BE970DC4B18BC759_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_Invoke_m91C0417B1524FAF446B2FE9DC578A896459FBB7A (HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mD05F50A6F1DB797F5652F943CACB6DF85F33435A (Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5 * __this, HoldStartedEventArgs_t3F204F104C7DF85013C0F4BC7577BF82A20B10D7  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5 *, HoldStartedEventArgs_t3F204F104C7DF85013C0F4BC7577BF82A20B10D7 , const RuntimeMethod*))Action_1_Invoke_mD05F50A6F1DB797F5652F943CACB6DF85F33435A_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TappedEventDelegate_Invoke_m628C5CE8F7CFAED239186F7FEC7BCCD6D1368616 (TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 * __this, int32_t ___source0, int32_t ___tapCount1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mFA3E6800956F44169773B74CA4A5953FBF71AFB7 (Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84 * __this, TappedEventArgs_t2CE682DB9CD4D8645DAD6F7733914A5398104E06  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84 *, TappedEventArgs_t2CE682DB9CD4D8645DAD6F7733914A5398104E06 , const RuntimeMethod*))Action_1_Invoke_mFA3E6800956F44169773B74CA4A5953FBF71AFB7_gshared)(__this, ___obj0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_Invoke_m63D11490E659EC254EB7478D896C04FAED85DD03 (ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mEB2473592B4FCA9AA0771BFD25407B1B32755161 (Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680 * __this, ManipulationCanceledEventArgs_t9C4C85673F50BEF214FC4F8729B881521C348153  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680 *, ManipulationCanceledEventArgs_t9C4C85673F50BEF214FC4F8729B881521C348153 , const RuntimeMethod*))Action_1_Invoke_mEB2473592B4FCA9AA0771BFD25407B1B32755161_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_Invoke_m0AA2877AD273C0835CFF9F279F76ECAB3494FA97 (ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m014642777A4594FD9C25AC9E36DF944E0C63392B (Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E * __this, ManipulationCompletedEventArgs_tE7D44000ED4017D2156B096639AF8B299DE30A29  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E *, ManipulationCompletedEventArgs_tE7D44000ED4017D2156B096639AF8B299DE30A29 , const RuntimeMethod*))Action_1_Invoke_m014642777A4594FD9C25AC9E36DF944E0C63392B_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_Invoke_m7D26FFA7AD5D5992B3EA4211078A3D642F2899FC (ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m79008B8FA657F7125139F348B65025C7882A2F94 (Action_1_tF04767A1A349F98AC6979DF21720774196690BB8 * __this, ManipulationStartedEventArgs_tB3A5E1A630FD14E611B89B711F195A56767B587D  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF04767A1A349F98AC6979DF21720774196690BB8 *, ManipulationStartedEventArgs_tB3A5E1A630FD14E611B89B711F195A56767B587D , const RuntimeMethod*))Action_1_Invoke_m79008B8FA657F7125139F348B65025C7882A2F94_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_Invoke_m137872B697BCACE1D702C78D33044E124EC6FB96 (ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mC18D2E2B78640B265E29E3B3FC1984718482FC7F (Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4 * __this, ManipulationUpdatedEventArgs_t8BF7AEE84974D33195C0B3CB72159CD4AC38C853  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4 *, ManipulationUpdatedEventArgs_t8BF7AEE84974D33195C0B3CB72159CD4AC38C853 , const RuntimeMethod*))Action_1_Invoke_mC18D2E2B78640B265E29E3B3FC1984718482FC7F_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_Invoke_mCE541BF5809E4A7FA6D2CF0B583046BF428A0B87 (NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m34A5C85EB7608C248BF817D4BD44EC615561C6A0 (Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0 * __this, NavigationCanceledEventArgs_t3E39D901C1E6F9B91FBED769A2CFBCFA519A961D  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0 *, NavigationCanceledEventArgs_t3E39D901C1E6F9B91FBED769A2CFBCFA519A961D , const RuntimeMethod*))Action_1_Invoke_m34A5C85EB7608C248BF817D4BD44EC615561C6A0_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_Invoke_m6CE109DE564FCB0381FC886496060C343D0AF195 (NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m4EC55C15B38D7D231C8A98682DF6FD56458C4D4E (Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A * __this, NavigationCompletedEventArgs_tFEEE697B12D1B47BF1AB02FB7BC3D8D0D1DAE02B  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A *, NavigationCompletedEventArgs_tFEEE697B12D1B47BF1AB02FB7BC3D8D0D1DAE02B , const RuntimeMethod*))Action_1_Invoke_m4EC55C15B38D7D231C8A98682DF6FD56458C4D4E_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_Invoke_mD386AB8CB29AD2AFDD26E77CBB092871B93E3FB7 (NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m7BC941EF6B3FA232A754081134E7E1CB7F9E7B40 (Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA * __this, NavigationStartedEventArgs_t616BCC53F4EA8C74449891ED96FF089F9A5FB575  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA *, NavigationStartedEventArgs_t616BCC53F4EA8C74449891ED96FF089F9A5FB575 , const RuntimeMethod*))Action_1_Invoke_m7BC941EF6B3FA232A754081134E7E1CB7F9E7B40_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_Invoke_m1EA2BE63DD559C50A26DA24D434438ADB502685C (NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m3BE7B438CB7DD205CD2671FC9DE60D34F64A5C40 (Action_1_t767395F23F17500B4C75DD5C5D99565951502B61 * __this, NavigationUpdatedEventArgs_t2CA5531F33392E23DD5810671259EA447322BFC0  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t767395F23F17500B4C75DD5C5D99565951502B61 *, NavigationUpdatedEventArgs_t2CA5531F33392E23DD5810671259EA447322BFC0 , const RuntimeMethod*))Action_1_Invoke_m3BE7B438CB7DD205CD2671FC9DE60D34F64A5C40_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_Invoke_m5C85329A7841A460C64A5B5C59CBC2C8A9003DBD (RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mE712C64E2596B843399B6E81448E8A7A550CD0C3 (Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3 * __this, RecognitionEndedEventArgs_tB08194C0CB288DD9CA6F9DD45F3E3D0533A84DCA  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3 *, RecognitionEndedEventArgs_tB08194C0CB288DD9CA6F9DD45F3E3D0533A84DCA , const RuntimeMethod*))Action_1_Invoke_mE712C64E2596B843399B6E81448E8A7A550CD0C3_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_Invoke_m0677BC056B588F99941431C379242938D2239845 (RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mFEEFA464FC51CE43CFF3D1309E358D6FC5283D76 (Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A * __this, RecognitionStartedEventArgs_tE0689333118E01D539F2EE1A59151048D13DEA1F  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A *, RecognitionStartedEventArgs_tE0689333118E01D539F2EE1A59151048D13DEA1F , const RuntimeMethod*))Action_1_Invoke_mFEEFA464FC51CE43CFF3D1309E358D6FC5283D76_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate::Invoke(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorDelegate_Invoke_m29FAF138D125742F0B5CCE0706CCEC04B4A3E47F (GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m2F5F111E446B264A39D29D058EBC689DFB904524 (Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344 * __this, GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344 *, GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 , const RuntimeMethod*))Action_1_Invoke_m2F5F111E446B264A39D29D058EBC689DFB904524_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.HolographicSettings::InternalSetFocusPointForFrameP(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicSettings_InternalSetFocusPointForFrameP_m017CE56E6353A5CE9B365961488029E14C6EAB54 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.HolographicSettings::InternalSetFocusPointForFrameP_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicSettings_InternalSetFocusPointForFrameP_Injected_mF8A6F57BB2C618752CC6F70503A6D3293A408A9B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionManager/SourceEventHandler::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceEventHandler_Invoke_m8D68FBCCA39BA64C781AB92CAF10211DA31328B1 (SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs__ctor_m61D1450C8CDFC3761B5A1C919B95A86B1C421EBF (InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m111950D713E74D7CB9C041F09B757E4540F4DEDE (Action_1_t70029448BD80398612B0E649BCC3DACBA30B8C32 * __this, InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t70029448BD80398612B0E649BCC3DACBA30B8C32 *, InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075 , const RuntimeMethod*))Action_1_Invoke_m111950D713E74D7CB9C041F09B757E4540F4DEDE_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs__ctor_m61FA004160081D99344F5AE71504BFC144ABA501 (InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mE6A36B1146C67FC85A63D7318087C2182A98B8A5 (Action_1_t2F32A241CCCFDCDCD49CF7681670050EF53BAF5B * __this, InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2F32A241CCCFDCDCD49CF7681670050EF53BAF5B *, InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A , const RuntimeMethod*))Action_1_Invoke_mE6A36B1146C67FC85A63D7318087C2182A98B8A5_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs__ctor_mB818194BA1E6D9EE5976E5D5571429689A12D5CB (InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m6D41982FA1F1BA976C592600CBF810318255CC6E (Action_1_tC1573040D0F2D26EE10A60F17D1DD91D64DE0265 * __this, InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1573040D0F2D26EE10A60F17D1DD91D64DE0265 *, InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B , const RuntimeMethod*))Action_1_Invoke_m6D41982FA1F1BA976C592600CBF810318255CC6E_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs__ctor_m928C6EE1C84FC04A51F1A3854A6E5A025DAEE0DA (InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, int32_t ___pressType1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mBE0FF6894091EB05A36EF95ACCC87AEDE340FE46 (Action_1_t84959BD5083335276C37995687123234C711E6DD * __this, InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t84959BD5083335276C37995687123234C711E6DD *, InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 , const RuntimeMethod*))Action_1_Invoke_mBE0FF6894091EB05A36EF95ACCC87AEDE340FE46_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs__ctor_mECFF83F2164476841401B10B7CD0B5D006609067 (InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, int32_t ___pressType1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mC9D9C90FEDD95C77460F4DE2A358E4241601BDBE (Action_1_t492DC3C44A0EBF2D98FD19A46FB58934E771B1CE * __this, InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t492DC3C44A0EBF2D98FD19A46FB58934E771B1CE *, InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 , const RuntimeMethod*))Action_1_Invoke_mC9D9C90FEDD95C77460F4DE2A358E4241601BDBE_gshared)(__this, ___obj0, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_HasValue()
inline bool Nullable_1_get_HasValue_m272F5501C6E97F8FE6DE7D35442F80620AEAB7FC_inline (Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65 *, const RuntimeMethod*))Nullable_1_get_HasValue_m272F5501C6E97F8FE6DE7D35442F80620AEAB7FC_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_Value()
inline InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  Nullable_1_get_Value_mFD35424B0A127299B92F572A318E3BB8C35D86CF (Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65 * __this, const RuntimeMethod* method)
{
	return ((  InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  (*) (Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65 *, const RuntimeMethod*))Nullable_1_get_Value_mFD35424B0A127299B92F572A318E3BB8C35D86CF_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(UnityEngine.XR.WSA.Input.InteractionSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSource_Equals_m9A2DCEB2F32E36B2B853BA1667D8552D85AA86F8 (InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSource_Equals_m3114603E5F78B5F92A29495B9B3ED8FD7E64D4C8 (InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.Input.InteractionSource::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionSource_GetHashCode_m4C05E94A6592A3480B15956040901E9F87EAFA3D (InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs_set_state_m84B944C6B51D1AAC246CC4D798395197A0C48EC5_inline (InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs_set_state_m3E53FF61269AD2AA6773360E52127A246A66EEB9_inline (InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_state_m9DF8F102DFF74150EEB516BD3AA0C6CC96CFA690_inline (InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_pressType_m6E5D0736A00CA78BFB4067049343150023F065C4_inline (InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_state_m8E10675E8542DE81FE656A9FEAEB12005F410050_inline (InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_pressType_mDA36E67CA1CBA27D9860A0E89762F8CE33D87330_inline (InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs_set_state_mA427B778777E1F36500F50051764C51214D5F971_inline (InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::FromFileTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_FromFileTime_mDA04D67C55893D90DEB6419D27BE549AAC70A140 (int64_t ___fileTime0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate::Invoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_Invoke_m2AF4C235217099CB704A2FE020B6D62C5AC19621 (SurfaceChangedDelegate_t99D796E4D8B27B4ED884282C83AE3C7C09966030 * __this, SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066  ___surfaceId0, int32_t ___changeType1, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds2, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___updateTime3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate::Invoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_Invoke_mA7BCE35E826D7A60EEC9D03DDE38FBD5C3702B0D (SurfaceDataReadyDelegate_tC004767784492E456A3434A621DE6FC0DF8E502A * __this, SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate::Invoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_Invoke_m81CBD93EE6C97D1BD1B62016950CD74CC85E0290 (OnTrackingChangedDelegate_t3297C23267B6E94FCD1A2723D6022B62DC787DC1 * __this, WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore__ctor_m2874BFF873D0B97C9B96F1D12D38F383250FA512 (WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate::Invoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAsyncDelegate_Invoke_m5E21AAA81E178D82A0841FF35ADA4AF06E760DA1 (GetAsyncDelegate_t9B7E3154444245DE2C2C70E1D71F218566F4CB4E * __this, WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * ___store0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_Internal_Destroy_m9611E992FFE8915596B6E02C13C1A49230F556BA (WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_DisposeThreaded_Internal_m3C7C8F2F3743B17A8DB5CE0819371A5A309F0249 (WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_Internal_m81A8049102790B69E3125AF0EA558C6852E08822 (WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_Invoke_mFCD741F24795905F3376E95E03E51B361B8D0803 (SerializationDataAvailableDelegate_tF621DFE3ADA62C9005BB32FA1B93C755E4F80D3E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_Invoke_mA21D347587A56CD81719D9B338D2C74E430358E3 (SerializationCompleteDelegate_t5692DCDB8E68933ADB6793AD978460B7853526A1 * __this, int32_t ___completionReason0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch__ctor_mC13D3B8D21F2B0BB7D01D99FB45BF1344076A4B4 (WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_Invoke_mDB09A83D95C212B49AE8D53FA0BC402C31D2474F (DeserializationCompleteDelegate_t019A334F65CA223A93A00CAD4BDC42E26AD004EC * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * ___deserializedTransferBatch1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate::Invoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_Invoke_mE1EDD07F8467F81A64AB72563B022E5F31741485 (OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0 * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6 (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *, String_t*, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
IL2CPP_EXTERN_C void GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8_marshal_pinvoke(const GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8& unmarshaled, GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CerrorU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CerrorU3Ek__BackingField_0());
	marshaled.___U3ChresultU3Ek__BackingField_1 = unmarshaled.get_U3ChresultU3Ek__BackingField_1();
}
IL2CPP_EXTERN_C void GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8_marshal_pinvoke_back(const GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8_marshaled_pinvoke& marshaled, GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8& unmarshaled)
{
	unmarshaled.set_U3CerrorU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CerrorU3Ek__BackingField_0));
	int32_t unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = marshaled.___U3ChresultU3Ek__BackingField_1;
	unmarshaled.set_U3ChresultU3Ek__BackingField_1(unmarshaled_U3ChresultU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
IL2CPP_EXTERN_C void GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8_marshal_pinvoke_cleanup(GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CerrorU3Ek__BackingField_0);
	marshaled.___U3CerrorU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
IL2CPP_EXTERN_C void GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8_marshal_com(const GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8& unmarshaled, GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8_marshaled_com& marshaled)
{
	marshaled.___U3CerrorU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CerrorU3Ek__BackingField_0());
	marshaled.___U3ChresultU3Ek__BackingField_1 = unmarshaled.get_U3ChresultU3Ek__BackingField_1();
}
IL2CPP_EXTERN_C void GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8_marshal_com_back(const GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8_marshaled_com& marshaled, GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8& unmarshaled)
{
	unmarshaled.set_U3CerrorU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CerrorU3Ek__BackingField_0));
	int32_t unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = marshaled.___U3ChresultU3Ek__BackingField_1;
	unmarshaled.set_U3ChresultU3Ek__BackingField_1(unmarshaled_U3ChresultU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
IL2CPP_EXTERN_C void GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8_marshal_com_cleanup(GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CerrorU3Ek__BackingField_0);
	marshaled.___U3CerrorU3Ek__BackingField_0 = NULL;
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_error_m0FB476E259CEF15C65C404683D30315F4D8051D0 (GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void GestureErrorEventArgs_set_error_m0FB476E259CEF15C65C404683D30315F4D8051D0_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 *>(__this + _offset);
	GestureErrorEventArgs_set_error_m0FB476E259CEF15C65C404683D30315F4D8051D0_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_hresult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_hresult_m16FCEF473196E4696FEC1A5040F17EC933902BFE (GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3ChresultU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void GestureErrorEventArgs_set_hresult_m16FCEF473196E4696FEC1A5040F17EC933902BFE_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 *>(__this + _offset);
	GestureErrorEventArgs_set_hresult_m16FCEF473196E4696FEC1A5040F17EC933902BFE_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorEventArgs__ctor_m3D0A023BE01BDB5719D81D5FDC8A213299D40CA7 (GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 ));
		String_t* L_0 = ___error0;
		GestureErrorEventArgs_set_error_m0FB476E259CEF15C65C404683D30315F4D8051D0_inline((GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 *)__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___hresult1;
		GestureErrorEventArgs_set_hresult_m16FCEF473196E4696FEC1A5040F17EC933902BFE_inline((GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void GestureErrorEventArgs__ctor_m3D0A023BE01BDB5719D81D5FDC8A213299D40CA7_AdjustorThunk (RuntimeObject * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 *>(__this + _offset);
	GestureErrorEventArgs__ctor_m3D0A023BE01BDB5719D81D5FDC8A213299D40CA7(_thisAdjusted, ___error0, ___hresult1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
IL2CPP_EXTERN_C void GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_marshal_pinvoke(const GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9& unmarshaled, GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Recognizer_0 = unmarshaled.get_m_Recognizer_0();
	marshaled.___HoldCanceled_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceled_1()));
	marshaled.___HoldCompleted_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompleted_2()));
	marshaled.___HoldStarted_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStarted_3()));
	marshaled.___Tapped_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Tapped_4()));
	marshaled.___ManipulationCanceled_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceled_5()));
	marshaled.___ManipulationCompleted_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompleted_6()));
	marshaled.___ManipulationStarted_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStarted_7()));
	marshaled.___ManipulationUpdated_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdated_8()));
	marshaled.___NavigationCanceled_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceled_9()));
	marshaled.___NavigationCompleted_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompleted_10()));
	marshaled.___NavigationStarted_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStarted_11()));
	marshaled.___NavigationUpdated_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdated_12()));
	marshaled.___RecognitionEnded_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEnded_13()));
	marshaled.___RecognitionStarted_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStarted_14()));
	marshaled.___GestureError_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureError_15()));
	marshaled.___HoldCanceledEvent_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceledEvent_16()));
	marshaled.___HoldCompletedEvent_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompletedEvent_17()));
	marshaled.___HoldStartedEvent_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStartedEvent_18()));
	marshaled.___TappedEvent_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TappedEvent_19()));
	marshaled.___ManipulationCanceledEvent_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceledEvent_20()));
	marshaled.___ManipulationCompletedEvent_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompletedEvent_21()));
	marshaled.___ManipulationStartedEvent_22 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStartedEvent_22()));
	marshaled.___ManipulationUpdatedEvent_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdatedEvent_23()));
	marshaled.___NavigationCanceledEvent_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceledEvent_24()));
	marshaled.___NavigationCompletedEvent_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompletedEvent_25()));
	marshaled.___NavigationStartedEvent_26 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStartedEvent_26()));
	marshaled.___NavigationUpdatedEvent_27 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdatedEvent_27()));
	marshaled.___RecognitionEndedEvent_28 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEndedEvent_28()));
	marshaled.___RecognitionStartedEvent_29 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStartedEvent_29()));
	marshaled.___GestureErrorEvent_30 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureErrorEvent_30()));
}
IL2CPP_EXTERN_C void GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_marshal_pinvoke_back(const GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_marshaled_pinvoke& marshaled, GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Recognizer_temp_0;
	memset((&unmarshaled_m_Recognizer_temp_0), 0, sizeof(unmarshaled_m_Recognizer_temp_0));
	unmarshaled_m_Recognizer_temp_0 = marshaled.___m_Recognizer_0;
	unmarshaled.set_m_Recognizer_0(unmarshaled_m_Recognizer_temp_0);
	unmarshaled.set_HoldCanceled_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t29368AEE60F045C5477E88401669BA353A78D947>(marshaled.___HoldCanceled_1, Action_1_t29368AEE60F045C5477E88401669BA353A78D947_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompleted_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C>(marshaled.___HoldCompleted_2, Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStarted_3(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5>(marshaled.___HoldStarted_3, Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5_il2cpp_TypeInfo_var));
	unmarshaled.set_Tapped_4(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84>(marshaled.___Tapped_4, Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceled_5(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680>(marshaled.___ManipulationCanceled_5, Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompleted_6(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E>(marshaled.___ManipulationCompleted_6, Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStarted_7(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tF04767A1A349F98AC6979DF21720774196690BB8>(marshaled.___ManipulationStarted_7, Action_1_tF04767A1A349F98AC6979DF21720774196690BB8_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdated_8(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4>(marshaled.___ManipulationUpdated_8, Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceled_9(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0>(marshaled.___NavigationCanceled_9, Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompleted_10(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A>(marshaled.___NavigationCompleted_10, Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStarted_11(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA>(marshaled.___NavigationStarted_11, Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdated_12(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t767395F23F17500B4C75DD5C5D99565951502B61>(marshaled.___NavigationUpdated_12, Action_1_t767395F23F17500B4C75DD5C5D99565951502B61_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEnded_13(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3>(marshaled.___RecognitionEnded_13, Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStarted_14(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A>(marshaled.___RecognitionStarted_14, Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureError_15(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344>(marshaled.___GestureError_15, Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCanceledEvent_16(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605>(marshaled.___HoldCanceledEvent_16, HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompletedEvent_17(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE>(marshaled.___HoldCompletedEvent_17, HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStartedEvent_18(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE>(marshaled.___HoldStartedEvent_18, HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE_il2cpp_TypeInfo_var));
	unmarshaled.set_TappedEvent_19(il2cpp_codegen_marshal_function_ptr_to_delegate<TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154>(marshaled.___TappedEvent_19, TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceledEvent_20(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91>(marshaled.___ManipulationCanceledEvent_20, ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompletedEvent_21(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8>(marshaled.___ManipulationCompletedEvent_21, ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStartedEvent_22(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394>(marshaled.___ManipulationStartedEvent_22, ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdatedEvent_23(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE>(marshaled.___ManipulationUpdatedEvent_23, ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceledEvent_24(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520>(marshaled.___NavigationCanceledEvent_24, NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompletedEvent_25(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961>(marshaled.___NavigationCompletedEvent_25, NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStartedEvent_26(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD>(marshaled.___NavigationStartedEvent_26, NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdatedEvent_27(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443>(marshaled.___NavigationUpdatedEvent_27, NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEndedEvent_28(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB>(marshaled.___RecognitionEndedEvent_28, RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStartedEvent_29(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F>(marshaled.___RecognitionStartedEvent_29, RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureErrorEvent_30(il2cpp_codegen_marshal_function_ptr_to_delegate<GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB>(marshaled.___GestureErrorEvent_30, GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
IL2CPP_EXTERN_C void GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_marshal_pinvoke_cleanup(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
IL2CPP_EXTERN_C void GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_marshal_com(const GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9& unmarshaled, GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_marshaled_com& marshaled)
{
	marshaled.___m_Recognizer_0 = unmarshaled.get_m_Recognizer_0();
	marshaled.___HoldCanceled_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceled_1()));
	marshaled.___HoldCompleted_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompleted_2()));
	marshaled.___HoldStarted_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStarted_3()));
	marshaled.___Tapped_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Tapped_4()));
	marshaled.___ManipulationCanceled_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceled_5()));
	marshaled.___ManipulationCompleted_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompleted_6()));
	marshaled.___ManipulationStarted_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStarted_7()));
	marshaled.___ManipulationUpdated_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdated_8()));
	marshaled.___NavigationCanceled_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceled_9()));
	marshaled.___NavigationCompleted_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompleted_10()));
	marshaled.___NavigationStarted_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStarted_11()));
	marshaled.___NavigationUpdated_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdated_12()));
	marshaled.___RecognitionEnded_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEnded_13()));
	marshaled.___RecognitionStarted_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStarted_14()));
	marshaled.___GestureError_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureError_15()));
	marshaled.___HoldCanceledEvent_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceledEvent_16()));
	marshaled.___HoldCompletedEvent_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompletedEvent_17()));
	marshaled.___HoldStartedEvent_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStartedEvent_18()));
	marshaled.___TappedEvent_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TappedEvent_19()));
	marshaled.___ManipulationCanceledEvent_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceledEvent_20()));
	marshaled.___ManipulationCompletedEvent_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompletedEvent_21()));
	marshaled.___ManipulationStartedEvent_22 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStartedEvent_22()));
	marshaled.___ManipulationUpdatedEvent_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdatedEvent_23()));
	marshaled.___NavigationCanceledEvent_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceledEvent_24()));
	marshaled.___NavigationCompletedEvent_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompletedEvent_25()));
	marshaled.___NavigationStartedEvent_26 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStartedEvent_26()));
	marshaled.___NavigationUpdatedEvent_27 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdatedEvent_27()));
	marshaled.___RecognitionEndedEvent_28 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEndedEvent_28()));
	marshaled.___RecognitionStartedEvent_29 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStartedEvent_29()));
	marshaled.___GestureErrorEvent_30 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureErrorEvent_30()));
}
IL2CPP_EXTERN_C void GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_marshal_com_back(const GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_marshaled_com& marshaled, GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Recognizer_temp_0;
	memset((&unmarshaled_m_Recognizer_temp_0), 0, sizeof(unmarshaled_m_Recognizer_temp_0));
	unmarshaled_m_Recognizer_temp_0 = marshaled.___m_Recognizer_0;
	unmarshaled.set_m_Recognizer_0(unmarshaled_m_Recognizer_temp_0);
	unmarshaled.set_HoldCanceled_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t29368AEE60F045C5477E88401669BA353A78D947>(marshaled.___HoldCanceled_1, Action_1_t29368AEE60F045C5477E88401669BA353A78D947_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompleted_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C>(marshaled.___HoldCompleted_2, Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStarted_3(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5>(marshaled.___HoldStarted_3, Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5_il2cpp_TypeInfo_var));
	unmarshaled.set_Tapped_4(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84>(marshaled.___Tapped_4, Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceled_5(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680>(marshaled.___ManipulationCanceled_5, Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompleted_6(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E>(marshaled.___ManipulationCompleted_6, Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStarted_7(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tF04767A1A349F98AC6979DF21720774196690BB8>(marshaled.___ManipulationStarted_7, Action_1_tF04767A1A349F98AC6979DF21720774196690BB8_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdated_8(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4>(marshaled.___ManipulationUpdated_8, Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceled_9(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0>(marshaled.___NavigationCanceled_9, Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompleted_10(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A>(marshaled.___NavigationCompleted_10, Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStarted_11(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA>(marshaled.___NavigationStarted_11, Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdated_12(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t767395F23F17500B4C75DD5C5D99565951502B61>(marshaled.___NavigationUpdated_12, Action_1_t767395F23F17500B4C75DD5C5D99565951502B61_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEnded_13(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3>(marshaled.___RecognitionEnded_13, Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStarted_14(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A>(marshaled.___RecognitionStarted_14, Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureError_15(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344>(marshaled.___GestureError_15, Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCanceledEvent_16(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605>(marshaled.___HoldCanceledEvent_16, HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompletedEvent_17(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE>(marshaled.___HoldCompletedEvent_17, HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStartedEvent_18(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE>(marshaled.___HoldStartedEvent_18, HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE_il2cpp_TypeInfo_var));
	unmarshaled.set_TappedEvent_19(il2cpp_codegen_marshal_function_ptr_to_delegate<TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154>(marshaled.___TappedEvent_19, TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceledEvent_20(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91>(marshaled.___ManipulationCanceledEvent_20, ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompletedEvent_21(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8>(marshaled.___ManipulationCompletedEvent_21, ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStartedEvent_22(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394>(marshaled.___ManipulationStartedEvent_22, ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdatedEvent_23(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE>(marshaled.___ManipulationUpdatedEvent_23, ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceledEvent_24(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520>(marshaled.___NavigationCanceledEvent_24, NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompletedEvent_25(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961>(marshaled.___NavigationCompletedEvent_25, NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStartedEvent_26(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD>(marshaled.___NavigationStartedEvent_26, NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdatedEvent_27(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443>(marshaled.___NavigationUpdatedEvent_27, NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEndedEvent_28(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB>(marshaled.___RecognitionEndedEvent_28, RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStartedEvent_29(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F>(marshaled.___RecognitionStartedEvent_29, RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureErrorEvent_30(il2cpp_codegen_marshal_function_ptr_to_delegate<GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB>(marshaled.___GestureErrorEvent_30, GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
IL2CPP_EXTERN_C void GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_marshal_com_cleanup(GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldCanceled_m52EE50501EC77642A3E4D5FC064761930961446C (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___source0, InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___sourcePose1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldCanceled_m52EE50501EC77642A3E4D5FC064761930961446C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 * V_0 = NULL;
	Action_1_t29368AEE60F045C5477E88401669BA353A78D947 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	HoldCanceledEventArgs_t651D1D0315F5C220D7B7CC376247C0E65B0B5EA0  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 * L_0 = __this->get_HoldCanceledEvent_16();
		V_0 = L_0;
		HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 * L_3 = V_0;
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_6 = ___headPose2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_8 = ___headPose2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_9, L_10, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_12), L_7, L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		HoldCanceledEventDelegate_Invoke_m6DB0912FFE4F853A5591D2E15983E64501E1AE63(L_3, L_5, L_12, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t29368AEE60F045C5477E88401669BA353A78D947 * L_13 = __this->get_HoldCanceled_1();
		V_1 = L_13;
		Action_1_t29368AEE60F045C5477E88401669BA353A78D947 * L_14 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t29368AEE60F045C5477E88401669BA353A78D947 *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_16 = ___source0;
		(&V_4)->set_m_Source_0(L_16);
		InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  L_17 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_17);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_18 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_18);
		Action_1_t29368AEE60F045C5477E88401669BA353A78D947 * L_19 = V_1;
		HoldCanceledEventArgs_t651D1D0315F5C220D7B7CC376247C0E65B0B5EA0  L_20 = V_4;
		NullCheck(L_19);
		Action_1_Invoke_m3B3E8A4CCC2A274EC621A5D473FA7ECBEB5837AA(L_19, L_20, /*hidden argument*/Action_1_Invoke_m3B3E8A4CCC2A274EC621A5D473FA7ECBEB5837AA_RuntimeMethod_var);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldCompleted_m4B67C322C6C4283B481595DC7346D2F6DB64B314 (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___source0, InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___sourcePose1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldCompleted_m4B67C322C6C4283B481595DC7346D2F6DB64B314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE * V_0 = NULL;
	Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	HoldCompletedEventArgs_tBE542E3244B083D2F1878678255FD7A8EA9FE93A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE * L_0 = __this->get_HoldCompletedEvent_17();
		V_0 = L_0;
		HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE * L_3 = V_0;
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_6 = ___headPose2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_8 = ___headPose2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_9, L_10, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_12), L_7, L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		HoldCompletedEventDelegate_Invoke_m2892AA940C90A8C7A2F45FB4DDCA4D0E1E18040F(L_3, L_5, L_12, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C * L_13 = __this->get_HoldCompleted_2();
		V_1 = L_13;
		Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C * L_14 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_16 = ___source0;
		(&V_4)->set_m_Source_0(L_16);
		InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  L_17 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_17);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_18 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_18);
		Action_1_tF2717A41B5ADAD9C14FC1BA8A51582A25B26540C * L_19 = V_1;
		HoldCompletedEventArgs_tBE542E3244B083D2F1878678255FD7A8EA9FE93A  L_20 = V_4;
		NullCheck(L_19);
		Action_1_Invoke_m7CCD02EDE9064CE685FC35D8BE970DC4B18BC759(L_19, L_20, /*hidden argument*/Action_1_Invoke_m7CCD02EDE9064CE685FC35D8BE970DC4B18BC759_RuntimeMethod_var);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldStarted_mD40EA61EE5D2DB08D3FF641D861ABDEAC2409120 (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___source0, InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___sourcePose1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldStarted_mD40EA61EE5D2DB08D3FF641D861ABDEAC2409120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE * V_0 = NULL;
	Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	HoldStartedEventArgs_t3F204F104C7DF85013C0F4BC7577BF82A20B10D7  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE * L_0 = __this->get_HoldStartedEvent_18();
		V_0 = L_0;
		HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE * L_3 = V_0;
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_6 = ___headPose2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_8 = ___headPose2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_9, L_10, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_12), L_7, L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		HoldStartedEventDelegate_Invoke_m91C0417B1524FAF446B2FE9DC578A896459FBB7A(L_3, L_5, L_12, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5 * L_13 = __this->get_HoldStarted_3();
		V_1 = L_13;
		Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5 * L_14 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5 *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_16 = ___source0;
		(&V_4)->set_m_Source_0(L_16);
		InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  L_17 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_17);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_18 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_18);
		Action_1_t429B20C306ADC249EFC6CD19E473454C4398B7F5 * L_19 = V_1;
		HoldStartedEventArgs_t3F204F104C7DF85013C0F4BC7577BF82A20B10D7  L_20 = V_4;
		NullCheck(L_19);
		Action_1_Invoke_mD05F50A6F1DB797F5652F943CACB6DF85F33435A(L_19, L_20, /*hidden argument*/Action_1_Invoke_mD05F50A6F1DB797F5652F943CACB6DF85F33435A_RuntimeMethod_var);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeTapped(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeTapped_m51A6A9DF4BC7D260B95CE37F767C379C0039FD25 (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___source0, InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___sourcePose1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose2, int32_t ___tapCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeTapped_m51A6A9DF4BC7D260B95CE37F767C379C0039FD25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 * V_0 = NULL;
	Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	TappedEventArgs_t2CE682DB9CD4D8645DAD6F7733914A5398104E06  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 * L_0 = __this->get_TappedEvent_19();
		V_0 = L_0;
		TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 * L_3 = V_0;
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		int32_t L_6 = ___tapCount3;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_7 = ___headPose2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = ___headPose2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = L_9.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_10, L_11, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		TappedEventDelegate_Invoke_m628C5CE8F7CFAED239186F7FEC7BCCD6D1368616(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84 * L_14 = __this->get_Tapped_4();
		V_1 = L_14;
		Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84 * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		int32_t L_20 = ___tapCount3;
		(&V_4)->set_m_TapCount_3(L_20);
		Action_1_t24F3B7969B3834A03DE338CA021AF24D758DDF84 * L_21 = V_1;
		TappedEventArgs_t2CE682DB9CD4D8645DAD6F7733914A5398104E06  L_22 = V_4;
		NullCheck(L_21);
		Action_1_Invoke_mFA3E6800956F44169773B74CA4A5953FBF71AFB7(L_21, L_22, /*hidden argument*/Action_1_Invoke_mFA3E6800956F44169773B74CA4A5953FBF71AFB7_RuntimeMethod_var);
	}

IL_0075:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationCanceled_mE331A0DABC7E29FF022A43536C96CC4D4C14BB74 (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___source0, InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___sourcePose1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationCanceled_mE331A0DABC7E29FF022A43536C96CC4D4C14BB74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 * V_0 = NULL;
	Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	ManipulationCanceledEventArgs_t9C4C85673F50BEF214FC4F8729B881521C348153  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 * L_0 = __this->get_ManipulationCanceledEvent_20();
		V_0 = L_0;
		ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 * L_3 = V_0;
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_7 = ___headPose2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = ___headPose2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = L_9.get_rotation_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_10, L_11, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		ManipulationCanceledEventDelegate_Invoke_m63D11490E659EC254EB7478D896C04FAED85DD03(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680 * L_14 = __this->get_ManipulationCanceled_5();
		V_1 = L_14;
		Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680 * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Action_1_tEF209DBDC5C7CCD08188EAECE0583A3A71970680 * L_20 = V_1;
		ManipulationCanceledEventArgs_t9C4C85673F50BEF214FC4F8729B881521C348153  L_21 = V_4;
		NullCheck(L_20);
		Action_1_Invoke_mEB2473592B4FCA9AA0771BFD25407B1B32755161(L_20, L_21, /*hidden argument*/Action_1_Invoke_mEB2473592B4FCA9AA0771BFD25407B1B32755161_RuntimeMethod_var);
	}

IL_006f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationCompleted_mC983C150F9072B7E68E2BFE8538C03194A5F47A4 (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___source0, InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___sourcePose1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationCompleted_mC983C150F9072B7E68E2BFE8538C03194A5F47A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 * V_0 = NULL;
	Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	ManipulationCompletedEventArgs_tE7D44000ED4017D2156B096639AF8B299DE30A29  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 * L_0 = __this->get_ManipulationCompletedEvent_21();
		V_0 = L_0;
		ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 * L_3 = V_0;
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___cumulativeDelta3;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_7 = ___headPose2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = ___headPose2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = L_9.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_10, L_11, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		ManipulationCompletedEventDelegate_Invoke_m0AA2877AD273C0835CFF9F279F76ECAB3494FA97(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E * L_14 = __this->get_ManipulationCompleted_6();
		V_1 = L_14;
		Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___cumulativeDelta3;
		(&V_4)->set_m_CumulativeDelta_3(L_20);
		Action_1_tBA9BDA9427E114C089E1D677B93427E0C8AA1B7E * L_21 = V_1;
		ManipulationCompletedEventArgs_tE7D44000ED4017D2156B096639AF8B299DE30A29  L_22 = V_4;
		NullCheck(L_21);
		Action_1_Invoke_m014642777A4594FD9C25AC9E36DF944E0C63392B(L_21, L_22, /*hidden argument*/Action_1_Invoke_m014642777A4594FD9C25AC9E36DF944E0C63392B_RuntimeMethod_var);
	}

IL_0075:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationStarted_m3F9A33DCEF2D37AAA8B48F545B5D2E4DCC4F4608 (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___source0, InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___sourcePose1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationStarted_m3F9A33DCEF2D37AAA8B48F545B5D2E4DCC4F4608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 * V_0 = NULL;
	Action_1_tF04767A1A349F98AC6979DF21720774196690BB8 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	ManipulationStartedEventArgs_tB3A5E1A630FD14E611B89B711F195A56767B587D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 * L_0 = __this->get_ManipulationStartedEvent_22();
		V_0 = L_0;
		ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 * L_3 = V_0;
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_7 = ___headPose2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = ___headPose2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = L_9.get_rotation_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_10, L_11, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		ManipulationStartedEventDelegate_Invoke_m7D26FFA7AD5D5992B3EA4211078A3D642F2899FC(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_tF04767A1A349F98AC6979DF21720774196690BB8 * L_14 = __this->get_ManipulationStarted_7();
		V_1 = L_14;
		Action_1_tF04767A1A349F98AC6979DF21720774196690BB8 * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_tF04767A1A349F98AC6979DF21720774196690BB8 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Action_1_tF04767A1A349F98AC6979DF21720774196690BB8 * L_20 = V_1;
		ManipulationStartedEventArgs_tB3A5E1A630FD14E611B89B711F195A56767B587D  L_21 = V_4;
		NullCheck(L_20);
		Action_1_Invoke_m79008B8FA657F7125139F348B65025C7882A2F94(L_20, L_21, /*hidden argument*/Action_1_Invoke_m79008B8FA657F7125139F348B65025C7882A2F94_RuntimeMethod_var);
	}

IL_006f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationUpdated(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationUpdated_m2B43DF8F269F0C83ABF3A37724E7E48995F20009 (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___source0, InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___sourcePose1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationUpdated_m2B43DF8F269F0C83ABF3A37724E7E48995F20009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE * V_0 = NULL;
	Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	ManipulationUpdatedEventArgs_t8BF7AEE84974D33195C0B3CB72159CD4AC38C853  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE * L_0 = __this->get_ManipulationUpdatedEvent_23();
		V_0 = L_0;
		ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE * L_3 = V_0;
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___cumulativeDelta3;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_7 = ___headPose2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = ___headPose2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = L_9.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_10, L_11, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		ManipulationUpdatedEventDelegate_Invoke_m137872B697BCACE1D702C78D33044E124EC6FB96(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4 * L_14 = __this->get_ManipulationUpdated_8();
		V_1 = L_14;
		Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4 * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___cumulativeDelta3;
		(&V_4)->set_m_CumulativeDelta_3(L_20);
		Action_1_t7668729E6FC3402E4E5D107FB986712DAF48B5B4 * L_21 = V_1;
		ManipulationUpdatedEventArgs_t8BF7AEE84974D33195C0B3CB72159CD4AC38C853  L_22 = V_4;
		NullCheck(L_21);
		Action_1_Invoke_mC18D2E2B78640B265E29E3B3FC1984718482FC7F(L_21, L_22, /*hidden argument*/Action_1_Invoke_mC18D2E2B78640B265E29E3B3FC1984718482FC7F_RuntimeMethod_var);
	}

IL_0075:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationCanceled_mA782771A075F860A7784690B359E63305226E52E (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___source0, InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___sourcePose1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationCanceled_mA782771A075F860A7784690B359E63305226E52E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 * V_0 = NULL;
	Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	NavigationCanceledEventArgs_t3E39D901C1E6F9B91FBED769A2CFBCFA519A961D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 * L_0 = __this->get_NavigationCanceledEvent_24();
		V_0 = L_0;
		NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 * L_3 = V_0;
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_7 = ___headPose2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = ___headPose2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = L_9.get_rotation_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_10, L_11, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		NavigationCanceledEventDelegate_Invoke_mCE541BF5809E4A7FA6D2CF0B583046BF428A0B87(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0 * L_14 = __this->get_NavigationCanceled_9();
		V_1 = L_14;
		Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0 * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Action_1_t8352BA067BBD75ADF71AE644CAD61E61628C70C0 * L_20 = V_1;
		NavigationCanceledEventArgs_t3E39D901C1E6F9B91FBED769A2CFBCFA519A961D  L_21 = V_4;
		NullCheck(L_20);
		Action_1_Invoke_m34A5C85EB7608C248BF817D4BD44EC615561C6A0(L_20, L_21, /*hidden argument*/Action_1_Invoke_m34A5C85EB7608C248BF817D4BD44EC615561C6A0_RuntimeMethod_var);
	}

IL_006f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationCompleted_m4F8A915760F77989CA4821FDB43D8F2B7B55C609 (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___source0, InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___sourcePose1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationCompleted_m4F8A915760F77989CA4821FDB43D8F2B7B55C609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 * V_0 = NULL;
	Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	NavigationCompletedEventArgs_tFEEE697B12D1B47BF1AB02FB7BC3D8D0D1DAE02B  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 * L_0 = __this->get_NavigationCompletedEvent_25();
		V_0 = L_0;
		NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 * L_3 = V_0;
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___normalizedOffset3;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_7 = ___headPose2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = ___headPose2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = L_9.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_10, L_11, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		NavigationCompletedEventDelegate_Invoke_m6CE109DE564FCB0381FC886496060C343D0AF195(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A * L_14 = __this->get_NavigationCompleted_10();
		V_1 = L_14;
		Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___normalizedOffset3;
		(&V_4)->set_m_NormalizedOffset_3(L_20);
		Action_1_tCBE39DF37BD0913790C93CBAAB89977026D5832A * L_21 = V_1;
		NavigationCompletedEventArgs_tFEEE697B12D1B47BF1AB02FB7BC3D8D0D1DAE02B  L_22 = V_4;
		NullCheck(L_21);
		Action_1_Invoke_m4EC55C15B38D7D231C8A98682DF6FD56458C4D4E(L_21, L_22, /*hidden argument*/Action_1_Invoke_m4EC55C15B38D7D231C8A98682DF6FD56458C4D4E_RuntimeMethod_var);
	}

IL_0075:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationStarted_m9DDB25457CB4AE77F76D13901308BA91378F0024 (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___source0, InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___sourcePose1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationStarted_m9DDB25457CB4AE77F76D13901308BA91378F0024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD * V_0 = NULL;
	Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	NavigationStartedEventArgs_t616BCC53F4EA8C74449891ED96FF089F9A5FB575  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD * L_0 = __this->get_NavigationStartedEvent_26();
		V_0 = L_0;
		NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD * L_3 = V_0;
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_7 = ___headPose2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = ___headPose2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = L_9.get_rotation_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_10, L_11, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		NavigationStartedEventDelegate_Invoke_mD386AB8CB29AD2AFDD26E77CBB092871B93E3FB7(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA * L_14 = __this->get_NavigationStarted_11();
		V_1 = L_14;
		Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_006f;
		}
	}
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Action_1_t339EACA2ED8DBC6D717BB5535D434E067D5ABFEA * L_20 = V_1;
		NavigationStartedEventArgs_t616BCC53F4EA8C74449891ED96FF089F9A5FB575  L_21 = V_4;
		NullCheck(L_20);
		Action_1_Invoke_m7BC941EF6B3FA232A754081134E7E1CB7F9E7B40(L_20, L_21, /*hidden argument*/Action_1_Invoke_m7BC941EF6B3FA232A754081134E7E1CB7F9E7B40_RuntimeMethod_var);
	}

IL_006f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationUpdated(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationUpdated_m44C24D477E18BB396DB6D6D4BF024047069A44EC (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___source0, InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___sourcePose1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationUpdated_m44C24D477E18BB396DB6D6D4BF024047069A44EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 * V_0 = NULL;
	Action_1_t767395F23F17500B4C75DD5C5D99565951502B61 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	NavigationUpdatedEventArgs_t2CA5531F33392E23DD5810671259EA447322BFC0  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 * L_0 = __this->get_NavigationUpdatedEvent_27();
		V_0 = L_0;
		NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 * L_3 = V_0;
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___normalizedOffset3;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_7 = ___headPose2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9 = ___headPose2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = L_9.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_10, L_11, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_13), L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_3);
		NavigationUpdatedEventDelegate_Invoke_m1EA2BE63DD559C50A26DA24D434438ADB502685C(L_3, L_5, L_6, L_13, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t767395F23F17500B4C75DD5C5D99565951502B61 * L_14 = __this->get_NavigationUpdated_12();
		V_1 = L_14;
		Action_1_t767395F23F17500B4C75DD5C5D99565951502B61 * L_15 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t767395F23F17500B4C75DD5C5D99565951502B61 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_17 = ___source0;
		(&V_4)->set_m_Source_0(L_17);
		InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  L_18 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_18);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_19 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___normalizedOffset3;
		(&V_4)->set_m_NormalizedOffset_3(L_20);
		Action_1_t767395F23F17500B4C75DD5C5D99565951502B61 * L_21 = V_1;
		NavigationUpdatedEventArgs_t2CA5531F33392E23DD5810671259EA447322BFC0  L_22 = V_4;
		NullCheck(L_21);
		Action_1_Invoke_m3BE7B438CB7DD205CD2671FC9DE60D34F64A5C40(L_21, L_22, /*hidden argument*/Action_1_Invoke_m3BE7B438CB7DD205CD2671FC9DE60D34F64A5C40_RuntimeMethod_var);
	}

IL_0075:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeRecognitionEnded(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeRecognitionEnded_m1C5F940B3D464A233F510597382334EF8D4E86DF (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___source0, InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___sourcePose1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeRecognitionEnded_m1C5F940B3D464A233F510597382334EF8D4E86DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB * V_0 = NULL;
	Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	RecognitionEndedEventArgs_tB08194C0CB288DD9CA6F9DD45F3E3D0533A84DCA  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB * L_0 = __this->get_RecognitionEndedEvent_28();
		V_0 = L_0;
		RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB * L_3 = V_0;
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_6 = ___headPose2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_8 = ___headPose2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_9, L_10, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_12), L_7, L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		RecognitionEndedEventDelegate_Invoke_m5C85329A7841A460C64A5B5C59CBC2C8A9003DBD(L_3, L_5, L_12, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3 * L_13 = __this->get_RecognitionEnded_13();
		V_1 = L_13;
		Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3 * L_14 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3 *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_16 = ___source0;
		(&V_4)->set_m_Source_0(L_16);
		InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  L_17 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_17);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_18 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_18);
		Action_1_tB8A0F289734E6BD5BF46BDEC5C74935DED49E4F3 * L_19 = V_1;
		RecognitionEndedEventArgs_tB08194C0CB288DD9CA6F9DD45F3E3D0533A84DCA  L_20 = V_4;
		NullCheck(L_19);
		Action_1_Invoke_mE712C64E2596B843399B6E81448E8A7A550CD0C3(L_19, L_20, /*hidden argument*/Action_1_Invoke_mE712C64E2596B843399B6E81448E8A7A550CD0C3_RuntimeMethod_var);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeRecognitionStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeRecognitionStarted_mA41E6F4F30311280C198790554DDA653847E3F1C (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___source0, InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  ___sourcePose1, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeRecognitionStarted_mA41E6F4F30311280C198790554DDA653847E3F1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F * V_0 = NULL;
	Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	RecognitionStartedEventArgs_tE0689333118E01D539F2EE1A59151048D13DEA1F  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F * L_0 = __this->get_RecognitionStartedEvent_29();
		V_0 = L_0;
		RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F * L_3 = V_0;
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = ___source0;
		int32_t L_5 = L_4.get_m_SourceKind_1();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_6 = ___headPose2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6.get_position_0();
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_8 = ___headPose2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8.get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_9, L_10, /*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Ray__ctor_m75B1F651FF47EE6B887105101B7DA61CBF41F83C((&L_12), L_7, L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		RecognitionStartedEventDelegate_Invoke_m0677BC056B588F99941431C379242938D2239845(L_3, L_5, L_12, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A * L_13 = __this->get_RecognitionStarted_14();
		V_1 = L_13;
		Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A * L_14 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_16 = ___source0;
		(&V_4)->set_m_Source_0(L_16);
		InteractionSourcePose_tB14C83BA5F93CADAC9F26DD21CFC03A5D7BB4599  L_17 = ___sourcePose1;
		(&V_4)->set_m_SourcePose_1(L_17);
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_18 = ___headPose2;
		(&V_4)->set_m_HeadPose_2(L_18);
		Action_1_t99E178C99332BFA8657F93CA8AEA2F257653676A * L_19 = V_1;
		RecognitionStartedEventArgs_tE0689333118E01D539F2EE1A59151048D13DEA1F  L_20 = V_4;
		NullCheck(L_19);
		Action_1_Invoke_mFEEFA464FC51CE43CFF3D1309E358D6FC5283D76(L_19, L_20, /*hidden argument*/Action_1_Invoke_mFEEFA464FC51CE43CFF3D1309E358D6FC5283D76_RuntimeMethod_var);
	}

IL_006a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeErrorEvent(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeErrorEvent_mD7B42EF32B1456C62B62666DB4F1F86F5CC1CC61 (GestureRecognizer_t7B16E56DFC8882CE3AB78DA2A9214177AE6DC8B9 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeErrorEvent_mD7B42EF32B1456C62B62666DB4F1F86F5CC1CC61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB * V_0 = NULL;
	Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB * L_0 = __this->get_GestureErrorEvent_30();
		V_0 = L_0;
		GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB * L_1 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB * L_3 = V_0;
		String_t* L_4 = ___error0;
		int32_t L_5 = ___hresult1;
		NullCheck(L_3);
		GestureErrorDelegate_Invoke_m29FAF138D125742F0B5CCE0706CCEC04B4A3E47F(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344 * L_6 = __this->get_GestureError_15();
		V_1 = L_6;
		Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344 * L_7 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344 *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		Action_1_t63F7B4DAED26D89203C6B0AD8CF07D4104E3A344 * L_9 = V_1;
		String_t* L_10 = ___error0;
		int32_t L_11 = ___hresult1;
		GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8  L_12;
		memset((&L_12), 0, sizeof(L_12));
		GestureErrorEventArgs__ctor_m3D0A023BE01BDB5719D81D5FDC8A213299D40CA7((&L_12), L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Action_1_Invoke_m2F5F111E446B264A39D29D058EBC689DFB904524(L_9, L_12, /*hidden argument*/Action_1_Invoke_m2F5F111E446B264A39D29D058EBC689DFB904524_RuntimeMethod_var);
	}

IL_0036:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.HolographicSettings::SetFocusPointForFrame(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicSettings_SetFocusPointForFrame_m5F21C1B2E26F92A55334FC94150C71182925AC69 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___position0;
		HolographicSettings_InternalSetFocusPointForFrameP_m017CE56E6353A5CE9B365961488029E14C6EAB54(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.HolographicSettings::InternalSetFocusPointForFrameP(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicSettings_InternalSetFocusPointForFrameP_m017CE56E6353A5CE9B365961488029E14C6EAB54 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method)
{
	{
		HolographicSettings_InternalSetFocusPointForFrameP_Injected_mF8A6F57BB2C618752CC6F70503A6D3293A408A9B((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&___position0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.HolographicSettings::InternalSetFocusPointForFrameP_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicSettings_InternalSetFocusPointForFrameP_Injected_mF8A6F57BB2C618752CC6F70503A6D3293A408A9B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, const RuntimeMethod* method)
{
	typedef void (*HolographicSettings_InternalSetFocusPointForFrameP_Injected_mF8A6F57BB2C618752CC6F70503A6D3293A408A9B_ftn) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *);
	static HolographicSettings_InternalSetFocusPointForFrameP_Injected_mF8A6F57BB2C618752CC6F70503A6D3293A408A9B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HolographicSettings_InternalSetFocusPointForFrameP_Injected_mF8A6F57BB2C618752CC6F70503A6D3293A408A9B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.HolographicSettings::InternalSetFocusPointForFrameP_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___position0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager__cctor_m164395F8D6F0E2A1B9057481230491EDA97E04FE (const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::OnSourceEvent(UnityEngine.XR.WSA.Input.InteractionManager_EventType,System.IntPtr,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_OnSourceEvent_m77829E7E0F02BB401511E6C56B8AA0EBB0B3ED78 (int32_t ___eventType0, intptr_t ___statePtr1, int32_t ___pressType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_OnSourceEvent_m77829E7E0F02BB401511E6C56B8AA0EBB0B3ED78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * V_2 = NULL;
	Action_1_t70029448BD80398612B0E649BCC3DACBA30B8C32 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * V_6 = NULL;
	Action_1_t2F32A241CCCFDCDCD49CF7681670050EF53BAF5B * V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * V_10 = NULL;
	Action_1_tC1573040D0F2D26EE10A60F17D1DD91D64DE0265 * V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * V_14 = NULL;
	Action_1_t84959BD5083335276C37995687123234C711E6DD * V_15 = NULL;
	bool V_16 = false;
	bool V_17 = false;
	SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * V_18 = NULL;
	Action_1_t492DC3C44A0EBF2D98FD19A46FB58934E771B1CE * V_19 = NULL;
	bool V_20 = false;
	bool V_21 = false;
	{
		intptr_t L_0 = ___statePtr1;
		void* L_1 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_0, /*hidden argument*/NULL);
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_2 = (*(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490 *)L_1);
		V_0 = L_2;
		int32_t L_3 = ___eventType0;
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_006a;
			}
			case 2:
			{
				goto IL_00ac;
			}
			case 3:
			{
				goto IL_00ee;
			}
			case 4:
			{
				goto IL_012e;
			}
		}
	}
	{
		goto IL_016e;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var);
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_5 = ((InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var))->get_InteractionSourceDetectedLegacy_5();
		V_2 = L_5;
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_6 = V_2;
		V_4 = (bool)((!(((RuntimeObject*)(SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_8 = V_2;
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_9 = V_0;
		NullCheck(L_8);
		SourceEventHandler_Invoke_m8D68FBCCA39BA64C781AB92CAF10211DA31328B1(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0047:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var);
		Action_1_t70029448BD80398612B0E649BCC3DACBA30B8C32 * L_10 = ((InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var))->get_InteractionSourceDetected_0();
		V_3 = L_10;
		Action_1_t70029448BD80398612B0E649BCC3DACBA30B8C32 * L_11 = V_3;
		V_5 = (bool)((!(((RuntimeObject*)(Action_1_t70029448BD80398612B0E649BCC3DACBA30B8C32 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0064;
		}
	}
	{
		Action_1_t70029448BD80398612B0E649BCC3DACBA30B8C32 * L_13 = V_3;
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_14 = V_0;
		InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075  L_15;
		memset((&L_15), 0, sizeof(L_15));
		InteractionSourceDetectedEventArgs__ctor_m61D1450C8CDFC3761B5A1C919B95A86B1C421EBF((&L_15), L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Action_1_Invoke_m111950D713E74D7CB9C041F09B757E4540F4DEDE(L_13, L_15, /*hidden argument*/Action_1_Invoke_m111950D713E74D7CB9C041F09B757E4540F4DEDE_RuntimeMethod_var);
	}

IL_0064:
	{
		goto IL_0179;
	}

IL_006a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var);
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_16 = ((InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var))->get_InteractionSourceLostLegacy_6();
		V_6 = L_16;
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_17 = V_6;
		V_8 = (bool)((!(((RuntimeObject*)(SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 *)L_17) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_18 = V_8;
		if (!L_18)
		{
			goto IL_0086;
		}
	}
	{
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_19 = V_6;
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_20 = V_0;
		NullCheck(L_19);
		SourceEventHandler_Invoke_m8D68FBCCA39BA64C781AB92CAF10211DA31328B1(L_19, L_20, /*hidden argument*/NULL);
	}

IL_0086:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var);
		Action_1_t2F32A241CCCFDCDCD49CF7681670050EF53BAF5B * L_21 = ((InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var))->get_InteractionSourceLost_1();
		V_7 = L_21;
		Action_1_t2F32A241CCCFDCDCD49CF7681670050EF53BAF5B * L_22 = V_7;
		V_9 = (bool)((!(((RuntimeObject*)(Action_1_t2F32A241CCCFDCDCD49CF7681670050EF53BAF5B *)L_22) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00a6;
		}
	}
	{
		Action_1_t2F32A241CCCFDCDCD49CF7681670050EF53BAF5B * L_24 = V_7;
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_25 = V_0;
		InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A  L_26;
		memset((&L_26), 0, sizeof(L_26));
		InteractionSourceLostEventArgs__ctor_m61FA004160081D99344F5AE71504BFC144ABA501((&L_26), L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		Action_1_Invoke_mE6A36B1146C67FC85A63D7318087C2182A98B8A5(L_24, L_26, /*hidden argument*/Action_1_Invoke_mE6A36B1146C67FC85A63D7318087C2182A98B8A5_RuntimeMethod_var);
	}

IL_00a6:
	{
		goto IL_0179;
	}

IL_00ac:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var);
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_27 = ((InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var))->get_InteractionSourceUpdatedLegacy_9();
		V_10 = L_27;
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_28 = V_10;
		V_12 = (bool)((!(((RuntimeObject*)(SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 *)L_28) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_29 = V_12;
		if (!L_29)
		{
			goto IL_00c8;
		}
	}
	{
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_30 = V_10;
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_31 = V_0;
		NullCheck(L_30);
		SourceEventHandler_Invoke_m8D68FBCCA39BA64C781AB92CAF10211DA31328B1(L_30, L_31, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var);
		Action_1_tC1573040D0F2D26EE10A60F17D1DD91D64DE0265 * L_32 = ((InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var))->get_InteractionSourceUpdated_4();
		V_11 = L_32;
		Action_1_tC1573040D0F2D26EE10A60F17D1DD91D64DE0265 * L_33 = V_11;
		V_13 = (bool)((!(((RuntimeObject*)(Action_1_tC1573040D0F2D26EE10A60F17D1DD91D64DE0265 *)L_33) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_34 = V_13;
		if (!L_34)
		{
			goto IL_00e8;
		}
	}
	{
		Action_1_tC1573040D0F2D26EE10A60F17D1DD91D64DE0265 * L_35 = V_11;
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_36 = V_0;
		InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B  L_37;
		memset((&L_37), 0, sizeof(L_37));
		InteractionSourceUpdatedEventArgs__ctor_mB818194BA1E6D9EE5976E5D5571429689A12D5CB((&L_37), L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		Action_1_Invoke_m6D41982FA1F1BA976C592600CBF810318255CC6E(L_35, L_37, /*hidden argument*/Action_1_Invoke_m6D41982FA1F1BA976C592600CBF810318255CC6E_RuntimeMethod_var);
	}

IL_00e8:
	{
		goto IL_0179;
	}

IL_00ee:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var);
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_38 = ((InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var))->get_InteractionSourcePressedLegacy_7();
		V_14 = L_38;
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_39 = V_14;
		V_16 = (bool)((!(((RuntimeObject*)(SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 *)L_39) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_40 = V_16;
		if (!L_40)
		{
			goto IL_010a;
		}
	}
	{
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_41 = V_14;
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_42 = V_0;
		NullCheck(L_41);
		SourceEventHandler_Invoke_m8D68FBCCA39BA64C781AB92CAF10211DA31328B1(L_41, L_42, /*hidden argument*/NULL);
	}

IL_010a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var);
		Action_1_t84959BD5083335276C37995687123234C711E6DD * L_43 = ((InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var))->get_InteractionSourcePressed_2();
		V_15 = L_43;
		Action_1_t84959BD5083335276C37995687123234C711E6DD * L_44 = V_15;
		V_17 = (bool)((!(((RuntimeObject*)(Action_1_t84959BD5083335276C37995687123234C711E6DD *)L_44) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_45 = V_17;
		if (!L_45)
		{
			goto IL_012b;
		}
	}
	{
		Action_1_t84959BD5083335276C37995687123234C711E6DD * L_46 = V_15;
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_47 = V_0;
		int32_t L_48 = ___pressType2;
		InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1  L_49;
		memset((&L_49), 0, sizeof(L_49));
		InteractionSourcePressedEventArgs__ctor_m928C6EE1C84FC04A51F1A3854A6E5A025DAEE0DA((&L_49), L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		Action_1_Invoke_mBE0FF6894091EB05A36EF95ACCC87AEDE340FE46(L_46, L_49, /*hidden argument*/Action_1_Invoke_mBE0FF6894091EB05A36EF95ACCC87AEDE340FE46_RuntimeMethod_var);
	}

IL_012b:
	{
		goto IL_0179;
	}

IL_012e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var);
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_50 = ((InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var))->get_InteractionSourceReleasedLegacy_8();
		V_18 = L_50;
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_51 = V_18;
		V_20 = (bool)((!(((RuntimeObject*)(SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 *)L_51) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_52 = V_20;
		if (!L_52)
		{
			goto IL_014a;
		}
	}
	{
		SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * L_53 = V_18;
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_54 = V_0;
		NullCheck(L_53);
		SourceEventHandler_Invoke_m8D68FBCCA39BA64C781AB92CAF10211DA31328B1(L_53, L_54, /*hidden argument*/NULL);
	}

IL_014a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var);
		Action_1_t492DC3C44A0EBF2D98FD19A46FB58934E771B1CE * L_55 = ((InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_t54A09A710E386CD7BEC54744B6E1AA3F36108EDE_il2cpp_TypeInfo_var))->get_InteractionSourceReleased_3();
		V_19 = L_55;
		Action_1_t492DC3C44A0EBF2D98FD19A46FB58934E771B1CE * L_56 = V_19;
		V_21 = (bool)((!(((RuntimeObject*)(Action_1_t492DC3C44A0EBF2D98FD19A46FB58934E771B1CE *)L_56) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_57 = V_21;
		if (!L_57)
		{
			goto IL_016b;
		}
	}
	{
		Action_1_t492DC3C44A0EBF2D98FD19A46FB58934E771B1CE * L_58 = V_19;
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_59 = V_0;
		int32_t L_60 = ___pressType2;
		InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04  L_61;
		memset((&L_61), 0, sizeof(L_61));
		InteractionSourceReleasedEventArgs__ctor_mECFF83F2164476841401B10B7CD0B5D006609067((&L_61), L_59, L_60, /*hidden argument*/NULL);
		NullCheck(L_58);
		Action_1_Invoke_mC9D9C90FEDD95C77460F4DE2A358E4241601BDBE(L_58, L_61, /*hidden argument*/Action_1_Invoke_mC9D9C90FEDD95C77460F4DE2A358E4241601BDBE_RuntimeMethod_var);
	}

IL_016b:
	{
		goto IL_0179;
	}

IL_016e:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_62 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_62, _stringLiteral3272CAE0EC5B3BF8505115AE17B42DB6F1D51730, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, InteractionManager_OnSourceEvent_m77829E7E0F02BB401511E6C56B8AA0EBB0B3ED78_RuntimeMethod_var);
	}

IL_0179:
	{
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
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSource_Equals_m3114603E5F78B5F92A29495B9B3ED8FD7E64D4C8 (InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionSource_Equals_m3114603E5F78B5F92A29495B9B3ED8FD7E64D4C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		void* L_1 = alloca(sizeof(Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65 ));
		UnBoxNullable(((RuntimeObject *)IsInst((RuntimeObject*)L_0, Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65_il2cpp_TypeInfo_var)), InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8_il2cpp_TypeInfo_var, L_1);
		V_0 = ((*(Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65 *)((Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65 *)L_1)));
		bool L_2 = Nullable_1_get_HasValue_m272F5501C6E97F8FE6DE7D35442F80620AEAB7FC_inline((Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m272F5501C6E97F8FE6DE7D35442F80620AEAB7FC_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_002f;
	}

IL_001f:
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_4 = Nullable_1_get_Value_mFD35424B0A127299B92F572A318E3BB8C35D86CF((Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mFD35424B0A127299B92F572A318E3BB8C35D86CF_RuntimeMethod_var);
		bool L_5 = InteractionSource_Equals_m9A2DCEB2F32E36B2B853BA1667D8552D85AA86F8((InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 *)__this, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_002f;
	}

IL_002f:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool InteractionSource_Equals_m3114603E5F78B5F92A29495B9B3ED8FD7E64D4C8_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * _thisAdjusted = reinterpret_cast<InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 *>(__this + _offset);
	return InteractionSource_Equals_m3114603E5F78B5F92A29495B9B3ED8FD7E64D4C8(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(UnityEngine.XR.WSA.Input.InteractionSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSource_Equals_m9A2DCEB2F32E36B2B853BA1667D8552D85AA86F8 (InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  L_0 = ___other0;
		uint32_t L_1 = L_0.get_m_Id_0();
		uint32_t L_2 = __this->get_m_Id_0();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool InteractionSource_Equals_m9A2DCEB2F32E36B2B853BA1667D8552D85AA86F8_AdjustorThunk (RuntimeObject * __this, InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * _thisAdjusted = reinterpret_cast<InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 *>(__this + _offset);
	return InteractionSource_Equals_m9A2DCEB2F32E36B2B853BA1667D8552D85AA86F8(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.WSA.Input.InteractionSource::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionSource_GetHashCode_m4C05E94A6592A3480B15956040901E9F87EAFA3D (InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_Id_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t InteractionSource_GetHashCode_m4C05E94A6592A3480B15956040901E9F87EAFA3D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 * _thisAdjusted = reinterpret_cast<InteractionSource_tCD57DB3BB04D5AAB55999883E377B344C23875B8 *>(__this + _offset);
	return InteractionSource_GetHashCode_m4C05E94A6592A3480B15956040901E9F87EAFA3D(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs_set_state_m84B944C6B51D1AAC246CC4D798395197A0C48EC5 (InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceDetectedEventArgs_set_state_m84B944C6B51D1AAC246CC4D798395197A0C48EC5_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075 * _thisAdjusted = reinterpret_cast<InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075 *>(__this + _offset);
	InteractionSourceDetectedEventArgs_set_state_m84B944C6B51D1AAC246CC4D798395197A0C48EC5_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs__ctor_m61D1450C8CDFC3761B5A1C919B95A86B1C421EBF (InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075 ));
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___state0;
		InteractionSourceDetectedEventArgs_set_state_m84B944C6B51D1AAC246CC4D798395197A0C48EC5_inline((InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075 *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceDetectedEventArgs__ctor_m61D1450C8CDFC3761B5A1C919B95A86B1C421EBF_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075 * _thisAdjusted = reinterpret_cast<InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075 *>(__this + _offset);
	InteractionSourceDetectedEventArgs__ctor_m61D1450C8CDFC3761B5A1C919B95A86B1C421EBF(_thisAdjusted, ___state0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs_set_state_m3E53FF61269AD2AA6773360E52127A246A66EEB9 (InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceLostEventArgs_set_state_m3E53FF61269AD2AA6773360E52127A246A66EEB9_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A * _thisAdjusted = reinterpret_cast<InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A *>(__this + _offset);
	InteractionSourceLostEventArgs_set_state_m3E53FF61269AD2AA6773360E52127A246A66EEB9_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs__ctor_m61FA004160081D99344F5AE71504BFC144ABA501 (InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A ));
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___state0;
		InteractionSourceLostEventArgs_set_state_m3E53FF61269AD2AA6773360E52127A246A66EEB9_inline((InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceLostEventArgs__ctor_m61FA004160081D99344F5AE71504BFC144ABA501_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A * _thisAdjusted = reinterpret_cast<InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A *>(__this + _offset);
	InteractionSourceLostEventArgs__ctor_m61FA004160081D99344F5AE71504BFC144ABA501(_thisAdjusted, ___state0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_state_m9DF8F102DFF74150EEB516BD3AA0C6CC96CFA690 (InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourcePressedEventArgs_set_state_m9DF8F102DFF74150EEB516BD3AA0C6CC96CFA690_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 * _thisAdjusted = reinterpret_cast<InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 *>(__this + _offset);
	InteractionSourcePressedEventArgs_set_state_m9DF8F102DFF74150EEB516BD3AA0C6CC96CFA690_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_pressType_m6E5D0736A00CA78BFB4067049343150023F065C4 (InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourcePressedEventArgs_set_pressType_m6E5D0736A00CA78BFB4067049343150023F065C4_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 * _thisAdjusted = reinterpret_cast<InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 *>(__this + _offset);
	InteractionSourcePressedEventArgs_set_pressType_m6E5D0736A00CA78BFB4067049343150023F065C4_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs__ctor_m928C6EE1C84FC04A51F1A3854A6E5A025DAEE0DA (InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 ));
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___state0;
		InteractionSourcePressedEventArgs_set_state_m9DF8F102DFF74150EEB516BD3AA0C6CC96CFA690_inline((InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 *)__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___pressType1;
		InteractionSourcePressedEventArgs_set_pressType_m6E5D0736A00CA78BFB4067049343150023F065C4_inline((InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourcePressedEventArgs__ctor_m928C6EE1C84FC04A51F1A3854A6E5A025DAEE0DA_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 * _thisAdjusted = reinterpret_cast<InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 *>(__this + _offset);
	InteractionSourcePressedEventArgs__ctor_m928C6EE1C84FC04A51F1A3854A6E5A025DAEE0DA(_thisAdjusted, ___state0, ___pressType1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_state_m8E10675E8542DE81FE656A9FEAEB12005F410050 (InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceReleasedEventArgs_set_state_m8E10675E8542DE81FE656A9FEAEB12005F410050_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 * _thisAdjusted = reinterpret_cast<InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 *>(__this + _offset);
	InteractionSourceReleasedEventArgs_set_state_m8E10675E8542DE81FE656A9FEAEB12005F410050_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_pressType_mDA36E67CA1CBA27D9860A0E89762F8CE33D87330 (InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceReleasedEventArgs_set_pressType_mDA36E67CA1CBA27D9860A0E89762F8CE33D87330_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 * _thisAdjusted = reinterpret_cast<InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 *>(__this + _offset);
	InteractionSourceReleasedEventArgs_set_pressType_mDA36E67CA1CBA27D9860A0E89762F8CE33D87330_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs__ctor_mECFF83F2164476841401B10B7CD0B5D006609067 (InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 ));
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___state0;
		InteractionSourceReleasedEventArgs_set_state_m8E10675E8542DE81FE656A9FEAEB12005F410050_inline((InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 *)__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___pressType1;
		InteractionSourceReleasedEventArgs_set_pressType_mDA36E67CA1CBA27D9860A0E89762F8CE33D87330_inline((InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceReleasedEventArgs__ctor_mECFF83F2164476841401B10B7CD0B5D006609067_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 * _thisAdjusted = reinterpret_cast<InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 *>(__this + _offset);
	InteractionSourceReleasedEventArgs__ctor_mECFF83F2164476841401B10B7CD0B5D006609067(_thisAdjusted, ___state0, ___pressType1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs_set_state_mA427B778777E1F36500F50051764C51214D5F971 (InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceUpdatedEventArgs_set_state_mA427B778777E1F36500F50051764C51214D5F971_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B * _thisAdjusted = reinterpret_cast<InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B *>(__this + _offset);
	InteractionSourceUpdatedEventArgs_set_state_mA427B778777E1F36500F50051764C51214D5F971_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs__ctor_mB818194BA1E6D9EE5976E5D5571429689A12D5CB (InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B ));
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___state0;
		InteractionSourceUpdatedEventArgs_set_state_mA427B778777E1F36500F50051764C51214D5F971_inline((InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceUpdatedEventArgs__ctor_mB818194BA1E6D9EE5976E5D5571429689A12D5CB_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B * _thisAdjusted = reinterpret_cast<InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B *>(__this + _offset);
	InteractionSourceUpdatedEventArgs__ctor_mB818194BA1E6D9EE5976E5D5571429689A12D5CB(_thisAdjusted, ___state0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.XR.WSA.RemoteSpeechAccess::EnableRemoteSpeech(UnityEngine.XR.WSA.RemoteDeviceVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeechAccess_EnableRemoteSpeech_m4648AB29EDCA57C6D12E4DF7949DFF48E165A954 (int32_t ___remoteDeviceVersion0, const RuntimeMethod* method)
{
	typedef void (*RemoteSpeechAccess_EnableRemoteSpeech_m4648AB29EDCA57C6D12E4DF7949DFF48E165A954_ftn) (int32_t);
	static RemoteSpeechAccess_EnableRemoteSpeech_m4648AB29EDCA57C6D12E4DF7949DFF48E165A954_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemoteSpeechAccess_EnableRemoteSpeech_m4648AB29EDCA57C6D12E4DF7949DFF48E165A954_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.XR.WSA.RemoteSpeechAccess::EnableRemoteSpeech(UnityEngine.XR.WSA.RemoteDeviceVersion)");
	_il2cpp_icall_func(___remoteDeviceVersion0);
}
// System.Void UnityEngineInternal.XR.WSA.RemoteSpeechAccess::DisableRemoteSpeech()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSpeechAccess_DisableRemoteSpeech_m1D0097A64115CCCCD91F273DE1C96353238911A8 (const RuntimeMethod* method)
{
	typedef void (*RemoteSpeechAccess_DisableRemoteSpeech_m1D0097A64115CCCCD91F273DE1C96353238911A8_ftn) ();
	static RemoteSpeechAccess_DisableRemoteSpeech_m1D0097A64115CCCCD91F273DE1C96353238911A8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemoteSpeechAccess_DisableRemoteSpeech_m1D0097A64115CCCCD91F273DE1C96353238911A8_ftn)il2cpp_codegen_resolve_icall ("UnityEngineInternal.XR.WSA.RemoteSpeechAccess::DisableRemoteSpeech()");
	_il2cpp_icall_func();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceData
IL2CPP_EXTERN_C void SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_marshal_pinvoke(const SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84& unmarshaled, SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_marshaled_pinvoke& marshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL);
}
IL2CPP_EXTERN_C void SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_marshal_pinvoke_back(const SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_marshaled_pinvoke& marshaled, SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84& unmarshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceData
IL2CPP_EXTERN_C void SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_marshal_pinvoke_cleanup(SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceData
IL2CPP_EXTERN_C void SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_marshal_com(const SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84& unmarshaled, SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_marshaled_com& marshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL);
}
IL2CPP_EXTERN_C void SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_marshal_com_back(const SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_marshaled_com& marshaled, SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84& unmarshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceData
IL2CPP_EXTERN_C void SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_marshal_com_cleanup(SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceObserver
IL2CPP_EXTERN_C void SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9_marshal_pinvoke(const SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9& unmarshaled, SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Observer_0 = unmarshaled.get_m_Observer_0();
}
IL2CPP_EXTERN_C void SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9_marshal_pinvoke_back(const SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9_marshaled_pinvoke& marshaled, SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9& unmarshaled)
{
	int32_t unmarshaled_m_Observer_temp_0 = 0;
	unmarshaled_m_Observer_temp_0 = marshaled.___m_Observer_0;
	unmarshaled.set_m_Observer_0(unmarshaled_m_Observer_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceObserver
IL2CPP_EXTERN_C void SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9_marshal_pinvoke_cleanup(SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceObserver
IL2CPP_EXTERN_C void SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9_marshal_com(const SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9& unmarshaled, SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9_marshaled_com& marshaled)
{
	marshaled.___m_Observer_0 = unmarshaled.get_m_Observer_0();
}
IL2CPP_EXTERN_C void SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9_marshal_com_back(const SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9_marshaled_com& marshaled, SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9& unmarshaled)
{
	int32_t unmarshaled_m_Observer_temp_0 = 0;
	unmarshaled_m_Observer_temp_0 = marshaled.___m_Observer_0;
	unmarshaled.set_m_Observer_0(unmarshaled_m_Observer_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceObserver
IL2CPP_EXTERN_C void SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9_marshal_com_cleanup(SurfaceObserver_t03946524E5633CBF84B1002B5C02FA6FA112E3F9_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::InvokeSurfaceChangedEvent(UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate,System.Int32,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_InvokeSurfaceChangedEvent_mF84E329EBED7FCC6B7CCA86D6C4B68499A93F3B4 (SurfaceChangedDelegate_t99D796E4D8B27B4ED884282C83AE3C7C09966030 * ___onSurfaceChanged0, int32_t ___surfaceId1, int32_t ___changeType2, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds3, int64_t ___updateTime4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceObserver_InvokeSurfaceChangedEvent_mF84E329EBED7FCC6B7CCA86D6C4B68499A93F3B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		SurfaceChangedDelegate_t99D796E4D8B27B4ED884282C83AE3C7C09966030 * L_0 = ___onSurfaceChanged0;
		V_0 = (bool)((!(((RuntimeObject*)(SurfaceChangedDelegate_t99D796E4D8B27B4ED884282C83AE3C7C09966030 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___surfaceId1;
		(&V_1)->set_handle_0(L_2);
		SurfaceChangedDelegate_t99D796E4D8B27B4ED884282C83AE3C7C09966030 * L_3 = ___onSurfaceChanged0;
		SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066  L_4 = V_1;
		int32_t L_5 = ___changeType2;
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_6 = ___bounds3;
		int64_t L_7 = ___updateTime4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_8 = DateTime_FromFileTime_mDA04D67C55893D90DEB6419D27BE549AAC70A140(L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		SurfaceChangedDelegate_Invoke_m2AF4C235217099CB704A2FE020B6D62C5AC19621(L_3, L_4, L_5, L_6, L_8, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::InvokeSurfaceDataReadyEvent(UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate,System.Int32,UnityEngine.MeshFilter,UnityEngine.XR.WSA.WorldAnchor,UnityEngine.MeshCollider,System.Single,System.Boolean,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_InvokeSurfaceDataReadyEvent_m6503E266FAD556F7E8BB3ADFCE8E6333DD543F5D (SurfaceDataReadyDelegate_tC004767784492E456A3434A621DE6FC0DF8E502A * ___onDataReady0, int32_t ___surfaceId1, MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___outputMesh2, WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * ___outputAnchor3, MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___outputCollider4, float ___trisPerCubicMeter5, bool ___bakeCollider6, bool ___outputWritten7, float ___elapsedBakeTimeSeconds8, const RuntimeMethod* method)
{
	bool V_0 = false;
	SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		SurfaceDataReadyDelegate_tC004767784492E456A3434A621DE6FC0DF8E502A * L_0 = ___onDataReady0;
		V_0 = (bool)((!(((RuntimeObject*)(SurfaceDataReadyDelegate_tC004767784492E456A3434A621DE6FC0DF8E502A *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066 * L_2 = (&V_1)->get_address_of_id_0();
		int32_t L_3 = ___surfaceId1;
		L_2->set_handle_0(L_3);
		MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_4 = ___outputMesh2;
		(&V_1)->set_outputMesh_1(L_4);
		WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * L_5 = ___outputAnchor3;
		(&V_1)->set_outputAnchor_2(L_5);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_6 = ___outputCollider4;
		(&V_1)->set_outputCollider_3(L_6);
		float L_7 = ___trisPerCubicMeter5;
		(&V_1)->set_trianglesPerCubicMeter_4(L_7);
		bool L_8 = ___bakeCollider6;
		(&V_1)->set_bakeCollider_5(L_8);
		SurfaceDataReadyDelegate_tC004767784492E456A3434A621DE6FC0DF8E502A * L_9 = ___onDataReady0;
		SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84  L_10 = V_1;
		bool L_11 = ___outputWritten7;
		float L_12 = ___elapsedBakeTimeSeconds8;
		NullCheck(L_9);
		SurfaceDataReadyDelegate_Invoke_mA7BCE35E826D7A60EEC9D03DDE38FBD5C3702B0D(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
	}

IL_004f:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WorldAnchor::Internal_TriggerEventOnTrackingLost(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchor_Internal_TriggerEventOnTrackingLost_m31FBB379F3CA7DD61B08643B390C5216C48B1EF2 (WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchor_Internal_TriggerEventOnTrackingLost_m31FBB379F3CA7DD61B08643B390C5216C48B1EF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * L_0 = ___worldAnchor0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * L_2 = ___worldAnchor0;
		NullCheck(L_2);
		OnTrackingChangedDelegate_t3297C23267B6E94FCD1A2723D6022B62DC787DC1 * L_3 = L_2->get_OnTrackingChanged_4();
		G_B3_0 = ((!(((RuntimeObject*)(OnTrackingChangedDelegate_t3297C23267B6E94FCD1A2723D6022B62DC787DC1 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * L_5 = ___worldAnchor0;
		NullCheck(L_5);
		OnTrackingChangedDelegate_t3297C23267B6E94FCD1A2723D6022B62DC787DC1 * L_6 = L_5->get_OnTrackingChanged_4();
		WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * L_7 = ___worldAnchor0;
		bool L_8 = ___located1;
		NullCheck(L_6);
		OnTrackingChangedDelegate_Invoke_m81CBD93EE6C97D1BD1B62016950CD74CC85E0290(L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_002a:
	{
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
IL2CPP_EXTERN_C void WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshal_pinvoke(const WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786& unmarshaled, WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshal_pinvoke_back(const WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_pinvoke& marshaled, WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
IL2CPP_EXTERN_C void WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshal_pinvoke_cleanup(WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
IL2CPP_EXTERN_C void WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshal_com(const WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786& unmarshaled, WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshal_com_back(const WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_com& marshaled, WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
IL2CPP_EXTERN_C void WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshal_com_cleanup(WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore__ctor_m2874BFF873D0B97C9B96F1D12D38F383250FA512 (WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativePtr0;
		__this->set_m_NativePtr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::InvokeGetAsyncDelegate(UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_InvokeGetAsyncDelegate_m5E2084EC6F2FB8AAA6FA8988BB9203F308DC2687 (GetAsyncDelegate_t9B7E3154444245DE2C2C70E1D71F218566F4CB4E * ___handler0, intptr_t ___nativePtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore_InvokeGetAsyncDelegate_m5E2084EC6F2FB8AAA6FA8988BB9203F308DC2687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___nativePtr1;
		WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * L_1 = (WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 *)il2cpp_codegen_object_new(WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_il2cpp_TypeInfo_var);
		WorldAnchorStore__ctor_m2874BFF873D0B97C9B96F1D12D38F383250FA512(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_il2cpp_TypeInfo_var);
		((WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_il2cpp_TypeInfo_var))->set_s_Instance_1(L_1);
		GetAsyncDelegate_t9B7E3154444245DE2C2C70E1D71F218566F4CB4E * L_2 = ___handler0;
		WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * L_3 = ((WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_il2cpp_TypeInfo_var))->get_s_Instance_1();
		NullCheck(L_2);
		GetAsyncDelegate_Invoke_m5E21AAA81E178D82A0841FF35ADA4AF06E760DA1(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_Dispose_mED7696B4F76550A047F721A531F0846CC287F189 (WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore_Dispose_mED7696B4F76550A047F721A531F0846CC287F189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		WorldAnchorStore_Internal_Destroy_m9611E992FFE8915596B6E02C13C1A49230F556BA(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		__this->set_m_NativePtr_0((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_Internal_Destroy_m9611E992FFE8915596B6E02C13C1A49230F556BA (WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorStore_Internal_Destroy_m9611E992FFE8915596B6E02C13C1A49230F556BA_ftn) (WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 *);
	static WorldAnchorStore_Internal_Destroy_m9611E992FFE8915596B6E02C13C1A49230F556BA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorStore_Internal_Destroy_m9611E992FFE8915596B6E02C13C1A49230F556BA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore__cctor_mDFBFF9F5FC238B9D4EE6B4024999D558DEB3BEE6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore__cctor_mDFBFF9F5FC238B9D4EE6B4024999D558DEB3BEE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_il2cpp_TypeInfo_var))->set_s_Instance_1((WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 *)NULL);
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
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshal_pinvoke(const WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700& unmarshaled, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshal_pinvoke_back(const WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_pinvoke& marshaled, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshal_pinvoke_cleanup(WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshal_com(const WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700& unmarshaled, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshal_com_back(const WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_com& marshaled, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshal_com_cleanup(WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch__ctor_mC13D3B8D21F2B0BB7D01D99FB45BF1344076A4B4 (WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch__ctor_mC13D3B8D21F2B0BB7D01D99FB45BF1344076A4B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_NativePtr_0((intptr_t)(0));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativePtr0;
		__this->set_m_NativePtr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Finalize_m6F2498F4A473ACCF6EEC673EBFC4A25A09871398 (WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_Finalize_m6F2498F4A473ACCF6EEC673EBFC4A25A09871398_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_NativePtr_0();
			bool L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			V_0 = L_1;
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_002a;
			}
		}

IL_0016:
		{
			WorldAnchorTransferBatch_DisposeThreaded_Internal_m3C7C8F2F3743B17A8DB5CE0819371A5A309F0249(__this, /*hidden argument*/NULL);
			__this->set_m_NativePtr_0((intptr_t)(0));
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x34, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_DisposeThreaded_Internal_m3C7C8F2F3743B17A8DB5CE0819371A5A309F0249 (WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorTransferBatch_DisposeThreaded_Internal_m3C7C8F2F3743B17A8DB5CE0819371A5A309F0249_ftn) (WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 *);
	static WorldAnchorTransferBatch_DisposeThreaded_Internal_m3C7C8F2F3743B17A8DB5CE0819371A5A309F0249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorTransferBatch_DisposeThreaded_Internal_m3C7C8F2F3743B17A8DB5CE0819371A5A309F0249_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_m6FEE402DD0FE5D51DC1583287649BAC022B7D0C8 (WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_Dispose_m6FEE402DD0FE5D51DC1583287649BAC022B7D0C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		WorldAnchorTransferBatch_Dispose_Internal_m81A8049102790B69E3125AF0EA558C6852E08822(__this, /*hidden argument*/NULL);
		__this->set_m_NativePtr_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_Internal_m81A8049102790B69E3125AF0EA558C6852E08822 (WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorTransferBatch_Dispose_Internal_m81A8049102790B69E3125AF0EA558C6852E08822_ftn) (WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 *);
	static WorldAnchorTransferBatch_Dispose_Internal_m81A8049102790B69E3125AF0EA558C6852E08822_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorTransferBatch_Dispose_Internal_m81A8049102790B69E3125AF0EA558C6852E08822_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorSerializationDataAvailableDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorSerializationDataAvailableDelegate_m0BD9E271636D985E955AD627C853DAE84511FAAB (SerializationDataAvailableDelegate_tF621DFE3ADA62C9005BB32FA1B93C755E4F80D3E * ___onSerializationDataAvailable0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method)
{
	{
		SerializationDataAvailableDelegate_tF621DFE3ADA62C9005BB32FA1B93C755E4F80D3E * L_0 = ___onSerializationDataAvailable0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data1;
		NullCheck(L_0);
		SerializationDataAvailableDelegate_Invoke_mFCD741F24795905F3376E95E03E51B361B8D0803(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorSerializationCompleteDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate,UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorSerializationCompleteDelegate_mBB23A8412CDD0C733F43C58BAC08910AE48970CB (SerializationCompleteDelegate_t5692DCDB8E68933ADB6793AD978460B7853526A1 * ___onSerializationComplete0, int32_t ___completionReason1, const RuntimeMethod* method)
{
	{
		SerializationCompleteDelegate_t5692DCDB8E68933ADB6793AD978460B7853526A1 * L_0 = ___onSerializationComplete0;
		int32_t L_1 = ___completionReason1;
		NullCheck(L_0);
		SerializationCompleteDelegate_Invoke_mA21D347587A56CD81719D9B338D2C74E430358E3(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorDeserializationCompleteDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate,UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_m147C2BBC058EEECBD3223E376B8BA4F2410A56FB (DeserializationCompleteDelegate_t019A334F65CA223A93A00CAD4BDC42E26AD004EC * ___onDeserializationComplete0, int32_t ___completionReason1, intptr_t ___nativePtr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_m147C2BBC058EEECBD3223E376B8BA4F2410A56FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * V_0 = NULL;
	{
		intptr_t L_0 = ___nativePtr2;
		WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * L_1 = (WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 *)il2cpp_codegen_object_new(WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_il2cpp_TypeInfo_var);
		WorldAnchorTransferBatch__ctor_mC13D3B8D21F2B0BB7D01D99FB45BF1344076A4B4(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		DeserializationCompleteDelegate_t019A334F65CA223A93A00CAD4BDC42E26AD004EC * L_2 = ___onDeserializationComplete0;
		int32_t L_3 = ___completionReason1;
		WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * L_4 = V_0;
		NullCheck(L_2);
		DeserializationCompleteDelegate_Invoke_mDB09A83D95C212B49AE8D53FA0BC402C31D2474F(L_2, L_3, L_4, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.WSA.WorldManager::Internal_TriggerPositionalLocatorStateChanged(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldManager_Internal_TriggerPositionalLocatorStateChanged_m34E8996CC3BEFD88E596EBC2A054DD5550DA9326 (int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldManager_Internal_TriggerPositionalLocatorStateChanged_m34E8996CC3BEFD88E596EBC2A054DD5550DA9326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0 * L_0 = ((WorldManager_tF5AC92E303AC5A2AEF2B8E3D7CB3B5858CA6323A_StaticFields*)il2cpp_codegen_static_fields_for(WorldManager_tF5AC92E303AC5A2AEF2B8E3D7CB3B5858CA6323A_il2cpp_TypeInfo_var))->get_OnPositionalLocatorStateChanged_0();
		V_0 = (bool)((!(((RuntimeObject*)(OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0 * L_2 = ((WorldManager_tF5AC92E303AC5A2AEF2B8E3D7CB3B5858CA6323A_StaticFields*)il2cpp_codegen_static_fields_for(WorldManager_tF5AC92E303AC5A2AEF2B8E3D7CB3B5858CA6323A_il2cpp_TypeInfo_var))->get_OnPositionalLocatorStateChanged_0();
		int32_t L_3 = ___oldState0;
		int32_t L_4 = ___newState1;
		NullCheck(L_2);
		OnPositionalLocatorStateChangedDelegate_Invoke_mE1EDD07F8467F81A64AB72563B022E5F31741485(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.IntPtr UnityEngine.XR.WSA.WorldManager::GetNativeISpatialCoordinateSystemPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WorldManager_GetNativeISpatialCoordinateSystemPtr_mC50DD3B2FB472D5DA196DD17C65D0F203C8453F1 (const RuntimeMethod* method)
{
	typedef intptr_t (*WorldManager_GetNativeISpatialCoordinateSystemPtr_mC50DD3B2FB472D5DA196DD17C65D0F203C8453F1_ftn) ();
	static WorldManager_GetNativeISpatialCoordinateSystemPtr_mC50DD3B2FB472D5DA196DD17C65D0F203C8453F1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldManager_GetNativeISpatialCoordinateSystemPtr_mC50DD3B2FB472D5DA196DD17C65D0F203C8453F1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WorldManager::GetNativeISpatialCoordinateSystemPtr()");
	intptr_t retVal = _il2cpp_icall_func();
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.XR.XRDevice::get_refreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRDevice_get_refreshRate_mD4F76121803499E672DBAF04FEC026C04CBB9D30 (const RuntimeMethod* method)
{
	typedef float (*XRDevice_get_refreshRate_mD4F76121803499E672DBAF04FEC026C04CBB9D30_ftn) ();
	static XRDevice_get_refreshRate_mD4F76121803499E672DBAF04FEC026C04CBB9D30_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDevice_get_refreshRate_mD4F76121803499E672DBAF04FEC026C04CBB9D30_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDevice::get_refreshRate()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.XR.XRDevice::InvokeDeviceLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice_InvokeDeviceLoaded_m3BDF6825A2A56E4923D4E6593C7BA2949B6A3581 (String_t* ___loadedDeviceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice_InvokeDeviceLoaded_m3BDF6825A2A56E4923D4E6593C7BA2949B6A3581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_0 = ((XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var))->get_deviceLoaded_0();
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var);
		Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * L_2 = ((XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var))->get_deviceLoaded_0();
		String_t* L_3 = ___loadedDeviceName0;
		NullCheck(L_2);
		Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6(L_2, L_3, /*hidden argument*/Action_1_Invoke_m6E81F94353B45920E7018D209DCF4B63DBE8D8B6_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRDevice::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice__cctor_mC83C1293819B81E68EC72D01A5CC107DFE29B98C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice__cctor_mC83C1293819B81E68EC72D01A5CC107DFE29B98C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t2C2B952750A66CA935A8A94FD6B022F629D0B9CA_il2cpp_TypeInfo_var))->set_deviceLoaded_0((Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 *)NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB (GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled, ___hresult1);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorDelegate__ctor_mECC9E610B627883AB51C76036190700A36FA0BC0 (GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::Invoke(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorDelegate_Invoke_m29FAF138D125742F0B5CCE0706CCEC04B4A3E47F (GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0, ___hresult1);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0, ___hresult1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___hresult1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
					else
						GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0, ___hresult1);
					else
						VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0, ___hresult1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___error0) - 1), ___hresult1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::BeginInvoke(System.String,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GestureErrorDelegate_BeginInvoke_m28A68354898DBB3505DA67BB468AF8FD9C682700 (GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB * __this, String_t* ___error0, int32_t ___hresult1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureErrorDelegate_BeginInvoke_m28A68354898DBB3505DA67BB468AF8FD9C682700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___error0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___hresult1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorDelegate_EndInvoke_m0FEA6B4180784CD1E47FEA932702F8C4C0198D45 (GestureErrorDelegate_tCE297E19EC9F244992FDFD3FF8D02A0A8CA606AB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 (HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate__ctor_m379BC59589C1008F8361555FED57F2D2E2A8E911 (HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_Invoke_m6DB0912FFE4F853A5591D2E15983E64501E1AE63 (HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___headRay1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoldCanceledEventDelegate_BeginInvoke_mC14761BD887C179CE2F024788DE94A75721F74B1 (HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldCanceledEventDelegate_BeginInvoke_mC14761BD887C179CE2F024788DE94A75721F74B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_EndInvoke_m61D43CF23D191CE97D3B859CD28238DB4156DEF3 (HoldCanceledEventDelegate_t0F7B338A059E418F98EC91DD8434B84FCC2F7605 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE (HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate__ctor_m524C44BD8C5AB23A9B75951F45F638E1D70E3874 (HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_Invoke_m2892AA940C90A8C7A2F45FB4DDCA4D0E1E18040F (HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___headRay1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoldCompletedEventDelegate_BeginInvoke_mC7AF12D5AB19CE94E147E96FFF126E7379A130E4 (HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldCompletedEventDelegate_BeginInvoke_mC7AF12D5AB19CE94E147E96FFF126E7379A130E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_EndInvoke_m9D69254220030C54506ABE844402958C58A4AD3C (HoldCompletedEventDelegate_t5539FFFE90090CE712CFE9F6B3E169564C45ADAE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE (HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldStartedEventDelegate__ctor_m31A6641B81666E5C59276DA876EBED7585A296BB (HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_Invoke_m91C0417B1524FAF446B2FE9DC578A896459FBB7A (HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___headRay1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoldStartedEventDelegate_BeginInvoke_m13F5779A1EE02390C83DE5EC96CF89931661AF87 (HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldStartedEventDelegate_BeginInvoke_m13F5779A1EE02390C83DE5EC96CF89931661AF87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_EndInvoke_m6F0EA678D49F2C9A0F1EB4C6798D6A1A36F7F919 (HoldStartedEventDelegate_tCD6E4B54B6B11E0077337A5C96DFC1D5CFE321EE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 (ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate__ctor_mDBFECE13814A9ED6864A08DA269D61EE61962748 (ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_Invoke_m63D11490E659EC254EB7478D896C04FAED85DD03 (ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManipulationCanceledEventDelegate_BeginInvoke_m19D3FB1012A0A2D298E74FF4F1B64332F2AA7B29 (ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationCanceledEventDelegate_BeginInvoke_m19D3FB1012A0A2D298E74FF4F1B64332F2AA7B29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_EndInvoke_mE0A32E9D6D10A2B1C78EC654AD9BCF9923F007F3 (ManipulationCanceledEventDelegate_t70670A29FE598BA00B21BD83E43FC4A35E1B7B91 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 (ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate__ctor_m8CD03ECCE603366799A1DEDECB2956162C1F8199 (ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_Invoke_m0AA2877AD273C0835CFF9F279F76ECAB3494FA97 (ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManipulationCompletedEventDelegate_BeginInvoke_m18542AA8F75F82556397541068709FB07A1ACBA9 (ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationCompletedEventDelegate_BeginInvoke_m18542AA8F75F82556397541068709FB07A1ACBA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_EndInvoke_m00496349B6921F19A4E67C9E56B091F320C5E19B (ManipulationCompletedEventDelegate_t281C7CDEB6A9172D9A1C560E9A0FBD70AFB249E8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 (ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate__ctor_mE34A7A027F73388D22D96A2A5A66C9F8858A86A7 (ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_Invoke_m7D26FFA7AD5D5992B3EA4211078A3D642F2899FC (ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManipulationStartedEventDelegate_BeginInvoke_mE49642EDCB93FCA23EFD02E3538F9C69111E2309 (ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationStartedEventDelegate_BeginInvoke_mE49642EDCB93FCA23EFD02E3538F9C69111E2309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_EndInvoke_m7CAF928F41ABFE0247ABD92736AC482755976D26 (ManipulationStartedEventDelegate_t4140A1FF7A662E6B19A72F3E5E44689AA9DA7394 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE (ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate__ctor_m5A1C6B0F4AA703D796B7334102296D7D244A1909 (ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_Invoke_m137872B697BCACE1D702C78D33044E124EC6FB96 (ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManipulationUpdatedEventDelegate_BeginInvoke_m5F876963B67928C563E8A46477A25EC58264E6F4 (ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cumulativeDelta1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationUpdatedEventDelegate_BeginInvoke_m5F876963B67928C563E8A46477A25EC58264E6F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_EndInvoke_m6AA741E07990A222412AEB15B03B485430BE4414 (ManipulationUpdatedEventDelegate_tA8EA0E13060179EC925C442CD9C5F56AD0F326CE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 (NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate__ctor_mAB7F2118D4187379633935DF12A9DC47DF78D657 (NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_Invoke_mCE541BF5809E4A7FA6D2CF0B583046BF428A0B87 (NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavigationCanceledEventDelegate_BeginInvoke_m61330AB2F9F177783CDE64B21B946A5B4D2617C1 (NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationCanceledEventDelegate_BeginInvoke_m61330AB2F9F177783CDE64B21B946A5B4D2617C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_EndInvoke_m7D9094FFAA074264B3356A4FB8F3045550BF8367 (NavigationCanceledEventDelegate_t34C146AA9FB287C8A05F323FE1689FF09E4E2520 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 (NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate__ctor_mF1BF1807EC721F0B09F4B94AF5B72E85CC369FED (NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_Invoke_m6CE109DE564FCB0381FC886496060C343D0AF195 (NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavigationCompletedEventDelegate_BeginInvoke_m9A632DD52B3B9FCD4F53EE6799702BA2436FBCD1 (NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationCompletedEventDelegate_BeginInvoke_m9A632DD52B3B9FCD4F53EE6799702BA2436FBCD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_EndInvoke_mD829B5F1CA25BA62B537A0828C925822FF3B2A3C (NavigationCompletedEventDelegate_t2F274D4C7721D192361EF0973C20EA0CABCD4961 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD (NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate__ctor_mF4057D7EA2E7D15FF0A277E99C6C7C66C0233F7C (NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_Invoke_mD386AB8CB29AD2AFDD26E77CBB092871B93E3FB7 (NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavigationStartedEventDelegate_BeginInvoke_m6A278B39F2F4D65F3F66E8891638F53FC2142ACD (NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationStartedEventDelegate_BeginInvoke_m6A278B39F2F4D65F3F66E8891638F53FC2142ACD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_EndInvoke_m94B3D8D7F5A7DA12C17C8A2013F98949335CD5EE (NavigationStartedEventDelegate_tDE5EF67DDC7711634F427A96DD5C26F8E45B59AD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 (NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate__ctor_m60D528071332697E4189CAD6FF7D65F9296AF95F (NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_Invoke_m1EA2BE63DD559C50A26DA24D434438ADB502685C (NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavigationUpdatedEventDelegate_BeginInvoke_m6764939E5ED0BA98D640E875334C4F6B01F2E9D6 (NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 * __this, int32_t ___source0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normalizedOffset1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationUpdatedEventDelegate_BeginInvoke_m6764939E5ED0BA98D640E875334C4F6B01F2E9D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_EndInvoke_mB01429040DDC2A7F18D5A4BD5D88C85C3CA1ADF6 (NavigationUpdatedEventDelegate_tA6322655061B7C12E3838FF450B89CF411935443 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB (RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate__ctor_m4E1AEEDAFD534A10FD98283CFB80CA9789317C40 (RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_Invoke_m5C85329A7841A460C64A5B5C59CBC2C8A9003DBD (RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___headRay1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecognitionEndedEventDelegate_BeginInvoke_m6C38179BDD600EE69BF55EC37FE265853545AAF7 (RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionEndedEventDelegate_BeginInvoke_m6C38179BDD600EE69BF55EC37FE265853545AAF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_EndInvoke_mF05C2CD80DB65E30B8253A66E28A332F09984A53 (RecognitionEndedEventDelegate_t927300C5387B17783B1DC70AD972F9288C0DBCFB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F (RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate__ctor_mD957B0505C68DDD14ACFB96495481378819424BF (RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_Invoke_m0677BC056B588F99941431C379242938D2239845 (RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___headRay1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecognitionStartedEventDelegate_BeginInvoke_mBFB4837369897AD1E7667ACD5AF4009544F08107 (RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F * __this, int32_t ___source0, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionStartedEventDelegate_BeginInvoke_mBFB4837369897AD1E7667ACD5AF4009544F08107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_EndInvoke_m056691539B120566A3904D33D1F871A090B836A8 (RecognitionStartedEventDelegate_t1B8EA86927E376B22128D957B136E127E51B713F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 (TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 * __this, int32_t ___source0, int32_t ___tapCount1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___tapCount1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TappedEventDelegate__ctor_m9EAA9F26F53894336B724925BCF4CD4AC9615D57 (TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TappedEventDelegate_Invoke_m628C5CE8F7CFAED239186F7FEC7BCCD6D1368616 (TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 * __this, int32_t ___source0, int32_t ___tapCount1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___tapCount1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___tapCount1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___tapCount1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___tapCount1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(targetMethod, targetThis, ___source0, ___tapCount1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___tapCount1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___tapCount1, ___headRay2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___source0) - 1), ___tapCount1, ___headRay2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___tapCount1, ___headRay2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TappedEventDelegate_BeginInvoke_mB423C846FC95EAD917E09F7E15E5D4E9ECBF882C (TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 * __this, int32_t ___source0, int32_t ___tapCount1, Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___headRay2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TappedEventDelegate_BeginInvoke_mB423C846FC95EAD917E09F7E15E5D4E9ECBF882C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_tFA7B1379595E810EB716FE21E0AE526A0C326A61_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___tapCount1);
	__d_args[2] = Box(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TappedEventDelegate_EndInvoke_mEB6EA31467A0E61AFDE585A8637E64A136736E12 (TappedEventDelegate_t3A14ECF4922B28C4CF2CF8401FBD3EDACC007154 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 (SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___state0);

}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceEventHandler__ctor_m827F118FA7E35D170A4300091AC40B62DF0106E8 (SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceEventHandler_Invoke_m8D68FBCCA39BA64C781AB92CAF10211DA31328B1 (SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  >::Invoke(targetMethod, targetThis, ___state0);
					else
						GenericVirtActionInvoker1< InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  >::Invoke(targetMethod, targetThis, ___state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0);
					else
						VirtActionInvoker1< InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___state0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SourceEventHandler_BeginInvoke_mD2A4ED7313E53DA353AE318F8AE267AB726CB330 (SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___state0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SourceEventHandler_BeginInvoke_mD2A4ED7313E53DA353AE318F8AE267AB726CB330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490_il2cpp_TypeInfo_var, &___state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceEventHandler_EndInvoke_mFD1CBCD8E9429681D0F6F7FE7A2EE3A66F0F3802 (SourceEventHandler_tDF13DBC529474E2C9541DD5E83BA644165ADE586 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceChangedDelegate__ctor_mA24E54AA1F49692400EFFE44C75E364E2023BFCD (SurfaceChangedDelegate_t99D796E4D8B27B4ED884282C83AE3C7C09966030 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::Invoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_Invoke_m2AF4C235217099CB704A2FE020B6D62C5AC19621 (SurfaceChangedDelegate_t99D796E4D8B27B4ED884282C83AE3C7C09966030 * __this, SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066  ___surfaceId0, int32_t ___changeType1, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds2, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___updateTime3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066 , int32_t, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 , DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066 , int32_t, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 , DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066 , int32_t, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 , DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066 , int32_t, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 , DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  >::Invoke(targetMethod, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
					else
						GenericVirtActionInvoker4< SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066 , int32_t, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 , DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  >::Invoke(targetMethod, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066 , int32_t, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 , DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
					else
						VirtActionInvoker4< SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066 , int32_t, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 , DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 , DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___surfaceId0) - 1), ___changeType1, ___bounds2, ___updateTime3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066 , int32_t, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 , DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurfaceChangedDelegate_BeginInvoke_m9B9FF4BFAEDD7A779B144CFB2F04843C229A7938 (SurfaceChangedDelegate_t99D796E4D8B27B4ED884282C83AE3C7C09966030 * __this, SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066  ___surfaceId0, int32_t ___changeType1, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds2, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___updateTime3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceChangedDelegate_BeginInvoke_m9B9FF4BFAEDD7A779B144CFB2F04843C229A7938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(SurfaceId_tB78D75642BEF3AE3174A2E3E37CCB3D5FF1C5066_il2cpp_TypeInfo_var, &___surfaceId0);
	__d_args[1] = Box(SurfaceChange_t5104ED7EA27E3D8F47AB9952124740504996005C_il2cpp_TypeInfo_var, &___changeType1);
	__d_args[2] = Box(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37_il2cpp_TypeInfo_var, &___bounds2);
	__d_args[3] = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &___updateTime3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_EndInvoke_m28D881273041A3FC767472A1B062B18E5E198716 (SurfaceChangedDelegate_t99D796E4D8B27B4ED884282C83AE3C7C09966030 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate__ctor_m991FDB900B0CA2BC7DCC1C9B3A3A44D5053E460D (SurfaceDataReadyDelegate_tC004767784492E456A3434A621DE6FC0DF8E502A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::Invoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_Invoke_mA7BCE35E826D7A60EEC9D03DDE38FBD5C3702B0D (SurfaceDataReadyDelegate_tC004767784492E456A3434A621DE6FC0DF8E502A * __this, SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84 , bool, float >::Invoke(targetMethod, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
					else
						GenericVirtActionInvoker3< SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84 , bool, float >::Invoke(targetMethod, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
					else
						VirtActionInvoker3< SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___bakedData0) - 1), ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::BeginInvoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurfaceDataReadyDelegate_BeginInvoke_m9CBC9D88B5D3DE8A5015518B22DC3E8A51EE70BA (SurfaceDataReadyDelegate_tC004767784492E456A3434A621DE6FC0DF8E502A * __this, SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceDataReadyDelegate_BeginInvoke_m9CBC9D88B5D3DE8A5015518B22DC3E8A51EE70BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(SurfaceData_tF43CEF57C8E1EBEF6DBF3DA1BCA7EE8437441A84_il2cpp_TypeInfo_var, &___bakedData0);
	__d_args[1] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___outputWritten1);
	__d_args[2] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___elapsedBakeTimeSeconds2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_EndInvoke_m070BA289B47EB096B74A5405B29E637BE8ACB874 (SurfaceDataReadyDelegate_tC004767784492E456A3434A621DE6FC0DF8E502A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate__ctor_mDDFDE20759092413F77487115C931B52D86F7DC7 (OnTrackingChangedDelegate_t3297C23267B6E94FCD1A2723D6022B62DC787DC1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::Invoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_Invoke_m81CBD93EE6C97D1BD1B62016950CD74CC85E0290 (OnTrackingChangedDelegate_t3297C23267B6E94FCD1A2723D6022B62DC787DC1 * __this, WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___worldAnchor0, ___located1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___worldAnchor0, ___located1);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___worldAnchor0, ___located1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___located1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
					else
						GenericVirtActionInvoker2< WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___worldAnchor0, ___located1);
					else
						VirtActionInvoker2< WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___worldAnchor0, ___located1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___worldAnchor0) - 1), ___located1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___worldAnchor0, ___located1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTrackingChangedDelegate_BeginInvoke_m7503CDE6FBD0436F6CB028718EE1E1F5BF9ADD3C (OnTrackingChangedDelegate_t3297C23267B6E94FCD1A2723D6022B62DC787DC1 * __this, WorldAnchor_t8F31006587F114AFA7F225982468AA8C5617E9EE * ___worldAnchor0, bool ___located1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnTrackingChangedDelegate_BeginInvoke_m7503CDE6FBD0436F6CB028718EE1E1F5BF9ADD3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___worldAnchor0;
	__d_args[1] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___located1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_EndInvoke_mDFD3716C95C7FAF741430B60B36E19341A73C048 (OnTrackingChangedDelegate_t3297C23267B6E94FCD1A2723D6022B62DC787DC1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetAsyncDelegate_t9B7E3154444245DE2C2C70E1D71F218566F4CB4E (GetAsyncDelegate_t9B7E3154444245DE2C2C70E1D71F218566F4CB4E * __this, WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * ___store0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___store0' to native representation
	WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshaled_pinvoke ____store0_marshaled = {};
	if (___store0 != NULL)
	{
		WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshal_pinvoke(*___store0, ____store0_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___store0 != NULL ? (&____store0_marshaled) : NULL);

	// Marshaling of parameter '___store0' back from native representation
	if (___store0 != NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("A parameterless constructor is required for type 'UnityEngine.XR.WSA.Persistence.WorldAnchorStore'."), NULL);
		WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshal_pinvoke_back(____store0_marshaled, *___store0);
	}

	// Marshaling cleanup of parameter '___store0' native representation
	if ((&____store0_marshaled) != NULL)
	{
		WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786_marshal_pinvoke_cleanup(____store0_marshaled);
	}

}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAsyncDelegate__ctor_m0B22CF82D1E2D59726889AD8BD0CDCC14032B431 (GetAsyncDelegate_t9B7E3154444245DE2C2C70E1D71F218566F4CB4E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::Invoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAsyncDelegate_Invoke_m5E21AAA81E178D82A0841FF35ADA4AF06E760DA1 (GetAsyncDelegate_t9B7E3154444245DE2C2C70E1D71F218566F4CB4E * __this, WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * ___store0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___store0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___store0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___store0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___store0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___store0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * >::Invoke(targetMethod, targetThis, ___store0);
					else
						GenericVirtActionInvoker1< WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * >::Invoke(targetMethod, targetThis, ___store0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___store0);
					else
						VirtActionInvoker1< WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___store0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___store0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___store0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::BeginInvoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetAsyncDelegate_BeginInvoke_m8AAF32A6959B6E5D36E0F733F3B58378268666E9 (GetAsyncDelegate_t9B7E3154444245DE2C2C70E1D71F218566F4CB4E * __this, WorldAnchorStore_t9BE8CC97DDE64D7445EEDABF9FA2D15B5EE14786 * ___store0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___store0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAsyncDelegate_EndInvoke_mF30BF1B14D3685D5BCD7C95C09CB84E96A94BFEB (GetAsyncDelegate_t9B7E3154444245DE2C2C70E1D71F218566F4CB4E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DeserializationCompleteDelegate_t019A334F65CA223A93A00CAD4BDC42E26AD004EC (DeserializationCompleteDelegate_t019A334F65CA223A93A00CAD4BDC42E26AD004EC * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * ___deserializedTransferBatch1, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___deserializedTransferBatch1' to native representation
	WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshaled_pinvoke ____deserializedTransferBatch1_marshaled = {};
	if (___deserializedTransferBatch1 != NULL)
	{
		WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshal_pinvoke(*___deserializedTransferBatch1, ____deserializedTransferBatch1_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___completionReason0, ___deserializedTransferBatch1 != NULL ? (&____deserializedTransferBatch1_marshaled) : NULL);

	// Marshaling of parameter '___deserializedTransferBatch1' back from native representation
	if (___deserializedTransferBatch1 != NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_missing_method_exception("A parameterless constructor is required for type 'UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch'."), NULL);
		WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshal_pinvoke_back(____deserializedTransferBatch1_marshaled, *___deserializedTransferBatch1);
	}

	// Marshaling cleanup of parameter '___deserializedTransferBatch1' native representation
	if ((&____deserializedTransferBatch1_marshaled) != NULL)
	{
		WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700_marshal_pinvoke_cleanup(____deserializedTransferBatch1_marshaled);
	}

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate__ctor_m067F1343AF7C804784DC3491627293779D6464F1 (DeserializationCompleteDelegate_t019A334F65CA223A93A00CAD4BDC42E26AD004EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_Invoke_mDB09A83D95C212B49AE8D53FA0BC402C31D2474F (DeserializationCompleteDelegate_t019A334F65CA223A93A00CAD4BDC42E26AD004EC * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * ___deserializedTransferBatch1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___completionReason0, ___deserializedTransferBatch1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___completionReason0, ___deserializedTransferBatch1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * >::Invoke(targetMethod, targetThis, ___completionReason0, ___deserializedTransferBatch1);
					else
						GenericVirtActionInvoker2< int32_t, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * >::Invoke(targetMethod, targetThis, ___completionReason0, ___deserializedTransferBatch1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___completionReason0, ___deserializedTransferBatch1);
					else
						VirtActionInvoker2< int32_t, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___completionReason0, ___deserializedTransferBatch1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___completionReason0) - 1), ___deserializedTransferBatch1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::BeginInvoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeserializationCompleteDelegate_BeginInvoke_mB7795FE27520A0D927EAF09C6871D9F2E3723DD2 (DeserializationCompleteDelegate_t019A334F65CA223A93A00CAD4BDC42E26AD004EC * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t18EDF9F58C71F836AE48A19E5D0F7053D1E83700 * ___deserializedTransferBatch1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeserializationCompleteDelegate_BeginInvoke_mB7795FE27520A0D927EAF09C6871D9F2E3723DD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(SerializationCompletionReason_t7E94C94E7ED2DF5A5CEC77366C08E7EEE4FEE390_il2cpp_TypeInfo_var, &___completionReason0);
	__d_args[1] = ___deserializedTransferBatch1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_EndInvoke_m7089A7E9DD26B1A4932976492E4434ECC5204F84 (DeserializationCompleteDelegate_t019A334F65CA223A93A00CAD4BDC42E26AD004EC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SerializationCompleteDelegate_t5692DCDB8E68933ADB6793AD978460B7853526A1 (SerializationCompleteDelegate_t5692DCDB8E68933ADB6793AD978460B7853526A1 * __this, int32_t ___completionReason0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___completionReason0);

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCompleteDelegate__ctor_mC82FFF459E8E24D6FF30DBB866326BA86B1EF70B (SerializationCompleteDelegate_t5692DCDB8E68933ADB6793AD978460B7853526A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_Invoke_mA21D347587A56CD81719D9B338D2C74E430358E3 (SerializationCompleteDelegate_t5692DCDB8E68933ADB6793AD978460B7853526A1 * __this, int32_t ___completionReason0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___completionReason0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___completionReason0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___completionReason0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___completionReason0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___completionReason0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___completionReason0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___completionReason0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::BeginInvoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationCompleteDelegate_BeginInvoke_m6044563BB153F54E9896D7A5D1D1C3D1BD8E6889 (SerializationCompleteDelegate_t5692DCDB8E68933ADB6793AD978460B7853526A1 * __this, int32_t ___completionReason0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializationCompleteDelegate_BeginInvoke_m6044563BB153F54E9896D7A5D1D1C3D1BD8E6889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SerializationCompletionReason_t7E94C94E7ED2DF5A5CEC77366C08E7EEE4FEE390_il2cpp_TypeInfo_var, &___completionReason0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_EndInvoke_mC7F23F1CA5C6649F71D406A91382A8CE95E886C6 (SerializationCompleteDelegate_t5692DCDB8E68933ADB6793AD978460B7853526A1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SerializationDataAvailableDelegate_tF621DFE3ADA62C9005BB32FA1B93C755E4F80D3E (SerializationDataAvailableDelegate_tF621DFE3ADA62C9005BB32FA1B93C755E4F80D3E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___data0' to native representation
	uint8_t* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<uint8_t*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate__ctor_m5361D5BCA76F2D18AFB4B4F355214B457060604B (SerializationDataAvailableDelegate_tF621DFE3ADA62C9005BB32FA1B93C755E4F80D3E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_Invoke_mFCD741F24795905F3376E95E03E51B361B8D0803 (SerializationDataAvailableDelegate_tF621DFE3ADA62C9005BB32FA1B93C755E4F80D3E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___data0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationDataAvailableDelegate_BeginInvoke_mA405CA22E3EC50BED74AB2066D55031A0E9875DA (SerializationDataAvailableDelegate_tF621DFE3ADA62C9005BB32FA1B93C755E4F80D3E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_EndInvoke_m5DFDE314D9F6A6D322A9136BF8FE833865E04211 (SerializationDataAvailableDelegate_tF621DFE3ADA62C9005BB32FA1B93C755E4F80D3E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0 (OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0 * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___oldState0, ___newState1);

}
// System.Void UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate__ctor_m5AAF1C814AA5A98B46AAD63F138A928367CD53D3 (OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::Invoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_Invoke_mE1EDD07F8467F81A64AB72563B022E5F31741485 (OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0 * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___oldState0, ___newState1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___oldState0, ___newState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___oldState0, ___newState1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___oldState0, ___newState1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___oldState0, ___newState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___oldState0, ___newState1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___oldState0, ___newState1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___oldState0) - 1), ___newState1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___oldState0, ___newState1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPositionalLocatorStateChangedDelegate_BeginInvoke_m4140021818D7DFB6883E61DB3CB6D5EAEA914384 (OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0 * __this, int32_t ___oldState0, int32_t ___newState1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPositionalLocatorStateChangedDelegate_BeginInvoke_m4140021818D7DFB6883E61DB3CB6D5EAEA914384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(PositionalLocatorState_t4E1FD40D33A693B62B75C13B5BD5F7F17458E214_il2cpp_TypeInfo_var, &___oldState0);
	__d_args[1] = Box(PositionalLocatorState_t4E1FD40D33A693B62B75C13B5BD5F7F17458E214_il2cpp_TypeInfo_var, &___newState1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_EndInvoke_m251B13557C98C1BABDC633AF7AC5E996572AA6CC (OnPositionalLocatorStateChangedDelegate_t2373856ADB1AC7EC9AE6F78534AF85279C7CA9A0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_error_m0FB476E259CEF15C65C404683D30315F4D8051D0_inline (GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_hresult_m16FCEF473196E4696FEC1A5040F17EC933902BFE_inline (GestureErrorEventArgs_t5AB397E45943143D7FDA66A447E9C96C0327B4E8 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3ChresultU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs_set_state_m84B944C6B51D1AAC246CC4D798395197A0C48EC5_inline (InteractionSourceDetectedEventArgs_t843BAE53B8D50DFFF5BB9CF74A9DFEB17398D075 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs_set_state_m3E53FF61269AD2AA6773360E52127A246A66EEB9_inline (InteractionSourceLostEventArgs_t94F67CB0205F635DCE70B64878BE9473404E774A * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_state_m9DF8F102DFF74150EEB516BD3AA0C6CC96CFA690_inline (InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_pressType_m6E5D0736A00CA78BFB4067049343150023F065C4_inline (InteractionSourcePressedEventArgs_t2534B426097237E1EAE3CBA299F164904E946CE1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_state_m8E10675E8542DE81FE656A9FEAEB12005F410050_inline (InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_pressType_mDA36E67CA1CBA27D9860A0E89762F8CE33D87330_inline (InteractionSourceReleasedEventArgs_tBF035EF116952873C1CA0CD62B0B40ED75E7FD04 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs_set_state_mA427B778777E1F36500F50051764C51214D5F971_inline (InteractionSourceUpdatedEventArgs_t7BF5C662DE36186C2274CD065B5C7E804EF4384B * __this, InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t9559A3139C07FF2B802C56821FC285AE453AE490  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m272F5501C6E97F8FE6DE7D35442F80620AEAB7FC_gshared_inline (Nullable_1_tE25DB3CB2047CF518C3FE069EEB1C7C878CF1E65 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
