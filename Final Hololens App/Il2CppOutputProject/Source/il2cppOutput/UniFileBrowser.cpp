#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// CompilerGenerated.$adaptor$__UniFileBrowser$callable5$1045_39__$Comparison$1
struct U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_t58F0D3452CE02EB397BEA13641B6D66293F2D1FE;
// CompilerGenerated.$adaptor$__UniFileBrowser_closeWindowFunction$callable2$172_35__$WindowFunction$0
struct U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_t9CCB352A2B8746FF2870821BE78AC8E08C870856;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GUISettings
struct GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UniFileBrowser
struct UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// CompilerGenerated.__UniFileBrowser$callable5$1045_39__
struct __UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85;
// CompilerGenerated.__UniFileBrowser_closeWindowFunction$callable2$172_35__
struct __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7;
// CompilerGenerated.__UniFileBrowser_delegate$callable0$169_24__
struct __UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3;
// CompilerGenerated.__UniFileBrowser_fileFunction$callable4$201_28__
struct __UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192;
// CompilerGenerated.__UniFileBrowser_folderFunction$callable3$200_30__
struct __UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06;
// CompilerGenerated.__UniFileBrowser_multiDelegate$callable1$170_29__
struct __UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E;
// UniFileBrowser/$DeleteFile$46
struct U24DeleteFileU2446_t771A02EE85189F947F984381B8F1205E04BBCA6C;
// UniFileBrowser/$SelectFile$52
struct U24SelectFileU2452_t59507280F0FFEE23152D862BA29D307EE37B3018;
// UniFileBrowser/$WaitForFrame$43
struct U24WaitForFrameU2443_tEB3ED2D8FBA19122142DE8C506A78471E97FD0DD;
// UniFileBrowser/FileData
struct FileData_t4516F881D5D111630892E59176011C41763C9922;
// UniFileBrowser/$DeleteFile$46/$
struct U24_tC71DB695A6A6AE1094EF6480C5E5CE674D46E27D;
// UniFileBrowser/$SelectFile$52/$
struct U24_t86F66B546C8692DE25AF9BE2AEB9D6540B4EC581;
// UniFileBrowser/$WaitForFrame$43/$
struct U24_tD4B10AB9517274557C79311963549E5DE4BB0326;
// System.Comparison`1<UniFileBrowser/FileData>
struct Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808;
// System.Comparison`1<System.Object>
struct Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80;
// Boo.Lang.GenericGeneratorEnumerator`1<System.Object>
struct GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881;
// Boo.Lang.GenericGenerator`1<System.Object>
struct GenericGenerator_1_t943B00DDD0A2C272B3F9F8DDC20A1C1067EF2733;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.List`1<UniFileBrowser/FileData>
struct List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UniFileBrowser/FileData[]
struct FileDataU5BU5D_t943FDC0D7EC1A0FD51A45C564CC3AA56BF550E22;
// System.IO.FileInfo
struct FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9;
// System.IO.FileInfo[]
struct FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B;
// System.IO.FileSystemInfo
struct FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C;
// UnityEngine.GUISkin
struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Texture[]
struct TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150;
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileData_t4516F881D5D111630892E59176011C41763C9922_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U24DeleteFileU2446_t771A02EE85189F947F984381B8F1205E04BBCA6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U24SelectFileU2452_t59507280F0FFEE23152D862BA29D307EE37B3018_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U24WaitForFrameU2443_tEB3ED2D8FBA19122142DE8C506A78471E97FD0DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U24_t86F66B546C8692DE25AF9BE2AEB9D6540B4EC581_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U24_tC71DB695A6A6AE1094EF6480C5E5CE674D46E27D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U24_tD4B10AB9517274557C79311963549E5DE4BB0326_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_t58F0D3452CE02EB397BEA13641B6D66293F2D1FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_t9CCB352A2B8746FF2870821BE78AC8E08C870856_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* __UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral037519BB81632F2A1D5017EA89FC025A2E04CC22;
IL2CPP_EXTERN_C String_t* _stringLiteral04114E3283B1AFEA53A723D1B01F2CD54D738FD9;
IL2CPP_EXTERN_C String_t* _stringLiteral045EFDEA2D7E2CCB4B8D11E2D5A76A000CF3D853;
IL2CPP_EXTERN_C String_t* _stringLiteral04EA945EF4823FCED8B9EDD2384A3678E630F49C;
IL2CPP_EXTERN_C String_t* _stringLiteral05CF9CF5853B675491570E9D20951E373F208902;
IL2CPP_EXTERN_C String_t* _stringLiteral08D8EC135FBF96B66F5DF4F04584A7E4D892DAE0;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral0C971F4B026ABE72C51B2AFA63D33D1D53167DD0;
IL2CPP_EXTERN_C String_t* _stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29;
IL2CPP_EXTERN_C String_t* _stringLiteral1844373BB9BF0B4329F7C551C04D2F7C8E35E0A7;
IL2CPP_EXTERN_C String_t* _stringLiteral19031CB3C050C644F250AE0037F4E69F1D5923E2;
IL2CPP_EXTERN_C String_t* _stringLiteral1AE348EAFA097AB898941EAFE912D711A407DA10;
IL2CPP_EXTERN_C String_t* _stringLiteral1D7CB2951C8BC338BD373409997F0F1A1C03B5E9;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2D60207EEC173E2C3DD4AD0AA80DD6D240946B03;
IL2CPP_EXTERN_C String_t* _stringLiteral31E8E4ACB2EDC39B158FBA91185DE1333306F668;
IL2CPP_EXTERN_C String_t* _stringLiteral338854CB87D7CBEA2844E4370496CD9A285DDA90;
IL2CPP_EXTERN_C String_t* _stringLiteral36616AC56424A742ECA312B0217A7585FB8BBD56;
IL2CPP_EXTERN_C String_t* _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821;
IL2CPP_EXTERN_C String_t* _stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7;
IL2CPP_EXTERN_C String_t* _stringLiteral43CF2B03BAD4C8E04EDC5E2EB91211C3DF0D32F3;
IL2CPP_EXTERN_C String_t* _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B;
IL2CPP_EXTERN_C String_t* _stringLiteral4BF33A987AF31E188877D5BB2C480A259B04C42C;
IL2CPP_EXTERN_C String_t* _stringLiteral4CE5824710B48AA9AF19A875B80C8A6FDC6D42EE;
IL2CPP_EXTERN_C String_t* _stringLiteral4E8C8B0D6FA29409F84D56DD107D6CC736115269;
IL2CPP_EXTERN_C String_t* _stringLiteral6B04ED8F4E6D9C8004F698426CD954DD3089B951;
IL2CPP_EXTERN_C String_t* _stringLiteral6B1C510552368159C1FBB66B6006E4DDB9E4476C;
IL2CPP_EXTERN_C String_t* _stringLiteral795A897BB764A15A2C7411E1A68DC2EC311C6459;
IL2CPP_EXTERN_C String_t* _stringLiteral7E1D36471C1D22EF9C82982252711098F0296F24;
IL2CPP_EXTERN_C String_t* _stringLiteral824E903B1E7FC13229B28EFC49EE5B6F62A6225E;
IL2CPP_EXTERN_C String_t* _stringLiteral834774B30FFE5301DE63BE052354245D80A0515E;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8772B13BA24D42A037E851E9326A5566C9D37207;
IL2CPP_EXTERN_C String_t* _stringLiteral8970F3C3981E59CC745B19076894EB566A24867F;
IL2CPP_EXTERN_C String_t* _stringLiteral89A3B1DEA0F0DECFF34BA79CB6DFC7716C93DFFD;
IL2CPP_EXTERN_C String_t* _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA;
IL2CPP_EXTERN_C String_t* _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
IL2CPP_EXTERN_C String_t* _stringLiteralA8941B7955D0CF0C7F143A3BD6B23BF334955614;
IL2CPP_EXTERN_C String_t* _stringLiteralB3DD414CD92C5C45955E9BDB2A370E7C18133081;
IL2CPP_EXTERN_C String_t* _stringLiteralC06E5D362CB79AEE67E2F96B2860E9A1582FDFEF;
IL2CPP_EXTERN_C String_t* _stringLiteralC0D634154F33FF44B27EB46943B382AC0C7CFE61;
IL2CPP_EXTERN_C String_t* _stringLiteralC6E9A3259791DD065E3527E3A39F1F4874D24EF1;
IL2CPP_EXTERN_C String_t* _stringLiteralCE863626383155D02291456632E72C0FBEC22C3C;
IL2CPP_EXTERN_C String_t* _stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA;
IL2CPP_EXTERN_C String_t* _stringLiteralD2E3B1F9789F94E0505B9EB225EFF832DE39EA5A;
IL2CPP_EXTERN_C String_t* _stringLiteralD3677C608C6E71DA6FE9707A6DCCDD1358F8C97A;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralDD851AFDF0A39B82A08085A7807CE1180BD964D4;
IL2CPP_EXTERN_C String_t* _stringLiteralE4DE818995890E5DE8418D5CEA1C6E5B2C3ED5B4;
IL2CPP_EXTERN_C String_t* _stringLiteralE7B5F3E7696C1FB8AA658FEF172523BC86269EEB;
IL2CPP_EXTERN_C String_t* _stringLiteralF1FE63F4DB1CBC8CA33219217727E8ECDD9A2105;
IL2CPP_EXTERN_C String_t* _stringLiteralF3D711BA856837A5D3C34CA2103E03C173D6F4C7;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF424587B8F3F9836269A596D5C2CCD2F666B5798;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_mB2E8AEFEC41B1ECE4C66569970669C6BAD4CD067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericGeneratorEnumerator_1__ctor_m14B85998E8B9AE93185D05452018CFA9DCF1B95C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericGenerator_1__ctor_mB3036526E77DD2D509F75DD6658EB28DE238DDB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8D2932C79F29162CAA14572A4A7F9A67E7F33F7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD1BAFFFD7D448CF650E3B37D6CB19A2C7A7DC8FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m785A6161436EF2BE5AB238713235497B8BC0A54F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m1CFBBFA0E8E7215EC287CF76CD2FC91956ED237F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_m1E5577BF004DE03902798CEF8774918EA824DB3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m859E46C87C2FE6DA66A1D93BB3DD45EF70D9BE1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC74928B06836BB87CC9BCB7845BECCB66E29AE4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_Invoke_mE4A9D074943C978E5EC0834DDEAA70D41E422FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_Invoke_m0AFAE9AD08202F6E3E79BED84E74DD78049607A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniFileBrowser_DrawFileWindow_m8E02C2FE90713FF3DC4487298E10FE1BF58AA6D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniFileBrowser_MessageWindow_m8675F0C90FBECDC7D482967B3CC793CA560FE7AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniFileBrowser_U24GetCurrentFileInfoU24closureU2425_mE67B0AC569C48B93F9837B28913E28F943C769C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniFileBrowser_U24GetCurrentFileInfoU24closureU2426_m58E5B1B5D977AA6E3DB4E0EB23825AA2C5EAB21C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniFileBrowser_U24GetCurrentFileInfoU24closureU2429_m50D02F7114C5D5851C73106783CB082612594CD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniFileBrowser_U24GetCurrentFileInfoU24closureU2430_mAB761DBDB0A08556AAB56735B4C6F285682F9CAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FileData_t4516F881D5D111630892E59176011C41763C9922_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t U24DeleteFileU2446_GetEnumerator_m8DF8D0DBC22DC20BDE9FFFA4CAD2558D1770469D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U24DeleteFileU2446__ctor_mE7C74E0C71B78ABD18D9CAE15C35C1F930548B51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U24SelectFileU2452_GetEnumerator_mDB677D664CC1E28898123F9CAD2E1160AF3E485A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U24SelectFileU2452__ctor_mD2B2C0216B044259FACC6F28FC455B06C7504A72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U24WaitForFrameU2443_GetEnumerator_m1E02328736A870F8905AD57EC41D3924529CA827_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U24WaitForFrameU2443__ctor_m7C69D489D152D3F7279C43CDF4A9F14BF4B50FFF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U24_MoveNext_m1ED6E706D35D417563C7325D7E70A2156ABC6331_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U24_MoveNext_m925A765204E7383F1FD521FD99357A6E27F50A7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U24_MoveNext_mD346E9985A789D2D9A6D1F10194D8A05FFF70487_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U24__ctor_m17D35BB111771BF9F52D01FCC2C9559FAAE1B822_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U24__ctor_m5E068108DD51281B548DFAC7EC4FBCDA24269FD8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U24__ctor_mE24E6CE0E5B291E5DD680F5494CC6B7AFB416452_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_Adapt_mF4DFB384C87372E0D257D96043EA6C5DA9FAFCBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_Adapt_mDFA0191AB61087E3D4E8939FD75795BC53C685D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_Awake_m5ADE2BF4BA296566AA2745AF32D5D9210847B5D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_BuildPathList_mC099046C6065995FBB960AB9CD404AB248A1CE22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_CloseFileWindow_m6A24F6D488928CAC722D7F740C98759A8099FD72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_DeleteFile_mEF327437F4B6584519402B269858238168B07308_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_DrawFileWindow_m8E02C2FE90713FF3DC4487298E10FE1BF58AA6D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_FileWindowKeys_m700F5F72F6BBF34D77266F6B74C6091ED91E4BC6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_GetClampedWindowRect_mD90F62C131EC68DCC491B8DDEAA3B742BA819B65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_GetCurrentFileInfo_m998D5221BA5821F7809F2A1D9B68020C6F87C9B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_GetMultiFileNames_mA72A9A777AA08BCFE66320BA4EFD0897597B91BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_HandleError_m4C2B86B6F5C6791E105547CB548BE2E6842A80AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_MessageWindow_m8675F0C90FBECDC7D482967B3CC793CA560FE7AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_OnGUI_mDA088135B523749B3932F988C0CEC44D11AE7623_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_OpenFileWindow_mA5562126F9D563AB8C58691E485CE2A628769D63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_OpenFileWindow_mBD0E8D91FECCAF6BD8EF400AE0158E8B7E3D345E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_RefreshFileList_mFE8EB0FA2AD5F514FB37297F49E5FF5AB1C4FDA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_Reset_mADF36F91E70C584788A35354245F9CB4DAC5CB65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_SelectFile_mA8A8C93DEEAD7F3F6F8D5C6F226BAEDF96707678_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_SetAutoAddedExtension_m05B69448DCA8DB304371AA55BA378430F0F7E5AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_SetDefaultPath_mC20BE76F3E30BB25F5421EDAB140DA9E1001E94A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_SetFileExtensions_mEE6A130F98C345A8EAB8EB658C09A9272D3C9EFF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_SetFileWindowPosition_m7734DA5D4FEF31DD63899B5ED6479E32EF1AB9C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_SetFileWindowSize_m9DC19258898CD988DE338255DE2BB57780F2F435_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_SetPath_m800505D21B6127112DAB2177A4C063A79A64A7C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_SetupExtensions_mAC78E8ED5C97814ABA683EEBAC36A3571208D15E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_ShowError_mBC71A624A1607B92041389681C51209659144A7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_ShowFileWindow_mF7E1BA9CE65D8809E2E5A707D2AA71ABECF76A1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_Update_mB0DF402BFCF4605EF387FC862E0BE82825FD1C39_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser_WaitForFrame_m72146916668D7E3E06B2D10CC3EC066FD347278E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UniFileBrowser__ctor_mE0397E93A1B6BF3819DF54FF70456006A3AFDACC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __UniFileBrowserU24callable5U241045_39___Call_m43C42226533DD746A5C86173D1F586DB42F82C18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __UniFileBrowser_delegateU24callable0U24169_24___Call_mC309441AE983DD745D8426C06F1B16E4A6DE78FC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __UniFileBrowser_fileFunctionU24callable4U24201_28___Call_m278E3CBFA53CE736A108965AC860B2D47089C3F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __UniFileBrowser_folderFunctionU24callable3U24200_30___Call_m36FF19F361A6731DF9B5BEF478FDB2DE8A7A69B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t __UniFileBrowser_multiDelegateU24callable1U24170_29___Call_mF84A6D0578E0BAE10F2D0D36564A4FE38B77B08B_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com;
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC;
struct FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C;
struct TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150;
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF389402C2051F09C57253CC6D5F62E6F7B3107E1 
{
public:

public:
};


// System.Object


// Boo.Lang.GenericGeneratorEnumerator`1<System.Object>
struct  GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881  : public RuntimeObject
{
public:
	// T Boo.Lang.GenericGeneratorEnumerator`1::_current
	RuntimeObject * ____current_0;
	// System.Int32 Boo.Lang.GenericGeneratorEnumerator`1::_state
	int32_t ____state_1;

public:
	inline static int32_t get_offset_of__current_0() { return static_cast<int32_t>(offsetof(GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881, ____current_0)); }
	inline RuntimeObject * get__current_0() const { return ____current_0; }
	inline RuntimeObject ** get_address_of__current_0() { return &____current_0; }
	inline void set__current_0(RuntimeObject * value)
	{
		____current_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_0), (void*)value);
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}
};


// Boo.Lang.GenericGenerator`1<System.Object>
struct  GenericGenerator_1_t943B00DDD0A2C272B3F9F8DDC20A1C1067EF2733  : public RuntimeObject
{
public:

public:
};


// CompilerGenerated.U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241
struct  U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_t58F0D3452CE02EB397BEA13641B6D66293F2D1FE  : public RuntimeObject
{
public:
	// CompilerGenerated.__UniFileBrowserU24callable5U241045_39__ CompilerGenerated.U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241::U24from
	__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * ___U24from_0;

public:
	inline static int32_t get_offset_of_U24from_0() { return static_cast<int32_t>(offsetof(U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_t58F0D3452CE02EB397BEA13641B6D66293F2D1FE, ___U24from_0)); }
	inline __UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * get_U24from_0() const { return ___U24from_0; }
	inline __UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 ** get_address_of_U24from_0() { return &___U24from_0; }
	inline void set_U24from_0(__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * value)
	{
		___U24from_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24from_0), (void*)value);
	}
};


// CompilerGenerated.U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240
struct  U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_t9CCB352A2B8746FF2870821BE78AC8E08C870856  : public RuntimeObject
{
public:
	// CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__ CompilerGenerated.U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240::U24from
	__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * ___U24from_0;

public:
	inline static int32_t get_offset_of_U24from_0() { return static_cast<int32_t>(offsetof(U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_t9CCB352A2B8746FF2870821BE78AC8E08C870856, ___U24from_0)); }
	inline __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * get_U24from_0() const { return ___U24from_0; }
	inline __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 ** get_address_of_U24from_0() { return &___U24from_0; }
	inline void set_U24from_0(__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * value)
	{
		___U24from_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24from_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UniFileBrowser_FileData>
struct  List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FileDataU5BU5D_t943FDC0D7EC1A0FD51A45C564CC3AA56BF550E22* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692, ____items_1)); }
	inline FileDataU5BU5D_t943FDC0D7EC1A0FD51A45C564CC3AA56BF550E22* get__items_1() const { return ____items_1; }
	inline FileDataU5BU5D_t943FDC0D7EC1A0FD51A45C564CC3AA56BF550E22** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FileDataU5BU5D_t943FDC0D7EC1A0FD51A45C564CC3AA56BF550E22* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FileDataU5BU5D_t943FDC0D7EC1A0FD51A45C564CC3AA56BF550E22* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692_StaticFields, ____emptyArray_5)); }
	inline FileDataU5BU5D_t943FDC0D7EC1A0FD51A45C564CC3AA56BF550E22* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FileDataU5BU5D_t943FDC0D7EC1A0FD51A45C564CC3AA56BF550E22** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FileDataU5BU5D_t943FDC0D7EC1A0FD51A45C564CC3AA56BF550E22* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

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

// UnityEngine.GUIContent
struct  GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Image_1)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tooltip_2), (void*)value);
	}
};

struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_Text_3)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Text_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_Image_4)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Image_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TextImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_StaticFields, ___none_6)); }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * get_none_6() const { return ___none_6; }
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___none_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// UniFileBrowser_U24DeleteFileU2446
struct  U24DeleteFileU2446_t771A02EE85189F947F984381B8F1205E04BBCA6C  : public GenericGenerator_1_t943B00DDD0A2C272B3F9F8DDC20A1C1067EF2733
{
public:
	// UniFileBrowser UniFileBrowser_U24DeleteFileU2446::U24self_U2451
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___U24self_U2451_0;

public:
	inline static int32_t get_offset_of_U24self_U2451_0() { return static_cast<int32_t>(offsetof(U24DeleteFileU2446_t771A02EE85189F947F984381B8F1205E04BBCA6C, ___U24self_U2451_0)); }
	inline UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * get_U24self_U2451_0() const { return ___U24self_U2451_0; }
	inline UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 ** get_address_of_U24self_U2451_0() { return &___U24self_U2451_0; }
	inline void set_U24self_U2451_0(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * value)
	{
		___U24self_U2451_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24self_U2451_0), (void*)value);
	}
};


// UniFileBrowser_U24DeleteFileU2446_U24
struct  U24_tC71DB695A6A6AE1094EF6480C5E5CE674D46E27D  : public GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881
{
public:
	// System.Collections.Generic.List`1<System.String> UniFileBrowser_U24DeleteFileU2446_U24::U24filesU2447
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U24filesU2447_2;
	// System.Int32 UniFileBrowser_U24DeleteFileU2446_U24::U24iU2448
	int32_t ___U24iU2448_3;
	// System.String UniFileBrowser_U24DeleteFileU2446_U24::U24thisFileNameU2449
	String_t* ___U24thisFileNameU2449_4;
	// UniFileBrowser UniFileBrowser_U24DeleteFileU2446_U24::U24self_U2450
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___U24self_U2450_5;

public:
	inline static int32_t get_offset_of_U24filesU2447_2() { return static_cast<int32_t>(offsetof(U24_tC71DB695A6A6AE1094EF6480C5E5CE674D46E27D, ___U24filesU2447_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U24filesU2447_2() const { return ___U24filesU2447_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U24filesU2447_2() { return &___U24filesU2447_2; }
	inline void set_U24filesU2447_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U24filesU2447_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24filesU2447_2), (void*)value);
	}

	inline static int32_t get_offset_of_U24iU2448_3() { return static_cast<int32_t>(offsetof(U24_tC71DB695A6A6AE1094EF6480C5E5CE674D46E27D, ___U24iU2448_3)); }
	inline int32_t get_U24iU2448_3() const { return ___U24iU2448_3; }
	inline int32_t* get_address_of_U24iU2448_3() { return &___U24iU2448_3; }
	inline void set_U24iU2448_3(int32_t value)
	{
		___U24iU2448_3 = value;
	}

	inline static int32_t get_offset_of_U24thisFileNameU2449_4() { return static_cast<int32_t>(offsetof(U24_tC71DB695A6A6AE1094EF6480C5E5CE674D46E27D, ___U24thisFileNameU2449_4)); }
	inline String_t* get_U24thisFileNameU2449_4() const { return ___U24thisFileNameU2449_4; }
	inline String_t** get_address_of_U24thisFileNameU2449_4() { return &___U24thisFileNameU2449_4; }
	inline void set_U24thisFileNameU2449_4(String_t* value)
	{
		___U24thisFileNameU2449_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24thisFileNameU2449_4), (void*)value);
	}

	inline static int32_t get_offset_of_U24self_U2450_5() { return static_cast<int32_t>(offsetof(U24_tC71DB695A6A6AE1094EF6480C5E5CE674D46E27D, ___U24self_U2450_5)); }
	inline UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * get_U24self_U2450_5() const { return ___U24self_U2450_5; }
	inline UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 ** get_address_of_U24self_U2450_5() { return &___U24self_U2450_5; }
	inline void set_U24self_U2450_5(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * value)
	{
		___U24self_U2450_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24self_U2450_5), (void*)value);
	}
};


// UniFileBrowser_U24SelectFileU2452
struct  U24SelectFileU2452_t59507280F0FFEE23152D862BA29D307EE37B3018  : public GenericGenerator_1_t943B00DDD0A2C272B3F9F8DDC20A1C1067EF2733
{
public:
	// UniFileBrowser UniFileBrowser_U24SelectFileU2452::U24self_U2456
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___U24self_U2456_0;

public:
	inline static int32_t get_offset_of_U24self_U2456_0() { return static_cast<int32_t>(offsetof(U24SelectFileU2452_t59507280F0FFEE23152D862BA29D307EE37B3018, ___U24self_U2456_0)); }
	inline UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * get_U24self_U2456_0() const { return ___U24self_U2456_0; }
	inline UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 ** get_address_of_U24self_U2456_0() { return &___U24self_U2456_0; }
	inline void set_U24self_U2456_0(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * value)
	{
		___U24self_U2456_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24self_U2456_0), (void*)value);
	}
};


// UniFileBrowser_U24SelectFileU2452_U24
struct  U24_t86F66B546C8692DE25AF9BE2AEB9D6540B4EC581  : public GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881
{
public:
	// System.String UniFileBrowser_U24SelectFileU2452_U24::U24thisFileNameU2453
	String_t* ___U24thisFileNameU2453_2;
	// System.Int32 UniFileBrowser_U24SelectFileU2452_U24::U24iU2454
	int32_t ___U24iU2454_3;
	// UniFileBrowser UniFileBrowser_U24SelectFileU2452_U24::U24self_U2455
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___U24self_U2455_4;

public:
	inline static int32_t get_offset_of_U24thisFileNameU2453_2() { return static_cast<int32_t>(offsetof(U24_t86F66B546C8692DE25AF9BE2AEB9D6540B4EC581, ___U24thisFileNameU2453_2)); }
	inline String_t* get_U24thisFileNameU2453_2() const { return ___U24thisFileNameU2453_2; }
	inline String_t** get_address_of_U24thisFileNameU2453_2() { return &___U24thisFileNameU2453_2; }
	inline void set_U24thisFileNameU2453_2(String_t* value)
	{
		___U24thisFileNameU2453_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24thisFileNameU2453_2), (void*)value);
	}

	inline static int32_t get_offset_of_U24iU2454_3() { return static_cast<int32_t>(offsetof(U24_t86F66B546C8692DE25AF9BE2AEB9D6540B4EC581, ___U24iU2454_3)); }
	inline int32_t get_U24iU2454_3() const { return ___U24iU2454_3; }
	inline int32_t* get_address_of_U24iU2454_3() { return &___U24iU2454_3; }
	inline void set_U24iU2454_3(int32_t value)
	{
		___U24iU2454_3 = value;
	}

	inline static int32_t get_offset_of_U24self_U2455_4() { return static_cast<int32_t>(offsetof(U24_t86F66B546C8692DE25AF9BE2AEB9D6540B4EC581, ___U24self_U2455_4)); }
	inline UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * get_U24self_U2455_4() const { return ___U24self_U2455_4; }
	inline UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 ** get_address_of_U24self_U2455_4() { return &___U24self_U2455_4; }
	inline void set_U24self_U2455_4(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * value)
	{
		___U24self_U2455_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24self_U2455_4), (void*)value);
	}
};


// UniFileBrowser_U24WaitForFrameU2443
struct  U24WaitForFrameU2443_tEB3ED2D8FBA19122142DE8C506A78471E97FD0DD  : public GenericGenerator_1_t943B00DDD0A2C272B3F9F8DDC20A1C1067EF2733
{
public:
	// UniFileBrowser UniFileBrowser_U24WaitForFrameU2443::U24self_U2445
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___U24self_U2445_0;

public:
	inline static int32_t get_offset_of_U24self_U2445_0() { return static_cast<int32_t>(offsetof(U24WaitForFrameU2443_tEB3ED2D8FBA19122142DE8C506A78471E97FD0DD, ___U24self_U2445_0)); }
	inline UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * get_U24self_U2445_0() const { return ___U24self_U2445_0; }
	inline UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 ** get_address_of_U24self_U2445_0() { return &___U24self_U2445_0; }
	inline void set_U24self_U2445_0(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * value)
	{
		___U24self_U2445_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24self_U2445_0), (void*)value);
	}
};


// UniFileBrowser_U24WaitForFrameU2443_U24
struct  U24_tD4B10AB9517274557C79311963549E5DE4BB0326  : public GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881
{
public:
	// UniFileBrowser UniFileBrowser_U24WaitForFrameU2443_U24::U24self_U2444
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___U24self_U2444_2;

public:
	inline static int32_t get_offset_of_U24self_U2444_2() { return static_cast<int32_t>(offsetof(U24_tD4B10AB9517274557C79311963549E5DE4BB0326, ___U24self_U2444_2)); }
	inline UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * get_U24self_U2444_2() const { return ___U24self_U2444_2; }
	inline UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 ** get_address_of_U24self_U2444_2() { return &___U24self_U2444_2; }
	inline void set_U24self_U2444_2(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * value)
	{
		___U24self_U2444_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24self_U2444_2), (void*)value);
	}
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


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
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


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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

// System.IO.FileAttributes
struct  FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
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


// UniFileBrowser_FileData
struct  FileData_t4516F881D5D111630892E59176011C41763C9922  : public RuntimeObject
{
public:
	// System.String UniFileBrowser_FileData::name
	String_t* ___name_0;
	// System.DateTime UniFileBrowser_FileData::date
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___date_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(FileData_t4516F881D5D111630892E59176011C41763C9922, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_date_1() { return static_cast<int32_t>(offsetof(FileData_t4516F881D5D111630892E59176011C41763C9922, ___date_1)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_date_1() const { return ___date_1; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_date_1() { return &___date_1; }
	inline void set_date_1(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___date_1 = value;
	}
};


// UniFileBrowser_FileType
struct  FileType_t7DEE09893752126641C118F42ACF0E372A62293A 
{
public:
	// System.Int32 UniFileBrowser_FileType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileType_t7DEE09893752126641C118F42ACF0E372A62293A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UniFileBrowser_MessageWindowType
struct  MessageWindowType_tC3056C3BD434918FC33AED7528C1609B1585CBCC 
{
public:
	// System.Int32 UniFileBrowser_MessageWindowType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageWindowType_tC3056C3BD434918FC33AED7528C1609B1585CBCC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UniFileBrowser_SortType
struct  SortType_t8076A45708A10BFCD70FF23B8B37EB02EC448855 
{
public:
	// System.Int32 UniFileBrowser_SortType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SortType_t8076A45708A10BFCD70FF23B8B37EB02EC448855, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Event
struct  Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___s_MasterEvent_2;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_Current_1)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Current_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_StaticFields, ___s_MasterEvent_2)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MasterEvent_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventType
struct  EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F 
{
public:
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t7441C817FAEEF7090BC0D9084E6DB3E7F635815F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUIStyleState
struct  GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9, ___m_SourceStyle_1)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com* ___m_SourceStyle_1;
};

// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
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

// UnityEngine.RectOffset
struct  RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextClipping
struct  TextClipping_t0FA5671B290E5A324285936073E3AC7A07FB9658 
{
public:
	// System.Int32 UnityEngine.TextClipping::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextClipping_t0FA5671B290E5A324285936073E3AC7A07FB9658, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct  TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MonoIOStat
struct  MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
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


// UnityEngine.GUIStyle
struct  GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
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

// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Touch
struct  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// CompilerGenerated.__UniFileBrowserU24callable5U241045_39__
struct  __UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85  : public MulticastDelegate_t
{
public:

public:
};


// CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__
struct  __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7  : public MulticastDelegate_t
{
public:

public:
};


// CompilerGenerated.__UniFileBrowser_delegateU24callable0U24169_24__
struct  __UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3  : public MulticastDelegate_t
{
public:

public:
};


// CompilerGenerated.__UniFileBrowser_fileFunctionU24callable4U24201_28__
struct  __UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192  : public MulticastDelegate_t
{
public:

public:
};


// CompilerGenerated.__UniFileBrowser_folderFunctionU24callable3U24200_30__
struct  __UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06  : public MulticastDelegate_t
{
public:

public:
};


// CompilerGenerated.__UniFileBrowser_multiDelegateU24callable1U24170_29__
struct  __UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Comparison`1<UniFileBrowser_FileData>
struct  Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_5;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_6;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_7;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_5)); }
	inline String_t* get_FullPath_5() const { return ___FullPath_5; }
	inline String_t** get_address_of_FullPath_5() { return &___FullPath_5; }
	inline void set_FullPath_5(String_t* value)
	{
		___FullPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_5), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_6() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_6)); }
	inline String_t* get_OriginalPath_6() const { return ___OriginalPath_6; }
	inline String_t** get_address_of_OriginalPath_6() { return &___OriginalPath_6; }
	inline void set_OriginalPath_6(String_t* value)
	{
		___OriginalPath_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_6), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_7() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_7)); }
	inline String_t* get__displayPath_7() const { return ____displayPath_7; }
	inline String_t** get_address_of__displayPath_7() { return &____displayPath_7; }
	inline void set__displayPath_7(String_t* value)
	{
		____displayPath_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_7), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.GUI_WindowFunction
struct  WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.GUISkin
struct  GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbar_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarThumb_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarLeftButton_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_horizontalScrollbarRightButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbar_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarThumb_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarUpButton_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_verticalScrollbarDownButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___m_ScrollView_26;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* ___m_CustomStyles_27;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * ___m_Settings_28;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * ___m_Styles_30;

public:
	inline static int32_t get_offset_of_m_Font_4() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Font_4)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_Font_4() const { return ___m_Font_4; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_Font_4() { return &___m_Font_4; }
	inline void set_m_Font_4(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_Font_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Font_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_box_5() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_box_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_box_5() const { return ___m_box_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_box_5() { return &___m_box_5; }
	inline void set_m_box_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_box_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_box_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_button_6)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_button_6() const { return ___m_button_6; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_button_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_toggle_7() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_toggle_7)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_toggle_7() const { return ___m_toggle_7; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_toggle_7() { return &___m_toggle_7; }
	inline void set_m_toggle_7(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_toggle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_toggle_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_label_8() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_label_8)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_label_8() const { return ___m_label_8; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_label_8() { return &___m_label_8; }
	inline void set_m_label_8(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_label_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_textField_9() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textField_9)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textField_9() const { return ___m_textField_9; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textField_9() { return &___m_textField_9; }
	inline void set_m_textField_9(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textField_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_textArea_10() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_textArea_10)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_textArea_10() const { return ___m_textArea_10; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_textArea_10() { return &___m_textArea_10; }
	inline void set_m_textArea_10(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_textArea_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textArea_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_window_11() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_window_11)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_window_11() const { return ___m_window_11; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_window_11() { return &___m_window_11; }
	inline void set_m_window_11(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_window_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_window_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSlider_12)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSlider_12() const { return ___m_horizontalSlider_12; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSlider_12() { return &___m_horizontalSlider_12; }
	inline void set_m_horizontalSlider_12(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSlider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumb_13)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumb_13() const { return ___m_horizontalSliderThumb_13; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumb_13() { return &___m_horizontalSliderThumb_13; }
	inline void set_m_horizontalSliderThumb_13(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumb_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumbExtent_14() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalSliderThumbExtent_14)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalSliderThumbExtent_14() const { return ___m_horizontalSliderThumbExtent_14; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalSliderThumbExtent_14() { return &___m_horizontalSliderThumbExtent_14; }
	inline void set_m_horizontalSliderThumbExtent_14(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalSliderThumbExtent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalSliderThumbExtent_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_15() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSlider_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSlider_15() const { return ___m_verticalSlider_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSlider_15() { return &___m_verticalSlider_15; }
	inline void set_m_verticalSlider_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSlider_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSlider_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_16() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumb_16)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumb_16() const { return ___m_verticalSliderThumb_16; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumb_16() { return &___m_verticalSliderThumb_16; }
	inline void set_m_verticalSliderThumb_16(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumb_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumb_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumbExtent_17() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalSliderThumbExtent_17)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalSliderThumbExtent_17() const { return ___m_verticalSliderThumbExtent_17; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalSliderThumbExtent_17() { return &___m_verticalSliderThumbExtent_17; }
	inline void set_m_verticalSliderThumbExtent_17(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalSliderThumbExtent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalSliderThumbExtent_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_18() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbar_18)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbar_18() const { return ___m_horizontalScrollbar_18; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbar_18() { return &___m_horizontalScrollbar_18; }
	inline void set_m_horizontalScrollbar_18(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbar_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbar_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_19() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarThumb_19)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarThumb_19() const { return ___m_horizontalScrollbarThumb_19; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarThumb_19() { return &___m_horizontalScrollbarThumb_19; }
	inline void set_m_horizontalScrollbarThumb_19(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarThumb_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarThumb_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_20() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarLeftButton_20)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarLeftButton_20() const { return ___m_horizontalScrollbarLeftButton_20; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarLeftButton_20() { return &___m_horizontalScrollbarLeftButton_20; }
	inline void set_m_horizontalScrollbarLeftButton_20(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarLeftButton_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarLeftButton_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_21() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_horizontalScrollbarRightButton_21)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_horizontalScrollbarRightButton_21() const { return ___m_horizontalScrollbarRightButton_21; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_horizontalScrollbarRightButton_21() { return &___m_horizontalScrollbarRightButton_21; }
	inline void set_m_horizontalScrollbarRightButton_21(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_horizontalScrollbarRightButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_horizontalScrollbarRightButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_22() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbar_22)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbar_22() const { return ___m_verticalScrollbar_22; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbar_22() { return &___m_verticalScrollbar_22; }
	inline void set_m_verticalScrollbar_22(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbar_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbar_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_23() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarThumb_23)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarThumb_23() const { return ___m_verticalScrollbarThumb_23; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarThumb_23() { return &___m_verticalScrollbarThumb_23; }
	inline void set_m_verticalScrollbarThumb_23(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarThumb_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarThumb_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_24() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarUpButton_24)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarUpButton_24() const { return ___m_verticalScrollbarUpButton_24; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarUpButton_24() { return &___m_verticalScrollbarUpButton_24; }
	inline void set_m_verticalScrollbarUpButton_24(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarUpButton_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarUpButton_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_25() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_verticalScrollbarDownButton_25)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_verticalScrollbarDownButton_25() const { return ___m_verticalScrollbarDownButton_25; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_verticalScrollbarDownButton_25() { return &___m_verticalScrollbarDownButton_25; }
	inline void set_m_verticalScrollbarDownButton_25(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_verticalScrollbarDownButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_verticalScrollbarDownButton_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollView_26() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_ScrollView_26)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_m_ScrollView_26() const { return ___m_ScrollView_26; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_m_ScrollView_26() { return &___m_ScrollView_26; }
	inline void set_m_ScrollView_26(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___m_ScrollView_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScrollView_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_27() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_CustomStyles_27)); }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* get_m_CustomStyles_27() const { return ___m_CustomStyles_27; }
	inline GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70** get_address_of_m_CustomStyles_27() { return &___m_CustomStyles_27; }
	inline void set_m_CustomStyles_27(GUIStyleU5BU5D_t99FB75A2EC4777ADECDE02F71A619CFBFC0F4F70* value)
	{
		___m_CustomStyles_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomStyles_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_28() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Settings_28)); }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * get_m_Settings_28() const { return ___m_Settings_28; }
	inline GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 ** get_address_of_m_Settings_28() { return &___m_Settings_28; }
	inline void set_m_Settings_28(GUISettings_tB85473DFD6EF025A06EAD867197A4478A41008D0 * value)
	{
		___m_Settings_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Styles_30() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6, ___m_Styles_30)); }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * get_m_Styles_30() const { return ___m_Styles_30; }
	inline Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 ** get_address_of_m_Styles_30() { return &___m_Styles_30; }
	inline void set_m_Styles_30(Dictionary_2_t2CD153A36C5BD27CDDC85F23918ECEF77E892E80 * value)
	{
		___m_Styles_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Styles_30), (void*)value);
	}
};

struct GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___ms_Error_29;
	// UnityEngine.GUISkin_SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * ___m_SkinChanged_31;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___current_32;

public:
	inline static int32_t get_offset_of_ms_Error_29() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___ms_Error_29)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_ms_Error_29() const { return ___ms_Error_29; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_ms_Error_29() { return &___ms_Error_29; }
	inline void set_ms_Error_29(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___ms_Error_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ms_Error_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_31() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___m_SkinChanged_31)); }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * get_m_SkinChanged_31() const { return ___m_SkinChanged_31; }
	inline SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E ** get_address_of_m_SkinChanged_31() { return &___m_SkinChanged_31; }
	inline void set_m_SkinChanged_31(SkinChangedDelegate_t8BECC691E2A259B07F4A51D8F1A639B83F055E1E * value)
	{
		___m_SkinChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SkinChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_current_32() { return static_cast<int32_t>(offsetof(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_StaticFields, ___current_32)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_current_32() const { return ___current_32; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_current_32() { return &___current_32; }
	inline void set_current_32(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___current_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_32), (void*)value);
	}
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// System.IO.DirectoryInfo
struct  DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_8;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_9;

public:
	inline static int32_t get_offset_of_current_8() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_8)); }
	inline String_t* get_current_8() const { return ___current_8; }
	inline String_t** get_address_of_current_8() { return &___current_8; }
	inline void set_current_8(String_t* value)
	{
		___current_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_8), (void*)value);
	}

	inline static int32_t get_offset_of_parent_9() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_9)); }
	inline String_t* get_parent_9() const { return ___parent_9; }
	inline String_t** get_address_of_parent_9() { return &___parent_9; }
	inline void set_parent_9(String_t* value)
	{
		___parent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_9), (void*)value);
	}
};


// System.IO.FileInfo
struct  FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.FileInfo::_name
	String_t* ____name_8;

public:
	inline static int32_t get_offset_of__name_8() { return static_cast<int32_t>(offsetof(FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9, ____name_8)); }
	inline String_t* get__name_8() const { return ____name_8; }
	inline String_t** get_address_of__name_8() { return &____name_8; }
	inline void set__name_8(String_t* value)
	{
		____name_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_8), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UniFileBrowser
struct  UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UniFileBrowser::autoAddExtension
	bool ___autoAddExtension_4;
	// System.String UniFileBrowser::addedExtension
	String_t* ___addedExtension_5;
	// System.String UniFileBrowser::defaultFileName
	String_t* ___defaultFileName_6;
	// System.Int32 UniFileBrowser::maxFileNameLength
	int32_t ___maxFileNameLength_7;
	// System.Boolean UniFileBrowser::preventIllegalCharInput
	bool ___preventIllegalCharInput_8;
	// System.String UniFileBrowser::illegalChars
	String_t* ___illegalChars_9;
	// System.Boolean UniFileBrowser::useDeleteButton
	bool ___useDeleteButton_10;
	// System.Boolean UniFileBrowser::limitToInitialFolder
	bool ___limitToInitialFolder_11;
	// System.Boolean UniFileBrowser::showVolumes
	bool ___showVolumes_12;
	// System.Boolean UniFileBrowser::volumesAreSeparate
	bool ___volumesAreSeparate_13;
	// System.Boolean UniFileBrowser::showDate
	bool ___showDate_14;
	// System.Int32 UniFileBrowser::dateWidthAdd
	int32_t ___dateWidthAdd_15;
	// UniFileBrowser_SortType UniFileBrowser::sortType
	int32_t ___sortType_16;
	// System.Boolean UniFileBrowser::m_allowMultiSelect
	bool ___m_allowMultiSelect_17;
	// System.Boolean UniFileBrowser::allowAppBundleBrowsing
	bool ___allowAppBundleBrowsing_18;
	// System.Boolean UniFileBrowser::showHiddenMacFiles
	bool ___showHiddenMacFiles_19;
	// System.Boolean UniFileBrowser::filterFiles
	bool ___filterFiles_20;
	// System.String[] UniFileBrowser::filterFileExtensions
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___filterFileExtensions_21;
	// System.Boolean UniFileBrowser::useFilterButton
	bool ___useFilterButton_22;
	// UnityEngine.Vector2 UniFileBrowser::windowTabOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___windowTabOffset_23;
	// UnityEngine.Texture UniFileBrowser::windowTab
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___windowTab_24;
	// System.Boolean UniFileBrowser::allowWindowResize
	bool ___allowWindowResize_25;
	// System.Boolean UniFileBrowser::allowWindowDrag
	bool ___allowWindowDrag_26;
	// System.Int32 UniFileBrowser::fileWindowID
	int32_t ___fileWindowID_27;
	// System.Int32 UniFileBrowser::messageWindowID
	int32_t ___messageWindowID_28;
	// System.Int32 UniFileBrowser::fileWindowInset
	int32_t ___fileWindowInset_29;
	// UnityEngine.Rect UniFileBrowser::defaultFileWindowRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___defaultFileWindowRect_30;
	// System.Int32 UniFileBrowser::minWindowWidth
	int32_t ___minWindowWidth_31;
	// System.Int32 UniFileBrowser::minWindowHeight
	int32_t ___minWindowHeight_32;
	// UnityEngine.Vector2 UniFileBrowser::messageWindowSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___messageWindowSize_33;
	// System.Int32 UniFileBrowser::guiDepth
	int32_t ___guiDepth_34;
	// UnityEngine.Rect UniFileBrowser::popupRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___popupRect_35;
	// UnityEngine.Vector2 UniFileBrowser::buttonSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___buttonSize_36;
	// UnityEngine.GUISkin UniFileBrowser::guiSkin
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___guiSkin_37;
	// UnityEngine.Texture UniFileBrowser::highlightTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___highlightTexture_38;
	// UnityEngine.Color UniFileBrowser::highlightTextColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___highlightTextColor_39;
	// UnityEngine.Texture UniFileBrowser::messageWindowTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___messageWindowTexture_40;
	// UnityEngine.Texture UniFileBrowser::driveIcon
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___driveIcon_41;
	// UnityEngine.Texture UniFileBrowser::folderIcon
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___folderIcon_42;
	// UnityEngine.Texture UniFileBrowser::fileIcon
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___fileIcon_43;
	// System.Boolean UniFileBrowser::_allowMultiSelect
	bool ____allowMultiSelect_44;
	// UnityEngine.Vector2 UniFileBrowser::scrollPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___scrollPos_45;
	// System.Int32 UniFileBrowser::selectedFileNumber
	int32_t ___selectedFileNumber_46;
	// System.Int32 UniFileBrowser::oldSelectedFileNumber
	int32_t ___oldSelectedFileNumber_47;
	// System.Int32 UniFileBrowser::anchorFileNumber
	int32_t ___anchorFileNumber_48;
	// System.Collections.Generic.List`1<UniFileBrowser_FileData> UniFileBrowser::dirList
	List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * ___dirList_49;
	// System.Collections.Generic.List`1<UniFileBrowser_FileData> UniFileBrowser::fileList
	List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * ___fileList_50;
	// UnityEngine.Texture[] UniFileBrowser::iconDisplayList
	TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* ___iconDisplayList_51;
	// System.String[] UniFileBrowser::fileDisplayList
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___fileDisplayList_52;
	// System.String[] UniFileBrowser::dateDisplayList
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___dateDisplayList_53;
	// System.Collections.Generic.List`1<System.Int32> UniFileBrowser::multiFileList
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___multiFileList_54;
	// UnityEngine.GUIStyle UniFileBrowser::scrollViewStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___scrollViewStyle_55;
	// UnityEngine.GUIStyle UniFileBrowser::scrollViewStyleSelected
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___scrollViewStyleSelected_56;
	// UnityEngine.GUIStyle UniFileBrowser::popupListStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___popupListStyle_57;
	// UnityEngine.GUIStyle UniFileBrowser::popupButtonStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___popupButtonStyle_58;
	// UnityEngine.GUIStyle UniFileBrowser::popupBoxStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___popupBoxStyle_59;
	// UnityEngine.GUIStyle UniFileBrowser::messageWindowStyle
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___messageWindowStyle_60;
	// System.String UniFileBrowser::filePath
	String_t* ___filePath_61;
	// System.String UniFileBrowser::fileName
	String_t* ___fileName_62;
	// System.String UniFileBrowser::oldFileName
	String_t* ___oldFileName_63;
	// System.Boolean UniFileBrowser::frameDone
	bool ___frameDone_64;
	// UnityEngine.GUIContent[] UniFileBrowser::pathList
	GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* ___pathList_65;
	// System.Boolean UniFileBrowser::showPopup
	bool ___showPopup_66;
	// System.Int32 UniFileBrowser::selectedPath
	int32_t ___selectedPath_67;
	// System.Char UniFileBrowser::pathChar
	Il2CppChar ___pathChar_68;
	// System.Boolean UniFileBrowser::windowsSystem
	bool ___windowsSystem_69;
	// System.Boolean UniFileBrowser::linuxSystem
	bool ___linuxSystem_70;
	// System.Boolean UniFileBrowser::osxSystem
	bool ___osxSystem_71;
	// System.Boolean UniFileBrowser::androidSystem
	bool ___androidSystem_72;
	// System.Int32 UniFileBrowser::numberOfVolumes
	int32_t ___numberOfVolumes_73;
	// System.Boolean UniFileBrowser::fileWindowOpen
	bool ___fileWindowOpen_74;
	// UnityEngine.Rect UniFileBrowser::fileWindowRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___fileWindowRect_75;
	// System.String UniFileBrowser::windowTitle
	String_t* ___windowTitle_76;
	// System.String[] UniFileBrowser::fileWindowTitles
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___fileWindowTitles_77;
	// System.String[] UniFileBrowser::selectButtonText
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___selectButtonText_78;
	// UniFileBrowser_FileType UniFileBrowser::fileType
	int32_t ___fileType_79;
	// System.Boolean UniFileBrowser::handleClicked
	bool ___handleClicked_80;
	// UnityEngine.Vector3 UniFileBrowser::clickedPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___clickedPosition_81;
	// System.Boolean UniFileBrowser::doubleClicked
	bool ___doubleClicked_82;
	// UnityEngine.Rect UniFileBrowser::originalWindowRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___originalWindowRect_83;
	// System.Int32 UniFileBrowser::cmdKey1
	int32_t ___cmdKey1_84;
	// System.Int32 UniFileBrowser::cmdKey2
	int32_t ___cmdKey2_85;
	// UnityEngine.Vector3 UniFileBrowser::mousePos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mousePos_86;
	// System.Int32 UniFileBrowser::linePixelHeight
	int32_t ___linePixelHeight_87;
	// System.Int32 UniFileBrowser::iconWidth
	int32_t ___iconWidth_88;
	// System.Int32 UniFileBrowser::dateWidth
	int32_t ___dateWidth_89;
	// System.Boolean UniFileBrowser::selectFileInProgress
	bool ___selectFileInProgress_90;
	// System.Boolean UniFileBrowser::showFiles
	bool ___showFiles_91;
	// CompilerGenerated.__UniFileBrowser_delegateU24callable0U24169_24__ UniFileBrowser::delegate
	__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * ___delegate_92;
	// CompilerGenerated.__UniFileBrowser_multiDelegateU24callable1U24170_29__ UniFileBrowser::multiDelegate
	__UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * ___multiDelegate_93;
	// System.Boolean UniFileBrowser::sendCloseMessage
	bool ___sendCloseMessage_94;
	// CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__ UniFileBrowser::closeWindowFunction
	__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * ___closeWindowFunction_95;
	// System.Boolean UniFileBrowser::sendChangeMessage
	bool ___sendChangeMessage_96;
	// CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__ UniFileBrowser::changeWindowFunction
	__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * ___changeWindowFunction_97;
	// UnityEngine.Rect UniFileBrowser::lastRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___lastRect_98;
	// System.Single UniFileBrowser::clickTimer
	float ___clickTimer_99;
	// System.Boolean UniFileBrowser::clicked
	bool ___clicked_100;
	// System.Int32 UniFileBrowser::keyboardControlID
	int32_t ___keyboardControlID_101;
	// System.Int32 UniFileBrowser::windowOpenedCounter
	int32_t ___windowOpenedCounter_102;
	// UnityEngine.GUISkin UniFileBrowser::defaultSkin
	GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___defaultSkin_103;
	// UnityEngine.Rect UniFileBrowser::textfieldRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___textfieldRect_104;
	// UnityEngine.Rect UniFileBrowser::fileBoxRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___fileBoxRect_105;
	// UnityEngine.Rect UniFileBrowser::fileAreaRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___fileAreaRect_106;
	// UnityEngine.Rect UniFileBrowser::volumeBoxRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___volumeBoxRect_107;
	// UnityEngine.Rect UniFileBrowser::saveFileAreaRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___saveFileAreaRect_108;
	// UnityEngine.Rect UniFileBrowser::viewRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewRect_109;
	// System.Int32 UniFileBrowser::bottomAreaSpace
	int32_t ___bottomAreaSpace_110;
	// System.Int32 UniFileBrowser::xIndent
	int32_t ___xIndent_111;
	// System.Int32 UniFileBrowser::yIndent
	int32_t ___yIndent_112;
	// System.Int32 UniFileBrowser::scrollbarWidth
	int32_t ___scrollbarWidth_113;
	// System.Int32 UniFileBrowser::buttonPositionX
	int32_t ___buttonPositionX_114;
	// System.Int32 UniFileBrowser::buttonPositionY
	int32_t ___buttonPositionY_115;
	// System.Boolean UniFileBrowser::multi
	bool ___multi_116;
	// System.Int32 UniFileBrowser::windowOffset
	int32_t ___windowOffset_117;
	// System.Int32 UniFileBrowser::storedPopupHeight
	int32_t ___storedPopupHeight_118;
	// System.Boolean UniFileBrowser::runCustomFunction
	bool ___runCustomFunction_119;
	// CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__ UniFileBrowser::customFunction
	__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * ___customFunction_120;
	// System.Boolean UniFileBrowser::doFolderFunction
	bool ___doFolderFunction_121;
	// System.Boolean UniFileBrowser::doFileFunction
	bool ___doFileFunction_122;
	// CompilerGenerated.__UniFileBrowser_folderFunctionU24callable3U24200_30__ UniFileBrowser::folderFunction
	__UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 * ___folderFunction_123;
	// CompilerGenerated.__UniFileBrowser_fileFunctionU24callable4U24201_28__ UniFileBrowser::fileFunction
	__UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * ___fileFunction_124;
	// System.Boolean UniFileBrowser::useMobile
	bool ___useMobile_125;
	// UnityEngine.Vector2 UniFileBrowser::touchPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___touchPos_126;
	// System.Boolean UniFileBrowser::touchScrolling
	bool ___touchScrolling_127;
	// System.Single UniFileBrowser::referenceWidth
	float ___referenceWidth_128;
	// System.Single UniFileBrowser::referenceHeight
	float ___referenceHeight_129;
	// System.Boolean UniFileBrowser::doScale
	bool ___doScale_130;
	// UniFileBrowser_MessageWindowType UniFileBrowser::messageWindowType
	int32_t ___messageWindowType_132;
	// System.String UniFileBrowser::button1Text
	String_t* ___button1Text_133;
	// System.String UniFileBrowser::button2Text
	String_t* ___button2Text_134;
	// System.String UniFileBrowser::message
	String_t* ___message_135;
	// System.Boolean UniFileBrowser::showMessageWindow
	bool ___showMessageWindow_136;
	// System.String UniFileBrowser::messageWindowTitle
	String_t* ___messageWindowTitle_137;
	// UnityEngine.Rect UniFileBrowser::messageWindowRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___messageWindowRect_138;
	// System.Boolean UniFileBrowser::confirm
	bool ___confirm_139;
	// System.Boolean UniFileBrowser::messageWindowDelay
	bool ___messageWindowDelay_140;

public:
	inline static int32_t get_offset_of_autoAddExtension_4() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___autoAddExtension_4)); }
	inline bool get_autoAddExtension_4() const { return ___autoAddExtension_4; }
	inline bool* get_address_of_autoAddExtension_4() { return &___autoAddExtension_4; }
	inline void set_autoAddExtension_4(bool value)
	{
		___autoAddExtension_4 = value;
	}

	inline static int32_t get_offset_of_addedExtension_5() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___addedExtension_5)); }
	inline String_t* get_addedExtension_5() const { return ___addedExtension_5; }
	inline String_t** get_address_of_addedExtension_5() { return &___addedExtension_5; }
	inline void set_addedExtension_5(String_t* value)
	{
		___addedExtension_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addedExtension_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultFileName_6() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___defaultFileName_6)); }
	inline String_t* get_defaultFileName_6() const { return ___defaultFileName_6; }
	inline String_t** get_address_of_defaultFileName_6() { return &___defaultFileName_6; }
	inline void set_defaultFileName_6(String_t* value)
	{
		___defaultFileName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultFileName_6), (void*)value);
	}

	inline static int32_t get_offset_of_maxFileNameLength_7() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___maxFileNameLength_7)); }
	inline int32_t get_maxFileNameLength_7() const { return ___maxFileNameLength_7; }
	inline int32_t* get_address_of_maxFileNameLength_7() { return &___maxFileNameLength_7; }
	inline void set_maxFileNameLength_7(int32_t value)
	{
		___maxFileNameLength_7 = value;
	}

	inline static int32_t get_offset_of_preventIllegalCharInput_8() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___preventIllegalCharInput_8)); }
	inline bool get_preventIllegalCharInput_8() const { return ___preventIllegalCharInput_8; }
	inline bool* get_address_of_preventIllegalCharInput_8() { return &___preventIllegalCharInput_8; }
	inline void set_preventIllegalCharInput_8(bool value)
	{
		___preventIllegalCharInput_8 = value;
	}

	inline static int32_t get_offset_of_illegalChars_9() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___illegalChars_9)); }
	inline String_t* get_illegalChars_9() const { return ___illegalChars_9; }
	inline String_t** get_address_of_illegalChars_9() { return &___illegalChars_9; }
	inline void set_illegalChars_9(String_t* value)
	{
		___illegalChars_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___illegalChars_9), (void*)value);
	}

	inline static int32_t get_offset_of_useDeleteButton_10() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___useDeleteButton_10)); }
	inline bool get_useDeleteButton_10() const { return ___useDeleteButton_10; }
	inline bool* get_address_of_useDeleteButton_10() { return &___useDeleteButton_10; }
	inline void set_useDeleteButton_10(bool value)
	{
		___useDeleteButton_10 = value;
	}

	inline static int32_t get_offset_of_limitToInitialFolder_11() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___limitToInitialFolder_11)); }
	inline bool get_limitToInitialFolder_11() const { return ___limitToInitialFolder_11; }
	inline bool* get_address_of_limitToInitialFolder_11() { return &___limitToInitialFolder_11; }
	inline void set_limitToInitialFolder_11(bool value)
	{
		___limitToInitialFolder_11 = value;
	}

	inline static int32_t get_offset_of_showVolumes_12() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___showVolumes_12)); }
	inline bool get_showVolumes_12() const { return ___showVolumes_12; }
	inline bool* get_address_of_showVolumes_12() { return &___showVolumes_12; }
	inline void set_showVolumes_12(bool value)
	{
		___showVolumes_12 = value;
	}

	inline static int32_t get_offset_of_volumesAreSeparate_13() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___volumesAreSeparate_13)); }
	inline bool get_volumesAreSeparate_13() const { return ___volumesAreSeparate_13; }
	inline bool* get_address_of_volumesAreSeparate_13() { return &___volumesAreSeparate_13; }
	inline void set_volumesAreSeparate_13(bool value)
	{
		___volumesAreSeparate_13 = value;
	}

	inline static int32_t get_offset_of_showDate_14() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___showDate_14)); }
	inline bool get_showDate_14() const { return ___showDate_14; }
	inline bool* get_address_of_showDate_14() { return &___showDate_14; }
	inline void set_showDate_14(bool value)
	{
		___showDate_14 = value;
	}

	inline static int32_t get_offset_of_dateWidthAdd_15() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___dateWidthAdd_15)); }
	inline int32_t get_dateWidthAdd_15() const { return ___dateWidthAdd_15; }
	inline int32_t* get_address_of_dateWidthAdd_15() { return &___dateWidthAdd_15; }
	inline void set_dateWidthAdd_15(int32_t value)
	{
		___dateWidthAdd_15 = value;
	}

	inline static int32_t get_offset_of_sortType_16() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___sortType_16)); }
	inline int32_t get_sortType_16() const { return ___sortType_16; }
	inline int32_t* get_address_of_sortType_16() { return &___sortType_16; }
	inline void set_sortType_16(int32_t value)
	{
		___sortType_16 = value;
	}

	inline static int32_t get_offset_of_m_allowMultiSelect_17() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___m_allowMultiSelect_17)); }
	inline bool get_m_allowMultiSelect_17() const { return ___m_allowMultiSelect_17; }
	inline bool* get_address_of_m_allowMultiSelect_17() { return &___m_allowMultiSelect_17; }
	inline void set_m_allowMultiSelect_17(bool value)
	{
		___m_allowMultiSelect_17 = value;
	}

	inline static int32_t get_offset_of_allowAppBundleBrowsing_18() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___allowAppBundleBrowsing_18)); }
	inline bool get_allowAppBundleBrowsing_18() const { return ___allowAppBundleBrowsing_18; }
	inline bool* get_address_of_allowAppBundleBrowsing_18() { return &___allowAppBundleBrowsing_18; }
	inline void set_allowAppBundleBrowsing_18(bool value)
	{
		___allowAppBundleBrowsing_18 = value;
	}

	inline static int32_t get_offset_of_showHiddenMacFiles_19() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___showHiddenMacFiles_19)); }
	inline bool get_showHiddenMacFiles_19() const { return ___showHiddenMacFiles_19; }
	inline bool* get_address_of_showHiddenMacFiles_19() { return &___showHiddenMacFiles_19; }
	inline void set_showHiddenMacFiles_19(bool value)
	{
		___showHiddenMacFiles_19 = value;
	}

	inline static int32_t get_offset_of_filterFiles_20() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___filterFiles_20)); }
	inline bool get_filterFiles_20() const { return ___filterFiles_20; }
	inline bool* get_address_of_filterFiles_20() { return &___filterFiles_20; }
	inline void set_filterFiles_20(bool value)
	{
		___filterFiles_20 = value;
	}

	inline static int32_t get_offset_of_filterFileExtensions_21() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___filterFileExtensions_21)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_filterFileExtensions_21() const { return ___filterFileExtensions_21; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_filterFileExtensions_21() { return &___filterFileExtensions_21; }
	inline void set_filterFileExtensions_21(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___filterFileExtensions_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filterFileExtensions_21), (void*)value);
	}

	inline static int32_t get_offset_of_useFilterButton_22() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___useFilterButton_22)); }
	inline bool get_useFilterButton_22() const { return ___useFilterButton_22; }
	inline bool* get_address_of_useFilterButton_22() { return &___useFilterButton_22; }
	inline void set_useFilterButton_22(bool value)
	{
		___useFilterButton_22 = value;
	}

	inline static int32_t get_offset_of_windowTabOffset_23() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___windowTabOffset_23)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_windowTabOffset_23() const { return ___windowTabOffset_23; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_windowTabOffset_23() { return &___windowTabOffset_23; }
	inline void set_windowTabOffset_23(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___windowTabOffset_23 = value;
	}

	inline static int32_t get_offset_of_windowTab_24() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___windowTab_24)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_windowTab_24() const { return ___windowTab_24; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_windowTab_24() { return &___windowTab_24; }
	inline void set_windowTab_24(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___windowTab_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowTab_24), (void*)value);
	}

	inline static int32_t get_offset_of_allowWindowResize_25() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___allowWindowResize_25)); }
	inline bool get_allowWindowResize_25() const { return ___allowWindowResize_25; }
	inline bool* get_address_of_allowWindowResize_25() { return &___allowWindowResize_25; }
	inline void set_allowWindowResize_25(bool value)
	{
		___allowWindowResize_25 = value;
	}

	inline static int32_t get_offset_of_allowWindowDrag_26() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___allowWindowDrag_26)); }
	inline bool get_allowWindowDrag_26() const { return ___allowWindowDrag_26; }
	inline bool* get_address_of_allowWindowDrag_26() { return &___allowWindowDrag_26; }
	inline void set_allowWindowDrag_26(bool value)
	{
		___allowWindowDrag_26 = value;
	}

	inline static int32_t get_offset_of_fileWindowID_27() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___fileWindowID_27)); }
	inline int32_t get_fileWindowID_27() const { return ___fileWindowID_27; }
	inline int32_t* get_address_of_fileWindowID_27() { return &___fileWindowID_27; }
	inline void set_fileWindowID_27(int32_t value)
	{
		___fileWindowID_27 = value;
	}

	inline static int32_t get_offset_of_messageWindowID_28() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___messageWindowID_28)); }
	inline int32_t get_messageWindowID_28() const { return ___messageWindowID_28; }
	inline int32_t* get_address_of_messageWindowID_28() { return &___messageWindowID_28; }
	inline void set_messageWindowID_28(int32_t value)
	{
		___messageWindowID_28 = value;
	}

	inline static int32_t get_offset_of_fileWindowInset_29() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___fileWindowInset_29)); }
	inline int32_t get_fileWindowInset_29() const { return ___fileWindowInset_29; }
	inline int32_t* get_address_of_fileWindowInset_29() { return &___fileWindowInset_29; }
	inline void set_fileWindowInset_29(int32_t value)
	{
		___fileWindowInset_29 = value;
	}

	inline static int32_t get_offset_of_defaultFileWindowRect_30() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___defaultFileWindowRect_30)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_defaultFileWindowRect_30() const { return ___defaultFileWindowRect_30; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_defaultFileWindowRect_30() { return &___defaultFileWindowRect_30; }
	inline void set_defaultFileWindowRect_30(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___defaultFileWindowRect_30 = value;
	}

	inline static int32_t get_offset_of_minWindowWidth_31() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___minWindowWidth_31)); }
	inline int32_t get_minWindowWidth_31() const { return ___minWindowWidth_31; }
	inline int32_t* get_address_of_minWindowWidth_31() { return &___minWindowWidth_31; }
	inline void set_minWindowWidth_31(int32_t value)
	{
		___minWindowWidth_31 = value;
	}

	inline static int32_t get_offset_of_minWindowHeight_32() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___minWindowHeight_32)); }
	inline int32_t get_minWindowHeight_32() const { return ___minWindowHeight_32; }
	inline int32_t* get_address_of_minWindowHeight_32() { return &___minWindowHeight_32; }
	inline void set_minWindowHeight_32(int32_t value)
	{
		___minWindowHeight_32 = value;
	}

	inline static int32_t get_offset_of_messageWindowSize_33() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___messageWindowSize_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_messageWindowSize_33() const { return ___messageWindowSize_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_messageWindowSize_33() { return &___messageWindowSize_33; }
	inline void set_messageWindowSize_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___messageWindowSize_33 = value;
	}

	inline static int32_t get_offset_of_guiDepth_34() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___guiDepth_34)); }
	inline int32_t get_guiDepth_34() const { return ___guiDepth_34; }
	inline int32_t* get_address_of_guiDepth_34() { return &___guiDepth_34; }
	inline void set_guiDepth_34(int32_t value)
	{
		___guiDepth_34 = value;
	}

	inline static int32_t get_offset_of_popupRect_35() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___popupRect_35)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_popupRect_35() const { return ___popupRect_35; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_popupRect_35() { return &___popupRect_35; }
	inline void set_popupRect_35(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___popupRect_35 = value;
	}

	inline static int32_t get_offset_of_buttonSize_36() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___buttonSize_36)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_buttonSize_36() const { return ___buttonSize_36; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_buttonSize_36() { return &___buttonSize_36; }
	inline void set_buttonSize_36(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___buttonSize_36 = value;
	}

	inline static int32_t get_offset_of_guiSkin_37() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___guiSkin_37)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_guiSkin_37() const { return ___guiSkin_37; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_guiSkin_37() { return &___guiSkin_37; }
	inline void set_guiSkin_37(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___guiSkin_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___guiSkin_37), (void*)value);
	}

	inline static int32_t get_offset_of_highlightTexture_38() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___highlightTexture_38)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_highlightTexture_38() const { return ___highlightTexture_38; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_highlightTexture_38() { return &___highlightTexture_38; }
	inline void set_highlightTexture_38(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___highlightTexture_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highlightTexture_38), (void*)value);
	}

	inline static int32_t get_offset_of_highlightTextColor_39() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___highlightTextColor_39)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_highlightTextColor_39() const { return ___highlightTextColor_39; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_highlightTextColor_39() { return &___highlightTextColor_39; }
	inline void set_highlightTextColor_39(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___highlightTextColor_39 = value;
	}

	inline static int32_t get_offset_of_messageWindowTexture_40() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___messageWindowTexture_40)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_messageWindowTexture_40() const { return ___messageWindowTexture_40; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_messageWindowTexture_40() { return &___messageWindowTexture_40; }
	inline void set_messageWindowTexture_40(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___messageWindowTexture_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageWindowTexture_40), (void*)value);
	}

	inline static int32_t get_offset_of_driveIcon_41() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___driveIcon_41)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_driveIcon_41() const { return ___driveIcon_41; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_driveIcon_41() { return &___driveIcon_41; }
	inline void set_driveIcon_41(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___driveIcon_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___driveIcon_41), (void*)value);
	}

	inline static int32_t get_offset_of_folderIcon_42() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___folderIcon_42)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_folderIcon_42() const { return ___folderIcon_42; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_folderIcon_42() { return &___folderIcon_42; }
	inline void set_folderIcon_42(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___folderIcon_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___folderIcon_42), (void*)value);
	}

	inline static int32_t get_offset_of_fileIcon_43() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___fileIcon_43)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_fileIcon_43() const { return ___fileIcon_43; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_fileIcon_43() { return &___fileIcon_43; }
	inline void set_fileIcon_43(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___fileIcon_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileIcon_43), (void*)value);
	}

	inline static int32_t get_offset_of__allowMultiSelect_44() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ____allowMultiSelect_44)); }
	inline bool get__allowMultiSelect_44() const { return ____allowMultiSelect_44; }
	inline bool* get_address_of__allowMultiSelect_44() { return &____allowMultiSelect_44; }
	inline void set__allowMultiSelect_44(bool value)
	{
		____allowMultiSelect_44 = value;
	}

	inline static int32_t get_offset_of_scrollPos_45() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___scrollPos_45)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_scrollPos_45() const { return ___scrollPos_45; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_scrollPos_45() { return &___scrollPos_45; }
	inline void set_scrollPos_45(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___scrollPos_45 = value;
	}

	inline static int32_t get_offset_of_selectedFileNumber_46() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___selectedFileNumber_46)); }
	inline int32_t get_selectedFileNumber_46() const { return ___selectedFileNumber_46; }
	inline int32_t* get_address_of_selectedFileNumber_46() { return &___selectedFileNumber_46; }
	inline void set_selectedFileNumber_46(int32_t value)
	{
		___selectedFileNumber_46 = value;
	}

	inline static int32_t get_offset_of_oldSelectedFileNumber_47() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___oldSelectedFileNumber_47)); }
	inline int32_t get_oldSelectedFileNumber_47() const { return ___oldSelectedFileNumber_47; }
	inline int32_t* get_address_of_oldSelectedFileNumber_47() { return &___oldSelectedFileNumber_47; }
	inline void set_oldSelectedFileNumber_47(int32_t value)
	{
		___oldSelectedFileNumber_47 = value;
	}

	inline static int32_t get_offset_of_anchorFileNumber_48() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___anchorFileNumber_48)); }
	inline int32_t get_anchorFileNumber_48() const { return ___anchorFileNumber_48; }
	inline int32_t* get_address_of_anchorFileNumber_48() { return &___anchorFileNumber_48; }
	inline void set_anchorFileNumber_48(int32_t value)
	{
		___anchorFileNumber_48 = value;
	}

	inline static int32_t get_offset_of_dirList_49() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___dirList_49)); }
	inline List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * get_dirList_49() const { return ___dirList_49; }
	inline List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 ** get_address_of_dirList_49() { return &___dirList_49; }
	inline void set_dirList_49(List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * value)
	{
		___dirList_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dirList_49), (void*)value);
	}

	inline static int32_t get_offset_of_fileList_50() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___fileList_50)); }
	inline List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * get_fileList_50() const { return ___fileList_50; }
	inline List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 ** get_address_of_fileList_50() { return &___fileList_50; }
	inline void set_fileList_50(List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * value)
	{
		___fileList_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileList_50), (void*)value);
	}

	inline static int32_t get_offset_of_iconDisplayList_51() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___iconDisplayList_51)); }
	inline TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* get_iconDisplayList_51() const { return ___iconDisplayList_51; }
	inline TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150** get_address_of_iconDisplayList_51() { return &___iconDisplayList_51; }
	inline void set_iconDisplayList_51(TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* value)
	{
		___iconDisplayList_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iconDisplayList_51), (void*)value);
	}

	inline static int32_t get_offset_of_fileDisplayList_52() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___fileDisplayList_52)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_fileDisplayList_52() const { return ___fileDisplayList_52; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_fileDisplayList_52() { return &___fileDisplayList_52; }
	inline void set_fileDisplayList_52(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___fileDisplayList_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileDisplayList_52), (void*)value);
	}

	inline static int32_t get_offset_of_dateDisplayList_53() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___dateDisplayList_53)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_dateDisplayList_53() const { return ___dateDisplayList_53; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_dateDisplayList_53() { return &___dateDisplayList_53; }
	inline void set_dateDisplayList_53(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___dateDisplayList_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateDisplayList_53), (void*)value);
	}

	inline static int32_t get_offset_of_multiFileList_54() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___multiFileList_54)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_multiFileList_54() const { return ___multiFileList_54; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_multiFileList_54() { return &___multiFileList_54; }
	inline void set_multiFileList_54(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___multiFileList_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___multiFileList_54), (void*)value);
	}

	inline static int32_t get_offset_of_scrollViewStyle_55() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___scrollViewStyle_55)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_scrollViewStyle_55() const { return ___scrollViewStyle_55; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_scrollViewStyle_55() { return &___scrollViewStyle_55; }
	inline void set_scrollViewStyle_55(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___scrollViewStyle_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollViewStyle_55), (void*)value);
	}

	inline static int32_t get_offset_of_scrollViewStyleSelected_56() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___scrollViewStyleSelected_56)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_scrollViewStyleSelected_56() const { return ___scrollViewStyleSelected_56; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_scrollViewStyleSelected_56() { return &___scrollViewStyleSelected_56; }
	inline void set_scrollViewStyleSelected_56(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___scrollViewStyleSelected_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollViewStyleSelected_56), (void*)value);
	}

	inline static int32_t get_offset_of_popupListStyle_57() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___popupListStyle_57)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_popupListStyle_57() const { return ___popupListStyle_57; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_popupListStyle_57() { return &___popupListStyle_57; }
	inline void set_popupListStyle_57(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___popupListStyle_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popupListStyle_57), (void*)value);
	}

	inline static int32_t get_offset_of_popupButtonStyle_58() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___popupButtonStyle_58)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_popupButtonStyle_58() const { return ___popupButtonStyle_58; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_popupButtonStyle_58() { return &___popupButtonStyle_58; }
	inline void set_popupButtonStyle_58(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___popupButtonStyle_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popupButtonStyle_58), (void*)value);
	}

	inline static int32_t get_offset_of_popupBoxStyle_59() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___popupBoxStyle_59)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_popupBoxStyle_59() const { return ___popupBoxStyle_59; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_popupBoxStyle_59() { return &___popupBoxStyle_59; }
	inline void set_popupBoxStyle_59(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___popupBoxStyle_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___popupBoxStyle_59), (void*)value);
	}

	inline static int32_t get_offset_of_messageWindowStyle_60() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___messageWindowStyle_60)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_messageWindowStyle_60() const { return ___messageWindowStyle_60; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_messageWindowStyle_60() { return &___messageWindowStyle_60; }
	inline void set_messageWindowStyle_60(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___messageWindowStyle_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageWindowStyle_60), (void*)value);
	}

	inline static int32_t get_offset_of_filePath_61() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___filePath_61)); }
	inline String_t* get_filePath_61() const { return ___filePath_61; }
	inline String_t** get_address_of_filePath_61() { return &___filePath_61; }
	inline void set_filePath_61(String_t* value)
	{
		___filePath_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filePath_61), (void*)value);
	}

	inline static int32_t get_offset_of_fileName_62() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___fileName_62)); }
	inline String_t* get_fileName_62() const { return ___fileName_62; }
	inline String_t** get_address_of_fileName_62() { return &___fileName_62; }
	inline void set_fileName_62(String_t* value)
	{
		___fileName_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileName_62), (void*)value);
	}

	inline static int32_t get_offset_of_oldFileName_63() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___oldFileName_63)); }
	inline String_t* get_oldFileName_63() const { return ___oldFileName_63; }
	inline String_t** get_address_of_oldFileName_63() { return &___oldFileName_63; }
	inline void set_oldFileName_63(String_t* value)
	{
		___oldFileName_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oldFileName_63), (void*)value);
	}

	inline static int32_t get_offset_of_frameDone_64() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___frameDone_64)); }
	inline bool get_frameDone_64() const { return ___frameDone_64; }
	inline bool* get_address_of_frameDone_64() { return &___frameDone_64; }
	inline void set_frameDone_64(bool value)
	{
		___frameDone_64 = value;
	}

	inline static int32_t get_offset_of_pathList_65() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___pathList_65)); }
	inline GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* get_pathList_65() const { return ___pathList_65; }
	inline GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C** get_address_of_pathList_65() { return &___pathList_65; }
	inline void set_pathList_65(GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* value)
	{
		___pathList_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathList_65), (void*)value);
	}

	inline static int32_t get_offset_of_showPopup_66() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___showPopup_66)); }
	inline bool get_showPopup_66() const { return ___showPopup_66; }
	inline bool* get_address_of_showPopup_66() { return &___showPopup_66; }
	inline void set_showPopup_66(bool value)
	{
		___showPopup_66 = value;
	}

	inline static int32_t get_offset_of_selectedPath_67() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___selectedPath_67)); }
	inline int32_t get_selectedPath_67() const { return ___selectedPath_67; }
	inline int32_t* get_address_of_selectedPath_67() { return &___selectedPath_67; }
	inline void set_selectedPath_67(int32_t value)
	{
		___selectedPath_67 = value;
	}

	inline static int32_t get_offset_of_pathChar_68() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___pathChar_68)); }
	inline Il2CppChar get_pathChar_68() const { return ___pathChar_68; }
	inline Il2CppChar* get_address_of_pathChar_68() { return &___pathChar_68; }
	inline void set_pathChar_68(Il2CppChar value)
	{
		___pathChar_68 = value;
	}

	inline static int32_t get_offset_of_windowsSystem_69() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___windowsSystem_69)); }
	inline bool get_windowsSystem_69() const { return ___windowsSystem_69; }
	inline bool* get_address_of_windowsSystem_69() { return &___windowsSystem_69; }
	inline void set_windowsSystem_69(bool value)
	{
		___windowsSystem_69 = value;
	}

	inline static int32_t get_offset_of_linuxSystem_70() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___linuxSystem_70)); }
	inline bool get_linuxSystem_70() const { return ___linuxSystem_70; }
	inline bool* get_address_of_linuxSystem_70() { return &___linuxSystem_70; }
	inline void set_linuxSystem_70(bool value)
	{
		___linuxSystem_70 = value;
	}

	inline static int32_t get_offset_of_osxSystem_71() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___osxSystem_71)); }
	inline bool get_osxSystem_71() const { return ___osxSystem_71; }
	inline bool* get_address_of_osxSystem_71() { return &___osxSystem_71; }
	inline void set_osxSystem_71(bool value)
	{
		___osxSystem_71 = value;
	}

	inline static int32_t get_offset_of_androidSystem_72() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___androidSystem_72)); }
	inline bool get_androidSystem_72() const { return ___androidSystem_72; }
	inline bool* get_address_of_androidSystem_72() { return &___androidSystem_72; }
	inline void set_androidSystem_72(bool value)
	{
		___androidSystem_72 = value;
	}

	inline static int32_t get_offset_of_numberOfVolumes_73() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___numberOfVolumes_73)); }
	inline int32_t get_numberOfVolumes_73() const { return ___numberOfVolumes_73; }
	inline int32_t* get_address_of_numberOfVolumes_73() { return &___numberOfVolumes_73; }
	inline void set_numberOfVolumes_73(int32_t value)
	{
		___numberOfVolumes_73 = value;
	}

	inline static int32_t get_offset_of_fileWindowOpen_74() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___fileWindowOpen_74)); }
	inline bool get_fileWindowOpen_74() const { return ___fileWindowOpen_74; }
	inline bool* get_address_of_fileWindowOpen_74() { return &___fileWindowOpen_74; }
	inline void set_fileWindowOpen_74(bool value)
	{
		___fileWindowOpen_74 = value;
	}

	inline static int32_t get_offset_of_fileWindowRect_75() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___fileWindowRect_75)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_fileWindowRect_75() const { return ___fileWindowRect_75; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_fileWindowRect_75() { return &___fileWindowRect_75; }
	inline void set_fileWindowRect_75(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___fileWindowRect_75 = value;
	}

	inline static int32_t get_offset_of_windowTitle_76() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___windowTitle_76)); }
	inline String_t* get_windowTitle_76() const { return ___windowTitle_76; }
	inline String_t** get_address_of_windowTitle_76() { return &___windowTitle_76; }
	inline void set_windowTitle_76(String_t* value)
	{
		___windowTitle_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowTitle_76), (void*)value);
	}

	inline static int32_t get_offset_of_fileWindowTitles_77() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___fileWindowTitles_77)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_fileWindowTitles_77() const { return ___fileWindowTitles_77; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_fileWindowTitles_77() { return &___fileWindowTitles_77; }
	inline void set_fileWindowTitles_77(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___fileWindowTitles_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileWindowTitles_77), (void*)value);
	}

	inline static int32_t get_offset_of_selectButtonText_78() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___selectButtonText_78)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_selectButtonText_78() const { return ___selectButtonText_78; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_selectButtonText_78() { return &___selectButtonText_78; }
	inline void set_selectButtonText_78(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___selectButtonText_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectButtonText_78), (void*)value);
	}

	inline static int32_t get_offset_of_fileType_79() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___fileType_79)); }
	inline int32_t get_fileType_79() const { return ___fileType_79; }
	inline int32_t* get_address_of_fileType_79() { return &___fileType_79; }
	inline void set_fileType_79(int32_t value)
	{
		___fileType_79 = value;
	}

	inline static int32_t get_offset_of_handleClicked_80() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___handleClicked_80)); }
	inline bool get_handleClicked_80() const { return ___handleClicked_80; }
	inline bool* get_address_of_handleClicked_80() { return &___handleClicked_80; }
	inline void set_handleClicked_80(bool value)
	{
		___handleClicked_80 = value;
	}

	inline static int32_t get_offset_of_clickedPosition_81() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___clickedPosition_81)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_clickedPosition_81() const { return ___clickedPosition_81; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_clickedPosition_81() { return &___clickedPosition_81; }
	inline void set_clickedPosition_81(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___clickedPosition_81 = value;
	}

	inline static int32_t get_offset_of_doubleClicked_82() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___doubleClicked_82)); }
	inline bool get_doubleClicked_82() const { return ___doubleClicked_82; }
	inline bool* get_address_of_doubleClicked_82() { return &___doubleClicked_82; }
	inline void set_doubleClicked_82(bool value)
	{
		___doubleClicked_82 = value;
	}

	inline static int32_t get_offset_of_originalWindowRect_83() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___originalWindowRect_83)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_originalWindowRect_83() const { return ___originalWindowRect_83; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_originalWindowRect_83() { return &___originalWindowRect_83; }
	inline void set_originalWindowRect_83(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___originalWindowRect_83 = value;
	}

	inline static int32_t get_offset_of_cmdKey1_84() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___cmdKey1_84)); }
	inline int32_t get_cmdKey1_84() const { return ___cmdKey1_84; }
	inline int32_t* get_address_of_cmdKey1_84() { return &___cmdKey1_84; }
	inline void set_cmdKey1_84(int32_t value)
	{
		___cmdKey1_84 = value;
	}

	inline static int32_t get_offset_of_cmdKey2_85() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___cmdKey2_85)); }
	inline int32_t get_cmdKey2_85() const { return ___cmdKey2_85; }
	inline int32_t* get_address_of_cmdKey2_85() { return &___cmdKey2_85; }
	inline void set_cmdKey2_85(int32_t value)
	{
		___cmdKey2_85 = value;
	}

	inline static int32_t get_offset_of_mousePos_86() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___mousePos_86)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mousePos_86() const { return ___mousePos_86; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mousePos_86() { return &___mousePos_86; }
	inline void set_mousePos_86(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mousePos_86 = value;
	}

	inline static int32_t get_offset_of_linePixelHeight_87() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___linePixelHeight_87)); }
	inline int32_t get_linePixelHeight_87() const { return ___linePixelHeight_87; }
	inline int32_t* get_address_of_linePixelHeight_87() { return &___linePixelHeight_87; }
	inline void set_linePixelHeight_87(int32_t value)
	{
		___linePixelHeight_87 = value;
	}

	inline static int32_t get_offset_of_iconWidth_88() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___iconWidth_88)); }
	inline int32_t get_iconWidth_88() const { return ___iconWidth_88; }
	inline int32_t* get_address_of_iconWidth_88() { return &___iconWidth_88; }
	inline void set_iconWidth_88(int32_t value)
	{
		___iconWidth_88 = value;
	}

	inline static int32_t get_offset_of_dateWidth_89() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___dateWidth_89)); }
	inline int32_t get_dateWidth_89() const { return ___dateWidth_89; }
	inline int32_t* get_address_of_dateWidth_89() { return &___dateWidth_89; }
	inline void set_dateWidth_89(int32_t value)
	{
		___dateWidth_89 = value;
	}

	inline static int32_t get_offset_of_selectFileInProgress_90() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___selectFileInProgress_90)); }
	inline bool get_selectFileInProgress_90() const { return ___selectFileInProgress_90; }
	inline bool* get_address_of_selectFileInProgress_90() { return &___selectFileInProgress_90; }
	inline void set_selectFileInProgress_90(bool value)
	{
		___selectFileInProgress_90 = value;
	}

	inline static int32_t get_offset_of_showFiles_91() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___showFiles_91)); }
	inline bool get_showFiles_91() const { return ___showFiles_91; }
	inline bool* get_address_of_showFiles_91() { return &___showFiles_91; }
	inline void set_showFiles_91(bool value)
	{
		___showFiles_91 = value;
	}

	inline static int32_t get_offset_of_delegate_92() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___delegate_92)); }
	inline __UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * get_delegate_92() const { return ___delegate_92; }
	inline __UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 ** get_address_of_delegate_92() { return &___delegate_92; }
	inline void set_delegate_92(__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * value)
	{
		___delegate_92 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegate_92), (void*)value);
	}

	inline static int32_t get_offset_of_multiDelegate_93() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___multiDelegate_93)); }
	inline __UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * get_multiDelegate_93() const { return ___multiDelegate_93; }
	inline __UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 ** get_address_of_multiDelegate_93() { return &___multiDelegate_93; }
	inline void set_multiDelegate_93(__UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * value)
	{
		___multiDelegate_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___multiDelegate_93), (void*)value);
	}

	inline static int32_t get_offset_of_sendCloseMessage_94() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___sendCloseMessage_94)); }
	inline bool get_sendCloseMessage_94() const { return ___sendCloseMessage_94; }
	inline bool* get_address_of_sendCloseMessage_94() { return &___sendCloseMessage_94; }
	inline void set_sendCloseMessage_94(bool value)
	{
		___sendCloseMessage_94 = value;
	}

	inline static int32_t get_offset_of_closeWindowFunction_95() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___closeWindowFunction_95)); }
	inline __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * get_closeWindowFunction_95() const { return ___closeWindowFunction_95; }
	inline __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 ** get_address_of_closeWindowFunction_95() { return &___closeWindowFunction_95; }
	inline void set_closeWindowFunction_95(__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * value)
	{
		___closeWindowFunction_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closeWindowFunction_95), (void*)value);
	}

	inline static int32_t get_offset_of_sendChangeMessage_96() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___sendChangeMessage_96)); }
	inline bool get_sendChangeMessage_96() const { return ___sendChangeMessage_96; }
	inline bool* get_address_of_sendChangeMessage_96() { return &___sendChangeMessage_96; }
	inline void set_sendChangeMessage_96(bool value)
	{
		___sendChangeMessage_96 = value;
	}

	inline static int32_t get_offset_of_changeWindowFunction_97() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___changeWindowFunction_97)); }
	inline __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * get_changeWindowFunction_97() const { return ___changeWindowFunction_97; }
	inline __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 ** get_address_of_changeWindowFunction_97() { return &___changeWindowFunction_97; }
	inline void set_changeWindowFunction_97(__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * value)
	{
		___changeWindowFunction_97 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeWindowFunction_97), (void*)value);
	}

	inline static int32_t get_offset_of_lastRect_98() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___lastRect_98)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_lastRect_98() const { return ___lastRect_98; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_lastRect_98() { return &___lastRect_98; }
	inline void set_lastRect_98(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___lastRect_98 = value;
	}

	inline static int32_t get_offset_of_clickTimer_99() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___clickTimer_99)); }
	inline float get_clickTimer_99() const { return ___clickTimer_99; }
	inline float* get_address_of_clickTimer_99() { return &___clickTimer_99; }
	inline void set_clickTimer_99(float value)
	{
		___clickTimer_99 = value;
	}

	inline static int32_t get_offset_of_clicked_100() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___clicked_100)); }
	inline bool get_clicked_100() const { return ___clicked_100; }
	inline bool* get_address_of_clicked_100() { return &___clicked_100; }
	inline void set_clicked_100(bool value)
	{
		___clicked_100 = value;
	}

	inline static int32_t get_offset_of_keyboardControlID_101() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___keyboardControlID_101)); }
	inline int32_t get_keyboardControlID_101() const { return ___keyboardControlID_101; }
	inline int32_t* get_address_of_keyboardControlID_101() { return &___keyboardControlID_101; }
	inline void set_keyboardControlID_101(int32_t value)
	{
		___keyboardControlID_101 = value;
	}

	inline static int32_t get_offset_of_windowOpenedCounter_102() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___windowOpenedCounter_102)); }
	inline int32_t get_windowOpenedCounter_102() const { return ___windowOpenedCounter_102; }
	inline int32_t* get_address_of_windowOpenedCounter_102() { return &___windowOpenedCounter_102; }
	inline void set_windowOpenedCounter_102(int32_t value)
	{
		___windowOpenedCounter_102 = value;
	}

	inline static int32_t get_offset_of_defaultSkin_103() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___defaultSkin_103)); }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * get_defaultSkin_103() const { return ___defaultSkin_103; }
	inline GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 ** get_address_of_defaultSkin_103() { return &___defaultSkin_103; }
	inline void set_defaultSkin_103(GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * value)
	{
		___defaultSkin_103 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultSkin_103), (void*)value);
	}

	inline static int32_t get_offset_of_textfieldRect_104() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___textfieldRect_104)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_textfieldRect_104() const { return ___textfieldRect_104; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_textfieldRect_104() { return &___textfieldRect_104; }
	inline void set_textfieldRect_104(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___textfieldRect_104 = value;
	}

	inline static int32_t get_offset_of_fileBoxRect_105() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___fileBoxRect_105)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_fileBoxRect_105() const { return ___fileBoxRect_105; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_fileBoxRect_105() { return &___fileBoxRect_105; }
	inline void set_fileBoxRect_105(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___fileBoxRect_105 = value;
	}

	inline static int32_t get_offset_of_fileAreaRect_106() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___fileAreaRect_106)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_fileAreaRect_106() const { return ___fileAreaRect_106; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_fileAreaRect_106() { return &___fileAreaRect_106; }
	inline void set_fileAreaRect_106(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___fileAreaRect_106 = value;
	}

	inline static int32_t get_offset_of_volumeBoxRect_107() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___volumeBoxRect_107)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_volumeBoxRect_107() const { return ___volumeBoxRect_107; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_volumeBoxRect_107() { return &___volumeBoxRect_107; }
	inline void set_volumeBoxRect_107(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___volumeBoxRect_107 = value;
	}

	inline static int32_t get_offset_of_saveFileAreaRect_108() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___saveFileAreaRect_108)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_saveFileAreaRect_108() const { return ___saveFileAreaRect_108; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_saveFileAreaRect_108() { return &___saveFileAreaRect_108; }
	inline void set_saveFileAreaRect_108(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___saveFileAreaRect_108 = value;
	}

	inline static int32_t get_offset_of_viewRect_109() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___viewRect_109)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_viewRect_109() const { return ___viewRect_109; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_viewRect_109() { return &___viewRect_109; }
	inline void set_viewRect_109(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___viewRect_109 = value;
	}

	inline static int32_t get_offset_of_bottomAreaSpace_110() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___bottomAreaSpace_110)); }
	inline int32_t get_bottomAreaSpace_110() const { return ___bottomAreaSpace_110; }
	inline int32_t* get_address_of_bottomAreaSpace_110() { return &___bottomAreaSpace_110; }
	inline void set_bottomAreaSpace_110(int32_t value)
	{
		___bottomAreaSpace_110 = value;
	}

	inline static int32_t get_offset_of_xIndent_111() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___xIndent_111)); }
	inline int32_t get_xIndent_111() const { return ___xIndent_111; }
	inline int32_t* get_address_of_xIndent_111() { return &___xIndent_111; }
	inline void set_xIndent_111(int32_t value)
	{
		___xIndent_111 = value;
	}

	inline static int32_t get_offset_of_yIndent_112() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___yIndent_112)); }
	inline int32_t get_yIndent_112() const { return ___yIndent_112; }
	inline int32_t* get_address_of_yIndent_112() { return &___yIndent_112; }
	inline void set_yIndent_112(int32_t value)
	{
		___yIndent_112 = value;
	}

	inline static int32_t get_offset_of_scrollbarWidth_113() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___scrollbarWidth_113)); }
	inline int32_t get_scrollbarWidth_113() const { return ___scrollbarWidth_113; }
	inline int32_t* get_address_of_scrollbarWidth_113() { return &___scrollbarWidth_113; }
	inline void set_scrollbarWidth_113(int32_t value)
	{
		___scrollbarWidth_113 = value;
	}

	inline static int32_t get_offset_of_buttonPositionX_114() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___buttonPositionX_114)); }
	inline int32_t get_buttonPositionX_114() const { return ___buttonPositionX_114; }
	inline int32_t* get_address_of_buttonPositionX_114() { return &___buttonPositionX_114; }
	inline void set_buttonPositionX_114(int32_t value)
	{
		___buttonPositionX_114 = value;
	}

	inline static int32_t get_offset_of_buttonPositionY_115() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___buttonPositionY_115)); }
	inline int32_t get_buttonPositionY_115() const { return ___buttonPositionY_115; }
	inline int32_t* get_address_of_buttonPositionY_115() { return &___buttonPositionY_115; }
	inline void set_buttonPositionY_115(int32_t value)
	{
		___buttonPositionY_115 = value;
	}

	inline static int32_t get_offset_of_multi_116() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___multi_116)); }
	inline bool get_multi_116() const { return ___multi_116; }
	inline bool* get_address_of_multi_116() { return &___multi_116; }
	inline void set_multi_116(bool value)
	{
		___multi_116 = value;
	}

	inline static int32_t get_offset_of_windowOffset_117() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___windowOffset_117)); }
	inline int32_t get_windowOffset_117() const { return ___windowOffset_117; }
	inline int32_t* get_address_of_windowOffset_117() { return &___windowOffset_117; }
	inline void set_windowOffset_117(int32_t value)
	{
		___windowOffset_117 = value;
	}

	inline static int32_t get_offset_of_storedPopupHeight_118() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___storedPopupHeight_118)); }
	inline int32_t get_storedPopupHeight_118() const { return ___storedPopupHeight_118; }
	inline int32_t* get_address_of_storedPopupHeight_118() { return &___storedPopupHeight_118; }
	inline void set_storedPopupHeight_118(int32_t value)
	{
		___storedPopupHeight_118 = value;
	}

	inline static int32_t get_offset_of_runCustomFunction_119() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___runCustomFunction_119)); }
	inline bool get_runCustomFunction_119() const { return ___runCustomFunction_119; }
	inline bool* get_address_of_runCustomFunction_119() { return &___runCustomFunction_119; }
	inline void set_runCustomFunction_119(bool value)
	{
		___runCustomFunction_119 = value;
	}

	inline static int32_t get_offset_of_customFunction_120() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___customFunction_120)); }
	inline __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * get_customFunction_120() const { return ___customFunction_120; }
	inline __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 ** get_address_of_customFunction_120() { return &___customFunction_120; }
	inline void set_customFunction_120(__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * value)
	{
		___customFunction_120 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customFunction_120), (void*)value);
	}

	inline static int32_t get_offset_of_doFolderFunction_121() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___doFolderFunction_121)); }
	inline bool get_doFolderFunction_121() const { return ___doFolderFunction_121; }
	inline bool* get_address_of_doFolderFunction_121() { return &___doFolderFunction_121; }
	inline void set_doFolderFunction_121(bool value)
	{
		___doFolderFunction_121 = value;
	}

	inline static int32_t get_offset_of_doFileFunction_122() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___doFileFunction_122)); }
	inline bool get_doFileFunction_122() const { return ___doFileFunction_122; }
	inline bool* get_address_of_doFileFunction_122() { return &___doFileFunction_122; }
	inline void set_doFileFunction_122(bool value)
	{
		___doFileFunction_122 = value;
	}

	inline static int32_t get_offset_of_folderFunction_123() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___folderFunction_123)); }
	inline __UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 * get_folderFunction_123() const { return ___folderFunction_123; }
	inline __UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 ** get_address_of_folderFunction_123() { return &___folderFunction_123; }
	inline void set_folderFunction_123(__UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 * value)
	{
		___folderFunction_123 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___folderFunction_123), (void*)value);
	}

	inline static int32_t get_offset_of_fileFunction_124() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___fileFunction_124)); }
	inline __UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * get_fileFunction_124() const { return ___fileFunction_124; }
	inline __UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 ** get_address_of_fileFunction_124() { return &___fileFunction_124; }
	inline void set_fileFunction_124(__UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * value)
	{
		___fileFunction_124 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileFunction_124), (void*)value);
	}

	inline static int32_t get_offset_of_useMobile_125() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___useMobile_125)); }
	inline bool get_useMobile_125() const { return ___useMobile_125; }
	inline bool* get_address_of_useMobile_125() { return &___useMobile_125; }
	inline void set_useMobile_125(bool value)
	{
		___useMobile_125 = value;
	}

	inline static int32_t get_offset_of_touchPos_126() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___touchPos_126)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_touchPos_126() const { return ___touchPos_126; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_touchPos_126() { return &___touchPos_126; }
	inline void set_touchPos_126(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___touchPos_126 = value;
	}

	inline static int32_t get_offset_of_touchScrolling_127() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___touchScrolling_127)); }
	inline bool get_touchScrolling_127() const { return ___touchScrolling_127; }
	inline bool* get_address_of_touchScrolling_127() { return &___touchScrolling_127; }
	inline void set_touchScrolling_127(bool value)
	{
		___touchScrolling_127 = value;
	}

	inline static int32_t get_offset_of_referenceWidth_128() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___referenceWidth_128)); }
	inline float get_referenceWidth_128() const { return ___referenceWidth_128; }
	inline float* get_address_of_referenceWidth_128() { return &___referenceWidth_128; }
	inline void set_referenceWidth_128(float value)
	{
		___referenceWidth_128 = value;
	}

	inline static int32_t get_offset_of_referenceHeight_129() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___referenceHeight_129)); }
	inline float get_referenceHeight_129() const { return ___referenceHeight_129; }
	inline float* get_address_of_referenceHeight_129() { return &___referenceHeight_129; }
	inline void set_referenceHeight_129(float value)
	{
		___referenceHeight_129 = value;
	}

	inline static int32_t get_offset_of_doScale_130() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___doScale_130)); }
	inline bool get_doScale_130() const { return ___doScale_130; }
	inline bool* get_address_of_doScale_130() { return &___doScale_130; }
	inline void set_doScale_130(bool value)
	{
		___doScale_130 = value;
	}

	inline static int32_t get_offset_of_messageWindowType_132() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___messageWindowType_132)); }
	inline int32_t get_messageWindowType_132() const { return ___messageWindowType_132; }
	inline int32_t* get_address_of_messageWindowType_132() { return &___messageWindowType_132; }
	inline void set_messageWindowType_132(int32_t value)
	{
		___messageWindowType_132 = value;
	}

	inline static int32_t get_offset_of_button1Text_133() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___button1Text_133)); }
	inline String_t* get_button1Text_133() const { return ___button1Text_133; }
	inline String_t** get_address_of_button1Text_133() { return &___button1Text_133; }
	inline void set_button1Text_133(String_t* value)
	{
		___button1Text_133 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button1Text_133), (void*)value);
	}

	inline static int32_t get_offset_of_button2Text_134() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___button2Text_134)); }
	inline String_t* get_button2Text_134() const { return ___button2Text_134; }
	inline String_t** get_address_of_button2Text_134() { return &___button2Text_134; }
	inline void set_button2Text_134(String_t* value)
	{
		___button2Text_134 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button2Text_134), (void*)value);
	}

	inline static int32_t get_offset_of_message_135() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___message_135)); }
	inline String_t* get_message_135() const { return ___message_135; }
	inline String_t** get_address_of_message_135() { return &___message_135; }
	inline void set_message_135(String_t* value)
	{
		___message_135 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_135), (void*)value);
	}

	inline static int32_t get_offset_of_showMessageWindow_136() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___showMessageWindow_136)); }
	inline bool get_showMessageWindow_136() const { return ___showMessageWindow_136; }
	inline bool* get_address_of_showMessageWindow_136() { return &___showMessageWindow_136; }
	inline void set_showMessageWindow_136(bool value)
	{
		___showMessageWindow_136 = value;
	}

	inline static int32_t get_offset_of_messageWindowTitle_137() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___messageWindowTitle_137)); }
	inline String_t* get_messageWindowTitle_137() const { return ___messageWindowTitle_137; }
	inline String_t** get_address_of_messageWindowTitle_137() { return &___messageWindowTitle_137; }
	inline void set_messageWindowTitle_137(String_t* value)
	{
		___messageWindowTitle_137 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageWindowTitle_137), (void*)value);
	}

	inline static int32_t get_offset_of_messageWindowRect_138() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___messageWindowRect_138)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_messageWindowRect_138() const { return ___messageWindowRect_138; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_messageWindowRect_138() { return &___messageWindowRect_138; }
	inline void set_messageWindowRect_138(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___messageWindowRect_138 = value;
	}

	inline static int32_t get_offset_of_confirm_139() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___confirm_139)); }
	inline bool get_confirm_139() const { return ___confirm_139; }
	inline bool* get_address_of_confirm_139() { return &___confirm_139; }
	inline void set_confirm_139(bool value)
	{
		___confirm_139 = value;
	}

	inline static int32_t get_offset_of_messageWindowDelay_140() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595, ___messageWindowDelay_140)); }
	inline bool get_messageWindowDelay_140() const { return ___messageWindowDelay_140; }
	inline bool* get_address_of_messageWindowDelay_140() { return &___messageWindowDelay_140; }
	inline void set_messageWindowDelay_140(bool value)
	{
		___messageWindowDelay_140 = value;
	}
};

struct UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595_StaticFields
{
public:
	// UniFileBrowser UniFileBrowser::use
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___use_131;

public:
	inline static int32_t get_offset_of_use_131() { return static_cast<int32_t>(offsetof(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595_StaticFields, ___use_131)); }
	inline UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * get_use_131() const { return ___use_131; }
	inline UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 ** get_address_of_use_131() { return &___use_131; }
	inline void set_use_131(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * value)
	{
		___use_131 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___use_131), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  m_Items[1];

public:
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * m_Items[1];

public:
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Texture[]
struct TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * m_Items[1];

public:
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IO.FileInfo[]
struct FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * m_Items[1];

public:
	inline FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * m_Items[1];

public:
	inline DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
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
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mDE1798563694D30022D3B7E1010347C573690B4A_gshared (Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m5EB3F127CD42F1ACA97F4DB8754C49F23B64D750_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2 * ___comparison0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB2258A4FA2E91ECE197E099A7E914964C2C4D333_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method);
// System.Void Boo.Lang.GenericGenerator`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericGenerator_1__ctor_mB3036526E77DD2D509F75DD6658EB28DE238DDB1_gshared (GenericGenerator_1_t943B00DDD0A2C272B3F9F8DDC20A1C1067EF2733 * __this, const RuntimeMethod* method);
// System.Void Boo.Lang.GenericGeneratorEnumerator`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericGeneratorEnumerator_1__ctor_m14B85998E8B9AE93185D05452018CFA9DCF1B95C_gshared (GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881 * __this, const RuntimeMethod* method);
// System.Boolean Boo.Lang.GenericGeneratorEnumerator`1<System.Object>::YieldDefault(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D_gshared (GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881 * __this, int32_t ___state0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 CompilerGenerated.__UniFileBrowser$callable5$1045_39__::Invoke(UniFileBrowser/FileData,UniFileBrowser/FileData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __UniFileBrowserU24callable5U241045_39___Invoke_m67CA7B7900D40179F5A7C83D304B5D9E284CD016 (__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * __this, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___a0, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___b1, const RuntimeMethod* method);
// System.Void CompilerGenerated.$adaptor$__UniFileBrowser$callable5$1045_39__$Comparison$1::.ctor(CompilerGenerated.__UniFileBrowser$callable5$1045_39__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241__ctor_m6E75FE68B601C873F4E32A28D15D17943EA9819F (U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_t58F0D3452CE02EB397BEA13641B6D66293F2D1FE * __this, __UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * ___from0, const RuntimeMethod* method);
// System.Void System.Comparison`1<UniFileBrowser/FileData>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mB2E8AEFEC41B1ECE4C66569970669C6BAD4CD067 (Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mDE1798563694D30022D3B7E1010347C573690B4A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void CompilerGenerated.__UniFileBrowser_closeWindowFunction$callable2$172_35__::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___Invoke_m728B5EE49D98F28DF86D6B5E0247267EA26ECD20 (__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * __this, const RuntimeMethod* method);
// System.Void CompilerGenerated.$adaptor$__UniFileBrowser_closeWindowFunction$callable2$172_35__$WindowFunction$0::.ctor(CompilerGenerated.__UniFileBrowser_closeWindowFunction$callable2$172_35__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240__ctor_m1CB8C7DACD731D46B8F5D366187520D4AFBE6F4B (U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_t9CCB352A2B8746FF2870821BE78AC8E08C870856 * __this, __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * ___from0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFunction__ctor_mCC6005520B912B8BFFAECE3612EB3334FF681238 (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C (String_t* ___path0, Type_t * ___systemTypeInstance1, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_GetStyle_m9E4D3C8C29B12DAEC9D521277BE3CA490A7C2ADC (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, String_t* ___styleName0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_clipping(UnityEngine.TextClipping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_clipping_m5CA669C810C52DB5465B702C64505DE5947B2180 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___other0, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21 (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A (GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_window_m1D0D746487C1EAA4AD25259F8BFA003BC18B4347 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_focused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_focused_mCCACC3F14B37F2C6C6DBEC87D707D270D86F4271 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_hover()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_hover_mB186BDBADD84DA7394576DBEAF29F3B54BD41E46 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_active_m2398E8F2A62E3A23519D8362D9BA0EC1FB6710F4 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onHover()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_onHover_m57AD140F8D9A7E11ED0DFED67F5695419B5182C0 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_onActive_m920F9572EE3C71DEACD7E990886457DF50BEFCC8 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * GUIStyle_get_onFocused_mCDE026A7E2223457F266C072A565270FC3015A42 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Void UniFileBrowser::SetupExtensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_SetupExtensions_mAC78E8ED5C97814ABA683EEBAC36A3571208D15E (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8 (String_t* ___lhs0, String_t* ___rhs1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_top()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mA371CD7669E8F6C9C9CE94F2765D81D1BFDDC9D1 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image0, const RuntimeMethod* method);
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_CalcHeight_m120220D334AEC6B33F4767EA54FE78CEC09FBCC9 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content0, float ___width1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GUIStyle_CalcSize_m3B4ADD2AF66EFF1A273C10C0F77741EAD96F3F2D (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content0, const RuntimeMethod* method);
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m242888E500DFD8CD675BDC455BC696AF47813954 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_get_fixedWidth_m3FE6013CACA3459C7E572E4B2CAF8CD7B54C6F1C (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * GUIStyle_get_margin_m1AF5B34B3BE9B514A8B189EAE16F976245C4A363 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_right_m889468939F3F926FE21F8E81E23C0342D45615C6 (RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UniFileBrowser/FileData>::.ctor()
inline void List_1__ctor_mC74928B06836BB87CC9BCB7845BECCB66E29AE4F (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::op_Equality(System.Array,System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeServices_op_Equality_mEAEE464CD798A288C1147DD9440EAB62149F01F8 (RuntimeArray * ___lhs0, RuntimeArray * ___rhs1, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void UniFileBrowser::GetCurrentFileInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_GetCurrentFileInfo_m998D5221BA5821F7809F2A1D9B68020C6F87C9B7 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2 (String_t* ___path0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E (const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196 (String_t* ___lhs0, RuntimeObject * ___rhs1, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_m8438BA185AD95D6C50E7A2CF9DD30FBA044CE0B2 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, const RuntimeMethod* method);
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_skin_mFCD039C47B3C327D9E0D867092DB353F2CEA796E (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_depth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_depth_m9DFE6E5FCC150C8B8B88A789DEBF12339AD4A26A (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443 (const RuntimeMethod* method);
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Void UniFileBrowser::FileWindowKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_FileWindowKeys_m700F5F72F6BBF34D77266F6B74C6091ED91E4BC6 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.GUI::get_matrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  GUI_get_matrix_m06096A34C4E286301DA2608369D93E392DD52F4D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_matrix_m071711DB6CD94992416D9E039AD6B25383B46222 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// System.Void CompilerGenerated.__UniFileBrowser_closeWindowFunction$callable2$172_35__::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_closeWindowFunctionU24callable2U24172_35____ctor_m6EF082A03C4489F96E4DBB9BE42BE4E9418A2840 (__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * __this, RuntimeObject * ___instance0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.GUI/WindowFunction CompilerGenerated.$adaptor$__UniFileBrowser_closeWindowFunction$callable2$172_35__$WindowFunction$0::Adapt(CompilerGenerated.__UniFileBrowser_closeWindowFunction$callable2$172_35__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_Adapt_mDFA0191AB61087E3D4E8939FD75795BC53C685D8 (__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * ___from0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  GUI_Window_mBBCDB1113F9C68D5FB57278F19039C5AC86AAB88 (int32_t ___id0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___clientRect1, WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * ___func2, String_t* ___text3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::FocusWindow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_FocusWindow_m585EBE5D144D1B09BC6A6A37E21468D06CA9A2E0 (int32_t ___windowID0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Event_get_mousePosition_m4D2A80BE0CF9A6D2CE8289C4815807493B3449A9 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  GUI_Window_m9CE23F6C5256D9A9D273C807B7A4422EBB7768D1 (int32_t ___id0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___clientRect1, WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * ___func2, String_t* ___text3, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style4, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::BringWindowToFront(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_BringWindowToFront_m4DC65886F85CF5051136813D3CEAA17679B95D9C (int32_t ___windowID0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_m51C65159B1706EB00CC962D7CD1CEC2EBD85BC3A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UniFileBrowser::UpdateRects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_UpdateRects_mE5FF9EC4D5D33BD3421E255A7203AC9443EE3274 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___lhs0, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DragWindow(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DragWindow_m4FCDD4B4C9314DB11ABAB977355BEBA3D71B1568 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150 (bool ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.GUI::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GUI_get_color_m61B524C99DD85A0DF405540C6E7453600E816FD5 (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_color_m627E2716FD33EF327E38EE0048CE44FAD77AB87F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUI::SelectionGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUI_SelectionGrid_m76F40863D7D1D75DFAD2702F28A9FDE9E7C43EBF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, int32_t ___selected1, GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* ___contents2, int32_t ___xCount3, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style4, const RuntimeMethod* method);
// System.Void UniFileBrowser::BuildPathList(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_BuildPathList_mC099046C6065995FBB960AB9CD404AB248A1CE22 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, int32_t ___pathEntry0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m399BC2C7522407D4642F5AE47E10325525EE83DF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * ___content1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UniFileBrowser/FileData>::get_Count()
inline int32_t List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void CompilerGenerated.__UniFileBrowser_delegate$callable0$169_24__::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_delegateU24callable0U24169_24___Invoke_m426486C356306933A79E4029F21547C278E09580 (__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * __this, String_t* ___arg00, const RuntimeMethod* method);
// System.Char UnityEngine.Event::get_character()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Event_get_character_mFDB32862186913735A8EC1B44F2455EC67C8403E (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Event::set_character(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_set_character_mD0A42F6FCA52E9112469AD0C8ADB09A422134CA8 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::SetNextControlName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_SetNextControlName_m7F64169AC6CCE777C7C819A737C73358D9AF9C60 (String_t* ___name0, const RuntimeMethod* method);
// System.String UnityEngine.GUI::TextField(UnityEngine.Rect,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUI_TextField_mAD5F9A9F69A17754713BE94A280819871B53129A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, int32_t ___maxLength2, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::FocusControl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_FocusControl_mEFB53CA11C8AAADA69717E58DB4BD615987F5EA4 (String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.GUIUtility::get_keyboardControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIUtility_get_keyboardControl_mC111A10FE792FA94E3859C5BC704D611F8768BE1 (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mA4BA00A35EAEA960B5F645B66F95DA0C59CB09D9 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GUI_BeginScrollView_mCADE8C6297209D588B382FB2CD7FD42290363061 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___scrollPosition1, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewRect2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Event::get_command()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_command_mB707BFF03AB7E7EE864991AA56682C7D5A0D7036 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Event::get_control()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_control_mF10EBF503DD0B63A6D955FCDC6561DCBB28DB58A (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Event::get_shift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_shift_m7B2926A0EEEBF7D6FEB12B14FCC130A37F5E4697 (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
inline bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m141E44DA79C0E4EBCBB01649D985401116A2BAAB (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(!0)
inline bool List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::EndScrollView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_EndScrollView_m31660D208D98FDEA919BBE1E590F3970633E66FC (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UniFileBrowser/FileData>::get_Item(System.Int32)
inline FileData_t4516F881D5D111630892E59176011C41763C9922 * List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_inline (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  FileData_t4516F881D5D111630892E59176011C41763C9922 * (*) (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Event::get_clickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_clickCount_mDB7E4C64716164376385CB037ACDD7A85F6FCAEF (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Collections.IEnumerator UniFileBrowser::SelectFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UniFileBrowser_SelectFile_mA8A8C93DEEAD7F3F6F8D5C6F226BAEDF96707678 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator UniFileBrowser::WaitForFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UniFileBrowser_WaitForFrame_m72146916668D7E3E06B2D10CC3EC066FD347278E (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method);
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F (const RuntimeMethod* method);
// System.Int32 UnityEngine.Touch::get_tapCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_tapCount_m3F2B62FA02EF54D5FA6C43ECB4A3A8854C5BA1F8 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mA260E627AEAED27F262A355B3930F1EE4A1C114B (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Collections.IEnumerator UniFileBrowser::DeleteFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UniFileBrowser_DeleteFile_mEF327437F4B6584519402B269858238168B07308 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mCBAEFC1F48A5BF6E20691EE14024CEBF93705018 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83 (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684 (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UniFileBrowser::CloseMessageWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_CloseMessageWindow_m5A5F2A2E566AEE5645993EF8673B693FEC7A4EB8 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, bool ___isConfirmed0, const RuntimeMethod* method);
// System.Void UniFileBrowser/$WaitForFrame$43::.ctor(UniFileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24WaitForFrameU2443__ctor_m7C69D489D152D3F7279C43CDF4A9F14BF4B50FFF (U24WaitForFrameU2443_tEB3ED2D8FBA19122142DE8C506A78471E97FD0DD * __this, UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___self_0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Object> UniFileBrowser/$WaitForFrame$43::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U24WaitForFrameU2443_GetEnumerator_m1E02328736A870F8905AD57EC41D3924529CA827 (U24WaitForFrameU2443_tEB3ED2D8FBA19122142DE8C506A78471E97FD0DD * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_keyCode_mBB8C639B5337ABE6A54423C604DAB0B9F3BB217E (Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * __this, const RuntimeMethod* method);
// System.Void UniFileBrowser::ReturnHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_ReturnHit_mFBCF4D2FC4D6C964B28E8982F06063EBE2EBA10A (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method);
// System.Void UniFileBrowser::EscapeHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_EscapeHit_mC537DAB30BAB12A26D30E777697BF89EFFCCC701 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.String UnityEngine.GUIContent::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_text_mA6BE9C17B069417994ED27EE812A39BB960D921A (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UniFileBrowser/FileData>::Clear()
inline void List_1_Clear_mD1BAFFFD7D448CF650E3B37D6CB19A2C7A7DC8FE (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.IO.DirectoryInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryInfo__ctor_m5F307F7E646135FC323F81EA93C36CC0CF6023A6 (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Boolean System.IO.DirectoryInfo::get_Exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DirectoryInfo_get_Exists_m5DE9581E7D052687604E113BCA4BBB55AE005C6B (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * __this, const RuntimeMethod* method);
// System.IO.FileInfo[] System.IO.DirectoryInfo::GetFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* DirectoryInfo_GetFiles_mE0A855E848B4393B13201605F3B1C0CBF7AA485C (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * __this, const RuntimeMethod* method);
// System.IO.DirectoryInfo[] System.IO.DirectoryInfo::GetDirectories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* DirectoryInfo_GetDirectories_m878DAFC093D31B9537B3B8C06C476E35F31A6578 (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * __this, const RuntimeMethod* method);
// System.Void UniFileBrowser::HandleError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_HandleError_m4C2B86B6F5C6791E105547CB548BE2E6842A80AE (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, String_t* ___errorMessage0, const RuntimeMethod* method);
// System.String System.IO.DirectoryInfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DirectoryInfo_get_Name_mEED706FA69EDD50668D24F9C2BC19D7117BFE78E_inline (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * __this, const RuntimeMethod* method);
// System.Boolean CompilerGenerated.__UniFileBrowser_folderFunction$callable3$200_30__::Invoke(System.IO.FileInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __UniFileBrowser_folderFunctionU24callable3U24200_30___Invoke_m412741DAD273088330273328AD9C4BC4EDE8DAA5 (__UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 * __this, FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* ___arg00, const RuntimeMethod* method);
// System.DateTime System.IO.FileSystemInfo::get_LastWriteTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  FileSystemInfo_get_LastWriteTime_mB554BEE74F863D47FD6856D5F644C8AED31C2049 (FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246 * __this, const RuntimeMethod* method);
// System.Void UniFileBrowser/FileData::.ctor(System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileData__ctor_m02C88AD7DDED87F8F8405D8E527BD23696FFFDC9 (FileData_t4516F881D5D111630892E59176011C41763C9922 * __this, String_t* ___name0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___date1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UniFileBrowser/FileData>::Add(!0)
inline void List_1_Add_m8D2932C79F29162CAA14572A4A7F9A67E7F33F7B (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * __this, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 *, FileData_t4516F881D5D111630892E59176011C41763C9922 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void CompilerGenerated.__UniFileBrowser$callable5$1045_39__::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowserU24callable5U241045_39____ctor_m75DE04E3137F3FC89DE965DD02A4B7B94199D13A (__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * __this, RuntimeObject * ___instance0, intptr_t ___method1, const RuntimeMethod* method);
// System.Comparison`1<UniFileBrowser/FileData> CompilerGenerated.$adaptor$__UniFileBrowser$callable5$1045_39__$Comparison$1::Adapt(CompilerGenerated.__UniFileBrowser$callable5$1045_39__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808 * U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_Adapt_mF4DFB384C87372E0D257D96043EA6C5DA9FAFCBC (__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * ___from0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UniFileBrowser/FileData>::Sort(System.Comparison`1<!0>)
inline void List_1_Sort_m859E46C87C2FE6DA66A1D93BB3DD45EF70D9BE1A (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * __this, Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808 * ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 *, Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808 *, const RuntimeMethod*))List_1_Sort_m5EB3F127CD42F1ACA97F4DB8754C49F23B64D750_gshared)(__this, ___comparison0, method);
}
// System.Void System.Collections.Generic.List`1<UniFileBrowser/FileData>::Reverse()
inline void List_1_Reverse_m1CFBBFA0E8E7215EC287CF76CD2FC91956ED237F (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 *, const RuntimeMethod*))List_1_Reverse_mB2258A4FA2E91ECE197E099A7E914964C2C4D333_gshared)(__this, method);
}
// System.String[] System.IO.Directory::GetLogicalDrives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Directory_GetLogicalDrives_mFF05D99E48D4DD65129D8D95ED8B5CB66A6F3BD7 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UniFileBrowser/FileData>::Insert(System.Int32,!0)
inline void List_1_Insert_m785A6161436EF2BE5AB238713235497B8BC0A54F (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * __this, int32_t ___index0, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 *, int32_t, FileData_t4516F881D5D111630892E59176011C41763C9922 *, const RuntimeMethod*))List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared)(__this, ___index0, ___item1, method);
}
// System.String System.IO.FileInfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FileInfo_get_Name_mB64F7CA75D5DBB38DB9EDA9F31D94F1E32AEE61B_inline (FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * __this, const RuntimeMethod* method);
// System.Boolean CompilerGenerated.__UniFileBrowser_fileFunction$callable4$201_28__::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __UniFileBrowser_fileFunctionU24callable4U24201_28___Invoke_m44DFC81146C770F3A299DAA9AFB9D26AEAD0F0C6 (__UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * __this, String_t* ___arg00, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 UnityScript.Lang.Extensions::get_length(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_get_length_m9FCAD4E2868B4444E8B1B40D2CD2D7612953B66F (RuntimeArray * ___a0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Reverse()
inline void List_1_Reverse_m1E5577BF004DE03902798CEF8774918EA824DB3A (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_Reverse_mB2258A4FA2E91ECE197E099A7E914964C2C4D333_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.GUIContent::.ctor(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m35D28B9D2CCDB8705680A9C2D52DF6AD21B558E5 (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * __this, String_t* ___text0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Boolean Boo.Lang.Runtime.RuntimeServices::EqualityOperator(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeServices_EqualityOperator_m9C27795DC1E3F147C733F19197CBDD0A826023EC (RuntimeObject * ___lhs0, RuntimeObject * ___rhs1, const RuntimeMethod* method);
// System.Void UniFileBrowser::ShowError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_ShowError_mBC71A624A1607B92041389681C51209659144A7D (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Void UniFileBrowser::ShowFileWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_ShowFileWindow_mF7E1BA9CE65D8809E2E5A707D2AA71ABECF76A1D (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Rect UniFileBrowser::GetClampedWindowRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  UniFileBrowser_GetClampedWindowRect_mD90F62C131EC68DCC491B8DDEAA3B742BA819B65 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___newWindowRect0, const RuntimeMethod* method);
// System.Void UniFileBrowser/$DeleteFile$46::.ctor(UniFileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24DeleteFileU2446__ctor_mE7C74E0C71B78ABD18D9CAE15C35C1F930548B51 (U24DeleteFileU2446_t771A02EE85189F947F984381B8F1205E04BBCA6C * __this, UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___self_0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Object> UniFileBrowser/$DeleteFile$46::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U24DeleteFileU2446_GetEnumerator_m8DF8D0DBC22DC20BDE9FFFA4CAD2558D1770469D (U24DeleteFileU2446_t771A02EE85189F947F984381B8F1205E04BBCA6C * __this, const RuntimeMethod* method);
// System.Void UniFileBrowser/$SelectFile$52::.ctor(UniFileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24SelectFileU2452__ctor_mD2B2C0216B044259FACC6F28FC455B06C7504A72 (U24SelectFileU2452_t59507280F0FFEE23152D862BA29D307EE37B3018 * __this, UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___self_0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Object> UniFileBrowser/$SelectFile$52::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U24SelectFileU2452_GetEnumerator_mDB677D664CC1E28898123F9CAD2E1160AF3E485A (U24SelectFileU2452_t59507280F0FFEE23152D862BA29D307EE37B3018 * __this, const RuntimeMethod* method);
// System.Int32 System.String::CompareTo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareTo_m01AF97548BE97133E2DC648B2E63BB16708354CF (String_t* __this, String_t* ___strB0, const RuntimeMethod* method);
// System.Int32 System.DateTime::CompareTo(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_CompareTo_m2864B0ABAE4B8748D4092D1D16AE56EE0B248F93 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RuntimeServices_Coerce_m8FD484375DFD743EE446C0B81103985D51E687D1 (RuntimeObject * ___value0, Type_t * ___toType1, const RuntimeMethod* method);
// System.Void CompilerGenerated.__UniFileBrowser_multiDelegate$callable1$170_29__::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_multiDelegateU24callable1U24170_29___Invoke_mCF52D0D24C89E326FD61052AC8A555D945FAB3FB (__UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___arg00, const RuntimeMethod* method);
// System.Void Boo.Lang.GenericGenerator`1<System.Object>::.ctor()
inline void GenericGenerator_1__ctor_mB3036526E77DD2D509F75DD6658EB28DE238DDB1 (GenericGenerator_1_t943B00DDD0A2C272B3F9F8DDC20A1C1067EF2733 * __this, const RuntimeMethod* method)
{
	((  void (*) (GenericGenerator_1_t943B00DDD0A2C272B3F9F8DDC20A1C1067EF2733 *, const RuntimeMethod*))GenericGenerator_1__ctor_mB3036526E77DD2D509F75DD6658EB28DE238DDB1_gshared)(__this, method);
}
// System.Void UniFileBrowser/$DeleteFile$46/$::.ctor(UniFileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24__ctor_m17D35BB111771BF9F52D01FCC2C9559FAAE1B822 (U24_tC71DB695A6A6AE1094EF6480C5E5CE674D46E27D * __this, UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___self_0, const RuntimeMethod* method);
// System.Void UniFileBrowser/$SelectFile$52/$::.ctor(UniFileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24__ctor_m5E068108DD51281B548DFAC7EC4FBCDA24269FD8 (U24_t86F66B546C8692DE25AF9BE2AEB9D6540B4EC581 * __this, UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___self_0, const RuntimeMethod* method);
// System.Void UniFileBrowser/$WaitForFrame$43/$::.ctor(UniFileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24__ctor_mE24E6CE0E5B291E5DD680F5494CC6B7AFB416452 (U24_tD4B10AB9517274557C79311963549E5DE4BB0326 * __this, UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___self_0, const RuntimeMethod* method);
// System.Void Boo.Lang.GenericGeneratorEnumerator`1<System.Object>::.ctor()
inline void GenericGeneratorEnumerator_1__ctor_m14B85998E8B9AE93185D05452018CFA9DCF1B95C (GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881 * __this, const RuntimeMethod* method)
{
	((  void (*) (GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881 *, const RuntimeMethod*))GenericGeneratorEnumerator_1__ctor_m14B85998E8B9AE93185D05452018CFA9DCF1B95C_gshared)(__this, method);
}
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.Void UniFileBrowser::ShowConfirmMessage(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_ShowConfirmMessage_m42C90A19ECE3B1E34257BACB89965D42B960A5CF (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, String_t* ___title0, String_t* ___msg1, String_t* ___b1Text2, String_t* ___b2Text3, const RuntimeMethod* method);
// System.Boolean Boo.Lang.GenericGeneratorEnumerator`1<System.Object>::YieldDefault(System.Int32)
inline bool GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D (GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	return ((  bool (*) (GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881 *, int32_t, const RuntimeMethod*))GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D_gshared)(__this, ___state0, method);
}
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77 (String_t* ___path0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> UniFileBrowser::GetMultiFileNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * UniFileBrowser_GetMultiFileNames_mA72A9A777AA08BCFE66320BA4EFD0897597B91BE (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A (String_t* ___path0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CompilerGenerated.U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241::.ctor(CompilerGenerated.__UniFileBrowserU24callable5U241045_39__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241__ctor_m6E75FE68B601C873F4E32A28D15D17943EA9819F (U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_t58F0D3452CE02EB397BEA13641B6D66293F2D1FE * __this, __UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * ___from0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * L_0 = ___from0;
		__this->set_U24from_0(L_0);
		return;
	}
}
// System.Int32 CompilerGenerated.U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241::Invoke(UniFileBrowser_FileData,UniFileBrowser_FileData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_Invoke_mE4A9D074943C978E5EC0834DDEAA70D41E422FDD (U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_t58F0D3452CE02EB397BEA13641B6D66293F2D1FE * __this, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___x0, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___y1, const RuntimeMethod* method)
{
	{
		__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * L_0 = __this->get_U24from_0();
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_1 = ___x0;
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_2 = ___y1;
		NullCheck(L_0);
		int32_t L_3 = __UniFileBrowserU24callable5U241045_39___Invoke_m67CA7B7900D40179F5A7C83D304B5D9E284CD016(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Comparison`1<UniFileBrowser_FileData> CompilerGenerated.U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241::Adapt(CompilerGenerated.__UniFileBrowserU24callable5U241045_39__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808 * U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_Adapt_mF4DFB384C87372E0D257D96043EA6C5DA9FAFCBC (__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * ___from0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_Adapt_mF4DFB384C87372E0D257D96043EA6C5DA9FAFCBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * L_0 = ___from0;
		U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_t58F0D3452CE02EB397BEA13641B6D66293F2D1FE * L_1 = (U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_t58F0D3452CE02EB397BEA13641B6D66293F2D1FE *)il2cpp_codegen_object_new(U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_t58F0D3452CE02EB397BEA13641B6D66293F2D1FE_il2cpp_TypeInfo_var);
		U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241__ctor_m6E75FE68B601C873F4E32A28D15D17943EA9819F(L_1, L_0, /*hidden argument*/NULL);
		Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808 * L_2 = (Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808 *)il2cpp_codegen_object_new(Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808_il2cpp_TypeInfo_var);
		Comparison_1__ctor_mB2E8AEFEC41B1ECE4C66569970669C6BAD4CD067(L_2, L_1, (intptr_t)((intptr_t)U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_Invoke_mE4A9D074943C978E5EC0834DDEAA70D41E422FDD_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_mB2E8AEFEC41B1ECE4C66569970669C6BAD4CD067_RuntimeMethod_var);
		return L_2;
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
// System.Void CompilerGenerated.U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240::.ctor(CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240__ctor_m1CB8C7DACD731D46B8F5D366187520D4AFBE6F4B (U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_t9CCB352A2B8746FF2870821BE78AC8E08C870856 * __this, __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * ___from0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * L_0 = ___from0;
		__this->set_U24from_0(L_0);
		return;
	}
}
// System.Void CompilerGenerated.U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_Invoke_m0AFAE9AD08202F6E3E79BED84E74DD78049607A6 (U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_t9CCB352A2B8746FF2870821BE78AC8E08C870856 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	{
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * L_0 = __this->get_U24from_0();
		NullCheck(L_0);
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___Invoke_m728B5EE49D98F28DF86D6B5E0247267EA26ECD20(L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GUI_WindowFunction CompilerGenerated.U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240::Adapt(CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_Adapt_mDFA0191AB61087E3D4E8939FD75795BC53C685D8 (__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * ___from0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_Adapt_mDFA0191AB61087E3D4E8939FD75795BC53C685D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * L_0 = ___from0;
		U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_t9CCB352A2B8746FF2870821BE78AC8E08C870856 * L_1 = (U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_t9CCB352A2B8746FF2870821BE78AC8E08C870856 *)il2cpp_codegen_object_new(U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_t9CCB352A2B8746FF2870821BE78AC8E08C870856_il2cpp_TypeInfo_var);
		U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240__ctor_m1CB8C7DACD731D46B8F5D366187520D4AFBE6F4B(L_1, L_0, /*hidden argument*/NULL);
		WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * L_2 = (WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D *)il2cpp_codegen_object_new(WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D_il2cpp_TypeInfo_var);
		WindowFunction__ctor_mCC6005520B912B8BFFAECE3612EB3334FF681238(L_2, L_1, (intptr_t)((intptr_t)U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_Invoke_m0AFAE9AD08202F6E3E79BED84E74DD78049607A6_RuntimeMethod_var), /*hidden argument*/NULL);
		return L_2;
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
// System.Void UniFileBrowser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser__ctor_mE0397E93A1B6BF3819DF54FF70456006A3AFDACC (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser__ctor_mE0397E93A1B6BF3819DF54FF70456006A3AFDACC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		__this->set_maxFileNameLength_7(((int32_t)32));
		__this->set_preventIllegalCharInput_8((bool)1);
		__this->set_illegalChars_9(_stringLiteral834774B30FFE5301DE63BE052354245D80A0515E);
		__this->set_dateWidthAdd_15(8);
		__this->set_sortType_16(0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (((float)((float)0))), (((float)((float)((int32_t)-2)))), /*hidden argument*/NULL);
		__this->set_windowTabOffset_23(L_0);
		__this->set_allowWindowResize_25((bool)1);
		__this->set_allowWindowDrag_26((bool)1);
		__this->set_fileWindowID_27(((int32_t)50));
		__this->set_messageWindowID_28(((int32_t)51));
		__this->set_fileWindowInset_29(((int32_t)25));
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_1), (((float)((float)((int32_t)400)))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)500)))), (((float)((float)((int32_t)600)))), /*hidden argument*/NULL);
		__this->set_defaultFileWindowRect_30(L_1);
		__this->set_minWindowWidth_31(((int32_t)435));
		__this->set_minWindowHeight_32(((int32_t)300));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (((float)((float)((int32_t)400)))), (((float)((float)((int32_t)160)))), /*hidden argument*/NULL);
		__this->set_messageWindowSize_33(L_2);
		__this->set_guiDepth_34((-1));
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), (((float)((float)0))), (((float)((float)0))), (((float)((float)((int32_t)300)))), (((float)((float)((int32_t)33)))), /*hidden argument*/NULL);
		__this->set_popupRect_35(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), (((float)((float)((int32_t)72)))), (((float)((float)((int32_t)35)))), /*hidden argument*/NULL);
		__this->set_buttonSize_36(L_4);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		__this->set_highlightTextColor_39(L_5);
		__this->set_selectedFileNumber_46((-1));
		__this->set_oldSelectedFileNumber_47((-1));
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_fileName_62(L_6);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_oldFileName_63(L_7);
		__this->set_frameDone_64((bool)1);
		NullCheck(_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		Il2CppChar L_8 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, 0, /*hidden argument*/NULL);
		__this->set_pathChar_68(L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralF1FE63F4DB1CBC8CA33219217727E8ECDD9A2105);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF1FE63F4DB1CBC8CA33219217727E8ECDD9A2105);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral4CE5824710B48AA9AF19A875B80C8A6FDC6D42EE);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4CE5824710B48AA9AF19A875B80C8A6FDC6D42EE);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral19031CB3C050C644F250AE0037F4E69F1D5923E2);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral19031CB3C050C644F250AE0037F4E69F1D5923E2);
		__this->set_fileWindowTitles_77(L_12);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralCE863626383155D02291456632E72C0FBEC22C3C);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralCE863626383155D02291456632E72C0FBEC22C3C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral48419E0AC7A3C471E758A3F53E24363D7898657B);
		__this->set_selectButtonText_78(L_16);
		__this->set_fileType_79(0);
		__this->set_showFiles_91((bool)1);
		__this->set_confirm_139((bool)1);
		return;
	}
}
// System.Boolean UniFileBrowser::get_allowMultiSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniFileBrowser_get_allowMultiSelect_mAAFBDC58684E6D5C3DAF22CBA1625B36C1CDF578 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__allowMultiSelect_44();
		return L_0;
	}
}
// System.Void UniFileBrowser::set_allowMultiSelect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_set_allowMultiSelect_m6562875BF444C2B7D7217195C296A96E799339FE (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_fileWindowOpen_74();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0017;
	}

IL_0010:
	{
		bool L_1 = ___value0;
		__this->set__allowMultiSelect_44(L_1);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UniFileBrowser::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_Reset_mADF36F91E70C584788A35354245F9CB4DAC5CB65 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_Reset_mADF36F91E70C584788A35354245F9CB4DAC5CB65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C(_stringLiteral045EFDEA2D7E2CCB4B8D11E2D5A76A000CF3D853, L_1, /*hidden argument*/NULL);
		__this->set_guiSkin_37(((GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 *)CastclassSealed((RuntimeObject*)L_2, GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6_il2cpp_TypeInfo_var)));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_0_0_0_var) };
		Type_t * L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_5 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C(_stringLiteral338854CB87D7CBEA2844E4370496CD9A285DDA90, L_4, /*hidden argument*/NULL);
		__this->set_highlightTexture_38(((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)CastclassClass((RuntimeObject*)L_5, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var)));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_0_0_0_var) };
		Type_t * L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_8 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C(_stringLiteralE4DE818995890E5DE8418D5CEA1C6E5B2C3ED5B4, L_7, /*hidden argument*/NULL);
		__this->set_windowTab_24(((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)CastclassClass((RuntimeObject*)L_8, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var)));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_0_0_0_var) };
		Type_t * L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_11 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C(_stringLiteral2D60207EEC173E2C3DD4AD0AA80DD6D240946B03, L_10, /*hidden argument*/NULL);
		__this->set_driveIcon_41(((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)CastclassClass((RuntimeObject*)L_11, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var)));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_12 = { reinterpret_cast<intptr_t> (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_0_0_0_var) };
		Type_t * L_13 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_12, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_14 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C(_stringLiteral1D7CB2951C8BC338BD373409997F0F1A1C03B5E9, L_13, /*hidden argument*/NULL);
		__this->set_folderIcon_42(((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)CastclassClass((RuntimeObject*)L_14, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var)));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_0_0_0_var) };
		Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_17 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C(_stringLiteral36616AC56424A742ECA312B0217A7585FB8BBD56, L_16, /*hidden argument*/NULL);
		__this->set_fileIcon_43(((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)CastclassClass((RuntimeObject*)L_17, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var)));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_0_0_0_var) };
		Type_t * L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_18, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_20 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C(_stringLiteral6B04ED8F4E6D9C8004F698426CD954DD3089B951, L_19, /*hidden argument*/NULL);
		__this->set_messageWindowTexture_40(((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)CastclassClass((RuntimeObject*)L_20, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void UniFileBrowser::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_Awake_m5ADE2BF4BA296566AA2745AF32D5D9210847B5D1 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_Awake_m5ADE2BF4BA296566AA2745AF32D5D9210847B5D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * V_3 = NULL;
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_4 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 12);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_0 = __this->get_guiSkin_37();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralA8941B7955D0CF0C7F143A3BD6B23BF334955614, /*hidden argument*/NULL);
		goto IL_04c2;
	}

IL_0026:
	{
		bool L_2 = __this->get_m_allowMultiSelect_17();
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_3, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_multiFileList_54(L_3);
		bool L_4 = __this->get_m_allowMultiSelect_17();
		__this->set__allowMultiSelect_44(L_4);
	}

IL_0048:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_5 = ((UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595_StaticFields*)il2cpp_codegen_static_fields_for(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595_il2cpp_TypeInfo_var))->get_use_131();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0063;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
		goto IL_04c2;
	}

IL_0063:
	{
		((UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595_StaticFields*)il2cpp_codegen_static_fields_for(UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595_il2cpp_TypeInfo_var))->set_use_131(__this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(__this, /*hidden argument*/NULL);
		__this->set_showPopup_66((bool)0);
		__this->set_selectedPath_67((-1));
		VirtActionInvoker0::Invoke(11 /* System.Void UniFileBrowser::SetDefaultPath() */, __this);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7 = __this->get_defaultFileWindowRect_30();
		__this->set_fileWindowRect_75(L_7);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_8 = __this->get_address_of_fileWindowRect_75();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_9 = __this->get_address_of_fileWindowRect_75();
		float L_10 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_9, /*hidden argument*/NULL);
		int32_t L_11 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_12 = __this->get_address_of_fileWindowRect_75();
		float L_13 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_14 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_10, ((float)il2cpp_codegen_subtract((float)(((float)((float)L_11))), (float)L_13)), /*hidden argument*/NULL);
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_8, L_14, /*hidden argument*/NULL);
	}

IL_00bc:
	try
	{ // begin try (depth: 1)
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_15 = __this->get_guiSkin_37();
		NullCheck(L_15);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_16 = GUISkin_GetStyle_m9E4D3C8C29B12DAEC9D521277BE3CA490A7C2ADC(L_15, _stringLiteral04114E3283B1AFEA53A723D1B01F2CD54D738FD9, /*hidden argument*/NULL);
		__this->set_scrollViewStyle_55(L_16);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_17 = __this->get_scrollViewStyle_55();
		NullCheck(L_17);
		GUIStyle_set_clipping_m5CA669C810C52DB5465B702C64505DE5947B2180(L_17, 1, /*hidden argument*/NULL);
		goto IL_00f8;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00e3;
		throw e;
	}

CATCH_00e3:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t *)__exception_local);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralB3DD414CD92C5C45955E9BDB2A370E7C18133081, /*hidden argument*/NULL);
			goto IL_04c2;
		}

IL_00f3:
		{
			; // IL_00f3: leave IL_00f8
		}
	} // end catch (depth: 1)

IL_00f8:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_18 = __this->get_scrollViewStyle_55();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_19 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_19, L_18, /*hidden argument*/NULL);
		__this->set_scrollViewStyleSelected_56(L_19);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_20 = __this->get_scrollViewStyleSelected_56();
		NullCheck(L_20);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_21 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_20, /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_22 = __this->get_highlightTexture_38();
		NullCheck(L_21);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_21, ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_22, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_23 = __this->get_scrollViewStyleSelected_56();
		NullCheck(L_23);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_24 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_23, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25 = __this->get_highlightTextColor_39();
		NullCheck(L_24);
		GUIStyleState_set_textColor_mB4B61B9CAC1D6B4694471A2BB1191B5F0D5D764A(L_24, L_25, /*hidden argument*/NULL);
	}

IL_013a:
	try
	{ // begin try (depth: 1)
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_26 = __this->get_guiSkin_37();
		NullCheck(L_26);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_27 = GUISkin_GetStyle_m9E4D3C8C29B12DAEC9D521277BE3CA490A7C2ADC(L_26, _stringLiteral8970F3C3981E59CC745B19076894EB566A24867F, /*hidden argument*/NULL);
		__this->set_popupListStyle_57(L_27);
		goto IL_016a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0155;
		throw e;
	}

CATCH_0155:
	{ // begin catch(System.Exception)
		{
			V_1 = ((Exception_t *)__exception_local);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralE7B5F3E7696C1FB8AA658FEF172523BC86269EEB, /*hidden argument*/NULL);
			goto IL_04c2;
		}

IL_0165:
		{
			; // IL_0165: leave IL_016a
		}
	} // end catch (depth: 1)

IL_016a:
	try
	{ // begin try (depth: 1)
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_28 = __this->get_guiSkin_37();
		NullCheck(L_28);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_29 = GUISkin_GetStyle_m9E4D3C8C29B12DAEC9D521277BE3CA490A7C2ADC(L_28, _stringLiteral4BF33A987AF31E188877D5BB2C480A259B04C42C, /*hidden argument*/NULL);
		__this->set_popupButtonStyle_58(L_29);
		goto IL_019a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0185;
		throw e;
	}

CATCH_0185:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t *)__exception_local);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralD3677C608C6E71DA6FE9707A6DCCDD1358F8C97A, /*hidden argument*/NULL);
			goto IL_04c2;
		}

IL_0195:
		{
			; // IL_0195: leave IL_019a
		}
	} // end catch (depth: 1)

IL_019a:
	try
	{ // begin try (depth: 1)
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_30 = __this->get_guiSkin_37();
		NullCheck(L_30);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_31 = GUISkin_GetStyle_m9E4D3C8C29B12DAEC9D521277BE3CA490A7C2ADC(L_30, _stringLiteral7E1D36471C1D22EF9C82982252711098F0296F24, /*hidden argument*/NULL);
		__this->set_popupBoxStyle_59(L_31);
		goto IL_01ca;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_01b5;
		throw e;
	}

CATCH_01b5:
	{ // begin catch(System.Exception)
		{
			V_3 = ((Exception_t *)__exception_local);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralD2E3B1F9789F94E0505B9EB225EFF832DE39EA5A, /*hidden argument*/NULL);
			goto IL_04c2;
		}

IL_01c5:
		{
			; // IL_01c5: leave IL_01ca
		}
	} // end catch (depth: 1)

IL_01ca:
	{
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_32 = __this->get_guiSkin_37();
		NullCheck(L_32);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_33 = GUISkin_get_window_m1D0D746487C1EAA4AD25259F8BFA003BC18B4347(L_32, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_34 = (GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 *)il2cpp_codegen_object_new(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_il2cpp_TypeInfo_var);
		GUIStyle__ctor_mF096C292507D1BE25B6C458FB771CFC4509CE95B(L_34, L_33, /*hidden argument*/NULL);
		__this->set_messageWindowStyle_60(L_34);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_35 = __this->get_messageWindowStyle_60();
		NullCheck(L_35);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_36 = GUIStyle_get_normal_mAD82F2E3C188C5B112B82807398D61B9998E9CDE(L_35, /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_37 = __this->get_messageWindowTexture_40();
		NullCheck(L_36);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_36, ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_37, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_38 = __this->get_messageWindowStyle_60();
		NullCheck(L_38);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_39 = GUIStyle_get_focused_mCCACC3F14B37F2C6C6DBEC87D707D270D86F4271(L_38, /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_40 = __this->get_messageWindowTexture_40();
		NullCheck(L_39);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_39, ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_40, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_41 = __this->get_messageWindowStyle_60();
		NullCheck(L_41);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_42 = GUIStyle_get_hover_mB186BDBADD84DA7394576DBEAF29F3B54BD41E46(L_41, /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_43 = __this->get_messageWindowTexture_40();
		NullCheck(L_42);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_42, ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_43, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_44 = __this->get_messageWindowStyle_60();
		NullCheck(L_44);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_45 = GUIStyle_get_active_m2398E8F2A62E3A23519D8362D9BA0EC1FB6710F4(L_44, /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_46 = __this->get_messageWindowTexture_40();
		NullCheck(L_45);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_45, ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_46, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_47 = __this->get_messageWindowStyle_60();
		NullCheck(L_47);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_48 = GUIStyle_get_onHover_m57AD140F8D9A7E11ED0DFED67F5695419B5182C0(L_47, /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_49 = __this->get_messageWindowTexture_40();
		NullCheck(L_48);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_48, ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_49, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_50 = __this->get_messageWindowStyle_60();
		NullCheck(L_50);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_51 = GUIStyle_get_onActive_m920F9572EE3C71DEACD7E990886457DF50BEFCC8(L_50, /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_52 = __this->get_messageWindowTexture_40();
		NullCheck(L_51);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_51, ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_52, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_53 = __this->get_messageWindowStyle_60();
		NullCheck(L_53);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_54 = GUIStyle_get_onFocused_mCDE026A7E2223457F266C072A565270FC3015A42(L_53, /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_55 = __this->get_messageWindowTexture_40();
		NullCheck(L_54);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_54, ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_55, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_56 = __this->get_messageWindowStyle_60();
		NullCheck(L_56);
		GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * L_57 = GUIStyle_get_onActive_m920F9572EE3C71DEACD7E990886457DF50BEFCC8(L_56, /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_58 = __this->get_messageWindowTexture_40();
		NullCheck(L_57);
		GUIStyleState_set_background_mA80B6ED2555C6551933E2D0ECA5081FC254B6A21(L_57, ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)IsInstSealed((RuntimeObject*)L_58, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		UniFileBrowser_SetupExtensions_mAC78E8ED5C97814ABA683EEBAC36A3571208D15E(__this, /*hidden argument*/NULL);
		bool L_59 = __this->get_autoAddExtension_4();
		if (!L_59)
		{
			goto IL_02f4;
		}
	}
	{
		String_t* L_60 = __this->get_addedExtension_5();
		NullCheck(L_60);
		bool L_61 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_60, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_02f4;
		}
	}
	{
		String_t* L_62 = __this->get_addedExtension_5();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_63 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_62, /*hidden argument*/NULL);
		__this->set_addedExtension_5(L_63);
	}

IL_02f4:
	{
		int32_t L_64 = __this->get_maxFileNameLength_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		int32_t L_65 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_64, 3, ((int32_t)128), /*hidden argument*/NULL);
		__this->set_maxFileNameLength_7(L_65);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_66 = __this->get_guiSkin_37();
		NullCheck(L_66);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_67 = GUISkin_GetStyle_m9E4D3C8C29B12DAEC9D521277BE3CA490A7C2ADC(L_66, _stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA, /*hidden argument*/NULL);
		NullCheck(L_67);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_68 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		int32_t L_69 = RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1(L_68, /*hidden argument*/NULL);
		__this->set_windowOffset_117(L_69);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_70 = __this->get_address_of_popupRect_35();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_71 = __this->get_address_of_popupRect_35();
		float L_72 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_71, /*hidden argument*/NULL);
		int32_t L_73 = __this->get_fileWindowInset_29();
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_70, ((float)il2cpp_codegen_add((float)L_72, (float)(((float)((float)L_73))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_74 = __this->get_address_of_popupRect_35();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_75 = __this->get_address_of_popupRect_35();
		float L_76 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_75, /*hidden argument*/NULL);
		int32_t L_77 = __this->get_fileWindowInset_29();
		int32_t L_78 = __this->get_windowOffset_117();
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_74, ((float)il2cpp_codegen_add((float)L_76, (float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)L_78))))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_79 = __this->get_address_of_popupRect_35();
		float L_80 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_79, /*hidden argument*/NULL);
		__this->set_storedPopupHeight_118((((int32_t)((int32_t)L_80))));
		bool L_81 = __this->get_limitToInitialFolder_11();
		if (!L_81)
		{
			goto IL_0398;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_82 = __this->get_address_of_popupRect_35();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_82, (((float)((float)0))), /*hidden argument*/NULL);
	}

IL_0398:
	{
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_83 = __this->get_guiSkin_37();
		NullCheck(L_83);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_84 = GUISkin_GetStyle_m9E4D3C8C29B12DAEC9D521277BE3CA490A7C2ADC(L_83, _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, /*hidden argument*/NULL);
		NullCheck(L_84);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_85 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_84, /*hidden argument*/NULL);
		NullCheck(L_85);
		int32_t L_86 = RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910(L_85, /*hidden argument*/NULL);
		__this->set_xIndent_111(L_86);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_87 = __this->get_guiSkin_37();
		NullCheck(L_87);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_88 = GUISkin_GetStyle_m9E4D3C8C29B12DAEC9D521277BE3CA490A7C2ADC(L_87, _stringLiteral3C4F52AE03EA8FEF5DEAA4BF1DCF2792C970C821, /*hidden argument*/NULL);
		NullCheck(L_88);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_89 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		int32_t L_90 = RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1(L_89, /*hidden argument*/NULL);
		__this->set_yIndent_112(L_90);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_91 = __this->get_scrollViewStyle_55();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_92 = __this->get_folderIcon_42();
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_93 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_mA371CD7669E8F6C9C9CE94F2765D81D1BFDDC9D1(L_93, L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		float L_94 = GUIStyle_CalcHeight_m120220D334AEC6B33F4767EA54FE78CEC09FBCC9(L_91, L_93, (1.0f), /*hidden argument*/NULL);
		__this->set_linePixelHeight_87((((int32_t)((int32_t)L_94))));
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_95 = __this->get_scrollViewStyle_55();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_96 = __this->get_folderIcon_42();
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_97 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_mA371CD7669E8F6C9C9CE94F2765D81D1BFDDC9D1(L_97, L_96, /*hidden argument*/NULL);
		NullCheck(L_95);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_98 = GUIStyle_CalcSize_m3B4ADD2AF66EFF1A273C10C0F77741EAD96F3F2D(L_95, L_97, /*hidden argument*/NULL);
		V_5 = L_98;
		float L_99 = (&V_5)->get_x_0();
		__this->set_iconWidth_88((((int32_t)((int32_t)L_99))));
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_100 = __this->get_scrollViewStyle_55();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		String_t* L_101 = DateTime_ToString_m242888E500DFD8CD675BDC455BC696AF47813954((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var))->get_address_of_MinValue_31()), /*hidden argument*/NULL);
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_102 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0(L_102, L_101, /*hidden argument*/NULL);
		NullCheck(L_100);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_103 = GUIStyle_CalcSize_m3B4ADD2AF66EFF1A273C10C0F77741EAD96F3F2D(L_100, L_102, /*hidden argument*/NULL);
		V_6 = L_103;
		float L_104 = (&V_6)->get_x_0();
		int32_t L_105 = __this->get_dateWidthAdd_15();
		__this->set_dateWidth_89((((int32_t)((int32_t)((float)il2cpp_codegen_add((float)L_104, (float)(((float)((float)L_105)))))))));
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_106 = __this->get_guiSkin_37();
		NullCheck(L_106);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_107 = GUISkin_GetStyle_m9E4D3C8C29B12DAEC9D521277BE3CA490A7C2ADC(L_106, _stringLiteralF3D711BA856837A5D3C34CA2103E03C173D6F4C7, /*hidden argument*/NULL);
		V_4 = L_107;
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_108 = V_4;
		NullCheck(L_108);
		float L_109 = GUIStyle_get_fixedWidth_m3FE6013CACA3459C7E572E4B2CAF8CD7B54C6F1C(L_108, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_110 = V_4;
		NullCheck(L_110);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_111 = GUIStyle_get_margin_m1AF5B34B3BE9B514A8B189EAE16F976245C4A363(L_110, /*hidden argument*/NULL);
		NullCheck(L_111);
		int32_t L_112 = RectOffset_get_left_m3B3066D09D8C9C94826258386B609CDBFFF11910(L_111, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_113 = V_4;
		NullCheck(L_113);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_114 = GUIStyle_get_margin_m1AF5B34B3BE9B514A8B189EAE16F976245C4A363(L_113, /*hidden argument*/NULL);
		NullCheck(L_114);
		int32_t L_115 = RectOffset_get_right_m889468939F3F926FE21F8E81E23C0342D45615C6(L_114, /*hidden argument*/NULL);
		__this->set_scrollbarWidth_113((((int32_t)((int32_t)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_109, (float)(((float)((float)L_112))))), (float)(((float)((float)L_115)))))))));
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_116 = (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 *)il2cpp_codegen_object_new(List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692_il2cpp_TypeInfo_var);
		List_1__ctor_mC74928B06836BB87CC9BCB7845BECCB66E29AE4F(L_116, /*hidden argument*/List_1__ctor_mC74928B06836BB87CC9BCB7845BECCB66E29AE4F_RuntimeMethod_var);
		__this->set_dirList_49(L_116);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_117 = (List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 *)il2cpp_codegen_object_new(List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692_il2cpp_TypeInfo_var);
		List_1__ctor_mC74928B06836BB87CC9BCB7845BECCB66E29AE4F(L_117, /*hidden argument*/List_1__ctor_mC74928B06836BB87CC9BCB7845BECCB66E29AE4F_RuntimeMethod_var);
		__this->set_fileList_50(L_117);
		int32_t L_118 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((((int32_t)L_118) == ((int32_t)8)))
		{
			goto IL_04bb;
		}
	}
	{
		int32_t L_119 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_119) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_04c2;
		}
	}

IL_04bb:
	{
		__this->set_useMobile_125((bool)1);
	}

IL_04c2:
	{
		return;
	}
}
// System.Void UniFileBrowser::SetFileExtensions(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_SetFileExtensions_mEE6A130F98C345A8EAB8EB658C09A9272D3C9EFF (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___extensions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_SetFileExtensions_mEE6A130F98C345A8EAB8EB658C09A9272D3C9EFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___extensions0;
		__this->set_filterFileExtensions_21(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___extensions0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		bool L_2 = RuntimeServices_op_Equality_mEAEE464CD798A288C1147DD9440EAB62149F01F8((RuntimeArray *)(RuntimeArray *)L_1, (RuntimeArray *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___extensions0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_3);
		int32_t L_4 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002a;
		}
	}

IL_001e:
	{
		__this->set_filterFiles_20((bool)0);
		goto IL_0031;
	}

IL_002a:
	{
		__this->set_filterFiles_20((bool)1);
	}

IL_0031:
	{
		UniFileBrowser_SetupExtensions_mAC78E8ED5C97814ABA683EEBAC36A3571208D15E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniFileBrowser::SetupExtensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_SetupExtensions_mAC78E8ED5C97814ABA683EEBAC36A3571208D15E (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_SetupExtensions_mAC78E8ED5C97814ABA683EEBAC36A3571208D15E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_1 = 0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_filterFileExtensions_21();
		V_2 = L_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_2;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		int32_t L_2 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		goto IL_003b;
	}

IL_0015:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = V_2;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		bool L_7 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_6, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = V_2;
		int32_t L_9 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = V_2;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_14 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_14);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (String_t*)L_14);
	}

IL_0037:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003b:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_3;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void UniFileBrowser::SetAutoAddedExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_SetAutoAddedExtension_m05B69448DCA8DB304371AA55BA378430F0F7E5AB (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, String_t* ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_SetAutoAddedExtension_m05B69448DCA8DB304371AA55BA378430F0F7E5AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___extension0;
		NullCheck(L_0);
		bool L_1 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_0, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___extension0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_3 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_2, /*hidden argument*/NULL);
		___extension0 = L_3;
	}

IL_0021:
	{
		String_t* L_4 = ___extension0;
		__this->set_addedExtension_5(L_4);
		return;
	}
}
// System.Void UniFileBrowser::RefreshFileList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_RefreshFileList_mFE8EB0FA2AD5F514FB37297F49E5FF5AB1C4FDA1 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_RefreshFileList_mFE8EB0FA2AD5F514FB37297F49E5FF5AB1C4FDA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniFileBrowser_GetCurrentFileInfo_m998D5221BA5821F7809F2A1D9B68020C6F87C9B7(__this, /*hidden argument*/NULL);
		bool L_0 = __this->get_autoAddExtension_4();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_1 = __this->get_fileName_62();
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2(L_1, /*hidden argument*/NULL);
		String_t* L_3 = __this->get_addedExtension_5();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_4 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(L_2, L_3, /*hidden argument*/NULL);
		__this->set_fileName_62(L_4);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UniFileBrowser::SetDefaultPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_SetDefaultPath_mC20BE76F3E30BB25F5421EDAB140DA9E1001E94A (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_SetDefaultPath_mC20BE76F3E30BB25F5421EDAB140DA9E1001E94A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = Application_get_dataPath_m026509C15A1E58FC6461EE7EC336EC18C9C2271E(/*hidden argument*/NULL);
		__this->set_filePath_61(L_0);
		int32_t L_1 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)0))))
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_3 = __this->get_filePath_61();
		String_t* L_4 = __this->get_filePath_61();
		Il2CppChar L_5 = __this->get_pathChar_68();
		NullCheck(L_4);
		int32_t L_6 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_7 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_3, 0, L_6, /*hidden argument*/NULL);
		Il2CppChar L_8 = __this->get_pathChar_68();
		Il2CppChar L_9 = L_8;
		RuntimeObject * L_10 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_11 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_7, L_10, /*hidden argument*/NULL);
		__this->set_filePath_61(L_11);
		__this->set_cmdKey1_84(((int32_t)310));
		__this->set_cmdKey2_85(((int32_t)309));
		__this->set_osxSystem_71((bool)1);
		goto IL_0242;
	}

IL_006d:
	{
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_13 = __this->get_filePath_61();
		String_t* L_14 = __this->get_filePath_61();
		Il2CppChar L_15 = __this->get_pathChar_68();
		NullCheck(L_14);
		int32_t L_16 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_17 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_13, 0, L_16, /*hidden argument*/NULL);
		__this->set_filePath_61(L_17);
		String_t* L_18 = __this->get_filePath_61();
		String_t* L_19 = __this->get_filePath_61();
		Il2CppChar L_20 = __this->get_pathChar_68();
		NullCheck(L_19);
		int32_t L_21 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_22 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_18, 0, L_21, /*hidden argument*/NULL);
		Il2CppChar L_23 = __this->get_pathChar_68();
		Il2CppChar L_24 = L_23;
		RuntimeObject * L_25 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_24);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_26 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_22, L_25, /*hidden argument*/NULL);
		__this->set_filePath_61(L_26);
		__this->set_cmdKey1_84(((int32_t)310));
		__this->set_cmdKey2_85(((int32_t)309));
		__this->set_osxSystem_71((bool)1);
		goto IL_0242;
	}

IL_00ec:
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)7)))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			goto IL_017b;
		}
	}

IL_00fa:
	{
		NullCheck(_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		Il2CppChar L_29 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, 0, /*hidden argument*/NULL);
		__this->set_pathChar_68(L_29);
		String_t* L_30 = __this->get_filePath_61();
		NullCheck(L_30);
		String_t* L_31 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_30, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, /*hidden argument*/NULL);
		__this->set_filePath_61(L_31);
		String_t* L_32 = __this->get_filePath_61();
		String_t* L_33 = __this->get_filePath_61();
		Il2CppChar L_34 = __this->get_pathChar_68();
		NullCheck(L_33);
		int32_t L_35 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		String_t* L_36 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_32, 0, L_35, /*hidden argument*/NULL);
		Il2CppChar L_37 = __this->get_pathChar_68();
		Il2CppChar L_38 = L_37;
		RuntimeObject * L_39 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_38);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_40 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_36, L_39, /*hidden argument*/NULL);
		__this->set_filePath_61(L_40);
		__this->set_cmdKey1_84(((int32_t)306));
		__this->set_cmdKey2_85(((int32_t)305));
		__this->set_windowsSystem_69((bool)1);
		goto IL_0242;
	}

IL_017b:
	{
		int32_t L_41 = V_0;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_01d8;
		}
	}
	{
		String_t* L_42 = __this->get_filePath_61();
		String_t* L_43 = __this->get_filePath_61();
		Il2CppChar L_44 = __this->get_pathChar_68();
		NullCheck(L_43);
		int32_t L_45 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_43, L_44, /*hidden argument*/NULL);
		NullCheck(L_42);
		String_t* L_46 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_42, 0, L_45, /*hidden argument*/NULL);
		Il2CppChar L_47 = __this->get_pathChar_68();
		Il2CppChar L_48 = L_47;
		RuntimeObject * L_49 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_48);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_50 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_46, L_49, /*hidden argument*/NULL);
		__this->set_filePath_61(L_50);
		__this->set_cmdKey1_84(((int32_t)306));
		__this->set_cmdKey2_85(((int32_t)305));
		__this->set_linuxSystem_70((bool)1);
		goto IL_0242;
	}

IL_01d8:
	{
		int32_t L_51 = V_0;
		if ((!(((uint32_t)L_51) == ((uint32_t)8))))
		{
			goto IL_01ff;
		}
	}
	{
		String_t* L_52 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		Il2CppChar L_53 = __this->get_pathChar_68();
		Il2CppChar L_54 = L_53;
		RuntimeObject * L_55 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_54);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_56 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_52, L_55, /*hidden argument*/NULL);
		__this->set_filePath_61(L_56);
		goto IL_0242;
	}

IL_01ff:
	{
		int32_t L_57 = V_0;
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_022e;
		}
	}
	{
		String_t* L_58 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		Il2CppChar L_59 = __this->get_pathChar_68();
		Il2CppChar L_60 = L_59;
		RuntimeObject * L_61 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_60);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_62 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_58, L_61, /*hidden argument*/NULL);
		__this->set_filePath_61(L_62);
		__this->set_androidSystem_72((bool)1);
		goto IL_0242;
	}

IL_022e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral4E8C8B0D6FA29409F84D56DD107D6CC736115269, /*hidden argument*/NULL);
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		goto IL_0242;
	}

IL_0242:
	{
		return;
	}
}
// System.Boolean UniFileBrowser::FileWindowOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniFileBrowser_FileWindowOpen_m3195ACA74D37AEFF3E34F8F45A86DD182BECFD0E (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_fileWindowOpen_74();
		return L_0;
	}
}
// UnityEngine.Rect UniFileBrowser::GetFileWindowRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  UniFileBrowser_GetFileWindowRect_mEE938D4FC0FCAABCE9C7D6E20F6385FEE09B1B64 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_0 = __this->get_fileWindowRect_75();
		return L_0;
	}
}
// System.Void UniFileBrowser::UpdateRects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_UpdateRects_mE5FF9EC4D5D33BD3421E255A7203AC9443EE3274 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B2_2 = NULL;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B1_2 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B3_3 = NULL;
	{
		int32_t L_0 = __this->get_fileWindowInset_29();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_1 = __this->get_address_of_textfieldRect_104();
		float L_2 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_1, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_fileType_79();
		G_B1_0 = L_2;
		G_B1_1 = (((float)((float)L_0)));
		G_B1_2 = __this;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			G_B2_0 = L_2;
			G_B2_1 = (((float)((float)L_0)));
			G_B2_2 = __this;
			goto IL_0033;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_4 = __this->get_address_of_textfieldRect_104();
		float L_5 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_4, /*hidden argument*/NULL);
		G_B3_0 = ((float)il2cpp_codegen_add((float)L_5, (float)(((float)((float)((int32_t)10))))));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0035;
	}

IL_0033:
	{
		G_B3_0 = (((float)((float)0)));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0035:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_6), G_B3_2, ((float)il2cpp_codegen_add((float)G_B3_1, (float)G_B3_0)), (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		NullCheck(G_B3_3);
		G_B3_3->set_fileBoxRect_105(L_6);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_7 = __this->get_address_of_fileBoxRect_105();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_8 = __this->get_address_of_fileWindowRect_75();
		float L_9 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = __this->get_fileWindowInset_29();
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_7, ((float)il2cpp_codegen_subtract((float)L_9, (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2))))))), /*hidden argument*/NULL);
		bool L_11 = __this->get_showVolumes_12();
		if (!L_11)
		{
			goto IL_01e5;
		}
	}
	{
		bool L_12 = __this->get_volumesAreSeparate_13();
		if (!L_12)
		{
			goto IL_01e5;
		}
	}
	{
		bool L_13 = __this->get_limitToInitialFolder_11();
		if (L_13)
		{
			goto IL_01e5;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_14 = __this->get_fileBoxRect_105();
		__this->set_volumeBoxRect_107(L_14);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_15 = __this->get_address_of_volumeBoxRect_107();
		int32_t L_16 = __this->get_numberOfVolumes_73();
		int32_t L_17 = __this->get_linePixelHeight_87();
		int32_t L_18 = __this->get_yIndent_112();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_15, (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)L_17)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)2))))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_19 = __this->get_address_of_fileBoxRect_105();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_20 = __this->get_address_of_fileBoxRect_105();
		float L_21 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_20, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_22 = __this->get_address_of_volumeBoxRect_107();
		float L_23 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_22, /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_19, ((float)il2cpp_codegen_add((float)L_21, (float)((float)il2cpp_codegen_add((float)L_23, (float)(((float)((float)((int32_t)10)))))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_24 = __this->get_address_of_fileBoxRect_105();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_25 = __this->get_address_of_fileWindowRect_75();
		float L_26 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_25, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_27 = __this->get_address_of_fileBoxRect_105();
		float L_28 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_27, /*hidden argument*/NULL);
		int32_t L_29 = __this->get_bottomAreaSpace_110();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_24, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_26, (float)L_28)), (float)(((float)((float)L_29))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_30 = __this->get_fileBoxRect_105();
		__this->set_fileAreaRect_106(L_30);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_31 = __this->get_address_of_fileAreaRect_106();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_32 = __this->get_address_of_fileAreaRect_106();
		float L_33 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_32, /*hidden argument*/NULL);
		int32_t L_34 = __this->get_xIndent_111();
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_31, ((float)il2cpp_codegen_add((float)L_33, (float)(((float)((float)L_34))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_35 = __this->get_address_of_fileAreaRect_106();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_36 = __this->get_address_of_fileAreaRect_106();
		float L_37 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_36, /*hidden argument*/NULL);
		int32_t L_38 = __this->get_yIndent_112();
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_35, ((float)il2cpp_codegen_add((float)L_37, (float)(((float)((float)L_38))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_39 = __this->get_address_of_fileAreaRect_106();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_40 = __this->get_address_of_fileAreaRect_106();
		float L_41 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_40, /*hidden argument*/NULL);
		int32_t L_42 = __this->get_xIndent_111();
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_39, ((float)il2cpp_codegen_subtract((float)L_41, (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)2))))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_43 = __this->get_address_of_fileAreaRect_106();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_44 = __this->get_address_of_fileAreaRect_106();
		float L_45 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_44, /*hidden argument*/NULL);
		int32_t L_46 = __this->get_yIndent_112();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_43, ((float)il2cpp_codegen_subtract((float)L_45, (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_46, (int32_t)2))))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_47 = __this->get_address_of_fileAreaRect_106();
		float L_48 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_47, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_49 = __this->get_address_of_fileAreaRect_106();
		float L_50 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_49, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_51 = __this->get_address_of_fileAreaRect_106();
		float L_52 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_51, /*hidden argument*/NULL);
		int32_t L_53 = __this->get_scrollbarWidth_113();
		int32_t L_54 = __this->get_xIndent_111();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = __this->get_fileDisplayList_52();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_55);
		int32_t L_56 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_55, /*hidden argument*/NULL);
		int32_t L_57 = __this->get_numberOfVolumes_73();
		int32_t L_58 = __this->get_linePixelHeight_87();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_59;
		memset((&L_59), 0, sizeof(L_59));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_59), L_48, L_50, ((float)il2cpp_codegen_subtract((float)L_52, (float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_54))))))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)L_57)), (int32_t)L_58))))), /*hidden argument*/NULL);
		__this->set_viewRect_109(L_59);
		goto IL_02e5;
	}

IL_01e5:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_60 = __this->get_address_of_fileBoxRect_105();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_61 = __this->get_address_of_fileWindowRect_75();
		float L_62 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_61, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_63 = __this->get_address_of_fileBoxRect_105();
		float L_64 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_63, /*hidden argument*/NULL);
		int32_t L_65 = __this->get_bottomAreaSpace_110();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_60, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_62, (float)L_64)), (float)(((float)((float)L_65))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_66 = __this->get_fileBoxRect_105();
		__this->set_fileAreaRect_106(L_66);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_67 = __this->get_address_of_fileAreaRect_106();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_68 = __this->get_address_of_fileAreaRect_106();
		float L_69 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_68, /*hidden argument*/NULL);
		int32_t L_70 = __this->get_xIndent_111();
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_67, ((float)il2cpp_codegen_add((float)L_69, (float)(((float)((float)L_70))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_71 = __this->get_address_of_fileAreaRect_106();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_72 = __this->get_address_of_fileAreaRect_106();
		float L_73 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_72, /*hidden argument*/NULL);
		int32_t L_74 = __this->get_yIndent_112();
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_71, ((float)il2cpp_codegen_add((float)L_73, (float)(((float)((float)L_74))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_75 = __this->get_address_of_fileAreaRect_106();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_76 = __this->get_address_of_fileAreaRect_106();
		float L_77 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_76, /*hidden argument*/NULL);
		int32_t L_78 = __this->get_xIndent_111();
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_75, ((float)il2cpp_codegen_subtract((float)L_77, (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_78, (int32_t)2))))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_79 = __this->get_address_of_fileAreaRect_106();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_80 = __this->get_address_of_fileAreaRect_106();
		float L_81 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_80, /*hidden argument*/NULL);
		int32_t L_82 = __this->get_yIndent_112();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_79, ((float)il2cpp_codegen_subtract((float)L_81, (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_82, (int32_t)2))))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_83 = __this->get_address_of_fileAreaRect_106();
		float L_84 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_83, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_85 = __this->get_address_of_fileAreaRect_106();
		float L_86 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_85, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_87 = __this->get_address_of_fileAreaRect_106();
		float L_88 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_87, /*hidden argument*/NULL);
		int32_t L_89 = __this->get_scrollbarWidth_113();
		int32_t L_90 = __this->get_xIndent_111();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_91 = __this->get_fileDisplayList_52();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_91);
		int32_t L_92 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_91, /*hidden argument*/NULL);
		int32_t L_93 = __this->get_linePixelHeight_87();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_94;
		memset((&L_94), 0, sizeof(L_94));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_94), L_84, L_86, ((float)il2cpp_codegen_subtract((float)L_88, (float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)L_90))))))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_92, (int32_t)L_93))))), /*hidden argument*/NULL);
		__this->set_viewRect_109(L_94);
	}

IL_02e5:
	{
		return;
	}
}
// System.Void UniFileBrowser::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_Update_mB0DF402BFCF4605EF387FC862E0BE82825FD1C39 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_Update_mB0DF402BFCF4605EF387FC862E0BE82825FD1C39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = __this->get_useMobile_125();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0106;
	}

IL_0010:
	{
		int32_t L_1 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00f4;
		}
	}
	{
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_2 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_5 = (&V_1)->get_y_1();
		(&V_1)->set_y_1(((float)il2cpp_codegen_subtract((float)(((float)((float)L_4))), (float)L_5)));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_1;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_7 = __this->get_address_of_fileWindowRect_75();
		float L_8 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_7, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_9 = __this->get_address_of_fileWindowRect_75();
		float L_10 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_9, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), L_8, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_6, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		int32_t L_13 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)0))))
		{
			goto IL_0092;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_14 = __this->get_address_of_fileAreaRect_106();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_1;
		bool L_16 = Rect_Contains_m8438BA185AD95D6C50E7A2CF9DD30FBA044CE0B2((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0092;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_1;
		__this->set_touchPos_126(L_17);
		__this->set_touchScrolling_127((bool)1);
		goto IL_0106;
	}

IL_0092:
	{
		bool L_18 = __this->get_touchScrolling_127();
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_19 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00ce;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = __this->get_scrollPos_45();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = __this->get_touchPos_126();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_21, L_22, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_20, L_23, /*hidden argument*/NULL);
		__this->set_scrollPos_45(L_24);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25 = V_1;
		__this->set_touchPos_126(L_25);
	}

IL_00ce:
	{
		int32_t L_26 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if ((((int32_t)L_26) == ((int32_t)3)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_27 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)4))))
		{
			goto IL_00ef;
		}
	}

IL_00e8:
	{
		__this->set_touchScrolling_127((bool)0);
	}

IL_00ef:
	{
		goto IL_0106;
	}

IL_00f4:
	{
		bool L_28 = __this->get_touchScrolling_127();
		if (!L_28)
		{
			goto IL_0106;
		}
	}
	{
		__this->set_touchScrolling_127((bool)0);
	}

IL_0106:
	{
		return;
	}
}
// System.Void UniFileBrowser::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_OnGUI_mDA088135B523749B3932F988C0CEC44D11AE7623 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_OnGUI_mDA088135B523749B3932F988C0CEC44D11AE7623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_0 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		__this->set_defaultSkin_103(L_0);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_1 = __this->get_guiSkin_37();
		GUI_set_skin_mFCD039C47B3C327D9E0D867092DB353F2CEA796E(L_1, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_guiDepth_34();
		GUI_set_depth_m9DFE6E5FCC150C8B8B88A789DEBF12339AD4A26A(L_2, /*hidden argument*/NULL);
		bool L_3 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		bool L_4 = __this->get_useMobile_125();
		if (L_4)
		{
			goto IL_004c;
		}
	}

IL_0036:
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_5 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_004c;
		}
	}
	{
		UniFileBrowser_FileWindowKeys_m700F5F72F6BBF34D77266F6B74C6091ED91E4BC6(__this, /*hidden argument*/NULL);
	}

IL_004c:
	{
		bool L_7 = __this->get_doScale_130();
		if (!L_7)
		{
			goto IL_0092;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8 = GUI_get_matrix_m06096A34C4E286301DA2608369D93E392DD52F4D(/*hidden argument*/NULL);
		V_0 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		int32_t L_11 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_12 = __this->get_referenceWidth_128();
		int32_t L_13 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_14 = __this->get_referenceHeight_129();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), ((float)((float)(((float)((float)L_11)))/(float)L_12)), ((float)((float)(((float)((float)L_13)))/(float)L_14)), (((float)((float)1))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_16 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_9, L_10, L_15, /*hidden argument*/NULL);
		GUI_set_matrix_m071711DB6CD94992416D9E039AD6B25383B46222(L_16, /*hidden argument*/NULL);
	}

IL_0092:
	{
		int32_t L_17 = __this->get_fileWindowID_27();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_18 = __this->get_fileWindowRect_75();
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * L_19 = (__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 *)il2cpp_codegen_object_new(__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7_il2cpp_TypeInfo_var);
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35____ctor_m6EF082A03C4489F96E4DBB9BE42BE4E9418A2840(L_19, __this, (intptr_t)((intptr_t)UniFileBrowser_DrawFileWindow_m8E02C2FE90713FF3DC4487298E10FE1BF58AA6D8_RuntimeMethod_var), /*hidden argument*/NULL);
		WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * L_20 = U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_Adapt_mDFA0191AB61087E3D4E8939FD75795BC53C685D8(L_19, /*hidden argument*/NULL);
		String_t* L_21 = __this->get_windowTitle_76();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_22 = GUI_Window_mBBCDB1113F9C68D5FB57278F19039C5AC86AAB88(L_17, L_18, L_20, L_21, /*hidden argument*/NULL);
		__this->set_fileWindowRect_75(L_22);
		bool L_23 = __this->get_showMessageWindow_136();
		if (L_23)
		{
			goto IL_00db;
		}
	}
	{
		int32_t L_24 = __this->get_fileWindowID_27();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_FocusWindow_m585EBE5D144D1B09BC6A6A37E21468D06CA9A2E0(L_24, /*hidden argument*/NULL);
		goto IL_013a;
	}

IL_00db:
	{
		bool L_25 = __this->get_messageWindowDelay_140();
		if (!L_25)
		{
			goto IL_0100;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_26 = __this->get_address_of_messageWindowRect_138();
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_27 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_27);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = Event_get_mousePosition_m4D2A80BE0CF9A6D2CE8289C4815807493B3449A9(L_27, /*hidden argument*/NULL);
		bool L_29 = Rect_Contains_m8438BA185AD95D6C50E7A2CF9DD30FBA044CE0B2((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_26, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_013a;
		}
	}

IL_0100:
	{
		int32_t L_30 = __this->get_messageWindowID_28();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_31 = __this->get_messageWindowRect_138();
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * L_32 = (__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 *)il2cpp_codegen_object_new(__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7_il2cpp_TypeInfo_var);
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35____ctor_m6EF082A03C4489F96E4DBB9BE42BE4E9418A2840(L_32, __this, (intptr_t)((intptr_t)UniFileBrowser_MessageWindow_m8675F0C90FBECDC7D482967B3CC793CA560FE7AA_RuntimeMethod_var), /*hidden argument*/NULL);
		WindowFunction_tFA5DBAB811627D7B0946C4AAD398D4CC154C174D * L_33 = U24adaptorU24__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__U24WindowFunctionU240_Adapt_mDFA0191AB61087E3D4E8939FD75795BC53C685D8(L_32, /*hidden argument*/NULL);
		String_t* L_34 = __this->get_messageWindowTitle_137();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_35 = __this->get_messageWindowStyle_60();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Window_m9CE23F6C5256D9A9D273C807B7A4422EBB7768D1(L_30, L_31, L_33, L_34, L_35, /*hidden argument*/NULL);
		int32_t L_36 = __this->get_messageWindowID_28();
		GUI_BringWindowToFront_m4DC65886F85CF5051136813D3CEAA17679B95D9C(L_36, /*hidden argument*/NULL);
	}

IL_013a:
	{
		__this->set_messageWindowDelay_140((bool)0);
		bool L_37 = __this->get_allowWindowResize_25();
		if (!L_37)
		{
			goto IL_0274;
		}
	}
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_38 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_38);
		int32_t L_39 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_38, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)0))))
		{
			goto IL_01b7;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_40 = __this->get_address_of_fileWindowRect_75();
		float L_41 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_40, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_42 = __this->get_address_of_fileWindowRect_75();
		float L_43 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_42, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_44), ((float)il2cpp_codegen_subtract((float)L_41, (float)(((float)((float)((int32_t)25)))))), ((float)il2cpp_codegen_subtract((float)L_43, (float)(((float)((float)((int32_t)25)))))), (((float)((float)((int32_t)25)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		V_1 = L_44;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = __this->get_mousePos_86();
		bool L_46 = Rect_Contains_m51C65159B1706EB00CC962D7CD1CEC2EBD85BC3A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_01b7;
		}
	}
	{
		__this->set_handleClicked_80((bool)1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = __this->get_mousePos_86();
		__this->set_clickedPosition_81(L_47);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_48 = __this->get_fileWindowRect_75();
		__this->set_originalWindowRect_83(L_48);
	}

IL_01b7:
	{
		bool L_49 = __this->get_handleClicked_80();
		if (!L_49)
		{
			goto IL_0274;
		}
	}
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_50 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_50);
		int32_t L_51 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_50, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_51) == ((uint32_t)3))))
		{
			goto IL_025d;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_52 = __this->get_address_of_fileWindowRect_75();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_53 = __this->get_address_of_originalWindowRect_83();
		float L_54 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_53, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_55 = __this->get_address_of_mousePos_86();
		float L_56 = L_55->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_57 = __this->get_address_of_clickedPosition_81();
		float L_58 = L_57->get_x_2();
		int32_t L_59 = __this->get_minWindowWidth_31();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_60 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)L_54, (float)((float)il2cpp_codegen_subtract((float)L_56, (float)L_58)))), (((float)((float)L_59))), (((float)((float)((int32_t)1600)))), /*hidden argument*/NULL);
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_52, L_60, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_61 = __this->get_address_of_fileWindowRect_75();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_62 = __this->get_address_of_originalWindowRect_83();
		float L_63 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_62, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_64 = __this->get_address_of_mousePos_86();
		float L_65 = L_64->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_66 = __this->get_address_of_clickedPosition_81();
		float L_67 = L_66->get_y_3();
		int32_t L_68 = __this->get_minWindowHeight_32();
		float L_69 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)L_63, (float)((float)il2cpp_codegen_subtract((float)L_65, (float)L_67)))), (((float)((float)L_68))), (((float)((float)((int32_t)1200)))), /*hidden argument*/NULL);
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_61, L_69, /*hidden argument*/NULL);
		UniFileBrowser_UpdateRects_mE5FF9EC4D5D33BD3421E255A7203AC9443EE3274(__this, /*hidden argument*/NULL);
		goto IL_0274;
	}

IL_025d:
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_70 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_70);
		int32_t L_71 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_70, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_71) == ((uint32_t)1))))
		{
			goto IL_0274;
		}
	}
	{
		__this->set_handleClicked_80((bool)0);
	}

IL_0274:
	{
		bool L_72 = __this->get_sendChangeMessage_96();
		if (!L_72)
		{
			goto IL_02bc;
		}
	}
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_73 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_73);
		int32_t L_74 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_73, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_74) == ((uint32_t)7))))
		{
			goto IL_02bc;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_75 = __this->get_lastRect_98();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_76 = __this->get_fileWindowRect_75();
		bool L_77 = Rect_op_Inequality_m6D87EE93EB6C68B78B8C044217EAFCE33EE12B66(L_75, L_76, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_02b0;
		}
	}
	{
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * L_78 = __this->get_changeWindowFunction_97();
		NullCheck(L_78);
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___Invoke_m728B5EE49D98F28DF86D6B5E0247267EA26ECD20(L_78, /*hidden argument*/NULL);
	}

IL_02b0:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_79 = __this->get_fileWindowRect_75();
		__this->set_lastRect_98(L_79);
	}

IL_02bc:
	{
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_80 = __this->get_defaultSkin_103();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_skin_mFCD039C47B3C327D9E0D867092DB353F2CEA796E(L_80, /*hidden argument*/NULL);
		bool L_81 = __this->get_doScale_130();
		if (!L_81)
		{
			goto IL_02d8;
		}
	}
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_82 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_matrix_m071711DB6CD94992416D9E039AD6B25383B46222(L_82, /*hidden argument*/NULL);
	}

IL_02d8:
	{
		return;
	}
}
// System.Void UniFileBrowser::DrawFileWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_DrawFileWindow_m8E02C2FE90713FF3DC4487298E10FE1BF58AA6D8 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_DrawFileWindow_m8E02C2FE90713FF3DC4487298E10FE1BF58AA6D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_16;
	memset((&V_16), 0, sizeof(V_16));
	float V_17 = 0.0f;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_18;
	memset((&V_18), 0, sizeof(V_18));
	float V_19 = 0.0f;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t V_21 = 0;
	bool G_B52_0 = false;
	bool G_B51_0 = false;
	int32_t G_B55_0 = 0;
	bool G_B53_0 = false;
	int32_t G_B54_0 = 0;
	int32_t G_B60_0 = 0;
	float G_B60_1 = 0.0f;
	int32_t G_B58_0 = 0;
	float G_B58_1 = 0.0f;
	int32_t G_B59_0 = 0;
	float G_B59_1 = 0.0f;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	float G_B61_2 = 0.0f;
	bool G_B71_0 = false;
	bool G_B70_0 = false;
	int32_t G_B74_0 = 0;
	bool G_B72_0 = false;
	int32_t G_B73_0 = 0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * G_B76_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B76_1;
	memset((&G_B76_1), 0, sizeof(G_B76_1));
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * G_B75_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B75_1;
	memset((&G_B75_1), 0, sizeof(G_B75_1));
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * G_B77_0 = NULL;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * G_B77_1 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B77_2;
	memset((&G_B77_2), 0, sizeof(G_B77_2));
	float G_B79_0 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * G_B79_1 = NULL;
	float G_B78_0 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * G_B78_1 = NULL;
	int32_t G_B80_0 = 0;
	float G_B80_1 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * G_B80_2 = NULL;
	String_t* G_B82_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B82_1;
	memset((&G_B82_1), 0, sizeof(G_B82_1));
	String_t* G_B81_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B81_1;
	memset((&G_B81_1), 0, sizeof(G_B81_1));
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * G_B83_0 = NULL;
	String_t* G_B83_1 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B83_2;
	memset((&G_B83_2), 0, sizeof(G_B83_2));
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B99_0 = NULL;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B96_0 = NULL;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B97_0 = NULL;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B98_0 = NULL;
	String_t* G_B100_0 = NULL;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B100_1 = NULL;
	String_t* G_B104_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B104_1;
	memset((&G_B104_1), 0, sizeof(G_B104_1));
	String_t* G_B103_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B103_1;
	memset((&G_B103_1), 0, sizeof(G_B103_1));
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * G_B105_0 = NULL;
	String_t* G_B105_1 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B105_2;
	memset((&G_B105_2), 0, sizeof(G_B105_2));
	int32_t G_B120_0 = 0;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B159_0 = NULL;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B156_0 = NULL;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B157_0 = NULL;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B158_0 = NULL;
	String_t* G_B160_0 = NULL;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B160_1 = NULL;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B170_0 = NULL;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B168_0 = NULL;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B169_0 = NULL;
	String_t* G_B171_0 = NULL;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B171_1 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B200_0;
	memset((&G_B200_0), 0, sizeof(G_B200_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B199_0;
	memset((&G_B199_0), 0, sizeof(G_B199_0));
	String_t* G_B201_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B201_1;
	memset((&G_B201_1), 0, sizeof(G_B201_1));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B248_0;
	memset((&G_B248_0), 0, sizeof(G_B248_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B245_0;
	memset((&G_B245_0), 0, sizeof(G_B245_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B246_0;
	memset((&G_B246_0), 0, sizeof(G_B246_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B247_0;
	memset((&G_B247_0), 0, sizeof(G_B247_0));
	String_t* G_B249_0 = NULL;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  G_B249_1;
	memset((&G_B249_1), 0, sizeof(G_B249_1));
	{
		bool L_0 = __this->get_allowWindowDrag_26();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_1 = __this->get_windowOffset_117();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_2), (((float)((float)0))), (((float)((float)0))), (((float)((float)((int32_t)10000)))), (((float)((float)L_1))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DragWindow_m4FCDD4B4C9314DB11ABAB977355BEBA3D71B1568(L_2, /*hidden argument*/NULL);
	}

IL_0026:
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_3 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = Event_get_mousePosition_m4D2A80BE0CF9A6D2CE8289C4815807493B3449A9(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_4, /*hidden argument*/NULL);
		__this->set_mousePos_86(L_5);
		bool L_6 = __this->get_showMessageWindow_136();
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)0, /*hidden argument*/NULL);
	}

IL_004c:
	{
		bool L_7 = __this->get_showPopup_66();
		if (!L_7)
		{
			goto IL_015a;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_8 = __this->get_address_of_popupRect_35();
		float L_9 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_8, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_10 = __this->get_address_of_popupRect_35();
		float L_11 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_10, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_12 = __this->get_address_of_popupRect_35();
		float L_13 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_12, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_14 = __this->get_popupListStyle_57();
		GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* L_15 = __this->get_pathList_65();
		NullCheck(L_15);
		int32_t L_16 = 0;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		float L_18 = GUIStyle_CalcHeight_m120220D334AEC6B33F4767EA54FE78CEC09FBCC9(L_14, L_17, (1.0f), /*hidden argument*/NULL);
		GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* L_19 = __this->get_pathList_65();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_19);
		int32_t L_20 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_19, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_21), L_9, L_11, L_13, ((float)il2cpp_codegen_multiply((float)L_18, (float)(((float)((float)L_20))))), /*hidden argument*/NULL);
		V_0 = L_21;
		int32_t L_22 = 0;
		V_13 = L_22;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23 = GUI_get_color_m61B524C99DD85A0DF405540C6E7453600E816FD5(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24 = L_23;
		V_14 = L_24;
		int32_t L_25 = V_13;
		float L_26 = (((float)((float)L_25)));
		V_17 = L_26;
		(&V_14)->set_a_3(L_26);
		float L_27 = V_17;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28 = V_14;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_29 = L_28;
		V_18 = L_29;
		GUI_set_color_m627E2716FD33EF327E38EE0048CE44FAD77AB87F(L_29, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30 = V_18;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_31 = V_0;
		int32_t L_32 = __this->get_selectedPath_67();
		GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* L_33 = __this->get_pathList_65();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_34 = __this->get_popupListStyle_57();
		int32_t L_35 = GUI_SelectionGrid_m76F40863D7D1D75DFAD2702F28A9FDE9E7C43EBF(L_31, L_32, L_33, 1, L_34, /*hidden argument*/NULL);
		__this->set_selectedPath_67(L_35);
		int32_t L_36 = __this->get_selectedPath_67();
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_0109;
		}
	}
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_37 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = Event_get_type_mA5010AB8C34B098E0783949046C708B9E1BA811D(L_37, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)0))))
		{
			goto IL_012f;
		}
	}

IL_0109:
	{
		__this->set_showPopup_66((bool)0);
		int32_t L_39 = __this->get_selectedPath_67();
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_40 = __this->get_selectedPath_67();
		UniFileBrowser_BuildPathList_mC099046C6065995FBB960AB9CD404AB248A1CE22(__this, L_40, /*hidden argument*/NULL);
	}

IL_0128:
	{
		__this->set_selectedPath_67((-1));
	}

IL_012f:
	{
		int32_t L_41 = 1;
		V_15 = L_41;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42 = GUI_get_color_m61B524C99DD85A0DF405540C6E7453600E816FD5(/*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43 = L_42;
		V_16 = L_43;
		int32_t L_44 = V_15;
		float L_45 = (((float)((float)L_44)));
		V_19 = L_45;
		(&V_16)->set_a_3(L_45);
		float L_46 = V_19;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_47 = V_16;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48 = L_47;
		V_20 = L_48;
		GUI_set_color_m627E2716FD33EF327E38EE0048CE44FAD77AB87F(L_48, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49 = V_20;
	}

IL_015a:
	{
		bool L_50 = __this->get_limitToInitialFolder_11();
		if (L_50)
		{
			goto IL_019b;
		}
	}
	{
		GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* L_51 = __this->get_pathList_65();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_51);
		int32_t L_52 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_51, /*hidden argument*/NULL);
		if ((((int32_t)L_52) <= ((int32_t)0)))
		{
			goto IL_019b;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_53 = __this->get_popupRect_35();
		GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* L_54 = __this->get_pathList_65();
		NullCheck(L_54);
		int32_t L_55 = 0;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_57 = __this->get_popupButtonStyle_58();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_58 = GUI_Button_m399BC2C7522407D4642F5AE47E10325525EE83DF(L_53, L_56, L_57, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_019b;
		}
	}
	{
		__this->set_showPopup_66((bool)1);
	}

IL_019b:
	{
		int32_t L_59 = __this->get_fileType_79();
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			goto IL_027c;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_60 = __this->get_address_of_fileWindowRect_75();
		float L_61 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_60, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_62 = __this->get_address_of_buttonSize_36();
		float L_63 = L_62->get_x_0();
		int32_t L_64 = __this->get_fileWindowInset_29();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_65 = __this->get_address_of_popupRect_35();
		float L_66 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_65, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_67 = __this->get_address_of_buttonSize_36();
		float L_68 = L_67->get_x_0();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_69 = __this->get_address_of_popupRect_35();
		float L_70 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_69, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_71;
		memset((&L_71), 0, sizeof(L_71));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_71), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_61, (float)L_63)), (float)(((float)((float)L_64))))), L_66, L_68, L_70, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_72 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_71, _stringLiteral31E8E4ACB2EDC39B158FBA91185DE1333306F668, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_027c;
		}
	}
	{
		bool L_73 = __this->get_showPopup_66();
		if (L_73)
		{
			goto IL_027c;
		}
	}
	{
		int32_t L_74 = __this->get_selectedFileNumber_46();
		if ((((int32_t)L_74) <= ((int32_t)(-1))))
		{
			goto IL_0260;
		}
	}
	{
		int32_t L_75 = __this->get_selectedFileNumber_46();
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_76 = __this->get_dirList_49();
		NullCheck(L_76);
		int32_t L_77 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_76, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		if ((((int32_t)L_75) >= ((int32_t)L_77)))
		{
			goto IL_0260;
		}
	}
	{
		__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * L_78 = __this->get_delegate_92();
		String_t* L_79 = __this->get_filePath_61();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = __this->get_fileDisplayList_52();
		int32_t L_81 = __this->get_selectedFileNumber_46();
		NullCheck(L_80);
		int32_t L_82 = L_81;
		String_t* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_84 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(L_79, L_83, /*hidden argument*/NULL);
		Il2CppChar L_85 = __this->get_pathChar_68();
		Il2CppChar L_86 = L_85;
		RuntimeObject * L_87 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_86);
		String_t* L_88 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_84, L_87, /*hidden argument*/NULL);
		NullCheck(L_78);
		__UniFileBrowser_delegateU24callable0U24169_24___Invoke_m426486C356306933A79E4029F21547C278E09580(L_78, L_88, /*hidden argument*/NULL);
		goto IL_0271;
	}

IL_0260:
	{
		__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * L_89 = __this->get_delegate_92();
		String_t* L_90 = __this->get_filePath_61();
		NullCheck(L_89);
		__UniFileBrowser_delegateU24callable0U24169_24___Invoke_m426486C356306933A79E4029F21547C278E09580(L_89, L_90, /*hidden argument*/NULL);
	}

IL_0271:
	{
		VirtActionInvoker0::Invoke(31 /* System.Void UniFileBrowser::CloseFileWindow() */, __this);
		goto IL_122f;
	}

IL_027c:
	{
		int32_t L_91 = __this->get_fileType_79();
		if ((!(((uint32_t)L_91) == ((uint32_t)1))))
		{
			goto IL_0413;
		}
	}
	{
		bool L_92 = __this->get_preventIllegalCharInput_8();
		if (!L_92)
		{
			goto IL_02e4;
		}
	}
	{
		V_1 = 0;
		goto IL_02d3;
	}

IL_029a:
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_93 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_93);
		Il2CppChar L_94 = Event_get_character_mFDB32862186913735A8EC1B44F2455EC67C8403E(L_93, /*hidden argument*/NULL);
		String_t* L_95 = __this->get_illegalChars_9();
		int32_t L_96 = V_1;
		NullCheck(L_95);
		Il2CppChar L_97 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_95, L_96, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_94) == ((uint32_t)L_97))))
		{
			goto IL_02cf;
		}
	}
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_98 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(_stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29);
		Il2CppChar L_99 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(_stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29, 0, /*hidden argument*/NULL);
		NullCheck(L_98);
		Event_set_character_mD0A42F6FCA52E9112469AD0C8ADB09A422134CA8(L_98, L_99, /*hidden argument*/NULL);
		goto IL_02e4;
	}

IL_02cf:
	{
		int32_t L_100 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
	}

IL_02d3:
	{
		int32_t L_101 = V_1;
		String_t* L_102 = __this->get_illegalChars_9();
		NullCheck(L_102);
		int32_t L_103 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_102, /*hidden argument*/NULL);
		if ((((int32_t)L_101) < ((int32_t)L_103)))
		{
			goto IL_029a;
		}
	}

IL_02e4:
	{
		String_t* L_104 = __this->get_fileName_62();
		NullCheck(L_104);
		int32_t L_105 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_104, /*hidden argument*/NULL);
		int32_t L_106 = __this->get_maxFileNameLength_7();
		String_t* L_107 = __this->get_addedExtension_5();
		NullCheck(L_107);
		int32_t L_108 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_107, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_105) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)L_108))))))
		{
			goto IL_031b;
		}
	}
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_109 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(_stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29);
		Il2CppChar L_110 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(_stringLiteral1489F923C4DCA729178B3E3233458550D8DDDF29, 0, /*hidden argument*/NULL);
		NullCheck(L_109);
		Event_set_character_mD0A42F6FCA52E9112469AD0C8ADB09A422134CA8(L_109, L_110, /*hidden argument*/NULL);
	}

IL_031b:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_111 = __this->get_address_of_textfieldRect_104();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_112 = __this->get_address_of_fileWindowRect_75();
		float L_113 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_112, /*hidden argument*/NULL);
		int32_t L_114 = __this->get_fileWindowInset_29();
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_111, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_113, (float)(((float)((float)((int32_t)90)))))), (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_114, (int32_t)2))))))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_SetNextControlName_m7F64169AC6CCE777C7C819A737C73358D9AF9C60(_stringLiteral037519BB81632F2A1D5017EA89FC025A2E04CC22, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_115 = __this->get_textfieldRect_104();
		String_t* L_116 = __this->get_fileName_62();
		String_t* L_117 = GUI_TextField_mAD5F9A9F69A17754713BE94A280819871B53129A(L_115, L_116, ((int32_t)60), /*hidden argument*/NULL);
		__this->set_fileName_62(L_117);
		bool L_118 = __this->get_autoAddExtension_4();
		if (!L_118)
		{
			goto IL_03a0;
		}
	}
	{
		String_t* L_119 = __this->get_fileName_62();
		String_t* L_120 = __this->get_addedExtension_5();
		NullCheck(L_119);
		bool L_121 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_119, L_120, /*hidden argument*/NULL);
		if (L_121)
		{
			goto IL_0394;
		}
	}
	{
		String_t* L_122 = __this->get_oldFileName_63();
		__this->set_fileName_62(L_122);
		goto IL_03a0;
	}

IL_0394:
	{
		String_t* L_123 = __this->get_fileName_62();
		__this->set_oldFileName_63(L_123);
	}

IL_03a0:
	{
		int32_t L_124 = __this->get_windowOpenedCounter_102();
		if ((((int32_t)L_124) <= ((int32_t)0)))
		{
			goto IL_0413;
		}
	}
	{
		int32_t L_125 = __this->get_windowOpenedCounter_102();
		int32_t L_126 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_125, (int32_t)1));
		V_21 = L_126;
		__this->set_windowOpenedCounter_102(L_126);
		int32_t L_127 = V_21;
		if ((!(((uint32_t)L_127) == ((uint32_t)1))))
		{
			goto IL_03cf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_FocusControl_mEFB53CA11C8AAADA69717E58DB4BD615987F5EA4(_stringLiteral037519BB81632F2A1D5017EA89FC025A2E04CC22, /*hidden argument*/NULL);
	}

IL_03cf:
	{
		int32_t L_128 = __this->get_windowOpenedCounter_102();
		if (L_128)
		{
			goto IL_0413;
		}
	}
	{
		int32_t L_129 = GUIUtility_get_keyboardControl_mC111A10FE792FA94E3859C5BC704D611F8768BE1(/*hidden argument*/NULL);
		__this->set_keyboardControlID_101(L_129);
		String_t* L_130 = __this->get_defaultFileName_6();
		__this->set_fileName_62(L_130);
		bool L_131 = __this->get_autoAddExtension_4();
		if (!L_131)
		{
			goto IL_0413;
		}
	}
	{
		String_t* L_132 = __this->get_fileName_62();
		String_t* L_133 = __this->get_addedExtension_5();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_134 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(L_132, L_133, /*hidden argument*/NULL);
		__this->set_fileName_62(L_134);
	}

IL_0413:
	{
		int32_t L_135 = __this->get_fileType_79();
		if ((!(((uint32_t)L_135) == ((uint32_t)1))))
		{
			goto IL_044e;
		}
	}
	{
		int32_t L_136 = __this->get_fileWindowInset_29();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_137 = __this->get_address_of_textfieldRect_104();
		float L_138 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_137, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_139 = __this->get_address_of_textfieldRect_104();
		float L_140 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_139, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_141;
		memset((&L_141), 0, sizeof(L_141));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_141), (((float)((float)L_136))), L_138, (((float)((float)((int32_t)90)))), L_140, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_141, _stringLiteral6B1C510552368159C1FBB66B6006E4DDB9E4476C, /*hidden argument*/NULL);
	}

IL_044e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_SetNextControlName_m7F64169AC6CCE777C7C819A737C73358D9AF9C60(_stringLiteral8772B13BA24D42A037E851E9326A5566C9D37207, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_142 = __this->get_fileBoxRect_105();
		String_t* L_143 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		GUI_Box_mA4BA00A35EAEA960B5F645B66F95DA0C59CB09D9(L_142, L_143, /*hidden argument*/NULL);
		V_2 = (bool)0;
		bool L_144 = __this->get_showVolumes_12();
		if (!L_144)
		{
			goto IL_04d2;
		}
	}
	{
		bool L_145 = __this->get_volumesAreSeparate_13();
		if (!L_145)
		{
			goto IL_04d2;
		}
	}
	{
		bool L_146 = __this->get_limitToInitialFolder_11();
		if (L_146)
		{
			goto IL_04d2;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_147 = __this->get_volumeBoxRect_107();
		String_t* L_148 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Box_mA4BA00A35EAEA960B5F645B66F95DA0C59CB09D9(L_147, L_148, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_149 = __this->get_address_of_fileAreaRect_106();
		float L_150 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_149, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_151 = __this->get_address_of_volumeBoxRect_107();
		float L_152 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_151, /*hidden argument*/NULL);
		int32_t L_153 = __this->get_yIndent_112();
		int32_t L_154 = __this->get_iconWidth_88();
		int32_t L_155 = __this->get_linePixelHeight_87();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_156;
		memset((&L_156), 0, sizeof(L_156));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_156), L_150, ((float)il2cpp_codegen_add((float)L_152, (float)(((float)((float)L_153))))), (((float)((float)L_154))), (((float)((float)L_155))), /*hidden argument*/NULL);
		V_3 = L_156;
		goto IL_051b;
	}

IL_04d2:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_157 = __this->get_fileAreaRect_106();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_158 = __this->get_scrollPos_45();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_159 = __this->get_viewRect_109();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_160 = GUI_BeginScrollView_mCADE8C6297209D588B382FB2CD7FD42290363061(L_157, L_158, L_159, /*hidden argument*/NULL);
		__this->set_scrollPos_45(L_160);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_161 = __this->get_address_of_fileAreaRect_106();
		float L_162 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_161, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_163 = __this->get_address_of_fileAreaRect_106();
		float L_164 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_163, /*hidden argument*/NULL);
		int32_t L_165 = __this->get_iconWidth_88();
		int32_t L_166 = __this->get_linePixelHeight_87();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_167;
		memset((&L_167), 0, sizeof(L_167));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_167), L_162, L_164, (((float)((float)L_165))), (((float)((float)L_166))), /*hidden argument*/NULL);
		V_3 = L_167;
		V_2 = (bool)1;
	}

IL_051b:
	{
		bool L_168 = __this->get_multi_116();
		if (!L_168)
		{
			goto IL_056c;
		}
	}
	{
		bool L_169 = __this->get_osxSystem_71();
		bool L_170 = L_169;
		G_B51_0 = L_170;
		if (!L_170)
		{
			G_B52_0 = L_170;
			goto IL_053d;
		}
	}
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_171 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_171);
		bool L_172 = Event_get_command_mB707BFF03AB7E7EE864991AA56682C7D5A0D7036(L_171, /*hidden argument*/NULL);
		G_B52_0 = L_172;
	}

IL_053d:
	{
		bool L_173 = G_B52_0;
		G_B53_0 = L_173;
		if (L_173)
		{
			G_B55_0 = ((int32_t)(L_173));
			goto IL_055e;
		}
	}
	{
		bool L_174 = __this->get_osxSystem_71();
		int32_t L_175 = ((((int32_t)L_174) == ((int32_t)0))? 1 : 0);
		G_B54_0 = L_175;
		if (!L_175)
		{
			G_B55_0 = L_175;
			goto IL_055e;
		}
	}
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_176 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_176);
		bool L_177 = Event_get_control_mF10EBF503DD0B63A6D955FCDC6561DCBB28DB58A(L_176, /*hidden argument*/NULL);
		G_B55_0 = ((int32_t)(L_177));
	}

IL_055e:
	{
		V_4 = (bool)G_B55_0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_178 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_178);
		bool L_179 = Event_get_shift_m7B2926A0EEEBF7D6FEB12B14FCC130A37F5E4697(L_178, /*hidden argument*/NULL);
		V_5 = L_179;
	}

IL_056c:
	{
		V_6 = 0;
		bool L_180 = __this->get_showDate_14();
		if (!L_180)
		{
			goto IL_05c8;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_181 = __this->get_address_of_fileAreaRect_106();
		float L_182 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_181, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_183 = __this->get_fileDisplayList_52();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_183);
		int32_t L_184 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_183, /*hidden argument*/NULL);
		bool L_185 = __this->get_showVolumes_12();
		G_B58_0 = L_184;
		G_B58_1 = L_182;
		if (!L_185)
		{
			G_B60_0 = L_184;
			G_B60_1 = L_182;
			goto IL_05b1;
		}
	}
	{
		bool L_186 = __this->get_volumesAreSeparate_13();
		G_B59_0 = G_B58_0;
		G_B59_1 = G_B58_1;
		if (!L_186)
		{
			G_B60_0 = G_B58_0;
			G_B60_1 = G_B58_1;
			goto IL_05b1;
		}
	}
	{
		int32_t L_187 = __this->get_numberOfVolumes_73();
		G_B61_0 = L_187;
		G_B61_1 = G_B59_0;
		G_B61_2 = G_B59_1;
		goto IL_05b2;
	}

IL_05b1:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B60_0;
		G_B61_2 = G_B60_1;
	}

IL_05b2:
	{
		int32_t L_188 = __this->get_linePixelHeight_87();
		if ((((float)G_B61_2) >= ((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)G_B61_1, (int32_t)G_B61_0)), (int32_t)L_188))))))))
		{
			goto IL_05c8;
		}
	}
	{
		int32_t L_189 = __this->get_scrollbarWidth_113();
		V_6 = L_189;
	}

IL_05c8:
	{
		V_1 = 0;
		goto IL_0876;
	}

IL_05cf:
	{
		bool L_190 = __this->get_showVolumes_12();
		if (!L_190)
		{
			goto IL_062d;
		}
	}
	{
		bool L_191 = __this->get_volumesAreSeparate_13();
		if (!L_191)
		{
			goto IL_062d;
		}
	}
	{
		bool L_192 = __this->get_limitToInitialFolder_11();
		if (L_192)
		{
			goto IL_062d;
		}
	}
	{
		int32_t L_193 = V_1;
		int32_t L_194 = __this->get_numberOfVolumes_73();
		if ((!(((uint32_t)L_193) == ((uint32_t)L_194))))
		{
			goto IL_062d;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_195 = __this->get_fileAreaRect_106();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_196 = __this->get_scrollPos_45();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_197 = __this->get_viewRect_109();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_198 = GUI_BeginScrollView_mCADE8C6297209D588B382FB2CD7FD42290363061(L_195, L_196, L_197, /*hidden argument*/NULL);
		__this->set_scrollPos_45(L_198);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_199 = __this->get_address_of_fileAreaRect_106();
		float L_200 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_199, /*hidden argument*/NULL);
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), L_200, /*hidden argument*/NULL);
		V_2 = (bool)1;
	}

IL_062d:
	{
		bool L_201 = __this->get_multi_116();
		bool L_202 = L_201;
		G_B70_0 = L_202;
		if (!L_202)
		{
			G_B71_0 = L_202;
			goto IL_0646;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_203 = __this->get_multiFileList_54();
		int32_t L_204 = V_1;
		NullCheck(L_203);
		bool L_205 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_203, L_204, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		G_B71_0 = L_205;
	}

IL_0646:
	{
		bool L_206 = G_B71_0;
		G_B72_0 = L_206;
		if (L_206)
		{
			G_B74_0 = ((int32_t)(L_206));
			goto IL_0666;
		}
	}
	{
		bool L_207 = __this->get_multi_116();
		int32_t L_208 = ((((int32_t)L_207) == ((int32_t)0))? 1 : 0);
		G_B73_0 = L_208;
		if (!L_208)
		{
			G_B74_0 = L_208;
			goto IL_0666;
		}
	}
	{
		int32_t L_209 = V_1;
		int32_t L_210 = __this->get_selectedFileNumber_46();
		G_B74_0 = ((((int32_t)L_209) == ((int32_t)L_210))? 1 : 0);
	}

IL_0666:
	{
		V_7 = (bool)G_B74_0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_211 = __this->get_address_of_fileAreaRect_106();
		float L_212 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_211, /*hidden argument*/NULL);
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), L_212, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_213 = V_3;
		TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* L_214 = __this->get_iconDisplayList_51();
		int32_t L_215 = V_1;
		NullCheck(L_214);
		int32_t L_216 = L_215;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_217 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		bool L_218 = V_7;
		G_B75_0 = L_217;
		G_B75_1 = L_213;
		if (!L_218)
		{
			G_B76_0 = L_217;
			G_B76_1 = L_213;
			goto IL_0695;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_219 = __this->get_scrollViewStyleSelected_56();
		G_B77_0 = L_219;
		G_B77_1 = G_B75_0;
		G_B77_2 = G_B75_1;
		goto IL_069b;
	}

IL_0695:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_220 = __this->get_scrollViewStyle_55();
		G_B77_0 = L_220;
		G_B77_1 = G_B76_0;
		G_B77_2 = G_B76_1;
	}

IL_069b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_m141E44DA79C0E4EBCBB01649D985401116A2BAAB(G_B77_2, G_B77_1, G_B77_0, /*hidden argument*/NULL);
		float L_221 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		int32_t L_222 = __this->get_iconWidth_88();
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), ((float)il2cpp_codegen_add((float)L_221, (float)(((float)((float)L_222))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_223 = __this->get_address_of_fileAreaRect_106();
		float L_224 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_223, /*hidden argument*/NULL);
		int32_t L_225 = __this->get_iconWidth_88();
		bool L_226 = __this->get_showDate_14();
		G_B78_0 = ((float)il2cpp_codegen_subtract((float)L_224, (float)(((float)((float)L_225)))));
		G_B78_1 = (&V_3);
		if (!L_226)
		{
			G_B79_0 = ((float)il2cpp_codegen_subtract((float)L_224, (float)(((float)((float)L_225)))));
			G_B79_1 = (&V_3);
			goto IL_06e1;
		}
	}
	{
		int32_t L_227 = __this->get_dateWidth_89();
		G_B80_0 = L_227;
		G_B80_1 = G_B78_0;
		G_B80_2 = G_B78_1;
		goto IL_06e2;
	}

IL_06e1:
	{
		G_B80_0 = 0;
		G_B80_1 = G_B79_0;
		G_B80_2 = G_B79_1;
	}

IL_06e2:
	{
		int32_t L_228 = V_6;
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)G_B80_2, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)G_B80_1, (float)(((float)((float)G_B80_0))))), (float)(((float)((float)L_228))))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_229 = V_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_230 = __this->get_fileDisplayList_52();
		int32_t L_231 = V_1;
		NullCheck(L_230);
		int32_t L_232 = L_231;
		String_t* L_233 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		bool L_234 = V_7;
		G_B81_0 = L_233;
		G_B81_1 = L_229;
		if (!L_234)
		{
			G_B82_0 = L_233;
			G_B82_1 = L_229;
			goto IL_0708;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_235 = __this->get_scrollViewStyleSelected_56();
		G_B83_0 = L_235;
		G_B83_1 = G_B81_0;
		G_B83_2 = G_B81_1;
		goto IL_070e;
	}

IL_0708:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_236 = __this->get_scrollViewStyle_55();
		G_B83_0 = L_236;
		G_B83_1 = G_B82_0;
		G_B83_2 = G_B82_1;
	}

IL_070e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_237 = GUI_Button_mA1605D5F2A40D770F3E0CCA6D88E7947564B3F7A(G_B83_2, G_B83_1, G_B83_0, /*hidden argument*/NULL);
		if (!L_237)
		{
			goto IL_0807;
		}
	}
	{
		bool L_238 = __this->get_frameDone_64();
		if (!L_238)
		{
			goto IL_0807;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_FocusControl_mEFB53CA11C8AAADA69717E58DB4BD615987F5EA4(_stringLiteral8772B13BA24D42A037E851E9326A5566C9D37207, /*hidden argument*/NULL);
		int32_t L_239 = V_1;
		__this->set_selectedFileNumber_46(L_239);
		bool L_240 = __this->get_multi_116();
		if (!L_240)
		{
			goto IL_0807;
		}
	}
	{
		bool L_241 = V_4;
		if (!L_241)
		{
			goto IL_077a;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_242 = __this->get_multiFileList_54();
		int32_t L_243 = V_1;
		NullCheck(L_242);
		bool L_244 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_242, L_243, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		if (!L_244)
		{
			goto IL_0769;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_245 = __this->get_multiFileList_54();
		int32_t L_246 = V_1;
		NullCheck(L_245);
		List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F(L_245, L_246, /*hidden argument*/List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
		goto IL_0775;
	}

IL_0769:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_247 = __this->get_multiFileList_54();
		int32_t L_248 = V_1;
		NullCheck(L_247);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_247, L_248, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_0775:
	{
		goto IL_0797;
	}

IL_077a:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_249 = __this->get_multiFileList_54();
		int32_t L_250 = V_1;
		NullCheck(L_249);
		bool L_251 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_249, L_250, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		if (L_251)
		{
			goto IL_0797;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_252 = __this->get_multiFileList_54();
		int32_t L_253 = V_1;
		NullCheck(L_252);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_252, L_253, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_0797:
	{
		bool L_254 = V_5;
		if (L_254)
		{
			goto IL_07a5;
		}
	}
	{
		int32_t L_255 = V_1;
		__this->set_anchorFileNumber_48(L_255);
	}

IL_07a5:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_256 = __this->get_multiFileList_54();
		NullCheck(L_256);
		int32_t L_257 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_256, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		G_B96_0 = __this;
		if ((!(((uint32_t)L_257) == ((uint32_t)1))))
		{
			G_B99_0 = __this;
			goto IL_07fd;
		}
	}
	{
		int32_t L_258 = V_1;
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_259 = __this->get_dirList_49();
		NullCheck(L_259);
		int32_t L_260 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_259, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		G_B97_0 = G_B96_0;
		if ((((int32_t)L_258) < ((int32_t)L_260)))
		{
			G_B99_0 = G_B96_0;
			goto IL_07fd;
		}
	}
	{
		int32_t L_261 = V_1;
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_262 = __this->get_dirList_49();
		NullCheck(L_262);
		int32_t L_263 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_262, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_264 = __this->get_fileList_50();
		NullCheck(L_264);
		int32_t L_265 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_264, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		G_B98_0 = G_B97_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_261, (int32_t)L_263))) >= ((int32_t)L_265)))
		{
			G_B99_0 = G_B97_0;
			goto IL_07fd;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_266 = __this->get_fileDisplayList_52();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_267 = __this->get_multiFileList_54();
		NullCheck(L_267);
		int32_t L_268 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_267, 0, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		NullCheck(L_266);
		int32_t L_269 = L_268;
		String_t* L_270 = (L_266)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		G_B100_0 = L_270;
		G_B100_1 = G_B98_0;
		goto IL_0802;
	}

IL_07fd:
	{
		String_t* L_271 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B100_0 = L_271;
		G_B100_1 = G_B99_0;
	}

IL_0802:
	{
		NullCheck(G_B100_1);
		G_B100_1->set_fileName_62(G_B100_0);
	}

IL_0807:
	{
		bool L_272 = __this->get_showDate_14();
		if (!L_272)
		{
			goto IL_085c;
		}
	}
	{
		float L_273 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		float L_274 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), ((float)il2cpp_codegen_add((float)L_273, (float)L_274)), /*hidden argument*/NULL);
		int32_t L_275 = __this->get_dateWidth_89();
		Rect_set_width_m07D84AD7C7093EDCCD94A7B93A9447CA9917DD9D((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), (((float)((float)L_275))), /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_276 = V_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_277 = __this->get_dateDisplayList_53();
		int32_t L_278 = V_1;
		NullCheck(L_277);
		int32_t L_279 = L_278;
		String_t* L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		bool L_281 = V_7;
		G_B103_0 = L_280;
		G_B103_1 = L_276;
		if (!L_281)
		{
			G_B104_0 = L_280;
			G_B104_1 = L_276;
			goto IL_0851;
		}
	}
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_282 = __this->get_scrollViewStyleSelected_56();
		G_B105_0 = L_282;
		G_B105_1 = G_B103_0;
		G_B105_2 = G_B103_1;
		goto IL_0857;
	}

IL_0851:
	{
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_283 = __this->get_scrollViewStyle_55();
		G_B105_0 = L_283;
		G_B105_1 = G_B104_0;
		G_B105_2 = G_B104_1;
	}

IL_0857:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mE97FBC73519323E93EFF86E1F1C96E7F4B612850(G_B105_2, G_B105_1, G_B105_0, /*hidden argument*/NULL);
	}

IL_085c:
	{
		float L_284 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		int32_t L_285 = __this->get_linePixelHeight_87();
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), ((float)il2cpp_codegen_add((float)L_284, (float)(((float)((float)L_285))))), /*hidden argument*/NULL);
		int32_t L_286 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_286, (int32_t)1));
	}

IL_0876:
	{
		int32_t L_287 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_288 = __this->get_fileDisplayList_52();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_288);
		int32_t L_289 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_288, /*hidden argument*/NULL);
		if ((((int32_t)L_287) < ((int32_t)L_289)))
		{
			goto IL_05cf;
		}
	}
	{
		bool L_290 = V_2;
		if (!L_290)
		{
			goto IL_0892;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_EndScrollView_m31660D208D98FDEA919BBE1E590F3970633E66FC(/*hidden argument*/NULL);
	}

IL_0892:
	{
		int32_t L_291 = GUIUtility_get_keyboardControl_mC111A10FE792FA94E3859C5BC704D611F8768BE1(/*hidden argument*/NULL);
		int32_t L_292 = __this->get_keyboardControlID_101();
		if ((!(((uint32_t)L_291) == ((uint32_t)L_292))))
		{
			goto IL_08a9;
		}
	}
	{
		__this->set_selectedFileNumber_46((-1));
	}

IL_08a9:
	{
		int32_t L_293 = __this->get_selectedFileNumber_46();
		int32_t L_294 = __this->get_oldSelectedFileNumber_47();
		if ((((int32_t)L_293) == ((int32_t)L_294)))
		{
			goto IL_0c85;
		}
	}
	{
		bool L_295 = __this->get_frameDone_64();
		if (!L_295)
		{
			goto IL_0c85;
		}
	}
	{
		bool L_296 = __this->get_multi_116();
		if (!L_296)
		{
			goto IL_0b5a;
		}
	}
	{
		bool L_297 = V_5;
		if (!L_297)
		{
			goto IL_0aa2;
		}
	}
	{
		int32_t L_298 = __this->get_selectedFileNumber_46();
		int32_t L_299 = __this->get_anchorFileNumber_48();
		if ((((int32_t)L_298) == ((int32_t)L_299)))
		{
			goto IL_093c;
		}
	}
	{
		int32_t L_300 = __this->get_selectedFileNumber_46();
		int32_t L_301 = __this->get_anchorFileNumber_48();
		if ((((int32_t)L_300) <= ((int32_t)L_301)))
		{
			goto IL_08ff;
		}
	}
	{
		G_B120_0 = 1;
		goto IL_0900;
	}

IL_08ff:
	{
		G_B120_0 = (-1);
	}

IL_0900:
	{
		V_8 = G_B120_0;
		int32_t L_302 = __this->get_anchorFileNumber_48();
		V_1 = L_302;
		goto IL_0930;
	}

IL_090e:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_303 = __this->get_multiFileList_54();
		int32_t L_304 = V_1;
		NullCheck(L_303);
		bool L_305 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_303, L_304, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		if (L_305)
		{
			goto IL_092b;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_306 = __this->get_multiFileList_54();
		int32_t L_307 = V_1;
		NullCheck(L_306);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_306, L_307, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_092b:
	{
		int32_t L_308 = V_1;
		int32_t L_309 = V_8;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_308, (int32_t)L_309));
	}

IL_0930:
	{
		int32_t L_310 = V_1;
		int32_t L_311 = __this->get_selectedFileNumber_46();
		if ((!(((uint32_t)L_310) == ((uint32_t)L_311))))
		{
			goto IL_090e;
		}
	}

IL_093c:
	{
		int32_t L_312 = __this->get_selectedFileNumber_46();
		int32_t L_313 = __this->get_anchorFileNumber_48();
		if ((((int32_t)L_312) > ((int32_t)L_313)))
		{
			goto IL_098e;
		}
	}
	{
		int32_t L_314 = __this->get_oldSelectedFileNumber_47();
		int32_t L_315 = __this->get_anchorFileNumber_48();
		if ((((int32_t)L_314) <= ((int32_t)L_315)))
		{
			goto IL_098e;
		}
	}
	{
		int32_t L_316 = __this->get_anchorFileNumber_48();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_316, (int32_t)1));
		goto IL_097d;
	}

IL_096c:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_317 = __this->get_multiFileList_54();
		int32_t L_318 = V_1;
		NullCheck(L_317);
		List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F(L_317, L_318, /*hidden argument*/List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
		int32_t L_319 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_319, (int32_t)1));
	}

IL_097d:
	{
		int32_t L_320 = V_1;
		int32_t L_321 = __this->get_oldSelectedFileNumber_47();
		if ((((int32_t)L_320) <= ((int32_t)L_321)))
		{
			goto IL_096c;
		}
	}
	{
		goto IL_09db;
	}

IL_098e:
	{
		int32_t L_322 = __this->get_selectedFileNumber_46();
		int32_t L_323 = __this->get_anchorFileNumber_48();
		if ((((int32_t)L_322) < ((int32_t)L_323)))
		{
			goto IL_09db;
		}
	}
	{
		int32_t L_324 = __this->get_oldSelectedFileNumber_47();
		int32_t L_325 = __this->get_anchorFileNumber_48();
		if ((((int32_t)L_324) >= ((int32_t)L_325)))
		{
			goto IL_09db;
		}
	}
	{
		int32_t L_326 = __this->get_anchorFileNumber_48();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_326, (int32_t)1));
		goto IL_09cf;
	}

IL_09be:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_327 = __this->get_multiFileList_54();
		int32_t L_328 = V_1;
		NullCheck(L_327);
		List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F(L_327, L_328, /*hidden argument*/List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
		int32_t L_329 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_329, (int32_t)1));
	}

IL_09cf:
	{
		int32_t L_330 = V_1;
		int32_t L_331 = __this->get_oldSelectedFileNumber_47();
		if ((((int32_t)L_330) >= ((int32_t)L_331)))
		{
			goto IL_09be;
		}
	}

IL_09db:
	{
		int32_t L_332 = __this->get_selectedFileNumber_46();
		int32_t L_333 = __this->get_anchorFileNumber_48();
		if ((((int32_t)L_332) <= ((int32_t)L_333)))
		{
			goto IL_0a2b;
		}
	}
	{
		int32_t L_334 = __this->get_selectedFileNumber_46();
		int32_t L_335 = __this->get_oldSelectedFileNumber_47();
		if ((((int32_t)L_334) >= ((int32_t)L_335)))
		{
			goto IL_0a2b;
		}
	}
	{
		int32_t L_336 = __this->get_selectedFileNumber_46();
		V_1 = L_336;
		goto IL_0a1a;
	}

IL_0a09:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_337 = __this->get_multiFileList_54();
		int32_t L_338 = V_1;
		NullCheck(L_337);
		List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F(L_337, L_338, /*hidden argument*/List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
		int32_t L_339 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_339, (int32_t)1));
	}

IL_0a1a:
	{
		int32_t L_340 = V_1;
		int32_t L_341 = __this->get_oldSelectedFileNumber_47();
		if ((((int32_t)L_340) <= ((int32_t)L_341)))
		{
			goto IL_0a09;
		}
	}
	{
		goto IL_0a76;
	}

IL_0a2b:
	{
		int32_t L_342 = __this->get_selectedFileNumber_46();
		int32_t L_343 = __this->get_anchorFileNumber_48();
		if ((((int32_t)L_342) >= ((int32_t)L_343)))
		{
			goto IL_0a76;
		}
	}
	{
		int32_t L_344 = __this->get_selectedFileNumber_46();
		int32_t L_345 = __this->get_oldSelectedFileNumber_47();
		if ((((int32_t)L_344) <= ((int32_t)L_345)))
		{
			goto IL_0a76;
		}
	}
	{
		int32_t L_346 = __this->get_selectedFileNumber_46();
		V_1 = L_346;
		goto IL_0a6a;
	}

IL_0a59:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_347 = __this->get_multiFileList_54();
		int32_t L_348 = V_1;
		NullCheck(L_347);
		List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F(L_347, L_348, /*hidden argument*/List_1_Remove_m49B76327A7803D7CE1ACAF6D68C102E03A33391F_RuntimeMethod_var);
		int32_t L_349 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_349, (int32_t)1));
	}

IL_0a6a:
	{
		int32_t L_350 = V_1;
		int32_t L_351 = __this->get_oldSelectedFileNumber_47();
		if ((((int32_t)L_350) >= ((int32_t)L_351)))
		{
			goto IL_0a59;
		}
	}

IL_0a76:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_352 = __this->get_multiFileList_54();
		int32_t L_353 = __this->get_selectedFileNumber_46();
		NullCheck(L_352);
		bool L_354 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_352, L_353, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		if (L_354)
		{
			goto IL_0a9d;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_355 = __this->get_multiFileList_54();
		int32_t L_356 = __this->get_selectedFileNumber_46();
		NullCheck(L_355);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_355, L_356, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_0a9d:
	{
		goto IL_0ae2;
	}

IL_0aa2:
	{
		bool L_357 = V_4;
		if (L_357)
		{
			goto IL_0ae2;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_358 = __this->get_multiFileList_54();
		NullCheck(L_358);
		int32_t L_359 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_358, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if ((((int32_t)L_359) <= ((int32_t)0)))
		{
			goto IL_0ac5;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_360 = __this->get_multiFileList_54();
		NullCheck(L_360);
		List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_360, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
	}

IL_0ac5:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_361 = __this->get_multiFileList_54();
		int32_t L_362 = __this->get_selectedFileNumber_46();
		NullCheck(L_361);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_361, L_362, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		int32_t L_363 = __this->get_selectedFileNumber_46();
		__this->set_anchorFileNumber_48(L_363);
	}

IL_0ae2:
	{
		bool L_364 = V_4;
		if (L_364)
		{
			goto IL_0b55;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_365 = __this->get_multiFileList_54();
		NullCheck(L_365);
		int32_t L_366 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_365, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		G_B156_0 = __this;
		if ((!(((uint32_t)L_366) == ((uint32_t)1))))
		{
			G_B159_0 = __this;
			goto IL_0b4b;
		}
	}
	{
		int32_t L_367 = __this->get_selectedFileNumber_46();
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_368 = __this->get_dirList_49();
		NullCheck(L_368);
		int32_t L_369 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_368, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		G_B157_0 = G_B156_0;
		if ((((int32_t)L_367) < ((int32_t)L_369)))
		{
			G_B159_0 = G_B156_0;
			goto IL_0b4b;
		}
	}
	{
		int32_t L_370 = __this->get_selectedFileNumber_46();
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_371 = __this->get_dirList_49();
		NullCheck(L_371);
		int32_t L_372 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_371, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_373 = __this->get_fileList_50();
		NullCheck(L_373);
		int32_t L_374 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_373, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		G_B158_0 = G_B157_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_370, (int32_t)L_372))) >= ((int32_t)L_374)))
		{
			G_B159_0 = G_B157_0;
			goto IL_0b4b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_375 = __this->get_fileDisplayList_52();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_376 = __this->get_multiFileList_54();
		NullCheck(L_376);
		int32_t L_377 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_376, 0, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		NullCheck(L_375);
		int32_t L_378 = L_377;
		String_t* L_379 = (L_375)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
		G_B160_0 = L_379;
		G_B160_1 = G_B158_0;
		goto IL_0b50;
	}

IL_0b4b:
	{
		String_t* L_380 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B160_0 = L_380;
		G_B160_1 = G_B159_0;
	}

IL_0b50:
	{
		NullCheck(G_B160_1);
		G_B160_1->set_fileName_62(G_B160_0);
	}

IL_0b55:
	{
		goto IL_0c35;
	}

IL_0b5a:
	{
		int32_t L_381 = __this->get_fileType_79();
		if ((!(((uint32_t)L_381) == ((uint32_t)1))))
		{
			goto IL_0bcb;
		}
	}
	{
		int32_t L_382 = __this->get_selectedFileNumber_46();
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_383 = __this->get_dirList_49();
		NullCheck(L_383);
		int32_t L_384 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_383, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		if ((((int32_t)L_382) < ((int32_t)L_384)))
		{
			goto IL_0bc6;
		}
	}
	{
		int32_t L_385 = __this->get_selectedFileNumber_46();
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_386 = __this->get_dirList_49();
		NullCheck(L_386);
		int32_t L_387 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_386, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_388 = __this->get_fileList_50();
		NullCheck(L_388);
		int32_t L_389 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_388, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_385, (int32_t)L_387))) >= ((int32_t)L_389)))
		{
			goto IL_0bc6;
		}
	}
	{
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_390 = __this->get_fileList_50();
		int32_t L_391 = __this->get_selectedFileNumber_46();
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_392 = __this->get_dirList_49();
		NullCheck(L_392);
		int32_t L_393 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_392, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		NullCheck(L_390);
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_394 = List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_inline(L_390, ((int32_t)il2cpp_codegen_subtract((int32_t)L_391, (int32_t)L_393)), /*hidden argument*/List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_RuntimeMethod_var);
		NullCheck(L_394);
		String_t* L_395 = L_394->get_name_0();
		__this->set_fileName_62(L_395);
	}

IL_0bc6:
	{
		goto IL_0c35;
	}

IL_0bcb:
	{
		int32_t L_396 = __this->get_selectedFileNumber_46();
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_397 = __this->get_dirList_49();
		NullCheck(L_397);
		int32_t L_398 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_397, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		G_B168_0 = __this;
		if ((((int32_t)L_396) < ((int32_t)L_398)))
		{
			G_B170_0 = __this;
			goto IL_0c2b;
		}
	}
	{
		int32_t L_399 = __this->get_selectedFileNumber_46();
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_400 = __this->get_dirList_49();
		NullCheck(L_400);
		int32_t L_401 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_400, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_402 = __this->get_fileList_50();
		NullCheck(L_402);
		int32_t L_403 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_402, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		G_B169_0 = G_B168_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_399, (int32_t)L_401))) >= ((int32_t)L_403)))
		{
			G_B170_0 = G_B168_0;
			goto IL_0c2b;
		}
	}
	{
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_404 = __this->get_fileList_50();
		int32_t L_405 = __this->get_selectedFileNumber_46();
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_406 = __this->get_dirList_49();
		NullCheck(L_406);
		int32_t L_407 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_406, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		NullCheck(L_404);
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_408 = List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_inline(L_404, ((int32_t)il2cpp_codegen_subtract((int32_t)L_405, (int32_t)L_407)), /*hidden argument*/List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_RuntimeMethod_var);
		NullCheck(L_408);
		String_t* L_409 = L_408->get_name_0();
		G_B171_0 = L_409;
		G_B171_1 = G_B169_0;
		goto IL_0c30;
	}

IL_0c2b:
	{
		String_t* L_410 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B171_0 = L_410;
		G_B171_1 = G_B170_0;
	}

IL_0c30:
	{
		NullCheck(G_B171_1);
		G_B171_1->set_fileName_62(G_B171_0);
	}

IL_0c35:
	{
		int32_t L_411 = __this->get_selectedFileNumber_46();
		__this->set_oldSelectedFileNumber_47(L_411);
		int32_t L_412 = __this->get_fileType_79();
		if ((!(((uint32_t)L_412) == ((uint32_t)1))))
		{
			goto IL_0c85;
		}
	}
	{
		bool L_413 = __this->get_autoAddExtension_4();
		if (!L_413)
		{
			goto IL_0c85;
		}
	}
	{
		String_t* L_414 = __this->get_fileName_62();
		String_t* L_415 = __this->get_addedExtension_5();
		NullCheck(L_414);
		bool L_416 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_414, L_415, /*hidden argument*/NULL);
		if (L_416)
		{
			goto IL_0c85;
		}
	}
	{
		String_t* L_417 = __this->get_fileName_62();
		String_t* L_418 = __this->get_addedExtension_5();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_419 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(L_417, L_418, /*hidden argument*/NULL);
		__this->set_fileName_62(L_419);
	}

IL_0c85:
	{
		bool L_420 = __this->get_showPopup_66();
		if (L_420)
		{
			goto IL_0dd9;
		}
	}
	{
		bool L_421 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (L_421)
		{
			goto IL_0ca5;
		}
	}
	{
		bool L_422 = __this->get_useMobile_125();
		if (L_422)
		{
			goto IL_0d41;
		}
	}

IL_0ca5:
	{
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_423 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_423);
		int32_t L_424 = Event_get_clickCount_mDB7E4C64716164376385CB037ACDD7A85F6FCAEF(L_423, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_424) == ((uint32_t)2))))
		{
			goto IL_0cf3;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_425 = __this->get_address_of_fileAreaRect_106();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_426 = __this->get_mousePos_86();
		bool L_427 = Rect_Contains_m51C65159B1706EB00CC962D7CD1CEC2EBD85BC3A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_425, L_426, /*hidden argument*/NULL);
		if (L_427)
		{
			goto IL_0ce1;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_428 = __this->get_address_of_volumeBoxRect_107();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_429 = __this->get_mousePos_86();
		bool L_430 = Rect_Contains_m51C65159B1706EB00CC962D7CD1CEC2EBD85BC3A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_428, L_429, /*hidden argument*/NULL);
		if (!L_430)
		{
			goto IL_0cf3;
		}
	}

IL_0ce1:
	{
		bool L_431 = __this->get_frameDone_64();
		if (!L_431)
		{
			goto IL_0cf3;
		}
	}
	{
		__this->set_doubleClicked_82((bool)1);
	}

IL_0cf3:
	{
		bool L_432 = __this->get_doubleClicked_82();
		if (!L_432)
		{
			goto IL_0d3c;
		}
	}
	{
		bool L_433 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (!L_433)
		{
			goto IL_0d3c;
		}
	}
	{
		bool L_434 = __this->get_frameDone_64();
		if (!L_434)
		{
			goto IL_0d3c;
		}
	}
	{
		__this->set_doubleClicked_82((bool)0);
		RuntimeObject* L_435 = UniFileBrowser_SelectFile_mA8A8C93DEEAD7F3F6F8D5C6F226BAEDF96707678(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_435, /*hidden argument*/NULL);
		RuntimeObject* L_436 = UniFileBrowser_WaitForFrame_m72146916668D7E3E06B2D10CC3EC066FD347278E(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_436, /*hidden argument*/NULL);
		__this->set_messageWindowDelay_140((bool)1);
	}

IL_0d3c:
	{
		goto IL_0dd9;
	}

IL_0d41:
	{
		V_10 = 0;
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_437 = Input_get_touches_m26E3034CAE32931E59A480327A3CF4BFC2045E8F(/*hidden argument*/NULL);
		V_11 = L_437;
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_438 = V_11;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_438);
		int32_t L_439 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_438, /*hidden argument*/NULL);
		V_12 = L_439;
		goto IL_0dd0;
	}

IL_0d59:
	{
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_440 = V_11;
		int32_t L_441 = V_10;
		NullCheck(L_440);
		int32_t L_442 = Touch_get_tapCount_m3F2B62FA02EF54D5FA6C43ECB4A3A8854C5BA1F8((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_440)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_441))), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_442) == ((uint32_t)2))))
		{
			goto IL_0dca;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_443 = __this->get_address_of_fileAreaRect_106();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_444 = __this->get_mousePos_86();
		bool L_445 = Rect_Contains_m51C65159B1706EB00CC962D7CD1CEC2EBD85BC3A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_443, L_444, /*hidden argument*/NULL);
		if (L_445)
		{
			goto IL_0d99;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_446 = __this->get_address_of_volumeBoxRect_107();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_447 = __this->get_mousePos_86();
		bool L_448 = Rect_Contains_m51C65159B1706EB00CC962D7CD1CEC2EBD85BC3A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_446, L_447, /*hidden argument*/NULL);
		if (!L_448)
		{
			goto IL_0dca;
		}
	}

IL_0d99:
	{
		bool L_449 = __this->get_frameDone_64();
		if (!L_449)
		{
			goto IL_0dca;
		}
	}
	{
		RuntimeObject* L_450 = UniFileBrowser_SelectFile_mA8A8C93DEEAD7F3F6F8D5C6F226BAEDF96707678(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_450, /*hidden argument*/NULL);
		RuntimeObject* L_451 = UniFileBrowser_WaitForFrame_m72146916668D7E3E06B2D10CC3EC066FD347278E(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_451, /*hidden argument*/NULL);
		__this->set_messageWindowDelay_140((bool)1);
		goto IL_0dd9;
	}

IL_0dca:
	{
		int32_t L_452 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_452, (int32_t)1));
	}

IL_0dd0:
	{
		int32_t L_453 = V_10;
		int32_t L_454 = V_12;
		if ((((int32_t)L_453) < ((int32_t)L_454)))
		{
			goto IL_0d59;
		}
	}

IL_0dd9:
	{
		bool L_455 = __this->get_useFilterButton_22();
		if (!L_455)
		{
			goto IL_0e94;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_456 = __this->get_address_of_windowTabOffset_23();
		float L_457 = L_456->get_x_0();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_458 = __this->get_address_of_fileWindowRect_75();
		float L_459 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_458, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_460 = __this->get_address_of_windowTabOffset_23();
		float L_461 = L_460->get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_462;
		memset((&L_462), 0, sizeof(L_462));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_462), ((float)il2cpp_codegen_add((float)(((float)((float)((int32_t)40)))), (float)L_457)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_459, (float)(((float)((float)((int32_t)76)))))), (float)L_461)), (((float)((float)((int32_t)120)))), (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_463 = __this->get_windowTab_24();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mA260E627AEAED27F262A355B3930F1EE4A1C114B(L_462, L_463, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_464 = __this->get_address_of_fileWindowRect_75();
		float L_465 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_464, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_466 = __this->get_address_of_windowTabOffset_23();
		float L_467 = L_466->get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_468;
		memset((&L_468), 0, sizeof(L_468));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_468), (((float)((float)((int32_t)50)))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_465, (float)(((float)((float)((int32_t)76)))))), (float)L_467)), (float)(((float)((float)8))))), (((float)((float)((int32_t)80)))), (((float)((float)((int32_t)33)))), /*hidden argument*/NULL);
		bool L_469 = __this->get_filterFiles_20();
		G_B199_0 = L_468;
		if (!L_469)
		{
			G_B200_0 = L_468;
			goto IL_0e65;
		}
	}
	{
		G_B201_0 = _stringLiteralC06E5D362CB79AEE67E2F96B2860E9A1582FDFEF;
		G_B201_1 = G_B199_0;
		goto IL_0e6a;
	}

IL_0e65:
	{
		G_B201_0 = _stringLiteral1844373BB9BF0B4329F7C551C04D2F7C8E35E0A7;
		G_B201_1 = G_B200_0;
	}

IL_0e6a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_470 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(G_B201_1, G_B201_0, /*hidden argument*/NULL);
		if (!L_470)
		{
			goto IL_0e94;
		}
	}
	{
		bool L_471 = __this->get_showPopup_66();
		if (L_471)
		{
			goto IL_0e94;
		}
	}
	{
		bool L_472 = __this->get_filterFiles_20();
		__this->set_filterFiles_20((bool)((((int32_t)L_472) == ((int32_t)0))? 1 : 0));
		UniFileBrowser_GetCurrentFileInfo_m998D5221BA5821F7809F2A1D9B68020C6F87C9B7(__this, /*hidden argument*/NULL);
	}

IL_0e94:
	{
		bool L_473 = __this->get_useDeleteButton_10();
		if (!L_473)
		{
			goto IL_0fb4;
		}
	}
	{
		int32_t L_474 = __this->get_fileType_79();
		if ((((int32_t)L_474) == ((int32_t)2)))
		{
			goto IL_0fb4;
		}
	}
	{
		int32_t L_475 = __this->get_fileType_79();
		if ((!(((uint32_t)L_475) == ((uint32_t)0))))
		{
			goto IL_0efd;
		}
	}
	{
		bool L_476 = __this->get__allowMultiSelect_44();
		if (L_476)
		{
			goto IL_0ed7;
		}
	}
	{
		String_t* L_477 = __this->get_fileName_62();
		String_t* L_478 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		bool L_479 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_477, L_478, /*hidden argument*/NULL);
		if (L_479)
		{
			goto IL_0ef2;
		}
	}

IL_0ed7:
	{
		bool L_480 = __this->get__allowMultiSelect_44();
		if (!L_480)
		{
			goto IL_0ef8;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_481 = __this->get_multiFileList_54();
		NullCheck(L_481);
		int32_t L_482 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_481, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if (L_482)
		{
			goto IL_0ef8;
		}
	}

IL_0ef2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)0, /*hidden argument*/NULL);
	}

IL_0ef8:
	{
		goto IL_0f39;
	}

IL_0efd:
	{
		String_t* L_483 = __this->get_fileName_62();
		String_t* L_484 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		bool L_485 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_483, L_484, /*hidden argument*/NULL);
		if (L_485)
		{
			goto IL_0f33;
		}
	}
	{
		bool L_486 = __this->get_autoAddExtension_4();
		if (!L_486)
		{
			goto IL_0f39;
		}
	}
	{
		String_t* L_487 = __this->get_fileName_62();
		String_t* L_488 = __this->get_addedExtension_5();
		bool L_489 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_487, L_488, /*hidden argument*/NULL);
		if (!L_489)
		{
			goto IL_0f39;
		}
	}

IL_0f33:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)0, /*hidden argument*/NULL);
	}

IL_0f39:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_490 = __this->get_address_of_fileWindowRect_75();
		float L_491 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_490, /*hidden argument*/NULL);
		int32_t L_492 = __this->get_buttonPositionX_114();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_493 = __this->get_address_of_buttonSize_36();
		float L_494 = L_493->get_x_0();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_495 = __this->get_address_of_fileWindowRect_75();
		float L_496 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_495, /*hidden argument*/NULL);
		int32_t L_497 = __this->get_buttonPositionY_115();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_498 = __this->get_address_of_buttonSize_36();
		float L_499 = L_498->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_500 = __this->get_address_of_buttonSize_36();
		float L_501 = L_500->get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_502;
		memset((&L_502), 0, sizeof(L_502));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_502), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_491, (float)(((float)((float)L_492))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_494, (float)(((float)((float)((int32_t)25)))))), (float)(((float)((float)2))))))), ((float)il2cpp_codegen_subtract((float)L_496, (float)(((float)((float)L_497))))), L_499, L_501, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_503 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_502, _stringLiteral824E903B1E7FC13229B28EFC49EE5B6F62A6225E, /*hidden argument*/NULL);
		if (!L_503)
		{
			goto IL_0fb4;
		}
	}
	{
		bool L_504 = __this->get_showPopup_66();
		if (L_504)
		{
			goto IL_0fb4;
		}
	}
	{
		RuntimeObject* L_505 = UniFileBrowser_DeleteFile_mEF327437F4B6584519402B269858238168B07308(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_505, /*hidden argument*/NULL);
	}

IL_0fb4:
	{
		bool L_506 = __this->get_showMessageWindow_136();
		if (L_506)
		{
			goto IL_0fc5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)1, /*hidden argument*/NULL);
	}

IL_0fc5:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_507 = __this->get_address_of_fileWindowRect_75();
		float L_508 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_507, /*hidden argument*/NULL);
		int32_t L_509 = __this->get_buttonPositionX_114();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_510 = __this->get_address_of_buttonSize_36();
		float L_511 = L_510->get_x_0();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_512 = __this->get_address_of_fileWindowRect_75();
		float L_513 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_512, /*hidden argument*/NULL);
		int32_t L_514 = __this->get_buttonPositionY_115();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_515 = __this->get_address_of_buttonSize_36();
		float L_516 = L_515->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_517 = __this->get_address_of_buttonSize_36();
		float L_518 = L_517->get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_519;
		memset((&L_519), 0, sizeof(L_519));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_519), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_508, (float)(((float)((float)L_509))))), (float)((float)il2cpp_codegen_add((float)L_511, (float)(((float)((float)((int32_t)15)))))))), ((float)il2cpp_codegen_subtract((float)L_513, (float)(((float)((float)L_514))))), L_516, L_518, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_520 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_519, _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674, /*hidden argument*/NULL);
		if (!L_520)
		{
			goto IL_1036;
		}
	}
	{
		bool L_521 = __this->get_showPopup_66();
		if (L_521)
		{
			goto IL_1036;
		}
	}
	{
		VirtActionInvoker0::Invoke(31 /* System.Void UniFileBrowser::CloseFileWindow() */, __this);
	}

IL_1036:
	{
		int32_t L_522 = __this->get_fileType_79();
		if ((!(((uint32_t)L_522) == ((uint32_t)0))))
		{
			goto IL_107f;
		}
	}
	{
		bool L_523 = __this->get_multi_116();
		if (L_523)
		{
			goto IL_1059;
		}
	}
	{
		int32_t L_524 = __this->get_selectedFileNumber_46();
		if ((((int32_t)L_524) == ((int32_t)(-1))))
		{
			goto IL_1074;
		}
	}

IL_1059:
	{
		bool L_525 = __this->get_multi_116();
		if (!L_525)
		{
			goto IL_107a;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_526 = __this->get_multiFileList_54();
		NullCheck(L_526);
		int32_t L_527 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_526, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if (L_527)
		{
			goto IL_107a;
		}
	}

IL_1074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)0, /*hidden argument*/NULL);
	}

IL_107a:
	{
		goto IL_1121;
	}

IL_107f:
	{
		int32_t L_528 = __this->get_fileType_79();
		if ((!(((uint32_t)L_528) == ((uint32_t)2))))
		{
			goto IL_10b8;
		}
	}
	{
		int32_t L_529 = __this->get_selectedFileNumber_46();
		if ((((int32_t)L_529) == ((int32_t)(-1))))
		{
			goto IL_10ad;
		}
	}
	{
		int32_t L_530 = __this->get_selectedFileNumber_46();
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_531 = __this->get_dirList_49();
		NullCheck(L_531);
		int32_t L_532 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_531, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		if ((((int32_t)L_530) < ((int32_t)L_532)))
		{
			goto IL_10b3;
		}
	}

IL_10ad:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)0, /*hidden argument*/NULL);
	}

IL_10b3:
	{
		goto IL_1121;
	}

IL_10b8:
	{
		int32_t L_533 = __this->get_selectedFileNumber_46();
		if ((((int32_t)L_533) == ((int32_t)(-1))))
		{
			goto IL_10da;
		}
	}
	{
		int32_t L_534 = __this->get_selectedFileNumber_46();
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_535 = __this->get_dirList_49();
		NullCheck(L_535);
		int32_t L_536 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_535, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		if ((((int32_t)L_534) < ((int32_t)L_536)))
		{
			goto IL_1121;
		}
	}

IL_10da:
	{
		bool L_537 = __this->get_autoAddExtension_4();
		if (L_537)
		{
			goto IL_10fa;
		}
	}
	{
		String_t* L_538 = __this->get_fileName_62();
		String_t* L_539 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		bool L_540 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_538, L_539, /*hidden argument*/NULL);
		if (L_540)
		{
			goto IL_111b;
		}
	}

IL_10fa:
	{
		bool L_541 = __this->get_autoAddExtension_4();
		if (!L_541)
		{
			goto IL_1121;
		}
	}
	{
		String_t* L_542 = __this->get_fileName_62();
		String_t* L_543 = __this->get_addedExtension_5();
		bool L_544 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_542, L_543, /*hidden argument*/NULL);
		if (!L_544)
		{
			goto IL_1121;
		}
	}

IL_111b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)0, /*hidden argument*/NULL);
	}

IL_1121:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_545 = __this->get_address_of_fileWindowRect_75();
		float L_546 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_545, /*hidden argument*/NULL);
		int32_t L_547 = __this->get_buttonPositionX_114();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_548 = __this->get_address_of_fileWindowRect_75();
		float L_549 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_548, /*hidden argument*/NULL);
		int32_t L_550 = __this->get_buttonPositionY_115();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_551 = __this->get_address_of_buttonSize_36();
		float L_552 = L_551->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_553 = __this->get_address_of_buttonSize_36();
		float L_554 = L_553->get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_555;
		memset((&L_555), 0, sizeof(L_555));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_555), ((float)il2cpp_codegen_subtract((float)L_546, (float)(((float)((float)L_547))))), ((float)il2cpp_codegen_subtract((float)L_549, (float)(((float)((float)L_550))))), L_552, L_554, /*hidden argument*/NULL);
		int32_t L_556 = __this->get_fileType_79();
		G_B245_0 = L_555;
		if ((!(((uint32_t)L_556) == ((uint32_t)1))))
		{
			G_B248_0 = L_555;
			goto IL_119d;
		}
	}
	{
		int32_t L_557 = __this->get_selectedFileNumber_46();
		G_B246_0 = G_B245_0;
		if ((((int32_t)L_557) <= ((int32_t)(-1))))
		{
			G_B248_0 = G_B245_0;
			goto IL_119d;
		}
	}
	{
		int32_t L_558 = __this->get_selectedFileNumber_46();
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_559 = __this->get_dirList_49();
		NullCheck(L_559);
		int32_t L_560 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_559, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		G_B247_0 = G_B246_0;
		if ((((int32_t)L_558) >= ((int32_t)L_560)))
		{
			G_B248_0 = G_B246_0;
			goto IL_119d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_561 = __this->get_selectButtonText_78();
		NullCheck(L_561);
		int32_t L_562 = 0;
		String_t* L_563 = (L_561)->GetAt(static_cast<il2cpp_array_size_t>(L_562));
		G_B249_0 = L_563;
		G_B249_1 = G_B247_0;
		goto IL_11aa;
	}

IL_119d:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_564 = __this->get_selectButtonText_78();
		int32_t L_565 = __this->get_fileType_79();
		NullCheck(L_564);
		int32_t L_566 = L_565;
		String_t* L_567 = (L_564)->GetAt(static_cast<il2cpp_array_size_t>(L_566));
		G_B249_0 = L_567;
		G_B249_1 = G_B248_0;
	}

IL_11aa:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_568 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(G_B249_1, G_B249_0, /*hidden argument*/NULL);
		if (!L_568)
		{
			goto IL_11cc;
		}
	}
	{
		bool L_569 = __this->get_showPopup_66();
		if (L_569)
		{
			goto IL_11cc;
		}
	}
	{
		RuntimeObject* L_570 = UniFileBrowser_SelectFile_mA8A8C93DEEAD7F3F6F8D5C6F226BAEDF96707678(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_570, /*hidden argument*/NULL);
	}

IL_11cc:
	{
		bool L_571 = __this->get_showPopup_66();
		if (!L_571)
		{
			goto IL_1208;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)1, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_572 = V_0;
		String_t* L_573 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_574 = __this->get_popupBoxStyle_59();
		GUI_Box_mCBAEFC1F48A5BF6E20691EE14024CEBF93705018(L_572, L_573, L_574, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_575 = V_0;
		int32_t L_576 = __this->get_selectedPath_67();
		GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* L_577 = __this->get_pathList_65();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_578 = __this->get_popupListStyle_57();
		GUI_SelectionGrid_m76F40863D7D1D75DFAD2702F28A9FDE9E7C43EBF(L_575, L_576, L_577, 1, L_578, /*hidden argument*/NULL);
	}

IL_1208:
	{
		bool L_579 = __this->get_showMessageWindow_136();
		if (L_579)
		{
			goto IL_1219;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_set_enabled_m98E32BABE43F941325D33625DF724D9FFDCF2150((bool)1, /*hidden argument*/NULL);
	}

IL_1219:
	{
		bool L_580 = __this->get_runCustomFunction_119();
		if (!L_580)
		{
			goto IL_122f;
		}
	}
	{
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * L_581 = __this->get_customFunction_120();
		NullCheck(L_581);
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___Invoke_m728B5EE49D98F28DF86D6B5E0247267EA26ECD20(L_581, /*hidden argument*/NULL);
	}

IL_122f:
	{
		return;
	}
}
// System.Void UniFileBrowser::ShowError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_ShowError_mBC71A624A1607B92041389681C51209659144A7D (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_ShowError_mBC71A624A1607B92041389681C51209659144A7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___msg0;
		__this->set_message_135(L_0);
		__this->set_messageWindowTitle_137(_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		__this->set_showMessageWindow_136((bool)1);
		__this->set_messageWindowType_132(0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_fileName_62(L_1);
		return;
	}
}
// System.Void UniFileBrowser::ShowConfirmMessage(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_ShowConfirmMessage_m42C90A19ECE3B1E34257BACB89965D42B960A5CF (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, String_t* ___title0, String_t* ___msg1, String_t* ___b1Text2, String_t* ___b2Text3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_messageWindowSize_33();
		float L_2 = L_1->get_x_0();
		int32_t L_3 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = __this->get_address_of_messageWindowSize_33();
		float L_5 = L_4->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of_messageWindowSize_33();
		float L_7 = L_6->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = __this->get_address_of_messageWindowSize_33();
		float L_9 = L_8->get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_10), ((float)il2cpp_codegen_subtract((float)(((float)((float)((int32_t)((int32_t)L_0/(int32_t)2))))), (float)((float)((float)L_2/(float)(((float)((float)2))))))), ((float)il2cpp_codegen_subtract((float)(((float)((float)((int32_t)((int32_t)L_3/(int32_t)2))))), (float)((float)((float)L_5/(float)(((float)((float)2))))))), L_7, L_9, /*hidden argument*/NULL);
		__this->set_messageWindowRect_138(L_10);
		String_t* L_11 = ___msg1;
		__this->set_message_135(L_11);
		String_t* L_12 = ___b1Text2;
		__this->set_button1Text_133(L_12);
		String_t* L_13 = ___b2Text3;
		__this->set_button2Text_134(L_13);
		String_t* L_14 = ___title0;
		__this->set_messageWindowTitle_137(L_14);
		__this->set_showMessageWindow_136((bool)1);
		__this->set_messageWindowType_132(1);
		return;
	}
}
// System.Void UniFileBrowser::MessageWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_MessageWindow_m8675F0C90FBECDC7D482967B3CC793CA560FE7AA (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_MessageWindow_m8675F0C90FBECDC7D482967B3CC793CA560FE7AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_0 = GUI_get_skin_mCD2A03F408ABBA7816C52148D92A8DC836FBDE2F(/*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_1 = GUISkin_get_label_m6F41B6A214AE6407DE5C567225828A8627A3AD83(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyle_set_wordWrap_mB6D788509ADD7BBDEFFB4409E5719FF14DC9A684(L_1, (bool)1, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_fileWindowInset_29();
		int32_t L_3 = __this->get_windowOffset_117();
		int32_t L_4 = __this->get_fileWindowInset_29();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_5 = __this->get_address_of_messageWindowRect_138();
		float L_6 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_fileWindowInset_29();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_8 = __this->get_address_of_messageWindowRect_138();
		float L_9 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_8, /*hidden argument*/NULL);
		int32_t L_10 = __this->get_windowOffset_117();
		int32_t L_11 = __this->get_fileWindowInset_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_buttonSize_36();
		float L_13 = L_12->get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_14), (((float)((float)L_2))), (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4))))), ((float)il2cpp_codegen_subtract((float)L_6, (float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)2))))))), ((float)il2cpp_codegen_subtract((float)L_9, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11))))), (float)L_13)), (float)(((float)((float)((int32_t)25)))))))), /*hidden argument*/NULL);
		String_t* L_15 = __this->get_message_135();
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_14, L_15, /*hidden argument*/NULL);
		int32_t L_16 = __this->get_messageWindowType_132();
		if ((!(((uint32_t)L_16) == ((uint32_t)0))))
		{
			goto IL_00ff;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_17 = __this->get_address_of_messageWindowSize_33();
		float L_18 = L_17->get_x_0();
		int32_t L_19 = __this->get_fileWindowInset_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_20 = __this->get_address_of_buttonSize_36();
		float L_21 = L_20->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = __this->get_address_of_messageWindowSize_33();
		float L_23 = L_22->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_24 = __this->get_address_of_buttonSize_36();
		float L_25 = L_24->get_y_1();
		int32_t L_26 = __this->get_fileWindowInset_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_27 = __this->get_address_of_buttonSize_36();
		float L_28 = L_27->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_29 = __this->get_address_of_buttonSize_36();
		float L_30 = L_29->get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_31), ((float)il2cpp_codegen_subtract((float)L_18, (float)((float)il2cpp_codegen_add((float)(((float)((float)L_19))), (float)L_21)))), ((float)il2cpp_codegen_subtract((float)L_23, (float)((float)il2cpp_codegen_add((float)L_25, (float)(((float)((float)L_26))))))), L_28, L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_32 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_31, _stringLiteral1AE348EAFA097AB898941EAFE912D711A407DA10, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00fa;
		}
	}
	{
		bool L_33 = __this->get_frameDone_64();
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		UniFileBrowser_CloseMessageWindow_m5A5F2A2E566AEE5645993EF8673B693FEC7A4EB8(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_00fa:
	{
		goto IL_0208;
	}

IL_00ff:
	{
		int32_t L_34 = __this->get_messageWindowType_132();
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_0208;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_35 = __this->get_address_of_messageWindowSize_33();
		float L_36 = L_35->get_x_0();
		int32_t L_37 = __this->get_fileWindowInset_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_38 = __this->get_address_of_buttonSize_36();
		float L_39 = L_38->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_40 = __this->get_address_of_messageWindowSize_33();
		float L_41 = L_40->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_42 = __this->get_address_of_buttonSize_36();
		float L_43 = L_42->get_y_1();
		int32_t L_44 = __this->get_fileWindowInset_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_45 = __this->get_address_of_buttonSize_36();
		float L_46 = L_45->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_47 = __this->get_address_of_buttonSize_36();
		float L_48 = L_47->get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_49), ((float)il2cpp_codegen_subtract((float)L_36, (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(((float)((float)L_37))), (float)((float)il2cpp_codegen_multiply((float)L_39, (float)(((float)((float)2))))))), (float)(((float)((float)((int32_t)25)))))))), ((float)il2cpp_codegen_subtract((float)L_41, (float)((float)il2cpp_codegen_add((float)L_43, (float)(((float)((float)L_44))))))), L_46, L_48, /*hidden argument*/NULL);
		String_t* L_50 = __this->get_button1Text_133();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_51 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_49, L_50, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_018d;
		}
	}
	{
		bool L_52 = __this->get_frameDone_64();
		if (!L_52)
		{
			goto IL_018d;
		}
	}
	{
		UniFileBrowser_CloseMessageWindow_m5A5F2A2E566AEE5645993EF8673B693FEC7A4EB8(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_018d:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_53 = __this->get_address_of_messageWindowSize_33();
		float L_54 = L_53->get_x_0();
		int32_t L_55 = __this->get_fileWindowInset_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_56 = __this->get_address_of_buttonSize_36();
		float L_57 = L_56->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_58 = __this->get_address_of_messageWindowSize_33();
		float L_59 = L_58->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_60 = __this->get_address_of_buttonSize_36();
		float L_61 = L_60->get_y_1();
		int32_t L_62 = __this->get_fileWindowInset_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_63 = __this->get_address_of_buttonSize_36();
		float L_64 = L_63->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_65 = __this->get_address_of_buttonSize_36();
		float L_66 = L_65->get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_67), ((float)il2cpp_codegen_subtract((float)L_54, (float)((float)il2cpp_codegen_add((float)(((float)((float)L_55))), (float)L_57)))), ((float)il2cpp_codegen_subtract((float)L_59, (float)((float)il2cpp_codegen_add((float)L_61, (float)(((float)((float)L_62))))))), L_64, L_66, /*hidden argument*/NULL);
		String_t* L_68 = __this->get_button2Text_134();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		bool L_69 = GUI_Button_m668EE382521BDEA241D719A9CF39B6672E2CA23F(L_67, L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_0208;
		}
	}
	{
		bool L_70 = __this->get_frameDone_64();
		if (!L_70)
		{
			goto IL_0208;
		}
	}
	{
		UniFileBrowser_CloseMessageWindow_m5A5F2A2E566AEE5645993EF8673B693FEC7A4EB8(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0208:
	{
		return;
	}
}
// System.Void UniFileBrowser::CloseMessageWindow(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_CloseMessageWindow_m5A5F2A2E566AEE5645993EF8673B693FEC7A4EB8 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, bool ___isConfirmed0, const RuntimeMethod* method)
{
	{
		__this->set_showMessageWindow_136((bool)0);
		bool L_0 = ___isConfirmed0;
		__this->set_confirm_139(L_0);
		return;
	}
}
// System.Collections.IEnumerator UniFileBrowser::WaitForFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UniFileBrowser_WaitForFrame_m72146916668D7E3E06B2D10CC3EC066FD347278E (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_WaitForFrame_m72146916668D7E3E06B2D10CC3EC066FD347278E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U24WaitForFrameU2443_tEB3ED2D8FBA19122142DE8C506A78471E97FD0DD * L_0 = (U24WaitForFrameU2443_tEB3ED2D8FBA19122142DE8C506A78471E97FD0DD *)il2cpp_codegen_object_new(U24WaitForFrameU2443_tEB3ED2D8FBA19122142DE8C506A78471E97FD0DD_il2cpp_TypeInfo_var);
		U24WaitForFrameU2443__ctor_m7C69D489D152D3F7279C43CDF4A9F14BF4B50FFF(L_0, __this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = U24WaitForFrameU2443_GetEnumerator_m1E02328736A870F8905AD57EC41D3924529CA827(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UniFileBrowser::FileWindowKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_FileWindowKeys_m700F5F72F6BBF34D77266F6B74C6091ED91E4BC6 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_FileWindowKeys_m700F5F72F6BBF34D77266F6B74C6091ED91E4BC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		V_0 = 0;
		Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * L_0 = Event_get_current_m069E3E742E6CBC32C3BC958B85153E75B0192443(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Event_get_keyCode_mBB8C639B5337ABE6A54423C604DAB0B9F3BB217E(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)274)))))
		{
			goto IL_001f;
		}
	}
	{
		V_0 = 1;
		goto IL_0057;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)273)))))
		{
			goto IL_0031;
		}
	}
	{
		V_0 = (-1);
		goto IL_0057;
	}

IL_0031:
	{
		int32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0044;
		}
	}
	{
		UniFileBrowser_ReturnHit_mFBCF4D2FC4D6C964B28E8982F06063EBE2EBA10A(__this, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_0044:
	{
		int32_t L_5 = V_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)27)))))
		{
			goto IL_0057;
		}
	}
	{
		UniFileBrowser_EscapeHit_mC537DAB30BAB12A26D30E777697BF89EFFCCC701(__this, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_0057:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0062;
		}
	}
	{
		goto IL_0216;
	}

IL_0062:
	{
		bool L_7 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)308), /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0080;
		}
	}
	{
		bool L_8 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)307), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00ab;
		}
	}

IL_0080:
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0093;
		}
	}
	{
		__this->set_selectedFileNumber_46(0);
		goto IL_00a6;
	}

IL_0093:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = __this->get_fileDisplayList_52();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_10);
		int32_t L_11 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_10, /*hidden argument*/NULL);
		__this->set_selectedFileNumber_46(((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)));
	}

IL_00a6:
	{
		goto IL_017f;
	}

IL_00ab:
	{
		bool L_12 = __this->get_limitToInitialFolder_11();
		if (L_12)
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_13 = __this->get_cmdKey1_84();
		bool L_14 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_15 = __this->get_cmdKey2_85();
		bool L_16 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0133;
		}
	}

IL_00d6:
	{
		int32_t L_17 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)(-1)))))
		{
			goto IL_00fa;
		}
	}
	{
		GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* L_18 = __this->get_pathList_65();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_18);
		int32_t L_19 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) <= ((int32_t)1)))
		{
			goto IL_00fa;
		}
	}
	{
		UniFileBrowser_BuildPathList_mC099046C6065995FBB960AB9CD404AB248A1CE22(__this, 1, /*hidden argument*/NULL);
		goto IL_0216;
	}

IL_00fa:
	{
		int32_t L_20 = __this->get_selectedFileNumber_46();
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_012e;
		}
	}
	{
		int32_t L_21 = __this->get_selectedFileNumber_46();
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_22 = __this->get_dirList_49();
		NullCheck(L_22);
		int32_t L_23 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_22, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		if ((((int32_t)L_21) >= ((int32_t)L_23)))
		{
			goto IL_012e;
		}
	}
	{
		RuntimeObject* L_24 = UniFileBrowser_SelectFile_mA8A8C93DEEAD7F3F6F8D5C6F226BAEDF96707678(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_24, /*hidden argument*/NULL);
		goto IL_0216;
	}

IL_012e:
	{
		goto IL_017f;
	}

IL_0133:
	{
		int32_t L_25 = __this->get_selectedFileNumber_46();
		int32_t L_26 = V_0;
		__this->set_selectedFileNumber_46(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26)));
		int32_t L_27 = __this->get_selectedFileNumber_46();
		if ((((int32_t)L_27) >= ((int32_t)(-1))))
		{
			goto IL_0160;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = __this->get_fileDisplayList_52();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_28);
		int32_t L_29 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_28, /*hidden argument*/NULL);
		__this->set_selectedFileNumber_46(((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1)));
	}

IL_0160:
	{
		int32_t L_30 = __this->get_selectedFileNumber_46();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = __this->get_fileDisplayList_52();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_31);
		int32_t L_32 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		int32_t L_33 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_30, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_selectedFileNumber_46(L_33);
	}

IL_017f:
	{
		int32_t L_34 = __this->get_linePixelHeight_87();
		int32_t L_35 = __this->get_selectedFileNumber_46();
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_34, (int32_t)L_35));
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_36 = __this->get_address_of_fileWindowRect_75();
		float L_37 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_36, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_38 = __this->get_address_of_fileAreaRect_106();
		float L_39 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_38, /*hidden argument*/NULL);
		int32_t L_40 = __this->get_linePixelHeight_87();
		int32_t L_41 = __this->get_linePixelHeight_87();
		V_3 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_37, (float)L_39)), (float)(((float)((float)L_40))))), (float)(((float)((float)((int32_t)((int32_t)L_41/(int32_t)2)))))));
		int32_t L_42 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_43 = __this->get_address_of_scrollPos_45();
		float L_44 = L_43->get_y_1();
		if ((((float)(((float)((float)L_42)))) >= ((float)L_44)))
		{
			goto IL_01db;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_45 = __this->get_address_of_scrollPos_45();
		int32_t L_46 = V_2;
		L_45->set_y_1((((float)((float)L_46))));
		goto IL_0216;
	}

IL_01db:
	{
		int32_t L_47 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_48 = __this->get_address_of_scrollPos_45();
		float L_49 = L_48->get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_50 = __this->get_address_of_fileWindowRect_75();
		float L_51 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_50, /*hidden argument*/NULL);
		float L_52 = V_3;
		if ((((float)(((float)((float)L_47)))) <= ((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_49, (float)L_51)), (float)L_52)))))
		{
			goto IL_0216;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_53 = __this->get_address_of_scrollPos_45();
		int32_t L_54 = V_2;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_55 = __this->get_address_of_fileWindowRect_75();
		float L_56 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_55, /*hidden argument*/NULL);
		float L_57 = V_3;
		L_53->set_y_1(((float)il2cpp_codegen_subtract((float)(((float)((float)L_54))), (float)((float)il2cpp_codegen_subtract((float)L_56, (float)L_57)))));
	}

IL_0216:
	{
		return;
	}
}
// System.Void UniFileBrowser::ReturnHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_ReturnHit_mFBCF4D2FC4D6C964B28E8982F06063EBE2EBA10A (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_showMessageWindow_136();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		UniFileBrowser_CloseMessageWindow_m5A5F2A2E566AEE5645993EF8673B693FEC7A4EB8(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_0017:
	{
		RuntimeObject* L_1 = UniFileBrowser_SelectFile_mA8A8C93DEEAD7F3F6F8D5C6F226BAEDF96707678(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void UniFileBrowser::EscapeHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_EscapeHit_mC537DAB30BAB12A26D30E777697BF89EFFCCC701 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_showMessageWindow_136();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		UniFileBrowser_CloseMessageWindow_m5A5F2A2E566AEE5645993EF8673B693FEC7A4EB8(__this, (bool)0, /*hidden argument*/NULL);
		goto IL_001d;
	}

IL_0017:
	{
		VirtActionInvoker0::Invoke(31 /* System.Void UniFileBrowser::CloseFileWindow() */, __this);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UniFileBrowser::BuildPathList(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_BuildPathList_mC099046C6065995FBB960AB9CD404AB248A1CE22 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, int32_t ___pathEntry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_BuildPathList_mC099046C6065995FBB960AB9CD404AB248A1CE22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_filePath_61(L_0);
		GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* L_1 = __this->get_pathList_65();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		int32_t L_2 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		goto IL_007a;
	}

IL_001e:
	{
		String_t* L_3 = __this->get_filePath_61();
		GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* L_4 = __this->get_pathList_65();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = GUIContent_get_text_mA6BE9C17B069417994ED27EE812A39BB960D921A(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_9 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(L_3, L_8, /*hidden argument*/NULL);
		__this->set_filePath_61(L_9);
		int32_t L_10 = V_0;
		GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* L_11 = __this->get_pathList_65();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_11);
		int32_t L_12 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)))))
		{
			goto IL_005a;
		}
	}
	{
		bool L_13 = __this->get_windowsSystem_69();
		if (!L_13)
		{
			goto IL_0076;
		}
	}

IL_005a:
	{
		String_t* L_14 = __this->get_filePath_61();
		Il2CppChar L_15 = __this->get_pathChar_68();
		Il2CppChar L_16 = L_15;
		RuntimeObject * L_17 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_16);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_18 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_14, L_17, /*hidden argument*/NULL);
		__this->set_filePath_61(L_18);
	}

IL_0076:
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
	}

IL_007a:
	{
		int32_t L_20 = V_0;
		int32_t L_21 = ___pathEntry0;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_001e;
		}
	}
	{
		__this->set_selectedPath_67((-1));
		UniFileBrowser_GetCurrentFileInfo_m998D5221BA5821F7809F2A1D9B68020C6F87C9B7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniFileBrowser::GetCurrentFileInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_GetCurrentFileInfo_m998D5221BA5821F7809F2A1D9B68020C6F87C9B7 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_GetCurrentFileInfo_m998D5221BA5821F7809F2A1D9B68020C6F87C9B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * V_1 = NULL;
	FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* V_2 = NULL;
	DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* V_3 = NULL;
	Exception_t * V_4 = NULL;
	int32_t V_5 = 0;
	FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* V_6 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_7;
	memset((&V_7), 0, sizeof(V_7));
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Exception_t * V_12 = NULL;
	bool V_13 = false;
	int32_t V_14 = 0;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_15;
	memset((&V_15), 0, sizeof(V_15));
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_16 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_17 = NULL;
	int32_t V_18 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  G_B23_0;
	memset((&G_B23_0), 0, sizeof(G_B23_0));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  G_B75_0;
	memset((&G_B75_0), 0, sizeof(G_B75_0));
	{
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_0 = __this->get_dirList_49();
		NullCheck(L_0);
		List_1_Clear_mD1BAFFFD7D448CF650E3B37D6CB19A2C7A7DC8FE(L_0, /*hidden argument*/List_1_Clear_mD1BAFFFD7D448CF650E3B37D6CB19A2C7A7DC8FE_RuntimeMethod_var);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_1 = __this->get_fileList_50();
		NullCheck(L_1);
		List_1_Clear_mD1BAFFFD7D448CF650E3B37D6CB19A2C7A7DC8FE(L_1, /*hidden argument*/List_1_Clear_mD1BAFFFD7D448CF650E3B37D6CB19A2C7A7DC8FE_RuntimeMethod_var);
		V_0 = (bool)1;
		String_t* L_2 = __this->get_filePath_61();
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_3 = (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD *)il2cpp_codegen_object_new(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD_il2cpp_TypeInfo_var);
		DirectoryInfo__ctor_m5F307F7E646135FC323F81EA93C36CC0CF6023A6(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = DirectoryInfo_get_Exists_m5DE9581E7D052687604E113BCA4BBB55AE005C6B(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_0031:
	{
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0068;
		}
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_7 = V_1;
		NullCheck(L_7);
		FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* L_8 = DirectoryInfo_GetFiles_mE0A855E848B4393B13201605F3B1C0CBF7AA485C(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_9 = V_1;
		NullCheck(L_9);
		DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_10 = DirectoryInfo_GetDirectories_m878DAFC093D31B9537B3B8C06C476E35F31A6578(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		goto IL_0063;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_004a;
		throw e;
	}

CATCH_004a:
	{ // begin catch(System.Exception)
		{
			V_4 = ((Exception_t *)__exception_local);
			Exception_t * L_11 = V_4;
			NullCheck(L_11);
			String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_11);
			UniFileBrowser_HandleError_m4C2B86B6F5C6791E105547CB548BE2E6842A80AE(__this, L_12, /*hidden argument*/NULL);
			goto IL_07eb;
		}

IL_005e:
		{
			; // IL_005e: leave IL_0063
		}
	} // end catch (depth: 1)

IL_0063:
	{
		goto IL_0076;
	}

IL_0068:
	{
		FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* L_13 = (FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B*)(FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B*)SZArrayNew(FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = L_13;
		DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_14 = (DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC*)(DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC*)SZArrayNew(DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC_il2cpp_TypeInfo_var, (uint32_t)0);
		V_3 = L_14;
	}

IL_0076:
	{
		bool L_15 = __this->get_limitToInitialFolder_11();
		if (L_15)
		{
			goto IL_01ca;
		}
	}
	{
		DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_16 = V_3;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_16);
		int32_t L_17 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_01ca;
		}
	}
	{
		V_5 = 0;
		goto IL_015d;
	}

IL_0095:
	{
		DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_18 = V_3;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		String_t* L_22 = DirectoryInfo_get_Name_mEED706FA69EDD50668D24F9C2BC19D7117BFE78E_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_23 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_22, _stringLiteral04EA945EF4823FCED8B9EDD2384A3678E630F49C, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00bd;
		}
	}
	{
		bool L_24 = __this->get_allowAppBundleBrowsing_18();
		if (L_24)
		{
			goto IL_00bd;
		}
	}
	{
		goto IL_0157;
	}

IL_00bd:
	{
		DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_25 = V_3;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		String_t* L_29 = DirectoryInfo_get_Name_mEED706FA69EDD50668D24F9C2BC19D7117BFE78E_inline(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_30 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_29, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00e5;
		}
	}
	{
		bool L_31 = __this->get_showHiddenMacFiles_19();
		if (L_31)
		{
			goto IL_00e5;
		}
	}
	{
		goto IL_0157;
	}

IL_00e5:
	{
		bool L_32 = __this->get_doFolderFunction_121();
		if (!L_32)
		{
			goto IL_011c;
		}
	}
	{
		DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_33 = V_3;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_36);
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_38 = (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD *)il2cpp_codegen_object_new(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD_il2cpp_TypeInfo_var);
		DirectoryInfo__ctor_m5F307F7E646135FC323F81EA93C36CC0CF6023A6(L_38, L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* L_39 = DirectoryInfo_GetFiles_mE0A855E848B4393B13201605F3B1C0CBF7AA485C(L_38, /*hidden argument*/NULL);
		V_6 = L_39;
		__UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 * L_40 = __this->get_folderFunction_123();
		FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* L_41 = V_6;
		NullCheck(L_40);
		bool L_42 = __UniFileBrowser_folderFunctionU24callable3U24200_30___Invoke_m412741DAD273088330273328AD9C4BC4EDE8DAA5(L_40, L_41, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_011c;
		}
	}
	{
		goto IL_0157;
	}

IL_011c:
	{
		bool L_43 = __this->get_showDate_14();
		if (!L_43)
		{
			goto IL_0135;
		}
	}
	{
		DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_44 = V_3;
		int32_t L_45 = V_5;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_48 = FileSystemInfo_get_LastWriteTime_mB554BEE74F863D47FD6856D5F644C8AED31C2049(L_47, /*hidden argument*/NULL);
		G_B23_0 = L_48;
		goto IL_013a;
	}

IL_0135:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_49 = ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var))->get_MinValue_31();
		G_B23_0 = L_49;
	}

IL_013a:
	{
		V_7 = G_B23_0;
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_50 = __this->get_dirList_49();
		DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_51 = V_3;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		String_t* L_55 = DirectoryInfo_get_Name_mEED706FA69EDD50668D24F9C2BC19D7117BFE78E_inline(L_54, /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_56 = V_7;
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_57 = (FileData_t4516F881D5D111630892E59176011C41763C9922 *)il2cpp_codegen_object_new(FileData_t4516F881D5D111630892E59176011C41763C9922_il2cpp_TypeInfo_var);
		FileData__ctor_m02C88AD7DDED87F8F8405D8E527BD23696FFFDC9(L_57, L_55, L_56, /*hidden argument*/NULL);
		NullCheck(L_50);
		List_1_Add_m8D2932C79F29162CAA14572A4A7F9A67E7F33F7B(L_50, L_57, /*hidden argument*/List_1_Add_m8D2932C79F29162CAA14572A4A7F9A67E7F33F7B_RuntimeMethod_var);
	}

IL_0157:
	{
		int32_t L_58 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_015d:
	{
		int32_t L_59 = V_5;
		DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_60 = V_3;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_60);
		int32_t L_61 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_60, /*hidden argument*/NULL);
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_62 = __this->get_sortType_16();
		if ((!(((uint32_t)L_62) == ((uint32_t)0))))
		{
			goto IL_0197;
		}
	}
	{
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_63 = __this->get_dirList_49();
		__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * L_64 = (__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 *)il2cpp_codegen_object_new(__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85_il2cpp_TypeInfo_var);
		__UniFileBrowserU24callable5U241045_39____ctor_m75DE04E3137F3FC89DE965DD02A4B7B94199D13A(L_64, __this, (intptr_t)((intptr_t)UniFileBrowser_U24GetCurrentFileInfoU24closureU2425_mE67B0AC569C48B93F9837B28913E28F943C769C0_RuntimeMethod_var), /*hidden argument*/NULL);
		Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808 * L_65 = U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_Adapt_mF4DFB384C87372E0D257D96043EA6C5DA9FAFCBC(L_64, /*hidden argument*/NULL);
		NullCheck(L_63);
		List_1_Sort_m859E46C87C2FE6DA66A1D93BB3DD45EF70D9BE1A(L_63, L_65, /*hidden argument*/List_1_Sort_m859E46C87C2FE6DA66A1D93BB3DD45EF70D9BE1A_RuntimeMethod_var);
		goto IL_01ca;
	}

IL_0197:
	{
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_66 = __this->get_dirList_49();
		__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * L_67 = (__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 *)il2cpp_codegen_object_new(__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85_il2cpp_TypeInfo_var);
		__UniFileBrowserU24callable5U241045_39____ctor_m75DE04E3137F3FC89DE965DD02A4B7B94199D13A(L_67, __this, (intptr_t)((intptr_t)UniFileBrowser_U24GetCurrentFileInfoU24closureU2426_m58E5B1B5D977AA6E3DB4E0EB23825AA2C5EAB21C_RuntimeMethod_var), /*hidden argument*/NULL);
		Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808 * L_68 = U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_Adapt_mF4DFB384C87372E0D257D96043EA6C5DA9FAFCBC(L_67, /*hidden argument*/NULL);
		NullCheck(L_66);
		List_1_Sort_m859E46C87C2FE6DA66A1D93BB3DD45EF70D9BE1A(L_66, L_68, /*hidden argument*/List_1_Sort_m859E46C87C2FE6DA66A1D93BB3DD45EF70D9BE1A_RuntimeMethod_var);
		int32_t L_69 = __this->get_sortType_16();
		if ((!(((uint32_t)L_69) == ((uint32_t)1))))
		{
			goto IL_01ca;
		}
	}
	{
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_70 = __this->get_dirList_49();
		NullCheck(L_70);
		List_1_Reverse_m1CFBBFA0E8E7215EC287CF76CD2FC91956ED237F(L_70, /*hidden argument*/List_1_Reverse_m1CFBBFA0E8E7215EC287CF76CD2FC91956ED237F_RuntimeMethod_var);
	}

IL_01ca:
	{
		bool L_71 = __this->get_showVolumes_12();
		if (!L_71)
		{
			goto IL_0385;
		}
	}
	{
		bool L_72 = __this->get_limitToInitialFolder_11();
		if (L_72)
		{
			goto IL_0385;
		}
	}

IL_01e0:
	try
	{ // begin try (depth: 1)
		{
			bool L_73 = __this->get_windowsSystem_69();
			if (L_73)
			{
				goto IL_01f6;
			}
		}

IL_01eb:
		{
			bool L_74 = __this->get_linuxSystem_70();
			if (!L_74)
			{
				goto IL_02c8;
			}
		}

IL_01f6:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_75 = Directory_GetLogicalDrives_mFF05D99E48D4DD65129D8D95ED8B5CB66A6F3BD7(/*hidden argument*/NULL);
			V_8 = L_75;
			V_9 = 0;
			V_5 = 0;
			goto IL_0257;
		}

IL_0208:
		{
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_76 = V_8;
			int32_t L_77 = V_5;
			NullCheck(L_76);
			int32_t L_78 = L_77;
			String_t* L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
			NullCheck(L_79);
			int32_t L_80 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_79, /*hidden argument*/NULL);
			if ((((int32_t)L_80) <= ((int32_t)1)))
			{
				goto IL_0251;
			}
		}

IL_0218:
		{
			List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_81 = __this->get_dirList_49();
			int32_t L_82 = V_9;
			int32_t L_83 = L_82;
			V_10 = L_83;
			int32_t L_84 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1));
			V_9 = L_84;
			int32_t L_85 = V_10;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_86 = V_8;
			int32_t L_87 = V_5;
			NullCheck(L_86);
			int32_t L_88 = L_87;
			String_t* L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_90 = V_8;
			int32_t L_91 = V_5;
			NullCheck(L_90);
			int32_t L_92 = L_91;
			String_t* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
			NullCheck(L_93);
			int32_t L_94 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_93, /*hidden argument*/NULL);
			NullCheck(L_89);
			String_t* L_95 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_89, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_94, (int32_t)1)), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_96 = ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var))->get_MinValue_31();
			FileData_t4516F881D5D111630892E59176011C41763C9922 * L_97 = (FileData_t4516F881D5D111630892E59176011C41763C9922 *)il2cpp_codegen_object_new(FileData_t4516F881D5D111630892E59176011C41763C9922_il2cpp_TypeInfo_var);
			FileData__ctor_m02C88AD7DDED87F8F8405D8E527BD23696FFFDC9(L_97, L_95, L_96, /*hidden argument*/NULL);
			NullCheck(L_81);
			List_1_Insert_m785A6161436EF2BE5AB238713235497B8BC0A54F(L_81, L_85, L_97, /*hidden argument*/List_1_Insert_m785A6161436EF2BE5AB238713235497B8BC0A54F_RuntimeMethod_var);
		}

IL_0251:
		{
			int32_t L_98 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		}

IL_0257:
		{
			int32_t L_99 = V_5;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_100 = V_8;
			NullCheck((RuntimeArray *)(RuntimeArray *)L_100);
			int32_t L_101 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_100, /*hidden argument*/NULL);
			if ((((int32_t)L_99) < ((int32_t)L_101)))
			{
				goto IL_0208;
			}
		}

IL_0265:
		{
			int32_t L_102 = V_9;
			__this->set_numberOfVolumes_73(L_102);
			bool L_103 = __this->get_windowsSystem_69();
			if (!L_103)
			{
				goto IL_02c3;
			}
		}

IL_0278:
		{
			String_t* L_104 = __this->get_filePath_61();
			Il2CppChar L_105 = __this->get_pathChar_68();
			Il2CppChar L_106 = L_105;
			RuntimeObject * L_107 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_106);
			IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
			String_t* L_108 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_107, /*hidden argument*/NULL);
			Il2CppChar L_109 = __this->get_pathChar_68();
			Il2CppChar L_110 = L_109;
			RuntimeObject * L_111 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_110);
			String_t* L_112 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_108, L_111, /*hidden argument*/NULL);
			Il2CppChar L_113 = __this->get_pathChar_68();
			Il2CppChar L_114 = L_113;
			RuntimeObject * L_115 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_114);
			String_t* L_116 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_115, /*hidden argument*/NULL);
			NullCheck(L_104);
			String_t* L_117 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_104, L_112, L_116, /*hidden argument*/NULL);
			__this->set_filePath_61(L_117);
		}

IL_02c3:
		{
			goto IL_036c;
		}

IL_02c8:
		{
			bool L_118 = __this->get_androidSystem_72();
			if (!L_118)
			{
				goto IL_02e3;
			}
		}

IL_02d3:
		{
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_119 = (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD *)il2cpp_codegen_object_new(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD_il2cpp_TypeInfo_var);
			DirectoryInfo__ctor_m5F307F7E646135FC323F81EA93C36CC0CF6023A6(L_119, _stringLiteral89A3B1DEA0F0DECFF34BA79CB6DFC7716C93DFFD, /*hidden argument*/NULL);
			V_1 = L_119;
			goto IL_02ee;
		}

IL_02e3:
		{
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_120 = (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD *)il2cpp_codegen_object_new(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD_il2cpp_TypeInfo_var);
			DirectoryInfo__ctor_m5F307F7E646135FC323F81EA93C36CC0CF6023A6(L_120, _stringLiteral08D8EC135FBF96B66F5DF4F04584A7E4D892DAE0, /*hidden argument*/NULL);
			V_1 = L_120;
		}

IL_02ee:
		{
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_121 = V_1;
			NullCheck(L_121);
			DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_122 = DirectoryInfo_GetDirectories_m878DAFC093D31B9537B3B8C06C476E35F31A6578(L_121, /*hidden argument*/NULL);
			V_3 = L_122;
			V_9 = 0;
			V_5 = 0;
			goto IL_0357;
		}

IL_0300:
		{
			DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_123 = V_3;
			int32_t L_124 = V_5;
			NullCheck(L_123);
			int32_t L_125 = L_124;
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
			NullCheck(L_126);
			FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* L_127 = DirectoryInfo_GetFiles_mE0A855E848B4393B13201605F3B1C0CBF7AA485C(L_126, /*hidden argument*/NULL);
			NullCheck((RuntimeArray *)(RuntimeArray *)L_127);
			int32_t L_128 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_127, /*hidden argument*/NULL);
			if (L_128)
			{
				goto IL_0326;
			}
		}

IL_0313:
		{
			DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_129 = V_3;
			int32_t L_130 = V_5;
			NullCheck(L_129);
			int32_t L_131 = L_130;
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
			NullCheck(L_132);
			DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_133 = DirectoryInfo_GetDirectories_m878DAFC093D31B9537B3B8C06C476E35F31A6578(L_132, /*hidden argument*/NULL);
			NullCheck((RuntimeArray *)(RuntimeArray *)L_133);
			int32_t L_134 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_133, /*hidden argument*/NULL);
			if (!L_134)
			{
				goto IL_0351;
			}
		}

IL_0326:
		{
			List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_135 = __this->get_dirList_49();
			int32_t L_136 = V_9;
			int32_t L_137 = L_136;
			V_11 = L_137;
			int32_t L_138 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1));
			V_9 = L_138;
			int32_t L_139 = V_11;
			DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_140 = V_3;
			int32_t L_141 = V_5;
			NullCheck(L_140);
			int32_t L_142 = L_141;
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
			NullCheck(L_143);
			String_t* L_144 = DirectoryInfo_get_Name_mEED706FA69EDD50668D24F9C2BC19D7117BFE78E_inline(L_143, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_145 = ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var))->get_MinValue_31();
			FileData_t4516F881D5D111630892E59176011C41763C9922 * L_146 = (FileData_t4516F881D5D111630892E59176011C41763C9922 *)il2cpp_codegen_object_new(FileData_t4516F881D5D111630892E59176011C41763C9922_il2cpp_TypeInfo_var);
			FileData__ctor_m02C88AD7DDED87F8F8405D8E527BD23696FFFDC9(L_146, L_144, L_145, /*hidden argument*/NULL);
			NullCheck(L_135);
			List_1_Insert_m785A6161436EF2BE5AB238713235497B8BC0A54F(L_135, L_139, L_146, /*hidden argument*/List_1_Insert_m785A6161436EF2BE5AB238713235497B8BC0A54F_RuntimeMethod_var);
		}

IL_0351:
		{
			int32_t L_147 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)1));
		}

IL_0357:
		{
			int32_t L_148 = V_5;
			DirectoryInfoU5BU5D_t3A579358D3EE355E1764A6D707DDCABDC1EB45DC* L_149 = V_3;
			NullCheck((RuntimeArray *)(RuntimeArray *)L_149);
			int32_t L_150 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_149, /*hidden argument*/NULL);
			if ((((int32_t)L_148) < ((int32_t)L_150)))
			{
				goto IL_0300;
			}
		}

IL_0364:
		{
			int32_t L_151 = V_9;
			__this->set_numberOfVolumes_73(L_151);
		}

IL_036c:
		{
			goto IL_0385;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0371;
		throw e;
	}

CATCH_0371:
	{ // begin catch(System.Exception)
		V_12 = ((Exception_t *)__exception_local);
		Exception_t * L_152 = V_12;
		NullCheck(L_152);
		String_t* L_153 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_152);
		UniFileBrowser_HandleError_m4C2B86B6F5C6791E105547CB548BE2E6842A80AE(__this, L_153, /*hidden argument*/NULL);
		goto IL_0385;
	} // end catch (depth: 1)

IL_0385:
	{
		bool L_154 = __this->get_showFiles_91();
		if (!L_154)
		{
			goto IL_0512;
		}
	}
	{
		FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* L_155 = V_2;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_155);
		int32_t L_156 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_155, /*hidden argument*/NULL);
		if ((((int32_t)L_156) <= ((int32_t)0)))
		{
			goto IL_0512;
		}
	}
	{
		V_5 = 0;
		goto IL_04a5;
	}

IL_03a4:
	{
		FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* L_157 = V_2;
		int32_t L_158 = V_5;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		NullCheck(L_160);
		String_t* L_161 = FileInfo_get_Name_mB64F7CA75D5DBB38DB9EDA9F31D94F1E32AEE61B_inline(L_160, /*hidden argument*/NULL);
		NullCheck(L_161);
		bool L_162 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_161, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		if (!L_162)
		{
			goto IL_03cc;
		}
	}
	{
		bool L_163 = __this->get_showHiddenMacFiles_19();
		if (L_163)
		{
			goto IL_03cc;
		}
	}
	{
		goto IL_049f;
	}

IL_03cc:
	{
		bool L_164 = __this->get_filterFiles_20();
		if (!L_164)
		{
			goto IL_043b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_165 = __this->get_filterFileExtensions_21();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_165);
		int32_t L_166 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_165, /*hidden argument*/NULL);
		if ((((int32_t)L_166) <= ((int32_t)0)))
		{
			goto IL_043b;
		}
	}
	{
		V_13 = (bool)1;
		V_14 = 0;
		goto IL_041d;
	}

IL_03f3:
	{
		FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* L_167 = V_2;
		int32_t L_168 = V_5;
		NullCheck(L_167);
		int32_t L_169 = L_168;
		FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		NullCheck(L_170);
		String_t* L_171 = FileInfo_get_Name_mB64F7CA75D5DBB38DB9EDA9F31D94F1E32AEE61B_inline(L_170, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_172 = __this->get_filterFileExtensions_21();
		int32_t L_173 = V_14;
		NullCheck(L_172);
		int32_t L_174 = L_173;
		String_t* L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		NullCheck(L_171);
		bool L_176 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_171, L_175, /*hidden argument*/NULL);
		if (!L_176)
		{
			goto IL_0417;
		}
	}
	{
		V_13 = (bool)0;
		goto IL_042f;
	}

IL_0417:
	{
		int32_t L_177 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_177, (int32_t)1));
	}

IL_041d:
	{
		int32_t L_178 = V_14;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_179 = __this->get_filterFileExtensions_21();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_179);
		int32_t L_180 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_179, /*hidden argument*/NULL);
		if ((((int32_t)L_178) < ((int32_t)L_180)))
		{
			goto IL_03f3;
		}
	}

IL_042f:
	{
		bool L_181 = V_13;
		if (!L_181)
		{
			goto IL_043b;
		}
	}
	{
		goto IL_049f;
	}

IL_043b:
	{
		bool L_182 = __this->get_doFileFunction_122();
		if (!L_182)
		{
			goto IL_0464;
		}
	}
	{
		__UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * L_183 = __this->get_fileFunction_124();
		FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* L_184 = V_2;
		int32_t L_185 = V_5;
		NullCheck(L_184);
		int32_t L_186 = L_185;
		FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * L_187 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		NullCheck(L_187);
		String_t* L_188 = FileInfo_get_Name_mB64F7CA75D5DBB38DB9EDA9F31D94F1E32AEE61B_inline(L_187, /*hidden argument*/NULL);
		NullCheck(L_183);
		bool L_189 = __UniFileBrowser_fileFunctionU24callable4U24201_28___Invoke_m44DFC81146C770F3A299DAA9AFB9D26AEAD0F0C6(L_183, L_188, /*hidden argument*/NULL);
		if (L_189)
		{
			goto IL_0464;
		}
	}
	{
		goto IL_049f;
	}

IL_0464:
	{
		bool L_190 = __this->get_showDate_14();
		if (!L_190)
		{
			goto IL_047d;
		}
	}
	{
		FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* L_191 = V_2;
		int32_t L_192 = V_5;
		NullCheck(L_191);
		int32_t L_193 = L_192;
		FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		NullCheck(L_194);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_195 = FileSystemInfo_get_LastWriteTime_mB554BEE74F863D47FD6856D5F644C8AED31C2049(L_194, /*hidden argument*/NULL);
		G_B75_0 = L_195;
		goto IL_0482;
	}

IL_047d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_196 = ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var))->get_MinValue_31();
		G_B75_0 = L_196;
	}

IL_0482:
	{
		V_15 = G_B75_0;
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_197 = __this->get_fileList_50();
		FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* L_198 = V_2;
		int32_t L_199 = V_5;
		NullCheck(L_198);
		int32_t L_200 = L_199;
		FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * L_201 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		NullCheck(L_201);
		String_t* L_202 = FileInfo_get_Name_mB64F7CA75D5DBB38DB9EDA9F31D94F1E32AEE61B_inline(L_201, /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_203 = V_15;
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_204 = (FileData_t4516F881D5D111630892E59176011C41763C9922 *)il2cpp_codegen_object_new(FileData_t4516F881D5D111630892E59176011C41763C9922_il2cpp_TypeInfo_var);
		FileData__ctor_m02C88AD7DDED87F8F8405D8E527BD23696FFFDC9(L_204, L_202, L_203, /*hidden argument*/NULL);
		NullCheck(L_197);
		List_1_Add_m8D2932C79F29162CAA14572A4A7F9A67E7F33F7B(L_197, L_204, /*hidden argument*/List_1_Add_m8D2932C79F29162CAA14572A4A7F9A67E7F33F7B_RuntimeMethod_var);
	}

IL_049f:
	{
		int32_t L_205 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_205, (int32_t)1));
	}

IL_04a5:
	{
		int32_t L_206 = V_5;
		FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* L_207 = V_2;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_207);
		int32_t L_208 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_207, /*hidden argument*/NULL);
		if ((((int32_t)L_206) < ((int32_t)L_208)))
		{
			goto IL_03a4;
		}
	}
	{
		int32_t L_209 = __this->get_sortType_16();
		if ((!(((uint32_t)L_209) == ((uint32_t)0))))
		{
			goto IL_04df;
		}
	}
	{
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_210 = __this->get_fileList_50();
		__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * L_211 = (__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 *)il2cpp_codegen_object_new(__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85_il2cpp_TypeInfo_var);
		__UniFileBrowserU24callable5U241045_39____ctor_m75DE04E3137F3FC89DE965DD02A4B7B94199D13A(L_211, __this, (intptr_t)((intptr_t)UniFileBrowser_U24GetCurrentFileInfoU24closureU2429_m50D02F7114C5D5851C73106783CB082612594CD7_RuntimeMethod_var), /*hidden argument*/NULL);
		Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808 * L_212 = U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_Adapt_mF4DFB384C87372E0D257D96043EA6C5DA9FAFCBC(L_211, /*hidden argument*/NULL);
		NullCheck(L_210);
		List_1_Sort_m859E46C87C2FE6DA66A1D93BB3DD45EF70D9BE1A(L_210, L_212, /*hidden argument*/List_1_Sort_m859E46C87C2FE6DA66A1D93BB3DD45EF70D9BE1A_RuntimeMethod_var);
		goto IL_0512;
	}

IL_04df:
	{
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_213 = __this->get_fileList_50();
		__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * L_214 = (__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 *)il2cpp_codegen_object_new(__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85_il2cpp_TypeInfo_var);
		__UniFileBrowserU24callable5U241045_39____ctor_m75DE04E3137F3FC89DE965DD02A4B7B94199D13A(L_214, __this, (intptr_t)((intptr_t)UniFileBrowser_U24GetCurrentFileInfoU24closureU2430_mAB761DBDB0A08556AAB56735B4C6F285682F9CAF_RuntimeMethod_var), /*hidden argument*/NULL);
		Comparison_1_tE68E50CDE11A8967F583AB8A8711EB61F8BB7808 * L_215 = U24adaptorU24__UniFileBrowserU24callable5U241045_39__U24ComparisonU241_Adapt_mF4DFB384C87372E0D257D96043EA6C5DA9FAFCBC(L_214, /*hidden argument*/NULL);
		NullCheck(L_213);
		List_1_Sort_m859E46C87C2FE6DA66A1D93BB3DD45EF70D9BE1A(L_213, L_215, /*hidden argument*/List_1_Sort_m859E46C87C2FE6DA66A1D93BB3DD45EF70D9BE1A_RuntimeMethod_var);
		int32_t L_216 = __this->get_sortType_16();
		if ((!(((uint32_t)L_216) == ((uint32_t)1))))
		{
			goto IL_0512;
		}
	}
	{
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_217 = __this->get_fileList_50();
		NullCheck(L_217);
		List_1_Reverse_m1CFBBFA0E8E7215EC287CF76CD2FC91956ED237F(L_217, /*hidden argument*/List_1_Reverse_m1CFBBFA0E8E7215EC287CF76CD2FC91956ED237F_RuntimeMethod_var);
	}

IL_0512:
	{
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_218 = __this->get_dirList_49();
		NullCheck(L_218);
		int32_t L_219 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_218, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_220 = __this->get_fileList_50();
		NullCheck(L_220);
		int32_t L_221 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_220, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* L_222 = (TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150*)(TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150*)SZArrayNew(TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_219, (int32_t)L_221)));
		__this->set_iconDisplayList_51(L_222);
		TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* L_223 = __this->get_iconDisplayList_51();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_223);
		int32_t L_224 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_223, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_225 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_224);
		__this->set_fileDisplayList_52(L_225);
		TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* L_226 = __this->get_iconDisplayList_51();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_226);
		int32_t L_227 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_226, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_228 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_227);
		__this->set_dateDisplayList_53(L_228);
		V_5 = 0;
		goto IL_0617;
	}

IL_0568:
	{
		bool L_229 = __this->get_showVolumes_12();
		if (!L_229)
		{
			goto IL_05bd;
		}
	}
	{
		int32_t L_230 = V_5;
		int32_t L_231 = __this->get_numberOfVolumes_73();
		if ((((int32_t)L_230) >= ((int32_t)L_231)))
		{
			goto IL_05bd;
		}
	}
	{
		TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* L_232 = __this->get_iconDisplayList_51();
		int32_t L_233 = V_5;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_234 = __this->get_driveIcon_41();
		NullCheck(L_232);
		ArrayElementTypeCheck (L_232, L_234);
		(L_232)->SetAt(static_cast<il2cpp_array_size_t>(L_233), (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_234);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_235 = __this->get_fileDisplayList_52();
		int32_t L_236 = V_5;
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_237 = __this->get_dirList_49();
		int32_t L_238 = V_5;
		NullCheck(L_237);
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_239 = List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_inline(L_237, L_238, /*hidden argument*/List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_RuntimeMethod_var);
		NullCheck(L_239);
		String_t* L_240 = L_239->get_name_0();
		NullCheck(L_235);
		ArrayElementTypeCheck (L_235, L_240);
		(L_235)->SetAt(static_cast<il2cpp_array_size_t>(L_236), (String_t*)L_240);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_241 = __this->get_dateDisplayList_53();
		int32_t L_242 = V_5;
		String_t* L_243 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_241);
		ArrayElementTypeCheck (L_241, L_243);
		(L_241)->SetAt(static_cast<il2cpp_array_size_t>(L_242), (String_t*)L_243);
		goto IL_0611;
	}

IL_05bd:
	{
		TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* L_244 = __this->get_iconDisplayList_51();
		int32_t L_245 = V_5;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_246 = __this->get_folderIcon_42();
		NullCheck(L_244);
		ArrayElementTypeCheck (L_244, L_246);
		(L_244)->SetAt(static_cast<il2cpp_array_size_t>(L_245), (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_246);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_247 = __this->get_fileDisplayList_52();
		int32_t L_248 = V_5;
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_249 = __this->get_dirList_49();
		int32_t L_250 = V_5;
		NullCheck(L_249);
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_251 = List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_inline(L_249, L_250, /*hidden argument*/List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_RuntimeMethod_var);
		NullCheck(L_251);
		String_t* L_252 = L_251->get_name_0();
		NullCheck(L_247);
		ArrayElementTypeCheck (L_247, L_252);
		(L_247)->SetAt(static_cast<il2cpp_array_size_t>(L_248), (String_t*)L_252);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_253 = __this->get_dateDisplayList_53();
		int32_t L_254 = V_5;
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_255 = __this->get_dirList_49();
		int32_t L_256 = V_5;
		NullCheck(L_255);
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_257 = List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_inline(L_255, L_256, /*hidden argument*/List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_RuntimeMethod_var);
		NullCheck(L_257);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_258 = L_257->get_date_1();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_259 = L_258;
		RuntimeObject * L_260 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_259);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_261 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_260, /*hidden argument*/NULL);
		NullCheck(L_253);
		ArrayElementTypeCheck (L_253, L_261);
		(L_253)->SetAt(static_cast<il2cpp_array_size_t>(L_254), (String_t*)L_261);
	}

IL_0611:
	{
		int32_t L_262 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_262, (int32_t)1));
	}

IL_0617:
	{
		int32_t L_263 = V_5;
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_264 = __this->get_dirList_49();
		NullCheck(L_264);
		int32_t L_265 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_264, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		if ((((int32_t)L_263) < ((int32_t)L_265)))
		{
			goto IL_0568;
		}
	}
	{
		V_5 = 0;
		goto IL_06af;
	}

IL_0631:
	{
		TextureU5BU5D_t9DBF348F22539052ACB9387E8BB14A3AF2701150* L_266 = __this->get_iconDisplayList_51();
		int32_t L_267 = V_5;
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_268 = __this->get_dirList_49();
		NullCheck(L_268);
		int32_t L_269 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_268, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_270 = __this->get_fileIcon_43();
		NullCheck(L_266);
		ArrayElementTypeCheck (L_266, L_270);
		(L_266)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_267, (int32_t)L_269))), (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)L_270);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_271 = __this->get_fileDisplayList_52();
		int32_t L_272 = V_5;
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_273 = __this->get_dirList_49();
		NullCheck(L_273);
		int32_t L_274 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_273, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_275 = __this->get_fileList_50();
		int32_t L_276 = V_5;
		NullCheck(L_275);
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_277 = List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_inline(L_275, L_276, /*hidden argument*/List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_RuntimeMethod_var);
		NullCheck(L_277);
		String_t* L_278 = L_277->get_name_0();
		NullCheck(L_271);
		ArrayElementTypeCheck (L_271, L_278);
		(L_271)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_272, (int32_t)L_274))), (String_t*)L_278);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_279 = __this->get_dateDisplayList_53();
		int32_t L_280 = V_5;
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_281 = __this->get_dirList_49();
		NullCheck(L_281);
		int32_t L_282 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_281, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_283 = __this->get_fileList_50();
		int32_t L_284 = V_5;
		NullCheck(L_283);
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_285 = List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_inline(L_283, L_284, /*hidden argument*/List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_RuntimeMethod_var);
		NullCheck(L_285);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_286 = L_285->get_date_1();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_287 = L_286;
		RuntimeObject * L_288 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_287);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_289 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_288, /*hidden argument*/NULL);
		NullCheck(L_279);
		ArrayElementTypeCheck (L_279, L_289);
		(L_279)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_280, (int32_t)L_282))), (String_t*)L_289);
		int32_t L_290 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_290, (int32_t)1));
	}

IL_06af:
	{
		int32_t L_291 = V_5;
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_292 = __this->get_fileList_50();
		NullCheck(L_292);
		int32_t L_293 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_292, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		if ((((int32_t)L_291) < ((int32_t)L_293)))
		{
			goto IL_0631;
		}
	}
	{
		String_t* L_294 = __this->get_filePath_61();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_295 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_296 = L_295;
		Il2CppChar L_297 = __this->get_pathChar_68();
		NullCheck(L_296);
		(L_296)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_297);
		NullCheck(L_294);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_298 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_294, L_296, /*hidden argument*/NULL);
		V_16 = L_298;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_299 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_299, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_17 = L_299;
		V_5 = 0;
		goto IL_0729;
	}

IL_06ec:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_300 = V_16;
		int32_t L_301 = V_5;
		NullCheck(L_300);
		int32_t L_302 = L_301;
		String_t* L_303 = (L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		String_t* L_304 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		bool L_305 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_303, L_304, /*hidden argument*/NULL);
		if (!L_305)
		{
			goto IL_0717;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_306 = V_17;
		Il2CppChar* L_307 = __this->get_address_of_pathChar_68();
		String_t* L_308 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)L_307, /*hidden argument*/NULL);
		NullCheck(L_306);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_306, L_308, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		goto IL_0723;
	}

IL_0717:
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_309 = V_17;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_310 = V_16;
		int32_t L_311 = V_5;
		NullCheck(L_310);
		int32_t L_312 = L_311;
		String_t* L_313 = (L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		NullCheck(L_309);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_309, L_313, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_0723:
	{
		int32_t L_314 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_314, (int32_t)1));
	}

IL_0729:
	{
		int32_t L_315 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_316 = V_16;
		int32_t L_317 = Extensions_get_length_m9FCAD4E2868B4444E8B1B40D2CD2D7612953B66F((RuntimeArray *)(RuntimeArray *)L_316, /*hidden argument*/NULL);
		if ((((int32_t)L_315) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_317, (int32_t)1)))))
		{
			goto IL_06ec;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_318 = V_17;
		NullCheck(L_318);
		List_1_Reverse_m1E5577BF004DE03902798CEF8774918EA824DB3A(L_318, /*hidden argument*/List_1_Reverse_m1E5577BF004DE03902798CEF8774918EA824DB3A_RuntimeMethod_var);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_319 = V_17;
		NullCheck(L_319);
		int32_t L_320 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_319, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* L_321 = (GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C*)(GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C*)SZArrayNew(GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C_il2cpp_TypeInfo_var, (uint32_t)L_320);
		__this->set_pathList_65(L_321);
		V_5 = 0;
		goto IL_077d;
	}

IL_075a:
	{
		GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* L_322 = __this->get_pathList_65();
		int32_t L_323 = V_5;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_324 = V_17;
		int32_t L_325 = V_5;
		NullCheck(L_324);
		String_t* L_326 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_324, L_325, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_327 = __this->get_folderIcon_42();
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_328 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m35D28B9D2CCDB8705680A9C2D52DF6AD21B558E5(L_328, L_326, L_327, /*hidden argument*/NULL);
		NullCheck(L_322);
		ArrayElementTypeCheck (L_322, L_328);
		(L_322)->SetAt(static_cast<il2cpp_array_size_t>(L_323), (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)L_328);
		int32_t L_329 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_329, (int32_t)1));
	}

IL_077d:
	{
		int32_t L_330 = V_5;
		GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* L_331 = __this->get_pathList_65();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_331);
		int32_t L_332 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10((RuntimeArray *)(RuntimeArray *)L_331, /*hidden argument*/NULL);
		if ((((int32_t)L_330) < ((int32_t)L_332)))
		{
			goto IL_075a;
		}
	}
	{
		int32_t L_333 = (-1);
		V_18 = L_333;
		__this->set_oldSelectedFileNumber_47(L_333);
		int32_t L_334 = V_18;
		__this->set_selectedFileNumber_46(L_334);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_335 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_scrollPos_45(L_335);
		bool L_336 = __this->get__allowMultiSelect_44();
		if (!L_336)
		{
			goto IL_07e5;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_337 = __this->get_multiFileList_54();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		bool L_338 = RuntimeServices_EqualityOperator_m9C27795DC1E3F147C733F19197CBDD0A826023EC(L_337, NULL, /*hidden argument*/NULL);
		if (!L_338)
		{
			goto IL_07d3;
		}
	}
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_339 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_339, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_multiFileList_54(L_339);
	}

IL_07d3:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_340 = __this->get_multiFileList_54();
		NullCheck(L_340);
		List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_340, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		__this->set_anchorFileNumber_48(0);
	}

IL_07e5:
	{
		UniFileBrowser_UpdateRects_mE5FF9EC4D5D33BD3421E255A7203AC9443EE3274(__this, /*hidden argument*/NULL);
	}

IL_07eb:
	{
		return;
	}
}
// System.Void UniFileBrowser::HandleError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_HandleError_m4C2B86B6F5C6791E105547CB548BE2E6842A80AE (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, String_t* ___errorMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_HandleError_m4C2B86B6F5C6791E105547CB548BE2E6842A80AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_messageWindowSize_33();
		float L_2 = L_1->get_x_0();
		int32_t L_3 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = __this->get_address_of_messageWindowSize_33();
		float L_5 = L_4->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of_messageWindowSize_33();
		float L_7 = L_6->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = __this->get_address_of_messageWindowSize_33();
		float L_9 = L_8->get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_10), ((float)il2cpp_codegen_subtract((float)(((float)((float)((int32_t)((int32_t)L_0/(int32_t)2))))), (float)((float)((float)L_2/(float)(((float)((float)2))))))), ((float)il2cpp_codegen_subtract((float)(((float)((float)((int32_t)((int32_t)L_3/(int32_t)2))))), (float)((float)((float)L_5/(float)(((float)((float)2))))))), L_7, L_9, /*hidden argument*/NULL);
		__this->set_messageWindowRect_138(L_10);
		String_t* L_11 = ___errorMessage0;
		UniFileBrowser_ShowError_mBC71A624A1607B92041389681C51209659144A7D(__this, L_11, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(11 /* System.Void UniFileBrowser::SetDefaultPath() */, __this);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_fileDisplayList_52(L_12);
		GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C* L_13 = (GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C*)(GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C*)SZArrayNew(GUIContentU5BU5D_t4830CE7B2E15B52385D7BD1EBCACD92346DBD53C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_pathList_65(L_13);
		return;
	}
}
// System.Void UniFileBrowser::SetPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_SetPath_m800505D21B6127112DAB2177A4C063A79A64A7C4 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, String_t* ___thisPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_SetPath_m800505D21B6127112DAB2177A4C063A79A64A7C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___thisPath0;
		__this->set_filePath_61(L_0);
		String_t* L_1 = __this->get_filePath_61();
		Il2CppChar* L_2 = __this->get_address_of_pathChar_68();
		String_t* L_3 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_1, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		String_t* L_5 = __this->get_filePath_61();
		Il2CppChar L_6 = __this->get_pathChar_68();
		Il2CppChar L_7 = L_6;
		RuntimeObject * L_8 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_9 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_5, L_8, /*hidden argument*/NULL);
		__this->set_filePath_61(L_9);
	}

IL_003e:
	{
		bool L_10 = __this->get_windowsSystem_69();
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = __this->get_filePath_61();
		NullCheck(L_11);
		String_t* L_12 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_11, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, /*hidden argument*/NULL);
		__this->set_filePath_61(L_12);
	}

IL_0064:
	{
		return;
	}
}
// System.Void UniFileBrowser::OpenFileWindow(CompilerGenerated.__UniFileBrowser_delegateU24callable0U24169_24__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_OpenFileWindow_mBD0E8D91FECCAF6BD8EF400AE0158E8B7E3D345E (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, __UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * ___openFileFunction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_OpenFileWindow_mBD0E8D91FECCAF6BD8EF400AE0158E8B7E3D345E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_fileWindowOpen_74();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0045;
	}

IL_0010:
	{
		bool L_1 = __this->get__allowMultiSelect_44();
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral0C971F4B026ABE72C51B2AFA63D33D1D53167DD0, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_002a:
	{
		__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * L_2 = ___openFileFunction0;
		__this->set_delegate_92(L_2);
		__this->set_showFiles_91((bool)1);
		__this->set_fileType_79(0);
		UniFileBrowser_ShowFileWindow_mF7E1BA9CE65D8809E2E5A707D2AA71ABECF76A1D(__this, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void UniFileBrowser::OpenFileWindow(CompilerGenerated.__UniFileBrowser_multiDelegateU24callable1U24170_29__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_OpenFileWindow_mA5562126F9D563AB8C58691E485CE2A628769D63 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, __UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * ___openFileFunction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_OpenFileWindow_mA5562126F9D563AB8C58691E485CE2A628769D63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_fileWindowOpen_74();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0045;
	}

IL_0010:
	{
		bool L_1 = __this->get__allowMultiSelect_44();
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral795A897BB764A15A2C7411E1A68DC2EC311C6459, /*hidden argument*/NULL);
		goto IL_0045;
	}

IL_002a:
	{
		__UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * L_2 = ___openFileFunction0;
		__this->set_multiDelegate_93(L_2);
		__this->set_showFiles_91((bool)1);
		__this->set_fileType_79(0);
		UniFileBrowser_ShowFileWindow_mF7E1BA9CE65D8809E2E5A707D2AA71ABECF76A1D(__this, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void UniFileBrowser::OpenFolderWindow(System.Boolean,CompilerGenerated.__UniFileBrowser_delegateU24callable0U24169_24__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_OpenFolderWindow_m2A0E8E7DEF0DE168231A9A8AB9948DD6F2B00285 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, bool ___showFiles0, __UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * ___openFolderFunction1, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_fileWindowOpen_74();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0044;
	}

IL_0010:
	{
		__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * L_1 = ___openFolderFunction1;
		__this->set_delegate_92(L_1);
		bool L_2 = ___showFiles0;
		__this->set_showFiles_91(L_2);
		__this->set_fileType_79(2);
		__this->set_limitToInitialFolder_11((bool)0);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_3 = __this->get_address_of_popupRect_35();
		int32_t L_4 = __this->get_storedPopupHeight_118();
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_3, (((float)((float)L_4))), /*hidden argument*/NULL);
		UniFileBrowser_ShowFileWindow_mF7E1BA9CE65D8809E2E5A707D2AA71ABECF76A1D(__this, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Void UniFileBrowser::SaveFileWindow(CompilerGenerated.__UniFileBrowser_delegateU24callable0U24169_24__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_SaveFileWindow_m9ACBE40B18EDE04BB901A436E074F3241DA910EE (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, __UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * ___saveFileFunction0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_fileWindowOpen_74();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0032;
	}

IL_0010:
	{
		__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * L_1 = ___saveFileFunction0;
		__this->set_delegate_92(L_1);
		__this->set_showFiles_91((bool)1);
		__this->set_fileType_79(1);
		UniFileBrowser_ShowFileWindow_mF7E1BA9CE65D8809E2E5A707D2AA71ABECF76A1D(__this, /*hidden argument*/NULL);
		__this->set_windowOpenedCounter_102(2);
	}

IL_0032:
	{
		return;
	}
}
// System.Void UniFileBrowser::ShowFileWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_ShowFileWindow_mF7E1BA9CE65D8809E2E5A707D2AA71ABECF76A1D (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_ShowFileWindow_mF7E1BA9CE65D8809E2E5A707D2AA71ABECF76A1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * V_0 = NULL;
	int32_t G_B2_0 = 0;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B2_1 = NULL;
	bool G_B1_0 = false;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B1_1 = NULL;
	float G_B4_0 = 0.0f;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B4_1 = NULL;
	float G_B3_0 = 0.0f;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B3_1 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * G_B5_2 = NULL;
	{
		UniFileBrowser_GetCurrentFileInfo_m998D5221BA5821F7809F2A1D9B68020C6F87C9B7(__this, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_fileWindowTitles_77();
		int32_t L_1 = __this->get_fileType_79();
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->set_windowTitle_76(L_3);
		__this->set_fileWindowOpen_74((bool)1);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_4 = __this->get_fileWindowRect_75();
		__this->set_lastRect_98(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)1, /*hidden argument*/NULL);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_fileName_62(L_5);
		bool L_6 = __this->get__allowMultiSelect_44();
		bool L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = __this;
		if (!L_7)
		{
			G_B2_0 = ((int32_t)(L_7));
			G_B2_1 = __this;
			goto IL_0055;
		}
	}
	{
		int32_t L_8 = __this->get_fileType_79();
		G_B2_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		G_B2_1 = G_B1_1;
	}

IL_0055:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_multi_116((bool)G_B2_0);
		GUISkin_tE353D65D4618423B574BAD31F5C5AC1B967E32C6 * L_9 = __this->get_guiSkin_37();
		NullCheck(L_9);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_10 = GUISkin_GetStyle_m9E4D3C8C29B12DAEC9D521277BE3CA490A7C2ADC(L_9, _stringLiteral05CF9CF5853B675491570E9D20951E373F208902, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = __this->get_fileWindowInset_29();
		bool L_12 = __this->get_limitToInitialFolder_11();
		G_B3_0 = (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)90))))));
		G_B3_1 = __this;
		if (!L_12)
		{
			G_B4_0 = (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)90))))));
			G_B4_1 = __this;
			goto IL_0094;
		}
	}
	{
		int32_t L_13 = __this->get_fileWindowInset_29();
		int32_t L_14 = __this->get_windowOffset_117();
		G_B5_0 = (((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)))));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_00af;
	}

IL_0094:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_15 = __this->get_address_of_popupRect_35();
		float L_16 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_15, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_17 = __this->get_address_of_popupRect_35();
		float L_18 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_17, /*hidden argument*/NULL);
		G_B5_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_16, (float)L_18)), (float)(((float)((float)((int32_t)15))))));
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_00af:
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_19), G_B5_1, G_B5_0, (((float)((float)0))), (((float)((float)0))), /*hidden argument*/NULL);
		NullCheck(G_B5_2);
		G_B5_2->set_textfieldRect_104(L_19);
		int32_t L_20 = __this->get_fileType_79();
		if ((((int32_t)L_20) == ((int32_t)2)))
		{
			goto IL_00f6;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_21 = __this->get_address_of_textfieldRect_104();
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_22 = V_0;
		GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E * L_23 = (GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E *)il2cpp_codegen_object_new(GUIContent_t39256993BF4A33F76E073488D6A2F13D678DF60E_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3FABF20C213051E685B41CA898A20885E02111F0(L_23, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		NullCheck(L_22);
		float L_24 = GUIStyle_CalcHeight_m120220D334AEC6B33F4767EA54FE78CEC09FBCC9(L_22, L_23, (1.0f), /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_25 = V_0;
		NullCheck(L_25);
		RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * L_26 = GUIStyle_get_padding_mB4566CD9B3C7911E6BF22AE1957F20ACC6E6CF17(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_27 = RectOffset_get_top_m42000C7682185F03F23E7E0C3E8EC026FDBAB9D1(L_26, /*hidden argument*/NULL);
		Rect_set_height_m4A00B16C122F44FEF4BA074386F3DC11FF4B4D23((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_21, ((float)il2cpp_codegen_add((float)L_24, (float)(((float)((float)L_27))))), /*hidden argument*/NULL);
	}

IL_00f6:
	{
		int32_t L_28 = __this->get_fileWindowInset_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_29 = __this->get_address_of_buttonSize_36();
		float L_30 = L_29->get_y_1();
		__this->set_bottomAreaSpace_110((((int32_t)((int32_t)((float)il2cpp_codegen_add((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)((int32_t)15)))))), (float)L_30))))));
		int32_t L_31 = __this->get_fileWindowInset_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_32 = __this->get_address_of_buttonSize_36();
		float L_33 = L_32->get_x_0();
		__this->set_buttonPositionX_114((((int32_t)((int32_t)((float)il2cpp_codegen_add((float)(((float)((float)L_31))), (float)L_33))))));
		int32_t L_34 = __this->get_fileWindowInset_29();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_35 = __this->get_address_of_buttonSize_36();
		float L_36 = L_35->get_y_1();
		__this->set_buttonPositionY_115((((int32_t)((int32_t)((float)il2cpp_codegen_add((float)(((float)((float)L_34))), (float)L_36))))));
		UniFileBrowser_UpdateRects_mE5FF9EC4D5D33BD3421E255A7203AC9443EE3274(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniFileBrowser::SendWindowCloseMessage(CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_SendWindowCloseMessage_m581818AF7552EFFF40CF4E62B162884828EBF328 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * ___closeWindowFunction0, const RuntimeMethod* method)
{
	{
		__this->set_sendCloseMessage_94((bool)1);
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * L_0 = ___closeWindowFunction0;
		__this->set_closeWindowFunction_95(L_0);
		return;
	}
}
// System.Void UniFileBrowser::DontSendWindowCloseMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_DontSendWindowCloseMessage_m7AFED9962F2DB5445A4B6843967A9ECA055B6F70 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	{
		__this->set_sendCloseMessage_94((bool)0);
		return;
	}
}
// System.Void UniFileBrowser::SendWindowChangeMessage(CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_SendWindowChangeMessage_m3AB0EB612C32B0FD4DD4D94ACD933F87264A964B (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * ___changeWindowFunction0, const RuntimeMethod* method)
{
	{
		__this->set_sendChangeMessage_96((bool)1);
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * L_0 = ___changeWindowFunction0;
		__this->set_changeWindowFunction_97(L_0);
		return;
	}
}
// System.Void UniFileBrowser::DontSendWindowChangeMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_DontSendWindowChangeMessage_m6DE6F34BF739CE144D5AD3F9A4419B147764F04B (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	{
		__this->set_sendChangeMessage_96((bool)0);
		return;
	}
}
// System.Void UniFileBrowser::SetCustomFunction(CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_SetCustomFunction_m1917110C3957F0D714C18495AD68104EAAE8D490 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * ___func0, const RuntimeMethod* method)
{
	{
		__this->set_runCustomFunction_119((bool)1);
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * L_0 = ___func0;
		__this->set_customFunction_120(L_0);
		return;
	}
}
// System.Void UniFileBrowser::RemoveCustomFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_RemoveCustomFunction_m5A68C292B8EDCFE9B903C394B1C74272E74DBC54 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	{
		__this->set_runCustomFunction_119((bool)0);
		return;
	}
}
// System.Void UniFileBrowser::UseFolderFilterFunction(CompilerGenerated.__UniFileBrowser_folderFunctionU24callable3U24200_30__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_UseFolderFilterFunction_m5C2C0DD4A84A5331D23A9C45A25EF68603AD63CA (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, __UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 * ___folderFunction0, const RuntimeMethod* method)
{
	{
		__this->set_doFolderFunction_121((bool)1);
		__UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 * L_0 = ___folderFunction0;
		__this->set_folderFunction_123(L_0);
		return;
	}
}
// System.Void UniFileBrowser::DontUseFolderFilterFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_DontUseFolderFilterFunction_m7CE4B91D0224CEDAD2388AA6746179A5F73B37EC (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	{
		__this->set_doFolderFunction_121((bool)0);
		return;
	}
}
// System.Void UniFileBrowser::UseFileFilterFunction(CompilerGenerated.__UniFileBrowser_fileFunctionU24callable4U24201_28__)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_UseFileFilterFunction_m7486F034C5AE4D92D9086E167CBB4B8EAEB49F08 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, __UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * ___fileFunction0, const RuntimeMethod* method)
{
	{
		__this->set_doFileFunction_122((bool)1);
		__UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * L_0 = ___fileFunction0;
		__this->set_fileFunction_124(L_0);
		return;
	}
}
// System.Void UniFileBrowser::DontUseFileFilterFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_DontUseFileFilterFunction_mCBDD677B36A879A8377A2DD945A8337A57349419 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	{
		__this->set_doFileFunction_122((bool)0);
		return;
	}
}
// System.Void UniFileBrowser::CloseFileWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_CloseFileWindow_m6A24F6D488928CAC722D7F740C98759A8099FD72 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_CloseFileWindow_m6A24F6D488928CAC722D7F740C98759A8099FD72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_showMessageWindow_136();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_004f;
	}

IL_0010:
	{
		__this->set_fileWindowOpen_74((bool)0);
		int32_t L_1 = (-1);
		V_0 = L_1;
		__this->set_oldSelectedFileNumber_47(L_1);
		int32_t L_2 = V_0;
		__this->set_selectedFileNumber_46(L_2);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_fileName_62(L_3);
		bool L_4 = __this->get_sendCloseMessage_94();
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * L_5 = __this->get_closeWindowFunction_95();
		NullCheck(L_5);
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___Invoke_m728B5EE49D98F28DF86D6B5E0247267EA26ECD20(L_5, /*hidden argument*/NULL);
	}

IL_0048:
	{
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_004f:
	{
		return;
	}
}
// System.Void UniFileBrowser::SetWindowTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_SetWindowTitle_mBA0676DCBD02B2A06C640925FE821F93E44AAAFC (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, String_t* ___title0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___title0;
		__this->set_windowTitle_76(L_0);
		return;
	}
}
// System.Void UniFileBrowser::SetFileWindowPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_SetFileWindowPosition_m7734DA5D4FEF31DD63899B5ED6479E32EF1AB9C0 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___windowPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_SetFileWindowPosition_m7734DA5D4FEF31DD63899B5ED6479E32EF1AB9C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (&___windowPosition0)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((((float)((float)0))), L_0, /*hidden argument*/NULL);
		(&___windowPosition0)->set_x_0(L_1);
		float L_2 = (&___windowPosition0)->get_y_1();
		float L_3 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((((float)((float)0))), L_2, /*hidden argument*/NULL);
		(&___windowPosition0)->set_y_1(L_3);
		float L_4 = (&___windowPosition0)->get_x_0();
		float L_5 = (&___windowPosition0)->get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_6 = __this->get_address_of_fileWindowRect_75();
		float L_7 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_6, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_8 = __this->get_address_of_fileWindowRect_75();
		float L_9 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_8, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_10), L_4, L_5, L_7, L_9, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_11 = UniFileBrowser_GetClampedWindowRect_mD90F62C131EC68DCC491B8DDEAA3B742BA819B65(__this, L_10, /*hidden argument*/NULL);
		__this->set_fileWindowRect_75(L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = __this->get_fileDisplayList_52();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		bool L_13 = RuntimeServices_EqualityOperator_m9C27795DC1E3F147C733F19197CBDD0A826023EC((RuntimeObject *)(RuntimeObject *)L_12, NULL, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_008e;
		}
	}
	{
		UniFileBrowser_UpdateRects_mE5FF9EC4D5D33BD3421E255A7203AC9443EE3274(__this, /*hidden argument*/NULL);
	}

IL_008e:
	{
		return;
	}
}
// System.Void UniFileBrowser::SetFileWindowSize(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_SetFileWindowSize_m9DC19258898CD988DE338255DE2BB57780F2F435 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___windowSize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_SetFileWindowSize_m9DC19258898CD988DE338255DE2BB57780F2F435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (&___windowSize0)->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((((float)((float)0))), L_0, /*hidden argument*/NULL);
		(&___windowSize0)->set_x_0(L_1);
		float L_2 = (&___windowSize0)->get_y_1();
		float L_3 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((((float)((float)0))), L_2, /*hidden argument*/NULL);
		(&___windowSize0)->set_y_1(L_3);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_4 = __this->get_address_of_fileWindowRect_75();
		float L_5 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_4, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_6 = __this->get_address_of_fileWindowRect_75();
		float L_7 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_6, /*hidden argument*/NULL);
		float L_8 = (&___windowSize0)->get_x_0();
		float L_9 = (&___windowSize0)->get_y_1();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_10), L_5, L_7, L_8, L_9, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_11 = UniFileBrowser_GetClampedWindowRect_mD90F62C131EC68DCC491B8DDEAA3B742BA819B65(__this, L_10, /*hidden argument*/NULL);
		__this->set_fileWindowRect_75(L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = __this->get_fileDisplayList_52();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		bool L_13 = RuntimeServices_EqualityOperator_m9C27795DC1E3F147C733F19197CBDD0A826023EC((RuntimeObject *)(RuntimeObject *)L_12, NULL, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_008e;
		}
	}
	{
		UniFileBrowser_UpdateRects_mE5FF9EC4D5D33BD3421E255A7203AC9443EE3274(__this, /*hidden argument*/NULL);
	}

IL_008e:
	{
		return;
	}
}
// UnityEngine.Rect UniFileBrowser::GetClampedWindowRect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  UniFileBrowser_GetClampedWindowRect_mD90F62C131EC68DCC491B8DDEAA3B742BA819B65 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___newWindowRect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_GetClampedWindowRect_mD90F62C131EC68DCC491B8DDEAA3B742BA819B65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		int32_t L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_1 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___newWindowRect0), /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_subtract((float)(((float)((float)L_0))), (float)L_1));
		float L_2 = V_0;
		int32_t L_3 = __this->get_minWindowWidth_31();
		if ((((float)L_2) >= ((float)(((float)((float)L_3))))))
		{
			goto IL_0048;
		}
	}
	{
		float L_4 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___newWindowRect0), /*hidden argument*/NULL);
		int32_t L_5 = __this->get_minWindowWidth_31();
		float L_6 = V_0;
		Rect_set_x_m1147A05B5046E1D4427E8EC99B9DFA4A32EEDEE6((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___newWindowRect0), ((float)il2cpp_codegen_subtract((float)L_4, (float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_5))), (float)L_6)))), /*hidden argument*/NULL);
		int32_t L_7 = __this->get_minWindowWidth_31();
		V_0 = (((float)((float)L_7)));
	}

IL_0048:
	{
		int32_t L_8 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_9 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___newWindowRect0), /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_subtract((float)(((float)((float)L_8))), (float)L_9));
		float L_10 = V_1;
		int32_t L_11 = __this->get_minWindowHeight_32();
		if ((((float)L_10) >= ((float)(((float)((float)L_11))))))
		{
			goto IL_0090;
		}
	}
	{
		float L_12 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___newWindowRect0), /*hidden argument*/NULL);
		int32_t L_13 = __this->get_minWindowHeight_32();
		float L_14 = V_1;
		Rect_set_y_m015507262F8AC5AFF1B4E986B66307F31FB3A10E((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___newWindowRect0), ((float)il2cpp_codegen_subtract((float)L_12, (float)((float)il2cpp_codegen_subtract((float)(((float)((float)L_13))), (float)L_14)))), /*hidden argument*/NULL);
		int32_t L_15 = __this->get_minWindowHeight_32();
		V_1 = (((float)((float)L_15)));
	}

IL_0090:
	{
		float L_16 = Rect_get_x_mA61220F6F26ECD6951B779FFA7CAD7ECE11D6987((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___newWindowRect0), /*hidden argument*/NULL);
		float L_17 = Rect_get_y_m4E1AAD20D167085FF4F9E9C86EF34689F5770A74((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___newWindowRect0), /*hidden argument*/NULL);
		float L_18 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___newWindowRect0), /*hidden argument*/NULL);
		int32_t L_19 = __this->get_minWindowWidth_31();
		float L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_21 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_18, (((float)((float)L_19))), L_20, /*hidden argument*/NULL);
		float L_22 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&___newWindowRect0), /*hidden argument*/NULL);
		int32_t L_23 = __this->get_minWindowHeight_32();
		float L_24 = V_1;
		float L_25 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_22, (((float)((float)L_23))), L_24, /*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_26), L_16, L_17, L_21, L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Collections.IEnumerator UniFileBrowser::DeleteFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UniFileBrowser_DeleteFile_mEF327437F4B6584519402B269858238168B07308 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_DeleteFile_mEF327437F4B6584519402B269858238168B07308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U24DeleteFileU2446_t771A02EE85189F947F984381B8F1205E04BBCA6C * L_0 = (U24DeleteFileU2446_t771A02EE85189F947F984381B8F1205E04BBCA6C *)il2cpp_codegen_object_new(U24DeleteFileU2446_t771A02EE85189F947F984381B8F1205E04BBCA6C_il2cpp_TypeInfo_var);
		U24DeleteFileU2446__ctor_mE7C74E0C71B78ABD18D9CAE15C35C1F930548B51(L_0, __this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = U24DeleteFileU2446_GetEnumerator_m8DF8D0DBC22DC20BDE9FFFA4CAD2558D1770469D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.String> UniFileBrowser::GetMultiFileNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * UniFileBrowser_GetMultiFileNames_mA72A9A777AA08BCFE66320BA4EFD0897597B91BE (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_GetMultiFileNames_mA72A9A777AA08BCFE66320BA4EFD0897597B91BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0066;
	}

IL_000d:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = __this->get_multiFileList_54();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_4 = __this->get_dirList_49();
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_4, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0062;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = V_0;
		String_t* L_7 = __this->get_filePath_61();
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_8 = __this->get_fileList_50();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_9 = __this->get_multiFileList_54();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_12 = __this->get_dirList_49();
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_12, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		NullCheck(L_8);
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_14 = List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_inline(L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_13)), /*hidden argument*/List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_RuntimeMethod_var);
		NullCheck(L_14);
		String_t* L_15 = L_14->get_name_0();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_16 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(L_7, L_15, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_6, L_16, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_0062:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0066:
	{
		int32_t L_18 = V_1;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_19 = __this->get_multiFileList_54();
		NullCheck(L_19);
		int32_t L_20 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_19, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_21 = V_0;
		return L_21;
	}
}
// System.Collections.IEnumerator UniFileBrowser::SelectFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UniFileBrowser_SelectFile_mA8A8C93DEEAD7F3F6F8D5C6F226BAEDF96707678 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniFileBrowser_SelectFile_mA8A8C93DEEAD7F3F6F8D5C6F226BAEDF96707678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U24SelectFileU2452_t59507280F0FFEE23152D862BA29D307EE37B3018 * L_0 = (U24SelectFileU2452_t59507280F0FFEE23152D862BA29D307EE37B3018 *)il2cpp_codegen_object_new(U24SelectFileU2452_t59507280F0FFEE23152D862BA29D307EE37B3018_il2cpp_TypeInfo_var);
		U24SelectFileU2452__ctor_mD2B2C0216B044259FACC6F28FC455B06C7504A72(L_0, __this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = U24SelectFileU2452_GetEnumerator_mDB677D664CC1E28898123F9CAD2E1160AF3E485A(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UniFileBrowser::Scale(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_Scale_mDC689D2412AEDDA7F6116A5F956BF6C40311154E (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, float ___referenceWidth0, float ___referenceHeight1, const RuntimeMethod* method)
{
	{
		float L_0 = ___referenceWidth0;
		__this->set_referenceWidth_128(L_0);
		float L_1 = ___referenceHeight1;
		__this->set_referenceHeight_129(L_1);
		__this->set_doScale_130((bool)1);
		return;
	}
}
// System.Void UniFileBrowser::DontScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniFileBrowser_DontScale_m21E9999039D14168BDE20CB2D5FA28DFF97C6E88 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, const RuntimeMethod* method)
{
	{
		__this->set_doScale_130((bool)0);
		return;
	}
}
// System.Int32 UniFileBrowser::U24GetCurrentFileInfoU24closureU2425(UniFileBrowser_FileData,UniFileBrowser_FileData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UniFileBrowser_U24GetCurrentFileInfoU24closureU2425_mE67B0AC569C48B93F9837B28913E28F943C769C0 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___a0, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___b1, const RuntimeMethod* method)
{
	{
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_0 = ___a0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_0();
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_2 = ___b1;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_0();
		NullCheck(L_1);
		int32_t L_4 = String_CompareTo_m01AF97548BE97133E2DC648B2E63BB16708354CF(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 UniFileBrowser::U24GetCurrentFileInfoU24closureU2426(UniFileBrowser_FileData,UniFileBrowser_FileData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UniFileBrowser_U24GetCurrentFileInfoU24closureU2426_m58E5B1B5D977AA6E3DB4E0EB23825AA2C5EAB21C (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___a0, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___b1, const RuntimeMethod* method)
{
	{
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_0 = ___a0;
		NullCheck(L_0);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * L_1 = L_0->get_address_of_date_1();
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_2 = ___b1;
		NullCheck(L_2);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = L_2->get_date_1();
		int32_t L_4 = DateTime_CompareTo_m2864B0ABAE4B8748D4092D1D16AE56EE0B248F93((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 UniFileBrowser::U24GetCurrentFileInfoU24closureU2429(UniFileBrowser_FileData,UniFileBrowser_FileData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UniFileBrowser_U24GetCurrentFileInfoU24closureU2429_m50D02F7114C5D5851C73106783CB082612594CD7 (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___a0, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___b1, const RuntimeMethod* method)
{
	{
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_0 = ___a0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_0();
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_2 = ___b1;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_0();
		NullCheck(L_1);
		int32_t L_4 = String_CompareTo_m01AF97548BE97133E2DC648B2E63BB16708354CF(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 UniFileBrowser::U24GetCurrentFileInfoU24closureU2430(UniFileBrowser_FileData,UniFileBrowser_FileData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UniFileBrowser_U24GetCurrentFileInfoU24closureU2430_mAB761DBDB0A08556AAB56735B4C6F285682F9CAF (UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * __this, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___a0, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___b1, const RuntimeMethod* method)
{
	{
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_0 = ___a0;
		NullCheck(L_0);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * L_1 = L_0->get_address_of_date_1();
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_2 = ___b1;
		NullCheck(L_2);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = L_2->get_date_1();
		int32_t L_4 = DateTime_CompareTo_m2864B0ABAE4B8748D4092D1D16AE56EE0B248F93((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void CompilerGenerated.__UniFileBrowserU24callable5U241045_39__::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowserU24callable5U241045_39____ctor_m75DE04E3137F3FC89DE965DD02A4B7B94199D13A (__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * __this, RuntimeObject * ___instance0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___instance0);
}
// System.Object CompilerGenerated.__UniFileBrowserU24callable5U241045_39__::Call(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * __UniFileBrowserU24callable5U241045_39___Call_m43C42226533DD746A5C86173D1F586DB42F82C18 (__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__UniFileBrowserU24callable5U241045_39___Call_m43C42226533DD746A5C86173D1F586DB42F82C18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B2_0 = NULL;
	__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * G_B2_1 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * G_B1_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	FileData_t4516F881D5D111630892E59176011C41763C9922 * G_B4_1 = NULL;
	__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * G_B4_2 = NULL;
	RuntimeObject * G_B3_0 = NULL;
	FileData_t4516F881D5D111630892E59176011C41763C9922 * G_B3_1 = NULL;
	__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * G_B3_2 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___args0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		RuntimeObject * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		RuntimeObject * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (((FileData_t4516F881D5D111630892E59176011C41763C9922 *)IsInstClass((RuntimeObject*)L_3, FileData_t4516F881D5D111630892E59176011C41763C9922_il2cpp_TypeInfo_var)))
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (FileData_t4516F881D5D111630892E59176011C41763C9922_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		RuntimeObject * L_6 = RuntimeServices_Coerce_m8FD484375DFD743EE446C0B81103985D51E687D1(G_B1_0, L_5, /*hidden argument*/NULL);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_001e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = ___args0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		RuntimeObject * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		RuntimeObject * L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = ((FileData_t4516F881D5D111630892E59176011C41763C9922 *)CastclassClass((RuntimeObject*)G_B2_0, FileData_t4516F881D5D111630892E59176011C41763C9922_il2cpp_TypeInfo_var));
		G_B3_2 = G_B2_1;
		if (((FileData_t4516F881D5D111630892E59176011C41763C9922 *)IsInstClass((RuntimeObject*)L_10, FileData_t4516F881D5D111630892E59176011C41763C9922_il2cpp_TypeInfo_var)))
		{
			G_B4_0 = L_10;
			G_B4_1 = ((FileData_t4516F881D5D111630892E59176011C41763C9922 *)CastclassClass((RuntimeObject*)G_B2_0, FileData_t4516F881D5D111630892E59176011C41763C9922_il2cpp_TypeInfo_var));
			G_B4_2 = G_B2_1;
			goto IL_0040;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (FileData_t4516F881D5D111630892E59176011C41763C9922_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		RuntimeObject * L_13 = RuntimeServices_Coerce_m8FD484375DFD743EE446C0B81103985D51E687D1(G_B3_0, L_12, /*hidden argument*/NULL);
		G_B4_0 = L_13;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0040:
	{
		NullCheck(G_B4_2);
		int32_t L_14 = __UniFileBrowserU24callable5U241045_39___Invoke_m67CA7B7900D40179F5A7C83D304B5D9E284CD016(G_B4_2, G_B4_1, ((FileData_t4516F881D5D111630892E59176011C41763C9922 *)CastclassClass((RuntimeObject*)G_B4_0, FileData_t4516F881D5D111630892E59176011C41763C9922_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		return L_16;
	}
}
// System.Int32 CompilerGenerated.__UniFileBrowserU24callable5U241045_39__::Invoke(UniFileBrowser_FileData,UniFileBrowser_FileData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __UniFileBrowserU24callable5U241045_39___Invoke_m67CA7B7900D40179F5A7C83D304B5D9E284CD016 (__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * __this, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___a0, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___b1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (FileData_t4516F881D5D111630892E59176011C41763C9922 *, FileData_t4516F881D5D111630892E59176011C41763C9922 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___a0, ___b1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, FileData_t4516F881D5D111630892E59176011C41763C9922 *, FileData_t4516F881D5D111630892E59176011C41763C9922 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___a0, ___b1, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< int32_t, FileData_t4516F881D5D111630892E59176011C41763C9922 * >::Invoke(targetMethod, ___a0, ___b1);
					else
						result = GenericVirtFuncInvoker1< int32_t, FileData_t4516F881D5D111630892E59176011C41763C9922 * >::Invoke(targetMethod, ___a0, ___b1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, FileData_t4516F881D5D111630892E59176011C41763C9922 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___a0, ___b1);
					else
						result = VirtFuncInvoker1< int32_t, FileData_t4516F881D5D111630892E59176011C41763C9922 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___a0, ___b1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___b1) - 1), targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (FileData_t4516F881D5D111630892E59176011C41763C9922 *, FileData_t4516F881D5D111630892E59176011C41763C9922 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___a0, ___b1, targetMethod);
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
					typedef int32_t (*FunctionPointerType) (FileData_t4516F881D5D111630892E59176011C41763C9922 *, FileData_t4516F881D5D111630892E59176011C41763C9922 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___a0, ___b1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< int32_t, FileData_t4516F881D5D111630892E59176011C41763C9922 *, FileData_t4516F881D5D111630892E59176011C41763C9922 * >::Invoke(targetMethod, targetThis, ___a0, ___b1);
					else
						result = GenericVirtFuncInvoker2< int32_t, FileData_t4516F881D5D111630892E59176011C41763C9922 *, FileData_t4516F881D5D111630892E59176011C41763C9922 * >::Invoke(targetMethod, targetThis, ___a0, ___b1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, FileData_t4516F881D5D111630892E59176011C41763C9922 *, FileData_t4516F881D5D111630892E59176011C41763C9922 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___a0, ___b1);
					else
						result = VirtFuncInvoker2< int32_t, FileData_t4516F881D5D111630892E59176011C41763C9922 *, FileData_t4516F881D5D111630892E59176011C41763C9922 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___a0, ___b1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, FileData_t4516F881D5D111630892E59176011C41763C9922 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___a0) - 1), ___b1, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, FileData_t4516F881D5D111630892E59176011C41763C9922 *, FileData_t4516F881D5D111630892E59176011C41763C9922 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___a0, ___b1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult CompilerGenerated.__UniFileBrowserU24callable5U241045_39__::BeginInvoke(UniFileBrowser_FileData,UniFileBrowser_FileData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* __UniFileBrowserU24callable5U241045_39___BeginInvoke_mB07ECB76111BFB2E231B73946908B3FD00AD25E4 (__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * __this, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___a0, FileData_t4516F881D5D111630892E59176011C41763C9922 * ___b1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___asyncState3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___a0;
	__d_args[1] = ___b1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___asyncState3);
}
// System.Int32 CompilerGenerated.__UniFileBrowserU24callable5U241045_39__::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t __UniFileBrowserU24callable5U241045_39___EndInvoke_m844BFB406DE01000081C3D5C6CAAADE2DA77429F (__UniFileBrowserU24callable5U241045_39___tCC253F4BD88247661B48BE19AC0059FBAD22DD85 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper___UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 (__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_closeWindowFunctionU24callable2U24172_35____ctor_m6EF082A03C4489F96E4DBB9BE42BE4E9418A2840 (__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * __this, RuntimeObject * ___instance0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___instance0);
}
// System.Object CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__::Call(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___Call_m5DF808BFB64B81B2AC4F48F145F9011661DEF76D (__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	{
		__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___Invoke_m728B5EE49D98F28DF86D6B5E0247267EA26ECD20(__this, /*hidden argument*/NULL);
		return NULL;
	}
}
// System.Void CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___Invoke_m728B5EE49D98F28DF86D6B5E0247267EA26ECD20 (__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___BeginInvoke_m46EDBADF3D0B7DAA313A340A9A7EC18A7CB6B548 (__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___asyncState1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___asyncState1);
}
// System.Void CompilerGenerated.__UniFileBrowser_closeWindowFunctionU24callable2U24172_35__::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_closeWindowFunctionU24callable2U24172_35___EndInvoke_m9CA1C77EA176F7A071A2F6D04274CD249323C388 (__UniFileBrowser_closeWindowFunctionU24callable2U24172_35___tCBD793879E9A8001B5232EFC879E118A8376E6B7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper___UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 (__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * __this, String_t* ___arg00, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___arg00' to native representation
	char* ____arg00_marshaled = NULL;
	____arg00_marshaled = il2cpp_codegen_marshal_string(___arg00);

	// Native function invocation
	il2cppPInvokeFunc(____arg00_marshaled);

	// Marshaling cleanup of parameter '___arg00' native representation
	il2cpp_codegen_marshal_free(____arg00_marshaled);
	____arg00_marshaled = NULL;

}
// System.Void CompilerGenerated.__UniFileBrowser_delegateU24callable0U24169_24__::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_delegateU24callable0U24169_24____ctor_m708030DEFC1A9DBAD6FAA566717AF1DC66CE09F6 (__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * __this, RuntimeObject * ___instance0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___instance0);
}
// System.Object CompilerGenerated.__UniFileBrowser_delegateU24callable0U24169_24__::Call(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * __UniFileBrowser_delegateU24callable0U24169_24___Call_mC309441AE983DD745D8426C06F1B16E4A6DE78FC (__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__UniFileBrowser_delegateU24callable0U24169_24___Call_mC309441AE983DD745D8426C06F1B16E4A6DE78FC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B2_0 = NULL;
	__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * G_B2_1 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * G_B1_1 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___args0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		RuntimeObject * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		RuntimeObject * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)))
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		RuntimeObject * L_6 = RuntimeServices_Coerce_m8FD484375DFD743EE446C0B81103985D51E687D1(G_B1_0, L_5, /*hidden argument*/NULL);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_001e:
	{
		NullCheck(G_B2_1);
		__UniFileBrowser_delegateU24callable0U24169_24___Invoke_m426486C356306933A79E4029F21547C278E09580(G_B2_1, ((String_t*)CastclassSealed((RuntimeObject*)G_B2_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return NULL;
	}
}
// System.Void CompilerGenerated.__UniFileBrowser_delegateU24callable0U24169_24__::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_delegateU24callable0U24169_24___Invoke_m426486C356306933A79E4029F21547C278E09580 (__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * __this, String_t* ___arg00, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult CompilerGenerated.__UniFileBrowser_delegateU24callable0U24169_24__::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* __UniFileBrowser_delegateU24callable0U24169_24___BeginInvoke_m40579BABED3ED61C263430AA531666C61067D2FE (__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * __this, String_t* ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___asyncState2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___asyncState2);
}
// System.Void CompilerGenerated.__UniFileBrowser_delegateU24callable0U24169_24__::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_delegateU24callable0U24169_24___EndInvoke_mD603D39162BC6A7C8D67F7522E64FCAEC912CD56 (__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper___UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 (__UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * __this, String_t* ___arg00, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___arg00' to native representation
	char* ____arg00_marshaled = NULL;
	____arg00_marshaled = il2cpp_codegen_marshal_string(___arg00);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____arg00_marshaled);

	// Marshaling cleanup of parameter '___arg00' native representation
	il2cpp_codegen_marshal_free(____arg00_marshaled);
	____arg00_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void CompilerGenerated.__UniFileBrowser_fileFunctionU24callable4U24201_28__::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_fileFunctionU24callable4U24201_28____ctor_m08AF8E1604D68764826723A3C924D8F286922748 (__UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * __this, RuntimeObject * ___instance0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___instance0);
}
// System.Object CompilerGenerated.__UniFileBrowser_fileFunctionU24callable4U24201_28__::Call(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * __UniFileBrowser_fileFunctionU24callable4U24201_28___Call_m278E3CBFA53CE736A108965AC860B2D47089C3F4 (__UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__UniFileBrowser_fileFunctionU24callable4U24201_28___Call_m278E3CBFA53CE736A108965AC860B2D47089C3F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B2_0 = NULL;
	__UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * G_B2_1 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	__UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * G_B1_1 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___args0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		RuntimeObject * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		RuntimeObject * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)))
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		RuntimeObject * L_6 = RuntimeServices_Coerce_m8FD484375DFD743EE446C0B81103985D51E687D1(G_B1_0, L_5, /*hidden argument*/NULL);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_001e:
	{
		NullCheck(G_B2_1);
		bool L_7 = __UniFileBrowser_fileFunctionU24callable4U24201_28___Invoke_m44DFC81146C770F3A299DAA9AFB9D26AEAD0F0C6(G_B2_1, ((String_t*)CastclassSealed((RuntimeObject*)G_B2_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		bool L_8 = L_7;
		RuntimeObject * L_9 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}
}
// System.Boolean CompilerGenerated.__UniFileBrowser_fileFunctionU24callable4U24201_28__::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __UniFileBrowser_fileFunctionU24callable4U24201_28___Invoke_m44DFC81146C770F3A299DAA9AFB9D26AEAD0F0C6 (__UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * __this, String_t* ___arg00, const RuntimeMethod* method)
{
	bool result = false;
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
				typedef bool (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___arg00);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, String_t* >::Invoke(targetMethod, targetThis, ___arg00);
					else
						result = GenericVirtFuncInvoker1< bool, String_t* >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						result = VirtFuncInvoker1< bool, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult CompilerGenerated.__UniFileBrowser_fileFunctionU24callable4U24201_28__::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* __UniFileBrowser_fileFunctionU24callable4U24201_28___BeginInvoke_m322777AD09FA898110B590730348461E0132DFAB (__UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * __this, String_t* ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___asyncState2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___asyncState2);
}
// System.Boolean CompilerGenerated.__UniFileBrowser_fileFunctionU24callable4U24201_28__::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __UniFileBrowser_fileFunctionU24callable4U24201_28___EndInvoke_m2CF5844CDC394B8CF2CA5EF0164D1C56624EE891 (__UniFileBrowser_fileFunctionU24callable4U24201_28___t49E25D543B5CEFBEE16A698A68394D4675E5E192 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CompilerGenerated.__UniFileBrowser_folderFunctionU24callable3U24200_30__::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_folderFunctionU24callable3U24200_30____ctor_mB9AAC09A73CDAF0D8F58FE28BE1D037E2BDD816F (__UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 * __this, RuntimeObject * ___instance0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___instance0);
}
// System.Object CompilerGenerated.__UniFileBrowser_folderFunctionU24callable3U24200_30__::Call(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * __UniFileBrowser_folderFunctionU24callable3U24200_30___Call_m36FF19F361A6731DF9B5BEF478FDB2DE8A7A69B0 (__UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__UniFileBrowser_folderFunctionU24callable3U24200_30___Call_m36FF19F361A6731DF9B5BEF478FDB2DE8A7A69B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B2_0 = NULL;
	__UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 * G_B2_1 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	__UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 * G_B1_1 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___args0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		RuntimeObject * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		RuntimeObject * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (((FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B*)IsInst((RuntimeObject*)L_3, FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B_il2cpp_TypeInfo_var)))
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		RuntimeObject * L_6 = RuntimeServices_Coerce_m8FD484375DFD743EE446C0B81103985D51E687D1(G_B1_0, L_5, /*hidden argument*/NULL);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_001e:
	{
		NullCheck(G_B2_1);
		bool L_7 = __UniFileBrowser_folderFunctionU24callable3U24200_30___Invoke_m412741DAD273088330273328AD9C4BC4EDE8DAA5(G_B2_1, ((FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B*)Castclass((RuntimeObject*)G_B2_0, FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		bool L_8 = L_7;
		RuntimeObject * L_9 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}
}
// System.Boolean CompilerGenerated.__UniFileBrowser_folderFunctionU24callable3U24200_30__::Invoke(System.IO.FileInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __UniFileBrowser_folderFunctionU24callable3U24200_30___Invoke_m412741DAD273088330273328AD9C4BC4EDE8DAA5 (__UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 * __this, FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* ___arg00, const RuntimeMethod* method)
{
	bool result = false;
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
				typedef bool (*FunctionPointerType) (FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___arg00);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* >::Invoke(targetMethod, targetThis, ___arg00);
					else
						result = GenericVirtFuncInvoker1< bool, FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						result = VirtFuncInvoker1< bool, FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult CompilerGenerated.__UniFileBrowser_folderFunctionU24callable3U24200_30__::BeginInvoke(System.IO.FileInfo[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* __UniFileBrowser_folderFunctionU24callable3U24200_30___BeginInvoke_m869D4F644A29B64044B4450A29B5CA9C3E104E31 (__UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 * __this, FileInfoU5BU5D_tB6A5BC6AD9BEC388BF3236B4E8FBB7760F96080B* ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___asyncState2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___asyncState2);
}
// System.Boolean CompilerGenerated.__UniFileBrowser_folderFunctionU24callable3U24200_30__::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool __UniFileBrowser_folderFunctionU24callable3U24200_30___EndInvoke_m29BA75C4F88F0011C464895E843DF32401FD0210 (__UniFileBrowser_folderFunctionU24callable3U24200_30___tC4653EB7C5FBE68B2849619002F95BFEEF266A06 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper___UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 (__UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___arg00, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char**);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___arg00' to native representation
	char** ____arg00_marshaled = NULL;
	if (___arg00 != NULL)
	{
		il2cpp_array_size_t ____arg00_Length = (___arg00)->max_length;
		____arg00_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____arg00_Length + 1);
		(____arg00_marshaled)[____arg00_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____arg00_Length); i++)
		{
			(____arg00_marshaled)[i] = il2cpp_codegen_marshal_string((___arg00)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____arg00_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____arg00_marshaled);

	// Marshaling cleanup of parameter '___arg00' native representation
	if (____arg00_marshaled != NULL)
	{
		const il2cpp_array_size_t ____arg00_marshaled_CleanupLoopCount = (___arg00 != NULL) ? (___arg00)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____arg00_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____arg00_marshaled)[i]);
			(____arg00_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____arg00_marshaled);
		____arg00_marshaled = NULL;
	}

}
// System.Void CompilerGenerated.__UniFileBrowser_multiDelegateU24callable1U24170_29__::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_multiDelegateU24callable1U24170_29____ctor_mF9BA6E5AA028C10707564195A2CE98B5895E64B5 (__UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * __this, RuntimeObject * ___instance0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___instance0);
}
// System.Object CompilerGenerated.__UniFileBrowser_multiDelegateU24callable1U24170_29__::Call(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * __UniFileBrowser_multiDelegateU24callable1U24170_29___Call_mF84A6D0578E0BAE10F2D0D36564A4FE38B77B08B (__UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (__UniFileBrowser_multiDelegateU24callable1U24170_29___Call_mF84A6D0578E0BAE10F2D0D36564A4FE38B77B08B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B2_0 = NULL;
	__UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * G_B2_1 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	__UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * G_B1_1 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___args0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		RuntimeObject * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		RuntimeObject * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)IsInst((RuntimeObject*)L_3, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)))
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		RuntimeObject * L_6 = RuntimeServices_Coerce_m8FD484375DFD743EE446C0B81103985D51E687D1(G_B1_0, L_5, /*hidden argument*/NULL);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_001e:
	{
		NullCheck(G_B2_1);
		__UniFileBrowser_multiDelegateU24callable1U24170_29___Invoke_mCF52D0D24C89E326FD61052AC8A555D945FAB3FB(G_B2_1, ((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)Castclass((RuntimeObject*)G_B2_0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return NULL;
	}
}
// System.Void CompilerGenerated.__UniFileBrowser_multiDelegateU24callable1U24170_29__::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_multiDelegateU24callable1U24170_29___Invoke_mCF52D0D24C89E326FD61052AC8A555D945FAB3FB (__UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___arg00, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult CompilerGenerated.__UniFileBrowser_multiDelegateU24callable1U24170_29__::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* __UniFileBrowser_multiDelegateU24callable1U24170_29___BeginInvoke_m1595C3A73C8F55C8EE5EF2845005CB860D089930 (__UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___arg00, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___asyncState2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___asyncState2);
}
// System.Void CompilerGenerated.__UniFileBrowser_multiDelegateU24callable1U24170_29__::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __UniFileBrowser_multiDelegateU24callable1U24170_29___EndInvoke_m7C76DB961066AD4684FA8F70F8751CA87FD67646 (__UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UniFileBrowser_U24DeleteFileU2446::.ctor(UniFileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24DeleteFileU2446__ctor_mE7C74E0C71B78ABD18D9CAE15C35C1F930548B51 (U24DeleteFileU2446_t771A02EE85189F947F984381B8F1205E04BBCA6C * __this, UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___self_0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24DeleteFileU2446__ctor_mE7C74E0C71B78ABD18D9CAE15C35C1F930548B51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericGenerator_1__ctor_mB3036526E77DD2D509F75DD6658EB28DE238DDB1(__this, /*hidden argument*/GenericGenerator_1__ctor_mB3036526E77DD2D509F75DD6658EB28DE238DDB1_RuntimeMethod_var);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_0 = ___self_0;
		__this->set_U24self_U2451_0(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> UniFileBrowser_U24DeleteFileU2446::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U24DeleteFileU2446_GetEnumerator_m8DF8D0DBC22DC20BDE9FFFA4CAD2558D1770469D (U24DeleteFileU2446_t771A02EE85189F947F984381B8F1205E04BBCA6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24DeleteFileU2446_GetEnumerator_m8DF8D0DBC22DC20BDE9FFFA4CAD2558D1770469D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_0 = __this->get_U24self_U2451_0();
		U24_tC71DB695A6A6AE1094EF6480C5E5CE674D46E27D * L_1 = (U24_tC71DB695A6A6AE1094EF6480C5E5CE674D46E27D *)il2cpp_codegen_object_new(U24_tC71DB695A6A6AE1094EF6480C5E5CE674D46E27D_il2cpp_TypeInfo_var);
		U24__ctor_m17D35BB111771BF9F52D01FCC2C9559FAAE1B822(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void UniFileBrowser_U24SelectFileU2452::.ctor(UniFileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24SelectFileU2452__ctor_mD2B2C0216B044259FACC6F28FC455B06C7504A72 (U24SelectFileU2452_t59507280F0FFEE23152D862BA29D307EE37B3018 * __this, UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___self_0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24SelectFileU2452__ctor_mD2B2C0216B044259FACC6F28FC455B06C7504A72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericGenerator_1__ctor_mB3036526E77DD2D509F75DD6658EB28DE238DDB1(__this, /*hidden argument*/GenericGenerator_1__ctor_mB3036526E77DD2D509F75DD6658EB28DE238DDB1_RuntimeMethod_var);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_0 = ___self_0;
		__this->set_U24self_U2456_0(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> UniFileBrowser_U24SelectFileU2452::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U24SelectFileU2452_GetEnumerator_mDB677D664CC1E28898123F9CAD2E1160AF3E485A (U24SelectFileU2452_t59507280F0FFEE23152D862BA29D307EE37B3018 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24SelectFileU2452_GetEnumerator_mDB677D664CC1E28898123F9CAD2E1160AF3E485A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_0 = __this->get_U24self_U2456_0();
		U24_t86F66B546C8692DE25AF9BE2AEB9D6540B4EC581 * L_1 = (U24_t86F66B546C8692DE25AF9BE2AEB9D6540B4EC581 *)il2cpp_codegen_object_new(U24_t86F66B546C8692DE25AF9BE2AEB9D6540B4EC581_il2cpp_TypeInfo_var);
		U24__ctor_m5E068108DD51281B548DFAC7EC4FBCDA24269FD8(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void UniFileBrowser_U24WaitForFrameU2443::.ctor(UniFileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24WaitForFrameU2443__ctor_m7C69D489D152D3F7279C43CDF4A9F14BF4B50FFF (U24WaitForFrameU2443_tEB3ED2D8FBA19122142DE8C506A78471E97FD0DD * __this, UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___self_0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24WaitForFrameU2443__ctor_m7C69D489D152D3F7279C43CDF4A9F14BF4B50FFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericGenerator_1__ctor_mB3036526E77DD2D509F75DD6658EB28DE238DDB1(__this, /*hidden argument*/GenericGenerator_1__ctor_mB3036526E77DD2D509F75DD6658EB28DE238DDB1_RuntimeMethod_var);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_0 = ___self_0;
		__this->set_U24self_U2445_0(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> UniFileBrowser_U24WaitForFrameU2443::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U24WaitForFrameU2443_GetEnumerator_m1E02328736A870F8905AD57EC41D3924529CA827 (U24WaitForFrameU2443_tEB3ED2D8FBA19122142DE8C506A78471E97FD0DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24WaitForFrameU2443_GetEnumerator_m1E02328736A870F8905AD57EC41D3924529CA827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_0 = __this->get_U24self_U2445_0();
		U24_tD4B10AB9517274557C79311963549E5DE4BB0326 * L_1 = (U24_tD4B10AB9517274557C79311963549E5DE4BB0326 *)il2cpp_codegen_object_new(U24_tD4B10AB9517274557C79311963549E5DE4BB0326_il2cpp_TypeInfo_var);
		U24__ctor_mE24E6CE0E5B291E5DD680F5494CC6B7AFB416452(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void UniFileBrowser_FileData::.ctor(System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileData__ctor_m02C88AD7DDED87F8F8405D8E527BD23696FFFDC9 (FileData_t4516F881D5D111630892E59176011C41763C9922 * __this, String_t* ___name0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___date1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_name_0(L_0);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___date1;
		__this->set_date_1(L_1);
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
// System.Void UniFileBrowser_U24DeleteFileU2446_U24::.ctor(UniFileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24__ctor_m17D35BB111771BF9F52D01FCC2C9559FAAE1B822 (U24_tC71DB695A6A6AE1094EF6480C5E5CE674D46E27D * __this, UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___self_0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24__ctor_m17D35BB111771BF9F52D01FCC2C9559FAAE1B822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericGeneratorEnumerator_1__ctor_m14B85998E8B9AE93185D05452018CFA9DCF1B95C(__this, /*hidden argument*/GenericGeneratorEnumerator_1__ctor_m14B85998E8B9AE93185D05452018CFA9DCF1B95C_RuntimeMethod_var);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_0 = ___self_0;
		__this->set_U24self_U2450_5(L_0);
		return;
	}
}
// System.Boolean UniFileBrowser_U24DeleteFileU2446_U24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U24_MoveNext_m1ED6E706D35D417563C7325D7E70A2156ABC6331 (U24_tC71DB695A6A6AE1094EF6480C5E5CE674D46E27D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24_MoveNext_m1ED6E706D35D417563C7325D7E70A2156ABC6331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B33_0 = 0;
	{
		int32_t L_0 = ((GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881 *)__this)->get__state_1();
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_02ea;
			}
			case 2:
			{
				goto IL_00fc;
			}
			case 3:
			{
				goto IL_0234;
			}
		}
	}

IL_001b:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_1 = __this->get_U24self_U2450_5();
		NullCheck(L_1);
		bool L_2 = L_1->get_showMessageWindow_136();
		if (L_2)
		{
			goto IL_006c;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_3 = __this->get_U24self_U2450_5();
		NullCheck(L_3);
		bool L_4 = L_3->get_selectFileInProgress_90();
		if (L_4)
		{
			goto IL_006c;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_5 = __this->get_U24self_U2450_5();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_selectedFileNumber_46();
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_7 = __this->get_U24self_U2450_5();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_selectedFileNumber_46();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_9 = __this->get_U24self_U2450_5();
		NullCheck(L_9);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_10 = L_9->get_dirList_49();
		NullCheck(L_10);
		int32_t L_11 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_10, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		if ((((int32_t)L_8) >= ((int32_t)L_11)))
		{
			goto IL_0071;
		}
	}

IL_006c:
	{
		goto IL_02ea;
	}

IL_0071:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_12 = __this->get_U24self_U2450_5();
		NullCheck(L_12);
		L_12->set_selectFileInProgress_90((bool)1);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_13 = __this->get_U24self_U2450_5();
		NullCheck(L_13);
		bool L_14 = L_13->get__allowMultiSelect_44();
		if (L_14)
		{
			goto IL_019b;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_15 = __this->get_U24self_U2450_5();
		NullCheck(L_15);
		String_t* L_16 = L_15->get_filePath_61();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_17 = __this->get_U24self_U2450_5();
		NullCheck(L_17);
		String_t* L_18 = L_17->get_fileName_62();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_19 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(L_16, L_18, /*hidden argument*/NULL);
		bool L_20 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0132;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_21 = __this->get_U24self_U2450_5();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_22 = __this->get_U24self_U2450_5();
		NullCheck(L_22);
		String_t* L_23 = L_22->get_fileName_62();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_24 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(_stringLiteralC6E9A3259791DD065E3527E3A39F1F4874D24EF1, L_23, /*hidden argument*/NULL);
		String_t* L_25 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(L_24, _stringLiteralF424587B8F3F9836269A596D5C2CCD2F666B5798, /*hidden argument*/NULL);
		NullCheck(L_21);
		UniFileBrowser_ShowConfirmMessage_m42C90A19ECE3B1E34257BACB89965D42B960A5CF(L_21, _stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7, L_25, _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674, _stringLiteral824E903B1E7FC13229B28EFC49EE5B6F62A6225E, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00f0:
	{
		bool L_26 = GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D(__this, 2, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D_RuntimeMethod_var);
		G_B33_0 = ((int32_t)(L_26));
		goto IL_02eb;
	}

IL_00fc:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_27 = __this->get_U24self_U2450_5();
		NullCheck(L_27);
		bool L_28 = L_27->get_showMessageWindow_136();
		if (L_28)
		{
			goto IL_00f0;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_29 = __this->get_U24self_U2450_5();
		NullCheck(L_29);
		bool L_30 = L_29->get_confirm_139();
		if (L_30)
		{
			goto IL_012d;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_31 = __this->get_U24self_U2450_5();
		NullCheck(L_31);
		L_31->set_selectFileInProgress_90((bool)0);
		goto IL_02ea;
	}

IL_012d:
	{
		goto IL_0143;
	}

IL_0132:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_32 = __this->get_U24self_U2450_5();
		NullCheck(L_32);
		L_32->set_selectFileInProgress_90((bool)0);
		goto IL_02ea;
	}

IL_0143:
	try
	{ // begin try (depth: 1)
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_33 = __this->get_U24self_U2450_5();
		NullCheck(L_33);
		String_t* L_34 = L_33->get_filePath_61();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_35 = __this->get_U24self_U2450_5();
		NullCheck(L_35);
		String_t* L_36 = L_35->get_fileName_62();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_37 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(L_34, L_36, /*hidden argument*/NULL);
		File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_37, /*hidden argument*/NULL);
		goto IL_017f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0168;
		throw e;
	}

CATCH_0168:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_38 = __this->get_U24self_U2450_5();
		Exception_t * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_39);
		NullCheck(L_38);
		UniFileBrowser_ShowError_mBC71A624A1607B92041389681C51209659144A7D(L_38, L_40, /*hidden argument*/NULL);
		goto IL_017f;
	} // end catch (depth: 1)

IL_017f:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_41 = __this->get_U24self_U2450_5();
		NullCheck(L_41);
		UniFileBrowser_GetCurrentFileInfo_m998D5221BA5821F7809F2A1D9B68020C6F87C9B7(L_41, /*hidden argument*/NULL);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_42 = __this->get_U24self_U2450_5();
		NullCheck(L_42);
		L_42->set_selectFileInProgress_90((bool)0);
		goto IL_02e2;
	}

IL_019b:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_43 = __this->get_U24self_U2450_5();
		NullCheck(L_43);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_44 = UniFileBrowser_GetMultiFileNames_mA72A9A777AA08BCFE66320BA4EFD0897597B91BE(L_43, /*hidden argument*/NULL);
		__this->set_U24filesU2447_2(L_44);
		__this->set_U24iU2448_3(0);
		goto IL_02b5;
	}

IL_01b8:
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_45 = __this->get_U24filesU2447_2();
		int32_t L_46 = __this->get_U24iU2448_3();
		NullCheck(L_45);
		String_t* L_47 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_45, L_46, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		bool L_48 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_47, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_02a7;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_49 = __this->get_U24filesU2447_2();
		int32_t L_50 = __this->get_U24iU2448_3();
		NullCheck(L_49);
		String_t* L_51 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_49, L_50, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_52 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_51, /*hidden argument*/NULL);
		__this->set_U24thisFileNameU2449_4(L_52);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_53 = __this->get_U24self_U2450_5();
		String_t* L_54 = __this->get_U24thisFileNameU2449_4();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_55 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(_stringLiteralC6E9A3259791DD065E3527E3A39F1F4874D24EF1, L_54, /*hidden argument*/NULL);
		String_t* L_56 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(L_55, _stringLiteralF424587B8F3F9836269A596D5C2CCD2F666B5798, /*hidden argument*/NULL);
		NullCheck(L_53);
		UniFileBrowser_ShowConfirmMessage_m42C90A19ECE3B1E34257BACB89965D42B960A5CF(L_53, _stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7, L_56, _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674, _stringLiteral824E903B1E7FC13229B28EFC49EE5B6F62A6225E, /*hidden argument*/NULL);
		goto IL_0234;
	}

IL_0228:
	{
		bool L_57 = GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D(__this, 3, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D_RuntimeMethod_var);
		G_B33_0 = ((int32_t)(L_57));
		goto IL_02eb;
	}

IL_0234:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_58 = __this->get_U24self_U2450_5();
		NullCheck(L_58);
		bool L_59 = L_58->get_showMessageWindow_136();
		if (L_59)
		{
			goto IL_0228;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_60 = __this->get_U24self_U2450_5();
		NullCheck(L_60);
		bool L_61 = L_60->get_confirm_139();
		if (L_61)
		{
			goto IL_0259;
		}
	}
	{
		goto IL_02a7;
	}

IL_0259:
	try
	{ // begin try (depth: 1)
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_62 = __this->get_U24filesU2447_2();
		int32_t L_63 = __this->get_U24iU2448_3();
		NullCheck(L_62);
		String_t* L_64 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_62, L_63, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_64, /*hidden argument*/NULL);
		goto IL_02a7;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0274;
		throw e;
	}

CATCH_0274:
	{ // begin catch(System.Exception)
		{
			V_1 = ((Exception_t *)__exception_local);
			UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_65 = __this->get_U24self_U2450_5();
			Exception_t * L_66 = V_1;
			NullCheck(L_66);
			String_t* L_67 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_66);
			NullCheck(L_65);
			UniFileBrowser_ShowError_mBC71A624A1607B92041389681C51209659144A7D(L_65, L_67, /*hidden argument*/NULL);
			UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_68 = __this->get_U24self_U2450_5();
			NullCheck(L_68);
			UniFileBrowser_GetCurrentFileInfo_m998D5221BA5821F7809F2A1D9B68020C6F87C9B7(L_68, /*hidden argument*/NULL);
			UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_69 = __this->get_U24self_U2450_5();
			NullCheck(L_69);
			L_69->set_selectFileInProgress_90((bool)0);
			goto IL_02ea;
		}

IL_02a2:
		{
			; // IL_02a2: leave IL_02a7
		}
	} // end catch (depth: 1)

IL_02a7:
	{
		int32_t L_70 = __this->get_U24iU2448_3();
		__this->set_U24iU2448_3(((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1)));
	}

IL_02b5:
	{
		int32_t L_71 = __this->get_U24iU2448_3();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_72 = __this->get_U24filesU2447_2();
		NullCheck(L_72);
		int32_t L_73 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_72, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_01b8;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_74 = __this->get_U24self_U2450_5();
		NullCheck(L_74);
		UniFileBrowser_GetCurrentFileInfo_m998D5221BA5821F7809F2A1D9B68020C6F87C9B7(L_74, /*hidden argument*/NULL);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_75 = __this->get_U24self_U2450_5();
		NullCheck(L_75);
		L_75->set_selectFileInProgress_90((bool)0);
	}

IL_02e2:
	{
		GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D(__this, 1, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D_RuntimeMethod_var);
	}

IL_02ea:
	{
		G_B33_0 = 0;
	}

IL_02eb:
	{
		return (bool)G_B33_0;
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
// System.Void UniFileBrowser_U24SelectFileU2452_U24::.ctor(UniFileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24__ctor_m5E068108DD51281B548DFAC7EC4FBCDA24269FD8 (U24_t86F66B546C8692DE25AF9BE2AEB9D6540B4EC581 * __this, UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___self_0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24__ctor_m5E068108DD51281B548DFAC7EC4FBCDA24269FD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericGeneratorEnumerator_1__ctor_m14B85998E8B9AE93185D05452018CFA9DCF1B95C(__this, /*hidden argument*/GenericGeneratorEnumerator_1__ctor_m14B85998E8B9AE93185D05452018CFA9DCF1B95C_RuntimeMethod_var);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_0 = ___self_0;
		__this->set_U24self_U2455_4(L_0);
		return;
	}
}
// System.Boolean UniFileBrowser_U24SelectFileU2452_U24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U24_MoveNext_m925A765204E7383F1FD521FD99357A6E27F50A7D (U24_t86F66B546C8692DE25AF9BE2AEB9D6540B4EC581 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24_MoveNext_m925A765204E7383F1FD521FD99357A6E27F50A7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B43_0 = 0;
	{
		int32_t L_0 = ((GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881 *)__this)->get__state_1();
		switch (L_0)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_0476;
			}
			case 2:
			{
				goto IL_0353;
			}
		}
	}

IL_0017:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_1 = __this->get_U24self_U2455_4();
		NullCheck(L_1);
		bool L_2 = L_1->get_showMessageWindow_136();
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_3 = __this->get_U24self_U2455_4();
		NullCheck(L_3);
		bool L_4 = L_3->get_selectFileInProgress_90();
		if (!L_4)
		{
			goto IL_003c;
		}
	}

IL_0037:
	{
		goto IL_0476;
	}

IL_003c:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_5 = __this->get_U24self_U2455_4();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_selectedFileNumber_46();
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0201;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_7 = __this->get_U24self_U2455_4();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_selectedFileNumber_46();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_9 = __this->get_U24self_U2455_4();
		NullCheck(L_9);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_10 = L_9->get_dirList_49();
		NullCheck(L_10);
		int32_t L_11 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_10, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		if ((((int32_t)L_8) >= ((int32_t)L_11)))
		{
			goto IL_0201;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_12 = __this->get_U24self_U2455_4();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_13 = __this->get_U24self_U2455_4();
		NullCheck(L_13);
		String_t* L_14 = L_13->get_filePath_61();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_15 = __this->get_U24self_U2455_4();
		NullCheck(L_15);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_16 = L_15->get_dirList_49();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_17 = __this->get_U24self_U2455_4();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_selectedFileNumber_46();
		NullCheck(L_16);
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_19 = List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_inline(L_16, L_18, /*hidden argument*/List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_RuntimeMethod_var);
		NullCheck(L_19);
		String_t* L_20 = L_19->get_name_0();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_21 = __this->get_U24self_U2455_4();
		NullCheck(L_21);
		Il2CppChar L_22 = L_21->get_pathChar_68();
		Il2CppChar L_23 = L_22;
		RuntimeObject * L_24 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_23);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_25 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_20, L_24, /*hidden argument*/NULL);
		String_t* L_26 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(L_14, L_25, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_filePath_61(L_26);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_27 = __this->get_U24self_U2455_4();
		NullCheck(L_27);
		bool L_28 = L_27->get_showVolumes_12();
		if (!L_28)
		{
			goto IL_01f1;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_29 = __this->get_U24self_U2455_4();
		NullCheck(L_29);
		int32_t L_30 = L_29->get_selectedFileNumber_46();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_31 = __this->get_U24self_U2455_4();
		NullCheck(L_31);
		int32_t L_32 = L_31->get_numberOfVolumes_73();
		if ((((int32_t)L_30) >= ((int32_t)L_32)))
		{
			goto IL_01f1;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_33 = __this->get_U24self_U2455_4();
		NullCheck(L_33);
		bool L_34 = L_33->get_windowsSystem_69();
		if (!L_34)
		{
			goto IL_0152;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_35 = __this->get_U24self_U2455_4();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_36 = __this->get_U24self_U2455_4();
		NullCheck(L_36);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_37 = L_36->get_dirList_49();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_38 = __this->get_U24self_U2455_4();
		NullCheck(L_38);
		int32_t L_39 = L_38->get_selectedFileNumber_46();
		NullCheck(L_37);
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_40 = List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_inline(L_37, L_39, /*hidden argument*/List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_RuntimeMethod_var);
		NullCheck(L_40);
		String_t* L_41 = L_40->get_name_0();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_42 = __this->get_U24self_U2455_4();
		NullCheck(L_42);
		Il2CppChar L_43 = L_42->get_pathChar_68();
		Il2CppChar L_44 = L_43;
		RuntimeObject * L_45 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_44);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_46 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_41, L_45, /*hidden argument*/NULL);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_47 = __this->get_U24self_U2455_4();
		NullCheck(L_47);
		Il2CppChar L_48 = L_47->get_pathChar_68();
		Il2CppChar L_49 = L_48;
		RuntimeObject * L_50 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_49);
		String_t* L_51 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_46, L_50, /*hidden argument*/NULL);
		NullCheck(L_35);
		L_35->set_filePath_61(L_51);
		goto IL_01f1;
	}

IL_0152:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_52 = __this->get_U24self_U2455_4();
		NullCheck(L_52);
		bool L_53 = L_52->get_linuxSystem_70();
		if (!L_53)
		{
			goto IL_01a7;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_54 = __this->get_U24self_U2455_4();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_55 = __this->get_U24self_U2455_4();
		NullCheck(L_55);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_56 = L_55->get_dirList_49();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_57 = __this->get_U24self_U2455_4();
		NullCheck(L_57);
		int32_t L_58 = L_57->get_selectedFileNumber_46();
		NullCheck(L_56);
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_59 = List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_inline(L_56, L_58, /*hidden argument*/List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_RuntimeMethod_var);
		NullCheck(L_59);
		String_t* L_60 = L_59->get_name_0();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_61 = __this->get_U24self_U2455_4();
		NullCheck(L_61);
		Il2CppChar L_62 = L_61->get_pathChar_68();
		Il2CppChar L_63 = L_62;
		RuntimeObject * L_64 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_63);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_65 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_60, L_64, /*hidden argument*/NULL);
		NullCheck(L_54);
		L_54->set_filePath_61(L_65);
		goto IL_01f1;
	}

IL_01a7:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_66 = __this->get_U24self_U2455_4();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_67 = __this->get_U24self_U2455_4();
		NullCheck(L_67);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_68 = L_67->get_dirList_49();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_69 = __this->get_U24self_U2455_4();
		NullCheck(L_69);
		int32_t L_70 = L_69->get_selectedFileNumber_46();
		NullCheck(L_68);
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_71 = List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_inline(L_68, L_70, /*hidden argument*/List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_RuntimeMethod_var);
		NullCheck(L_71);
		String_t* L_72 = L_71->get_name_0();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_73 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(_stringLiteralDD851AFDF0A39B82A08085A7807CE1180BD964D4, L_72, /*hidden argument*/NULL);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_74 = __this->get_U24self_U2455_4();
		NullCheck(L_74);
		Il2CppChar L_75 = L_74->get_pathChar_68();
		Il2CppChar L_76 = L_75;
		RuntimeObject * L_77 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_76);
		String_t* L_78 = RuntimeServices_op_Addition_m9D3B76CEA56E70B7024E135B6CCFE8AC533FB196(L_73, L_77, /*hidden argument*/NULL);
		NullCheck(L_66);
		L_66->set_filePath_61(L_78);
	}

IL_01f1:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_79 = __this->get_U24self_U2455_4();
		NullCheck(L_79);
		UniFileBrowser_GetCurrentFileInfo_m998D5221BA5821F7809F2A1D9B68020C6F87C9B7(L_79, /*hidden argument*/NULL);
		goto IL_0476;
	}

IL_0201:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_80 = __this->get_U24self_U2455_4();
		NullCheck(L_80);
		int32_t L_81 = L_80->get_fileType_79();
		if ((((int32_t)L_81) == ((int32_t)1)))
		{
			goto IL_0262;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_82 = __this->get_U24self_U2455_4();
		NullCheck(L_82);
		bool L_83 = L_82->get__allowMultiSelect_44();
		if (L_83)
		{
			goto IL_023c;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_84 = __this->get_U24self_U2455_4();
		NullCheck(L_84);
		String_t* L_85 = L_84->get_fileName_62();
		String_t* L_86 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		bool L_87 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_85, L_86, /*hidden argument*/NULL);
		if (L_87)
		{
			goto IL_02a3;
		}
	}

IL_023c:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_88 = __this->get_U24self_U2455_4();
		NullCheck(L_88);
		bool L_89 = L_88->get__allowMultiSelect_44();
		if (!L_89)
		{
			goto IL_0262;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_90 = __this->get_U24self_U2455_4();
		NullCheck(L_90);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_91 = L_90->get_multiFileList_54();
		NullCheck(L_91);
		int32_t L_92 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_91, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if ((((int32_t)L_92) < ((int32_t)1)))
		{
			goto IL_02a3;
		}
	}

IL_0262:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_93 = __this->get_U24self_U2455_4();
		NullCheck(L_93);
		int32_t L_94 = L_93->get_fileType_79();
		if ((!(((uint32_t)L_94) == ((uint32_t)1))))
		{
			goto IL_02a8;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_95 = __this->get_U24self_U2455_4();
		NullCheck(L_95);
		bool L_96 = L_95->get_autoAddExtension_4();
		if (!L_96)
		{
			goto IL_02a8;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_97 = __this->get_U24self_U2455_4();
		NullCheck(L_97);
		String_t* L_98 = L_97->get_fileName_62();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_99 = __this->get_U24self_U2455_4();
		NullCheck(L_99);
		String_t* L_100 = L_99->get_addedExtension_5();
		bool L_101 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_98, L_100, /*hidden argument*/NULL);
		if (!L_101)
		{
			goto IL_02a8;
		}
	}

IL_02a3:
	{
		goto IL_0476;
	}

IL_02a8:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_102 = __this->get_U24self_U2455_4();
		NullCheck(L_102);
		L_102->set_selectFileInProgress_90((bool)1);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_103 = __this->get_U24self_U2455_4();
		NullCheck(L_103);
		String_t* L_104 = L_103->get_fileName_62();
		__this->set_U24thisFileNameU2453_2(L_104);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_105 = __this->get_U24self_U2455_4();
		NullCheck(L_105);
		int32_t L_106 = L_105->get_fileType_79();
		if ((!(((uint32_t)L_106) == ((uint32_t)1))))
		{
			goto IL_03ad;
		}
	}
	{
		__this->set_U24iU2454_3(0);
		goto IL_0392;
	}

IL_02e2:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_107 = __this->get_U24self_U2455_4();
		NullCheck(L_107);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_108 = L_107->get_fileList_50();
		int32_t L_109 = __this->get_U24iU2454_3();
		NullCheck(L_108);
		FileData_t4516F881D5D111630892E59176011C41763C9922 * L_110 = List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_inline(L_108, L_109, /*hidden argument*/List_1_get_Item_mD50A1D51F2F2E59276B614B3E8E4D36BA4EECBA3_RuntimeMethod_var);
		NullCheck(L_110);
		String_t* L_111 = L_110->get_name_0();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_112 = __this->get_U24self_U2455_4();
		NullCheck(L_112);
		String_t* L_113 = L_112->get_fileName_62();
		bool L_114 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_111, L_113, /*hidden argument*/NULL);
		if (!L_114)
		{
			goto IL_0384;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_115 = __this->get_U24self_U2455_4();
		NullCheck(L_115);
		UniFileBrowser_ShowConfirmMessage_m42C90A19ECE3B1E34257BACB89965D42B960A5CF(L_115, _stringLiteral3E2494FB2D245D91FF110697DD6EA93C8AD044C7, _stringLiteralC0D634154F33FF44B27EB46943B382AC0C7CFE61, _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674, _stringLiteral43CF2B03BAD4C8E04EDC5E2EB91211C3DF0D32F3, /*hidden argument*/NULL);
		goto IL_0353;
	}

IL_0336:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_116 = __this->get_U24self_U2455_4();
		String_t* L_117 = __this->get_U24thisFileNameU2453_2();
		NullCheck(L_116);
		L_116->set_fileName_62(L_117);
		bool L_118 = GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D(__this, 2, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D_RuntimeMethod_var);
		G_B43_0 = ((int32_t)(L_118));
		goto IL_0477;
	}

IL_0353:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_119 = __this->get_U24self_U2455_4();
		NullCheck(L_119);
		bool L_120 = L_119->get_showMessageWindow_136();
		if (L_120)
		{
			goto IL_0336;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_121 = __this->get_U24self_U2455_4();
		NullCheck(L_121);
		bool L_122 = L_121->get_confirm_139();
		if (L_122)
		{
			goto IL_0384;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_123 = __this->get_U24self_U2455_4();
		NullCheck(L_123);
		L_123->set_selectFileInProgress_90((bool)0);
		goto IL_0476;
	}

IL_0384:
	{
		int32_t L_124 = __this->get_U24iU2454_3();
		__this->set_U24iU2454_3(((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)1)));
	}

IL_0392:
	{
		int32_t L_125 = __this->get_U24iU2454_3();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_126 = __this->get_U24self_U2455_4();
		NullCheck(L_126);
		List_1_t1B7D0CCC492927315F202CF16D4BA75F56CB5692 * L_127 = L_126->get_fileList_50();
		NullCheck(L_127);
		int32_t L_128 = List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_inline(L_127, /*hidden argument*/List_1_get_Count_m1B756A5D09D8CA07A880FFDF3F70D66A6C1A2D22_RuntimeMethod_var);
		if ((((int32_t)L_125) < ((int32_t)L_128)))
		{
			goto IL_02e2;
		}
	}

IL_03ad:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_129 = __this->get_U24self_U2455_4();
		NullCheck(L_129);
		L_129->set_selectFileInProgress_90((bool)0);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_130 = __this->get_U24self_U2455_4();
		NullCheck(L_130);
		int32_t L_131 = L_130->get_fileType_79();
		if ((((int32_t)L_131) == ((int32_t)0)))
		{
			goto IL_03db;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_132 = __this->get_U24self_U2455_4();
		NullCheck(L_132);
		int32_t L_133 = L_132->get_fileType_79();
		if ((!(((uint32_t)L_133) == ((uint32_t)1))))
		{
			goto IL_046e;
		}
	}

IL_03db:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_134 = __this->get_U24self_U2455_4();
		NullCheck(L_134);
		VirtActionInvoker0::Invoke(31 /* System.Void UniFileBrowser::CloseFileWindow() */, L_134);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_135 = __this->get_U24self_U2455_4();
		NullCheck(L_135);
		int32_t L_136 = L_135->get_fileType_79();
		if ((!(((uint32_t)L_136) == ((uint32_t)0))))
		{
			goto IL_042c;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_137 = __this->get_U24self_U2455_4();
		NullCheck(L_137);
		bool L_138 = L_137->get__allowMultiSelect_44();
		if (!L_138)
		{
			goto IL_042c;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_139 = __this->get_U24self_U2455_4();
		NullCheck(L_139);
		__UniFileBrowser_multiDelegateU24callable1U24170_29___t271CD5D0E1E8D15261C82A297ACFA08F2573AB99 * L_140 = L_139->get_multiDelegate_93();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_141 = __this->get_U24self_U2455_4();
		NullCheck(L_141);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_142 = UniFileBrowser_GetMultiFileNames_mA72A9A777AA08BCFE66320BA4EFD0897597B91BE(L_141, /*hidden argument*/NULL);
		NullCheck(L_142);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_143 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_142, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		NullCheck(L_140);
		__UniFileBrowser_multiDelegateU24callable1U24170_29___Invoke_mCF52D0D24C89E326FD61052AC8A555D945FAB3FB(L_140, L_143, /*hidden argument*/NULL);
		goto IL_0452;
	}

IL_042c:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_144 = __this->get_U24self_U2455_4();
		NullCheck(L_144);
		__UniFileBrowser_delegateU24callable0U24169_24___tB28CF6E29083857D35E7CFED46AFCEC83255A7E3 * L_145 = L_144->get_delegate_92();
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_146 = __this->get_U24self_U2455_4();
		NullCheck(L_146);
		String_t* L_147 = L_146->get_filePath_61();
		String_t* L_148 = __this->get_U24thisFileNameU2453_2();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_tFD4CEC46F991AD84D3B97A0167EF998405CC09B8_il2cpp_TypeInfo_var);
		String_t* L_149 = RuntimeServices_op_Addition_m7165A7DD27590D1BF8530DCE771CE8E6FEBCF8E8(L_147, L_148, /*hidden argument*/NULL);
		NullCheck(L_145);
		__UniFileBrowser_delegateU24callable0U24169_24___Invoke_m426486C356306933A79E4029F21547C278E09580(L_145, L_149, /*hidden argument*/NULL);
	}

IL_0452:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_150 = __this->get_U24self_U2455_4();
		NullCheck(L_150);
		int32_t L_151 = L_150->get_fileType_79();
		if ((!(((uint32_t)L_151) == ((uint32_t)1))))
		{
			goto IL_046e;
		}
	}
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_152 = __this->get_U24self_U2455_4();
		NullCheck(L_152);
		UniFileBrowser_GetCurrentFileInfo_m998D5221BA5821F7809F2A1D9B68020C6F87C9B7(L_152, /*hidden argument*/NULL);
	}

IL_046e:
	{
		GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D(__this, 1, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D_RuntimeMethod_var);
	}

IL_0476:
	{
		G_B43_0 = 0;
	}

IL_0477:
	{
		return (bool)G_B43_0;
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
// System.Void UniFileBrowser_U24WaitForFrameU2443_U24::.ctor(UniFileBrowser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24__ctor_mE24E6CE0E5B291E5DD680F5494CC6B7AFB416452 (U24_tD4B10AB9517274557C79311963549E5DE4BB0326 * __this, UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * ___self_0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24__ctor_mE24E6CE0E5B291E5DD680F5494CC6B7AFB416452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericGeneratorEnumerator_1__ctor_m14B85998E8B9AE93185D05452018CFA9DCF1B95C(__this, /*hidden argument*/GenericGeneratorEnumerator_1__ctor_m14B85998E8B9AE93185D05452018CFA9DCF1B95C_RuntimeMethod_var);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_0 = ___self_0;
		__this->set_U24self_U2444_2(L_0);
		return;
	}
}
// System.Boolean UniFileBrowser_U24WaitForFrameU2443_U24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U24_MoveNext_mD346E9985A789D2D9A6D1F10194D8A05FFF70487 (U24_tD4B10AB9517274557C79311963549E5DE4BB0326 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24_MoveNext_mD346E9985A789D2D9A6D1F10194D8A05FFF70487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ((GenericGeneratorEnumerator_1_t8571DFE86A59A484981E9CA26219531C579CD881 *)__this)->get__state_1();
		switch (L_0)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_005b;
			}
			case 2:
			{
				goto IL_003b;
			}
		}
	}

IL_0017:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_1 = __this->get_U24self_U2444_2();
		NullCheck(L_1);
		L_1->set_frameDone_64((bool)0);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_2 = __this->get_U24self_U2444_2();
		NullCheck(L_2);
		L_2->set_selectedFileNumber_46((-1));
		bool L_3 = GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D(__this, 2, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D_RuntimeMethod_var);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_005c;
	}

IL_003b:
	{
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_4 = __this->get_U24self_U2444_2();
		NullCheck(L_4);
		L_4->set_frameDone_64((bool)1);
		UniFileBrowser_tDC7A566E7F5D467E776146975E1E69DC9AD6A595 * L_5 = __this->get_U24self_U2444_2();
		NullCheck(L_5);
		L_5->set_selectedFileNumber_46((-1));
		GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D(__this, 1, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m4AFD648C092D2A46EA47AA8A481C3EA3F0D84E3D_RuntimeMethod_var);
	}

IL_005b:
	{
		G_B4_0 = 0;
	}

IL_005c:
	{
		return (bool)G_B4_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DirectoryInfo_get_Name_mEED706FA69EDD50668D24F9C2BC19D7117BFE78E_inline (DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_current_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FileInfo_get_Name_mB64F7CA75D5DBB38DB9EDA9F31D94F1E32AEE61B_inline (FileInfo_t6C8B2EAA1E23F9E6D7C287C58E4EEEB2049ABAB9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return L_4;
	}
}
