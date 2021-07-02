#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// Vuforia.AMigratableVideoBackgroundConfigProperty
struct AMigratableVideoBackgroundConfigProperty_t4A9B28F84A13148720EC22B576D5197D535FEDC2;
// Vuforia.AValidatableConfigProperty
struct AValidatableConfigProperty_tC001220DBA97538D52ACDF63B14E5163219D2B12;
// Vuforia.Anchor
struct Anchor_tB45DDD8AABA2081B0FBA2AC2784690717974D4E7;
// Vuforia.AnchorBehaviour
struct AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C;
// Vuforia.AreaTracker
struct AreaTracker_t8071226BF023074830335EFFEB24D47E45D714B8;
// Vuforia.BackgroundPlaneBehaviour
struct BackgroundPlaneBehaviour_tF077FD37FA77B17A9BE8A8532D03EF334C008C59;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Vuforia.CommandBufferTextureDefinition
struct CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE;
// Vuforia.ConfigDefaultProvider
struct ConfigDefaultProvider_tDE3EAB8B25E95F66B20A7ABCC57F0D7ADF5AD3B3;
// Vuforia.ContentPlacedEvent
struct ContentPlacedEvent_tE97EF9823F977BBDD7F93398DD8C62B14FE8F555;
// Vuforia.ContentPositioningBehaviour
struct ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630;
// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t22B5898E13105BF1FDD0F2FF8DFAD40915992EEC;
// Vuforia.DatasetTracker
struct DatasetTracker_t14F875EA1CE6ABDB7345699192189AB763F9DAC8;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB;
// Vuforia.DisabledSetTargetSize
struct DisabledSetTargetSize_t7051D80708A3A9C81A13959EC41094CEB4B303D4;
// Vuforia.GuideView
struct GuideView_tDEEC431D285C9A0E98FFA9F73FB14A359174AF96;
// Vuforia.GuideViewRenderingBehaviour
struct GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A;
// Vuforia.HitTestResult
struct HitTestResult_t94D92389FD79AEEA1E370E6C25024A1EC996A21D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Vuforia.IPlayModeEditorUtility
struct IPlayModeEditorUtility_t39FC0F38227370B3ACE37317DF19C1C5AA9D919F;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t4C54E4C8CA7AE28F257712D1A3BA9546DB8A7993;
// Vuforia.IUnityRenderEventBroadcaster
struct IUnityRenderEventBroadcaster_tC96672F6F1BF865CAB161CDACB4EFD2CE9D1BC1E;
// Vuforia.IVuforiaWrapper
struct IVuforiaWrapper_t73ACA4203751EF7AEDFA99EBD8A7BA9100B13363;
// Vuforia.IWebCamTexAdaptor
struct IWebCamTexAdaptor_tD4A8817BFA79ED040991513A48DB3EECB714876E;
// Vuforia.ImageTarget
struct ImageTarget_tC09E99E90EE63F3496DCECAF913DCC09D11B486B;
// Vuforia.ImageTargetBehaviour
struct ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t7F30FEDC8117F167FE1D072B0DF9F5368DFE6602;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// Vuforia.EditorClasses.JSONArray
struct JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48;
// Vuforia.EditorClasses.JSONNode
struct JSONNode_t2AC73352107C87692E5E6508C959400504495752;
// Vuforia.EditorClasses.JSONObject
struct JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Vuforia.ModelTargetBehaviour
struct ModelTargetBehaviour_tE8E191D2B2C0C816E9B5B07000CAC7E58DED23B3;
// Vuforia.NativeVideoTextureUpdater
struct NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8;
// Vuforia.ObjectRecoBehaviour
struct ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7;
// Vuforia.ObjectTracker
struct ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Vuforia.PositionalDeviceTracker
struct PositionalDeviceTracker_t6ABCBD564879CA0036D88243CB3C187E5DCED92E;
// Vuforia.RuntimeImageSource
struct RuntimeImageSource_t6653993BB291F700E9BF307C1662FFEA8810A2D0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Vuforia.SmartTerrain
struct SmartTerrain_t465561CB4FF40E6CB2355629FB8AC51286663B14;
// Vuforia.TargetFinder
struct TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC;
// Vuforia.Trackable
struct Trackable_tFA1788D7399ADBB5067D5C92BAE319E02D0DC4FA;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74;
// Vuforia.TrackableSource
struct TrackableSource_tA8649A889727AA9D7469846706286509D153417E;
// Vuforia.Tracker
struct Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Vuforia.VuMarkBehaviour
struct VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37;
// Vuforia.VuMarkTarget
struct VuMarkTarget_t5E54C4191066704179FB96A49C0F15840F685E47;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t010113E8422202775723C578CACD6FF25BDCE851;
// Vuforia.VuforiaARController
struct VuforiaARController_t9F6FA135CCFAA95C6D9AAA3F04B69BA12B59F1BF;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t9219CF551CEF41D29CC61DC13005F973DC4A254F;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF;
// Vuforia.VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_tF46B612839A7E393E77D9A27B3250EC77FCF54E6;
// Vuforia.WebCamTexAdaptor
struct WebCamTexAdaptor_tBA53CE26A2424E7D165C57C53246CC77BA8C9F5A;
// Vuforia.AnchorInputListenerBehaviour/InputReceivedEvent
struct InputReceivedEvent_tF1B1BDB7647AC41F6D27967F5C0FABCC9F907C6C;
// Vuforia.AreaTargetPreviewVisualization/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tAD49F7B2ED9AA3E98EC650F525497040631659C8;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// Vuforia.CommandBufferTextureDefinitionsProvider/<>c
struct U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD;
// Vuforia.CommandBufferVideoTextureUpdater/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t06ACBAA1DAA0750BA0C8E1A4D9D9A53430B4BFFE;
// Vuforia.ContentPositioningBehaviour/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t49926E8D82024754620CFBFAA0A14BADBD7E07C2;
// Vuforia.ContentPositioningBehaviour/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t4CB6EF0E390D91E46BD8FC88F2CB31C30C4B5D19;
// Vuforia.ContentPositioningBehaviour/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t1DB6F31870E50A5FA504FBBE5C2956D8BA8CD753;
// Vuforia.DefaultConfigValidator/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tAA3C5E97930B341D0A95B0E76FF44312DD8BBE88;
// Vuforia.GLTFExtractorUtility/<>c
struct U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0;
// Vuforia.GuideViewRenderingBehaviour/<SetChildOfVuforiaAnchor>d__23
struct U3CSetChildOfVuforiaAnchorU3Ed__23_tDEF494FDCF285E467D968D04E98E4130FCB9C059;
// Vuforia.GuideViewRenderingBehaviour/<ShowGuideViewAfter>d__22
struct U3CShowGuideViewAfterU3Ed__22_tB8EDACC2BB30E91FCA948474008250B4E509C911;
// Vuforia.EditorClasses.JSONArray/<GetEnumerator>d__12
struct U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492;
// Vuforia.EditorClasses.JSONArray/<get_Children>d__11
struct U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D;
// Vuforia.EditorClasses.JSONNode/<get_Children>d__17
struct U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C;
// Vuforia.EditorClasses.JSONObject/<GetEnumerator>d__12
struct U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B;
// Vuforia.EditorClasses.JSONObject/<get_Children>d__11
struct U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B;
// Vuforia.MidAirPositionerBehaviour/AnchorPositionConfirmedEvent
struct AnchorPositionConfirmedEvent_t7A8C61703F2893F2BAA448996FA4F404065BDF7C;
// Vuforia.MultiTargetImpl/MultiSetTargetSize
struct MultiSetTargetSize_t3228D2FF19C4CFB329B7A3AEE2DD7029726A827D;
// Vuforia.NativeVideoTextureUpdater/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tF049671C4B40C93A49C2B7AC6173F621F501D8AB;
// Vuforia.UnityRuntimeCompiled.NullUnityRuntimeCompiledFacade/NullUnityRenderPipeline
struct NullUnityRenderPipeline_tA90EDF2AE97640FAB3C5757E9B14C0A6ACC0FAE9;
// Vuforia.ObjectRecoBehaviour/<>c
struct U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993;
// Vuforia.ObjectRecoBehaviour/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tFD16358DE7FC0FBB407E99AC77492F07C5CCA6D7;
// Vuforia.ObjectRecoBehaviour/<>c__DisplayClass39_0
struct U3CU3Ec__DisplayClass39_0_t49E8DB6ABD4B02494774E91A61013FE83BA694E2;
// Vuforia.ObjectRecoBehaviour/<>c__DisplayClass39_1
struct U3CU3Ec__DisplayClass39_1_t8E98E48D7BDFFBBC73D4590FABF40BD849A4BF4C;
// Vuforia.PlaneFinderBehaviour/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_tE1C4D37CDB86BFB78E6E0EA8668F2A436EB1C5F7;
// Vuforia.PlayModeEditorUtility/NullPlayModeEditorUtility
struct NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0;
// Vuforia.PlaymodeSmartTerrainImpl/<>c
struct U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E;
// Vuforia.PositionalDeviceTrackerImpl/<>c
struct U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152;
// Vuforia.PosixPath/<>c
struct U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7;
// Vuforia.PosixPath/InvalidPathException
struct InvalidPathException_tF2E491842E10A2B586CD665324960DFA27555158;
// Vuforia.PremiumObjectFactory/NullPremiumObjectFactory
struct NullPremiumObjectFactory_t5638116D579E4E9C80CEEE46590F2E7BD78579E7;
// Vuforia.RawPtrVideoTextureUpdater/<>c
struct U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970;
// Vuforia.RawPtrVideoTextureUpdater/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tD9B0DA697079A5346A799BB31439A6F81C164FFC;
// Vuforia.RawPtrVideoTextureUpdater/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tCFBDD0F50D634408912B341E1DF83CEBFC681F56;
// Vuforia.SimulatorVisualizationFactory/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t665381D18ABE27CA164EEEE9C61489672C75E41D;
// Vuforia.StateManager/<>c
struct U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8;
// Vuforia.TargetFinder/CloudRecoSearchResult
struct CloudRecoSearchResult_tF1C62668152BE9A2A93AA7AA2D0AFFA74392F613;
// Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320;
// Vuforia.TrackableBehaviour/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t7A0FA07ECAC887F72B1797E7FFAC5B0018D3FA5A;
// Vuforia.TrackableBehaviour/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_tFA29138D3CAF12CBC7F44972AA8C5060F5AD75D2;
// Vuforia.TrackerManager/<>c
struct U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB;
// Vuforia.UnityRenderEventBroadcaster/RenderEventBehaviour
struct RenderEventBehaviour_tF28EF9CD9A2101826273C8911894AEBBD7A01FBC;
// Vuforia.UnityVersionUtility/<>c
struct U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2;
// Vuforia.UnmanagedImageExtensions/GetImageSizeAndDataDelegate
struct GetImageSizeAndDataDelegate_tF1E20D3F6EA9A7A03484BB2DAA13172E08F0A23E;
// Vuforia.UserDefinedTargetBuildingBehaviour/<>c
struct U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653;
// Vuforia.UserDefinedTargetBuildingBehaviour/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tD872908B38989C7BC414821DA592073A148F94CE;
// Vuforia.UserDefinedTargetBuildingBehaviour/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_tB8A642ED0220FC9C55F7C3C490EE649BFDEC4743;
// Vuforia.VideoBackgroundConfigMigrator/<>c
struct U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC;
// Vuforia.VuMarkTargetImpl/VuMarkSetTargetSize
struct VuMarkSetTargetSize_tC13FEF69987297539E648616C0813C46A8019898;
// Vuforia.VuforiaARController/<>c
struct U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7;
// Vuforia.VuforiaConfiguration/DatabaseConfiguration
struct DatabaseConfiguration_tF351BC5B9DB35944D7129BD046E7366BA3EF4931;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36;
// Vuforia.VuforiaConfiguration/PlayModeConfiguration
struct PlayModeConfiguration_tAE3B5638AA25D2FC6C10B64CA4BF26F3EE026695;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_tB6901731D92E082AB5355D87C90480957723CB91;
// Vuforia.VuforiaManager/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t194063C85F986BD8FE6CBFB4B540D50110E63906;
// Vuforia.VuforiaManager/<>c__DisplayClass76_0
struct U3CU3Ec__DisplayClass76_0_tD79645A57080742FC990CADBEA072D5BF12092DA;
// Vuforia.VuforiaRenderer/<>c
struct U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF;
// Vuforia.VuforiaRuntimeUtilities/<>c
struct U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D;
// Vuforia.WSAUnityPlayer/HoloLensApiImplementation
struct HoloLensApiImplementation_t66C053D7B2CD2DEBF37631C79882A67BB1E41FF3;
// Vuforia.WebCamARController/<>c
struct U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457;
// System.Action`1<System.Int32Enum>
struct Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09;
// System.Action`1<Vuforia.TargetFinder>
struct Action_1_t680968FBB826541F142EBF7D79C27906716B992A;
// System.Action`1<Vuforia.TrackableSource>
struct Action_1_tF179629AB9BB26D8E830C796089B0398ACDCDFB6;
// System.Action`1<Vuforia.ImageTargetBuilder/FrameQuality>
struct Action_1_tC87FED509BD0D441A0ADCBFE65149AE21BD08A98;
// System.Action`1<Vuforia.TargetFinder/InitState>
struct Action_1_t7E6B55387F9557E0EF71FD16A4BB6AC1F0D6B070;
// System.Action`1<Vuforia.TargetFinder/TargetSearchResult>
struct Action_1_t5381EA86F908E22A8AF6E683B74245C1F5F81193;
// System.Action`1<Vuforia.TargetFinder/UpdateState>
struct Action_1_t2A0AF9B2D555659D37BD5E81A8AA03D210E86FF1;
// System.Action`1<Vuforia.TrackableBehaviour/StatusChangeResult>
struct Action_1_tE133B6E55A36D1C644478448C38E781E97126FF6;
// System.Action`1<Vuforia.TrackableBehaviour/StatusInfoChangeResult>
struct Action_1_t2D724ADB1158482C072F996CA5C4CE9836287B39;
// System.Action`1<System.Action`1<System.Boolean>>
struct Action_1_t0A1D155147899CABA28761FF8CB930DCCFC397E8;
// System.Action`1<System.Action>
struct Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<UnityEngine.Camera>
struct Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B;
// System.Action`1<UnityEngine.Camera[]>
struct Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806;
// System.Action`1<System.IntPtr>
struct Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`2<System.Single,System.Single>
struct Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget>
struct Dictionary_2_t7F6ACAFB4578BE7E8B0630B416C8E0BAB5D63DB1;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonBehaviour>
struct Dictionary_2_t8E5E18D70827F814B792829E403B2CA25982D74C;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Vuforia.EditorClasses.JSONNode>
struct Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78;
// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7;
// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct Dictionary_2_t3DD39B09291C43BD2CB85C9F8842571EBD8074C9;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<Vuforia.AMigratableVideoBackgroundConfigProperty,System.Boolean>
struct Func_2_t25A8EA4ACA6CB1FB7935AF72CA284A5E08FCE317;
// System.Func`2<Vuforia.DatasetTracker,System.Boolean>
struct Func_2_t392C02D2D7B822B7EB039B7F4440BBF3E1750251;
// System.Func`2<Vuforia.ImageTargetBehaviour,System.Boolean>
struct Func_2_t35A645761ADDE99214E4CCEE2C8D1562D24DE974;
// System.Func`2<Vuforia.TargetFinder,System.Boolean>
struct Func_2_t08A9ADDED063B85D3C6F831CEEB4B347E9A0C150;
// System.Func`2<Vuforia.TrackableBehaviour,System.Boolean>
struct Func_2_tFD9DECC6CEDD97B01E95BCEA536BCA4A90242803;
// System.Func`2<Vuforia.Tracker,System.Boolean>
struct Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00;
// System.Func`2<Vuforia.VuMarkBehaviour,System.Boolean>
struct Func_2_t38C959FBC45060C956895D2767475742A1565F62;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_t819EAA655CE583BE8193E53B879039D88F50634A;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_tEE35FE4B93ACE8EFEB0D974C70687CBDE1CC98A0;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackerData/TrackableResultData>
struct Func_2_tF9FB887A65474A87161A1DB458D424BD3CE45B55;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,System.Int32>
struct Func_2_t69BA50DA38815C88F3A0A56F56D7155EDB12E3AF;
// System.Func`2<Vuforia.TrackerData/VuMarkTargetResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_t7AF4F41BB7D909D8EF773D2011DA670B14992785;
// System.Func`2<Vuforia.TrackerData/VuMarkTargetResultData,Vuforia.TrackerData/VuMarkTargetResultData>
struct Func_2_t4533329413DE503A56FB3277B387756C79E2FA50;
// System.Func`2<Vuforia.TrackerData/VuMarkTargetResultData,System.Int32>
struct Func_2_t860223B8C2E94B18BA1074620ED7E9D048454B8E;
// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Func`2<System.String,System.Version>
struct Func_2_t24F69F1241A79EDF63F2672D3206FBC43C2D5262;
// System.Func`2<System.Type,Vuforia.Tracker>
struct Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2;
// System.Func`3<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.IWebCamTexAdaptor>
struct Func_3_t0B6550129D044D7B27433C3711291D76C07E2CFA;
// System.Func`3<System.String,System.Int32,System.String>
struct Func_3_t95320C96E280C93B89BF9EA9BAD21F1B51C4AC1F;
// System.Func`3<System.Version,System.Version,System.Boolean>
struct Func_3_t98C8B652D59F12D9B373C0873EDB9987611E8A8D;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.Version>
struct HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391;
// System.Collections.Generic.ICollection`1<Vuforia.AnchorBehaviour>
struct ICollection_1_tE29EAE2CFC6D72C5A44FEEBB448C753C9FDAD50A;
// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TargetFinder>>
struct ICollection_1_t1642D9D777672C3D3D3303F17CF71C30790BC427;
// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TargetFinder/InitState>>
struct ICollection_1_t1EBED37E776C66EF7478463453EC08DFB752C56E;
// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TargetFinder/TargetSearchResult>>
struct ICollection_1_t993B36AF25B4326A323CC6968608638751EE0E7B;
// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TargetFinder/UpdateState>>
struct ICollection_1_t5927DCAE4BFF4F94945D14497B73BF6DC0749717;
// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TrackableBehaviour/StatusChangeResult>>
struct ICollection_1_t957D8F557CCDD5D58D2737541F78766222D8D9D4;
// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TrackableBehaviour/StatusInfoChangeResult>>
struct ICollection_1_t4961EB54FCEC8F4640AC56ABAE604BA9E7D781E8;
// System.Collections.Generic.ICollection`1<System.Action`1<System.Boolean>>
struct ICollection_1_t19A605BD14E77CEF5623AB8EC9D14494CC88DEEA;
// System.Collections.Generic.IEnumerable`1<Vuforia.CommandBufferTextureDefinition>
struct IEnumerable_1_tE6206C644D970A2CA0D12D26ECA3B61635F11B57;
// System.Collections.Generic.IEnumerable`1<Vuforia.ObjectTarget>
struct IEnumerable_1_t19E72F4F89B9367848338225DEB7CF0637E6DFD0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerable`1<System.Version>
struct IEnumerable_1_t55B104F1F7254AA7426D3666CE63F759FE80E5D1;
// System.Collections.Generic.IEnumerator`1<Vuforia.EditorClasses.JSONNode>
struct IEnumerator_1_tD6318E8E5EFADECFC80CEF96D8E4C3BED6844C59;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Version>
struct IEqualityComparer_1_tD2282D16209559E1B4A971587FF19C7D53B8D6B1;
// System.Collections.Generic.IList`1<UnityEngine.Texture2D>
struct IList_1_t5CD9EA37E43846BC09645934C6379B100B15325A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.EditorClasses.JSONNode>
struct KeyCollection_tC66657A5AE86E82B6625B85B3C9B3D5AFD143CD3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>
struct KeyCollection_tC8C2501BDEA276A58EB1B776A71A5CCD8014C72C;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t45849831C7D8357F3A8C8F59050B4F6D8535199A;
// System.Collections.Generic.List`1<Vuforia.IObjectRecoEventHandler>
struct List_1_t034FCF34A98AC1E4A275576924C783B922343B00;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t5E86E01338D8FF6840035D3E0E7F0EC5525CDC3F;
// System.Collections.Generic.List`1<Vuforia.EditorClasses.JSONNode>
struct List_1_t87698B07D247495DD045F96620F11B9FE07473B9;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t60DF7EC96EEBE59608EFF34CE23C1B9AAF1CDC25;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Transform>
struct UnityEvent_1_tF63176C7516E6ECD13B8AF2684E42A6437349B3D;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.EditorClasses.JSONNode>
struct ValueCollection_tB685AB0B71823C9875B643031664865005C511DD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>
struct ValueCollection_t3DB0A9817FBBE91AE44F86784A1CE31CC127AC96;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Camera[]
struct CameraU5BU5D_tAF84B9EC9AF40F1B6294BCEBA82A1AD123A9D001;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Vuforia.EditorClasses.JSONNode>[]
struct EntryU5BU5D_t3D5B4F6BF553471B063B4B7C2085E6621EAFE94A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Vuforia.WebCamProfile/ProfileData>[]
struct EntryU5BU5D_t7A16FDA8078BC1A04CB2DE7CD925CF9517CB31D3;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Vuforia.EditorClasses.JSONNode[]
struct JSONNodeU5BU5D_tC1261523B1EB212F8734E82EFFBD8285E9DDFAFB;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.Collections.Generic.HashSet`1/Slot<System.Version>[]
struct SlotU5BU5D_tEB7075A73C4296F51199262656536CCB3BAF379C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
// Vuforia.TrackerData/TrackableResultData[]
struct TrackableResultDataU5BU5D_t7748EA908993162703714DE2DCF878C903A33A60;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// Vuforia.TrackerData/VirtualButtonData[]
struct VirtualButtonDataU5BU5D_t5CF3ACC5B148D3FD69E97E6418D342AC2575C6EB;
// Vuforia.TrackerData/VuMarkTargetData[]
struct VuMarkTargetDataU5BU5D_t7062002393AAA425C920A93605BE2FE0378B7937;
// Vuforia.TrackerData/VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t968E620BD487CD51963064373144BA11A4A403E8;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WebCamTexture
struct WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AreaTracker_t8071226BF023074830335EFFEB24D47E45D714B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t24F69F1241A79EDF63F2672D3206FBC43C2D5262_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalVars_t9BC2F6C729275A1A47758C9B846050AC3FE2FD82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayModeEditorUtility_t39FC0F38227370B3ACE37317DF19C1C5AA9D919F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITrackableEventHandler_t4C54E4C8CA7AE28F257712D1A3BA9546DB8A7993_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVuforiaWrapper_t73ACA4203751EF7AEDFA99EBD8A7BA9100B13363_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectTarget_t6E5B0275C082159F66B1879834E91CEBEE728465_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RawPtrVideoTextureUpdater_tB3912F83E47D692AD596ECDF4AFB9F799A31ADAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableResultDataU5BU5D_t7748EA908993162703714DE2DCF878C903A33A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Trackable_tFA1788D7399ADBB5067D5C92BAE319E02D0DC4FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualButtonDataU5BU5D_t5CF3ACC5B148D3FD69E97E6418D342AC2575C6EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuMarkTargetDataU5BU5D_t7062002393AAA425C920A93605BE2FE0378B7937_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuMarkTargetResultDataU5BU5D_t968E620BD487CD51963064373144BA11A4A403E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaWrapper_t98C450279288E425AED4E09C454B15FA816FA724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamTexAdaptor_tBA53CE26A2424E7D165C57C53246CC77BA8C9F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral197861696CD5E89F2838E06BFD9AC2ADBA1425C6;
IL2CPP_EXTERN_C String_t* _stringLiteral2623C9694AD5C956295C47EBBD9EA0BD437696B7;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4EFBE76A627DACC84AF7A2FC703573DC1B4EE41F;
IL2CPP_EXTERN_C String_t* _stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187;
IL2CPP_EXTERN_C String_t* _stringLiteral8AFF6FB8571DE2DFA3D5EC483D7D209D90AA53F0;
IL2CPP_EXTERN_C String_t* _stringLiteral8CF4F9BC7F51DEAA3FFC7DF9337B2BAB35DA5F54;
IL2CPP_EXTERN_C String_t* _stringLiteral91990DABEAF336AD834D412CBF8BA4DF935306D1;
IL2CPP_EXTERN_C String_t* _stringLiteralBEDF7892A254ADF90ABF5856512A230790CB64C1;
IL2CPP_EXTERN_C String_t* _stringLiteralBF0FE0C2A4D07B1801AF0EF5433861CE13A6E123;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A3AF7D8067F2156CDD2D54C51A7EF7D54C2C06;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE727A155B2B99EDAD35ACA5C43089CFECC3EB48A;
IL2CPP_EXTERN_C String_t* _stringLiteralED6317189EDF2D65968A72B77DFC11B4FCB322B8;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateHelper_InvokeWithExceptionHandling_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCC0889A0606B390534599AC1DC58034E544EA4CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateHelper_InvokeWithExceptionHandling_TisFrameQuality_tA05570432BB459EC5520225178110C0839B211DE_mA66019810DD3337670B7DEBF28E585FBDC641F3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateHelper_InvokeWithExceptionHandling_TisInitState_t6A1561C4216CD71C9104710CE8A931B9376689CF_m404FECFA6F3E28EBFF6AAF947FC14B0B8555A8DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateHelper_InvokeWithExceptionHandling_TisStatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174_m8496B66E27260F928CFD7799052CEC9FAD337E31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateHelper_InvokeWithExceptionHandling_TisStatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504_m4991D60623A500ED03B09CF41CF66753D1F0E9B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateHelper_InvokeWithExceptionHandling_TisTargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC_m8EFA0DBFE93C7060EB2961B2CEC75825A511AD23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateHelper_InvokeWithExceptionHandling_TisTargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320_m865B768E4E9A6EDB1ADD04EA3047F3A9E51C4AEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateHelper_InvokeWithExceptionHandling_TisTrackableSource_tA8649A889727AA9D7469846706286509D153417E_mD6945DF4C5301E2DA4502447710A02F6A48E9B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateHelper_InvokeWithExceptionHandling_TisUpdateState_t85155F6AF6764B6B91AD900EA0F84753466680A4_mD6045658F817C481B0DAF3484078BB6E0F8A1683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mE15A5338263B140F42AD19E03F4CBC46A6E6510A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisObjectTarget_t6E5B0275C082159F66B1879834E91CEBEE728465_m7A81BB1634CDB0F9A9D710F3D2F59ACFC70E61FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisVersion_tBDAEDED25425A1D09910468B8BD1759115646E3C_m6DD6825E089A09EA273F83DF9E79ECE5DF3E6680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m870ACB10F5D726DE21B533C861CA6FA3CFC4367F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m89F46A1ACC5ACEADED27E914406B90CF997CDA50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0A9DDD879A7CF0DF34E93EB27936533EB0AA3C18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m279B322EBB8E06A6E0A30CDA4FFC0B765DDCCE0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m107E20EE09A23DABD2F4E8982603812549A20360_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD69E384B09C34BF90611D6130124EB97A11B3DEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EulaRuntimeUtility_ConvertToMajorMinorVersion_m40376FF426AC28A5F258C1A96464A821E0E00F88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mFB5216A49D4F256F8A7795F244372E5342D4D44E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m85F98F6EB98EF602C551F89FFE1811E63AE4CA1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mD4780171A8FF45F1A0ECBA080CDA9E6D30B6087D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m901CC9F140983FA1493DFAD43415A664B146C05D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA9E2A3A8035A3A8BA25CD091DA12DA8DA51D8966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__12_System_Collections_IEnumerator_Reset_m6D115AB4269C0C8EE09EAF38B8ED7FA66959805C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__12_System_Collections_IEnumerator_Reset_mA8B0F5B211A72E2631E06DE697D4CB433A277BE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetChildOfVuforiaAnchorU3Ed__23_System_Collections_IEnumerator_Reset_m8DBA811AE48F14F1B3D52EED9E10FBBC14B1719F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowGuideViewAfterU3Ed__22_System_Collections_IEnumerator_Reset_m4CB5C4B91032B3465F23A15CEEAAA7802FB6CE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__11_System_Collections_IEnumerator_Reset_m364A14E8BE7221DE9E23B03C1406A9E1692CCF00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__11_System_Collections_IEnumerator_Reset_mC1C03920FB5F18B97E2D70B06D6100A439A6206B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cget_ChildrenU3Ed__17_System_Collections_IEnumerator_Reset_mF01DE22269428B61D809687D26607748F138DF8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m008B4FFEEC9A3795F6E37BAA9FC7A3DF3A4D84FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AreaTracker_t8071226BF023074830335EFFEB24D47E45D714B8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SmartTerrain_t465561CB4FF40E6CB2355629FB8AC51286663B14_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AnchorPositionConfirmedEvent__ctor_m9AD27E43AD7B6A83A97B3A71324E148EE65C1489_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericVuforiaConfiguration_IsUFOEnabled_m8B0077FA783DBB2241F16B83DE698B0B91061C1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericVuforiaConfiguration_ValidateScaleChange_m1BEDE66DF1A79C3745C60D424DB47437F29FD02A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericVuforiaConfiguration__ctor_m43FAF8BC4909441438668A7566E51941728153C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericVuforiaConfiguration_add_VirtualSceneScaleFactorUpdated_m6589C16DC53EBC3800CDF87E51532C0CAC429B78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericVuforiaConfiguration_get_VirtualSceneScaleFactor_m40330B89093D32ED3E386DFA6F9F8368D8D54074_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericVuforiaConfiguration_remove_VirtualSceneScaleFactorUpdated_m3A8020B427F20ACAC06D93B13F165D2E68B65CAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GenericVuforiaConfiguration_set_VirtualSceneScaleFactor_m3797791A385389EDEF4D66168841B7F805653D9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GetImageSizeAndDataDelegate_BeginInvoke_m7F3C97203D1E56A45643D4BF7DB9BD47F69A6214_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GlobalVars__cctor_m585000D3E7EEA2D54775926D4745AAFB41031723_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InputReceivedEvent__ctor_mACE7A759289287E5F02033B0BC0DF2C96EDA07A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvalidPathException__ctor_m125331AAD00F8821D7F81B239499AAA71994A93E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSetTargetSize_GetLargestSizeComponent_m23ACD84A721EDE733D20D6E041B06B89E43DD12E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSetTargetSize__ctor_m291BB79D4A0A025660105728334CFF2D131FB973_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NullPlayModeEditorUtility_GetEditorPrefsString_mE67B6E8258A2BB5673FDA45817BE4BA873CA1E2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NullPlayModeEditorUtility_GetEmulatorDatabasePath_mE0ABDC9E698E0DE2B1B4EB115BC9C0D103C8DEF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NullPlayModeEditorUtility_IsVuforiaActiveAndEULAAccepted_m4C2B78E0CB085DE17A8EF5E06484AD5ECB56E5DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NullUnityRenderPipeline_add_BeginCameraRendering_m36A837B1D923470A88E39E41AD3E1CC0B7FCC9EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NullUnityRenderPipeline_add_BeginFrameRendering_m919E85381C892C1D83B68FE5EA9C434F179A9094_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NullUnityRenderPipeline_remove_BeginCameraRendering_m29D4C04D82BFD4F782AA23D7CFD80D51B4899ED2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NullUnityRenderPipeline_remove_BeginFrameRendering_m61AEF5897932AD47D02665E23BF4A67DDC075531_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RenderEventBehaviour_add_PostRenderEvent_m5B9388C36D16A6EBC86237E4BC6C24D256016A14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RenderEventBehaviour_add_PreRenderEvent_m04FA587AAE5A32C4F05D4310DE1E15D45A9D3B67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RenderEventBehaviour_remove_PostRenderEvent_m6979361C98424D952BEFB98E47FC0811C93A578A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RenderEventBehaviour_remove_PreRenderEvent_m1F199B15B40674AC9CE3E395D00C4346ADE5E74C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__12_MoveNext_m39071F50F7E47A6D24412F3A80802A48A95C3DC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__12_MoveNext_m5A4099A16D133E9A5327A401DEB1BA1162563652_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__12_System_Collections_IEnumerator_Reset_m6D115AB4269C0C8EE09EAF38B8ED7FA66959805C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__12_System_Collections_IEnumerator_Reset_mA8B0F5B211A72E2631E06DE697D4CB433A277BE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__12_U3CU3Em__Finally1_m5F18310FDDED70E5E0B62EE53E6E85DA15B1C812_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__12_U3CU3Em__Finally1_m961700A36E855C18B05224B59267741CB343432C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSetChildOfVuforiaAnchorU3Ed__23_MoveNext_mA07C631CF078DA7245E7FD0A1F0B1F4EC926A8A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSetChildOfVuforiaAnchorU3Ed__23_System_Collections_IEnumerator_Reset_m8DBA811AE48F14F1B3D52EED9E10FBBC14B1719F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CShowGuideViewAfterU3Ed__22_MoveNext_m517454F0272F7D92B969DEE7DE651A6FCD767FE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CShowGuideViewAfterU3Ed__22_System_Collections_IEnumerator_Reset_m4CB5C4B91032B3465F23A15CEEAAA7802FB6CE7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CFindGroundPlaneImageTargetU3Eb__7_0_m1DF634F421FC2B728F6A54BF9B63D17A98CE75AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CFindGroundPlaneImageTargetU3Eb__7_1_m170C40BF1F32846212271D66A0FA4C6663241B99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CResetAnchorsU3Eb__12_0_m19096C41C28A618E9FE06F0FE93E5019864A6C7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CStartRecoU3Eb__22_0_m986986D923ABC1BB5D3AF1B36D076ACBD2066714_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CStopCameraIfPossibleU3Eb__34_1_mEC64E2309527134E0CA287CFA66DFE201C669713_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CStopRecoU3Eb__23_0_m7D0839D503BAA74086CE88FC6F7F1E62516B3E05_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CValidateKeysU3Eb__22_0_mDC792EFF55CF0460C96474E0D5BE3DE339BDB525_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CVersionGreaterOrEqualThanU3Eb__1_0_m0C443A818B62F89F11A959F00B39875780D2BA55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__5_0_mFA5CA4C4861B49048751BE330944BE2DB0D2446B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__5_1_m2DDEF409A4E2B9DB2A270028A2ECB0792A83F1CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__5_2_m0FE9DD61CA7C8E73DE6DBBEF53169D1A829181BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__5_3_mEE3A0506F4D9E3F3246F6F980BBF1611AD8463DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__5_4_m27C4E503904888ED934F8E950FA0E0604B309233_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__5_5_mF6EABE7D8E2CBFFF4EF3C5DA9913C14B3954C5F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__5_6_mD6F208C27DA1032EA8A1B87FCF86455A4E47C101_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__5_7_m26706E5885EBFCBAB1DDB0C26C8A8F2534210131_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_ctorU3Eb__6_0_mF08B2FBEFEB091EE519697BCBBE2C44D49230FB3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_ctorU3Eb__8_0_mA79F955A1BC02464014F562AEEDD285521666759_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_ctorU3Eb__8_1_m19C3A9C5C2BBF9B29FC24EE1338B7F81B3CB281F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_ctorU3Eb__8_3_mDCDDDC04CB2225FAD7DBE8F312DDC29EF6D38D6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_ctorU3Eb__8_4_m421F49ECB353AD5CF64F83736CE76B93479C7B3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_ctorU3Eb__8_5_m952E64AE261DF6D8838F008B9114426A888DA2D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass19_0_U3CSetupTextureUpdatingU3Eb__0_m79EC9003D21358626B3FF7C8FC637923037D79C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass21_0_U3CCheckInitializationU3Eb__0_m8D5330345141C15E9A8122929D66CC53CA3C611F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass21_0_U3CCheckInitializationU3Eb__1_m661202DC9D775C1A6B657F81D4C4397EA18B8276_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass25_0_U3CSetFrameQualityU3Eb__0_mA82A58809996FD55CE4A5819319638535BD69228_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass27_0_U3CUpdateU3Eb__0_m9ABC484D5D7A8358C0B7C23588D4E001FE28AF4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass33_0_U3CUpdateTrackableStatusU3Eb__0_mDD2EBB6FBBC5B69D0032D6D6AAE247078D34D1A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass33_0_U3CUpdateTrackableStatusU3Eb__1_m345FF5E5FE20F091EAD82DBF1748F6C8181221D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass34_0_U3CUpdateTrackableStatusInfoU3Eb__0_mC0ECA1D9FF78E9210355A048FC64BCA8EC7E65BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass39_0_U3CUpdateU3Eb__0_mD5944A3A1EA6E8C563CBF16936E9EDD91D7A9571_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass39_1_U3CUpdateU3Eb__1_m41DB1DC698A488464C9661FA7BA1BFE23796C416_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m05FB4658D8A34B3F748A65E5F432427BF59C22E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m120261617EA702FE2AB75A71672FE046A742ACE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m177A509DD4F5DD842C73C08B71C767D03F464EF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m35250DA5E2BC12D9EFA34393095BAF52ACF319A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m410DE3270D3520921AAB33D991A1BE9C5ED93488_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m8D812FDA4BF579590EC136301DFFE0E8A2D22620_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m910B0ABC1E7D7C6AD32FD39B29239DACBDE0F921_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m9BA95DAB19613307CE90632D03E51F7BAC5F3779_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m9F8A0296B9B1E86C8E15AB17D0DBAEE73A508EA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mBBD17C407E2F2A855C78E748934B1C56C8E10614_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mBF36071077D13757E36BBFD9582BB37185810A5F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mC79FF9846F38ED4D3F57115C970EE44ACA3A3E53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mD73DB2EB2863AF1DE7CF3B26C2A586101F14F7C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mD88D18B258B029B81A513F024BDC17F175203183_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mEA443FD50BEBF750DF60EBDACC4711D404F7D1CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mF7D80BE93DBBEA3FA2204539028B069DB20A778E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_ChildrenU3Ed__11_MoveNext_m8AE06E71CD0E851AE2FDD8C4CA69E619F63ED0EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_ChildrenU3Ed__11_MoveNext_mA3153D30EB175FDE399309D4E45C88FED7F12407_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_ChildrenU3Ed__11_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_m494985539C72399D42188C10E398586074AE170D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_ChildrenU3Ed__11_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_mF33903901BAAFB9B6DD1CC8C64F8C01443479EFF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_ChildrenU3Ed__11_System_Collections_IEnumerator_Reset_m364A14E8BE7221DE9E23B03C1406A9E1692CCF00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_ChildrenU3Ed__11_System_Collections_IEnumerator_Reset_mC1C03920FB5F18B97E2D70B06D6100A439A6206B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_ChildrenU3Ed__11_U3CU3Em__Finally1_m10097AA4522D11D416E5CCD90541B405C3BEBED4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_ChildrenU3Ed__11_U3CU3Em__Finally1_mEAFE4F38A6E3885C35443AF4305338BC3BC2986D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_ChildrenU3Ed__17_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_mDE88A651EC7EB4A66ECCEF7A5E5D448F3207533A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cget_ChildrenU3Ed__17_System_Collections_IEnumerator_Reset_mF01DE22269428B61D809687D26607748F138DF8A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VuMarkSetTargetSize_GetLargestSizeComponent_m4ABF40A336FE69395F694B99A30B890731D12029_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VuMarkSetTargetSize_GetSize_mCFAE858E13109BA73D0155E27383A408D293A15C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VuMarkSetTargetSize__ctor_m704C93B69EA346D889369193748839E8A9334CCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebCamConfiguration_get_DeviceNameSetInEditor_m4960A6E897BDE45219622204B886FDE158369490_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 ;
struct VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140 ;
struct VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7 ;
struct VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD ;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D;
struct TrackableResultDataU5BU5D_t7748EA908993162703714DE2DCF878C903A33A60;
struct VirtualButtonDataU5BU5D_t5CF3ACC5B148D3FD69E97E6418D342AC2575C6EB;
struct VuMarkTargetDataU5BU5D_t7062002393AAA425C920A93605BE2FE0378B7937;
struct VuMarkTargetResultDataU5BU5D_t968E620BD487CD51963064373144BA11A4A403E8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,Vuforia.EditorClasses.JSONNode>
struct  Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3D5B4F6BF553471B063B4B7C2085E6621EAFE94A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC66657A5AE86E82B6625B85B3C9B3D5AFD143CD3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB685AB0B71823C9875B643031664865005C511DD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78, ___entries_1)); }
	inline EntryU5BU5D_t3D5B4F6BF553471B063B4B7C2085E6621EAFE94A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3D5B4F6BF553471B063B4B7C2085E6621EAFE94A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3D5B4F6BF553471B063B4B7C2085E6621EAFE94A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78, ___keys_7)); }
	inline KeyCollection_tC66657A5AE86E82B6625B85B3C9B3D5AFD143CD3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC66657A5AE86E82B6625B85B3C9B3D5AFD143CD3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC66657A5AE86E82B6625B85B3C9B3D5AFD143CD3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78, ___values_8)); }
	inline ValueCollection_tB685AB0B71823C9875B643031664865005C511DD * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB685AB0B71823C9875B643031664865005C511DD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB685AB0B71823C9875B643031664865005C511DD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile_ProfileData>
struct  Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7A16FDA8078BC1A04CB2DE7CD925CF9517CB31D3* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC8C2501BDEA276A58EB1B776A71A5CCD8014C72C * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3DB0A9817FBBE91AE44F86784A1CE31CC127AC96 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7, ___entries_1)); }
	inline EntryU5BU5D_t7A16FDA8078BC1A04CB2DE7CD925CF9517CB31D3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7A16FDA8078BC1A04CB2DE7CD925CF9517CB31D3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7A16FDA8078BC1A04CB2DE7CD925CF9517CB31D3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7, ___keys_7)); }
	inline KeyCollection_tC8C2501BDEA276A58EB1B776A71A5CCD8014C72C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC8C2501BDEA276A58EB1B776A71A5CCD8014C72C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC8C2501BDEA276A58EB1B776A71A5CCD8014C72C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7, ___values_8)); }
	inline ValueCollection_t3DB0A9817FBBE91AE44F86784A1CE31CC127AC96 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3DB0A9817FBBE91AE44F86784A1CE31CC127AC96 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3DB0A9817FBBE91AE44F86784A1CE31CC127AC96 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Version>
struct  HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tEB7075A73C4296F51199262656536CCB3BAF379C* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391, ____slots_8)); }
	inline SlotU5BU5D_tEB7075A73C4296F51199262656536CCB3BAF379C* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tEB7075A73C4296F51199262656536CCB3BAF379C** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tEB7075A73C4296F51199262656536CCB3BAF379C* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct  List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7, ____items_1)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get__items_1() const { return ____items_1; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7_StaticFields, ____emptyArray_5)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Vuforia.EditorClasses.JSONNode>
struct  List_1_t87698B07D247495DD045F96620F11B9FE07473B9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JSONNodeU5BU5D_tC1261523B1EB212F8734E82EFFBD8285E9DDFAFB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t87698B07D247495DD045F96620F11B9FE07473B9, ____items_1)); }
	inline JSONNodeU5BU5D_tC1261523B1EB212F8734E82EFFBD8285E9DDFAFB* get__items_1() const { return ____items_1; }
	inline JSONNodeU5BU5D_tC1261523B1EB212F8734E82EFFBD8285E9DDFAFB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JSONNodeU5BU5D_tC1261523B1EB212F8734E82EFFBD8285E9DDFAFB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t87698B07D247495DD045F96620F11B9FE07473B9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t87698B07D247495DD045F96620F11B9FE07473B9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t87698B07D247495DD045F96620F11B9FE07473B9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t87698B07D247495DD045F96620F11B9FE07473B9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JSONNodeU5BU5D_tC1261523B1EB212F8734E82EFFBD8285E9DDFAFB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t87698B07D247495DD045F96620F11B9FE07473B9_StaticFields, ____emptyArray_5)); }
	inline JSONNodeU5BU5D_tC1261523B1EB212F8734E82EFFBD8285E9DDFAFB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JSONNodeU5BU5D_tC1261523B1EB212F8734E82EFFBD8285E9DDFAFB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JSONNodeU5BU5D_tC1261523B1EB212F8734E82EFFBD8285E9DDFAFB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
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

// System.Version
struct  Version_tBDAEDED25425A1D09910468B8BD1759115646E3C  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeparatorsArray_4), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
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

// Vuforia.AMigratableVideoBackgroundConfigProperty
struct  AMigratableVideoBackgroundConfigProperty_t4A9B28F84A13148720EC22B576D5197D535FEDC2  : public RuntimeObject
{
public:
	// Vuforia.VuforiaConfiguration_VideoBackgroundConfiguration Vuforia.AMigratableVideoBackgroundConfigProperty::Config
	VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A * ___Config_0;

public:
	inline static int32_t get_offset_of_Config_0() { return static_cast<int32_t>(offsetof(AMigratableVideoBackgroundConfigProperty_t4A9B28F84A13148720EC22B576D5197D535FEDC2, ___Config_0)); }
	inline VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A * get_Config_0() const { return ___Config_0; }
	inline VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A ** get_address_of_Config_0() { return &___Config_0; }
	inline void set_Config_0(VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A * value)
	{
		___Config_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Config_0), (void*)value);
	}
};


// Vuforia.ARController
struct  ARController_t2B4A0C456A94DC12CB93E7F1C5C5A0CECA2363E2  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t9219CF551CEF41D29CC61DC13005F973DC4A254F * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_t2B4A0C456A94DC12CB93E7F1C5C5A0CECA2363E2, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t9219CF551CEF41D29CC61DC13005F973DC4A254F * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t9219CF551CEF41D29CC61DC13005F973DC4A254F ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t9219CF551CEF41D29CC61DC13005F973DC4A254F * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuforiaBehaviour_0), (void*)value);
	}
};


// Vuforia.AValidatableConfigProperty
struct  AValidatableConfigProperty_tC001220DBA97538D52ACDF63B14E5163219D2B12  : public RuntimeObject
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.AValidatableConfigProperty::Config
	VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF * ___Config_0;
	// Vuforia.ConfigDefaultProvider Vuforia.AValidatableConfigProperty::DefaultProvider
	ConfigDefaultProvider_tDE3EAB8B25E95F66B20A7ABCC57F0D7ADF5AD3B3 * ___DefaultProvider_1;

public:
	inline static int32_t get_offset_of_Config_0() { return static_cast<int32_t>(offsetof(AValidatableConfigProperty_tC001220DBA97538D52ACDF63B14E5163219D2B12, ___Config_0)); }
	inline VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF * get_Config_0() const { return ___Config_0; }
	inline VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF ** get_address_of_Config_0() { return &___Config_0; }
	inline void set_Config_0(VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF * value)
	{
		___Config_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Config_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultProvider_1() { return static_cast<int32_t>(offsetof(AValidatableConfigProperty_tC001220DBA97538D52ACDF63B14E5163219D2B12, ___DefaultProvider_1)); }
	inline ConfigDefaultProvider_tDE3EAB8B25E95F66B20A7ABCC57F0D7ADF5AD3B3 * get_DefaultProvider_1() const { return ___DefaultProvider_1; }
	inline ConfigDefaultProvider_tDE3EAB8B25E95F66B20A7ABCC57F0D7ADF5AD3B3 ** get_address_of_DefaultProvider_1() { return &___DefaultProvider_1; }
	inline void set_DefaultProvider_1(ConfigDefaultProvider_tDE3EAB8B25E95F66B20A7ABCC57F0D7ADF5AD3B3 * value)
	{
		___DefaultProvider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultProvider_1), (void*)value);
	}
};


// Vuforia.CommandBufferTextureDefinitionsProvider_<>c
struct  U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD_StaticFields
{
public:
	// Vuforia.CommandBufferTextureDefinitionsProvider_<>c Vuforia.CommandBufferTextureDefinitionsProvider_<>c::<>9
	U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Vuforia.CommandBufferVideoTextureUpdater_<>c__DisplayClass22_0
struct  U3CU3Ec__DisplayClass22_0_t06ACBAA1DAA0750BA0C8E1A4D9D9A53430B4BFFE  : public RuntimeObject
{
public:
	// System.String Vuforia.CommandBufferVideoTextureUpdater_<>c__DisplayClass22_0::keyword
	String_t* ___keyword_0;

public:
	inline static int32_t get_offset_of_keyword_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t06ACBAA1DAA0750BA0C8E1A4D9D9A53430B4BFFE, ___keyword_0)); }
	inline String_t* get_keyword_0() const { return ___keyword_0; }
	inline String_t** get_address_of_keyword_0() { return &___keyword_0; }
	inline void set_keyword_0(String_t* value)
	{
		___keyword_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_0), (void*)value);
	}
};


// Vuforia.ContentPositioningBehaviour_<>c__DisplayClass10_0
struct  U3CU3Ec__DisplayClass10_0_t49926E8D82024754620CFBFAA0A14BADBD7E07C2  : public RuntimeObject
{
public:
	// Vuforia.ContentPositioningBehaviour Vuforia.ContentPositioningBehaviour_<>c__DisplayClass10_0::<>4__this
	ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630 * ___U3CU3E4__this_0;
	// Vuforia.HitTestResult Vuforia.ContentPositioningBehaviour_<>c__DisplayClass10_0::hitTestResult
	HitTestResult_t94D92389FD79AEEA1E370E6C25024A1EC996A21D * ___hitTestResult_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t49926E8D82024754620CFBFAA0A14BADBD7E07C2, ___U3CU3E4__this_0)); }
	inline ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_hitTestResult_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t49926E8D82024754620CFBFAA0A14BADBD7E07C2, ___hitTestResult_1)); }
	inline HitTestResult_t94D92389FD79AEEA1E370E6C25024A1EC996A21D * get_hitTestResult_1() const { return ___hitTestResult_1; }
	inline HitTestResult_t94D92389FD79AEEA1E370E6C25024A1EC996A21D ** get_address_of_hitTestResult_1() { return &___hitTestResult_1; }
	inline void set_hitTestResult_1(HitTestResult_t94D92389FD79AEEA1E370E6C25024A1EC996A21D * value)
	{
		___hitTestResult_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitTestResult_1), (void*)value);
	}
};


// Vuforia.ContentPositioningBehaviour_<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_t4CB6EF0E390D91E46BD8FC88F2CB31C30C4B5D19  : public RuntimeObject
{
public:
	// Vuforia.Anchor Vuforia.ContentPositioningBehaviour_<>c__DisplayClass13_0::anchor
	RuntimeObject* ___anchor_0;

public:
	inline static int32_t get_offset_of_anchor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t4CB6EF0E390D91E46BD8FC88F2CB31C30C4B5D19, ___anchor_0)); }
	inline RuntimeObject* get_anchor_0() const { return ___anchor_0; }
	inline RuntimeObject** get_address_of_anchor_0() { return &___anchor_0; }
	inline void set_anchor_0(RuntimeObject* value)
	{
		___anchor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchor_0), (void*)value);
	}
};


// Vuforia.ContentPositioningBehaviour_<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_t1DB6F31870E50A5FA504FBBE5C2956D8BA8CD753  : public RuntimeObject
{
public:
	// Vuforia.ContentPositioningBehaviour Vuforia.ContentPositioningBehaviour_<>c__DisplayClass9_0::<>4__this
	ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630 * ___U3CU3E4__this_0;
	// UnityEngine.Transform Vuforia.ContentPositioningBehaviour_<>c__DisplayClass9_0::pose
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___pose_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t1DB6F31870E50A5FA504FBBE5C2956D8BA8CD753, ___U3CU3E4__this_0)); }
	inline ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_pose_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t1DB6F31870E50A5FA504FBBE5C2956D8BA8CD753, ___pose_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_pose_1() const { return ___pose_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_pose_1() { return &___pose_1; }
	inline void set_pose_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___pose_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pose_1), (void*)value);
	}
};


// Vuforia.DefaultConfigValidator_<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_tAA3C5E97930B341D0A95B0E76FF44312DD8BBE88  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.DefaultConfigValidator_<>c__DisplayClass2_0::res
	bool ___res_0;

public:
	inline static int32_t get_offset_of_res_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tAA3C5E97930B341D0A95B0E76FF44312DD8BBE88, ___res_0)); }
	inline bool get_res_0() const { return ___res_0; }
	inline bool* get_address_of_res_0() { return &___res_0; }
	inline void set_res_0(bool value)
	{
		___res_0 = value;
	}
};


// Vuforia.EditorClasses.JSONNode_<get_Children>d__17
struct  U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.EditorClasses.JSONNode_<get_Children>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Vuforia.EditorClasses.JSONNode Vuforia.EditorClasses.JSONNode_<get_Children>d__17::<>2__current
	JSONNode_t2AC73352107C87692E5E6508C959400504495752 * ___U3CU3E2__current_1;
	// System.Int32 Vuforia.EditorClasses.JSONNode_<get_Children>d__17::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C, ___U3CU3E2__current_1)); }
	inline JSONNode_t2AC73352107C87692E5E6508C959400504495752 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JSONNode_t2AC73352107C87692E5E6508C959400504495752 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JSONNode_t2AC73352107C87692E5E6508C959400504495752 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}
};


// Vuforia.EulaRuntimeUtility
struct  EulaRuntimeUtility_tA48CB061CCCAC556F63F497EA1CFA44AB49D33DD  : public RuntimeObject
{
public:

public:
};


// Vuforia.GLTFExtractorUtility_<>c
struct  U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0_StaticFields
{
public:
	// Vuforia.GLTFExtractorUtility_<>c Vuforia.GLTFExtractorUtility_<>c::<>9
	U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> Vuforia.GLTFExtractorUtility_<>c::<>9__22_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__22_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0_StaticFields, ___U3CU3E9__22_0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__22_0_1() const { return ___U3CU3E9__22_0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__22_0_1() { return &___U3CU3E9__22_0_1; }
	inline void set_U3CU3E9__22_0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__22_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_0_1), (void*)value);
	}
};


// Vuforia.GuideViewRenderingBehaviour_<SetChildOfVuforiaAnchor>d__23
struct  U3CSetChildOfVuforiaAnchorU3Ed__23_tDEF494FDCF285E467D968D04E98E4130FCB9C059  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.GuideViewRenderingBehaviour_<SetChildOfVuforiaAnchor>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.GuideViewRenderingBehaviour_<SetChildOfVuforiaAnchor>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Vuforia.GuideViewRenderingBehaviour Vuforia.GuideViewRenderingBehaviour_<SetChildOfVuforiaAnchor>d__23::<>4__this
	GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetChildOfVuforiaAnchorU3Ed__23_tDEF494FDCF285E467D968D04E98E4130FCB9C059, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSetChildOfVuforiaAnchorU3Ed__23_tDEF494FDCF285E467D968D04E98E4130FCB9C059, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSetChildOfVuforiaAnchorU3Ed__23_tDEF494FDCF285E467D968D04E98E4130FCB9C059, ___U3CU3E4__this_2)); }
	inline GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Vuforia.GuideViewRenderingBehaviour_<ShowGuideViewAfter>d__22
struct  U3CShowGuideViewAfterU3Ed__22_tB8EDACC2BB30E91FCA948474008250B4E509C911  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.GuideViewRenderingBehaviour_<ShowGuideViewAfter>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.GuideViewRenderingBehaviour_<ShowGuideViewAfter>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Vuforia.GuideViewRenderingBehaviour_<ShowGuideViewAfter>d__22::seconds
	float ___seconds_2;
	// Vuforia.GuideViewRenderingBehaviour Vuforia.GuideViewRenderingBehaviour_<ShowGuideViewAfter>d__22::<>4__this
	GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowGuideViewAfterU3Ed__22_tB8EDACC2BB30E91FCA948474008250B4E509C911, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowGuideViewAfterU3Ed__22_tB8EDACC2BB30E91FCA948474008250B4E509C911, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_seconds_2() { return static_cast<int32_t>(offsetof(U3CShowGuideViewAfterU3Ed__22_tB8EDACC2BB30E91FCA948474008250B4E509C911, ___seconds_2)); }
	inline float get_seconds_2() const { return ___seconds_2; }
	inline float* get_address_of_seconds_2() { return &___seconds_2; }
	inline void set_seconds_2(float value)
	{
		___seconds_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CShowGuideViewAfterU3Ed__22_tB8EDACC2BB30E91FCA948474008250B4E509C911, ___U3CU3E4__this_3)); }
	inline GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Vuforia.NativeVideoTextureUpdater
struct  NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8  : public RuntimeObject
{
public:
	// UnityEngine.Camera Vuforia.NativeVideoTextureUpdater::mCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mCamera_0;
	// Vuforia.BackgroundPlaneBehaviour Vuforia.NativeVideoTextureUpdater::mBgPlaneBehaviour
	BackgroundPlaneBehaviour_tF077FD37FA77B17A9BE8A8532D03EF334C008C59 * ___mBgPlaneBehaviour_1;
	// UnityEngine.Material Vuforia.NativeVideoTextureUpdater::mVideoBackgroundMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mVideoBackgroundMaterial_2;
	// Vuforia.IUnityRenderEventBroadcaster Vuforia.NativeVideoTextureUpdater::mRenderEventBroadcaster
	RuntimeObject* ___mRenderEventBroadcaster_3;
	// System.Action`1<System.IntPtr> Vuforia.NativeVideoTextureUpdater::mNativeTextureCreationCallback
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * ___mNativeTextureCreationCallback_6;
	// System.Int32 Vuforia.NativeVideoTextureUpdater::mScheduledBgPlaneUpdates
	int32_t ___mScheduledBgPlaneUpdates_7;

public:
	inline static int32_t get_offset_of_mCamera_0() { return static_cast<int32_t>(offsetof(NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8, ___mCamera_0)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mCamera_0() const { return ___mCamera_0; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mCamera_0() { return &___mCamera_0; }
	inline void set_mCamera_0(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mCamera_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCamera_0), (void*)value);
	}

	inline static int32_t get_offset_of_mBgPlaneBehaviour_1() { return static_cast<int32_t>(offsetof(NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8, ___mBgPlaneBehaviour_1)); }
	inline BackgroundPlaneBehaviour_tF077FD37FA77B17A9BE8A8532D03EF334C008C59 * get_mBgPlaneBehaviour_1() const { return ___mBgPlaneBehaviour_1; }
	inline BackgroundPlaneBehaviour_tF077FD37FA77B17A9BE8A8532D03EF334C008C59 ** get_address_of_mBgPlaneBehaviour_1() { return &___mBgPlaneBehaviour_1; }
	inline void set_mBgPlaneBehaviour_1(BackgroundPlaneBehaviour_tF077FD37FA77B17A9BE8A8532D03EF334C008C59 * value)
	{
		___mBgPlaneBehaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBgPlaneBehaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundMaterial_2() { return static_cast<int32_t>(offsetof(NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8, ___mVideoBackgroundMaterial_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_mVideoBackgroundMaterial_2() const { return ___mVideoBackgroundMaterial_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_mVideoBackgroundMaterial_2() { return &___mVideoBackgroundMaterial_2; }
	inline void set_mVideoBackgroundMaterial_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___mVideoBackgroundMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVideoBackgroundMaterial_2), (void*)value);
	}

	inline static int32_t get_offset_of_mRenderEventBroadcaster_3() { return static_cast<int32_t>(offsetof(NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8, ___mRenderEventBroadcaster_3)); }
	inline RuntimeObject* get_mRenderEventBroadcaster_3() const { return ___mRenderEventBroadcaster_3; }
	inline RuntimeObject** get_address_of_mRenderEventBroadcaster_3() { return &___mRenderEventBroadcaster_3; }
	inline void set_mRenderEventBroadcaster_3(RuntimeObject* value)
	{
		___mRenderEventBroadcaster_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRenderEventBroadcaster_3), (void*)value);
	}

	inline static int32_t get_offset_of_mNativeTextureCreationCallback_6() { return static_cast<int32_t>(offsetof(NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8, ___mNativeTextureCreationCallback_6)); }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * get_mNativeTextureCreationCallback_6() const { return ___mNativeTextureCreationCallback_6; }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 ** get_address_of_mNativeTextureCreationCallback_6() { return &___mNativeTextureCreationCallback_6; }
	inline void set_mNativeTextureCreationCallback_6(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * value)
	{
		___mNativeTextureCreationCallback_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNativeTextureCreationCallback_6), (void*)value);
	}

	inline static int32_t get_offset_of_mScheduledBgPlaneUpdates_7() { return static_cast<int32_t>(offsetof(NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8, ___mScheduledBgPlaneUpdates_7)); }
	inline int32_t get_mScheduledBgPlaneUpdates_7() const { return ___mScheduledBgPlaneUpdates_7; }
	inline int32_t* get_address_of_mScheduledBgPlaneUpdates_7() { return &___mScheduledBgPlaneUpdates_7; }
	inline void set_mScheduledBgPlaneUpdates_7(int32_t value)
	{
		___mScheduledBgPlaneUpdates_7 = value;
	}
};

struct NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8_StaticFields
{
public:
	// System.Int32 Vuforia.NativeVideoTextureUpdater::sFrameCounter
	int32_t ___sFrameCounter_4;
	// System.Int32 Vuforia.NativeVideoTextureUpdater::sRenderCounter
	int32_t ___sRenderCounter_5;

public:
	inline static int32_t get_offset_of_sFrameCounter_4() { return static_cast<int32_t>(offsetof(NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8_StaticFields, ___sFrameCounter_4)); }
	inline int32_t get_sFrameCounter_4() const { return ___sFrameCounter_4; }
	inline int32_t* get_address_of_sFrameCounter_4() { return &___sFrameCounter_4; }
	inline void set_sFrameCounter_4(int32_t value)
	{
		___sFrameCounter_4 = value;
	}

	inline static int32_t get_offset_of_sRenderCounter_5() { return static_cast<int32_t>(offsetof(NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8_StaticFields, ___sRenderCounter_5)); }
	inline int32_t get_sRenderCounter_5() const { return ___sRenderCounter_5; }
	inline int32_t* get_address_of_sRenderCounter_5() { return &___sRenderCounter_5; }
	inline void set_sRenderCounter_5(int32_t value)
	{
		___sRenderCounter_5 = value;
	}
};


// Vuforia.NativeVideoTextureUpdater_<>c__DisplayClass23_0
struct  U3CU3Ec__DisplayClass23_0_tF049671C4B40C93A49C2B7AC6173F621F501D8AB  : public RuntimeObject
{
public:
	// Vuforia.NativeVideoTextureUpdater Vuforia.NativeVideoTextureUpdater_<>c__DisplayClass23_0::<>4__this
	NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8 * ___U3CU3E4__this_0;
	// System.Int32 Vuforia.NativeVideoTextureUpdater_<>c__DisplayClass23_0::width
	int32_t ___width_1;
	// System.Int32 Vuforia.NativeVideoTextureUpdater_<>c__DisplayClass23_0::height
	int32_t ___height_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_tF049671C4B40C93A49C2B7AC6173F621F501D8AB, ___U3CU3E4__this_0)); }
	inline NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_tF049671C4B40C93A49C2B7AC6173F621F501D8AB, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_tF049671C4B40C93A49C2B7AC6173F621F501D8AB, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}
};


// Vuforia.ObjectRecoBehaviour_<>c
struct  U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993_StaticFields
{
public:
	// Vuforia.ObjectRecoBehaviour_<>c Vuforia.ObjectRecoBehaviour_<>c::<>9
	U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993 * ___U3CU3E9_0;
	// System.Action`1<System.Action`1<System.Boolean>> Vuforia.ObjectRecoBehaviour_<>c::<>9__22_0
	Action_1_t0A1D155147899CABA28761FF8CB930DCCFC397E8 * ___U3CU3E9__22_0_1;
	// System.Action`1<System.Action`1<System.Boolean>> Vuforia.ObjectRecoBehaviour_<>c::<>9__23_0
	Action_1_t0A1D155147899CABA28761FF8CB930DCCFC397E8 * ___U3CU3E9__23_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993_StaticFields, ___U3CU3E9__22_0_1)); }
	inline Action_1_t0A1D155147899CABA28761FF8CB930DCCFC397E8 * get_U3CU3E9__22_0_1() const { return ___U3CU3E9__22_0_1; }
	inline Action_1_t0A1D155147899CABA28761FF8CB930DCCFC397E8 ** get_address_of_U3CU3E9__22_0_1() { return &___U3CU3E9__22_0_1; }
	inline void set_U3CU3E9__22_0_1(Action_1_t0A1D155147899CABA28761FF8CB930DCCFC397E8 * value)
	{
		___U3CU3E9__22_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__23_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993_StaticFields, ___U3CU3E9__23_0_2)); }
	inline Action_1_t0A1D155147899CABA28761FF8CB930DCCFC397E8 * get_U3CU3E9__23_0_2() const { return ___U3CU3E9__23_0_2; }
	inline Action_1_t0A1D155147899CABA28761FF8CB930DCCFC397E8 ** get_address_of_U3CU3E9__23_0_2() { return &___U3CU3E9__23_0_2; }
	inline void set_U3CU3E9__23_0_2(Action_1_t0A1D155147899CABA28761FF8CB930DCCFC397E8 * value)
	{
		___U3CU3E9__23_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__23_0_2), (void*)value);
	}
};


// Vuforia.ObjectRecoBehaviour_<>c__DisplayClass39_1
struct  U3CU3Ec__DisplayClass39_1_t8E98E48D7BDFFBBC73D4590FABF40BD849A4BF4C  : public RuntimeObject
{
public:
	// Vuforia.TargetFinder_TargetSearchResult Vuforia.ObjectRecoBehaviour_<>c__DisplayClass39_1::targetSearchResult
	TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320 * ___targetSearchResult_0;

public:
	inline static int32_t get_offset_of_targetSearchResult_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass39_1_t8E98E48D7BDFFBBC73D4590FABF40BD849A4BF4C, ___targetSearchResult_0)); }
	inline TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320 * get_targetSearchResult_0() const { return ___targetSearchResult_0; }
	inline TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320 ** get_address_of_targetSearchResult_0() { return &___targetSearchResult_0; }
	inline void set_targetSearchResult_0(TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320 * value)
	{
		___targetSearchResult_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetSearchResult_0), (void*)value);
	}
};


// Vuforia.PlaneFinderBehaviour_<>c__DisplayClass29_0
struct  U3CU3Ec__DisplayClass29_0_tE1C4D37CDB86BFB78E6E0EA8668F2A436EB1C5F7  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.PlaneFinderBehaviour_<>c__DisplayClass29_0::isVisible
	bool ___isVisible_0;

public:
	inline static int32_t get_offset_of_isVisible_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_tE1C4D37CDB86BFB78E6E0EA8668F2A436EB1C5F7, ___isVisible_0)); }
	inline bool get_isVisible_0() const { return ___isVisible_0; }
	inline bool* get_address_of_isVisible_0() { return &___isVisible_0; }
	inline void set_isVisible_0(bool value)
	{
		___isVisible_0 = value;
	}
};


// Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility
struct  NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0  : public RuntimeObject
{
public:

public:
};


// Vuforia.PlaymodeSmartTerrainImpl_<>c
struct  U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E_StaticFields
{
public:
	// Vuforia.PlaymodeSmartTerrainImpl_<>c Vuforia.PlaymodeSmartTerrainImpl_<>c::<>9
	U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E * ___U3CU3E9_0;
	// System.Func`2<Vuforia.TrackableBehaviour,System.Boolean> Vuforia.PlaymodeSmartTerrainImpl_<>c::<>9__7_0
	Func_2_tFD9DECC6CEDD97B01E95BCEA536BCA4A90242803 * ___U3CU3E9__7_0_1;
	// System.Func`2<Vuforia.ImageTargetBehaviour,System.Boolean> Vuforia.PlaymodeSmartTerrainImpl_<>c::<>9__7_1
	Func_2_t35A645761ADDE99214E4CCEE2C8D1562D24DE974 * ___U3CU3E9__7_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_2_tFD9DECC6CEDD97B01E95BCEA536BCA4A90242803 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_2_tFD9DECC6CEDD97B01E95BCEA536BCA4A90242803 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_2_tFD9DECC6CEDD97B01E95BCEA536BCA4A90242803 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E_StaticFields, ___U3CU3E9__7_1_2)); }
	inline Func_2_t35A645761ADDE99214E4CCEE2C8D1562D24DE974 * get_U3CU3E9__7_1_2() const { return ___U3CU3E9__7_1_2; }
	inline Func_2_t35A645761ADDE99214E4CCEE2C8D1562D24DE974 ** get_address_of_U3CU3E9__7_1_2() { return &___U3CU3E9__7_1_2; }
	inline void set_U3CU3E9__7_1_2(Func_2_t35A645761ADDE99214E4CCEE2C8D1562D24DE974 * value)
	{
		___U3CU3E9__7_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_1_2), (void*)value);
	}
};


// Vuforia.PositionalDeviceTrackerImpl_<>c
struct  U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152_StaticFields
{
public:
	// Vuforia.PositionalDeviceTrackerImpl_<>c Vuforia.PositionalDeviceTrackerImpl_<>c::<>9
	U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152 * ___U3CU3E9_0;
	// System.Func`2<Vuforia.TrackableBehaviour,System.Boolean> Vuforia.PositionalDeviceTrackerImpl_<>c::<>9__12_0
	Func_2_tFD9DECC6CEDD97B01E95BCEA536BCA4A90242803 * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_2_tFD9DECC6CEDD97B01E95BCEA536BCA4A90242803 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_2_tFD9DECC6CEDD97B01E95BCEA536BCA4A90242803 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_2_tFD9DECC6CEDD97B01E95BCEA536BCA4A90242803 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// Vuforia.PosixPath_<>c
struct  U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7_StaticFields
{
public:
	// Vuforia.PosixPath_<>c Vuforia.PosixPath_<>c::<>9
	U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> Vuforia.PosixPath_<>c::<>9__1_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__1_0_1;
	// System.Func`3<System.String,System.Int32,System.String> Vuforia.PosixPath_<>c::<>9__1_1
	Func_3_t95320C96E280C93B89BF9EA9BAD21F1B51C4AC1F * ___U3CU3E9__1_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7_StaticFields, ___U3CU3E9__1_1_2)); }
	inline Func_3_t95320C96E280C93B89BF9EA9BAD21F1B51C4AC1F * get_U3CU3E9__1_1_2() const { return ___U3CU3E9__1_1_2; }
	inline Func_3_t95320C96E280C93B89BF9EA9BAD21F1B51C4AC1F ** get_address_of_U3CU3E9__1_1_2() { return &___U3CU3E9__1_1_2; }
	inline void set_U3CU3E9__1_1_2(Func_3_t95320C96E280C93B89BF9EA9BAD21F1B51C4AC1F * value)
	{
		___U3CU3E9__1_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_1_2), (void*)value);
	}
};


// Vuforia.PremiumObjectFactory_NullPremiumObjectFactory
struct  NullPremiumObjectFactory_t5638116D579E4E9C80CEEE46590F2E7BD78579E7  : public RuntimeObject
{
public:

public:
};


// Vuforia.RawPtrVideoTextureUpdater_<>c
struct  U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970_StaticFields
{
public:
	// Vuforia.RawPtrVideoTextureUpdater_<>c Vuforia.RawPtrVideoTextureUpdater_<>c::<>9
	U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970 * ___U3CU3E9_0;
	// System.Action Vuforia.RawPtrVideoTextureUpdater_<>c::<>9__12_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__12_0_1;
	// System.Action Vuforia.RawPtrVideoTextureUpdater_<>c::<>9__17_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__17_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970_StaticFields, ___U3CU3E9__17_0_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__17_0_2() const { return ___U3CU3E9__17_0_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__17_0_2() { return &___U3CU3E9__17_0_2; }
	inline void set_U3CU3E9__17_0_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__17_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__17_0_2), (void*)value);
	}
};


// Vuforia.RawPtrVideoTextureUpdater_<>c__DisplayClass21_0
struct  U3CU3Ec__DisplayClass21_0_tCFBDD0F50D634408912B341E1DF83CEBFC681F56  : public RuntimeObject
{
public:
	// System.String Vuforia.RawPtrVideoTextureUpdater_<>c__DisplayClass21_0::keyword
	String_t* ___keyword_0;

public:
	inline static int32_t get_offset_of_keyword_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_tCFBDD0F50D634408912B341E1DF83CEBFC681F56, ___keyword_0)); }
	inline String_t* get_keyword_0() const { return ___keyword_0; }
	inline String_t** get_address_of_keyword_0() { return &___keyword_0; }
	inline void set_keyword_0(String_t* value)
	{
		___keyword_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_0), (void*)value);
	}
};


// Vuforia.StateManager_<>c
struct  U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_StaticFields
{
public:
	// Vuforia.StateManager_<>c Vuforia.StateManager_<>c::<>9
	U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * ___U3CU3E9_0;
	// System.Func`2<Vuforia.DatasetTracker,System.Boolean> Vuforia.StateManager_<>c::<>9__12_0
	Func_2_t392C02D2D7B822B7EB039B7F4440BBF3E1750251 * ___U3CU3E9__12_0_1;
	// System.Func`2<Vuforia.VuMarkBehaviour,System.Boolean> Vuforia.StateManager_<>c::<>9__28_0
	Func_2_t38C959FBC45060C956895D2767475742A1565F62 * ___U3CU3E9__28_0_2;
	// System.Func`2<Vuforia.TrackerData_VuMarkTargetResultData,System.Int32> Vuforia.StateManager_<>c::<>9__28_1
	Func_2_t860223B8C2E94B18BA1074620ED7E9D048454B8E * ___U3CU3E9__28_1_3;
	// System.Func`2<Vuforia.TrackerData_VuMarkTargetResultData,Vuforia.TrackerData_VuMarkTargetResultData> Vuforia.StateManager_<>c::<>9__28_2
	Func_2_t4533329413DE503A56FB3277B387756C79E2FA50 * ___U3CU3E9__28_2_4;
	// System.Func`2<Vuforia.TrackerData_VuMarkTargetResultData,Vuforia.TrackableBehaviour_Status> Vuforia.StateManager_<>c::<>9__28_3
	Func_2_t7AF4F41BB7D909D8EF773D2011DA670B14992785 * ___U3CU3E9__28_3_5;
	// System.Func`2<Vuforia.TrackableBehaviour,System.Boolean> Vuforia.StateManager_<>c::<>9__29_0
	Func_2_tFD9DECC6CEDD97B01E95BCEA536BCA4A90242803 * ___U3CU3E9__29_0_6;
	// System.Func`2<Vuforia.TrackerData_TrackableResultData,System.Int32> Vuforia.StateManager_<>c::<>9__29_1
	Func_2_t69BA50DA38815C88F3A0A56F56D7155EDB12E3AF * ___U3CU3E9__29_1_7;
	// System.Func`2<Vuforia.TrackerData_TrackableResultData,Vuforia.TrackerData_TrackableResultData> Vuforia.StateManager_<>c::<>9__29_2
	Func_2_tF9FB887A65474A87161A1DB458D424BD3CE45B55 * ___U3CU3E9__29_2_8;
	// System.Func`2<Vuforia.TrackerData_TrackableResultData,Vuforia.TrackableBehaviour_Status> Vuforia.StateManager_<>c::<>9__29_3
	Func_2_t819EAA655CE583BE8193E53B879039D88F50634A * ___U3CU3E9__29_3_9;
	// System.Func`2<Vuforia.TrackerData_TrackableResultData,Vuforia.TrackableBehaviour_StatusInfo> Vuforia.StateManager_<>c::<>9__29_4
	Func_2_tEE35FE4B93ACE8EFEB0D974C70687CBDE1CC98A0 * ___U3CU3E9__29_4_10;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_2_t392C02D2D7B822B7EB039B7F4440BBF3E1750251 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_2_t392C02D2D7B822B7EB039B7F4440BBF3E1750251 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_2_t392C02D2D7B822B7EB039B7F4440BBF3E1750251 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_StaticFields, ___U3CU3E9__28_0_2)); }
	inline Func_2_t38C959FBC45060C956895D2767475742A1565F62 * get_U3CU3E9__28_0_2() const { return ___U3CU3E9__28_0_2; }
	inline Func_2_t38C959FBC45060C956895D2767475742A1565F62 ** get_address_of_U3CU3E9__28_0_2() { return &___U3CU3E9__28_0_2; }
	inline void set_U3CU3E9__28_0_2(Func_2_t38C959FBC45060C956895D2767475742A1565F62 * value)
	{
		___U3CU3E9__28_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_StaticFields, ___U3CU3E9__28_1_3)); }
	inline Func_2_t860223B8C2E94B18BA1074620ED7E9D048454B8E * get_U3CU3E9__28_1_3() const { return ___U3CU3E9__28_1_3; }
	inline Func_2_t860223B8C2E94B18BA1074620ED7E9D048454B8E ** get_address_of_U3CU3E9__28_1_3() { return &___U3CU3E9__28_1_3; }
	inline void set_U3CU3E9__28_1_3(Func_2_t860223B8C2E94B18BA1074620ED7E9D048454B8E * value)
	{
		___U3CU3E9__28_1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_2_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_StaticFields, ___U3CU3E9__28_2_4)); }
	inline Func_2_t4533329413DE503A56FB3277B387756C79E2FA50 * get_U3CU3E9__28_2_4() const { return ___U3CU3E9__28_2_4; }
	inline Func_2_t4533329413DE503A56FB3277B387756C79E2FA50 ** get_address_of_U3CU3E9__28_2_4() { return &___U3CU3E9__28_2_4; }
	inline void set_U3CU3E9__28_2_4(Func_2_t4533329413DE503A56FB3277B387756C79E2FA50 * value)
	{
		___U3CU3E9__28_2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_3_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_StaticFields, ___U3CU3E9__28_3_5)); }
	inline Func_2_t7AF4F41BB7D909D8EF773D2011DA670B14992785 * get_U3CU3E9__28_3_5() const { return ___U3CU3E9__28_3_5; }
	inline Func_2_t7AF4F41BB7D909D8EF773D2011DA670B14992785 ** get_address_of_U3CU3E9__28_3_5() { return &___U3CU3E9__28_3_5; }
	inline void set_U3CU3E9__28_3_5(Func_2_t7AF4F41BB7D909D8EF773D2011DA670B14992785 * value)
	{
		___U3CU3E9__28_3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_0_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_StaticFields, ___U3CU3E9__29_0_6)); }
	inline Func_2_tFD9DECC6CEDD97B01E95BCEA536BCA4A90242803 * get_U3CU3E9__29_0_6() const { return ___U3CU3E9__29_0_6; }
	inline Func_2_tFD9DECC6CEDD97B01E95BCEA536BCA4A90242803 ** get_address_of_U3CU3E9__29_0_6() { return &___U3CU3E9__29_0_6; }
	inline void set_U3CU3E9__29_0_6(Func_2_tFD9DECC6CEDD97B01E95BCEA536BCA4A90242803 * value)
	{
		___U3CU3E9__29_0_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_0_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_1_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_StaticFields, ___U3CU3E9__29_1_7)); }
	inline Func_2_t69BA50DA38815C88F3A0A56F56D7155EDB12E3AF * get_U3CU3E9__29_1_7() const { return ___U3CU3E9__29_1_7; }
	inline Func_2_t69BA50DA38815C88F3A0A56F56D7155EDB12E3AF ** get_address_of_U3CU3E9__29_1_7() { return &___U3CU3E9__29_1_7; }
	inline void set_U3CU3E9__29_1_7(Func_2_t69BA50DA38815C88F3A0A56F56D7155EDB12E3AF * value)
	{
		___U3CU3E9__29_1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_2_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_StaticFields, ___U3CU3E9__29_2_8)); }
	inline Func_2_tF9FB887A65474A87161A1DB458D424BD3CE45B55 * get_U3CU3E9__29_2_8() const { return ___U3CU3E9__29_2_8; }
	inline Func_2_tF9FB887A65474A87161A1DB458D424BD3CE45B55 ** get_address_of_U3CU3E9__29_2_8() { return &___U3CU3E9__29_2_8; }
	inline void set_U3CU3E9__29_2_8(Func_2_tF9FB887A65474A87161A1DB458D424BD3CE45B55 * value)
	{
		___U3CU3E9__29_2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_2_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_3_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_StaticFields, ___U3CU3E9__29_3_9)); }
	inline Func_2_t819EAA655CE583BE8193E53B879039D88F50634A * get_U3CU3E9__29_3_9() const { return ___U3CU3E9__29_3_9; }
	inline Func_2_t819EAA655CE583BE8193E53B879039D88F50634A ** get_address_of_U3CU3E9__29_3_9() { return &___U3CU3E9__29_3_9; }
	inline void set_U3CU3E9__29_3_9(Func_2_t819EAA655CE583BE8193E53B879039D88F50634A * value)
	{
		___U3CU3E9__29_3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_3_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_4_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_StaticFields, ___U3CU3E9__29_4_10)); }
	inline Func_2_tEE35FE4B93ACE8EFEB0D974C70687CBDE1CC98A0 * get_U3CU3E9__29_4_10() const { return ___U3CU3E9__29_4_10; }
	inline Func_2_tEE35FE4B93ACE8EFEB0D974C70687CBDE1CC98A0 ** get_address_of_U3CU3E9__29_4_10() { return &___U3CU3E9__29_4_10; }
	inline void set_U3CU3E9__29_4_10(Func_2_tEE35FE4B93ACE8EFEB0D974C70687CBDE1CC98A0 * value)
	{
		___U3CU3E9__29_4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_4_10), (void*)value);
	}
};


// Vuforia.Tracker
struct  Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};


// Vuforia.TrackerManager_<>c
struct  U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB_StaticFields
{
public:
	// Vuforia.TrackerManager_<>c Vuforia.TrackerManager_<>c::<>9
	U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB * ___U3CU3E9_0;
	// System.Func`2<System.Type,Vuforia.Tracker> Vuforia.TrackerManager_<>c::<>9__8_0
	Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 * ___U3CU3E9__8_0_1;
	// System.Func`2<System.Type,Vuforia.Tracker> Vuforia.TrackerManager_<>c::<>9__8_1
	Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 * ___U3CU3E9__8_1_2;
	// System.Func`2<System.Type,Vuforia.Tracker> Vuforia.TrackerManager_<>c::<>9__8_2
	Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 * ___U3CU3E9__8_2_3;
	// System.Func`2<Vuforia.Tracker,System.Boolean> Vuforia.TrackerManager_<>c::<>9__8_3
	Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 * ___U3CU3E9__8_3_4;
	// System.Func`2<Vuforia.Tracker,System.Boolean> Vuforia.TrackerManager_<>c::<>9__8_4
	Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 * ___U3CU3E9__8_4_5;
	// System.Func`2<Vuforia.Tracker,System.Boolean> Vuforia.TrackerManager_<>c::<>9__8_5
	Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 * ___U3CU3E9__8_5_6;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB_StaticFields, ___U3CU3E9__8_1_2)); }
	inline Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 * get_U3CU3E9__8_1_2() const { return ___U3CU3E9__8_1_2; }
	inline Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 ** get_address_of_U3CU3E9__8_1_2() { return &___U3CU3E9__8_1_2; }
	inline void set_U3CU3E9__8_1_2(Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 * value)
	{
		___U3CU3E9__8_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB_StaticFields, ___U3CU3E9__8_2_3)); }
	inline Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 * get_U3CU3E9__8_2_3() const { return ___U3CU3E9__8_2_3; }
	inline Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 ** get_address_of_U3CU3E9__8_2_3() { return &___U3CU3E9__8_2_3; }
	inline void set_U3CU3E9__8_2_3(Func_2_t1A83F16EE47CBC3B0129DA6B7E57E51C375C83F2 * value)
	{
		___U3CU3E9__8_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB_StaticFields, ___U3CU3E9__8_3_4)); }
	inline Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 * get_U3CU3E9__8_3_4() const { return ___U3CU3E9__8_3_4; }
	inline Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 ** get_address_of_U3CU3E9__8_3_4() { return &___U3CU3E9__8_3_4; }
	inline void set_U3CU3E9__8_3_4(Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 * value)
	{
		___U3CU3E9__8_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB_StaticFields, ___U3CU3E9__8_4_5)); }
	inline Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 * get_U3CU3E9__8_4_5() const { return ___U3CU3E9__8_4_5; }
	inline Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 ** get_address_of_U3CU3E9__8_4_5() { return &___U3CU3E9__8_4_5; }
	inline void set_U3CU3E9__8_4_5(Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 * value)
	{
		___U3CU3E9__8_4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_5_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB_StaticFields, ___U3CU3E9__8_5_6)); }
	inline Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 * get_U3CU3E9__8_5_6() const { return ___U3CU3E9__8_5_6; }
	inline Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 ** get_address_of_U3CU3E9__8_5_6() { return &___U3CU3E9__8_5_6; }
	inline void set_U3CU3E9__8_5_6(Func_2_t63DF586CEF8E63E58DB61BCEFF46A67599E1FF00 * value)
	{
		___U3CU3E9__8_5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_5_6), (void*)value);
	}
};


// Vuforia.UnityRuntimeCompiled.NullUnityRuntimeCompiledFacade_NullUnityRenderPipeline
struct  NullUnityRenderPipeline_tA90EDF2AE97640FAB3C5757E9B14C0A6ACC0FAE9  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.Camera[]> Vuforia.UnityRuntimeCompiled.NullUnityRuntimeCompiledFacade_NullUnityRenderPipeline::BeginFrameRendering
	Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * ___BeginFrameRendering_0;
	// System.Action`1<UnityEngine.Camera> Vuforia.UnityRuntimeCompiled.NullUnityRuntimeCompiledFacade_NullUnityRenderPipeline::BeginCameraRendering
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___BeginCameraRendering_1;

public:
	inline static int32_t get_offset_of_BeginFrameRendering_0() { return static_cast<int32_t>(offsetof(NullUnityRenderPipeline_tA90EDF2AE97640FAB3C5757E9B14C0A6ACC0FAE9, ___BeginFrameRendering_0)); }
	inline Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * get_BeginFrameRendering_0() const { return ___BeginFrameRendering_0; }
	inline Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 ** get_address_of_BeginFrameRendering_0() { return &___BeginFrameRendering_0; }
	inline void set_BeginFrameRendering_0(Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * value)
	{
		___BeginFrameRendering_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginFrameRendering_0), (void*)value);
	}

	inline static int32_t get_offset_of_BeginCameraRendering_1() { return static_cast<int32_t>(offsetof(NullUnityRenderPipeline_tA90EDF2AE97640FAB3C5757E9B14C0A6ACC0FAE9, ___BeginCameraRendering_1)); }
	inline Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * get_BeginCameraRendering_1() const { return ___BeginCameraRendering_1; }
	inline Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B ** get_address_of_BeginCameraRendering_1() { return &___BeginCameraRendering_1; }
	inline void set_BeginCameraRendering_1(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * value)
	{
		___BeginCameraRendering_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginCameraRendering_1), (void*)value);
	}
};


// Vuforia.UnityVersionUtility_<>c
struct  U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2_StaticFields
{
public:
	// Vuforia.UnityVersionUtility_<>c Vuforia.UnityVersionUtility_<>c::<>9
	U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2 * ___U3CU3E9_0;
	// System.Func`3<System.Version,System.Version,System.Boolean> Vuforia.UnityVersionUtility_<>c::<>9__1_0
	Func_3_t98C8B652D59F12D9B373C0873EDB9987611E8A8D * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_3_t98C8B652D59F12D9B373C0873EDB9987611E8A8D * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_3_t98C8B652D59F12D9B373C0873EDB9987611E8A8D ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_3_t98C8B652D59F12D9B373C0873EDB9987611E8A8D * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}
};


// Vuforia.UserDefinedTargetBuildingBehaviour_<>c
struct  U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653_StaticFields
{
public:
	// Vuforia.UserDefinedTargetBuildingBehaviour_<>c Vuforia.UserDefinedTargetBuildingBehaviour_<>c::<>9
	U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653 * ___U3CU3E9_0;
	// System.Action`1<System.Action> Vuforia.UserDefinedTargetBuildingBehaviour_<>c::<>9__31_0
	Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * ___U3CU3E9__31_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653_StaticFields, ___U3CU3E9__31_0_1)); }
	inline Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * get_U3CU3E9__31_0_1() const { return ___U3CU3E9__31_0_1; }
	inline Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC ** get_address_of_U3CU3E9__31_0_1() { return &___U3CU3E9__31_0_1; }
	inline void set_U3CU3E9__31_0_1(Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * value)
	{
		___U3CU3E9__31_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_0_1), (void*)value);
	}
};


// Vuforia.UserDefinedTargetBuildingBehaviour_<>c__DisplayClass27_0
struct  U3CU3Ec__DisplayClass27_0_tB8A642ED0220FC9C55F7C3C490EE649BFDEC4743  : public RuntimeObject
{
public:
	// Vuforia.TrackableSource Vuforia.UserDefinedTargetBuildingBehaviour_<>c__DisplayClass27_0::trackableSource
	TrackableSource_tA8649A889727AA9D7469846706286509D153417E * ___trackableSource_0;

public:
	inline static int32_t get_offset_of_trackableSource_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_tB8A642ED0220FC9C55F7C3C490EE649BFDEC4743, ___trackableSource_0)); }
	inline TrackableSource_tA8649A889727AA9D7469846706286509D153417E * get_trackableSource_0() const { return ___trackableSource_0; }
	inline TrackableSource_tA8649A889727AA9D7469846706286509D153417E ** get_address_of_trackableSource_0() { return &___trackableSource_0; }
	inline void set_trackableSource_0(TrackableSource_tA8649A889727AA9D7469846706286509D153417E * value)
	{
		___trackableSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackableSource_0), (void*)value);
	}
};


// Vuforia.VideoBackgroundConfigMigrator_<>c
struct  U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC_StaticFields
{
public:
	// Vuforia.VideoBackgroundConfigMigrator_<>c Vuforia.VideoBackgroundConfigMigrator_<>c::<>9
	U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC * ___U3CU3E9_0;
	// System.Func`2<Vuforia.AMigratableVideoBackgroundConfigProperty,System.Boolean> Vuforia.VideoBackgroundConfigMigrator_<>c::<>9__2_0
	Func_2_t25A8EA4ACA6CB1FB7935AF72CA284A5E08FCE317 * ___U3CU3E9__2_0_1;
	// System.Func`2<System.Boolean,System.Boolean> Vuforia.VideoBackgroundConfigMigrator_<>c::<>9__2_1
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___U3CU3E9__2_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_t25A8EA4ACA6CB1FB7935AF72CA284A5E08FCE317 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_t25A8EA4ACA6CB1FB7935AF72CA284A5E08FCE317 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_t25A8EA4ACA6CB1FB7935AF72CA284A5E08FCE317 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC_StaticFields, ___U3CU3E9__2_1_2)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_U3CU3E9__2_1_2() const { return ___U3CU3E9__2_1_2; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_U3CU3E9__2_1_2() { return &___U3CU3E9__2_1_2; }
	inline void set_U3CU3E9__2_1_2(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___U3CU3E9__2_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_1_2), (void*)value);
	}
};


// Vuforia.VuforiaARController_<>c
struct  U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7_StaticFields
{
public:
	// Vuforia.VuforiaARController_<>c Vuforia.VuforiaARController_<>c::<>9
	U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7 * ___U3CU3E9_0;
	// System.Action`1<System.Action> Vuforia.VuforiaARController_<>c::<>9__87_0
	Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * ___U3CU3E9__87_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__87_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7_StaticFields, ___U3CU3E9__87_0_1)); }
	inline Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * get_U3CU3E9__87_0_1() const { return ___U3CU3E9__87_0_1; }
	inline Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC ** get_address_of_U3CU3E9__87_0_1() { return &___U3CU3E9__87_0_1; }
	inline void set_U3CU3E9__87_0_1(Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * value)
	{
		___U3CU3E9__87_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__87_0_1), (void*)value);
	}
};


// Vuforia.VuforiaConfiguration_DatabaseConfiguration
struct  DatabaseConfiguration_tF351BC5B9DB35944D7129BD046E7366BA3EF4931  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.VuforiaConfiguration_DatabaseConfiguration::disableModelExtraction
	bool ___disableModelExtraction_0;

public:
	inline static int32_t get_offset_of_disableModelExtraction_0() { return static_cast<int32_t>(offsetof(DatabaseConfiguration_tF351BC5B9DB35944D7129BD046E7366BA3EF4931, ___disableModelExtraction_0)); }
	inline bool get_disableModelExtraction_0() const { return ___disableModelExtraction_0; }
	inline bool* get_address_of_disableModelExtraction_0() { return &___disableModelExtraction_0; }
	inline void set_disableModelExtraction_0(bool value)
	{
		___disableModelExtraction_0 = value;
	}
};


// Vuforia.VuforiaConfiguration_VideoBackgroundConfiguration
struct  VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.VuforiaConfiguration_VideoBackgroundConfiguration::numDivisions
	int32_t ___numDivisions_0;
	// UnityEngine.Shader Vuforia.VuforiaConfiguration_VideoBackgroundConfiguration::videoBackgroundShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___videoBackgroundShader_1;
	// System.Boolean Vuforia.VuforiaConfiguration_VideoBackgroundConfiguration::videoBackgroundEnabled
	bool ___videoBackgroundEnabled_2;

public:
	inline static int32_t get_offset_of_numDivisions_0() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A, ___numDivisions_0)); }
	inline int32_t get_numDivisions_0() const { return ___numDivisions_0; }
	inline int32_t* get_address_of_numDivisions_0() { return &___numDivisions_0; }
	inline void set_numDivisions_0(int32_t value)
	{
		___numDivisions_0 = value;
	}

	inline static int32_t get_offset_of_videoBackgroundShader_1() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A, ___videoBackgroundShader_1)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_videoBackgroundShader_1() const { return ___videoBackgroundShader_1; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_videoBackgroundShader_1() { return &___videoBackgroundShader_1; }
	inline void set_videoBackgroundShader_1(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___videoBackgroundShader_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoBackgroundShader_1), (void*)value);
	}

	inline static int32_t get_offset_of_videoBackgroundEnabled_2() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A, ___videoBackgroundEnabled_2)); }
	inline bool get_videoBackgroundEnabled_2() const { return ___videoBackgroundEnabled_2; }
	inline bool* get_address_of_videoBackgroundEnabled_2() { return &___videoBackgroundEnabled_2; }
	inline void set_videoBackgroundEnabled_2(bool value)
	{
		___videoBackgroundEnabled_2 = value;
	}
};


// Vuforia.VuforiaConfiguration_WebCamConfiguration
struct  WebCamConfiguration_tB6901731D92E082AB5355D87C90480957723CB91  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.VuforiaConfiguration_WebCamConfiguration::renderTextureLayer
	int32_t ___renderTextureLayer_1;

public:
	inline static int32_t get_offset_of_renderTextureLayer_1() { return static_cast<int32_t>(offsetof(WebCamConfiguration_tB6901731D92E082AB5355D87C90480957723CB91, ___renderTextureLayer_1)); }
	inline int32_t get_renderTextureLayer_1() const { return ___renderTextureLayer_1; }
	inline int32_t* get_address_of_renderTextureLayer_1() { return &___renderTextureLayer_1; }
	inline void set_renderTextureLayer_1(int32_t value)
	{
		___renderTextureLayer_1 = value;
	}
};


// Vuforia.VuforiaRenderer_<>c
struct  U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF_StaticFields
{
public:
	// Vuforia.VuforiaRenderer_<>c Vuforia.VuforiaRenderer_<>c::<>9
	U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Vuforia.VuforiaRenderer_<>c::<>9__34_0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__34_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF_StaticFields, ___U3CU3E9__34_0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__34_0_1() const { return ___U3CU3E9__34_0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__34_0_1() { return &___U3CU3E9__34_0_1; }
	inline void set_U3CU3E9__34_0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__34_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_0_1), (void*)value);
	}
};


// Vuforia.VuforiaRuntimeUtilities_<>c
struct  U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D_StaticFields
{
public:
	// Vuforia.VuforiaRuntimeUtilities_<>c Vuforia.VuforiaRuntimeUtilities_<>c::<>9
	U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D * ___U3CU3E9_0;
	// System.Func`2<Vuforia.TargetFinder,System.Boolean> Vuforia.VuforiaRuntimeUtilities_<>c::<>9__34_0
	Func_2_t08A9ADDED063B85D3C6F831CEEB4B347E9A0C150 * ___U3CU3E9__34_0_1;
	// System.Func`2<Vuforia.TargetFinder,System.Boolean> Vuforia.VuforiaRuntimeUtilities_<>c::<>9__34_1
	Func_2_t08A9ADDED063B85D3C6F831CEEB4B347E9A0C150 * ___U3CU3E9__34_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D_StaticFields, ___U3CU3E9__34_0_1)); }
	inline Func_2_t08A9ADDED063B85D3C6F831CEEB4B347E9A0C150 * get_U3CU3E9__34_0_1() const { return ___U3CU3E9__34_0_1; }
	inline Func_2_t08A9ADDED063B85D3C6F831CEEB4B347E9A0C150 ** get_address_of_U3CU3E9__34_0_1() { return &___U3CU3E9__34_0_1; }
	inline void set_U3CU3E9__34_0_1(Func_2_t08A9ADDED063B85D3C6F831CEEB4B347E9A0C150 * value)
	{
		___U3CU3E9__34_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D_StaticFields, ___U3CU3E9__34_1_2)); }
	inline Func_2_t08A9ADDED063B85D3C6F831CEEB4B347E9A0C150 * get_U3CU3E9__34_1_2() const { return ___U3CU3E9__34_1_2; }
	inline Func_2_t08A9ADDED063B85D3C6F831CEEB4B347E9A0C150 ** get_address_of_U3CU3E9__34_1_2() { return &___U3CU3E9__34_1_2; }
	inline void set_U3CU3E9__34_1_2(Func_2_t08A9ADDED063B85D3C6F831CEEB4B347E9A0C150 * value)
	{
		___U3CU3E9__34_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_1_2), (void*)value);
	}
};


// Vuforia.VuforiaRuntimeUtilities_SimulatorVars
struct  SimulatorVars_t5C7D8D721C4856D135144C18A666A43FB592A92C  : public RuntimeObject
{
public:

public:
};


// Vuforia.WSAUnityPlayer_HoloLensApiImplementation
struct  HoloLensApiImplementation_t66C053D7B2CD2DEBF37631C79882A67BB1E41FF3  : public RuntimeObject
{
public:

public:
};


// Vuforia.WebCamARController_<>c
struct  U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457_StaticFields
{
public:
	// Vuforia.WebCamARController_<>c Vuforia.WebCamARController_<>c::<>9
	U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457 * ___U3CU3E9_0;
	// System.Func`3<System.String,Vuforia.WebCamProfile_ProfileData,Vuforia.IWebCamTexAdaptor> Vuforia.WebCamARController_<>c::<>9__6_0
	Func_3_t0B6550129D044D7B27433C3711291D76C07E2CFA * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Func_3_t0B6550129D044D7B27433C3711291D76C07E2CFA * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Func_3_t0B6550129D044D7B27433C3711291D76C07E2CFA ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Func_3_t0B6550129D044D7B27433C3711291D76C07E2CFA * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}
};


// Vuforia.WebCamTexAdaptor
struct  WebCamTexAdaptor_tBA53CE26A2424E7D165C57C53246CC77BA8C9F5A  : public RuntimeObject
{
public:
	// UnityEngine.WebCamTexture Vuforia.WebCamTexAdaptor::mWebCamTexture
	WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * ___mWebCamTexture_0;
	// UnityEngine.AsyncOperation Vuforia.WebCamTexAdaptor::mCheckCameraPermissions
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___mCheckCameraPermissions_1;

public:
	inline static int32_t get_offset_of_mWebCamTexture_0() { return static_cast<int32_t>(offsetof(WebCamTexAdaptor_tBA53CE26A2424E7D165C57C53246CC77BA8C9F5A, ___mWebCamTexture_0)); }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * get_mWebCamTexture_0() const { return ___mWebCamTexture_0; }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 ** get_address_of_mWebCamTexture_0() { return &___mWebCamTexture_0; }
	inline void set_mWebCamTexture_0(WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * value)
	{
		___mWebCamTexture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWebCamTexture_0), (void*)value);
	}

	inline static int32_t get_offset_of_mCheckCameraPermissions_1() { return static_cast<int32_t>(offsetof(WebCamTexAdaptor_tBA53CE26A2424E7D165C57C53246CC77BA8C9F5A, ___mCheckCameraPermissions_1)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_mCheckCameraPermissions_1() const { return ___mCheckCameraPermissions_1; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_mCheckCameraPermissions_1() { return &___mCheckCameraPermissions_1; }
	inline void set_mCheckCameraPermissions_1(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___mCheckCameraPermissions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCheckCameraPermissions_1), (void*)value);
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


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.EditorClasses.JSONNode>
struct  KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONNode_t2AC73352107C87692E5E6508C959400504495752 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D, ___value_1)); }
	inline JSONNode_t2AC73352107C87692E5E6508C959400504495752 * get_value_1() const { return ___value_1; }
	inline JSONNode_t2AC73352107C87692E5E6508C959400504495752 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JSONNode_t2AC73352107C87692E5E6508C959400504495752 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Collections.Generic.List`1_Enumerator<Vuforia.EditorClasses.JSONNode>
struct  Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t87698B07D247495DD045F96620F11B9FE07473B9 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	JSONNode_t2AC73352107C87692E5E6508C959400504495752 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7, ___list_0)); }
	inline List_1_t87698B07D247495DD045F96620F11B9FE07473B9 * get_list_0() const { return ___list_0; }
	inline List_1_t87698B07D247495DD045F96620F11B9FE07473B9 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t87698B07D247495DD045F96620F11B9FE07473B9 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7, ___current_3)); }
	inline JSONNode_t2AC73352107C87692E5E6508C959400504495752 * get_current_3() const { return ___current_3; }
	inline JSONNode_t2AC73352107C87692E5E6508C959400504495752 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(JSONNode_t2AC73352107C87692E5E6508C959400504495752 * value)
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


// UnityEngine.Events.UnityEvent`1<UnityEngine.Transform>
struct  UnityEvent_1_tF63176C7516E6ECD13B8AF2684E42A6437349B3D  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tF63176C7516E6ECD13B8AF2684E42A6437349B3D, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct  UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Vuforia.CameraDevice_CameraFieldData
struct  CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D 
{
public:
	// System.String Vuforia.CameraDevice_CameraFieldData::KeyValue
	String_t* ___KeyValue_0;
	// System.Int32 Vuforia.CameraDevice_CameraFieldData::DataType
	int32_t ___DataType_1;
	// System.Int32 Vuforia.CameraDevice_CameraFieldData::Unused
	int32_t ___Unused_2;

public:
	inline static int32_t get_offset_of_KeyValue_0() { return static_cast<int32_t>(offsetof(CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D, ___KeyValue_0)); }
	inline String_t* get_KeyValue_0() const { return ___KeyValue_0; }
	inline String_t** get_address_of_KeyValue_0() { return &___KeyValue_0; }
	inline void set_KeyValue_0(String_t* value)
	{
		___KeyValue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyValue_0), (void*)value);
	}

	inline static int32_t get_offset_of_DataType_1() { return static_cast<int32_t>(offsetof(CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D, ___DataType_1)); }
	inline int32_t get_DataType_1() const { return ___DataType_1; }
	inline int32_t* get_address_of_DataType_1() { return &___DataType_1; }
	inline void set_DataType_1(int32_t value)
	{
		___DataType_1 = value;
	}

	inline static int32_t get_offset_of_Unused_2() { return static_cast<int32_t>(offsetof(CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D, ___Unused_2)); }
	inline int32_t get_Unused_2() const { return ___Unused_2; }
	inline int32_t* get_address_of_Unused_2() { return &___Unused_2; }
	inline void set_Unused_2(int32_t value)
	{
		___Unused_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.CameraDevice/CameraFieldData
#pragma pack(push, tp, 1)
struct CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D_marshaled_pinvoke
{
	char* ___KeyValue_0;
	int32_t ___DataType_1;
	int32_t ___Unused_2;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Vuforia.CameraDevice/CameraFieldData
#pragma pack(push, tp, 1)
struct CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D_marshaled_com
{
	Il2CppChar* ___KeyValue_0;
	int32_t ___DataType_1;
	int32_t ___Unused_2;
};
#pragma pack(pop, tp)

// Vuforia.CameraDevice_Int64Range
struct  Int64Range_tF40EC539F19F61B42952A60915552569F5174A65 
{
public:
	// System.Int64 Vuforia.CameraDevice_Int64Range::fromInt
	int64_t ___fromInt_0;
	// System.Int64 Vuforia.CameraDevice_Int64Range::toInt
	int64_t ___toInt_1;

public:
	inline static int32_t get_offset_of_fromInt_0() { return static_cast<int32_t>(offsetof(Int64Range_tF40EC539F19F61B42952A60915552569F5174A65, ___fromInt_0)); }
	inline int64_t get_fromInt_0() const { return ___fromInt_0; }
	inline int64_t* get_address_of_fromInt_0() { return &___fromInt_0; }
	inline void set_fromInt_0(int64_t value)
	{
		___fromInt_0 = value;
	}

	inline static int32_t get_offset_of_toInt_1() { return static_cast<int32_t>(offsetof(Int64Range_tF40EC539F19F61B42952A60915552569F5174A65, ___toInt_1)); }
	inline int64_t get_toInt_1() const { return ___toInt_1; }
	inline int64_t* get_address_of_toInt_1() { return &___toInt_1; }
	inline void set_toInt_1(int64_t value)
	{
		___toInt_1 = value;
	}
};


// Vuforia.CameraDevice_VideoModeData
#pragma pack(push, tp, 1)
struct  VideoModeData_t20D8D0686B2798F1A50B56666B49CD27D2444E25 
{
public:
	// System.Int32 Vuforia.CameraDevice_VideoModeData::width
	int32_t ___width_0;
	// System.Int32 Vuforia.CameraDevice_VideoModeData::height
	int32_t ___height_1;
	// System.Single Vuforia.CameraDevice_VideoModeData::frameRate
	float ___frameRate_2;
	// System.Int32 Vuforia.CameraDevice_VideoModeData::format
	int32_t ___format_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoModeData_t20D8D0686B2798F1A50B56666B49CD27D2444E25, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoModeData_t20D8D0686B2798F1A50B56666B49CD27D2444E25, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_frameRate_2() { return static_cast<int32_t>(offsetof(VideoModeData_t20D8D0686B2798F1A50B56666B49CD27D2444E25, ___frameRate_2)); }
	inline float get_frameRate_2() const { return ___frameRate_2; }
	inline float* get_address_of_frameRate_2() { return &___frameRate_2; }
	inline void set_frameRate_2(float value)
	{
		___frameRate_2 = value;
	}

	inline static int32_t get_offset_of_format_3() { return static_cast<int32_t>(offsetof(VideoModeData_t20D8D0686B2798F1A50B56666B49CD27D2444E25, ___format_3)); }
	inline int32_t get_format_3() const { return ___format_3; }
	inline int32_t* get_address_of_format_3() { return &___format_3; }
	inline void set_format_3(int32_t value)
	{
		___format_3 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.DatasetTracker
struct  DatasetTracker_t14F875EA1CE6ABDB7345699192189AB763F9DAC8  : public Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.DatasetTracker::mActiveDataSets
	List_1_t45849831C7D8357F3A8C8F59050B4F6D8535199A * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.DatasetTracker::mDataSets
	List_1_t45849831C7D8357F3A8C8F59050B4F6D8535199A * ___mDataSets_2;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(DatasetTracker_t14F875EA1CE6ABDB7345699192189AB763F9DAC8, ___mActiveDataSets_1)); }
	inline List_1_t45849831C7D8357F3A8C8F59050B4F6D8535199A * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_t45849831C7D8357F3A8C8F59050B4F6D8535199A ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_t45849831C7D8357F3A8C8F59050B4F6D8535199A * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveDataSets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(DatasetTracker_t14F875EA1CE6ABDB7345699192189AB763F9DAC8, ___mDataSets_2)); }
	inline List_1_t45849831C7D8357F3A8C8F59050B4F6D8535199A * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_t45849831C7D8357F3A8C8F59050B4F6D8535199A ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_t45849831C7D8357F3A8C8F59050B4F6D8535199A * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDataSets_2), (void*)value);
	}
};


// Vuforia.DeviceTracker
struct  DeviceTracker_t167126AB5258179E840F4B1206843BF7207C7EE6  : public Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB
{
public:

public:
};


// Vuforia.DigitalEyewearARController
struct  DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB  : public ARController_t2B4A0C456A94DC12CB93E7F1C5C5A0CECA2363E2
{
public:
	// UnityEngine.Transform Vuforia.DigitalEyewearARController::mCentralAnchorPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mCentralAnchorPoint_3;
	// UnityEngine.Camera Vuforia.DigitalEyewearARController::mCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mCamera_4;
	// Vuforia.VuforiaARController Vuforia.DigitalEyewearARController::mVuforiaBehaviour
	VuforiaARController_t9F6FA135CCFAA95C6D9AAA3F04B69BA12B59F1BF * ___mVuforiaBehaviour_5;
	// System.Boolean Vuforia.DigitalEyewearARController::mSetFocusPlaneAutomatically
	bool ___mSetFocusPlaneAutomatically_6;

public:
	inline static int32_t get_offset_of_mCentralAnchorPoint_3() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB, ___mCentralAnchorPoint_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mCentralAnchorPoint_3() const { return ___mCentralAnchorPoint_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mCentralAnchorPoint_3() { return &___mCentralAnchorPoint_3; }
	inline void set_mCentralAnchorPoint_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mCentralAnchorPoint_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCentralAnchorPoint_3), (void*)value);
	}

	inline static int32_t get_offset_of_mCamera_4() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB, ___mCamera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mCamera_4() const { return ___mCamera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mCamera_4() { return &___mCamera_4; }
	inline void set_mCamera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCamera_4), (void*)value);
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_5() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB, ___mVuforiaBehaviour_5)); }
	inline VuforiaARController_t9F6FA135CCFAA95C6D9AAA3F04B69BA12B59F1BF * get_mVuforiaBehaviour_5() const { return ___mVuforiaBehaviour_5; }
	inline VuforiaARController_t9F6FA135CCFAA95C6D9AAA3F04B69BA12B59F1BF ** get_address_of_mVuforiaBehaviour_5() { return &___mVuforiaBehaviour_5; }
	inline void set_mVuforiaBehaviour_5(VuforiaARController_t9F6FA135CCFAA95C6D9AAA3F04B69BA12B59F1BF * value)
	{
		___mVuforiaBehaviour_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuforiaBehaviour_5), (void*)value);
	}

	inline static int32_t get_offset_of_mSetFocusPlaneAutomatically_6() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB, ___mSetFocusPlaneAutomatically_6)); }
	inline bool get_mSetFocusPlaneAutomatically_6() const { return ___mSetFocusPlaneAutomatically_6; }
	inline bool* get_address_of_mSetFocusPlaneAutomatically_6() { return &___mSetFocusPlaneAutomatically_6; }
	inline void set_mSetFocusPlaneAutomatically_6(bool value)
	{
		___mSetFocusPlaneAutomatically_6 = value;
	}
};

struct DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB_StaticFields
{
public:
	// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::mInstance
	DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB * ___mInstance_7;
	// System.Object Vuforia.DigitalEyewearARController::mPadlock
	RuntimeObject * ___mPadlock_8;
	// System.Boolean Vuforia.DigitalEyewearARController::staticSafeFlag
	bool ___staticSafeFlag_9;

public:
	inline static int32_t get_offset_of_mInstance_7() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB_StaticFields, ___mInstance_7)); }
	inline DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB * get_mInstance_7() const { return ___mInstance_7; }
	inline DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB ** get_address_of_mInstance_7() { return &___mInstance_7; }
	inline void set_mInstance_7(DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB * value)
	{
		___mInstance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInstance_7), (void*)value);
	}

	inline static int32_t get_offset_of_mPadlock_8() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB_StaticFields, ___mPadlock_8)); }
	inline RuntimeObject * get_mPadlock_8() const { return ___mPadlock_8; }
	inline RuntimeObject ** get_address_of_mPadlock_8() { return &___mPadlock_8; }
	inline void set_mPadlock_8(RuntimeObject * value)
	{
		___mPadlock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPadlock_8), (void*)value);
	}

	inline static int32_t get_offset_of_staticSafeFlag_9() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB_StaticFields, ___staticSafeFlag_9)); }
	inline bool get_staticSafeFlag_9() const { return ___staticSafeFlag_9; }
	inline bool* get_address_of_staticSafeFlag_9() { return &___staticSafeFlag_9; }
	inline void set_staticSafeFlag_9(bool value)
	{
		___staticSafeFlag_9 = value;
	}
};


// Vuforia.SmartTerrain
struct  SmartTerrain_t465561CB4FF40E6CB2355629FB8AC51286663B14  : public Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB
{
public:

public:
};


// Vuforia.TargetFinder_TargetFinderState
#pragma pack(push, tp, 1)
struct  TargetFinderState_t88AAA7CB9D8BD7EC631DACEE7F909B6D8B7043E2 
{
public:
	// System.Int32 Vuforia.TargetFinder_TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// System.Int32 Vuforia.TargetFinder_TargetFinderState::UpdateState
	int32_t ___UpdateState_1;

public:
	inline static int32_t get_offset_of_IsRequesting_0() { return static_cast<int32_t>(offsetof(TargetFinderState_t88AAA7CB9D8BD7EC631DACEE7F909B6D8B7043E2, ___IsRequesting_0)); }
	inline int32_t get_IsRequesting_0() const { return ___IsRequesting_0; }
	inline int32_t* get_address_of_IsRequesting_0() { return &___IsRequesting_0; }
	inline void set_IsRequesting_0(int32_t value)
	{
		___IsRequesting_0 = value;
	}

	inline static int32_t get_offset_of_UpdateState_1() { return static_cast<int32_t>(offsetof(TargetFinderState_t88AAA7CB9D8BD7EC631DACEE7F909B6D8B7043E2, ___UpdateState_1)); }
	inline int32_t get_UpdateState_1() const { return ___UpdateState_1; }
	inline int32_t* get_address_of_UpdateState_1() { return &___UpdateState_1; }
	inline void set_UpdateState_1(int32_t value)
	{
		___UpdateState_1 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_VirtualButtonData
#pragma pack(push, tp, 1)
struct  VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140 
{
public:
	// System.Int32 Vuforia.TrackerData_VirtualButtonData::id
	int32_t ___id_0;
	// System.Int32 Vuforia.TrackerData_VirtualButtonData::isPressed
	int32_t ___isPressed_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_isPressed_1() { return static_cast<int32_t>(offsetof(VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140, ___isPressed_1)); }
	inline int32_t get_isPressed_1() const { return ___isPressed_1; }
	inline int32_t* get_address_of_isPressed_1() { return &___isPressed_1; }
	inline void set_isPressed_1(int32_t value)
	{
		___isPressed_1 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.VuforiaManager_AutoRotationState
struct  AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07 
{
public:
	// System.Boolean Vuforia.VuforiaManager_AutoRotationState::setOnPause
	bool ___setOnPause_0;
	// System.Boolean Vuforia.VuforiaManager_AutoRotationState::autorotateToPortrait
	bool ___autorotateToPortrait_1;
	// System.Boolean Vuforia.VuforiaManager_AutoRotationState::autorotateToPortraitUpsideDown
	bool ___autorotateToPortraitUpsideDown_2;
	// System.Boolean Vuforia.VuforiaManager_AutoRotationState::autorotateToLandscapeLeft
	bool ___autorotateToLandscapeLeft_3;
	// System.Boolean Vuforia.VuforiaManager_AutoRotationState::autorotateToLandscapeRight
	bool ___autorotateToLandscapeRight_4;

public:
	inline static int32_t get_offset_of_setOnPause_0() { return static_cast<int32_t>(offsetof(AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07, ___setOnPause_0)); }
	inline bool get_setOnPause_0() const { return ___setOnPause_0; }
	inline bool* get_address_of_setOnPause_0() { return &___setOnPause_0; }
	inline void set_setOnPause_0(bool value)
	{
		___setOnPause_0 = value;
	}

	inline static int32_t get_offset_of_autorotateToPortrait_1() { return static_cast<int32_t>(offsetof(AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07, ___autorotateToPortrait_1)); }
	inline bool get_autorotateToPortrait_1() const { return ___autorotateToPortrait_1; }
	inline bool* get_address_of_autorotateToPortrait_1() { return &___autorotateToPortrait_1; }
	inline void set_autorotateToPortrait_1(bool value)
	{
		___autorotateToPortrait_1 = value;
	}

	inline static int32_t get_offset_of_autorotateToPortraitUpsideDown_2() { return static_cast<int32_t>(offsetof(AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07, ___autorotateToPortraitUpsideDown_2)); }
	inline bool get_autorotateToPortraitUpsideDown_2() const { return ___autorotateToPortraitUpsideDown_2; }
	inline bool* get_address_of_autorotateToPortraitUpsideDown_2() { return &___autorotateToPortraitUpsideDown_2; }
	inline void set_autorotateToPortraitUpsideDown_2(bool value)
	{
		___autorotateToPortraitUpsideDown_2 = value;
	}

	inline static int32_t get_offset_of_autorotateToLandscapeLeft_3() { return static_cast<int32_t>(offsetof(AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07, ___autorotateToLandscapeLeft_3)); }
	inline bool get_autorotateToLandscapeLeft_3() const { return ___autorotateToLandscapeLeft_3; }
	inline bool* get_address_of_autorotateToLandscapeLeft_3() { return &___autorotateToLandscapeLeft_3; }
	inline void set_autorotateToLandscapeLeft_3(bool value)
	{
		___autorotateToLandscapeLeft_3 = value;
	}

	inline static int32_t get_offset_of_autorotateToLandscapeRight_4() { return static_cast<int32_t>(offsetof(AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07, ___autorotateToLandscapeRight_4)); }
	inline bool get_autorotateToLandscapeRight_4() const { return ___autorotateToLandscapeRight_4; }
	inline bool* get_address_of_autorotateToLandscapeRight_4() { return &___autorotateToLandscapeRight_4; }
	inline void set_autorotateToLandscapeRight_4(bool value)
	{
		___autorotateToLandscapeRight_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuforiaManager/AutoRotationState
struct AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07_marshaled_pinvoke
{
	int32_t ___setOnPause_0;
	int32_t ___autorotateToPortrait_1;
	int32_t ___autorotateToPortraitUpsideDown_2;
	int32_t ___autorotateToLandscapeLeft_3;
	int32_t ___autorotateToLandscapeRight_4;
};
// Native definition for COM marshalling of Vuforia.VuforiaManager/AutoRotationState
struct AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07_marshaled_com
{
	int32_t ___setOnPause_0;
	int32_t ___autorotateToPortrait_1;
	int32_t ___autorotateToPortraitUpsideDown_2;
	int32_t ___autorotateToLandscapeLeft_3;
	int32_t ___autorotateToLandscapeRight_4;
};

// Vuforia.VuforiaManager_TrackableIdPair
struct  TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B 
{
public:
	// System.Int32 Vuforia.VuforiaManager_TrackableIdPair::TrackableId
	int32_t ___TrackableId_0;
	// System.Int32 Vuforia.VuforiaManager_TrackableIdPair::ResultId
	int32_t ___ResultId_1;

public:
	inline static int32_t get_offset_of_TrackableId_0() { return static_cast<int32_t>(offsetof(TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B, ___TrackableId_0)); }
	inline int32_t get_TrackableId_0() const { return ___TrackableId_0; }
	inline int32_t* get_address_of_TrackableId_0() { return &___TrackableId_0; }
	inline void set_TrackableId_0(int32_t value)
	{
		___TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_ResultId_1() { return static_cast<int32_t>(offsetof(TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B, ___ResultId_1)); }
	inline int32_t get_ResultId_1() const { return ___ResultId_1; }
	inline int32_t* get_address_of_ResultId_1() { return &___ResultId_1; }
	inline void set_ResultId_1(int32_t value)
	{
		___ResultId_1 = value;
	}
};


// Vuforia.VuforiaRenderer_Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer_Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer_Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};
#pragma pack(pop, tp)


// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.Object>
struct  Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.String,Vuforia.EditorClasses.JSONNode>
struct  Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3, ___dictionary_0)); }
	inline Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3, ___current_3)); }
	inline KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
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

// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
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


// UnityEngine.HideFlags
struct  HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
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

// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.AnchorInputListenerBehaviour_InputReceivedEvent
struct  InputReceivedEvent_tF1B1BDB7647AC41F6D27967F5C0FABCC9F907C6C  : public UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C
{
public:

public:
};


// Vuforia.AreaTracker
struct  AreaTracker_t8071226BF023074830335EFFEB24D47E45D714B8  : public DatasetTracker_t14F875EA1CE6ABDB7345699192189AB763F9DAC8
{
public:

public:
};


// Vuforia.BackgroundPlaneBehaviour_ProjectionMatrixData
struct  ProjectionMatrixData_t7A8BA0089749687DC82875969B962713AC7A3563 
{
public:
	// UnityEngine.Matrix4x4 Vuforia.BackgroundPlaneBehaviour_ProjectionMatrixData::ProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___ProjectionMatrix_0;
	// UnityEngine.Matrix4x4 Vuforia.BackgroundPlaneBehaviour_ProjectionMatrixData::InverseMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___InverseMatrix_1;
	// System.Single Vuforia.BackgroundPlaneBehaviour_ProjectionMatrixData::HorizontalFoV
	float ___HorizontalFoV_2;
	// System.Single Vuforia.BackgroundPlaneBehaviour_ProjectionMatrixData::VerticalFoV
	float ___VerticalFoV_3;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneBehaviour_ProjectionMatrixData::CenterEyeRayFrom
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CenterEyeRayFrom_4;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneBehaviour_ProjectionMatrixData::CenterEyeRayTo
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CenterEyeRayTo_5;
	// System.Single Vuforia.BackgroundPlaneBehaviour_ProjectionMatrixData::MaxDepth
	float ___MaxDepth_6;

public:
	inline static int32_t get_offset_of_ProjectionMatrix_0() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t7A8BA0089749687DC82875969B962713AC7A3563, ___ProjectionMatrix_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_ProjectionMatrix_0() const { return ___ProjectionMatrix_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_ProjectionMatrix_0() { return &___ProjectionMatrix_0; }
	inline void set_ProjectionMatrix_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___ProjectionMatrix_0 = value;
	}

	inline static int32_t get_offset_of_InverseMatrix_1() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t7A8BA0089749687DC82875969B962713AC7A3563, ___InverseMatrix_1)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_InverseMatrix_1() const { return ___InverseMatrix_1; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_InverseMatrix_1() { return &___InverseMatrix_1; }
	inline void set_InverseMatrix_1(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___InverseMatrix_1 = value;
	}

	inline static int32_t get_offset_of_HorizontalFoV_2() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t7A8BA0089749687DC82875969B962713AC7A3563, ___HorizontalFoV_2)); }
	inline float get_HorizontalFoV_2() const { return ___HorizontalFoV_2; }
	inline float* get_address_of_HorizontalFoV_2() { return &___HorizontalFoV_2; }
	inline void set_HorizontalFoV_2(float value)
	{
		___HorizontalFoV_2 = value;
	}

	inline static int32_t get_offset_of_VerticalFoV_3() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t7A8BA0089749687DC82875969B962713AC7A3563, ___VerticalFoV_3)); }
	inline float get_VerticalFoV_3() const { return ___VerticalFoV_3; }
	inline float* get_address_of_VerticalFoV_3() { return &___VerticalFoV_3; }
	inline void set_VerticalFoV_3(float value)
	{
		___VerticalFoV_3 = value;
	}

	inline static int32_t get_offset_of_CenterEyeRayFrom_4() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t7A8BA0089749687DC82875969B962713AC7A3563, ___CenterEyeRayFrom_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CenterEyeRayFrom_4() const { return ___CenterEyeRayFrom_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CenterEyeRayFrom_4() { return &___CenterEyeRayFrom_4; }
	inline void set_CenterEyeRayFrom_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CenterEyeRayFrom_4 = value;
	}

	inline static int32_t get_offset_of_CenterEyeRayTo_5() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t7A8BA0089749687DC82875969B962713AC7A3563, ___CenterEyeRayTo_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CenterEyeRayTo_5() const { return ___CenterEyeRayTo_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CenterEyeRayTo_5() { return &___CenterEyeRayTo_5; }
	inline void set_CenterEyeRayTo_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CenterEyeRayTo_5 = value;
	}

	inline static int32_t get_offset_of_MaxDepth_6() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t7A8BA0089749687DC82875969B962713AC7A3563, ___MaxDepth_6)); }
	inline float get_MaxDepth_6() const { return ___MaxDepth_6; }
	inline float* get_address_of_MaxDepth_6() { return &___MaxDepth_6; }
	inline void set_MaxDepth_6(float value)
	{
		___MaxDepth_6 = value;
	}
};


// Vuforia.CameraDevice_CameraDeviceMode
struct  CameraDeviceMode_t2000038B567D6BB9C5CE6FC489A3E4E62729CC43 
{
public:
	// System.Int32 Vuforia.CameraDevice_CameraDeviceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2000038B567D6BB9C5CE6FC489A3E4E62729CC43, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.CameraDevice_CameraField_DataType
struct  DataType_t46BAFA9F5003E5609E2136F080BDCDF058CD35FA 
{
public:
	// System.Int32 Vuforia.CameraDevice_CameraField_DataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataType_t46BAFA9F5003E5609E2136F080BDCDF058CD35FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.CameraDevice_FocusMode
struct  FocusMode_t1233B6A184455118E04CAB19FD187D3A7634994A 
{
public:
	// System.Int32 Vuforia.CameraDevice_FocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FocusMode_t1233B6A184455118E04CAB19FD187D3A7634994A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.DataSet_StorageType
struct  StorageType_tE3FA9E6CEDA65A44DA399D991073306EAD499618 
{
public:
	// System.Int32 Vuforia.DataSet_StorageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StorageType_tE3FA9E6CEDA65A44DA399D991073306EAD499618, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.DatabaseLoadARController_DatabaseType
struct  DatabaseType_tA56BBDABFAF49165403B0016CA32856D1F0491D5 
{
public:
	// System.Int32 Vuforia.DatabaseLoadARController_DatabaseType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DatabaseType_tA56BBDABFAF49165403B0016CA32856D1F0491D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.DisabledSetTargetSize
struct  DisabledSetTargetSize_t7051D80708A3A9C81A13959EC41094CEB4B303D4  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Vuforia.DisabledSetTargetSize::mSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mSize_0;

public:
	inline static int32_t get_offset_of_mSize_0() { return static_cast<int32_t>(offsetof(DisabledSetTargetSize_t7051D80708A3A9C81A13959EC41094CEB4B303D4, ___mSize_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mSize_0() const { return ___mSize_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mSize_0() { return &___mSize_0; }
	inline void set_mSize_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mSize_0 = value;
	}
};


// Vuforia.EditorClasses.JSONArray_<GetEnumerator>d__12
struct  U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.EditorClasses.JSONArray_<GetEnumerator>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.EditorClasses.JSONArray_<GetEnumerator>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Vuforia.EditorClasses.JSONArray Vuforia.EditorClasses.JSONArray_<GetEnumerator>d__12::<>4__this
	JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1_Enumerator<Vuforia.EditorClasses.JSONNode> Vuforia.EditorClasses.JSONArray_<GetEnumerator>d__12::<>7__wrap1
	Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7  ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492, ___U3CU3E4__this_2)); }
	inline JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___current_3), (void*)NULL);
		#endif
	}
};


// Vuforia.EditorClasses.JSONArray_<get_Children>d__11
struct  U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.EditorClasses.JSONArray_<get_Children>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Vuforia.EditorClasses.JSONNode Vuforia.EditorClasses.JSONArray_<get_Children>d__11::<>2__current
	JSONNode_t2AC73352107C87692E5E6508C959400504495752 * ___U3CU3E2__current_1;
	// System.Int32 Vuforia.EditorClasses.JSONArray_<get_Children>d__11::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Vuforia.EditorClasses.JSONArray Vuforia.EditorClasses.JSONArray_<get_Children>d__11::<>4__this
	JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 * ___U3CU3E4__this_3;
	// System.Collections.Generic.List`1_Enumerator<Vuforia.EditorClasses.JSONNode> Vuforia.EditorClasses.JSONArray_<get_Children>d__11::<>7__wrap1
	Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D, ___U3CU3E2__current_1)); }
	inline JSONNode_t2AC73352107C87692E5E6508C959400504495752 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JSONNode_t2AC73352107C87692E5E6508C959400504495752 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JSONNode_t2AC73352107C87692E5E6508C959400504495752 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D, ___U3CU3E4__this_3)); }
	inline JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___current_3), (void*)NULL);
		#endif
	}
};


// Vuforia.EditorClasses.JSONNode_JSONType
struct  JSONType_t9C5E9C2D352A031F1B24954ED7EFD041DE0FF494 
{
public:
	// System.Int32 Vuforia.EditorClasses.JSONNode_JSONType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JSONType_t9C5E9C2D352A031F1B24954ED7EFD041DE0FF494, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.GLTFExtractorUtility_GLTFFilterMode
struct  GLTFFilterMode_tD5B2001D189DECE216C8897D451E9E28030C4136 
{
public:
	// System.Int32 Vuforia.GLTFExtractorUtility_GLTFFilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GLTFFilterMode_tD5B2001D189DECE216C8897D451E9E28030C4136, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.GLTFExtractorUtility_GLTFWrapperMode
struct  GLTFWrapperMode_t582EB7D1AE67637E1896D18A72FD658062D0EEC0 
{
public:
	// System.Int32 Vuforia.GLTFExtractorUtility_GLTFWrapperMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GLTFWrapperMode_t582EB7D1AE67637E1896D18A72FD658062D0EEC0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.HitTestResult
struct  HitTestResult_t94D92389FD79AEEA1E370E6C25024A1EC996A21D  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.HitTestResult::mPtr
	intptr_t ___mPtr_0;
	// UnityEngine.Vector3 Vuforia.HitTestResult::mPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mPosition_1;
	// UnityEngine.Quaternion Vuforia.HitTestResult::mOrientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___mOrientation_2;

public:
	inline static int32_t get_offset_of_mPtr_0() { return static_cast<int32_t>(offsetof(HitTestResult_t94D92389FD79AEEA1E370E6C25024A1EC996A21D, ___mPtr_0)); }
	inline intptr_t get_mPtr_0() const { return ___mPtr_0; }
	inline intptr_t* get_address_of_mPtr_0() { return &___mPtr_0; }
	inline void set_mPtr_0(intptr_t value)
	{
		___mPtr_0 = value;
	}

	inline static int32_t get_offset_of_mPosition_1() { return static_cast<int32_t>(offsetof(HitTestResult_t94D92389FD79AEEA1E370E6C25024A1EC996A21D, ___mPosition_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mPosition_1() const { return ___mPosition_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mPosition_1() { return &___mPosition_1; }
	inline void set_mPosition_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mPosition_1 = value;
	}

	inline static int32_t get_offset_of_mOrientation_2() { return static_cast<int32_t>(offsetof(HitTestResult_t94D92389FD79AEEA1E370E6C25024A1EC996A21D, ___mOrientation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_mOrientation_2() const { return ___mOrientation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_mOrientation_2() { return &___mOrientation_2; }
	inline void set_mOrientation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___mOrientation_2 = value;
	}
};


// Vuforia.ImageTargetBuilder_FrameQuality
struct  FrameQuality_tA05570432BB459EC5520225178110C0839B211DE 
{
public:
	// System.Int32 Vuforia.ImageTargetBuilder_FrameQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameQuality_tA05570432BB459EC5520225178110C0839B211DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.ImageTargetFinder_CloudRecoSearchResultData
#pragma pack(push, tp, 1)
struct  CloudRecoSearchResultData_tB9E3396D81B33A382B4DCA9CE950A3385165CD2B 
{
public:
	// System.IntPtr Vuforia.ImageTargetFinder_CloudRecoSearchResultData::TargetNamePtr
	intptr_t ___TargetNamePtr_0;
	// System.IntPtr Vuforia.ImageTargetFinder_CloudRecoSearchResultData::UniqueTargetIdPtr
	intptr_t ___UniqueTargetIdPtr_1;
	// System.IntPtr Vuforia.ImageTargetFinder_CloudRecoSearchResultData::MetaDataPtr
	intptr_t ___MetaDataPtr_2;
	// System.IntPtr Vuforia.ImageTargetFinder_CloudRecoSearchResultData::TargetSearchResultPtr
	intptr_t ___TargetSearchResultPtr_3;
	// System.Single Vuforia.ImageTargetFinder_CloudRecoSearchResultData::TargetSize
	float ___TargetSize_4;
	// System.Int32 Vuforia.ImageTargetFinder_CloudRecoSearchResultData::TrackingRating
	int32_t ___TrackingRating_5;

public:
	inline static int32_t get_offset_of_TargetNamePtr_0() { return static_cast<int32_t>(offsetof(CloudRecoSearchResultData_tB9E3396D81B33A382B4DCA9CE950A3385165CD2B, ___TargetNamePtr_0)); }
	inline intptr_t get_TargetNamePtr_0() const { return ___TargetNamePtr_0; }
	inline intptr_t* get_address_of_TargetNamePtr_0() { return &___TargetNamePtr_0; }
	inline void set_TargetNamePtr_0(intptr_t value)
	{
		___TargetNamePtr_0 = value;
	}

	inline static int32_t get_offset_of_UniqueTargetIdPtr_1() { return static_cast<int32_t>(offsetof(CloudRecoSearchResultData_tB9E3396D81B33A382B4DCA9CE950A3385165CD2B, ___UniqueTargetIdPtr_1)); }
	inline intptr_t get_UniqueTargetIdPtr_1() const { return ___UniqueTargetIdPtr_1; }
	inline intptr_t* get_address_of_UniqueTargetIdPtr_1() { return &___UniqueTargetIdPtr_1; }
	inline void set_UniqueTargetIdPtr_1(intptr_t value)
	{
		___UniqueTargetIdPtr_1 = value;
	}

	inline static int32_t get_offset_of_MetaDataPtr_2() { return static_cast<int32_t>(offsetof(CloudRecoSearchResultData_tB9E3396D81B33A382B4DCA9CE950A3385165CD2B, ___MetaDataPtr_2)); }
	inline intptr_t get_MetaDataPtr_2() const { return ___MetaDataPtr_2; }
	inline intptr_t* get_address_of_MetaDataPtr_2() { return &___MetaDataPtr_2; }
	inline void set_MetaDataPtr_2(intptr_t value)
	{
		___MetaDataPtr_2 = value;
	}

	inline static int32_t get_offset_of_TargetSearchResultPtr_3() { return static_cast<int32_t>(offsetof(CloudRecoSearchResultData_tB9E3396D81B33A382B4DCA9CE950A3385165CD2B, ___TargetSearchResultPtr_3)); }
	inline intptr_t get_TargetSearchResultPtr_3() const { return ___TargetSearchResultPtr_3; }
	inline intptr_t* get_address_of_TargetSearchResultPtr_3() { return &___TargetSearchResultPtr_3; }
	inline void set_TargetSearchResultPtr_3(intptr_t value)
	{
		___TargetSearchResultPtr_3 = value;
	}

	inline static int32_t get_offset_of_TargetSize_4() { return static_cast<int32_t>(offsetof(CloudRecoSearchResultData_tB9E3396D81B33A382B4DCA9CE950A3385165CD2B, ___TargetSize_4)); }
	inline float get_TargetSize_4() const { return ___TargetSize_4; }
	inline float* get_address_of_TargetSize_4() { return &___TargetSize_4; }
	inline void set_TargetSize_4(float value)
	{
		___TargetSize_4 = value;
	}

	inline static int32_t get_offset_of_TrackingRating_5() { return static_cast<int32_t>(offsetof(CloudRecoSearchResultData_tB9E3396D81B33A382B4DCA9CE950A3385165CD2B, ___TrackingRating_5)); }
	inline int32_t get_TrackingRating_5() const { return ___TrackingRating_5; }
	inline int32_t* get_address_of_TrackingRating_5() { return &___TrackingRating_5; }
	inline void set_TrackingRating_5(int32_t value)
	{
		___TrackingRating_5 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.ImageTargetType
struct  ImageTargetType_t2D4CD15CB6F5B248131890D4FA5A9216E9B56D1C 
{
public:
	// System.Int32 Vuforia.ImageTargetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageTargetType_t2D4CD15CB6F5B248131890D4FA5A9216E9B56D1C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.InstanceIdType
struct  InstanceIdType_tF88223BC8A34D0DF499BEEA5C25BFD3D7EF659C9 
{
public:
	// System.Int32 Vuforia.InstanceIdType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InstanceIdType_tF88223BC8A34D0DF499BEEA5C25BFD3D7EF659C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.MidAirPositionerBehaviour_AnchorPositionConfirmedEvent
struct  AnchorPositionConfirmedEvent_t7A8C61703F2893F2BAA448996FA4F404065BDF7C  : public UnityEvent_1_tF63176C7516E6ECD13B8AF2684E42A6437349B3D
{
public:

public:
};


// Vuforia.ModelTargetBehaviour_GuideViewDisplayMode
struct  GuideViewDisplayMode_t1A1302E90A3F0489D5A237B71DD7B6C50E8BDB58 
{
public:
	// System.Int32 Vuforia.ModelTargetBehaviour_GuideViewDisplayMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GuideViewDisplayMode_t1A1302E90A3F0489D5A237B71DD7B6C50E8BDB58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.ObjectTracker
struct  ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA  : public DatasetTracker_t14F875EA1CE6ABDB7345699192189AB763F9DAC8
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder> Vuforia.ObjectTracker::mTargetFinders
	Dictionary_2_t3DD39B09291C43BD2CB85C9F8842571EBD8074C9 * ___mTargetFinders_3;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::mImageTargetBuilder
	ImageTargetBuilder_t7F30FEDC8117F167FE1D072B0DF9F5368DFE6602 * ___mImageTargetBuilder_4;
	// Vuforia.RuntimeImageSource Vuforia.ObjectTracker::mRuntimeImageSource
	RuntimeImageSource_t6653993BB291F700E9BF307C1662FFEA8810A2D0 * ___mRuntimeImageSource_5;

public:
	inline static int32_t get_offset_of_mTargetFinders_3() { return static_cast<int32_t>(offsetof(ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA, ___mTargetFinders_3)); }
	inline Dictionary_2_t3DD39B09291C43BD2CB85C9F8842571EBD8074C9 * get_mTargetFinders_3() const { return ___mTargetFinders_3; }
	inline Dictionary_2_t3DD39B09291C43BD2CB85C9F8842571EBD8074C9 ** get_address_of_mTargetFinders_3() { return &___mTargetFinders_3; }
	inline void set_mTargetFinders_3(Dictionary_2_t3DD39B09291C43BD2CB85C9F8842571EBD8074C9 * value)
	{
		___mTargetFinders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargetFinders_3), (void*)value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_4() { return static_cast<int32_t>(offsetof(ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA, ___mImageTargetBuilder_4)); }
	inline ImageTargetBuilder_t7F30FEDC8117F167FE1D072B0DF9F5368DFE6602 * get_mImageTargetBuilder_4() const { return ___mImageTargetBuilder_4; }
	inline ImageTargetBuilder_t7F30FEDC8117F167FE1D072B0DF9F5368DFE6602 ** get_address_of_mImageTargetBuilder_4() { return &___mImageTargetBuilder_4; }
	inline void set_mImageTargetBuilder_4(ImageTargetBuilder_t7F30FEDC8117F167FE1D072B0DF9F5368DFE6602 * value)
	{
		___mImageTargetBuilder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImageTargetBuilder_4), (void*)value);
	}

	inline static int32_t get_offset_of_mRuntimeImageSource_5() { return static_cast<int32_t>(offsetof(ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA, ___mRuntimeImageSource_5)); }
	inline RuntimeImageSource_t6653993BB291F700E9BF307C1662FFEA8810A2D0 * get_mRuntimeImageSource_5() const { return ___mRuntimeImageSource_5; }
	inline RuntimeImageSource_t6653993BB291F700E9BF307C1662FFEA8810A2D0 ** get_address_of_mRuntimeImageSource_5() { return &___mRuntimeImageSource_5; }
	inline void set_mRuntimeImageSource_5(RuntimeImageSource_t6653993BB291F700E9BF307C1662FFEA8810A2D0 * value)
	{
		___mRuntimeImageSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRuntimeImageSource_5), (void*)value);
	}
};


// Vuforia.PIXEL_FORMAT
struct  PIXEL_FORMAT_t8D2BB6E034315DF28812D1C9805B501F1E22BD82 
{
public:
	// System.Int32 Vuforia.PIXEL_FORMAT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PIXEL_FORMAT_t8D2BB6E034315DF28812D1C9805B501F1E22BD82, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.PlayModeType
struct  PlayModeType_t15993EFA97E73F7095D83A5CA5460D5F5418B8BF 
{
public:
	// System.Int32 Vuforia.PlayModeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayModeType_t15993EFA97E73F7095D83A5CA5460D5F5418B8BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.PositionalDeviceTracker
struct  PositionalDeviceTracker_t6ABCBD564879CA0036D88243CB3C187E5DCED92E  : public DeviceTracker_t167126AB5258179E840F4B1206843BF7207C7EE6
{
public:

public:
};


// Vuforia.SmartTerrainARController_State
struct  State_tA0DAEC7C84E0EBBD7B7742322F2B9CF7B27BDBB1 
{
public:
	// System.Int32 Vuforia.SmartTerrainARController_State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tA0DAEC7C84E0EBBD7B7742322F2B9CF7B27BDBB1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.StageType
struct  StageType_t89937D6768617E7DDA97B543E2D325E00890DAAF 
{
public:
	// System.Int32 Vuforia.StageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StageType_t89937D6768617E7DDA97B543E2D325E00890DAAF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TargetFinder
struct  TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderPtr
	intptr_t ___mTargetFinderPtr_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget> Vuforia.TargetFinder::mTargets
	Dictionary_2_t7F6ACAFB4578BE7E8B0630B416C8E0BAB5D63DB1 * ___mTargets_1;
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderStatePtr
	intptr_t ___mTargetFinderStatePtr_2;
	// Vuforia.TargetFinder_TargetFinderState Vuforia.TargetFinder::mTargetFinderState
	TargetFinderState_t88AAA7CB9D8BD7EC631DACEE7F909B6D8B7043E2  ___mTargetFinderState_3;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder_TargetSearchResult> Vuforia.TargetFinder::mNewResults
	List_1_t60DF7EC96EEBE59608EFF34CE23C1B9AAF1CDC25 * ___mNewResults_4;

public:
	inline static int32_t get_offset_of_mTargetFinderPtr_0() { return static_cast<int32_t>(offsetof(TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC, ___mTargetFinderPtr_0)); }
	inline intptr_t get_mTargetFinderPtr_0() const { return ___mTargetFinderPtr_0; }
	inline intptr_t* get_address_of_mTargetFinderPtr_0() { return &___mTargetFinderPtr_0; }
	inline void set_mTargetFinderPtr_0(intptr_t value)
	{
		___mTargetFinderPtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargets_1() { return static_cast<int32_t>(offsetof(TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC, ___mTargets_1)); }
	inline Dictionary_2_t7F6ACAFB4578BE7E8B0630B416C8E0BAB5D63DB1 * get_mTargets_1() const { return ___mTargets_1; }
	inline Dictionary_2_t7F6ACAFB4578BE7E8B0630B416C8E0BAB5D63DB1 ** get_address_of_mTargets_1() { return &___mTargets_1; }
	inline void set_mTargets_1(Dictionary_2_t7F6ACAFB4578BE7E8B0630B416C8E0BAB5D63DB1 * value)
	{
		___mTargets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinderStatePtr_2() { return static_cast<int32_t>(offsetof(TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC, ___mTargetFinderStatePtr_2)); }
	inline intptr_t get_mTargetFinderStatePtr_2() const { return ___mTargetFinderStatePtr_2; }
	inline intptr_t* get_address_of_mTargetFinderStatePtr_2() { return &___mTargetFinderStatePtr_2; }
	inline void set_mTargetFinderStatePtr_2(intptr_t value)
	{
		___mTargetFinderStatePtr_2 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_3() { return static_cast<int32_t>(offsetof(TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC, ___mTargetFinderState_3)); }
	inline TargetFinderState_t88AAA7CB9D8BD7EC631DACEE7F909B6D8B7043E2  get_mTargetFinderState_3() const { return ___mTargetFinderState_3; }
	inline TargetFinderState_t88AAA7CB9D8BD7EC631DACEE7F909B6D8B7043E2 * get_address_of_mTargetFinderState_3() { return &___mTargetFinderState_3; }
	inline void set_mTargetFinderState_3(TargetFinderState_t88AAA7CB9D8BD7EC631DACEE7F909B6D8B7043E2  value)
	{
		___mTargetFinderState_3 = value;
	}

	inline static int32_t get_offset_of_mNewResults_4() { return static_cast<int32_t>(offsetof(TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC, ___mNewResults_4)); }
	inline List_1_t60DF7EC96EEBE59608EFF34CE23C1B9AAF1CDC25 * get_mNewResults_4() const { return ___mNewResults_4; }
	inline List_1_t60DF7EC96EEBE59608EFF34CE23C1B9AAF1CDC25 ** get_address_of_mNewResults_4() { return &___mNewResults_4; }
	inline void set_mNewResults_4(List_1_t60DF7EC96EEBE59608EFF34CE23C1B9AAF1CDC25 * value)
	{
		___mNewResults_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewResults_4), (void*)value);
	}
};


// Vuforia.TargetFinder_FilterMode
struct  FilterMode_tE647E7E1E7EF7D75FB5ADFCF17E00B30D81ED508 
{
public:
	// System.Int32 Vuforia.TargetFinder_FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_tE647E7E1E7EF7D75FB5ADFCF17E00B30D81ED508, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TargetFinder_InitState
struct  InitState_t6A1561C4216CD71C9104710CE8A931B9376689CF 
{
public:
	// System.Int32 Vuforia.TargetFinder_InitState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitState_t6A1561C4216CD71C9104710CE8A931B9376689CF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TargetFinder_TargetFinderObjectTargetData
#pragma pack(push, tp, 1)
struct  TargetFinderObjectTargetData_t4C54094A8D5E0B2D2D885EA640DD51D334914C33 
{
public:
	// System.Int32 Vuforia.TargetFinder_TargetFinderObjectTargetData::id
	int32_t ___id_0;
	// System.Int32 Vuforia.TargetFinder_TargetFinderObjectTargetData::type
	int32_t ___type_1;
	// UnityEngine.Vector3 Vuforia.TargetFinder_TargetFinderObjectTargetData::center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center_2;
	// UnityEngine.Vector3 Vuforia.TargetFinder_TargetFinderObjectTargetData::size
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(TargetFinderObjectTargetData_t4C54094A8D5E0B2D2D885EA640DD51D334914C33, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(TargetFinderObjectTargetData_t4C54094A8D5E0B2D2D885EA640DD51D334914C33, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_center_2() { return static_cast<int32_t>(offsetof(TargetFinderObjectTargetData_t4C54094A8D5E0B2D2D885EA640DD51D334914C33, ___center_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_center_2() const { return ___center_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_center_2() { return &___center_2; }
	inline void set_center_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___center_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(TargetFinderObjectTargetData_t4C54094A8D5E0B2D2D885EA640DD51D334914C33, ___size_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_size_3() const { return ___size_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___size_3 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TargetFinder_TargetSearchResult
struct  TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320  : public RuntimeObject
{
public:
	// System.String Vuforia.TargetFinder_TargetSearchResult::TargetName
	String_t* ___TargetName_0;
	// System.String Vuforia.TargetFinder_TargetSearchResult::UniqueTargetId
	String_t* ___UniqueTargetId_1;
	// System.IntPtr Vuforia.TargetFinder_TargetSearchResult::TargetSearchResultPtr
	intptr_t ___TargetSearchResultPtr_2;

public:
	inline static int32_t get_offset_of_TargetName_0() { return static_cast<int32_t>(offsetof(TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320, ___TargetName_0)); }
	inline String_t* get_TargetName_0() const { return ___TargetName_0; }
	inline String_t** get_address_of_TargetName_0() { return &___TargetName_0; }
	inline void set_TargetName_0(String_t* value)
	{
		___TargetName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetName_0), (void*)value);
	}

	inline static int32_t get_offset_of_UniqueTargetId_1() { return static_cast<int32_t>(offsetof(TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320, ___UniqueTargetId_1)); }
	inline String_t* get_UniqueTargetId_1() const { return ___UniqueTargetId_1; }
	inline String_t** get_address_of_UniqueTargetId_1() { return &___UniqueTargetId_1; }
	inline void set_UniqueTargetId_1(String_t* value)
	{
		___UniqueTargetId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UniqueTargetId_1), (void*)value);
	}

	inline static int32_t get_offset_of_TargetSearchResultPtr_2() { return static_cast<int32_t>(offsetof(TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320, ___TargetSearchResultPtr_2)); }
	inline intptr_t get_TargetSearchResultPtr_2() const { return ___TargetSearchResultPtr_2; }
	inline intptr_t* get_address_of_TargetSearchResultPtr_2() { return &___TargetSearchResultPtr_2; }
	inline void set_TargetSearchResultPtr_2(intptr_t value)
	{
		___TargetSearchResultPtr_2 = value;
	}
};


// Vuforia.TargetFinder_UpdateState
struct  UpdateState_t85155F6AF6764B6B91AD900EA0F84753466680A4 
{
public:
	// System.Int32 Vuforia.TargetFinder_UpdateState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateState_t85155F6AF6764B6B91AD900EA0F84753466680A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackableBehaviour_Status
struct  Status_tF4BCB949EBED735FCEB8E44FD234B938974A6781 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour_Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_tF4BCB949EBED735FCEB8E44FD234B938974A6781, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackableBehaviour_StatusInfo
struct  StatusInfo_t17E06CD437634121BA51EF49B6064F76E58CD788 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour_StatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusInfo_t17E06CD437634121BA51EF49B6064F76E58CD788, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackableSource
struct  TrackableSource_tA8649A889727AA9D7469846706286509D153417E  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TrackableSource::<TrackableSourcePtr>k__BackingField
	intptr_t ___U3CTrackableSourcePtrU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTrackableSourcePtrU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableSource_tA8649A889727AA9D7469846706286509D153417E, ___U3CTrackableSourcePtrU3Ek__BackingField_0)); }
	inline intptr_t get_U3CTrackableSourcePtrU3Ek__BackingField_0() const { return ___U3CTrackableSourcePtrU3Ek__BackingField_0; }
	inline intptr_t* get_address_of_U3CTrackableSourcePtrU3Ek__BackingField_0() { return &___U3CTrackableSourcePtrU3Ek__BackingField_0; }
	inline void set_U3CTrackableSourcePtrU3Ek__BackingField_0(intptr_t value)
	{
		___U3CTrackableSourcePtrU3Ek__BackingField_0 = value;
	}
};


// Vuforia.TrackerData_FrameState
#pragma pack(push, tp, 1)
struct  FrameState_t51868F581541B8E78EDE8B4E989756980CD9FBAC 
{
public:
	// System.IntPtr Vuforia.TrackerData_FrameState::trackableDataArray
	intptr_t ___trackableDataArray_0;
	// System.IntPtr Vuforia.TrackerData_FrameState::vbDataArray
	intptr_t ___vbDataArray_1;
	// System.IntPtr Vuforia.TrackerData_FrameState::vuMarkResultArray
	intptr_t ___vuMarkResultArray_2;
	// System.IntPtr Vuforia.TrackerData_FrameState::newVuMarkDataArray
	intptr_t ___newVuMarkDataArray_3;
	// System.IntPtr Vuforia.TrackerData_FrameState::illuminationData
	intptr_t ___illuminationData_4;
	// System.Int32 Vuforia.TrackerData_FrameState::numTrackableResults
	int32_t ___numTrackableResults_5;
	// System.Int32 Vuforia.TrackerData_FrameState::numVirtualButtonResults
	int32_t ___numVirtualButtonResults_6;
	// System.Int32 Vuforia.TrackerData_FrameState::frameIndex
	int32_t ___frameIndex_7;
	// System.Int32 Vuforia.TrackerData_FrameState::numVuMarkResults
	int32_t ___numVuMarkResults_8;
	// System.Int32 Vuforia.TrackerData_FrameState::numNewVuMarks
	int32_t ___numNewVuMarks_9;
	// System.Int32 Vuforia.TrackerData_FrameState::deviceTrackableId
	int32_t ___deviceTrackableId_10;
	// System.Int32 Vuforia.TrackerData_FrameState::deviceTrackableStatusInfo
	int32_t ___deviceTrackableStatusInfo_11;
	// UnityEngine.Vector4 Vuforia.TrackerData_FrameState::minCameraCalibration
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___minCameraCalibration_12;

public:
	inline static int32_t get_offset_of_trackableDataArray_0() { return static_cast<int32_t>(offsetof(FrameState_t51868F581541B8E78EDE8B4E989756980CD9FBAC, ___trackableDataArray_0)); }
	inline intptr_t get_trackableDataArray_0() const { return ___trackableDataArray_0; }
	inline intptr_t* get_address_of_trackableDataArray_0() { return &___trackableDataArray_0; }
	inline void set_trackableDataArray_0(intptr_t value)
	{
		___trackableDataArray_0 = value;
	}

	inline static int32_t get_offset_of_vbDataArray_1() { return static_cast<int32_t>(offsetof(FrameState_t51868F581541B8E78EDE8B4E989756980CD9FBAC, ___vbDataArray_1)); }
	inline intptr_t get_vbDataArray_1() const { return ___vbDataArray_1; }
	inline intptr_t* get_address_of_vbDataArray_1() { return &___vbDataArray_1; }
	inline void set_vbDataArray_1(intptr_t value)
	{
		___vbDataArray_1 = value;
	}

	inline static int32_t get_offset_of_vuMarkResultArray_2() { return static_cast<int32_t>(offsetof(FrameState_t51868F581541B8E78EDE8B4E989756980CD9FBAC, ___vuMarkResultArray_2)); }
	inline intptr_t get_vuMarkResultArray_2() const { return ___vuMarkResultArray_2; }
	inline intptr_t* get_address_of_vuMarkResultArray_2() { return &___vuMarkResultArray_2; }
	inline void set_vuMarkResultArray_2(intptr_t value)
	{
		___vuMarkResultArray_2 = value;
	}

	inline static int32_t get_offset_of_newVuMarkDataArray_3() { return static_cast<int32_t>(offsetof(FrameState_t51868F581541B8E78EDE8B4E989756980CD9FBAC, ___newVuMarkDataArray_3)); }
	inline intptr_t get_newVuMarkDataArray_3() const { return ___newVuMarkDataArray_3; }
	inline intptr_t* get_address_of_newVuMarkDataArray_3() { return &___newVuMarkDataArray_3; }
	inline void set_newVuMarkDataArray_3(intptr_t value)
	{
		___newVuMarkDataArray_3 = value;
	}

	inline static int32_t get_offset_of_illuminationData_4() { return static_cast<int32_t>(offsetof(FrameState_t51868F581541B8E78EDE8B4E989756980CD9FBAC, ___illuminationData_4)); }
	inline intptr_t get_illuminationData_4() const { return ___illuminationData_4; }
	inline intptr_t* get_address_of_illuminationData_4() { return &___illuminationData_4; }
	inline void set_illuminationData_4(intptr_t value)
	{
		___illuminationData_4 = value;
	}

	inline static int32_t get_offset_of_numTrackableResults_5() { return static_cast<int32_t>(offsetof(FrameState_t51868F581541B8E78EDE8B4E989756980CD9FBAC, ___numTrackableResults_5)); }
	inline int32_t get_numTrackableResults_5() const { return ___numTrackableResults_5; }
	inline int32_t* get_address_of_numTrackableResults_5() { return &___numTrackableResults_5; }
	inline void set_numTrackableResults_5(int32_t value)
	{
		___numTrackableResults_5 = value;
	}

	inline static int32_t get_offset_of_numVirtualButtonResults_6() { return static_cast<int32_t>(offsetof(FrameState_t51868F581541B8E78EDE8B4E989756980CD9FBAC, ___numVirtualButtonResults_6)); }
	inline int32_t get_numVirtualButtonResults_6() const { return ___numVirtualButtonResults_6; }
	inline int32_t* get_address_of_numVirtualButtonResults_6() { return &___numVirtualButtonResults_6; }
	inline void set_numVirtualButtonResults_6(int32_t value)
	{
		___numVirtualButtonResults_6 = value;
	}

	inline static int32_t get_offset_of_frameIndex_7() { return static_cast<int32_t>(offsetof(FrameState_t51868F581541B8E78EDE8B4E989756980CD9FBAC, ___frameIndex_7)); }
	inline int32_t get_frameIndex_7() const { return ___frameIndex_7; }
	inline int32_t* get_address_of_frameIndex_7() { return &___frameIndex_7; }
	inline void set_frameIndex_7(int32_t value)
	{
		___frameIndex_7 = value;
	}

	inline static int32_t get_offset_of_numVuMarkResults_8() { return static_cast<int32_t>(offsetof(FrameState_t51868F581541B8E78EDE8B4E989756980CD9FBAC, ___numVuMarkResults_8)); }
	inline int32_t get_numVuMarkResults_8() const { return ___numVuMarkResults_8; }
	inline int32_t* get_address_of_numVuMarkResults_8() { return &___numVuMarkResults_8; }
	inline void set_numVuMarkResults_8(int32_t value)
	{
		___numVuMarkResults_8 = value;
	}

	inline static int32_t get_offset_of_numNewVuMarks_9() { return static_cast<int32_t>(offsetof(FrameState_t51868F581541B8E78EDE8B4E989756980CD9FBAC, ___numNewVuMarks_9)); }
	inline int32_t get_numNewVuMarks_9() const { return ___numNewVuMarks_9; }
	inline int32_t* get_address_of_numNewVuMarks_9() { return &___numNewVuMarks_9; }
	inline void set_numNewVuMarks_9(int32_t value)
	{
		___numNewVuMarks_9 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableId_10() { return static_cast<int32_t>(offsetof(FrameState_t51868F581541B8E78EDE8B4E989756980CD9FBAC, ___deviceTrackableId_10)); }
	inline int32_t get_deviceTrackableId_10() const { return ___deviceTrackableId_10; }
	inline int32_t* get_address_of_deviceTrackableId_10() { return &___deviceTrackableId_10; }
	inline void set_deviceTrackableId_10(int32_t value)
	{
		___deviceTrackableId_10 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableStatusInfo_11() { return static_cast<int32_t>(offsetof(FrameState_t51868F581541B8E78EDE8B4E989756980CD9FBAC, ___deviceTrackableStatusInfo_11)); }
	inline int32_t get_deviceTrackableStatusInfo_11() const { return ___deviceTrackableStatusInfo_11; }
	inline int32_t* get_address_of_deviceTrackableStatusInfo_11() { return &___deviceTrackableStatusInfo_11; }
	inline void set_deviceTrackableStatusInfo_11(int32_t value)
	{
		___deviceTrackableStatusInfo_11 = value;
	}

	inline static int32_t get_offset_of_minCameraCalibration_12() { return static_cast<int32_t>(offsetof(FrameState_t51868F581541B8E78EDE8B4E989756980CD9FBAC, ___minCameraCalibration_12)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_minCameraCalibration_12() const { return ___minCameraCalibration_12; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_minCameraCalibration_12() { return &___minCameraCalibration_12; }
	inline void set_minCameraCalibration_12(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___minCameraCalibration_12 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_IlluminationData
#pragma pack(push, tp, 1)
struct  IlluminationData_t17C88256D0887907B6A24DFFEEC3576DAFAAC4F7 
{
public:
	// System.Single Vuforia.TrackerData_IlluminationData::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single Vuforia.TrackerData_IlluminationData::ambientColorTemperature
	float ___ambientColorTemperature_1;
	// System.Single Vuforia.TrackerData_IlluminationData::intensityCorrection
	float ___intensityCorrection_2;
	// UnityEngine.Vector4 Vuforia.TrackerData_IlluminationData::colorCorrection
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___colorCorrection_3;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(IlluminationData_t17C88256D0887907B6A24DFFEEC3576DAFAAC4F7, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(IlluminationData_t17C88256D0887907B6A24DFFEEC3576DAFAAC4F7, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}

	inline static int32_t get_offset_of_intensityCorrection_2() { return static_cast<int32_t>(offsetof(IlluminationData_t17C88256D0887907B6A24DFFEEC3576DAFAAC4F7, ___intensityCorrection_2)); }
	inline float get_intensityCorrection_2() const { return ___intensityCorrection_2; }
	inline float* get_address_of_intensityCorrection_2() { return &___intensityCorrection_2; }
	inline void set_intensityCorrection_2(float value)
	{
		___intensityCorrection_2 = value;
	}

	inline static int32_t get_offset_of_colorCorrection_3() { return static_cast<int32_t>(offsetof(IlluminationData_t17C88256D0887907B6A24DFFEEC3576DAFAAC4F7, ___colorCorrection_3)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_colorCorrection_3() const { return ___colorCorrection_3; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_colorCorrection_3() { return &___colorCorrection_3; }
	inline void set_colorCorrection_3(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___colorCorrection_3 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_ImageHeaderData
#pragma pack(push, tp, 1)
struct  ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED 
{
public:
	// System.IntPtr Vuforia.TrackerData_ImageHeaderData::data
	intptr_t ___data_0;
	// System.Int32 Vuforia.TrackerData_ImageHeaderData::width
	int32_t ___width_1;
	// System.Int32 Vuforia.TrackerData_ImageHeaderData::height
	int32_t ___height_2;
	// System.Int32 Vuforia.TrackerData_ImageHeaderData::stride
	int32_t ___stride_3;
	// System.Int32 Vuforia.TrackerData_ImageHeaderData::bufferWidth
	int32_t ___bufferWidth_4;
	// System.Int32 Vuforia.TrackerData_ImageHeaderData::bufferHeight
	int32_t ___bufferHeight_5;
	// System.Int32 Vuforia.TrackerData_ImageHeaderData::format
	int32_t ___format_6;
	// System.Int32 Vuforia.TrackerData_ImageHeaderData::reallocate
	int32_t ___reallocate_7;
	// System.Int32 Vuforia.TrackerData_ImageHeaderData::updated
	int32_t ___updated_8;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED, ___data_0)); }
	inline intptr_t get_data_0() const { return ___data_0; }
	inline intptr_t* get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(intptr_t value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_stride_3() { return static_cast<int32_t>(offsetof(ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED, ___stride_3)); }
	inline int32_t get_stride_3() const { return ___stride_3; }
	inline int32_t* get_address_of_stride_3() { return &___stride_3; }
	inline void set_stride_3(int32_t value)
	{
		___stride_3 = value;
	}

	inline static int32_t get_offset_of_bufferWidth_4() { return static_cast<int32_t>(offsetof(ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED, ___bufferWidth_4)); }
	inline int32_t get_bufferWidth_4() const { return ___bufferWidth_4; }
	inline int32_t* get_address_of_bufferWidth_4() { return &___bufferWidth_4; }
	inline void set_bufferWidth_4(int32_t value)
	{
		___bufferWidth_4 = value;
	}

	inline static int32_t get_offset_of_bufferHeight_5() { return static_cast<int32_t>(offsetof(ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED, ___bufferHeight_5)); }
	inline int32_t get_bufferHeight_5() const { return ___bufferHeight_5; }
	inline int32_t* get_address_of_bufferHeight_5() { return &___bufferHeight_5; }
	inline void set_bufferHeight_5(int32_t value)
	{
		___bufferHeight_5 = value;
	}

	inline static int32_t get_offset_of_format_6() { return static_cast<int32_t>(offsetof(ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED, ___format_6)); }
	inline int32_t get_format_6() const { return ___format_6; }
	inline int32_t* get_address_of_format_6() { return &___format_6; }
	inline void set_format_6(int32_t value)
	{
		___format_6 = value;
	}

	inline static int32_t get_offset_of_reallocate_7() { return static_cast<int32_t>(offsetof(ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED, ___reallocate_7)); }
	inline int32_t get_reallocate_7() const { return ___reallocate_7; }
	inline int32_t* get_address_of_reallocate_7() { return &___reallocate_7; }
	inline void set_reallocate_7(int32_t value)
	{
		___reallocate_7 = value;
	}

	inline static int32_t get_offset_of_updated_8() { return static_cast<int32_t>(offsetof(ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED, ___updated_8)); }
	inline int32_t get_updated_8() const { return ___updated_8; }
	inline int32_t* get_address_of_updated_8() { return &___updated_8; }
	inline void set_updated_8(int32_t value)
	{
		___updated_8 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_InstanceIdData
#pragma pack(push, tp, 1)
struct  InstanceIdData_tA714033307408D945DD6070ABD4FC0EB64E116B3 
{
public:
	// System.UInt64 Vuforia.TrackerData_InstanceIdData::numericValue
	uint64_t ___numericValue_0;
	// System.IntPtr Vuforia.TrackerData_InstanceIdData::buffer
	intptr_t ___buffer_1;
	// System.IntPtr Vuforia.TrackerData_InstanceIdData::reserved
	intptr_t ___reserved_2;
	// System.UInt32 Vuforia.TrackerData_InstanceIdData::dataLength
	uint32_t ___dataLength_3;
	// System.Int32 Vuforia.TrackerData_InstanceIdData::dataType
	int32_t ___dataType_4;

public:
	inline static int32_t get_offset_of_numericValue_0() { return static_cast<int32_t>(offsetof(InstanceIdData_tA714033307408D945DD6070ABD4FC0EB64E116B3, ___numericValue_0)); }
	inline uint64_t get_numericValue_0() const { return ___numericValue_0; }
	inline uint64_t* get_address_of_numericValue_0() { return &___numericValue_0; }
	inline void set_numericValue_0(uint64_t value)
	{
		___numericValue_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(InstanceIdData_tA714033307408D945DD6070ABD4FC0EB64E116B3, ___buffer_1)); }
	inline intptr_t get_buffer_1() const { return ___buffer_1; }
	inline intptr_t* get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(intptr_t value)
	{
		___buffer_1 = value;
	}

	inline static int32_t get_offset_of_reserved_2() { return static_cast<int32_t>(offsetof(InstanceIdData_tA714033307408D945DD6070ABD4FC0EB64E116B3, ___reserved_2)); }
	inline intptr_t get_reserved_2() const { return ___reserved_2; }
	inline intptr_t* get_address_of_reserved_2() { return &___reserved_2; }
	inline void set_reserved_2(intptr_t value)
	{
		___reserved_2 = value;
	}

	inline static int32_t get_offset_of_dataLength_3() { return static_cast<int32_t>(offsetof(InstanceIdData_tA714033307408D945DD6070ABD4FC0EB64E116B3, ___dataLength_3)); }
	inline uint32_t get_dataLength_3() const { return ___dataLength_3; }
	inline uint32_t* get_address_of_dataLength_3() { return &___dataLength_3; }
	inline void set_dataLength_3(uint32_t value)
	{
		___dataLength_3 = value;
	}

	inline static int32_t get_offset_of_dataType_4() { return static_cast<int32_t>(offsetof(InstanceIdData_tA714033307408D945DD6070ABD4FC0EB64E116B3, ___dataType_4)); }
	inline int32_t get_dataType_4() const { return ___dataType_4; }
	inline int32_t* get_address_of_dataType_4() { return &___dataType_4; }
	inline void set_dataType_4(int32_t value)
	{
		___dataType_4 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_MeshData
#pragma pack(push, tp, 1)
struct  MeshData_tD38586F3BCFBBB3021E649EDFD1BDD342F80A0C6 
{
public:
	// System.IntPtr Vuforia.TrackerData_MeshData::positionsArray
	intptr_t ___positionsArray_0;
	// System.IntPtr Vuforia.TrackerData_MeshData::normalsArray
	intptr_t ___normalsArray_1;
	// System.IntPtr Vuforia.TrackerData_MeshData::texCoordsArray
	intptr_t ___texCoordsArray_2;
	// System.IntPtr Vuforia.TrackerData_MeshData::triangleIdxArray
	intptr_t ___triangleIdxArray_3;
	// System.Int32 Vuforia.TrackerData_MeshData::numVertexValues
	int32_t ___numVertexValues_4;
	// System.Int32 Vuforia.TrackerData_MeshData::hasNormals
	int32_t ___hasNormals_5;
	// System.Int32 Vuforia.TrackerData_MeshData::hasTexCoords
	int32_t ___hasTexCoords_6;
	// System.Int32 Vuforia.TrackerData_MeshData::numTriangleIndices
	int32_t ___numTriangleIndices_7;

public:
	inline static int32_t get_offset_of_positionsArray_0() { return static_cast<int32_t>(offsetof(MeshData_tD38586F3BCFBBB3021E649EDFD1BDD342F80A0C6, ___positionsArray_0)); }
	inline intptr_t get_positionsArray_0() const { return ___positionsArray_0; }
	inline intptr_t* get_address_of_positionsArray_0() { return &___positionsArray_0; }
	inline void set_positionsArray_0(intptr_t value)
	{
		___positionsArray_0 = value;
	}

	inline static int32_t get_offset_of_normalsArray_1() { return static_cast<int32_t>(offsetof(MeshData_tD38586F3BCFBBB3021E649EDFD1BDD342F80A0C6, ___normalsArray_1)); }
	inline intptr_t get_normalsArray_1() const { return ___normalsArray_1; }
	inline intptr_t* get_address_of_normalsArray_1() { return &___normalsArray_1; }
	inline void set_normalsArray_1(intptr_t value)
	{
		___normalsArray_1 = value;
	}

	inline static int32_t get_offset_of_texCoordsArray_2() { return static_cast<int32_t>(offsetof(MeshData_tD38586F3BCFBBB3021E649EDFD1BDD342F80A0C6, ___texCoordsArray_2)); }
	inline intptr_t get_texCoordsArray_2() const { return ___texCoordsArray_2; }
	inline intptr_t* get_address_of_texCoordsArray_2() { return &___texCoordsArray_2; }
	inline void set_texCoordsArray_2(intptr_t value)
	{
		___texCoordsArray_2 = value;
	}

	inline static int32_t get_offset_of_triangleIdxArray_3() { return static_cast<int32_t>(offsetof(MeshData_tD38586F3BCFBBB3021E649EDFD1BDD342F80A0C6, ___triangleIdxArray_3)); }
	inline intptr_t get_triangleIdxArray_3() const { return ___triangleIdxArray_3; }
	inline intptr_t* get_address_of_triangleIdxArray_3() { return &___triangleIdxArray_3; }
	inline void set_triangleIdxArray_3(intptr_t value)
	{
		___triangleIdxArray_3 = value;
	}

	inline static int32_t get_offset_of_numVertexValues_4() { return static_cast<int32_t>(offsetof(MeshData_tD38586F3BCFBBB3021E649EDFD1BDD342F80A0C6, ___numVertexValues_4)); }
	inline int32_t get_numVertexValues_4() const { return ___numVertexValues_4; }
	inline int32_t* get_address_of_numVertexValues_4() { return &___numVertexValues_4; }
	inline void set_numVertexValues_4(int32_t value)
	{
		___numVertexValues_4 = value;
	}

	inline static int32_t get_offset_of_hasNormals_5() { return static_cast<int32_t>(offsetof(MeshData_tD38586F3BCFBBB3021E649EDFD1BDD342F80A0C6, ___hasNormals_5)); }
	inline int32_t get_hasNormals_5() const { return ___hasNormals_5; }
	inline int32_t* get_address_of_hasNormals_5() { return &___hasNormals_5; }
	inline void set_hasNormals_5(int32_t value)
	{
		___hasNormals_5 = value;
	}

	inline static int32_t get_offset_of_hasTexCoords_6() { return static_cast<int32_t>(offsetof(MeshData_tD38586F3BCFBBB3021E649EDFD1BDD342F80A0C6, ___hasTexCoords_6)); }
	inline int32_t get_hasTexCoords_6() const { return ___hasTexCoords_6; }
	inline int32_t* get_address_of_hasTexCoords_6() { return &___hasTexCoords_6; }
	inline void set_hasTexCoords_6(int32_t value)
	{
		___hasTexCoords_6 = value;
	}

	inline static int32_t get_offset_of_numTriangleIndices_7() { return static_cast<int32_t>(offsetof(MeshData_tD38586F3BCFBBB3021E649EDFD1BDD342F80A0C6, ___numTriangleIndices_7)); }
	inline int32_t get_numTriangleIndices_7() const { return ___numTriangleIndices_7; }
	inline int32_t* get_address_of_numTriangleIndices_7() { return &___numTriangleIndices_7; }
	inline void set_numTriangleIndices_7(int32_t value)
	{
		___numTriangleIndices_7 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_Obb2D
#pragma pack(push, tp, 1)
struct  Obb2D_t7CCA91C39032FDBA4F0F5542C42D33106BA447A1 
{
public:
	// UnityEngine.Vector2 Vuforia.TrackerData_Obb2D::center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center_0;
	// UnityEngine.Vector2 Vuforia.TrackerData_Obb2D::halfExtents
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___halfExtents_1;
	// System.Single Vuforia.TrackerData_Obb2D::rotation
	float ___rotation_2;
	// System.Int32 Vuforia.TrackerData_Obb2D::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(Obb2D_t7CCA91C39032FDBA4F0F5542C42D33106BA447A1, ___center_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_center_0() const { return ___center_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_halfExtents_1() { return static_cast<int32_t>(offsetof(Obb2D_t7CCA91C39032FDBA4F0F5542C42D33106BA447A1, ___halfExtents_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_halfExtents_1() const { return ___halfExtents_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_halfExtents_1() { return &___halfExtents_1; }
	inline void set_halfExtents_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___halfExtents_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(Obb2D_t7CCA91C39032FDBA4F0F5542C42D33106BA447A1, ___rotation_2)); }
	inline float get_rotation_2() const { return ___rotation_2; }
	inline float* get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(float value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(Obb2D_t7CCA91C39032FDBA4F0F5542C42D33106BA447A1, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_Obb3D
#pragma pack(push, tp, 1)
struct  Obb3D_t3A9A5E96DE8AC58F92BE6BD00397ACE6BA4DDA05 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData_Obb3D::center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center_0;
	// UnityEngine.Vector3 Vuforia.TrackerData_Obb3D::halfExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___halfExtents_1;
	// System.Single Vuforia.TrackerData_Obb3D::rotationZ
	float ___rotationZ_2;
	// System.Int32 Vuforia.TrackerData_Obb3D::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(Obb3D_t3A9A5E96DE8AC58F92BE6BD00397ACE6BA4DDA05, ___center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_center_0() const { return ___center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_halfExtents_1() { return static_cast<int32_t>(offsetof(Obb3D_t3A9A5E96DE8AC58F92BE6BD00397ACE6BA4DDA05, ___halfExtents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_halfExtents_1() const { return ___halfExtents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_halfExtents_1() { return &___halfExtents_1; }
	inline void set_halfExtents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___halfExtents_1 = value;
	}

	inline static int32_t get_offset_of_rotationZ_2() { return static_cast<int32_t>(offsetof(Obb3D_t3A9A5E96DE8AC58F92BE6BD00397ACE6BA4DDA05, ___rotationZ_2)); }
	inline float get_rotationZ_2() const { return ___rotationZ_2; }
	inline float* get_address_of_rotationZ_2() { return &___rotationZ_2; }
	inline void set_rotationZ_2(float value)
	{
		___rotationZ_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(Obb3D_t3A9A5E96DE8AC58F92BE6BD00397ACE6BA4DDA05, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_PoseData
#pragma pack(push, tp, 1)
struct  PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData_PoseData::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion Vuforia.TrackerData_PoseData::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_1;
	// System.Int32 Vuforia.TrackerData_PoseData::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD, ___orientation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD, ___unused_2)); }
	inline int32_t get_unused_2() const { return ___unused_2; }
	inline int32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(int32_t value)
	{
		___unused_2 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_StructList
#pragma pack(push, tp, 1)
struct  StructList_t7A59E3C1DC3E7EE4AAF4160D8B257E954E64E9B0 
{
public:
	// System.IntPtr Vuforia.TrackerData_StructList::arrayPtr
	intptr_t ___arrayPtr_0;
	// System.Int32 Vuforia.TrackerData_StructList::numResults
	int32_t ___numResults_1;
	// System.Int32 Vuforia.TrackerData_StructList::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_arrayPtr_0() { return static_cast<int32_t>(offsetof(StructList_t7A59E3C1DC3E7EE4AAF4160D8B257E954E64E9B0, ___arrayPtr_0)); }
	inline intptr_t get_arrayPtr_0() const { return ___arrayPtr_0; }
	inline intptr_t* get_address_of_arrayPtr_0() { return &___arrayPtr_0; }
	inline void set_arrayPtr_0(intptr_t value)
	{
		___arrayPtr_0 = value;
	}

	inline static int32_t get_offset_of_numResults_1() { return static_cast<int32_t>(offsetof(StructList_t7A59E3C1DC3E7EE4AAF4160D8B257E954E64E9B0, ___numResults_1)); }
	inline int32_t get_numResults_1() const { return ___numResults_1; }
	inline int32_t* get_address_of_numResults_1() { return &___numResults_1; }
	inline void set_numResults_1(int32_t value)
	{
		___numResults_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(StructList_t7A59E3C1DC3E7EE4AAF4160D8B257E954E64E9B0, ___unused_2)); }
	inline int32_t get_unused_2() const { return ___unused_2; }
	inline int32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(int32_t value)
	{
		___unused_2 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.VirtualButton_Sensitivity
struct  Sensitivity_t3AEE039EB67F188EBCF73EDA565F410FA22A4FAF 
{
public:
	// System.Int32 Vuforia.VirtualButton_Sensitivity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Sensitivity_t3AEE039EB67F188EBCF73EDA565F410FA22A4FAF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaARController_WorldCenterMode
struct  WorldCenterMode_tFE562CB40B6E8371ACB15DE3B9AE076969EE65BA 
{
public:
	// System.Int32 Vuforia.VuforiaARController_WorldCenterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WorldCenterMode_tFE562CB40B6E8371ACB15DE3B9AE076969EE65BA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration_ARCoreRequirement
struct  ARCoreRequirement_t74FE1FD79632E1C6867CA3A7BB0373881028D0C0 
{
public:
	// System.Int32 Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration_ARCoreRequirement::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARCoreRequirement_t74FE1FD79632E1C6867CA3A7BB0373881028D0C0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaManager_<>c__DisplayClass76_0
struct  U3CU3Ec__DisplayClass76_0_tD79645A57080742FC990CADBEA072D5BF12092DA  : public RuntimeObject
{
public:
	// Vuforia.VuforiaManager_TrackableIdPair Vuforia.VuforiaManager_<>c__DisplayClass76_0::id
	TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B  ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_tD79645A57080742FC990CADBEA072D5BF12092DA, ___id_0)); }
	inline TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B  get_id_0() const { return ___id_0; }
	inline TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B * get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B  value)
	{
		___id_0 = value;
	}
};


// Vuforia.VuforiaRenderer_FpsHint
struct  FpsHint_tBB899934C064747CD46C3C2809E1FA5FA128B4A7 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer_FpsHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FpsHint_tBB899934C064747CD46C3C2809E1FA5FA128B4A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaRenderer_RenderEvent
struct  RenderEvent_t240C11EC3F2C57235AF09A4EA9468C41604887DE 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer_RenderEvent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderEvent_t240C11EC3F2C57235AF09A4EA9468C41604887DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaRenderer_RendererAPI
struct  RendererAPI_tD24629A9C5891E57DF103CFFFA5C6349F7B05A09 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer_RendererAPI::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RendererAPI_tD24629A9C5891E57DF103CFFFA5C6349F7B05A09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaRenderer_VideoBGCfgData
#pragma pack(push, tp, 1)
struct  VideoBGCfgData_t871D1457D89A827C3851610217C8AC2E90C385A5 
{
public:
	// Vuforia.VuforiaRenderer_Vec2I Vuforia.VuforiaRenderer_VideoBGCfgData::position
	Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  ___position_0;
	// Vuforia.VuforiaRenderer_Vec2I Vuforia.VuforiaRenderer_VideoBGCfgData::size
	Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  ___size_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t871D1457D89A827C3851610217C8AC2E90C385A5, ___position_0)); }
	inline Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  get_position_0() const { return ___position_0; }
	inline Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(VideoBGCfgData_t871D1457D89A827C3851610217C8AC2E90C385A5, ___size_1)); }
	inline Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  get_size_1() const { return ___size_1; }
	inline Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6 * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  value)
	{
		___size_1 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.VuforiaRenderer_VideoTextureInfo
#pragma pack(push, tp, 1)
struct  VideoTextureInfo_tB1A03EAB8240B846C5DF05CF2442266F5C470DC2 
{
public:
	// Vuforia.VuforiaRenderer_Vec2I Vuforia.VuforiaRenderer_VideoTextureInfo::textureSize
	Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  ___textureSize_0;
	// Vuforia.VuforiaRenderer_Vec2I Vuforia.VuforiaRenderer_VideoTextureInfo::imageSize
	Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  ___imageSize_1;

public:
	inline static int32_t get_offset_of_textureSize_0() { return static_cast<int32_t>(offsetof(VideoTextureInfo_tB1A03EAB8240B846C5DF05CF2442266F5C470DC2, ___textureSize_0)); }
	inline Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  get_textureSize_0() const { return ___textureSize_0; }
	inline Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6 * get_address_of_textureSize_0() { return &___textureSize_0; }
	inline void set_textureSize_0(Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  value)
	{
		___textureSize_0 = value;
	}

	inline static int32_t get_offset_of_imageSize_1() { return static_cast<int32_t>(offsetof(VideoTextureInfo_tB1A03EAB8240B846C5DF05CF2442266F5C470DC2, ___imageSize_1)); }
	inline Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  get_imageSize_1() const { return ___imageSize_1; }
	inline Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6 * get_address_of_imageSize_1() { return &___imageSize_1; }
	inline void set_imageSize_1(Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  value)
	{
		___imageSize_1 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.VuforiaRuntime_InitState
struct  InitState_tBF9C973746BFC6E4482A522C193FE3706A0B2B14 
{
public:
	// System.Int32 Vuforia.VuforiaRuntime_InitState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitState_tBF9C973746BFC6E4482A522C193FE3706A0B2B14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaRuntimeUtilities_InitializableBool
struct  InitializableBool_t48515D90F8B54615F4E3D5B0C9F3C303267CA986 
{
public:
	// System.Int32 Vuforia.VuforiaRuntimeUtilities_InitializableBool::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializableBool_t48515D90F8B54615F4E3D5B0C9F3C303267CA986, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaUnity_InitError
struct  InitError_t8C51F7C1895A706D2522B3422CC09B73248C5B87 
{
public:
	// System.Int32 Vuforia.VuforiaUnity_InitError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitError_t8C51F7C1895A706D2522B3422CC09B73248C5B87, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaUnity_ModelTargetMode
struct  ModelTargetMode_t052590B3D7FB94C90815DC633005254B267BF536 
{
public:
	// System.Int32 Vuforia.VuforiaUnity_ModelTargetMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ModelTargetMode_t052590B3D7FB94C90815DC633005254B267BF536, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaUnity_StorageType
struct  StorageType_t3BAD14686A5FCC2439C257025A236831727A7591 
{
public:
	// System.Int32 Vuforia.VuforiaUnity_StorageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StorageType_t3BAD14686A5FCC2439C257025A236831727A7591, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaUnity_VuforiaHint
struct  VuforiaHint_t1DD6726DCFD8746F55B8417265E966BF2253580F 
{
public:
	// System.Int32 Vuforia.VuforiaUnity_VuforiaHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuforiaHint_t1DD6726DCFD8746F55B8417265E966BF2253580F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.WebCamProfile_ProfileData
struct  ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02 
{
public:
	// Vuforia.VuforiaRenderer_Vec2I Vuforia.WebCamProfile_ProfileData::RequestedTextureSize
	Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  ___RequestedTextureSize_0;
	// Vuforia.VuforiaRenderer_Vec2I Vuforia.WebCamProfile_ProfileData::ResampledTextureSize
	Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile_ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02, ___RequestedTextureSize_0)); }
	inline Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02, ___ResampledTextureSize_1)); }
	inline Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02, ___RequestedFPS_2)); }
	inline int32_t get_RequestedFPS_2() const { return ___RequestedFPS_2; }
	inline int32_t* get_address_of_RequestedFPS_2() { return &___RequestedFPS_2; }
	inline void set_RequestedFPS_2(int32_t value)
	{
		___RequestedFPS_2 = value;
	}
};


// Vuforia.layerErrorMessage
struct  layerErrorMessage_t85404B884C5BD2DEB73495B8802A28C5E45742A4 
{
public:
	// System.Int32 Vuforia.layerErrorMessage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(layerErrorMessage_t85404B884C5BD2DEB73495B8802A28C5E45742A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
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


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.Shader
struct  Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Vuforia.AreaTargetPreviewVisualization_<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_tAD49F7B2ED9AA3E98EC650F525497040631659C8  : public RuntimeObject
{
public:
	// UnityEngine.HideFlags Vuforia.AreaTargetPreviewVisualization_<>c__DisplayClass4_0::hideFlags
	int32_t ___hideFlags_0;

public:
	inline static int32_t get_offset_of_hideFlags_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tAD49F7B2ED9AA3E98EC650F525497040631659C8, ___hideFlags_0)); }
	inline int32_t get_hideFlags_0() const { return ___hideFlags_0; }
	inline int32_t* get_address_of_hideFlags_0() { return &___hideFlags_0; }
	inline void set_hideFlags_0(int32_t value)
	{
		___hideFlags_0 = value;
	}
};


// Vuforia.CameraDevice_CameraField
struct  CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E 
{
public:
	// Vuforia.CameraDevice_CameraField_DataType Vuforia.CameraDevice_CameraField::Type
	int32_t ___Type_0;
	// System.String Vuforia.CameraDevice_CameraField::Key
	String_t* ___Key_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Key_1() { return static_cast<int32_t>(offsetof(CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E, ___Key_1)); }
	inline String_t* get_Key_1() const { return ___Key_1; }
	inline String_t** get_address_of_Key_1() { return &___Key_1; }
	inline void set_Key_1(String_t* value)
	{
		___Key_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.CameraDevice/CameraField
struct CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshaled_pinvoke
{
	int32_t ___Type_0;
	char* ___Key_1;
};
// Native definition for COM marshalling of Vuforia.CameraDevice/CameraField
struct CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshaled_com
{
	int32_t ___Type_0;
	Il2CppChar* ___Key_1;
};

// Vuforia.CommandBufferTextureDefinition
struct  CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE  : public RuntimeObject
{
public:
	// System.UInt32 Vuforia.CommandBufferTextureDefinition::CommandBufferTextureId
	uint32_t ___CommandBufferTextureId_0;
	// System.Int32 Vuforia.CommandBufferTextureDefinition::Width
	int32_t ___Width_1;
	// System.Int32 Vuforia.CommandBufferTextureDefinition::Height
	int32_t ___Height_2;
	// UnityEngine.TextureFormat Vuforia.CommandBufferTextureDefinition::TextureFormat
	int32_t ___TextureFormat_3;
	// System.String Vuforia.CommandBufferTextureDefinition::ShaderTextureName
	String_t* ___ShaderTextureName_4;

public:
	inline static int32_t get_offset_of_CommandBufferTextureId_0() { return static_cast<int32_t>(offsetof(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE, ___CommandBufferTextureId_0)); }
	inline uint32_t get_CommandBufferTextureId_0() const { return ___CommandBufferTextureId_0; }
	inline uint32_t* get_address_of_CommandBufferTextureId_0() { return &___CommandBufferTextureId_0; }
	inline void set_CommandBufferTextureId_0(uint32_t value)
	{
		___CommandBufferTextureId_0 = value;
	}

	inline static int32_t get_offset_of_Width_1() { return static_cast<int32_t>(offsetof(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE, ___Width_1)); }
	inline int32_t get_Width_1() const { return ___Width_1; }
	inline int32_t* get_address_of_Width_1() { return &___Width_1; }
	inline void set_Width_1(int32_t value)
	{
		___Width_1 = value;
	}

	inline static int32_t get_offset_of_Height_2() { return static_cast<int32_t>(offsetof(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE, ___Height_2)); }
	inline int32_t get_Height_2() const { return ___Height_2; }
	inline int32_t* get_address_of_Height_2() { return &___Height_2; }
	inline void set_Height_2(int32_t value)
	{
		___Height_2 = value;
	}

	inline static int32_t get_offset_of_TextureFormat_3() { return static_cast<int32_t>(offsetof(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE, ___TextureFormat_3)); }
	inline int32_t get_TextureFormat_3() const { return ___TextureFormat_3; }
	inline int32_t* get_address_of_TextureFormat_3() { return &___TextureFormat_3; }
	inline void set_TextureFormat_3(int32_t value)
	{
		___TextureFormat_3 = value;
	}

	inline static int32_t get_offset_of_ShaderTextureName_4() { return static_cast<int32_t>(offsetof(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE, ___ShaderTextureName_4)); }
	inline String_t* get_ShaderTextureName_4() const { return ___ShaderTextureName_4; }
	inline String_t** get_address_of_ShaderTextureName_4() { return &___ShaderTextureName_4; }
	inline void set_ShaderTextureName_4(String_t* value)
	{
		___ShaderTextureName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShaderTextureName_4), (void*)value);
	}
};


// Vuforia.EditorClasses.JSONNode
struct  JSONNode_t2AC73352107C87692E5E6508C959400504495752  : public RuntimeObject
{
public:
	// Vuforia.EditorClasses.JSONNode_JSONType Vuforia.EditorClasses.JSONNode::<JSONDataType>k__BackingField
	int32_t ___U3CJSONDataTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CJSONDataTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JSONNode_t2AC73352107C87692E5E6508C959400504495752, ___U3CJSONDataTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CJSONDataTypeU3Ek__BackingField_2() const { return ___U3CJSONDataTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CJSONDataTypeU3Ek__BackingField_2() { return &___U3CJSONDataTypeU3Ek__BackingField_2; }
	inline void set_U3CJSONDataTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CJSONDataTypeU3Ek__BackingField_2 = value;
	}
};

struct JSONNode_t2AC73352107C87692E5E6508C959400504495752_StaticFields
{
public:
	// System.String Vuforia.EditorClasses.JSONNode::DEFAULT_NODE_STR
	String_t* ___DEFAULT_NODE_STR_0;
	// System.String Vuforia.EditorClasses.JSONNode::QUOTE_STR
	String_t* ___QUOTE_STR_1;

public:
	inline static int32_t get_offset_of_DEFAULT_NODE_STR_0() { return static_cast<int32_t>(offsetof(JSONNode_t2AC73352107C87692E5E6508C959400504495752_StaticFields, ___DEFAULT_NODE_STR_0)); }
	inline String_t* get_DEFAULT_NODE_STR_0() const { return ___DEFAULT_NODE_STR_0; }
	inline String_t** get_address_of_DEFAULT_NODE_STR_0() { return &___DEFAULT_NODE_STR_0; }
	inline void set_DEFAULT_NODE_STR_0(String_t* value)
	{
		___DEFAULT_NODE_STR_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DEFAULT_NODE_STR_0), (void*)value);
	}

	inline static int32_t get_offset_of_QUOTE_STR_1() { return static_cast<int32_t>(offsetof(JSONNode_t2AC73352107C87692E5E6508C959400504495752_StaticFields, ___QUOTE_STR_1)); }
	inline String_t* get_QUOTE_STR_1() const { return ___QUOTE_STR_1; }
	inline String_t** get_address_of_QUOTE_STR_1() { return &___QUOTE_STR_1; }
	inline void set_QUOTE_STR_1(String_t* value)
	{
		___QUOTE_STR_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QUOTE_STR_1), (void*)value);
	}
};


// Vuforia.EditorClasses.JSONObject_<GetEnumerator>d__12
struct  U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.EditorClasses.JSONObject_<GetEnumerator>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.EditorClasses.JSONObject_<GetEnumerator>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Vuforia.EditorClasses.JSONObject Vuforia.EditorClasses.JSONObject_<GetEnumerator>d__12::<>4__this
	JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF * ___U3CU3E4__this_2;
	// System.Collections.Generic.Dictionary`2_Enumerator<System.String,Vuforia.EditorClasses.JSONNode> Vuforia.EditorClasses.JSONObject_<GetEnumerator>d__12::<>7__wrap1
	Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3  ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B, ___U3CU3E4__this_2)); }
	inline JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_3))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_3))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// Vuforia.EditorClasses.JSONObject_<get_Children>d__11
struct  U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.EditorClasses.JSONObject_<get_Children>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Vuforia.EditorClasses.JSONNode Vuforia.EditorClasses.JSONObject_<get_Children>d__11::<>2__current
	JSONNode_t2AC73352107C87692E5E6508C959400504495752 * ___U3CU3E2__current_1;
	// System.Int32 Vuforia.EditorClasses.JSONObject_<get_Children>d__11::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Vuforia.EditorClasses.JSONObject Vuforia.EditorClasses.JSONObject_<get_Children>d__11::<>4__this
	JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2_Enumerator<System.String,Vuforia.EditorClasses.JSONNode> Vuforia.EditorClasses.JSONObject_<get_Children>d__11::<>7__wrap1
	Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B, ___U3CU3E2__current_1)); }
	inline JSONNode_t2AC73352107C87692E5E6508C959400504495752 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JSONNode_t2AC73352107C87692E5E6508C959400504495752 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JSONNode_t2AC73352107C87692E5E6508C959400504495752 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B, ___U3CU3E4__this_3)); }
	inline JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// Vuforia.MultiTargetImpl_MultiSetTargetSize
struct  MultiSetTargetSize_t3228D2FF19C4CFB329B7A3AEE2DD7029726A827D  : public DisabledSetTargetSize_t7051D80708A3A9C81A13959EC41094CEB4B303D4
{
public:
	// System.IntPtr Vuforia.MultiTargetImpl_MultiSetTargetSize::mDataSetPtr
	intptr_t ___mDataSetPtr_1;
	// System.String Vuforia.MultiTargetImpl_MultiSetTargetSize::mName
	String_t* ___mName_2;

public:
	inline static int32_t get_offset_of_mDataSetPtr_1() { return static_cast<int32_t>(offsetof(MultiSetTargetSize_t3228D2FF19C4CFB329B7A3AEE2DD7029726A827D, ___mDataSetPtr_1)); }
	inline intptr_t get_mDataSetPtr_1() const { return ___mDataSetPtr_1; }
	inline intptr_t* get_address_of_mDataSetPtr_1() { return &___mDataSetPtr_1; }
	inline void set_mDataSetPtr_1(intptr_t value)
	{
		___mDataSetPtr_1 = value;
	}

	inline static int32_t get_offset_of_mName_2() { return static_cast<int32_t>(offsetof(MultiSetTargetSize_t3228D2FF19C4CFB329B7A3AEE2DD7029726A827D, ___mName_2)); }
	inline String_t* get_mName_2() const { return ___mName_2; }
	inline String_t** get_address_of_mName_2() { return &___mName_2; }
	inline void set_mName_2(String_t* value)
	{
		___mName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_2), (void*)value);
	}
};


// Vuforia.ObjectRecoBehaviour_<>c__DisplayClass21_0
struct  U3CU3Ec__DisplayClass21_0_tFD16358DE7FC0FBB407E99AC77492F07C5CCA6D7  : public RuntimeObject
{
public:
	// Vuforia.ObjectRecoBehaviour Vuforia.ObjectRecoBehaviour_<>c__DisplayClass21_0::<>4__this
	ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7 * ___U3CU3E4__this_0;
	// Vuforia.TargetFinder_InitState Vuforia.ObjectRecoBehaviour_<>c__DisplayClass21_0::initState
	int32_t ___initState_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_tFD16358DE7FC0FBB407E99AC77492F07C5CCA6D7, ___U3CU3E4__this_0)); }
	inline ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_initState_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_tFD16358DE7FC0FBB407E99AC77492F07C5CCA6D7, ___initState_1)); }
	inline int32_t get_initState_1() const { return ___initState_1; }
	inline int32_t* get_address_of_initState_1() { return &___initState_1; }
	inline void set_initState_1(int32_t value)
	{
		___initState_1 = value;
	}
};


// Vuforia.ObjectRecoBehaviour_<>c__DisplayClass39_0
struct  U3CU3Ec__DisplayClass39_0_t49E8DB6ABD4B02494774E91A61013FE83BA694E2  : public RuntimeObject
{
public:
	// Vuforia.TargetFinder_UpdateState Vuforia.ObjectRecoBehaviour_<>c__DisplayClass39_0::updateState
	int32_t ___updateState_0;

public:
	inline static int32_t get_offset_of_updateState_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass39_0_t49E8DB6ABD4B02494774E91A61013FE83BA694E2, ___updateState_0)); }
	inline int32_t get_updateState_0() const { return ___updateState_0; }
	inline int32_t* get_address_of_updateState_0() { return &___updateState_0; }
	inline void set_updateState_0(int32_t value)
	{
		___updateState_0 = value;
	}
};


// Vuforia.PosixPath_InvalidPathException
struct  InvalidPathException_tF2E491842E10A2B586CD665324960DFA27555158  : public Exception_t
{
public:

public:
};


// Vuforia.RawPtrVideoTextureUpdater_<>c__DisplayClass19_0
struct  U3CU3Ec__DisplayClass19_0_tD9B0DA697079A5346A799BB31439A6F81C164FFC  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> Vuforia.RawPtrVideoTextureUpdater_<>c__DisplayClass19_0::textures
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___textures_0;
	// System.Int32 Vuforia.RawPtrVideoTextureUpdater_<>c__DisplayClass19_0::imageWidth
	int32_t ___imageWidth_1;
	// System.Int32 Vuforia.RawPtrVideoTextureUpdater_<>c__DisplayClass19_0::imageHeight
	int32_t ___imageHeight_2;
	// Vuforia.PIXEL_FORMAT Vuforia.RawPtrVideoTextureUpdater_<>c__DisplayClass19_0::nativePixelFormat
	int32_t ___nativePixelFormat_3;

public:
	inline static int32_t get_offset_of_textures_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tD9B0DA697079A5346A799BB31439A6F81C164FFC, ___textures_0)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_textures_0() const { return ___textures_0; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_textures_0() { return &___textures_0; }
	inline void set_textures_0(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___textures_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textures_0), (void*)value);
	}

	inline static int32_t get_offset_of_imageWidth_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tD9B0DA697079A5346A799BB31439A6F81C164FFC, ___imageWidth_1)); }
	inline int32_t get_imageWidth_1() const { return ___imageWidth_1; }
	inline int32_t* get_address_of_imageWidth_1() { return &___imageWidth_1; }
	inline void set_imageWidth_1(int32_t value)
	{
		___imageWidth_1 = value;
	}

	inline static int32_t get_offset_of_imageHeight_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tD9B0DA697079A5346A799BB31439A6F81C164FFC, ___imageHeight_2)); }
	inline int32_t get_imageHeight_2() const { return ___imageHeight_2; }
	inline int32_t* get_address_of_imageHeight_2() { return &___imageHeight_2; }
	inline void set_imageHeight_2(int32_t value)
	{
		___imageHeight_2 = value;
	}

	inline static int32_t get_offset_of_nativePixelFormat_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tD9B0DA697079A5346A799BB31439A6F81C164FFC, ___nativePixelFormat_3)); }
	inline int32_t get_nativePixelFormat_3() const { return ___nativePixelFormat_3; }
	inline int32_t* get_address_of_nativePixelFormat_3() { return &___nativePixelFormat_3; }
	inline void set_nativePixelFormat_3(int32_t value)
	{
		___nativePixelFormat_3 = value;
	}
};


// Vuforia.SimulatorVisualizationFactory_<>c__DisplayClass10_0
struct  U3CU3Ec__DisplayClass10_0_t665381D18ABE27CA164EEEE9C61489672C75E41D  : public RuntimeObject
{
public:
	// UnityEngine.HideFlags Vuforia.SimulatorVisualizationFactory_<>c__DisplayClass10_0::hideFlags
	int32_t ___hideFlags_0;

public:
	inline static int32_t get_offset_of_hideFlags_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t665381D18ABE27CA164EEEE9C61489672C75E41D, ___hideFlags_0)); }
	inline int32_t get_hideFlags_0() const { return ___hideFlags_0; }
	inline int32_t* get_address_of_hideFlags_0() { return &___hideFlags_0; }
	inline void set_hideFlags_0(int32_t value)
	{
		___hideFlags_0 = value;
	}
};


// Vuforia.TargetFinder_CloudRecoSearchResult
struct  CloudRecoSearchResult_tF1C62668152BE9A2A93AA7AA2D0AFFA74392F613  : public TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320
{
public:
	// System.String Vuforia.TargetFinder_CloudRecoSearchResult::MetaData
	String_t* ___MetaData_3;
	// System.Byte Vuforia.TargetFinder_CloudRecoSearchResult::TrackingRating
	uint8_t ___TrackingRating_4;

public:
	inline static int32_t get_offset_of_MetaData_3() { return static_cast<int32_t>(offsetof(CloudRecoSearchResult_tF1C62668152BE9A2A93AA7AA2D0AFFA74392F613, ___MetaData_3)); }
	inline String_t* get_MetaData_3() const { return ___MetaData_3; }
	inline String_t** get_address_of_MetaData_3() { return &___MetaData_3; }
	inline void set_MetaData_3(String_t* value)
	{
		___MetaData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MetaData_3), (void*)value);
	}

	inline static int32_t get_offset_of_TrackingRating_4() { return static_cast<int32_t>(offsetof(CloudRecoSearchResult_tF1C62668152BE9A2A93AA7AA2D0AFFA74392F613, ___TrackingRating_4)); }
	inline uint8_t get_TrackingRating_4() const { return ___TrackingRating_4; }
	inline uint8_t* get_address_of_TrackingRating_4() { return &___TrackingRating_4; }
	inline void set_TrackingRating_4(uint8_t value)
	{
		___TrackingRating_4 = value;
	}
};


// Vuforia.TrackableBehaviour_<>c__DisplayClass33_0
struct  U3CU3Ec__DisplayClass33_0_t7A0FA07ECAC887F72B1797E7FFAC5B0018D3FA5A  : public RuntimeObject
{
public:
	// Vuforia.TrackableBehaviour_Status Vuforia.TrackableBehaviour_<>c__DisplayClass33_0::previousStatus
	int32_t ___previousStatus_0;
	// Vuforia.TrackableBehaviour_Status Vuforia.TrackableBehaviour_<>c__DisplayClass33_0::newStatus
	int32_t ___newStatus_1;

public:
	inline static int32_t get_offset_of_previousStatus_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t7A0FA07ECAC887F72B1797E7FFAC5B0018D3FA5A, ___previousStatus_0)); }
	inline int32_t get_previousStatus_0() const { return ___previousStatus_0; }
	inline int32_t* get_address_of_previousStatus_0() { return &___previousStatus_0; }
	inline void set_previousStatus_0(int32_t value)
	{
		___previousStatus_0 = value;
	}

	inline static int32_t get_offset_of_newStatus_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_t7A0FA07ECAC887F72B1797E7FFAC5B0018D3FA5A, ___newStatus_1)); }
	inline int32_t get_newStatus_1() const { return ___newStatus_1; }
	inline int32_t* get_address_of_newStatus_1() { return &___newStatus_1; }
	inline void set_newStatus_1(int32_t value)
	{
		___newStatus_1 = value;
	}
};


// Vuforia.TrackableBehaviour_<>c__DisplayClass34_0
struct  U3CU3Ec__DisplayClass34_0_tFA29138D3CAF12CBC7F44972AA8C5060F5AD75D2  : public RuntimeObject
{
public:
	// Vuforia.TrackableBehaviour_StatusInfo Vuforia.TrackableBehaviour_<>c__DisplayClass34_0::previousStatusInfo
	int32_t ___previousStatusInfo_0;
	// Vuforia.TrackableBehaviour_StatusInfo Vuforia.TrackableBehaviour_<>c__DisplayClass34_0::newStatusInfo
	int32_t ___newStatusInfo_1;

public:
	inline static int32_t get_offset_of_previousStatusInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_tFA29138D3CAF12CBC7F44972AA8C5060F5AD75D2, ___previousStatusInfo_0)); }
	inline int32_t get_previousStatusInfo_0() const { return ___previousStatusInfo_0; }
	inline int32_t* get_address_of_previousStatusInfo_0() { return &___previousStatusInfo_0; }
	inline void set_previousStatusInfo_0(int32_t value)
	{
		___previousStatusInfo_0 = value;
	}

	inline static int32_t get_offset_of_newStatusInfo_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_tFA29138D3CAF12CBC7F44972AA8C5060F5AD75D2, ___newStatusInfo_1)); }
	inline int32_t get_newStatusInfo_1() const { return ___newStatusInfo_1; }
	inline int32_t* get_address_of_newStatusInfo_1() { return &___newStatusInfo_1; }
	inline void set_newStatusInfo_1(int32_t value)
	{
		___newStatusInfo_1 = value;
	}
};


// Vuforia.TrackableBehaviour_StatusChangeResult
struct  StatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174 
{
public:
	// Vuforia.TrackableBehaviour_Status Vuforia.TrackableBehaviour_StatusChangeResult::PreviousStatus
	int32_t ___PreviousStatus_0;
	// Vuforia.TrackableBehaviour_Status Vuforia.TrackableBehaviour_StatusChangeResult::NewStatus
	int32_t ___NewStatus_1;

public:
	inline static int32_t get_offset_of_PreviousStatus_0() { return static_cast<int32_t>(offsetof(StatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174, ___PreviousStatus_0)); }
	inline int32_t get_PreviousStatus_0() const { return ___PreviousStatus_0; }
	inline int32_t* get_address_of_PreviousStatus_0() { return &___PreviousStatus_0; }
	inline void set_PreviousStatus_0(int32_t value)
	{
		___PreviousStatus_0 = value;
	}

	inline static int32_t get_offset_of_NewStatus_1() { return static_cast<int32_t>(offsetof(StatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174, ___NewStatus_1)); }
	inline int32_t get_NewStatus_1() const { return ___NewStatus_1; }
	inline int32_t* get_address_of_NewStatus_1() { return &___NewStatus_1; }
	inline void set_NewStatus_1(int32_t value)
	{
		___NewStatus_1 = value;
	}
};


// Vuforia.TrackableBehaviour_StatusInfoChangeResult
struct  StatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504 
{
public:
	// Vuforia.TrackableBehaviour_StatusInfo Vuforia.TrackableBehaviour_StatusInfoChangeResult::PreviousStatusInfo
	int32_t ___PreviousStatusInfo_0;
	// Vuforia.TrackableBehaviour_StatusInfo Vuforia.TrackableBehaviour_StatusInfoChangeResult::NewStatusInfo
	int32_t ___NewStatusInfo_1;

public:
	inline static int32_t get_offset_of_PreviousStatusInfo_0() { return static_cast<int32_t>(offsetof(StatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504, ___PreviousStatusInfo_0)); }
	inline int32_t get_PreviousStatusInfo_0() const { return ___PreviousStatusInfo_0; }
	inline int32_t* get_address_of_PreviousStatusInfo_0() { return &___PreviousStatusInfo_0; }
	inline void set_PreviousStatusInfo_0(int32_t value)
	{
		___PreviousStatusInfo_0 = value;
	}

	inline static int32_t get_offset_of_NewStatusInfo_1() { return static_cast<int32_t>(offsetof(StatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504, ___NewStatusInfo_1)); }
	inline int32_t get_NewStatusInfo_1() const { return ___NewStatusInfo_1; }
	inline int32_t* get_address_of_NewStatusInfo_1() { return &___NewStatusInfo_1; }
	inline void set_NewStatusInfo_1(int32_t value)
	{
		___NewStatusInfo_1 = value;
	}
};


// Vuforia.TrackerData_ManagedFrameState
struct  ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467 
{
public:
	// Vuforia.TrackerData_TrackableResultData[] Vuforia.TrackerData_ManagedFrameState::TrackableResultDataArray
	TrackableResultDataU5BU5D_t7748EA908993162703714DE2DCF878C903A33A60* ___TrackableResultDataArray_0;
	// Vuforia.TrackerData_VuMarkTargetData[] Vuforia.TrackerData_ManagedFrameState::VuMarkDataArray
	VuMarkTargetDataU5BU5D_t7062002393AAA425C920A93605BE2FE0378B7937* ___VuMarkDataArray_1;
	// Vuforia.TrackerData_VuMarkTargetResultData[] Vuforia.TrackerData_ManagedFrameState::VuMarkResultDataArray
	VuMarkTargetResultDataU5BU5D_t968E620BD487CD51963064373144BA11A4A403E8* ___VuMarkResultDataArray_2;
	// Vuforia.TrackerData_VirtualButtonData[] Vuforia.TrackerData_ManagedFrameState::VirtualButtonData
	VirtualButtonDataU5BU5D_t5CF3ACC5B148D3FD69E97E6418D342AC2575C6EB* ___VirtualButtonData_3;
	// System.Boolean Vuforia.TrackerData_ManagedFrameState::IsIlluminationDataValid
	bool ___IsIlluminationDataValid_4;
	// Vuforia.TrackerData_IlluminationData Vuforia.TrackerData_ManagedFrameState::IlluminationData
	IlluminationData_t17C88256D0887907B6A24DFFEEC3576DAFAAC4F7  ___IlluminationData_5;
	// System.Int32 Vuforia.TrackerData_ManagedFrameState::frameIndex
	int32_t ___frameIndex_6;
	// System.Int32 Vuforia.TrackerData_ManagedFrameState::deviceTrackableId
	int32_t ___deviceTrackableId_7;
	// System.Int32 Vuforia.TrackerData_ManagedFrameState::deviceTrackableStatusInfo
	int32_t ___deviceTrackableStatusInfo_8;
	// UnityEngine.Vector4 Vuforia.TrackerData_ManagedFrameState::minCameraCalibration
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___minCameraCalibration_9;

public:
	inline static int32_t get_offset_of_TrackableResultDataArray_0() { return static_cast<int32_t>(offsetof(ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467, ___TrackableResultDataArray_0)); }
	inline TrackableResultDataU5BU5D_t7748EA908993162703714DE2DCF878C903A33A60* get_TrackableResultDataArray_0() const { return ___TrackableResultDataArray_0; }
	inline TrackableResultDataU5BU5D_t7748EA908993162703714DE2DCF878C903A33A60** get_address_of_TrackableResultDataArray_0() { return &___TrackableResultDataArray_0; }
	inline void set_TrackableResultDataArray_0(TrackableResultDataU5BU5D_t7748EA908993162703714DE2DCF878C903A33A60* value)
	{
		___TrackableResultDataArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackableResultDataArray_0), (void*)value);
	}

	inline static int32_t get_offset_of_VuMarkDataArray_1() { return static_cast<int32_t>(offsetof(ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467, ___VuMarkDataArray_1)); }
	inline VuMarkTargetDataU5BU5D_t7062002393AAA425C920A93605BE2FE0378B7937* get_VuMarkDataArray_1() const { return ___VuMarkDataArray_1; }
	inline VuMarkTargetDataU5BU5D_t7062002393AAA425C920A93605BE2FE0378B7937** get_address_of_VuMarkDataArray_1() { return &___VuMarkDataArray_1; }
	inline void set_VuMarkDataArray_1(VuMarkTargetDataU5BU5D_t7062002393AAA425C920A93605BE2FE0378B7937* value)
	{
		___VuMarkDataArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VuMarkDataArray_1), (void*)value);
	}

	inline static int32_t get_offset_of_VuMarkResultDataArray_2() { return static_cast<int32_t>(offsetof(ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467, ___VuMarkResultDataArray_2)); }
	inline VuMarkTargetResultDataU5BU5D_t968E620BD487CD51963064373144BA11A4A403E8* get_VuMarkResultDataArray_2() const { return ___VuMarkResultDataArray_2; }
	inline VuMarkTargetResultDataU5BU5D_t968E620BD487CD51963064373144BA11A4A403E8** get_address_of_VuMarkResultDataArray_2() { return &___VuMarkResultDataArray_2; }
	inline void set_VuMarkResultDataArray_2(VuMarkTargetResultDataU5BU5D_t968E620BD487CD51963064373144BA11A4A403E8* value)
	{
		___VuMarkResultDataArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VuMarkResultDataArray_2), (void*)value);
	}

	inline static int32_t get_offset_of_VirtualButtonData_3() { return static_cast<int32_t>(offsetof(ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467, ___VirtualButtonData_3)); }
	inline VirtualButtonDataU5BU5D_t5CF3ACC5B148D3FD69E97E6418D342AC2575C6EB* get_VirtualButtonData_3() const { return ___VirtualButtonData_3; }
	inline VirtualButtonDataU5BU5D_t5CF3ACC5B148D3FD69E97E6418D342AC2575C6EB** get_address_of_VirtualButtonData_3() { return &___VirtualButtonData_3; }
	inline void set_VirtualButtonData_3(VirtualButtonDataU5BU5D_t5CF3ACC5B148D3FD69E97E6418D342AC2575C6EB* value)
	{
		___VirtualButtonData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VirtualButtonData_3), (void*)value);
	}

	inline static int32_t get_offset_of_IsIlluminationDataValid_4() { return static_cast<int32_t>(offsetof(ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467, ___IsIlluminationDataValid_4)); }
	inline bool get_IsIlluminationDataValid_4() const { return ___IsIlluminationDataValid_4; }
	inline bool* get_address_of_IsIlluminationDataValid_4() { return &___IsIlluminationDataValid_4; }
	inline void set_IsIlluminationDataValid_4(bool value)
	{
		___IsIlluminationDataValid_4 = value;
	}

	inline static int32_t get_offset_of_IlluminationData_5() { return static_cast<int32_t>(offsetof(ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467, ___IlluminationData_5)); }
	inline IlluminationData_t17C88256D0887907B6A24DFFEEC3576DAFAAC4F7  get_IlluminationData_5() const { return ___IlluminationData_5; }
	inline IlluminationData_t17C88256D0887907B6A24DFFEEC3576DAFAAC4F7 * get_address_of_IlluminationData_5() { return &___IlluminationData_5; }
	inline void set_IlluminationData_5(IlluminationData_t17C88256D0887907B6A24DFFEEC3576DAFAAC4F7  value)
	{
		___IlluminationData_5 = value;
	}

	inline static int32_t get_offset_of_frameIndex_6() { return static_cast<int32_t>(offsetof(ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467, ___frameIndex_6)); }
	inline int32_t get_frameIndex_6() const { return ___frameIndex_6; }
	inline int32_t* get_address_of_frameIndex_6() { return &___frameIndex_6; }
	inline void set_frameIndex_6(int32_t value)
	{
		___frameIndex_6 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableId_7() { return static_cast<int32_t>(offsetof(ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467, ___deviceTrackableId_7)); }
	inline int32_t get_deviceTrackableId_7() const { return ___deviceTrackableId_7; }
	inline int32_t* get_address_of_deviceTrackableId_7() { return &___deviceTrackableId_7; }
	inline void set_deviceTrackableId_7(int32_t value)
	{
		___deviceTrackableId_7 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableStatusInfo_8() { return static_cast<int32_t>(offsetof(ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467, ___deviceTrackableStatusInfo_8)); }
	inline int32_t get_deviceTrackableStatusInfo_8() const { return ___deviceTrackableStatusInfo_8; }
	inline int32_t* get_address_of_deviceTrackableStatusInfo_8() { return &___deviceTrackableStatusInfo_8; }
	inline void set_deviceTrackableStatusInfo_8(int32_t value)
	{
		___deviceTrackableStatusInfo_8 = value;
	}

	inline static int32_t get_offset_of_minCameraCalibration_9() { return static_cast<int32_t>(offsetof(ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467, ___minCameraCalibration_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_minCameraCalibration_9() const { return ___minCameraCalibration_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_minCameraCalibration_9() { return &___minCameraCalibration_9; }
	inline void set_minCameraCalibration_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___minCameraCalibration_9 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.TrackerData/ManagedFrameState
struct ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_marshaled_pinvoke
{
	TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * ___TrackableResultDataArray_0;
	VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7 * ___VuMarkDataArray_1;
	VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD * ___VuMarkResultDataArray_2;
	VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140 * ___VirtualButtonData_3;
	int32_t ___IsIlluminationDataValid_4;
	IlluminationData_t17C88256D0887907B6A24DFFEEC3576DAFAAC4F7  ___IlluminationData_5;
	int32_t ___frameIndex_6;
	int32_t ___deviceTrackableId_7;
	int32_t ___deviceTrackableStatusInfo_8;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___minCameraCalibration_9;
};
// Native definition for COM marshalling of Vuforia.TrackerData/ManagedFrameState
struct ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_marshaled_com
{
	TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * ___TrackableResultDataArray_0;
	VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7 * ___VuMarkDataArray_1;
	VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD * ___VuMarkResultDataArray_2;
	VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140 * ___VirtualButtonData_3;
	int32_t ___IsIlluminationDataValid_4;
	IlluminationData_t17C88256D0887907B6A24DFFEEC3576DAFAAC4F7  ___IlluminationData_5;
	int32_t ___frameIndex_6;
	int32_t ___deviceTrackableId_7;
	int32_t ___deviceTrackableStatusInfo_8;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___minCameraCalibration_9;
};

// Vuforia.TrackerData_TrackableResultData
#pragma pack(push, tp, 1)
struct  TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 
{
public:
	// Vuforia.TrackerData_PoseData Vuforia.TrackerData_TrackableResultData::pose
	PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD  ___pose_0;
	// System.Double Vuforia.TrackerData_TrackableResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::statusInfo
	int32_t ___statusInfo_3;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::id
	int32_t ___id_4;
	// System.Int32 Vuforia.TrackerData_TrackableResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87, ___pose_0)); }
	inline PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD  get_pose_0() const { return ___pose_0; }
	inline PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_statusInfo_3() { return static_cast<int32_t>(offsetof(TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87, ___statusInfo_3)); }
	inline int32_t get_statusInfo_3() const { return ___statusInfo_3; }
	inline int32_t* get_address_of_statusInfo_3() { return &___statusInfo_3; }
	inline void set_statusInfo_3(int32_t value)
	{
		___statusInfo_3 = value;
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_VuMarkTargetData
#pragma pack(push, tp, 1)
struct  VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7 
{
public:
	// Vuforia.TrackerData_InstanceIdData Vuforia.TrackerData_VuMarkTargetData::instanceId
	InstanceIdData_tA714033307408D945DD6070ABD4FC0EB64E116B3  ___instanceId_0;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetData::id
	int32_t ___id_1;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetData::templateId
	int32_t ___templateId_2;
	// UnityEngine.Vector3 Vuforia.TrackerData_VuMarkTargetData::size
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size_3;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetData::unused
	int32_t ___unused_4;

public:
	inline static int32_t get_offset_of_instanceId_0() { return static_cast<int32_t>(offsetof(VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7, ___instanceId_0)); }
	inline InstanceIdData_tA714033307408D945DD6070ABD4FC0EB64E116B3  get_instanceId_0() const { return ___instanceId_0; }
	inline InstanceIdData_tA714033307408D945DD6070ABD4FC0EB64E116B3 * get_address_of_instanceId_0() { return &___instanceId_0; }
	inline void set_instanceId_0(InstanceIdData_tA714033307408D945DD6070ABD4FC0EB64E116B3  value)
	{
		___instanceId_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_templateId_2() { return static_cast<int32_t>(offsetof(VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7, ___templateId_2)); }
	inline int32_t get_templateId_2() const { return ___templateId_2; }
	inline int32_t* get_address_of_templateId_2() { return &___templateId_2; }
	inline void set_templateId_2(int32_t value)
	{
		___templateId_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7, ___size_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_size_3() const { return ___size_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_unused_4() { return static_cast<int32_t>(offsetof(VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7, ___unused_4)); }
	inline int32_t get_unused_4() const { return ___unused_4; }
	inline int32_t* get_address_of_unused_4() { return &___unused_4; }
	inline void set_unused_4(int32_t value)
	{
		___unused_4 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData_VuMarkTargetResultData
#pragma pack(push, tp, 1)
struct  VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD 
{
public:
	// Vuforia.TrackerData_PoseData Vuforia.TrackerData_VuMarkTargetResultData::pose
	PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD  ___pose_0;
	// System.Double Vuforia.TrackerData_VuMarkTargetResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::targetID
	int32_t ___targetID_3;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::resultID
	int32_t ___resultID_4;
	// System.Int32 Vuforia.TrackerData_VuMarkTargetResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD, ___pose_0)); }
	inline PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD  get_pose_0() const { return ___pose_0; }
	inline PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t68165404D1ADE5AB5E1488D26EB1751C4CF09FFD  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_targetID_3() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD, ___targetID_3)); }
	inline int32_t get_targetID_3() const { return ___targetID_3; }
	inline int32_t* get_address_of_targetID_3() { return &___targetID_3; }
	inline void set_targetID_3(int32_t value)
	{
		___targetID_3 = value;
	}

	inline static int32_t get_offset_of_resultID_4() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD, ___resultID_4)); }
	inline int32_t get_resultID_4() const { return ___resultID_4; }
	inline int32_t* get_address_of_resultID_4() { return &___resultID_4; }
	inline void set_resultID_4(int32_t value)
	{
		___resultID_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.UserDefinedTargetBuildingBehaviour_<>c__DisplayClass25_0
struct  U3CU3Ec__DisplayClass25_0_tD872908B38989C7BC414821DA592073A148F94CE  : public RuntimeObject
{
public:
	// Vuforia.ImageTargetBuilder_FrameQuality Vuforia.UserDefinedTargetBuildingBehaviour_<>c__DisplayClass25_0::frameQuality
	int32_t ___frameQuality_0;

public:
	inline static int32_t get_offset_of_frameQuality_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_tD872908B38989C7BC414821DA592073A148F94CE, ___frameQuality_0)); }
	inline int32_t get_frameQuality_0() const { return ___frameQuality_0; }
	inline int32_t* get_address_of_frameQuality_0() { return &___frameQuality_0; }
	inline void set_frameQuality_0(int32_t value)
	{
		___frameQuality_0 = value;
	}
};


// Vuforia.VuMarkTargetImpl_VuMarkSetTargetSize
struct  VuMarkSetTargetSize_tC13FEF69987297539E648616C0813C46A8019898  : public DisabledSetTargetSize_t7051D80708A3A9C81A13959EC41094CEB4B303D4
{
public:
	// Vuforia.VuMarkTemplate Vuforia.VuMarkTargetImpl_VuMarkSetTargetSize::mTemplate
	RuntimeObject* ___mTemplate_1;

public:
	inline static int32_t get_offset_of_mTemplate_1() { return static_cast<int32_t>(offsetof(VuMarkSetTargetSize_tC13FEF69987297539E648616C0813C46A8019898, ___mTemplate_1)); }
	inline RuntimeObject* get_mTemplate_1() const { return ___mTemplate_1; }
	inline RuntimeObject** get_address_of_mTemplate_1() { return &___mTemplate_1; }
	inline void set_mTemplate_1(RuntimeObject* value)
	{
		___mTemplate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTemplate_1), (void*)value);
	}
};


// Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration
struct  DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration::autoStartTracker
	bool ___autoStartTracker_1;
	// Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration_ARCoreRequirement Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration::arcoreRequirement
	int32_t ___arcoreRequirement_2;
	// System.Boolean Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration::autoImportArcore
	bool ___autoImportArcore_3;

public:
	inline static int32_t get_offset_of_autoStartTracker_1() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390, ___autoStartTracker_1)); }
	inline bool get_autoStartTracker_1() const { return ___autoStartTracker_1; }
	inline bool* get_address_of_autoStartTracker_1() { return &___autoStartTracker_1; }
	inline void set_autoStartTracker_1(bool value)
	{
		___autoStartTracker_1 = value;
	}

	inline static int32_t get_offset_of_arcoreRequirement_2() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390, ___arcoreRequirement_2)); }
	inline int32_t get_arcoreRequirement_2() const { return ___arcoreRequirement_2; }
	inline int32_t* get_address_of_arcoreRequirement_2() { return &___arcoreRequirement_2; }
	inline void set_arcoreRequirement_2(int32_t value)
	{
		___arcoreRequirement_2 = value;
	}

	inline static int32_t get_offset_of_autoImportArcore_3() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390, ___autoImportArcore_3)); }
	inline bool get_autoImportArcore_3() const { return ___autoImportArcore_3; }
	inline bool* get_address_of_autoImportArcore_3() { return &___autoImportArcore_3; }
	inline void set_autoImportArcore_3(bool value)
	{
		___autoImportArcore_3 = value;
	}
};


// Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration
struct  GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_2;
	// System.String Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::ufoLicenseKey
	String_t* ___ufoLicenseKey_3;
	// System.Boolean Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_4;
	// Vuforia.CameraDevice_CameraDeviceMode Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_5;
	// System.Int32 Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_6;
	// System.Int32 Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::maxSimultaneousObjectTargets
	int32_t ___maxSimultaneousObjectTargets_7;
	// System.Single Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::previousVirtualSceneScaleFactor
	float ___previousVirtualSceneScaleFactor_8;
	// System.Single Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::virtualSceneScaleFactor
	float ___virtualSceneScaleFactor_9;
	// System.Boolean Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::useDelayedLoadingObjectTargets
	bool ___useDelayedLoadingObjectTargets_10;
	// System.Boolean Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::modelTargetRecoWhileExtendedTracked
	bool ___modelTargetRecoWhileExtendedTracked_11;
	// System.String Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::version
	String_t* ___version_12;
	// System.String Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::eulaAcceptedVersions
	String_t* ___eulaAcceptedVersions_13;
	// Vuforia.VuforiaUnity_ModelTargetMode Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::modelTargetMode
	int32_t ___modelTargetMode_14;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36, ___vuforiaLicenseKey_2)); }
	inline String_t* get_vuforiaLicenseKey_2() const { return ___vuforiaLicenseKey_2; }
	inline String_t** get_address_of_vuforiaLicenseKey_2() { return &___vuforiaLicenseKey_2; }
	inline void set_vuforiaLicenseKey_2(String_t* value)
	{
		___vuforiaLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vuforiaLicenseKey_2), (void*)value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36, ___ufoLicenseKey_3)); }
	inline String_t* get_ufoLicenseKey_3() const { return ___ufoLicenseKey_3; }
	inline String_t** get_address_of_ufoLicenseKey_3() { return &___ufoLicenseKey_3; }
	inline void set_ufoLicenseKey_3(String_t* value)
	{
		___ufoLicenseKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ufoLicenseKey_3), (void*)value);
	}

	inline static int32_t get_offset_of_delayedInitialization_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36, ___delayedInitialization_4)); }
	inline bool get_delayedInitialization_4() const { return ___delayedInitialization_4; }
	inline bool* get_address_of_delayedInitialization_4() { return &___delayedInitialization_4; }
	inline void set_delayedInitialization_4(bool value)
	{
		___delayedInitialization_4 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36, ___cameraDeviceModeSetting_5)); }
	inline int32_t get_cameraDeviceModeSetting_5() const { return ___cameraDeviceModeSetting_5; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_5() { return &___cameraDeviceModeSetting_5; }
	inline void set_cameraDeviceModeSetting_5(int32_t value)
	{
		___cameraDeviceModeSetting_5 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36, ___maxSimultaneousImageTargets_6)); }
	inline int32_t get_maxSimultaneousImageTargets_6() const { return ___maxSimultaneousImageTargets_6; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_6() { return &___maxSimultaneousImageTargets_6; }
	inline void set_maxSimultaneousImageTargets_6(int32_t value)
	{
		___maxSimultaneousImageTargets_6 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousObjectTargets_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36, ___maxSimultaneousObjectTargets_7)); }
	inline int32_t get_maxSimultaneousObjectTargets_7() const { return ___maxSimultaneousObjectTargets_7; }
	inline int32_t* get_address_of_maxSimultaneousObjectTargets_7() { return &___maxSimultaneousObjectTargets_7; }
	inline void set_maxSimultaneousObjectTargets_7(int32_t value)
	{
		___maxSimultaneousObjectTargets_7 = value;
	}

	inline static int32_t get_offset_of_previousVirtualSceneScaleFactor_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36, ___previousVirtualSceneScaleFactor_8)); }
	inline float get_previousVirtualSceneScaleFactor_8() const { return ___previousVirtualSceneScaleFactor_8; }
	inline float* get_address_of_previousVirtualSceneScaleFactor_8() { return &___previousVirtualSceneScaleFactor_8; }
	inline void set_previousVirtualSceneScaleFactor_8(float value)
	{
		___previousVirtualSceneScaleFactor_8 = value;
	}

	inline static int32_t get_offset_of_virtualSceneScaleFactor_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36, ___virtualSceneScaleFactor_9)); }
	inline float get_virtualSceneScaleFactor_9() const { return ___virtualSceneScaleFactor_9; }
	inline float* get_address_of_virtualSceneScaleFactor_9() { return &___virtualSceneScaleFactor_9; }
	inline void set_virtualSceneScaleFactor_9(float value)
	{
		___virtualSceneScaleFactor_9 = value;
	}

	inline static int32_t get_offset_of_useDelayedLoadingObjectTargets_10() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36, ___useDelayedLoadingObjectTargets_10)); }
	inline bool get_useDelayedLoadingObjectTargets_10() const { return ___useDelayedLoadingObjectTargets_10; }
	inline bool* get_address_of_useDelayedLoadingObjectTargets_10() { return &___useDelayedLoadingObjectTargets_10; }
	inline void set_useDelayedLoadingObjectTargets_10(bool value)
	{
		___useDelayedLoadingObjectTargets_10 = value;
	}

	inline static int32_t get_offset_of_modelTargetRecoWhileExtendedTracked_11() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36, ___modelTargetRecoWhileExtendedTracked_11)); }
	inline bool get_modelTargetRecoWhileExtendedTracked_11() const { return ___modelTargetRecoWhileExtendedTracked_11; }
	inline bool* get_address_of_modelTargetRecoWhileExtendedTracked_11() { return &___modelTargetRecoWhileExtendedTracked_11; }
	inline void set_modelTargetRecoWhileExtendedTracked_11(bool value)
	{
		___modelTargetRecoWhileExtendedTracked_11 = value;
	}

	inline static int32_t get_offset_of_version_12() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36, ___version_12)); }
	inline String_t* get_version_12() const { return ___version_12; }
	inline String_t** get_address_of_version_12() { return &___version_12; }
	inline void set_version_12(String_t* value)
	{
		___version_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_12), (void*)value);
	}

	inline static int32_t get_offset_of_eulaAcceptedVersions_13() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36, ___eulaAcceptedVersions_13)); }
	inline String_t* get_eulaAcceptedVersions_13() const { return ___eulaAcceptedVersions_13; }
	inline String_t** get_address_of_eulaAcceptedVersions_13() { return &___eulaAcceptedVersions_13; }
	inline void set_eulaAcceptedVersions_13(String_t* value)
	{
		___eulaAcceptedVersions_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eulaAcceptedVersions_13), (void*)value);
	}

	inline static int32_t get_offset_of_modelTargetMode_14() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36, ___modelTargetMode_14)); }
	inline int32_t get_modelTargetMode_14() const { return ___modelTargetMode_14; }
	inline int32_t* get_address_of_modelTargetMode_14() { return &___modelTargetMode_14; }
	inline void set_modelTargetMode_14(int32_t value)
	{
		___modelTargetMode_14 = value;
	}
};

struct GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36_StaticFields
{
public:
	// System.Action`2<System.Single,System.Single> Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::VirtualSceneScaleFactorUpdated
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * ___VirtualSceneScaleFactorUpdated_1;

public:
	inline static int32_t get_offset_of_VirtualSceneScaleFactorUpdated_1() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36_StaticFields, ___VirtualSceneScaleFactorUpdated_1)); }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * get_VirtualSceneScaleFactorUpdated_1() const { return ___VirtualSceneScaleFactorUpdated_1; }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 ** get_address_of_VirtualSceneScaleFactorUpdated_1() { return &___VirtualSceneScaleFactorUpdated_1; }
	inline void set_VirtualSceneScaleFactorUpdated_1(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * value)
	{
		___VirtualSceneScaleFactorUpdated_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VirtualSceneScaleFactorUpdated_1), (void*)value);
	}
};


// Vuforia.VuforiaConfiguration_PlayModeConfiguration
struct  PlayModeConfiguration_tAE3B5638AA25D2FC6C10B64CA4BF26F3EE026695  : public RuntimeObject
{
public:
	// Vuforia.PlayModeType Vuforia.VuforiaConfiguration_PlayModeConfiguration::playModeType
	int32_t ___playModeType_0;

public:
	inline static int32_t get_offset_of_playModeType_0() { return static_cast<int32_t>(offsetof(PlayModeConfiguration_tAE3B5638AA25D2FC6C10B64CA4BF26F3EE026695, ___playModeType_0)); }
	inline int32_t get_playModeType_0() const { return ___playModeType_0; }
	inline int32_t* get_address_of_playModeType_0() { return &___playModeType_0; }
	inline void set_playModeType_0(int32_t value)
	{
		___playModeType_0 = value;
	}
};


// Vuforia.VuforiaRuntimeUtilities_CameraState
struct  CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF 
{
public:
	// System.Boolean Vuforia.VuforiaRuntimeUtilities_CameraState::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_0;
	// System.Boolean Vuforia.VuforiaRuntimeUtilities_CameraState::<Active>k__BackingField
	bool ___U3CActiveU3Ek__BackingField_1;
	// Vuforia.CameraDevice_CameraDeviceMode Vuforia.VuforiaRuntimeUtilities_CameraState::<DeviceMode>k__BackingField
	int32_t ___U3CDeviceModeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CInitializedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF, ___U3CInitializedU3Ek__BackingField_0)); }
	inline bool get_U3CInitializedU3Ek__BackingField_0() const { return ___U3CInitializedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CInitializedU3Ek__BackingField_0() { return &___U3CInitializedU3Ek__BackingField_0; }
	inline void set_U3CInitializedU3Ek__BackingField_0(bool value)
	{
		___U3CInitializedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CActiveU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF, ___U3CActiveU3Ek__BackingField_1)); }
	inline bool get_U3CActiveU3Ek__BackingField_1() const { return ___U3CActiveU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CActiveU3Ek__BackingField_1() { return &___U3CActiveU3Ek__BackingField_1; }
	inline void set_U3CActiveU3Ek__BackingField_1(bool value)
	{
		___U3CActiveU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDeviceModeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF, ___U3CDeviceModeU3Ek__BackingField_2)); }
	inline int32_t get_U3CDeviceModeU3Ek__BackingField_2() const { return ___U3CDeviceModeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CDeviceModeU3Ek__BackingField_2() { return &___U3CDeviceModeU3Ek__BackingField_2; }
	inline void set_U3CDeviceModeU3Ek__BackingField_2(int32_t value)
	{
		___U3CDeviceModeU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuforiaRuntimeUtilities/CameraState
struct CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshaled_pinvoke
{
	int32_t ___U3CInitializedU3Ek__BackingField_0;
	int32_t ___U3CActiveU3Ek__BackingField_1;
	int32_t ___U3CDeviceModeU3Ek__BackingField_2;
};
// Native definition for COM marshalling of Vuforia.VuforiaRuntimeUtilities/CameraState
struct CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshaled_com
{
	int32_t ___U3CInitializedU3Ek__BackingField_0;
	int32_t ___U3CActiveU3Ek__BackingField_1;
	int32_t ___U3CDeviceModeU3Ek__BackingField_2;
};

// Vuforia.VuforiaRuntimeUtilities_GlobalVars
struct  GlobalVars_t9BC2F6C729275A1A47758C9B846050AC3FE2FD82  : public RuntimeObject
{
public:

public:
};

struct GlobalVars_t9BC2F6C729275A1A47758C9B846050AC3FE2FD82_StaticFields
{
public:
	// System.String Vuforia.VuforiaRuntimeUtilities_GlobalVars::GLTF_ASSET_LOCATION
	String_t* ___GLTF_ASSET_LOCATION_7;
	// System.String Vuforia.VuforiaRuntimeUtilities_GlobalVars::MODEL_TARGET_DEVICE_TRACKER_WARNING
	String_t* ___MODEL_TARGET_DEVICE_TRACKER_WARNING_17;
	// System.String Vuforia.VuforiaRuntimeUtilities_GlobalVars::GROUND_PLANE_DEVICE_TRACKER_ERROR
	String_t* ___GROUND_PLANE_DEVICE_TRACKER_ERROR_18;

public:
	inline static int32_t get_offset_of_GLTF_ASSET_LOCATION_7() { return static_cast<int32_t>(offsetof(GlobalVars_t9BC2F6C729275A1A47758C9B846050AC3FE2FD82_StaticFields, ___GLTF_ASSET_LOCATION_7)); }
	inline String_t* get_GLTF_ASSET_LOCATION_7() const { return ___GLTF_ASSET_LOCATION_7; }
	inline String_t** get_address_of_GLTF_ASSET_LOCATION_7() { return &___GLTF_ASSET_LOCATION_7; }
	inline void set_GLTF_ASSET_LOCATION_7(String_t* value)
	{
		___GLTF_ASSET_LOCATION_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GLTF_ASSET_LOCATION_7), (void*)value);
	}

	inline static int32_t get_offset_of_MODEL_TARGET_DEVICE_TRACKER_WARNING_17() { return static_cast<int32_t>(offsetof(GlobalVars_t9BC2F6C729275A1A47758C9B846050AC3FE2FD82_StaticFields, ___MODEL_TARGET_DEVICE_TRACKER_WARNING_17)); }
	inline String_t* get_MODEL_TARGET_DEVICE_TRACKER_WARNING_17() const { return ___MODEL_TARGET_DEVICE_TRACKER_WARNING_17; }
	inline String_t** get_address_of_MODEL_TARGET_DEVICE_TRACKER_WARNING_17() { return &___MODEL_TARGET_DEVICE_TRACKER_WARNING_17; }
	inline void set_MODEL_TARGET_DEVICE_TRACKER_WARNING_17(String_t* value)
	{
		___MODEL_TARGET_DEVICE_TRACKER_WARNING_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MODEL_TARGET_DEVICE_TRACKER_WARNING_17), (void*)value);
	}

	inline static int32_t get_offset_of_GROUND_PLANE_DEVICE_TRACKER_ERROR_18() { return static_cast<int32_t>(offsetof(GlobalVars_t9BC2F6C729275A1A47758C9B846050AC3FE2FD82_StaticFields, ___GROUND_PLANE_DEVICE_TRACKER_ERROR_18)); }
	inline String_t* get_GROUND_PLANE_DEVICE_TRACKER_ERROR_18() const { return ___GROUND_PLANE_DEVICE_TRACKER_ERROR_18; }
	inline String_t** get_address_of_GROUND_PLANE_DEVICE_TRACKER_ERROR_18() { return &___GROUND_PLANE_DEVICE_TRACKER_ERROR_18; }
	inline void set_GROUND_PLANE_DEVICE_TRACKER_ERROR_18(String_t* value)
	{
		___GROUND_PLANE_DEVICE_TRACKER_ERROR_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GROUND_PLANE_DEVICE_TRACKER_ERROR_18), (void*)value);
	}
};


// Vuforia.WebCamProfile_ProfileCollection
struct  ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4 
{
public:
	// Vuforia.WebCamProfile_ProfileData Vuforia.WebCamProfile_ProfileCollection::DefaultProfile
	ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02  ___DefaultProfile_0;
	// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile_ProfileData> Vuforia.WebCamProfile_ProfileCollection::Profiles
	Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7 * ___Profiles_1;

public:
	inline static int32_t get_offset_of_DefaultProfile_0() { return static_cast<int32_t>(offsetof(ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4, ___DefaultProfile_0)); }
	inline ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02  get_DefaultProfile_0() const { return ___DefaultProfile_0; }
	inline ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02 * get_address_of_DefaultProfile_0() { return &___DefaultProfile_0; }
	inline void set_DefaultProfile_0(ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02  value)
	{
		___DefaultProfile_0 = value;
	}

	inline static int32_t get_offset_of_Profiles_1() { return static_cast<int32_t>(offsetof(ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4, ___Profiles_1)); }
	inline Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7 * get_Profiles_1() const { return ___Profiles_1; }
	inline Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7 ** get_address_of_Profiles_1() { return &___Profiles_1; }
	inline void set_Profiles_1(Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7 * value)
	{
		___Profiles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Profiles_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4_marshaled_pinvoke
{
	ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02  ___DefaultProfile_0;
	Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7 * ___Profiles_1;
};
// Native definition for COM marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4_marshaled_com
{
	ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02  ___DefaultProfile_0;
	Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7 * ___Profiles_1;
};

// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct  Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Camera>
struct  Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Camera[]>
struct  Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Vuforia.ImageTargetBuilder_FrameQuality>
struct  Action_1_tC87FED509BD0D441A0ADCBFE65149AE21BD08A98  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Vuforia.TargetFinder_InitState>
struct  Action_1_t7E6B55387F9557E0EF71FD16A4BB6AC1F0D6B070  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Vuforia.TargetFinder_TargetSearchResult>
struct  Action_1_t5381EA86F908E22A8AF6E683B74245C1F5F81193  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Vuforia.TargetFinder_UpdateState>
struct  Action_1_t2A0AF9B2D555659D37BD5E81A8AA03D210E86FF1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Vuforia.TargetFinder>
struct  Action_1_t680968FBB826541F142EBF7D79C27906716B992A  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Vuforia.TrackableBehaviour_StatusChangeResult>
struct  Action_1_tE133B6E55A36D1C644478448C38E781E97126FF6  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Vuforia.TrackableBehaviour_StatusInfoChangeResult>
struct  Action_1_t2D724ADB1158482C072F996CA5C4CE9836287B39  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Vuforia.TrackableSource>
struct  Action_1_tF179629AB9BB26D8E830C796089B0398ACDCDFB6  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Single,System.Single>
struct  Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2  : public MulticastDelegate_t
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


// System.Func`2<System.String,System.Version>
struct  Func_2_t24F69F1241A79EDF63F2672D3206FBC43C2D5262  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// Vuforia.EditorClasses.JSONArray
struct  JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48  : public JSONNode_t2AC73352107C87692E5E6508C959400504495752
{
public:
	// System.Collections.Generic.List`1<Vuforia.EditorClasses.JSONNode> Vuforia.EditorClasses.JSONArray::mNodes
	List_1_t87698B07D247495DD045F96620F11B9FE07473B9 * ___mNodes_3;

public:
	inline static int32_t get_offset_of_mNodes_3() { return static_cast<int32_t>(offsetof(JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48, ___mNodes_3)); }
	inline List_1_t87698B07D247495DD045F96620F11B9FE07473B9 * get_mNodes_3() const { return ___mNodes_3; }
	inline List_1_t87698B07D247495DD045F96620F11B9FE07473B9 ** get_address_of_mNodes_3() { return &___mNodes_3; }
	inline void set_mNodes_3(List_1_t87698B07D247495DD045F96620F11B9FE07473B9 * value)
	{
		___mNodes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNodes_3), (void*)value);
	}
};


// Vuforia.EditorClasses.JSONObject
struct  JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF  : public JSONNode_t2AC73352107C87692E5E6508C959400504495752
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Vuforia.EditorClasses.JSONNode> Vuforia.EditorClasses.JSONObject::mNodesByKey
	Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78 * ___mNodesByKey_3;

public:
	inline static int32_t get_offset_of_mNodesByKey_3() { return static_cast<int32_t>(offsetof(JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF, ___mNodesByKey_3)); }
	inline Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78 * get_mNodesByKey_3() const { return ___mNodesByKey_3; }
	inline Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78 ** get_address_of_mNodesByKey_3() { return &___mNodesByKey_3; }
	inline void set_mNodesByKey_3(Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78 * value)
	{
		___mNodesByKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNodesByKey_3), (void*)value);
	}
};


// Vuforia.UnmanagedImageExtensions_GetImageSizeAndDataDelegate
struct  GetImageSizeAndDataDelegate_tF1E20D3F6EA9A7A03484BB2DAA13172E08F0A23E  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * ___vuforia_6;
	// Vuforia.VuforiaConfiguration_DatabaseConfiguration Vuforia.VuforiaConfiguration::database
	DatabaseConfiguration_tF351BC5B9DB35944D7129BD046E7366BA3EF4931 * ___database_7;
	// Vuforia.VuforiaConfiguration_VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A * ___videoBackground_8;
	// Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390 * ___deviceTracker_9;
	// Vuforia.VuforiaConfiguration_PlayModeConfiguration Vuforia.VuforiaConfiguration::playmode
	PlayModeConfiguration_tAE3B5638AA25D2FC6C10B64CA4BF26F3EE026695 * ___playmode_10;
	// Vuforia.VuforiaConfiguration_WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_tB6901731D92E082AB5355D87C90480957723CB91 * ___webcam_11;

public:
	inline static int32_t get_offset_of_vuforia_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF, ___vuforia_6)); }
	inline GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * get_vuforia_6() const { return ___vuforia_6; }
	inline GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 ** get_address_of_vuforia_6() { return &___vuforia_6; }
	inline void set_vuforia_6(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * value)
	{
		___vuforia_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vuforia_6), (void*)value);
	}

	inline static int32_t get_offset_of_database_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF, ___database_7)); }
	inline DatabaseConfiguration_tF351BC5B9DB35944D7129BD046E7366BA3EF4931 * get_database_7() const { return ___database_7; }
	inline DatabaseConfiguration_tF351BC5B9DB35944D7129BD046E7366BA3EF4931 ** get_address_of_database_7() { return &___database_7; }
	inline void set_database_7(DatabaseConfiguration_tF351BC5B9DB35944D7129BD046E7366BA3EF4931 * value)
	{
		___database_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_7), (void*)value);
	}

	inline static int32_t get_offset_of_videoBackground_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF, ___videoBackground_8)); }
	inline VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A * get_videoBackground_8() const { return ___videoBackground_8; }
	inline VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A ** get_address_of_videoBackground_8() { return &___videoBackground_8; }
	inline void set_videoBackground_8(VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A * value)
	{
		___videoBackground_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoBackground_8), (void*)value);
	}

	inline static int32_t get_offset_of_deviceTracker_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF, ___deviceTracker_9)); }
	inline DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390 * get_deviceTracker_9() const { return ___deviceTracker_9; }
	inline DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390 ** get_address_of_deviceTracker_9() { return &___deviceTracker_9; }
	inline void set_deviceTracker_9(DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390 * value)
	{
		___deviceTracker_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceTracker_9), (void*)value);
	}

	inline static int32_t get_offset_of_playmode_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF, ___playmode_10)); }
	inline PlayModeConfiguration_tAE3B5638AA25D2FC6C10B64CA4BF26F3EE026695 * get_playmode_10() const { return ___playmode_10; }
	inline PlayModeConfiguration_tAE3B5638AA25D2FC6C10B64CA4BF26F3EE026695 ** get_address_of_playmode_10() { return &___playmode_10; }
	inline void set_playmode_10(PlayModeConfiguration_tAE3B5638AA25D2FC6C10B64CA4BF26F3EE026695 * value)
	{
		___playmode_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playmode_10), (void*)value);
	}

	inline static int32_t get_offset_of_webcam_11() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF, ___webcam_11)); }
	inline WebCamConfiguration_tB6901731D92E082AB5355D87C90480957723CB91 * get_webcam_11() const { return ___webcam_11; }
	inline WebCamConfiguration_tB6901731D92E082AB5355D87C90480957723CB91 ** get_address_of_webcam_11() { return &___webcam_11; }
	inline void set_webcam_11(WebCamConfiguration_tB6901731D92E082AB5355D87C90480957723CB91 * value)
	{
		___webcam_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webcam_11), (void*)value);
	}
};

struct VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF * ___mInstance_4;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_5;

public:
	inline static int32_t get_offset_of_mInstance_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF_StaticFields, ___mInstance_4)); }
	inline VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF * get_mInstance_4() const { return ___mInstance_4; }
	inline VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF ** get_address_of_mInstance_4() { return &___mInstance_4; }
	inline void set_mInstance_4(VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF * value)
	{
		___mInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInstance_4), (void*)value);
	}

	inline static int32_t get_offset_of_mPadlock_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF_StaticFields, ___mPadlock_5)); }
	inline RuntimeObject * get_mPadlock_5() const { return ___mPadlock_5; }
	inline RuntimeObject ** get_address_of_mPadlock_5() { return &___mPadlock_5; }
	inline void set_mPadlock_5(RuntimeObject * value)
	{
		___mPadlock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPadlock_5), (void*)value);
	}
};


// Vuforia.VuforiaManager_<>c__DisplayClass62_0
struct  U3CU3Ec__DisplayClass62_0_t194063C85F986BD8FE6CBFB4B540D50110E63906  : public RuntimeObject
{
public:
	// Vuforia.TrackerData_ManagedFrameState Vuforia.VuforiaManager_<>c__DisplayClass62_0::frameState
	ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467  ___frameState_0;

public:
	inline static int32_t get_offset_of_frameState_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_t194063C85F986BD8FE6CBFB4B540D50110E63906, ___frameState_0)); }
	inline ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467  get_frameState_0() const { return ___frameState_0; }
	inline ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467 * get_address_of_frameState_0() { return &___frameState_0; }
	inline void set_frameState_0(ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467  value)
	{
		___frameState_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___frameState_0))->___TrackableResultDataArray_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___frameState_0))->___VuMarkDataArray_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___frameState_0))->___VuMarkResultDataArray_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___frameState_0))->___VirtualButtonData_3), (void*)NULL);
		#endif
	}
};


// UnityEngine.Canvas
struct  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_4), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Vuforia.VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_tF46B612839A7E393E77D9A27B3250EC77FCF54E6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Vuforia.ContentPositioningBehaviour
struct  ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630  : public VuforiaMonoBehaviour_tF46B612839A7E393E77D9A27B3250EC77FCF54E6
{
public:
	// Vuforia.AnchorBehaviour Vuforia.ContentPositioningBehaviour::AnchorStage
	AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C * ___AnchorStage_4;
	// System.Boolean Vuforia.ContentPositioningBehaviour::DuplicateStage
	bool ___DuplicateStage_5;
	// Vuforia.ContentPlacedEvent Vuforia.ContentPositioningBehaviour::OnContentPlaced
	ContentPlacedEvent_tE97EF9823F977BBDD7F93398DD8C62B14FE8F555 * ___OnContentPlaced_6;
	// System.Boolean Vuforia.ContentPositioningBehaviour::mDisplayAdvanced
	bool ___mDisplayAdvanced_7;
	// Vuforia.PositionalDeviceTracker Vuforia.ContentPositioningBehaviour::mDeviceTracker
	PositionalDeviceTracker_t6ABCBD564879CA0036D88243CB3C187E5DCED92E * ___mDeviceTracker_10;
	// System.Collections.Generic.ICollection`1<Vuforia.AnchorBehaviour> Vuforia.ContentPositioningBehaviour::mInstantiatedAnchors
	RuntimeObject* ___mInstantiatedAnchors_11;

public:
	inline static int32_t get_offset_of_AnchorStage_4() { return static_cast<int32_t>(offsetof(ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630, ___AnchorStage_4)); }
	inline AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C * get_AnchorStage_4() const { return ___AnchorStage_4; }
	inline AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C ** get_address_of_AnchorStage_4() { return &___AnchorStage_4; }
	inline void set_AnchorStage_4(AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C * value)
	{
		___AnchorStage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnchorStage_4), (void*)value);
	}

	inline static int32_t get_offset_of_DuplicateStage_5() { return static_cast<int32_t>(offsetof(ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630, ___DuplicateStage_5)); }
	inline bool get_DuplicateStage_5() const { return ___DuplicateStage_5; }
	inline bool* get_address_of_DuplicateStage_5() { return &___DuplicateStage_5; }
	inline void set_DuplicateStage_5(bool value)
	{
		___DuplicateStage_5 = value;
	}

	inline static int32_t get_offset_of_OnContentPlaced_6() { return static_cast<int32_t>(offsetof(ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630, ___OnContentPlaced_6)); }
	inline ContentPlacedEvent_tE97EF9823F977BBDD7F93398DD8C62B14FE8F555 * get_OnContentPlaced_6() const { return ___OnContentPlaced_6; }
	inline ContentPlacedEvent_tE97EF9823F977BBDD7F93398DD8C62B14FE8F555 ** get_address_of_OnContentPlaced_6() { return &___OnContentPlaced_6; }
	inline void set_OnContentPlaced_6(ContentPlacedEvent_tE97EF9823F977BBDD7F93398DD8C62B14FE8F555 * value)
	{
		___OnContentPlaced_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnContentPlaced_6), (void*)value);
	}

	inline static int32_t get_offset_of_mDisplayAdvanced_7() { return static_cast<int32_t>(offsetof(ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630, ___mDisplayAdvanced_7)); }
	inline bool get_mDisplayAdvanced_7() const { return ___mDisplayAdvanced_7; }
	inline bool* get_address_of_mDisplayAdvanced_7() { return &___mDisplayAdvanced_7; }
	inline void set_mDisplayAdvanced_7(bool value)
	{
		___mDisplayAdvanced_7 = value;
	}

	inline static int32_t get_offset_of_mDeviceTracker_10() { return static_cast<int32_t>(offsetof(ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630, ___mDeviceTracker_10)); }
	inline PositionalDeviceTracker_t6ABCBD564879CA0036D88243CB3C187E5DCED92E * get_mDeviceTracker_10() const { return ___mDeviceTracker_10; }
	inline PositionalDeviceTracker_t6ABCBD564879CA0036D88243CB3C187E5DCED92E ** get_address_of_mDeviceTracker_10() { return &___mDeviceTracker_10; }
	inline void set_mDeviceTracker_10(PositionalDeviceTracker_t6ABCBD564879CA0036D88243CB3C187E5DCED92E * value)
	{
		___mDeviceTracker_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeviceTracker_10), (void*)value);
	}

	inline static int32_t get_offset_of_mInstantiatedAnchors_11() { return static_cast<int32_t>(offsetof(ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630, ___mInstantiatedAnchors_11)); }
	inline RuntimeObject* get_mInstantiatedAnchors_11() const { return ___mInstantiatedAnchors_11; }
	inline RuntimeObject** get_address_of_mInstantiatedAnchors_11() { return &___mInstantiatedAnchors_11; }
	inline void set_mInstantiatedAnchors_11(RuntimeObject* value)
	{
		___mInstantiatedAnchors_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInstantiatedAnchors_11), (void*)value);
	}
};


// Vuforia.GuideViewRenderingBehaviour
struct  GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A  : public VuforiaMonoBehaviour_tF46B612839A7E393E77D9A27B3250EC77FCF54E6
{
public:
	// System.Single Vuforia.GuideViewRenderingBehaviour::guideReappearanceDelay
	float ___guideReappearanceDelay_4;
	// Vuforia.ModelTargetBehaviour Vuforia.GuideViewRenderingBehaviour::mTrackedTarget
	ModelTargetBehaviour_tE8E191D2B2C0C816E9B5B07000CAC7E58DED23B3 * ___mTrackedTarget_6;
	// Vuforia.ModelTargetBehaviour_GuideViewDisplayMode Vuforia.GuideViewRenderingBehaviour::mGuideViewDisplayMode
	int32_t ___mGuideViewDisplayMode_7;
	// Vuforia.GuideView Vuforia.GuideViewRenderingBehaviour::mGuideView
	GuideView_tDEEC431D285C9A0E98FFA9F73FB14A359174AF96 * ___mGuideView_8;
	// System.Int32 Vuforia.GuideViewRenderingBehaviour::mLastActiveGuideViewIndex
	int32_t ___mLastActiveGuideViewIndex_9;
	// System.Boolean Vuforia.GuideViewRenderingBehaviour::mGuideViewInitialized
	bool ___mGuideViewInitialized_10;
	// System.Collections.IEnumerator Vuforia.GuideViewRenderingBehaviour::mShowGuideViewCoroutine
	RuntimeObject* ___mShowGuideViewCoroutine_11;
	// UnityEngine.GameObject Vuforia.GuideViewRenderingBehaviour::mGuideViewGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mGuideViewGameObject_12;
	// System.Boolean Vuforia.GuideViewRenderingBehaviour::mGuideViewShown
	bool ___mGuideViewShown_13;

public:
	inline static int32_t get_offset_of_guideReappearanceDelay_4() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A, ___guideReappearanceDelay_4)); }
	inline float get_guideReappearanceDelay_4() const { return ___guideReappearanceDelay_4; }
	inline float* get_address_of_guideReappearanceDelay_4() { return &___guideReappearanceDelay_4; }
	inline void set_guideReappearanceDelay_4(float value)
	{
		___guideReappearanceDelay_4 = value;
	}

	inline static int32_t get_offset_of_mTrackedTarget_6() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A, ___mTrackedTarget_6)); }
	inline ModelTargetBehaviour_tE8E191D2B2C0C816E9B5B07000CAC7E58DED23B3 * get_mTrackedTarget_6() const { return ___mTrackedTarget_6; }
	inline ModelTargetBehaviour_tE8E191D2B2C0C816E9B5B07000CAC7E58DED23B3 ** get_address_of_mTrackedTarget_6() { return &___mTrackedTarget_6; }
	inline void set_mTrackedTarget_6(ModelTargetBehaviour_tE8E191D2B2C0C816E9B5B07000CAC7E58DED23B3 * value)
	{
		___mTrackedTarget_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackedTarget_6), (void*)value);
	}

	inline static int32_t get_offset_of_mGuideViewDisplayMode_7() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A, ___mGuideViewDisplayMode_7)); }
	inline int32_t get_mGuideViewDisplayMode_7() const { return ___mGuideViewDisplayMode_7; }
	inline int32_t* get_address_of_mGuideViewDisplayMode_7() { return &___mGuideViewDisplayMode_7; }
	inline void set_mGuideViewDisplayMode_7(int32_t value)
	{
		___mGuideViewDisplayMode_7 = value;
	}

	inline static int32_t get_offset_of_mGuideView_8() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A, ___mGuideView_8)); }
	inline GuideView_tDEEC431D285C9A0E98FFA9F73FB14A359174AF96 * get_mGuideView_8() const { return ___mGuideView_8; }
	inline GuideView_tDEEC431D285C9A0E98FFA9F73FB14A359174AF96 ** get_address_of_mGuideView_8() { return &___mGuideView_8; }
	inline void set_mGuideView_8(GuideView_tDEEC431D285C9A0E98FFA9F73FB14A359174AF96 * value)
	{
		___mGuideView_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGuideView_8), (void*)value);
	}

	inline static int32_t get_offset_of_mLastActiveGuideViewIndex_9() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A, ___mLastActiveGuideViewIndex_9)); }
	inline int32_t get_mLastActiveGuideViewIndex_9() const { return ___mLastActiveGuideViewIndex_9; }
	inline int32_t* get_address_of_mLastActiveGuideViewIndex_9() { return &___mLastActiveGuideViewIndex_9; }
	inline void set_mLastActiveGuideViewIndex_9(int32_t value)
	{
		___mLastActiveGuideViewIndex_9 = value;
	}

	inline static int32_t get_offset_of_mGuideViewInitialized_10() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A, ___mGuideViewInitialized_10)); }
	inline bool get_mGuideViewInitialized_10() const { return ___mGuideViewInitialized_10; }
	inline bool* get_address_of_mGuideViewInitialized_10() { return &___mGuideViewInitialized_10; }
	inline void set_mGuideViewInitialized_10(bool value)
	{
		___mGuideViewInitialized_10 = value;
	}

	inline static int32_t get_offset_of_mShowGuideViewCoroutine_11() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A, ___mShowGuideViewCoroutine_11)); }
	inline RuntimeObject* get_mShowGuideViewCoroutine_11() const { return ___mShowGuideViewCoroutine_11; }
	inline RuntimeObject** get_address_of_mShowGuideViewCoroutine_11() { return &___mShowGuideViewCoroutine_11; }
	inline void set_mShowGuideViewCoroutine_11(RuntimeObject* value)
	{
		___mShowGuideViewCoroutine_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mShowGuideViewCoroutine_11), (void*)value);
	}

	inline static int32_t get_offset_of_mGuideViewGameObject_12() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A, ___mGuideViewGameObject_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mGuideViewGameObject_12() const { return ___mGuideViewGameObject_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mGuideViewGameObject_12() { return &___mGuideViewGameObject_12; }
	inline void set_mGuideViewGameObject_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mGuideViewGameObject_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGuideViewGameObject_12), (void*)value);
	}

	inline static int32_t get_offset_of_mGuideViewShown_13() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A, ___mGuideViewShown_13)); }
	inline bool get_mGuideViewShown_13() const { return ___mGuideViewShown_13; }
	inline bool* get_address_of_mGuideViewShown_13() { return &___mGuideViewShown_13; }
	inline void set_mGuideViewShown_13(bool value)
	{
		___mGuideViewShown_13 = value;
	}
};


// Vuforia.ObjectRecoBehaviour
struct  ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7  : public VuforiaMonoBehaviour_tF46B612839A7E393E77D9A27B3250EC77FCF54E6
{
public:
	// Vuforia.ObjectTracker Vuforia.ObjectRecoBehaviour::mObjectTracker
	ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA * ___mObjectTracker_4;
	// Vuforia.TargetFinder Vuforia.ObjectRecoBehaviour::mTargetFinder
	TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC * ___mTargetFinder_5;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mCurrentlyInitializing
	bool ___mCurrentlyInitializing_6;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mInitSuccess
	bool ___mInitSuccess_7;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mRecoStarted
	bool ___mRecoStarted_8;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mOnInitializedCalled
	bool ___mOnInitializedCalled_9;
	// System.Collections.Generic.List`1<Vuforia.IObjectRecoEventHandler> Vuforia.ObjectRecoBehaviour::mHandlers
	List_1_t034FCF34A98AC1E4A275576924C783B922343B00 * ___mHandlers_10;
	// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TargetFinder>> Vuforia.ObjectRecoBehaviour::mOnInitializedHandlers
	RuntimeObject* ___mOnInitializedHandlers_11;
	// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TargetFinder_InitState>> Vuforia.ObjectRecoBehaviour::mOnInitErrorHandlers
	RuntimeObject* ___mOnInitErrorHandlers_12;
	// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TargetFinder_UpdateState>> Vuforia.ObjectRecoBehaviour::mOnUpdateErrorHandlers
	RuntimeObject* ___mOnUpdateErrorHandlers_13;
	// System.Collections.Generic.ICollection`1<System.Action`1<System.Boolean>> Vuforia.ObjectRecoBehaviour::mOnStateChangedHandlers
	RuntimeObject* ___mOnStateChangedHandlers_14;
	// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TargetFinder_TargetSearchResult>> Vuforia.ObjectRecoBehaviour::mOnNewSearchResultHandlers
	RuntimeObject* ___mOnNewSearchResultHandlers_15;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mTargetFinderStartedBeforeDisable
	bool ___mTargetFinderStartedBeforeDisable_16;

public:
	inline static int32_t get_offset_of_mObjectTracker_4() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7, ___mObjectTracker_4)); }
	inline ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA * get_mObjectTracker_4() const { return ___mObjectTracker_4; }
	inline ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA ** get_address_of_mObjectTracker_4() { return &___mObjectTracker_4; }
	inline void set_mObjectTracker_4(ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA * value)
	{
		___mObjectTracker_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObjectTracker_4), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinder_5() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7, ___mTargetFinder_5)); }
	inline TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC * get_mTargetFinder_5() const { return ___mTargetFinder_5; }
	inline TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC ** get_address_of_mTargetFinder_5() { return &___mTargetFinder_5; }
	inline void set_mTargetFinder_5(TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC * value)
	{
		___mTargetFinder_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargetFinder_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentlyInitializing_6() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7, ___mCurrentlyInitializing_6)); }
	inline bool get_mCurrentlyInitializing_6() const { return ___mCurrentlyInitializing_6; }
	inline bool* get_address_of_mCurrentlyInitializing_6() { return &___mCurrentlyInitializing_6; }
	inline void set_mCurrentlyInitializing_6(bool value)
	{
		___mCurrentlyInitializing_6 = value;
	}

	inline static int32_t get_offset_of_mInitSuccess_7() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7, ___mInitSuccess_7)); }
	inline bool get_mInitSuccess_7() const { return ___mInitSuccess_7; }
	inline bool* get_address_of_mInitSuccess_7() { return &___mInitSuccess_7; }
	inline void set_mInitSuccess_7(bool value)
	{
		___mInitSuccess_7 = value;
	}

	inline static int32_t get_offset_of_mRecoStarted_8() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7, ___mRecoStarted_8)); }
	inline bool get_mRecoStarted_8() const { return ___mRecoStarted_8; }
	inline bool* get_address_of_mRecoStarted_8() { return &___mRecoStarted_8; }
	inline void set_mRecoStarted_8(bool value)
	{
		___mRecoStarted_8 = value;
	}

	inline static int32_t get_offset_of_mOnInitializedCalled_9() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7, ___mOnInitializedCalled_9)); }
	inline bool get_mOnInitializedCalled_9() const { return ___mOnInitializedCalled_9; }
	inline bool* get_address_of_mOnInitializedCalled_9() { return &___mOnInitializedCalled_9; }
	inline void set_mOnInitializedCalled_9(bool value)
	{
		___mOnInitializedCalled_9 = value;
	}

	inline static int32_t get_offset_of_mHandlers_10() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7, ___mHandlers_10)); }
	inline List_1_t034FCF34A98AC1E4A275576924C783B922343B00 * get_mHandlers_10() const { return ___mHandlers_10; }
	inline List_1_t034FCF34A98AC1E4A275576924C783B922343B00 ** get_address_of_mHandlers_10() { return &___mHandlers_10; }
	inline void set_mHandlers_10(List_1_t034FCF34A98AC1E4A275576924C783B922343B00 * value)
	{
		___mHandlers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mHandlers_10), (void*)value);
	}

	inline static int32_t get_offset_of_mOnInitializedHandlers_11() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7, ___mOnInitializedHandlers_11)); }
	inline RuntimeObject* get_mOnInitializedHandlers_11() const { return ___mOnInitializedHandlers_11; }
	inline RuntimeObject** get_address_of_mOnInitializedHandlers_11() { return &___mOnInitializedHandlers_11; }
	inline void set_mOnInitializedHandlers_11(RuntimeObject* value)
	{
		___mOnInitializedHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnInitializedHandlers_11), (void*)value);
	}

	inline static int32_t get_offset_of_mOnInitErrorHandlers_12() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7, ___mOnInitErrorHandlers_12)); }
	inline RuntimeObject* get_mOnInitErrorHandlers_12() const { return ___mOnInitErrorHandlers_12; }
	inline RuntimeObject** get_address_of_mOnInitErrorHandlers_12() { return &___mOnInitErrorHandlers_12; }
	inline void set_mOnInitErrorHandlers_12(RuntimeObject* value)
	{
		___mOnInitErrorHandlers_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnInitErrorHandlers_12), (void*)value);
	}

	inline static int32_t get_offset_of_mOnUpdateErrorHandlers_13() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7, ___mOnUpdateErrorHandlers_13)); }
	inline RuntimeObject* get_mOnUpdateErrorHandlers_13() const { return ___mOnUpdateErrorHandlers_13; }
	inline RuntimeObject** get_address_of_mOnUpdateErrorHandlers_13() { return &___mOnUpdateErrorHandlers_13; }
	inline void set_mOnUpdateErrorHandlers_13(RuntimeObject* value)
	{
		___mOnUpdateErrorHandlers_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnUpdateErrorHandlers_13), (void*)value);
	}

	inline static int32_t get_offset_of_mOnStateChangedHandlers_14() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7, ___mOnStateChangedHandlers_14)); }
	inline RuntimeObject* get_mOnStateChangedHandlers_14() const { return ___mOnStateChangedHandlers_14; }
	inline RuntimeObject** get_address_of_mOnStateChangedHandlers_14() { return &___mOnStateChangedHandlers_14; }
	inline void set_mOnStateChangedHandlers_14(RuntimeObject* value)
	{
		___mOnStateChangedHandlers_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnStateChangedHandlers_14), (void*)value);
	}

	inline static int32_t get_offset_of_mOnNewSearchResultHandlers_15() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7, ___mOnNewSearchResultHandlers_15)); }
	inline RuntimeObject* get_mOnNewSearchResultHandlers_15() const { return ___mOnNewSearchResultHandlers_15; }
	inline RuntimeObject** get_address_of_mOnNewSearchResultHandlers_15() { return &___mOnNewSearchResultHandlers_15; }
	inline void set_mOnNewSearchResultHandlers_15(RuntimeObject* value)
	{
		___mOnNewSearchResultHandlers_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnNewSearchResultHandlers_15), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinderStartedBeforeDisable_16() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7, ___mTargetFinderStartedBeforeDisable_16)); }
	inline bool get_mTargetFinderStartedBeforeDisable_16() const { return ___mTargetFinderStartedBeforeDisable_16; }
	inline bool* get_address_of_mTargetFinderStartedBeforeDisable_16() { return &___mTargetFinderStartedBeforeDisable_16; }
	inline void set_mTargetFinderStartedBeforeDisable_16(bool value)
	{
		___mTargetFinderStartedBeforeDisable_16 = value;
	}
};


// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74  : public VuforiaMonoBehaviour_tF46B612839A7E393E77D9A27B3250EC77FCF54E6
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_4;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_5;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_6;
	// Vuforia.TrackableBehaviour_Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_7;
	// Vuforia.TrackableBehaviour_StatusInfo Vuforia.TrackableBehaviour::mStatusInfo
	int32_t ___mStatusInfo_8;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_9;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t5E86E01338D8FF6840035D3E0E7F0EC5525CDC3F * ___mTrackableEventHandlers_10;
	// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TrackableBehaviour_StatusChangeResult>> Vuforia.TrackableBehaviour::mStatusChangedEventHandlers
	RuntimeObject* ___mStatusChangedEventHandlers_11;
	// System.Collections.Generic.ICollection`1<System.Action`1<Vuforia.TrackableBehaviour_StatusInfoChangeResult>> Vuforia.TrackableBehaviour::mStatusInfoChangedEventHandlers
	RuntimeObject* ___mStatusInfoChangedEventHandlers_12;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74, ___U3CTimeStampU3Ek__BackingField_4)); }
	inline double get_U3CTimeStampU3Ek__BackingField_4() const { return ___U3CTimeStampU3Ek__BackingField_4; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_4() { return &___U3CTimeStampU3Ek__BackingField_4; }
	inline void set_U3CTimeStampU3Ek__BackingField_4(double value)
	{
		___U3CTimeStampU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74, ___mTrackableName_5)); }
	inline String_t* get_mTrackableName_5() const { return ___mTrackableName_5; }
	inline String_t** get_address_of_mTrackableName_5() { return &___mTrackableName_5; }
	inline void set_mTrackableName_5(String_t* value)
	{
		___mTrackableName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableName_5), (void*)value);
	}

	inline static int32_t get_offset_of_mInitializedInEditor_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74, ___mInitializedInEditor_6)); }
	inline bool get_mInitializedInEditor_6() const { return ___mInitializedInEditor_6; }
	inline bool* get_address_of_mInitializedInEditor_6() { return &___mInitializedInEditor_6; }
	inline void set_mInitializedInEditor_6(bool value)
	{
		___mInitializedInEditor_6 = value;
	}

	inline static int32_t get_offset_of_mStatus_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74, ___mStatus_7)); }
	inline int32_t get_mStatus_7() const { return ___mStatus_7; }
	inline int32_t* get_address_of_mStatus_7() { return &___mStatus_7; }
	inline void set_mStatus_7(int32_t value)
	{
		___mStatus_7 = value;
	}

	inline static int32_t get_offset_of_mStatusInfo_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74, ___mStatusInfo_8)); }
	inline int32_t get_mStatusInfo_8() const { return ___mStatusInfo_8; }
	inline int32_t* get_address_of_mStatusInfo_8() { return &___mStatusInfo_8; }
	inline void set_mStatusInfo_8(int32_t value)
	{
		___mStatusInfo_8 = value;
	}

	inline static int32_t get_offset_of_mTrackable_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74, ___mTrackable_9)); }
	inline RuntimeObject* get_mTrackable_9() const { return ___mTrackable_9; }
	inline RuntimeObject** get_address_of_mTrackable_9() { return &___mTrackable_9; }
	inline void set_mTrackable_9(RuntimeObject* value)
	{
		___mTrackable_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackable_9), (void*)value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_10() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74, ___mTrackableEventHandlers_10)); }
	inline List_1_t5E86E01338D8FF6840035D3E0E7F0EC5525CDC3F * get_mTrackableEventHandlers_10() const { return ___mTrackableEventHandlers_10; }
	inline List_1_t5E86E01338D8FF6840035D3E0E7F0EC5525CDC3F ** get_address_of_mTrackableEventHandlers_10() { return &___mTrackableEventHandlers_10; }
	inline void set_mTrackableEventHandlers_10(List_1_t5E86E01338D8FF6840035D3E0E7F0EC5525CDC3F * value)
	{
		___mTrackableEventHandlers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableEventHandlers_10), (void*)value);
	}

	inline static int32_t get_offset_of_mStatusChangedEventHandlers_11() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74, ___mStatusChangedEventHandlers_11)); }
	inline RuntimeObject* get_mStatusChangedEventHandlers_11() const { return ___mStatusChangedEventHandlers_11; }
	inline RuntimeObject** get_address_of_mStatusChangedEventHandlers_11() { return &___mStatusChangedEventHandlers_11; }
	inline void set_mStatusChangedEventHandlers_11(RuntimeObject* value)
	{
		___mStatusChangedEventHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mStatusChangedEventHandlers_11), (void*)value);
	}

	inline static int32_t get_offset_of_mStatusInfoChangedEventHandlers_12() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74, ___mStatusInfoChangedEventHandlers_12)); }
	inline RuntimeObject* get_mStatusInfoChangedEventHandlers_12() const { return ___mStatusInfoChangedEventHandlers_12; }
	inline RuntimeObject** get_address_of_mStatusInfoChangedEventHandlers_12() { return &___mStatusInfoChangedEventHandlers_12; }
	inline void set_mStatusInfoChangedEventHandlers_12(RuntimeObject* value)
	{
		___mStatusInfoChangedEventHandlers_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mStatusInfoChangedEventHandlers_12), (void*)value);
	}
};


// Vuforia.UnityRenderEventBroadcaster_RenderEventBehaviour
struct  RenderEventBehaviour_tF28EF9CD9A2101826273C8911894AEBBD7A01FBC  : public VuforiaMonoBehaviour_tF46B612839A7E393E77D9A27B3250EC77FCF54E6
{
public:
	// System.Action Vuforia.UnityRenderEventBroadcaster_RenderEventBehaviour::PreRenderEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___PreRenderEvent_4;
	// System.Action Vuforia.UnityRenderEventBroadcaster_RenderEventBehaviour::PostRenderEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___PostRenderEvent_5;

public:
	inline static int32_t get_offset_of_PreRenderEvent_4() { return static_cast<int32_t>(offsetof(RenderEventBehaviour_tF28EF9CD9A2101826273C8911894AEBBD7A01FBC, ___PreRenderEvent_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_PreRenderEvent_4() const { return ___PreRenderEvent_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_PreRenderEvent_4() { return &___PreRenderEvent_4; }
	inline void set_PreRenderEvent_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___PreRenderEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PreRenderEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_PostRenderEvent_5() { return static_cast<int32_t>(offsetof(RenderEventBehaviour_tF28EF9CD9A2101826273C8911894AEBBD7A01FBC, ___PostRenderEvent_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_PostRenderEvent_5() const { return ___PostRenderEvent_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_PostRenderEvent_5() { return &___PostRenderEvent_5; }
	inline void set_PostRenderEvent_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___PostRenderEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostRenderEvent_5), (void*)value);
	}
};


// Vuforia.AnchorBehaviour
struct  AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C  : public TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74
{
public:
	// Vuforia.StageType Vuforia.AnchorBehaviour::mSelectedStageType
	int32_t ___mSelectedStageType_13;
	// UnityEngine.GameObject Vuforia.AnchorBehaviour::mPlaneReference
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mPlaneReference_14;
	// UnityEngine.GameObject Vuforia.AnchorBehaviour::mMidAirReference
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mMidAirReference_15;
	// Vuforia.Anchor Vuforia.AnchorBehaviour::mAnchor
	RuntimeObject* ___mAnchor_16;

public:
	inline static int32_t get_offset_of_mSelectedStageType_13() { return static_cast<int32_t>(offsetof(AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C, ___mSelectedStageType_13)); }
	inline int32_t get_mSelectedStageType_13() const { return ___mSelectedStageType_13; }
	inline int32_t* get_address_of_mSelectedStageType_13() { return &___mSelectedStageType_13; }
	inline void set_mSelectedStageType_13(int32_t value)
	{
		___mSelectedStageType_13 = value;
	}

	inline static int32_t get_offset_of_mPlaneReference_14() { return static_cast<int32_t>(offsetof(AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C, ___mPlaneReference_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mPlaneReference_14() const { return ___mPlaneReference_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mPlaneReference_14() { return &___mPlaneReference_14; }
	inline void set_mPlaneReference_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mPlaneReference_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlaneReference_14), (void*)value);
	}

	inline static int32_t get_offset_of_mMidAirReference_15() { return static_cast<int32_t>(offsetof(AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C, ___mMidAirReference_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mMidAirReference_15() const { return ___mMidAirReference_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mMidAirReference_15() { return &___mMidAirReference_15; }
	inline void set_mMidAirReference_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mMidAirReference_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mMidAirReference_15), (void*)value);
	}

	inline static int32_t get_offset_of_mAnchor_16() { return static_cast<int32_t>(offsetof(AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C, ___mAnchor_16)); }
	inline RuntimeObject* get_mAnchor_16() const { return ___mAnchor_16; }
	inline RuntimeObject** get_address_of_mAnchor_16() { return &___mAnchor_16; }
	inline void set_mAnchor_16(RuntimeObject* value)
	{
		___mAnchor_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAnchor_16), (void*)value);
	}
};


// Vuforia.DataSetTrackableBehaviour
struct  DataSetTrackableBehaviour_t22B5898E13105BF1FDD0F2FF8DFAD40915992EEC  : public TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74
{
public:
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_13;

public:
	inline static int32_t get_offset_of_mDataSetPath_13() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t22B5898E13105BF1FDD0F2FF8DFAD40915992EEC, ___mDataSetPath_13)); }
	inline String_t* get_mDataSetPath_13() const { return ___mDataSetPath_13; }
	inline String_t** get_address_of_mDataSetPath_13() { return &___mDataSetPath_13; }
	inline void set_mDataSetPath_13(String_t* value)
	{
		___mDataSetPath_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDataSetPath_13), (void*)value);
	}
};


// Vuforia.ScalableDataSetTrackableBehaviour
struct  ScalableDataSetTrackableBehaviour_tE0966C981C2E1C092B39DB21E4DE8CA990D17B0A  : public DataSetTrackableBehaviour_t22B5898E13105BF1FDD0F2FF8DFAD40915992EEC
{
public:
	// System.Boolean Vuforia.ScalableDataSetTrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_15;
	// UnityEngine.Vector3 Vuforia.ScalableDataSetTrackableBehaviour::mPreviousScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mPreviousScale_16;

public:
	inline static int32_t get_offset_of_mPreserveChildSize_15() { return static_cast<int32_t>(offsetof(ScalableDataSetTrackableBehaviour_tE0966C981C2E1C092B39DB21E4DE8CA990D17B0A, ___mPreserveChildSize_15)); }
	inline bool get_mPreserveChildSize_15() const { return ___mPreserveChildSize_15; }
	inline bool* get_address_of_mPreserveChildSize_15() { return &___mPreserveChildSize_15; }
	inline void set_mPreserveChildSize_15(bool value)
	{
		___mPreserveChildSize_15 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_16() { return static_cast<int32_t>(offsetof(ScalableDataSetTrackableBehaviour_tE0966C981C2E1C092B39DB21E4DE8CA990D17B0A, ___mPreviousScale_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mPreviousScale_16() const { return ___mPreviousScale_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mPreviousScale_16() { return &___mPreviousScale_16; }
	inline void set_mPreviousScale_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mPreviousScale_16 = value;
	}
};

struct ScalableDataSetTrackableBehaviour_tE0966C981C2E1C092B39DB21E4DE8CA990D17B0A_StaticFields
{
public:
	// System.Single Vuforia.ScalableDataSetTrackableBehaviour::VIRTUAL_SCENE_SCALE_FACTOR
	float ___VIRTUAL_SCENE_SCALE_FACTOR_14;

public:
	inline static int32_t get_offset_of_VIRTUAL_SCENE_SCALE_FACTOR_14() { return static_cast<int32_t>(offsetof(ScalableDataSetTrackableBehaviour_tE0966C981C2E1C092B39DB21E4DE8CA990D17B0A_StaticFields, ___VIRTUAL_SCENE_SCALE_FACTOR_14)); }
	inline float get_VIRTUAL_SCENE_SCALE_FACTOR_14() const { return ___VIRTUAL_SCENE_SCALE_FACTOR_14; }
	inline float* get_address_of_VIRTUAL_SCENE_SCALE_FACTOR_14() { return &___VIRTUAL_SCENE_SCALE_FACTOR_14; }
	inline void set_VIRTUAL_SCENE_SCALE_FACTOR_14(float value)
	{
		___VIRTUAL_SCENE_SCALE_FACTOR_14 = value;
	}
};


// Vuforia.ImageTargetBehaviour
struct  ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F  : public ScalableDataSetTrackableBehaviour_tE0966C981C2E1C092B39DB21E4DE8CA990D17B0A
{
public:
	// System.Single Vuforia.ImageTargetBehaviour::mAspectRatio
	float ___mAspectRatio_17;
	// Vuforia.ImageTargetType Vuforia.ImageTargetBehaviour::mImageTargetType
	int32_t ___mImageTargetType_18;
	// System.Single Vuforia.ImageTargetBehaviour::mWidth
	float ___mWidth_19;
	// System.Single Vuforia.ImageTargetBehaviour::mHeight
	float ___mHeight_20;
	// UnityEngine.Texture2D Vuforia.ImageTargetBehaviour::mRuntimeTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mRuntimeTexture_21;
	// Vuforia.ImageTarget Vuforia.ImageTargetBehaviour::mImageTarget
	RuntimeObject* ___mImageTarget_22;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonBehaviour> Vuforia.ImageTargetBehaviour::mVirtualButtonBehaviours
	Dictionary_2_t8E5E18D70827F814B792829E403B2CA25982D74C * ___mVirtualButtonBehaviours_23;
	// UnityEngine.Vector2 Vuforia.ImageTargetBehaviour::mLastSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mLastSize_24;

public:
	inline static int32_t get_offset_of_mAspectRatio_17() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F, ___mAspectRatio_17)); }
	inline float get_mAspectRatio_17() const { return ___mAspectRatio_17; }
	inline float* get_address_of_mAspectRatio_17() { return &___mAspectRatio_17; }
	inline void set_mAspectRatio_17(float value)
	{
		___mAspectRatio_17 = value;
	}

	inline static int32_t get_offset_of_mImageTargetType_18() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F, ___mImageTargetType_18)); }
	inline int32_t get_mImageTargetType_18() const { return ___mImageTargetType_18; }
	inline int32_t* get_address_of_mImageTargetType_18() { return &___mImageTargetType_18; }
	inline void set_mImageTargetType_18(int32_t value)
	{
		___mImageTargetType_18 = value;
	}

	inline static int32_t get_offset_of_mWidth_19() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F, ___mWidth_19)); }
	inline float get_mWidth_19() const { return ___mWidth_19; }
	inline float* get_address_of_mWidth_19() { return &___mWidth_19; }
	inline void set_mWidth_19(float value)
	{
		___mWidth_19 = value;
	}

	inline static int32_t get_offset_of_mHeight_20() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F, ___mHeight_20)); }
	inline float get_mHeight_20() const { return ___mHeight_20; }
	inline float* get_address_of_mHeight_20() { return &___mHeight_20; }
	inline void set_mHeight_20(float value)
	{
		___mHeight_20 = value;
	}

	inline static int32_t get_offset_of_mRuntimeTexture_21() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F, ___mRuntimeTexture_21)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_mRuntimeTexture_21() const { return ___mRuntimeTexture_21; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_mRuntimeTexture_21() { return &___mRuntimeTexture_21; }
	inline void set_mRuntimeTexture_21(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___mRuntimeTexture_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRuntimeTexture_21), (void*)value);
	}

	inline static int32_t get_offset_of_mImageTarget_22() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F, ___mImageTarget_22)); }
	inline RuntimeObject* get_mImageTarget_22() const { return ___mImageTarget_22; }
	inline RuntimeObject** get_address_of_mImageTarget_22() { return &___mImageTarget_22; }
	inline void set_mImageTarget_22(RuntimeObject* value)
	{
		___mImageTarget_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImageTarget_22), (void*)value);
	}

	inline static int32_t get_offset_of_mVirtualButtonBehaviours_23() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F, ___mVirtualButtonBehaviours_23)); }
	inline Dictionary_2_t8E5E18D70827F814B792829E403B2CA25982D74C * get_mVirtualButtonBehaviours_23() const { return ___mVirtualButtonBehaviours_23; }
	inline Dictionary_2_t8E5E18D70827F814B792829E403B2CA25982D74C ** get_address_of_mVirtualButtonBehaviours_23() { return &___mVirtualButtonBehaviours_23; }
	inline void set_mVirtualButtonBehaviours_23(Dictionary_2_t8E5E18D70827F814B792829E403B2CA25982D74C * value)
	{
		___mVirtualButtonBehaviours_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVirtualButtonBehaviours_23), (void*)value);
	}

	inline static int32_t get_offset_of_mLastSize_24() { return static_cast<int32_t>(offsetof(ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F, ___mLastSize_24)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_mLastSize_24() const { return ___mLastSize_24; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_mLastSize_24() { return &___mLastSize_24; }
	inline void set_mLastSize_24(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___mLastSize_24 = value;
	}
};


// Vuforia.VuMarkBehaviour
struct  VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37  : public ScalableDataSetTrackableBehaviour_tE0966C981C2E1C092B39DB21E4DE8CA990D17B0A
{
public:
	// System.Single Vuforia.VuMarkBehaviour::mAspectRatio
	float ___mAspectRatio_17;
	// System.Single Vuforia.VuMarkBehaviour::mWidth
	float ___mWidth_18;
	// System.Single Vuforia.VuMarkBehaviour::mHeight
	float ___mHeight_19;
	// System.String Vuforia.VuMarkBehaviour::mPreviewImage
	String_t* ___mPreviewImage_20;
	// Vuforia.InstanceIdType Vuforia.VuMarkBehaviour::mIdType
	int32_t ___mIdType_21;
	// System.Int32 Vuforia.VuMarkBehaviour::mIdLength
	int32_t ___mIdLength_22;
	// UnityEngine.Rect Vuforia.VuMarkBehaviour::mBoundingBox
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___mBoundingBox_23;
	// UnityEngine.Vector2 Vuforia.VuMarkBehaviour::mOrigin
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mOrigin_24;
	// System.Boolean Vuforia.VuMarkBehaviour::mTrackingFromRuntimeAppearance
	bool ___mTrackingFromRuntimeAppearance_25;
	// Vuforia.VuMarkTemplate Vuforia.VuMarkBehaviour::mVuMarkTemplate
	RuntimeObject* ___mVuMarkTemplate_26;
	// Vuforia.VuMarkTarget Vuforia.VuMarkBehaviour::mVuMarkTarget
	RuntimeObject* ___mVuMarkTarget_27;
	// System.Int32 Vuforia.VuMarkBehaviour::mVuMarkResultId
	int32_t ___mVuMarkResultId_28;
	// System.Action Vuforia.VuMarkBehaviour::mOnTargetAssigned
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___mOnTargetAssigned_29;
	// System.Action Vuforia.VuMarkBehaviour::mOnTargetLost
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___mOnTargetLost_30;
	// System.Single Vuforia.VuMarkBehaviour::mLastTransformScale
	float ___mLastTransformScale_31;
	// UnityEngine.Vector2 Vuforia.VuMarkBehaviour::mLastSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mLastSize_32;

public:
	inline static int32_t get_offset_of_mAspectRatio_17() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mAspectRatio_17)); }
	inline float get_mAspectRatio_17() const { return ___mAspectRatio_17; }
	inline float* get_address_of_mAspectRatio_17() { return &___mAspectRatio_17; }
	inline void set_mAspectRatio_17(float value)
	{
		___mAspectRatio_17 = value;
	}

	inline static int32_t get_offset_of_mWidth_18() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mWidth_18)); }
	inline float get_mWidth_18() const { return ___mWidth_18; }
	inline float* get_address_of_mWidth_18() { return &___mWidth_18; }
	inline void set_mWidth_18(float value)
	{
		___mWidth_18 = value;
	}

	inline static int32_t get_offset_of_mHeight_19() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mHeight_19)); }
	inline float get_mHeight_19() const { return ___mHeight_19; }
	inline float* get_address_of_mHeight_19() { return &___mHeight_19; }
	inline void set_mHeight_19(float value)
	{
		___mHeight_19 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_20() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mPreviewImage_20)); }
	inline String_t* get_mPreviewImage_20() const { return ___mPreviewImage_20; }
	inline String_t** get_address_of_mPreviewImage_20() { return &___mPreviewImage_20; }
	inline void set_mPreviewImage_20(String_t* value)
	{
		___mPreviewImage_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPreviewImage_20), (void*)value);
	}

	inline static int32_t get_offset_of_mIdType_21() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mIdType_21)); }
	inline int32_t get_mIdType_21() const { return ___mIdType_21; }
	inline int32_t* get_address_of_mIdType_21() { return &___mIdType_21; }
	inline void set_mIdType_21(int32_t value)
	{
		___mIdType_21 = value;
	}

	inline static int32_t get_offset_of_mIdLength_22() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mIdLength_22)); }
	inline int32_t get_mIdLength_22() const { return ___mIdLength_22; }
	inline int32_t* get_address_of_mIdLength_22() { return &___mIdLength_22; }
	inline void set_mIdLength_22(int32_t value)
	{
		___mIdLength_22 = value;
	}

	inline static int32_t get_offset_of_mBoundingBox_23() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mBoundingBox_23)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_mBoundingBox_23() const { return ___mBoundingBox_23; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_mBoundingBox_23() { return &___mBoundingBox_23; }
	inline void set_mBoundingBox_23(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___mBoundingBox_23 = value;
	}

	inline static int32_t get_offset_of_mOrigin_24() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mOrigin_24)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_mOrigin_24() const { return ___mOrigin_24; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_mOrigin_24() { return &___mOrigin_24; }
	inline void set_mOrigin_24(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___mOrigin_24 = value;
	}

	inline static int32_t get_offset_of_mTrackingFromRuntimeAppearance_25() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mTrackingFromRuntimeAppearance_25)); }
	inline bool get_mTrackingFromRuntimeAppearance_25() const { return ___mTrackingFromRuntimeAppearance_25; }
	inline bool* get_address_of_mTrackingFromRuntimeAppearance_25() { return &___mTrackingFromRuntimeAppearance_25; }
	inline void set_mTrackingFromRuntimeAppearance_25(bool value)
	{
		___mTrackingFromRuntimeAppearance_25 = value;
	}

	inline static int32_t get_offset_of_mVuMarkTemplate_26() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mVuMarkTemplate_26)); }
	inline RuntimeObject* get_mVuMarkTemplate_26() const { return ___mVuMarkTemplate_26; }
	inline RuntimeObject** get_address_of_mVuMarkTemplate_26() { return &___mVuMarkTemplate_26; }
	inline void set_mVuMarkTemplate_26(RuntimeObject* value)
	{
		___mVuMarkTemplate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuMarkTemplate_26), (void*)value);
	}

	inline static int32_t get_offset_of_mVuMarkTarget_27() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mVuMarkTarget_27)); }
	inline RuntimeObject* get_mVuMarkTarget_27() const { return ___mVuMarkTarget_27; }
	inline RuntimeObject** get_address_of_mVuMarkTarget_27() { return &___mVuMarkTarget_27; }
	inline void set_mVuMarkTarget_27(RuntimeObject* value)
	{
		___mVuMarkTarget_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuMarkTarget_27), (void*)value);
	}

	inline static int32_t get_offset_of_mVuMarkResultId_28() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mVuMarkResultId_28)); }
	inline int32_t get_mVuMarkResultId_28() const { return ___mVuMarkResultId_28; }
	inline int32_t* get_address_of_mVuMarkResultId_28() { return &___mVuMarkResultId_28; }
	inline void set_mVuMarkResultId_28(int32_t value)
	{
		___mVuMarkResultId_28 = value;
	}

	inline static int32_t get_offset_of_mOnTargetAssigned_29() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mOnTargetAssigned_29)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_mOnTargetAssigned_29() const { return ___mOnTargetAssigned_29; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_mOnTargetAssigned_29() { return &___mOnTargetAssigned_29; }
	inline void set_mOnTargetAssigned_29(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___mOnTargetAssigned_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnTargetAssigned_29), (void*)value);
	}

	inline static int32_t get_offset_of_mOnTargetLost_30() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mOnTargetLost_30)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_mOnTargetLost_30() const { return ___mOnTargetLost_30; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_mOnTargetLost_30() { return &___mOnTargetLost_30; }
	inline void set_mOnTargetLost_30(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___mOnTargetLost_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnTargetLost_30), (void*)value);
	}

	inline static int32_t get_offset_of_mLastTransformScale_31() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mLastTransformScale_31)); }
	inline float get_mLastTransformScale_31() const { return ___mLastTransformScale_31; }
	inline float* get_address_of_mLastTransformScale_31() { return &___mLastTransformScale_31; }
	inline void set_mLastTransformScale_31(float value)
	{
		___mLastTransformScale_31 = value;
	}

	inline static int32_t get_offset_of_mLastSize_32() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37, ___mLastSize_32)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_mLastSize_32() const { return ___mLastSize_32; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_mLastSize_32() { return &___mLastSize_32; }
	inline void set_mLastSize_32(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___mLastSize_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Vuforia.CommandBufferTextureDefinition[]
struct CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * m_Items[1];

public:
	inline CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Vuforia.TrackerData_TrackableResultData[]
struct TrackableResultDataU5BU5D_t7748EA908993162703714DE2DCF878C903A33A60  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  m_Items[1];

public:
	inline TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  value)
	{
		m_Items[index] = value;
	}
};
// Vuforia.TrackerData_VuMarkTargetData[]
struct VuMarkTargetDataU5BU5D_t7062002393AAA425C920A93605BE2FE0378B7937  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7  m_Items[1];

public:
	inline VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7  value)
	{
		m_Items[index] = value;
	}
};
// Vuforia.TrackerData_VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t968E620BD487CD51963064373144BA11A4A403E8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD  m_Items[1];

public:
	inline VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD  value)
	{
		m_Items[index] = value;
	}
};
// Vuforia.TrackerData_VirtualButtonData[]
struct VirtualButtonDataU5BU5D_t5CF3ACC5B148D3FD69E97E6418D342AC2575C6EB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140  m_Items[1];

public:
	inline VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140  value)
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


// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_gshared (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling<System.Boolean>(System.Action`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelper_InvokeWithExceptionHandling_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCC0889A0606B390534599AC1DC58034E544EA4CD_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___action0, bool ___arg1, const RuntimeMethod* method);
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling<System.Object>(System.Action`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelper_InvokeWithExceptionHandling_TisRuntimeObject_m11C9DE88610B8DC959F88B065E0DF9D6A3EA157B_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action0, RuntimeObject * ___arg1, const RuntimeMethod* method);
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling<System.Int32Enum>(System.Action`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelper_InvokeWithExceptionHandling_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m1FA9DFECA82765D01D03E07F570C35B5FCC624F4_gshared (Action_1_tF0FD284A49EB7135379250254D6B49FA84383C09 * ___action0, int32_t ___arg1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9D936778F28043838186FC2037F47460DA7925B9_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling<Vuforia.TrackableBehaviour/StatusChangeResult>(System.Action`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelper_InvokeWithExceptionHandling_TisStatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174_m8496B66E27260F928CFD7799052CEC9FAD337E31_gshared (Action_1_tE133B6E55A36D1C644478448C38E781E97126FF6 * ___action0, StatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174  ___arg1, const RuntimeMethod* method);
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling<Vuforia.TrackableBehaviour/StatusInfoChangeResult>(System.Action`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelper_InvokeWithExceptionHandling_TisStatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504_m4991D60623A500ED03B09CF41CF66753D1F0E9B0_gshared (Action_1_t2D724ADB1158482C072F996CA5C4CE9836287B39 * ___action0, StatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504  ___arg1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Single,System.Single>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_gshared (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * __this, float ___arg10, float ___arg21, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mF35F8B37C78D02C08BB4F806038CA6EDE548A6B5_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
inline void UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7 (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t3E6599546F71BCEFF271ED16D5DF9646BD868D7C *, const RuntimeMethod*))UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Vuforia.CommandBufferTextureDefinitionsProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5C1F97F5DB9B89999D81D10F1B425080213C2F25 (U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD * __this, const RuntimeMethod* method);
// System.Void Vuforia.CommandBufferTextureDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4 (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Vuforia.GLTFExtractorUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2DFBF30207E40A4C327266E1A34720186D09AB4B (U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB * DigitalEyewearARController_get_Instance_m2588DB7AC8E0EAAAEB9E7964E9421C1DE1847721 (const RuntimeMethod* method);
// UnityEngine.Transform Vuforia.DigitalEyewearARController::get_CentralAnchorPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * DigitalEyewearARController_get_CentralAnchorPoint_m9AF1BC19053C397778A2D5E08468708168BA74EB (DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void Vuforia.GuideViewRenderingBehaviour::ShowGuideView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuideViewRenderingBehaviour_ShowGuideView_m3BF86EE23F68490A2E160BA391A883D46A9EAD31 (GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * __this, bool ___show0, const RuntimeMethod* method);
// System.Void Vuforia.EditorClasses.JSONArray/<GetEnumerator>d__12::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12_U3CU3Em__Finally1_m5F18310FDDED70E5E0B62EE53E6E85DA15B1C812 (U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Vuforia.EditorClasses.JSONNode>::GetEnumerator()
inline Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7  List_1_GetEnumerator_mA9E2A3A8035A3A8BA25CD091DA12DA8DA51D8966 (List_1_t87698B07D247495DD045F96620F11B9FE07473B9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7  (*) (List_1_t87698B07D247495DD045F96620F11B9FE07473B9 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Vuforia.EditorClasses.JSONNode>::get_Current()
inline JSONNode_t2AC73352107C87692E5E6508C959400504495752 * Enumerator_get_Current_mD69E384B09C34BF90611D6130124EB97A11B3DEE_inline (Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 * __this, const RuntimeMethod* method)
{
	return ((  JSONNode_t2AC73352107C87692E5E6508C959400504495752 * (*) (Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.EditorClasses.JSONNode>::MoveNext()
inline bool Enumerator_MoveNext_m279B322EBB8E06A6E0A30CDA4FFC0B765DDCCE0D (Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void Vuforia.EditorClasses.JSONArray/<GetEnumerator>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12_System_IDisposable_Dispose_m18412CB48D0D72AFF538C80CB9543B850DC0C8FF (U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.EditorClasses.JSONNode>::Dispose()
inline void Enumerator_Dispose_m89F46A1ACC5ACEADED27E914406B90CF997CDA50 (Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Vuforia.EditorClasses.JSONArray/<get_Children>d__11::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__11_U3CU3Em__Finally1_m10097AA4522D11D416E5CCD90541B405C3BEBED4 (U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * __this, const RuntimeMethod* method);
// System.Void Vuforia.EditorClasses.JSONArray/<get_Children>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__11_System_IDisposable_Dispose_m34C9C9C2D90F31E5B6ACCA801F6243D6B1492385 (U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * __this, const RuntimeMethod* method);
// System.Void Vuforia.EditorClasses.JSONArray/<get_Children>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__11__ctor_mE0D4C6C12E3023954D028C9CCB7595B2B0BE4FBB (U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Vuforia.EditorClasses.JSONNode> Vuforia.EditorClasses.JSONArray/<get_Children>d__11::System.Collections.Generic.IEnumerable<Vuforia.EditorClasses.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__11_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_m494985539C72399D42188C10E398586074AE170D (U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * __this, const RuntimeMethod* method);
// System.Void Vuforia.EditorClasses.JSONNode/<get_Children>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__17__ctor_mFEB9E207BB7A5F0482DD82A27E746AE3A08E6AA0 (U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Vuforia.EditorClasses.JSONNode> Vuforia.EditorClasses.JSONNode/<get_Children>d__17::System.Collections.Generic.IEnumerable<Vuforia.EditorClasses.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__17_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_mDE88A651EC7EB4A66ECCEF7A5E5D448F3207533A (U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C * __this, const RuntimeMethod* method);
// System.Void Vuforia.EditorClasses.JSONObject/<GetEnumerator>d__12::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12_U3CU3Em__Finally1_m961700A36E855C18B05224B59267741CB343432C (U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Vuforia.EditorClasses.JSONNode>::GetEnumerator()
inline Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3  Dictionary_2_GetEnumerator_mE15A5338263B140F42AD19E03F4CBC46A6E6510A (Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3  (*) (Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.EditorClasses.JSONNode>::get_Current()
inline KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D  Enumerator_get_Current_m107E20EE09A23DABD2F4E8982603812549A20360_inline (Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D  (*) (Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.EditorClasses.JSONNode>::MoveNext()
inline bool Enumerator_MoveNext_m0A9DDD879A7CF0DF34E93EB27936533EB0AA3C18 (Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void Vuforia.EditorClasses.JSONObject/<GetEnumerator>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12_System_IDisposable_Dispose_m45720BAF24811BE4ADA84C6EDC0602E65AB98B77 (U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Vuforia.EditorClasses.JSONNode>::Dispose()
inline void Enumerator_Dispose_m870ACB10F5D726DE21B533C861CA6FA3CFC4367F (Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Void Vuforia.EditorClasses.JSONObject/<get_Children>d__11::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__11_U3CU3Em__Finally1_mEAFE4F38A6E3885C35443AF4305338BC3BC2986D (U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.EditorClasses.JSONNode>::get_Value()
inline JSONNode_t2AC73352107C87692E5E6508C959400504495752 * KeyValuePair_2_get_Value_m901CC9F140983FA1493DFAD43415A664B146C05D_inline (KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D * __this, const RuntimeMethod* method)
{
	return ((  JSONNode_t2AC73352107C87692E5E6508C959400504495752 * (*) (KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void Vuforia.EditorClasses.JSONObject/<get_Children>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__11_System_IDisposable_Dispose_mDDB70009AD44A1DD4CD9A2C304462FC22ACAFE1B (U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * __this, const RuntimeMethod* method);
// System.Void Vuforia.EditorClasses.JSONObject/<get_Children>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__11__ctor_m447AD00BCAB79F2941740E764A53C7B23B166B19 (U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Vuforia.EditorClasses.JSONNode> Vuforia.EditorClasses.JSONObject/<get_Children>d__11::System.Collections.Generic.IEnumerable<Vuforia.EditorClasses.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__11_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_mF33903901BAAFB9B6DD1CC8C64F8C01443479EFF (U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Transform>::.ctor()
inline void UnityEvent_1__ctor_m008B4FFEEC9A3795F6E37BAA9FC7A3DF3A4D84FE (UnityEvent_1_tF63176C7516E6ECD13B8AF2684E42A6437349B3D * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF63176C7516E6ECD13B8AF2684E42A6437349B3D *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void Vuforia.DisabledSetTargetSize::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisabledSetTargetSize__ctor_m3AEF24F37F4A5189F731B4B3D60BE50DB21F78CE (DisabledSetTargetSize_t7051D80708A3A9C81A13959EC41094CEB4B303D4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size0, const RuntimeMethod* method);
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuforiaWrapper_get_Instance_m639B63F11D692CC116D5E57E292DB6DD28DE657C (const RuntimeMethod* method);
// System.Void Vuforia.NativeVideoTextureUpdater::OnNativeTextureCreated(System.Int32,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeVideoTextureUpdater_OnNativeTextureCreated_m05A4ED90DED4EECC62A0669A3A5D86496EEC25D7 (NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8 * __this, int32_t ___textureWidth0, int32_t ___imageHeight1, intptr_t ___nativeTexturePtr2, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Vuforia.ObjectRecoBehaviour/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m926153DEA5052DB15E8B027E9081F38C4C159535 (U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993 * __this, const RuntimeMethod* method);
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling<System.Boolean>(System.Action`1<T>,T)
inline void DelegateHelper_InvokeWithExceptionHandling_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCC0889A0606B390534599AC1DC58034E544EA4CD (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___action0, bool ___arg1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))DelegateHelper_InvokeWithExceptionHandling_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCC0889A0606B390534599AC1DC58034E544EA4CD_gshared)(___action0, ___arg1, method);
}
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling<Vuforia.TargetFinder>(System.Action`1<T>,T)
inline void DelegateHelper_InvokeWithExceptionHandling_TisTargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC_m8EFA0DBFE93C7060EB2961B2CEC75825A511AD23 (Action_1_t680968FBB826541F142EBF7D79C27906716B992A * ___action0, TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC * ___arg1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t680968FBB826541F142EBF7D79C27906716B992A *, TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC *, const RuntimeMethod*))DelegateHelper_InvokeWithExceptionHandling_TisRuntimeObject_m11C9DE88610B8DC959F88B065E0DF9D6A3EA157B_gshared)(___action0, ___arg1, method);
}
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling<Vuforia.TargetFinder/InitState>(System.Action`1<T>,T)
inline void DelegateHelper_InvokeWithExceptionHandling_TisInitState_t6A1561C4216CD71C9104710CE8A931B9376689CF_m404FECFA6F3E28EBFF6AAF947FC14B0B8555A8DB (Action_1_t7E6B55387F9557E0EF71FD16A4BB6AC1F0D6B070 * ___action0, int32_t ___arg1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7E6B55387F9557E0EF71FD16A4BB6AC1F0D6B070 *, int32_t, const RuntimeMethod*))DelegateHelper_InvokeWithExceptionHandling_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m1FA9DFECA82765D01D03E07F570C35B5FCC624F4_gshared)(___action0, ___arg1, method);
}
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling<Vuforia.TargetFinder/UpdateState>(System.Action`1<T>,T)
inline void DelegateHelper_InvokeWithExceptionHandling_TisUpdateState_t85155F6AF6764B6B91AD900EA0F84753466680A4_mD6045658F817C481B0DAF3484078BB6E0F8A1683 (Action_1_t2A0AF9B2D555659D37BD5E81A8AA03D210E86FF1 * ___action0, int32_t ___arg1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2A0AF9B2D555659D37BD5E81A8AA03D210E86FF1 *, int32_t, const RuntimeMethod*))DelegateHelper_InvokeWithExceptionHandling_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m1FA9DFECA82765D01D03E07F570C35B5FCC624F4_gshared)(___action0, ___arg1, method);
}
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling<Vuforia.TargetFinder/TargetSearchResult>(System.Action`1<T>,T)
inline void DelegateHelper_InvokeWithExceptionHandling_TisTargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320_m865B768E4E9A6EDB1ADD04EA3047F3A9E51C4AEC (Action_1_t5381EA86F908E22A8AF6E683B74245C1F5F81193 * ___action0, TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320 * ___arg1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5381EA86F908E22A8AF6E683B74245C1F5F81193 *, TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320 *, const RuntimeMethod*))DelegateHelper_InvokeWithExceptionHandling_TisRuntimeObject_m11C9DE88610B8DC959F88B065E0DF9D6A3EA157B_gshared)(___action0, ___arg1, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF * VuforiaConfiguration_get_Instance_m194A91058D56580FB149957A556F04E8B54E8A2E (const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::get_Vuforia()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * VuforiaConfiguration_get_Vuforia_mEB558CD22BC18D4B63BCA8032AB0EA612A4F2B4B_inline (VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF * __this, const RuntimeMethod* method);
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_Version_m68B4127AD4C948EA5F64750DDC21A46CD2A054D5_inline (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method);
// System.Version Vuforia.EulaRuntimeUtility::ConvertToMajorMinorVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * EulaRuntimeUtility_ConvertToMajorMinorVersion_m40376FF426AC28A5F258C1A96464A821E0E00F88 (String_t* ___versionString0, const RuntimeMethod* method);
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_EULAAcceptedVersions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_EULAAcceptedVersions_m2FDD938A909FD6361210CE818C49CC29A100D7C1_inline (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.String> Vuforia.EulaRuntimeUtility::JsonToVersionStrings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EulaRuntimeUtility_JsonToVersionStrings_mD2D049BE8418A5FBAF3A3D54E28D1DCE164FDE56 (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Func`2<System.String,System.Version>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFB5216A49D4F256F8A7795F244372E5342D4D44E (Func_2_t24F69F1241A79EDF63F2672D3206FBC43C2D5262 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t24F69F1241A79EDF63F2672D3206FBC43C2D5262 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.String,System.Version>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisVersion_tBDAEDED25425A1D09910468B8BD1759115646E3C_m6DD6825E089A09EA273F83DF9E79ECE5DF3E6680 (RuntimeObject* ___source0, Func_2_t24F69F1241A79EDF63F2672D3206FBC43C2D5262 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t24F69F1241A79EDF63F2672D3206FBC43C2D5262 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Version>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void HashSet_1__ctor_mD4780171A8FF45F1A0ECBA080CDA9E6D30B6087D (HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391 *, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m9D936778F28043838186FC2037F47460DA7925B9_gshared)(__this, ___collection0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Version>::Contains(!0)
inline bool HashSet_1_Contains_m85F98F6EB98EF602C551F89FFE1811E63AE4CA1F (HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391 * __this, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391 *, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C *, const RuntimeMethod*))HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// System.Void Vuforia.PlaymodeSmartTerrainImpl/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m31FD9C572E0D5A0C5A6A390E273277B5F9970122 (U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E * __this, const RuntimeMethod* method);
// System.String Vuforia.DataSetTrackableBehaviour::get_DataSetPath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DataSetTrackableBehaviour_get_DataSetPath_m98D4BDDFB041326FB9FF049CF80B4860FAE11FE6_inline (DataSetTrackableBehaviour_t22B5898E13105BF1FDD0F2FF8DFAD40915992EEC * __this, const RuntimeMethod* method);
// Vuforia.IPlayModeEditorUtility Vuforia.PlayModeEditorUtility::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayModeEditorUtility_get_Instance_mCF1931946ED015E4CF7C71F55A221BA610B192C0 (const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// Vuforia.ImageTarget Vuforia.ImageTargetBehaviour::get_ImageTarget()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ImageTargetBehaviour_get_ImageTarget_m7683DECAF07466DDB086BC7CD4E2C001AD1307C7_inline (ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F * __this, const RuntimeMethod* method);
// System.Void Vuforia.PositionalDeviceTrackerImpl/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2D59239E99ED95CC654E13B21BA2A14D4A7CA20F (U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152 * __this, const RuntimeMethod* method);
// System.Void Vuforia.PosixPath/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC0855094E59CAB27D23776FC61B628DB03A4E92A (U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7 * __this, const RuntimeMethod* method);
// System.String Vuforia.PosixPath::TrimLeadingSlashes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PosixPath_TrimLeadingSlashes_mC2D25073AA2C6281FBCBE8792E38DB743EA22BD0 (String_t* ___subPath0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Vuforia.RawPtrVideoTextureUpdater/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3A3874B59115939338B7A1CE16EEB30D367223E7 (U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970 * __this, const RuntimeMethod* method);
// System.Void Vuforia.RawPtrVideoTextureUpdater::UpdateTextures(System.Collections.Generic.IList`1<UnityEngine.Texture2D>,System.Int32,System.Int32,Vuforia.PIXEL_FORMAT)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawPtrVideoTextureUpdater_UpdateTextures_mA448BC8A0EC43D51BD091BABA7D15BD2ED5B364D (RuntimeObject* ___textures0, int32_t ___width1, int32_t ___height2, int32_t ___format3, const RuntimeMethod* method);
// System.Void Vuforia.StateManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8939C12D5C356596DF07AE4A3389F7CABE56EC8D (U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// Vuforia.TrackableBehaviour/Status Vuforia.TrackerData/VuMarkTargetResultData::get_status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VuMarkTargetResultData_get_status_mCD284EFD661F5B16DD618ED4C26C917AF06883C0_inline (VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD * __this, const RuntimeMethod* method);
// Vuforia.TrackableBehaviour/Status Vuforia.TrackerData/TrackableResultData::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrackableResultData_get_Status_mDBB95D6BCF9D91F60DE3D7BB3F720A24FA4D3F6A_inline (TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * __this, const RuntimeMethod* method);
// Vuforia.TrackableBehaviour/StatusInfo Vuforia.TrackerData/TrackableResultData::get_StatusInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrackableResultData_get_StatusInfo_m5CE7AC4AEFB0C6DF81A2D52054EE696B0B22B580_inline (TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * __this, const RuntimeMethod* method);
// System.Void Vuforia.TargetFinder/TargetSearchResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetSearchResult__ctor_mCFFDAC37BD586ED225DBEC83CB7CCDD2D0EB7C25 (TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320 * __this, const RuntimeMethod* method);
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling<Vuforia.TrackableBehaviour/StatusChangeResult>(System.Action`1<T>,T)
inline void DelegateHelper_InvokeWithExceptionHandling_TisStatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174_m8496B66E27260F928CFD7799052CEC9FAD337E31 (Action_1_tE133B6E55A36D1C644478448C38E781E97126FF6 * ___action0, StatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174  ___arg1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE133B6E55A36D1C644478448C38E781E97126FF6 *, StatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174 , const RuntimeMethod*))DelegateHelper_InvokeWithExceptionHandling_TisStatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174_m8496B66E27260F928CFD7799052CEC9FAD337E31_gshared)(___action0, ___arg1, method);
}
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling<Vuforia.TrackableBehaviour/StatusInfoChangeResult>(System.Action`1<T>,T)
inline void DelegateHelper_InvokeWithExceptionHandling_TisStatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504_m4991D60623A500ED03B09CF41CF66753D1F0E9B0 (Action_1_t2D724ADB1158482C072F996CA5C4CE9836287B39 * ___action0, StatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504  ___arg1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2D724ADB1158482C072F996CA5C4CE9836287B39 *, StatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504 , const RuntimeMethod*))DelegateHelper_InvokeWithExceptionHandling_TisStatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504_m4991D60623A500ED03B09CF41CF66753D1F0E9B0_gshared)(___action0, ___arg1, method);
}
// System.Void Vuforia.TrackerData/TrackableResultData::set_Status(Vuforia.TrackableBehaviour/Status)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableResultData_set_Status_m52091082CBC8097402193F78B9A6FD02F05EB09E_inline (TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Vuforia.TrackerData/VuMarkTargetResultData::set_status(Vuforia.TrackableBehaviour/Status)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VuMarkTargetResultData_set_status_mFB2EA25B0B38ED536DEF19B78C1C111707252E6A_inline (VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Vuforia.TrackerManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA31E158C990B836985D9F12572A2DB6D06B2E0F4 (U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB * __this, const RuntimeMethod* method);
// System.Void Vuforia.ObjectTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTracker__ctor_m4DA6893C4C056540EE7EED88C3B1CA3BF8ACD9C0 (ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA * __this, const RuntimeMethod* method);
// System.Void Vuforia.AreaTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AreaTracker__ctor_m1A646D16084996640B6190B0C6247EAF5933EBB1 (AreaTracker_t8071226BF023074830335EFFEB24D47E45D714B8 * __this, const RuntimeMethod* method);
// Vuforia.SmartTerrain Vuforia.TrackerManager::CreateSmartTerrain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SmartTerrain_t465561CB4FF40E6CB2355629FB8AC51286663B14 * TrackerManager_CreateSmartTerrain_m1380BD921BCE4C139CC19494FF5C39A2274B1EA0 (const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean Vuforia.TrackerManager::DeinitializeTrackerNative(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackerManager_DeinitializeTrackerNative_m9DD1CDE223AA0FDFB0718998EA5D8354C496F71C (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaMonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaMonoBehaviour__ctor_mBAF66AB5B827C51C023C4B1F29F0E6C56C163F8B (VuforiaMonoBehaviour_tF46B612839A7E393E77D9A27B3250EC77FCF54E6 * __this, const RuntimeMethod* method);
// System.Void Vuforia.UnityVersionUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m840D9469455EF64FA107E828A900139160D0F991 (U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2 * __this, const RuntimeMethod* method);
// System.Boolean System.Version::op_GreaterThanOrEqual(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_GreaterThanOrEqual_m3541CE83D1E5FD5E50F8FFE4EA2984359E92754D (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___v10, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___v21, const RuntimeMethod* method);
// System.Void Vuforia.UserDefinedTargetBuildingBehaviour/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m77FE1681F88557AEE2D8C6BB793DCC9E5EAB486E (U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653 * __this, const RuntimeMethod* method);
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateHelper_InvokeWithExceptionHandling_mE53E6764826850399193FA04944C101C33B3A645 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling<Vuforia.ImageTargetBuilder/FrameQuality>(System.Action`1<T>,T)
inline void DelegateHelper_InvokeWithExceptionHandling_TisFrameQuality_tA05570432BB459EC5520225178110C0839B211DE_mA66019810DD3337670B7DEBF28E585FBDC641F3B (Action_1_tC87FED509BD0D441A0ADCBFE65149AE21BD08A98 * ___action0, int32_t ___arg1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC87FED509BD0D441A0ADCBFE65149AE21BD08A98 *, int32_t, const RuntimeMethod*))DelegateHelper_InvokeWithExceptionHandling_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m1FA9DFECA82765D01D03E07F570C35B5FCC624F4_gshared)(___action0, ___arg1, method);
}
// System.Void Vuforia.DelegateHelper::InvokeWithExceptionHandling<Vuforia.TrackableSource>(System.Action`1<T>,T)
inline void DelegateHelper_InvokeWithExceptionHandling_TisTrackableSource_tA8649A889727AA9D7469846706286509D153417E_mD6945DF4C5301E2DA4502447710A02F6A48E9B05 (Action_1_tF179629AB9BB26D8E830C796089B0398ACDCDFB6 * ___action0, TrackableSource_tA8649A889727AA9D7469846706286509D153417E * ___arg1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF179629AB9BB26D8E830C796089B0398ACDCDFB6 *, TrackableSource_tA8649A889727AA9D7469846706286509D153417E *, const RuntimeMethod*))DelegateHelper_InvokeWithExceptionHandling_TisRuntimeObject_m11C9DE88610B8DC959F88B065E0DF9D6A3EA157B_gshared)(___action0, ___arg1, method);
}
// System.Void Vuforia.VideoBackgroundConfigMigrator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE7D13AFCEBDDBFB2ACB424565777B1023DCD6F0F (U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC * __this, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaARController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9D3F4B31A63ADC9332090C36336DF1C04E8CE237 (U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_deviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceModel_m99131C20271BDA64F3A537AA009B252DCEDC5977 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsUfoEnabled(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsUfoEnabled_m9DB2DE46FC4281E68B82FE1574CE78DF63DFFCD3 (String_t* ___licenseKey0, String_t* ___ufoKey1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Single,System.Single>::Invoke(!0,!1)
inline void Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89 (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * __this, float ___arg10, float ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *, float, float, const RuntimeMethod*))Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void Vuforia.VuforiaRenderer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m37F99E054EF734325642A993B1D87CA03F706420 (U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF * __this, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaRenderer/Vec2I::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec2I__ctor_m26561AB7ACC0512D1DF33CB96AED23D2B73C62B4 (Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6 * __this, int32_t ___v10, int32_t ___v21, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaRuntimeUtilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF4596D428E857FB4C634705E06D60B3197FBCF14 (U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D * __this, const RuntimeMethod* method);
// Vuforia.TargetFinder/InitState Vuforia.TargetFinder::GetInitState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TargetFinder_GetInitState_mCBE1E23F8E9B86C87B0DD024C60E9DBF7D7AF1BA (TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Vuforia.ObjectTarget> Vuforia.TargetFinder::GetObjectTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TargetFinder_GetObjectTargets_m79721AD13B5DEE205CD473C4C171585DB91E6684 (TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC * __this, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<Vuforia.ObjectTarget>(System.Collections.Generic.IEnumerable`1<!!0>)
inline int32_t Enumerable_Count_TisObjectTarget_t6E5B0275C082159F66B1879834E91CEBEE728465_m7A81BB1634CDB0F9A9D710F3D2F59ACFC70E61FA (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mF35F8B37C78D02C08BB4F806038CA6EDE548A6B5_gshared)(___source0, method);
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities/CameraState::get_Initialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraState_get_Initialized_m36A128FEC4532F39825D7D8C414C1E23C4AFB201_inline (CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities/CameraState::get_Active()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraState_get_Active_m419DDB2A2FF524F188F45D718B63060CFEDDE6CA_inline (CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * __this, const RuntimeMethod* method);
// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaRuntimeUtilities/CameraState::get_DeviceMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraState_get_DeviceMode_mEA52A27F35F8447EEACE54CFEE9E5808BDF30C47_inline (CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * __this, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaRuntimeUtilities/CameraState::.ctor(System.Boolean,System.Boolean,Vuforia.CameraDevice/CameraDeviceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m8BF92C5942956EBEC72D5AAEC73E95EDD2098ECD (CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * __this, bool ___initialized0, bool ___active1, int32_t ___deviceMode2, const RuntimeMethod* method);
// System.String Vuforia.PosixPath::Join(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PosixPath_Join_m8222BA9A8AE495CD465DD1BF7EE77A9B665C6712 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___subPaths0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.HolographicSettings::SetFocusPointForFrame(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicSettings_SetFocusPointForFrame_m5F21C1B2E26F92A55334FC94150C71182925AC69 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void Vuforia.WebCamARController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC412AC686DB3233841C34C02B729D149C4CD5BA9 (U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457 * __this, const RuntimeMethod* method);
// System.Void Vuforia.WebCamTexAdaptor::.ctor(System.String,Vuforia.WebCamProfile/ProfileData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexAdaptor__ctor_m3DEBE36A78C47FDAD7153BF16702447A0D1ECD8E (WebCamTexAdaptor_tBA53CE26A2424E7D165C57C53246CC77BA8C9F5A * __this, String_t* ___deviceName0, ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02  ___profile1, const RuntimeMethod* method);
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileCollection__ctor_m29691C3FF9AC6BDD8051D7A5EDD9B9CDED9CC64C (ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4 * __this, ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02  ___defaultProfile0, Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7 * ___profiles1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.AnchorInputListenerBehaviour_InputReceivedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputReceivedEvent__ctor_mACE7A759289287E5F02033B0BC0DF2C96EDA07A9 (InputReceivedEvent_tF1B1BDB7647AC41F6D27967F5C0FABCC9F907C6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputReceivedEvent__ctor_mACE7A759289287E5F02033B0BC0DF2C96EDA07A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7(__this, /*hidden argument*/UnityEvent_1__ctor_mF2353BD6855BD9E925E30E1CD4BC8582182DE0C7_RuntimeMethod_var);
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
// System.Void Vuforia.AreaTargetPreviewVisualization_<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mFC3A439B5C4BF67C83C573E1B410F6DFF385310B (U3CU3Ec__DisplayClass4_0_tAD49F7B2ED9AA3E98EC650F525497040631659C8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.AreaTargetPreviewVisualization_<>c__DisplayClass4_0::<CreatePreviewModel>b__0(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CCreatePreviewModelU3Eb__0_m03833992BB36C92C7E77ABDF990323A18BE3B673 (U3CU3Ec__DisplayClass4_0_tAD49F7B2ED9AA3E98EC650F525497040631659C8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_hideFlags_0();
		NullCheck(L_1);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_1, L_2, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Vuforia.CameraDevice/CameraField
IL2CPP_EXTERN_C void CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshal_pinvoke(const CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E& unmarshaled, CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshaled_pinvoke& marshaled)
{
	marshaled.___Type_0 = unmarshaled.get_Type_0();
	marshaled.___Key_1 = il2cpp_codegen_marshal_string(unmarshaled.get_Key_1());
}
IL2CPP_EXTERN_C void CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshal_pinvoke_back(const CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshaled_pinvoke& marshaled, CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E& unmarshaled)
{
	int32_t unmarshaled_Type_temp_0 = 0;
	unmarshaled_Type_temp_0 = marshaled.___Type_0;
	unmarshaled.set_Type_0(unmarshaled_Type_temp_0);
	unmarshaled.set_Key_1(il2cpp_codegen_marshal_string_result(marshaled.___Key_1));
}
// Conversion method for clean up from marshalling of: Vuforia.CameraDevice/CameraField
IL2CPP_EXTERN_C void CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshal_pinvoke_cleanup(CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Key_1);
	marshaled.___Key_1 = NULL;
}
// Conversion methods for marshalling of: Vuforia.CameraDevice/CameraField
IL2CPP_EXTERN_C void CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshal_com(const CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E& unmarshaled, CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshaled_com& marshaled)
{
	marshaled.___Type_0 = unmarshaled.get_Type_0();
	marshaled.___Key_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Key_1());
}
IL2CPP_EXTERN_C void CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshal_com_back(const CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshaled_com& marshaled, CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E& unmarshaled)
{
	int32_t unmarshaled_Type_temp_0 = 0;
	unmarshaled_Type_temp_0 = marshaled.___Type_0;
	unmarshaled.set_Type_0(unmarshaled_Type_temp_0);
	unmarshaled.set_Key_1(il2cpp_codegen_marshal_bstring_result(marshaled.___Key_1));
}
// Conversion method for clean up from marshalling of: Vuforia.CameraDevice/CameraField
IL2CPP_EXTERN_C void CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshal_com_cleanup(CameraField_t1355F38B3A588F82A285DCC14160FB6578354A7E_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Key_1);
	marshaled.___Key_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Vuforia.CameraDevice/CameraFieldData
IL2CPP_EXTERN_C void CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D_marshal_pinvoke(const CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D& unmarshaled, CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D_marshaled_pinvoke& marshaled)
{
	marshaled.___KeyValue_0 = il2cpp_codegen_marshal_string(unmarshaled.get_KeyValue_0());
	marshaled.___DataType_1 = unmarshaled.get_DataType_1();
	marshaled.___Unused_2 = unmarshaled.get_Unused_2();
}
IL2CPP_EXTERN_C void CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D_marshal_pinvoke_back(const CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D_marshaled_pinvoke& marshaled, CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D& unmarshaled)
{
	unmarshaled.set_KeyValue_0(il2cpp_codegen_marshal_string_result(marshaled.___KeyValue_0));
	int32_t unmarshaled_DataType_temp_1 = 0;
	unmarshaled_DataType_temp_1 = marshaled.___DataType_1;
	unmarshaled.set_DataType_1(unmarshaled_DataType_temp_1);
	int32_t unmarshaled_Unused_temp_2 = 0;
	unmarshaled_Unused_temp_2 = marshaled.___Unused_2;
	unmarshaled.set_Unused_2(unmarshaled_Unused_temp_2);
}
// Conversion method for clean up from marshalling of: Vuforia.CameraDevice/CameraFieldData
IL2CPP_EXTERN_C void CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D_marshal_pinvoke_cleanup(CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___KeyValue_0);
	marshaled.___KeyValue_0 = NULL;
}
// Conversion methods for marshalling of: Vuforia.CameraDevice/CameraFieldData
IL2CPP_EXTERN_C void CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D_marshal_com(const CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D& unmarshaled, CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D_marshaled_com& marshaled)
{
	marshaled.___KeyValue_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_KeyValue_0());
	marshaled.___DataType_1 = unmarshaled.get_DataType_1();
	marshaled.___Unused_2 = unmarshaled.get_Unused_2();
}
IL2CPP_EXTERN_C void CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D_marshal_com_back(const CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D_marshaled_com& marshaled, CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D& unmarshaled)
{
	unmarshaled.set_KeyValue_0(il2cpp_codegen_marshal_bstring_result(marshaled.___KeyValue_0));
	int32_t unmarshaled_DataType_temp_1 = 0;
	unmarshaled_DataType_temp_1 = marshaled.___DataType_1;
	unmarshaled.set_DataType_1(unmarshaled_DataType_temp_1);
	int32_t unmarshaled_Unused_temp_2 = 0;
	unmarshaled_Unused_temp_2 = marshaled.___Unused_2;
	unmarshaled.set_Unused_2(unmarshaled_Unused_temp_2);
}
// Conversion method for clean up from marshalling of: Vuforia.CameraDevice/CameraFieldData
IL2CPP_EXTERN_C void CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D_marshal_com_cleanup(CameraFieldData_tC1C7457CDC1D31ABD5FE022540591C02C15C7F7D_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___KeyValue_0);
	marshaled.___KeyValue_0 = NULL;
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
// System.Void Vuforia.CommandBufferTextureDefinitionsProvider_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD73DB2EB2863AF1DE7CF3B26C2A586101F14F7C1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mD73DB2EB2863AF1DE7CF3B26C2A586101F14F7C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD * L_0 = (U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD *)il2cpp_codegen_object_new(U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5C1F97F5DB9B89999D81D10F1B425080213C2F25(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.CommandBufferTextureDefinitionsProvider_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5C1F97F5DB9B89999D81D10F1B425080213C2F25 (U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.CommandBufferTextureDefinition> Vuforia.CommandBufferTextureDefinitionsProvider_<>c::<.cctor>b__5_0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_0_mFA5CA4C4861B49048751BE330944BE2DB0D2446B (U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__5_0_mFA5CA4C4861B49048751BE330944BE2DB0D2446B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_0 = (CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)SZArrayNew(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D_il2cpp_TypeInfo_var, (uint32_t)1);
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_1 = L_0;
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_2 = (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)il2cpp_codegen_object_new(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var);
		CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4(L_2, /*hidden argument*/NULL);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_CommandBufferTextureId_0(0);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(((int32_t)63));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)L_9);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.CommandBufferTextureDefinition> Vuforia.CommandBufferTextureDefinitionsProvider_<>c::<.cctor>b__5_1(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_1_m2DDEF409A4E2B9DB2A270028A2ECB0792A83F1CE (U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__5_1_m2DDEF409A4E2B9DB2A270028A2ECB0792A83F1CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_0 = (CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)SZArrayNew(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D_il2cpp_TypeInfo_var, (uint32_t)1);
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_1 = L_0;
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_2 = (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)il2cpp_codegen_object_new(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var);
		CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4(L_2, /*hidden argument*/NULL);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_CommandBufferTextureId_0(0);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(4);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)L_9);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.CommandBufferTextureDefinition> Vuforia.CommandBufferTextureDefinitionsProvider_<>c::<.cctor>b__5_2(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_2_m0FE9DD61CA7C8E73DE6DBBEF53169D1A829181BC (U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__5_2_m0FE9DD61CA7C8E73DE6DBBEF53169D1A829181BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_0 = (CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)SZArrayNew(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D_il2cpp_TypeInfo_var, (uint32_t)1);
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_1 = L_0;
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_2 = (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)il2cpp_codegen_object_new(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var);
		CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4(L_2, /*hidden argument*/NULL);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_CommandBufferTextureId_0(0);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(3);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)L_9);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.CommandBufferTextureDefinition> Vuforia.CommandBufferTextureDefinitionsProvider_<>c::<.cctor>b__5_3(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_3_mEE3A0506F4D9E3F3246F6F980BBF1611AD8463DF (U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__5_3_mEE3A0506F4D9E3F3246F6F980BBF1611AD8463DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_0 = (CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)SZArrayNew(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D_il2cpp_TypeInfo_var, (uint32_t)1);
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_1 = L_0;
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_2 = (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)il2cpp_codegen_object_new(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var);
		CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4(L_2, /*hidden argument*/NULL);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_CommandBufferTextureId_0(0);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(7);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)L_9);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.CommandBufferTextureDefinition> Vuforia.CommandBufferTextureDefinitionsProvider_<>c::<.cctor>b__5_4(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_4_m27C4E503904888ED934F8E950FA0E0604B309233 (U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__5_4_m27C4E503904888ED934F8E950FA0E0604B309233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_0 = (CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)SZArrayNew(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D_il2cpp_TypeInfo_var, (uint32_t)2);
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_1 = L_0;
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_2 = (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)il2cpp_codegen_object_new(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var);
		CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4(L_2, /*hidden argument*/NULL);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_CommandBufferTextureId_0(0);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(((int32_t)63));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)L_9);
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_10 = L_1;
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_11 = (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)il2cpp_codegen_object_new(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var);
		CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4(L_11, /*hidden argument*/NULL);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_12 = L_11;
		NullCheck(L_12);
		L_12->set_CommandBufferTextureId_0(1);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_13 = L_12;
		int32_t L_14 = ___width0;
		NullCheck(L_13);
		L_13->set_Width_1(((int32_t)((int32_t)L_14/(int32_t)2)));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_15 = L_13;
		int32_t L_16 = ___height1;
		NullCheck(L_15);
		L_15->set_Height_2(((int32_t)((int32_t)L_16/(int32_t)2)));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_17 = L_15;
		NullCheck(L_17);
		L_17->set_TextureFormat_3(((int32_t)62));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_18 = L_17;
		NullCheck(L_18);
		L_18->set_ShaderTextureName_4(_stringLiteral8AFF6FB8571DE2DFA3D5EC483D7D209D90AA53F0);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_18);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)L_18);
		return (RuntimeObject*)L_10;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.CommandBufferTextureDefinition> Vuforia.CommandBufferTextureDefinitionsProvider_<>c::<.cctor>b__5_5(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_5_mF6EABE7D8E2CBFFF4EF3C5DA9913C14B3954C5F4 (U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__5_5_mF6EABE7D8E2CBFFF4EF3C5DA9913C14B3954C5F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_0 = (CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)SZArrayNew(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D_il2cpp_TypeInfo_var, (uint32_t)2);
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_1 = L_0;
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_2 = (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)il2cpp_codegen_object_new(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var);
		CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4(L_2, /*hidden argument*/NULL);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_CommandBufferTextureId_0(0);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(((int32_t)63));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)L_9);
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_10 = L_1;
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_11 = (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)il2cpp_codegen_object_new(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var);
		CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4(L_11, /*hidden argument*/NULL);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_12 = L_11;
		NullCheck(L_12);
		L_12->set_CommandBufferTextureId_0(1);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_13 = L_12;
		int32_t L_14 = ___width0;
		NullCheck(L_13);
		L_13->set_Width_1(((int32_t)((int32_t)L_14/(int32_t)2)));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_15 = L_13;
		int32_t L_16 = ___height1;
		NullCheck(L_15);
		L_15->set_Height_2(((int32_t)((int32_t)L_16/(int32_t)2)));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_17 = L_15;
		NullCheck(L_17);
		L_17->set_TextureFormat_3(((int32_t)62));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_18 = L_17;
		NullCheck(L_18);
		L_18->set_ShaderTextureName_4(_stringLiteral8AFF6FB8571DE2DFA3D5EC483D7D209D90AA53F0);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_18);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)L_18);
		return (RuntimeObject*)L_10;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.CommandBufferTextureDefinition> Vuforia.CommandBufferTextureDefinitionsProvider_<>c::<.cctor>b__5_6(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_6_mD6F208C27DA1032EA8A1B87FCF86455A4E47C101 (U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__5_6_mD6F208C27DA1032EA8A1B87FCF86455A4E47C101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_0 = (CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)SZArrayNew(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D_il2cpp_TypeInfo_var, (uint32_t)3);
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_1 = L_0;
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_2 = (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)il2cpp_codegen_object_new(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var);
		CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4(L_2, /*hidden argument*/NULL);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_CommandBufferTextureId_0(0);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(((int32_t)63));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)L_9);
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_10 = L_1;
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_11 = (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)il2cpp_codegen_object_new(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var);
		CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4(L_11, /*hidden argument*/NULL);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_12 = L_11;
		NullCheck(L_12);
		L_12->set_CommandBufferTextureId_0(1);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_13 = L_12;
		int32_t L_14 = ___width0;
		NullCheck(L_13);
		L_13->set_Width_1(((int32_t)((int32_t)L_14/(int32_t)2)));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_15 = L_13;
		int32_t L_16 = ___height1;
		NullCheck(L_15);
		L_15->set_Height_2(((int32_t)((int32_t)L_16/(int32_t)2)));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_17 = L_15;
		NullCheck(L_17);
		L_17->set_TextureFormat_3(((int32_t)63));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_18 = L_17;
		NullCheck(L_18);
		L_18->set_ShaderTextureName_4(_stringLiteral8AFF6FB8571DE2DFA3D5EC483D7D209D90AA53F0);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_18);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)L_18);
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_19 = L_10;
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_20 = (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)il2cpp_codegen_object_new(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var);
		CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4(L_20, /*hidden argument*/NULL);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_21 = L_20;
		NullCheck(L_21);
		L_21->set_CommandBufferTextureId_0(2);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_22 = L_21;
		int32_t L_23 = ___width0;
		NullCheck(L_22);
		L_22->set_Width_1(((int32_t)((int32_t)L_23/(int32_t)2)));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_24 = L_22;
		int32_t L_25 = ___height1;
		NullCheck(L_24);
		L_24->set_Height_2(((int32_t)((int32_t)L_25/(int32_t)2)));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_26 = L_24;
		NullCheck(L_26);
		L_26->set_TextureFormat_3(((int32_t)63));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_27 = L_26;
		NullCheck(L_27);
		L_27->set_ShaderTextureName_4(_stringLiteral2623C9694AD5C956295C47EBBD9EA0BD437696B7);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_27);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)L_27);
		return (RuntimeObject*)L_19;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.CommandBufferTextureDefinition> Vuforia.CommandBufferTextureDefinitionsProvider_<>c::<.cctor>b__5_7(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_7_m26706E5885EBFCBAB1DDB0C26C8A8F2534210131 (U3CU3Ec_t52F6FA835B1B20F220D3F90D16CFD73123D0DCFD * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__5_7_m26706E5885EBFCBAB1DDB0C26C8A8F2534210131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_0 = (CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D*)SZArrayNew(CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D_il2cpp_TypeInfo_var, (uint32_t)3);
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_1 = L_0;
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_2 = (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)il2cpp_codegen_object_new(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var);
		CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4(L_2, /*hidden argument*/NULL);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_CommandBufferTextureId_0(0);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(((int32_t)63));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)L_9);
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_10 = L_1;
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_11 = (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)il2cpp_codegen_object_new(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var);
		CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4(L_11, /*hidden argument*/NULL);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_12 = L_11;
		NullCheck(L_12);
		L_12->set_CommandBufferTextureId_0(1);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_13 = L_12;
		int32_t L_14 = ___width0;
		NullCheck(L_13);
		L_13->set_Width_1(((int32_t)((int32_t)L_14/(int32_t)2)));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_15 = L_13;
		int32_t L_16 = ___height1;
		NullCheck(L_15);
		L_15->set_Height_2(((int32_t)((int32_t)L_16/(int32_t)2)));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_17 = L_15;
		NullCheck(L_17);
		L_17->set_TextureFormat_3(((int32_t)63));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_18 = L_17;
		NullCheck(L_18);
		L_18->set_ShaderTextureName_4(_stringLiteral8AFF6FB8571DE2DFA3D5EC483D7D209D90AA53F0);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_18);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)L_18);
		CommandBufferTextureDefinitionU5BU5D_t567F49A864973FFF05D9E83CD674AE755F949E4D* L_19 = L_10;
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_20 = (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)il2cpp_codegen_object_new(CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE_il2cpp_TypeInfo_var);
		CommandBufferTextureDefinition__ctor_mCF5370A42886311C17D84D02528E4F88D56F13A4(L_20, /*hidden argument*/NULL);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_21 = L_20;
		NullCheck(L_21);
		L_21->set_CommandBufferTextureId_0(2);
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_22 = L_21;
		int32_t L_23 = ___width0;
		NullCheck(L_22);
		L_22->set_Width_1(((int32_t)((int32_t)L_23/(int32_t)2)));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_24 = L_22;
		int32_t L_25 = ___height1;
		NullCheck(L_24);
		L_24->set_Height_2(((int32_t)((int32_t)L_25/(int32_t)2)));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_26 = L_24;
		NullCheck(L_26);
		L_26->set_TextureFormat_3(((int32_t)63));
		CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE * L_27 = L_26;
		NullCheck(L_27);
		L_27->set_ShaderTextureName_4(_stringLiteral2623C9694AD5C956295C47EBBD9EA0BD437696B7);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_27);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (CommandBufferTextureDefinition_tA09E411E28578AC0D22E87D3535AE1DBAEC075FE *)L_27);
		return (RuntimeObject*)L_19;
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
// System.Void Vuforia.CommandBufferVideoTextureUpdater_<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m60D7ADAFABC61684FC3460F07E5541E0E92D9810 (U3CU3Ec__DisplayClass22_0_t06ACBAA1DAA0750BA0C8E1A4D9D9A53430B4BFFE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.CommandBufferVideoTextureUpdater_<>c__DisplayClass22_0::<EnableShaderKeyword>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass22_0_U3CEnableShaderKeywordU3Eb__0_m48B1F819F585D24A24A5A203CDEE9EB9DF9F6CB9 (U3CU3Ec__DisplayClass22_0_t06ACBAA1DAA0750BA0C8E1A4D9D9A53430B4BFFE * __this, String_t* ___k0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___k0;
		String_t* L_1 = __this->get_keyword_0();
		bool L_2 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Vuforia.CommandBufferVideoTextureUpdater_<>c__DisplayClass22_0::<EnableShaderKeyword>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass22_0_U3CEnableShaderKeywordU3Eb__1_mA4FAE88F16FDC044613D9FB62D20CA4E28762175 (U3CU3Ec__DisplayClass22_0_t06ACBAA1DAA0750BA0C8E1A4D9D9A53430B4BFFE * __this, String_t* ___k0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___k0;
		String_t* L_1 = __this->get_keyword_0();
		bool L_2 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Vuforia.ContentPositioningBehaviour_<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mFC67D76BCD3D677D6C0F9D793ED20987BB3F0132 (U3CU3Ec__DisplayClass10_0_t49926E8D82024754620CFBFAA0A14BADBD7E07C2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Vuforia.Anchor Vuforia.ContentPositioningBehaviour_<>c__DisplayClass10_0::<PositionContentAtPlaneAnchor>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass10_0_U3CPositionContentAtPlaneAnchorU3Eb__0_m01403CBAC2A4828DEB1FA4D8B7A20DF6408AE073 (U3CU3Ec__DisplayClass10_0_t49926E8D82024754620CFBFAA0A14BADBD7E07C2 * __this, String_t* ___anchor0, const RuntimeMethod* method)
{
	{
		ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		PositionalDeviceTracker_t6ABCBD564879CA0036D88243CB3C187E5DCED92E * L_1 = L_0->get_mDeviceTracker_10();
		String_t* L_2 = ___anchor0;
		HitTestResult_t94D92389FD79AEEA1E370E6C25024A1EC996A21D * L_3 = __this->get_hitTestResult_1();
		NullCheck(L_1);
		RuntimeObject* L_4 = VirtFuncInvoker2< RuntimeObject*, String_t*, HitTestResult_t94D92389FD79AEEA1E370E6C25024A1EC996A21D * >::Invoke(11 /* Vuforia.Anchor Vuforia.PositionalDeviceTracker::CreatePlaneAnchor(System.String,Vuforia.HitTestResult) */, L_1, L_2, L_3);
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
// System.Void Vuforia.ContentPositioningBehaviour_<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m3ED7B7ADE646C6BA91D33E15B52DB8DE12B752B5 (U3CU3Ec__DisplayClass13_0_t4CB6EF0E390D91E46BD8FC88F2CB31C30C4B5D19 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.ContentPositioningBehaviour_<>c__DisplayClass13_0::<OnAnchorRemoved>b__0(Vuforia.AnchorBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3COnAnchorRemovedU3Eb__0_m9BC94544B81E223BDC18339E17F45A549D949FB2 (U3CU3Ec__DisplayClass13_0_t4CB6EF0E390D91E46BD8FC88F2CB31C30C4B5D19 * __this, AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C * ___a0, const RuntimeMethod* method)
{
	{
		AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C * L_0 = ___a0;
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable() */, L_0);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C * L_2 = ___a0;
		NullCheck(L_2);
		RuntimeObject* L_3 = VirtFuncInvoker0< RuntimeObject* >::Invoke(4 /* Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable() */, L_2);
		RuntimeObject* L_4 = __this->get_anchor_0();
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)L_4))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
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
// System.Void Vuforia.ContentPositioningBehaviour_<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m587061613AC4ACB5104EDD11870165C77AE88F9D (U3CU3Ec__DisplayClass9_0_t1DB6F31870E50A5FA504FBBE5C2956D8BA8CD753 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Vuforia.Anchor Vuforia.ContentPositioningBehaviour_<>c__DisplayClass9_0::<PositionContentAtMidAirAnchor>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass9_0_U3CPositionContentAtMidAirAnchorU3Eb__0_m58ED10EA74F9AE8748CF4F7C7DA3C9453893F255 (U3CU3Ec__DisplayClass9_0_t1DB6F31870E50A5FA504FBBE5C2956D8BA8CD753 * __this, String_t* ___anchor0, const RuntimeMethod* method)
{
	{
		ContentPositioningBehaviour_t3EAD80C4C6A5EC51575DB53F14E73E8C6EEE6630 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		PositionalDeviceTracker_t6ABCBD564879CA0036D88243CB3C187E5DCED92E * L_1 = L_0->get_mDeviceTracker_10();
		String_t* L_2 = ___anchor0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_pose_1();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_pose_1();
		NullCheck(L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_7 = VirtFuncInvoker3< RuntimeObject*, String_t*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(10 /* Vuforia.Anchor Vuforia.PositionalDeviceTracker::CreateMidAirAnchor(System.String,UnityEngine.Vector3,UnityEngine.Quaternion) */, L_1, L_2, L_4, L_6);
		return L_7;
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
// System.Void Vuforia.DefaultConfigValidator_<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m81B0E413607D48E0ACE916367C6CBFDF1DECB097 (U3CU3Ec__DisplayClass2_0_tAA3C5E97930B341D0A95B0E76FF44312DD8BBE88 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.DefaultConfigValidator_<>c__DisplayClass2_0::<ValidateAll>b__0(Vuforia.AValidatableConfigProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CValidateAllU3Eb__0_mEE0CF4A0D500A7A7AF614B1F16A28D71E5EBAA93 (U3CU3Ec__DisplayClass2_0_tAA3C5E97930B341D0A95B0E76FF44312DD8BBE88 * __this, AValidatableConfigProperty_tC001220DBA97538D52ACDF63B14E5163219D2B12 * ___p0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_res_0();
		AValidatableConfigProperty_tC001220DBA97538D52ACDF63B14E5163219D2B12 * L_1 = ___p0;
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.AValidatableConfigProperty::Validate() */, L_1);
		__this->set_res_0((bool)((int32_t)((int32_t)L_0&(int32_t)L_2)));
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
// System.Void Vuforia.GLTFExtractorUtility_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBF36071077D13757E36BBFD9582BB37185810A5F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mBF36071077D13757E36BBFD9582BB37185810A5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0 * L_0 = (U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0 *)il2cpp_codegen_object_new(U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2DFBF30207E40A4C327266E1A34720186D09AB4B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.GLTFExtractorUtility_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2DFBF30207E40A4C327266E1A34720186D09AB4B (U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.GLTFExtractorUtility_<>c::<ValidateKeys>b__22_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CValidateKeysU3Eb__22_0_mDC792EFF55CF0460C96474E0D5BE3DE339BDB525 (U3CU3Ec_tC360C5CFDB5970F92F57119DC6644CD29C7EB4D0 * __this, String_t* ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CValidateKeysU3Eb__22_0_mDC792EFF55CF0460C96474E0D5BE3DE339BDB525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___k0;
		NullCheck(L_0);
		bool L_1 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_0, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, /*hidden argument*/NULL);
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
// System.Void Vuforia.GuideViewRenderingBehaviour_<SetChildOfVuforiaAnchor>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetChildOfVuforiaAnchorU3Ed__23__ctor_mE230BBF18EC7DEC4CEEC0B39453BF4BFC16B0604 (U3CSetChildOfVuforiaAnchorU3Ed__23_tDEF494FDCF285E467D968D04E98E4130FCB9C059 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.GuideViewRenderingBehaviour_<SetChildOfVuforiaAnchor>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetChildOfVuforiaAnchorU3Ed__23_System_IDisposable_Dispose_m225ADDC1B0FCA49CB60C02DE41E61D1C5022EEF9 (U3CSetChildOfVuforiaAnchorU3Ed__23_tDEF494FDCF285E467D968D04E98E4130FCB9C059 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.GuideViewRenderingBehaviour_<SetChildOfVuforiaAnchor>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSetChildOfVuforiaAnchorU3Ed__23_MoveNext_mA07C631CF078DA7245E7FD0A1F0B1F4EC926A8A5 (U3CSetChildOfVuforiaAnchorU3Ed__23_tDEF494FDCF285E467D968D04E98E4130FCB9C059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSetChildOfVuforiaAnchorU3Ed__23_MoveNext_mA07C631CF078DA7245E7FD0A1F0B1F4EC926A8A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * V_1 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0058;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_3 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0058:
	{
		__this->set_U3CU3E1__state_0((-1));
		IL2CPP_RUNTIME_CLASS_INIT(DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB_il2cpp_TypeInfo_var);
		DigitalEyewearARController_t2257687479CC6AB37D960C252D95AAE6C38A3EAB * L_5 = DigitalEyewearARController_get_Instance_m2588DB7AC8E0EAAAEB9E7964E9421C1DE1847721(/*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = DigitalEyewearARController_get_CentralAnchorPoint_m9AF1BC19053C397778A2D5E08468708168BA74EB(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * L_7 = V_1;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * L_12 = V_1;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = V_2;
		NullCheck(L_13);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0089:
	{
		GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * L_15 = V_1;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_16, L_17, /*hidden argument*/NULL);
		GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * L_18 = V_1;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_19, L_20, /*hidden argument*/NULL);
		GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * L_21 = V_1;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_22, L_23, /*hidden argument*/NULL);
		GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * L_24 = V_1;
		NullCheck(L_24);
		L_24->set_mGuideViewInitialized_10((bool)1);
		return (bool)0;
	}
}
// System.Object Vuforia.GuideViewRenderingBehaviour_<SetChildOfVuforiaAnchor>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSetChildOfVuforiaAnchorU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4FAE976D526DFB04CEC4B627E3B51FBB0E9179BE (U3CSetChildOfVuforiaAnchorU3Ed__23_tDEF494FDCF285E467D968D04E98E4130FCB9C059 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.GuideViewRenderingBehaviour_<SetChildOfVuforiaAnchor>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetChildOfVuforiaAnchorU3Ed__23_System_Collections_IEnumerator_Reset_m8DBA811AE48F14F1B3D52EED9E10FBBC14B1719F (U3CSetChildOfVuforiaAnchorU3Ed__23_tDEF494FDCF285E467D968D04E98E4130FCB9C059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSetChildOfVuforiaAnchorU3Ed__23_System_Collections_IEnumerator_Reset_m8DBA811AE48F14F1B3D52EED9E10FBBC14B1719F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CSetChildOfVuforiaAnchorU3Ed__23_System_Collections_IEnumerator_Reset_m8DBA811AE48F14F1B3D52EED9E10FBBC14B1719F_RuntimeMethod_var);
	}
}
// System.Object Vuforia.GuideViewRenderingBehaviour_<SetChildOfVuforiaAnchor>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSetChildOfVuforiaAnchorU3Ed__23_System_Collections_IEnumerator_get_Current_mBAE9BD3F264E442AB5078418B87532145EBD3BFF (U3CSetChildOfVuforiaAnchorU3Ed__23_tDEF494FDCF285E467D968D04E98E4130FCB9C059 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Vuforia.GuideViewRenderingBehaviour_<ShowGuideViewAfter>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGuideViewAfterU3Ed__22__ctor_m71E246B16D5DA4C3A1E11AA94A397236F0DA3063 (U3CShowGuideViewAfterU3Ed__22_tB8EDACC2BB30E91FCA948474008250B4E509C911 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.GuideViewRenderingBehaviour_<ShowGuideViewAfter>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGuideViewAfterU3Ed__22_System_IDisposable_Dispose_m2ED555E7067FC26F4C3C38A76AA6E2D37462CC11 (U3CShowGuideViewAfterU3Ed__22_tB8EDACC2BB30E91FCA948474008250B4E509C911 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.GuideViewRenderingBehaviour_<ShowGuideViewAfter>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowGuideViewAfterU3Ed__22_MoveNext_m517454F0272F7D92B969DEE7DE651A6FCD767FE7 (U3CShowGuideViewAfterU3Ed__22_tB8EDACC2BB30E91FCA948474008250B4E509C911 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowGuideViewAfterU3Ed__22_MoveNext_m517454F0272F7D92B969DEE7DE651A6FCD767FE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		float L_4 = __this->get_seconds_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		GuideViewRenderingBehaviour_t170F4897B59096833DA5C0AC28F9FDAF3664DB4A * L_6 = V_1;
		NullCheck(L_6);
		GuideViewRenderingBehaviour_ShowGuideView_m3BF86EE23F68490A2E160BA391A883D46A9EAD31(L_6, (bool)1, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object Vuforia.GuideViewRenderingBehaviour_<ShowGuideViewAfter>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowGuideViewAfterU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5AF6BDEC7603ACFB10E2AA2B2E0B6B78C540DC79 (U3CShowGuideViewAfterU3Ed__22_tB8EDACC2BB30E91FCA948474008250B4E509C911 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.GuideViewRenderingBehaviour_<ShowGuideViewAfter>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowGuideViewAfterU3Ed__22_System_Collections_IEnumerator_Reset_m4CB5C4B91032B3465F23A15CEEAAA7802FB6CE7D (U3CShowGuideViewAfterU3Ed__22_tB8EDACC2BB30E91FCA948474008250B4E509C911 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShowGuideViewAfterU3Ed__22_System_Collections_IEnumerator_Reset_m4CB5C4B91032B3465F23A15CEEAAA7802FB6CE7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CShowGuideViewAfterU3Ed__22_System_Collections_IEnumerator_Reset_m4CB5C4B91032B3465F23A15CEEAAA7802FB6CE7D_RuntimeMethod_var);
	}
}
// System.Object Vuforia.GuideViewRenderingBehaviour_<ShowGuideViewAfter>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShowGuideViewAfterU3Ed__22_System_Collections_IEnumerator_get_Current_m40F93D5CE16D2333CF1ECCD5ACF9F228134D4BEB (U3CShowGuideViewAfterU3Ed__22_tB8EDACC2BB30E91FCA948474008250B4E509C911 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Vuforia.EditorClasses.JSONArray_<GetEnumerator>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12__ctor_mB1D24050B13B414FF9F9D62DBC7DD92D2F4FE4C1 (U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.EditorClasses.JSONArray_<GetEnumerator>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12_System_IDisposable_Dispose_m18412CB48D0D72AFF538C80CB9543B850DC0C8FF (U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__12_U3CU3Em__Finally1_m5F18310FDDED70E5E0B62EE53E6E85DA15B1C812(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Vuforia.EditorClasses.JSONArray_<GetEnumerator>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__12_MoveNext_m5A4099A16D133E9A5327A401DEB1BA1162563652 (U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__12_MoveNext_m5A4099A16D133E9A5327A401DEB1BA1162563652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 * V_2 = NULL;
	JSONNode_t2AC73352107C87692E5E6508C959400504495752 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0059;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_008b;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 * L_4 = V_2;
			NullCheck(L_4);
			List_1_t87698B07D247495DD045F96620F11B9FE07473B9 * L_5 = L_4->get_mNodes_3();
			NullCheck(L_5);
			Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7  L_6 = List_1_GetEnumerator_mA9E2A3A8035A3A8BA25CD091DA12DA8DA51D8966(L_5, /*hidden argument*/List_1_GetEnumerator_mA9E2A3A8035A3A8BA25CD091DA12DA8DA51D8966_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0061;
		}

IL_003b:
		{
			Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 * L_7 = __this->get_address_of_U3CU3E7__wrap1_3();
			JSONNode_t2AC73352107C87692E5E6508C959400504495752 * L_8 = Enumerator_get_Current_mD69E384B09C34BF90611D6130124EB97A11B3DEE_inline((Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 *)L_7, /*hidden argument*/Enumerator_get_Current_mD69E384B09C34BF90611D6130124EB97A11B3DEE_RuntimeMethod_var);
			V_3 = L_8;
			JSONNode_t2AC73352107C87692E5E6508C959400504495752 * L_9 = V_3;
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_008b;
		}

IL_0059:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0061:
		{
			Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 * L_10 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_11 = Enumerator_MoveNext_m279B322EBB8E06A6E0A30CDA4FFC0B765DDCCE0D((Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 *)L_10, /*hidden argument*/Enumerator_MoveNext_m279B322EBB8E06A6E0A30CDA4FFC0B765DDCCE0D_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_003b;
			}
		}

IL_006e:
		{
			U3CGetEnumeratorU3Ed__12_U3CU3Em__Finally1_m5F18310FDDED70E5E0B62EE53E6E85DA15B1C812(__this, /*hidden argument*/NULL);
			Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 * L_12 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 ));
			V_0 = (bool)0;
			goto IL_008b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0084;
	}

FAULT_0084:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__12_System_IDisposable_Dispose_m18412CB48D0D72AFF538C80CB9543B850DC0C8FF(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(132)
	} // end fault
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void Vuforia.EditorClasses.JSONArray_<GetEnumerator>d__12::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12_U3CU3Em__Finally1_m5F18310FDDED70E5E0B62EE53E6E85DA15B1C812 (U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__12_U3CU3Em__Finally1_m5F18310FDDED70E5E0B62EE53E6E85DA15B1C812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_m89F46A1ACC5ACEADED27E914406B90CF997CDA50((Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 *)L_0, /*hidden argument*/Enumerator_Dispose_m89F46A1ACC5ACEADED27E914406B90CF997CDA50_RuntimeMethod_var);
		return;
	}
}
// System.Object Vuforia.EditorClasses.JSONArray_<GetEnumerator>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA088AB3512EBEF5EDB29609275365635C10AE21E (U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.EditorClasses.JSONArray_<GetEnumerator>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12_System_Collections_IEnumerator_Reset_m6D115AB4269C0C8EE09EAF38B8ED7FA66959805C (U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__12_System_Collections_IEnumerator_Reset_m6D115AB4269C0C8EE09EAF38B8ED7FA66959805C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetEnumeratorU3Ed__12_System_Collections_IEnumerator_Reset_m6D115AB4269C0C8EE09EAF38B8ED7FA66959805C_RuntimeMethod_var);
	}
}
// System.Object Vuforia.EditorClasses.JSONArray_<GetEnumerator>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__12_System_Collections_IEnumerator_get_Current_m34D69B982D7596AD2F94A35F51F1C17D9D37D72A (U3CGetEnumeratorU3Ed__12_tAA1C88125ACC7022F3D0EAF616D7C93A9CDAF492 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Vuforia.EditorClasses.JSONArray_<get_Children>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__11__ctor_mE0D4C6C12E3023954D028C9CCB7595B2B0BE4FBB (U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Vuforia.EditorClasses.JSONArray_<get_Children>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__11_System_IDisposable_Dispose_m34C9C9C2D90F31E5B6ACCA801F6243D6B1492385 (U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3Cget_ChildrenU3Ed__11_U3CU3Em__Finally1_m10097AA4522D11D416E5CCD90541B405C3BEBED4(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Vuforia.EditorClasses.JSONArray_<get_Children>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__11_MoveNext_m8AE06E71CD0E851AE2FDD8C4CA69E619F63ED0EF (U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_ChildrenU3Ed__11_MoveNext_m8AE06E71CD0E851AE2FDD8C4CA69E619F63ED0EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 * V_2 = NULL;
	JSONNode_t2AC73352107C87692E5E6508C959400504495752 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0059;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_008b;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 * L_4 = V_2;
			NullCheck(L_4);
			List_1_t87698B07D247495DD045F96620F11B9FE07473B9 * L_5 = L_4->get_mNodes_3();
			NullCheck(L_5);
			Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7  L_6 = List_1_GetEnumerator_mA9E2A3A8035A3A8BA25CD091DA12DA8DA51D8966(L_5, /*hidden argument*/List_1_GetEnumerator_mA9E2A3A8035A3A8BA25CD091DA12DA8DA51D8966_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0061;
		}

IL_003b:
		{
			Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			JSONNode_t2AC73352107C87692E5E6508C959400504495752 * L_8 = Enumerator_get_Current_mD69E384B09C34BF90611D6130124EB97A11B3DEE_inline((Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 *)L_7, /*hidden argument*/Enumerator_get_Current_mD69E384B09C34BF90611D6130124EB97A11B3DEE_RuntimeMethod_var);
			V_3 = L_8;
			JSONNode_t2AC73352107C87692E5E6508C959400504495752 * L_9 = V_3;
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_008b;
		}

IL_0059:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0061:
		{
			Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 * L_10 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_11 = Enumerator_MoveNext_m279B322EBB8E06A6E0A30CDA4FFC0B765DDCCE0D((Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 *)L_10, /*hidden argument*/Enumerator_MoveNext_m279B322EBB8E06A6E0A30CDA4FFC0B765DDCCE0D_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_003b;
			}
		}

IL_006e:
		{
			U3Cget_ChildrenU3Ed__11_U3CU3Em__Finally1_m10097AA4522D11D416E5CCD90541B405C3BEBED4(__this, /*hidden argument*/NULL);
			Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 * L_12 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 ));
			V_0 = (bool)0;
			goto IL_008b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0084;
	}

FAULT_0084:
	{ // begin fault (depth: 1)
		U3Cget_ChildrenU3Ed__11_System_IDisposable_Dispose_m34C9C9C2D90F31E5B6ACCA801F6243D6B1492385(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(132)
	} // end fault
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008b:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void Vuforia.EditorClasses.JSONArray_<get_Children>d__11::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__11_U3CU3Em__Finally1_m10097AA4522D11D416E5CCD90541B405C3BEBED4 (U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_ChildrenU3Ed__11_U3CU3Em__Finally1_m10097AA4522D11D416E5CCD90541B405C3BEBED4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_m89F46A1ACC5ACEADED27E914406B90CF997CDA50((Enumerator_t19DFBBE0F206237737F5C363FE215451F96BE7D7 *)L_0, /*hidden argument*/Enumerator_Dispose_m89F46A1ACC5ACEADED27E914406B90CF997CDA50_RuntimeMethod_var);
		return;
	}
}
// Vuforia.EditorClasses.JSONNode Vuforia.EditorClasses.JSONArray_<get_Children>d__11::System.Collections.Generic.IEnumerator<Vuforia.EditorClasses.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t2AC73352107C87692E5E6508C959400504495752 * U3Cget_ChildrenU3Ed__11_System_Collections_Generic_IEnumeratorU3CVuforia_EditorClasses_JSONNodeU3E_get_Current_m2DFF7E140EC7CC6EDD1416AC878EA8B9F6774AC9 (U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t2AC73352107C87692E5E6508C959400504495752 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.EditorClasses.JSONArray_<get_Children>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__11_System_Collections_IEnumerator_Reset_mC1C03920FB5F18B97E2D70B06D6100A439A6206B (U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_ChildrenU3Ed__11_System_Collections_IEnumerator_Reset_mC1C03920FB5F18B97E2D70B06D6100A439A6206B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cget_ChildrenU3Ed__11_System_Collections_IEnumerator_Reset_mC1C03920FB5F18B97E2D70B06D6100A439A6206B_RuntimeMethod_var);
	}
}
// System.Object Vuforia.EditorClasses.JSONArray_<get_Children>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ChildrenU3Ed__11_System_Collections_IEnumerator_get_Current_mEC447174ADD44CDF4B52291AA9A9A41555FD1753 (U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t2AC73352107C87692E5E6508C959400504495752 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Vuforia.EditorClasses.JSONNode> Vuforia.EditorClasses.JSONArray_<get_Children>d__11::System.Collections.Generic.IEnumerable<Vuforia.EditorClasses.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__11_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_m494985539C72399D42188C10E398586074AE170D (U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_ChildrenU3Ed__11_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_m494985539C72399D42188C10E398586074AE170D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * L_3 = (U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D *)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__11__ctor_mE0D4C6C12E3023954D028C9CCB7595B2B0BE4FBB(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * L_4 = V_0;
		JSONArray_t7FB36677ABEC6923E74B29E32C5F09ED268F7F48 * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Vuforia.EditorClasses.JSONArray_<get_Children>d__11::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__11_System_Collections_IEnumerable_GetEnumerator_m29B7B44473F092D5EC16AA173FF2245842A7C0CB (U3Cget_ChildrenU3Ed__11_t89A0D4504C7FC378514BE1BAFB52484B22B06D9D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3Cget_ChildrenU3Ed__11_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_m494985539C72399D42188C10E398586074AE170D(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void Vuforia.EditorClasses.JSONNode_<get_Children>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__17__ctor_mFEB9E207BB7A5F0482DD82A27E746AE3A08E6AA0 (U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Vuforia.EditorClasses.JSONNode_<get_Children>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__17_System_IDisposable_Dispose_m89D56FFF6FCADFBE342648A323871C7AE26DCD0A (U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.EditorClasses.JSONNode_<get_Children>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__17_MoveNext_mD65E0C63EC62370F96FE57320AC73C283A541254 (U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		__this->set_U3CU3E1__state_0((-1));
		return (bool)0;
	}
}
// Vuforia.EditorClasses.JSONNode Vuforia.EditorClasses.JSONNode_<get_Children>d__17::System.Collections.Generic.IEnumerator<Vuforia.EditorClasses.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t2AC73352107C87692E5E6508C959400504495752 * U3Cget_ChildrenU3Ed__17_System_Collections_Generic_IEnumeratorU3CVuforia_EditorClasses_JSONNodeU3E_get_Current_m2F96C1C8CCA2563153648796D10DC5691153A471 (U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t2AC73352107C87692E5E6508C959400504495752 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.EditorClasses.JSONNode_<get_Children>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__17_System_Collections_IEnumerator_Reset_mF01DE22269428B61D809687D26607748F138DF8A (U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_ChildrenU3Ed__17_System_Collections_IEnumerator_Reset_mF01DE22269428B61D809687D26607748F138DF8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cget_ChildrenU3Ed__17_System_Collections_IEnumerator_Reset_mF01DE22269428B61D809687D26607748F138DF8A_RuntimeMethod_var);
	}
}
// System.Object Vuforia.EditorClasses.JSONNode_<get_Children>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ChildrenU3Ed__17_System_Collections_IEnumerator_get_Current_m35C0BC7E805E953B28968A6FCAC89102DE77DDC4 (U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t2AC73352107C87692E5E6508C959400504495752 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Vuforia.EditorClasses.JSONNode> Vuforia.EditorClasses.JSONNode_<get_Children>d__17::System.Collections.Generic.IEnumerable<Vuforia.EditorClasses.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__17_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_mDE88A651EC7EB4A66ECCEF7A5E5D448F3207533A (U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_ChildrenU3Ed__17_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_mDE88A651EC7EB4A66ECCEF7A5E5D448F3207533A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C * L_3 = (U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C *)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__17__ctor_mFEB9E207BB7A5F0482DD82A27E746AE3A08E6AA0(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator Vuforia.EditorClasses.JSONNode_<get_Children>d__17::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__17_System_Collections_IEnumerable_GetEnumerator_mDB57718B90E8B140D5AE8AB176BCF97238F43B65 (U3Cget_ChildrenU3Ed__17_t690D9158801F0DE02F477B4D03F311C7E75C2A4C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3Cget_ChildrenU3Ed__17_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_mDE88A651EC7EB4A66ECCEF7A5E5D448F3207533A(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void Vuforia.EditorClasses.JSONObject_<GetEnumerator>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12__ctor_mD9A81742613E46DEA80B4ABE97A0D5B0092524A5 (U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.EditorClasses.JSONObject_<GetEnumerator>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12_System_IDisposable_Dispose_m45720BAF24811BE4ADA84C6EDC0602E65AB98B77 (U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__12_U3CU3Em__Finally1_m961700A36E855C18B05224B59267741CB343432C(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Vuforia.EditorClasses.JSONObject_<GetEnumerator>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__12_MoveNext_m39071F50F7E47A6D24412F3A80802A48A95C3DC4 (U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__12_MoveNext_m39071F50F7E47A6D24412F3A80802A48A95C3DC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF * V_2 = NULL;
	KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_005e;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0090;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF * L_4 = V_2;
			NullCheck(L_4);
			Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78 * L_5 = L_4->get_mNodesByKey_3();
			NullCheck(L_5);
			Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3  L_6 = Dictionary_2_GetEnumerator_mE15A5338263B140F42AD19E03F4CBC46A6E6510A(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_mE15A5338263B140F42AD19E03F4CBC46A6E6510A_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0066;
		}

IL_003b:
		{
			Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 * L_7 = __this->get_address_of_U3CU3E7__wrap1_3();
			KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D  L_8 = Enumerator_get_Current_m107E20EE09A23DABD2F4E8982603812549A20360_inline((Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 *)L_7, /*hidden argument*/Enumerator_get_Current_m107E20EE09A23DABD2F4E8982603812549A20360_RuntimeMethod_var);
			V_3 = L_8;
			KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D  L_9 = V_3;
			KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D  L_10 = L_9;
			RuntimeObject * L_11 = Box(KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D_il2cpp_TypeInfo_var, &L_10);
			__this->set_U3CU3E2__current_1(L_11);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0090;
		}

IL_005e:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0066:
		{
			Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 * L_12 = __this->get_address_of_U3CU3E7__wrap1_3();
			bool L_13 = Enumerator_MoveNext_m0A9DDD879A7CF0DF34E93EB27936533EB0AA3C18((Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 *)L_12, /*hidden argument*/Enumerator_MoveNext_m0A9DDD879A7CF0DF34E93EB27936533EB0AA3C18_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_003b;
			}
		}

IL_0073:
		{
			U3CGetEnumeratorU3Ed__12_U3CU3Em__Finally1_m961700A36E855C18B05224B59267741CB343432C(__this, /*hidden argument*/NULL);
			Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 * L_14 = __this->get_address_of_U3CU3E7__wrap1_3();
			il2cpp_codegen_initobj(L_14, sizeof(Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 ));
			V_0 = (bool)0;
			goto IL_0090;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0089;
	}

FAULT_0089:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__12_System_IDisposable_Dispose_m45720BAF24811BE4ADA84C6EDC0602E65AB98B77(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(137)
	} // end fault
	IL2CPP_CLEANUP(137)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0090:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Void Vuforia.EditorClasses.JSONObject_<GetEnumerator>d__12::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12_U3CU3Em__Finally1_m961700A36E855C18B05224B59267741CB343432C (U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__12_U3CU3Em__Finally1_m961700A36E855C18B05224B59267741CB343432C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 * L_0 = __this->get_address_of_U3CU3E7__wrap1_3();
		Enumerator_Dispose_m870ACB10F5D726DE21B533C861CA6FA3CFC4367F((Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 *)L_0, /*hidden argument*/Enumerator_Dispose_m870ACB10F5D726DE21B533C861CA6FA3CFC4367F_RuntimeMethod_var);
		return;
	}
}
// System.Object Vuforia.EditorClasses.JSONObject_<GetEnumerator>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3979F3B5F2A8E3B5A2551A9A1117BCEC9F28B921 (U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.EditorClasses.JSONObject_<GetEnumerator>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12_System_Collections_IEnumerator_Reset_mA8B0F5B211A72E2631E06DE697D4CB433A277BE5 (U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__12_System_Collections_IEnumerator_Reset_mA8B0F5B211A72E2631E06DE697D4CB433A277BE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetEnumeratorU3Ed__12_System_Collections_IEnumerator_Reset_mA8B0F5B211A72E2631E06DE697D4CB433A277BE5_RuntimeMethod_var);
	}
}
// System.Object Vuforia.EditorClasses.JSONObject_<GetEnumerator>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__12_System_Collections_IEnumerator_get_Current_m85ACEB629C09F04ED09B3C43C6C1C76CBC9BA0C4 (U3CGetEnumeratorU3Ed__12_t7A328B73468A59DFCD5880DEB966903B60B0099B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Vuforia.EditorClasses.JSONObject_<get_Children>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__11__ctor_m447AD00BCAB79F2941740E764A53C7B23B166B19 (U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Vuforia.EditorClasses.JSONObject_<get_Children>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__11_System_IDisposable_Dispose_mDDB70009AD44A1DD4CD9A2C304462FC22ACAFE1B (U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3Cget_ChildrenU3Ed__11_U3CU3Em__Finally1_mEAFE4F38A6E3885C35443AF4305338BC3BC2986D(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Vuforia.EditorClasses.JSONObject_<get_Children>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cget_ChildrenU3Ed__11_MoveNext_mA3153D30EB175FDE399309D4E45C88FED7F12407 (U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_ChildrenU3Ed__11_MoveNext_mA3153D30EB175FDE399309D4E45C88FED7F12407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF * V_2 = NULL;
	KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_005f;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0091;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF * L_4 = V_2;
			NullCheck(L_4);
			Dictionary_2_t1205A2A9244C63D848B8F1B6CCE6C2F593005F78 * L_5 = L_4->get_mNodesByKey_3();
			NullCheck(L_5);
			Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3  L_6 = Dictionary_2_GetEnumerator_mE15A5338263B140F42AD19E03F4CBC46A6E6510A(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_mE15A5338263B140F42AD19E03F4CBC46A6E6510A_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0067;
		}

IL_003b:
		{
			Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D  L_8 = Enumerator_get_Current_m107E20EE09A23DABD2F4E8982603812549A20360_inline((Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 *)L_7, /*hidden argument*/Enumerator_get_Current_m107E20EE09A23DABD2F4E8982603812549A20360_RuntimeMethod_var);
			V_3 = L_8;
			JSONNode_t2AC73352107C87692E5E6508C959400504495752 * L_9 = KeyValuePair_2_get_Value_m901CC9F140983FA1493DFAD43415A664B146C05D_inline((KeyValuePair_2_t0BE4BA49379428316A33C69BB2F70D76F697CE1D *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m901CC9F140983FA1493DFAD43415A664B146C05D_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0091;
		}

IL_005f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0067:
		{
			Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 * L_10 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_11 = Enumerator_MoveNext_m0A9DDD879A7CF0DF34E93EB27936533EB0AA3C18((Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 *)L_10, /*hidden argument*/Enumerator_MoveNext_m0A9DDD879A7CF0DF34E93EB27936533EB0AA3C18_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_003b;
			}
		}

IL_0074:
		{
			U3Cget_ChildrenU3Ed__11_U3CU3Em__Finally1_mEAFE4F38A6E3885C35443AF4305338BC3BC2986D(__this, /*hidden argument*/NULL);
			Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 * L_12 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 ));
			V_0 = (bool)0;
			goto IL_0091;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_008a;
	}

FAULT_008a:
	{ // begin fault (depth: 1)
		U3Cget_ChildrenU3Ed__11_System_IDisposable_Dispose_mDDB70009AD44A1DD4CD9A2C304462FC22ACAFE1B(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(138)
	} // end fault
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0091:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void Vuforia.EditorClasses.JSONObject_<get_Children>d__11::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__11_U3CU3Em__Finally1_mEAFE4F38A6E3885C35443AF4305338BC3BC2986D (U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_ChildrenU3Ed__11_U3CU3Em__Finally1_mEAFE4F38A6E3885C35443AF4305338BC3BC2986D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_m870ACB10F5D726DE21B533C861CA6FA3CFC4367F((Enumerator_t355F6F7095A5F17818071E9CFE258C38EF1C2EE3 *)L_0, /*hidden argument*/Enumerator_Dispose_m870ACB10F5D726DE21B533C861CA6FA3CFC4367F_RuntimeMethod_var);
		return;
	}
}
// Vuforia.EditorClasses.JSONNode Vuforia.EditorClasses.JSONObject_<get_Children>d__11::System.Collections.Generic.IEnumerator<Vuforia.EditorClasses.JSONNode>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t2AC73352107C87692E5E6508C959400504495752 * U3Cget_ChildrenU3Ed__11_System_Collections_Generic_IEnumeratorU3CVuforia_EditorClasses_JSONNodeU3E_get_Current_m75535D665ACEAE4CCC43A6FCC38B8DBBFCCEF132 (U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t2AC73352107C87692E5E6508C959400504495752 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.EditorClasses.JSONObject_<get_Children>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cget_ChildrenU3Ed__11_System_Collections_IEnumerator_Reset_m364A14E8BE7221DE9E23B03C1406A9E1692CCF00 (U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_ChildrenU3Ed__11_System_Collections_IEnumerator_Reset_m364A14E8BE7221DE9E23B03C1406A9E1692CCF00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cget_ChildrenU3Ed__11_System_Collections_IEnumerator_Reset_m364A14E8BE7221DE9E23B03C1406A9E1692CCF00_RuntimeMethod_var);
	}
}
// System.Object Vuforia.EditorClasses.JSONObject_<get_Children>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cget_ChildrenU3Ed__11_System_Collections_IEnumerator_get_Current_mAE5114C22C1B98E4908F578A79E2F7DDA701DD7F (U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * __this, const RuntimeMethod* method)
{
	{
		JSONNode_t2AC73352107C87692E5E6508C959400504495752 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Vuforia.EditorClasses.JSONNode> Vuforia.EditorClasses.JSONObject_<get_Children>d__11::System.Collections.Generic.IEnumerable<Vuforia.EditorClasses.JSONNode>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__11_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_mF33903901BAAFB9B6DD1CC8C64F8C01443479EFF (U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cget_ChildrenU3Ed__11_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_mF33903901BAAFB9B6DD1CC8C64F8C01443479EFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * L_3 = (U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B *)il2cpp_codegen_object_new(U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B_il2cpp_TypeInfo_var);
		U3Cget_ChildrenU3Ed__11__ctor_m447AD00BCAB79F2941740E764A53C7B23B166B19(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * L_4 = V_0;
		JSONObject_t3291A1C02FD4BD7BC15052BBE475F7CD3833B5BF * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Vuforia.EditorClasses.JSONObject_<get_Children>d__11::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3Cget_ChildrenU3Ed__11_System_Collections_IEnumerable_GetEnumerator_m4F991E788ED37B6D76C9B735D13FF9BCB29D1437 (U3Cget_ChildrenU3Ed__11_t73A11F766AF0E091A033E62D0C1AD3C989F0C04B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3Cget_ChildrenU3Ed__11_System_Collections_Generic_IEnumerableU3CVuforia_EditorClasses_JSONNodeU3E_GetEnumerator_mF33903901BAAFB9B6DD1CC8C64F8C01443479EFF(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void Vuforia.MidAirPositionerBehaviour_AnchorPositionConfirmedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnchorPositionConfirmedEvent__ctor_m9AD27E43AD7B6A83A97B3A71324E148EE65C1489 (AnchorPositionConfirmedEvent_t7A8C61703F2893F2BAA448996FA4F404065BDF7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnchorPositionConfirmedEvent__ctor_m9AD27E43AD7B6A83A97B3A71324E148EE65C1489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m008B4FFEEC9A3795F6E37BAA9FC7A3DF3A4D84FE(__this, /*hidden argument*/UnityEvent_1__ctor_m008B4FFEEC9A3795F6E37BAA9FC7A3DF3A4D84FE_RuntimeMethod_var);
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
// System.Void Vuforia.MultiTargetImpl_MultiSetTargetSize::.ctor(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSetTargetSize__ctor_m291BB79D4A0A025660105728334CFF2D131FB973 (MultiSetTargetSize_t3228D2FF19C4CFB329B7A3AEE2DD7029726A827D * __this, intptr_t ___dataSetPtr0, String_t* ___name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSetTargetSize__ctor_m291BB79D4A0A025660105728334CFF2D131FB973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		DisabledSetTargetSize__ctor_m3AEF24F37F4A5189F731B4B3D60BE50DB21F78CE(__this, L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___dataSetPtr0;
		__this->set_mDataSetPtr_1((intptr_t)L_1);
		String_t* L_2 = ___name1;
		__this->set_mName_2(L_2);
		return;
	}
}
// System.Single Vuforia.MultiTargetImpl_MultiSetTargetSize::GetLargestSizeComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MultiSetTargetSize_GetLargestSizeComponent_m23ACD84A721EDE733D20D6E041B06B89E43DD12E (MultiSetTargetSize_t3228D2FF19C4CFB329B7A3AEE2DD7029726A827D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSetTargetSize_GetLargestSizeComponent_m23ACD84A721EDE733D20D6E041B06B89E43DD12E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_t98C450279288E425AED4E09C454B15FA816FA724_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = VuforiaWrapper_get_Instance_m639B63F11D692CC116D5E57E292DB6DD28DE657C(/*hidden argument*/NULL);
		intptr_t L_1 = __this->get_mDataSetPtr_1();
		String_t* L_2 = __this->get_mName_2();
		NullCheck(L_0);
		float L_3 = InterfaceFuncInvoker2< float, intptr_t, String_t* >::Invoke(87 /* System.Single Vuforia.IVuforiaWrapper::MultiTargetGetLargestSizeComponent(System.IntPtr,System.String) */, IVuforiaWrapper_t73ACA4203751EF7AEDFA99EBD8A7BA9100B13363_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, L_2);
		return L_3;
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
// System.Void Vuforia.NativeVideoTextureUpdater_<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m1E98108AA7CFA1D7DF460D7BE0DB80E6FEFB3553 (U3CU3Ec__DisplayClass23_0_tF049671C4B40C93A49C2B7AC6173F621F501D8AB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.NativeVideoTextureUpdater_<>c__DisplayClass23_0::<CreateTextureNative>b__0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CCreateTextureNativeU3Eb__0_m061F15AAD93597C360072C1B54413867EEF3E7F1 (U3CU3Ec__DisplayClass23_0_tF049671C4B40C93A49C2B7AC6173F621F501D8AB * __this, intptr_t ___ptr0, const RuntimeMethod* method)
{
	{
		NativeVideoTextureUpdater_t67BD3BA489CCF4F44BDEE5259805CEA225A019B8 * L_0 = __this->get_U3CU3E4__this_0();
		int32_t L_1 = __this->get_width_1();
		int32_t L_2 = __this->get_height_2();
		intptr_t L_3 = ___ptr0;
		NullCheck(L_0);
		NativeVideoTextureUpdater_OnNativeTextureCreated_m05A4ED90DED4EECC62A0669A3A5D86496EEC25D7(L_0, L_1, L_2, (intptr_t)L_3, /*hidden argument*/NULL);
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
// System.Void Vuforia.UnityRuntimeCompiled.NullUnityRuntimeCompiledFacade_NullUnityRenderPipeline::add_BeginFrameRendering(System.Action`1<UnityEngine.Camera[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullUnityRenderPipeline_add_BeginFrameRendering_m919E85381C892C1D83B68FE5EA9C434F179A9094 (NullUnityRenderPipeline_tA90EDF2AE97640FAB3C5757E9B14C0A6ACC0FAE9 * __this, Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullUnityRenderPipeline_add_BeginFrameRendering_m919E85381C892C1D83B68FE5EA9C434F179A9094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * V_0 = NULL;
	Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * V_1 = NULL;
	Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * V_2 = NULL;
	{
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_0 = __this->get_BeginFrameRendering_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_2 = V_1;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806_il2cpp_TypeInfo_var));
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 ** L_5 = __this->get_address_of_BeginFrameRendering_0();
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_6 = V_2;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_7 = V_1;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_8 = InterlockedCompareExchangeImpl<Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *>((Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_9 = V_0;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *)L_9) == ((RuntimeObject*)(Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.NullUnityRuntimeCompiledFacade_NullUnityRenderPipeline::remove_BeginFrameRendering(System.Action`1<UnityEngine.Camera[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullUnityRenderPipeline_remove_BeginFrameRendering_m61AEF5897932AD47D02665E23BF4A67DDC075531 (NullUnityRenderPipeline_tA90EDF2AE97640FAB3C5757E9B14C0A6ACC0FAE9 * __this, Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullUnityRenderPipeline_remove_BeginFrameRendering_m61AEF5897932AD47D02665E23BF4A67DDC075531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * V_0 = NULL;
	Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * V_1 = NULL;
	Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * V_2 = NULL;
	{
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_0 = __this->get_BeginFrameRendering_0();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_2 = V_1;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806_il2cpp_TypeInfo_var));
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 ** L_5 = __this->get_address_of_BeginFrameRendering_0();
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_6 = V_2;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_7 = V_1;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_8 = InterlockedCompareExchangeImpl<Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *>((Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_9 = V_0;
		Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *)L_9) == ((RuntimeObject*)(Action_1_t7D039C503207C0AC4B41B1764E9259C637D90806 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.NullUnityRuntimeCompiledFacade_NullUnityRenderPipeline::add_BeginCameraRendering(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullUnityRenderPipeline_add_BeginCameraRendering_m36A837B1D923470A88E39E41AD3E1CC0B7FCC9EF (NullUnityRenderPipeline_tA90EDF2AE97640FAB3C5757E9B14C0A6ACC0FAE9 * __this, Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullUnityRenderPipeline_add_BeginCameraRendering_m36A837B1D923470A88E39E41AD3E1CC0B7FCC9EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_0 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_1 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_2 = NULL;
	{
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = __this->get_BeginCameraRendering_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_2 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var));
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B ** L_5 = __this->get_address_of_BeginCameraRendering_1();
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_6 = V_2;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_7 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_8 = InterlockedCompareExchangeImpl<Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *>((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_9 = V_0;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_9) == ((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.NullUnityRuntimeCompiledFacade_NullUnityRenderPipeline::remove_BeginCameraRendering(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullUnityRenderPipeline_remove_BeginCameraRendering_m29D4C04D82BFD4F782AA23D7CFD80D51B4899ED2 (NullUnityRenderPipeline_tA90EDF2AE97640FAB3C5757E9B14C0A6ACC0FAE9 * __this, Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullUnityRenderPipeline_remove_BeginCameraRendering_m29D4C04D82BFD4F782AA23D7CFD80D51B4899ED2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_0 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_1 = NULL;
	Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * V_2 = NULL;
	{
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_0 = __this->get_BeginCameraRendering_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_1 = V_0;
		V_1 = L_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_2 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)CastclassSealed((RuntimeObject*)L_4, Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B_il2cpp_TypeInfo_var));
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B ** L_5 = __this->get_address_of_BeginCameraRendering_1();
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_6 = V_2;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_7 = V_1;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_8 = InterlockedCompareExchangeImpl<Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *>((Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_9 = V_0;
		Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_9) == ((RuntimeObject*)(Action_1_tF542A16B67D2A30E5C824E6EF0DD0ED4A065680B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRuntimeCompiled.NullUnityRuntimeCompiledFacade_NullUnityRenderPipeline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullUnityRenderPipeline__ctor_mF619C6088F0AA30292AC5D4F94A7371E73A4165F (NullUnityRenderPipeline_tA90EDF2AE97640FAB3C5757E9B14C0A6ACC0FAE9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.ObjectRecoBehaviour_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD88D18B258B029B81A513F024BDC17F175203183 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mD88D18B258B029B81A513F024BDC17F175203183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993 * L_0 = (U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993 *)il2cpp_codegen_object_new(U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m926153DEA5052DB15E8B027E9081F38C4C159535(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.ObjectRecoBehaviour_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m926153DEA5052DB15E8B027E9081F38C4C159535 (U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.ObjectRecoBehaviour_<>c::<StartReco>b__22_0(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartRecoU3Eb__22_0_m986986D923ABC1BB5D3AF1B36D076ACBD2066714 (U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CStartRecoU3Eb__22_0_m986986D923ABC1BB5D3AF1B36D076ACBD2066714_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ___handler0;
		DelegateHelper_InvokeWithExceptionHandling_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCC0889A0606B390534599AC1DC58034E544EA4CD(L_0, (bool)1, /*hidden argument*/DelegateHelper_InvokeWithExceptionHandling_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCC0889A0606B390534599AC1DC58034E544EA4CD_RuntimeMethod_var);
		return;
	}
}
// System.Void Vuforia.ObjectRecoBehaviour_<>c::<StopReco>b__23_0(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStopRecoU3Eb__23_0_m7D0839D503BAA74086CE88FC6F7F1E62516B3E05 (U3CU3Ec_t5F3BE0BB4542D618BAD1EA4B48CE321532CBB993 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CStopRecoU3Eb__23_0_m7D0839D503BAA74086CE88FC6F7F1E62516B3E05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ___handler0;
		DelegateHelper_InvokeWithExceptionHandling_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCC0889A0606B390534599AC1DC58034E544EA4CD(L_0, (bool)0, /*hidden argument*/DelegateHelper_InvokeWithExceptionHandling_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mCC0889A0606B390534599AC1DC58034E544EA4CD_RuntimeMethod_var);
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
// System.Void Vuforia.ObjectRecoBehaviour_<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mCC218BE1D6B6355BFE35D80D28357F91721B0843 (U3CU3Ec__DisplayClass21_0_tFD16358DE7FC0FBB407E99AC77492F07C5CCA6D7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.ObjectRecoBehaviour_<>c__DisplayClass21_0::<CheckInitialization>b__0(System.Action`1<Vuforia.TargetFinder>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CCheckInitializationU3Eb__0_m8D5330345141C15E9A8122929D66CC53CA3C611F (U3CU3Ec__DisplayClass21_0_tFD16358DE7FC0FBB407E99AC77492F07C5CCA6D7 * __this, Action_1_t680968FBB826541F142EBF7D79C27906716B992A * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass21_0_U3CCheckInitializationU3Eb__0_m8D5330345141C15E9A8122929D66CC53CA3C611F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t680968FBB826541F142EBF7D79C27906716B992A * L_0 = ___handler0;
		ObjectRecoBehaviour_tA6D650408897AF939D9E1C585C2014DF9CB65CF7 * L_1 = __this->get_U3CU3E4__this_0();
		NullCheck(L_1);
		TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC * L_2 = L_1->get_mTargetFinder_5();
		DelegateHelper_InvokeWithExceptionHandling_TisTargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC_m8EFA0DBFE93C7060EB2961B2CEC75825A511AD23(L_0, L_2, /*hidden argument*/DelegateHelper_InvokeWithExceptionHandling_TisTargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC_m8EFA0DBFE93C7060EB2961B2CEC75825A511AD23_RuntimeMethod_var);
		return;
	}
}
// System.Void Vuforia.ObjectRecoBehaviour_<>c__DisplayClass21_0::<CheckInitialization>b__1(System.Action`1<Vuforia.TargetFinder_InitState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CCheckInitializationU3Eb__1_m661202DC9D775C1A6B657F81D4C4397EA18B8276 (U3CU3Ec__DisplayClass21_0_tFD16358DE7FC0FBB407E99AC77492F07C5CCA6D7 * __this, Action_1_t7E6B55387F9557E0EF71FD16A4BB6AC1F0D6B070 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass21_0_U3CCheckInitializationU3Eb__1_m661202DC9D775C1A6B657F81D4C4397EA18B8276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t7E6B55387F9557E0EF71FD16A4BB6AC1F0D6B070 * L_0 = ___handler0;
		int32_t L_1 = __this->get_initState_1();
		DelegateHelper_InvokeWithExceptionHandling_TisInitState_t6A1561C4216CD71C9104710CE8A931B9376689CF_m404FECFA6F3E28EBFF6AAF947FC14B0B8555A8DB(L_0, L_1, /*hidden argument*/DelegateHelper_InvokeWithExceptionHandling_TisInitState_t6A1561C4216CD71C9104710CE8A931B9376689CF_m404FECFA6F3E28EBFF6AAF947FC14B0B8555A8DB_RuntimeMethod_var);
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
// System.Void Vuforia.ObjectRecoBehaviour_<>c__DisplayClass39_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_0__ctor_m2F9FA5B0AECB61E0F9E04602EECFCE942029ACB0 (U3CU3Ec__DisplayClass39_0_t49E8DB6ABD4B02494774E91A61013FE83BA694E2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.ObjectRecoBehaviour_<>c__DisplayClass39_0::<Update>b__0(System.Action`1<Vuforia.TargetFinder_UpdateState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_0_U3CUpdateU3Eb__0_mD5944A3A1EA6E8C563CBF16936E9EDD91D7A9571 (U3CU3Ec__DisplayClass39_0_t49E8DB6ABD4B02494774E91A61013FE83BA694E2 * __this, Action_1_t2A0AF9B2D555659D37BD5E81A8AA03D210E86FF1 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass39_0_U3CUpdateU3Eb__0_mD5944A3A1EA6E8C563CBF16936E9EDD91D7A9571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t2A0AF9B2D555659D37BD5E81A8AA03D210E86FF1 * L_0 = ___handler0;
		int32_t L_1 = __this->get_updateState_0();
		DelegateHelper_InvokeWithExceptionHandling_TisUpdateState_t85155F6AF6764B6B91AD900EA0F84753466680A4_mD6045658F817C481B0DAF3484078BB6E0F8A1683(L_0, L_1, /*hidden argument*/DelegateHelper_InvokeWithExceptionHandling_TisUpdateState_t85155F6AF6764B6B91AD900EA0F84753466680A4_mD6045658F817C481B0DAF3484078BB6E0F8A1683_RuntimeMethod_var);
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
// System.Void Vuforia.ObjectRecoBehaviour_<>c__DisplayClass39_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_1__ctor_m4F286BC4F5D878F53A214C0731B3DF3E7DEB1DE9 (U3CU3Ec__DisplayClass39_1_t8E98E48D7BDFFBBC73D4590FABF40BD849A4BF4C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.ObjectRecoBehaviour_<>c__DisplayClass39_1::<Update>b__1(System.Action`1<Vuforia.TargetFinder_TargetSearchResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass39_1_U3CUpdateU3Eb__1_m41DB1DC698A488464C9661FA7BA1BFE23796C416 (U3CU3Ec__DisplayClass39_1_t8E98E48D7BDFFBBC73D4590FABF40BD849A4BF4C * __this, Action_1_t5381EA86F908E22A8AF6E683B74245C1F5F81193 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass39_1_U3CUpdateU3Eb__1_m41DB1DC698A488464C9661FA7BA1BFE23796C416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t5381EA86F908E22A8AF6E683B74245C1F5F81193 * L_0 = ___handler0;
		TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320 * L_1 = __this->get_targetSearchResult_0();
		DelegateHelper_InvokeWithExceptionHandling_TisTargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320_m865B768E4E9A6EDB1ADD04EA3047F3A9E51C4AEC(L_0, L_1, /*hidden argument*/DelegateHelper_InvokeWithExceptionHandling_TisTargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320_m865B768E4E9A6EDB1ADD04EA3047F3A9E51C4AEC_RuntimeMethod_var);
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
// System.Void Vuforia.PlaneFinderBehaviour_<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_m33F1E72CB1980E754B8C90CA2E287C09E66F410B (U3CU3Ec__DisplayClass29_0_tE1C4D37CDB86BFB78E6E0EA8668F2A436EB1C5F7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.PlaneFinderBehaviour_<>c__DisplayClass29_0::<SetIndicatorVisible>b__0(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CSetIndicatorVisibleU3Eb__0_mB4AE8C391C0FBB176EDAD5CD5426E22FF21E6FA9 (U3CU3Ec__DisplayClass29_0_tE1C4D37CDB86BFB78E6E0EA8668F2A436EB1C5F7 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___c0, const RuntimeMethod* method)
{
	{
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0 = ___c0;
		bool L_1 = __this->get_isVisible_0();
		NullCheck(L_0);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.PlaneFinderBehaviour_<>c__DisplayClass29_0::<SetIndicatorVisible>b__1(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CSetIndicatorVisibleU3Eb__1_m113678D1903B32534C0E712A919D1C8A1105E3EC (U3CU3Ec__DisplayClass29_0_tE1C4D37CDB86BFB78E6E0EA8668F2A436EB1C5F7 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___c0, const RuntimeMethod* method)
{
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___c0;
		bool L_1 = __this->get_isVisible_0();
		NullCheck(L_0);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.PlaneFinderBehaviour_<>c__DisplayClass29_0::<SetIndicatorVisible>b__2(UnityEngine.Canvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CSetIndicatorVisibleU3Eb__2_mC4D97CABFB318E1652D2BA72DCDFB080487127B2 (U3CU3Ec__DisplayClass29_0_tE1C4D37CDB86BFB78E6E0EA8668F2A436EB1C5F7 * __this, Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___c0, const RuntimeMethod* method)
{
	{
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = ___c0;
		bool L_1 = __this->get_isVisible_0();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::DisplayDialog(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPlayModeEditorUtility_DisplayDialog_mBD4F421A6FE8B3BBFC5196E53478F032B91CEAC1 (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, String_t* ___title0, String_t* ___message1, String_t* ___ok2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Vuforia.WebCamProfile_ProfileCollection Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::LoadAndParseWebcamProfiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4  NullPlayModeEditorUtility_LoadAndParseWebcamProfiles_m76A61E9CEBC9B87361A7F55C4CB39D328BB80323 (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, const RuntimeMethod* method)
{
	ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4 ));
		ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4  L_0 = V_0;
		return L_0;
	}
}
// System.Void Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::RestartPlayMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPlayModeEditorUtility_RestartPlayMode_mA864A35997649AD4AB5AF0C60588B1DF93CED8EC (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::ShowMessageInFocusedEditorWindow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPlayModeEditorUtility_ShowMessageInFocusedEditorWindow_mCCEA15B1516D65C86AE7ACC248187D24EFFA0523 (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::IsVuforiaEnabledInPlayerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullPlayModeEditorUtility_IsVuforiaEnabledInPlayerSettings_m816BA50F8369C76EFA100941AAC92966E6B04225 (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Boolean Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::IsVuforiaActiveAndEULAAccepted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullPlayModeEditorUtility_IsVuforiaActiveAndEULAAccepted_m4C2B78E0CB085DE17A8EF5E06484AD5ECB56E5DD (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullPlayModeEditorUtility_IsVuforiaActiveAndEULAAccepted_m4C2B78E0CB085DE17A8EF5E06484AD5ECB56E5DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF * L_0 = VuforiaConfiguration_get_Instance_m194A91058D56580FB149957A556F04E8B54E8A2E(/*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * L_1 = VuforiaConfiguration_get_Vuforia_mEB558CD22BC18D4B63BCA8032AB0EA612A4F2B4B_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GenericVuforiaConfiguration_get_Version_m68B4127AD4C948EA5F64750DDC21A46CD2A054D5_inline(L_1, /*hidden argument*/NULL);
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_3 = EulaRuntimeUtility_ConvertToMajorMinorVersion_m40376FF426AC28A5F258C1A96464A821E0E00F88(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF * L_4 = VuforiaConfiguration_get_Instance_m194A91058D56580FB149957A556F04E8B54E8A2E(/*hidden argument*/NULL);
		NullCheck(L_4);
		GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * L_5 = VuforiaConfiguration_get_Vuforia_mEB558CD22BC18D4B63BCA8032AB0EA612A4F2B4B_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = GenericVuforiaConfiguration_get_EULAAcceptedVersions_m2FDD938A909FD6361210CE818C49CC29A100D7C1_inline(L_5, /*hidden argument*/NULL);
		RuntimeObject* L_7 = EulaRuntimeUtility_JsonToVersionStrings_mD2D049BE8418A5FBAF3A3D54E28D1DCE164FDE56(L_6, /*hidden argument*/NULL);
		Func_2_t24F69F1241A79EDF63F2672D3206FBC43C2D5262 * L_8 = (Func_2_t24F69F1241A79EDF63F2672D3206FBC43C2D5262 *)il2cpp_codegen_object_new(Func_2_t24F69F1241A79EDF63F2672D3206FBC43C2D5262_il2cpp_TypeInfo_var);
		Func_2__ctor_mFB5216A49D4F256F8A7795F244372E5342D4D44E(L_8, NULL, (intptr_t)((intptr_t)EulaRuntimeUtility_ConvertToMajorMinorVersion_m40376FF426AC28A5F258C1A96464A821E0E00F88_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mFB5216A49D4F256F8A7795F244372E5342D4D44E_RuntimeMethod_var);
		RuntimeObject* L_9 = Enumerable_Select_TisString_t_TisVersion_tBDAEDED25425A1D09910468B8BD1759115646E3C_m6DD6825E089A09EA273F83DF9E79ECE5DF3E6680(L_7, L_8, /*hidden argument*/Enumerable_Select_TisString_t_TisVersion_tBDAEDED25425A1D09910468B8BD1759115646E3C_m6DD6825E089A09EA273F83DF9E79ECE5DF3E6680_RuntimeMethod_var);
		HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391 * L_10 = (HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391 *)il2cpp_codegen_object_new(HashSet_1_t5B505906624D800165CCAE1644AE89DBB1675391_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mD4780171A8FF45F1A0ECBA080CDA9E6D30B6087D(L_10, L_9, /*hidden argument*/HashSet_1__ctor_mD4780171A8FF45F1A0ECBA080CDA9E6D30B6087D_RuntimeMethod_var);
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = HashSet_1_Contains_m85F98F6EB98EF602C551F89FFE1811E63AE4CA1F(L_10, L_11, /*hidden argument*/HashSet_1_Contains_m85F98F6EB98EF602C551F89FFE1811E63AE4CA1F_RuntimeMethod_var);
		return L_12;
	}
}
// System.String Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::GetEmulatorDatabasePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NullPlayModeEditorUtility_GetEmulatorDatabasePath_mE0ABDC9E698E0DE2B1B4EB115BC9C0D103C8DEF0 (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullPlayModeEditorUtility_GetEmulatorDatabasePath_mE0ABDC9E698E0DE2B1B4EB115BC9C0D103C8DEF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// System.Void Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::RegisterEditorUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPlayModeEditorUtility_RegisterEditorUpdate_mCAC6DA85588399AD346D38A8F11CD2AC7EBAE0B4 (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::UnregisterEditorUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPlayModeEditorUtility_UnregisterEditorUpdate_m31236AA6CEFC413F6205BAB795457EAC54514324 (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::RegisterSceneViewUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPlayModeEditorUtility_RegisterSceneViewUpdate_mBD0A84CC01878EFA495CA694B0DF3EBEE9E4BDFA (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::UnregisterSceneViewUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPlayModeEditorUtility_UnregisterSceneViewUpdate_mFFA8DD116602A8DBBC850FEB7769277FAE8D852D (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::RegisterEnteringPlayModeStatusChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPlayModeEditorUtility_RegisterEnteringPlayModeStatusChanged_m8AE2332C01B30D22F62377A0E766318A9CA4D5FF (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___action0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::UnregisterEnteringPlayModeStatusChanged(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPlayModeEditorUtility_UnregisterEnteringPlayModeStatusChanged_mF8F08D6F70E122379AE08461B89F6D8221A7D9FC (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___action0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::IsInPlaymode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullPlayModeEditorUtility_IsInPlaymode_mA6C8A5CC4CC9B48C2757A11E61A935FF08041E4D (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::GetEditorPrefsInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullPlayModeEditorUtility_GetEditorPrefsInt_m6851B6FB9AD2B47A4D8339F13BB1A2543AAAC5F9 (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, String_t* ___uniqueName0, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Single Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::GetEditorPrefsFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NullPlayModeEditorUtility_GetEditorPrefsFloat_m3F25E74534D7C8D155B9C8C42871596DA905DAF1 (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, String_t* ___uniqueName0, const RuntimeMethod* method)
{
	{
		return (0.0f);
	}
}
// System.String Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::GetEditorPrefsString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NullPlayModeEditorUtility_GetEditorPrefsString_mE67B6E8258A2BB5673FDA45817BE4BA873CA1E2D (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, String_t* ___uniqueName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NullPlayModeEditorUtility_GetEditorPrefsString_mE67B6E8258A2BB5673FDA45817BE4BA873CA1E2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_0;
	}
}
// UnityEngine.GameObject Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::LoadPrefab(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * NullPlayModeEditorUtility_LoadPrefab_m9F2B6075C7EA97F375C6D1A66FB9155FDF87A9AF (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	{
		return (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
	}
}
// System.Void Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::CopyAndPasteComponentToTarget(UnityEngine.Component,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPlayModeEditorUtility_CopyAndPasteComponentToTarget_mCA9D6510298DF9EC15337F48DC98DD4B3372E630 (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Vuforia.layerErrorMessage Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::InsertNewLayerAt(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullPlayModeEditorUtility_InsertNewLayerAt_m3833B828DE56414307CB6BA474EDA717BCCEAE73 (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, int32_t ___index0, String_t* ___layerName1, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Void Vuforia.PlayModeEditorUtility_NullPlayModeEditorUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPlayModeEditorUtility__ctor_m7347B81B0B3C24CDF9088302C880EF09D42BAF43 (NullPlayModeEditorUtility_t62E5B8F5A3A52C012553EDD8476839279C4A06A0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.PlaymodeSmartTerrainImpl_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m120261617EA702FE2AB75A71672FE046A742ACE4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m120261617EA702FE2AB75A71672FE046A742ACE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E * L_0 = (U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E *)il2cpp_codegen_object_new(U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m31FD9C572E0D5A0C5A6A390E273277B5F9970122(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.PlaymodeSmartTerrainImpl_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m31FD9C572E0D5A0C5A6A390E273277B5F9970122 (U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.PlaymodeSmartTerrainImpl_<>c::<FindGroundPlaneImageTarget>b__7_0(Vuforia.TrackableBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindGroundPlaneImageTargetU3Eb__7_0_m1DF634F421FC2B728F6A54BF9B63D17A98CE75AA (U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E * __this, TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74 * ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CFindGroundPlaneImageTargetU3Eb__7_0_m1DF634F421FC2B728F6A54BF9B63D17A98CE75AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74 * L_0 = ___b0;
		return (bool)((!(((RuntimeObject*)(ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F *)((ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F *)IsInstClass((RuntimeObject*)L_0, ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean Vuforia.PlaymodeSmartTerrainImpl_<>c::<FindGroundPlaneImageTarget>b__7_1(Vuforia.ImageTargetBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindGroundPlaneImageTargetU3Eb__7_1_m170C40BF1F32846212271D66A0FA4C6663241B99 (U3CU3Ec_t6890ED5977708B1D98A3FFB0B182F5429DACAE0E * __this, ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F * ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CFindGroundPlaneImageTargetU3Eb__7_1_m170C40BF1F32846212271D66A0FA4C6663241B99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F * L_0 = ___b0;
		NullCheck(L_0);
		String_t* L_1 = DataSetTrackableBehaviour_get_DataSetPath_m98D4BDDFB041326FB9FF049CF80B4860FAE11FE6_inline(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2 = PlayModeEditorUtility_get_Instance_mCF1931946ED015E4CF7C71F55A221BA610B192C0(/*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String Vuforia.IPlayModeEditorUtility::GetEmulatorDatabasePath() */, IPlayModeEditorUtility_t39FC0F38227370B3ACE37317DF19C1C5AA9D919F_il2cpp_TypeInfo_var, L_2);
		bool L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F * L_5 = ___b0;
		NullCheck(L_5);
		RuntimeObject* L_6 = ImageTargetBehaviour_get_ImageTarget_m7683DECAF07466DDB086BC7CD4E2C001AD1307C7_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Vuforia.Trackable::get_Name() */, Trackable_tFA1788D7399ADBB5067D5C92BAE319E02D0DC4FA_il2cpp_TypeInfo_var, L_6);
		bool L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral8CF4F9BC7F51DEAA3FFC7DF9337B2BAB35DA5F54, /*hidden argument*/NULL);
		return L_8;
	}

IL_002d:
	{
		return (bool)0;
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
// System.Void Vuforia.PositionalDeviceTrackerImpl_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m177A509DD4F5DD842C73C08B71C767D03F464EF4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m177A509DD4F5DD842C73C08B71C767D03F464EF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152 * L_0 = (U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152 *)il2cpp_codegen_object_new(U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2D59239E99ED95CC654E13B21BA2A14D4A7CA20F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.PositionalDeviceTrackerImpl_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2D59239E99ED95CC654E13B21BA2A14D4A7CA20F (U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.PositionalDeviceTrackerImpl_<>c::<ResetAnchors>b__12_0(Vuforia.TrackableBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CResetAnchorsU3Eb__12_0_m19096C41C28A618E9FE06F0FE93E5019864A6C7D (U3CU3Ec_t2CF5996764D1B7F301C2D001FD16B742524CC152 * __this, TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CResetAnchorsU3Eb__12_0_m19096C41C28A618E9FE06F0FE93E5019864A6C7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74 * L_0 = ___t0;
		return (bool)((!(((RuntimeObject*)(AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C *)((AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C *)IsInstClass((RuntimeObject*)L_0, AnchorBehaviour_t772AFC49EA1BDA0881A230C5735E19C6D2C6960C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void Vuforia.PosixPath_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m35250DA5E2BC12D9EFA34393095BAF52ACF319A7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m35250DA5E2BC12D9EFA34393095BAF52ACF319A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7 * L_0 = (U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7 *)il2cpp_codegen_object_new(U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC0855094E59CAB27D23776FC61B628DB03A4E92A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.PosixPath_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC0855094E59CAB27D23776FC61B628DB03A4E92A (U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.PosixPath_<>c::<Join>b__1_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CJoinU3Eb__1_0_m1701CEE376BBA4E38F464978E8DC65F82843BEE5 (U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7 * __this, String_t* ___p0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___p0;
		return (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
// System.String Vuforia.PosixPath_<>c::<Join>b__1_1(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CJoinU3Eb__1_1_mE0459273D9431166F41B9BE2CD33C3F306612C00 (U3CU3Ec_t62567B9178CF50A7D9F821685806B2B3157AEDC7 * __this, String_t* ___s0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		String_t* L_1 = ___s0;
		return L_1;
	}

IL_0006:
	{
		String_t* L_2 = ___s0;
		String_t* L_3 = PosixPath_TrimLeadingSlashes_mC2D25073AA2C6281FBCBE8792E38DB743EA22BD0(L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Vuforia.PosixPath_InvalidPathException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidPathException__ctor_m125331AAD00F8821D7F81B239499AAA71994A93E (InvalidPathException_tF2E491842E10A2B586CD665324960DFA27555158 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvalidPathException__ctor_m125331AAD00F8821D7F81B239499AAA71994A93E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Vuforia.PremiumObjectFactory_NullPremiumObjectFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPremiumObjectFactory__ctor_mD489B43027760E3597C6E146122ECA358703E4D8 (NullPremiumObjectFactory_t5638116D579E4E9C80CEEE46590F2E7BD78579E7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.RawPtrVideoTextureUpdater_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9F8A0296B9B1E86C8E15AB17D0DBAEE73A508EA2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m9F8A0296B9B1E86C8E15AB17D0DBAEE73A508EA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970 * L_0 = (U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970 *)il2cpp_codegen_object_new(U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3A3874B59115939338B7A1CE16EEB30D367223E7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.RawPtrVideoTextureUpdater_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3A3874B59115939338B7A1CE16EEB30D367223E7 (U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.RawPtrVideoTextureUpdater_<>c::<.ctor>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__12_0_m82CC2BBDF4F6FD7184198A86FA941DAB3714B0D2 (U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.RawPtrVideoTextureUpdater_<>c::<Deinit>b__17_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CDeinitU3Eb__17_0_mF6EC7F268BE37FFC9178755849E65C7CFBB34CC5 (U3CU3Ec_tB3628EF596C52F9F422DAD4670D992F3DDEC1970 * __this, const RuntimeMethod* method)
{
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
// System.Void Vuforia.RawPtrVideoTextureUpdater_<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mCDAA1CA6F710955084A79196B7910E941C644CDE (U3CU3Ec__DisplayClass19_0_tD9B0DA697079A5346A799BB31439A6F81C164FFC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.RawPtrVideoTextureUpdater_<>c__DisplayClass19_0::<SetupTextureUpdating>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CSetupTextureUpdatingU3Eb__0_m79EC9003D21358626B3FF7C8FC637923037D79C8 (U3CU3Ec__DisplayClass19_0_tD9B0DA697079A5346A799BB31439A6F81C164FFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass19_0_U3CSetupTextureUpdatingU3Eb__0_m79EC9003D21358626B3FF7C8FC637923037D79C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * L_0 = __this->get_textures_0();
		int32_t L_1 = __this->get_imageWidth_1();
		int32_t L_2 = __this->get_imageHeight_2();
		int32_t L_3 = __this->get_nativePixelFormat_3();
		IL2CPP_RUNTIME_CLASS_INIT(RawPtrVideoTextureUpdater_tB3912F83E47D692AD596ECDF4AFB9F799A31ADAD_il2cpp_TypeInfo_var);
		RawPtrVideoTextureUpdater_UpdateTextures_mA448BC8A0EC43D51BD091BABA7D15BD2ED5B364D(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
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
// System.Void Vuforia.RawPtrVideoTextureUpdater_<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_mB598C38B8839DCF98B1AB6697AB22410E50370AB (U3CU3Ec__DisplayClass21_0_tCFBDD0F50D634408912B341E1DF83CEBFC681F56 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.RawPtrVideoTextureUpdater_<>c__DisplayClass21_0::<EnableShaderKeyword>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass21_0_U3CEnableShaderKeywordU3Eb__0_m58ED90E8858697647B352CE85B00234DC2EABC2B (U3CU3Ec__DisplayClass21_0_tCFBDD0F50D634408912B341E1DF83CEBFC681F56 * __this, String_t* ___k0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___k0;
		String_t* L_1 = __this->get_keyword_0();
		bool L_2 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Vuforia.RawPtrVideoTextureUpdater_<>c__DisplayClass21_0::<EnableShaderKeyword>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass21_0_U3CEnableShaderKeywordU3Eb__1_m52A93608AA33D7EED891C56CBC3D8E20D2596670 (U3CU3Ec__DisplayClass21_0_tCFBDD0F50D634408912B341E1DF83CEBFC681F56 * __this, String_t* ___k0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___k0;
		String_t* L_1 = __this->get_keyword_0();
		bool L_2 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Vuforia.SimulatorVisualizationFactory_<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m658D021E0F095D39EB42478DA87FA320C998A82E (U3CU3Ec__DisplayClass10_0_t665381D18ABE27CA164EEEE9C61489672C75E41D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.SimulatorVisualizationFactory_<>c__DisplayClass10_0::<CreateModel>b__0(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CCreateModelU3Eb__0_mAC3F3C8347FA96D8DF7F6B8C5A0015FBF70473AB (U3CU3Ec__DisplayClass10_0_t665381D18ABE27CA164EEEE9C61489672C75E41D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_hideFlags_0();
		NullCheck(L_1);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Vuforia.StateManager_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC79FF9846F38ED4D3F57115C970EE44ACA3A3E53 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mC79FF9846F38ED4D3F57115C970EE44ACA3A3E53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * L_0 = (U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 *)il2cpp_codegen_object_new(U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8939C12D5C356596DF07AE4A3389F7CABE56EC8D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.StateManager_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8939C12D5C356596DF07AE4A3389F7CABE56EC8D (U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.StateManager_<>c::<ReassociateTrackables>b__12_0(Vuforia.DatasetTracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CReassociateTrackablesU3Eb__12_0_mC51ABA00D73EF853F5508A4C542D9B9181CADEBE (U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * __this, DatasetTracker_t14F875EA1CE6ABDB7345699192189AB763F9DAC8 * ___t0, const RuntimeMethod* method)
{
	{
		DatasetTracker_t14F875EA1CE6ABDB7345699192189AB763F9DAC8 * L_0 = ___t0;
		return (bool)((!(((RuntimeObject*)(DatasetTracker_t14F875EA1CE6ABDB7345699192189AB763F9DAC8 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean Vuforia.StateManager_<>c::<UpdateVumarkStates>b__28_0(Vuforia.VuMarkBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CUpdateVumarkStatesU3Eb__28_0_m7F4CE1CADD91AE984896948C92C6D96C74841F97 (U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * __this, VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37 * ___b0, const RuntimeMethod* method)
{
	{
		VuMarkBehaviour_tC6BFE1200F4AB68C544F5396E57DB36408111B37 * L_0 = ___b0;
		NullCheck(L_0);
		bool L_1 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.StateManager_<>c::<UpdateVumarkStates>b__28_1(Vuforia.TrackerData_VuMarkTargetResultData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUpdateVumarkStatesU3Eb__28_1_m23593B4B1B9EC897A3C79D36927FEA7DCBA288BF (U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * __this, VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD  ___r0, const RuntimeMethod* method)
{
	{
		VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD  L_0 = ___r0;
		int32_t L_1 = L_0.get_resultID_4();
		return L_1;
	}
}
// Vuforia.TrackerData_VuMarkTargetResultData Vuforia.StateManager_<>c::<UpdateVumarkStates>b__28_2(Vuforia.TrackerData_VuMarkTargetResultData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD  U3CU3Ec_U3CUpdateVumarkStatesU3Eb__28_2_m7F447C92E43631EB61C2345F5649817246D5922D (U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * __this, VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD  ___r0, const RuntimeMethod* method)
{
	{
		VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD  L_0 = ___r0;
		return L_0;
	}
}
// Vuforia.TrackableBehaviour_Status Vuforia.StateManager_<>c::<UpdateVumarkStates>b__28_3(Vuforia.TrackerData_VuMarkTargetResultData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUpdateVumarkStatesU3Eb__28_3_mCD6B8AEBC878872B17F6DE2B3EDFB1BA0FEAF8B8 (U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * __this, VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD  ___r0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuMarkTargetResultData_get_status_mCD284EFD661F5B16DD618ED4C26C917AF06883C0_inline((VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD *)(&___r0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Vuforia.StateManager_<>c::<UpdateTrackableStates>b__29_0(Vuforia.TrackableBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CUpdateTrackableStatesU3Eb__29_0_m60EF945FD22D3E616F25FA117030E182A626DD8E (U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * __this, TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74 * ___b0, const RuntimeMethod* method)
{
	{
		TrackableBehaviour_t96A0F18A4282B9E3BEA7FA9A0C99CFE834445B74 * L_0 = ___b0;
		NullCheck(L_0);
		bool L_1 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.StateManager_<>c::<UpdateTrackableStates>b__29_1(Vuforia.TrackerData_TrackableResultData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUpdateTrackableStatesU3Eb__29_1_m83CE7F5082064D4DDF395DD9265EC1CE5AD07315 (U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * __this, TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  ___r0, const RuntimeMethod* method)
{
	{
		TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  L_0 = ___r0;
		int32_t L_1 = L_0.get_id_4();
		return L_1;
	}
}
// Vuforia.TrackerData_TrackableResultData Vuforia.StateManager_<>c::<UpdateTrackableStates>b__29_2(Vuforia.TrackerData_TrackableResultData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  U3CU3Ec_U3CUpdateTrackableStatesU3Eb__29_2_m97F587D4098777AC6E03467188F1D83B84E8EA71 (U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * __this, TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  ___r0, const RuntimeMethod* method)
{
	{
		TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  L_0 = ___r0;
		return L_0;
	}
}
// Vuforia.TrackableBehaviour_Status Vuforia.StateManager_<>c::<UpdateTrackableStates>b__29_3(Vuforia.TrackerData_TrackableResultData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUpdateTrackableStatesU3Eb__29_3_m7BDBB9452E6FDBA0100EDD610ED8C55170FACAF1 (U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * __this, TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  ___r0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = TrackableResultData_get_Status_mDBB95D6BCF9D91F60DE3D7BB3F720A24FA4D3F6A_inline((TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 *)(&___r0), /*hidden argument*/NULL);
		return L_0;
	}
}
// Vuforia.TrackableBehaviour_StatusInfo Vuforia.StateManager_<>c::<UpdateTrackableStates>b__29_4(Vuforia.TrackerData_TrackableResultData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CUpdateTrackableStatesU3Eb__29_4_m42FB9FB7AD6BBD29AAECEE6A467875CCBF93315E (U3CU3Ec_t93FAA2D14D7F078FD9C2792447E406EBA63355A8 * __this, TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  ___r0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = TrackableResultData_get_StatusInfo_m5CE7AC4AEFB0C6DF81A2D52054EE696B0B22B580_inline((TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 *)(&___r0), /*hidden argument*/NULL);
		return L_0;
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
// System.Void Vuforia.TargetFinder_CloudRecoSearchResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecoSearchResult__ctor_m072F092BD11B1897B08117516B40602C2047578C (CloudRecoSearchResult_tF1C62668152BE9A2A93AA7AA2D0AFFA74392F613 * __this, const RuntimeMethod* method)
{
	{
		TargetSearchResult__ctor_mCFFDAC37BD586ED225DBEC83CB7CCDD2D0EB7C25(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.TargetFinder_TargetSearchResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetSearchResult__ctor_mCFFDAC37BD586ED225DBEC83CB7CCDD2D0EB7C25 (TargetSearchResult_t4EB88BB75E4BD2EEC2264F7E4E7E729355C1C320 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.TrackableBehaviour_<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_mFEC1DCFEAA627E074D6A2B46320E03F1F55819DB (U3CU3Ec__DisplayClass33_0_t7A0FA07ECAC887F72B1797E7FFAC5B0018D3FA5A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.TrackableBehaviour_<>c__DisplayClass33_0::<UpdateTrackableStatus>b__0(Vuforia.ITrackableEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3CUpdateTrackableStatusU3Eb__0_mDD2EBB6FBBC5B69D0032D6D6AAE247078D34D1A7 (U3CU3Ec__DisplayClass33_0_t7A0FA07ECAC887F72B1797E7FFAC5B0018D3FA5A * __this, RuntimeObject* ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass33_0_U3CUpdateTrackableStatusU3Eb__0_mDD2EBB6FBBC5B69D0032D6D6AAE247078D34D1A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___handler0;
		int32_t L_1 = __this->get_previousStatus_0();
		int32_t L_2 = __this->get_newStatus_1();
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(0 /* System.Void Vuforia.ITrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status) */, ITrackableEventHandler_t4C54E4C8CA7AE28F257712D1A3BA9546DB8A7993_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void Vuforia.TrackableBehaviour_<>c__DisplayClass33_0::<UpdateTrackableStatus>b__1(System.Action`1<Vuforia.TrackableBehaviour_StatusChangeResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_U3CUpdateTrackableStatusU3Eb__1_m345FF5E5FE20F091EAD82DBF1748F6C8181221D4 (U3CU3Ec__DisplayClass33_0_t7A0FA07ECAC887F72B1797E7FFAC5B0018D3FA5A * __this, Action_1_tE133B6E55A36D1C644478448C38E781E97126FF6 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass33_0_U3CUpdateTrackableStatusU3Eb__1_m345FF5E5FE20F091EAD82DBF1748F6C8181221D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Action_1_tE133B6E55A36D1C644478448C38E781E97126FF6 * L_0 = ___handler0;
		il2cpp_codegen_initobj((&V_0), sizeof(StatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174 ));
		int32_t L_1 = __this->get_previousStatus_0();
		(&V_0)->set_PreviousStatus_0(L_1);
		int32_t L_2 = __this->get_newStatus_1();
		(&V_0)->set_NewStatus_1(L_2);
		StatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174  L_3 = V_0;
		DelegateHelper_InvokeWithExceptionHandling_TisStatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174_m8496B66E27260F928CFD7799052CEC9FAD337E31(L_0, L_3, /*hidden argument*/DelegateHelper_InvokeWithExceptionHandling_TisStatusChangeResult_tECE98DAF97A8F57DB581CE55C60C212129503174_m8496B66E27260F928CFD7799052CEC9FAD337E31_RuntimeMethod_var);
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
// System.Void Vuforia.TrackableBehaviour_<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m82DAA691CE7CF2D1E1AE415D7B5C678C94B7100F (U3CU3Ec__DisplayClass34_0_tFA29138D3CAF12CBC7F44972AA8C5060F5AD75D2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.TrackableBehaviour_<>c__DisplayClass34_0::<UpdateTrackableStatusInfo>b__0(System.Action`1<Vuforia.TrackableBehaviour_StatusInfoChangeResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CUpdateTrackableStatusInfoU3Eb__0_mC0ECA1D9FF78E9210355A048FC64BCA8EC7E65BD (U3CU3Ec__DisplayClass34_0_tFA29138D3CAF12CBC7F44972AA8C5060F5AD75D2 * __this, Action_1_t2D724ADB1158482C072F996CA5C4CE9836287B39 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass34_0_U3CUpdateTrackableStatusInfoU3Eb__0_mC0ECA1D9FF78E9210355A048FC64BCA8EC7E65BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Action_1_t2D724ADB1158482C072F996CA5C4CE9836287B39 * L_0 = ___handler0;
		il2cpp_codegen_initobj((&V_0), sizeof(StatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504 ));
		int32_t L_1 = __this->get_previousStatusInfo_0();
		(&V_0)->set_PreviousStatusInfo_0(L_1);
		int32_t L_2 = __this->get_newStatusInfo_1();
		(&V_0)->set_NewStatusInfo_1(L_2);
		StatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504  L_3 = V_0;
		DelegateHelper_InvokeWithExceptionHandling_TisStatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504_m4991D60623A500ED03B09CF41CF66753D1F0E9B0(L_0, L_3, /*hidden argument*/DelegateHelper_InvokeWithExceptionHandling_TisStatusInfoChangeResult_t52EEF57F22AA4131EB362C7D04F24663389F2504_m4991D60623A500ED03B09CF41CF66753D1F0E9B0_RuntimeMethod_var);
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
// Conversion methods for marshalling of: Vuforia.TrackerData/ManagedFrameState
IL2CPP_EXTERN_C void ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_marshal_pinvoke(const ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467& unmarshaled, ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_TrackableResultDataArray_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_TrackableResultDataArray_Length = (unmarshaled.get_TrackableResultDataArray_0())->max_length;
		marshaled.___TrackableResultDataArray_0 = il2cpp_codegen_marshal_allocate_array<TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 >(_unmarshaled_TrackableResultDataArray_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_TrackableResultDataArray_Length); i++)
		{
			(marshaled.___TrackableResultDataArray_0)[i] = (unmarshaled.get_TrackableResultDataArray_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___TrackableResultDataArray_0 = NULL;
	}
	if (unmarshaled.get_VuMarkDataArray_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_VuMarkDataArray_Length = (unmarshaled.get_VuMarkDataArray_1())->max_length;
		marshaled.___VuMarkDataArray_1 = il2cpp_codegen_marshal_allocate_array<VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7 >(_unmarshaled_VuMarkDataArray_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_VuMarkDataArray_Length); i++)
		{
			(marshaled.___VuMarkDataArray_1)[i] = (unmarshaled.get_VuMarkDataArray_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___VuMarkDataArray_1 = NULL;
	}
	if (unmarshaled.get_VuMarkResultDataArray_2() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_VuMarkResultDataArray_Length = (unmarshaled.get_VuMarkResultDataArray_2())->max_length;
		marshaled.___VuMarkResultDataArray_2 = il2cpp_codegen_marshal_allocate_array<VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD >(_unmarshaled_VuMarkResultDataArray_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_VuMarkResultDataArray_Length); i++)
		{
			(marshaled.___VuMarkResultDataArray_2)[i] = (unmarshaled.get_VuMarkResultDataArray_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___VuMarkResultDataArray_2 = NULL;
	}
	if (unmarshaled.get_VirtualButtonData_3() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_VirtualButtonData_Length = (unmarshaled.get_VirtualButtonData_3())->max_length;
		marshaled.___VirtualButtonData_3 = il2cpp_codegen_marshal_allocate_array<VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140 >(_unmarshaled_VirtualButtonData_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_VirtualButtonData_Length); i++)
		{
			(marshaled.___VirtualButtonData_3)[i] = (unmarshaled.get_VirtualButtonData_3())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___VirtualButtonData_3 = NULL;
	}
	marshaled.___IsIlluminationDataValid_4 = static_cast<int32_t>(unmarshaled.get_IsIlluminationDataValid_4());
	marshaled.___IlluminationData_5 = unmarshaled.get_IlluminationData_5();
	marshaled.___frameIndex_6 = unmarshaled.get_frameIndex_6();
	marshaled.___deviceTrackableId_7 = unmarshaled.get_deviceTrackableId_7();
	marshaled.___deviceTrackableStatusInfo_8 = unmarshaled.get_deviceTrackableStatusInfo_8();
	marshaled.___minCameraCalibration_9 = unmarshaled.get_minCameraCalibration_9();
}
IL2CPP_EXTERN_C void ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_marshal_pinvoke_back(const ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_marshaled_pinvoke& marshaled, ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___TrackableResultDataArray_0 != NULL)
	{
		if (unmarshaled.get_TrackableResultDataArray_0() == NULL)
		{
			unmarshaled.set_TrackableResultDataArray_0(reinterpret_cast<TrackableResultDataU5BU5D_t7748EA908993162703714DE2DCF878C903A33A60*>((TrackableResultDataU5BU5D_t7748EA908993162703714DE2DCF878C903A33A60*)SZArrayNew(TrackableResultDataU5BU5D_t7748EA908993162703714DE2DCF878C903A33A60_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_TrackableResultDataArray_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_TrackableResultDataArray_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___TrackableResultDataArray_0)[i]);
		}
	}
	if (marshaled.___VuMarkDataArray_1 != NULL)
	{
		if (unmarshaled.get_VuMarkDataArray_1() == NULL)
		{
			unmarshaled.set_VuMarkDataArray_1(reinterpret_cast<VuMarkTargetDataU5BU5D_t7062002393AAA425C920A93605BE2FE0378B7937*>((VuMarkTargetDataU5BU5D_t7062002393AAA425C920A93605BE2FE0378B7937*)SZArrayNew(VuMarkTargetDataU5BU5D_t7062002393AAA425C920A93605BE2FE0378B7937_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_VuMarkDataArray_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_VuMarkDataArray_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___VuMarkDataArray_1)[i]);
		}
	}
	if (marshaled.___VuMarkResultDataArray_2 != NULL)
	{
		if (unmarshaled.get_VuMarkResultDataArray_2() == NULL)
		{
			unmarshaled.set_VuMarkResultDataArray_2(reinterpret_cast<VuMarkTargetResultDataU5BU5D_t968E620BD487CD51963064373144BA11A4A403E8*>((VuMarkTargetResultDataU5BU5D_t968E620BD487CD51963064373144BA11A4A403E8*)SZArrayNew(VuMarkTargetResultDataU5BU5D_t968E620BD487CD51963064373144BA11A4A403E8_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_VuMarkResultDataArray_2())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_VuMarkResultDataArray_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___VuMarkResultDataArray_2)[i]);
		}
	}
	if (marshaled.___VirtualButtonData_3 != NULL)
	{
		if (unmarshaled.get_VirtualButtonData_3() == NULL)
		{
			unmarshaled.set_VirtualButtonData_3(reinterpret_cast<VirtualButtonDataU5BU5D_t5CF3ACC5B148D3FD69E97E6418D342AC2575C6EB*>((VirtualButtonDataU5BU5D_t5CF3ACC5B148D3FD69E97E6418D342AC2575C6EB*)SZArrayNew(VirtualButtonDataU5BU5D_t5CF3ACC5B148D3FD69E97E6418D342AC2575C6EB_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_VirtualButtonData_3())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_VirtualButtonData_3())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___VirtualButtonData_3)[i]);
		}
	}
	bool unmarshaled_IsIlluminationDataValid_temp_4 = false;
	unmarshaled_IsIlluminationDataValid_temp_4 = static_cast<bool>(marshaled.___IsIlluminationDataValid_4);
	unmarshaled.set_IsIlluminationDataValid_4(unmarshaled_IsIlluminationDataValid_temp_4);
	IlluminationData_t17C88256D0887907B6A24DFFEEC3576DAFAAC4F7  unmarshaled_IlluminationData_temp_5;
	memset((&unmarshaled_IlluminationData_temp_5), 0, sizeof(unmarshaled_IlluminationData_temp_5));
	unmarshaled_IlluminationData_temp_5 = marshaled.___IlluminationData_5;
	unmarshaled.set_IlluminationData_5(unmarshaled_IlluminationData_temp_5);
	int32_t unmarshaled_frameIndex_temp_6 = 0;
	unmarshaled_frameIndex_temp_6 = marshaled.___frameIndex_6;
	unmarshaled.set_frameIndex_6(unmarshaled_frameIndex_temp_6);
	int32_t unmarshaled_deviceTrackableId_temp_7 = 0;
	unmarshaled_deviceTrackableId_temp_7 = marshaled.___deviceTrackableId_7;
	unmarshaled.set_deviceTrackableId_7(unmarshaled_deviceTrackableId_temp_7);
	int32_t unmarshaled_deviceTrackableStatusInfo_temp_8 = 0;
	unmarshaled_deviceTrackableStatusInfo_temp_8 = marshaled.___deviceTrackableStatusInfo_8;
	unmarshaled.set_deviceTrackableStatusInfo_8(unmarshaled_deviceTrackableStatusInfo_temp_8);
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  unmarshaled_minCameraCalibration_temp_9;
	memset((&unmarshaled_minCameraCalibration_temp_9), 0, sizeof(unmarshaled_minCameraCalibration_temp_9));
	unmarshaled_minCameraCalibration_temp_9 = marshaled.___minCameraCalibration_9;
	unmarshaled.set_minCameraCalibration_9(unmarshaled_minCameraCalibration_temp_9);
}
// Conversion method for clean up from marshalling of: Vuforia.TrackerData/ManagedFrameState
IL2CPP_EXTERN_C void ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_marshal_pinvoke_cleanup(ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_marshaled_pinvoke& marshaled)
{
	if (marshaled.___TrackableResultDataArray_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___TrackableResultDataArray_0);
		marshaled.___TrackableResultDataArray_0 = NULL;
	}
	if (marshaled.___VuMarkDataArray_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___VuMarkDataArray_1);
		marshaled.___VuMarkDataArray_1 = NULL;
	}
	if (marshaled.___VuMarkResultDataArray_2 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___VuMarkResultDataArray_2);
		marshaled.___VuMarkResultDataArray_2 = NULL;
	}
	if (marshaled.___VirtualButtonData_3 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___VirtualButtonData_3);
		marshaled.___VirtualButtonData_3 = NULL;
	}
}
// Conversion methods for marshalling of: Vuforia.TrackerData/ManagedFrameState
IL2CPP_EXTERN_C void ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_marshal_com(const ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467& unmarshaled, ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_marshaled_com& marshaled)
{
	if (unmarshaled.get_TrackableResultDataArray_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_TrackableResultDataArray_Length = (unmarshaled.get_TrackableResultDataArray_0())->max_length;
		marshaled.___TrackableResultDataArray_0 = il2cpp_codegen_marshal_allocate_array<TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 >(_unmarshaled_TrackableResultDataArray_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_TrackableResultDataArray_Length); i++)
		{
			(marshaled.___TrackableResultDataArray_0)[i] = (unmarshaled.get_TrackableResultDataArray_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___TrackableResultDataArray_0 = NULL;
	}
	if (unmarshaled.get_VuMarkDataArray_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_VuMarkDataArray_Length = (unmarshaled.get_VuMarkDataArray_1())->max_length;
		marshaled.___VuMarkDataArray_1 = il2cpp_codegen_marshal_allocate_array<VuMarkTargetData_tCAAE7390BDCED6EA050BAB36FDFFFA77C33F99D7 >(_unmarshaled_VuMarkDataArray_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_VuMarkDataArray_Length); i++)
		{
			(marshaled.___VuMarkDataArray_1)[i] = (unmarshaled.get_VuMarkDataArray_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___VuMarkDataArray_1 = NULL;
	}
	if (unmarshaled.get_VuMarkResultDataArray_2() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_VuMarkResultDataArray_Length = (unmarshaled.get_VuMarkResultDataArray_2())->max_length;
		marshaled.___VuMarkResultDataArray_2 = il2cpp_codegen_marshal_allocate_array<VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD >(_unmarshaled_VuMarkResultDataArray_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_VuMarkResultDataArray_Length); i++)
		{
			(marshaled.___VuMarkResultDataArray_2)[i] = (unmarshaled.get_VuMarkResultDataArray_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___VuMarkResultDataArray_2 = NULL;
	}
	if (unmarshaled.get_VirtualButtonData_3() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_VirtualButtonData_Length = (unmarshaled.get_VirtualButtonData_3())->max_length;
		marshaled.___VirtualButtonData_3 = il2cpp_codegen_marshal_allocate_array<VirtualButtonData_tFA4BB06C97907D650C54F81440419082A45CA140 >(_unmarshaled_VirtualButtonData_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_VirtualButtonData_Length); i++)
		{
			(marshaled.___VirtualButtonData_3)[i] = (unmarshaled.get_VirtualButtonData_3())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___VirtualButtonData_3 = NULL;
	}
	marshaled.___IsIlluminationDataValid_4 = static_cast<int32_t>(unmarshaled.get_IsIlluminationDataValid_4());
	marshaled.___IlluminationData_5 = unmarshaled.get_IlluminationData_5();
	marshaled.___frameIndex_6 = unmarshaled.get_frameIndex_6();
	marshaled.___deviceTrackableId_7 = unmarshaled.get_deviceTrackableId_7();
	marshaled.___deviceTrackableStatusInfo_8 = unmarshaled.get_deviceTrackableStatusInfo_8();
	marshaled.___minCameraCalibration_9 = unmarshaled.get_minCameraCalibration_9();
}
IL2CPP_EXTERN_C void ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_marshal_com_back(const ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_marshaled_com& marshaled, ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___TrackableResultDataArray_0 != NULL)
	{
		if (unmarshaled.get_TrackableResultDataArray_0() == NULL)
		{
			unmarshaled.set_TrackableResultDataArray_0(reinterpret_cast<TrackableResultDataU5BU5D_t7748EA908993162703714DE2DCF878C903A33A60*>((TrackableResultDataU5BU5D_t7748EA908993162703714DE2DCF878C903A33A60*)SZArrayNew(TrackableResultDataU5BU5D_t7748EA908993162703714DE2DCF878C903A33A60_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_TrackableResultDataArray_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_TrackableResultDataArray_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___TrackableResultDataArray_0)[i]);
		}
	}
	if (marshaled.___VuMarkDataArray_1 != NULL)
	{
		if (unmarshaled.get_VuMarkDataArray_1() == NULL)
		{
			unmarshaled.set_VuMarkDataArray_1(reinterpret_cast<VuMarkTargetDataU5BU5D_t7062002393AAA425C920A93605BE2FE0378B7937*>((VuMarkTargetDataU5BU5D_t7062002393AAA425C920A93605BE2FE0378B7937*)SZArrayNew(VuMarkTargetDataU5BU5D_t7062002393AAA425C920A93605BE2FE0378B7937_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_VuMarkDataArray_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_VuMarkDataArray_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___VuMarkDataArray_1)[i]);
		}
	}
	if (marshaled.___VuMarkResultDataArray_2 != NULL)
	{
		if (unmarshaled.get_VuMarkResultDataArray_2() == NULL)
		{
			unmarshaled.set_VuMarkResultDataArray_2(reinterpret_cast<VuMarkTargetResultDataU5BU5D_t968E620BD487CD51963064373144BA11A4A403E8*>((VuMarkTargetResultDataU5BU5D_t968E620BD487CD51963064373144BA11A4A403E8*)SZArrayNew(VuMarkTargetResultDataU5BU5D_t968E620BD487CD51963064373144BA11A4A403E8_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_VuMarkResultDataArray_2())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_VuMarkResultDataArray_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___VuMarkResultDataArray_2)[i]);
		}
	}
	if (marshaled.___VirtualButtonData_3 != NULL)
	{
		if (unmarshaled.get_VirtualButtonData_3() == NULL)
		{
			unmarshaled.set_VirtualButtonData_3(reinterpret_cast<VirtualButtonDataU5BU5D_t5CF3ACC5B148D3FD69E97E6418D342AC2575C6EB*>((VirtualButtonDataU5BU5D_t5CF3ACC5B148D3FD69E97E6418D342AC2575C6EB*)SZArrayNew(VirtualButtonDataU5BU5D_t5CF3ACC5B148D3FD69E97E6418D342AC2575C6EB_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_VirtualButtonData_3())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_VirtualButtonData_3())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___VirtualButtonData_3)[i]);
		}
	}
	bool unmarshaled_IsIlluminationDataValid_temp_4 = false;
	unmarshaled_IsIlluminationDataValid_temp_4 = static_cast<bool>(marshaled.___IsIlluminationDataValid_4);
	unmarshaled.set_IsIlluminationDataValid_4(unmarshaled_IsIlluminationDataValid_temp_4);
	IlluminationData_t17C88256D0887907B6A24DFFEEC3576DAFAAC4F7  unmarshaled_IlluminationData_temp_5;
	memset((&unmarshaled_IlluminationData_temp_5), 0, sizeof(unmarshaled_IlluminationData_temp_5));
	unmarshaled_IlluminationData_temp_5 = marshaled.___IlluminationData_5;
	unmarshaled.set_IlluminationData_5(unmarshaled_IlluminationData_temp_5);
	int32_t unmarshaled_frameIndex_temp_6 = 0;
	unmarshaled_frameIndex_temp_6 = marshaled.___frameIndex_6;
	unmarshaled.set_frameIndex_6(unmarshaled_frameIndex_temp_6);
	int32_t unmarshaled_deviceTrackableId_temp_7 = 0;
	unmarshaled_deviceTrackableId_temp_7 = marshaled.___deviceTrackableId_7;
	unmarshaled.set_deviceTrackableId_7(unmarshaled_deviceTrackableId_temp_7);
	int32_t unmarshaled_deviceTrackableStatusInfo_temp_8 = 0;
	unmarshaled_deviceTrackableStatusInfo_temp_8 = marshaled.___deviceTrackableStatusInfo_8;
	unmarshaled.set_deviceTrackableStatusInfo_8(unmarshaled_deviceTrackableStatusInfo_temp_8);
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  unmarshaled_minCameraCalibration_temp_9;
	memset((&unmarshaled_minCameraCalibration_temp_9), 0, sizeof(unmarshaled_minCameraCalibration_temp_9));
	unmarshaled_minCameraCalibration_temp_9 = marshaled.___minCameraCalibration_9;
	unmarshaled.set_minCameraCalibration_9(unmarshaled_minCameraCalibration_temp_9);
}
// Conversion method for clean up from marshalling of: Vuforia.TrackerData/ManagedFrameState
IL2CPP_EXTERN_C void ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_marshal_com_cleanup(ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467_marshaled_com& marshaled)
{
	if (marshaled.___TrackableResultDataArray_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___TrackableResultDataArray_0);
		marshaled.___TrackableResultDataArray_0 = NULL;
	}
	if (marshaled.___VuMarkDataArray_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___VuMarkDataArray_1);
		marshaled.___VuMarkDataArray_1 = NULL;
	}
	if (marshaled.___VuMarkResultDataArray_2 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___VuMarkResultDataArray_2);
		marshaled.___VuMarkResultDataArray_2 = NULL;
	}
	if (marshaled.___VirtualButtonData_3 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___VirtualButtonData_3);
		marshaled.___VirtualButtonData_3 = NULL;
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
// Vuforia.TrackableBehaviour_Status Vuforia.TrackerData_TrackableResultData::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableResultData_get_Status_mDBB95D6BCF9D91F60DE3D7BB3F720A24FA4D3F6A (TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_statusInteger_2();
		return (int32_t)(L_0);
	}
}
IL2CPP_EXTERN_C  int32_t TrackableResultData_get_Status_mDBB95D6BCF9D91F60DE3D7BB3F720A24FA4D3F6A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * _thisAdjusted = reinterpret_cast<TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 *>(__this + _offset);
	return TrackableResultData_get_Status_mDBB95D6BCF9D91F60DE3D7BB3F720A24FA4D3F6A_inline(_thisAdjusted, method);
}
// System.Void Vuforia.TrackerData_TrackableResultData::set_Status(Vuforia.TrackableBehaviour_Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableResultData_set_Status_m52091082CBC8097402193F78B9A6FD02F05EB09E (TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_statusInteger_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableResultData_set_Status_m52091082CBC8097402193F78B9A6FD02F05EB09E_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * _thisAdjusted = reinterpret_cast<TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 *>(__this + _offset);
	TrackableResultData_set_Status_m52091082CBC8097402193F78B9A6FD02F05EB09E_inline(_thisAdjusted, ___value0, method);
}
// Vuforia.TrackableBehaviour_StatusInfo Vuforia.TrackerData_TrackableResultData::get_StatusInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableResultData_get_StatusInfo_m5CE7AC4AEFB0C6DF81A2D52054EE696B0B22B580 (TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_statusInfo_3();
		return (int32_t)(L_0);
	}
}
IL2CPP_EXTERN_C  int32_t TrackableResultData_get_StatusInfo_m5CE7AC4AEFB0C6DF81A2D52054EE696B0B22B580_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * _thisAdjusted = reinterpret_cast<TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 *>(__this + _offset);
	return TrackableResultData_get_StatusInfo_m5CE7AC4AEFB0C6DF81A2D52054EE696B0B22B580_inline(_thisAdjusted, method);
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
// Vuforia.TrackableBehaviour_Status Vuforia.TrackerData_VuMarkTargetResultData::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VuMarkTargetResultData_get_status_mCD284EFD661F5B16DD618ED4C26C917AF06883C0 (VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_statusInteger_2();
		return (int32_t)(L_0);
	}
}
IL2CPP_EXTERN_C  int32_t VuMarkTargetResultData_get_status_mCD284EFD661F5B16DD618ED4C26C917AF06883C0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD * _thisAdjusted = reinterpret_cast<VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD *>(__this + _offset);
	return VuMarkTargetResultData_get_status_mCD284EFD661F5B16DD618ED4C26C917AF06883C0_inline(_thisAdjusted, method);
}
// System.Void Vuforia.TrackerData_VuMarkTargetResultData::set_status(Vuforia.TrackableBehaviour_Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuMarkTargetResultData_set_status_mFB2EA25B0B38ED536DEF19B78C1C111707252E6A (VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_statusInteger_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void VuMarkTargetResultData_set_status_mFB2EA25B0B38ED536DEF19B78C1C111707252E6A_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD * _thisAdjusted = reinterpret_cast<VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD *>(__this + _offset);
	VuMarkTargetResultData_set_status_mFB2EA25B0B38ED536DEF19B78C1C111707252E6A_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.TrackerManager_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m05FB4658D8A34B3F748A65E5F432427BF59C22E2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m05FB4658D8A34B3F748A65E5F432427BF59C22E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB * L_0 = (U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB *)il2cpp_codegen_object_new(U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA31E158C990B836985D9F12572A2DB6D06B2E0F4(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.TrackerManager_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA31E158C990B836985D9F12572A2DB6D06B2E0F4 (U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Vuforia.Tracker Vuforia.TrackerManager_<>c::<.ctor>b__8_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * U3CU3Ec_U3C_ctorU3Eb__8_0_mA79F955A1BC02464014F562AEEDD285521666759 (U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__8_0_mA79F955A1BC02464014F562AEEDD285521666759_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA * L_0 = (ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA *)il2cpp_codegen_object_new(ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA_il2cpp_TypeInfo_var);
		ObjectTracker__ctor_m4DA6893C4C056540EE7EED88C3B1CA3BF8ACD9C0(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// Vuforia.Tracker Vuforia.TrackerManager_<>c::<.ctor>b__8_1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * U3CU3Ec_U3C_ctorU3Eb__8_1_m19C3A9C5C2BBF9B29FC24EE1338B7F81B3CB281F (U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__8_1_m19C3A9C5C2BBF9B29FC24EE1338B7F81B3CB281F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AreaTracker_t8071226BF023074830335EFFEB24D47E45D714B8 * L_0 = (AreaTracker_t8071226BF023074830335EFFEB24D47E45D714B8 *)il2cpp_codegen_object_new(AreaTracker_t8071226BF023074830335EFFEB24D47E45D714B8_il2cpp_TypeInfo_var);
		AreaTracker__ctor_m1A646D16084996640B6190B0C6247EAF5933EBB1(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// Vuforia.Tracker Vuforia.TrackerManager_<>c::<.ctor>b__8_2(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * U3CU3Ec_U3C_ctorU3Eb__8_2_m0263BDD4E277E35C1C971D70A0E119D446F438F4 (U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		SmartTerrain_t465561CB4FF40E6CB2355629FB8AC51286663B14 * L_0 = TrackerManager_CreateSmartTerrain_m1380BD921BCE4C139CC19494FF5C39A2274B1EA0(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Vuforia.TrackerManager_<>c::<.ctor>b__8_3(Vuforia.Tracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__8_3_mDCDDDC04CB2225FAD7DBE8F312DDC29EF6D38D6D (U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB * __this, Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__8_3_mDCDDDC04CB2225FAD7DBE8F312DDC29EF6D38D6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (ObjectTracker_tAE60FBCFDF486449CD4A0011136BF5D0DFA720BA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		bool L_2 = TrackerManager_DeinitializeTrackerNative_m9DD1CDE223AA0FDFB0718998EA5D8354C496F71C(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Vuforia.TrackerManager_<>c::<.ctor>b__8_4(Vuforia.Tracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__8_4_m421F49ECB353AD5CF64F83736CE76B93479C7B3C (U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB * __this, Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__8_4_m421F49ECB353AD5CF64F83736CE76B93479C7B3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (AreaTracker_t8071226BF023074830335EFFEB24D47E45D714B8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		bool L_2 = TrackerManager_DeinitializeTrackerNative_m9DD1CDE223AA0FDFB0718998EA5D8354C496F71C(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Vuforia.TrackerManager_<>c::<.ctor>b__8_5(Vuforia.Tracker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__8_5_m952E64AE261DF6D8838F008B9114426A888DA2D8 (U3CU3Ec_t6354F38E0331A11059D2E4769A3B1542C5C580CB * __this, Tracker_tC8779F03E5660202B4D88105DF0C594ED5DFD8AB * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__8_5_m952E64AE261DF6D8838F008B9114426A888DA2D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (SmartTerrain_t465561CB4FF40E6CB2355629FB8AC51286663B14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		bool L_2 = TrackerManager_DeinitializeTrackerNative_m9DD1CDE223AA0FDFB0718998EA5D8354C496F71C(L_1, /*hidden argument*/NULL);
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
// System.Void Vuforia.UnityRenderEventBroadcaster_RenderEventBehaviour::add_PreRenderEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEventBehaviour_add_PreRenderEvent_m04FA587AAE5A32C4F05D4310DE1E15D45A9D3B67 (RenderEventBehaviour_tF28EF9CD9A2101826273C8911894AEBBD7A01FBC * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderEventBehaviour_add_PreRenderEvent_m04FA587AAE5A32C4F05D4310DE1E15D45A9D3B67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_PreRenderEvent_4();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_PreRenderEvent_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRenderEventBroadcaster_RenderEventBehaviour::remove_PreRenderEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEventBehaviour_remove_PreRenderEvent_m1F199B15B40674AC9CE3E395D00C4346ADE5E74C (RenderEventBehaviour_tF28EF9CD9A2101826273C8911894AEBBD7A01FBC * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderEventBehaviour_remove_PreRenderEvent_m1F199B15B40674AC9CE3E395D00C4346ADE5E74C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_PreRenderEvent_4();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_PreRenderEvent_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRenderEventBroadcaster_RenderEventBehaviour::add_PostRenderEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEventBehaviour_add_PostRenderEvent_m5B9388C36D16A6EBC86237E4BC6C24D256016A14 (RenderEventBehaviour_tF28EF9CD9A2101826273C8911894AEBBD7A01FBC * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderEventBehaviour_add_PostRenderEvent_m5B9388C36D16A6EBC86237E4BC6C24D256016A14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_PostRenderEvent_5();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_PostRenderEvent_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRenderEventBroadcaster_RenderEventBehaviour::remove_PostRenderEvent(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEventBehaviour_remove_PostRenderEvent_m6979361C98424D952BEFB98E47FC0811C93A578A (RenderEventBehaviour_tF28EF9CD9A2101826273C8911894AEBBD7A01FBC * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderEventBehaviour_remove_PostRenderEvent_m6979361C98424D952BEFB98E47FC0811C93A578A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_PostRenderEvent_5();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_PostRenderEvent_5();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.UnityRenderEventBroadcaster_RenderEventBehaviour::OnPreRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEventBehaviour_OnPreRender_m915E18D3804254063BA1981D1B25AC51ACD7473F (RenderEventBehaviour_tF28EF9CD9A2101826273C8911894AEBBD7A01FBC * __this, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_PreRenderEvent_4();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_PreRenderEvent_4();
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Vuforia.UnityRenderEventBroadcaster_RenderEventBehaviour::OnPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEventBehaviour_OnPostRender_mEC935EC458FF1D4E574FDA7409C3E2199E7D4558 (RenderEventBehaviour_tF28EF9CD9A2101826273C8911894AEBBD7A01FBC * __this, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_PostRenderEvent_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = __this->get_PostRenderEvent_5();
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Vuforia.UnityRenderEventBroadcaster_RenderEventBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderEventBehaviour__ctor_mBD3E72445BC21BB44F9F88310DA52651EE8CA199 (RenderEventBehaviour_tF28EF9CD9A2101826273C8911894AEBBD7A01FBC * __this, const RuntimeMethod* method)
{
	{
		VuforiaMonoBehaviour__ctor_mBAF66AB5B827C51C023C4B1F29F0E6C56C163F8B(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.UnityVersionUtility_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEA443FD50BEBF750DF60EBDACC4711D404F7D1CF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mEA443FD50BEBF750DF60EBDACC4711D404F7D1CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2 * L_0 = (U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2 *)il2cpp_codegen_object_new(U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m840D9469455EF64FA107E828A900139160D0F991(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.UnityVersionUtility_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m840D9469455EF64FA107E828A900139160D0F991 (U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.UnityVersionUtility_<>c::<VersionGreaterOrEqualThan>b__1_0(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CVersionGreaterOrEqualThanU3Eb__1_0_m0C443A818B62F89F11A959F00B39875780D2BA55 (U3CU3Ec_t10B2AB03B97988F81EAFF5E5974D7668906A86C2 * __this, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___ver0, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___refVer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CVersionGreaterOrEqualThanU3Eb__1_0_m0C443A818B62F89F11A959F00B39875780D2BA55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_0 = ___ver0;
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_1 = ___refVer1;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		bool L_2 = Version_op_GreaterThanOrEqual_m3541CE83D1E5FD5E50F8FFE4EA2984359E92754D(L_0, L_1, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_GetImageSizeAndDataDelegate_tF1E20D3F6EA9A7A03484BB2DAA13172E08F0A23E (GetImageSizeAndDataDelegate_tF1E20D3F6EA9A7A03484BB2DAA13172E08F0A23E * __this, ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED * ___imageHeader0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___imageHeader0);

	return static_cast<bool>(returnValue);
}
// System.Void Vuforia.UnmanagedImageExtensions_GetImageSizeAndDataDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetImageSizeAndDataDelegate__ctor_m54F021EFBEAECB0A12A57726F6115C1EFD0DE76F (GetImageSizeAndDataDelegate_tF1E20D3F6EA9A7A03484BB2DAA13172E08F0A23E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Vuforia.UnmanagedImageExtensions_GetImageSizeAndDataDelegate::Invoke(Vuforia.TrackerData_ImageHeaderData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GetImageSizeAndDataDelegate_Invoke_mD3769444340C3DC3608ABC6272E85816B0ADD0EA (GetImageSizeAndDataDelegate_tF1E20D3F6EA9A7A03484BB2DAA13172E08F0A23E * __this, ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED * ___imageHeader0, const RuntimeMethod* method)
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
				typedef bool (*FunctionPointerType) (ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___imageHeader0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___imageHeader0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___imageHeader0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED * >::Invoke(targetMethod, targetThis, ___imageHeader0);
					else
						result = GenericVirtFuncInvoker1< bool, ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED * >::Invoke(targetMethod, targetThis, ___imageHeader0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___imageHeader0);
					else
						result = VirtFuncInvoker1< bool, ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___imageHeader0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___imageHeader0) - 1), targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___imageHeader0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Vuforia.UnmanagedImageExtensions_GetImageSizeAndDataDelegate::BeginInvoke(Vuforia.TrackerData_ImageHeaderData&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetImageSizeAndDataDelegate_BeginInvoke_m7F3C97203D1E56A45643D4BF7DB9BD47F69A6214 (GetImageSizeAndDataDelegate_tF1E20D3F6EA9A7A03484BB2DAA13172E08F0A23E * __this, ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED * ___imageHeader0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetImageSizeAndDataDelegate_BeginInvoke_m7F3C97203D1E56A45643D4BF7DB9BD47F69A6214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED_il2cpp_TypeInfo_var, &*___imageHeader0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean Vuforia.UnmanagedImageExtensions_GetImageSizeAndDataDelegate::EndInvoke(Vuforia.TrackerData_ImageHeaderData&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GetImageSizeAndDataDelegate_EndInvoke_m1D21FCBE46C072BC389C166CD45591B20EAC43AA (GetImageSizeAndDataDelegate_tF1E20D3F6EA9A7A03484BB2DAA13172E08F0A23E * __this, ImageHeaderData_t79977919F56C571F20671706B54086A39DFB2EED * ___imageHeader0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___imageHeader0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
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
// System.Void Vuforia.UserDefinedTargetBuildingBehaviour_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF7D80BE93DBBEA3FA2204539028B069DB20A778E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mF7D80BE93DBBEA3FA2204539028B069DB20A778E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653 * L_0 = (U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653 *)il2cpp_codegen_object_new(U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m77FE1681F88557AEE2D8C6BB793DCC9E5EAB486E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.UserDefinedTargetBuildingBehaviour_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m77FE1681F88557AEE2D8C6BB793DCC9E5EAB486E (U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.UserDefinedTargetBuildingBehaviour_<>c::<OnVuforiaStarted>b__31_0(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnVuforiaStartedU3Eb__31_0_m213B260DAEFE145018675C0B55CE95D2800B9075 (U3CU3Ec_t88C0A119B9AA757BB2EF305EF693BC2062DE1653 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___handler0, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___handler0;
		DelegateHelper_InvokeWithExceptionHandling_mE53E6764826850399193FA04944C101C33B3A645(L_0, /*hidden argument*/NULL);
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
// System.Void Vuforia.UserDefinedTargetBuildingBehaviour_<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_mD5C9427ACD71E543596F2ED8ED69F8978A8C6056 (U3CU3Ec__DisplayClass25_0_tD872908B38989C7BC414821DA592073A148F94CE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.UserDefinedTargetBuildingBehaviour_<>c__DisplayClass25_0::<SetFrameQuality>b__0(System.Action`1<Vuforia.ImageTargetBuilder_FrameQuality>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3CSetFrameQualityU3Eb__0_mA82A58809996FD55CE4A5819319638535BD69228 (U3CU3Ec__DisplayClass25_0_tD872908B38989C7BC414821DA592073A148F94CE * __this, Action_1_tC87FED509BD0D441A0ADCBFE65149AE21BD08A98 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass25_0_U3CSetFrameQualityU3Eb__0_mA82A58809996FD55CE4A5819319638535BD69228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tC87FED509BD0D441A0ADCBFE65149AE21BD08A98 * L_0 = ___handler0;
		int32_t L_1 = __this->get_frameQuality_0();
		DelegateHelper_InvokeWithExceptionHandling_TisFrameQuality_tA05570432BB459EC5520225178110C0839B211DE_mA66019810DD3337670B7DEBF28E585FBDC641F3B(L_0, L_1, /*hidden argument*/DelegateHelper_InvokeWithExceptionHandling_TisFrameQuality_tA05570432BB459EC5520225178110C0839B211DE_mA66019810DD3337670B7DEBF28E585FBDC641F3B_RuntimeMethod_var);
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
// System.Void Vuforia.UserDefinedTargetBuildingBehaviour_<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m9ABA502DC47E10FD5EB31D58F3538343CD802243 (U3CU3Ec__DisplayClass27_0_tB8A642ED0220FC9C55F7C3C490EE649BFDEC4743 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.UserDefinedTargetBuildingBehaviour_<>c__DisplayClass27_0::<Update>b__0(System.Action`1<Vuforia.TrackableSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0_U3CUpdateU3Eb__0_m9ABC484D5D7A8358C0B7C23588D4E001FE28AF4E (U3CU3Ec__DisplayClass27_0_tB8A642ED0220FC9C55F7C3C490EE649BFDEC4743 * __this, Action_1_tF179629AB9BB26D8E830C796089B0398ACDCDFB6 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass27_0_U3CUpdateU3Eb__0_m9ABC484D5D7A8358C0B7C23588D4E001FE28AF4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tF179629AB9BB26D8E830C796089B0398ACDCDFB6 * L_0 = ___handler0;
		TrackableSource_tA8649A889727AA9D7469846706286509D153417E * L_1 = __this->get_trackableSource_0();
		DelegateHelper_InvokeWithExceptionHandling_TisTrackableSource_tA8649A889727AA9D7469846706286509D153417E_mD6945DF4C5301E2DA4502447710A02F6A48E9B05(L_0, L_1, /*hidden argument*/DelegateHelper_InvokeWithExceptionHandling_TisTrackableSource_tA8649A889727AA9D7469846706286509D153417E_mD6945DF4C5301E2DA4502447710A02F6A48E9B05_RuntimeMethod_var);
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
// System.Void Vuforia.VideoBackgroundConfigMigrator_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m410DE3270D3520921AAB33D991A1BE9C5ED93488 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m410DE3270D3520921AAB33D991A1BE9C5ED93488_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC * L_0 = (U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC *)il2cpp_codegen_object_new(U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE7D13AFCEBDDBFB2ACB424565777B1023DCD6F0F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.VideoBackgroundConfigMigrator_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE7D13AFCEBDDBFB2ACB424565777B1023DCD6F0F (U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.VideoBackgroundConfigMigrator_<>c::<MigrateAll>b__2_0(Vuforia.AMigratableVideoBackgroundConfigProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CMigrateAllU3Eb__2_0_m8AC15C5AF14D7C6460CCF069C32F2AE2AA150149 (U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC * __this, AMigratableVideoBackgroundConfigProperty_t4A9B28F84A13148720EC22B576D5197D535FEDC2 * ___p0, const RuntimeMethod* method)
{
	{
		AMigratableVideoBackgroundConfigProperty_t4A9B28F84A13148720EC22B576D5197D535FEDC2 * L_0 = ___p0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.AMigratableVideoBackgroundConfigProperty::Migrate() */, L_0);
		return L_1;
	}
}
// System.Boolean Vuforia.VideoBackgroundConfigMigrator_<>c::<MigrateAll>b__2_1(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CMigrateAllU3Eb__2_1_m410AF5056BD56ED819D24A3EEB660581EF16A308 (U3CU3Ec_tF6B1A33FA4C4D8EAD94B8165E734D533E787C9CC * __this, bool ___migrationPerformed0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___migrationPerformed0;
		return L_0;
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
// System.Void Vuforia.VuMarkTargetImpl_VuMarkSetTargetSize::.ctor(Vuforia.VuMarkTemplate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuMarkSetTargetSize__ctor_m704C93B69EA346D889369193748839E8A9334CCA (VuMarkSetTargetSize_tC13FEF69987297539E648616C0813C46A8019898 * __this, RuntimeObject* ___template0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkSetTargetSize__ctor_m704C93B69EA346D889369193748839E8A9334CCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		DisabledSetTargetSize__ctor_m3AEF24F37F4A5189F731B4B3D60BE50DB21F78CE(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___template0;
		__this->set_mTemplate_1(L_1);
		return;
	}
}
// UnityEngine.Vector3 Vuforia.VuMarkTargetImpl_VuMarkSetTargetSize::GetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VuMarkSetTargetSize_GetSize_mCFAE858E13109BA73D0155E27383A408D293A15C (VuMarkSetTargetSize_tC13FEF69987297539E648616C0813C46A8019898 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkSetTargetSize_GetSize_mCFAE858E13109BA73D0155E27383A408D293A15C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_mTemplate_1();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = InterfaceFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(0 /* UnityEngine.Vector3 Vuforia.ObjectTarget::GetSize() */, ObjectTarget_t6E5B0275C082159F66B1879834E91CEBEE728465_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single Vuforia.VuMarkTargetImpl_VuMarkSetTargetSize::GetLargestSizeComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VuMarkSetTargetSize_GetLargestSizeComponent_m4ABF40A336FE69395F694B99A30B890731D12029 (VuMarkSetTargetSize_tC13FEF69987297539E648616C0813C46A8019898 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VuMarkSetTargetSize_GetLargestSizeComponent_m4ABF40A336FE69395F694B99A30B890731D12029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_mTemplate_1();
		NullCheck(L_0);
		float L_1 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single Vuforia.ObjectTarget::GetLargestSizeComponent() */, ObjectTarget_t6E5B0275C082159F66B1879834E91CEBEE728465_il2cpp_TypeInfo_var, L_0);
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
// System.Void Vuforia.VuforiaARController_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBBD17C407E2F2A855C78E748934B1C56C8E10614 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mBBD17C407E2F2A855C78E748934B1C56C8E10614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7 * L_0 = (U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7 *)il2cpp_codegen_object_new(U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9D3F4B31A63ADC9332090C36336DF1C04E8CE237(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaARController_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9D3F4B31A63ADC9332090C36336DF1C04E8CE237 (U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaARController_<>c::<OnVideoBackgroundConfigChanged>b__87_0(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnVideoBackgroundConfigChangedU3Eb__87_0_m9B9E9D7A5F309074167622C7F6943682CF77AA9D (U3CU3Ec_tE04DC71D385B46D63F4ECE51878A4BDE943CCCE7 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___e0, const RuntimeMethod* method)
{
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___e0;
		DelegateHelper_InvokeWithExceptionHandling_mE53E6764826850399193FA04944C101C33B3A645(L_0, /*hidden argument*/NULL);
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
// System.Boolean Vuforia.VuforiaConfiguration_DatabaseConfiguration::get_DisableModelExtraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseConfiguration_get_DisableModelExtraction_m76F7D31F30412DB3E0F1C0EA5937B7A340D0CC15 (DatabaseConfiguration_tF351BC5B9DB35944D7129BD046E7366BA3EF4931 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_disableModelExtraction_0();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_DatabaseConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseConfiguration__ctor_mE94EB1BBE7A02CF9D33387850B5AE879A17CB64B (DatabaseConfiguration_tF351BC5B9DB35944D7129BD046E7366BA3EF4931 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration::get_AutoInitAndStartTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceTrackerConfiguration_get_AutoInitAndStartTracker_mC003BBBC3BB91310AC8196BF16575E45E97AA818 (DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_autoStartTracker_1();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration::set_AutoInitAndStartTracker(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceTrackerConfiguration_set_AutoInitAndStartTracker_m9440C591620E410BFE22E30FE3625E5392177EE5 (DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_autoStartTracker_1(L_0);
		return;
	}
}
// Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration_ARCoreRequirement Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration::get_ARCoreRequirementSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeviceTrackerConfiguration_get_ARCoreRequirementSetting_m29964A16F0EAF29309167E21FD57D0E6DB930E3A (DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_arcoreRequirement_2();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration::set_ARCoreRequirementSetting(Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration_ARCoreRequirement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceTrackerConfiguration_set_ARCoreRequirementSetting_mAFBE24C6BEE2031B3EC68855169CDB9B10F5E172 (DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_arcoreRequirement_2(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration::get_AutoImportArcoreSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceTrackerConfiguration_get_AutoImportArcoreSetting_m6F51BF4F52EBFBB067292C36DDDB2592CFB7D3A3 (DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_autoImportArcore_3();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration::set_AutoImportArcoreSetting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceTrackerConfiguration_set_AutoImportArcoreSetting_m8718BAF6E9A4EB22A9EEE81F0176B4FCFA7084A2 (DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_autoImportArcore_3(L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration_DeviceTrackerConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceTrackerConfiguration__ctor_m247C324421C7A64D0E227ABA751A60E43C318C35 (DeviceTrackerConfiguration_tC4374F4EE09D13D4277B4FA1CBFDBA754721F390 * __this, const RuntimeMethod* method)
{
	{
		__this->set_autoStartTracker_1((bool)1);
		__this->set_arcoreRequirement_2(1);
		__this->set_autoImportArcore_3((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::add_VirtualSceneScaleFactorUpdated(System.Action`2<System.Single,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_add_VirtualSceneScaleFactorUpdated_m6589C16DC53EBC3800CDF87E51532C0CAC429B78 (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericVuforiaConfiguration_add_VirtualSceneScaleFactorUpdated_m6589C16DC53EBC3800CDF87E51532C0CAC429B78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_0 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_1 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_2 = NULL;
	{
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_0 = ((GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36_il2cpp_TypeInfo_var))->get_VirtualSceneScaleFactorUpdated_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_1 = V_0;
		V_1 = L_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_2 = V_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)CastclassSealed((RuntimeObject*)L_4, Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var));
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_5 = V_2;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_6 = V_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_7 = InterlockedCompareExchangeImpl<Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *>((Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 **)(((GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36_il2cpp_TypeInfo_var))->get_address_of_VirtualSceneScaleFactorUpdated_1()), L_5, L_6);
		V_0 = L_7;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_8 = V_0;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)L_8) == ((RuntimeObject*)(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::remove_VirtualSceneScaleFactorUpdated(System.Action`2<System.Single,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_remove_VirtualSceneScaleFactorUpdated_m3A8020B427F20ACAC06D93B13F165D2E68B65CAA (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericVuforiaConfiguration_remove_VirtualSceneScaleFactorUpdated_m3A8020B427F20ACAC06D93B13F165D2E68B65CAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_0 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_1 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_2 = NULL;
	{
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_0 = ((GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36_il2cpp_TypeInfo_var))->get_VirtualSceneScaleFactorUpdated_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_1 = V_0;
		V_1 = L_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_2 = V_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)CastclassSealed((RuntimeObject*)L_4, Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var));
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_5 = V_2;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_6 = V_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_7 = InterlockedCompareExchangeImpl<Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *>((Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 **)(((GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36_il2cpp_TypeInfo_var))->get_address_of_VirtualSceneScaleFactorUpdated_1()), L_5, L_6);
		V_0 = L_7;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_8 = V_0;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)L_8) == ((RuntimeObject*)(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.String Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::get_LicenseKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_LicenseKey_m8085C2419973D82CF905A9C91C14DB1A41D6707D (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_vuforiaLicenseKey_2();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::set_LicenseKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_LicenseKey_mC6713D071C84C7B23AE26295828B1B65494DC2E5 (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_vuforiaLicenseKey_2(L_0);
		return;
	}
}
// System.String Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::get_UfoLicenseKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_UfoLicenseKey_m4CB6882E80600DE671004680F4CA16981DACBBD2 (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_ufoLicenseKey_3();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::set_UfoLicenseKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_UfoLicenseKey_m1C402DA1E5DFE4D6F36BF63AB8EDFD8BFA200A5E (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_ufoLicenseKey_3(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::get_DelayedInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericVuforiaConfiguration_get_DelayedInitialization_m9FF79B99449037F1BD3AABC57F6EC31370E609E1 (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_delayedInitialization_4();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::set_DelayedInitialization(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_DelayedInitialization_mB5A27AC14032BBDFC4F1A16A338A10007046B644 (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_delayedInitialization_4(L_0);
		return;
	}
}
// Vuforia.CameraDevice_CameraDeviceMode Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::get_CameraDeviceMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericVuforiaConfiguration_get_CameraDeviceMode_m6078AB089A214635EADF6D3FD3008D1CA145B356 (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_cameraDeviceModeSetting_5();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::set_CameraDeviceMode(Vuforia.CameraDevice_CameraDeviceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_CameraDeviceMode_m5F94D6C798628E082E452E3709C0BE34C2CC8027 (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_cameraDeviceModeSetting_5(L_0);
		return;
	}
}
// System.Int32 Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::get_MaxSimultaneousImageTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericVuforiaConfiguration_get_MaxSimultaneousImageTargets_mFF4E2E309DD8DC1B7021F806A1A4DB7A183BF65E (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_maxSimultaneousImageTargets_6();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::set_MaxSimultaneousImageTargets(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_MaxSimultaneousImageTargets_m01C71E365649D98667998EF3D1D769EB25F67F17 (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_maxSimultaneousImageTargets_6(L_0);
		return;
	}
}
// System.Int32 Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::get_MaxSimultaneousObjectTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericVuforiaConfiguration_get_MaxSimultaneousObjectTargets_mBEAEE55EA1B9C961782B25AC9BFE6CE57C82A243 (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_maxSimultaneousObjectTargets_7();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::set_MaxSimultaneousObjectTargets(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_MaxSimultaneousObjectTargets_m8EE07B7C4DE154F290E046A5D0D906AC81111F7E (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_maxSimultaneousObjectTargets_7(L_0);
		return;
	}
}
// System.Single Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::get_VirtualSceneScaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GenericVuforiaConfiguration_get_VirtualSceneScaleFactor_m40330B89093D32ED3E386DFA6F9F8368D8D54074 (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericVuforiaConfiguration_get_VirtualSceneScaleFactor_m40330B89093D32ED3E386DFA6F9F8368D8D54074_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = SystemInfo_get_deviceModel_m99131C20271BDA64F3A537AA009B252DCEDC5977(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_0, _stringLiteralED6317189EDF2D65968A72B77DFC11B4FCB322B8, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		return (1.0f);
	}

IL_0017:
	{
		float L_2 = __this->get_virtualSceneScaleFactor_9();
		return L_2;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::set_VirtualSceneScaleFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_VirtualSceneScaleFactor_m3797791A385389EDEF4D66168841B7F805653D9A (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericVuforiaConfiguration_set_VirtualSceneScaleFactor_m3797791A385389EDEF4D66168841B7F805653D9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralD7A3AF7D8067F2156CDD2D54C51A7EF7D54C2C06, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::get_UseDelayedLoadingObjectTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericVuforiaConfiguration_get_UseDelayedLoadingObjectTargets_m918C4615487133B46394A85D6B2A663FB72D4D5E (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_useDelayedLoadingObjectTargets_10();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::set_UseDelayedLoadingObjectTargets(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_UseDelayedLoadingObjectTargets_m55DF0B16C37E77E690B6F9BA1C2D21E978180009 (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_useDelayedLoadingObjectTargets_10(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::get_ContinuousModelTargetSearch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericVuforiaConfiguration_get_ContinuousModelTargetSearch_m4FF9700030265922119910B64C12DC730CEFD961 (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_modelTargetRecoWhileExtendedTracked_11();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::set_ContinuousModelTargetSearch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_ContinuousModelTargetSearch_mC9748656FDD255A8259E766B7C049A34736624FC (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_modelTargetRecoWhileExtendedTracked_11(L_0);
		return;
	}
}
// System.String Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_Version_m68B4127AD4C948EA5F64750DDC21A46CD2A054D5 (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_version_12();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::set_Version(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_Version_mB06A014B09642D2C69B793C94686CC18867E2B9C (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_version_12(L_0);
		return;
	}
}
// System.String Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::get_EULAAcceptedVersions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_EULAAcceptedVersions_m2FDD938A909FD6361210CE818C49CC29A100D7C1 (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_eulaAcceptedVersions_13();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::set_EULAAcceptedVersions(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_EULAAcceptedVersions_mED2BBC65A4B28AF38A0BEEB8669425FA1E05DF0C (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_eulaAcceptedVersions_13(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::IsUFOEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericVuforiaConfiguration_IsUFOEnabled_m8B0077FA783DBB2241F16B83DE698B0B91061C1D (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericVuforiaConfiguration_IsUFOEnabled_m8B0077FA783DBB2241F16B83DE698B0B91061C1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_vuforiaLicenseKey_2();
		String_t* L_1 = __this->get_ufoLicenseKey_3();
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_tA3A3FC951533F58532B1EB9E2A0A2E49E5AEF0CB_il2cpp_TypeInfo_var);
		bool L_2 = VuforiaRuntimeUtilities_IsUfoEnabled_m9DB2DE46FC4281E68B82FE1574CE78DF63DFFCD3(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Vuforia.VuforiaUnity_ModelTargetMode Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::get_ModelTargetMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericVuforiaConfiguration_get_ModelTargetMode_m056DFEAF2DDD0AAEC98BC3C963BABD11F9C7801A (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_modelTargetMode_14();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::set_ModelTargetMode(Vuforia.VuforiaUnity_ModelTargetMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_ModelTargetMode_mC3B2536BD361FDD30003FF71FE077F26497A451F (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_modelTargetMode_14(L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::ValidateScaleChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_ValidateScaleChange_m1BEDE66DF1A79C3745C60D424DB47437F29FD02A (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericVuforiaConfiguration_ValidateScaleChange_m1BEDE66DF1A79C3745C60D424DB47437F29FD02A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * G_B4_0 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * G_B3_0 = NULL;
	{
		float L_0 = __this->get_previousVirtualSceneScaleFactor_8();
		float L_1 = __this->get_virtualSceneScaleFactor_9();
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_2 = ((GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36_il2cpp_TypeInfo_var))->get_VirtualSceneScaleFactorUpdated_1();
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001a;
		}
	}
	{
		goto IL_002b;
	}

IL_001a:
	{
		float L_4 = __this->get_previousVirtualSceneScaleFactor_8();
		float L_5 = __this->get_virtualSceneScaleFactor_9();
		NullCheck(G_B4_0);
		Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89(G_B4_0, L_4, L_5, /*hidden argument*/Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_RuntimeMethod_var);
	}

IL_002b:
	{
		float L_6 = __this->get_virtualSceneScaleFactor_9();
		__this->set_previousVirtualSceneScaleFactor_8(L_6);
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration_GenericVuforiaConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration__ctor_m43FAF8BC4909441438668A7566E51941728153C0 (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericVuforiaConfiguration__ctor_m43FAF8BC4909441438668A7566E51941728153C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_vuforiaLicenseKey_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_ufoLicenseKey_3(_stringLiteral197861696CD5E89F2838E06BFD9AC2ADBA1425C6);
		__this->set_cameraDeviceModeSetting_5((-1));
		__this->set_maxSimultaneousImageTargets_6(1);
		__this->set_maxSimultaneousObjectTargets_7(1);
		__this->set_previousVirtualSceneScaleFactor_8((1.0f));
		__this->set_virtualSceneScaleFactor_9((1.0f));
		__this->set_modelTargetRecoWhileExtendedTracked_11((bool)1);
		__this->set_version_12(_stringLiteralBEDF7892A254ADF90ABF5856512A230790CB64C1);
		__this->set_eulaAcceptedVersions_13(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// Vuforia.PlayModeType Vuforia.VuforiaConfiguration_PlayModeConfiguration::get_PlayModeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayModeConfiguration_get_PlayModeType_m81F2136552C22B7A02725823CA595A9756AE54B7 (PlayModeConfiguration_tAE3B5638AA25D2FC6C10B64CA4BF26F3EE026695 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_playModeType_0();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_PlayModeConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayModeConfiguration__ctor_m8C336D3DA8A127CAEE61F9FE2B96A0482C41FF26 (PlayModeConfiguration_tAE3B5638AA25D2FC6C10B64CA4BF26F3EE026695 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 Vuforia.VuforiaConfiguration_VideoBackgroundConfiguration::get_NumDivisions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoBackgroundConfiguration_get_NumDivisions_m8BAA92A3C3E125E06F5CF03C952367AE55D9AB30 (VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_numDivisions_0();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_VideoBackgroundConfiguration::set_NumDivisions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoBackgroundConfiguration_set_NumDivisions_m3282AC421681653FC578C15D3A3B77FA41722FFC (VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_numDivisions_0(L_0);
		return;
	}
}
// UnityEngine.Shader Vuforia.VuforiaConfiguration_VideoBackgroundConfiguration::get_VideoBackgroundShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * VideoBackgroundConfiguration_get_VideoBackgroundShader_mB26CD19765361EBC670A608FA5042A719BF73E3C (VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A * __this, const RuntimeMethod* method)
{
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = __this->get_videoBackgroundShader_1();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_VideoBackgroundConfiguration::set_VideoBackgroundShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoBackgroundConfiguration_set_VideoBackgroundShader_m233169077F9B0A6D1F4ED8A0B5EC86F8DE4A94B4 (VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___value0, const RuntimeMethod* method)
{
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___value0;
		__this->set_videoBackgroundShader_1(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration_VideoBackgroundConfiguration::get_VideoBackgroundEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoBackgroundConfiguration_get_VideoBackgroundEnabled_mA44188DE3F84FB9282B46CEBD1FFF6792C990985 (VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_videoBackgroundEnabled_2();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_VideoBackgroundConfiguration::set_VideoBackgroundEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoBackgroundConfiguration_set_VideoBackgroundEnabled_mF9B121B45D3B8D0BFA7343FF31E624B9484E6BA7 (VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_videoBackgroundEnabled_2(L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration_VideoBackgroundConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoBackgroundConfiguration__ctor_m23A322E62123C2ED49907B111F01FC3A99344B74 (VideoBackgroundConfiguration_t834926E35DDDC24A14A8B1F67D05749C249B3C2A * __this, const RuntimeMethod* method)
{
	{
		__this->set_numDivisions_0(2);
		__this->set_videoBackgroundEnabled_2((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.String Vuforia.VuforiaConfiguration_WebCamConfiguration::get_DeviceNameSetInEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamConfiguration_get_DeviceNameSetInEditor_m4960A6E897BDE45219622204B886FDE158369490 (WebCamConfiguration_tB6901731D92E082AB5355D87C90480957723CB91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamConfiguration_get_DeviceNameSetInEditor_m4960A6E897BDE45219622204B886FDE158369490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = PlayModeEditorUtility_get_Instance_mCF1931946ED015E4CF7C71F55A221BA610B192C0(/*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String Vuforia.IPlayModeEditorUtility::GetEditorPrefsString(System.String) */, IPlayModeEditorUtility_t39FC0F38227370B3ACE37317DF19C1C5AA9D919F_il2cpp_TypeInfo_var, L_0, _stringLiteralE727A155B2B99EDAD35ACA5C43089CFECC3EB48A);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaConfiguration_WebCamConfiguration::get_RenderTextureLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebCamConfiguration_get_RenderTextureLayer_m1F42C36691A4D371C7E389692D10662FCB2263C7 (WebCamConfiguration_tB6901731D92E082AB5355D87C90480957723CB91 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_renderTextureLayer_1();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration_WebCamConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamConfiguration__ctor_mC90F252B38B91744D590D621CD1E68952A6F3337 (WebCamConfiguration_tB6901731D92E082AB5355D87C90480957723CB91 * __this, const RuntimeMethod* method)
{
	{
		__this->set_renderTextureLayer_1(((int32_t)30));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.VuforiaManager_<>c__DisplayClass62_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0__ctor_mB08F99B87A931BE94A0C633C51F29906A9280BB4 (U3CU3Ec__DisplayClass62_0_t194063C85F986BD8FE6CBFB4B540D50110E63906 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.VuforiaManager_<>c__DisplayClass62_0::<UpdateTrackers>b__0(Vuforia.TrackerData_TrackableResultData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass62_0_U3CUpdateTrackersU3Eb__0_m91DD3C0D9C7C76A9D35480C0DCAE05F681C1CF80 (U3CU3Ec__DisplayClass62_0_t194063C85F986BD8FE6CBFB4B540D50110E63906 * __this, TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  ___trd0, const RuntimeMethod* method)
{
	{
		TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  L_0 = ___trd0;
		int32_t L_1 = L_0.get_id_4();
		ManagedFrameState_tCF8239DA5DA674DDF3BD83607174B811DC2BA467 * L_2 = __this->get_address_of_frameState_0();
		int32_t L_3 = L_2->get_deviceTrackableId_7();
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
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
// System.Void Vuforia.VuforiaManager_<>c__DisplayClass76_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass76_0__ctor_mD645FBF210F068F03F27AE2A726D93F37524F2DA (U3CU3Ec__DisplayClass76_0_tD79645A57080742FC990CADBEA072D5BF12092DA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.VuforiaManager_<>c__DisplayClass76_0::<UpdateWCTrackableFoundQueue>b__0(Vuforia.TrackerData_TrackableResultData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass76_0_U3CUpdateWCTrackableFoundQueueU3Eb__0_mE3C7C0024070AD7F0ED89384874665EF5A0CB619 (U3CU3Ec__DisplayClass76_0_tD79645A57080742FC990CADBEA072D5BF12092DA * __this, TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  ___tr0, const RuntimeMethod* method)
{
	{
		TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87  L_0 = ___tr0;
		int32_t L_1 = L_0.get_id_4();
		TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B * L_2 = __this->get_address_of_id_0();
		int32_t L_3 = L_2->get_TrackableId_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
// System.Boolean Vuforia.VuforiaManager_<>c__DisplayClass76_0::<UpdateWCTrackableFoundQueue>b__1(Vuforia.TrackerData_VuMarkTargetResultData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass76_0_U3CUpdateWCTrackableFoundQueueU3Eb__1_m37F9FDAF0C38C7735CF30B7F9226B1E14C063E58 (U3CU3Ec__DisplayClass76_0_tD79645A57080742FC990CADBEA072D5BF12092DA * __this, VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD  ___tr0, const RuntimeMethod* method)
{
	{
		VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD  L_0 = ___tr0;
		int32_t L_1 = L_0.get_resultID_4();
		TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B * L_2 = __this->get_address_of_id_0();
		int32_t L_3 = L_2->get_ResultId_1();
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
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
// Conversion methods for marshalling of: Vuforia.VuforiaManager/AutoRotationState
IL2CPP_EXTERN_C void AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07_marshal_pinvoke(const AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07& unmarshaled, AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07_marshaled_pinvoke& marshaled)
{
	marshaled.___setOnPause_0 = static_cast<int32_t>(unmarshaled.get_setOnPause_0());
	marshaled.___autorotateToPortrait_1 = static_cast<int32_t>(unmarshaled.get_autorotateToPortrait_1());
	marshaled.___autorotateToPortraitUpsideDown_2 = static_cast<int32_t>(unmarshaled.get_autorotateToPortraitUpsideDown_2());
	marshaled.___autorotateToLandscapeLeft_3 = static_cast<int32_t>(unmarshaled.get_autorotateToLandscapeLeft_3());
	marshaled.___autorotateToLandscapeRight_4 = static_cast<int32_t>(unmarshaled.get_autorotateToLandscapeRight_4());
}
IL2CPP_EXTERN_C void AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07_marshal_pinvoke_back(const AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07_marshaled_pinvoke& marshaled, AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07& unmarshaled)
{
	bool unmarshaled_setOnPause_temp_0 = false;
	unmarshaled_setOnPause_temp_0 = static_cast<bool>(marshaled.___setOnPause_0);
	unmarshaled.set_setOnPause_0(unmarshaled_setOnPause_temp_0);
	bool unmarshaled_autorotateToPortrait_temp_1 = false;
	unmarshaled_autorotateToPortrait_temp_1 = static_cast<bool>(marshaled.___autorotateToPortrait_1);
	unmarshaled.set_autorotateToPortrait_1(unmarshaled_autorotateToPortrait_temp_1);
	bool unmarshaled_autorotateToPortraitUpsideDown_temp_2 = false;
	unmarshaled_autorotateToPortraitUpsideDown_temp_2 = static_cast<bool>(marshaled.___autorotateToPortraitUpsideDown_2);
	unmarshaled.set_autorotateToPortraitUpsideDown_2(unmarshaled_autorotateToPortraitUpsideDown_temp_2);
	bool unmarshaled_autorotateToLandscapeLeft_temp_3 = false;
	unmarshaled_autorotateToLandscapeLeft_temp_3 = static_cast<bool>(marshaled.___autorotateToLandscapeLeft_3);
	unmarshaled.set_autorotateToLandscapeLeft_3(unmarshaled_autorotateToLandscapeLeft_temp_3);
	bool unmarshaled_autorotateToLandscapeRight_temp_4 = false;
	unmarshaled_autorotateToLandscapeRight_temp_4 = static_cast<bool>(marshaled.___autorotateToLandscapeRight_4);
	unmarshaled.set_autorotateToLandscapeRight_4(unmarshaled_autorotateToLandscapeRight_temp_4);
}
// Conversion method for clean up from marshalling of: Vuforia.VuforiaManager/AutoRotationState
IL2CPP_EXTERN_C void AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07_marshal_pinvoke_cleanup(AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Vuforia.VuforiaManager/AutoRotationState
IL2CPP_EXTERN_C void AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07_marshal_com(const AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07& unmarshaled, AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07_marshaled_com& marshaled)
{
	marshaled.___setOnPause_0 = static_cast<int32_t>(unmarshaled.get_setOnPause_0());
	marshaled.___autorotateToPortrait_1 = static_cast<int32_t>(unmarshaled.get_autorotateToPortrait_1());
	marshaled.___autorotateToPortraitUpsideDown_2 = static_cast<int32_t>(unmarshaled.get_autorotateToPortraitUpsideDown_2());
	marshaled.___autorotateToLandscapeLeft_3 = static_cast<int32_t>(unmarshaled.get_autorotateToLandscapeLeft_3());
	marshaled.___autorotateToLandscapeRight_4 = static_cast<int32_t>(unmarshaled.get_autorotateToLandscapeRight_4());
}
IL2CPP_EXTERN_C void AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07_marshal_com_back(const AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07_marshaled_com& marshaled, AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07& unmarshaled)
{
	bool unmarshaled_setOnPause_temp_0 = false;
	unmarshaled_setOnPause_temp_0 = static_cast<bool>(marshaled.___setOnPause_0);
	unmarshaled.set_setOnPause_0(unmarshaled_setOnPause_temp_0);
	bool unmarshaled_autorotateToPortrait_temp_1 = false;
	unmarshaled_autorotateToPortrait_temp_1 = static_cast<bool>(marshaled.___autorotateToPortrait_1);
	unmarshaled.set_autorotateToPortrait_1(unmarshaled_autorotateToPortrait_temp_1);
	bool unmarshaled_autorotateToPortraitUpsideDown_temp_2 = false;
	unmarshaled_autorotateToPortraitUpsideDown_temp_2 = static_cast<bool>(marshaled.___autorotateToPortraitUpsideDown_2);
	unmarshaled.set_autorotateToPortraitUpsideDown_2(unmarshaled_autorotateToPortraitUpsideDown_temp_2);
	bool unmarshaled_autorotateToLandscapeLeft_temp_3 = false;
	unmarshaled_autorotateToLandscapeLeft_temp_3 = static_cast<bool>(marshaled.___autorotateToLandscapeLeft_3);
	unmarshaled.set_autorotateToLandscapeLeft_3(unmarshaled_autorotateToLandscapeLeft_temp_3);
	bool unmarshaled_autorotateToLandscapeRight_temp_4 = false;
	unmarshaled_autorotateToLandscapeRight_temp_4 = static_cast<bool>(marshaled.___autorotateToLandscapeRight_4);
	unmarshaled.set_autorotateToLandscapeRight_4(unmarshaled_autorotateToLandscapeRight_temp_4);
}
// Conversion method for clean up from marshalling of: Vuforia.VuforiaManager/AutoRotationState
IL2CPP_EXTERN_C void AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07_marshal_com_cleanup(AutoRotationState_tA4D1F3EF3AB592E0F2BBD59DAF088421619A4A07_marshaled_com& marshaled)
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
// Vuforia.VuforiaManager_TrackableIdPair Vuforia.VuforiaManager_TrackableIdPair::FromTrackableId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B  TrackableIdPair_FromTrackableId_m41711B239A1FA50B6911D2DCA2C05E13D8D01863 (int32_t ___trackableId0, const RuntimeMethod* method)
{
	TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B ));
		int32_t L_0 = ___trackableId0;
		(&V_0)->set_TrackableId_0(L_0);
		(&V_0)->set_ResultId_1((-1));
		TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B  L_1 = V_0;
		return L_1;
	}
}
// Vuforia.VuforiaManager_TrackableIdPair Vuforia.VuforiaManager_TrackableIdPair::FromResultId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B  TrackableIdPair_FromResultId_m5CF4C738E603C44023DA4E9E63FFEA315ABF9A72 (int32_t ___resultId0, const RuntimeMethod* method)
{
	TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B ));
		(&V_0)->set_TrackableId_0((-1));
		int32_t L_0 = ___resultId0;
		(&V_0)->set_ResultId_1(L_0);
		TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B  L_1 = V_0;
		return L_1;
	}
}
// Vuforia.VuforiaManager_TrackableIdPair Vuforia.VuforiaManager_TrackableIdPair::FromTrackableAndResultId(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B  TrackableIdPair_FromTrackableAndResultId_m719466B1F3304B2FA5B8B0674E05F9EC3C3F78FB (int32_t ___trackableId0, int32_t ___resultId1, const RuntimeMethod* method)
{
	TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B ));
		int32_t L_0 = ___trackableId0;
		(&V_0)->set_TrackableId_0(L_0);
		int32_t L_1 = ___resultId1;
		(&V_0)->set_ResultId_1(L_1);
		TrackableIdPair_t89652BBB27728E0166EA648D84B9D546D908B79B  L_2 = V_0;
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
// System.Void Vuforia.VuforiaRenderer_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m910B0ABC1E7D7C6AD32FD39B29239DACBDE0F921 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m910B0ABC1E7D7C6AD32FD39B29239DACBDE0F921_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF * L_0 = (U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF *)il2cpp_codegen_object_new(U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m37F99E054EF734325642A993B1D87CA03F706420(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaRenderer_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m37F99E054EF734325642A993B1D87CA03F706420 (U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.VuforiaRenderer_<>c::<.ctor>b__34_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__34_0_mFB9C1DE37FEDD46A914461710474CCDB59D33EC7 (U3CU3Ec_t53AB40C4D193680C40B8B445E06FDA5844E702AF * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
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
// System.Void Vuforia.VuforiaRenderer_Vec2I::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec2I__ctor_m26561AB7ACC0512D1DF33CB96AED23D2B73C62B4 (Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6 * __this, int32_t ___v10, int32_t ___v21, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___v10;
		__this->set_x_0(L_0);
		int32_t L_1 = ___v21;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Vec2I__ctor_m26561AB7ACC0512D1DF33CB96AED23D2B73C62B4_AdjustorThunk (RuntimeObject * __this, int32_t ___v10, int32_t ___v21, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6 * _thisAdjusted = reinterpret_cast<Vec2I_tECF5A21522995B80D00B53F85896FC7BB0644DE6 *>(__this + _offset);
	Vec2I__ctor_m26561AB7ACC0512D1DF33CB96AED23D2B73C62B4(_thisAdjusted, ___v10, ___v21, method);
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
// System.Void Vuforia.VuforiaRuntimeUtilities_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9BA95DAB19613307CE90632D03E51F7BAC5F3779 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m9BA95DAB19613307CE90632D03E51F7BAC5F3779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D * L_0 = (U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D *)il2cpp_codegen_object_new(U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF4596D428E857FB4C634705E06D60B3197FBCF14(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaRuntimeUtilities_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF4596D428E857FB4C634705E06D60B3197FBCF14 (U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities_<>c::<StopCameraIfPossible>b__34_0(Vuforia.TargetFinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStopCameraIfPossibleU3Eb__34_0_m1111A84C58BBF25E62FF3310FD7CE3695E66ABEA (U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D * __this, TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC * ___tf0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC * L_0 = ___tf0;
		NullCheck(L_0);
		int32_t L_1 = TargetFinder_GetInitState_mCBE1E23F8E9B86C87B0DD024C60E9DBF7D7AF1BA(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_3 = V_0;
		return (bool)((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
	}

IL_0010:
	{
		return (bool)1;
	}
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities_<>c::<StopCameraIfPossible>b__34_1(Vuforia.TargetFinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStopCameraIfPossibleU3Eb__34_1_mEC64E2309527134E0CA287CFA66DFE201C669713 (U3CU3Ec_tCEE9D2555B0FF657E7A63EE67B1A4684F61A949D * __this, TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC * ___tf0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CStopCameraIfPossibleU3Eb__34_1_mEC64E2309527134E0CA287CFA66DFE201C669713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TargetFinder_t49D931266813E8253EC28C882DF66F112DC9CCCC * L_0 = ___tf0;
		NullCheck(L_0);
		RuntimeObject* L_1 = TargetFinder_GetObjectTargets_m79721AD13B5DEE205CD473C4C171585DB91E6684(L_0, /*hidden argument*/NULL);
		int32_t L_2 = Enumerable_Count_TisObjectTarget_t6E5B0275C082159F66B1879834E91CEBEE728465_m7A81BB1634CDB0F9A9D710F3D2F59ACFC70E61FA(L_1, /*hidden argument*/Enumerable_Count_TisObjectTarget_t6E5B0275C082159F66B1879834E91CEBEE728465_m7A81BB1634CDB0F9A9D710F3D2F59ACFC70E61FA_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
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
// Conversion methods for marshalling of: Vuforia.VuforiaRuntimeUtilities/CameraState
IL2CPP_EXTERN_C void CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshal_pinvoke(const CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF& unmarshaled, CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CInitializedU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.get_U3CInitializedU3Ek__BackingField_0());
	marshaled.___U3CActiveU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CActiveU3Ek__BackingField_1());
	marshaled.___U3CDeviceModeU3Ek__BackingField_2 = unmarshaled.get_U3CDeviceModeU3Ek__BackingField_2();
}
IL2CPP_EXTERN_C void CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshal_pinvoke_back(const CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshaled_pinvoke& marshaled, CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF& unmarshaled)
{
	bool unmarshaled_U3CInitializedU3Ek__BackingField_temp_0 = false;
	unmarshaled_U3CInitializedU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CInitializedU3Ek__BackingField_0);
	unmarshaled.set_U3CInitializedU3Ek__BackingField_0(unmarshaled_U3CInitializedU3Ek__BackingField_temp_0);
	bool unmarshaled_U3CActiveU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CActiveU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CActiveU3Ek__BackingField_1);
	unmarshaled.set_U3CActiveU3Ek__BackingField_1(unmarshaled_U3CActiveU3Ek__BackingField_temp_1);
	int32_t unmarshaled_U3CDeviceModeU3Ek__BackingField_temp_2 = 0;
	unmarshaled_U3CDeviceModeU3Ek__BackingField_temp_2 = marshaled.___U3CDeviceModeU3Ek__BackingField_2;
	unmarshaled.set_U3CDeviceModeU3Ek__BackingField_2(unmarshaled_U3CDeviceModeU3Ek__BackingField_temp_2);
}
// Conversion method for clean up from marshalling of: Vuforia.VuforiaRuntimeUtilities/CameraState
IL2CPP_EXTERN_C void CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshal_pinvoke_cleanup(CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Vuforia.VuforiaRuntimeUtilities/CameraState
IL2CPP_EXTERN_C void CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshal_com(const CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF& unmarshaled, CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshaled_com& marshaled)
{
	marshaled.___U3CInitializedU3Ek__BackingField_0 = static_cast<int32_t>(unmarshaled.get_U3CInitializedU3Ek__BackingField_0());
	marshaled.___U3CActiveU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.get_U3CActiveU3Ek__BackingField_1());
	marshaled.___U3CDeviceModeU3Ek__BackingField_2 = unmarshaled.get_U3CDeviceModeU3Ek__BackingField_2();
}
IL2CPP_EXTERN_C void CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshal_com_back(const CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshaled_com& marshaled, CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF& unmarshaled)
{
	bool unmarshaled_U3CInitializedU3Ek__BackingField_temp_0 = false;
	unmarshaled_U3CInitializedU3Ek__BackingField_temp_0 = static_cast<bool>(marshaled.___U3CInitializedU3Ek__BackingField_0);
	unmarshaled.set_U3CInitializedU3Ek__BackingField_0(unmarshaled_U3CInitializedU3Ek__BackingField_temp_0);
	bool unmarshaled_U3CActiveU3Ek__BackingField_temp_1 = false;
	unmarshaled_U3CActiveU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CActiveU3Ek__BackingField_1);
	unmarshaled.set_U3CActiveU3Ek__BackingField_1(unmarshaled_U3CActiveU3Ek__BackingField_temp_1);
	int32_t unmarshaled_U3CDeviceModeU3Ek__BackingField_temp_2 = 0;
	unmarshaled_U3CDeviceModeU3Ek__BackingField_temp_2 = marshaled.___U3CDeviceModeU3Ek__BackingField_2;
	unmarshaled.set_U3CDeviceModeU3Ek__BackingField_2(unmarshaled_U3CDeviceModeU3Ek__BackingField_temp_2);
}
// Conversion method for clean up from marshalling of: Vuforia.VuforiaRuntimeUtilities/CameraState
IL2CPP_EXTERN_C void CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshal_com_cleanup(CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF_marshaled_com& marshaled)
{
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities_CameraState::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraState_get_Initialized_m36A128FEC4532F39825D7D8C414C1E23C4AFB201 (CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CInitializedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool CameraState_get_Initialized_m36A128FEC4532F39825D7D8C414C1E23C4AFB201_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * _thisAdjusted = reinterpret_cast<CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF *>(__this + _offset);
	return CameraState_get_Initialized_m36A128FEC4532F39825D7D8C414C1E23C4AFB201_inline(_thisAdjusted, method);
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities_CameraState::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraState_get_Active_m419DDB2A2FF524F188F45D718B63060CFEDDE6CA (CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CActiveU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool CameraState_get_Active_m419DDB2A2FF524F188F45D718B63060CFEDDE6CA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * _thisAdjusted = reinterpret_cast<CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF *>(__this + _offset);
	return CameraState_get_Active_m419DDB2A2FF524F188F45D718B63060CFEDDE6CA_inline(_thisAdjusted, method);
}
// Vuforia.CameraDevice_CameraDeviceMode Vuforia.VuforiaRuntimeUtilities_CameraState::get_DeviceMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraState_get_DeviceMode_mEA52A27F35F8447EEACE54CFEE9E5808BDF30C47 (CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDeviceModeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t CameraState_get_DeviceMode_mEA52A27F35F8447EEACE54CFEE9E5808BDF30C47_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * _thisAdjusted = reinterpret_cast<CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF *>(__this + _offset);
	return CameraState_get_DeviceMode_mEA52A27F35F8447EEACE54CFEE9E5808BDF30C47_inline(_thisAdjusted, method);
}
// System.Void Vuforia.VuforiaRuntimeUtilities_CameraState::.ctor(System.Boolean,System.Boolean,Vuforia.CameraDevice_CameraDeviceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m8BF92C5942956EBEC72D5AAEC73E95EDD2098ECD (CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * __this, bool ___initialized0, bool ___active1, int32_t ___deviceMode2, const RuntimeMethod* method)
{
	{
		bool L_0 = ___initialized0;
		__this->set_U3CInitializedU3Ek__BackingField_0(L_0);
		bool L_1 = ___active1;
		__this->set_U3CActiveU3Ek__BackingField_1(L_1);
		int32_t L_2 = ___deviceMode2;
		__this->set_U3CDeviceModeU3Ek__BackingField_2(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void CameraState__ctor_m8BF92C5942956EBEC72D5AAEC73E95EDD2098ECD_AdjustorThunk (RuntimeObject * __this, bool ___initialized0, bool ___active1, int32_t ___deviceMode2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * _thisAdjusted = reinterpret_cast<CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF *>(__this + _offset);
	CameraState__ctor_m8BF92C5942956EBEC72D5AAEC73E95EDD2098ECD(_thisAdjusted, ___initialized0, ___active1, ___deviceMode2, method);
}
// Vuforia.VuforiaRuntimeUtilities_CameraState Vuforia.VuforiaRuntimeUtilities_CameraState::get_UnInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF  CameraState_get_UnInitialized_mF0F619DFB3B6A0B1861CC34B56C5A9F60E7039C8 (const RuntimeMethod* method)
{
	CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF ));
		CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF  L_0 = V_0;
		return L_0;
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
// System.Void Vuforia.VuforiaRuntimeUtilities_GlobalVars::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalVars__cctor_m585000D3E7EEA2D54775926D4745AAFB41031723 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlobalVars__cctor_m585000D3E7EEA2D54775926D4745AAFB41031723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral91990DABEAF336AD834D412CBF8BA4DF935306D1);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral91990DABEAF336AD834D412CBF8BA4DF935306D1);
		String_t* L_3 = PosixPath_Join_m8222BA9A8AE495CD465DD1BF7EE77A9B665C6712(L_2, /*hidden argument*/NULL);
		((GlobalVars_t9BC2F6C729275A1A47758C9B846050AC3FE2FD82_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVars_t9BC2F6C729275A1A47758C9B846050AC3FE2FD82_il2cpp_TypeInfo_var))->set_GLTF_ASSET_LOCATION_7(L_3);
		((GlobalVars_t9BC2F6C729275A1A47758C9B846050AC3FE2FD82_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVars_t9BC2F6C729275A1A47758C9B846050AC3FE2FD82_il2cpp_TypeInfo_var))->set_MODEL_TARGET_DEVICE_TRACKER_WARNING_17(_stringLiteralBF0FE0C2A4D07B1801AF0EF5433861CE13A6E123);
		((GlobalVars_t9BC2F6C729275A1A47758C9B846050AC3FE2FD82_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVars_t9BC2F6C729275A1A47758C9B846050AC3FE2FD82_il2cpp_TypeInfo_var))->set_GROUND_PLANE_DEVICE_TRACKER_ERROR_18(_stringLiteral4EFBE76A627DACC84AF7A2FC703573DC1B4EE41F);
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
// System.Void Vuforia.WSAUnityPlayer_HoloLensApiImplementation::SetFocusPoint(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensApiImplementation_SetFocusPoint_m80FE612B6F6D04BD0740DDDAFE874640B200BA77 (HoloLensApiImplementation_t66C053D7B2CD2DEBF37631C79882A67BB1E41FF3 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal1, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___point0;
		HolographicSettings_SetFocusPointForFrame_m5F21C1B2E26F92A55334FC94150C71182925AC69(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.WSAUnityPlayer_HoloLensApiImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoloLensApiImplementation__ctor_m455BEE230D4157FC8BB2E06A05B7F27A1D04D266 (HoloLensApiImplementation_t66C053D7B2CD2DEBF37631C79882A67BB1E41FF3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.WebCamARController_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8D812FDA4BF579590EC136301DFFE0E8A2D22620 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m8D812FDA4BF579590EC136301DFFE0E8A2D22620_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457 * L_0 = (U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457 *)il2cpp_codegen_object_new(U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC412AC686DB3233841C34C02B729D149C4CD5BA9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.WebCamARController_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC412AC686DB3233841C34C02B729D149C4CD5BA9 (U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Vuforia.IWebCamTexAdaptor Vuforia.WebCamARController_<>c::<.ctor>b__6_0(System.String,Vuforia.WebCamProfile_ProfileData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_ctorU3Eb__6_0_mF08B2FBEFEB091EE519697BCBBE2C44D49230FB3 (U3CU3Ec_t48BC66624B9A9664B4733963B7E71429E289F457 * __this, String_t* ___name0, ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02  ___profileData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_ctorU3Eb__6_0_mF08B2FBEFEB091EE519697BCBBE2C44D49230FB3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02  L_1 = ___profileData1;
		WebCamTexAdaptor_tBA53CE26A2424E7D165C57C53246CC77BA8C9F5A * L_2 = (WebCamTexAdaptor_tBA53CE26A2424E7D165C57C53246CC77BA8C9F5A *)il2cpp_codegen_object_new(WebCamTexAdaptor_tBA53CE26A2424E7D165C57C53246CC77BA8C9F5A_il2cpp_TypeInfo_var);
		WebCamTexAdaptor__ctor_m3DEBE36A78C47FDAD7153BF16702447A0D1ECD8E(L_2, L_0, L_1, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4_marshal_pinvoke(const ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4& unmarshaled, ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
IL2CPP_EXTERN_C void ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4_marshal_pinvoke_back(const ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4_marshaled_pinvoke& marshaled, ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4_marshal_pinvoke_cleanup(ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4_marshal_com(const ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4& unmarshaled, ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4_marshaled_com& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
IL2CPP_EXTERN_C void ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4_marshal_com_back(const ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4_marshaled_com& marshaled, ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4_marshal_com_cleanup(ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4_marshaled_com& marshaled)
{
}
// System.Void Vuforia.WebCamProfile_ProfileCollection::.ctor(Vuforia.WebCamProfile_ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile_ProfileData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileCollection__ctor_m29691C3FF9AC6BDD8051D7A5EDD9B9CDED9CC64C (ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4 * __this, ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02  ___defaultProfile0, Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7 * ___profiles1, const RuntimeMethod* method)
{
	{
		ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02  L_0 = ___defaultProfile0;
		__this->set_DefaultProfile_0(L_0);
		Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7 * L_1 = ___profiles1;
		__this->set_Profiles_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void ProfileCollection__ctor_m29691C3FF9AC6BDD8051D7A5EDD9B9CDED9CC64C_AdjustorThunk (RuntimeObject * __this, ProfileData_tB24B68710ED3CB2C48F5D9604F106BD656427C02  ___defaultProfile0, Dictionary_2_tE226CB50EB62B4D147530539E06885C24CC9D2D7 * ___profiles1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4 * _thisAdjusted = reinterpret_cast<ProfileCollection_t5D73C3F0DF4D4F0207DD03F6AA6CACBC6A35C2F4 *>(__this + _offset);
	ProfileCollection__ctor_m29691C3FF9AC6BDD8051D7A5EDD9B9CDED9CC64C(_thisAdjusted, ___defaultProfile0, ___profiles1, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * VuforiaConfiguration_get_Vuforia_mEB558CD22BC18D4B63BCA8032AB0EA612A4F2B4B_inline (VuforiaConfiguration_t3AD456C25B0603885C4C96B0BF4A0D00866C44FF * __this, const RuntimeMethod* method)
{
	{
		GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * L_0 = __this->get_vuforia_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_Version_m68B4127AD4C948EA5F64750DDC21A46CD2A054D5_inline (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_version_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_EULAAcceptedVersions_m2FDD938A909FD6361210CE818C49CC29A100D7C1_inline (GenericVuforiaConfiguration_t9D09E6B85F9E0C96C1ED5108FD74FD277C119D36 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_eulaAcceptedVersions_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DataSetTrackableBehaviour_get_DataSetPath_m98D4BDDFB041326FB9FF049CF80B4860FAE11FE6_inline (DataSetTrackableBehaviour_t22B5898E13105BF1FDD0F2FF8DFAD40915992EEC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mDataSetPath_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ImageTargetBehaviour_get_ImageTarget_m7683DECAF07466DDB086BC7CD4E2C001AD1307C7_inline (ImageTargetBehaviour_tA0E1A79AB8BCF27E198922DC1A21CBE8F9794A9F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_mImageTarget_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VuMarkTargetResultData_get_status_mCD284EFD661F5B16DD618ED4C26C917AF06883C0_inline (VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_statusInteger_2();
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrackableResultData_get_Status_mDBB95D6BCF9D91F60DE3D7BB3F720A24FA4D3F6A_inline (TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_statusInteger_2();
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TrackableResultData_get_StatusInfo_m5CE7AC4AEFB0C6DF81A2D52054EE696B0B22B580_inline (TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_statusInfo_3();
		return (int32_t)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableResultData_set_Status_m52091082CBC8097402193F78B9A6FD02F05EB09E_inline (TrackableResultData_tC5F50C15D9A6F8B19E426CB8DAD22357FEE3CB87 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_statusInteger_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VuMarkTargetResultData_set_status_mFB2EA25B0B38ED536DEF19B78C1C111707252E6A_inline (VuMarkTargetResultData_tB67FD37859ECEF88E26DDD00D5BD8FB6FF1CB0AD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_statusInteger_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraState_get_Initialized_m36A128FEC4532F39825D7D8C414C1E23C4AFB201_inline (CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CInitializedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CameraState_get_Active_m419DDB2A2FF524F188F45D718B63060CFEDDE6CA_inline (CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CActiveU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CameraState_get_DeviceMode_mEA52A27F35F8447EEACE54CFEE9E5808BDF30C47_inline (CameraState_t8195DCDC3C0D710AEF0641403A87E674E286E0DF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDeviceModeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
