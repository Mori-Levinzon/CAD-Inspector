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
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// TMPro.FaceInfo_Legacy
struct FaceInfo_Legacy_t9002691F7DB46E42ADE3B69A8861C144379D192F;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// TMPro.KerningTable
struct KerningTable_t820628F74178B0781DBFFB55BF1277247047617D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_FontFeatureTable
struct TMP_FontFeatureTable_t4A06C31656BB8CB686657DC85E0179FA3D15E2F1;
// TMPro.TMP_InputField
struct TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_SpriteCharacter
struct TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE;
// TMPro.TMP_SpriteGlyph
struct TMP_SpriteGlyph_t5DF3D3BFFC0D0A72ABEBA3490F804B591BF1F25D;
// TMPro.TMP_Style
struct TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E;
// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// TMPro.TMP_InputField/<MouseDragOutsideRect>d__295
struct U3CMouseDragOutsideRectU3Ed__295_t6C65B9E078E16CC27711786EBD85596DBD82A51E;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC;
// TMPro.TMP_MaterialManager/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t90D02E79E3E79BCC0EF1C16D2A82823B153B9581;
// TMPro.TMP_MaterialManager/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t97E44E0822D2A972850C27A67A346E3DDD2C17CE;
// TMPro.TMP_MaterialManager/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t03B63B6E389DD5F625E9793691378A839FAC326A;
// TMPro.TMP_MaterialManager/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t4BAD2306B944E999201A036DD30881AC715151A7;
// TMPro.TMP_MaterialManager/FallbackMaterial
struct FallbackMaterial_t34F3811743F5B0EEF3F543CCF13DB3B8D467328D;
// TMPro.TMP_MaterialManager/MaskingMaterial
struct MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6;
// TMPro.TMP_Settings/LineBreakingTable
struct LineBreakingTable_t5E2CD902456D50AA9B0F9C64BCF16045E86D19F2;
// TMPro.TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7
struct U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F;
// TMPro.TMP_SpriteAsset/<>c
struct U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E;
// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteDataObject
struct SpriteDataObject_t9610506C3AD16488DFAF966EB77EB5B246F03398;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Char>
struct Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character>
struct Dictionary_2_t6BB43D0F158FE3B19E71F6F48A84283B5250E1B4;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph>
struct Dictionary_2_tDA5C03A58B5E004C6D454EF31BF9C5307FE785BE;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>
struct Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60;
// System.Func`2<TMPro.TMP_SpriteCharacter,System.UInt32>
struct Func_2_tBFAEAFC2F9FB8E112B1B64F551709A017C9D9A87;
// System.Func`2<TMPro.TMP_SpriteGlyph,System.UInt32>
struct Func_2_tCBDDA9D38F4DC72A500A2A63C0B30498DC5DE7EC;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5;
// System.Collections.Generic.HashSet`1<System.UInt32>
struct HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B;
// System.Collections.Generic.List`1<TMPro.TMP_Character>
struct List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8;
// System.Collections.Generic.List`1<TMPro.TMP_FontAsset>
struct List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD;
// System.Collections.Generic.List`1<TMPro.TMP_Glyph>
struct List_1_t3F387498A6DE374D972293A68DB91FDF1A530E2E;
// System.Collections.Generic.List`1<TMPro.TMP_Sprite>
struct List_1_tF6EAF0B1BB91EA856A5893AC3A160A3B76E5BB67;
// System.Collections.Generic.List`1<TMPro.TMP_SpriteAsset>
struct List_1_tD057592B5C6E2EF6CBE5ADC501E5D58919E8B364;
// System.Collections.Generic.List`1<TMPro.TMP_SpriteCharacter>
struct List_1_t7850FCF22796079854614A9268CE558E34108A02;
// System.Collections.Generic.List`1<TMPro.TMP_SpriteGlyph>
struct List_1_tF7848685CB961B42606831D4C30E1C31069D91C8;
// System.Collections.Generic.List`1<TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame>
struct List_1_t73173DC394C38388B3BABA529B3B0BB5B548F5F4;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph>
struct List_1_tA740960861E81663EBF03A56DE52E25A9283E954;
// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>
struct List_1_tE870449A6BC21548542BC92F18B284004FA8668A;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityEvent`1<System.Int32Enum>
struct UnityEvent_1_tE94A30F9AFE4AA4FC678798F316885AAF982CE71;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0;
// UnityEngine.Events.UnityEvent`1<UnityEngine.TouchScreenKeyboard/Status>
struct UnityEvent_1_tE9C9315564F7F60781AFA1CEF49651315635AD53;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>
struct UnityEvent_3_t148E7A33D4F13377D0B9BD5BF04B858C35574612;
// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.TextCore.Glyph
struct Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// TMPro.TMP_FontWeightPair[]
struct TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC;
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D;
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119;
// TMPro.TMP_PageInfo[]
struct TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F;
// TMPro.TMP_RichTextTagStack`1<System.Int32>[]
struct TMP_RichTextTagStack_1U5BU5D_tDC5FDED7B7089AE94C4A4C72E33F22CBBD48BA88;
// TMPro.TMP_SpriteCharacter[]
struct TMP_SpriteCharacterU5BU5D_t55AB872B8C50A4CDE3E17824AEA0864E157BBAAC;
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;

IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral35855F15E9EF2CB3744D0B38C366EE3464289E65;
IL2CPP_EXTERN_C String_t* _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85;
IL2CPP_EXTERN_C String_t* _stringLiteral3F178296412650029A46BF49F4A367936D3796A2;
IL2CPP_EXTERN_C String_t* _stringLiteral4807BC6986CBA743F29DC7F522B791C3E1B44BEA;
IL2CPP_EXTERN_C String_t* _stringLiteral4ECA4ACF6B856BD63138D010DEA72B85D6666ABB;
IL2CPP_EXTERN_C String_t* _stringLiteral6A2733A2367E08485E175227A3FA346E47CB518F;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF819DF8D473C718C6506E487FA6CA7A7E38BBA0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m33542439372B5C0A010EF47E4A0EFFF2C288224F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoSpriteAnimationInternalU3Ed__7_System_Collections_IEnumerator_Reset_mF7642B8A220BF177AE66DB1DBC15777E278CAD4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMouseDragOutsideRectU3Ed__295_System_Collections_IEnumerator_Reset_m0A8B67F951F8FD3ADFC9BC61EB4BE9D0216F5655_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m6BE511C6E228D223E41574F135EAC66A848F6E26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3__ctor_m0CD9C7A9A556BDC525BE6B44F7EF5F51891E2390_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t OnChangeEvent__ctor_m0351D16DCB67E41A698902ECA7B0926B5FABF7D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnValidateInput_BeginInvoke_mE5AB68032F4BE249936D9C0283F1D34CDF83824D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SelectionEvent__ctor_mCBCB35F6F1EFCCD2D0ECA97066D8F4BA22E7F637_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpriteFrame_ToString_m0E0107F6FBE23F147D1E8069012C4087085976C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpriteSize_ToString_m2F7E10FDEB62E277224D7C0BE6F2CA8284A5B5F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubmitEvent__ctor_m51C949BEA5B2C49E33BC7E1CCFD03DAFB4DF321F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TextSelectionEvent__ctor_mEE3D48EF849928ABE42D5B5B062CE0C21031E496_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TouchScreenKeyboardEvent__ctor_m7F7C5E6175EFA4192E67991C475EBC440BEC6C5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDoSpriteAnimationInternalU3Ed__7_MoveNext_mB6F9E521DD53C25FD68F5884CCB51DD5101823D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDoSpriteAnimationInternalU3Ed__7_System_Collections_IEnumerator_Reset_mF7642B8A220BF177AE66DB1DBC15777E278CAD4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CMouseDragOutsideRectU3Ed__295_MoveNext_mFCC0BA67155700BFEAE1C2E497CEF76CC2280BA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CMouseDragOutsideRectU3Ed__295_System_Collections_IEnumerator_Reset_m0A8B67F951F8FD3ADFC9BC61EB4BE9D0216F5655_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass10_0_U3CGetBaseMaterialU3Eb__0_m0D51BA4AAE6670C8FDBF05C7756C816F50B7CC00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass12_0_U3CAddMaskingMaterialU3Eb__0_m2602E3308732D97A558050078AF5F08B6731330B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass13_0_U3CRemoveStencilMaterialU3Eb__0_mD7D257F7700D89B24D6780C1DDB236DF6F827223_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass14_0_U3CReleaseBaseMaterialU3Eb__0_mDC9D1A56F632BE1CC73F7F73F711A369650CD0DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mA96094764ECB02A5E90C3ADB78563AC3FAE97581_MetadataUsageId;
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ;
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ;
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
struct TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

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


// System.Collections.Generic.List`1<TMPro.TMP_SpriteCharacter>
struct  List_1_t7850FCF22796079854614A9268CE558E34108A02  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TMP_SpriteCharacterU5BU5D_t55AB872B8C50A4CDE3E17824AEA0864E157BBAAC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7850FCF22796079854614A9268CE558E34108A02, ____items_1)); }
	inline TMP_SpriteCharacterU5BU5D_t55AB872B8C50A4CDE3E17824AEA0864E157BBAAC* get__items_1() const { return ____items_1; }
	inline TMP_SpriteCharacterU5BU5D_t55AB872B8C50A4CDE3E17824AEA0864E157BBAAC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TMP_SpriteCharacterU5BU5D_t55AB872B8C50A4CDE3E17824AEA0864E157BBAAC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7850FCF22796079854614A9268CE558E34108A02, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7850FCF22796079854614A9268CE558E34108A02, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7850FCF22796079854614A9268CE558E34108A02, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7850FCF22796079854614A9268CE558E34108A02_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TMP_SpriteCharacterU5BU5D_t55AB872B8C50A4CDE3E17824AEA0864E157BBAAC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7850FCF22796079854614A9268CE558E34108A02_StaticFields, ____emptyArray_5)); }
	inline TMP_SpriteCharacterU5BU5D_t55AB872B8C50A4CDE3E17824AEA0864E157BBAAC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TMP_SpriteCharacterU5BU5D_t55AB872B8C50A4CDE3E17824AEA0864E157BBAAC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TMP_SpriteCharacterU5BU5D_t55AB872B8C50A4CDE3E17824AEA0864E157BBAAC* value)
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

// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteDataObject
struct  SpriteDataObject_t9610506C3AD16488DFAF966EB77EB5B246F03398  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_Frame> TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteDataObject::frames
	List_1_t73173DC394C38388B3BABA529B3B0BB5B548F5F4 * ___frames_0;

public:
	inline static int32_t get_offset_of_frames_0() { return static_cast<int32_t>(offsetof(SpriteDataObject_t9610506C3AD16488DFAF966EB77EB5B246F03398, ___frames_0)); }
	inline List_1_t73173DC394C38388B3BABA529B3B0BB5B548F5F4 * get_frames_0() const { return ___frames_0; }
	inline List_1_t73173DC394C38388B3BABA529B3B0BB5B548F5F4 ** get_address_of_frames_0() { return &___frames_0; }
	inline void set_frames_0(List_1_t73173DC394C38388B3BABA529B3B0BB5B548F5F4 * value)
	{
		___frames_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frames_0), (void*)value);
	}
};


// TMPro.TMP_InputField_<MouseDragOutsideRect>d__295
struct  U3CMouseDragOutsideRectU3Ed__295_t6C65B9E078E16CC27711786EBD85596DBD82A51E  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TMP_InputField_<MouseDragOutsideRect>d__295::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_InputField_<MouseDragOutsideRect>d__295::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.TMP_InputField TMPro.TMP_InputField_<MouseDragOutsideRect>d__295::<>4__this
	TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * ___U3CU3E4__this_2;
	// UnityEngine.EventSystems.PointerEventData TMPro.TMP_InputField_<MouseDragOutsideRect>d__295::eventData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__295_t6C65B9E078E16CC27711786EBD85596DBD82A51E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__295_t6C65B9E078E16CC27711786EBD85596DBD82A51E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__295_t6C65B9E078E16CC27711786EBD85596DBD82A51E, ___U3CU3E4__this_2)); }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_eventData_3() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__295_t6C65B9E078E16CC27711786EBD85596DBD82A51E, ___eventData_3)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventData_3() const { return ___eventData_3; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventData_3() { return &___eventData_3; }
	inline void set_eventData_3(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_3), (void*)value);
	}
};


// TMPro.TMP_MaterialManager_<>c__DisplayClass10_0
struct  U3CU3Ec__DisplayClass10_0_t90D02E79E3E79BCC0EF1C16D2A82823B153B9581  : public RuntimeObject
{
public:
	// UnityEngine.Material TMPro.TMP_MaterialManager_<>c__DisplayClass10_0::stencilMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___stencilMaterial_0;

public:
	inline static int32_t get_offset_of_stencilMaterial_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t90D02E79E3E79BCC0EF1C16D2A82823B153B9581, ___stencilMaterial_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_stencilMaterial_0() const { return ___stencilMaterial_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_stencilMaterial_0() { return &___stencilMaterial_0; }
	inline void set_stencilMaterial_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___stencilMaterial_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stencilMaterial_0), (void*)value);
	}
};


// TMPro.TMP_MaterialManager_<>c__DisplayClass12_0
struct  U3CU3Ec__DisplayClass12_0_t97E44E0822D2A972850C27A67A346E3DDD2C17CE  : public RuntimeObject
{
public:
	// UnityEngine.Material TMPro.TMP_MaterialManager_<>c__DisplayClass12_0::stencilMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___stencilMaterial_0;

public:
	inline static int32_t get_offset_of_stencilMaterial_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t97E44E0822D2A972850C27A67A346E3DDD2C17CE, ___stencilMaterial_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_stencilMaterial_0() const { return ___stencilMaterial_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_stencilMaterial_0() { return &___stencilMaterial_0; }
	inline void set_stencilMaterial_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___stencilMaterial_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stencilMaterial_0), (void*)value);
	}
};


// TMPro.TMP_MaterialManager_<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_t03B63B6E389DD5F625E9793691378A839FAC326A  : public RuntimeObject
{
public:
	// UnityEngine.Material TMPro.TMP_MaterialManager_<>c__DisplayClass13_0::stencilMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___stencilMaterial_0;

public:
	inline static int32_t get_offset_of_stencilMaterial_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t03B63B6E389DD5F625E9793691378A839FAC326A, ___stencilMaterial_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_stencilMaterial_0() const { return ___stencilMaterial_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_stencilMaterial_0() { return &___stencilMaterial_0; }
	inline void set_stencilMaterial_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___stencilMaterial_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stencilMaterial_0), (void*)value);
	}
};


// TMPro.TMP_MaterialManager_<>c__DisplayClass14_0
struct  U3CU3Ec__DisplayClass14_0_t4BAD2306B944E999201A036DD30881AC715151A7  : public RuntimeObject
{
public:
	// UnityEngine.Material TMPro.TMP_MaterialManager_<>c__DisplayClass14_0::baseMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___baseMaterial_0;

public:
	inline static int32_t get_offset_of_baseMaterial_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t4BAD2306B944E999201A036DD30881AC715151A7, ___baseMaterial_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_baseMaterial_0() const { return ___baseMaterial_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_baseMaterial_0() { return &___baseMaterial_0; }
	inline void set_baseMaterial_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___baseMaterial_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseMaterial_0), (void*)value);
	}
};


// TMPro.TMP_MaterialManager_FallbackMaterial
struct  FallbackMaterial_t34F3811743F5B0EEF3F543CCF13DB3B8D467328D  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TMP_MaterialManager_FallbackMaterial::baseID
	int32_t ___baseID_0;
	// UnityEngine.Material TMPro.TMP_MaterialManager_FallbackMaterial::baseMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___baseMaterial_1;
	// System.Int64 TMPro.TMP_MaterialManager_FallbackMaterial::fallbackID
	int64_t ___fallbackID_2;
	// UnityEngine.Material TMPro.TMP_MaterialManager_FallbackMaterial::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_3;
	// System.Int32 TMPro.TMP_MaterialManager_FallbackMaterial::count
	int32_t ___count_4;

public:
	inline static int32_t get_offset_of_baseID_0() { return static_cast<int32_t>(offsetof(FallbackMaterial_t34F3811743F5B0EEF3F543CCF13DB3B8D467328D, ___baseID_0)); }
	inline int32_t get_baseID_0() const { return ___baseID_0; }
	inline int32_t* get_address_of_baseID_0() { return &___baseID_0; }
	inline void set_baseID_0(int32_t value)
	{
		___baseID_0 = value;
	}

	inline static int32_t get_offset_of_baseMaterial_1() { return static_cast<int32_t>(offsetof(FallbackMaterial_t34F3811743F5B0EEF3F543CCF13DB3B8D467328D, ___baseMaterial_1)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_baseMaterial_1() const { return ___baseMaterial_1; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_baseMaterial_1() { return &___baseMaterial_1; }
	inline void set_baseMaterial_1(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___baseMaterial_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseMaterial_1), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackID_2() { return static_cast<int32_t>(offsetof(FallbackMaterial_t34F3811743F5B0EEF3F543CCF13DB3B8D467328D, ___fallbackID_2)); }
	inline int64_t get_fallbackID_2() const { return ___fallbackID_2; }
	inline int64_t* get_address_of_fallbackID_2() { return &___fallbackID_2; }
	inline void set_fallbackID_2(int64_t value)
	{
		___fallbackID_2 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_3() { return static_cast<int32_t>(offsetof(FallbackMaterial_t34F3811743F5B0EEF3F543CCF13DB3B8D467328D, ___fallbackMaterial_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_3() const { return ___fallbackMaterial_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_3() { return &___fallbackMaterial_3; }
	inline void set_fallbackMaterial_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_3), (void*)value);
	}

	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(FallbackMaterial_t34F3811743F5B0EEF3F543CCF13DB3B8D467328D, ___count_4)); }
	inline int32_t get_count_4() const { return ___count_4; }
	inline int32_t* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(int32_t value)
	{
		___count_4 = value;
	}
};


// TMPro.TMP_MaterialManager_MaskingMaterial
struct  MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6  : public RuntimeObject
{
public:
	// UnityEngine.Material TMPro.TMP_MaterialManager_MaskingMaterial::baseMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___baseMaterial_0;
	// UnityEngine.Material TMPro.TMP_MaterialManager_MaskingMaterial::stencilMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___stencilMaterial_1;
	// System.Int32 TMPro.TMP_MaterialManager_MaskingMaterial::count
	int32_t ___count_2;
	// System.Int32 TMPro.TMP_MaterialManager_MaskingMaterial::stencilID
	int32_t ___stencilID_3;

public:
	inline static int32_t get_offset_of_baseMaterial_0() { return static_cast<int32_t>(offsetof(MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6, ___baseMaterial_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_baseMaterial_0() const { return ___baseMaterial_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_baseMaterial_0() { return &___baseMaterial_0; }
	inline void set_baseMaterial_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___baseMaterial_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseMaterial_0), (void*)value);
	}

	inline static int32_t get_offset_of_stencilMaterial_1() { return static_cast<int32_t>(offsetof(MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6, ___stencilMaterial_1)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_stencilMaterial_1() const { return ___stencilMaterial_1; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_stencilMaterial_1() { return &___stencilMaterial_1; }
	inline void set_stencilMaterial_1(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___stencilMaterial_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stencilMaterial_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_stencilID_3() { return static_cast<int32_t>(offsetof(MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6, ___stencilID_3)); }
	inline int32_t get_stencilID_3() const { return ___stencilID_3; }
	inline int32_t* get_address_of_stencilID_3() { return &___stencilID_3; }
	inline void set_stencilID_3(int32_t value)
	{
		___stencilID_3 = value;
	}
};


// TMPro.TMP_Settings_LineBreakingTable
struct  LineBreakingTable_t5E2CD902456D50AA9B0F9C64BCF16045E86D19F2  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Char> TMPro.TMP_Settings_LineBreakingTable::leadingCharacters
	Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * ___leadingCharacters_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Char> TMPro.TMP_Settings_LineBreakingTable::followingCharacters
	Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * ___followingCharacters_1;

public:
	inline static int32_t get_offset_of_leadingCharacters_0() { return static_cast<int32_t>(offsetof(LineBreakingTable_t5E2CD902456D50AA9B0F9C64BCF16045E86D19F2, ___leadingCharacters_0)); }
	inline Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * get_leadingCharacters_0() const { return ___leadingCharacters_0; }
	inline Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 ** get_address_of_leadingCharacters_0() { return &___leadingCharacters_0; }
	inline void set_leadingCharacters_0(Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * value)
	{
		___leadingCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leadingCharacters_0), (void*)value);
	}

	inline static int32_t get_offset_of_followingCharacters_1() { return static_cast<int32_t>(offsetof(LineBreakingTable_t5E2CD902456D50AA9B0F9C64BCF16045E86D19F2, ___followingCharacters_1)); }
	inline Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * get_followingCharacters_1() const { return ___followingCharacters_1; }
	inline Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 ** get_address_of_followingCharacters_1() { return &___followingCharacters_1; }
	inline void set_followingCharacters_1(Dictionary_2_tB8FA8FEFBC38630BF40B59A6B474816F30D29B23 * value)
	{
		___followingCharacters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___followingCharacters_1), (void*)value);
	}
};


// TMPro.TMP_SpriteAsset_<>c
struct  U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E_StaticFields
{
public:
	// TMPro.TMP_SpriteAsset_<>c TMPro.TMP_SpriteAsset_<>c::<>9
	U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E * ___U3CU3E9_0;
	// System.Func`2<TMPro.TMP_SpriteGlyph,System.UInt32> TMPro.TMP_SpriteAsset_<>c::<>9__36_0
	Func_2_tCBDDA9D38F4DC72A500A2A63C0B30498DC5DE7EC * ___U3CU3E9__36_0_1;
	// System.Func`2<TMPro.TMP_SpriteCharacter,System.UInt32> TMPro.TMP_SpriteAsset_<>c::<>9__37_0
	Func_2_tBFAEAFC2F9FB8E112B1B64F551709A017C9D9A87 * ___U3CU3E9__37_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E_StaticFields, ___U3CU3E9__36_0_1)); }
	inline Func_2_tCBDDA9D38F4DC72A500A2A63C0B30498DC5DE7EC * get_U3CU3E9__36_0_1() const { return ___U3CU3E9__36_0_1; }
	inline Func_2_tCBDDA9D38F4DC72A500A2A63C0B30498DC5DE7EC ** get_address_of_U3CU3E9__36_0_1() { return &___U3CU3E9__36_0_1; }
	inline void set_U3CU3E9__36_0_1(Func_2_tCBDDA9D38F4DC72A500A2A63C0B30498DC5DE7EC * value)
	{
		___U3CU3E9__36_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E_StaticFields, ___U3CU3E9__37_0_2)); }
	inline Func_2_tBFAEAFC2F9FB8E112B1B64F551709A017C9D9A87 * get_U3CU3E9__37_0_2() const { return ___U3CU3E9__37_0_2; }
	inline Func_2_tBFAEAFC2F9FB8E112B1B64F551709A017C9D9A87 ** get_address_of_U3CU3E9__37_0_2() { return &___U3CU3E9__37_0_2; }
	inline void set_U3CU3E9__37_0_2(Func_2_tBFAEAFC2F9FB8E112B1B64F551709A017C9D9A87 * value)
	{
		___U3CU3E9__37_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_0_2), (void*)value);
	}
};


// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
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


// TMPro.FontAssetCreationSettings
struct  FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1 
{
public:
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileName
	String_t* ___sourceFontFileName_0;
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileGUID
	String_t* ___sourceFontFileGUID_1;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSizeSamplingMode
	int32_t ___pointSizeSamplingMode_2;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSize
	int32_t ___pointSize_3;
	// System.Int32 TMPro.FontAssetCreationSettings::padding
	int32_t ___padding_4;
	// System.Int32 TMPro.FontAssetCreationSettings::packingMode
	int32_t ___packingMode_5;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasWidth
	int32_t ___atlasWidth_6;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasHeight
	int32_t ___atlasHeight_7;
	// System.Int32 TMPro.FontAssetCreationSettings::characterSetSelectionMode
	int32_t ___characterSetSelectionMode_8;
	// System.String TMPro.FontAssetCreationSettings::characterSequence
	String_t* ___characterSequence_9;
	// System.String TMPro.FontAssetCreationSettings::referencedFontAssetGUID
	String_t* ___referencedFontAssetGUID_10;
	// System.String TMPro.FontAssetCreationSettings::referencedTextAssetGUID
	String_t* ___referencedTextAssetGUID_11;
	// System.Int32 TMPro.FontAssetCreationSettings::fontStyle
	int32_t ___fontStyle_12;
	// System.Single TMPro.FontAssetCreationSettings::fontStyleModifier
	float ___fontStyleModifier_13;
	// System.Int32 TMPro.FontAssetCreationSettings::renderMode
	int32_t ___renderMode_14;
	// System.Boolean TMPro.FontAssetCreationSettings::includeFontFeatures
	bool ___includeFontFeatures_15;

public:
	inline static int32_t get_offset_of_sourceFontFileName_0() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___sourceFontFileName_0)); }
	inline String_t* get_sourceFontFileName_0() const { return ___sourceFontFileName_0; }
	inline String_t** get_address_of_sourceFontFileName_0() { return &___sourceFontFileName_0; }
	inline void set_sourceFontFileName_0(String_t* value)
	{
		___sourceFontFileName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceFontFileName_0), (void*)value);
	}

	inline static int32_t get_offset_of_sourceFontFileGUID_1() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___sourceFontFileGUID_1)); }
	inline String_t* get_sourceFontFileGUID_1() const { return ___sourceFontFileGUID_1; }
	inline String_t** get_address_of_sourceFontFileGUID_1() { return &___sourceFontFileGUID_1; }
	inline void set_sourceFontFileGUID_1(String_t* value)
	{
		___sourceFontFileGUID_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceFontFileGUID_1), (void*)value);
	}

	inline static int32_t get_offset_of_pointSizeSamplingMode_2() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___pointSizeSamplingMode_2)); }
	inline int32_t get_pointSizeSamplingMode_2() const { return ___pointSizeSamplingMode_2; }
	inline int32_t* get_address_of_pointSizeSamplingMode_2() { return &___pointSizeSamplingMode_2; }
	inline void set_pointSizeSamplingMode_2(int32_t value)
	{
		___pointSizeSamplingMode_2 = value;
	}

	inline static int32_t get_offset_of_pointSize_3() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___pointSize_3)); }
	inline int32_t get_pointSize_3() const { return ___pointSize_3; }
	inline int32_t* get_address_of_pointSize_3() { return &___pointSize_3; }
	inline void set_pointSize_3(int32_t value)
	{
		___pointSize_3 = value;
	}

	inline static int32_t get_offset_of_padding_4() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___padding_4)); }
	inline int32_t get_padding_4() const { return ___padding_4; }
	inline int32_t* get_address_of_padding_4() { return &___padding_4; }
	inline void set_padding_4(int32_t value)
	{
		___padding_4 = value;
	}

	inline static int32_t get_offset_of_packingMode_5() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___packingMode_5)); }
	inline int32_t get_packingMode_5() const { return ___packingMode_5; }
	inline int32_t* get_address_of_packingMode_5() { return &___packingMode_5; }
	inline void set_packingMode_5(int32_t value)
	{
		___packingMode_5 = value;
	}

	inline static int32_t get_offset_of_atlasWidth_6() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___atlasWidth_6)); }
	inline int32_t get_atlasWidth_6() const { return ___atlasWidth_6; }
	inline int32_t* get_address_of_atlasWidth_6() { return &___atlasWidth_6; }
	inline void set_atlasWidth_6(int32_t value)
	{
		___atlasWidth_6 = value;
	}

	inline static int32_t get_offset_of_atlasHeight_7() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___atlasHeight_7)); }
	inline int32_t get_atlasHeight_7() const { return ___atlasHeight_7; }
	inline int32_t* get_address_of_atlasHeight_7() { return &___atlasHeight_7; }
	inline void set_atlasHeight_7(int32_t value)
	{
		___atlasHeight_7 = value;
	}

	inline static int32_t get_offset_of_characterSetSelectionMode_8() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___characterSetSelectionMode_8)); }
	inline int32_t get_characterSetSelectionMode_8() const { return ___characterSetSelectionMode_8; }
	inline int32_t* get_address_of_characterSetSelectionMode_8() { return &___characterSetSelectionMode_8; }
	inline void set_characterSetSelectionMode_8(int32_t value)
	{
		___characterSetSelectionMode_8 = value;
	}

	inline static int32_t get_offset_of_characterSequence_9() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___characterSequence_9)); }
	inline String_t* get_characterSequence_9() const { return ___characterSequence_9; }
	inline String_t** get_address_of_characterSequence_9() { return &___characterSequence_9; }
	inline void set_characterSequence_9(String_t* value)
	{
		___characterSequence_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterSequence_9), (void*)value);
	}

	inline static int32_t get_offset_of_referencedFontAssetGUID_10() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___referencedFontAssetGUID_10)); }
	inline String_t* get_referencedFontAssetGUID_10() const { return ___referencedFontAssetGUID_10; }
	inline String_t** get_address_of_referencedFontAssetGUID_10() { return &___referencedFontAssetGUID_10; }
	inline void set_referencedFontAssetGUID_10(String_t* value)
	{
		___referencedFontAssetGUID_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___referencedFontAssetGUID_10), (void*)value);
	}

	inline static int32_t get_offset_of_referencedTextAssetGUID_11() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___referencedTextAssetGUID_11)); }
	inline String_t* get_referencedTextAssetGUID_11() const { return ___referencedTextAssetGUID_11; }
	inline String_t** get_address_of_referencedTextAssetGUID_11() { return &___referencedTextAssetGUID_11; }
	inline void set_referencedTextAssetGUID_11(String_t* value)
	{
		___referencedTextAssetGUID_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___referencedTextAssetGUID_11), (void*)value);
	}

	inline static int32_t get_offset_of_fontStyle_12() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___fontStyle_12)); }
	inline int32_t get_fontStyle_12() const { return ___fontStyle_12; }
	inline int32_t* get_address_of_fontStyle_12() { return &___fontStyle_12; }
	inline void set_fontStyle_12(int32_t value)
	{
		___fontStyle_12 = value;
	}

	inline static int32_t get_offset_of_fontStyleModifier_13() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___fontStyleModifier_13)); }
	inline float get_fontStyleModifier_13() const { return ___fontStyleModifier_13; }
	inline float* get_address_of_fontStyleModifier_13() { return &___fontStyleModifier_13; }
	inline void set_fontStyleModifier_13(float value)
	{
		___fontStyleModifier_13 = value;
	}

	inline static int32_t get_offset_of_renderMode_14() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___renderMode_14)); }
	inline int32_t get_renderMode_14() const { return ___renderMode_14; }
	inline int32_t* get_address_of_renderMode_14() { return &___renderMode_14; }
	inline void set_renderMode_14(int32_t value)
	{
		___renderMode_14 = value;
	}

	inline static int32_t get_offset_of_includeFontFeatures_15() { return static_cast<int32_t>(offsetof(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1, ___includeFontFeatures_15)); }
	inline bool get_includeFontFeatures_15() const { return ___includeFontFeatures_15; }
	inline bool* get_address_of_includeFontFeatures_15() { return &___includeFontFeatures_15; }
	inline void set_includeFontFeatures_15(bool value)
	{
		___includeFontFeatures_15 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshaled_pinvoke
{
	char* ___sourceFontFileName_0;
	char* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	char* ___characterSequence_9;
	char* ___referencedFontAssetGUID_10;
	char* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
};
// Native definition for COM marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1_marshaled_com
{
	Il2CppChar* ___sourceFontFileName_0;
	Il2CppChar* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	Il2CppChar* ___characterSequence_9;
	Il2CppChar* ___referencedFontAssetGUID_10;
	Il2CppChar* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
};

// TMPro.MaterialReference
struct  MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteFrame
struct  SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9 
{
public:
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteFrame::x
	float ___x_0;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteFrame::y
	float ___y_1;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteFrame::w
	float ___w_2;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteFrame::h
	float ___h_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_w_2() { return static_cast<int32_t>(offsetof(SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9, ___w_2)); }
	inline float get_w_2() const { return ___w_2; }
	inline float* get_address_of_w_2() { return &___w_2; }
	inline void set_w_2(float value)
	{
		___w_2 = value;
	}

	inline static int32_t get_offset_of_h_3() { return static_cast<int32_t>(offsetof(SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9, ___h_3)); }
	inline float get_h_3() const { return ___h_3; }
	inline float* get_address_of_h_3() { return &___h_3; }
	inline void set_h_3(float value)
	{
		___h_3 = value;
	}
};


// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteSize
struct  SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D 
{
public:
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteSize::w
	float ___w_0;
	// System.Single TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteSize::h
	float ___h_1;

public:
	inline static int32_t get_offset_of_w_0() { return static_cast<int32_t>(offsetof(SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D, ___w_0)); }
	inline float get_w_0() const { return ___w_0; }
	inline float* get_address_of_w_0() { return &___w_0; }
	inline void set_w_0(float value)
	{
		___w_0 = value;
	}

	inline static int32_t get_offset_of_h_1() { return static_cast<int32_t>(offsetof(SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D, ___h_1)); }
	inline float get_h_1() const { return ___h_1; }
	inline float* get_address_of_h_1() { return &___h_1; }
	inline void set_h_1(float value)
	{
		___h_1 = value;
	}
};


// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<System.Int32>
struct  TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::itemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___itemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666, ___itemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<System.Single>
struct  TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::itemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___itemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	float ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75, ___itemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75, ___m_DefaultItem_3)); }
	inline float get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline float* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(float value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient>
struct  TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::itemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___itemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961, ___m_DefaultItem_3)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_3), (void*)value);
	}
};


// TMPro.TMP_Text_CharacterSubstitution
struct  CharacterSubstitution_tDA217C96ED6B78235EF55ECECF09EEBD7B32156B 
{
public:
	// System.Int32 TMPro.TMP_Text_CharacterSubstitution::index
	int32_t ___index_0;
	// System.UInt32 TMPro.TMP_Text_CharacterSubstitution::unicode
	uint32_t ___unicode_1;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(CharacterSubstitution_tDA217C96ED6B78235EF55ECECF09EEBD7B32156B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_unicode_1() { return static_cast<int32_t>(offsetof(CharacterSubstitution_tDA217C96ED6B78235EF55ECECF09EEBD7B32156B, ___unicode_1)); }
	inline uint32_t get_unicode_1() const { return ___unicode_1; }
	inline uint32_t* get_address_of_unicode_1() { return &___unicode_1; }
	inline void set_unicode_1(uint32_t value)
	{
		___unicode_1 = value;
	}
};


// TMPro.TMP_Text_UnicodeChar
struct  UnicodeChar_t7C67F31D1AA3029C5AC96F50A8312DB6F9BB5B25 
{
public:
	// System.Int32 TMPro.TMP_Text_UnicodeChar::unicode
	int32_t ___unicode_0;
	// System.Int32 TMPro.TMP_Text_UnicodeChar::stringIndex
	int32_t ___stringIndex_1;
	// System.Int32 TMPro.TMP_Text_UnicodeChar::length
	int32_t ___length_2;

public:
	inline static int32_t get_offset_of_unicode_0() { return static_cast<int32_t>(offsetof(UnicodeChar_t7C67F31D1AA3029C5AC96F50A8312DB6F9BB5B25, ___unicode_0)); }
	inline int32_t get_unicode_0() const { return ___unicode_0; }
	inline int32_t* get_address_of_unicode_0() { return &___unicode_0; }
	inline void set_unicode_0(int32_t value)
	{
		___unicode_0 = value;
	}

	inline static int32_t get_offset_of_stringIndex_1() { return static_cast<int32_t>(offsetof(UnicodeChar_t7C67F31D1AA3029C5AC96F50A8312DB6F9BB5B25, ___stringIndex_1)); }
	inline int32_t get_stringIndex_1() const { return ___stringIndex_1; }
	inline int32_t* get_address_of_stringIndex_1() { return &___stringIndex_1; }
	inline void set_stringIndex_1(int32_t value)
	{
		___stringIndex_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(UnicodeChar_t7C67F31D1AA3029C5AC96F50A8312DB6F9BB5B25, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
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


// UnityEngine.Color32
struct  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.String>
struct  UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.TouchScreenKeyboard_Status>
struct  UnityEvent_1_tE9C9315564F7F60781AFA1CEF49651315635AD53  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tE9C9315564F7F60781AFA1CEF49651315635AD53, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct  UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE, ___m_InvokeArray_3)); }
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


// UnityEngine.TextCore.FaceInfo
struct  FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979 
{
public:
	// System.String UnityEngine.TextCore.FaceInfo::m_FamilyName
	String_t* ___m_FamilyName_0;
	// System.String UnityEngine.TextCore.FaceInfo::m_StyleName
	String_t* ___m_StyleName_1;
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_PointSize
	int32_t ___m_PointSize_2;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Scale
	float ___m_Scale_3;
	// System.Single UnityEngine.TextCore.FaceInfo::m_LineHeight
	float ___m_LineHeight_4;
	// System.Single UnityEngine.TextCore.FaceInfo::m_AscentLine
	float ___m_AscentLine_5;
	// System.Single UnityEngine.TextCore.FaceInfo::m_CapLine
	float ___m_CapLine_6;
	// System.Single UnityEngine.TextCore.FaceInfo::m_MeanLine
	float ___m_MeanLine_7;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Baseline
	float ___m_Baseline_8;
	// System.Single UnityEngine.TextCore.FaceInfo::m_DescentLine
	float ___m_DescentLine_9;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptOffset
	float ___m_SuperscriptOffset_10;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptSize
	float ___m_SuperscriptSize_11;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptOffset
	float ___m_SubscriptOffset_12;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptSize
	float ___m_SubscriptSize_13;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineOffset
	float ___m_UnderlineOffset_14;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineThickness
	float ___m_UnderlineThickness_15;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughOffset
	float ___m_StrikethroughOffset_16;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughThickness
	float ___m_StrikethroughThickness_17;
	// System.Single UnityEngine.TextCore.FaceInfo::m_TabWidth
	float ___m_TabWidth_18;

public:
	inline static int32_t get_offset_of_m_FamilyName_0() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_FamilyName_0)); }
	inline String_t* get_m_FamilyName_0() const { return ___m_FamilyName_0; }
	inline String_t** get_address_of_m_FamilyName_0() { return &___m_FamilyName_0; }
	inline void set_m_FamilyName_0(String_t* value)
	{
		___m_FamilyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FamilyName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StyleName_1() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_StyleName_1)); }
	inline String_t* get_m_StyleName_1() const { return ___m_StyleName_1; }
	inline String_t** get_address_of_m_StyleName_1() { return &___m_StyleName_1; }
	inline void set_m_StyleName_1(String_t* value)
	{
		___m_StyleName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointSize_2() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_PointSize_2)); }
	inline int32_t get_m_PointSize_2() const { return ___m_PointSize_2; }
	inline int32_t* get_address_of_m_PointSize_2() { return &___m_PointSize_2; }
	inline void set_m_PointSize_2(int32_t value)
	{
		___m_PointSize_2 = value;
	}

	inline static int32_t get_offset_of_m_Scale_3() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_Scale_3)); }
	inline float get_m_Scale_3() const { return ___m_Scale_3; }
	inline float* get_address_of_m_Scale_3() { return &___m_Scale_3; }
	inline void set_m_Scale_3(float value)
	{
		___m_Scale_3 = value;
	}

	inline static int32_t get_offset_of_m_LineHeight_4() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_LineHeight_4)); }
	inline float get_m_LineHeight_4() const { return ___m_LineHeight_4; }
	inline float* get_address_of_m_LineHeight_4() { return &___m_LineHeight_4; }
	inline void set_m_LineHeight_4(float value)
	{
		___m_LineHeight_4 = value;
	}

	inline static int32_t get_offset_of_m_AscentLine_5() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_AscentLine_5)); }
	inline float get_m_AscentLine_5() const { return ___m_AscentLine_5; }
	inline float* get_address_of_m_AscentLine_5() { return &___m_AscentLine_5; }
	inline void set_m_AscentLine_5(float value)
	{
		___m_AscentLine_5 = value;
	}

	inline static int32_t get_offset_of_m_CapLine_6() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_CapLine_6)); }
	inline float get_m_CapLine_6() const { return ___m_CapLine_6; }
	inline float* get_address_of_m_CapLine_6() { return &___m_CapLine_6; }
	inline void set_m_CapLine_6(float value)
	{
		___m_CapLine_6 = value;
	}

	inline static int32_t get_offset_of_m_MeanLine_7() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_MeanLine_7)); }
	inline float get_m_MeanLine_7() const { return ___m_MeanLine_7; }
	inline float* get_address_of_m_MeanLine_7() { return &___m_MeanLine_7; }
	inline void set_m_MeanLine_7(float value)
	{
		___m_MeanLine_7 = value;
	}

	inline static int32_t get_offset_of_m_Baseline_8() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_Baseline_8)); }
	inline float get_m_Baseline_8() const { return ___m_Baseline_8; }
	inline float* get_address_of_m_Baseline_8() { return &___m_Baseline_8; }
	inline void set_m_Baseline_8(float value)
	{
		___m_Baseline_8 = value;
	}

	inline static int32_t get_offset_of_m_DescentLine_9() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_DescentLine_9)); }
	inline float get_m_DescentLine_9() const { return ___m_DescentLine_9; }
	inline float* get_address_of_m_DescentLine_9() { return &___m_DescentLine_9; }
	inline void set_m_DescentLine_9(float value)
	{
		___m_DescentLine_9 = value;
	}

	inline static int32_t get_offset_of_m_SuperscriptOffset_10() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_SuperscriptOffset_10)); }
	inline float get_m_SuperscriptOffset_10() const { return ___m_SuperscriptOffset_10; }
	inline float* get_address_of_m_SuperscriptOffset_10() { return &___m_SuperscriptOffset_10; }
	inline void set_m_SuperscriptOffset_10(float value)
	{
		___m_SuperscriptOffset_10 = value;
	}

	inline static int32_t get_offset_of_m_SuperscriptSize_11() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_SuperscriptSize_11)); }
	inline float get_m_SuperscriptSize_11() const { return ___m_SuperscriptSize_11; }
	inline float* get_address_of_m_SuperscriptSize_11() { return &___m_SuperscriptSize_11; }
	inline void set_m_SuperscriptSize_11(float value)
	{
		___m_SuperscriptSize_11 = value;
	}

	inline static int32_t get_offset_of_m_SubscriptOffset_12() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_SubscriptOffset_12)); }
	inline float get_m_SubscriptOffset_12() const { return ___m_SubscriptOffset_12; }
	inline float* get_address_of_m_SubscriptOffset_12() { return &___m_SubscriptOffset_12; }
	inline void set_m_SubscriptOffset_12(float value)
	{
		___m_SubscriptOffset_12 = value;
	}

	inline static int32_t get_offset_of_m_SubscriptSize_13() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_SubscriptSize_13)); }
	inline float get_m_SubscriptSize_13() const { return ___m_SubscriptSize_13; }
	inline float* get_address_of_m_SubscriptSize_13() { return &___m_SubscriptSize_13; }
	inline void set_m_SubscriptSize_13(float value)
	{
		___m_SubscriptSize_13 = value;
	}

	inline static int32_t get_offset_of_m_UnderlineOffset_14() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_UnderlineOffset_14)); }
	inline float get_m_UnderlineOffset_14() const { return ___m_UnderlineOffset_14; }
	inline float* get_address_of_m_UnderlineOffset_14() { return &___m_UnderlineOffset_14; }
	inline void set_m_UnderlineOffset_14(float value)
	{
		___m_UnderlineOffset_14 = value;
	}

	inline static int32_t get_offset_of_m_UnderlineThickness_15() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_UnderlineThickness_15)); }
	inline float get_m_UnderlineThickness_15() const { return ___m_UnderlineThickness_15; }
	inline float* get_address_of_m_UnderlineThickness_15() { return &___m_UnderlineThickness_15; }
	inline void set_m_UnderlineThickness_15(float value)
	{
		___m_UnderlineThickness_15 = value;
	}

	inline static int32_t get_offset_of_m_StrikethroughOffset_16() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_StrikethroughOffset_16)); }
	inline float get_m_StrikethroughOffset_16() const { return ___m_StrikethroughOffset_16; }
	inline float* get_address_of_m_StrikethroughOffset_16() { return &___m_StrikethroughOffset_16; }
	inline void set_m_StrikethroughOffset_16(float value)
	{
		___m_StrikethroughOffset_16 = value;
	}

	inline static int32_t get_offset_of_m_StrikethroughThickness_17() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_StrikethroughThickness_17)); }
	inline float get_m_StrikethroughThickness_17() const { return ___m_StrikethroughThickness_17; }
	inline float* get_address_of_m_StrikethroughThickness_17() { return &___m_StrikethroughThickness_17; }
	inline void set_m_StrikethroughThickness_17(float value)
	{
		___m_StrikethroughThickness_17 = value;
	}

	inline static int32_t get_offset_of_m_TabWidth_18() { return static_cast<int32_t>(offsetof(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979, ___m_TabWidth_18)); }
	inline float get_m_TabWidth_18() const { return ___m_TabWidth_18; }
	inline float* get_address_of_m_TabWidth_18() { return &___m_TabWidth_18; }
	inline void set_m_TabWidth_18(float value)
	{
		___m_TabWidth_18 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshaled_pinvoke
{
	char* ___m_FamilyName_0;
	char* ___m_StyleName_1;
	int32_t ___m_PointSize_2;
	float ___m_Scale_3;
	float ___m_LineHeight_4;
	float ___m_AscentLine_5;
	float ___m_CapLine_6;
	float ___m_MeanLine_7;
	float ___m_Baseline_8;
	float ___m_DescentLine_9;
	float ___m_SuperscriptOffset_10;
	float ___m_SuperscriptSize_11;
	float ___m_SubscriptOffset_12;
	float ___m_SubscriptSize_13;
	float ___m_UnderlineOffset_14;
	float ___m_UnderlineThickness_15;
	float ___m_StrikethroughOffset_16;
	float ___m_StrikethroughThickness_17;
	float ___m_TabWidth_18;
};
// Native definition for COM marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979_marshaled_com
{
	Il2CppChar* ___m_FamilyName_0;
	Il2CppChar* ___m_StyleName_1;
	int32_t ___m_PointSize_2;
	float ___m_Scale_3;
	float ___m_LineHeight_4;
	float ___m_AscentLine_5;
	float ___m_CapLine_6;
	float ___m_MeanLine_7;
	float ___m_Baseline_8;
	float ___m_DescentLine_9;
	float ___m_SuperscriptOffset_10;
	float ___m_SuperscriptSize_11;
	float ___m_SubscriptOffset_12;
	float ___m_SubscriptSize_13;
	float ___m_UnderlineOffset_14;
	float ___m_UnderlineThickness_15;
	float ___m_StrikethroughOffset_16;
	float ___m_StrikethroughThickness_17;
	float ___m_TabWidth_18;
};

// UnityEngine.TextCore.GlyphMetrics
struct  GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B 
{
public:
	// System.Single UnityEngine.TextCore.GlyphMetrics::m_Width
	float ___m_Width_0;
	// System.Single UnityEngine.TextCore.GlyphMetrics::m_Height
	float ___m_Height_1;
	// System.Single UnityEngine.TextCore.GlyphMetrics::m_HorizontalBearingX
	float ___m_HorizontalBearingX_2;
	// System.Single UnityEngine.TextCore.GlyphMetrics::m_HorizontalBearingY
	float ___m_HorizontalBearingY_3;
	// System.Single UnityEngine.TextCore.GlyphMetrics::m_HorizontalAdvance
	float ___m_HorizontalAdvance_4;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B, ___m_Width_0)); }
	inline float get_m_Width_0() const { return ___m_Width_0; }
	inline float* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(float value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B, ___m_Height_1)); }
	inline float get_m_Height_1() const { return ___m_Height_1; }
	inline float* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(float value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalBearingX_2() { return static_cast<int32_t>(offsetof(GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B, ___m_HorizontalBearingX_2)); }
	inline float get_m_HorizontalBearingX_2() const { return ___m_HorizontalBearingX_2; }
	inline float* get_address_of_m_HorizontalBearingX_2() { return &___m_HorizontalBearingX_2; }
	inline void set_m_HorizontalBearingX_2(float value)
	{
		___m_HorizontalBearingX_2 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalBearingY_3() { return static_cast<int32_t>(offsetof(GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B, ___m_HorizontalBearingY_3)); }
	inline float get_m_HorizontalBearingY_3() const { return ___m_HorizontalBearingY_3; }
	inline float* get_address_of_m_HorizontalBearingY_3() { return &___m_HorizontalBearingY_3; }
	inline void set_m_HorizontalBearingY_3(float value)
	{
		___m_HorizontalBearingY_3 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAdvance_4() { return static_cast<int32_t>(offsetof(GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B, ___m_HorizontalAdvance_4)); }
	inline float get_m_HorizontalAdvance_4() const { return ___m_HorizontalAdvance_4; }
	inline float* get_address_of_m_HorizontalAdvance_4() { return &___m_HorizontalAdvance_4; }
	inline void set_m_HorizontalAdvance_4(float value)
	{
		___m_HorizontalAdvance_4 = value;
	}
};


// UnityEngine.TextCore.GlyphRect
struct  GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D 
{
public:
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.TextCore.GlyphRect::m_Height
	int32_t ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D, ___m_Width_2)); }
	inline int32_t get_m_Width_2() const { return ___m_Width_2; }
	inline int32_t* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(int32_t value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D, ___m_Height_3)); }
	inline int32_t get_m_Height_3() const { return ___m_Height_3; }
	inline int32_t* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(int32_t value)
	{
		___m_Height_3 = value;
	}
};

struct GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D_StaticFields
{
public:
	// UnityEngine.TextCore.GlyphRect UnityEngine.TextCore.GlyphRect::s_ZeroGlyphRect
	GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  ___s_ZeroGlyphRect_4;

public:
	inline static int32_t get_offset_of_s_ZeroGlyphRect_4() { return static_cast<int32_t>(offsetof(GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D_StaticFields, ___s_ZeroGlyphRect_4)); }
	inline GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  get_s_ZeroGlyphRect_4() const { return ___s_ZeroGlyphRect_4; }
	inline GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D * get_address_of_s_ZeroGlyphRect_4() { return &___s_ZeroGlyphRect_4; }
	inline void set_s_ZeroGlyphRect_4(GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  value)
	{
		___s_ZeroGlyphRect_4 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
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


// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
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

// TMPro.AtlasPopulationMode
struct  AtlasPopulationMode_t23261B68B33F6966CAB75B6F5162648F7F0F8999 
{
public:
	// System.Int32 TMPro.AtlasPopulationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AtlasPopulationMode_t23261B68B33F6966CAB75B6F5162648F7F0F8999, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.ColorMode
struct  ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Extents
struct  Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_2() const { return ___min_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_3() const { return ___max_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_3 = value;
	}
};

struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___zero_0)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_zero_0() const { return ___zero_0; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___uninitialized_1)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct  FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct  FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct  HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct  HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_Frame
struct  Frame_t277B57D2C572A3B179CEA0357869DB245F52128D 
{
public:
	// System.String TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_Frame::filename
	String_t* ___filename_0;
	// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteFrame TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_Frame::frame
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  ___frame_1;
	// System.Boolean TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_Frame::rotated
	bool ___rotated_2;
	// System.Boolean TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_Frame::trimmed
	bool ___trimmed_3;
	// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteFrame TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_Frame::spriteSourceSize
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  ___spriteSourceSize_4;
	// TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteSize TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_Frame::sourceSize
	SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D  ___sourceSize_5;
	// UnityEngine.Vector2 TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_Frame::pivot
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot_6;

public:
	inline static int32_t get_offset_of_filename_0() { return static_cast<int32_t>(offsetof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D, ___filename_0)); }
	inline String_t* get_filename_0() const { return ___filename_0; }
	inline String_t** get_address_of_filename_0() { return &___filename_0; }
	inline void set_filename_0(String_t* value)
	{
		___filename_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filename_0), (void*)value);
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D, ___frame_1)); }
	inline SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  get_frame_1() const { return ___frame_1; }
	inline SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9 * get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  value)
	{
		___frame_1 = value;
	}

	inline static int32_t get_offset_of_rotated_2() { return static_cast<int32_t>(offsetof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D, ___rotated_2)); }
	inline bool get_rotated_2() const { return ___rotated_2; }
	inline bool* get_address_of_rotated_2() { return &___rotated_2; }
	inline void set_rotated_2(bool value)
	{
		___rotated_2 = value;
	}

	inline static int32_t get_offset_of_trimmed_3() { return static_cast<int32_t>(offsetof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D, ___trimmed_3)); }
	inline bool get_trimmed_3() const { return ___trimmed_3; }
	inline bool* get_address_of_trimmed_3() { return &___trimmed_3; }
	inline void set_trimmed_3(bool value)
	{
		___trimmed_3 = value;
	}

	inline static int32_t get_offset_of_spriteSourceSize_4() { return static_cast<int32_t>(offsetof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D, ___spriteSourceSize_4)); }
	inline SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  get_spriteSourceSize_4() const { return ___spriteSourceSize_4; }
	inline SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9 * get_address_of_spriteSourceSize_4() { return &___spriteSourceSize_4; }
	inline void set_spriteSourceSize_4(SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  value)
	{
		___spriteSourceSize_4 = value;
	}

	inline static int32_t get_offset_of_sourceSize_5() { return static_cast<int32_t>(offsetof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D, ___sourceSize_5)); }
	inline SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D  get_sourceSize_5() const { return ___sourceSize_5; }
	inline SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D * get_address_of_sourceSize_5() { return &___sourceSize_5; }
	inline void set_sourceSize_5(SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D  value)
	{
		___sourceSize_5 = value;
	}

	inline static int32_t get_offset_of_pivot_6() { return static_cast<int32_t>(offsetof(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D, ___pivot_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_pivot_6() const { return ___pivot_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_pivot_6() { return &___pivot_6; }
	inline void set_pivot_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___pivot_6 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
struct Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshaled_pinvoke
{
	char* ___filename_0;
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  ___frame_1;
	int32_t ___rotated_2;
	int32_t ___trimmed_3;
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  ___spriteSourceSize_4;
	SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D  ___sourceSize_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot_6;
};
// Native definition for COM marshalling of TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
struct Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshaled_com
{
	Il2CppChar* ___filename_0;
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  ___frame_1;
	int32_t ___rotated_2;
	int32_t ___trimmed_3;
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  ___spriteSourceSize_4;
	SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D  ___sourceSize_5;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot_6;
};

// TMPro.TMP_InputField_CharacterValidation
struct  CharacterValidation_t08E980563A3EBE46E8507BD2BC8F4E865EE0DDB3 
{
public:
	// System.Int32 TMPro.TMP_InputField_CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t08E980563A3EBE46E8507BD2BC8F4E865EE0DDB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_ContentType
struct  ContentType_t3496CF3DD8D3F13E61A7A5D5D6BAC0B339D16C4D 
{
public:
	// System.Int32 TMPro.TMP_InputField_ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t3496CF3DD8D3F13E61A7A5D5D6BAC0B339D16C4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_EditState
struct  EditState_tF04C02DEB4A44FFD870596EE7F2958DF44EA5468 
{
public:
	// System.Int32 TMPro.TMP_InputField_EditState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EditState_tF04C02DEB4A44FFD870596EE7F2958DF44EA5468, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_InputType
struct  InputType_tBE7A7257C7830BF7F2CBF8D2F612B497DEB8AC95 
{
public:
	// System.Int32 TMPro.TMP_InputField_InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_tBE7A7257C7830BF7F2CBF8D2F612B497DEB8AC95, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_LineType
struct  LineType_tCC7BCF3286F44F2AEEBF998AEDB21F4B353569FC 
{
public:
	// System.Int32 TMPro.TMP_InputField_LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_tCC7BCF3286F44F2AEEBF998AEDB21F4B353569FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_InputField_OnChangeEvent
struct  OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// TMPro.TMP_InputField_SelectionEvent
struct  SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// TMPro.TMP_InputField_SubmitEvent
struct  SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// TMPro.TMP_InputField_TextSelectionEvent
struct  TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215  : public UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE
{
public:

public:
};


// TMPro.TMP_InputField_TouchScreenKeyboardEvent
struct  TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC  : public UnityEvent_1_tE9C9315564F7F60781AFA1CEF49651315635AD53
{
public:

public:
};


// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference>
struct  TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::itemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___itemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718, ___m_DefaultItem_3)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}
};


// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32>
struct  TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::itemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___itemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59, ___itemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59, ___m_DefaultItem_3)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_Text_TextInputSources
struct  TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text_TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct  TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextInfo
struct  TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547  : public RuntimeObject
{
public:
	// TMPro.TMP_Text TMPro.TMP_TextInfo::textComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___textComponent_2;
	// System.Int32 TMPro.TMP_TextInfo::characterCount
	int32_t ___characterCount_3;
	// System.Int32 TMPro.TMP_TextInfo::spriteCount
	int32_t ___spriteCount_4;
	// System.Int32 TMPro.TMP_TextInfo::spaceCount
	int32_t ___spaceCount_5;
	// System.Int32 TMPro.TMP_TextInfo::wordCount
	int32_t ___wordCount_6;
	// System.Int32 TMPro.TMP_TextInfo::linkCount
	int32_t ___linkCount_7;
	// System.Int32 TMPro.TMP_TextInfo::lineCount
	int32_t ___lineCount_8;
	// System.Int32 TMPro.TMP_TextInfo::pageCount
	int32_t ___pageCount_9;
	// System.Int32 TMPro.TMP_TextInfo::materialCount
	int32_t ___materialCount_10;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_TextInfo::characterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___characterInfo_11;
	// TMPro.TMP_WordInfo[] TMPro.TMP_TextInfo::wordInfo
	TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502* ___wordInfo_12;
	// TMPro.TMP_LinkInfo[] TMPro.TMP_TextInfo::linkInfo
	TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6* ___linkInfo_13;
	// TMPro.TMP_LineInfo[] TMPro.TMP_TextInfo::lineInfo
	TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* ___lineInfo_14;
	// TMPro.TMP_PageInfo[] TMPro.TMP_TextInfo::pageInfo
	TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F* ___pageInfo_15;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::meshInfo
	TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* ___meshInfo_16;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::m_CachedMeshInfo
	TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* ___m_CachedMeshInfo_17;

public:
	inline static int32_t get_offset_of_textComponent_2() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___textComponent_2)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_textComponent_2() const { return ___textComponent_2; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_textComponent_2() { return &___textComponent_2; }
	inline void set_textComponent_2(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___textComponent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textComponent_2), (void*)value);
	}

	inline static int32_t get_offset_of_characterCount_3() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___characterCount_3)); }
	inline int32_t get_characterCount_3() const { return ___characterCount_3; }
	inline int32_t* get_address_of_characterCount_3() { return &___characterCount_3; }
	inline void set_characterCount_3(int32_t value)
	{
		___characterCount_3 = value;
	}

	inline static int32_t get_offset_of_spriteCount_4() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___spriteCount_4)); }
	inline int32_t get_spriteCount_4() const { return ___spriteCount_4; }
	inline int32_t* get_address_of_spriteCount_4() { return &___spriteCount_4; }
	inline void set_spriteCount_4(int32_t value)
	{
		___spriteCount_4 = value;
	}

	inline static int32_t get_offset_of_spaceCount_5() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___spaceCount_5)); }
	inline int32_t get_spaceCount_5() const { return ___spaceCount_5; }
	inline int32_t* get_address_of_spaceCount_5() { return &___spaceCount_5; }
	inline void set_spaceCount_5(int32_t value)
	{
		___spaceCount_5 = value;
	}

	inline static int32_t get_offset_of_wordCount_6() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___wordCount_6)); }
	inline int32_t get_wordCount_6() const { return ___wordCount_6; }
	inline int32_t* get_address_of_wordCount_6() { return &___wordCount_6; }
	inline void set_wordCount_6(int32_t value)
	{
		___wordCount_6 = value;
	}

	inline static int32_t get_offset_of_linkCount_7() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___linkCount_7)); }
	inline int32_t get_linkCount_7() const { return ___linkCount_7; }
	inline int32_t* get_address_of_linkCount_7() { return &___linkCount_7; }
	inline void set_linkCount_7(int32_t value)
	{
		___linkCount_7 = value;
	}

	inline static int32_t get_offset_of_lineCount_8() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___lineCount_8)); }
	inline int32_t get_lineCount_8() const { return ___lineCount_8; }
	inline int32_t* get_address_of_lineCount_8() { return &___lineCount_8; }
	inline void set_lineCount_8(int32_t value)
	{
		___lineCount_8 = value;
	}

	inline static int32_t get_offset_of_pageCount_9() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___pageCount_9)); }
	inline int32_t get_pageCount_9() const { return ___pageCount_9; }
	inline int32_t* get_address_of_pageCount_9() { return &___pageCount_9; }
	inline void set_pageCount_9(int32_t value)
	{
		___pageCount_9 = value;
	}

	inline static int32_t get_offset_of_materialCount_10() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___materialCount_10)); }
	inline int32_t get_materialCount_10() const { return ___materialCount_10; }
	inline int32_t* get_address_of_materialCount_10() { return &___materialCount_10; }
	inline void set_materialCount_10(int32_t value)
	{
		___materialCount_10 = value;
	}

	inline static int32_t get_offset_of_characterInfo_11() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___characterInfo_11)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_characterInfo_11() const { return ___characterInfo_11; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_characterInfo_11() { return &___characterInfo_11; }
	inline void set_characterInfo_11(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___characterInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_wordInfo_12() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___wordInfo_12)); }
	inline TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502* get_wordInfo_12() const { return ___wordInfo_12; }
	inline TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502** get_address_of_wordInfo_12() { return &___wordInfo_12; }
	inline void set_wordInfo_12(TMP_WordInfoU5BU5D_t702DDE9D8C7BD02F4D744F914B94BAB83E0F9502* value)
	{
		___wordInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wordInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_linkInfo_13() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___linkInfo_13)); }
	inline TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6* get_linkInfo_13() const { return ___linkInfo_13; }
	inline TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6** get_address_of_linkInfo_13() { return &___linkInfo_13; }
	inline void set_linkInfo_13(TMP_LinkInfoU5BU5D_t27AF3A656CD9F504EFE1F29B69409819CBE7C6C6* value)
	{
		___linkInfo_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkInfo_13), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_14() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___lineInfo_14)); }
	inline TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* get_lineInfo_14() const { return ___lineInfo_14; }
	inline TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D** get_address_of_lineInfo_14() { return &___lineInfo_14; }
	inline void set_lineInfo_14(TMP_LineInfoU5BU5D_t2B188FB1B6C36641B7FEB177ACC798FAC9806C3D* value)
	{
		___lineInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineInfo_14), (void*)value);
	}

	inline static int32_t get_offset_of_pageInfo_15() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___pageInfo_15)); }
	inline TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F* get_pageInfo_15() const { return ___pageInfo_15; }
	inline TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F** get_address_of_pageInfo_15() { return &___pageInfo_15; }
	inline void set_pageInfo_15(TMP_PageInfoU5BU5D_tD278FD80A76AC5A74DA87B7A5653423E41AC634F* value)
	{
		___pageInfo_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pageInfo_15), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfo_16() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___meshInfo_16)); }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* get_meshInfo_16() const { return ___meshInfo_16; }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119** get_address_of_meshInfo_16() { return &___meshInfo_16; }
	inline void set_meshInfo_16(TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* value)
	{
		___meshInfo_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfo_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMeshInfo_17() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547, ___m_CachedMeshInfo_17)); }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* get_m_CachedMeshInfo_17() const { return ___m_CachedMeshInfo_17; }
	inline TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119** get_address_of_m_CachedMeshInfo_17() { return &___m_CachedMeshInfo_17; }
	inline void set_m_CachedMeshInfo_17(TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* value)
	{
		___m_CachedMeshInfo_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMeshInfo_17), (void*)value);
	}
};

struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547_StaticFields
{
public:
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorPositive
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_InfinityVectorPositive_0;
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorNegative
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_InfinityVectorNegative_1;

public:
	inline static int32_t get_offset_of_k_InfinityVectorPositive_0() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547_StaticFields, ___k_InfinityVectorPositive_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_InfinityVectorPositive_0() const { return ___k_InfinityVectorPositive_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_InfinityVectorPositive_0() { return &___k_InfinityVectorPositive_0; }
	inline void set_k_InfinityVectorPositive_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_InfinityVectorPositive_0 = value;
	}

	inline static int32_t get_offset_of_k_InfinityVectorNegative_1() { return static_cast<int32_t>(offsetof(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547_StaticFields, ___k_InfinityVectorNegative_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_InfinityVectorNegative_1() const { return ___k_InfinityVectorNegative_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_InfinityVectorNegative_1() { return &___k_InfinityVectorNegative_1; }
	inline void set_k_InfinityVectorNegative_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_InfinityVectorNegative_1 = value;
	}
};


// TMPro.TMP_TextUtilities_LineSegment
struct  LineSegment_t7EBE28F12DB31AD9429D413B42DCC8F91EB6DEB4 
{
public:
	// UnityEngine.Vector3 TMPro.TMP_TextUtilities_LineSegment::Point1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Point1_0;
	// UnityEngine.Vector3 TMPro.TMP_TextUtilities_LineSegment::Point2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Point2_1;

public:
	inline static int32_t get_offset_of_Point1_0() { return static_cast<int32_t>(offsetof(LineSegment_t7EBE28F12DB31AD9429D413B42DCC8F91EB6DEB4, ___Point1_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Point1_0() const { return ___Point1_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Point1_0() { return &___Point1_0; }
	inline void set_Point1_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Point1_0 = value;
	}

	inline static int32_t get_offset_of_Point2_1() { return static_cast<int32_t>(offsetof(LineSegment_t7EBE28F12DB31AD9429D413B42DCC8F91EB6DEB4, ___Point2_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Point2_1() const { return ___Point2_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Point2_1() { return &___Point2_1; }
	inline void set_Point2_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Point2_1 = value;
	}
};


// TMPro.TMP_Vertex
struct  TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E 
{
public:
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_4;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv_1() const { return ___uv_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv_1 = value;
	}

	inline static int32_t get_offset_of_uv2_2() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv2_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv2_2() const { return ___uv2_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv2_2() { return &___uv2_2; }
	inline void set_uv2_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv2_2 = value;
	}

	inline static int32_t get_offset_of_uv4_3() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___uv4_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv4_3() const { return ___uv4_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv4_3() { return &___uv4_3; }
	inline void set_uv4_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv4_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E, ___color_4)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_4() const { return ___color_4; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_4 = value;
	}
};

struct TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E_StaticFields
{
public:
	// TMPro.TMP_Vertex TMPro.TMP_Vertex::k_Zero
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___k_Zero_5;

public:
	inline static int32_t get_offset_of_k_Zero_5() { return static_cast<int32_t>(offsetof(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E_StaticFields, ___k_Zero_5)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_k_Zero_5() const { return ___k_Zero_5; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_k_Zero_5() { return &___k_Zero_5; }
	inline void set_k_Zero_5(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___k_Zero_5 = value;
	}
};


// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextElementType
struct  TextElementType_t2D8E05268B46E26157BE5E075752253FF0CE344F 
{
public:
	// System.Byte TMPro.TextElementType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextElementType_t2D8E05268B46E26157BE5E075752253FF0CE344F, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct  TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct  TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct  TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct  VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct  VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.EventSystems.PointerEventData_InputButton
struct  InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
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

// UnityEngine.TextCore.Glyph
struct  Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1  : public RuntimeObject
{
public:
	// System.UInt32 UnityEngine.TextCore.Glyph::m_Index
	uint32_t ___m_Index_0;
	// UnityEngine.TextCore.GlyphMetrics UnityEngine.TextCore.Glyph::m_Metrics
	GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B  ___m_Metrics_1;
	// UnityEngine.TextCore.GlyphRect UnityEngine.TextCore.Glyph::m_GlyphRect
	GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  ___m_GlyphRect_2;
	// System.Single UnityEngine.TextCore.Glyph::m_Scale
	float ___m_Scale_3;
	// System.Int32 UnityEngine.TextCore.Glyph::m_AtlasIndex
	int32_t ___m_AtlasIndex_4;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1, ___m_Index_0)); }
	inline uint32_t get_m_Index_0() const { return ___m_Index_0; }
	inline uint32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(uint32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_Metrics_1() { return static_cast<int32_t>(offsetof(Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1, ___m_Metrics_1)); }
	inline GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B  get_m_Metrics_1() const { return ___m_Metrics_1; }
	inline GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B * get_address_of_m_Metrics_1() { return &___m_Metrics_1; }
	inline void set_m_Metrics_1(GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B  value)
	{
		___m_Metrics_1 = value;
	}

	inline static int32_t get_offset_of_m_GlyphRect_2() { return static_cast<int32_t>(offsetof(Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1, ___m_GlyphRect_2)); }
	inline GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  get_m_GlyphRect_2() const { return ___m_GlyphRect_2; }
	inline GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D * get_address_of_m_GlyphRect_2() { return &___m_GlyphRect_2; }
	inline void set_m_GlyphRect_2(GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  value)
	{
		___m_GlyphRect_2 = value;
	}

	inline static int32_t get_offset_of_m_Scale_3() { return static_cast<int32_t>(offsetof(Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1, ___m_Scale_3)); }
	inline float get_m_Scale_3() const { return ___m_Scale_3; }
	inline float* get_address_of_m_Scale_3() { return &___m_Scale_3; }
	inline void set_m_Scale_3(float value)
	{
		___m_Scale_3 = value;
	}

	inline static int32_t get_offset_of_m_AtlasIndex_4() { return static_cast<int32_t>(offsetof(Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1, ___m_AtlasIndex_4)); }
	inline int32_t get_m_AtlasIndex_4() const { return ___m_AtlasIndex_4; }
	inline int32_t* get_address_of_m_AtlasIndex_4() { return &___m_AtlasIndex_4; }
	inline void set_m_AtlasIndex_4(int32_t value)
	{
		___m_AtlasIndex_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TextCore.Glyph
struct Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_marshaled_pinvoke
{
	uint32_t ___m_Index_0;
	GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B  ___m_Metrics_1;
	GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  ___m_GlyphRect_2;
	float ___m_Scale_3;
	int32_t ___m_AtlasIndex_4;
};
// Native definition for COM marshalling of UnityEngine.TextCore.Glyph
struct Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1_marshaled_com
{
	uint32_t ___m_Index_0;
	GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B  ___m_Metrics_1;
	GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  ___m_GlyphRect_2;
	float ___m_Scale_3;
	int32_t ___m_AtlasIndex_4;
};

// UnityEngine.TextCore.LowLevel.GlyphRenderMode
struct  GlyphRenderMode_t43D8B1ECDEC4836D7689CB73D0D6C1EF346F973C 
{
public:
	// System.Int32 UnityEngine.TextCore.LowLevel.GlyphRenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GlyphRenderMode_t43D8B1ECDEC4836D7689CB73D0D6C1EF346F973C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
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


// TMPro.TMP_CharacterInfo
struct  TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B 
{
public:
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_24;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_25;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_26;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_27;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_28;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_29;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_30;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_31;
	// System.Int32 TMPro.TMP_CharacterInfo::underlineVertexIndex
	int32_t ___underlineVertexIndex_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_33;
	// System.Int32 TMPro.TMP_CharacterInfo::strikethroughVertexIndex
	int32_t ___strikethroughVertexIndex_34;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_35;
	// TMPro.HighlightState TMPro.TMP_CharacterInfo::highlightState
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_36;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_37;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_38;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___character_0)); }
	inline Il2CppChar get_character_0() const { return ___character_0; }
	inline Il2CppChar* get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(Il2CppChar value)
	{
		___character_0 = value;
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_stringLength_2() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___stringLength_2)); }
	inline int32_t get_stringLength_2() const { return ___stringLength_2; }
	inline int32_t* get_address_of_stringLength_2() { return &___stringLength_2; }
	inline void set_stringLength_2(int32_t value)
	{
		___stringLength_2 = value;
	}

	inline static int32_t get_offset_of_elementType_3() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___elementType_3)); }
	inline int32_t get_elementType_3() const { return ___elementType_3; }
	inline int32_t* get_address_of_elementType_3() { return &___elementType_3; }
	inline void set_elementType_3(int32_t value)
	{
		___elementType_3 = value;
	}

	inline static int32_t get_offset_of_textElement_4() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___textElement_4)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_textElement_4() const { return ___textElement_4; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_textElement_4() { return &___textElement_4; }
	inline void set_textElement_4(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___textElement_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textElement_4), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_5() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___fontAsset_5)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_5() const { return ___fontAsset_5; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_5() { return &___fontAsset_5; }
	inline void set_fontAsset_5(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_5), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_6() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___spriteAsset_6)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_6() const { return ___spriteAsset_6; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_6() { return &___spriteAsset_6; }
	inline void set_spriteAsset_6(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_6), (void*)value);
	}

	inline static int32_t get_offset_of_spriteIndex_7() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___spriteIndex_7)); }
	inline int32_t get_spriteIndex_7() const { return ___spriteIndex_7; }
	inline int32_t* get_address_of_spriteIndex_7() { return &___spriteIndex_7; }
	inline void set_spriteIndex_7(int32_t value)
	{
		___spriteIndex_7 = value;
	}

	inline static int32_t get_offset_of_material_8() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___material_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_8() const { return ___material_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_8() { return &___material_8; }
	inline void set_material_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_8), (void*)value);
	}

	inline static int32_t get_offset_of_materialReferenceIndex_9() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___materialReferenceIndex_9)); }
	inline int32_t get_materialReferenceIndex_9() const { return ___materialReferenceIndex_9; }
	inline int32_t* get_address_of_materialReferenceIndex_9() { return &___materialReferenceIndex_9; }
	inline void set_materialReferenceIndex_9(int32_t value)
	{
		___materialReferenceIndex_9 = value;
	}

	inline static int32_t get_offset_of_isUsingAlternateTypeface_10() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___isUsingAlternateTypeface_10)); }
	inline bool get_isUsingAlternateTypeface_10() const { return ___isUsingAlternateTypeface_10; }
	inline bool* get_address_of_isUsingAlternateTypeface_10() { return &___isUsingAlternateTypeface_10; }
	inline void set_isUsingAlternateTypeface_10(bool value)
	{
		___isUsingAlternateTypeface_10 = value;
	}

	inline static int32_t get_offset_of_pointSize_11() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___pointSize_11)); }
	inline float get_pointSize_11() const { return ___pointSize_11; }
	inline float* get_address_of_pointSize_11() { return &___pointSize_11; }
	inline void set_pointSize_11(float value)
	{
		___pointSize_11 = value;
	}

	inline static int32_t get_offset_of_lineNumber_12() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___lineNumber_12)); }
	inline int32_t get_lineNumber_12() const { return ___lineNumber_12; }
	inline int32_t* get_address_of_lineNumber_12() { return &___lineNumber_12; }
	inline void set_lineNumber_12(int32_t value)
	{
		___lineNumber_12 = value;
	}

	inline static int32_t get_offset_of_pageNumber_13() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___pageNumber_13)); }
	inline int32_t get_pageNumber_13() const { return ___pageNumber_13; }
	inline int32_t* get_address_of_pageNumber_13() { return &___pageNumber_13; }
	inline void set_pageNumber_13(int32_t value)
	{
		___pageNumber_13 = value;
	}

	inline static int32_t get_offset_of_vertexIndex_14() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertexIndex_14)); }
	inline int32_t get_vertexIndex_14() const { return ___vertexIndex_14; }
	inline int32_t* get_address_of_vertexIndex_14() { return &___vertexIndex_14; }
	inline void set_vertexIndex_14(int32_t value)
	{
		___vertexIndex_14 = value;
	}

	inline static int32_t get_offset_of_vertex_BL_15() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_BL_15)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_BL_15() const { return ___vertex_BL_15; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_BL_15() { return &___vertex_BL_15; }
	inline void set_vertex_BL_15(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_BL_15 = value;
	}

	inline static int32_t get_offset_of_vertex_TL_16() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_TL_16)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_TL_16() const { return ___vertex_TL_16; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_TL_16() { return &___vertex_TL_16; }
	inline void set_vertex_TL_16(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_TL_16 = value;
	}

	inline static int32_t get_offset_of_vertex_TR_17() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_TR_17)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_TR_17() const { return ___vertex_TR_17; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_TR_17() { return &___vertex_TR_17; }
	inline void set_vertex_TR_17(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_TR_17 = value;
	}

	inline static int32_t get_offset_of_vertex_BR_18() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___vertex_BR_18)); }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  get_vertex_BR_18() const { return ___vertex_BR_18; }
	inline TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E * get_address_of_vertex_BR_18() { return &___vertex_BR_18; }
	inline void set_vertex_BR_18(TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  value)
	{
		___vertex_BR_18 = value;
	}

	inline static int32_t get_offset_of_topLeft_19() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___topLeft_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_topLeft_19() const { return ___topLeft_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_topLeft_19() { return &___topLeft_19; }
	inline void set_topLeft_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___topLeft_19 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_20() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___bottomLeft_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomLeft_20() const { return ___bottomLeft_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomLeft_20() { return &___bottomLeft_20; }
	inline void set_bottomLeft_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomLeft_20 = value;
	}

	inline static int32_t get_offset_of_topRight_21() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___topRight_21)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_topRight_21() const { return ___topRight_21; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_topRight_21() { return &___topRight_21; }
	inline void set_topRight_21(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___topRight_21 = value;
	}

	inline static int32_t get_offset_of_bottomRight_22() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___bottomRight_22)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_bottomRight_22() const { return ___bottomRight_22; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_bottomRight_22() { return &___bottomRight_22; }
	inline void set_bottomRight_22(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___bottomRight_22 = value;
	}

	inline static int32_t get_offset_of_origin_23() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___origin_23)); }
	inline float get_origin_23() const { return ___origin_23; }
	inline float* get_address_of_origin_23() { return &___origin_23; }
	inline void set_origin_23(float value)
	{
		___origin_23 = value;
	}

	inline static int32_t get_offset_of_ascender_24() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___ascender_24)); }
	inline float get_ascender_24() const { return ___ascender_24; }
	inline float* get_address_of_ascender_24() { return &___ascender_24; }
	inline void set_ascender_24(float value)
	{
		___ascender_24 = value;
	}

	inline static int32_t get_offset_of_baseLine_25() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___baseLine_25)); }
	inline float get_baseLine_25() const { return ___baseLine_25; }
	inline float* get_address_of_baseLine_25() { return &___baseLine_25; }
	inline void set_baseLine_25(float value)
	{
		___baseLine_25 = value;
	}

	inline static int32_t get_offset_of_descender_26() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___descender_26)); }
	inline float get_descender_26() const { return ___descender_26; }
	inline float* get_address_of_descender_26() { return &___descender_26; }
	inline void set_descender_26(float value)
	{
		___descender_26 = value;
	}

	inline static int32_t get_offset_of_xAdvance_27() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___xAdvance_27)); }
	inline float get_xAdvance_27() const { return ___xAdvance_27; }
	inline float* get_address_of_xAdvance_27() { return &___xAdvance_27; }
	inline void set_xAdvance_27(float value)
	{
		___xAdvance_27 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_28() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___aspectRatio_28)); }
	inline float get_aspectRatio_28() const { return ___aspectRatio_28; }
	inline float* get_address_of_aspectRatio_28() { return &___aspectRatio_28; }
	inline void set_aspectRatio_28(float value)
	{
		___aspectRatio_28 = value;
	}

	inline static int32_t get_offset_of_scale_29() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___scale_29)); }
	inline float get_scale_29() const { return ___scale_29; }
	inline float* get_address_of_scale_29() { return &___scale_29; }
	inline void set_scale_29(float value)
	{
		___scale_29 = value;
	}

	inline static int32_t get_offset_of_color_30() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___color_30)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_30() const { return ___color_30; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_30() { return &___color_30; }
	inline void set_color_30(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_30 = value;
	}

	inline static int32_t get_offset_of_underlineColor_31() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___underlineColor_31)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_31() const { return ___underlineColor_31; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_31() { return &___underlineColor_31; }
	inline void set_underlineColor_31(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_31 = value;
	}

	inline static int32_t get_offset_of_underlineVertexIndex_32() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___underlineVertexIndex_32)); }
	inline int32_t get_underlineVertexIndex_32() const { return ___underlineVertexIndex_32; }
	inline int32_t* get_address_of_underlineVertexIndex_32() { return &___underlineVertexIndex_32; }
	inline void set_underlineVertexIndex_32(int32_t value)
	{
		___underlineVertexIndex_32 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_33() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___strikethroughColor_33)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_33() const { return ___strikethroughColor_33; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_33() { return &___strikethroughColor_33; }
	inline void set_strikethroughColor_33(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_33 = value;
	}

	inline static int32_t get_offset_of_strikethroughVertexIndex_34() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___strikethroughVertexIndex_34)); }
	inline int32_t get_strikethroughVertexIndex_34() const { return ___strikethroughVertexIndex_34; }
	inline int32_t* get_address_of_strikethroughVertexIndex_34() { return &___strikethroughVertexIndex_34; }
	inline void set_strikethroughVertexIndex_34(int32_t value)
	{
		___strikethroughVertexIndex_34 = value;
	}

	inline static int32_t get_offset_of_highlightColor_35() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___highlightColor_35)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_35() const { return ___highlightColor_35; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_35() { return &___highlightColor_35; }
	inline void set_highlightColor_35(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_35 = value;
	}

	inline static int32_t get_offset_of_highlightState_36() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___highlightState_36)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_highlightState_36() const { return ___highlightState_36; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_highlightState_36() { return &___highlightState_36; }
	inline void set_highlightState_36(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___highlightState_36 = value;
	}

	inline static int32_t get_offset_of_style_37() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___style_37)); }
	inline int32_t get_style_37() const { return ___style_37; }
	inline int32_t* get_address_of_style_37() { return &___style_37; }
	inline void set_style_37(int32_t value)
	{
		___style_37 = value;
	}

	inline static int32_t get_offset_of_isVisible_38() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B, ___isVisible_38)); }
	inline bool get_isVisible_38() const { return ___isVisible_38; }
	inline bool* get_address_of_isVisible_38() { return &___isVisible_38; }
	inline void set_isVisible_38(bool value)
	{
		___isVisible_38 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	float ___origin_23;
	float ___ascender_24;
	float ___baseLine_25;
	float ___descender_26;
	float ___xAdvance_27;
	float ___aspectRatio_28;
	float ___scale_29;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_30;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_31;
	int32_t ___underlineVertexIndex_32;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_33;
	int32_t ___strikethroughVertexIndex_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_35;
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_36;
	int32_t ___style_37;
	int32_t ___isVisible_38;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___textElement_4;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_5;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BL_15;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TL_16;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_TR_17;
	TMP_Vertex_t8008D4AEC9AE4E475F5E02225801EB18A2A1341E  ___vertex_BR_18;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topLeft_19;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomLeft_20;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___topRight_21;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___bottomRight_22;
	float ___origin_23;
	float ___ascender_24;
	float ___baseLine_25;
	float ___descender_26;
	float ___xAdvance_27;
	float ___aspectRatio_28;
	float ___scale_29;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_30;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_31;
	int32_t ___underlineVertexIndex_32;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_33;
	int32_t ___strikethroughVertexIndex_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_35;
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___highlightState_36;
	int32_t ___style_37;
	int32_t ___isVisible_38;
};

// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_MeshInfo
struct  TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 
{
public:
	// UnityEngine.Mesh TMPro.TMP_MeshInfo::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	// System.Int32 TMPro.TMP_MeshInfo::vertexCount
	int32_t ___vertexCount_5;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::vertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___vertices_6;
	// UnityEngine.Vector3[] TMPro.TMP_MeshInfo::normals
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___normals_7;
	// UnityEngine.Vector4[] TMPro.TMP_MeshInfo::tangents
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___tangents_8;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs0
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs0_9;
	// UnityEngine.Vector2[] TMPro.TMP_MeshInfo::uvs2
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___uvs2_10;
	// UnityEngine.Color32[] TMPro.TMP_MeshInfo::colors32
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___colors32_11;
	// System.Int32[] TMPro.TMP_MeshInfo::triangles
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___triangles_12;
	// UnityEngine.Material TMPro.TMP_MeshInfo::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;

public:
	inline static int32_t get_offset_of_mesh_4() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___mesh_4)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_4() const { return ___mesh_4; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_4() { return &___mesh_4; }
	inline void set_mesh_4(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_vertexCount_5() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___vertexCount_5)); }
	inline int32_t get_vertexCount_5() const { return ___vertexCount_5; }
	inline int32_t* get_address_of_vertexCount_5() { return &___vertexCount_5; }
	inline void set_vertexCount_5(int32_t value)
	{
		___vertexCount_5 = value;
	}

	inline static int32_t get_offset_of_vertices_6() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___vertices_6)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_vertices_6() const { return ___vertices_6; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_vertices_6() { return &___vertices_6; }
	inline void set_vertices_6(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_normals_7() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___normals_7)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_normals_7() const { return ___normals_7; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_normals_7() { return &___normals_7; }
	inline void set_normals_7(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___normals_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_7), (void*)value);
	}

	inline static int32_t get_offset_of_tangents_8() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___tangents_8)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_tangents_8() const { return ___tangents_8; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_tangents_8() { return &___tangents_8; }
	inline void set_tangents_8(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___tangents_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tangents_8), (void*)value);
	}

	inline static int32_t get_offset_of_uvs0_9() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___uvs0_9)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs0_9() const { return ___uvs0_9; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs0_9() { return &___uvs0_9; }
	inline void set_uvs0_9(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs0_9), (void*)value);
	}

	inline static int32_t get_offset_of_uvs2_10() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___uvs2_10)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_uvs2_10() const { return ___uvs2_10; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_uvs2_10() { return &___uvs2_10; }
	inline void set_uvs2_10(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___uvs2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs2_10), (void*)value);
	}

	inline static int32_t get_offset_of_colors32_11() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___colors32_11)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_colors32_11() const { return ___colors32_11; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_colors32_11() { return &___colors32_11; }
	inline void set_colors32_11(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___colors32_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors32_11), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_12() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___triangles_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_triangles_12() const { return ___triangles_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_triangles_12() { return &___triangles_12; }
	inline void set_triangles_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___triangles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_12), (void*)value);
	}

	inline static int32_t get_offset_of_material_13() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176, ___material_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_13() const { return ___material_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_13() { return &___material_13; }
	inline void set_material_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_13), (void*)value);
	}
};

struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_MeshInfo::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_0;
	// UnityEngine.Vector3 TMPro.TMP_MeshInfo::s_DefaultNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_DefaultNormal_1;
	// UnityEngine.Vector4 TMPro.TMP_MeshInfo::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_2;
	// UnityEngine.Bounds TMPro.TMP_MeshInfo::s_DefaultBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___s_DefaultBounds_3;

public:
	inline static int32_t get_offset_of_s_DefaultColor_0() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultColor_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_0() const { return ___s_DefaultColor_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_0() { return &___s_DefaultColor_0; }
	inline void set_s_DefaultColor_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_0 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_1() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultNormal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_DefaultNormal_1() const { return ___s_DefaultNormal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_DefaultNormal_1() { return &___s_DefaultNormal_1; }
	inline void set_s_DefaultNormal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_DefaultNormal_1 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_2() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultTangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_2() const { return ___s_DefaultTangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_2() { return &___s_DefaultTangent_2; }
	inline void set_s_DefaultTangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_2 = value;
	}

	inline static int32_t get_offset_of_s_DefaultBounds_3() { return static_cast<int32_t>(offsetof(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_StaticFields, ___s_DefaultBounds_3)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_s_DefaultBounds_3() const { return ___s_DefaultBounds_3; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_s_DefaultBounds_3() { return &___s_DefaultBounds_3; }
	inline void set_s_DefaultBounds_3(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___s_DefaultBounds_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshaled_pinvoke
{
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___vertices_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normals_7;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___tangents_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs0_9;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs2_10;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;
};
// Native definition for COM marshalling of TMPro.TMP_MeshInfo
struct TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176_marshaled_com
{
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	int32_t ___vertexCount_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___vertices_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___normals_7;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * ___tangents_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs0_9;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___uvs2_10;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___colors32_11;
	Il2CppSafeArray/*NONE*/* ___triangles_12;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_13;
};

// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight>
struct  TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::itemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___itemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E, ___itemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.HighlightState>
struct  TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::itemStack
	HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* ___itemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F, ___m_DefaultItem_3)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.HorizontalAlignmentOptions>
struct  TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* ___itemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_SpriteGlyph
struct  TMP_SpriteGlyph_t5DF3D3BFFC0D0A72ABEBA3490F804B591BF1F25D  : public Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1
{
public:
	// UnityEngine.Sprite TMPro.TMP_SpriteGlyph::sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite_5;

public:
	inline static int32_t get_offset_of_sprite_5() { return static_cast<int32_t>(offsetof(TMP_SpriteGlyph_t5DF3D3BFFC0D0A72ABEBA3490F804B591BF1F25D, ___sprite_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_sprite_5() const { return ___sprite_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_sprite_5() { return &___sprite_5; }
	inline void set_sprite_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___sprite_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_5), (void*)value);
	}
};


// TMPro.TMP_TextElement
struct  TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832  : public RuntimeObject
{
public:
	// TMPro.TextElementType TMPro.TMP_TextElement::m_ElementType
	uint8_t ___m_ElementType_0;
	// System.UInt32 TMPro.TMP_TextElement::m_Unicode
	uint32_t ___m_Unicode_1;
	// UnityEngine.TextCore.Glyph TMPro.TMP_TextElement::m_Glyph
	Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * ___m_Glyph_2;
	// System.UInt32 TMPro.TMP_TextElement::m_GlyphIndex
	uint32_t ___m_GlyphIndex_3;
	// System.Single TMPro.TMP_TextElement::m_Scale
	float ___m_Scale_4;

public:
	inline static int32_t get_offset_of_m_ElementType_0() { return static_cast<int32_t>(offsetof(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832, ___m_ElementType_0)); }
	inline uint8_t get_m_ElementType_0() const { return ___m_ElementType_0; }
	inline uint8_t* get_address_of_m_ElementType_0() { return &___m_ElementType_0; }
	inline void set_m_ElementType_0(uint8_t value)
	{
		___m_ElementType_0 = value;
	}

	inline static int32_t get_offset_of_m_Unicode_1() { return static_cast<int32_t>(offsetof(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832, ___m_Unicode_1)); }
	inline uint32_t get_m_Unicode_1() const { return ___m_Unicode_1; }
	inline uint32_t* get_address_of_m_Unicode_1() { return &___m_Unicode_1; }
	inline void set_m_Unicode_1(uint32_t value)
	{
		___m_Unicode_1 = value;
	}

	inline static int32_t get_offset_of_m_Glyph_2() { return static_cast<int32_t>(offsetof(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832, ___m_Glyph_2)); }
	inline Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * get_m_Glyph_2() const { return ___m_Glyph_2; }
	inline Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 ** get_address_of_m_Glyph_2() { return &___m_Glyph_2; }
	inline void set_m_Glyph_2(Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * value)
	{
		___m_Glyph_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Glyph_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlyphIndex_3() { return static_cast<int32_t>(offsetof(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832, ___m_GlyphIndex_3)); }
	inline uint32_t get_m_GlyphIndex_3() const { return ___m_GlyphIndex_3; }
	inline uint32_t* get_address_of_m_GlyphIndex_3() { return &___m_GlyphIndex_3; }
	inline void set_m_GlyphIndex_3(uint32_t value)
	{
		___m_GlyphIndex_3 = value;
	}

	inline static int32_t get_offset_of_m_Scale_4() { return static_cast<int32_t>(offsetof(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832, ___m_Scale_4)); }
	inline float get_m_Scale_4() const { return ___m_Scale_4; }
	inline float* get_address_of_m_Scale_4() { return &___m_Scale_4; }
	inline void set_m_Scale_4(float value)
	{
		___m_Scale_4 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData_InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_1)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_4;
};

// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
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


// TMPro.TMP_Asset
struct  TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 TMPro.TMP_Asset::m_InstanceID
	int32_t ___m_InstanceID_4;
	// System.Int32 TMPro.TMP_Asset::hashCode
	int32_t ___hashCode_5;
	// UnityEngine.Material TMPro.TMP_Asset::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_6;
	// System.Int32 TMPro.TMP_Asset::materialHashCode
	int32_t ___materialHashCode_7;

public:
	inline static int32_t get_offset_of_m_InstanceID_4() { return static_cast<int32_t>(offsetof(TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E, ___m_InstanceID_4)); }
	inline int32_t get_m_InstanceID_4() const { return ___m_InstanceID_4; }
	inline int32_t* get_address_of_m_InstanceID_4() { return &___m_InstanceID_4; }
	inline void set_m_InstanceID_4(int32_t value)
	{
		___m_InstanceID_4 = value;
	}

	inline static int32_t get_offset_of_hashCode_5() { return static_cast<int32_t>(offsetof(TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E, ___hashCode_5)); }
	inline int32_t get_hashCode_5() const { return ___hashCode_5; }
	inline int32_t* get_address_of_hashCode_5() { return &___hashCode_5; }
	inline void set_hashCode_5(int32_t value)
	{
		___hashCode_5 = value;
	}

	inline static int32_t get_offset_of_material_6() { return static_cast<int32_t>(offsetof(TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E, ___material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_6() const { return ___material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_6() { return &___material_6; }
	inline void set_material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_6), (void*)value);
	}

	inline static int32_t get_offset_of_materialHashCode_7() { return static_cast<int32_t>(offsetof(TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E, ___materialHashCode_7)); }
	inline int32_t get_materialHashCode_7() const { return ___materialHashCode_7; }
	inline int32_t* get_address_of_materialHashCode_7() { return &___materialHashCode_7; }
	inline void set_materialHashCode_7(int32_t value)
	{
		___materialHashCode_7 = value;
	}
};


// TMPro.TMP_InputField_OnValidateInput
struct  OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA  : public MulticastDelegate_t
{
public:

public:
};


// TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7
struct  U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F  : public RuntimeObject
{
public:
	// System.Int32 TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::<>4__this
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___U3CU3E4__this_2;
	// System.Int32 TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::start
	int32_t ___start_3;
	// System.Int32 TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::end
	int32_t ___end_4;
	// TMPro.TMP_SpriteAsset TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_5;
	// System.Int32 TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::currentCharacter
	int32_t ___currentCharacter_6;
	// System.Int32 TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::framerate
	int32_t ___framerate_7;
	// System.Int32 TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::<currentFrame>5__2
	int32_t ___U3CcurrentFrameU3E5__2_8;
	// TMPro.TMP_CharacterInfo TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::<charInfo>5__3
	TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  ___U3CcharInfoU3E5__3_9;
	// System.Int32 TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::<materialIndex>5__4
	int32_t ___U3CmaterialIndexU3E5__4_10;
	// System.Int32 TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::<vertexIndex>5__5
	int32_t ___U3CvertexIndexU3E5__5_11;
	// TMPro.TMP_MeshInfo TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::<meshInfo>5__6
	TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  ___U3CmeshInfoU3E5__6_12;
	// System.Single TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::<elapsedTime>5__7
	float ___U3CelapsedTimeU3E5__7_13;
	// System.Single TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::<targetTime>5__8
	float ___U3CtargetTimeU3E5__8_14;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CU3E4__this_2)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_start_3() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___start_3)); }
	inline int32_t get_start_3() const { return ___start_3; }
	inline int32_t* get_address_of_start_3() { return &___start_3; }
	inline void set_start_3(int32_t value)
	{
		___start_3 = value;
	}

	inline static int32_t get_offset_of_end_4() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___end_4)); }
	inline int32_t get_end_4() const { return ___end_4; }
	inline int32_t* get_address_of_end_4() { return &___end_4; }
	inline void set_end_4(int32_t value)
	{
		___end_4 = value;
	}

	inline static int32_t get_offset_of_spriteAsset_5() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___spriteAsset_5)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_5() const { return ___spriteAsset_5; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_5() { return &___spriteAsset_5; }
	inline void set_spriteAsset_5(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentCharacter_6() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___currentCharacter_6)); }
	inline int32_t get_currentCharacter_6() const { return ___currentCharacter_6; }
	inline int32_t* get_address_of_currentCharacter_6() { return &___currentCharacter_6; }
	inline void set_currentCharacter_6(int32_t value)
	{
		___currentCharacter_6 = value;
	}

	inline static int32_t get_offset_of_framerate_7() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___framerate_7)); }
	inline int32_t get_framerate_7() const { return ___framerate_7; }
	inline int32_t* get_address_of_framerate_7() { return &___framerate_7; }
	inline void set_framerate_7(int32_t value)
	{
		___framerate_7 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentFrameU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CcurrentFrameU3E5__2_8)); }
	inline int32_t get_U3CcurrentFrameU3E5__2_8() const { return ___U3CcurrentFrameU3E5__2_8; }
	inline int32_t* get_address_of_U3CcurrentFrameU3E5__2_8() { return &___U3CcurrentFrameU3E5__2_8; }
	inline void set_U3CcurrentFrameU3E5__2_8(int32_t value)
	{
		___U3CcurrentFrameU3E5__2_8 = value;
	}

	inline static int32_t get_offset_of_U3CcharInfoU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CcharInfoU3E5__3_9)); }
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  get_U3CcharInfoU3E5__3_9() const { return ___U3CcharInfoU3E5__3_9; }
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * get_address_of_U3CcharInfoU3E5__3_9() { return &___U3CcharInfoU3E5__3_9; }
	inline void set_U3CcharInfoU3E5__3_9(TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		___U3CcharInfoU3E5__3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__3_9))->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__3_9))->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__3_9))->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcharInfoU3E5__3_9))->___material_8), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CmaterialIndexU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CmaterialIndexU3E5__4_10)); }
	inline int32_t get_U3CmaterialIndexU3E5__4_10() const { return ___U3CmaterialIndexU3E5__4_10; }
	inline int32_t* get_address_of_U3CmaterialIndexU3E5__4_10() { return &___U3CmaterialIndexU3E5__4_10; }
	inline void set_U3CmaterialIndexU3E5__4_10(int32_t value)
	{
		___U3CmaterialIndexU3E5__4_10 = value;
	}

	inline static int32_t get_offset_of_U3CvertexIndexU3E5__5_11() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CvertexIndexU3E5__5_11)); }
	inline int32_t get_U3CvertexIndexU3E5__5_11() const { return ___U3CvertexIndexU3E5__5_11; }
	inline int32_t* get_address_of_U3CvertexIndexU3E5__5_11() { return &___U3CvertexIndexU3E5__5_11; }
	inline void set_U3CvertexIndexU3E5__5_11(int32_t value)
	{
		___U3CvertexIndexU3E5__5_11 = value;
	}

	inline static int32_t get_offset_of_U3CmeshInfoU3E5__6_12() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CmeshInfoU3E5__6_12)); }
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  get_U3CmeshInfoU3E5__6_12() const { return ___U3CmeshInfoU3E5__6_12; }
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * get_address_of_U3CmeshInfoU3E5__6_12() { return &___U3CmeshInfoU3E5__6_12; }
	inline void set_U3CmeshInfoU3E5__6_12(TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  value)
	{
		___U3CmeshInfoU3E5__6_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CmeshInfoU3E5__6_12))->___material_13), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__7_13() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CelapsedTimeU3E5__7_13)); }
	inline float get_U3CelapsedTimeU3E5__7_13() const { return ___U3CelapsedTimeU3E5__7_13; }
	inline float* get_address_of_U3CelapsedTimeU3E5__7_13() { return &___U3CelapsedTimeU3E5__7_13; }
	inline void set_U3CelapsedTimeU3E5__7_13(float value)
	{
		___U3CelapsedTimeU3E5__7_13 = value;
	}

	inline static int32_t get_offset_of_U3CtargetTimeU3E5__8_14() { return static_cast<int32_t>(offsetof(U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F, ___U3CtargetTimeU3E5__8_14)); }
	inline float get_U3CtargetTimeU3E5__8_14() const { return ___U3CtargetTimeU3E5__8_14; }
	inline float* get_address_of_U3CtargetTimeU3E5__8_14() { return &___U3CtargetTimeU3E5__8_14; }
	inline void set_U3CtargetTimeU3E5__8_14(float value)
	{
		___U3CtargetTimeU3E5__8_14 = value;
	}
};


// TMPro.TMP_SpriteCharacter
struct  TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE  : public TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832
{
public:
	// System.String TMPro.TMP_SpriteCharacter::m_Name
	String_t* ___m_Name_5;
	// System.Int32 TMPro.TMP_SpriteCharacter::m_HashCode
	int32_t ___m_HashCode_6;

public:
	inline static int32_t get_offset_of_m_Name_5() { return static_cast<int32_t>(offsetof(TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE, ___m_Name_5)); }
	inline String_t* get_m_Name_5() const { return ___m_Name_5; }
	inline String_t** get_address_of_m_Name_5() { return &___m_Name_5; }
	inline void set_m_Name_5(String_t* value)
	{
		___m_Name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_HashCode_6() { return static_cast<int32_t>(offsetof(TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE, ___m_HashCode_6)); }
	inline int32_t get_m_HashCode_6() const { return ___m_HashCode_6; }
	inline int32_t* get_address_of_m_HashCode_6() { return &___m_HashCode_6; }
	inline void set_m_HashCode_6(int32_t value)
	{
		___m_HashCode_6 = value;
	}
};


// TMPro.WordWrapState
struct  WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_14;
	// System.Single TMPro.WordWrapState::previousLineAscender
	float ___previousLineAscender_15;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_16;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_17;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_18;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_19;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_20;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_21;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_22;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_23;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_24;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_25;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_31;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_32;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_33;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_34;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_35;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_36;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_38;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_39;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___italicAngleStack_40;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___colorStack_41;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___underlineColorStack_42;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___strikethroughColorStack_43;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___highlightColorStack_44;
	// TMPro.TMP_RichTextTagStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F  ___highlightStateStack_45;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  ___colorGradientStack_46;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___sizeStack_47;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___indentStack_48;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  ___fontWeightStack_49;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___styleStack_50;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___baselineStack_51;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___actionStack_52;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  ___materialReferenceStack_53;
	// TMPro.TMP_RichTextTagStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A  ___lineJustificationStack_54;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_55;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_56;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_57;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_58;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_59;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_60;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_61;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_62;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_13)); }
	inline float get_maxLineAscender_13() const { return ___maxLineAscender_13; }
	inline float* get_address_of_maxLineAscender_13() { return &___maxLineAscender_13; }
	inline void set_maxLineAscender_13(float value)
	{
		___maxLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_14)); }
	inline float get_maxLineDescender_14() const { return ___maxLineDescender_14; }
	inline float* get_address_of_maxLineDescender_14() { return &___maxLineDescender_14; }
	inline void set_maxLineDescender_14(float value)
	{
		___maxLineDescender_14 = value;
	}

	inline static int32_t get_offset_of_previousLineAscender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineAscender_15)); }
	inline float get_previousLineAscender_15() const { return ___previousLineAscender_15; }
	inline float* get_address_of_previousLineAscender_15() { return &___previousLineAscender_15; }
	inline void set_previousLineAscender_15(float value)
	{
		___previousLineAscender_15 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___horizontalAlignment_16)); }
	inline int32_t get_horizontalAlignment_16() const { return ___horizontalAlignment_16; }
	inline int32_t* get_address_of_horizontalAlignment_16() { return &___horizontalAlignment_16; }
	inline void set_horizontalAlignment_16(int32_t value)
	{
		___horizontalAlignment_16 = value;
	}

	inline static int32_t get_offset_of_marginLeft_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginLeft_17)); }
	inline float get_marginLeft_17() const { return ___marginLeft_17; }
	inline float* get_address_of_marginLeft_17() { return &___marginLeft_17; }
	inline void set_marginLeft_17(float value)
	{
		___marginLeft_17 = value;
	}

	inline static int32_t get_offset_of_marginRight_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginRight_18)); }
	inline float get_marginRight_18() const { return ___marginRight_18; }
	inline float* get_address_of_marginRight_18() { return &___marginRight_18; }
	inline void set_marginRight_18(float value)
	{
		___marginRight_18 = value;
	}

	inline static int32_t get_offset_of_xAdvance_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_19)); }
	inline float get_xAdvance_19() const { return ___xAdvance_19; }
	inline float* get_address_of_xAdvance_19() { return &___xAdvance_19; }
	inline void set_xAdvance_19(float value)
	{
		___xAdvance_19 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_20)); }
	inline float get_preferredWidth_20() const { return ___preferredWidth_20; }
	inline float* get_address_of_preferredWidth_20() { return &___preferredWidth_20; }
	inline void set_preferredWidth_20(float value)
	{
		___preferredWidth_20 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_21)); }
	inline float get_preferredHeight_21() const { return ___preferredHeight_21; }
	inline float* get_address_of_preferredHeight_21() { return &___preferredHeight_21; }
	inline void set_preferredHeight_21(float value)
	{
		___preferredHeight_21 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_22)); }
	inline float get_previousLineScale_22() const { return ___previousLineScale_22; }
	inline float* get_address_of_previousLineScale_22() { return &___previousLineScale_22; }
	inline void set_previousLineScale_22(float value)
	{
		___previousLineScale_22 = value;
	}

	inline static int32_t get_offset_of_wordCount_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_23)); }
	inline int32_t get_wordCount_23() const { return ___wordCount_23; }
	inline int32_t* get_address_of_wordCount_23() { return &___wordCount_23; }
	inline void set_wordCount_23(int32_t value)
	{
		___wordCount_23 = value;
	}

	inline static int32_t get_offset_of_fontStyle_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_24)); }
	inline int32_t get_fontStyle_24() const { return ___fontStyle_24; }
	inline int32_t* get_address_of_fontStyle_24() { return &___fontStyle_24; }
	inline void set_fontStyle_24(int32_t value)
	{
		___fontStyle_24 = value;
	}

	inline static int32_t get_offset_of_italicAngle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngle_25)); }
	inline int32_t get_italicAngle_25() const { return ___italicAngle_25; }
	inline int32_t* get_address_of_italicAngle_25() { return &___italicAngle_25; }
	inline void set_italicAngle_25(int32_t value)
	{
		___italicAngle_25 = value;
	}

	inline static int32_t get_offset_of_fontScale_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScale_26)); }
	inline float get_fontScale_26() const { return ___fontScale_26; }
	inline float* get_address_of_fontScale_26() { return &___fontScale_26; }
	inline void set_fontScale_26(float value)
	{
		___fontScale_26 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_27)); }
	inline float get_fontScaleMultiplier_27() const { return ___fontScaleMultiplier_27; }
	inline float* get_address_of_fontScaleMultiplier_27() { return &___fontScaleMultiplier_27; }
	inline void set_fontScaleMultiplier_27(float value)
	{
		___fontScaleMultiplier_27 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_28)); }
	inline float get_currentFontSize_28() const { return ___currentFontSize_28; }
	inline float* get_address_of_currentFontSize_28() { return &___currentFontSize_28; }
	inline void set_currentFontSize_28(float value)
	{
		___currentFontSize_28 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_29)); }
	inline float get_baselineOffset_29() const { return ___baselineOffset_29; }
	inline float* get_address_of_baselineOffset_29() { return &___baselineOffset_29; }
	inline void set_baselineOffset_29(float value)
	{
		___baselineOffset_29 = value;
	}

	inline static int32_t get_offset_of_lineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_30)); }
	inline float get_lineOffset_30() const { return ___lineOffset_30; }
	inline float* get_address_of_lineOffset_30() { return &___lineOffset_30; }
	inline void set_lineOffset_30(float value)
	{
		___lineOffset_30 = value;
	}

	inline static int32_t get_offset_of_cSpace_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___cSpace_31)); }
	inline float get_cSpace_31() const { return ___cSpace_31; }
	inline float* get_address_of_cSpace_31() { return &___cSpace_31; }
	inline void set_cSpace_31(float value)
	{
		___cSpace_31 = value;
	}

	inline static int32_t get_offset_of_mSpace_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___mSpace_32)); }
	inline float get_mSpace_32() const { return ___mSpace_32; }
	inline float* get_address_of_mSpace_32() { return &___mSpace_32; }
	inline void set_mSpace_32(float value)
	{
		___mSpace_32 = value;
	}

	inline static int32_t get_offset_of_textInfo_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_33)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_33() const { return ___textInfo_33; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_33() { return &___textInfo_33; }
	inline void set_textInfo_33(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_33), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_34)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_34() const { return ___lineInfo_34; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_34() { return &___lineInfo_34; }
	inline void set_lineInfo_34(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_34 = value;
	}

	inline static int32_t get_offset_of_vertexColor_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_35)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_35() const { return ___vertexColor_35; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_35() { return &___vertexColor_35; }
	inline void set_vertexColor_35(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_35 = value;
	}

	inline static int32_t get_offset_of_underlineColor_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_36)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_36() const { return ___underlineColor_36; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_36() { return &___underlineColor_36; }
	inline void set_underlineColor_36(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_36 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_37)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_37() const { return ___strikethroughColor_37; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_37() { return &___strikethroughColor_37; }
	inline void set_strikethroughColor_37(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_37 = value;
	}

	inline static int32_t get_offset_of_highlightColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_38)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_38() const { return ___highlightColor_38; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_38() { return &___highlightColor_38; }
	inline void set_highlightColor_38(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_38 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_39)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_39() const { return ___basicStyleStack_39; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_39() { return &___basicStyleStack_39; }
	inline void set_basicStyleStack_39(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_39 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngleStack_40)); }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  get_italicAngleStack_40() const { return ___italicAngleStack_40; }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666 * get_address_of_italicAngleStack_40() { return &___italicAngleStack_40; }
	inline void set_italicAngleStack_40(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  value)
	{
		___italicAngleStack_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_40))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_41)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_colorStack_41() const { return ___colorStack_41; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_colorStack_41() { return &___colorStack_41; }
	inline void set_colorStack_41(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___colorStack_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_41))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_42)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_underlineColorStack_42() const { return ___underlineColorStack_42; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_underlineColorStack_42() { return &___underlineColorStack_42; }
	inline void set_underlineColorStack_42(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___underlineColorStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_42))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_43)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_strikethroughColorStack_43() const { return ___strikethroughColorStack_43; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_strikethroughColorStack_43() { return &___strikethroughColorStack_43; }
	inline void set_strikethroughColorStack_43(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___strikethroughColorStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_44)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_highlightColorStack_44() const { return ___highlightColorStack_44; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_highlightColorStack_44() { return &___highlightColorStack_44; }
	inline void set_highlightColorStack_44(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___highlightColorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightStateStack_45)); }
	inline TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F  get_highlightStateStack_45() const { return ___highlightStateStack_45; }
	inline TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F * get_address_of_highlightStateStack_45() { return &___highlightStateStack_45; }
	inline void set_highlightStateStack_45(TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F  value)
	{
		___highlightStateStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_46)); }
	inline TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  get_colorGradientStack_46() const { return ___colorGradientStack_46; }
	inline TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961 * get_address_of_colorGradientStack_46() { return &___colorGradientStack_46; }
	inline void set_colorGradientStack_46(TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  value)
	{
		___colorGradientStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_46))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_46))->___m_DefaultItem_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_47)); }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  get_sizeStack_47() const { return ___sizeStack_47; }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75 * get_address_of_sizeStack_47() { return &___sizeStack_47; }
	inline void set_sizeStack_47(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  value)
	{
		___sizeStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_48)); }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  get_indentStack_48() const { return ___indentStack_48; }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75 * get_address_of_indentStack_48() { return &___indentStack_48; }
	inline void set_indentStack_48(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  value)
	{
		___indentStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_48))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_49)); }
	inline TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  get_fontWeightStack_49() const { return ___fontWeightStack_49; }
	inline TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E * get_address_of_fontWeightStack_49() { return &___fontWeightStack_49; }
	inline void set_fontWeightStack_49(TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  value)
	{
		___fontWeightStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_49))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_50)); }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  get_styleStack_50() const { return ___styleStack_50; }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666 * get_address_of_styleStack_50() { return &___styleStack_50; }
	inline void set_styleStack_50(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  value)
	{
		___styleStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_51)); }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  get_baselineStack_51() const { return ___baselineStack_51; }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75 * get_address_of_baselineStack_51() { return &___baselineStack_51; }
	inline void set_baselineStack_51(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  value)
	{
		___baselineStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_52)); }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  get_actionStack_52() const { return ___actionStack_52; }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666 * get_address_of_actionStack_52() { return &___actionStack_52; }
	inline void set_actionStack_52(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  value)
	{
		___actionStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_53)); }
	inline TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  get_materialReferenceStack_53() const { return ___materialReferenceStack_53; }
	inline TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718 * get_address_of_materialReferenceStack_53() { return &___materialReferenceStack_53; }
	inline void set_materialReferenceStack_53(TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  value)
	{
		___materialReferenceStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_53))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_53))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_53))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_53))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_53))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_54)); }
	inline TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A  get_lineJustificationStack_54() const { return ___lineJustificationStack_54; }
	inline TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A * get_address_of_lineJustificationStack_54() { return &___lineJustificationStack_54; }
	inline void set_lineJustificationStack_54(TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A  value)
	{
		___lineJustificationStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_55() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_55)); }
	inline int32_t get_spriteAnimationID_55() const { return ___spriteAnimationID_55; }
	inline int32_t* get_address_of_spriteAnimationID_55() { return &___spriteAnimationID_55; }
	inline void set_spriteAnimationID_55(int32_t value)
	{
		___spriteAnimationID_55 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_56() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_56)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_56() const { return ___currentFontAsset_56; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_56() { return &___currentFontAsset_56; }
	inline void set_currentFontAsset_56(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_56), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_57() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_57)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_57() const { return ___currentSpriteAsset_57; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_57() { return &___currentSpriteAsset_57; }
	inline void set_currentSpriteAsset_57(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_57), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_58() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_58)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_58() const { return ___currentMaterial_58; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_58() { return &___currentMaterial_58; }
	inline void set_currentMaterial_58(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_58), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_59() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_59)); }
	inline int32_t get_currentMaterialIndex_59() const { return ___currentMaterialIndex_59; }
	inline int32_t* get_address_of_currentMaterialIndex_59() { return &___currentMaterialIndex_59; }
	inline void set_currentMaterialIndex_59(int32_t value)
	{
		___currentMaterialIndex_59 = value;
	}

	inline static int32_t get_offset_of_meshExtents_60() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_60)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_60() const { return ___meshExtents_60; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_60() { return &___meshExtents_60; }
	inline void set_meshExtents_60(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_60 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_61() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_61)); }
	inline bool get_tagNoParsing_61() const { return ___tagNoParsing_61; }
	inline bool* get_address_of_tagNoParsing_61() { return &___tagNoParsing_61; }
	inline void set_tagNoParsing_61(bool value)
	{
		___tagNoParsing_61 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_62() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_62)); }
	inline bool get_isNonBreakingSpace_62() const { return ___isNonBreakingSpace_62; }
	inline bool* get_address_of_isNonBreakingSpace_62() { return &___isNonBreakingSpace_62; }
	inline void set_isNonBreakingSpace_62(bool value)
	{
		___isNonBreakingSpace_62 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	int32_t ___horizontalAlignment_16;
	float ___marginLeft_17;
	float ___marginRight_18;
	float ___xAdvance_19;
	float ___preferredWidth_20;
	float ___preferredHeight_21;
	float ___previousLineScale_22;
	int32_t ___wordCount_23;
	int32_t ___fontStyle_24;
	int32_t ___italicAngle_25;
	float ___fontScale_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	float ___cSpace_31;
	float ___mSpace_32;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_33;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_35;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_38;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_39;
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___italicAngleStack_40;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___colorStack_41;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___underlineColorStack_42;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___strikethroughColorStack_43;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___highlightColorStack_44;
	TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F  ___highlightStateStack_45;
	TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  ___colorGradientStack_46;
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___sizeStack_47;
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___indentStack_48;
	TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  ___fontWeightStack_49;
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___styleStack_50;
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___baselineStack_51;
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___actionStack_52;
	TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  ___materialReferenceStack_53;
	TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A  ___lineJustificationStack_54;
	int32_t ___spriteAnimationID_55;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_56;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_57;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_58;
	int32_t ___currentMaterialIndex_59;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_60;
	int32_t ___tagNoParsing_61;
	int32_t ___isNonBreakingSpace_62;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	int32_t ___horizontalAlignment_16;
	float ___marginLeft_17;
	float ___marginRight_18;
	float ___xAdvance_19;
	float ___preferredWidth_20;
	float ___preferredHeight_21;
	float ___previousLineScale_22;
	int32_t ___wordCount_23;
	int32_t ___fontStyle_24;
	int32_t ___italicAngle_25;
	float ___fontScale_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	float ___cSpace_31;
	float ___mSpace_32;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_33;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_34;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_35;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_36;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_38;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_39;
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___italicAngleStack_40;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___colorStack_41;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___underlineColorStack_42;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___strikethroughColorStack_43;
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___highlightColorStack_44;
	TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F  ___highlightStateStack_45;
	TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  ___colorGradientStack_46;
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___sizeStack_47;
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___indentStack_48;
	TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  ___fontWeightStack_49;
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___styleStack_50;
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___baselineStack_51;
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___actionStack_52;
	TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  ___materialReferenceStack_53;
	TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A  ___lineJustificationStack_54;
	int32_t ___spriteAnimationID_55;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_56;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_57;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_58;
	int32_t ___currentMaterialIndex_59;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_60;
	int32_t ___tagNoParsing_61;
	int32_t ___isNonBreakingSpace_62;
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


// TMPro.TMP_FontAsset
struct  TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2  : public TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E
{
public:
	// System.String TMPro.TMP_FontAsset::m_Version
	String_t* ___m_Version_8;
	// System.String TMPro.TMP_FontAsset::m_SourceFontFileGUID
	String_t* ___m_SourceFontFileGUID_9;
	// UnityEngine.Font TMPro.TMP_FontAsset::m_SourceFontFile
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___m_SourceFontFile_10;
	// TMPro.AtlasPopulationMode TMPro.TMP_FontAsset::m_AtlasPopulationMode
	int32_t ___m_AtlasPopulationMode_11;
	// UnityEngine.TextCore.FaceInfo TMPro.TMP_FontAsset::m_FaceInfo
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979  ___m_FaceInfo_12;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphTable
	List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * ___m_GlyphTable_13;
	// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphLookupDictionary
	Dictionary_2_tDA5C03A58B5E004C6D454EF31BF9C5307FE785BE * ___m_GlyphLookupDictionary_14;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterTable
	List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 * ___m_CharacterTable_15;
	// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterLookupDictionary
	Dictionary_2_t6BB43D0F158FE3B19E71F6F48A84283B5250E1B4 * ___m_CharacterLookupDictionary_16;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::m_AtlasTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_AtlasTexture_17;
	// UnityEngine.Texture2D[] TMPro.TMP_FontAsset::m_AtlasTextures
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___m_AtlasTextures_18;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasTextureIndex
	int32_t ___m_AtlasTextureIndex_19;
	// System.Boolean TMPro.TMP_FontAsset::m_IsMultiAtlasTexturesEnabled
	bool ___m_IsMultiAtlasTexturesEnabled_20;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_UsedGlyphRects
	List_1_tE870449A6BC21548542BC92F18B284004FA8668A * ___m_UsedGlyphRects_21;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_FreeGlyphRects
	List_1_tE870449A6BC21548542BC92F18B284004FA8668A * ___m_FreeGlyphRects_22;
	// TMPro.FaceInfo_Legacy TMPro.TMP_FontAsset::m_fontInfo
	FaceInfo_Legacy_t9002691F7DB46E42ADE3B69A8861C144379D192F * ___m_fontInfo_23;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::atlas
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___atlas_24;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasWidth
	int32_t ___m_AtlasWidth_25;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasHeight
	int32_t ___m_AtlasHeight_26;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasPadding
	int32_t ___m_AtlasPadding_27;
	// UnityEngine.TextCore.LowLevel.GlyphRenderMode TMPro.TMP_FontAsset::m_AtlasRenderMode
	int32_t ___m_AtlasRenderMode_28;
	// System.Collections.Generic.List`1<TMPro.TMP_Glyph> TMPro.TMP_FontAsset::m_glyphInfoList
	List_1_t3F387498A6DE374D972293A68DB91FDF1A530E2E * ___m_glyphInfoList_29;
	// TMPro.KerningTable TMPro.TMP_FontAsset::m_KerningTable
	KerningTable_t820628F74178B0781DBFFB55BF1277247047617D * ___m_KerningTable_30;
	// TMPro.TMP_FontFeatureTable TMPro.TMP_FontAsset::m_FontFeatureTable
	TMP_FontFeatureTable_t4A06C31656BB8CB686657DC85E0179FA3D15E2F1 * ___m_FontFeatureTable_31;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::fallbackFontAssets
	List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * ___fallbackFontAssets_32;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::m_FallbackFontAssetTable
	List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * ___m_FallbackFontAssetTable_33;
	// TMPro.FontAssetCreationSettings TMPro.TMP_FontAsset::m_CreationSettings
	FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1  ___m_CreationSettings_34;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::m_FontWeightTable
	TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC* ___m_FontWeightTable_35;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::fontWeights
	TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC* ___fontWeights_36;
	// System.Single TMPro.TMP_FontAsset::normalStyle
	float ___normalStyle_37;
	// System.Single TMPro.TMP_FontAsset::normalSpacingOffset
	float ___normalSpacingOffset_38;
	// System.Single TMPro.TMP_FontAsset::boldStyle
	float ___boldStyle_39;
	// System.Single TMPro.TMP_FontAsset::boldSpacing
	float ___boldSpacing_40;
	// System.Byte TMPro.TMP_FontAsset::italicStyle
	uint8_t ___italicStyle_41;
	// System.Byte TMPro.TMP_FontAsset::tabSize
	uint8_t ___tabSize_42;
	// System.Byte TMPro.TMP_FontAsset::m_oldTabSize
	uint8_t ___m_oldTabSize_43;
	// System.Boolean TMPro.TMP_FontAsset::m_IsFontAssetLookupTablesDirty
	bool ___m_IsFontAssetLookupTablesDirty_44;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsToPack
	List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * ___m_GlyphsToPack_47;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsPacked
	List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * ___m_GlyphsPacked_48;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsToRender
	List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * ___m_GlyphsToRender_49;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexList
	List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * ___m_GlyphIndexList_50;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_MissingUnicodesFromFontFile
	HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * ___m_MissingUnicodesFromFontFile_57;

public:
	inline static int32_t get_offset_of_m_Version_8() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_Version_8)); }
	inline String_t* get_m_Version_8() const { return ___m_Version_8; }
	inline String_t** get_address_of_m_Version_8() { return &___m_Version_8; }
	inline void set_m_Version_8(String_t* value)
	{
		___m_Version_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceFontFileGUID_9() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_SourceFontFileGUID_9)); }
	inline String_t* get_m_SourceFontFileGUID_9() const { return ___m_SourceFontFileGUID_9; }
	inline String_t** get_address_of_m_SourceFontFileGUID_9() { return &___m_SourceFontFileGUID_9; }
	inline void set_m_SourceFontFileGUID_9(String_t* value)
	{
		___m_SourceFontFileGUID_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceFontFileGUID_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceFontFile_10() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_SourceFontFile_10)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_m_SourceFontFile_10() const { return ___m_SourceFontFile_10; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_m_SourceFontFile_10() { return &___m_SourceFontFile_10; }
	inline void set_m_SourceFontFile_10(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___m_SourceFontFile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceFontFile_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_AtlasPopulationMode_11() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasPopulationMode_11)); }
	inline int32_t get_m_AtlasPopulationMode_11() const { return ___m_AtlasPopulationMode_11; }
	inline int32_t* get_address_of_m_AtlasPopulationMode_11() { return &___m_AtlasPopulationMode_11; }
	inline void set_m_AtlasPopulationMode_11(int32_t value)
	{
		___m_AtlasPopulationMode_11 = value;
	}

	inline static int32_t get_offset_of_m_FaceInfo_12() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_FaceInfo_12)); }
	inline FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979  get_m_FaceInfo_12() const { return ___m_FaceInfo_12; }
	inline FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979 * get_address_of_m_FaceInfo_12() { return &___m_FaceInfo_12; }
	inline void set_m_FaceInfo_12(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979  value)
	{
		___m_FaceInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FaceInfo_12))->___m_FamilyName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FaceInfo_12))->___m_StyleName_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_GlyphTable_13() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_GlyphTable_13)); }
	inline List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * get_m_GlyphTable_13() const { return ___m_GlyphTable_13; }
	inline List_1_tA740960861E81663EBF03A56DE52E25A9283E954 ** get_address_of_m_GlyphTable_13() { return &___m_GlyphTable_13; }
	inline void set_m_GlyphTable_13(List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * value)
	{
		___m_GlyphTable_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphTable_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlyphLookupDictionary_14() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_GlyphLookupDictionary_14)); }
	inline Dictionary_2_tDA5C03A58B5E004C6D454EF31BF9C5307FE785BE * get_m_GlyphLookupDictionary_14() const { return ___m_GlyphLookupDictionary_14; }
	inline Dictionary_2_tDA5C03A58B5E004C6D454EF31BF9C5307FE785BE ** get_address_of_m_GlyphLookupDictionary_14() { return &___m_GlyphLookupDictionary_14; }
	inline void set_m_GlyphLookupDictionary_14(Dictionary_2_tDA5C03A58B5E004C6D454EF31BF9C5307FE785BE * value)
	{
		___m_GlyphLookupDictionary_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphLookupDictionary_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_CharacterTable_15() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_CharacterTable_15)); }
	inline List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 * get_m_CharacterTable_15() const { return ___m_CharacterTable_15; }
	inline List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 ** get_address_of_m_CharacterTable_15() { return &___m_CharacterTable_15; }
	inline void set_m_CharacterTable_15(List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 * value)
	{
		___m_CharacterTable_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CharacterTable_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_CharacterLookupDictionary_16() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_CharacterLookupDictionary_16)); }
	inline Dictionary_2_t6BB43D0F158FE3B19E71F6F48A84283B5250E1B4 * get_m_CharacterLookupDictionary_16() const { return ___m_CharacterLookupDictionary_16; }
	inline Dictionary_2_t6BB43D0F158FE3B19E71F6F48A84283B5250E1B4 ** get_address_of_m_CharacterLookupDictionary_16() { return &___m_CharacterLookupDictionary_16; }
	inline void set_m_CharacterLookupDictionary_16(Dictionary_2_t6BB43D0F158FE3B19E71F6F48A84283B5250E1B4 * value)
	{
		___m_CharacterLookupDictionary_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CharacterLookupDictionary_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_AtlasTexture_17() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasTexture_17)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_AtlasTexture_17() const { return ___m_AtlasTexture_17; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_AtlasTexture_17() { return &___m_AtlasTexture_17; }
	inline void set_m_AtlasTexture_17(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_AtlasTexture_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AtlasTexture_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_AtlasTextures_18() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasTextures_18)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get_m_AtlasTextures_18() const { return ___m_AtlasTextures_18; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of_m_AtlasTextures_18() { return &___m_AtlasTextures_18; }
	inline void set_m_AtlasTextures_18(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		___m_AtlasTextures_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AtlasTextures_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_AtlasTextureIndex_19() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasTextureIndex_19)); }
	inline int32_t get_m_AtlasTextureIndex_19() const { return ___m_AtlasTextureIndex_19; }
	inline int32_t* get_address_of_m_AtlasTextureIndex_19() { return &___m_AtlasTextureIndex_19; }
	inline void set_m_AtlasTextureIndex_19(int32_t value)
	{
		___m_AtlasTextureIndex_19 = value;
	}

	inline static int32_t get_offset_of_m_IsMultiAtlasTexturesEnabled_20() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_IsMultiAtlasTexturesEnabled_20)); }
	inline bool get_m_IsMultiAtlasTexturesEnabled_20() const { return ___m_IsMultiAtlasTexturesEnabled_20; }
	inline bool* get_address_of_m_IsMultiAtlasTexturesEnabled_20() { return &___m_IsMultiAtlasTexturesEnabled_20; }
	inline void set_m_IsMultiAtlasTexturesEnabled_20(bool value)
	{
		___m_IsMultiAtlasTexturesEnabled_20 = value;
	}

	inline static int32_t get_offset_of_m_UsedGlyphRects_21() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_UsedGlyphRects_21)); }
	inline List_1_tE870449A6BC21548542BC92F18B284004FA8668A * get_m_UsedGlyphRects_21() const { return ___m_UsedGlyphRects_21; }
	inline List_1_tE870449A6BC21548542BC92F18B284004FA8668A ** get_address_of_m_UsedGlyphRects_21() { return &___m_UsedGlyphRects_21; }
	inline void set_m_UsedGlyphRects_21(List_1_tE870449A6BC21548542BC92F18B284004FA8668A * value)
	{
		___m_UsedGlyphRects_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsedGlyphRects_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_FreeGlyphRects_22() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_FreeGlyphRects_22)); }
	inline List_1_tE870449A6BC21548542BC92F18B284004FA8668A * get_m_FreeGlyphRects_22() const { return ___m_FreeGlyphRects_22; }
	inline List_1_tE870449A6BC21548542BC92F18B284004FA8668A ** get_address_of_m_FreeGlyphRects_22() { return &___m_FreeGlyphRects_22; }
	inline void set_m_FreeGlyphRects_22(List_1_tE870449A6BC21548542BC92F18B284004FA8668A * value)
	{
		___m_FreeGlyphRects_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FreeGlyphRects_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontInfo_23() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_fontInfo_23)); }
	inline FaceInfo_Legacy_t9002691F7DB46E42ADE3B69A8861C144379D192F * get_m_fontInfo_23() const { return ___m_fontInfo_23; }
	inline FaceInfo_Legacy_t9002691F7DB46E42ADE3B69A8861C144379D192F ** get_address_of_m_fontInfo_23() { return &___m_fontInfo_23; }
	inline void set_m_fontInfo_23(FaceInfo_Legacy_t9002691F7DB46E42ADE3B69A8861C144379D192F * value)
	{
		___m_fontInfo_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontInfo_23), (void*)value);
	}

	inline static int32_t get_offset_of_atlas_24() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___atlas_24)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_atlas_24() const { return ___atlas_24; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_atlas_24() { return &___atlas_24; }
	inline void set_atlas_24(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___atlas_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atlas_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_AtlasWidth_25() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasWidth_25)); }
	inline int32_t get_m_AtlasWidth_25() const { return ___m_AtlasWidth_25; }
	inline int32_t* get_address_of_m_AtlasWidth_25() { return &___m_AtlasWidth_25; }
	inline void set_m_AtlasWidth_25(int32_t value)
	{
		___m_AtlasWidth_25 = value;
	}

	inline static int32_t get_offset_of_m_AtlasHeight_26() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasHeight_26)); }
	inline int32_t get_m_AtlasHeight_26() const { return ___m_AtlasHeight_26; }
	inline int32_t* get_address_of_m_AtlasHeight_26() { return &___m_AtlasHeight_26; }
	inline void set_m_AtlasHeight_26(int32_t value)
	{
		___m_AtlasHeight_26 = value;
	}

	inline static int32_t get_offset_of_m_AtlasPadding_27() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasPadding_27)); }
	inline int32_t get_m_AtlasPadding_27() const { return ___m_AtlasPadding_27; }
	inline int32_t* get_address_of_m_AtlasPadding_27() { return &___m_AtlasPadding_27; }
	inline void set_m_AtlasPadding_27(int32_t value)
	{
		___m_AtlasPadding_27 = value;
	}

	inline static int32_t get_offset_of_m_AtlasRenderMode_28() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_AtlasRenderMode_28)); }
	inline int32_t get_m_AtlasRenderMode_28() const { return ___m_AtlasRenderMode_28; }
	inline int32_t* get_address_of_m_AtlasRenderMode_28() { return &___m_AtlasRenderMode_28; }
	inline void set_m_AtlasRenderMode_28(int32_t value)
	{
		___m_AtlasRenderMode_28 = value;
	}

	inline static int32_t get_offset_of_m_glyphInfoList_29() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_glyphInfoList_29)); }
	inline List_1_t3F387498A6DE374D972293A68DB91FDF1A530E2E * get_m_glyphInfoList_29() const { return ___m_glyphInfoList_29; }
	inline List_1_t3F387498A6DE374D972293A68DB91FDF1A530E2E ** get_address_of_m_glyphInfoList_29() { return &___m_glyphInfoList_29; }
	inline void set_m_glyphInfoList_29(List_1_t3F387498A6DE374D972293A68DB91FDF1A530E2E * value)
	{
		___m_glyphInfoList_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_glyphInfoList_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_KerningTable_30() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_KerningTable_30)); }
	inline KerningTable_t820628F74178B0781DBFFB55BF1277247047617D * get_m_KerningTable_30() const { return ___m_KerningTable_30; }
	inline KerningTable_t820628F74178B0781DBFFB55BF1277247047617D ** get_address_of_m_KerningTable_30() { return &___m_KerningTable_30; }
	inline void set_m_KerningTable_30(KerningTable_t820628F74178B0781DBFFB55BF1277247047617D * value)
	{
		___m_KerningTable_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_KerningTable_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_FontFeatureTable_31() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_FontFeatureTable_31)); }
	inline TMP_FontFeatureTable_t4A06C31656BB8CB686657DC85E0179FA3D15E2F1 * get_m_FontFeatureTable_31() const { return ___m_FontFeatureTable_31; }
	inline TMP_FontFeatureTable_t4A06C31656BB8CB686657DC85E0179FA3D15E2F1 ** get_address_of_m_FontFeatureTable_31() { return &___m_FontFeatureTable_31; }
	inline void set_m_FontFeatureTable_31(TMP_FontFeatureTable_t4A06C31656BB8CB686657DC85E0179FA3D15E2F1 * value)
	{
		___m_FontFeatureTable_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontFeatureTable_31), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackFontAssets_32() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___fallbackFontAssets_32)); }
	inline List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * get_fallbackFontAssets_32() const { return ___fallbackFontAssets_32; }
	inline List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD ** get_address_of_fallbackFontAssets_32() { return &___fallbackFontAssets_32; }
	inline void set_fallbackFontAssets_32(List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * value)
	{
		___fallbackFontAssets_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackFontAssets_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_FallbackFontAssetTable_33() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_FallbackFontAssetTable_33)); }
	inline List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * get_m_FallbackFontAssetTable_33() const { return ___m_FallbackFontAssetTable_33; }
	inline List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD ** get_address_of_m_FallbackFontAssetTable_33() { return &___m_FallbackFontAssetTable_33; }
	inline void set_m_FallbackFontAssetTable_33(List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * value)
	{
		___m_FallbackFontAssetTable_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FallbackFontAssetTable_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_CreationSettings_34() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_CreationSettings_34)); }
	inline FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1  get_m_CreationSettings_34() const { return ___m_CreationSettings_34; }
	inline FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1 * get_address_of_m_CreationSettings_34() { return &___m_CreationSettings_34; }
	inline void set_m_CreationSettings_34(FontAssetCreationSettings_t70B67907C3CF96F5289A141EA8D87A2A422802A1  value)
	{
		___m_CreationSettings_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreationSettings_34))->___sourceFontFileName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreationSettings_34))->___sourceFontFileGUID_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreationSettings_34))->___characterSequence_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreationSettings_34))->___referencedFontAssetGUID_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreationSettings_34))->___referencedTextAssetGUID_11), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_FontWeightTable_35() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_FontWeightTable_35)); }
	inline TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC* get_m_FontWeightTable_35() const { return ___m_FontWeightTable_35; }
	inline TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC** get_address_of_m_FontWeightTable_35() { return &___m_FontWeightTable_35; }
	inline void set_m_FontWeightTable_35(TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC* value)
	{
		___m_FontWeightTable_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontWeightTable_35), (void*)value);
	}

	inline static int32_t get_offset_of_fontWeights_36() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___fontWeights_36)); }
	inline TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC* get_fontWeights_36() const { return ___fontWeights_36; }
	inline TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC** get_address_of_fontWeights_36() { return &___fontWeights_36; }
	inline void set_fontWeights_36(TMP_FontWeightPairU5BU5D_t537F746E35AD2938424D897D937D0F26B0EC45BC* value)
	{
		___fontWeights_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontWeights_36), (void*)value);
	}

	inline static int32_t get_offset_of_normalStyle_37() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___normalStyle_37)); }
	inline float get_normalStyle_37() const { return ___normalStyle_37; }
	inline float* get_address_of_normalStyle_37() { return &___normalStyle_37; }
	inline void set_normalStyle_37(float value)
	{
		___normalStyle_37 = value;
	}

	inline static int32_t get_offset_of_normalSpacingOffset_38() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___normalSpacingOffset_38)); }
	inline float get_normalSpacingOffset_38() const { return ___normalSpacingOffset_38; }
	inline float* get_address_of_normalSpacingOffset_38() { return &___normalSpacingOffset_38; }
	inline void set_normalSpacingOffset_38(float value)
	{
		___normalSpacingOffset_38 = value;
	}

	inline static int32_t get_offset_of_boldStyle_39() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___boldStyle_39)); }
	inline float get_boldStyle_39() const { return ___boldStyle_39; }
	inline float* get_address_of_boldStyle_39() { return &___boldStyle_39; }
	inline void set_boldStyle_39(float value)
	{
		___boldStyle_39 = value;
	}

	inline static int32_t get_offset_of_boldSpacing_40() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___boldSpacing_40)); }
	inline float get_boldSpacing_40() const { return ___boldSpacing_40; }
	inline float* get_address_of_boldSpacing_40() { return &___boldSpacing_40; }
	inline void set_boldSpacing_40(float value)
	{
		___boldSpacing_40 = value;
	}

	inline static int32_t get_offset_of_italicStyle_41() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___italicStyle_41)); }
	inline uint8_t get_italicStyle_41() const { return ___italicStyle_41; }
	inline uint8_t* get_address_of_italicStyle_41() { return &___italicStyle_41; }
	inline void set_italicStyle_41(uint8_t value)
	{
		___italicStyle_41 = value;
	}

	inline static int32_t get_offset_of_tabSize_42() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___tabSize_42)); }
	inline uint8_t get_tabSize_42() const { return ___tabSize_42; }
	inline uint8_t* get_address_of_tabSize_42() { return &___tabSize_42; }
	inline void set_tabSize_42(uint8_t value)
	{
		___tabSize_42 = value;
	}

	inline static int32_t get_offset_of_m_oldTabSize_43() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_oldTabSize_43)); }
	inline uint8_t get_m_oldTabSize_43() const { return ___m_oldTabSize_43; }
	inline uint8_t* get_address_of_m_oldTabSize_43() { return &___m_oldTabSize_43; }
	inline void set_m_oldTabSize_43(uint8_t value)
	{
		___m_oldTabSize_43 = value;
	}

	inline static int32_t get_offset_of_m_IsFontAssetLookupTablesDirty_44() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_IsFontAssetLookupTablesDirty_44)); }
	inline bool get_m_IsFontAssetLookupTablesDirty_44() const { return ___m_IsFontAssetLookupTablesDirty_44; }
	inline bool* get_address_of_m_IsFontAssetLookupTablesDirty_44() { return &___m_IsFontAssetLookupTablesDirty_44; }
	inline void set_m_IsFontAssetLookupTablesDirty_44(bool value)
	{
		___m_IsFontAssetLookupTablesDirty_44 = value;
	}

	inline static int32_t get_offset_of_m_GlyphsToPack_47() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_GlyphsToPack_47)); }
	inline List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * get_m_GlyphsToPack_47() const { return ___m_GlyphsToPack_47; }
	inline List_1_tA740960861E81663EBF03A56DE52E25A9283E954 ** get_address_of_m_GlyphsToPack_47() { return &___m_GlyphsToPack_47; }
	inline void set_m_GlyphsToPack_47(List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * value)
	{
		___m_GlyphsToPack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphsToPack_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlyphsPacked_48() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_GlyphsPacked_48)); }
	inline List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * get_m_GlyphsPacked_48() const { return ___m_GlyphsPacked_48; }
	inline List_1_tA740960861E81663EBF03A56DE52E25A9283E954 ** get_address_of_m_GlyphsPacked_48() { return &___m_GlyphsPacked_48; }
	inline void set_m_GlyphsPacked_48(List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * value)
	{
		___m_GlyphsPacked_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphsPacked_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlyphsToRender_49() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_GlyphsToRender_49)); }
	inline List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * get_m_GlyphsToRender_49() const { return ___m_GlyphsToRender_49; }
	inline List_1_tA740960861E81663EBF03A56DE52E25A9283E954 ** get_address_of_m_GlyphsToRender_49() { return &___m_GlyphsToRender_49; }
	inline void set_m_GlyphsToRender_49(List_1_tA740960861E81663EBF03A56DE52E25A9283E954 * value)
	{
		___m_GlyphsToRender_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphsToRender_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlyphIndexList_50() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_GlyphIndexList_50)); }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * get_m_GlyphIndexList_50() const { return ___m_GlyphIndexList_50; }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 ** get_address_of_m_GlyphIndexList_50() { return &___m_GlyphIndexList_50; }
	inline void set_m_GlyphIndexList_50(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * value)
	{
		___m_GlyphIndexList_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphIndexList_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_MissingUnicodesFromFontFile_57() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2, ___m_MissingUnicodesFromFontFile_57)); }
	inline HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * get_m_MissingUnicodesFromFontFile_57() const { return ___m_MissingUnicodesFromFontFile_57; }
	inline HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B ** get_address_of_m_MissingUnicodesFromFontFile_57() { return &___m_MissingUnicodesFromFontFile_57; }
	inline void set_m_MissingUnicodesFromFontFile_57(HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * value)
	{
		___m_MissingUnicodesFromFontFile_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MissingUnicodesFromFontFile_57), (void*)value);
	}
};

struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields
{
public:
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssetsToUpdate
	List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * ___k_FontAssetsToUpdate_45;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssetsToUpdateLookup
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___k_FontAssetsToUpdateLookup_46;
	// System.UInt32[] TMPro.TMP_FontAsset::s_GlyphIndexArray
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___s_GlyphIndexArray_51;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::s_GlyphsToAdd
	List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * ___s_GlyphsToAdd_52;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::s_GlyphsToAddLookup
	HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * ___s_GlyphsToAddLookup_53;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::s_CharactersToAdd
	List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 * ___s_CharactersToAdd_54;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::s_CharactersToAddLookup
	HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * ___s_CharactersToAddLookup_55;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::s_MissingCharacterList
	List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * ___s_MissingCharacterList_56;

public:
	inline static int32_t get_offset_of_k_FontAssetsToUpdate_45() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_FontAssetsToUpdate_45)); }
	inline List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * get_k_FontAssetsToUpdate_45() const { return ___k_FontAssetsToUpdate_45; }
	inline List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD ** get_address_of_k_FontAssetsToUpdate_45() { return &___k_FontAssetsToUpdate_45; }
	inline void set_k_FontAssetsToUpdate_45(List_1_tBE22F0B6C1EBDB760862FAD201AFE75E3DEBBBFD * value)
	{
		___k_FontAssetsToUpdate_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_FontAssetsToUpdate_45), (void*)value);
	}

	inline static int32_t get_offset_of_k_FontAssetsToUpdateLookup_46() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___k_FontAssetsToUpdateLookup_46)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_k_FontAssetsToUpdateLookup_46() const { return ___k_FontAssetsToUpdateLookup_46; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_k_FontAssetsToUpdateLookup_46() { return &___k_FontAssetsToUpdateLookup_46; }
	inline void set_k_FontAssetsToUpdateLookup_46(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___k_FontAssetsToUpdateLookup_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_FontAssetsToUpdateLookup_46), (void*)value);
	}

	inline static int32_t get_offset_of_s_GlyphIndexArray_51() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___s_GlyphIndexArray_51)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_s_GlyphIndexArray_51() const { return ___s_GlyphIndexArray_51; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_s_GlyphIndexArray_51() { return &___s_GlyphIndexArray_51; }
	inline void set_s_GlyphIndexArray_51(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___s_GlyphIndexArray_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GlyphIndexArray_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_GlyphsToAdd_52() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___s_GlyphsToAdd_52)); }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * get_s_GlyphsToAdd_52() const { return ___s_GlyphsToAdd_52; }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 ** get_address_of_s_GlyphsToAdd_52() { return &___s_GlyphsToAdd_52; }
	inline void set_s_GlyphsToAdd_52(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * value)
	{
		___s_GlyphsToAdd_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GlyphsToAdd_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_GlyphsToAddLookup_53() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___s_GlyphsToAddLookup_53)); }
	inline HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * get_s_GlyphsToAddLookup_53() const { return ___s_GlyphsToAddLookup_53; }
	inline HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B ** get_address_of_s_GlyphsToAddLookup_53() { return &___s_GlyphsToAddLookup_53; }
	inline void set_s_GlyphsToAddLookup_53(HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * value)
	{
		___s_GlyphsToAddLookup_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_GlyphsToAddLookup_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_CharactersToAdd_54() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___s_CharactersToAdd_54)); }
	inline List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 * get_s_CharactersToAdd_54() const { return ___s_CharactersToAdd_54; }
	inline List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 ** get_address_of_s_CharactersToAdd_54() { return &___s_CharactersToAdd_54; }
	inline void set_s_CharactersToAdd_54(List_1_tE8F1656A7A5AF5AEE27ED7B656B56CACB417FEB8 * value)
	{
		___s_CharactersToAdd_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CharactersToAdd_54), (void*)value);
	}

	inline static int32_t get_offset_of_s_CharactersToAddLookup_55() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___s_CharactersToAddLookup_55)); }
	inline HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * get_s_CharactersToAddLookup_55() const { return ___s_CharactersToAddLookup_55; }
	inline HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B ** get_address_of_s_CharactersToAddLookup_55() { return &___s_CharactersToAddLookup_55; }
	inline void set_s_CharactersToAddLookup_55(HashSet_1_tE1C51BB41CBDB9CD639DE8689780E3494FDE999B * value)
	{
		___s_CharactersToAddLookup_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CharactersToAddLookup_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_MissingCharacterList_56() { return static_cast<int32_t>(offsetof(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2_StaticFields, ___s_MissingCharacterList_56)); }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * get_s_MissingCharacterList_56() const { return ___s_MissingCharacterList_56; }
	inline List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 ** get_address_of_s_MissingCharacterList_56() { return &___s_MissingCharacterList_56; }
	inline void set_s_MissingCharacterList_56(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * value)
	{
		___s_MissingCharacterList_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MissingCharacterList_56), (void*)value);
	}
};


// TMPro.TMP_SpriteAsset
struct  TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714  : public TMP_Asset_tEE129B2B2FE167D4B860286167207DD3AD45B45E
{
public:
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32> TMPro.TMP_SpriteAsset::m_UnicodeLookup
	Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * ___m_UnicodeLookup_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_SpriteAsset::m_NameLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_NameLookup_9;
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32> TMPro.TMP_SpriteAsset::m_GlyphIndexLookup
	Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * ___m_GlyphIndexLookup_10;
	// System.String TMPro.TMP_SpriteAsset::m_Version
	String_t* ___m_Version_11;
	// UnityEngine.TextCore.FaceInfo TMPro.TMP_SpriteAsset::m_FaceInfo
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979  ___m_FaceInfo_12;
	// UnityEngine.Texture TMPro.TMP_SpriteAsset::spriteSheet
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___spriteSheet_13;
	// System.Collections.Generic.List`1<TMPro.TMP_SpriteCharacter> TMPro.TMP_SpriteAsset::m_SpriteCharacterTable
	List_1_t7850FCF22796079854614A9268CE558E34108A02 * ___m_SpriteCharacterTable_14;
	// System.Collections.Generic.List`1<TMPro.TMP_SpriteGlyph> TMPro.TMP_SpriteAsset::m_SpriteGlyphTable
	List_1_tF7848685CB961B42606831D4C30E1C31069D91C8 * ___m_SpriteGlyphTable_15;
	// System.Collections.Generic.List`1<TMPro.TMP_Sprite> TMPro.TMP_SpriteAsset::spriteInfoList
	List_1_tF6EAF0B1BB91EA856A5893AC3A160A3B76E5BB67 * ___spriteInfoList_16;
	// System.Collections.Generic.List`1<TMPro.TMP_SpriteAsset> TMPro.TMP_SpriteAsset::fallbackSpriteAssets
	List_1_tD057592B5C6E2EF6CBE5ADC501E5D58919E8B364 * ___fallbackSpriteAssets_17;
	// System.Boolean TMPro.TMP_SpriteAsset::m_IsSpriteAssetLookupTablesDirty
	bool ___m_IsSpriteAssetLookupTablesDirty_18;

public:
	inline static int32_t get_offset_of_m_UnicodeLookup_8() { return static_cast<int32_t>(offsetof(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714, ___m_UnicodeLookup_8)); }
	inline Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * get_m_UnicodeLookup_8() const { return ___m_UnicodeLookup_8; }
	inline Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 ** get_address_of_m_UnicodeLookup_8() { return &___m_UnicodeLookup_8; }
	inline void set_m_UnicodeLookup_8(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * value)
	{
		___m_UnicodeLookup_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnicodeLookup_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_NameLookup_9() { return static_cast<int32_t>(offsetof(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714, ___m_NameLookup_9)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_NameLookup_9() const { return ___m_NameLookup_9; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_NameLookup_9() { return &___m_NameLookup_9; }
	inline void set_m_NameLookup_9(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_NameLookup_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NameLookup_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlyphIndexLookup_10() { return static_cast<int32_t>(offsetof(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714, ___m_GlyphIndexLookup_10)); }
	inline Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * get_m_GlyphIndexLookup_10() const { return ___m_GlyphIndexLookup_10; }
	inline Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 ** get_address_of_m_GlyphIndexLookup_10() { return &___m_GlyphIndexLookup_10; }
	inline void set_m_GlyphIndexLookup_10(Dictionary_2_t613970F5DB840DE525998C9C40E993772B7B7F60 * value)
	{
		___m_GlyphIndexLookup_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlyphIndexLookup_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_11() { return static_cast<int32_t>(offsetof(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714, ___m_Version_11)); }
	inline String_t* get_m_Version_11() const { return ___m_Version_11; }
	inline String_t** get_address_of_m_Version_11() { return &___m_Version_11; }
	inline void set_m_Version_11(String_t* value)
	{
		___m_Version_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_FaceInfo_12() { return static_cast<int32_t>(offsetof(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714, ___m_FaceInfo_12)); }
	inline FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979  get_m_FaceInfo_12() const { return ___m_FaceInfo_12; }
	inline FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979 * get_address_of_m_FaceInfo_12() { return &___m_FaceInfo_12; }
	inline void set_m_FaceInfo_12(FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979  value)
	{
		___m_FaceInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FaceInfo_12))->___m_FamilyName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FaceInfo_12))->___m_StyleName_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_spriteSheet_13() { return static_cast<int32_t>(offsetof(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714, ___spriteSheet_13)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_spriteSheet_13() const { return ___spriteSheet_13; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_spriteSheet_13() { return &___spriteSheet_13; }
	inline void set_spriteSheet_13(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___spriteSheet_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteSheet_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_SpriteCharacterTable_14() { return static_cast<int32_t>(offsetof(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714, ___m_SpriteCharacterTable_14)); }
	inline List_1_t7850FCF22796079854614A9268CE558E34108A02 * get_m_SpriteCharacterTable_14() const { return ___m_SpriteCharacterTable_14; }
	inline List_1_t7850FCF22796079854614A9268CE558E34108A02 ** get_address_of_m_SpriteCharacterTable_14() { return &___m_SpriteCharacterTable_14; }
	inline void set_m_SpriteCharacterTable_14(List_1_t7850FCF22796079854614A9268CE558E34108A02 * value)
	{
		___m_SpriteCharacterTable_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SpriteCharacterTable_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_SpriteGlyphTable_15() { return static_cast<int32_t>(offsetof(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714, ___m_SpriteGlyphTable_15)); }
	inline List_1_tF7848685CB961B42606831D4C30E1C31069D91C8 * get_m_SpriteGlyphTable_15() const { return ___m_SpriteGlyphTable_15; }
	inline List_1_tF7848685CB961B42606831D4C30E1C31069D91C8 ** get_address_of_m_SpriteGlyphTable_15() { return &___m_SpriteGlyphTable_15; }
	inline void set_m_SpriteGlyphTable_15(List_1_tF7848685CB961B42606831D4C30E1C31069D91C8 * value)
	{
		___m_SpriteGlyphTable_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SpriteGlyphTable_15), (void*)value);
	}

	inline static int32_t get_offset_of_spriteInfoList_16() { return static_cast<int32_t>(offsetof(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714, ___spriteInfoList_16)); }
	inline List_1_tF6EAF0B1BB91EA856A5893AC3A160A3B76E5BB67 * get_spriteInfoList_16() const { return ___spriteInfoList_16; }
	inline List_1_tF6EAF0B1BB91EA856A5893AC3A160A3B76E5BB67 ** get_address_of_spriteInfoList_16() { return &___spriteInfoList_16; }
	inline void set_spriteInfoList_16(List_1_tF6EAF0B1BB91EA856A5893AC3A160A3B76E5BB67 * value)
	{
		___spriteInfoList_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteInfoList_16), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackSpriteAssets_17() { return static_cast<int32_t>(offsetof(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714, ___fallbackSpriteAssets_17)); }
	inline List_1_tD057592B5C6E2EF6CBE5ADC501E5D58919E8B364 * get_fallbackSpriteAssets_17() const { return ___fallbackSpriteAssets_17; }
	inline List_1_tD057592B5C6E2EF6CBE5ADC501E5D58919E8B364 ** get_address_of_fallbackSpriteAssets_17() { return &___fallbackSpriteAssets_17; }
	inline void set_fallbackSpriteAssets_17(List_1_tD057592B5C6E2EF6CBE5ADC501E5D58919E8B364 * value)
	{
		___fallbackSpriteAssets_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackSpriteAssets_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsSpriteAssetLookupTablesDirty_18() { return static_cast<int32_t>(offsetof(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714, ___m_IsSpriteAssetLookupTablesDirty_18)); }
	inline bool get_m_IsSpriteAssetLookupTablesDirty_18() const { return ___m_IsSpriteAssetLookupTablesDirty_18; }
	inline bool* get_address_of_m_IsSpriteAssetLookupTablesDirty_18() { return &___m_IsSpriteAssetLookupTablesDirty_18; }
	inline void set_m_IsSpriteAssetLookupTablesDirty_18(bool value)
	{
		___m_IsSpriteAssetLookupTablesDirty_18 = value;
	}
};

struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Int32> TMPro.TMP_SpriteAsset::k_searchedSpriteAssets
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___k_searchedSpriteAssets_19;

public:
	inline static int32_t get_offset_of_k_searchedSpriteAssets_19() { return static_cast<int32_t>(offsetof(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714_StaticFields, ___k_searchedSpriteAssets_19)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_k_searchedSpriteAssets_19() const { return ___k_searchedSpriteAssets_19; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_k_searchedSpriteAssets_19() { return &___k_searchedSpriteAssets_19; }
	inline void set_k_searchedSpriteAssets_19(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___k_searchedSpriteAssets_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_searchedSpriteAssets_19), (void*)value);
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


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// TMPro.TMP_SpriteAnimator
struct  TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> TMPro.TMP_SpriteAnimator::m_animations
	Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * ___m_animations_4;
	// TMPro.TMP_Text TMPro.TMP_SpriteAnimator::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_5;

public:
	inline static int32_t get_offset_of_m_animations_4() { return static_cast<int32_t>(offsetof(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902, ___m_animations_4)); }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * get_m_animations_4() const { return ___m_animations_4; }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 ** get_address_of_m_animations_4() { return &___m_animations_4; }
	inline void set_m_animations_4(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * value)
	{
		___m_animations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_animations_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_5() { return static_cast<int32_t>(offsetof(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902, ___m_TextComponent_5)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_5() const { return ___m_TextComponent_5; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_5() { return &___m_TextComponent_5; }
	inline void set_m_TextComponent_5(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_6;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_7;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_8;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_9;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_10;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_11;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_12;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_13;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_18;

public:
	inline static int32_t get_offset_of_m_Navigation_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_6)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_6() const { return ___m_Navigation_6; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_6() { return &___m_Navigation_6; }
	inline void set_m_Navigation_6(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_7)); }
	inline int32_t get_m_Transition_7() const { return ___m_Transition_7; }
	inline int32_t* get_address_of_m_Transition_7() { return &___m_Transition_7; }
	inline void set_m_Transition_7(int32_t value)
	{
		___m_Transition_7 = value;
	}

	inline static int32_t get_offset_of_m_Colors_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_8)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_8() const { return ___m_Colors_8; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_8() { return &___m_Colors_8; }
	inline void set_m_Colors_8(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_8 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_9)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_9() const { return ___m_SpriteState_9; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_9() { return &___m_SpriteState_9; }
	inline void set_m_SpriteState_9(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_10)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_10() const { return ___m_AnimationTriggers_10; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_10() { return &___m_AnimationTriggers_10; }
	inline void set_m_AnimationTriggers_10(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_11)); }
	inline bool get_m_Interactable_11() const { return ___m_Interactable_11; }
	inline bool* get_address_of_m_Interactable_11() { return &___m_Interactable_11; }
	inline void set_m_Interactable_11(bool value)
	{
		___m_Interactable_11 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_12)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_12() const { return ___m_TargetGraphic_12; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_12() { return &___m_TargetGraphic_12; }
	inline void set_m_TargetGraphic_12(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_13)); }
	inline bool get_m_GroupsAllowInteraction_13() const { return ___m_GroupsAllowInteraction_13; }
	inline bool* get_address_of_m_GroupsAllowInteraction_13() { return &___m_GroupsAllowInteraction_13; }
	inline void set_m_GroupsAllowInteraction_13(bool value)
	{
		___m_GroupsAllowInteraction_13 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_14)); }
	inline int32_t get_m_CurrentIndex_14() const { return ___m_CurrentIndex_14; }
	inline int32_t* get_address_of_m_CurrentIndex_14() { return &___m_CurrentIndex_14; }
	inline void set_m_CurrentIndex_14(int32_t value)
	{
		___m_CurrentIndex_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_15() const { return ___U3CisPointerInsideU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_15() { return &___U3CisPointerInsideU3Ek__BackingField_15; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_16() const { return ___U3CisPointerDownU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_16() { return &___U3CisPointerDownU3Ek__BackingField_16; }
	inline void set_U3CisPointerDownU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_17)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_17() const { return ___U3ChasSelectionU3Ek__BackingField_17; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_17() { return &___U3ChasSelectionU3Ek__BackingField_17; }
	inline void set_U3ChasSelectionU3Ek__BackingField_17(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_18)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_18() const { return ___m_CanvasGroupCache_18; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_18() { return &___m_CanvasGroupCache_18; }
	inline void set_m_CanvasGroupCache_18(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_18), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// TMPro.TMP_InputField
struct  TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_SoftKeyboard_19;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_21;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_TextViewport_22;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_TextComponentRectMask_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_TextViewportRectMask_24;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_CachedViewportRect_25;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_TextComponent_26;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_TextComponentRectTransform_27;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_28;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___m_VerticalScrollbar_29;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED * ___m_VerticalScrollbarEventHandler_30;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_31;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * ___m_LayoutGroup_32;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_33;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_34;
	// TMPro.TMP_InputField_ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_35;
	// TMPro.TMP_InputField_InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_36;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_37;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_38;
	// TMPro.TMP_InputField_LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_39;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_40;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_41;
	// TMPro.TMP_InputField_CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_42;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_43;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_44;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_45;
	// TMPro.TMP_InputField_SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * ___m_OnEndEdit_46;
	// TMPro.TMP_InputField_SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * ___m_OnSubmit_47;
	// TMPro.TMP_InputField_SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * ___m_OnSelect_48;
	// TMPro.TMP_InputField_SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * ___m_OnDeselect_49;
	// TMPro.TMP_InputField_TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * ___m_OnTextSelection_50;
	// TMPro.TMP_InputField_TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * ___m_OnEndTextSelection_51;
	// TMPro.TMP_InputField_OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * ___m_OnValueChanged_52;
	// TMPro.TMP_InputField_TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC * ___m_OnTouchScreenKeyboardStatusChanged_53;
	// TMPro.TMP_InputField_OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA * ___m_OnValidateInput_54;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_55;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_57;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_58;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_59;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_60;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_61;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_62;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_63;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_64;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_66;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_67;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_68;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_69;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_LastPosition_70;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_71;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_72;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_73;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_74;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_75;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_78;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_79;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_81;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_82;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_83;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_84;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_85;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_86;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_87;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_88;
	// System.Boolean TMPro.TMP_InputField::m_IsScrollbarUpdateRequired
	bool ___m_IsScrollbarUpdateRequired_89;
	// System.Boolean TMPro.TMP_InputField::m_IsUpdatingScrollbarValues
	bool ___m_IsUpdatingScrollbarValues_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_SelectedObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_SelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D * ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_114;

public:
	inline static int32_t get_offset_of_m_SoftKeyboard_19() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_SoftKeyboard_19)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_SoftKeyboard_19() const { return ___m_SoftKeyboard_19; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_SoftKeyboard_19() { return &___m_SoftKeyboard_19; }
	inline void set_m_SoftKeyboard_19(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_SoftKeyboard_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SoftKeyboard_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_RectTransform_21() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_RectTransform_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_21() const { return ___m_RectTransform_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_21() { return &___m_RectTransform_21; }
	inline void set_m_RectTransform_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextViewport_22() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextViewport_22)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_TextViewport_22() const { return ___m_TextViewport_22; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_TextViewport_22() { return &___m_TextViewport_22; }
	inline void set_m_TextViewport_22(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_TextViewport_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextViewport_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponentRectMask_23() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextComponentRectMask_23)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_TextComponentRectMask_23() const { return ___m_TextComponentRectMask_23; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_TextComponentRectMask_23() { return &___m_TextComponentRectMask_23; }
	inline void set_m_TextComponentRectMask_23(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_TextComponentRectMask_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponentRectMask_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextViewportRectMask_24() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextViewportRectMask_24)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_TextViewportRectMask_24() const { return ___m_TextViewportRectMask_24; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_TextViewportRectMask_24() { return &___m_TextViewportRectMask_24; }
	inline void set_m_TextViewportRectMask_24(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_TextViewportRectMask_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextViewportRectMask_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedViewportRect_25() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CachedViewportRect_25)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_CachedViewportRect_25() const { return ___m_CachedViewportRect_25; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_CachedViewportRect_25() { return &___m_CachedViewportRect_25; }
	inline void set_m_CachedViewportRect_25(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_CachedViewportRect_25 = value;
	}

	inline static int32_t get_offset_of_m_TextComponent_26() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextComponent_26)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_TextComponent_26() const { return ___m_TextComponent_26; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_TextComponent_26() { return &___m_TextComponent_26; }
	inline void set_m_TextComponent_26(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_TextComponent_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponentRectTransform_27() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TextComponentRectTransform_27)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_TextComponentRectTransform_27() const { return ___m_TextComponentRectTransform_27; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_TextComponentRectTransform_27() { return &___m_TextComponentRectTransform_27; }
	inline void set_m_TextComponentRectTransform_27(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_TextComponentRectTransform_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponentRectTransform_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_28() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_Placeholder_28)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_28() const { return ___m_Placeholder_28; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_28() { return &___m_Placeholder_28; }
	inline void set_m_Placeholder_28(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_29() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_VerticalScrollbar_29)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_m_VerticalScrollbar_29() const { return ___m_VerticalScrollbar_29; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_m_VerticalScrollbar_29() { return &___m_VerticalScrollbar_29; }
	inline void set_m_VerticalScrollbar_29(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___m_VerticalScrollbar_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbar_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarEventHandler_30() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_VerticalScrollbarEventHandler_30)); }
	inline TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED * get_m_VerticalScrollbarEventHandler_30() const { return ___m_VerticalScrollbarEventHandler_30; }
	inline TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED ** get_address_of_m_VerticalScrollbarEventHandler_30() { return &___m_VerticalScrollbarEventHandler_30; }
	inline void set_m_VerticalScrollbarEventHandler_30(TMP_ScrollbarEventHandler_t7F929E74769BB2B34B1292F2872125C7A18E93ED * value)
	{
		___m_VerticalScrollbarEventHandler_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbarEventHandler_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsDrivenByLayoutComponents_31() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsDrivenByLayoutComponents_31)); }
	inline bool get_m_IsDrivenByLayoutComponents_31() const { return ___m_IsDrivenByLayoutComponents_31; }
	inline bool* get_address_of_m_IsDrivenByLayoutComponents_31() { return &___m_IsDrivenByLayoutComponents_31; }
	inline void set_m_IsDrivenByLayoutComponents_31(bool value)
	{
		___m_IsDrivenByLayoutComponents_31 = value;
	}

	inline static int32_t get_offset_of_m_LayoutGroup_32() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_LayoutGroup_32)); }
	inline LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * get_m_LayoutGroup_32() const { return ___m_LayoutGroup_32; }
	inline LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 ** get_address_of_m_LayoutGroup_32() { return &___m_LayoutGroup_32; }
	inline void set_m_LayoutGroup_32(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * value)
	{
		___m_LayoutGroup_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutGroup_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScrollPosition_33() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ScrollPosition_33)); }
	inline float get_m_ScrollPosition_33() const { return ___m_ScrollPosition_33; }
	inline float* get_address_of_m_ScrollPosition_33() { return &___m_ScrollPosition_33; }
	inline void set_m_ScrollPosition_33(float value)
	{
		___m_ScrollPosition_33 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_34() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ScrollSensitivity_34)); }
	inline float get_m_ScrollSensitivity_34() const { return ___m_ScrollSensitivity_34; }
	inline float* get_address_of_m_ScrollSensitivity_34() { return &___m_ScrollSensitivity_34; }
	inline void set_m_ScrollSensitivity_34(float value)
	{
		___m_ScrollSensitivity_34 = value;
	}

	inline static int32_t get_offset_of_m_ContentType_35() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ContentType_35)); }
	inline int32_t get_m_ContentType_35() const { return ___m_ContentType_35; }
	inline int32_t* get_address_of_m_ContentType_35() { return &___m_ContentType_35; }
	inline void set_m_ContentType_35(int32_t value)
	{
		___m_ContentType_35 = value;
	}

	inline static int32_t get_offset_of_m_InputType_36() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_InputType_36)); }
	inline int32_t get_m_InputType_36() const { return ___m_InputType_36; }
	inline int32_t* get_address_of_m_InputType_36() { return &___m_InputType_36; }
	inline void set_m_InputType_36(int32_t value)
	{
		___m_InputType_36 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_37() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_AsteriskChar_37)); }
	inline Il2CppChar get_m_AsteriskChar_37() const { return ___m_AsteriskChar_37; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_37() { return &___m_AsteriskChar_37; }
	inline void set_m_AsteriskChar_37(Il2CppChar value)
	{
		___m_AsteriskChar_37 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_38() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_KeyboardType_38)); }
	inline int32_t get_m_KeyboardType_38() const { return ___m_KeyboardType_38; }
	inline int32_t* get_address_of_m_KeyboardType_38() { return &___m_KeyboardType_38; }
	inline void set_m_KeyboardType_38(int32_t value)
	{
		___m_KeyboardType_38 = value;
	}

	inline static int32_t get_offset_of_m_LineType_39() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_LineType_39)); }
	inline int32_t get_m_LineType_39() const { return ___m_LineType_39; }
	inline int32_t* get_address_of_m_LineType_39() { return &___m_LineType_39; }
	inline void set_m_LineType_39(int32_t value)
	{
		___m_LineType_39 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_40() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_HideMobileInput_40)); }
	inline bool get_m_HideMobileInput_40() const { return ___m_HideMobileInput_40; }
	inline bool* get_address_of_m_HideMobileInput_40() { return &___m_HideMobileInput_40; }
	inline void set_m_HideMobileInput_40(bool value)
	{
		___m_HideMobileInput_40 = value;
	}

	inline static int32_t get_offset_of_m_HideSoftKeyboard_41() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_HideSoftKeyboard_41)); }
	inline bool get_m_HideSoftKeyboard_41() const { return ___m_HideSoftKeyboard_41; }
	inline bool* get_address_of_m_HideSoftKeyboard_41() { return &___m_HideSoftKeyboard_41; }
	inline void set_m_HideSoftKeyboard_41(bool value)
	{
		___m_HideSoftKeyboard_41 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_42() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CharacterValidation_42)); }
	inline int32_t get_m_CharacterValidation_42() const { return ___m_CharacterValidation_42; }
	inline int32_t* get_address_of_m_CharacterValidation_42() { return &___m_CharacterValidation_42; }
	inline void set_m_CharacterValidation_42(int32_t value)
	{
		___m_CharacterValidation_42 = value;
	}

	inline static int32_t get_offset_of_m_RegexValue_43() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_RegexValue_43)); }
	inline String_t* get_m_RegexValue_43() const { return ___m_RegexValue_43; }
	inline String_t** get_address_of_m_RegexValue_43() { return &___m_RegexValue_43; }
	inline void set_m_RegexValue_43(String_t* value)
	{
		___m_RegexValue_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegexValue_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_GlobalPointSize_44() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_GlobalPointSize_44)); }
	inline float get_m_GlobalPointSize_44() const { return ___m_GlobalPointSize_44; }
	inline float* get_address_of_m_GlobalPointSize_44() { return &___m_GlobalPointSize_44; }
	inline void set_m_GlobalPointSize_44(float value)
	{
		___m_GlobalPointSize_44 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_45() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CharacterLimit_45)); }
	inline int32_t get_m_CharacterLimit_45() const { return ___m_CharacterLimit_45; }
	inline int32_t* get_address_of_m_CharacterLimit_45() { return &___m_CharacterLimit_45; }
	inline void set_m_CharacterLimit_45(int32_t value)
	{
		___m_CharacterLimit_45 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_46() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnEndEdit_46)); }
	inline SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * get_m_OnEndEdit_46() const { return ___m_OnEndEdit_46; }
	inline SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 ** get_address_of_m_OnEndEdit_46() { return &___m_OnEndEdit_46; }
	inline void set_m_OnEndEdit_46(SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * value)
	{
		___m_OnEndEdit_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSubmit_47() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnSubmit_47)); }
	inline SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * get_m_OnSubmit_47() const { return ___m_OnSubmit_47; }
	inline SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 ** get_address_of_m_OnSubmit_47() { return &___m_OnSubmit_47; }
	inline void set_m_OnSubmit_47(SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * value)
	{
		___m_OnSubmit_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSubmit_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSelect_48() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnSelect_48)); }
	inline SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * get_m_OnSelect_48() const { return ___m_OnSelect_48; }
	inline SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 ** get_address_of_m_OnSelect_48() { return &___m_OnSelect_48; }
	inline void set_m_OnSelect_48(SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * value)
	{
		___m_OnSelect_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSelect_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDeselect_49() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnDeselect_49)); }
	inline SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * get_m_OnDeselect_49() const { return ___m_OnDeselect_49; }
	inline SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 ** get_address_of_m_OnDeselect_49() { return &___m_OnDeselect_49; }
	inline void set_m_OnDeselect_49(SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * value)
	{
		___m_OnDeselect_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDeselect_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnTextSelection_50() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnTextSelection_50)); }
	inline TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * get_m_OnTextSelection_50() const { return ___m_OnTextSelection_50; }
	inline TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 ** get_address_of_m_OnTextSelection_50() { return &___m_OnTextSelection_50; }
	inline void set_m_OnTextSelection_50(TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * value)
	{
		___m_OnTextSelection_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnTextSelection_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEndTextSelection_51() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnEndTextSelection_51)); }
	inline TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * get_m_OnEndTextSelection_51() const { return ___m_OnEndTextSelection_51; }
	inline TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 ** get_address_of_m_OnEndTextSelection_51() { return &___m_OnEndTextSelection_51; }
	inline void set_m_OnEndTextSelection_51(TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * value)
	{
		___m_OnEndTextSelection_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndTextSelection_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_52() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnValueChanged_52)); }
	inline OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * get_m_OnValueChanged_52() const { return ___m_OnValueChanged_52; }
	inline OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 ** get_address_of_m_OnValueChanged_52() { return &___m_OnValueChanged_52; }
	inline void set_m_OnValueChanged_52(OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * value)
	{
		___m_OnValueChanged_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnTouchScreenKeyboardStatusChanged_53() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnTouchScreenKeyboardStatusChanged_53)); }
	inline TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC * get_m_OnTouchScreenKeyboardStatusChanged_53() const { return ___m_OnTouchScreenKeyboardStatusChanged_53; }
	inline TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC ** get_address_of_m_OnTouchScreenKeyboardStatusChanged_53() { return &___m_OnTouchScreenKeyboardStatusChanged_53; }
	inline void set_m_OnTouchScreenKeyboardStatusChanged_53(TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC * value)
	{
		___m_OnTouchScreenKeyboardStatusChanged_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnTouchScreenKeyboardStatusChanged_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_54() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnValidateInput_54)); }
	inline OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA * get_m_OnValidateInput_54() const { return ___m_OnValidateInput_54; }
	inline OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA ** get_address_of_m_OnValidateInput_54() { return &___m_OnValidateInput_54; }
	inline void set_m_OnValidateInput_54(OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA * value)
	{
		___m_OnValidateInput_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_55() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretColor_55)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_55() const { return ___m_CaretColor_55; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_55() { return &___m_CaretColor_55; }
	inline void set_m_CaretColor_55(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_55 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_56() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CustomCaretColor_56)); }
	inline bool get_m_CustomCaretColor_56() const { return ___m_CustomCaretColor_56; }
	inline bool* get_address_of_m_CustomCaretColor_56() { return &___m_CustomCaretColor_56; }
	inline void set_m_CustomCaretColor_56(bool value)
	{
		___m_CustomCaretColor_56 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_57() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_SelectionColor_57)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_57() const { return ___m_SelectionColor_57; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_57() { return &___m_SelectionColor_57; }
	inline void set_m_SelectionColor_57(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_57 = value;
	}

	inline static int32_t get_offset_of_m_Text_58() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_Text_58)); }
	inline String_t* get_m_Text_58() const { return ___m_Text_58; }
	inline String_t** get_address_of_m_Text_58() { return &___m_Text_58; }
	inline void set_m_Text_58(String_t* value)
	{
		___m_Text_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_59() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretBlinkRate_59)); }
	inline float get_m_CaretBlinkRate_59() const { return ___m_CaretBlinkRate_59; }
	inline float* get_address_of_m_CaretBlinkRate_59() { return &___m_CaretBlinkRate_59; }
	inline void set_m_CaretBlinkRate_59(float value)
	{
		___m_CaretBlinkRate_59 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_60() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretWidth_60)); }
	inline int32_t get_m_CaretWidth_60() const { return ___m_CaretWidth_60; }
	inline int32_t* get_address_of_m_CaretWidth_60() { return &___m_CaretWidth_60; }
	inline void set_m_CaretWidth_60(int32_t value)
	{
		___m_CaretWidth_60 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_61() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ReadOnly_61)); }
	inline bool get_m_ReadOnly_61() const { return ___m_ReadOnly_61; }
	inline bool* get_address_of_m_ReadOnly_61() { return &___m_ReadOnly_61; }
	inline void set_m_ReadOnly_61(bool value)
	{
		___m_ReadOnly_61 = value;
	}

	inline static int32_t get_offset_of_m_RichText_62() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_RichText_62)); }
	inline bool get_m_RichText_62() const { return ___m_RichText_62; }
	inline bool* get_address_of_m_RichText_62() { return &___m_RichText_62; }
	inline void set_m_RichText_62(bool value)
	{
		___m_RichText_62 = value;
	}

	inline static int32_t get_offset_of_m_StringPosition_63() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_StringPosition_63)); }
	inline int32_t get_m_StringPosition_63() const { return ___m_StringPosition_63; }
	inline int32_t* get_address_of_m_StringPosition_63() { return &___m_StringPosition_63; }
	inline void set_m_StringPosition_63(int32_t value)
	{
		___m_StringPosition_63 = value;
	}

	inline static int32_t get_offset_of_m_StringSelectPosition_64() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_StringSelectPosition_64)); }
	inline int32_t get_m_StringSelectPosition_64() const { return ___m_StringSelectPosition_64; }
	inline int32_t* get_address_of_m_StringSelectPosition_64() { return &___m_StringSelectPosition_64; }
	inline void set_m_StringSelectPosition_64(int32_t value)
	{
		___m_StringSelectPosition_64 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_65() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretPosition_65)); }
	inline int32_t get_m_CaretPosition_65() const { return ___m_CaretPosition_65; }
	inline int32_t* get_address_of_m_CaretPosition_65() { return &___m_CaretPosition_65; }
	inline void set_m_CaretPosition_65(int32_t value)
	{
		___m_CaretPosition_65 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_66() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretSelectPosition_66)); }
	inline int32_t get_m_CaretSelectPosition_66() const { return ___m_CaretSelectPosition_66; }
	inline int32_t* get_address_of_m_CaretSelectPosition_66() { return &___m_CaretSelectPosition_66; }
	inline void set_m_CaretSelectPosition_66(int32_t value)
	{
		___m_CaretSelectPosition_66 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_67() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___caretRectTrans_67)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_67() const { return ___caretRectTrans_67; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_67() { return &___caretRectTrans_67; }
	inline void set_caretRectTrans_67(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_67), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_68() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CursorVerts_68)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_68() const { return ___m_CursorVerts_68; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_68() { return &___m_CursorVerts_68; }
	inline void set_m_CursorVerts_68(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_68), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_69() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CachedInputRenderer_69)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_69() const { return ___m_CachedInputRenderer_69; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_69() { return &___m_CachedInputRenderer_69; }
	inline void set_m_CachedInputRenderer_69(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_69), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastPosition_70() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_LastPosition_70)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_LastPosition_70() const { return ___m_LastPosition_70; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_LastPosition_70() { return &___m_LastPosition_70; }
	inline void set_m_LastPosition_70(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_LastPosition_70 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_71() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_Mesh_71)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_71() const { return ___m_Mesh_71; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_71() { return &___m_Mesh_71; }
	inline void set_m_Mesh_71(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_71), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_72() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_AllowInput_72)); }
	inline bool get_m_AllowInput_72() const { return ___m_AllowInput_72; }
	inline bool* get_address_of_m_AllowInput_72() { return &___m_AllowInput_72; }
	inline void set_m_AllowInput_72(bool value)
	{
		___m_AllowInput_72 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_73() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ShouldActivateNextUpdate_73)); }
	inline bool get_m_ShouldActivateNextUpdate_73() const { return ___m_ShouldActivateNextUpdate_73; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_73() { return &___m_ShouldActivateNextUpdate_73; }
	inline void set_m_ShouldActivateNextUpdate_73(bool value)
	{
		___m_ShouldActivateNextUpdate_73 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_74() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_UpdateDrag_74)); }
	inline bool get_m_UpdateDrag_74() const { return ___m_UpdateDrag_74; }
	inline bool* get_address_of_m_UpdateDrag_74() { return &___m_UpdateDrag_74; }
	inline void set_m_UpdateDrag_74(bool value)
	{
		___m_UpdateDrag_74 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_75() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_DragPositionOutOfBounds_75)); }
	inline bool get_m_DragPositionOutOfBounds_75() const { return ___m_DragPositionOutOfBounds_75; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_75() { return &___m_DragPositionOutOfBounds_75; }
	inline void set_m_DragPositionOutOfBounds_75(bool value)
	{
		___m_DragPositionOutOfBounds_75 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_78() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_CaretVisible_78)); }
	inline bool get_m_CaretVisible_78() const { return ___m_CaretVisible_78; }
	inline bool* get_address_of_m_CaretVisible_78() { return &___m_CaretVisible_78; }
	inline void set_m_CaretVisible_78(bool value)
	{
		___m_CaretVisible_78 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_79() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_BlinkCoroutine_79)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_79() const { return ___m_BlinkCoroutine_79; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_79() { return &___m_BlinkCoroutine_79; }
	inline void set_m_BlinkCoroutine_79(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_79), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_80() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_BlinkStartTime_80)); }
	inline float get_m_BlinkStartTime_80() const { return ___m_BlinkStartTime_80; }
	inline float* get_address_of_m_BlinkStartTime_80() { return &___m_BlinkStartTime_80; }
	inline void set_m_BlinkStartTime_80(float value)
	{
		___m_BlinkStartTime_80 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_81() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_DragCoroutine_81)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_81() const { return ___m_DragCoroutine_81; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_81() { return &___m_DragCoroutine_81; }
	inline void set_m_DragCoroutine_81(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_81), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_82() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OriginalText_82)); }
	inline String_t* get_m_OriginalText_82() const { return ___m_OriginalText_82; }
	inline String_t** get_address_of_m_OriginalText_82() { return &___m_OriginalText_82; }
	inline void set_m_OriginalText_82(String_t* value)
	{
		___m_OriginalText_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_82), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_83() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_WasCanceled_83)); }
	inline bool get_m_WasCanceled_83() const { return ___m_WasCanceled_83; }
	inline bool* get_address_of_m_WasCanceled_83() { return &___m_WasCanceled_83; }
	inline void set_m_WasCanceled_83(bool value)
	{
		___m_WasCanceled_83 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_84() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_HasDoneFocusTransition_84)); }
	inline bool get_m_HasDoneFocusTransition_84() const { return ___m_HasDoneFocusTransition_84; }
	inline bool* get_address_of_m_HasDoneFocusTransition_84() { return &___m_HasDoneFocusTransition_84; }
	inline void set_m_HasDoneFocusTransition_84(bool value)
	{
		___m_HasDoneFocusTransition_84 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_85() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_WaitForSecondsRealtime_85)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_85() const { return ___m_WaitForSecondsRealtime_85; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_85() { return &___m_WaitForSecondsRealtime_85; }
	inline void set_m_WaitForSecondsRealtime_85(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_85 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_85), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventCallback_86() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_PreventCallback_86)); }
	inline bool get_m_PreventCallback_86() const { return ___m_PreventCallback_86; }
	inline bool* get_address_of_m_PreventCallback_86() { return &___m_PreventCallback_86; }
	inline void set_m_PreventCallback_86(bool value)
	{
		___m_PreventCallback_86 = value;
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_87() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_TouchKeyboardAllowsInPlaceEditing_87)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_87() const { return ___m_TouchKeyboardAllowsInPlaceEditing_87; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_87() { return &___m_TouchKeyboardAllowsInPlaceEditing_87; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_87(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_87 = value;
	}

	inline static int32_t get_offset_of_m_IsTextComponentUpdateRequired_88() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsTextComponentUpdateRequired_88)); }
	inline bool get_m_IsTextComponentUpdateRequired_88() const { return ___m_IsTextComponentUpdateRequired_88; }
	inline bool* get_address_of_m_IsTextComponentUpdateRequired_88() { return &___m_IsTextComponentUpdateRequired_88; }
	inline void set_m_IsTextComponentUpdateRequired_88(bool value)
	{
		___m_IsTextComponentUpdateRequired_88 = value;
	}

	inline static int32_t get_offset_of_m_IsScrollbarUpdateRequired_89() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsScrollbarUpdateRequired_89)); }
	inline bool get_m_IsScrollbarUpdateRequired_89() const { return ___m_IsScrollbarUpdateRequired_89; }
	inline bool* get_address_of_m_IsScrollbarUpdateRequired_89() { return &___m_IsScrollbarUpdateRequired_89; }
	inline void set_m_IsScrollbarUpdateRequired_89(bool value)
	{
		___m_IsScrollbarUpdateRequired_89 = value;
	}

	inline static int32_t get_offset_of_m_IsUpdatingScrollbarValues_90() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsUpdatingScrollbarValues_90)); }
	inline bool get_m_IsUpdatingScrollbarValues_90() const { return ___m_IsUpdatingScrollbarValues_90; }
	inline bool* get_address_of_m_IsUpdatingScrollbarValues_90() { return &___m_IsUpdatingScrollbarValues_90; }
	inline void set_m_IsUpdatingScrollbarValues_90(bool value)
	{
		___m_IsUpdatingScrollbarValues_90 = value;
	}

	inline static int32_t get_offset_of_m_isLastKeyBackspace_91() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_isLastKeyBackspace_91)); }
	inline bool get_m_isLastKeyBackspace_91() const { return ___m_isLastKeyBackspace_91; }
	inline bool* get_address_of_m_isLastKeyBackspace_91() { return &___m_isLastKeyBackspace_91; }
	inline void set_m_isLastKeyBackspace_91(bool value)
	{
		___m_isLastKeyBackspace_91 = value;
	}

	inline static int32_t get_offset_of_m_PointerDownClickStartTime_92() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_PointerDownClickStartTime_92)); }
	inline float get_m_PointerDownClickStartTime_92() const { return ___m_PointerDownClickStartTime_92; }
	inline float* get_address_of_m_PointerDownClickStartTime_92() { return &___m_PointerDownClickStartTime_92; }
	inline void set_m_PointerDownClickStartTime_92(float value)
	{
		___m_PointerDownClickStartTime_92 = value;
	}

	inline static int32_t get_offset_of_m_KeyDownStartTime_93() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_KeyDownStartTime_93)); }
	inline float get_m_KeyDownStartTime_93() const { return ___m_KeyDownStartTime_93; }
	inline float* get_address_of_m_KeyDownStartTime_93() { return &___m_KeyDownStartTime_93; }
	inline void set_m_KeyDownStartTime_93(float value)
	{
		___m_KeyDownStartTime_93 = value;
	}

	inline static int32_t get_offset_of_m_DoubleClickDelay_94() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_DoubleClickDelay_94)); }
	inline float get_m_DoubleClickDelay_94() const { return ___m_DoubleClickDelay_94; }
	inline float* get_address_of_m_DoubleClickDelay_94() { return &___m_DoubleClickDelay_94; }
	inline void set_m_DoubleClickDelay_94(float value)
	{
		___m_DoubleClickDelay_94 = value;
	}

	inline static int32_t get_offset_of_m_IsCompositionActive_96() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsCompositionActive_96)); }
	inline bool get_m_IsCompositionActive_96() const { return ___m_IsCompositionActive_96; }
	inline bool* get_address_of_m_IsCompositionActive_96() { return &___m_IsCompositionActive_96; }
	inline void set_m_IsCompositionActive_96(bool value)
	{
		___m_IsCompositionActive_96 = value;
	}

	inline static int32_t get_offset_of_m_ShouldUpdateIMEWindowPosition_97() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ShouldUpdateIMEWindowPosition_97)); }
	inline bool get_m_ShouldUpdateIMEWindowPosition_97() const { return ___m_ShouldUpdateIMEWindowPosition_97; }
	inline bool* get_address_of_m_ShouldUpdateIMEWindowPosition_97() { return &___m_ShouldUpdateIMEWindowPosition_97; }
	inline void set_m_ShouldUpdateIMEWindowPosition_97(bool value)
	{
		___m_ShouldUpdateIMEWindowPosition_97 = value;
	}

	inline static int32_t get_offset_of_m_PreviousIMEInsertionLine_98() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_PreviousIMEInsertionLine_98)); }
	inline int32_t get_m_PreviousIMEInsertionLine_98() const { return ___m_PreviousIMEInsertionLine_98; }
	inline int32_t* get_address_of_m_PreviousIMEInsertionLine_98() { return &___m_PreviousIMEInsertionLine_98; }
	inline void set_m_PreviousIMEInsertionLine_98(int32_t value)
	{
		___m_PreviousIMEInsertionLine_98 = value;
	}

	inline static int32_t get_offset_of_m_GlobalFontAsset_99() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_GlobalFontAsset_99)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_GlobalFontAsset_99() const { return ___m_GlobalFontAsset_99; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_GlobalFontAsset_99() { return &___m_GlobalFontAsset_99; }
	inline void set_m_GlobalFontAsset_99(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_GlobalFontAsset_99 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GlobalFontAsset_99), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocusSelectAll_100() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_OnFocusSelectAll_100)); }
	inline bool get_m_OnFocusSelectAll_100() const { return ___m_OnFocusSelectAll_100; }
	inline bool* get_address_of_m_OnFocusSelectAll_100() { return &___m_OnFocusSelectAll_100; }
	inline void set_m_OnFocusSelectAll_100(bool value)
	{
		___m_OnFocusSelectAll_100 = value;
	}

	inline static int32_t get_offset_of_m_isSelectAll_101() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_isSelectAll_101)); }
	inline bool get_m_isSelectAll_101() const { return ___m_isSelectAll_101; }
	inline bool* get_address_of_m_isSelectAll_101() { return &___m_isSelectAll_101; }
	inline void set_m_isSelectAll_101(bool value)
	{
		___m_isSelectAll_101 = value;
	}

	inline static int32_t get_offset_of_m_ResetOnDeActivation_102() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ResetOnDeActivation_102)); }
	inline bool get_m_ResetOnDeActivation_102() const { return ___m_ResetOnDeActivation_102; }
	inline bool* get_address_of_m_ResetOnDeActivation_102() { return &___m_ResetOnDeActivation_102; }
	inline void set_m_ResetOnDeActivation_102(bool value)
	{
		___m_ResetOnDeActivation_102 = value;
	}

	inline static int32_t get_offset_of_m_SelectionStillActive_103() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_SelectionStillActive_103)); }
	inline bool get_m_SelectionStillActive_103() const { return ___m_SelectionStillActive_103; }
	inline bool* get_address_of_m_SelectionStillActive_103() { return &___m_SelectionStillActive_103; }
	inline void set_m_SelectionStillActive_103(bool value)
	{
		___m_SelectionStillActive_103 = value;
	}

	inline static int32_t get_offset_of_m_ReleaseSelection_104() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ReleaseSelection_104)); }
	inline bool get_m_ReleaseSelection_104() const { return ___m_ReleaseSelection_104; }
	inline bool* get_address_of_m_ReleaseSelection_104() { return &___m_ReleaseSelection_104; }
	inline void set_m_ReleaseSelection_104(bool value)
	{
		___m_ReleaseSelection_104 = value;
	}

	inline static int32_t get_offset_of_m_SelectedObject_105() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_SelectedObject_105)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_SelectedObject_105() const { return ___m_SelectedObject_105; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_SelectedObject_105() { return &___m_SelectedObject_105; }
	inline void set_m_SelectedObject_105(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_SelectedObject_105 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedObject_105), (void*)value);
	}

	inline static int32_t get_offset_of_m_RestoreOriginalTextOnEscape_106() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_RestoreOriginalTextOnEscape_106)); }
	inline bool get_m_RestoreOriginalTextOnEscape_106() const { return ___m_RestoreOriginalTextOnEscape_106; }
	inline bool* get_address_of_m_RestoreOriginalTextOnEscape_106() { return &___m_RestoreOriginalTextOnEscape_106; }
	inline void set_m_RestoreOriginalTextOnEscape_106(bool value)
	{
		___m_RestoreOriginalTextOnEscape_106 = value;
	}

	inline static int32_t get_offset_of_m_isRichTextEditingAllowed_107() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_isRichTextEditingAllowed_107)); }
	inline bool get_m_isRichTextEditingAllowed_107() const { return ___m_isRichTextEditingAllowed_107; }
	inline bool* get_address_of_m_isRichTextEditingAllowed_107() { return &___m_isRichTextEditingAllowed_107; }
	inline void set_m_isRichTextEditingAllowed_107(bool value)
	{
		___m_isRichTextEditingAllowed_107 = value;
	}

	inline static int32_t get_offset_of_m_LineLimit_108() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_LineLimit_108)); }
	inline int32_t get_m_LineLimit_108() const { return ___m_LineLimit_108; }
	inline int32_t* get_address_of_m_LineLimit_108() { return &___m_LineLimit_108; }
	inline void set_m_LineLimit_108(int32_t value)
	{
		___m_LineLimit_108 = value;
	}

	inline static int32_t get_offset_of_m_InputValidator_109() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_InputValidator_109)); }
	inline TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D * get_m_InputValidator_109() const { return ___m_InputValidator_109; }
	inline TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D ** get_address_of_m_InputValidator_109() { return &___m_InputValidator_109; }
	inline void set_m_InputValidator_109(TMP_InputValidator_t5DE1CB404972CB5D787521EF3B382C27D5DB456D * value)
	{
		___m_InputValidator_109 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputValidator_109), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSelected_110() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_isSelected_110)); }
	inline bool get_m_isSelected_110() const { return ___m_isSelected_110; }
	inline bool* get_address_of_m_isSelected_110() { return &___m_isSelected_110; }
	inline void set_m_isSelected_110(bool value)
	{
		___m_isSelected_110 = value;
	}

	inline static int32_t get_offset_of_m_IsStringPositionDirty_111() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsStringPositionDirty_111)); }
	inline bool get_m_IsStringPositionDirty_111() const { return ___m_IsStringPositionDirty_111; }
	inline bool* get_address_of_m_IsStringPositionDirty_111() { return &___m_IsStringPositionDirty_111; }
	inline void set_m_IsStringPositionDirty_111(bool value)
	{
		___m_IsStringPositionDirty_111 = value;
	}

	inline static int32_t get_offset_of_m_IsCaretPositionDirty_112() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_IsCaretPositionDirty_112)); }
	inline bool get_m_IsCaretPositionDirty_112() const { return ___m_IsCaretPositionDirty_112; }
	inline bool* get_address_of_m_IsCaretPositionDirty_112() { return &___m_IsCaretPositionDirty_112; }
	inline void set_m_IsCaretPositionDirty_112(bool value)
	{
		___m_IsCaretPositionDirty_112 = value;
	}

	inline static int32_t get_offset_of_m_forceRectTransformAdjustment_113() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_forceRectTransformAdjustment_113)); }
	inline bool get_m_forceRectTransformAdjustment_113() const { return ___m_forceRectTransformAdjustment_113; }
	inline bool* get_address_of_m_forceRectTransformAdjustment_113() { return &___m_forceRectTransformAdjustment_113; }
	inline void set_m_forceRectTransformAdjustment_113(bool value)
	{
		___m_forceRectTransformAdjustment_113 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_114() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59, ___m_ProcessingEvent_114)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_114() const { return ___m_ProcessingEvent_114; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_114() { return &___m_ProcessingEvent_114; }
	inline void set_m_ProcessingEvent_114(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_114 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_114), (void*)value);
	}
};

struct TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59_StaticFields
{
public:
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_20;

public:
	inline static int32_t get_offset_of_kSeparators_20() { return static_cast<int32_t>(offsetof(TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59_StaticFields, ___kSeparators_20)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_20() const { return ___kSeparators_20; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_20() { return &___kSeparators_20; }
	inline void set_kSeparators_20(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_34)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// TMPro.TMP_Text
struct  TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_35;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_36;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_37;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_38;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_39;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_40;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_41;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_42;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_43;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  ___m_materialReferenceStack_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_45;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_46;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_47;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_48;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_49;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_50;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_51;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_54;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_55;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_56;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_57;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_58;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_59;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_60;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_61;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_62;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * ___m_StyleSheet_63;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * ___m_TextStyle_64;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_65;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_66;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_67;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_68;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_69;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_70;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_71;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_72;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___m_sizeStack_73;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_74;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_75;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  ___m_FontWeightStack_76;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_77;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_78;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_79;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_80;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_81;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_82;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_83;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_84;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_85;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_86;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_87;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_88;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_89;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_90;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_92;
	// TMPro.TMP_RichTextTagStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A  ___m_lineJustificationStack_93;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_94;
	// System.Boolean TMPro.TMP_Text::m_isAlignmentEnumConverted
	bool ___m_isAlignmentEnumConverted_95;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_96;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_97;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_98;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_99;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_100;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_101;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_103;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_104;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_105;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_106;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_107;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_108;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_109;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_110;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_111;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_112;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_113;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_114;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___parentLinkedComponent_115;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_116;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_117;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_118;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_119;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_120;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_121;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_122;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_123;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_124;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_125;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_126;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_127;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_128;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_129;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_130;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_131;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_132;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_133;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_134;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_135;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_136;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_137;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_138;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_139;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_140;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_141;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_142;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_143;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_144;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_145;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_146;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_147;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_148;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_149;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_150;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_151;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_152;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_153;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_154;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_155;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_156;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_159;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_160;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_161;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_162;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_163;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_164;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_165;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_166;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_167;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_168;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_169;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_170;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_171;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_172;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_173;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_174;
	// System.Boolean TMPro.TMP_Text::m_isCalculateSizeRequired
	bool ___m_isCalculateSizeRequired_175;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_176;
	// System.Boolean TMPro.TMP_Text::m_verticesAlreadyDirty
	bool ___m_verticesAlreadyDirty_177;
	// System.Boolean TMPro.TMP_Text::m_layoutAlreadyDirty
	bool ___m_layoutAlreadyDirty_178;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_179;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_180;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_181;
	// TMPro.TMP_Text_TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_182;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_183;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_184;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_185;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_186;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_188;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_189;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___m_indentStack_190;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_191;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_192;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_193;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_194;
	// TMPro.TMP_Text_UnicodeChar[] TMPro.TMP_Text::m_TextParsingBuffer
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_TextParsingBuffer_195;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_196;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_input_CharArray_197;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_198;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_199;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_200;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedEllipsisState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLastValidState_203;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_204;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_205;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_206;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_207;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_209;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_210;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_211;
	// System.Single TMPro.TMP_Text::m_maxAscender
	float ___m_maxAscender_212;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_213;
	// System.Single TMPro.TMP_Text::m_maxDescender
	float ___m_maxDescender_214;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_215;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_216;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_217;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_218;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_219;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_220;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___m_colorStack_221;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___m_underlineColorStack_222;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  ___m_strikethroughColorStack_223;
	// TMPro.TMP_RichTextTagStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F  ___m_HighlightStateStack_224;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_225;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  ___m_colorGradientStack_226;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_227;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_228;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_229;
	// TMPro.TMP_RichTextTagStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_RichTextTagStack_1U5BU5D_tDC5FDED7B7089AE94C4A4C72E33F22CBBD48BA88* ___m_TextStyleStacks_230;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_231;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___m_ItalicAngleStack_232;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_233;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  ___m_actionStack_234;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_235;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_236;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  ___m_baselineOffsetStack_237;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_238;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_239;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_240;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Underline_Character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___m_cached_Underline_Character_241;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Ellipsis_Character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___m_cached_Ellipsis_Character_242;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_243;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_244;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_245;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_246;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_247;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_248;
	// System.Single[] TMPro.TMP_Text::k_Power
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___k_Power_249;

public:
	inline static int32_t get_offset_of_m_text_35() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_35)); }
	inline String_t* get_m_text_35() const { return ___m_text_35; }
	inline String_t** get_address_of_m_text_35() { return &___m_text_35; }
	inline void set_m_text_35(String_t* value)
	{
		___m_text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_36() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_36)); }
	inline bool get_m_isRightToLeft_36() const { return ___m_isRightToLeft_36; }
	inline bool* get_address_of_m_isRightToLeft_36() { return &___m_isRightToLeft_36; }
	inline void set_m_isRightToLeft_36(bool value)
	{
		___m_isRightToLeft_36 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_37)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_37() const { return ___m_fontAsset_37; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_37() { return &___m_fontAsset_37; }
	inline void set_m_fontAsset_37(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_38)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_38() const { return ___m_currentFontAsset_38; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_38() { return &___m_currentFontAsset_38; }
	inline void set_m_currentFontAsset_38(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_39)); }
	inline bool get_m_isSDFShader_39() const { return ___m_isSDFShader_39; }
	inline bool* get_address_of_m_isSDFShader_39() { return &___m_isSDFShader_39; }
	inline void set_m_isSDFShader_39(bool value)
	{
		___m_isSDFShader_39 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_40() const { return ___m_sharedMaterial_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_40() { return &___m_sharedMaterial_40; }
	inline void set_m_sharedMaterial_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_41() const { return ___m_currentMaterial_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_41() { return &___m_currentMaterial_41; }
	inline void set_m_currentMaterial_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferences_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferences_42)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_42() const { return ___m_materialReferences_42; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_42() { return &___m_materialReferences_42; }
	inline void set_m_materialReferences_42(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferenceIndexLookup_43)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_43() const { return ___m_materialReferenceIndexLookup_43; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_43() { return &___m_materialReferenceIndexLookup_43; }
	inline void set_m_materialReferenceIndexLookup_43(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_materialReferenceStack_44)); }
	inline TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  get_m_materialReferenceStack_44() const { return ___m_materialReferenceStack_44; }
	inline TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718 * get_address_of_m_materialReferenceStack_44() { return &___m_materialReferenceStack_44; }
	inline void set_m_materialReferenceStack_44(TMP_RichTextTagStack_1_t6295DEFD74CDCC6DA9F178985F0C6992364AC718  value)
	{
		___m_materialReferenceStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_44))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_44))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_44))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_44))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_44))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_45)); }
	inline int32_t get_m_currentMaterialIndex_45() const { return ___m_currentMaterialIndex_45; }
	inline int32_t* get_address_of_m_currentMaterialIndex_45() { return &___m_currentMaterialIndex_45; }
	inline void set_m_currentMaterialIndex_45(int32_t value)
	{
		___m_currentMaterialIndex_45 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_46)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_46() const { return ___m_fontSharedMaterials_46; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_46() { return &___m_fontSharedMaterials_46; }
	inline void set_m_fontSharedMaterials_46(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_47)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_47() const { return ___m_fontMaterial_47; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_47() { return &___m_fontMaterial_47; }
	inline void set_m_fontMaterial_47(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_48)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_48() const { return ___m_fontMaterials_48; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_48() { return &___m_fontMaterials_48; }
	inline void set_m_fontMaterials_48(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_49)); }
	inline bool get_m_isMaterialDirty_49() const { return ___m_isMaterialDirty_49; }
	inline bool* get_address_of_m_isMaterialDirty_49() { return &___m_isMaterialDirty_49; }
	inline void set_m_isMaterialDirty_49(bool value)
	{
		___m_isMaterialDirty_49 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_50)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_50() const { return ___m_fontColor32_50; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_50() { return &___m_fontColor32_50; }
	inline void set_m_fontColor32_50(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_50 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_51)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_51() const { return ___m_fontColor_51; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_51() { return &___m_fontColor_51; }
	inline void set_m_fontColor_51(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_51 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_53)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_53() const { return ___m_underlineColor_53; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_53() { return &___m_underlineColor_53; }
	inline void set_m_underlineColor_53(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_53 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_54)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_54() const { return ___m_strikethroughColor_54; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_54() { return &___m_strikethroughColor_54; }
	inline void set_m_strikethroughColor_54(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_54 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_55)); }
	inline bool get_m_enableVertexGradient_55() const { return ___m_enableVertexGradient_55; }
	inline bool* get_address_of_m_enableVertexGradient_55() { return &___m_enableVertexGradient_55; }
	inline void set_m_enableVertexGradient_55(bool value)
	{
		___m_enableVertexGradient_55 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_56)); }
	inline int32_t get_m_colorMode_56() const { return ___m_colorMode_56; }
	inline int32_t* get_address_of_m_colorMode_56() { return &___m_colorMode_56; }
	inline void set_m_colorMode_56(int32_t value)
	{
		___m_colorMode_56 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_57)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_57() const { return ___m_fontColorGradient_57; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_57() { return &___m_fontColorGradient_57; }
	inline void set_m_fontColorGradient_57(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_57 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_58)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_58() const { return ___m_fontColorGradientPreset_58; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_58() { return &___m_fontColorGradientPreset_58; }
	inline void set_m_fontColorGradientPreset_58(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_59)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_59() const { return ___m_spriteAsset_59; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_59() { return &___m_spriteAsset_59; }
	inline void set_m_spriteAsset_59(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_60)); }
	inline bool get_m_tintAllSprites_60() const { return ___m_tintAllSprites_60; }
	inline bool* get_address_of_m_tintAllSprites_60() { return &___m_tintAllSprites_60; }
	inline void set_m_tintAllSprites_60(bool value)
	{
		___m_tintAllSprites_60 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_61)); }
	inline bool get_m_tintSprite_61() const { return ___m_tintSprite_61; }
	inline bool* get_address_of_m_tintSprite_61() { return &___m_tintSprite_61; }
	inline void set_m_tintSprite_61(bool value)
	{
		___m_tintSprite_61 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_62)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_62() const { return ___m_spriteColor_62; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_62() { return &___m_spriteColor_62; }
	inline void set_m_spriteColor_62(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_62 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_StyleSheet_63)); }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * get_m_StyleSheet_63() const { return ___m_StyleSheet_63; }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E ** get_address_of_m_StyleSheet_63() { return &___m_StyleSheet_63; }
	inline void set_m_StyleSheet_63(TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * value)
	{
		___m_StyleSheet_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyle_64)); }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * get_m_TextStyle_64() const { return ___m_TextStyle_64; }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB ** get_address_of_m_TextStyle_64() { return &___m_TextStyle_64; }
	inline void set_m_TextStyle_64(TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * value)
	{
		___m_TextStyle_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_64), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleHashCode_65)); }
	inline int32_t get_m_TextStyleHashCode_65() const { return ___m_TextStyleHashCode_65; }
	inline int32_t* get_address_of_m_TextStyleHashCode_65() { return &___m_TextStyleHashCode_65; }
	inline void set_m_TextStyleHashCode_65(int32_t value)
	{
		___m_TextStyleHashCode_65 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_66)); }
	inline bool get_m_overrideHtmlColors_66() const { return ___m_overrideHtmlColors_66; }
	inline bool* get_address_of_m_overrideHtmlColors_66() { return &___m_overrideHtmlColors_66; }
	inline void set_m_overrideHtmlColors_66(bool value)
	{
		___m_overrideHtmlColors_66 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_67)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_67() const { return ___m_faceColor_67; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_67() { return &___m_faceColor_67; }
	inline void set_m_faceColor_67(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_67 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_68)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_68() const { return ___m_outlineColor_68; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_68() { return &___m_outlineColor_68; }
	inline void set_m_outlineColor_68(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_68 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_69)); }
	inline float get_m_outlineWidth_69() const { return ___m_outlineWidth_69; }
	inline float* get_address_of_m_outlineWidth_69() { return &___m_outlineWidth_69; }
	inline void set_m_outlineWidth_69(float value)
	{
		___m_outlineWidth_69 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_70)); }
	inline float get_m_fontSize_70() const { return ___m_fontSize_70; }
	inline float* get_address_of_m_fontSize_70() { return &___m_fontSize_70; }
	inline void set_m_fontSize_70(float value)
	{
		___m_fontSize_70 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_71)); }
	inline float get_m_currentFontSize_71() const { return ___m_currentFontSize_71; }
	inline float* get_address_of_m_currentFontSize_71() { return &___m_currentFontSize_71; }
	inline void set_m_currentFontSize_71(float value)
	{
		___m_currentFontSize_71 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_72)); }
	inline float get_m_fontSizeBase_72() const { return ___m_fontSizeBase_72; }
	inline float* get_address_of_m_fontSizeBase_72() { return &___m_fontSizeBase_72; }
	inline void set_m_fontSizeBase_72(float value)
	{
		___m_fontSizeBase_72 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_73)); }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  get_m_sizeStack_73() const { return ___m_sizeStack_73; }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75 * get_address_of_m_sizeStack_73() { return &___m_sizeStack_73; }
	inline void set_m_sizeStack_73(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  value)
	{
		___m_sizeStack_73 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_73))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_74)); }
	inline int32_t get_m_fontWeight_74() const { return ___m_fontWeight_74; }
	inline int32_t* get_address_of_m_fontWeight_74() { return &___m_fontWeight_74; }
	inline void set_m_fontWeight_74(int32_t value)
	{
		___m_fontWeight_74 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_75)); }
	inline int32_t get_m_FontWeightInternal_75() const { return ___m_FontWeightInternal_75; }
	inline int32_t* get_address_of_m_FontWeightInternal_75() { return &___m_FontWeightInternal_75; }
	inline void set_m_FontWeightInternal_75(int32_t value)
	{
		___m_FontWeightInternal_75 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_76)); }
	inline TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  get_m_FontWeightStack_76() const { return ___m_FontWeightStack_76; }
	inline TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E * get_address_of_m_FontWeightStack_76() { return &___m_FontWeightStack_76; }
	inline void set_m_FontWeightStack_76(TMP_RichTextTagStack_1_tB7224278867423278E1287BE6995BFABF4CFD72E  value)
	{
		___m_FontWeightStack_76 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_76))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_77)); }
	inline bool get_m_enableAutoSizing_77() const { return ___m_enableAutoSizing_77; }
	inline bool* get_address_of_m_enableAutoSizing_77() { return &___m_enableAutoSizing_77; }
	inline void set_m_enableAutoSizing_77(bool value)
	{
		___m_enableAutoSizing_77 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_78)); }
	inline float get_m_maxFontSize_78() const { return ___m_maxFontSize_78; }
	inline float* get_address_of_m_maxFontSize_78() { return &___m_maxFontSize_78; }
	inline void set_m_maxFontSize_78(float value)
	{
		___m_maxFontSize_78 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_79)); }
	inline float get_m_minFontSize_79() const { return ___m_minFontSize_79; }
	inline float* get_address_of_m_minFontSize_79() { return &___m_minFontSize_79; }
	inline void set_m_minFontSize_79(float value)
	{
		___m_minFontSize_79 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeIterationCount_80)); }
	inline int32_t get_m_AutoSizeIterationCount_80() const { return ___m_AutoSizeIterationCount_80; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_80() { return &___m_AutoSizeIterationCount_80; }
	inline void set_m_AutoSizeIterationCount_80(int32_t value)
	{
		___m_AutoSizeIterationCount_80 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeMaxIterationCount_81)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_81() const { return ___m_AutoSizeMaxIterationCount_81; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_81() { return &___m_AutoSizeMaxIterationCount_81; }
	inline void set_m_AutoSizeMaxIterationCount_81(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_81 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsAutoSizePointSizeSet_82)); }
	inline bool get_m_IsAutoSizePointSizeSet_82() const { return ___m_IsAutoSizePointSizeSet_82; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_82() { return &___m_IsAutoSizePointSizeSet_82; }
	inline void set_m_IsAutoSizePointSizeSet_82(bool value)
	{
		___m_IsAutoSizePointSizeSet_82 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_83)); }
	inline float get_m_fontSizeMin_83() const { return ___m_fontSizeMin_83; }
	inline float* get_address_of_m_fontSizeMin_83() { return &___m_fontSizeMin_83; }
	inline void set_m_fontSizeMin_83(float value)
	{
		___m_fontSizeMin_83 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_84)); }
	inline float get_m_fontSizeMax_84() const { return ___m_fontSizeMax_84; }
	inline float* get_address_of_m_fontSizeMax_84() { return &___m_fontSizeMax_84; }
	inline void set_m_fontSizeMax_84(float value)
	{
		___m_fontSizeMax_84 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_85)); }
	inline int32_t get_m_fontStyle_85() const { return ___m_fontStyle_85; }
	inline int32_t* get_address_of_m_fontStyle_85() { return &___m_fontStyle_85; }
	inline void set_m_fontStyle_85(int32_t value)
	{
		___m_fontStyle_85 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_86)); }
	inline int32_t get_m_FontStyleInternal_86() const { return ___m_FontStyleInternal_86; }
	inline int32_t* get_address_of_m_FontStyleInternal_86() { return &___m_FontStyleInternal_86; }
	inline void set_m_FontStyleInternal_86(int32_t value)
	{
		___m_FontStyleInternal_86 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_87)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_87() const { return ___m_fontStyleStack_87; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_87() { return &___m_fontStyleStack_87; }
	inline void set_m_fontStyleStack_87(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_87 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_88)); }
	inline bool get_m_isUsingBold_88() const { return ___m_isUsingBold_88; }
	inline bool* get_address_of_m_isUsingBold_88() { return &___m_isUsingBold_88; }
	inline void set_m_isUsingBold_88(bool value)
	{
		___m_isUsingBold_88 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HorizontalAlignment_89)); }
	inline int32_t get_m_HorizontalAlignment_89() const { return ___m_HorizontalAlignment_89; }
	inline int32_t* get_address_of_m_HorizontalAlignment_89() { return &___m_HorizontalAlignment_89; }
	inline void set_m_HorizontalAlignment_89(int32_t value)
	{
		___m_HorizontalAlignment_89 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VerticalAlignment_90)); }
	inline int32_t get_m_VerticalAlignment_90() const { return ___m_VerticalAlignment_90; }
	inline int32_t* get_address_of_m_VerticalAlignment_90() { return &___m_VerticalAlignment_90; }
	inline void set_m_VerticalAlignment_90(int32_t value)
	{
		___m_VerticalAlignment_90 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_91)); }
	inline int32_t get_m_textAlignment_91() const { return ___m_textAlignment_91; }
	inline int32_t* get_address_of_m_textAlignment_91() { return &___m_textAlignment_91; }
	inline void set_m_textAlignment_91(int32_t value)
	{
		___m_textAlignment_91 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_92)); }
	inline int32_t get_m_lineJustification_92() const { return ___m_lineJustification_92; }
	inline int32_t* get_address_of_m_lineJustification_92() { return &___m_lineJustification_92; }
	inline void set_m_lineJustification_92(int32_t value)
	{
		___m_lineJustification_92 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_93)); }
	inline TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A  get_m_lineJustificationStack_93() const { return ___m_lineJustificationStack_93; }
	inline TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A * get_address_of_m_lineJustificationStack_93() { return &___m_lineJustificationStack_93; }
	inline void set_m_lineJustificationStack_93(TMP_RichTextTagStack_1_t2711B40B95060A71E402CB08BB56F491B20A364A  value)
	{
		___m_lineJustificationStack_93 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_93))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_94)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_94() const { return ___m_textContainerLocalCorners_94; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_94() { return &___m_textContainerLocalCorners_94; }
	inline void set_m_textContainerLocalCorners_94(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_94 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_94), (void*)value);
	}

	inline static int32_t get_offset_of_m_isAlignmentEnumConverted_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAlignmentEnumConverted_95)); }
	inline bool get_m_isAlignmentEnumConverted_95() const { return ___m_isAlignmentEnumConverted_95; }
	inline bool* get_address_of_m_isAlignmentEnumConverted_95() { return &___m_isAlignmentEnumConverted_95; }
	inline void set_m_isAlignmentEnumConverted_95(bool value)
	{
		___m_isAlignmentEnumConverted_95 = value;
	}

	inline static int32_t get_offset_of_m_characterSpacing_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_96)); }
	inline float get_m_characterSpacing_96() const { return ___m_characterSpacing_96; }
	inline float* get_address_of_m_characterSpacing_96() { return &___m_characterSpacing_96; }
	inline void set_m_characterSpacing_96(float value)
	{
		___m_characterSpacing_96 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_97)); }
	inline float get_m_cSpacing_97() const { return ___m_cSpacing_97; }
	inline float* get_address_of_m_cSpacing_97() { return &___m_cSpacing_97; }
	inline void set_m_cSpacing_97(float value)
	{
		___m_cSpacing_97 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_98)); }
	inline float get_m_monoSpacing_98() const { return ___m_monoSpacing_98; }
	inline float* get_address_of_m_monoSpacing_98() { return &___m_monoSpacing_98; }
	inline void set_m_monoSpacing_98(float value)
	{
		___m_monoSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_99)); }
	inline float get_m_wordSpacing_99() const { return ___m_wordSpacing_99; }
	inline float* get_address_of_m_wordSpacing_99() { return &___m_wordSpacing_99; }
	inline void set_m_wordSpacing_99(float value)
	{
		___m_wordSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_100)); }
	inline float get_m_lineSpacing_100() const { return ___m_lineSpacing_100; }
	inline float* get_address_of_m_lineSpacing_100() { return &___m_lineSpacing_100; }
	inline void set_m_lineSpacing_100(float value)
	{
		___m_lineSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_101)); }
	inline float get_m_lineSpacingDelta_101() const { return ___m_lineSpacingDelta_101; }
	inline float* get_address_of_m_lineSpacingDelta_101() { return &___m_lineSpacingDelta_101; }
	inline void set_m_lineSpacingDelta_101(float value)
	{
		___m_lineSpacingDelta_101 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_102)); }
	inline float get_m_lineHeight_102() const { return ___m_lineHeight_102; }
	inline float* get_address_of_m_lineHeight_102() { return &___m_lineHeight_102; }
	inline void set_m_lineHeight_102(float value)
	{
		___m_lineHeight_102 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_103)); }
	inline float get_m_lineSpacingMax_103() const { return ___m_lineSpacingMax_103; }
	inline float* get_address_of_m_lineSpacingMax_103() { return &___m_lineSpacingMax_103; }
	inline void set_m_lineSpacingMax_103(float value)
	{
		___m_lineSpacingMax_103 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_104)); }
	inline float get_m_paragraphSpacing_104() const { return ___m_paragraphSpacing_104; }
	inline float* get_address_of_m_paragraphSpacing_104() { return &___m_paragraphSpacing_104; }
	inline void set_m_paragraphSpacing_104(float value)
	{
		___m_paragraphSpacing_104 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_105)); }
	inline float get_m_charWidthMaxAdj_105() const { return ___m_charWidthMaxAdj_105; }
	inline float* get_address_of_m_charWidthMaxAdj_105() { return &___m_charWidthMaxAdj_105; }
	inline void set_m_charWidthMaxAdj_105(float value)
	{
		___m_charWidthMaxAdj_105 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_106)); }
	inline float get_m_charWidthAdjDelta_106() const { return ___m_charWidthAdjDelta_106; }
	inline float* get_address_of_m_charWidthAdjDelta_106() { return &___m_charWidthAdjDelta_106; }
	inline void set_m_charWidthAdjDelta_106(float value)
	{
		___m_charWidthAdjDelta_106 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_107)); }
	inline bool get_m_enableWordWrapping_107() const { return ___m_enableWordWrapping_107; }
	inline bool* get_address_of_m_enableWordWrapping_107() { return &___m_enableWordWrapping_107; }
	inline void set_m_enableWordWrapping_107(bool value)
	{
		___m_enableWordWrapping_107 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_108)); }
	inline bool get_m_isCharacterWrappingEnabled_108() const { return ___m_isCharacterWrappingEnabled_108; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_108() { return &___m_isCharacterWrappingEnabled_108; }
	inline void set_m_isCharacterWrappingEnabled_108(bool value)
	{
		___m_isCharacterWrappingEnabled_108 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_109)); }
	inline bool get_m_isNonBreakingSpace_109() const { return ___m_isNonBreakingSpace_109; }
	inline bool* get_address_of_m_isNonBreakingSpace_109() { return &___m_isNonBreakingSpace_109; }
	inline void set_m_isNonBreakingSpace_109(bool value)
	{
		___m_isNonBreakingSpace_109 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_110)); }
	inline bool get_m_isIgnoringAlignment_110() const { return ___m_isIgnoringAlignment_110; }
	inline bool* get_address_of_m_isIgnoringAlignment_110() { return &___m_isIgnoringAlignment_110; }
	inline void set_m_isIgnoringAlignment_110(bool value)
	{
		___m_isIgnoringAlignment_110 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_111)); }
	inline float get_m_wordWrappingRatios_111() const { return ___m_wordWrappingRatios_111; }
	inline float* get_address_of_m_wordWrappingRatios_111() { return &___m_wordWrappingRatios_111; }
	inline void set_m_wordWrappingRatios_111(float value)
	{
		___m_wordWrappingRatios_111 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_112)); }
	inline int32_t get_m_overflowMode_112() const { return ___m_overflowMode_112; }
	inline int32_t* get_address_of_m_overflowMode_112() { return &___m_overflowMode_112; }
	inline void set_m_overflowMode_112(int32_t value)
	{
		___m_overflowMode_112 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_113)); }
	inline int32_t get_m_firstOverflowCharacterIndex_113() const { return ___m_firstOverflowCharacterIndex_113; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_113() { return &___m_firstOverflowCharacterIndex_113; }
	inline void set_m_firstOverflowCharacterIndex_113(int32_t value)
	{
		___m_firstOverflowCharacterIndex_113 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_114)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_114() const { return ___m_linkedTextComponent_114; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_114() { return &___m_linkedTextComponent_114; }
	inline void set_m_linkedTextComponent_114(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_114 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_114), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___parentLinkedComponent_115)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_parentLinkedComponent_115() const { return ___parentLinkedComponent_115; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_parentLinkedComponent_115() { return &___parentLinkedComponent_115; }
	inline void set_parentLinkedComponent_115(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___parentLinkedComponent_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_115), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_116)); }
	inline bool get_m_isTextTruncated_116() const { return ___m_isTextTruncated_116; }
	inline bool* get_address_of_m_isTextTruncated_116() { return &___m_isTextTruncated_116; }
	inline void set_m_isTextTruncated_116(bool value)
	{
		___m_isTextTruncated_116 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_117)); }
	inline bool get_m_enableKerning_117() const { return ___m_enableKerning_117; }
	inline bool* get_address_of_m_enableKerning_117() { return &___m_enableKerning_117; }
	inline void set_m_enableKerning_117(bool value)
	{
		___m_enableKerning_117 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_118)); }
	inline bool get_m_enableExtraPadding_118() const { return ___m_enableExtraPadding_118; }
	inline bool* get_address_of_m_enableExtraPadding_118() { return &___m_enableExtraPadding_118; }
	inline void set_m_enableExtraPadding_118(bool value)
	{
		___m_enableExtraPadding_118 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_119)); }
	inline bool get_checkPaddingRequired_119() const { return ___checkPaddingRequired_119; }
	inline bool* get_address_of_checkPaddingRequired_119() { return &___checkPaddingRequired_119; }
	inline void set_checkPaddingRequired_119(bool value)
	{
		___checkPaddingRequired_119 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_120)); }
	inline bool get_m_isRichText_120() const { return ___m_isRichText_120; }
	inline bool* get_address_of_m_isRichText_120() { return &___m_isRichText_120; }
	inline void set_m_isRichText_120(bool value)
	{
		___m_isRichText_120 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_121)); }
	inline bool get_m_parseCtrlCharacters_121() const { return ___m_parseCtrlCharacters_121; }
	inline bool* get_address_of_m_parseCtrlCharacters_121() { return &___m_parseCtrlCharacters_121; }
	inline void set_m_parseCtrlCharacters_121(bool value)
	{
		___m_parseCtrlCharacters_121 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_122)); }
	inline bool get_m_isOverlay_122() const { return ___m_isOverlay_122; }
	inline bool* get_address_of_m_isOverlay_122() { return &___m_isOverlay_122; }
	inline void set_m_isOverlay_122(bool value)
	{
		___m_isOverlay_122 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_123)); }
	inline bool get_m_isOrthographic_123() const { return ___m_isOrthographic_123; }
	inline bool* get_address_of_m_isOrthographic_123() { return &___m_isOrthographic_123; }
	inline void set_m_isOrthographic_123(bool value)
	{
		___m_isOrthographic_123 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_124)); }
	inline bool get_m_isCullingEnabled_124() const { return ___m_isCullingEnabled_124; }
	inline bool* get_address_of_m_isCullingEnabled_124() { return &___m_isCullingEnabled_124; }
	inline void set_m_isCullingEnabled_124(bool value)
	{
		___m_isCullingEnabled_124 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaskingEnabled_125)); }
	inline bool get_m_isMaskingEnabled_125() const { return ___m_isMaskingEnabled_125; }
	inline bool* get_address_of_m_isMaskingEnabled_125() { return &___m_isMaskingEnabled_125; }
	inline void set_m_isMaskingEnabled_125(bool value)
	{
		___m_isMaskingEnabled_125 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___isMaskUpdateRequired_126)); }
	inline bool get_isMaskUpdateRequired_126() const { return ___isMaskUpdateRequired_126; }
	inline bool* get_address_of_isMaskUpdateRequired_126() { return &___isMaskUpdateRequired_126; }
	inline void set_isMaskUpdateRequired_126(bool value)
	{
		___isMaskUpdateRequired_126 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_127)); }
	inline bool get_m_ignoreCulling_127() const { return ___m_ignoreCulling_127; }
	inline bool* get_address_of_m_ignoreCulling_127() { return &___m_ignoreCulling_127; }
	inline void set_m_ignoreCulling_127(bool value)
	{
		___m_ignoreCulling_127 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_128)); }
	inline int32_t get_m_horizontalMapping_128() const { return ___m_horizontalMapping_128; }
	inline int32_t* get_address_of_m_horizontalMapping_128() { return &___m_horizontalMapping_128; }
	inline void set_m_horizontalMapping_128(int32_t value)
	{
		___m_horizontalMapping_128 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_129)); }
	inline int32_t get_m_verticalMapping_129() const { return ___m_verticalMapping_129; }
	inline int32_t* get_address_of_m_verticalMapping_129() { return &___m_verticalMapping_129; }
	inline void set_m_verticalMapping_129(int32_t value)
	{
		___m_verticalMapping_129 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_130)); }
	inline float get_m_uvLineOffset_130() const { return ___m_uvLineOffset_130; }
	inline float* get_address_of_m_uvLineOffset_130() { return &___m_uvLineOffset_130; }
	inline void set_m_uvLineOffset_130(float value)
	{
		___m_uvLineOffset_130 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_131)); }
	inline int32_t get_m_renderMode_131() const { return ___m_renderMode_131; }
	inline int32_t* get_address_of_m_renderMode_131() { return &___m_renderMode_131; }
	inline void set_m_renderMode_131(int32_t value)
	{
		___m_renderMode_131 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_132)); }
	inline int32_t get_m_geometrySortingOrder_132() const { return ___m_geometrySortingOrder_132; }
	inline int32_t* get_address_of_m_geometrySortingOrder_132() { return &___m_geometrySortingOrder_132; }
	inline void set_m_geometrySortingOrder_132(int32_t value)
	{
		___m_geometrySortingOrder_132 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextObjectScaleStatic_133)); }
	inline bool get_m_IsTextObjectScaleStatic_133() const { return ___m_IsTextObjectScaleStatic_133; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_133() { return &___m_IsTextObjectScaleStatic_133; }
	inline void set_m_IsTextObjectScaleStatic_133(bool value)
	{
		___m_IsTextObjectScaleStatic_133 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_134)); }
	inline bool get_m_VertexBufferAutoSizeReduction_134() const { return ___m_VertexBufferAutoSizeReduction_134; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_134() { return &___m_VertexBufferAutoSizeReduction_134; }
	inline void set_m_VertexBufferAutoSizeReduction_134(bool value)
	{
		___m_VertexBufferAutoSizeReduction_134 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_135)); }
	inline int32_t get_m_firstVisibleCharacter_135() const { return ___m_firstVisibleCharacter_135; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_135() { return &___m_firstVisibleCharacter_135; }
	inline void set_m_firstVisibleCharacter_135(int32_t value)
	{
		___m_firstVisibleCharacter_135 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_136)); }
	inline int32_t get_m_maxVisibleCharacters_136() const { return ___m_maxVisibleCharacters_136; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_136() { return &___m_maxVisibleCharacters_136; }
	inline void set_m_maxVisibleCharacters_136(int32_t value)
	{
		___m_maxVisibleCharacters_136 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_137)); }
	inline int32_t get_m_maxVisibleWords_137() const { return ___m_maxVisibleWords_137; }
	inline int32_t* get_address_of_m_maxVisibleWords_137() { return &___m_maxVisibleWords_137; }
	inline void set_m_maxVisibleWords_137(int32_t value)
	{
		___m_maxVisibleWords_137 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_138)); }
	inline int32_t get_m_maxVisibleLines_138() const { return ___m_maxVisibleLines_138; }
	inline int32_t* get_address_of_m_maxVisibleLines_138() { return &___m_maxVisibleLines_138; }
	inline void set_m_maxVisibleLines_138(int32_t value)
	{
		___m_maxVisibleLines_138 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_139)); }
	inline bool get_m_useMaxVisibleDescender_139() const { return ___m_useMaxVisibleDescender_139; }
	inline bool* get_address_of_m_useMaxVisibleDescender_139() { return &___m_useMaxVisibleDescender_139; }
	inline void set_m_useMaxVisibleDescender_139(bool value)
	{
		___m_useMaxVisibleDescender_139 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_140)); }
	inline int32_t get_m_pageToDisplay_140() const { return ___m_pageToDisplay_140; }
	inline int32_t* get_address_of_m_pageToDisplay_140() { return &___m_pageToDisplay_140; }
	inline void set_m_pageToDisplay_140(int32_t value)
	{
		___m_pageToDisplay_140 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_141)); }
	inline bool get_m_isNewPage_141() const { return ___m_isNewPage_141; }
	inline bool* get_address_of_m_isNewPage_141() { return &___m_isNewPage_141; }
	inline void set_m_isNewPage_141(bool value)
	{
		___m_isNewPage_141 = value;
	}

	inline static int32_t get_offset_of_m_margin_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_142)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_142() const { return ___m_margin_142; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_142() { return &___m_margin_142; }
	inline void set_m_margin_142(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_142 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_143)); }
	inline float get_m_marginLeft_143() const { return ___m_marginLeft_143; }
	inline float* get_address_of_m_marginLeft_143() { return &___m_marginLeft_143; }
	inline void set_m_marginLeft_143(float value)
	{
		___m_marginLeft_143 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_144)); }
	inline float get_m_marginRight_144() const { return ___m_marginRight_144; }
	inline float* get_address_of_m_marginRight_144() { return &___m_marginRight_144; }
	inline void set_m_marginRight_144(float value)
	{
		___m_marginRight_144 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_145)); }
	inline float get_m_marginWidth_145() const { return ___m_marginWidth_145; }
	inline float* get_address_of_m_marginWidth_145() { return &___m_marginWidth_145; }
	inline void set_m_marginWidth_145(float value)
	{
		___m_marginWidth_145 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_146)); }
	inline float get_m_marginHeight_146() const { return ___m_marginHeight_146; }
	inline float* get_address_of_m_marginHeight_146() { return &___m_marginHeight_146; }
	inline void set_m_marginHeight_146(float value)
	{
		___m_marginHeight_146 = value;
	}

	inline static int32_t get_offset_of_m_width_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_147)); }
	inline float get_m_width_147() const { return ___m_width_147; }
	inline float* get_address_of_m_width_147() { return &___m_width_147; }
	inline void set_m_width_147(float value)
	{
		___m_width_147 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_148)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_148() const { return ___m_textInfo_148; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_148() { return &___m_textInfo_148; }
	inline void set_m_textInfo_148(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_148 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_148), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_149)); }
	inline bool get_m_havePropertiesChanged_149() const { return ___m_havePropertiesChanged_149; }
	inline bool* get_address_of_m_havePropertiesChanged_149() { return &___m_havePropertiesChanged_149; }
	inline void set_m_havePropertiesChanged_149(bool value)
	{
		___m_havePropertiesChanged_149 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_150)); }
	inline bool get_m_isUsingLegacyAnimationComponent_150() const { return ___m_isUsingLegacyAnimationComponent_150; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_150() { return &___m_isUsingLegacyAnimationComponent_150; }
	inline void set_m_isUsingLegacyAnimationComponent_150(bool value)
	{
		___m_isUsingLegacyAnimationComponent_150 = value;
	}

	inline static int32_t get_offset_of_m_transform_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_151)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_151() const { return ___m_transform_151; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_151() { return &___m_transform_151; }
	inline void set_m_transform_151(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_151 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_151), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_152)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_152() const { return ___m_rectTransform_152; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_152() { return &___m_rectTransform_152; }
	inline void set_m_rectTransform_152(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_152 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_152), (void*)value);
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_153)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_153() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_153; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_153() { return &___U3CautoSizeTextContainerU3Ek__BackingField_153; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_153(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_153 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_154)); }
	inline bool get_m_autoSizeTextContainer_154() const { return ___m_autoSizeTextContainer_154; }
	inline bool* get_address_of_m_autoSizeTextContainer_154() { return &___m_autoSizeTextContainer_154; }
	inline void set_m_autoSizeTextContainer_154(bool value)
	{
		___m_autoSizeTextContainer_154 = value;
	}

	inline static int32_t get_offset_of_m_mesh_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_155)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_155() const { return ___m_mesh_155; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_155() { return &___m_mesh_155; }
	inline void set_m_mesh_155(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_155), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_156)); }
	inline bool get_m_isVolumetricText_156() const { return ___m_isVolumetricText_156; }
	inline bool* get_address_of_m_isVolumetricText_156() { return &___m_isVolumetricText_156; }
	inline void set_m_isVolumetricText_156(bool value)
	{
		___m_isVolumetricText_156 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimator_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_159)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_159() const { return ___m_spriteAnimator_159; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_159() { return &___m_spriteAnimator_159; }
	inline void set_m_spriteAnimator_159(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_159 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_159), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_160)); }
	inline float get_m_flexibleHeight_160() const { return ___m_flexibleHeight_160; }
	inline float* get_address_of_m_flexibleHeight_160() { return &___m_flexibleHeight_160; }
	inline void set_m_flexibleHeight_160(float value)
	{
		___m_flexibleHeight_160 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_161)); }
	inline float get_m_flexibleWidth_161() const { return ___m_flexibleWidth_161; }
	inline float* get_address_of_m_flexibleWidth_161() { return &___m_flexibleWidth_161; }
	inline void set_m_flexibleWidth_161(float value)
	{
		___m_flexibleWidth_161 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_162)); }
	inline float get_m_minWidth_162() const { return ___m_minWidth_162; }
	inline float* get_address_of_m_minWidth_162() { return &___m_minWidth_162; }
	inline void set_m_minWidth_162(float value)
	{
		___m_minWidth_162 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_163)); }
	inline float get_m_minHeight_163() const { return ___m_minHeight_163; }
	inline float* get_address_of_m_minHeight_163() { return &___m_minHeight_163; }
	inline void set_m_minHeight_163(float value)
	{
		___m_minHeight_163 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_164)); }
	inline float get_m_maxWidth_164() const { return ___m_maxWidth_164; }
	inline float* get_address_of_m_maxWidth_164() { return &___m_maxWidth_164; }
	inline void set_m_maxWidth_164(float value)
	{
		___m_maxWidth_164 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_165)); }
	inline float get_m_maxHeight_165() const { return ___m_maxHeight_165; }
	inline float* get_address_of_m_maxHeight_165() { return &___m_maxHeight_165; }
	inline void set_m_maxHeight_165(float value)
	{
		___m_maxHeight_165 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_166)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_166() const { return ___m_LayoutElement_166; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_166() { return &___m_LayoutElement_166; }
	inline void set_m_LayoutElement_166(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_166 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_166), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_167)); }
	inline float get_m_preferredWidth_167() const { return ___m_preferredWidth_167; }
	inline float* get_address_of_m_preferredWidth_167() { return &___m_preferredWidth_167; }
	inline void set_m_preferredWidth_167(float value)
	{
		___m_preferredWidth_167 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_168)); }
	inline float get_m_renderedWidth_168() const { return ___m_renderedWidth_168; }
	inline float* get_address_of_m_renderedWidth_168() { return &___m_renderedWidth_168; }
	inline void set_m_renderedWidth_168(float value)
	{
		___m_renderedWidth_168 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_169)); }
	inline bool get_m_isPreferredWidthDirty_169() const { return ___m_isPreferredWidthDirty_169; }
	inline bool* get_address_of_m_isPreferredWidthDirty_169() { return &___m_isPreferredWidthDirty_169; }
	inline void set_m_isPreferredWidthDirty_169(bool value)
	{
		___m_isPreferredWidthDirty_169 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_170)); }
	inline float get_m_preferredHeight_170() const { return ___m_preferredHeight_170; }
	inline float* get_address_of_m_preferredHeight_170() { return &___m_preferredHeight_170; }
	inline void set_m_preferredHeight_170(float value)
	{
		___m_preferredHeight_170 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_171)); }
	inline float get_m_renderedHeight_171() const { return ___m_renderedHeight_171; }
	inline float* get_address_of_m_renderedHeight_171() { return &___m_renderedHeight_171; }
	inline void set_m_renderedHeight_171(float value)
	{
		___m_renderedHeight_171 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_172)); }
	inline bool get_m_isPreferredHeightDirty_172() const { return ___m_isPreferredHeightDirty_172; }
	inline bool* get_address_of_m_isPreferredHeightDirty_172() { return &___m_isPreferredHeightDirty_172; }
	inline void set_m_isPreferredHeightDirty_172(bool value)
	{
		___m_isPreferredHeightDirty_172 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_173)); }
	inline bool get_m_isCalculatingPreferredValues_173() const { return ___m_isCalculatingPreferredValues_173; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_173() { return &___m_isCalculatingPreferredValues_173; }
	inline void set_m_isCalculatingPreferredValues_173(bool value)
	{
		___m_isCalculatingPreferredValues_173 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_174)); }
	inline int32_t get_m_layoutPriority_174() const { return ___m_layoutPriority_174; }
	inline int32_t* get_address_of_m_layoutPriority_174() { return &___m_layoutPriority_174; }
	inline void set_m_layoutPriority_174(int32_t value)
	{
		___m_layoutPriority_174 = value;
	}

	inline static int32_t get_offset_of_m_isCalculateSizeRequired_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculateSizeRequired_175)); }
	inline bool get_m_isCalculateSizeRequired_175() const { return ___m_isCalculateSizeRequired_175; }
	inline bool* get_address_of_m_isCalculateSizeRequired_175() { return &___m_isCalculateSizeRequired_175; }
	inline void set_m_isCalculateSizeRequired_175(bool value)
	{
		___m_isCalculateSizeRequired_175 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_176)); }
	inline bool get_m_isLayoutDirty_176() const { return ___m_isLayoutDirty_176; }
	inline bool* get_address_of_m_isLayoutDirty_176() { return &___m_isLayoutDirty_176; }
	inline void set_m_isLayoutDirty_176(bool value)
	{
		___m_isLayoutDirty_176 = value;
	}

	inline static int32_t get_offset_of_m_verticesAlreadyDirty_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticesAlreadyDirty_177)); }
	inline bool get_m_verticesAlreadyDirty_177() const { return ___m_verticesAlreadyDirty_177; }
	inline bool* get_address_of_m_verticesAlreadyDirty_177() { return &___m_verticesAlreadyDirty_177; }
	inline void set_m_verticesAlreadyDirty_177(bool value)
	{
		___m_verticesAlreadyDirty_177 = value;
	}

	inline static int32_t get_offset_of_m_layoutAlreadyDirty_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutAlreadyDirty_178)); }
	inline bool get_m_layoutAlreadyDirty_178() const { return ___m_layoutAlreadyDirty_178; }
	inline bool* get_address_of_m_layoutAlreadyDirty_178() { return &___m_layoutAlreadyDirty_178; }
	inline void set_m_layoutAlreadyDirty_178(bool value)
	{
		___m_layoutAlreadyDirty_178 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_179)); }
	inline bool get_m_isAwake_179() const { return ___m_isAwake_179; }
	inline bool* get_address_of_m_isAwake_179() { return &___m_isAwake_179; }
	inline void set_m_isAwake_179(bool value)
	{
		___m_isAwake_179 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_180)); }
	inline bool get_m_isWaitingOnResourceLoad_180() const { return ___m_isWaitingOnResourceLoad_180; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_180() { return &___m_isWaitingOnResourceLoad_180; }
	inline void set_m_isWaitingOnResourceLoad_180(bool value)
	{
		___m_isWaitingOnResourceLoad_180 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isInputParsingRequired_181)); }
	inline bool get_m_isInputParsingRequired_181() const { return ___m_isInputParsingRequired_181; }
	inline bool* get_address_of_m_isInputParsingRequired_181() { return &___m_isInputParsingRequired_181; }
	inline void set_m_isInputParsingRequired_181(bool value)
	{
		___m_isInputParsingRequired_181 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_182)); }
	inline int32_t get_m_inputSource_182() const { return ___m_inputSource_182; }
	inline int32_t* get_address_of_m_inputSource_182() { return &___m_inputSource_182; }
	inline void set_m_inputSource_182(int32_t value)
	{
		___m_inputSource_182 = value;
	}

	inline static int32_t get_offset_of_m_fontScale_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScale_183)); }
	inline float get_m_fontScale_183() const { return ___m_fontScale_183; }
	inline float* get_address_of_m_fontScale_183() { return &___m_fontScale_183; }
	inline void set_m_fontScale_183(float value)
	{
		___m_fontScale_183 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_184)); }
	inline float get_m_fontScaleMultiplier_184() const { return ___m_fontScaleMultiplier_184; }
	inline float* get_address_of_m_fontScaleMultiplier_184() { return &___m_fontScaleMultiplier_184; }
	inline void set_m_fontScaleMultiplier_184(float value)
	{
		___m_fontScaleMultiplier_184 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlTag_185)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_185() const { return ___m_htmlTag_185; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_185() { return &___m_htmlTag_185; }
	inline void set_m_htmlTag_185(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_185 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_185), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xmlAttribute_186)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_186() const { return ___m_xmlAttribute_186; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_186() { return &___m_xmlAttribute_186; }
	inline void set_m_xmlAttribute_186(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_186 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_186), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_attributeParameterValues_187)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_187() const { return ___m_attributeParameterValues_187; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_187() { return &___m_attributeParameterValues_187; }
	inline void set_m_attributeParameterValues_187(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_187), (void*)value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_188)); }
	inline float get_tag_LineIndent_188() const { return ___tag_LineIndent_188; }
	inline float* get_address_of_tag_LineIndent_188() { return &___tag_LineIndent_188; }
	inline void set_tag_LineIndent_188(float value)
	{
		___tag_LineIndent_188 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_189)); }
	inline float get_tag_Indent_189() const { return ___tag_Indent_189; }
	inline float* get_address_of_tag_Indent_189() { return &___tag_Indent_189; }
	inline void set_tag_Indent_189(float value)
	{
		___tag_Indent_189 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_190)); }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  get_m_indentStack_190() const { return ___m_indentStack_190; }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75 * get_address_of_m_indentStack_190() { return &___m_indentStack_190; }
	inline void set_m_indentStack_190(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  value)
	{
		___m_indentStack_190 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_190))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_191)); }
	inline bool get_tag_NoParsing_191() const { return ___tag_NoParsing_191; }
	inline bool* get_address_of_tag_NoParsing_191() { return &___tag_NoParsing_191; }
	inline void set_tag_NoParsing_191(bool value)
	{
		___tag_NoParsing_191 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_192)); }
	inline bool get_m_isParsingText_192() const { return ___m_isParsingText_192; }
	inline bool* get_address_of_m_isParsingText_192() { return &___m_isParsingText_192; }
	inline void set_m_isParsingText_192(bool value)
	{
		___m_isParsingText_192 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_193)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_193() const { return ___m_FXMatrix_193; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_193() { return &___m_FXMatrix_193; }
	inline void set_m_FXMatrix_193(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_193 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_194)); }
	inline bool get_m_isFXMatrixSet_194() const { return ___m_isFXMatrixSet_194; }
	inline bool* get_address_of_m_isFXMatrixSet_194() { return &___m_isFXMatrixSet_194; }
	inline void set_m_isFXMatrixSet_194(bool value)
	{
		___m_isFXMatrixSet_194 = value;
	}

	inline static int32_t get_offset_of_m_TextParsingBuffer_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextParsingBuffer_195)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_TextParsingBuffer_195() const { return ___m_TextParsingBuffer_195; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_TextParsingBuffer_195() { return &___m_TextParsingBuffer_195; }
	inline void set_m_TextParsingBuffer_195(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_TextParsingBuffer_195 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextParsingBuffer_195), (void*)value);
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_196)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_196() const { return ___m_internalCharacterInfo_196; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_196() { return &___m_internalCharacterInfo_196; }
	inline void set_m_internalCharacterInfo_196(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_196 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_196), (void*)value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_input_CharArray_197)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_input_CharArray_197() const { return ___m_input_CharArray_197; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_input_CharArray_197() { return &___m_input_CharArray_197; }
	inline void set_m_input_CharArray_197(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_input_CharArray_197 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_CharArray_197), (void*)value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charArray_Length_198)); }
	inline int32_t get_m_charArray_Length_198() const { return ___m_charArray_Length_198; }
	inline int32_t* get_address_of_m_charArray_Length_198() { return &___m_charArray_Length_198; }
	inline void set_m_charArray_Length_198(int32_t value)
	{
		___m_charArray_Length_198 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_199)); }
	inline int32_t get_m_totalCharacterCount_199() const { return ___m_totalCharacterCount_199; }
	inline int32_t* get_address_of_m_totalCharacterCount_199() { return &___m_totalCharacterCount_199; }
	inline void set_m_totalCharacterCount_199(int32_t value)
	{
		___m_totalCharacterCount_199 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedWordWrapState_200)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_200() const { return ___m_SavedWordWrapState_200; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_200() { return &___m_SavedWordWrapState_200; }
	inline void set_m_SavedWordWrapState_200(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_200 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_200))->___textInfo_33), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___italicAngleStack_40))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___colorStack_41))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___underlineColorStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___strikethroughColorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___highlightColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___highlightStateStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___colorGradientStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___colorGradientStack_46))->___m_DefaultItem_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___sizeStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___indentStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___fontWeightStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___styleStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___baselineStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___actionStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_53))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_53))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_53))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_53))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___lineJustificationStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_200))->___currentFontAsset_56), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_200))->___currentSpriteAsset_57), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_200))->___currentMaterial_58), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedLineState_201)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_201() const { return ___m_SavedLineState_201; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_201() { return &___m_SavedLineState_201; }
	inline void set_m_SavedLineState_201(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_201 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_201))->___textInfo_33), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___italicAngleStack_40))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___colorStack_41))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___underlineColorStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___strikethroughColorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___highlightColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___highlightStateStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___colorGradientStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___colorGradientStack_46))->___m_DefaultItem_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___sizeStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___indentStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___fontWeightStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___styleStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___baselineStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___actionStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___materialReferenceStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_201))->___materialReferenceStack_53))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_201))->___materialReferenceStack_53))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_201))->___materialReferenceStack_53))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_201))->___materialReferenceStack_53))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___lineJustificationStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_201))->___currentFontAsset_56), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_201))->___currentSpriteAsset_57), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_201))->___currentMaterial_58), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedEllipsisState_202)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedEllipsisState_202() const { return ___m_SavedEllipsisState_202; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedEllipsisState_202() { return &___m_SavedEllipsisState_202; }
	inline void set_m_SavedEllipsisState_202(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedEllipsisState_202 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_202))->___textInfo_33), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___italicAngleStack_40))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___colorStack_41))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___underlineColorStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___strikethroughColorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___highlightColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___highlightStateStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___colorGradientStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___colorGradientStack_46))->___m_DefaultItem_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___sizeStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___indentStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___fontWeightStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___styleStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___baselineStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___actionStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_53))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_53))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_53))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_53))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___lineJustificationStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_202))->___currentFontAsset_56), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_202))->___currentSpriteAsset_57), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_202))->___currentMaterial_58), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_SavedLastValidState_203)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLastValidState_203() const { return ___m_SavedLastValidState_203; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLastValidState_203() { return &___m_SavedLastValidState_203; }
	inline void set_m_SavedLastValidState_203(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLastValidState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_203))->___textInfo_33), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___italicAngleStack_40))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___colorStack_41))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___underlineColorStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___strikethroughColorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___highlightColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___highlightStateStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___colorGradientStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___colorGradientStack_46))->___m_DefaultItem_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___sizeStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___indentStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___fontWeightStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___styleStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___baselineStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___actionStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_53))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_53))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_53))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_53))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___lineJustificationStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_203))->___currentFontAsset_56), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_203))->___currentSpriteAsset_57), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_203))->___currentMaterial_58), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_characterCount_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_204)); }
	inline int32_t get_m_characterCount_204() const { return ___m_characterCount_204; }
	inline int32_t* get_address_of_m_characterCount_204() { return &___m_characterCount_204; }
	inline void set_m_characterCount_204(int32_t value)
	{
		___m_characterCount_204 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_205)); }
	inline int32_t get_m_firstCharacterOfLine_205() const { return ___m_firstCharacterOfLine_205; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_205() { return &___m_firstCharacterOfLine_205; }
	inline void set_m_firstCharacterOfLine_205(int32_t value)
	{
		___m_firstCharacterOfLine_205 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_206)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_206() const { return ___m_firstVisibleCharacterOfLine_206; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_206() { return &___m_firstVisibleCharacterOfLine_206; }
	inline void set_m_firstVisibleCharacterOfLine_206(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_206 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_207)); }
	inline int32_t get_m_lastCharacterOfLine_207() const { return ___m_lastCharacterOfLine_207; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_207() { return &___m_lastCharacterOfLine_207; }
	inline void set_m_lastCharacterOfLine_207(int32_t value)
	{
		___m_lastCharacterOfLine_207 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_208)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_208() const { return ___m_lastVisibleCharacterOfLine_208; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_208() { return &___m_lastVisibleCharacterOfLine_208; }
	inline void set_m_lastVisibleCharacterOfLine_208(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_208 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_209)); }
	inline int32_t get_m_lineNumber_209() const { return ___m_lineNumber_209; }
	inline int32_t* get_address_of_m_lineNumber_209() { return &___m_lineNumber_209; }
	inline void set_m_lineNumber_209(int32_t value)
	{
		___m_lineNumber_209 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_210)); }
	inline int32_t get_m_lineVisibleCharacterCount_210() const { return ___m_lineVisibleCharacterCount_210; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_210() { return &___m_lineVisibleCharacterCount_210; }
	inline void set_m_lineVisibleCharacterCount_210(int32_t value)
	{
		___m_lineVisibleCharacterCount_210 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_211)); }
	inline int32_t get_m_pageNumber_211() const { return ___m_pageNumber_211; }
	inline int32_t* get_address_of_m_pageNumber_211() { return &___m_pageNumber_211; }
	inline void set_m_pageNumber_211(int32_t value)
	{
		___m_pageNumber_211 = value;
	}

	inline static int32_t get_offset_of_m_maxAscender_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxAscender_212)); }
	inline float get_m_maxAscender_212() const { return ___m_maxAscender_212; }
	inline float* get_address_of_m_maxAscender_212() { return &___m_maxAscender_212; }
	inline void set_m_maxAscender_212(float value)
	{
		___m_maxAscender_212 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_213)); }
	inline float get_m_maxCapHeight_213() const { return ___m_maxCapHeight_213; }
	inline float* get_address_of_m_maxCapHeight_213() { return &___m_maxCapHeight_213; }
	inline void set_m_maxCapHeight_213(float value)
	{
		___m_maxCapHeight_213 = value;
	}

	inline static int32_t get_offset_of_m_maxDescender_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxDescender_214)); }
	inline float get_m_maxDescender_214() const { return ___m_maxDescender_214; }
	inline float* get_address_of_m_maxDescender_214() { return &___m_maxDescender_214; }
	inline void set_m_maxDescender_214(float value)
	{
		___m_maxDescender_214 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_215)); }
	inline float get_m_maxLineAscender_215() const { return ___m_maxLineAscender_215; }
	inline float* get_address_of_m_maxLineAscender_215() { return &___m_maxLineAscender_215; }
	inline void set_m_maxLineAscender_215(float value)
	{
		___m_maxLineAscender_215 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_216)); }
	inline float get_m_maxLineDescender_216() const { return ___m_maxLineDescender_216; }
	inline float* get_address_of_m_maxLineDescender_216() { return &___m_maxLineDescender_216; }
	inline void set_m_maxLineDescender_216(float value)
	{
		___m_maxLineDescender_216 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_217)); }
	inline float get_m_startOfLineAscender_217() const { return ___m_startOfLineAscender_217; }
	inline float* get_address_of_m_startOfLineAscender_217() { return &___m_startOfLineAscender_217; }
	inline void set_m_startOfLineAscender_217(float value)
	{
		___m_startOfLineAscender_217 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_218)); }
	inline float get_m_lineOffset_218() const { return ___m_lineOffset_218; }
	inline float* get_address_of_m_lineOffset_218() { return &___m_lineOffset_218; }
	inline void set_m_lineOffset_218(float value)
	{
		___m_lineOffset_218 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_219)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_219() const { return ___m_meshExtents_219; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_219() { return &___m_meshExtents_219; }
	inline void set_m_meshExtents_219(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_219 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_220)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_220() const { return ___m_htmlColor_220; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_220() { return &___m_htmlColor_220; }
	inline void set_m_htmlColor_220(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_220 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_221)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_m_colorStack_221() const { return ___m_colorStack_221; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_m_colorStack_221() { return &___m_colorStack_221; }
	inline void set_m_colorStack_221(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___m_colorStack_221 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_221))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_222)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_m_underlineColorStack_222() const { return ___m_underlineColorStack_222; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_m_underlineColorStack_222() { return &___m_underlineColorStack_222; }
	inline void set_m_underlineColorStack_222(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___m_underlineColorStack_222 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_222))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_223)); }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  get_m_strikethroughColorStack_223() const { return ___m_strikethroughColorStack_223; }
	inline TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59 * get_address_of_m_strikethroughColorStack_223() { return &___m_strikethroughColorStack_223; }
	inline void set_m_strikethroughColorStack_223(TMP_RichTextTagStack_1_t1C19F739424A83939314F52144105F01D10F4C59  value)
	{
		___m_strikethroughColorStack_223 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_223))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HighlightStateStack_224)); }
	inline TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F  get_m_HighlightStateStack_224() const { return ___m_HighlightStateStack_224; }
	inline TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F * get_address_of_m_HighlightStateStack_224() { return &___m_HighlightStateStack_224; }
	inline void set_m_HighlightStateStack_224(TMP_RichTextTagStack_1_t352FEA8907EFB705221DF30D3A64F75944E6024F  value)
	{
		___m_HighlightStateStack_224 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_224))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_225)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_225() const { return ___m_colorGradientPreset_225; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_225() { return &___m_colorGradientPreset_225; }
	inline void set_m_colorGradientPreset_225(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_225 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_225), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_226)); }
	inline TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  get_m_colorGradientStack_226() const { return ___m_colorGradientStack_226; }
	inline TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961 * get_address_of_m_colorGradientStack_226() { return &___m_colorGradientStack_226; }
	inline void set_m_colorGradientStack_226(TMP_RichTextTagStack_1_t342372E460C6C5BFFFE5FF1A57DEE7E855012961  value)
	{
		___m_colorGradientStack_226 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_226))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_226))->___m_DefaultItem_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPresetIsTinted_227)); }
	inline bool get_m_colorGradientPresetIsTinted_227() const { return ___m_colorGradientPresetIsTinted_227; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_227() { return &___m_colorGradientPresetIsTinted_227; }
	inline void set_m_colorGradientPresetIsTinted_227(bool value)
	{
		___m_colorGradientPresetIsTinted_227 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_228)); }
	inline float get_m_tabSpacing_228() const { return ___m_tabSpacing_228; }
	inline float* get_address_of_m_tabSpacing_228() { return &___m_tabSpacing_228; }
	inline void set_m_tabSpacing_228(float value)
	{
		___m_tabSpacing_228 = value;
	}

	inline static int32_t get_offset_of_m_spacing_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_229)); }
	inline float get_m_spacing_229() const { return ___m_spacing_229; }
	inline float* get_address_of_m_spacing_229() { return &___m_spacing_229; }
	inline void set_m_spacing_229(float value)
	{
		___m_spacing_229 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStacks_230)); }
	inline TMP_RichTextTagStack_1U5BU5D_tDC5FDED7B7089AE94C4A4C72E33F22CBBD48BA88* get_m_TextStyleStacks_230() const { return ___m_TextStyleStacks_230; }
	inline TMP_RichTextTagStack_1U5BU5D_tDC5FDED7B7089AE94C4A4C72E33F22CBBD48BA88** get_address_of_m_TextStyleStacks_230() { return &___m_TextStyleStacks_230; }
	inline void set_m_TextStyleStacks_230(TMP_RichTextTagStack_1U5BU5D_tDC5FDED7B7089AE94C4A4C72E33F22CBBD48BA88* value)
	{
		___m_TextStyleStacks_230 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_230), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStackDepth_231)); }
	inline int32_t get_m_TextStyleStackDepth_231() const { return ___m_TextStyleStackDepth_231; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_231() { return &___m_TextStyleStackDepth_231; }
	inline void set_m_TextStyleStackDepth_231(int32_t value)
	{
		___m_TextStyleStackDepth_231 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngleStack_232)); }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  get_m_ItalicAngleStack_232() const { return ___m_ItalicAngleStack_232; }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666 * get_address_of_m_ItalicAngleStack_232() { return &___m_ItalicAngleStack_232; }
	inline void set_m_ItalicAngleStack_232(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  value)
	{
		___m_ItalicAngleStack_232 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_232))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngle_233)); }
	inline int32_t get_m_ItalicAngle_233() const { return ___m_ItalicAngle_233; }
	inline int32_t* get_address_of_m_ItalicAngle_233() { return &___m_ItalicAngle_233; }
	inline void set_m_ItalicAngle_233(int32_t value)
	{
		___m_ItalicAngle_233 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_234)); }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  get_m_actionStack_234() const { return ___m_actionStack_234; }
	inline TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666 * get_address_of_m_actionStack_234() { return &___m_actionStack_234; }
	inline void set_m_actionStack_234(TMP_RichTextTagStack_1_t84ED35F1394C27DB285E413F24F5096C74045666  value)
	{
		___m_actionStack_234 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_234))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_235)); }
	inline float get_m_padding_235() const { return ___m_padding_235; }
	inline float* get_address_of_m_padding_235() { return &___m_padding_235; }
	inline void set_m_padding_235(float value)
	{
		___m_padding_235 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_236)); }
	inline float get_m_baselineOffset_236() const { return ___m_baselineOffset_236; }
	inline float* get_address_of_m_baselineOffset_236() { return &___m_baselineOffset_236; }
	inline void set_m_baselineOffset_236(float value)
	{
		___m_baselineOffset_236 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_237)); }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  get_m_baselineOffsetStack_237() const { return ___m_baselineOffsetStack_237; }
	inline TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75 * get_address_of_m_baselineOffsetStack_237() { return &___m_baselineOffsetStack_237; }
	inline void set_m_baselineOffsetStack_237(TMP_RichTextTagStack_1_t36D1FD4270DC89CAF634A577A41355D7839A1A75  value)
	{
		___m_baselineOffsetStack_237 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_237))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_238)); }
	inline float get_m_xAdvance_238() const { return ___m_xAdvance_238; }
	inline float* get_address_of_m_xAdvance_238() { return &___m_xAdvance_238; }
	inline void set_m_xAdvance_238(float value)
	{
		___m_xAdvance_238 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_239)); }
	inline int32_t get_m_textElementType_239() const { return ___m_textElementType_239; }
	inline int32_t* get_address_of_m_textElementType_239() { return &___m_textElementType_239; }
	inline void set_m_textElementType_239(int32_t value)
	{
		___m_textElementType_239 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_240)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_240() const { return ___m_cached_TextElement_240; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_240() { return &___m_cached_TextElement_240; }
	inline void set_m_cached_TextElement_240(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_240 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_240), (void*)value);
	}

	inline static int32_t get_offset_of_m_cached_Underline_Character_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_Underline_Character_241)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_m_cached_Underline_Character_241() const { return ___m_cached_Underline_Character_241; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_m_cached_Underline_Character_241() { return &___m_cached_Underline_Character_241; }
	inline void set_m_cached_Underline_Character_241(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___m_cached_Underline_Character_241 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_Underline_Character_241), (void*)value);
	}

	inline static int32_t get_offset_of_m_cached_Ellipsis_Character_242() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_Ellipsis_Character_242)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_m_cached_Ellipsis_Character_242() const { return ___m_cached_Ellipsis_Character_242; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_m_cached_Ellipsis_Character_242() { return &___m_cached_Ellipsis_Character_242; }
	inline void set_m_cached_Ellipsis_Character_242(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___m_cached_Ellipsis_Character_242 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_Ellipsis_Character_242), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_243() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_243)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_243() const { return ___m_defaultSpriteAsset_243; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_243() { return &___m_defaultSpriteAsset_243; }
	inline void set_m_defaultSpriteAsset_243(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_243 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_243), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_244() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_244)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_244() const { return ___m_currentSpriteAsset_244; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_244() { return &___m_currentSpriteAsset_244; }
	inline void set_m_currentSpriteAsset_244(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_244 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_244), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_245() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_245)); }
	inline int32_t get_m_spriteCount_245() const { return ___m_spriteCount_245; }
	inline int32_t* get_address_of_m_spriteCount_245() { return &___m_spriteCount_245; }
	inline void set_m_spriteCount_245(int32_t value)
	{
		___m_spriteCount_245 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_246() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_246)); }
	inline int32_t get_m_spriteIndex_246() const { return ___m_spriteIndex_246; }
	inline int32_t* get_address_of_m_spriteIndex_246() { return &___m_spriteIndex_246; }
	inline void set_m_spriteIndex_246(int32_t value)
	{
		___m_spriteIndex_246 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_247() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_247)); }
	inline int32_t get_m_spriteAnimationID_247() const { return ___m_spriteAnimationID_247; }
	inline int32_t* get_address_of_m_spriteAnimationID_247() { return &___m_spriteAnimationID_247; }
	inline void set_m_spriteAnimationID_247(int32_t value)
	{
		___m_spriteAnimationID_247 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_248() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_248)); }
	inline bool get_m_ignoreActiveState_248() const { return ___m_ignoreActiveState_248; }
	inline bool* get_address_of_m_ignoreActiveState_248() { return &___m_ignoreActiveState_248; }
	inline void set_m_ignoreActiveState_248(bool value)
	{
		___m_ignoreActiveState_248 = value;
	}

	inline static int32_t get_offset_of_k_Power_249() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_249)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_k_Power_249() const { return ___k_Power_249; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_k_Power_249() { return &___k_Power_249; }
	inline void set_k_Power_249(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___k_Power_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_249), (void*)value);
	}
};

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_52;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::onFontAssetRequest
	Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * ___onFontAssetRequest_157;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::onSpriteAssetRequest
	Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * ___onSpriteAssetRequest_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_250;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_251;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_252;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_253;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_254;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_255;

public:
	inline static int32_t get_offset_of_s_colorWhite_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_52)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_52() const { return ___s_colorWhite_52; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_52() { return &___s_colorWhite_52; }
	inline void set_s_colorWhite_52(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_52 = value;
	}

	inline static int32_t get_offset_of_onFontAssetRequest_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___onFontAssetRequest_157)); }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * get_onFontAssetRequest_157() const { return ___onFontAssetRequest_157; }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 ** get_address_of_onFontAssetRequest_157() { return &___onFontAssetRequest_157; }
	inline void set_onFontAssetRequest_157(Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * value)
	{
		___onFontAssetRequest_157 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onFontAssetRequest_157), (void*)value);
	}

	inline static int32_t get_offset_of_onSpriteAssetRequest_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___onSpriteAssetRequest_158)); }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * get_onSpriteAssetRequest_158() const { return ___onSpriteAssetRequest_158; }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA ** get_address_of_onSpriteAssetRequest_158() { return &___onSpriteAssetRequest_158; }
	inline void set_onSpriteAssetRequest_158(Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * value)
	{
		___onSpriteAssetRequest_158 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onSpriteAssetRequest_158), (void*)value);
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_250() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_250)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_250() const { return ___k_LargePositiveVector2_250; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_250() { return &___k_LargePositiveVector2_250; }
	inline void set_k_LargePositiveVector2_250(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_250 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_251() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_251)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_251() const { return ___k_LargeNegativeVector2_251; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_251() { return &___k_LargeNegativeVector2_251; }
	inline void set_k_LargeNegativeVector2_251(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_251 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_252() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_252)); }
	inline float get_k_LargePositiveFloat_252() const { return ___k_LargePositiveFloat_252; }
	inline float* get_address_of_k_LargePositiveFloat_252() { return &___k_LargePositiveFloat_252; }
	inline void set_k_LargePositiveFloat_252(float value)
	{
		___k_LargePositiveFloat_252 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_253() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_253)); }
	inline float get_k_LargeNegativeFloat_253() const { return ___k_LargeNegativeFloat_253; }
	inline float* get_address_of_k_LargeNegativeFloat_253() { return &___k_LargeNegativeFloat_253; }
	inline void set_k_LargeNegativeFloat_253(float value)
	{
		___k_LargeNegativeFloat_253 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_254() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_254)); }
	inline int32_t get_k_LargePositiveInt_254() const { return ___k_LargePositiveInt_254; }
	inline int32_t* get_address_of_k_LargePositiveInt_254() { return &___k_LargePositiveInt_254; }
	inline void set_k_LargePositiveInt_254(int32_t value)
	{
		___k_LargePositiveInt_254 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_255() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_255)); }
	inline int32_t get_k_LargeNegativeInt_255() const { return ___k_LargeNegativeInt_255; }
	inline int32_t* get_address_of_k_LargeNegativeInt_255() { return &___k_LargeNegativeInt_255; }
	inline void set_k_LargeNegativeInt_255(int32_t value)
	{
		___k_LargeNegativeInt_255 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  m_Items[1];

public:
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
};
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  m_Items[1];

public:
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
	}
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___vertices_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___normals_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tangents_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs0_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___uvs2_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___colors32_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___triangles_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_13), (void*)NULL);
		#endif
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


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Int32,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_m6FBC41AB3A4D2642700248D95261F0CFC35E5421_gshared (UnityEvent_3_t148E7A33D4F13377D0B9BD5BF04B858C35574612 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mF4194343755F31A6DED60B0D7440F095C4BD3203_gshared (UnityEvent_1_tE94A30F9AFE4AA4FC678798F316885AAF982CE71 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.RectTransform TMPro.TMP_InputField::get_textViewport()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * TMP_InputField_get_textViewport_m3B04D9A9CA5E19FA474FEB4309E26BE10AC0B67C_inline (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * PointerEventData_get_pressEventCamera_m514C040A3C32E269345D0FC8B72BB2FE553FA448 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___localPoint3, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Boolean TMPro.TMP_InputField::get_multiLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TMP_InputField_get_multiLine_m271334A6FBA24221B9214DBCCD1AC548B50BC031 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_InputField::MoveUp(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_MoveUp_mD497A827AFA8283C86B4AD33F4869FA7DE4ABFA2 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, bool ___shift0, bool ___goToFirstChar1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_InputField::MoveDown(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_MoveDown_mB735ED1A4123820A72BCF19A62C5940C835E01DF (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, bool ___shift0, bool ___goToLastChar1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_InputField::MoveLeft(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_MoveLeft_m719DBA79AA45479E954CAAE83A076786DEED1626 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, bool ___shift0, bool ___ctrl1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_InputField::MoveRight(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_MoveRight_m3803BA4BCA7CF5DAD334B325EBDBD5CFD94438C0 (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, bool ___shift0, bool ___ctrl1, const RuntimeMethod* method);
// System.Void TMPro.TMP_InputField::UpdateLabel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_UpdateLabel_m636F06D963B0418097A9E0CC87B5162900E0917E (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225 (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::set_waitTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaitForSecondsRealtime_set_waitTime_m241120AEE2F1BDD0DC3077D865C7C3D878448268_inline (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>::.ctor()
inline void UnityEvent_3__ctor_m0CD9C7A9A556BDC525BE6B44F7EF5F51891E2390 (UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tB2C1BFEE5A56978DECD9BA6756512E2CC49CB9FE *, const RuntimeMethod*))UnityEvent_3__ctor_m6FBC41AB3A4D2642700248D95261F0CFC35E5421_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.TouchScreenKeyboard/Status>::.ctor()
inline void UnityEvent_1__ctor_m6BE511C6E228D223E41574F135EAC66A848F6E26 (UnityEvent_1_tE9C9315564F7F60781AFA1CEF49651315635AD53 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tE9C9315564F7F60781AFA1CEF49651315635AD53 *, const RuntimeMethod*))UnityEvent_1__ctor_mF4194343755F31A6DED60B0D7440F095C4BD3203_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<TMPro.TMP_SpriteCharacter> TMPro.TMP_SpriteAsset::get_spriteCharacterTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7850FCF22796079854614A9268CE558E34108A02 * TMP_SpriteAsset_get_spriteCharacterTable_mF8CD258451863D2D8BCEBAEE68E74141B28A26FD (TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<TMPro.TMP_SpriteCharacter>::get_Count()
inline int32_t List_1_get_Count_mF819DF8D473C718C6506E487FA6CA7A7E38BBA0F_inline (List_1_t7850FCF22796079854614A9268CE558E34108A02 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7850FCF22796079854614A9268CE558E34108A02 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// TMPro.TMP_TextInfo TMPro.TMP_Text::get_textInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0 (int32_t ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<TMPro.TMP_SpriteCharacter>::get_Item(System.Int32)
inline TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * List_1_get_Item_m33542439372B5C0A010EF47E4A0EFFF2C288224F_inline (List_1_t7850FCF22796079854614A9268CE558E34108A02 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * (*) (List_1_t7850FCF22796079854614A9268CE558E34108A02 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.TextCore.FaceInfo TMPro.TMP_FontAsset::get_faceInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979  TMP_FontAsset_get_faceInfo_m36B45040D6E9F080986E955DD7E1006E8A892DA9_inline (TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.TextCore.FaceInfo::get_ascentLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FaceInfo_get_ascentLine_m69928E2E998FA9441C7628BF7F8D9E888470D983 (FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979 * __this, const RuntimeMethod* method);
// UnityEngine.TextCore.Glyph TMPro.TMP_TextElement::get_glyph()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline (TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * __this, const RuntimeMethod* method);
// UnityEngine.TextCore.GlyphMetrics UnityEngine.TextCore.Glyph::get_metrics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B  Glyph_get_metrics_m395A93D5BD1B7859DD95B17386DAA033D2F865B0 (Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.TextCore.GlyphMetrics::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphMetrics_get_height_m742B169DCF2892774ACEC4F25310CDC0C7F1D85F (GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B * __this, const RuntimeMethod* method);
// System.Single TMPro.TMP_TextElement::get_scale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_TextElement_get_scale_m68BBDD7267D300D683D9D4EA518EF63776CA7AB4_inline (TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.TextCore.GlyphMetrics::get_horizontalBearingX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphMetrics_get_horizontalBearingX_m8474B6C9DB0D4D36516FCAC03B6ECBDAF49247E0 (GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.TextCore.GlyphMetrics::get_horizontalBearingY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphMetrics_get_horizontalBearingY_m2C5A73B899AFF5F5F594F447160ADB6E0523C16A (GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.TextCore.GlyphMetrics::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlyphMetrics_get_width_m4E2BCD2B54F121478C1D23C43FB6E8C0EF71C70F (GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B * __this, const RuntimeMethod* method);
// UnityEngine.TextCore.GlyphRect UnityEngine.TextCore.Glyph::get_glyphRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  Glyph_get_glyphRect_mA3484840AF306B3F9B146D7162424238B4F456F9 (Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextCore.GlyphRect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_get_x_m004398D85360A389BCCD4F8B38347C0555F86166 (GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextCore.GlyphRect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_get_y_mBF2FC84CB7B201F30376B46390D37887B6AD6C20 (GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextCore.GlyphRect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_get_height_m319E96AD96E2087C9C9F5A1DF883F06A4D04104F (GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.TextCore.GlyphRect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_get_width_m8B9FBFA897082BA8E5F71222E1AAAB8D4A345A41 (GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void TMPro.TMP_SpriteAsset/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCA79298A33AFB7E17B48EB06039A99DCAE17C8FB (U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.TextCore.Glyph::get_index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Glyph_get_index_mB9A53E02F757731DC06414DFC6F4F5D1615DC248 (Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * __this, const RuntimeMethod* method);
// System.UInt32 TMPro.TMP_TextElement::get_unicode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t TMP_TextElement_get_unicode_m20235ED882CB124B30D4DDBF4C2CBD04C3D0B7E1_inline (TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text/CharacterSubstitution::.ctor(System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSubstitution__ctor_m946A077A8E070FE40CE4CBC8C3EED7249AB29649 (CharacterSubstitution_tDA217C96ED6B78235EF55ECECF09EEBD7B32156B * __this, int32_t ___index0, uint32_t ___unicode1, const RuntimeMethod* method);
// System.Void TMPro.TMP_TextUtilities/LineSegment::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineSegment__ctor_m203C6A5F41F66202C8C5915D73ED52A3FD7B4481 (LineSegment_t7EBE28F12DB31AD9429D413B42DCC8F91EB6DEB4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p10, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p21, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteFrame::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpriteFrame_ToString_m0E0107F6FBE23F147D1E8069012C4087085976C0 (SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/SpriteSize::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpriteSize_ToString_m2F7E10FDEB62E277224D7C0BE6F2CA8284A5B5F8 (SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_InputField_<MouseDragOutsideRect>d__295::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMouseDragOutsideRectU3Ed__295__ctor_m8FF3B986708F0D85E25FBE7A226BFB723ED177F1 (U3CMouseDragOutsideRectU3Ed__295_t6C65B9E078E16CC27711786EBD85596DBD82A51E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.TMP_InputField_<MouseDragOutsideRect>d__295::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMouseDragOutsideRectU3Ed__295_System_IDisposable_Dispose_mEDD6387CAD1C3D0E26199225B52E4169026A1C87 (U3CMouseDragOutsideRectU3Ed__295_t6C65B9E078E16CC27711786EBD85596DBD82A51E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.TMP_InputField_<MouseDragOutsideRect>d__295::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMouseDragOutsideRectU3Ed__295_MoveNext_mFCC0BA67155700BFEAE1C2E497CEF76CC2280BA9 (U3CMouseDragOutsideRectU3Ed__295_t6C65B9E078E16CC27711786EBD85596DBD82A51E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMouseDragOutsideRectU3Ed__295_MoveNext_mFCC0BA67155700BFEAE1C2E497CEF76CC2280BA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float G_B16_0 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0115;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_011c;
	}

IL_0026:
	{
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(textViewport, eventData.position, eventData.pressEventCamera, out localMousePos);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_4 = V_1;
		NullCheck(L_4);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = TMP_InputField_get_textViewport_m3B04D9A9CA5E19FA474FEB4309E26BE10AC0B67C_inline(L_4, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_6 = __this->get_eventData_3();
		NullCheck(L_6);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_6, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_8 = __this->get_eventData_3();
		NullCheck(L_8);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = PointerEventData_get_pressEventCamera_m514C040A3C32E269345D0FC8B72BB2FE553FA448(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03(L_5, L_7, L_9, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), /*hidden argument*/NULL);
		// Rect rect = textViewport.rect;
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_10 = V_1;
		NullCheck(L_10);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11 = TMP_InputField_get_textViewport_m3B04D9A9CA5E19FA474FEB4309E26BE10AC0B67C_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		// if (multiLine)
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_13 = V_1;
		NullCheck(L_13);
		bool L_14 = TMP_InputField_get_multiLine_m271334A6FBA24221B9214DBCCD1AC548B50BC031(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0090;
		}
	}
	{
		// if (localMousePos.y > rect.yMax)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_2;
		float L_16 = L_15.get_y_1();
		float L_17 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_0077;
		}
	}
	{
		// MoveUp(true, true);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_18 = V_1;
		NullCheck(L_18);
		TMP_InputField_MoveUp_mD497A827AFA8283C86B4AD33F4869FA7DE4ABFA2(L_18, (bool)1, (bool)1, /*hidden argument*/NULL);
		goto IL_00c0;
	}

IL_0077:
	{
		// else if (localMousePos.y < rect.yMin)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_2;
		float L_20 = L_19.get_y_1();
		float L_21 = Rect_get_yMin_m2C91041817D410B32B80E338764109D75ACB01E4((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_00c0;
		}
	}
	{
		// MoveDown(true, true);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_22 = V_1;
		NullCheck(L_22);
		TMP_InputField_MoveDown_mB735ED1A4123820A72BCF19A62C5940C835E01DF(L_22, (bool)1, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00c0;
	}

IL_0090:
	{
		// if (localMousePos.x < rect.xMin)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23 = V_2;
		float L_24 = L_23.get_x_0();
		float L_25 = Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_24) < ((float)L_25))))
		{
			goto IL_00a9;
		}
	}
	{
		// MoveLeft(true, false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_26 = V_1;
		NullCheck(L_26);
		TMP_InputField_MoveLeft_m719DBA79AA45479E954CAAE83A076786DEED1626(L_26, (bool)1, (bool)0, /*hidden argument*/NULL);
		goto IL_00c0;
	}

IL_00a9:
	{
		// else if (localMousePos.x > rect.xMax)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = V_2;
		float L_28 = L_27.get_x_0();
		float L_29 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_28) > ((float)L_29))))
		{
			goto IL_00c0;
		}
	}
	{
		// MoveRight(true, false);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_30 = V_1;
		NullCheck(L_30);
		TMP_InputField_MoveRight_m3803BA4BCA7CF5DAD334B325EBDBD5CFD94438C0(L_30, (bool)1, (bool)0, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// UpdateLabel();
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_31 = V_1;
		NullCheck(L_31);
		TMP_InputField_UpdateLabel_m636F06D963B0418097A9E0CC87B5162900E0917E(L_31, /*hidden argument*/NULL);
		// float delay = multiLine ? kVScrollSpeed : kHScrollSpeed;
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_32 = V_1;
		NullCheck(L_32);
		bool L_33 = TMP_InputField_get_multiLine_m271334A6FBA24221B9214DBCCD1AC548B50BC031(L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00d5;
		}
	}
	{
		G_B16_0 = (0.0500000007f);
		goto IL_00da;
	}

IL_00d5:
	{
		G_B16_0 = (0.100000001f);
	}

IL_00da:
	{
		V_4 = G_B16_0;
		// if (m_WaitForSecondsRealtime == null)
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_34 = V_1;
		NullCheck(L_34);
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_35 = L_34->get_m_WaitForSecondsRealtime_85();
		if (L_35)
		{
			goto IL_00f3;
		}
	}
	{
		// m_WaitForSecondsRealtime = new WaitForSecondsRealtime(delay);
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_36 = V_1;
		float L_37 = V_4;
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_38 = (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 *)il2cpp_codegen_object_new(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40_il2cpp_TypeInfo_var);
		WaitForSecondsRealtime__ctor_m7A69DE38F96121145BE8108B5AA62C789059F225(L_38, L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		L_36->set_m_WaitForSecondsRealtime_85(L_38);
		goto IL_0100;
	}

IL_00f3:
	{
		// m_WaitForSecondsRealtime.waitTime = delay;
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_39 = V_1;
		NullCheck(L_39);
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_40 = L_39->get_m_WaitForSecondsRealtime_85();
		float L_41 = V_4;
		NullCheck(L_40);
		WaitForSecondsRealtime_set_waitTime_m241120AEE2F1BDD0DC3077D865C7C3D878448268_inline(L_40, L_41, /*hidden argument*/NULL);
	}

IL_0100:
	{
		// yield return m_WaitForSecondsRealtime;
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_42 = V_1;
		NullCheck(L_42);
		WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * L_43 = L_42->get_m_WaitForSecondsRealtime_85();
		__this->set_U3CU3E2__current_1(L_43);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0115:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_011c:
	{
		// while (m_UpdateDrag && m_DragPositionOutOfBounds)
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_44 = V_1;
		NullCheck(L_44);
		bool L_45 = L_44->get_m_UpdateDrag_74();
		if (!L_45)
		{
			goto IL_012f;
		}
	}
	{
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_46 = V_1;
		NullCheck(L_46);
		bool L_47 = L_46->get_m_DragPositionOutOfBounds_75();
		if (L_47)
		{
			goto IL_0026;
		}
	}

IL_012f:
	{
		// m_DragCoroutine = null;
		TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * L_48 = V_1;
		NullCheck(L_48);
		L_48->set_m_DragCoroutine_81((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
		// }
		return (bool)0;
	}
}
// System.Object TMPro.TMP_InputField_<MouseDragOutsideRect>d__295::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMouseDragOutsideRectU3Ed__295_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m369A135E40A9F4C5912F4E31EB5D0C4FF25A301D (U3CMouseDragOutsideRectU3Ed__295_t6C65B9E078E16CC27711786EBD85596DBD82A51E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.TMP_InputField_<MouseDragOutsideRect>d__295::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMouseDragOutsideRectU3Ed__295_System_Collections_IEnumerator_Reset_m0A8B67F951F8FD3ADFC9BC61EB4BE9D0216F5655 (U3CMouseDragOutsideRectU3Ed__295_t6C65B9E078E16CC27711786EBD85596DBD82A51E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMouseDragOutsideRectU3Ed__295_System_Collections_IEnumerator_Reset_m0A8B67F951F8FD3ADFC9BC61EB4BE9D0216F5655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CMouseDragOutsideRectU3Ed__295_System_Collections_IEnumerator_Reset_m0A8B67F951F8FD3ADFC9BC61EB4BE9D0216F5655_RuntimeMethod_var);
	}
}
// System.Object TMPro.TMP_InputField_<MouseDragOutsideRect>d__295::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMouseDragOutsideRectU3Ed__295_System_Collections_IEnumerator_get_Current_m3BB5E80B369842B74DDD91DCA929BB8E1F8236DE (U3CMouseDragOutsideRectU3Ed__295_t6C65B9E078E16CC27711786EBD85596DBD82A51E * __this, const RuntimeMethod* method)
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
// System.Void TMPro.TMP_InputField_OnChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChangeEvent__ctor_m0351D16DCB67E41A698902ECA7B0926B5FABF7D7 (OnChangeEvent_tDD8E18136CE9D0B5AA66AE75E7F60D67CA7F5A03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnChangeEvent__ctor_m0351D16DCB67E41A698902ECA7B0926B5FABF7D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8(__this, /*hidden argument*/UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
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
IL2CPP_EXTERN_C  Il2CppChar DelegatePInvokeWrapper_OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA (OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, const RuntimeMethod* method)
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc)(char*, int32_t, uint8_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___text0' to native representation
	char* ____text0_marshaled = NULL;
	____text0_marshaled = il2cpp_codegen_marshal_string(___text0);

	// Native function invocation
	uint8_t returnValue = il2cppPInvokeFunc(____text0_marshaled, ___charIndex1, static_cast<uint8_t>(___addedChar2));

	// Marshaling cleanup of parameter '___text0' native representation
	il2cpp_codegen_marshal_free(____text0_marshaled);
	____text0_marshaled = NULL;

	return static_cast<Il2CppChar>(returnValue);
}
// System.Void TMPro.TMP_InputField_OnValidateInput::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValidateInput__ctor_m3801B66D312E19BE5FCD2AC4A881C0BF387BC0C7 (OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Char TMPro.TMP_InputField_OnValidateInput::Invoke(System.String,System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar OnValidateInput_Invoke_m895EB53769A4D8F70C5262DE97B68103F0F523F2 (OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, const RuntimeMethod* method)
{
	Il2CppChar result = 0x0;
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
				typedef Il2CppChar (*FunctionPointerType) (String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___text0, ___charIndex1, ___addedChar2, targetMethod);
			}
			else
			{
				// closed
				typedef Il2CppChar (*FunctionPointerType) (void*, String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___charIndex1, ___addedChar2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< Il2CppChar, int32_t, Il2CppChar >::Invoke(targetMethod, ___text0, ___charIndex1, ___addedChar2);
					else
						result = GenericVirtFuncInvoker2< Il2CppChar, int32_t, Il2CppChar >::Invoke(targetMethod, ___text0, ___charIndex1, ___addedChar2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< Il2CppChar, int32_t, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___text0, ___charIndex1, ___addedChar2);
					else
						result = VirtFuncInvoker2< Il2CppChar, int32_t, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___text0, ___charIndex1, ___addedChar2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef Il2CppChar (*FunctionPointerType) (RuntimeObject*, Il2CppChar, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___charIndex1) - 1), ___addedChar2, targetMethod);
				}
				else
				{
					typedef Il2CppChar (*FunctionPointerType) (String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___text0, ___charIndex1, ___addedChar2, targetMethod);
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
					typedef Il2CppChar (*FunctionPointerType) (String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___text0, ___charIndex1, ___addedChar2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< Il2CppChar, String_t*, int32_t, Il2CppChar >::Invoke(targetMethod, targetThis, ___text0, ___charIndex1, ___addedChar2);
					else
						result = GenericVirtFuncInvoker3< Il2CppChar, String_t*, int32_t, Il2CppChar >::Invoke(targetMethod, targetThis, ___text0, ___charIndex1, ___addedChar2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< Il2CppChar, String_t*, int32_t, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___text0, ___charIndex1, ___addedChar2);
					else
						result = VirtFuncInvoker3< Il2CppChar, String_t*, int32_t, Il2CppChar >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___text0, ___charIndex1, ___addedChar2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef Il2CppChar (*FunctionPointerType) (RuntimeObject*, int32_t, Il2CppChar, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___text0) - 1), ___charIndex1, ___addedChar2, targetMethod);
				}
				else
				{
					typedef Il2CppChar (*FunctionPointerType) (void*, String_t*, int32_t, Il2CppChar, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___text0, ___charIndex1, ___addedChar2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult TMPro.TMP_InputField_OnValidateInput::BeginInvoke(System.String,System.Int32,System.Char,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnValidateInput_BeginInvoke_mE5AB68032F4BE249936D9C0283F1D34CDF83824D (OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA * __this, String_t* ___text0, int32_t ___charIndex1, Il2CppChar ___addedChar2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnValidateInput_BeginInvoke_mE5AB68032F4BE249936D9C0283F1D34CDF83824D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___text0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___charIndex1);
	__d_args[2] = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &___addedChar2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Char TMPro.TMP_InputField_OnValidateInput::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar OnValidateInput_EndInvoke_m6776287808C8AB8048FBD39F20330A1D9401E72B (OnValidateInput_t669C9E4A5AA145BC2A45A711371835AECE5F66BA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(Il2CppChar*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.TMP_InputField_SelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionEvent__ctor_mCBCB35F6F1EFCCD2D0ECA97066D8F4BA22E7F637 (SelectionEvent_tC79F5214E33B94317C594D8B527A571961D929A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelectionEvent__ctor_mCBCB35F6F1EFCCD2D0ECA97066D8F4BA22E7F637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8(__this, /*hidden argument*/UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
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
// System.Void TMPro.TMP_InputField_SubmitEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubmitEvent__ctor_m51C949BEA5B2C49E33BC7E1CCFD03DAFB4DF321F (SubmitEvent_tCD2882D91E14B30F4FFAF154BFB4D383C0544302 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubmitEvent__ctor_m51C949BEA5B2C49E33BC7E1CCFD03DAFB4DF321F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8(__this, /*hidden argument*/UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
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
// System.Void TMPro.TMP_InputField_TextSelectionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextSelectionEvent__ctor_mEE3D48EF849928ABE42D5B5B062CE0C21031E496 (TextSelectionEvent_tC5B8D2B0C05A7374407913D2E6445B514EA26215 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextSelectionEvent__ctor_mEE3D48EF849928ABE42D5B5B062CE0C21031E496_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_3__ctor_m0CD9C7A9A556BDC525BE6B44F7EF5F51891E2390(__this, /*hidden argument*/UnityEvent_3__ctor_m0CD9C7A9A556BDC525BE6B44F7EF5F51891E2390_RuntimeMethod_var);
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
// System.Void TMPro.TMP_InputField_TouchScreenKeyboardEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchScreenKeyboardEvent__ctor_m7F7C5E6175EFA4192E67991C475EBC440BEC6C5D (TouchScreenKeyboardEvent_t202B521A95E8D94F343354D1D54C90B5A0A756CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchScreenKeyboardEvent__ctor_m7F7C5E6175EFA4192E67991C475EBC440BEC6C5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m6BE511C6E228D223E41574F135EAC66A848F6E26(__this, /*hidden argument*/UnityEvent_1__ctor_m6BE511C6E228D223E41574F135EAC66A848F6E26_RuntimeMethod_var);
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
// System.Void TMPro.TMP_MaterialManager_<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mC9A7DFCF72DACC948E41C0B1F81F8D6ECAA48582 (U3CU3Ec__DisplayClass10_0_t90D02E79E3E79BCC0EF1C16D2A82823B153B9581 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TMPro.TMP_MaterialManager_<>c__DisplayClass10_0::<GetBaseMaterial>b__0(TMPro.TMP_MaterialManager_MaskingMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass10_0_U3CGetBaseMaterialU3Eb__0_m0D51BA4AAE6670C8FDBF05C7756C816F50B7CC00 (U3CU3Ec__DisplayClass10_0_t90D02E79E3E79BCC0EF1C16D2A82823B153B9581 * __this, MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass10_0_U3CGetBaseMaterialU3Eb__0_m0D51BA4AAE6670C8FDBF05C7756C816F50B7CC00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int index = m_materialList.FindIndex(item => item.stencilMaterial == stencilMaterial);
		MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6 * L_0 = ___item0;
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = L_0->get_stencilMaterial_1();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_stencilMaterial_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void TMPro.TMP_MaterialManager_<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m1206C1EC5FDDBC733C34A4E8E3AFF76AC2D1D616 (U3CU3Ec__DisplayClass12_0_t97E44E0822D2A972850C27A67A346E3DDD2C17CE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TMPro.TMP_MaterialManager_<>c__DisplayClass12_0::<AddMaskingMaterial>b__0(TMPro.TMP_MaterialManager_MaskingMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CAddMaskingMaterialU3Eb__0_m2602E3308732D97A558050078AF5F08B6731330B (U3CU3Ec__DisplayClass12_0_t97E44E0822D2A972850C27A67A346E3DDD2C17CE * __this, MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass12_0_U3CAddMaskingMaterialU3Eb__0_m2602E3308732D97A558050078AF5F08B6731330B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int index = m_materialList.FindIndex(item => item.stencilMaterial == stencilMaterial);
		MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6 * L_0 = ___item0;
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = L_0->get_stencilMaterial_1();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_stencilMaterial_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void TMPro.TMP_MaterialManager_<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mFB02298C1354617B75AB88896A6B3C0AE1D9CEA2 (U3CU3Ec__DisplayClass13_0_t03B63B6E389DD5F625E9793691378A839FAC326A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TMPro.TMP_MaterialManager_<>c__DisplayClass13_0::<RemoveStencilMaterial>b__0(TMPro.TMP_MaterialManager_MaskingMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CRemoveStencilMaterialU3Eb__0_mD7D257F7700D89B24D6780C1DDB236DF6F827223 (U3CU3Ec__DisplayClass13_0_t03B63B6E389DD5F625E9793691378A839FAC326A * __this, MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_0_U3CRemoveStencilMaterialU3Eb__0_mD7D257F7700D89B24D6780C1DDB236DF6F827223_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int index = m_materialList.FindIndex(item => item.stencilMaterial == stencilMaterial);
		MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6 * L_0 = ___item0;
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = L_0->get_stencilMaterial_1();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_stencilMaterial_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void TMPro.TMP_MaterialManager_<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m8569FD207143748AF1533F5871566CB7CFF0093D (U3CU3Ec__DisplayClass14_0_t4BAD2306B944E999201A036DD30881AC715151A7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TMPro.TMP_MaterialManager_<>c__DisplayClass14_0::<ReleaseBaseMaterial>b__0(TMPro.TMP_MaterialManager_MaskingMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass14_0_U3CReleaseBaseMaterialU3Eb__0_mDC9D1A56F632BE1CC73F7F73F711A369650CD0DB (U3CU3Ec__DisplayClass14_0_t4BAD2306B944E999201A036DD30881AC715151A7 * __this, MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass14_0_U3CReleaseBaseMaterialU3Eb__0_mDC9D1A56F632BE1CC73F7F73F711A369650CD0DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int index = m_materialList.FindIndex(item => item.baseMaterial == baseMaterial);
		MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6 * L_0 = ___item0;
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = L_0->get_baseMaterial_0();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_baseMaterial_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void TMPro.TMP_MaterialManager_FallbackMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FallbackMaterial__ctor_m2E05554A02E9C5605D0D309077926EC14D4870B9 (FallbackMaterial_t34F3811743F5B0EEF3F543CCF13DB3B8D467328D * __this, const RuntimeMethod* method)
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
// System.Void TMPro.TMP_MaterialManager_MaskingMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskingMaterial__ctor_m289BDCA48A83CE31014BDD9A2D6BAF022FA54FC7 (MaskingMaterial_tF09DD3EF93552BEDC575F09D61BCBD84F28C06F6 * __this, const RuntimeMethod* method)
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
// System.Void TMPro.TMP_Settings_LineBreakingTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineBreakingTable__ctor_m433FB88DF25F591B34BCFEC7EA284318B93E27D6 (LineBreakingTable_t5E2CD902456D50AA9B0F9C64BCF16045E86D19F2 * __this, const RuntimeMethod* method)
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
// System.Void TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSpriteAnimationInternalU3Ed__7__ctor_mC8B7DC0B29E7F497F0DDD3FC6C16F6214485FD44 (U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSpriteAnimationInternalU3Ed__7_System_IDisposable_Dispose_mFDC33A5B9AEACC26EDD479C1F3794CDE7F548FE4 (U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoSpriteAnimationInternalU3Ed__7_MoveNext_mB6F9E521DD53C25FD68F5884CCB51DD5101823D2 (U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDoSpriteAnimationInternalU3Ed__7_MoveNext_mB6F9E521DD53C25FD68F5884CCB51DD5101823D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * V_1 = NULL;
	TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * V_2 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_3 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* V_10 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_14;
	memset((&V_14), 0, sizeof(V_14));
	FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979  V_15;
	memset((&V_15), 0, sizeof(V_15));
	GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B  V_16;
	memset((&V_16), 0, sizeof(V_16));
	GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  V_17;
	memset((&V_17), 0, sizeof(V_17));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_0049;
			}
			case 2:
			{
				goto IL_04db;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (m_TextComponent == null) yield break;
		TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * L_3 = V_1;
		NullCheck(L_3);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_4 = L_3->get_m_TextComponent_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// if (m_TextComponent == null) yield break;
		return (bool)0;
	}

IL_0039:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0049:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int currentFrame = start;
		int32_t L_6 = __this->get_start_3();
		__this->set_U3CcurrentFrameU3E5__2_8(L_6);
		// if (end > spriteAsset.spriteCharacterTable.Count)
		int32_t L_7 = __this->get_end_4();
		TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * L_8 = __this->get_spriteAsset_5();
		NullCheck(L_8);
		List_1_t7850FCF22796079854614A9268CE558E34108A02 * L_9 = TMP_SpriteAsset_get_spriteCharacterTable_mF8CD258451863D2D8BCEBAEE68E74141B28A26FD(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = List_1_get_Count_mF819DF8D473C718C6506E487FA6CA7A7E38BBA0F_inline(L_9, /*hidden argument*/List_1_get_Count_mF819DF8D473C718C6506E487FA6CA7A7E38BBA0F_RuntimeMethod_var);
		if ((((int32_t)L_7) <= ((int32_t)L_10)))
		{
			goto IL_008c;
		}
	}
	{
		// end = spriteAsset.spriteCharacterTable.Count - 1;
		TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * L_11 = __this->get_spriteAsset_5();
		NullCheck(L_11);
		List_1_t7850FCF22796079854614A9268CE558E34108A02 * L_12 = TMP_SpriteAsset_get_spriteCharacterTable_mF8CD258451863D2D8BCEBAEE68E74141B28A26FD(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_mF819DF8D473C718C6506E487FA6CA7A7E38BBA0F_inline(L_12, /*hidden argument*/List_1_get_Count_mF819DF8D473C718C6506E487FA6CA7A7E38BBA0F_RuntimeMethod_var);
		__this->set_end_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)));
	}

IL_008c:
	{
		// TMP_CharacterInfo charInfo = m_TextComponent.textInfo.characterInfo[currentCharacter];
		TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * L_14 = V_1;
		NullCheck(L_14);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_15 = L_14->get_m_TextComponent_5();
		NullCheck(L_15);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_16 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* L_17 = L_16->get_characterInfo_11();
		int32_t L_18 = __this->get_currentCharacter_6();
		NullCheck(L_17);
		int32_t L_19 = L_18;
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B  L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		__this->set_U3CcharInfoU3E5__3_9(L_20);
		// int materialIndex = charInfo.materialReferenceIndex;
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * L_21 = __this->get_address_of_U3CcharInfoU3E5__3_9();
		int32_t L_22 = L_21->get_materialReferenceIndex_9();
		__this->set_U3CmaterialIndexU3E5__4_10(L_22);
		// int vertexIndex = charInfo.vertexIndex;
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * L_23 = __this->get_address_of_U3CcharInfoU3E5__3_9();
		int32_t L_24 = L_23->get_vertexIndex_14();
		__this->set_U3CvertexIndexU3E5__5_11(L_24);
		// TMP_MeshInfo meshInfo = m_TextComponent.textInfo.meshInfo[materialIndex];
		TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * L_25 = V_1;
		NullCheck(L_25);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_26 = L_25->get_m_TextComponent_5();
		NullCheck(L_26);
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_27 = TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		TMP_MeshInfoU5BU5D_t6C0A65D18C54B6FA681B2EB0676B83116FD03119* L_28 = L_27->get_meshInfo_16();
		int32_t L_29 = __this->get_U3CmaterialIndexU3E5__4_10();
		NullCheck(L_28);
		int32_t L_30 = L_29;
		TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176  L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		__this->set_U3CmeshInfoU3E5__6_12(L_31);
		// float elapsedTime = 0;
		__this->set_U3CelapsedTimeU3E5__7_13((0.0f));
		// float targetTime = 1f / Mathf.Abs(framerate);
		int32_t L_32 = __this->get_framerate_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		int32_t L_33 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0(L_32, /*hidden argument*/NULL);
		__this->set_U3CtargetTimeU3E5__8_14(((float)((float)(1.0f)/(float)(((float)((float)L_33))))));
	}

IL_0113:
	{
		// if (elapsedTime > targetTime)
		float L_34 = __this->get_U3CelapsedTimeU3E5__7_13();
		float L_35 = __this->get_U3CtargetTimeU3E5__8_14();
		if ((!(((float)L_34) > ((float)L_35))))
		{
			goto IL_04b9;
		}
	}
	{
		// elapsedTime = 0;
		__this->set_U3CelapsedTimeU3E5__7_13((0.0f));
		// TMP_SpriteCharacter spriteCharacter = spriteAsset.spriteCharacterTable[currentFrame];
		TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * L_36 = __this->get_spriteAsset_5();
		NullCheck(L_36);
		List_1_t7850FCF22796079854614A9268CE558E34108A02 * L_37 = TMP_SpriteAsset_get_spriteCharacterTable_mF8CD258451863D2D8BCEBAEE68E74141B28A26FD(L_36, /*hidden argument*/NULL);
		int32_t L_38 = __this->get_U3CcurrentFrameU3E5__2_8();
		NullCheck(L_37);
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_39 = List_1_get_Item_m33542439372B5C0A010EF47E4A0EFFF2C288224F_inline(L_37, L_38, /*hidden argument*/List_1_get_Item_m33542439372B5C0A010EF47E4A0EFFF2C288224F_RuntimeMethod_var);
		V_2 = L_39;
		// Vector3[] vertices = meshInfo.vertices;
		TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * L_40 = __this->get_address_of_U3CmeshInfoU3E5__6_12();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_41 = L_40->get_vertices_6();
		V_3 = L_41;
		// Vector2 origin = new Vector2(charInfo.origin, charInfo.baseLine);
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * L_42 = __this->get_address_of_U3CcharInfoU3E5__3_9();
		float L_43 = L_42->get_origin_23();
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * L_44 = __this->get_address_of_U3CcharInfoU3E5__3_9();
		float L_45 = L_44->get_baseLine_25();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_4), L_43, L_45, /*hidden argument*/NULL);
		// float spriteScale = charInfo.fontAsset.faceInfo.ascentLine / spriteCharacter.glyph.metrics.height * spriteCharacter.scale * charInfo.scale;
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * L_46 = __this->get_address_of_U3CcharInfoU3E5__3_9();
		TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * L_47 = L_46->get_fontAsset_5();
		NullCheck(L_47);
		FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979  L_48 = TMP_FontAsset_get_faceInfo_m36B45040D6E9F080986E955DD7E1006E8A892DA9_inline(L_47, /*hidden argument*/NULL);
		V_15 = L_48;
		float L_49 = FaceInfo_get_ascentLine_m69928E2E998FA9441C7628BF7F8D9E888470D983((FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979 *)(&V_15), /*hidden argument*/NULL);
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_50 = V_2;
		NullCheck(L_50);
		Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * L_51 = TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B  L_52 = Glyph_get_metrics_m395A93D5BD1B7859DD95B17386DAA033D2F865B0(L_51, /*hidden argument*/NULL);
		V_16 = L_52;
		float L_53 = GlyphMetrics_get_height_m742B169DCF2892774ACEC4F25310CDC0C7F1D85F((GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B *)(&V_16), /*hidden argument*/NULL);
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_54 = V_2;
		NullCheck(L_54);
		float L_55 = TMP_TextElement_get_scale_m68BBDD7267D300D683D9D4EA518EF63776CA7AB4_inline(L_54, /*hidden argument*/NULL);
		TMP_CharacterInfo_t6F1B9FE4246803FFE4F527B3CEFED9D60AD7383B * L_56 = __this->get_address_of_U3CcharInfoU3E5__3_9();
		float L_57 = L_56->get_scale_29();
		V_5 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_49/(float)L_53)), (float)L_55)), (float)L_57));
		// Vector3 bl = new Vector3(origin.x + spriteCharacter.glyph.metrics.horizontalBearingX * spriteScale, origin.y + (spriteCharacter.glyph.metrics.horizontalBearingY - spriteCharacter.glyph.metrics.height) * spriteScale);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58 = V_4;
		float L_59 = L_58.get_x_0();
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_60 = V_2;
		NullCheck(L_60);
		Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * L_61 = TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline(L_60, /*hidden argument*/NULL);
		NullCheck(L_61);
		GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B  L_62 = Glyph_get_metrics_m395A93D5BD1B7859DD95B17386DAA033D2F865B0(L_61, /*hidden argument*/NULL);
		V_16 = L_62;
		float L_63 = GlyphMetrics_get_horizontalBearingX_m8474B6C9DB0D4D36516FCAC03B6ECBDAF49247E0((GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B *)(&V_16), /*hidden argument*/NULL);
		float L_64 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65 = V_4;
		float L_66 = L_65.get_y_1();
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_67 = V_2;
		NullCheck(L_67);
		Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * L_68 = TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B  L_69 = Glyph_get_metrics_m395A93D5BD1B7859DD95B17386DAA033D2F865B0(L_68, /*hidden argument*/NULL);
		V_16 = L_69;
		float L_70 = GlyphMetrics_get_horizontalBearingY_m2C5A73B899AFF5F5F594F447160ADB6E0523C16A((GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B *)(&V_16), /*hidden argument*/NULL);
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_71 = V_2;
		NullCheck(L_71);
		Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * L_72 = TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline(L_71, /*hidden argument*/NULL);
		NullCheck(L_72);
		GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B  L_73 = Glyph_get_metrics_m395A93D5BD1B7859DD95B17386DAA033D2F865B0(L_72, /*hidden argument*/NULL);
		V_16 = L_73;
		float L_74 = GlyphMetrics_get_height_m742B169DCF2892774ACEC4F25310CDC0C7F1D85F((GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B *)(&V_16), /*hidden argument*/NULL);
		float L_75 = V_5;
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), ((float)il2cpp_codegen_add((float)L_59, (float)((float)il2cpp_codegen_multiply((float)L_63, (float)L_64)))), ((float)il2cpp_codegen_add((float)L_66, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_70, (float)L_74)), (float)L_75)))), /*hidden argument*/NULL);
		// Vector3 tl = new Vector3(bl.x, origin.y + spriteCharacter.glyph.metrics.horizontalBearingY * spriteScale);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = V_6;
		float L_77 = L_76.get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_78 = V_4;
		float L_79 = L_78.get_y_1();
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_80 = V_2;
		NullCheck(L_80);
		Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * L_81 = TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline(L_80, /*hidden argument*/NULL);
		NullCheck(L_81);
		GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B  L_82 = Glyph_get_metrics_m395A93D5BD1B7859DD95B17386DAA033D2F865B0(L_81, /*hidden argument*/NULL);
		V_16 = L_82;
		float L_83 = GlyphMetrics_get_horizontalBearingY_m2C5A73B899AFF5F5F594F447160ADB6E0523C16A((GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B *)(&V_16), /*hidden argument*/NULL);
		float L_84 = V_5;
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), L_77, ((float)il2cpp_codegen_add((float)L_79, (float)((float)il2cpp_codegen_multiply((float)L_83, (float)L_84)))), /*hidden argument*/NULL);
		// Vector3 tr = new Vector3(origin.x + (spriteCharacter.glyph.metrics.horizontalBearingX + spriteCharacter.glyph.metrics.width) * spriteScale, tl.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_85 = V_4;
		float L_86 = L_85.get_x_0();
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_87 = V_2;
		NullCheck(L_87);
		Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * L_88 = TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline(L_87, /*hidden argument*/NULL);
		NullCheck(L_88);
		GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B  L_89 = Glyph_get_metrics_m395A93D5BD1B7859DD95B17386DAA033D2F865B0(L_88, /*hidden argument*/NULL);
		V_16 = L_89;
		float L_90 = GlyphMetrics_get_horizontalBearingX_m8474B6C9DB0D4D36516FCAC03B6ECBDAF49247E0((GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B *)(&V_16), /*hidden argument*/NULL);
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_91 = V_2;
		NullCheck(L_91);
		Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * L_92 = TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline(L_91, /*hidden argument*/NULL);
		NullCheck(L_92);
		GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B  L_93 = Glyph_get_metrics_m395A93D5BD1B7859DD95B17386DAA033D2F865B0(L_92, /*hidden argument*/NULL);
		V_16 = L_93;
		float L_94 = GlyphMetrics_get_width_m4E2BCD2B54F121478C1D23C43FB6E8C0EF71C70F((GlyphMetrics_t46B609AF0FC41272561342E8B5AEF35E4E1B537B *)(&V_16), /*hidden argument*/NULL);
		float L_95 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96 = V_7;
		float L_97 = L_96.get_y_3();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), ((float)il2cpp_codegen_add((float)L_86, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_90, (float)L_94)), (float)L_95)))), L_97, /*hidden argument*/NULL);
		// Vector3 br = new Vector3(tr.x, bl.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98 = V_8;
		float L_99 = L_98.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100 = V_6;
		float L_101 = L_100.get_y_3();
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), L_99, L_101, /*hidden argument*/NULL);
		// vertices[vertexIndex + 0] = bl;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_102 = V_3;
		int32_t L_103 = __this->get_U3CvertexIndexU3E5__5_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104 = V_6;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_104);
		// vertices[vertexIndex + 1] = tl;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_105 = V_3;
		int32_t L_106 = __this->get_U3CvertexIndexU3E5__5_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107 = V_7;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_107);
		// vertices[vertexIndex + 2] = tr;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_108 = V_3;
		int32_t L_109 = __this->get_U3CvertexIndexU3E5__5_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110 = V_8;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_110);
		// vertices[vertexIndex + 3] = br;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_111 = V_3;
		int32_t L_112 = __this->get_U3CvertexIndexU3E5__5_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113 = V_9;
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_113);
		// Vector2[] uvs0 = meshInfo.uvs0;
		TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * L_114 = __this->get_address_of_U3CmeshInfoU3E5__6_12();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_115 = L_114->get_uvs0_9();
		V_10 = L_115;
		// Vector2 uv0 = new Vector2((float)spriteCharacter.glyph.glyphRect.x / spriteAsset.spriteSheet.width, (float)spriteCharacter.glyph.glyphRect.y / spriteAsset.spriteSheet.height);
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_116 = V_2;
		NullCheck(L_116);
		Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * L_117 = TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline(L_116, /*hidden argument*/NULL);
		NullCheck(L_117);
		GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  L_118 = Glyph_get_glyphRect_mA3484840AF306B3F9B146D7162424238B4F456F9(L_117, /*hidden argument*/NULL);
		V_17 = L_118;
		int32_t L_119 = GlyphRect_get_x_m004398D85360A389BCCD4F8B38347C0555F86166((GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D *)(&V_17), /*hidden argument*/NULL);
		TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * L_120 = __this->get_spriteAsset_5();
		NullCheck(L_120);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_121 = L_120->get_spriteSheet_13();
		NullCheck(L_121);
		int32_t L_122 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_121);
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_123 = V_2;
		NullCheck(L_123);
		Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * L_124 = TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline(L_123, /*hidden argument*/NULL);
		NullCheck(L_124);
		GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  L_125 = Glyph_get_glyphRect_mA3484840AF306B3F9B146D7162424238B4F456F9(L_124, /*hidden argument*/NULL);
		V_17 = L_125;
		int32_t L_126 = GlyphRect_get_y_mBF2FC84CB7B201F30376B46390D37887B6AD6C20((GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D *)(&V_17), /*hidden argument*/NULL);
		TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * L_127 = __this->get_spriteAsset_5();
		NullCheck(L_127);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_128 = L_127->get_spriteSheet_13();
		NullCheck(L_128);
		int32_t L_129 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_128);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_11), ((float)((float)(((float)((float)L_119)))/(float)(((float)((float)L_122))))), ((float)((float)(((float)((float)L_126)))/(float)(((float)((float)L_129))))), /*hidden argument*/NULL);
		// Vector2 uv1 = new Vector2(uv0.x, (float)(spriteCharacter.glyph.glyphRect.y + spriteCharacter.glyph.glyphRect.height) / spriteAsset.spriteSheet.height);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_130 = V_11;
		float L_131 = L_130.get_x_0();
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_132 = V_2;
		NullCheck(L_132);
		Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * L_133 = TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline(L_132, /*hidden argument*/NULL);
		NullCheck(L_133);
		GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  L_134 = Glyph_get_glyphRect_mA3484840AF306B3F9B146D7162424238B4F456F9(L_133, /*hidden argument*/NULL);
		V_17 = L_134;
		int32_t L_135 = GlyphRect_get_y_mBF2FC84CB7B201F30376B46390D37887B6AD6C20((GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D *)(&V_17), /*hidden argument*/NULL);
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_136 = V_2;
		NullCheck(L_136);
		Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * L_137 = TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline(L_136, /*hidden argument*/NULL);
		NullCheck(L_137);
		GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  L_138 = Glyph_get_glyphRect_mA3484840AF306B3F9B146D7162424238B4F456F9(L_137, /*hidden argument*/NULL);
		V_17 = L_138;
		int32_t L_139 = GlyphRect_get_height_m319E96AD96E2087C9C9F5A1DF883F06A4D04104F((GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D *)(&V_17), /*hidden argument*/NULL);
		TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * L_140 = __this->get_spriteAsset_5();
		NullCheck(L_140);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_141 = L_140->get_spriteSheet_13();
		NullCheck(L_141);
		int32_t L_142 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_141);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_12), L_131, ((float)((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)L_139)))))/(float)(((float)((float)L_142))))), /*hidden argument*/NULL);
		// Vector2 uv2 = new Vector2((float)(spriteCharacter.glyph.glyphRect.x + spriteCharacter.glyph.glyphRect.width) / spriteAsset.spriteSheet.width, uv1.y);
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_143 = V_2;
		NullCheck(L_143);
		Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * L_144 = TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline(L_143, /*hidden argument*/NULL);
		NullCheck(L_144);
		GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  L_145 = Glyph_get_glyphRect_mA3484840AF306B3F9B146D7162424238B4F456F9(L_144, /*hidden argument*/NULL);
		V_17 = L_145;
		int32_t L_146 = GlyphRect_get_x_m004398D85360A389BCCD4F8B38347C0555F86166((GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D *)(&V_17), /*hidden argument*/NULL);
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_147 = V_2;
		NullCheck(L_147);
		Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * L_148 = TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline(L_147, /*hidden argument*/NULL);
		NullCheck(L_148);
		GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D  L_149 = Glyph_get_glyphRect_mA3484840AF306B3F9B146D7162424238B4F456F9(L_148, /*hidden argument*/NULL);
		V_17 = L_149;
		int32_t L_150 = GlyphRect_get_width_m8B9FBFA897082BA8E5F71222E1AAAB8D4A345A41((GlyphRect_t4F6A791326A28C2CEC6B13B0BD50A4F78280289D *)(&V_17), /*hidden argument*/NULL);
		TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * L_151 = __this->get_spriteAsset_5();
		NullCheck(L_151);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_152 = L_151->get_spriteSheet_13();
		NullCheck(L_152);
		int32_t L_153 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_152);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_154 = V_12;
		float L_155 = L_154.get_y_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_13), ((float)((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)L_150)))))/(float)(((float)((float)L_153))))), L_155, /*hidden argument*/NULL);
		// Vector2 uv3 = new Vector2(uv2.x, uv0.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_156 = V_13;
		float L_157 = L_156.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_158 = V_11;
		float L_159 = L_158.get_y_1();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_14), L_157, L_159, /*hidden argument*/NULL);
		// uvs0[vertexIndex + 0] = uv0;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_160 = V_10;
		int32_t L_161 = __this->get_U3CvertexIndexU3E5__5_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_162 = V_11;
		NullCheck(L_160);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(L_161), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_162);
		// uvs0[vertexIndex + 1] = uv1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_163 = V_10;
		int32_t L_164 = __this->get_U3CvertexIndexU3E5__5_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_165 = V_12;
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)1))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_165);
		// uvs0[vertexIndex + 2] = uv2;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_166 = V_10;
		int32_t L_167 = __this->get_U3CvertexIndexU3E5__5_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_168 = V_13;
		NullCheck(L_166);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_167, (int32_t)2))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_168);
		// uvs0[vertexIndex + 3] = uv3;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_169 = V_10;
		int32_t L_170 = __this->get_U3CvertexIndexU3E5__5_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_171 = V_14;
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)3))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_171);
		// meshInfo.mesh.vertices = vertices;
		TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * L_172 = __this->get_address_of_U3CmeshInfoU3E5__6_12();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_173 = L_172->get_mesh_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_174 = V_3;
		NullCheck(L_173);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_173, L_174, /*hidden argument*/NULL);
		// meshInfo.mesh.uv = uvs0;
		TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * L_175 = __this->get_address_of_U3CmeshInfoU3E5__6_12();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_176 = L_175->get_mesh_4();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_177 = V_10;
		NullCheck(L_176);
		Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC(L_176, L_177, /*hidden argument*/NULL);
		// m_TextComponent.UpdateGeometry(meshInfo.mesh, materialIndex);
		TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * L_178 = V_1;
		NullCheck(L_178);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_179 = L_178->get_m_TextComponent_5();
		TMP_MeshInfo_t69FCEF4CBC055C00598478835753D43D94A03176 * L_180 = __this->get_address_of_U3CmeshInfoU3E5__6_12();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_181 = L_180->get_mesh_4();
		int32_t L_182 = __this->get_U3CmaterialIndexU3E5__4_10();
		NullCheck(L_179);
		VirtActionInvoker2< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, int32_t >::Invoke(104 /* System.Void TMPro.TMP_Text::UpdateGeometry(UnityEngine.Mesh,System.Int32) */, L_179, L_181, L_182);
		// if (framerate > 0)
		int32_t L_183 = __this->get_framerate_7();
		if ((((int32_t)L_183) <= ((int32_t)0)))
		{
			goto IL_048f;
		}
	}
	{
		// if (currentFrame < end)
		int32_t L_184 = __this->get_U3CcurrentFrameU3E5__2_8();
		int32_t L_185 = __this->get_end_4();
		if ((((int32_t)L_184) >= ((int32_t)L_185)))
		{
			goto IL_0481;
		}
	}
	{
		// currentFrame += 1;
		int32_t L_186 = __this->get_U3CcurrentFrameU3E5__2_8();
		__this->set_U3CcurrentFrameU3E5__2_8(((int32_t)il2cpp_codegen_add((int32_t)L_186, (int32_t)1)));
		goto IL_04b9;
	}

IL_0481:
	{
		// currentFrame = start;
		int32_t L_187 = __this->get_start_3();
		__this->set_U3CcurrentFrameU3E5__2_8(L_187);
		// }
		goto IL_04b9;
	}

IL_048f:
	{
		// if (currentFrame > start)
		int32_t L_188 = __this->get_U3CcurrentFrameU3E5__2_8();
		int32_t L_189 = __this->get_start_3();
		if ((((int32_t)L_188) <= ((int32_t)L_189)))
		{
			goto IL_04ad;
		}
	}
	{
		// currentFrame -= 1;
		int32_t L_190 = __this->get_U3CcurrentFrameU3E5__2_8();
		__this->set_U3CcurrentFrameU3E5__2_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_190, (int32_t)1)));
		goto IL_04b9;
	}

IL_04ad:
	{
		// currentFrame = end;
		int32_t L_191 = __this->get_end_4();
		__this->set_U3CcurrentFrameU3E5__2_8(L_191);
	}

IL_04b9:
	{
		// elapsedTime += Time.deltaTime;
		float L_192 = __this->get_U3CelapsedTimeU3E5__7_13();
		float L_193 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CelapsedTimeU3E5__7_13(((float)il2cpp_codegen_add((float)L_192, (float)L_193)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_04db:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0113;
	}
}
// System.Object TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoSpriteAnimationInternalU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE4FF2A37276B6C6F2FF0CDF80A1B12AF48EDE0B8 (U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoSpriteAnimationInternalU3Ed__7_System_Collections_IEnumerator_Reset_mF7642B8A220BF177AE66DB1DBC15777E278CAD4A (U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDoSpriteAnimationInternalU3Ed__7_System_Collections_IEnumerator_Reset_mF7642B8A220BF177AE66DB1DBC15777E278CAD4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDoSpriteAnimationInternalU3Ed__7_System_Collections_IEnumerator_Reset_mF7642B8A220BF177AE66DB1DBC15777E278CAD4A_RuntimeMethod_var);
	}
}
// System.Object TMPro.TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDoSpriteAnimationInternalU3Ed__7_System_Collections_IEnumerator_get_Current_m0C0CAB861DB5A575BD2844D47C70A3474F3C29BC (U3CDoSpriteAnimationInternalU3Ed__7_t17C4944ED8E79F3794896A7905EB186136E7189F * __this, const RuntimeMethod* method)
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
// System.Void TMPro.TMP_SpriteAsset_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA96094764ECB02A5E90C3ADB78563AC3FAE97581 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mA96094764ECB02A5E90C3ADB78563AC3FAE97581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E * L_0 = (U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E *)il2cpp_codegen_object_new(U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mCA79298A33AFB7E17B48EB06039A99DCAE17C8FB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TMPro.TMP_SpriteAsset_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCA79298A33AFB7E17B48EB06039A99DCAE17C8FB (U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt32 TMPro.TMP_SpriteAsset_<>c::<SortGlyphTable>b__36_0(TMPro.TMP_SpriteGlyph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CU3Ec_U3CSortGlyphTableU3Eb__36_0_mEA9FF24BCB9999F8029B7157A301BDD95829B99D (U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E * __this, TMP_SpriteGlyph_t5DF3D3BFFC0D0A72ABEBA3490F804B591BF1F25D * ___item0, const RuntimeMethod* method)
{
	{
		// m_SpriteGlyphTable = m_SpriteGlyphTable.OrderBy(item => item.index).ToList();
		TMP_SpriteGlyph_t5DF3D3BFFC0D0A72ABEBA3490F804B591BF1F25D * L_0 = ___item0;
		NullCheck(L_0);
		uint32_t L_1 = Glyph_get_index_mB9A53E02F757731DC06414DFC6F4F5D1615DC248(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.UInt32 TMPro.TMP_SpriteAsset_<>c::<SortCharacterTable>b__37_0(TMPro.TMP_SpriteCharacter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CU3Ec_U3CSortCharacterTableU3Eb__37_0_mA4A905EE0FEE99D8E6C6492DCA837E5289BBFFBF (U3CU3Ec_t7A519F9483C9CA5531AF1A542B4482FB88DE972E * __this, TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * ___c0, const RuntimeMethod* method)
{
	{
		// m_SpriteCharacterTable = m_SpriteCharacterTable.OrderBy(c => c.unicode).ToList();
		TMP_SpriteCharacter_t77E119FE8164154A682A4F70E7787B2C56A0E9BE * L_0 = ___c0;
		NullCheck(L_0);
		uint32_t L_1 = TMP_TextElement_get_unicode_m20235ED882CB124B30D4DDBF4C2CBD04C3D0B7E1_inline(L_0, /*hidden argument*/NULL);
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
// System.Void TMPro.TMP_Text_CharacterSubstitution::.ctor(System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSubstitution__ctor_m946A077A8E070FE40CE4CBC8C3EED7249AB29649 (CharacterSubstitution_tDA217C96ED6B78235EF55ECECF09EEBD7B32156B * __this, int32_t ___index0, uint32_t ___unicode1, const RuntimeMethod* method)
{
	{
		// this.index = index;
		int32_t L_0 = ___index0;
		__this->set_index_0(L_0);
		// this.unicode = unicode;
		uint32_t L_1 = ___unicode1;
		__this->set_unicode_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CharacterSubstitution__ctor_m946A077A8E070FE40CE4CBC8C3EED7249AB29649_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, uint32_t ___unicode1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CharacterSubstitution_tDA217C96ED6B78235EF55ECECF09EEBD7B32156B * _thisAdjusted = reinterpret_cast<CharacterSubstitution_tDA217C96ED6B78235EF55ECECF09EEBD7B32156B *>(__this + _offset);
	CharacterSubstitution__ctor_m946A077A8E070FE40CE4CBC8C3EED7249AB29649(_thisAdjusted, ___index0, ___unicode1, method);
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
// System.Void TMPro.TMP_TextUtilities_LineSegment::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineSegment__ctor_m203C6A5F41F66202C8C5915D73ED52A3FD7B4481 (LineSegment_t7EBE28F12DB31AD9429D413B42DCC8F91EB6DEB4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p10, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p21, const RuntimeMethod* method)
{
	{
		// Point1 = p1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___p10;
		__this->set_Point1_0(L_0);
		// Point2 = p2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___p21;
		__this->set_Point2_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void LineSegment__ctor_m203C6A5F41F66202C8C5915D73ED52A3FD7B4481_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p10, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___p21, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LineSegment_t7EBE28F12DB31AD9429D413B42DCC8F91EB6DEB4 * _thisAdjusted = reinterpret_cast<LineSegment_t7EBE28F12DB31AD9429D413B42DCC8F91EB6DEB4 *>(__this + _offset);
	LineSegment__ctor_m203C6A5F41F66202C8C5915D73ED52A3FD7B4481(_thisAdjusted, ___p10, ___p21, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
IL2CPP_EXTERN_C void Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke(const Frame_t277B57D2C572A3B179CEA0357869DB245F52128D& unmarshaled, Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshaled_pinvoke& marshaled)
{
	marshaled.___filename_0 = il2cpp_codegen_marshal_string(unmarshaled.get_filename_0());
	marshaled.___frame_1 = unmarshaled.get_frame_1();
	marshaled.___rotated_2 = static_cast<int32_t>(unmarshaled.get_rotated_2());
	marshaled.___trimmed_3 = static_cast<int32_t>(unmarshaled.get_trimmed_3());
	marshaled.___spriteSourceSize_4 = unmarshaled.get_spriteSourceSize_4();
	marshaled.___sourceSize_5 = unmarshaled.get_sourceSize_5();
	marshaled.___pivot_6 = unmarshaled.get_pivot_6();
}
IL2CPP_EXTERN_C void Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke_back(const Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshaled_pinvoke& marshaled, Frame_t277B57D2C572A3B179CEA0357869DB245F52128D& unmarshaled)
{
	unmarshaled.set_filename_0(il2cpp_codegen_marshal_string_result(marshaled.___filename_0));
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  unmarshaled_frame_temp_1;
	memset((&unmarshaled_frame_temp_1), 0, sizeof(unmarshaled_frame_temp_1));
	unmarshaled_frame_temp_1 = marshaled.___frame_1;
	unmarshaled.set_frame_1(unmarshaled_frame_temp_1);
	bool unmarshaled_rotated_temp_2 = false;
	unmarshaled_rotated_temp_2 = static_cast<bool>(marshaled.___rotated_2);
	unmarshaled.set_rotated_2(unmarshaled_rotated_temp_2);
	bool unmarshaled_trimmed_temp_3 = false;
	unmarshaled_trimmed_temp_3 = static_cast<bool>(marshaled.___trimmed_3);
	unmarshaled.set_trimmed_3(unmarshaled_trimmed_temp_3);
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  unmarshaled_spriteSourceSize_temp_4;
	memset((&unmarshaled_spriteSourceSize_temp_4), 0, sizeof(unmarshaled_spriteSourceSize_temp_4));
	unmarshaled_spriteSourceSize_temp_4 = marshaled.___spriteSourceSize_4;
	unmarshaled.set_spriteSourceSize_4(unmarshaled_spriteSourceSize_temp_4);
	SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D  unmarshaled_sourceSize_temp_5;
	memset((&unmarshaled_sourceSize_temp_5), 0, sizeof(unmarshaled_sourceSize_temp_5));
	unmarshaled_sourceSize_temp_5 = marshaled.___sourceSize_5;
	unmarshaled.set_sourceSize_5(unmarshaled_sourceSize_temp_5);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_pivot_temp_6;
	memset((&unmarshaled_pivot_temp_6), 0, sizeof(unmarshaled_pivot_temp_6));
	unmarshaled_pivot_temp_6 = marshaled.___pivot_6;
	unmarshaled.set_pivot_6(unmarshaled_pivot_temp_6);
}
// Conversion method for clean up from marshalling of: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
IL2CPP_EXTERN_C void Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_pinvoke_cleanup(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___filename_0);
	marshaled.___filename_0 = NULL;
}
// Conversion methods for marshalling of: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
IL2CPP_EXTERN_C void Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_com(const Frame_t277B57D2C572A3B179CEA0357869DB245F52128D& unmarshaled, Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshaled_com& marshaled)
{
	marshaled.___filename_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_filename_0());
	marshaled.___frame_1 = unmarshaled.get_frame_1();
	marshaled.___rotated_2 = static_cast<int32_t>(unmarshaled.get_rotated_2());
	marshaled.___trimmed_3 = static_cast<int32_t>(unmarshaled.get_trimmed_3());
	marshaled.___spriteSourceSize_4 = unmarshaled.get_spriteSourceSize_4();
	marshaled.___sourceSize_5 = unmarshaled.get_sourceSize_5();
	marshaled.___pivot_6 = unmarshaled.get_pivot_6();
}
IL2CPP_EXTERN_C void Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_com_back(const Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshaled_com& marshaled, Frame_t277B57D2C572A3B179CEA0357869DB245F52128D& unmarshaled)
{
	unmarshaled.set_filename_0(il2cpp_codegen_marshal_bstring_result(marshaled.___filename_0));
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  unmarshaled_frame_temp_1;
	memset((&unmarshaled_frame_temp_1), 0, sizeof(unmarshaled_frame_temp_1));
	unmarshaled_frame_temp_1 = marshaled.___frame_1;
	unmarshaled.set_frame_1(unmarshaled_frame_temp_1);
	bool unmarshaled_rotated_temp_2 = false;
	unmarshaled_rotated_temp_2 = static_cast<bool>(marshaled.___rotated_2);
	unmarshaled.set_rotated_2(unmarshaled_rotated_temp_2);
	bool unmarshaled_trimmed_temp_3 = false;
	unmarshaled_trimmed_temp_3 = static_cast<bool>(marshaled.___trimmed_3);
	unmarshaled.set_trimmed_3(unmarshaled_trimmed_temp_3);
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9  unmarshaled_spriteSourceSize_temp_4;
	memset((&unmarshaled_spriteSourceSize_temp_4), 0, sizeof(unmarshaled_spriteSourceSize_temp_4));
	unmarshaled_spriteSourceSize_temp_4 = marshaled.___spriteSourceSize_4;
	unmarshaled.set_spriteSourceSize_4(unmarshaled_spriteSourceSize_temp_4);
	SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D  unmarshaled_sourceSize_temp_5;
	memset((&unmarshaled_sourceSize_temp_5), 0, sizeof(unmarshaled_sourceSize_temp_5));
	unmarshaled_sourceSize_temp_5 = marshaled.___sourceSize_5;
	unmarshaled.set_sourceSize_5(unmarshaled_sourceSize_temp_5);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  unmarshaled_pivot_temp_6;
	memset((&unmarshaled_pivot_temp_6), 0, sizeof(unmarshaled_pivot_temp_6));
	unmarshaled_pivot_temp_6 = marshaled.___pivot_6;
	unmarshaled.set_pivot_6(unmarshaled_pivot_temp_6);
}
// Conversion method for clean up from marshalling of: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray/Frame
IL2CPP_EXTERN_C void Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshal_com_cleanup(Frame_t277B57D2C572A3B179CEA0357869DB245F52128D_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___filename_0);
	marshaled.___filename_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteDataObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataObject__ctor_mD79F664AF7EADBBD012A4CA7020C2C00FC5FA400 (SpriteDataObject_t9610506C3AD16488DFAF966EB77EB5B246F03398 * __this, const RuntimeMethod* method)
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
// System.String TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteFrame::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpriteFrame_ToString_m0E0107F6FBE23F147D1E8069012C4087085976C0 (SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteFrame_ToString_m0E0107F6FBE23F147D1E8069012C4087085976C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string s = "x: " + x.ToString("f2") + " y: " + y.ToString("f2") + " h: " + h.ToString("f2") + " w: " + w.ToString("f2");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral35855F15E9EF2CB3744D0B38C366EE3464289E65);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral35855F15E9EF2CB3744D0B38C366EE3464289E65);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		float* L_3 = __this->get_address_of_x_0();
		String_t* L_4 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_3, _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3F178296412650029A46BF49F4A367936D3796A2);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3F178296412650029A46BF49F4A367936D3796A2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		float* L_7 = __this->get_address_of_y_1();
		String_t* L_8 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_7, _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral4807BC6986CBA743F29DC7F522B791C3E1B44BEA);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4807BC6986CBA743F29DC7F522B791C3E1B44BEA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		float* L_11 = __this->get_address_of_h_3();
		String_t* L_12 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_11, _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_10;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral6A2733A2367E08485E175227A3FA346E47CB518F);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral6A2733A2367E08485E175227A3FA346E47CB518F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		float* L_15 = __this->get_address_of_w_2();
		String_t* L_16 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_15, _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85, /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		String_t* L_17 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_14, /*hidden argument*/NULL);
		// return s;
		return L_17;
	}
}
IL2CPP_EXTERN_C  String_t* SpriteFrame_ToString_m0E0107F6FBE23F147D1E8069012C4087085976C0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9 * _thisAdjusted = reinterpret_cast<SpriteFrame_t5B610F44C5943B89962CC8CC4245EECDE29E94D9 *>(__this + _offset);
	return SpriteFrame_ToString_m0E0107F6FBE23F147D1E8069012C4087085976C0(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String TMPro.SpriteAssetUtilities.TexturePacker_JsonArray_SpriteSize::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpriteSize_ToString_m2F7E10FDEB62E277224D7C0BE6F2CA8284A5B5F8 (SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteSize_ToString_m2F7E10FDEB62E277224D7C0BE6F2CA8284A5B5F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string s = "w: " + w.ToString("f2") + " h: " + h.ToString("f2");
		float* L_0 = __this->get_address_of_w_0();
		String_t* L_1 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_0, _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_h_1();
		String_t* L_3 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_2, _stringLiteral36967F33A1482179FE45CD9CCC3AE6241AA43F85, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral4ECA4ACF6B856BD63138D010DEA72B85D6666ABB, L_1, _stringLiteral4807BC6986CBA743F29DC7F522B791C3E1B44BEA, L_3, /*hidden argument*/NULL);
		// return s;
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* SpriteSize_ToString_m2F7E10FDEB62E277224D7C0BE6F2CA8284A5B5F8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D * _thisAdjusted = reinterpret_cast<SpriteSize_t7D47B39A52139B8CD3CE7F233C48981F70275A3D *>(__this + _offset);
	return SpriteSize_ToString_m2F7E10FDEB62E277224D7C0BE6F2CA8284A5B5F8(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * TMP_InputField_get_textViewport_m3B04D9A9CA5E19FA474FEB4309E26BE10AC0B67C_inline (TMP_InputField_tD50B4F3E6822EAC2720FAED56B86E98183F61D59 * __this, const RuntimeMethod* method)
{
	{
		// public RectTransform textViewport { get { return m_TextViewport; } set { SetPropertyUtility.SetClass(ref m_TextViewport, value); } }
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_m_TextViewport_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CpositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WaitForSecondsRealtime_set_waitTime_m241120AEE2F1BDD0DC3077D865C7C3D878448268_inline (WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CwaitTimeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * TMP_Text_get_textInfo_mB006DF4283F14B0E49B9FCC0025D99C29FA534BF_inline (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_textInfo; }
		TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * L_0 = __this->get_m_textInfo_148();
		return L_0;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979  TMP_FontAsset_get_faceInfo_m36B45040D6E9F080986E955DD7E1006E8A892DA9_inline (TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_FaceInfo; }
		FaceInfo_t3A29F58B4C0435D2D76E3474E2B9D03F8A20C979  L_0 = __this->get_m_FaceInfo_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * TMP_TextElement_get_glyph_mF8C054C48E4D166B8D69B34BD680BEEA157F2263_inline (TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * __this, const RuntimeMethod* method)
{
	{
		// public Glyph glyph { get { return m_Glyph; } set { m_Glyph = value; } }
		Glyph_tC58ED6BC718B82A55B7E1A3690A289FFA8EBEFD1 * L_0 = __this->get_m_Glyph_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TMP_TextElement_get_scale_m68BBDD7267D300D683D9D4EA518EF63776CA7AB4_inline (TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * __this, const RuntimeMethod* method)
{
	{
		// public float scale { get { return m_Scale; } set { m_Scale = value; } }
		float L_0 = __this->get_m_Scale_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t TMP_TextElement_get_unicode_m20235ED882CB124B30D4DDBF4C2CBD04C3D0B7E1_inline (TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * __this, const RuntimeMethod* method)
{
	{
		// public uint unicode { get { return m_Unicode; } set { m_Unicode = value; } }
		uint32_t L_0 = __this->get_m_Unicode_1();
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
