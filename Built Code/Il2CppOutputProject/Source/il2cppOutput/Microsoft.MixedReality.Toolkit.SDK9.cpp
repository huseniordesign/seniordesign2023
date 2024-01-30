﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc>
struct Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF;
// System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey>
struct Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.UI.PinchSlider,Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane>
struct Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t18E076B12814DFAAD91B5BC1B163AAFAC0CADEFD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_tD47D33111D643B68EB44809B6FAC678F62A105AA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_t891D459FE7630B17E2B0D194C7689B767495A278;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_t463E30CC79CC14D882B0A8FBB5C42C92DEE9B59D;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_tE312511AC2FFA4C0BD7A66B477DF2E9E4A54B299;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_t6B3A88D64D0F985CD3EACA573E8488C55DAB8F0B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_t8914E3065B45121216AC95BE5318031E75AFE676;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>>
struct EventFunction_1_t06D5ADDD548566DCEAE34885749FC661727218D4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_tC77A664BDFE7BB12DFAA3EBF4C1B2E288278F851;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_tD0903AC4EBBBA4D1557B3ECEDC4B6084D14E7A37;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler>
struct EventFunction_1_t9D93CC61901A3EC57EF47E768D9F094A4415622A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler>
struct EventFunction_1_t5243796B409A949A13E6A8012D3BBE12F0A2CC74;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler>
struct EventFunction_1_t97FE840026B36DF26EB96C4D3134C7E4FDE8C8B5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler>
struct EventFunction_1_t84987B6778476110E256E89C4851AB019A92838B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler>
struct EventFunction_1_tAE0AF1B3949746494B156295D0AAE15F0914911E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler>
struct EventFunction_1_tAC1948D4AC51F9CF17D369B0602D92AE39AF7E94;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler>
struct EventFunction_1_t5D9A5EA6C23E85F5106E926D000169F9855F023D;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler>
struct EventFunction_1_tA8AAED90B07B2A9D6FDFEC0F6929E1F16F0D8EC7;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler>
struct EventFunction_1_t0FF56C83D3B252AFE788501464E58831E2310B16;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler>
struct EventFunction_1_t224627497FBC5225214B60AF96649A5D291F61CC;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler>
struct EventFunction_1_tD3DC857BBCB57F70A9ACCE81F193F6F283C27124;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler>
struct EventFunction_1_t3F0F14EAAD4362C195184017361DF7B86F0667A2;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler>
struct EventFunction_1_t8AEF6E16FB2FF77F22005B073344FC388F8BA74C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.UI.PinchSlider>
struct IEqualityComparer_1_tD2F2AE7FF126FD08F11C640E5DA7E45FEFE48DD6;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_tF425932676437BC379C211B4A2787582C264DB5B;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_tF20E01875255B2A695996E749A2019CEE61C77D5;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_t020D59F8F1B11AD42842312715C6F44CD4D0E11B;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_t6F0DA715B1C923A7BF2E3AF00CDAF75E3755A0F6;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_tFA47A892A9E9E2AF9E3669ECA5B3DB9D45D05E16;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t6BB364F1E4E22B99AD33A54C55696A263BE898F4;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_t512F7986EF58A2396A36B30876A30E3DB626B300;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.UI.PinchSlider,Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane>
struct KeyCollection_tED8E038E15F7FEF8B5DBE52D7C8618075884E787;
// System.Lazy`1<UnityEngine.RectTransform>
struct Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tADF7F1C5FADE0AE6D00BC928B20C4B63DDC8A3AD;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_t51E625EDA46926814063BAC38407B110D9C48805;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_t750037577EF626FCB1112EA42C03AB4CCF7974E7;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>
struct List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_t9B1DDDC20F87D6F693D11CD652CD821CC8C3D849;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t105564959EED8218A9CDEDF64ACDA6013E3CDA6A;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_tA6810E551D0D8D8251BD7C5698CA836AEF99DC92;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t2D4ECF3090F812782BFE1EF75939321F80D9C1FF;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_t14EBEF0BA9460D12F4AF22242530A2969C3B7945;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.SliderEventData>
struct UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.SliderEventData>
struct UnityEvent_1_t0D4048F0692F60CBC4EBE9CDFA381D07922FE7EA;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.UI.PinchSlider,Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane>
struct ValueCollection_t5E151F3F6926201A61F043C05FDCC0A665AA1228;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.UI.PinchSlider,Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane>[]
struct EntryU5BU5D_t31A5FD448DDBB0F98604B7573B8D811F90540246;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Microsoft.MixedReality.Toolkit.UI.PinchSlider[]
struct PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPair[]
struct SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7;
// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane[]
struct SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider
struct AxisSlider_t9B9EB1EB26C01CD907BB9CEFF226C39E03038C65;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4;
// Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable
struct BaseNearInteractionTouchable_t9646FAE4C0D5A711AFEC453F37F9A80FA5921FDF;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Microsoft.MixedReality.Toolkit.Experimental.UI.CapsLockHighlight
struct CapsLockHighlight_t531AA5779029279E30E39856091270C103B47B98;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker
struct ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_t12B9F7196FAB9412DC98501BC71F0AFB7B63F450;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t3AD7DE28F6F0A2A7CA9843944A0E0DE4B8868E4A;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_tB1F672BC7D48E95B022609AC330253DD7F7F5470;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t8BF4741E7DBA358A1DB46E1DD9EF33C9CDEB8BFA;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationSystem
struct IMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider
struct IMixedRealityEyeGazeProvider_tC69CFCA4497CFED3639A93E88CA9A6D175004416;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_t5FCA4CA48911E66F2F7F40219E9A0C654DEFBB52;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider
struct IMixedRealityFocusProvider_t2766EE713C9E441F03CA32A27287C1EF1713AE00;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider
struct IMixedRealityGazeProvider_t172D38E3FF653E0D7B293184D160FD6DC1A9213A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t9926A91DEC380AA837347E82976F5A6A9F9226C2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t73D9E8D52E761DF1CC230411D0EFD51104FF68B2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler
struct IMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityRaycastProvider
struct IMixedRealityRaycastProvider_t0B64782333025814B5988360601FC4764ECA9257;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t4B893B7CDAAC977211D826D02C8522ECA327D715;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85;
// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_t71FCC26FB89ED496E3EE4C2786051DB2D90CD1A9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc
struct KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650;
// Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey
struct KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint
struct MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t888133FFA0621F8870D085E3130D73009DEA703F;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t1C1193FD7566D84454E7A6A4AE4584F4DF165360;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t43E2FD730113CD773A9FDF6E6829519817478260;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable
struct NearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI
struct NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D;
// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard
struct NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79;
// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboardTouchAssistant
struct NonNativeKeyboardTouchAssistant_tEF050E77FC0C666D639BA57E535D757D9DA05D64;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Microsoft.MixedReality.Toolkit.UI.PinchSlider
struct PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01;
// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox
struct PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B;
// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring
struct PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// Microsoft.MixedReality.Toolkit.UI.SliderEvent
struct SliderEvent_tB453C6FDFA3C55C53C15199AB1EDD19523ED1F96;
// Microsoft.MixedReality.Toolkit.UI.SliderEventData
struct SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE;
// Microsoft.MixedReality.Toolkit.Experimental.UI.SliderInputField
struct SliderInputField_tF7097DACBE7331DA2538006C3B358DFBB9B8C15D;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_tD48A61E84BBBE9834EC53C5ED91A08F0171F5CF6;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolDisableHighlight
struct SymbolDisableHighlight_t3D178164EBA7C2346B34458052667F8AF333665C;
// Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolKeyboard
struct SymbolKeyboard_tC38EC965DA87C01BE6111478C5FA2F7F07FEA9A5;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection
struct UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c
struct U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1;
// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPair
struct SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5;
// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane
struct SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystemExtensions_tA5952B64963B55BD1D45BDD95BAFF3282398459B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityCapabilityCheck_t89E15A80CA84BBA26759BE2D8A2720CD26534921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityNearPointer_tA29E79073B12FE06E833720EBEE764F4E3D94373_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SliderAxis_t02EDA2743E8E86D494D9EE8E36F986575C8901F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardShaderUtility_t35C310CC4594A5281A1A835CDE47E813CC7ADEC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral038FB9756D5159DC0A7259C2EF80D77A6BF09A84;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral1046958E3D9EF1D0B1E37B382DFCB3BD2F0F8FC1;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979;
IL2CPP_EXTERN_C String_t* _stringLiteral33CEE3F15418C0F098986E168E0FDE1AFA894626;
IL2CPP_EXTERN_C String_t* _stringLiteral37CF68AD71CDFF0D947143303C6DEA1C27789D9F;
IL2CPP_EXTERN_C String_t* _stringLiteral50886D082DF4269A9D485E5D38E29209E52C86BE;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral79252F3A65727E7E7C8C285FB1CC955C972C54BE;
IL2CPP_EXTERN_C String_t* _stringLiteral85854D21F273A756078468B1F896F112B0E08118;
IL2CPP_EXTERN_C String_t* _stringLiteral930520E87785B4B66F5B135483BB0740F0C41747;
IL2CPP_EXTERN_C String_t* _stringLiteralC242170F8A475463E858F2021EC16639E17D4D47;
IL2CPP_EXTERN_C String_t* _stringLiteralCD1920E05067BFB398C77D45386D552021CADB60;
IL2CPP_EXTERN_C String_t* _stringLiteralCD2AFA0E930AC2AFF92E916F9B1CEBC07261A535;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE24A11ABE956C400932ACDD82CA022B8FD47258A;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentExtensions_EnsureComponent_TisMinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5_m40736DD1C076CDA05447EE59A639698F65A010E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentExtensions_EnsureComponent_TisNearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA_m5C59259B99D27DCE3EBAC981988B9F0CA6BA001A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentExtensions_EnsureComponent_TisNearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_mBA9D2EC172F2F8D05C7AE587FABE79AA897A24B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m22ACF33DC0AB281D8B1E18650516D0765006FE66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mF89FC4234D3EF3D85C22E0C34623DD0F955A645B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisNonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_mBBFC79221C889F176A9500095BAC864A3EE58684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5_mE14687E5EB5BCA51FD7A46FFE004A4D15C817A12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m9D6A1A9F3E8724B2D2697E023F359FD37A015744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreServices_GetInputSystemDataProvider_TisIMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED_m44A78E14DD71CADFD9946B379E6EF4BD00019D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m72A12B46C3164C3B812997121820532498F40EB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mC0F7DD9797615DD420FB602B4FE9B2E16125B858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m745537F8F26347E69AFF06EBB5445813F7889EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE48A0E5A261CB7C4649FDCE8A5675EBD2A936ECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityFocusHandler_t5FCA4CA48911E66F2F7F40219E9A0C654DEFBB52_m6CBEE4A7D2C039A943EFED3FBBCF97126C222968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m6FADC8F9CAD1FB85A4C920BE87F28602B6D0D367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA_m71F501CE1D792F80297EB09E23480BA5954018CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01_m1C87F21D3FD154F3602C37FAB87D05E50852EE55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityDictationHandler_tCC8231CDE8BDA2A0B75AAAA818BA823A80A58AC2_mBC5E92F5638D03BC8DEF735EBFC4C4124C5FBA36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityDictationHandler_tCC8231CDE8BDA2A0B75AAAA818BA823A80A58AC2_mBE288CC0C47C39EC43A74BD388248A4AFBE38533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputEventData_1_get_InputData_m6FA48F377DF5F57338C37322468A877D1448B0E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyboardKeyFunc_FireFunctionKey_mEA9FF9E2D49F324755A85244AE418B5F21477CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyboardValueKey_FireAppendValue_m2CFB0E6B73A806CAC8541306E20DFEF98B3FBDB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyboardValueKey_Shift_mE68CECED17F080C990B922470977E655EBFAC92C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1B3281E84BCDC45DAA2A744E167AC2065A753F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m093B5A8906C4F9A0DD98022561BB1EAFC518CBE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mFB320CE38ADF699E608E47F454402EDB77BC37CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7EA27CAC733DD95AC0AFB56293AECABB0EA34475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2F707E98BABA1F4794BF2B315168A109B80B2921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NonNativeKeyboardTouchAssistant_PlayClick_m8769653F9710C9CA484539E16813640809A239C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NonNativeKeyboard_DoTextUpdated_m1AB672310BA37FEB7E1C705899D0C7A4820283AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NonNativeKeyboard_FunctionKey_m819CAD43BB3A16258FE4A9C83A4C57252020AF02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PinchSliderBox_GetSliderAxisDirection_mEF69A5FB51F65DF91425C5471752C092E2B14DB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PinchSliderBox_OnHoverEntered_mC0982B1CB73A8B227D0F0918850A51AF507B8146_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PinchSliderBox_OnHoverExited_mF6360E10FE54022F720BD69D97B40F7624FB6A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PinchSliderBox_OnSlideValueUpdated_m95C919A818BA80A3858D1A103E6710008486C713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__114_0_m4CF194453244FBFAB5E1BF9CDD48ECC94F227A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__114_1_m8D8FA9034A5BF06BBB169DA96285EB37D8719DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__114_2_mCC62636AC27CF7D5E02B32EACD169FB781EF50A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__114_3_mE176E1DB59846FDCE6F5A0230E0E5A1C7D6836C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__114_4_m95D0AC1CD1FF6150E1B5406985213469CCD0B45B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__114_5_m34ACFE41B3DB486C9066EF13B7561E4251B0991F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__114_6_m155145E9B4C6164BEEC9B461C6240214E6551A85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__114_7_m4987D42B9B384DD556116220C9057CA3F4B9605D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__114_8_m12D66DDF69FB675C552BF57756B568CD84E931A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mF0F65639FA1B0652AEFED99A4D581492A02FE39B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1;
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28;
struct SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7;
struct SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.UI.PinchSlider,Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane>
struct Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t31A5FD448DDBB0F98604B7573B8D811F90540246* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tED8E038E15F7FEF8B5DBE52D7C8618075884E787* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5E151F3F6926201A61F043C05FDCC0A665AA1228* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RectTransformU5BU5D_tD8879AA94435492C205ABBE1E530FFD24CE0393D* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Microsoft.MixedReality.Toolkit.UI.SliderEventData
struct SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE  : public RuntimeObject
{
	// System.Single Microsoft.MixedReality.Toolkit.UI.SliderEventData::<OldValue>k__BackingField
	float ___U3COldValueU3Ek__BackingField_0;
	// System.Single Microsoft.MixedReality.Toolkit.UI.SliderEventData::<NewValue>k__BackingField
	float ___U3CNewValueU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.UI.SliderEventData::<Slider>k__BackingField
	PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* ___U3CSliderU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.SliderEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c
struct U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1  : public RuntimeObject
{
};

struct U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<>9
	U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* ___U3CU3E9_0;
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<>9__114_0
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___U3CU3E9__114_0_1;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<>9__114_1
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___U3CU3E9__114_1_2;
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<>9__114_2
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___U3CU3E9__114_2_3;
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<>9__114_3
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___U3CU3E9__114_3_4;
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<>9__114_4
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___U3CU3E9__114_4_5;
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<>9__114_5
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___U3CU3E9__114_5_6;
	// System.Action`1<System.Boolean> Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<>9__114_6
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___U3CU3E9__114_6_7;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey> Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<>9__114_7
	Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* ___U3CU3E9__114_7_8;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc> Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<>9__114_8
	Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* ___U3CU3E9__114_8_9;
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPair
struct SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5  : public RuntimeObject
{
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider[] Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPair::Sliders
	PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* ___Sliders_0;
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane
struct SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427  : public RuntimeObject
{
	// Microsoft.MixedReality.Toolkit.UI.SliderAxis Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane::Axis
	int32_t ___Axis_0;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPair[] Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane::SliderPairs
	SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7* ___SliderPairs_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Microsoft.MixedReality.Toolkit.UI.SliderAxis>
struct Nullable_1_t0A05CA06139D491F85D5C07B3960CE7FC768DBD5 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.SliderEventData>
struct UnityEvent_1_t0D4048F0692F60CBC4EBE9CDFA381D07922FE7EA  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 
{
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;
};

struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CNoneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
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
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tF4CE9B9CB4362E760067C0C9F6B600F3C839022C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tF4CE9B9CB4362E760067C0C9F6B600F3C839022C__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_tF3A7AA2E202A254D12435B3236873A95A739A8D4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tF3A7AA2E202A254D12435B3236873A95A739A8D4__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_tB9D36CEFCC62980688ADB8763C348D451B6E2277 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tB9D36CEFCC62980688ADB8763C348D451B6E2277__padding[48];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t269626783D0B78D6A75FC8F0D2DFFEE02902565B  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t269626783D0B78D6A75FC8F0D2DFFEE02902565B_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::28A80E41EA4FEE4245D39FAA39E7871629F5A7DD1F9B47F1015425C817DA0D22
	__StaticArrayInitTypeSizeU3D16_tF4CE9B9CB4362E760067C0C9F6B600F3C839022C ___28A80E41EA4FEE4245D39FAA39E7871629F5A7DD1F9B47F1015425C817DA0D22_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2C7CCF4B3EB47D714D8C002984786D6DD97DC04CACA98FF9C07B7F26B858714D
	__StaticArrayInitTypeSizeU3D16_tF4CE9B9CB4362E760067C0C9F6B600F3C839022C ___2C7CCF4B3EB47D714D8C002984786D6DD97DC04CACA98FF9C07B7F26B858714D_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::34BB404DFD161DF6248FFB85BF7E27B2FE825B1F9DD0A821D3CFD9516A253C44
	__StaticArrayInitTypeSizeU3D24_tF3A7AA2E202A254D12435B3236873A95A739A8D4 ___34BB404DFD161DF6248FFB85BF7E27B2FE825B1F9DD0A821D3CFD9516A253C44_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E
	__StaticArrayInitTypeSizeU3D16_tF4CE9B9CB4362E760067C0C9F6B600F3C839022C ___3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::4364FD502BDC94E45C046A69B00AB7157D784565AA274FF7C868239A355FD097
	__StaticArrayInitTypeSizeU3D16_tF4CE9B9CB4362E760067C0C9F6B600F3C839022C ___4364FD502BDC94E45C046A69B00AB7157D784565AA274FF7C868239A355FD097_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::49C16B6F0EF802F3AAF7FC52DC1E6925199EDDC6E255028182BBA4E236F8F855
	__StaticArrayInitTypeSizeU3D16_tF4CE9B9CB4362E760067C0C9F6B600F3C839022C ___49C16B6F0EF802F3AAF7FC52DC1E6925199EDDC6E255028182BBA4E236F8F855_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::5C32FBB20924A56979013F0EAC82209C296058CDC152A42BC7F835407F6C70FE
	__StaticArrayInitTypeSizeU3D48_tB9D36CEFCC62980688ADB8763C348D451B6E2277 ___5C32FBB20924A56979013F0EAC82209C296058CDC152A42BC7F835407F6C70FE_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6D7F3B774B5CF3CCE67876F07515D7048800909E224C13E68EB4D8982255F847
	__StaticArrayInitTypeSizeU3D16_tF4CE9B9CB4362E760067C0C9F6B600F3C839022C ___6D7F3B774B5CF3CCE67876F07515D7048800909E224C13E68EB4D8982255F847_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9E97865F268FBCC4190687A97D459D7AC09DFADED381B251528E2041FFE51739
	__StaticArrayInitTypeSizeU3D16_tF4CE9B9CB4362E760067C0C9F6B600F3C839022C ___9E97865F268FBCC4190687A97D459D7AC09DFADED381B251528E2041FFE51739_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::A480DB650E94CE07AD8E7C752477FE0541ED8CB69D8D8FD0A6A0AFEF4F1F4B01
	__StaticArrayInitTypeSizeU3D16_tF4CE9B9CB4362E760067C0C9F6B600F3C839022C ___A480DB650E94CE07AD8E7C752477FE0541ED8CB69D8D8FD0A6A0AFEF4F1F4B01_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::A4B42F09AD50DD0B39C2AD88E7F45E60AFAAEE7776E3366376B05E47E6BEE1B7
	__StaticArrayInitTypeSizeU3D16_tF4CE9B9CB4362E760067C0C9F6B600F3C839022C ___A4B42F09AD50DD0B39C2AD88E7F45E60AFAAEE7776E3366376B05E47E6BEE1B7_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B15C46AE2A6C74DE94FA35E1CEC12E0CBC9F58D147B1B891E6A2AE676EEC30A0
	__StaticArrayInitTypeSizeU3D16_tF4CE9B9CB4362E760067C0C9F6B600F3C839022C ___B15C46AE2A6C74DE94FA35E1CEC12E0CBC9F58D147B1B891E6A2AE676EEC30A0_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B35ABF3E64AE3F715CE3DFBD79F65FF12584B574B703F7EF56415FFA3C552A99
	__StaticArrayInitTypeSizeU3D16_tF4CE9B9CB4362E760067C0C9F6B600F3C839022C ___B35ABF3E64AE3F715CE3DFBD79F65FF12584B574B703F7EF56415FFA3C552A99_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::D3DC83125B7AB4B380AEBD182F6929341A847B6A6C653BF2A81BFB0CF6B3632B
	__StaticArrayInitTypeSizeU3D16_tF4CE9B9CB4362E760067C0C9F6B600F3C839022C ___D3DC83125B7AB4B380AEBD182F6929341A847B6A6C653BF2A81BFB0CF6B3632B_13;
};

// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_tD3B6E9CE7F20EFC9D066C519FAB848679FC62486 ___U3CMixedRealityInputActionU3Ek__BackingField_4;
};

// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0  : public RuntimeObject
{
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tB4FDEF58FFD17796C0DB7241630B71CDF38FA1D4* ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t3AD7DE28F6F0A2A7CA9843944A0E0DE4B8868E4A  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<OldFocusedObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3COldFocusedObjectU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.FocusEventData::<NewFocusedObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CNewFocusedObjectU3Ek__BackingField_4;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_2;
};

struct MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___U3CZeroIdentityU3Ek__BackingField_0;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9 
{
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::barycentricCoordinate
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___barycentricCoordinate_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::distance
	float ___distance_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::triangleIndex
	int32_t ___triangleIndex_4;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord_5;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::textureCoord2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord2_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::lightmapCoord
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lightmapCoord_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::raycastValid
	bool ___raycastValid_9;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit::collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_10;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord2_6;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_10;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit
struct MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___barycentricCoordinate_2;
	float ___distance_3;
	int32_t ___triangleIndex_4;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord_5;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureCoord2_6;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_7;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lightmapCoord_8;
	int32_t ___raycastValid_9;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_10;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
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
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// Microsoft.MixedReality.Toolkit.UI.SliderEvent
struct SliderEvent_tB453C6FDFA3C55C53C15199AB1EDD19523ED1F96  : public UnityEvent_1_t0D4048F0692F60CBC4EBE9CDFA381D07922FE7EA
{
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1  : public BaseService_tB7EC5C0F60DC5EE2DA122A608226D3887B6421D0
{
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_13;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t* ___eventSystemHandlerType_14;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_t51E625EDA46926814063BAC38407B110D9C48805* ___postponedActions_15;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_tADF7F1C5FADE0AE6D00BC928B20C4B63DDC8A3AD* ___postponedObjectActions_16;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t18E076B12814DFAAD91B5BC1B163AAFAC0CADEFD* ___U3CEventHandlersByTypeU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___U3CEventListenersU3Ek__BackingField_18;
};

struct BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1_StaticFields
{
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___TraverseEventSystemHandlerHierarchyPerfMarker_19;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_t12B9F7196FAB9412DC98501BC71F0AFB7B63F450  : public BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399
{
	// System.String Microsoft.MixedReality.Toolkit.Input.DictationEventData::<DictationResult>k__BackingField
	String_t* ___U3CDictationResultU3Ek__BackingField_5;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Input.DictationEventData::<DictationAudioClip>k__BackingField
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___U3CDictationAudioClipU3Ek__BackingField_6;
};

// Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 
{
	// System.Single Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<RayDistance>k__BackingField
	float ___U3CRayDistanceU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Point>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Normal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<Object>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CObjectU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityRaycastHit Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastRaycastHit>k__BackingField
	MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9 ___U3CLastRaycastHitU3Ek__BackingField_4;
	// UnityEngine.EventSystems.RaycastResult Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<LastGraphicsRaycastResult>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<PointLocalSpace>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointLocalSpaceU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::<NormalLocalSpace>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76_marshaled_pinvoke
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalU3Ek__BackingField_2;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_pinvoke ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Physics.FocusDetails
struct FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76_marshaled_com
{
	float ___U3CRayDistanceU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalU3Ek__BackingField_2;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CObjectU3Ek__BackingField_3;
	MixedRealityRaycastHit_t57E6733C18B1C7A79E01B1F2077BA642EBE324E9_marshaled_com ___U3CLastRaycastHitU3Ek__BackingField_4;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com ___U3CLastGraphicsRaycastResultU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPointLocalSpaceU3Ek__BackingField_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalLocalSpaceU3Ek__BackingField_7;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85  : public BaseInputEventData_tE30935633FC3413040017EC7BB3F4D54958E5399
{
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform
struct MixedRealityTransform_tD69A8273A8D1EA76ED0CA106E11CF17F9942C267 
{
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::pose
	MixedRealityPose_tE60115C271AC50B8C11BA3B404BFCA99C7B2EFF5 ___pose_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_2;
};

struct MixedRealityTransform_tD69A8273A8D1EA76ED0CA106E11CF17F9942C267_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::<Identity>k__BackingField
	MixedRealityTransform_tD69A8273A8D1EA76ED0CA106E11CF17F9942C267 ___U3CIdentityU3Ek__BackingField_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
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
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc>
struct Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF  : public MulticastDelegate_t
{
};

// System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey>
struct Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler>
struct EventFunction_1_t84987B6778476110E256E89C4851AB019A92838B  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler>
struct EventFunction_1_t0FF56C83D3B252AFE788501464E58831E2310B16  : public MulticastDelegate_t
{
};

// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_t512F7986EF58A2396A36B30876A30E3DB626B300  : public InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85
{
	// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1::<InputData>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CInputDataU3Ek__BackingField_6;
};

// UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.SliderEventData>
struct UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6  : public BaseEventSystem_tB9BD9711D545EEEF00D3162ED9A13EBDE4B1DEA1
{
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_20;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B  : public InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85
{
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
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
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
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
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
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
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2  : public BaseCoreSystem_t9D02F9BBC05DAD6F987F647B666B37A062ACFAA6
{
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_t750037577EF626FCB1112EA42C03AB4CCF7974E7* ___dataProviders_21;
};

struct BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___UpdatePerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___LateUpdatePerfMarker_23;
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_tB1F672BC7D48E95B022609AC330253DD7F7F5470  : public InputEventData_1_t512F7986EF58A2396A36B30876A30E3DB626B300
{
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_7;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider
struct AxisSlider_t9B9EB1EB26C01CD907BB9CEFF226C39E03038C65  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider/EAxis Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider::Axis
	int32_t ___Axis_4;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider::currentPos
	float ___currentPos_5;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider::slideVel
	float ___slideVel_6;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider::slideAccel
	float ___slideAccel_7;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider::slideFriction
	float ___slideFriction_8;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider::deadZone
	float ___deadZone_9;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider::clampDistance
	float ___clampDistance_10;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider::bounce
	float ___bounce_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider::TargetPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___TargetPoint_12;
};

// Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable
struct BaseNearInteractionTouchable_t9646FAE4C0D5A711AFEC453F37F9A80FA5921FDF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.Input.TouchableEventType Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::eventsToReceive
	int32_t ___eventsToReceive_4;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::debounceThreshold
	float ___debounceThreshold_5;
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.CapsLockHighlight
struct CapsLockHighlight_t531AA5779029279E30E39856091270C103B47B98  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.UI.CapsLockHighlight::m_Highlight
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_Highlight_4;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard Microsoft.MixedReality.Toolkit.Experimental.UI.CapsLockHighlight::m_Keyboard
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* ___m_Keyboard_5;
};

// Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker
struct ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::targetObjectMesh
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___targetObjectMesh_4;
	// UnityEngine.SpriteRenderer Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::targetObjectSprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___targetObjectSprite_5;
	// UnityEngine.MeshRenderer[] Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::PickerUIMeshes
	MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* ___PickerUIMeshes_6;
	// UnityEngine.SpriteRenderer[] Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::PickerUISprites
	SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ___PickerUISprites_7;
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::GradientMesh
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___GradientMesh_8;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::GradientDragger
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GradientDragger_9;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::SliderRed
	PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* ___SliderRed_10;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::SliderGreen
	PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* ___SliderGreen_11;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::SliderBlue
	PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* ___SliderBlue_12;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::SliderAlpha
	PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* ___SliderAlpha_13;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::SliderHue
	PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* ___SliderHue_14;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::SliderSaturation
	PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* ___SliderSaturation_15;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::SliderBrightness
	PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* ___SliderBrightness_16;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::TextRed
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___TextRed_17;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::TextGreen
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___TextGreen_18;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::TextBlue
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___TextBlue_19;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::TextAlpha
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___TextAlpha_20;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::TextHex
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___TextHex_21;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::TextHue
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___TextHue_22;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::TextSaturation
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___TextSaturation_23;
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::TextBrightness
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___TextBrightness_24;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::GradientDragMaxDistance
	float ___GradientDragMaxDistance_25;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::GradientDragStartPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___GradientDragStartPosition_26;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::GradientDragCurrentPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___GradientDragCurrentPosition_27;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::CustomColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___CustomColor_28;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::Hue
	float ___Hue_29;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::Saturation
	float ___Saturation_30;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::Brightness
	float ___Brightness_31;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::Alpha
	float ___Alpha_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::IsDraggingSliders
	bool ___IsDraggingSliders_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::IsDraggingGradient
	bool ___IsDraggingGradient_34;
};

// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_t71FCC26FB89ED496E3EE4C2786051DB2D90CD1A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc
struct KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc/Function Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc::buttonFunction
	int32_t ___buttonFunction_4;
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey
struct KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey::Value
	String_t* ___Value_4;
	// System.String Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey::ShiftValue
	String_t* ___ShiftValue_5;
	// TMPro.TextMeshProUGUI Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey::m_Text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_Text_6;
	// UnityEngine.UI.Button Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey::m_Button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_Button_7;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40  : public BaseDataProviderAccessCoreSystem_t30EC4F1C1A10F7586D0EE15069292831A2E3BCF2
{
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_25;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputEnabled
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputEnabled_26;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputDisabled
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputDisabled_27;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedInputSources>k__BackingField
	HashSet_1_tA6A38ACBB9B75A13510D4F82BD093B367BE4666E* ___U3CDetectedInputSourcesU3Ek__BackingField_28;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedControllers>k__BackingField
	HashSet_1_t6C975DF0A435FF942855BEA5D8D5ACD2A365DEF5* ___U3CDetectedControllersU3Ek__BackingField_29;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputSystemProfile
	MixedRealityInputSystemProfile_t43E2FD730113CD773A9FDF6E6829519817478260* ___inputSystemProfile_30;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::focusProvider
	RuntimeObject* ___focusProvider_31;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityRaycastProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::raycastProvider
	RuntimeObject* ___raycastProvider_32;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<GazeProvider>k__BackingField
	RuntimeObject* ___U3CGazeProviderU3Ek__BackingField_33;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<EyeGazeProvider>k__BackingField
	RuntimeObject* ___U3CEyeGazeProviderU3Ek__BackingField_34;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::modalInputStack
	Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* ___modalInputStack_35;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::fallbackInputStack
	Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* ___fallbackInputStack_36;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::disabledRefCount
	int32_t ___disabledRefCount_37;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::isInputModuleAdded
	bool ___isInputModuleAdded_38;
	// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceStateEventData
	SourceStateEventData_tD48A61E84BBBE9834EC53C5ED91A08F0171F5CF6* ___sourceStateEventData_39;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceTrackingEventData
	SourcePoseEventData_1_tA6810E551D0D8D8251BD7C5698CA836AEF99DC92* ___sourceTrackingEventData_40;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceVector2EventData
	SourcePoseEventData_1_t2D4ECF3090F812782BFE1EF75939321F80D9C1FF* ___sourceVector2EventData_41;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePositionEventData
	SourcePoseEventData_1_t14EBEF0BA9460D12F4AF22242530A2969C3B7945* ___sourcePositionEventData_42;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceRotationEventData
	SourcePoseEventData_1_t105564959EED8218A9CDEDF64ACDA6013E3CDA6A* ___sourceRotationEventData_43;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePoseEventData
	SourcePoseEventData_1_t9B1DDDC20F87D6F693D11CD652CD821CC8C3D849* ___sourcePoseEventData_44;
	// Microsoft.MixedReality.Toolkit.Input.FocusEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::focusEventData
	FocusEventData_t3AD7DE28F6F0A2A7CA9843944A0E0DE4B8868E4A* ___focusEventData_45;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputEventData
	InputEventData_t8A56522163990B29359E0CAA56589AACA2DE2A85* ___inputEventData_46;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::pointerEventData
	MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___pointerEventData_47;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::floatInputEventData
	InputEventData_1_tFA47A892A9E9E2AF9E3669ECA5B3DB9D45D05E16* ___floatInputEventData_48;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::vector2InputEventData
	InputEventData_1_t6BB364F1E4E22B99AD33A54C55696A263BE898F4* ___vector2InputEventData_49;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::positionInputEventData
	InputEventData_1_t512F7986EF58A2396A36B30876A30E3DB626B300* ___positionInputEventData_50;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::rotationInputEventData
	InputEventData_1_t6F0DA715B1C923A7BF2E3AF00CDAF75E3755A0F6* ___rotationInputEventData_51;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::poseInputEventData
	InputEventData_1_t020D59F8F1B11AD42842312715C6F44CD4D0E11B* ___poseInputEventData_52;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::jointPoseInputEventData
	InputEventData_1_tF425932676437BC379C211B4A2787582C264DB5B* ___jointPoseInputEventData_53;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handMeshInputEventData
	InputEventData_1_tF20E01875255B2A695996E749A2019CEE61C77D5* ___handMeshInputEventData_54;
	// Microsoft.MixedReality.Toolkit.Input.SpeechEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::speechEventData
	SpeechEventData_t4424832821FEC4163B9CFCD3A9F457DF930A95BD* ___speechEventData_55;
	// Microsoft.MixedReality.Toolkit.Input.DictationEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::dictationEventData
	DictationEventData_t12B9F7196FAB9412DC98501BC71F0AFB7B63F450* ___dictationEventData_56;
	// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handTrackingInputEventData
	HandTrackingInputEventData_tB1F672BC7D48E95B022609AC330253DD7F7F5470* ___handTrackingInputEventData_57;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<CurrentInputActionRulesProfile>k__BackingField
	MixedRealityInputActionRulesProfile_t888133FFA0621F8870D085E3130D73009DEA703F* ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_58;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputModuleChecked
	bool ___inputModuleChecked_59;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputModule
	MixedRealityInputModule_t1C1193FD7566D84454E7A6A4AE4584F4DF165360* ___inputModule_60;
};

struct MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_StaticFields
{
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ExecuteHierarchyPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ExecuteHierarchyPerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleEventPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___HandleEventPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusChangedEventsPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___HandleFocusChangedEventsPerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusEventPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___HandleFocusEventPerfMarker_63;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandlePointerEventPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___HandlePointerEventPerfMarker_64;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToGlobalListenersPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___DispatchEventToGlobalListenersPerfMarker_65;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToFallbackHandlersPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___DispatchEventToFallbackHandlersPerfMarker_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToObjectFocusedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___DispatchEventToObjectFocusedPerfMarker_67;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchModalEventPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___DispatchModalEventPerfMarker_68;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceDetectedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseSourceDetectedPerfMarker_69;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceDetectedEventHandler
	EventFunction_1_tD3DC857BBCB57F70A9ACCE81F193F6F283C27124* ___OnSourceDetectedEventHandler_70;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceLostPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseSourceLostPerfMarker_71;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceLostEventHandler
	EventFunction_1_tD3DC857BBCB57F70A9ACCE81F193F6F283C27124* ___OnSourceLostEventHandler_72;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceTrackingStateChangedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseSourceTrackingStateChangedPerfMarker_73;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceTrackingChangedEventHandler
	EventFunction_1_t224627497FBC5225214B60AF96649A5D291F61CC* ___OnSourceTrackingChangedEventHandler_74;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePositionChangedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseSourcePositionChangedPerfMarker_75;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseVector2ChangedEventHandler
	EventFunction_1_t224627497FBC5225214B60AF96649A5D291F61CC* ___OnSourcePoseVector2ChangedEventHandler_76;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePositionChangedEventHandler
	EventFunction_1_t224627497FBC5225214B60AF96649A5D291F61CC* ___OnSourcePositionChangedEventHandler_77;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceRotationChangedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseSourceRotationChangedPerfMarker_78;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceRotationChangedEventHandler
	EventFunction_1_t224627497FBC5225214B60AF96649A5D291F61CC* ___OnSourceRotationChangedEventHandler_79;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePoseChangedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseSourcePoseChangedPerfMarker_80;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseChangedEventHandler
	EventFunction_1_t224627497FBC5225214B60AF96649A5D291F61CC* ___OnSourcePoseChangedEventHandler_81;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePreFocusChangedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaisePreFocusChangedPerfMarker_82;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPreFocusChangedHandler
	EventFunction_1_t97FE840026B36DF26EB96C4D3134C7E4FDE8C8B5* ___OnPreFocusChangedHandler_83;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusChangedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseFocusChangedPerfMarker_84;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusChangedHandler
	EventFunction_1_t97FE840026B36DF26EB96C4D3134C7E4FDE8C8B5* ___OnFocusChangedHandler_85;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusEnterPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseFocusEnterPerfMarker_86;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusEnterEventHandler
	EventFunction_1_t84987B6778476110E256E89C4851AB019A92838B* ___OnFocusEnterEventHandler_87;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusExitPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseFocusExitPerfMarker_88;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusExitEventHandler
	EventFunction_1_t84987B6778476110E256E89C4851AB019A92838B* ___OnFocusExitEventHandler_89;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDownEventHandler
	EventFunction_1_t0FF56C83D3B252AFE788501464E58831E2310B16* ___OnPointerDownEventHandler_90;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDownPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaisePointerDownPerfMarker_91;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDraggedEventHandler
	EventFunction_1_t0FF56C83D3B252AFE788501464E58831E2310B16* ___OnPointerDraggedEventHandler_92;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDraggedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaisePointerDraggedPerfMarker_93;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputClickedEventHandler
	EventFunction_1_t0FF56C83D3B252AFE788501464E58831E2310B16* ___OnInputClickedEventHandler_94;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerClickedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaisePointerClickedPerfMarker_95;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerUpEventHandler
	EventFunction_1_t0FF56C83D3B252AFE788501464E58831E2310B16* ___OnPointerUpEventHandler_96;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerUpPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaisePointerUpPerfMarker_97;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownEventHandler
	EventFunction_1_tA8AAED90B07B2A9D6FDFEC0F6929E1F16F0D8EC7* ___OnInputDownEventHandler_98;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownWithActionEventHandler
	EventFunction_1_t9D93CC61901A3EC57EF47E768D9F094A4415622A* ___OnInputDownWithActionEventHandler_99;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputDownPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseOnInputDownPerfMarker_100;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpEventHandler
	EventFunction_1_tA8AAED90B07B2A9D6FDFEC0F6929E1F16F0D8EC7* ___OnInputUpEventHandler_101;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpWithActionEventHandler
	EventFunction_1_t9D93CC61901A3EC57EF47E768D9F094A4415622A* ___OnInputUpWithActionEventHandler_102;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputUpPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseOnInputUpPerfMarker_103;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFloatInputChanged
	EventFunction_1_t06D5ADDD548566DCEAE34885749FC661727218D4* ___OnFloatInputChanged_104;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFloatInputChangedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseFloatInputChangedPerfMarker_105;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTwoDoFInputChanged
	EventFunction_1_tC77A664BDFE7BB12DFAA3EBF4C1B2E288278F851* ___OnTwoDoFInputChanged_106;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePositionInputChangedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaisePositionInputChangedPerfMarker_107;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPositionInputChanged
	EventFunction_1_tD0903AC4EBBBA4D1557B3ECEDC4B6084D14E7A37* ___OnPositionInputChanged_108;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnRotationInputChanged
	EventFunction_1_t8914E3065B45121216AC95BE5318031E75AFE676* ___OnRotationInputChanged_109;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseRotationInputChangedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseRotationInputChangedPerfMarker_110;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPoseInputChanged
	EventFunction_1_t6B3A88D64D0F985CD3EACA573E8488C55DAB8F0B* ___OnPoseInputChanged_111;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePoseInputChangedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaisePoseInputChangedPerfMarker_112;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStarted
	EventFunction_1_tAE0AF1B3949746494B156295D0AAE15F0914911E* ___OnGestureStarted_113;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStartedWithAction
	EventFunction_1_t9D93CC61901A3EC57EF47E768D9F094A4415622A* ___OnGestureStartedWithAction_114;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureStartedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseGestureStartedPerfMarker_115;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureUpdated
	EventFunction_1_tAE0AF1B3949746494B156295D0AAE15F0914911E* ___OnGestureUpdated_116;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureUpdatedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseGestureUpdatedPerfMarker_117;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionUpdated
	EventFunction_1_t463E30CC79CC14D882B0A8FBB5C42C92DEE9B59D* ___OnGestureVector2PositionUpdated_118;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionUpdated
	EventFunction_1_tE312511AC2FFA4C0BD7A66B477DF2E9E4A54B299* ___OnGesturePositionUpdated_119;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationUpdated
	EventFunction_1_t891D459FE7630B17E2B0D194C7689B767495A278* ___OnGestureRotationUpdated_120;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseUpdated
	EventFunction_1_tD47D33111D643B68EB44809B6FAC678F62A105AA* ___OnGesturePoseUpdated_121;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompleted
	EventFunction_1_tAE0AF1B3949746494B156295D0AAE15F0914911E* ___OnGestureCompleted_122;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompletedWithAction
	EventFunction_1_t9D93CC61901A3EC57EF47E768D9F094A4415622A* ___OnGestureCompletedWithAction_123;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCompletedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseGestureCompletedPerfMarker_124;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionCompleted
	EventFunction_1_t463E30CC79CC14D882B0A8FBB5C42C92DEE9B59D* ___OnGestureVector2PositionCompleted_125;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionCompleted
	EventFunction_1_tE312511AC2FFA4C0BD7A66B477DF2E9E4A54B299* ___OnGesturePositionCompleted_126;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationCompleted
	EventFunction_1_t891D459FE7630B17E2B0D194C7689B767495A278* ___OnGestureRotationCompleted_127;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseCompleted
	EventFunction_1_tD47D33111D643B68EB44809B6FAC678F62A105AA* ___OnGesturePoseCompleted_128;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCanceled
	EventFunction_1_tAE0AF1B3949746494B156295D0AAE15F0914911E* ___OnGestureCanceled_129;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCanceledPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseGestureCanceledPerfMarker_130;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedEventHandler
	EventFunction_1_t3F0F14EAAD4362C195184017361DF7B86F0667A2* ___OnSpeechKeywordRecognizedEventHandler_131;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedWithActionEventHandler
	EventFunction_1_t9D93CC61901A3EC57EF47E768D9F094A4415622A* ___OnSpeechKeywordRecognizedWithActionEventHandler_132;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSpeechCommandRecognizedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseSpeechCommandRecognizedPerfMarker_133;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationHypothesisEventHandler
	EventFunction_1_t5243796B409A949A13E6A8012D3BBE12F0A2CC74* ___OnDictationHypothesisEventHandler_134;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationHypothesisPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseDictationHypothesisPerfMarker_135;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationResultEventHandler
	EventFunction_1_t5243796B409A949A13E6A8012D3BBE12F0A2CC74* ___OnDictationResultEventHandler_136;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationResultPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseDictationResultPerfMarker_137;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationCompleteEventHandler
	EventFunction_1_t5243796B409A949A13E6A8012D3BBE12F0A2CC74* ___OnDictationCompleteEventHandler_138;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationCompletePerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseDictationCompletePerfMarker_139;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationErrorEventHandler
	EventFunction_1_t5243796B409A949A13E6A8012D3BBE12F0A2CC74* ___OnDictationErrorEventHandler_140;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationErrorPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseDictationErrorPerfMarker_141;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandJointsUpdatedEventHandler
	EventFunction_1_tAC1948D4AC51F9CF17D369B0602D92AE39AF7E94* ___OnHandJointsUpdatedEventHandler_142;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandJointsUpdatedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseHandJointsUpdatedPerfMarker_143;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandMeshUpdatedEventHandler
	EventFunction_1_t5D9A5EA6C23E85F5106E926D000169F9855F023D* ___OnHandMeshUpdatedEventHandler_144;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandMeshUpdatedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseHandMeshUpdatedPerfMarker_145;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchStartedEventHandler
	EventFunction_1_t8AEF6E16FB2FF77F22005B073344FC388F8BA74C* ___OnTouchStartedEventHandler_146;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchStartedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseOnTouchStartedPerfMarker_147;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchCompletedEventHandler
	EventFunction_1_t8AEF6E16FB2FF77F22005B073344FC388F8BA74C* ___OnTouchCompletedEventHandler_148;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchCompletedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseOnTouchCompletedPerfMarker_149;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchUpdatedEventHandler
	EventFunction_1_t8AEF6E16FB2FF77F22005B073344FC388F8BA74C* ___OnTouchUpdatedEventHandler_150;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchUpdatedPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___RaiseOnTouchUpdatedPerfMarker_151;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ProcessRulesInternalPerfMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___ProcessRulesInternalPerfMarker_152;
};

// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable
struct NearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable::ShowTetherWhenManipulating
	bool ___ShowTetherWhenManipulating_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable::IsBoundsHandles
	bool ___IsBoundsHandles_5;
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboardTouchAssistant
struct NonNativeKeyboardTouchAssistant_tEF050E77FC0C666D639BA57E535D757D9DA05D64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboardTouchAssistant::clickSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clickSound_4;
	// UnityEngine.AudioSource Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboardTouchAssistant::clickSoundPlayer
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___clickSoundPlayer_5;
};

// Microsoft.MixedReality.Toolkit.UI.PinchSlider
struct PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::thumbRoot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___thumbRoot_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PinchSlider::isTouchable
	bool ___isTouchable_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PinchSlider::snapToPosition
	bool ___snapToPosition_6;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.UI.PinchSlider::thumbCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___thumbCollider_7;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.UI.PinchSlider::touchCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___touchCollider_8;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderValue
	float ___sliderValue_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PinchSlider::useSliderStepDivisions
	bool ___useSliderStepDivisions_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderStepDivisions
	int32_t ___sliderStepDivisions_11;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::trackVisuals
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___trackVisuals_12;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::tickMarks
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tickMarks_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.PinchSlider::thumbVisuals
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___thumbVisuals_14;
	// Microsoft.MixedReality.Toolkit.UI.SliderAxis Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderAxis
	int32_t ___sliderAxis_15;
	// System.Nullable`1<Microsoft.MixedReality.Toolkit.UI.SliderAxis> Microsoft.MixedReality.Toolkit.UI.PinchSlider::previousSliderAxis
	Nullable_1_t0A05CA06139D491F85D5C07B3960CE7FC768DBD5 ___previousSliderAxis_16;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderStartDistance
	float ___sliderStartDistance_17;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderEndDistance
	float ___sliderEndDistance_18;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnValueUpdated
	SliderEvent_tB453C6FDFA3C55C53C15199AB1EDD19523ED1F96* ___OnValueUpdated_19;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnInteractionStarted
	SliderEvent_tB453C6FDFA3C55C53C15199AB1EDD19523ED1F96* ___OnInteractionStarted_20;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnInteractionEnded
	SliderEvent_tB453C6FDFA3C55C53C15199AB1EDD19523ED1F96* ___OnInteractionEnded_21;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnHoverEntered
	SliderEvent_tB453C6FDFA3C55C53C15199AB1EDD19523ED1F96* ___OnHoverEntered_22;
	// Microsoft.MixedReality.Toolkit.UI.SliderEvent Microsoft.MixedReality.Toolkit.UI.PinchSlider::OnHoverExited
	SliderEvent_tB453C6FDFA3C55C53C15199AB1EDD19523ED1F96* ___OnHoverExited_23;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.PinchSlider::sliderThumbOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sliderThumbOffset_24;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::<StartSliderValue>k__BackingField
	float ___U3CStartSliderValueU3Ek__BackingField_25;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.PinchSlider::<StartPointerPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CStartPointerPositionU3Ek__BackingField_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.PinchSlider::<ActivePointer>k__BackingField
	RuntimeObject* ___U3CActivePointerU3Ek__BackingField_27;
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox
struct PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::createSlidersOnEnable
	bool ___createSlidersOnEnable_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::createXAxisSliders
	bool ___createXAxisSliders_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::createYAxisSliders
	bool ___createYAxisSliders_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::createZAxisSliders
	bool ___createZAxisSliders_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::thumbPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___thumbPrefab_8;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::hightlightPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hightlightPrefab_9;
	// Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::scaleConstraint
	MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* ___scaleConstraint_10;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::pivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___pivot_11;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::axisHighlight
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___axisHighlight_12;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::defaultThumbMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultThumbMaterial_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::quitting
	bool ___quitting_14;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane[] Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::sliderPlanes
	SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD* ___sliderPlanes_19;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.UI.PinchSlider,Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane> Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::sliderToPlane
	Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6* ___sliderToPlane_20;
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring
struct PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::handleAnchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___handleAnchor_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::handleConnector
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___handleConnector_5;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::handleTip
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___handleTip_6;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::restingDistance
	float ___restingDistance_7;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::restingFocusedDistance
	float ___restingFocusedDistance_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::restingDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___restingDirection_9;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::tipMass
	float ___tipMass_10;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::springStiffness
	float ___springStiffness_11;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::springDampening
	float ___springDampening_12;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::snapDistance
	float ___snapDistance_13;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::handleTipInterpolateSpeed
	float ___handleTipInterpolateSpeed_14;
	// Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::tipScaleConstraint
	MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* ___tipScaleConstraint_15;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::manipulatePointer
	RuntimeObject* ___manipulatePointer_16;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::focusedPointer
	RuntimeObject* ___focusedPointer_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_18;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::currentRestingDistance
	float ___currentRestingDistance_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::snapped
	bool ___snapped_20;
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolDisableHighlight
struct SymbolDisableHighlight_t3D178164EBA7C2346B34458052667F8AF333665C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolDisableHighlight::m_TextField
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextField_4;
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolDisableHighlight::m_ImageField
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ImageField_5;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolDisableHighlight::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_6;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolDisableHighlight::m_StartingColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_StartingColor_7;
	// UnityEngine.UI.Button Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolDisableHighlight::m_Button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_Button_8;
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolKeyboard
struct SymbolKeyboard_tC38EC965DA87C01BE6111478C5FA2F7F07FEA9A5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolKeyboard::m_PageBck
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_PageBck_4;
	// UnityEngine.UI.Button Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolKeyboard::m_PageFwd
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___m_PageFwd_5;
};

// Microsoft.MixedReality.Toolkit.UI.TransformConstraint
struct TransformConstraint_t6D09E0A53EEFE341691CE27AB7D604304DBC608C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Microsoft.MixedReality.Toolkit.Utilities.ManipulationHandFlags Microsoft.MixedReality.Toolkit.UI.TransformConstraint::handType
	int32_t ___handType_4;
	// Microsoft.MixedReality.Toolkit.Utilities.ManipulationProximityFlags Microsoft.MixedReality.Toolkit.UI.TransformConstraint::proximityType
	int32_t ___proximityType_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.TransformConstraint::executionOrder
	int32_t ___executionOrder_6;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform Microsoft.MixedReality.Toolkit.UI.TransformConstraint::worldPoseOnManipulationStart
	MixedRealityTransform_tD69A8273A8D1EA76ED0CA106E11CF17F9942C267 ___worldPoseOnManipulationStart_7;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.TransformConstraint::<TargetTransform>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTargetTransformU3Ek__BackingField_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection
struct UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::maxWidth
	float ___maxWidth_4;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::maxHeight
	float ___maxHeight_5;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::horizontalSpacing
	float ___horizontalSpacing_6;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::verticalSpacing
	float ___verticalSpacing_7;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::<Items>k__BackingField
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___U3CItemsU3Ek__BackingField_8;
	// UnityEngine.RectTransform Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_9;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint
struct MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5  : public TransformConstraint_t6D09E0A53EEFE341691CE27AB7D604304DBC608C
{
	// System.Single Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::scaleMinimum
	float ___scaleMinimum_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::minimumScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___minimumScale_10;
	// System.Single Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::scaleMaximum
	float ___scaleMaximum_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::maximumScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___maximumScale_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::relativeToInitialState
	bool ___relativeToInitialState_13;
};

// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableSurface
struct NearInteractionTouchableSurface_t1890B05DEBC69D456941177CB5EFA419951C738E  : public BaseNearInteractionTouchable_t9646FAE4C0D5A711AFEC453F37F9A80FA5921FDF
{
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard
struct NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79  : public InputSystemGlobalHandlerListener_t71FCC26FB89ED496E3EE4C2786051DB2D90CD1A9
{
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnTextSubmitted
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnTextSubmitted_6;
	// System.Action`1<System.String> Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnTextUpdated
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___OnTextUpdated_7;
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnClosed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnClosed_8;
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnPrevious
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnPrevious_9;
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnNext
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnNext_10;
	// System.EventHandler Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnPlacement
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnPlacement_11;
	// TMPro.TMP_InputField Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::InputField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___InputField_12;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.AxisSlider Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::InputFieldSlide
	AxisSlider_t9B9EB1EB26C01CD907BB9CEFF226C39E03038C65* ___InputFieldSlide_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::SliderEnabled
	bool ___SliderEnabled_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::SubmitOnEnter
	bool ___SubmitOnEnter_15;
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::AlphaKeyboard
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___AlphaKeyboard_16;
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::SymbolKeyboard
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___SymbolKeyboard_17;
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::AlphaSubKeys
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___AlphaSubKeys_18;
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::AlphaWebKeys
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___AlphaWebKeys_19;
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::AlphaMailKeys
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___AlphaMailKeys_20;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/LayoutType Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_LastKeyboardLayout
	int32_t ___m_LastKeyboardLayout_21;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_MaxScale
	float ___m_MaxScale_22;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_MinScale
	float ___m_MinScale_23;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_MaxDistance
	float ___m_MaxDistance_24;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_MinDistance
	float ___m_MinDistance_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::CloseOnInactivity
	bool ___CloseOnInactivity_26;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::CloseOnInactivityTime
	float ___CloseOnInactivityTime_27;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::_closingTime
	float ____closingTime_28;
	// System.Action`1<System.Boolean> Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnKeyboardShifted
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnKeyboardShifted_29;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey> Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnKeyboardValueKeyPressed
	Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* ___OnKeyboardValueKeyPressed_30;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc> Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnKeyboardFunctionKeyPressed
	Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* ___OnKeyboardFunctionKeyPressed_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_IsShifted
	bool ___m_IsShifted_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_IsCapslocked
	bool ___m_IsCapslocked_33;
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_CaretPosition
	int32_t ___m_CaretPosition_34;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_StartingScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartingScale_35;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::m_ObjectBounds
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ObjectBounds_36;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::_defaultColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____defaultColor_37;
	// UnityEngine.UI.Image Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::_recordImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____recordImage_38;
	// UnityEngine.AudioSource Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_39;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationSystem Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::dictationSystem
	RuntimeObject* ___dictationSystem_40;
};

struct NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_StaticFields
{
	// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::<Instance>k__BackingField
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* ___U3CInstanceU3Ek__BackingField_5;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI
struct NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D  : public NearInteractionTouchableSurface_t1890B05DEBC69D456941177CB5EFA419951C738E
{
	// System.Lazy`1<UnityEngine.RectTransform> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::rectTransform
	Lazy_1_tCAF5FD08A5F62EB0A24F3A8AA1FFAA02183EC3D2* ___rectTransform_6;
};

struct NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_StaticFields
{
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI> Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI::instances
	List_1_tE586C7DF7362A54F1367795984EFC563AF4062C4* ___instances_7;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
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
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
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
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// Microsoft.MixedReality.Toolkit.Experimental.UI.SliderInputField
struct SliderInputField_tF7097DACBE7331DA2538006C3B358DFBB9B8C15D  : public TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F
{
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_265;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_266;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_267;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_268;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_269;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_270;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_271;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_272;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_273;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_274;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_275;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_276;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_277;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_278;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_279;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_280;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_281;
};

struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_301;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF  : public RuntimeArray
{
	ALIGN_FIELD (8) Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* m_Items[1];

	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane[]
struct SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD  : public RuntimeArray
{
	ALIGN_FIELD (8) SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* m_Items[1];

	inline SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.UI.PinchSlider[]
struct PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1  : public RuntimeArray
{
	ALIGN_FIELD (8) PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* m_Items[1];

	inline PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPair[]
struct SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7  : public RuntimeArray
{
	ALIGN_FIELD (8) SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* m_Items[1];

	inline SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* m_Items[1];

	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28  : public RuntimeArray
{
	ALIGN_FIELD (8) SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* m_Items[1];

	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_GetInputSystemDataProvider_TisRuntimeObject_mD8D3FD5E4D793C8959090BE7F44C7A78C02CABD0_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentExtensions_EnsureComponent_TisRuntimeObject_mF78023F30F8C700043B851F2CE0D003AE1427306_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.EventSystemExtensions::ExecuteHierarchyUpward<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystemExtensions_ExecuteHierarchyUpward_TisRuntimeObject_m9D195B3234842B5C1D26ACAD3BF57FD043D68839_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t297B5C47242D1B98BEC955E2804FA142B43E7927* ___callbackFunction2, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>::get_InputData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputEventData_1_get_InputData_m6FA48F377DF5F57338C37322468A877D1448B0E9_gshared_inline (InputEventData_1_t512F7986EF58A2396A36B30876A30E3DB626B300* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponentInParent<Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard>()
inline NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* Component_GetComponentInParent_TisNonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_mBBFC79221C889F176A9500095BAC864A3EE58684 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.CapsLockHighlight::UpdateState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsLockHighlight_UpdateState_m83C828FDE0B1211F9F62ECEFDA5813C2CE446BF1 (CapsLockHighlight_t531AA5779029279E30E39856091270C103B47B98* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::get_IsCapsLocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonNativeKeyboard_get_IsCapsLocked_m30B73DF1124AE757A5C315BB6187AC151B0FF361 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* NonNativeKeyboard_get_Instance_mE2298AEF4256881EF216DC07D471DEDCA7622FDE_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::FunctionKey(Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_FunctionKey_m819CAD43BB3A16258FE4A9C83A4C57252020AF02 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650* ___functionKey0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::add_OnKeyboardShifted(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_add_OnKeyboardShifted_m3AA4B38B19E961193BEEAC9074076A5B8C7C7A16 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::AppendValue(Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_AppendValue_mFDB0BC647A08DDD132D9342D2A192462FC9E7E33 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8* ___valueKey0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::set_Instance(Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NonNativeKeyboard_set_Instance_m7B233AFDAACD8724626E022828C6EBB81048BCB5_inline (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.RectTransformUtility::CalculateRelativeRectTransformBounds(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 RectTransformUtility_CalculateRelativeRectTransformBounds_m42B206E52BF3CE694F3D5F8688DEA98FB1076926 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trans0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions::GetChildRecursive(UnityEngine.Transform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TransformExtensions_GetChildRecursive_mE636B7C9A7C8DDEFE3C1881208BD26E48A1A6259 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t0, String_t* ___name1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m22ACF33DC0AB281D8B1E18650516D0765006FE66 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___source0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_keyboardType(UnityEngine.TouchScreenKeyboardType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_keyboardType_m97210FB5D41B6AAE5352D2BD6C1D45AF8174FC95 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystemGlobalHandlerListener_Start_m30EAA42B7CBB15C631BF57DF979A5786C1D0E2E5 (InputSystemGlobalHandlerListener_t71FCC26FB89ED496E3EE4C2786051DB2D90CD1A9* __this, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationSystem>()
inline RuntimeObject* CoreServices_GetInputSystemDataProvider_TisIMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED_m44A78E14DD71CADFD9946B379E6EF4BD00019D5F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))CoreServices_GetInputSystemDataProvider_TisRuntimeObject_mD8D3FD5E4D793C8959090BE7F44C7A78C02CABD0_gshared)(method);
}
// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::get_onValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* TMP_InputField_get_onValueChanged_m407B5F5BFD1F4B04032F6B90B06F5072F5993407 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71 (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607 (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* CameraCache_get_Main_m08DDDB3EC260B690A997F10C0B85678322E20B6A (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::CheckForCloseOnInactivityTimeExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_CheckForCloseOnInactivityTimeExpired_mB21CEE0D01EF95690D31931F97AA382FE97ABF92 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_caretPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_caretPosition_mD5B0AFA01D9947B7EFC98CD4C4BF927518513FF4 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystemGlobalHandlerListener_OnDisable_m493D2D606569A0CE39372C172156A52DB85E8B0E (InputSystemGlobalHandlerListener_t71FCC26FB89ED496E3EE4C2786051DB2D90CD1A9* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Clear_m568E688F899B3DD6046C6D4E7D114E4C469ED18E (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.String Microsoft.MixedReality.Toolkit.Input.DictationEventData::get_DictationResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DictationEventData_get_DictationResult_mF96CB4768813079CAD8C4D785A88301F3FAE0B67_inline (DictationEventData_t12B9F7196FAB9412DC98501BC71F0AFB7B63F450* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::ResetClosingTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_ResetClosingTime_m5F371A1B6815B932003E67328EA48C65A82E3AD2 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_InputField::get_caretPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.String System.String::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A (String_t* __this, int32_t ___startIndex0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::UpdateCaretPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_UpdateCaretPosition_m61D86AAC0DB7E78B7FC80E7CE8F48A8A3EDEBD7E (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, int32_t ___newPos0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::SetMicrophoneDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_SetMicrophoneDefault_m93540E2AB92DC448DF1C81EEDC797B38A49D93EB (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::IsMicrophoneActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonNativeKeyboard_IsMicrophoneActive_m46C39B0245CD578B664622AC25A44DA57C90EF68 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::ActivateSpecificKeyboard(Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/LayoutType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_ActivateSpecificKeyboard_m57CA5350E3ED97C98326C7C2CE8D076B9DE8ABEF (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, int32_t ___keyboardType0, const RuntimeMethod* method) ;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::ActivateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_ActivateInputField_m9471012A606F201DF838539F5400D072A827914F (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::PresentKeyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_PresentKeyboard_m7DE048FDF0489D6BE31DE680407EF18C19F37CD8 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::PresentKeyboard(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_PresentKeyboard_m9AEF4CCDEE99DD9C3878362CC831A4077AE85459 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, String_t* ___startText0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::ScaleToSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_ScaleToSize_m57554DE3F01B8DE3F5E3AE7955018FDC5B1FCD0F (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::LookAtTargetOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_LookAtTargetOrigin_mBEDB2C3D507D1A335FFB008F7B3E7F0D5AE3EBA9 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m44C5A344E402DDEC5578FBE9CC7314DC972D12EB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___x0, float ___y1, float ___z2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___relativeTo3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::DisableAllKeyboards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_DisableAllKeyboards_m5BF68C2297C769B88E89D305688806E4339BA4EB (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::ResetKeyboardState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_ResetKeyboardState_mA32CBE55864C076BC5F42F3D26E60E9645D78CC6 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::ShowAlphaKeyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_ShowAlphaKeyboard_m92ED50635B0D1DDDBC360019EA5BCD54658817F8 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::TryToShowURLSubkeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonNativeKeyboard_TryToShowURLSubkeys_mEB8B1F90CD61650196C584939D3483D89916E52A (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::TryToShowEmailSubkeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonNativeKeyboard_TryToShowEmailSubkeys_m06298528E886871A879935C229B5459501D102A9 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::ShowSymbolKeyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_ShowSymbolKeyboard_mB5A493121E86BD6C17B6195ACAB08F3403BCC7D2 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::TryToShowAlphaSubkeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonNativeKeyboard_TryToShowAlphaSubkeys_mDD02A952D15C627A5924856C049AA3FF26F072E6 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::SetMicrophoneRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_SetMicrophoneRecording_m7FC6A8C80F941725DB73E4FFAC26A2C8C20D9C72 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::IndicateActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_IndicateActivity_mB8DBF54D5B48BB728181FA2B2FA6A4FAD33353B4 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey>::Invoke(T)
inline void Action_1_Invoke_mF4ADD25C6D04DD29DEC26D736271581D6D25D4D5_inline (Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* __this, KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2*, KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Shift(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Shift_m7474B22DFC5484200ADA61FDA8CD8AA69567C274 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, bool ___newShiftState0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc>::Invoke(T)
inline void Action_1_Invoke_m15DD38004A3FA9734980B006555A62AE12F59BB8_inline (Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* __this, KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF*, KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc/Function Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc::get_ButtonFunction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyboardKeyFunc_get_ButtonFunction_m1FC5405B71A3B847BFCC28378BDE30447E4C4EAB_inline (KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Enter_m93654EEE97560B451CCC1E245198BB94F2C92243 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Tab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Tab_mDDC1F3EBA89C5DA83E0F11D114A1F8CD3AB05FDE (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::MoveCaretLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_MoveCaretLeft_m19A39CDF8A297F08A5EF5847F54C38EF1EA38118 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::MoveCaretRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_MoveCaretRight_m576E7A105B9F1EEF773D7E6758C18142092C8832 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Close_m591FFB32288294267F119BBF762CFE84B6CAB426 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::EndDictation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_EndDictation_m85E6360A0A3903A5F27797929AF75F3AC1D62C71 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::BeginDictation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_BeginDictation_m6DE423EC736B777209DE8E1E5E25F132227F6DB2 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::CapsLock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_CapsLock_m66E1CAEC855197BE60FB6C993EE69CC696CABA52 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, bool ___newCapsLockState0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Space()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Space_m87B1B6D19637EA4E6284EBE63EC9C84E139CD2A2 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Backspace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Backspace_m3CE15F40822C674573C2C3BE4238CEF40DF112E4 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_InputField::get_selectionFocusPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_InputField::get_selectionAnchorPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_selectionAnchorPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_selectionAnchorPosition_mB6E72D94EFD7C55EAFA8F8AAC30D255935438B06 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_selectionFocusPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_selectionFocusPosition_m862731C1A303D3778E292AB427BC1BEF4407050D (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.String::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68 (String_t* __this, int32_t ___startIndex0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.Void TMPro.TMP_InputField::MoveTextStart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_MoveTextStart_m8D0AA8989DE9DB5D0B540343640BFAAA1C0CEC9E (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, bool ___shift0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m875422328909B5CE80EE81952A62F01E922D143B (Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m15B49F3F1131EEC40B16EC3904BC45D340B57450 (Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystemGlobalHandlerListener__ctor_m37CE5624B20B61C3066C8E6630411C2C6AE15EC0 (InputSystemGlobalHandlerListener_t71FCC26FB89ED496E3EE4C2786051DB2D90CD1A9* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5B30EEA08743DADFF4314C38A67571CF22854F70 (U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboardTouchAssistant::EnableTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboardTouchAssistant_EnableTouch_mF58E773C3352137A309604F110075CE4304CF805 (NonNativeKeyboardTouchAssistant_tEF050E77FC0C666D639BA57E535D757D9DA05D64* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_spatialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Button>()
inline ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* Component_GetComponentsInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m9D6A1A9F3E8724B2D2697E023F359FD37A015744 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchableUnityUI>(UnityEngine.GameObject)
inline NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D* ComponentExtensions_EnsureComponent_TisNearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_mBA9D2EC172F2F8D05C7AE587FABE79AA897A24B6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method)
{
	return ((  NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ComponentExtensions_EnsureComponent_TisRuntimeObject_mF78023F30F8C700043B851F2CE0D003AE1427306_gshared)(___gameObject0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseNearInteractionTouchable::set_EventsToReceive(Microsoft.MixedReality.Toolkit.Input.TouchableEventType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseNearInteractionTouchable_set_EventsToReceive_m860635144CCD9EA8D720B439FF856866DDDDFDA5_inline (BaseNearInteractionTouchable_t9646FAE4C0D5A711AFEC453F37F9A80FA5921FDF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField__ctor_m6C5321A190D58235E29A17D7EE17D249D210A07B (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponentInParent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mF89FC4234D3EF3D85C22E0C34623DD0F955A645B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolDisableHighlight::UpdateState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymbolDisableHighlight_UpdateState_mB3747EE98ECE43C95622F80FE631C4DEAF2EF158 (SymbolDisableHighlight_t3D178164EBA7C2346B34458052667F8AF333665C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::get_IsShifted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonNativeKeyboard_get_IsShifted_m92FCEA8BD1E2F6B4CFC82A446959FDC61B1E82D8 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor()
inline void List_1__ctor_m7EA27CAC733DD95AC0AFB56293AECABB0EA34475 (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::set_Items(System.Collections.Generic.List`1<UnityEngine.RectTransform>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UICollection_set_Items_m57B1555B32F4E859F3C17BC93E50B0B4DB2BCB7E_inline (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::CollectItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_CollectItems_m2A6CE875DEE4593D417A000BA1BD2A3A88189987 (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.RectTransform> Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::get_Items()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Add(T)
inline void List_1_Add_m1B3281E84BCDC45DAA2A744E167AC2065A753F0E_inline (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B*, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Remove(T)
inline bool List_1_Remove_mFB320CE38ADF699E608E47F454402EDB77BC37CE (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B*, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Clear()
inline void List_1_Clear_m093B5A8906C4F9A0DD98022561BB1EAFC518CBE3_inline (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::AddItem(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_AddItem_m005A3233F6BCAB80ED6A85AA11871CC20F9CB8FE (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___item0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Item(System.Int32)
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Count()
inline int32_t List_1_get_Count_m2F707E98BABA1F4794BF2B315168A109B80B2921_inline (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::CreateSliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_CreateSliders_m603897BA437FA63448ECCB6A9F9DCE619944059A (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint>(UnityEngine.GameObject)
inline MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* ComponentExtensions_EnsureComponent_TisMinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5_m40736DD1C076CDA05447EE59A639698F65A010E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method)
{
	return ((  MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ComponentExtensions_EnsureComponent_TisRuntimeObject_mF78023F30F8C700043B851F2CE0D003AE1427306_gshared)(___gameObject0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityTransform__ctor_m33E8186F0884AE0489A7AB979AF0AD39BA996A9E (MixedRealityTransform_tD69A8273A8D1EA76ED0CA106E11CF17F9942C267* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// UnityEngine.Shader Microsoft.MixedReality.Toolkit.Utilities.StandardShaderUtility::get_MrtkStandardShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* StandardShaderUtility_get_MrtkStandardShader_m2C26095AB4F1FFDBA377632B801D7FBE0243DD56 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::OnHoverExited(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_OnHoverExited_mF6360E10FE54022F720BD69D97B40F7624FB6A86 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* ___data0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::DestroyHandles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_DestroyHandles_m112AD8B91F620C7A76E65F8EDB90250C1152BBD8 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform,System.Boolean)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::AddSliderPlane(Microsoft.MixedReality.Toolkit.UI.SliderAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* PinchSliderBox_AddSliderPlane_m70C7BA531A510835A9314EC4CD5B318DFC9FCCCA (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, int32_t ___axis0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.UI.PinchSlider,Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane>::Clear()
inline void Dictionary_2_Clear_mC0F7DD9797615DD420FB602B4FE9B2E16125B858 (Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::AddSlider(Microsoft.MixedReality.Toolkit.UI.SliderAxis,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* PinchSliderBox_AddSlider_m6AABD4FCFE8042EEBB98406605A4F835FF6E3596 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, int32_t ___axis0, float ___globalDirection1, float ___localDirection2, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderPlane__ctor_m4E7E3F0E12C8BA46D2E696452F5A6EDC8902791B (SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderPair__ctor_m373B0FB277998137BC576B41E963E926F550D1D1 (SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.UI.PinchSlider,Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane>::Add(TKey,TValue)
inline void Dictionary_2_Add_m72A12B46C3164C3B812997121820532498F40EB5 (Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6* __this, PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* ___key0, SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6*, PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*, SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.UI.PinchSlider>()
inline PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* GameObject_AddComponent_TisPinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01_m1C87F21D3FD154F3602C37FAB87D05E50852EE55 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.UI.SliderAxis Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::CalculateAxisNormal(Microsoft.MixedReality.Toolkit.UI.SliderAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PinchSliderBox_CalculateAxisNormal_m7EC3C9664BB766FA359012321B3DDC5840913865 (int32_t ___axis0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::GetSliderAxisDirection(Microsoft.MixedReality.Toolkit.UI.SliderAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PinchSliderBox_GetSliderAxisDirection_mEF69A5FB51F65DF91425C5471752C092E2B14DB7 (int32_t ___sliderAxis0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::CalculateAxisHalfScale(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PinchSliderBox_CalculateAxisHalfScale_mC38FBE12DD7573C6F834FB8BBA35039CA84DA6D8 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::CalculateSliderPosition(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PinchSliderBox_CalculateSliderPosition_mC8AF8742B8FC1BDAA1E3FE3AFD20C65A4C526011 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axisNormal1, float ___scale2, float ___direction3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.PinchSlider::set_CurrentSliderAxis(Microsoft.MixedReality.Toolkit.UI.SliderAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSlider_set_CurrentSliderAxis_m1384BA1F4EB717D14C9235E1B441836F67E7FF04 (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::get_ScaleMinimumVector()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MinMaxScaleConstraint_get_ScaleMinimumVector_m2F3D61BB057ACE55E11F78C19AC03A3846B37876_inline (MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.PinchSlider::set_SliderStartDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSlider_set_SliderStartDistance_m11AF6DBA87FB58EAD800438824CFA7FCA4D2274D (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::get_ScaleMaximumVector()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MinMaxScaleConstraint_get_ScaleMaximumVector_m61F236755D1B8ABAE8B47F215D288179DC8A1BAD_inline (MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.PinchSlider::set_SliderEndDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSlider_set_SliderEndDistance_mC55D80ED438C6402608690644DAD4FB8D4961D49 (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* __this, float ___value0, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>(UnityEngine.GameObject)
inline NearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA* ComponentExtensions_EnsureComponent_TisNearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA_m5C59259B99D27DCE3EBAC981988B9F0CA6BA001A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method)
{
	return ((  NearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ComponentExtensions_EnsureComponent_TisRuntimeObject_mF78023F30F8C700043B851F2CE0D003AE1427306_gshared)(___gameObject0, method);
}
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::CreateDefaultThumb(UnityEngine.Material,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PinchSliderBox_CreateDefaultThumb_mF589FC13397ABD49861DD63E304DF5D14F92EAA6 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.PinchSlider::set_ThumbRoot(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSlider_set_ThumbRoot_m20DABEF7C7ACF12174E27B998DEF0BCE2F78A0F3 (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.UI.PinchSlider::set_SliderValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSlider_set_SliderValue_mFAC20C5B0DFE5F5A02EBB1D40BFCA33F4C9A3B3C (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Microsoft.MixedReality.Toolkit.UI.SliderEventData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mB546EEB26BEEBB00B303EA1DC61A89B5875993B1 (UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Microsoft.MixedReality.Toolkit.UI.SliderEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mF0F65639FA1B0652AEFED99A4D581492A02FE39B (UnityEvent_1_t0D4048F0692F60CBC4EBE9CDFA381D07922FE7EA* __this, UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t0D4048F0692F60CBC4EBE9CDFA381D07922FE7EA*, UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B (int32_t ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>()
inline NearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA* GameObject_AddComponent_TisNearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA_m71F501CE1D792F80297EB09E23480BA5954018CD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SphereCollider>()
inline SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.SphereCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697 (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SphereCollider::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCollider_set_radius_m6119FE18C6739B077AB17334B1B53984911017FF (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.UI.SliderEventData::get_Slider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* SliderEventData_get_Slider_m9AF3806FEBEC323215B3399190E168545CB697EA_inline (SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.UI.PinchSlider,Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane>::get_Item(TKey)
inline SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* Dictionary_2_get_Item_mE48A0E5A261CB7C4649FDCE8A5675EBD2A936ECC (Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6* __this, PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* ___key0, const RuntimeMethod* method)
{
	return ((  SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* (*) (Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6*, PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPair Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane::GetSliderPair(Microsoft.MixedReality.Toolkit.UI.PinchSlider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* SliderPlane_GetSliderPair_m92A652A5CF281EB5577AA8A9091B40607614D898 (SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* __this, PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* ___slider0, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPair::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderPair_get_Value_mE87516D520B30C9DD41FC8A43CBB51D0C7EB0F35 (SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.UI.PinchSlider::get_SliderValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.UI.SliderAxis Microsoft.MixedReality.Toolkit.UI.PinchSlider::get_CurrentSliderAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PinchSlider_get_CurrentSliderAxis_mD133A008B14A8FAF2BED4F996324CE970E8BBBDB (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.UI.PinchSlider,Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane>::.ctor()
inline void Dictionary_2__ctor_m745537F8F26347E69AFF06EBB5445813F7889EC5 (Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint>()
inline MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* Component_GetComponent_TisMinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5_mE14687E5EB5BCA51FD7A46FFE004A4D15C817A12 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::UpdateTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_UpdateTip_m65956A3F2DB6107ABAB96FB38ADB781B3BB695E5 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::UpdateConnector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_UpdateConnector_mF8E126F97F9B0DF5CE992C12139FDB6A8A7AFB88 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) ;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::get_Pointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityPointerEventData_get_Pointer_mE5664622195651CF4C2DC3CEAAF99E3823B74E82_inline (MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.EventSystemExtensions::ExecuteHierarchyUpward<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m6FADC8F9CAD1FB85A4C920BE87F28602B6D0D367 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t0FF56C83D3B252AFE788501464E58831E2310B16* ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t0FF56C83D3B252AFE788501464E58831E2310B16*, const RuntimeMethod*))EventSystemExtensions_ExecuteHierarchyUpward_TisRuntimeObject_m9D195B3234842B5C1D26ACAD3BF57FD043D68839_gshared)(___root0, ___eventData1, ___callbackFunction2, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.FocusEventData::get_Pointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FocusEventData_get_Pointer_m99B9460351B3413A8123E3561E22C06B0B4A664C_inline (FocusEventData_t3AD7DE28F6F0A2A7CA9843944A0E0DE4B8868E4A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.EventSystemExtensions::ExecuteHierarchyUpward<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityFocusHandler_t5FCA4CA48911E66F2F7F40219E9A0C654DEFBB52_m6CBEE4A7D2C039A943EFED3FBBCF97126C222968 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t84987B6778476110E256E89C4851AB019A92838B* ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_t84987B6778476110E256E89C4851AB019A92838B*, const RuntimeMethod*))EventSystemExtensions_ExecuteHierarchyUpward_TisRuntimeObject_m9D195B3234842B5C1D26ACAD3BF57FD043D68839_gshared)(___root0, ___eventData1, ___callbackFunction2, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::get_ScaleMaximum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxScaleConstraint_get_ScaleMaximum_mAFB022CD2566BF19E147E7880D0747306FE52643 (MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* __this, const RuntimeMethod* method) ;
// System.Single Microsoft.MixedReality.Toolkit.UI.MinMaxScaleConstraint::get_ScaleMinimum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxScaleConstraint_get_ScaleMinimum_mE0146C4A88EBB8BFA91F77DE015937D8F2C8CC38 (MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::ConstrainGradientDragging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_ConstrainGradientDragging_m19515D45103785BBAD5315914F0217D62E18A56B (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::CalculateGradientDraggerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_CalculateGradientDraggerPosition_mEF54FF1D173F1D8F6CBBD581A15FA492C6F26492 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) ;
// T Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>::get_InputData()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputEventData_1_get_InputData_m6FA48F377DF5F57338C37322468A877D1448B0E9_inline (InputEventData_1_t512F7986EF58A2396A36B30876A30E3DB626B300* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputEventData_1_t512F7986EF58A2396A36B30876A30E3DB626B300*, const RuntimeMethod*))InputEventData_1_get_InputData_m6FA48F377DF5F57338C37322468A877D1448B0E9_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::ApplyColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_ApplyColor_m779AFCF1BFE51E32EFF613FE2BE133A57A79190B (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::UpdateSliderText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_UpdateSliderText_mDEE2DA32DC117556B9057D61E1795D6E4CE69E4F (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::ApplySliderValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_ApplySliderValues_m2FFF7FD3F26DF8549CBC62C59FF5019B94FA346D (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.FocusDetails::get_Point()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FocusDetails_get_Point_mED97A47BC407BF95930337DF61EE88143661B89B_inline (FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::set_TargetObjectMesh(UnityEngine.MeshRenderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorPicker_set_TargetObjectMesh_mA8D15E96B84DFD7C5B254933447BDE43107C5261_inline (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::set_TargetObjectSprite(UnityEngine.SpriteRenderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorPicker_set_TargetObjectSprite_mE994FEBC4F6F2CDFA206273CDE70EB468F742646_inline (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___value0, const RuntimeMethod* method) ;
// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::get_TargetObjectMesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ColorPicker_get_TargetObjectMesh_m91C3E32E4A59F41E8ACA4049628C1C8E54F699F4_inline (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::ExtractColorFromMaterial(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_ExtractColorFromMaterial_m2E37AC8D7707F70F6BBAC0EC7C6FB4B9E43AB554 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::RGBToHSV(UnityEngine.Color,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color_RGBToHSV_m10DD6CE937F04FE322EED0E154C1D7D6933EA2F8 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rgbColor0, float* ___H1, float* ___S2, float* ___V3, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ColorUtility::ToHtmlStringRGBA(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColorUtility_ToHtmlStringRGBA_m54909224DA2C5FA940C41FBAD832B0B838163409 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.SpriteRenderer Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::get_TargetObjectSprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ColorPicker_get_TargetObjectSprite_m89679FB7782AD743D51B3CAEA89D99C481BE0DB2_inline (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF (float ___H0, float ___S1, float ___V2, bool ___hdr3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.CapsLockHighlight::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsLockHighlight_Start_mAA01932ADF7B16339732E18C2DD33A7B04E2BC0D (CapsLockHighlight_t531AA5779029279E30E39856091270C103B47B98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisNonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_mBBFC79221C889F176A9500095BAC864A3EE58684_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Keyboard = GetComponentInParent<NonNativeKeyboard>();
		NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* L_0;
		L_0 = Component_GetComponentInParent_TisNonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_mBBFC79221C889F176A9500095BAC864A3EE58684(__this, Component_GetComponentInParent_TisNonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_mBBFC79221C889F176A9500095BAC864A3EE58684_RuntimeMethod_var);
		__this->___m_Keyboard_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Keyboard_5), (void*)L_0);
		// UpdateState();
		CapsLockHighlight_UpdateState_m83C828FDE0B1211F9F62ECEFDA5813C2CE446BF1(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.CapsLockHighlight::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsLockHighlight_Update_mCBD43FC800B1B9E98701009D7517FE9F3F4C4292 (CapsLockHighlight_t531AA5779029279E30E39856091270C103B47B98* __this, const RuntimeMethod* method) 
{
	{
		// UpdateState();
		CapsLockHighlight_UpdateState_m83C828FDE0B1211F9F62ECEFDA5813C2CE446BF1(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.CapsLockHighlight::UpdateState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsLockHighlight_UpdateState_m83C828FDE0B1211F9F62ECEFDA5813C2CE446BF1 (CapsLockHighlight_t531AA5779029279E30E39856091270C103B47B98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// bool isCapsLock = false;
		V_0 = (bool)0;
		// if (m_Keyboard != null)
		NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* L_0 = __this->___m_Keyboard_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// isCapsLock = m_Keyboard.IsCapsLocked;
		NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* L_3 = __this->___m_Keyboard_5;
		NullCheck(L_3);
		bool L_4;
		L_4 = NonNativeKeyboard_get_IsCapsLocked_m30B73DF1124AE757A5C315BB6187AC151B0FF361(L_3, NULL);
		V_0 = L_4;
	}

IL_0021:
	{
		// if (m_Highlight != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___m_Highlight_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// m_Highlight.enabled = isCapsLock;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___m_Highlight_4;
		bool L_9 = V_0;
		NullCheck(L_8);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, L_9, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.CapsLockHighlight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsLockHighlight__ctor_m4770F17FECB800264CA58A96A486D412175CA3C3 (CapsLockHighlight_t531AA5779029279E30E39856091270C103B47B98* __this, const RuntimeMethod* method) 
{
	{
		// private Image m_Highlight = null;
		__this->___m_Highlight_4 = (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Highlight_4), (void*)(Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc/Function Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc::get_ButtonFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyboardKeyFunc_get_ButtonFunction_m1FC5405B71A3B847BFCC28378BDE30447E4C4EAB (KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650* __this, const RuntimeMethod* method) 
{
	{
		// public Function ButtonFunction => buttonFunction;
		int32_t L_0 = __this->___buttonFunction_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardKeyFunc_Start_mB6BBBA8BCEB45B5C6C0AEC291DE183FC5FD738B6 (KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyboardKeyFunc_FireFunctionKey_mEA9FF9E2D49F324755A85244AE418B5F21477CA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_0 = NULL;
	{
		// Button m_Button = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		V_0 = L_0;
		// m_Button.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = V_0;
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_1, NULL);
		NullCheck(L_2);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_2, NULL);
		// m_Button.onClick.AddListener(FireFunctionKey);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = V_0;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)KeyboardKeyFunc_FireFunctionKey_mEA9FF9E2D49F324755A85244AE418B5F21477CA7_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc::FireFunctionKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardKeyFunc_FireFunctionKey_mEA9FF9E2D49F324755A85244AE418B5F21477CA7 (KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650* __this, const RuntimeMethod* method) 
{
	{
		// NonNativeKeyboard.Instance.FunctionKey(this);
		NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* L_0;
		L_0 = NonNativeKeyboard_get_Instance_mE2298AEF4256881EF216DC07D471DEDCA7622FDE_inline(NULL);
		NullCheck(L_0);
		NonNativeKeyboard_FunctionKey_m819CAD43BB3A16258FE4A9C83A4C57252020AF02(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardKeyFunc__ctor_mDF031748B42DE65404094EBB5A977822BF9B70FC (KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField, FormerlySerializedAs("m_ButtonFunction")] private Function buttonFunction = Function.UNDEFINED;
		__this->___buttonFunction_4 = ((int32_t)12);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardValueKey_Awake_m5E871251001D374CEF74B9CE2866A8358158791D (KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Button = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->___m_Button_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Button_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardValueKey_Start_m809525F2907720C99BB32B6BCBB71373AB2A148B (KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyboardValueKey_FireAppendValue_m2CFB0E6B73A806CAC8541306E20DFEF98B3FBDB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyboardValueKey_Shift_mE68CECED17F080C990B922470977E655EBFAC92C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Text = gameObject.GetComponentInChildren<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB(L_0, GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		__this->___m_Text_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Text_6), (void*)L_1);
		// m_Text.text = Value;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___m_Text_6;
		String_t* L_3 = __this->___Value_4;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_3);
		// m_Button.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___m_Button_7;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_4, NULL);
		NullCheck(L_5);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_5, NULL);
		// m_Button.onClick.AddListener(FireAppendValue);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___m_Button_7;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)KeyboardValueKey_FireAppendValue_m2CFB0E6B73A806CAC8541306E20DFEF98B3FBDB0_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
		// NonNativeKeyboard.Instance.OnKeyboardShifted += Shift;
		NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* L_9;
		L_9 = NonNativeKeyboard_get_Instance_mE2298AEF4256881EF216DC07D471DEDCA7622FDE_inline(NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_10, __this, (intptr_t)((void*)KeyboardValueKey_Shift_mE68CECED17F080C990B922470977E655EBFAC92C_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		NonNativeKeyboard_add_OnKeyboardShifted_m3AA4B38B19E961193BEEAC9074076A5B8C7C7A16(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey::FireAppendValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardValueKey_FireAppendValue_m2CFB0E6B73A806CAC8541306E20DFEF98B3FBDB0 (KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8* __this, const RuntimeMethod* method) 
{
	{
		// NonNativeKeyboard.Instance.AppendValue(this);
		NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* L_0;
		L_0 = NonNativeKeyboard_get_Instance_mE2298AEF4256881EF216DC07D471DEDCA7622FDE_inline(NULL);
		NullCheck(L_0);
		NonNativeKeyboard_AppendValue_mFDB0BC647A08DDD132D9342D2A192462FC9E7E33(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey::Shift(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardValueKey_Shift_mE68CECED17F080C990B922470977E655EBFAC92C (KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8* __this, bool ___isShifted0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (isShifted && !string.IsNullOrEmpty(ShiftValue))
		bool L_0 = ___isShifted0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = __this->___ShiftValue_5;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// m_Text.text = ShiftValue;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___m_Text_6;
		String_t* L_5 = __this->___ShiftValue_5;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_5);
		goto IL_0043;
	}

IL_002f:
	{
		// m_Text.text = Value;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___m_Text_6;
		String_t* L_7 = __this->___Value_4;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_7);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardValueKey__ctor_m0971D0B60950911BFA4A8D2AF0C775FBB08C97B5 (KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* NonNativeKeyboard_get_Instance_mE2298AEF4256881EF216DC07D471DEDCA7622FDE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NonNativeKeyboard Instance { get; private set; }
		NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* L_0 = ((NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_StaticFields*)il2cpp_codegen_static_fields_for(NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::set_Instance(Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_set_Instance_m7B233AFDAACD8724626E022828C6EBB81048BCB5 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NonNativeKeyboard Instance { get; private set; }
		NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* L_0 = ___value0;
		((NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_StaticFields*)il2cpp_codegen_static_fields_for(NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_StaticFields*)il2cpp_codegen_static_fields_for(NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::add_OnTextSubmitted(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_add_OnTextSubmitted_mBDB2BE33DA3DD268D65CF2932D6D0ED4B1169EC8 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnTextSubmitted_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnTextSubmitted_6);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::remove_OnTextSubmitted(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_remove_OnTextSubmitted_mF478302CBD6EA22946702D14CFCC84DC84EC920D (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnTextSubmitted_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnTextSubmitted_6);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::add_OnTextUpdated(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_add_OnTextUpdated_mA913F6B005001FBF575CB9521A6F6DB66512A3B8 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___OnTextUpdated_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___OnTextUpdated_7);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::remove_OnTextUpdated(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_remove_OnTextUpdated_mDEC0012FC00CF4965A5BB183EEF6BE0D890B5441 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___OnTextUpdated_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___OnTextUpdated_7);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::add_OnClosed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_add_OnClosed_m7AF9AF89D36FCD66EA9CE8C01D57E7216A49E12A (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnClosed_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnClosed_8);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::remove_OnClosed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_remove_OnClosed_m3927C02171DFF5BFF0C12ECE69B71A73566BB389 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnClosed_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnClosed_8);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::add_OnPrevious(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_add_OnPrevious_mE8B0A039EB77EB70664E2E2C94108C380B8A9FCB (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnPrevious_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnPrevious_9);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::remove_OnPrevious(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_remove_OnPrevious_m8857A3309214AA97F5131D8B684A0D4156F49E99 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnPrevious_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnPrevious_9);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::add_OnNext(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_add_OnNext_m107057C86F90403A8DC97BB7070774D1B4CB02B7 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnNext_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnNext_10);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::remove_OnNext(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_remove_OnNext_m8C70185AAB5E1B382306F5DB41FEA2520312814B (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnNext_10;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnNext_10);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::add_OnPlacement(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_add_OnPlacement_m10FD5C89FEBB811C9C3740C7348780E76EDC9AFE (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnPlacement_11;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnPlacement_11);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::remove_OnPlacement(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_remove_OnPlacement_m9CED7421B361CA8721DC5210040C62E963DFE9DD (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnPlacement_11;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (&__this->___OnPlacement_11);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::add_OnKeyboardShifted(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_add_OnKeyboardShifted_m3AA4B38B19E961193BEEAC9074076A5B8C7C7A16 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___OnKeyboardShifted_29;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___OnKeyboardShifted_29);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::remove_OnKeyboardShifted(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_remove_OnKeyboardShifted_m6C576131BF08C76ADD4970CE86701B32009D0261 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___OnKeyboardShifted_29;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___OnKeyboardShifted_29);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::add_OnKeyboardValueKeyPressed(System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_add_OnKeyboardValueKeyPressed_mFC609ADDE8EE224EE5E8EE1D775266A9CFFC77FB (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* V_0 = NULL;
	Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* V_1 = NULL;
	Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* V_2 = NULL;
	{
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_0 = __this->___OnKeyboardValueKeyPressed_30;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_1 = V_0;
		V_1 = L_1;
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_2 = V_1;
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2*)Castclass((RuntimeObject*)L_4, Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2_il2cpp_TypeInfo_var));
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2** L_5 = (&__this->___OnKeyboardValueKeyPressed_30);
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_6 = V_2;
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_7 = V_1;
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_9 = V_0;
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2*)L_9) == ((RuntimeObject*)(Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::remove_OnKeyboardValueKeyPressed(System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_remove_OnKeyboardValueKeyPressed_mE9AC95107CEB4364ABD0BB6CA5512E134ECFAD00 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* V_0 = NULL;
	Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* V_1 = NULL;
	Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* V_2 = NULL;
	{
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_0 = __this->___OnKeyboardValueKeyPressed_30;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_1 = V_0;
		V_1 = L_1;
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_2 = V_1;
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2*)Castclass((RuntimeObject*)L_4, Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2_il2cpp_TypeInfo_var));
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2** L_5 = (&__this->___OnKeyboardValueKeyPressed_30);
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_6 = V_2;
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_7 = V_1;
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_9 = V_0;
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2*)L_9) == ((RuntimeObject*)(Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::add_OnKeyboardFunctionKeyPressed(System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_add_OnKeyboardFunctionKeyPressed_mEF00B54F1A1FF079E2FD8BC0C5A7580909F139DB (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* V_0 = NULL;
	Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* V_1 = NULL;
	Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* V_2 = NULL;
	{
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_0 = __this->___OnKeyboardFunctionKeyPressed_31;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_1 = V_0;
		V_1 = L_1;
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_2 = V_1;
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF*)Castclass((RuntimeObject*)L_4, Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF_il2cpp_TypeInfo_var));
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF** L_5 = (&__this->___OnKeyboardFunctionKeyPressed_31);
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_6 = V_2;
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_7 = V_1;
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_9 = V_0;
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF*)L_9) == ((RuntimeObject*)(Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::remove_OnKeyboardFunctionKeyPressed(System.Action`1<Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_remove_OnKeyboardFunctionKeyPressed_m21F0E1C4CC2255438FC2D59DA699F902D540FC7C (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* V_0 = NULL;
	Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* V_1 = NULL;
	Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* V_2 = NULL;
	{
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_0 = __this->___OnKeyboardFunctionKeyPressed_31;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_1 = V_0;
		V_1 = L_1;
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_2 = V_1;
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF*)Castclass((RuntimeObject*)L_4, Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF_il2cpp_TypeInfo_var));
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF** L_5 = (&__this->___OnKeyboardFunctionKeyPressed_31);
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_6 = V_2;
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_7 = V_1;
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_9 = V_0;
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF*)L_9) == ((RuntimeObject*)(Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::get_IsShifted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonNativeKeyboard_get_IsShifted_m92FCEA8BD1E2F6B4CFC82A446959FDC61B1E82D8 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return m_IsShifted; }
		bool L_0 = __this->___m_IsShifted_32;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_IsShifted; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::get_IsCapsLocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonNativeKeyboard_get_IsCapsLocked_m30B73DF1124AE757A5C315BB6187AC151B0FF361 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return m_IsCapslocked; }
		bool L_0 = __this->___m_IsCapslocked_33;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_IsCapslocked; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Awake_m6CD29497B57D06E64692891029B642272058B8F3 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m22ACF33DC0AB281D8B1E18650516D0765006FE66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1046958E3D9EF1D0B1E37B382DFCB3BD2F0F8FC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD1920E05067BFB398C77D45386D552021CADB60);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	bool V_3 = false;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	bool V_5 = false;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_6 = NULL;
	{
		// Instance = this;
		NonNativeKeyboard_set_Instance_m7B233AFDAACD8724626E022828C6EBB81048BCB5_inline(__this, NULL);
		// m_StartingScale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		__this->___m_StartingScale_35 = L_1;
		// Bounds canvasBounds = RectTransformUtility.CalculateRelativeRectTransformBounds(transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3;
		L_3 = RectTransformUtility_CalculateRelativeRectTransformBounds_m42B206E52BF3CE694F3D5F8688DEA98FB1076926(L_2, NULL);
		V_0 = L_3;
		// RectTransform rect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		V_1 = L_4;
		// m_ObjectBounds = new Vector3(canvasBounds.size.x * rect.localScale.x, canvasBounds.size.y * rect.localScale.y, canvasBounds.size.z * rect.localScale.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_6 = L_5.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = V_1;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		float L_9 = L_8.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_11 = L_10.___y_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = V_1;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_12, NULL);
		float L_14 = L_13.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_16 = L_15.___z_4;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = V_1;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_17, NULL);
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), ((float)il2cpp_codegen_multiply(L_6, L_9)), ((float)il2cpp_codegen_multiply(L_11, L_14)), ((float)il2cpp_codegen_multiply(L_16, L_19)), /*hidden argument*/NULL);
		__this->___m_ObjectBounds_36 = L_20;
		// var dictationButton = TransformExtensions.GetChildRecursive(gameObject.transform, "Dictation");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = TransformExtensions_GetChildRecursive_mE636B7C9A7C8DDEFE3C1881208BD26E48A1A6259(L_22, _stringLiteralCD1920E05067BFB398C77D45386D552021CADB60, NULL);
		V_2 = L_23;
		// if (dictationButton != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_25;
		bool L_26 = V_3;
		if (!L_26)
		{
			goto IL_00f9;
		}
	}
	{
		// var dictationIcon = dictationButton.Find("keyboard_closeIcon");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = V_2;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_27, _stringLiteral1046958E3D9EF1D0B1E37B382DFCB3BD2F0F8FC1, NULL);
		V_4 = L_28;
		// if (dictationIcon != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_30;
		bool L_31 = V_5;
		if (!L_31)
		{
			goto IL_00f8;
		}
	}
	{
		// _recordImage = dictationIcon.GetComponentInChildren<Image>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = V_4;
		NullCheck(L_32);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33;
		L_33 = Component_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m22ACF33DC0AB281D8B1E18650516D0765006FE66(L_32, Component_GetComponentInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m22ACF33DC0AB281D8B1E18650516D0765006FE66_RuntimeMethod_var);
		__this->____recordImage_38 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____recordImage_38), (void*)L_33);
		// var material = new Material(_recordImage.material);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_34 = __this->____recordImage_38;
		NullCheck(L_34);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35;
		L_35 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_34);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_36, L_35, NULL);
		V_6 = L_36;
		// _defaultColor = material.color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = V_6;
		NullCheck(L_37);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_37, NULL);
		__this->____defaultColor_37 = L_38;
		// _recordImage.material = material;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39 = __this->____recordImage_38;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = V_6;
		NullCheck(L_39);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_39, L_40);
	}

IL_00f8:
	{
	}

IL_00f9:
	{
		// InputField.keyboardType = (TouchScreenKeyboardType)(int.MaxValue);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_41 = __this->___InputField_12;
		NullCheck(L_41);
		TMP_InputField_set_keyboardType_m97210FB5D41B6AAE5352D2BD6C1D45AF8174FC95(L_41, ((int32_t)2147483647LL), NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Start_mCACC444CD0695E0E244F1F71DE043D6210664404 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_GetInputSystemDataProvider_TisIMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED_m44A78E14DD71CADFD9946B379E6EF4BD00019D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonNativeKeyboard_DoTextUpdated_m1AB672310BA37FEB7E1C705899D0C7A4820283AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		InputSystemGlobalHandlerListener_Start_m30EAA42B7CBB15C631BF57DF979A5786C1D0E2E5(__this, NULL);
		// dictationSystem = CoreServices.GetInputSystemDataProvider<IMixedRealityDictationSystem>();
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_GetInputSystemDataProvider_TisIMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED_m44A78E14DD71CADFD9946B379E6EF4BD00019D5F(CoreServices_GetInputSystemDataProvider_TisIMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED_m44A78E14DD71CADFD9946B379E6EF4BD00019D5F_RuntimeMethod_var);
		__this->___dictationSystem_40 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dictationSystem_40), (void*)L_0);
		// InputField.onValueChanged.AddListener(DoTextUpdated);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_1 = __this->___InputField_12;
		NullCheck(L_1);
		OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* L_2;
		L_2 = TMP_InputField_get_onValueChanged_m407B5F5BFD1F4B04032F6B90B06F5072F5993407(L_1, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_3 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_3, __this, (intptr_t)((void*)NonNativeKeyboard_DoTextUpdated_m1AB672310BA37FEB7E1C705899D0C7A4820283AC_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_2, L_3, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::RegisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_RegisterHandlers_mE7742C416B69A67CAA100D442B76290950DC50BB (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityDictationHandler_tCC8231CDE8BDA2A0B75AAAA818BA823A80A58AC2_mBC5E92F5638D03BC8DEF735EBFC4C4124C5FBA36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.RegisterHandler<IMixedRealityDictationHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityDictationHandler_tCC8231CDE8BDA2A0B75AAAA818BA823A80A58AC2_mBC5E92F5638D03BC8DEF735EBFC4C4124C5FBA36_RuntimeMethod_var, G_B2_0, __this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::UnregisterHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_UnregisterHandlers_m7AB64C58042E3FB57BB13DF70E35C27C04854AC4 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityDictationHandler_tCC8231CDE8BDA2A0B75AAAA818BA823A80A58AC2_mBE288CC0C47C39EC43A74BD388248A4AFBE38533_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.UnregisterHandler<IMixedRealityDictationHandler>(this);
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityDictationHandler_tCC8231CDE8BDA2A0B75AAAA818BA823A80A58AC2_mBE288CC0C47C39EC43A74BD388248A4AFBE38533_RuntimeMethod_var, G_B2_0, __this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::DoTextUpdated(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_DoTextUpdated_m1AB672310BA37FEB7E1C705899D0C7A4820283AC (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	{
		// private void DoTextUpdated(string value) => OnTextUpdated?.Invoke(value);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___OnTextUpdated_7;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		String_t* L_2 = ___value0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_LateUpdate_m7F890F6A87257525C24389F16B95C252980D0632 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (SliderEnabled)
		bool L_0 = __this->___SliderEnabled_14;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		// Vector3 nearPoint = Vector3.ProjectOnPlane(CameraCache.Main.transform.forward, transform.forward);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = CameraCache_get_Main_m08DDDB3EC260B690A997F10C0B85678322E20B6A(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_4, L_6, NULL);
		V_1 = L_7;
		// Vector3 relPos = transform.InverseTransformPoint(nearPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_8, L_9, NULL);
		V_2 = L_10;
		// InputFieldSlide.TargetPoint = relPos;
		AxisSlider_t9B9EB1EB26C01CD907BB9CEFF226C39E03038C65* L_11 = __this->___InputFieldSlide_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		NullCheck(L_11);
		L_11->___TargetPoint_12 = L_12;
	}

IL_0046:
	{
		// CheckForCloseOnInactivityTimeExpired();
		NonNativeKeyboard_CheckForCloseOnInactivityTimeExpired_mB21CEE0D01EF95690D31931F97AA382FE97ABF92(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::UpdateCaretPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_UpdateCaretPosition_m61D86AAC0DB7E78B7FC80E7CE8F48A8A3EDEBD7E (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, int32_t ___newPos0, const RuntimeMethod* method) 
{
	{
		// private void UpdateCaretPosition(int newPos) => InputField.caretPosition = newPos;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___InputField_12;
		int32_t L_1 = ___newPos0;
		NullCheck(L_0);
		TMP_InputField_set_caretPosition_mD5B0AFA01D9947B7EFC98CD4C4BF927518513FF4(L_0, L_1, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_OnDisable_m49FC9EB761257937075CD17B9A4ED0CEB7F3AB73 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	{
		// base.OnDisable();
		InputSystemGlobalHandlerListener_OnDisable_m493D2D606569A0CE39372C172156A52DB85E8B0E(__this, NULL);
		// m_LastKeyboardLayout = LayoutType.Alpha;
		__this->___m_LastKeyboardLayout_21 = 0;
		// Clear();
		NonNativeKeyboard_Clear_m568E688F899B3DD6046C6D4E7D114E4C469ED18E(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnDictationHypothesis(Microsoft.MixedReality.Toolkit.Input.DictationEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_OnDictationHypothesis_mC234936FCD130E830C9110EA26C0AFFBAFF15038 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, DictationEventData_t12B9F7196FAB9412DC98501BC71F0AFB7B63F450* ___eventData0, const RuntimeMethod* method) 
{
	{
		// public void OnDictationHypothesis(DictationEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnDictationResult(Microsoft.MixedReality.Toolkit.Input.DictationEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_OnDictationResult_m801FCC5D10756556B7C4D9827077121877FD65C2 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, DictationEventData_t12B9F7196FAB9412DC98501BC71F0AFB7B63F450* ___eventData0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (eventData.used)
		DictationEventData_t12B9F7196FAB9412DC98501BC71F0AFB7B63F450* L_0 = ___eventData0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.EventSystems.AbstractEventData::get_used() */, L_0);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_0081;
	}

IL_000e:
	{
		// var text = eventData.DictationResult;
		DictationEventData_t12B9F7196FAB9412DC98501BC71F0AFB7B63F450* L_3 = ___eventData0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DictationEventData_get_DictationResult_mF96CB4768813079CAD8C4D785A88301F3FAE0B67_inline(L_3, NULL);
		V_0 = L_4;
		// ResetClosingTime();
		NonNativeKeyboard_ResetClosingTime_m5F371A1B6815B932003E67328EA48C65A82E3AD2(__this, NULL);
		// if (text != null)
		String_t* L_5 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(String_t*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0081;
		}
	}
	{
		// m_CaretPosition = InputField.caretPosition;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_7 = __this->___InputField_12;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_7, NULL);
		__this->___m_CaretPosition_34 = L_8;
		// InputField.text = InputField.text.Insert(m_CaretPosition, text);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_9 = __this->___InputField_12;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_10 = __this->___InputField_12;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_10, NULL);
		int32_t L_12 = __this->___m_CaretPosition_34;
		String_t* L_13 = V_0;
		NullCheck(L_11);
		String_t* L_14;
		L_14 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_11, L_12, L_13, NULL);
		NullCheck(L_9);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_9, L_14, NULL);
		// m_CaretPosition += text.Length;
		int32_t L_15 = __this->___m_CaretPosition_34;
		String_t* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		__this->___m_CaretPosition_34 = ((int32_t)il2cpp_codegen_add(L_15, L_17));
		// UpdateCaretPosition(m_CaretPosition);
		int32_t L_18 = __this->___m_CaretPosition_34;
		NonNativeKeyboard_UpdateCaretPosition_m61D86AAC0DB7E78B7FC80E7CE8F48A8A3EDEBD7E(__this, L_18, NULL);
		// eventData.Use();
		DictationEventData_t12B9F7196FAB9412DC98501BC71F0AFB7B63F450* L_19 = ___eventData0;
		NullCheck(L_19);
		VirtualActionInvoker0::Invoke(5 /* System.Void UnityEngine.EventSystems.AbstractEventData::Use() */, L_19);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnDictationComplete(Microsoft.MixedReality.Toolkit.Input.DictationEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_OnDictationComplete_mD8B484018A433E3851B1F33CB9BF9793F41094FE (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, DictationEventData_t12B9F7196FAB9412DC98501BC71F0AFB7B63F450* ___eventData0, const RuntimeMethod* method) 
{
	{
		// ResetClosingTime();
		NonNativeKeyboard_ResetClosingTime_m5F371A1B6815B932003E67328EA48C65A82E3AD2(__this, NULL);
		// SetMicrophoneDefault();
		NonNativeKeyboard_SetMicrophoneDefault_m93540E2AB92DC448DF1C81EEDC797B38A49D93EB(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnDictationError(Microsoft.MixedReality.Toolkit.Input.DictationEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_OnDictationError_m3C12F3103051D12C97C9A89E873A53E0964CCE50 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, DictationEventData_t12B9F7196FAB9412DC98501BC71F0AFB7B63F450* ___eventData0, const RuntimeMethod* method) 
{
	{
		// public void OnDictationError(DictationEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_OnDestroy_mD95B5E1C2F691CF8B184345C994DDC47EF970B59 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (dictationSystem != null && IsMicrophoneActive())
		RuntimeObject* L_0 = __this->___dictationSystem_40;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = NonNativeKeyboard_IsMicrophoneActive_m46C39B0245CD578B664622AC25A44DA57C90EF68(__this, NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// dictationSystem.StopRecording();
		RuntimeObject* L_3 = __this->___dictationSystem_40;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationSystem::StopRecording() */, IMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED_il2cpp_TypeInfo_var, L_3);
	}

IL_0024:
	{
		// Instance = null;
		NonNativeKeyboard_set_Instance_m7B233AFDAACD8724626E022828C6EBB81048BCB5_inline((NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::PresentKeyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_PresentKeyboard_m7DE048FDF0489D6BE31DE680407EF18C19F37CD8 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResetClosingTime();
		NonNativeKeyboard_ResetClosingTime_m5F371A1B6815B932003E67328EA48C65A82E3AD2(__this, NULL);
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// ActivateSpecificKeyboard(LayoutType.Alpha);
		NonNativeKeyboard_ActivateSpecificKeyboard_m57CA5350E3ED97C98326C7C2CE8D076B9DE8ABEF(__this, 0, NULL);
		// OnPlacement(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = __this->___OnPlacement_11;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_1);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_1, __this, L_2, NULL);
		// InputField.ActivateInputField();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = __this->___InputField_12;
		NullCheck(L_3);
		TMP_InputField_ActivateInputField_m9471012A606F201DF838539F5400D072A827914F(L_3, NULL);
		// SetMicrophoneDefault();
		NonNativeKeyboard_SetMicrophoneDefault_m93540E2AB92DC448DF1C81EEDC797B38A49D93EB(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::PresentKeyboard(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_PresentKeyboard_m9AEF4CCDEE99DD9C3878362CC831A4077AE85459 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, String_t* ___startText0, const RuntimeMethod* method) 
{
	{
		// PresentKeyboard();
		NonNativeKeyboard_PresentKeyboard_m7DE048FDF0489D6BE31DE680407EF18C19F37CD8(__this, NULL);
		// Clear();
		NonNativeKeyboard_Clear_m568E688F899B3DD6046C6D4E7D114E4C469ED18E(__this, NULL);
		// InputField.text = startText;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___InputField_12;
		String_t* L_1 = ___startText0;
		NullCheck(L_0);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::PresentKeyboard(Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/LayoutType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_PresentKeyboard_m08E1EBB9989D6370678F3D9EA44B9C077D338594 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, int32_t ___keyboardType0, const RuntimeMethod* method) 
{
	{
		// PresentKeyboard();
		NonNativeKeyboard_PresentKeyboard_m7DE048FDF0489D6BE31DE680407EF18C19F37CD8(__this, NULL);
		// ActivateSpecificKeyboard(keyboardType);
		int32_t L_0 = ___keyboardType0;
		NonNativeKeyboard_ActivateSpecificKeyboard_m57CA5350E3ED97C98326C7C2CE8D076B9DE8ABEF(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::PresentKeyboard(System.String,Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/LayoutType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_PresentKeyboard_m579744F2C4CD288FE5CB85D7C70207DA20546172 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, String_t* ___startText0, int32_t ___keyboardType1, const RuntimeMethod* method) 
{
	{
		// PresentKeyboard(startText);
		String_t* L_0 = ___startText0;
		NonNativeKeyboard_PresentKeyboard_m9AEF4CCDEE99DD9C3878362CC831A4077AE85459(__this, L_0, NULL);
		// ActivateSpecificKeyboard(keyboardType);
		int32_t L_1 = ___keyboardType1;
		NonNativeKeyboard_ActivateSpecificKeyboard_m57CA5350E3ED97C98326C7C2CE8D076B9DE8ABEF(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::RepositionKeyboard(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_RepositionKeyboard_m347A4D7A0E375B4F5710E49062F104B2C91DE835 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___kbPos0, float ___verticalOffset1, const RuntimeMethod* method) 
{
	{
		// transform.position = kbPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___kbPos0;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// ScaleToSize();
		NonNativeKeyboard_ScaleToSize_m57554DE3F01B8DE3F5E3AE7955018FDC5B1FCD0F(__this, NULL);
		// LookAtTargetOrigin();
		NonNativeKeyboard_LookAtTargetOrigin_mBEDB2C3D507D1A335FFB008F7B3E7F0D5AE3EBA9(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::RepositionKeyboard(UnityEngine.Transform,UnityEngine.BoxCollider,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_RepositionKeyboard_m71673820EC62900D462F83ECC5D6BB497A53439A (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___objectTransform0, BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___aCollider1, float ___verticalOffset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// transform.position = objectTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___objectTransform0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// if (aCollider != null)
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_3 = ___aCollider1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		// float yTranslation = -((aCollider.bounds.size.y * 0.5f) + verticalOffset);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_6 = ___aCollider1;
		NullCheck(L_6);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_7;
		L_7 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_6, NULL);
		V_2 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_2), NULL);
		float L_9 = L_8.___y_3;
		float L_10 = ___verticalOffset2;
		V_1 = ((-((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_9, (0.5f))), L_10))));
		// transform.Translate(0.0f, yTranslation, -0.6f, objectTransform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_12 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___objectTransform0;
		NullCheck(L_11);
		Transform_Translate_m44C5A344E402DDEC5578FBE9CC7314DC972D12EB(L_11, (0.0f), L_12, (-0.600000024f), L_13, NULL);
		goto IL_0086;
	}

IL_0057:
	{
		// float yTranslation = -((m_ObjectBounds.y * 0.5f) + verticalOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___m_ObjectBounds_36);
		float L_15 = L_14->___y_3;
		float L_16 = ___verticalOffset2;
		V_3 = ((-((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_15, (0.5f))), L_16))));
		// transform.Translate(0.0f, yTranslation, -0.6f, objectTransform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_18 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = ___objectTransform0;
		NullCheck(L_17);
		Transform_Translate_m44C5A344E402DDEC5578FBE9CC7314DC972D12EB(L_17, (0.0f), L_18, (-0.600000024f), L_19, NULL);
	}

IL_0086:
	{
		// ScaleToSize();
		NonNativeKeyboard_ScaleToSize_m57554DE3F01B8DE3F5E3AE7955018FDC5B1FCD0F(__this, NULL);
		// LookAtTargetOrigin();
		NonNativeKeyboard_LookAtTargetOrigin_mBEDB2C3D507D1A335FFB008F7B3E7F0D5AE3EBA9(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::ScaleToSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_ScaleToSize_m57554DE3F01B8DE3F5E3AE7955018FDC5B1FCD0F (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE24A11ABE956C400932ACDD82CA022B8FD47258A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float distance = (transform.position - CameraCache.Main.transform.position).magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = CameraCache_get_Main_m08DDDB3EC260B690A997F10C0B85678322E20B6A(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_4, NULL);
		V_3 = L_5;
		float L_6;
		L_6 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		V_0 = L_6;
		// float distancePercent = (distance - m_MinDistance) / (m_MaxDistance - m_MinDistance);
		float L_7 = V_0;
		float L_8 = __this->___m_MinDistance_25;
		float L_9 = __this->___m_MaxDistance_24;
		float L_10 = __this->___m_MinDistance_25;
		V_1 = ((float)(((float)il2cpp_codegen_subtract(L_7, L_8))/((float)il2cpp_codegen_subtract(L_9, L_10))));
		// float scale = m_MinScale + (m_MaxScale - m_MinScale) * distancePercent;
		float L_11 = __this->___m_MinScale_23;
		float L_12 = __this->___m_MaxScale_22;
		float L_13 = __this->___m_MinScale_23;
		float L_14 = V_1;
		V_2 = ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_13)), L_14))));
		// scale = Mathf.Clamp(scale, m_MinScale, m_MaxScale);
		float L_15 = V_2;
		float L_16 = __this->___m_MinScale_23;
		float L_17 = __this->___m_MaxScale_22;
		float L_18;
		L_18 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_15, L_16, L_17, NULL);
		V_2 = L_18;
		// transform.localScale = m_StartingScale * scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___m_StartingScale_35;
		float L_21 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_21, NULL);
		NullCheck(L_19);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_19, L_22, NULL);
		// Debug.LogFormat("Setting scale: {0} for distance: {1}", scale, distance);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_23;
		float L_25 = V_2;
		float L_26 = L_25;
		RuntimeObject* L_27 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_24;
		float L_29 = V_0;
		float L_30 = L_29;
		RuntimeObject* L_31 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_31);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralE24A11ABE956C400932ACDD82CA022B8FD47258A, L_28, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::LookAtTargetOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_LookAtTargetOrigin_mBEDB2C3D507D1A335FFB008F7B3E7F0D5AE3EBA9 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	{
		// transform.LookAt(CameraCache.Main.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = CameraCache_get_Main_m08DDDB3EC260B690A997F10C0B85678322E20B6A(NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_0);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_0, L_3, NULL);
		// transform.Rotate(Vector3.up, 180.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_4);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_4, L_5, (180.0f), NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::ActivateSpecificKeyboard(Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/LayoutType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_ActivateSpecificKeyboard_m57CA5350E3ED97C98326C7C2CE8D076B9DE8ABEF (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, int32_t ___keyboardType0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// DisableAllKeyboards();
		NonNativeKeyboard_DisableAllKeyboards_m5BF68C2297C769B88E89D305688806E4339BA4EB(__this, NULL);
		// ResetKeyboardState();
		NonNativeKeyboard_ResetKeyboardState_mA32CBE55864C076BC5F42F3D26E60E9645D78CC6(__this, NULL);
		// switch (keyboardType)
		int32_t L_0 = ___keyboardType0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0057;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_0057;
	}

IL_002b:
	{
		// ShowAlphaKeyboard();
		NonNativeKeyboard_ShowAlphaKeyboard_m92ED50635B0D1DDDBC360019EA5BCD54658817F8(__this, NULL);
		// TryToShowURLSubkeys();
		bool L_3;
		L_3 = NonNativeKeyboard_TryToShowURLSubkeys_mEB8B1F90CD61650196C584939D3483D89916E52A(__this, NULL);
		// break;
		goto IL_0068;
	}

IL_003c:
	{
		// ShowAlphaKeyboard();
		NonNativeKeyboard_ShowAlphaKeyboard_m92ED50635B0D1DDDBC360019EA5BCD54658817F8(__this, NULL);
		// TryToShowEmailSubkeys();
		bool L_4;
		L_4 = NonNativeKeyboard_TryToShowEmailSubkeys_m06298528E886871A879935C229B5459501D102A9(__this, NULL);
		// break;
		goto IL_0068;
	}

IL_004d:
	{
		// ShowSymbolKeyboard();
		NonNativeKeyboard_ShowSymbolKeyboard_mB5A493121E86BD6C17B6195ACAB08F3403BCC7D2(__this, NULL);
		// break;
		goto IL_0068;
	}

IL_0057:
	{
		// ShowAlphaKeyboard();
		NonNativeKeyboard_ShowAlphaKeyboard_m92ED50635B0D1DDDBC360019EA5BCD54658817F8(__this, NULL);
		// TryToShowAlphaSubkeys();
		bool L_5;
		L_5 = NonNativeKeyboard_TryToShowAlphaSubkeys_mDD02A952D15C627A5924856C049AA3FF26F072E6(__this, NULL);
		// break;
		goto IL_0068;
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::BeginDictation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_BeginDictation_m6DE423EC736B777209DE8E1E5E25F132227F6DB2 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResetClosingTime();
		NonNativeKeyboard_ResetClosingTime_m5F371A1B6815B932003E67328EA48C65A82E3AD2(__this, NULL);
		// dictationSystem.StartRecording(gameObject);
		RuntimeObject* L_0 = __this->___dictationSystem_40;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker5< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, float, float, int32_t, String_t* >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationSystem::StartRecording(UnityEngine.GameObject,System.Single,System.Single,System.Int32,System.String) */, IMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED_il2cpp_TypeInfo_var, L_0, L_1, (5.0f), (20.0f), ((int32_t)10), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// SetMicrophoneRecording();
		NonNativeKeyboard_SetMicrophoneRecording_m7FC6A8C80F941725DB73E4FFAC26A2C8C20D9C72(__this, NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::IsMicrophoneActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonNativeKeyboard_IsMicrophoneActive_m46C39B0245CD578B664622AC25A44DA57C90EF68 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// var result = _recordImage.color != _defaultColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____recordImage_38;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->____defaultColor_37;
		bool L_3;
		L_3 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// return result;
		bool L_4 = V_0;
		V_1 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::SetMicrophoneDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_SetMicrophoneDefault_m93540E2AB92DC448DF1C81EEDC797B38A49D93EB (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	{
		// _recordImage.color = _defaultColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____recordImage_38;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->____defaultColor_37;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::SetMicrophoneRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_SetMicrophoneRecording_m7FC6A8C80F941725DB73E4FFAC26A2C8C20D9C72 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	{
		// _recordImage.color = Color.red;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____recordImage_38;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::EndDictation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_EndDictation_m85E6360A0A3903A5F27797929AF75F3AC1D62C71 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dictationSystem.StopRecording();
		RuntimeObject* L_0 = __this->___dictationSystem_40;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationSystem::StopRecording() */, IMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED_il2cpp_TypeInfo_var, L_0);
		// SetMicrophoneDefault();
		NonNativeKeyboard_SetMicrophoneDefault_m93540E2AB92DC448DF1C81EEDC797B38A49D93EB(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::AppendValue(Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_AppendValue_mFDB0BC647A08DDD132D9342D2A192462FC9E7E33 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8* ___valueKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// IndicateActivity();
		NonNativeKeyboard_IndicateActivity_mB8DBF54D5B48BB728181FA2B2FA6A4FAD33353B4(__this, NULL);
		// string value = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// OnKeyboardValueKeyPressed(valueKey);
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_0 = __this->___OnKeyboardValueKeyPressed_30;
		KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8* L_1 = ___valueKey0;
		NullCheck(L_0);
		Action_1_Invoke_mF4ADD25C6D04DD29DEC26D736271581D6D25D4D5_inline(L_0, L_1, NULL);
		// if (m_IsShifted && !string.IsNullOrEmpty(valueKey.ShiftValue))
		bool L_2 = __this->___m_IsShifted_32;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8* L_3 = ___valueKey0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___ShiftValue_5;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
	}

IL_0034:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// value = valueKey.ShiftValue;
		KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8* L_7 = ___valueKey0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___ShiftValue_5;
		V_0 = L_8;
		goto IL_004c;
	}

IL_0043:
	{
		// value = valueKey.Value;
		KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8* L_9 = ___valueKey0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___Value_4;
		V_0 = L_10;
	}

IL_004c:
	{
		// if (!m_IsCapslocked)
		bool L_11 = __this->___m_IsCapslocked_33;
		V_2 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0063;
		}
	}
	{
		// Shift(false);
		NonNativeKeyboard_Shift_m7474B22DFC5484200ADA61FDA8CD8AA69567C274(__this, (bool)0, NULL);
	}

IL_0063:
	{
		// m_CaretPosition = InputField.caretPosition;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_13 = __this->___InputField_12;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_13, NULL);
		__this->___m_CaretPosition_34 = L_14;
		// InputField.text = InputField.text.Insert(m_CaretPosition, value);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_15 = __this->___InputField_12;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_16 = __this->___InputField_12;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_16, NULL);
		int32_t L_18 = __this->___m_CaretPosition_34;
		String_t* L_19 = V_0;
		NullCheck(L_17);
		String_t* L_20;
		L_20 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_17, L_18, L_19, NULL);
		NullCheck(L_15);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_15, L_20, NULL);
		// m_CaretPosition += value.Length;
		int32_t L_21 = __this->___m_CaretPosition_34;
		String_t* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_22, NULL);
		__this->___m_CaretPosition_34 = ((int32_t)il2cpp_codegen_add(L_21, L_23));
		// UpdateCaretPosition(m_CaretPosition);
		int32_t L_24 = __this->___m_CaretPosition_34;
		NonNativeKeyboard_UpdateCaretPosition_m61D86AAC0DB7E78B7FC80E7CE8F48A8A3EDEBD7E(__this, L_24, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::FunctionKey(Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_FunctionKey_m819CAD43BB3A16258FE4A9C83A4C57252020AF02 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650* ___functionKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37CF68AD71CDFF0D947143303C6DEA1C27789D9F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// IndicateActivity();
		NonNativeKeyboard_IndicateActivity_mB8DBF54D5B48BB728181FA2B2FA6A4FAD33353B4(__this, NULL);
		// OnKeyboardFunctionKeyPressed(functionKey);
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_0 = __this->___OnKeyboardFunctionKeyPressed_31;
		KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650* L_1 = ___functionKey0;
		NullCheck(L_0);
		Action_1_Invoke_m15DD38004A3FA9734980B006555A62AE12F59BB8_inline(L_0, L_1, NULL);
		// switch (functionKey.ButtonFunction)
		KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650* L_2 = ___functionKey0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = KeyboardKeyFunc_get_ButtonFunction_m1FC5405B71A3B847BFCC28378BDE30447E4C4EAB_inline(L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_005d;
			}
			case 1:
			{
				goto IL_006a;
			}
			case 2:
			{
				goto IL_0077;
			}
			case 3:
			{
				goto IL_008a;
			}
			case 4:
			{
				goto IL_0098;
			}
			case 5:
			{
				goto IL_00a5;
			}
			case 6:
			{
				goto IL_00b2;
			}
			case 7:
			{
				goto IL_00bf;
			}
			case 8:
			{
				goto IL_00f0;
			}
			case 9:
			{
				goto IL_0103;
			}
			case 10:
			{
				goto IL_0116;
			}
			case 11:
			{
				goto IL_0120;
			}
			case 12:
			{
				goto IL_012a;
			}
		}
	}
	{
		goto IL_0147;
	}

IL_005d:
	{
		// Enter();
		NonNativeKeyboard_Enter_m93654EEE97560B451CCC1E245198BB94F2C92243(__this, NULL);
		// break;
		goto IL_014d;
	}

IL_006a:
	{
		// Tab();
		NonNativeKeyboard_Tab_mDDC1F3EBA89C5DA83E0F11D114A1F8CD3AB05FDE(__this, NULL);
		// break;
		goto IL_014d;
	}

IL_0077:
	{
		// ActivateSpecificKeyboard(m_LastKeyboardLayout);
		int32_t L_6 = __this->___m_LastKeyboardLayout_21;
		NonNativeKeyboard_ActivateSpecificKeyboard_m57CA5350E3ED97C98326C7C2CE8D076B9DE8ABEF(__this, L_6, NULL);
		// break;
		goto IL_014d;
	}

IL_008a:
	{
		// ActivateSpecificKeyboard(LayoutType.Symbol);
		NonNativeKeyboard_ActivateSpecificKeyboard_m57CA5350E3ED97C98326C7C2CE8D076B9DE8ABEF(__this, 1, NULL);
		// break;
		goto IL_014d;
	}

IL_0098:
	{
		// MoveCaretLeft();
		NonNativeKeyboard_MoveCaretLeft_m19A39CDF8A297F08A5EF5847F54C38EF1EA38118(__this, NULL);
		// break;
		goto IL_014d;
	}

IL_00a5:
	{
		// MoveCaretRight();
		NonNativeKeyboard_MoveCaretRight_m576E7A105B9F1EEF773D7E6758C18142092C8832(__this, NULL);
		// break;
		goto IL_014d;
	}

IL_00b2:
	{
		// Close();
		NonNativeKeyboard_Close_m591FFB32288294267F119BBF762CFE84B6CAB426(__this, NULL);
		// break;
		goto IL_014d;
	}

IL_00bf:
	{
		// if (dictationSystem == null) { break; }
		RuntimeObject* L_7 = __this->___dictationSystem_40;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_00d0;
		}
	}
	{
		// if (dictationSystem == null) { break; }
		goto IL_014d;
	}

IL_00d0:
	{
		// if (IsMicrophoneActive())
		bool L_9;
		L_9 = NonNativeKeyboard_IsMicrophoneActive_m46C39B0245CD578B664622AC25A44DA57C90EF68(__this, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_00e5;
		}
	}
	{
		// EndDictation();
		NonNativeKeyboard_EndDictation_m85E6360A0A3903A5F27797929AF75F3AC1D62C71(__this, NULL);
		goto IL_00ee;
	}

IL_00e5:
	{
		// BeginDictation();
		NonNativeKeyboard_BeginDictation_m6DE423EC736B777209DE8E1E5E25F132227F6DB2(__this, NULL);
	}

IL_00ee:
	{
		// break;
		goto IL_014d;
	}

IL_00f0:
	{
		// Shift(!m_IsShifted);
		bool L_11 = __this->___m_IsShifted_32;
		NonNativeKeyboard_Shift_m7474B22DFC5484200ADA61FDA8CD8AA69567C274(__this, (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0), NULL);
		// break;
		goto IL_014d;
	}

IL_0103:
	{
		// CapsLock(!m_IsCapslocked);
		bool L_12 = __this->___m_IsCapslocked_33;
		NonNativeKeyboard_CapsLock_m66E1CAEC855197BE60FB6C993EE69CC696CABA52(__this, (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0), NULL);
		// break;
		goto IL_014d;
	}

IL_0116:
	{
		// Space();
		NonNativeKeyboard_Space_m87B1B6D19637EA4E6284EBE63EC9C84E139CD2A2(__this, NULL);
		// break;
		goto IL_014d;
	}

IL_0120:
	{
		// Backspace();
		NonNativeKeyboard_Backspace_m3CE15F40822C674573C2C3BE4238CEF40DF112E4(__this, NULL);
		// break;
		goto IL_014d;
	}

IL_012a:
	{
		// Debug.LogErrorFormat("The {0} key on this keyboard hasn't been assigned a function.", functionKey.name);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650* L_15 = ___functionKey0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral37CF68AD71CDFF0D947143303C6DEA1C27789D9F, L_14, NULL);
		// break;
		goto IL_014d;
	}

IL_0147:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_17 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NonNativeKeyboard_FunctionKey_m819CAD43BB3A16258FE4A9C83A4C57252020AF02_RuntimeMethod_var)));
	}

IL_014d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Backspace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Backspace_m3CE15F40822C674573C2C3BE4238CEF40DF112E4 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (InputField.selectionFocusPosition != InputField.caretPosition || InputField.selectionAnchorPosition != InputField.caretPosition)
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___InputField_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___InputField_12;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_2, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0036;
		}
	}
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_4 = __this->___InputField_12;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93(L_4, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_6 = __this->___InputField_12;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_6, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0037;
	}

IL_0036:
	{
		G_B3_0 = 1;
	}

IL_0037:
	{
		V_0 = (bool)G_B3_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0157;
		}
	}
	{
		// if (InputField.selectionAnchorPosition > InputField.selectionFocusPosition) // right to left
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_9 = __this->___InputField_12;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93(L_9, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_11 = __this->___InputField_12;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E(L_11, NULL);
		V_1 = (bool)((((int32_t)L_10) > ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_00be;
		}
	}
	{
		// InputField.text = InputField.text.Substring(0, InputField.selectionFocusPosition) + InputField.text.Substring(InputField.selectionAnchorPosition);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_14 = __this->___InputField_12;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_15 = __this->___InputField_12;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_15, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_17 = __this->___InputField_12;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E(L_17, NULL);
		NullCheck(L_16);
		String_t* L_19;
		L_19 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_16, 0, L_18, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_20 = __this->___InputField_12;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_20, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_22 = __this->___InputField_12;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93(L_22, NULL);
		NullCheck(L_21);
		String_t* L_24;
		L_24 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_21, L_23, NULL);
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_19, L_24, NULL);
		NullCheck(L_14);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_14, L_25, NULL);
		// InputField.caretPosition = InputField.selectionFocusPosition;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_26 = __this->___InputField_12;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_27 = __this->___InputField_12;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E(L_27, NULL);
		NullCheck(L_26);
		TMP_InputField_set_caretPosition_mD5B0AFA01D9947B7EFC98CD4C4BF927518513FF4(L_26, L_28, NULL);
		goto IL_011f;
	}

IL_00be:
	{
		// InputField.text = InputField.text.Substring(0, InputField.selectionAnchorPosition) + InputField.text.Substring(InputField.selectionFocusPosition);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_29 = __this->___InputField_12;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_30 = __this->___InputField_12;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_30, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_32 = __this->___InputField_12;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93(L_32, NULL);
		NullCheck(L_31);
		String_t* L_34;
		L_34 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_31, 0, L_33, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_35 = __this->___InputField_12;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_35, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_37 = __this->___InputField_12;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E(L_37, NULL);
		NullCheck(L_36);
		String_t* L_39;
		L_39 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_36, L_38, NULL);
		String_t* L_40;
		L_40 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_34, L_39, NULL);
		NullCheck(L_29);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_29, L_40, NULL);
		// InputField.caretPosition = InputField.selectionAnchorPosition;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_41 = __this->___InputField_12;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_42 = __this->___InputField_12;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93(L_42, NULL);
		NullCheck(L_41);
		TMP_InputField_set_caretPosition_mD5B0AFA01D9947B7EFC98CD4C4BF927518513FF4(L_41, L_43, NULL);
	}

IL_011f:
	{
		// m_CaretPosition = InputField.caretPosition;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_44 = __this->___InputField_12;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_44, NULL);
		__this->___m_CaretPosition_34 = L_45;
		// InputField.selectionAnchorPosition = m_CaretPosition;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_46 = __this->___InputField_12;
		int32_t L_47 = __this->___m_CaretPosition_34;
		NullCheck(L_46);
		TMP_InputField_set_selectionAnchorPosition_mB6E72D94EFD7C55EAFA8F8AAC30D255935438B06(L_46, L_47, NULL);
		// InputField.selectionFocusPosition = m_CaretPosition;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_48 = __this->___InputField_12;
		int32_t L_49 = __this->___m_CaretPosition_34;
		NullCheck(L_48);
		TMP_InputField_set_selectionFocusPosition_m862731C1A303D3778E292AB427BC1BEF4407050D(L_48, L_49, NULL);
		goto IL_01b7;
	}

IL_0157:
	{
		// m_CaretPosition = InputField.caretPosition;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_50 = __this->___InputField_12;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_50, NULL);
		__this->___m_CaretPosition_34 = L_51;
		// if (m_CaretPosition > 0)
		int32_t L_52 = __this->___m_CaretPosition_34;
		V_2 = (bool)((((int32_t)L_52) > ((int32_t)0))? 1 : 0);
		bool L_53 = V_2;
		if (!L_53)
		{
			goto IL_01b6;
		}
	}
	{
		// --m_CaretPosition;
		int32_t L_54 = __this->___m_CaretPosition_34;
		__this->___m_CaretPosition_34 = ((int32_t)il2cpp_codegen_subtract(L_54, 1));
		// InputField.text = InputField.text.Remove(m_CaretPosition, 1);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_55 = __this->___InputField_12;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_56 = __this->___InputField_12;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_56, NULL);
		int32_t L_58 = __this->___m_CaretPosition_34;
		NullCheck(L_57);
		String_t* L_59;
		L_59 = String_Remove_m4D7A58E2124F8D0D8AE3EEDE74B6AD6A863ABA68(L_57, L_58, 1, NULL);
		NullCheck(L_55);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_55, L_59, NULL);
		// UpdateCaretPosition(m_CaretPosition);
		int32_t L_60 = __this->___m_CaretPosition_34;
		NonNativeKeyboard_UpdateCaretPosition_m61D86AAC0DB7E78B7FC80E7CE8F48A8A3EDEBD7E(__this, L_60, NULL);
	}

IL_01b6:
	{
	}

IL_01b7:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Previous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Previous_mF0EE6E4E6E63992BE62D37CCCD692142C9A632A7 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnPrevious(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnPrevious_9;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_1 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_0, __this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Next_mE6B844357351259A56EBC741B97C0D85E2C1BB16 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnNext(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___OnNext_10;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_1 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_0, __this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Enter_m93654EEE97560B451CCC1E245198BB94F2C92243 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B3_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	{
		// if (SubmitOnEnter)
		bool L_0 = __this->___SubmitOnEnter_15;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// OnTextSubmitted?.Invoke(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = __this->___OnTextSubmitted_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0018;
		}
	}
	{
		goto IL_0024;
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(G_B3_0);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B3_0, __this, L_4, NULL);
	}

IL_0024:
	{
		// Close();
		NonNativeKeyboard_Close_m591FFB32288294267F119BBF762CFE84B6CAB426(__this, NULL);
		goto IL_008a;
	}

IL_002e:
	{
		// string enterString = "\n";
		V_1 = _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
		// m_CaretPosition = InputField.caretPosition;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_5 = __this->___InputField_12;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_5, NULL);
		__this->___m_CaretPosition_34 = L_6;
		// InputField.text = InputField.text.Insert(m_CaretPosition, enterString);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_7 = __this->___InputField_12;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_8 = __this->___InputField_12;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_8, NULL);
		int32_t L_10 = __this->___m_CaretPosition_34;
		String_t* L_11 = V_1;
		NullCheck(L_9);
		String_t* L_12;
		L_12 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_9, L_10, L_11, NULL);
		NullCheck(L_7);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_7, L_12, NULL);
		// m_CaretPosition += enterString.Length;
		int32_t L_13 = __this->___m_CaretPosition_34;
		String_t* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		__this->___m_CaretPosition_34 = ((int32_t)il2cpp_codegen_add(L_13, L_15));
		// UpdateCaretPosition(m_CaretPosition);
		int32_t L_16 = __this->___m_CaretPosition_34;
		NonNativeKeyboard_UpdateCaretPosition_m61D86AAC0DB7E78B7FC80E7CE8F48A8A3EDEBD7E(__this, L_16, NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Shift(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Shift_m7474B22DFC5484200ADA61FDA8CD8AA69567C274 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, bool ___newShiftState0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// m_IsShifted = newShiftState;
		bool L_0 = ___newShiftState0;
		__this->___m_IsShifted_32 = L_0;
		// OnKeyboardShifted(m_IsShifted);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = __this->___OnKeyboardShifted_29;
		bool L_2 = __this->___m_IsShifted_32;
		NullCheck(L_1);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_1, L_2, NULL);
		// if (m_IsCapslocked && !newShiftState)
		bool L_3 = __this->___m_IsCapslocked_33;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		bool L_4 = ___newShiftState0;
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// m_IsCapslocked = false;
		__this->___m_IsCapslocked_33 = (bool)0;
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::CapsLock(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_CapsLock_m66E1CAEC855197BE60FB6C993EE69CC696CABA52 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, bool ___newCapsLockState0, const RuntimeMethod* method) 
{
	{
		// m_IsCapslocked = newCapsLockState;
		bool L_0 = ___newCapsLockState0;
		__this->___m_IsCapslocked_33 = L_0;
		// Shift(newCapsLockState);
		bool L_1 = ___newCapsLockState0;
		NonNativeKeyboard_Shift_m7474B22DFC5484200ADA61FDA8CD8AA69567C274(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Space()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Space_m87B1B6D19637EA4E6284EBE63EC9C84E139CD2A2 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// m_CaretPosition = InputField.caretPosition;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___InputField_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_0, NULL);
		__this->___m_CaretPosition_34 = L_1;
		// InputField.text = InputField.text.Insert(m_CaretPosition++, " ");
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___InputField_12;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = __this->___InputField_12;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_3, NULL);
		int32_t L_5 = __this->___m_CaretPosition_34;
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->___m_CaretPosition_34 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		NullCheck(L_4);
		String_t* L_8;
		L_8 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_4, L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		NullCheck(L_2);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_2, L_8, NULL);
		// UpdateCaretPosition(m_CaretPosition);
		int32_t L_9 = __this->___m_CaretPosition_34;
		NonNativeKeyboard_UpdateCaretPosition_m61D86AAC0DB7E78B7FC80E7CE8F48A8A3EDEBD7E(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Tab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Tab_mDDC1F3EBA89C5DA83E0F11D114A1F8CD3AB05FDE (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string tabString = "\t";
		V_0 = _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
		// m_CaretPosition = InputField.caretPosition;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___InputField_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_0, NULL);
		__this->___m_CaretPosition_34 = L_1;
		// InputField.text = InputField.text.Insert(m_CaretPosition, tabString);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___InputField_12;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = __this->___InputField_12;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_3, NULL);
		int32_t L_5 = __this->___m_CaretPosition_34;
		String_t* L_6 = V_0;
		NullCheck(L_4);
		String_t* L_7;
		L_7 = String_Insert_mA279E748F06514A6D0B9B680D651D6A6C6BB561A(L_4, L_5, L_6, NULL);
		NullCheck(L_2);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_2, L_7, NULL);
		// m_CaretPosition += tabString.Length;
		int32_t L_8 = __this->___m_CaretPosition_34;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		__this->___m_CaretPosition_34 = ((int32_t)il2cpp_codegen_add(L_8, L_10));
		// UpdateCaretPosition(m_CaretPosition);
		int32_t L_11 = __this->___m_CaretPosition_34;
		NonNativeKeyboard_UpdateCaretPosition_m61D86AAC0DB7E78B7FC80E7CE8F48A8A3EDEBD7E(__this, L_11, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::MoveCaretLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_MoveCaretLeft_m19A39CDF8A297F08A5EF5847F54C38EF1EA38118 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// m_CaretPosition = InputField.caretPosition;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___InputField_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_0, NULL);
		__this->___m_CaretPosition_34 = L_1;
		// if (m_CaretPosition > 0)
		int32_t L_2 = __this->___m_CaretPosition_34;
		V_0 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// --m_CaretPosition;
		int32_t L_4 = __this->___m_CaretPosition_34;
		__this->___m_CaretPosition_34 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		// UpdateCaretPosition(m_CaretPosition);
		int32_t L_5 = __this->___m_CaretPosition_34;
		NonNativeKeyboard_UpdateCaretPosition_m61D86AAC0DB7E78B7FC80E7CE8F48A8A3EDEBD7E(__this, L_5, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::MoveCaretRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_MoveCaretRight_m576E7A105B9F1EEF773D7E6758C18142092C8832 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// m_CaretPosition = InputField.caretPosition;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___InputField_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_0, NULL);
		__this->___m_CaretPosition_34 = L_1;
		// if (m_CaretPosition < InputField.text.Length)
		int32_t L_2 = __this->___m_CaretPosition_34;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = __this->___InputField_12;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		// ++m_CaretPosition;
		int32_t L_7 = __this->___m_CaretPosition_34;
		__this->___m_CaretPosition_34 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// UpdateCaretPosition(m_CaretPosition);
		int32_t L_8 = __this->___m_CaretPosition_34;
		NonNativeKeyboard_UpdateCaretPosition_m61D86AAC0DB7E78B7FC80E7CE8F48A8A3EDEBD7E(__this, L_8, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Close_m591FFB32288294267F119BBF762CFE84B6CAB426 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (IsMicrophoneActive())
		bool L_0;
		L_0 = NonNativeKeyboard_IsMicrophoneActive_m46C39B0245CD578B664622AC25A44DA57C90EF68(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// dictationSystem.StopRecording();
		RuntimeObject* L_2 = __this->___dictationSystem_40;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationSystem::StopRecording() */, IMixedRealityDictationSystem_tDBCC7AC94CAB11538B4E5DABB5EFEA783886B2ED_il2cpp_TypeInfo_var, L_2);
	}

IL_0019:
	{
		// SetMicrophoneDefault();
		NonNativeKeyboard_SetMicrophoneDefault_m93540E2AB92DC448DF1C81EEDC797B38A49D93EB(__this, NULL);
		// OnClosed(this, EventArgs.Empty);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = __this->___OnClosed_8;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_4 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_3);
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_3, __this, L_4, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_Clear_m568E688F899B3DD6046C6D4E7D114E4C469ED18E (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// ResetKeyboardState();
		NonNativeKeyboard_ResetKeyboardState_mA32CBE55864C076BC5F42F3D26E60E9645D78CC6(__this, NULL);
		// if (InputField.caretPosition != 0)
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___InputField_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_0, NULL);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// InputField.MoveTextStart(false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = __this->___InputField_12;
		NullCheck(L_3);
		TMP_InputField_MoveTextStart_m8D0AA8989DE9DB5D0B540343640BFAAA1C0CEC9E(L_3, (bool)0, NULL);
	}

IL_0029:
	{
		// InputField.text = "";
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_4 = __this->___InputField_12;
		NullCheck(L_4);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// m_CaretPosition = InputField.caretPosition;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_5 = __this->___InputField_12;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_5, NULL);
		__this->___m_CaretPosition_34 = L_6;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::SetScaleSizeValues(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_SetScaleSizeValues_mCE43C5AB99CCD7762EB48F618F8A1A806C967E93 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, float ___minScale0, float ___maxScale1, float ___minDistance2, float ___maxDistance3, const RuntimeMethod* method) 
{
	{
		// m_MinScale = minScale;
		float L_0 = ___minScale0;
		__this->___m_MinScale_23 = L_0;
		// m_MaxScale = maxScale;
		float L_1 = ___maxScale1;
		__this->___m_MaxScale_22 = L_1;
		// m_MinDistance = minDistance;
		float L_2 = ___minDistance2;
		__this->___m_MinDistance_25 = L_2;
		// m_MaxDistance = maxDistance;
		float L_3 = ___maxDistance3;
		__this->___m_MaxDistance_24 = L_3;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::ShowAlphaKeyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_ShowAlphaKeyboard_m92ED50635B0D1DDDBC360019EA5BCD54658817F8 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	{
		// AlphaKeyboard.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___AlphaKeyboard_16;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// m_LastKeyboardLayout = LayoutType.Alpha;
		__this->___m_LastKeyboardLayout_21 = 0;
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::TryToShowAlphaSubkeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonNativeKeyboard_TryToShowAlphaSubkeys_mDD02A952D15C627A5924856C049AA3FF26F072E6 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (AlphaKeyboard.IsActive())
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___AlphaKeyboard_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// AlphaSubKeys.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___AlphaSubKeys_18;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// return true;
		V_1 = (bool)1;
		goto IL_002c;
	}

IL_0027:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002c;
	}

IL_002c:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::TryToShowEmailSubkeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonNativeKeyboard_TryToShowEmailSubkeys_m06298528E886871A879935C229B5459501D102A9 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (AlphaKeyboard.IsActive())
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___AlphaKeyboard_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// AlphaMailKeys.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___AlphaMailKeys_20;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// m_LastKeyboardLayout = LayoutType.Email;
		__this->___m_LastKeyboardLayout_21 = 3;
		// return true;
		V_1 = (bool)1;
		goto IL_0033;
	}

IL_002e:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::TryToShowURLSubkeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonNativeKeyboard_TryToShowURLSubkeys_mEB8B1F90CD61650196C584939D3483D89916E52A (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (AlphaKeyboard.IsActive())
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___AlphaKeyboard_16;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// AlphaWebKeys.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___AlphaWebKeys_19;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// m_LastKeyboardLayout = LayoutType.URL;
		__this->___m_LastKeyboardLayout_21 = 2;
		// return true;
		V_1 = (bool)1;
		goto IL_0033;
	}

IL_002e:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::ShowSymbolKeyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_ShowSymbolKeyboard_mB5A493121E86BD6C17B6195ACAB08F3403BCC7D2 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	{
		// SymbolKeyboard.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___SymbolKeyboard_17;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::DisableAllKeyboards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_DisableAllKeyboards_m5BF68C2297C769B88E89D305688806E4339BA4EB (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	{
		// AlphaKeyboard.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___AlphaKeyboard_16;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// SymbolKeyboard.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___SymbolKeyboard_17;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// AlphaWebKeys.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___AlphaWebKeys_19;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// AlphaMailKeys.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___AlphaMailKeys_20;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// AlphaSubKeys.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___AlphaSubKeys_18;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::ResetKeyboardState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_ResetKeyboardState_mA32CBE55864C076BC5F42F3D26E60E9645D78CC6 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	{
		// CapsLock(false);
		NonNativeKeyboard_CapsLock_m66E1CAEC855197BE60FB6C993EE69CC696CABA52(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::IndicateActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_IndicateActivity_mB8DBF54D5B48BB728181FA2B2FA6A4FAD33353B4 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// ResetClosingTime();
		NonNativeKeyboard_ResetClosingTime_m5F371A1B6815B932003E67328EA48C65A82E3AD2(__this, NULL);
		// if (_audioSource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____audioSource_39;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// _audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3;
		L_3 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->____audioSource_39 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_39), (void*)L_3);
	}

IL_0026:
	{
		// if (_audioSource != null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->____audioSource_39;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// _audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->____audioSource_39;
		NullCheck(L_7);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_7, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::ResetClosingTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_ResetClosingTime_m5F371A1B6815B932003E67328EA48C65A82E3AD2 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (CloseOnInactivity)
		bool L_0 = __this->___CloseOnInactivity_26;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// _closingTime = Time.time + CloseOnInactivityTime;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___CloseOnInactivityTime_27;
		__this->____closingTime_28 = ((float)il2cpp_codegen_add(L_2, L_3));
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::CheckForCloseOnInactivityTimeExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard_CheckForCloseOnInactivityTimeExpired_mB21CEE0D01EF95690D31931F97AA382FE97ABF92 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Time.time > _closingTime && CloseOnInactivity)
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->____closingTime_28;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		bool L_2 = __this->___CloseOnInactivity_26;
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		// Close();
		NonNativeKeyboard_Close_m591FFB32288294267F119BBF762CFE84B6CAB426(__this, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboard__ctor_mA7F3EE9CFB9261E2518CD95A9A32ADBB24170248 (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__114_0_m4CF194453244FBFAB5E1BF9CDD48ECC94F227A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__114_1_m8D8FA9034A5BF06BBB169DA96285EB37D8719DA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__114_2_mCC62636AC27CF7D5E02B32EACD169FB781EF50A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__114_3_mE176E1DB59846FDCE6F5A0230E0E5A1C7D6836C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__114_4_m95D0AC1CD1FF6150E1B5406985213469CCD0B45B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__114_5_m34ACFE41B3DB486C9066EF13B7561E4251B0991F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__114_6_m155145E9B4C6164BEEC9B461C6240214E6551A85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__114_7_m4987D42B9B384DD556116220C9057CA3F4B9605D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__114_8_m12D66DDF69FB675C552BF57756B568CD84E931A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B2_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B1_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B4_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B4_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B3_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B3_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B6_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B6_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B5_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B5_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B8_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B8_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B7_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B7_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B10_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B10_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B9_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B9_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B12_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B12_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B11_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B11_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B14_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B14_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B13_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B13_1 = NULL;
	Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* G_B16_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B16_1 = NULL;
	Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* G_B15_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B15_1 = NULL;
	Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* G_B18_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B18_1 = NULL;
	Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* G_B17_0 = NULL;
	NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* G_B17_1 = NULL;
	{
		// public event EventHandler OnTextSubmitted = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_0_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* L_2 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__114_0_m4CF194453244FBFAB5E1BF9CDD48ECC94F227A8C_RuntimeMethod_var), NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_4 = L_3;
		((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		G_B2_1->___OnTextSubmitted_6 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___OnTextSubmitted_6), (void*)G_B2_0);
		// public event Action<string> OnTextUpdated = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_1_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = __this;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = __this;
			goto IL_0045;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* L_7 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__114_1_m8D8FA9034A5BF06BBB169DA96285EB37D8719DA2_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = L_8;
		((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_1_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_1_2), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_0045:
	{
		NullCheck(G_B4_1);
		G_B4_1->___OnTextUpdated_7 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___OnTextUpdated_7), (void*)G_B4_0);
		// public event EventHandler OnClosed = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_2_3;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_11 = L_10;
		G_B5_0 = L_11;
		G_B5_1 = __this;
		if (L_11)
		{
			G_B6_0 = L_11;
			G_B6_1 = __this;
			goto IL_006a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* L_12 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_13 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__114_2_mCC62636AC27CF7D5E02B32EACD169FB781EF50A5_RuntimeMethod_var), NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_14 = L_13;
		((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_2_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_2_3), (void*)L_14);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_1;
	}

IL_006a:
	{
		NullCheck(G_B6_1);
		G_B6_1->___OnClosed_8 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___OnClosed_8), (void*)G_B6_0);
		// public event EventHandler OnPrevious = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_15 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_3_4;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_16 = L_15;
		G_B7_0 = L_16;
		G_B7_1 = __this;
		if (L_16)
		{
			G_B8_0 = L_16;
			G_B8_1 = __this;
			goto IL_008f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* L_17 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_18 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__114_3_mE176E1DB59846FDCE6F5A0230E0E5A1C7D6836C1_RuntimeMethod_var), NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_19 = L_18;
		((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_3_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_3_4), (void*)L_19);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_008f:
	{
		NullCheck(G_B8_1);
		G_B8_1->___OnPrevious_9 = G_B8_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->___OnPrevious_9), (void*)G_B8_0);
		// public event EventHandler OnNext = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_20 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_4_5;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_21 = L_20;
		G_B9_0 = L_21;
		G_B9_1 = __this;
		if (L_21)
		{
			G_B10_0 = L_21;
			G_B10_1 = __this;
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* L_22 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_23 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_23, L_22, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__114_4_m95D0AC1CD1FF6150E1B5406985213469CCD0B45B_RuntimeMethod_var), NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_24 = L_23;
		((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_4_5 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_4_5), (void*)L_24);
		G_B10_0 = L_24;
		G_B10_1 = G_B9_1;
	}

IL_00b4:
	{
		NullCheck(G_B10_1);
		G_B10_1->___OnNext_10 = G_B10_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B10_1->___OnNext_10), (void*)G_B10_0);
		// public event EventHandler OnPlacement = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_25 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_5_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_26 = L_25;
		G_B11_0 = L_26;
		G_B11_1 = __this;
		if (L_26)
		{
			G_B12_0 = L_26;
			G_B12_1 = __this;
			goto IL_00d9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* L_27 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_28 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_28, L_27, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__114_5_m34ACFE41B3DB486C9066EF13B7561E4251B0991F_RuntimeMethod_var), NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_29 = L_28;
		((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_5_6 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_5_6), (void*)L_29);
		G_B12_0 = L_29;
		G_B12_1 = G_B11_1;
	}

IL_00d9:
	{
		NullCheck(G_B12_1);
		G_B12_1->___OnPlacement_11 = G_B12_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B12_1->___OnPlacement_11), (void*)G_B12_0);
		// public TMP_InputField InputField = null;
		__this->___InputField_12 = (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___InputField_12), (void*)(TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F*)NULL);
		// public AxisSlider InputFieldSlide = null;
		__this->___InputFieldSlide_13 = (AxisSlider_t9B9EB1EB26C01CD907BB9CEFF226C39E03038C65*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___InputFieldSlide_13), (void*)(AxisSlider_t9B9EB1EB26C01CD907BB9CEFF226C39E03038C65*)NULL);
		// public bool SliderEnabled = true;
		__this->___SliderEnabled_14 = (bool)1;
		// public bool SubmitOnEnter = true;
		__this->___SubmitOnEnter_15 = (bool)1;
		// public Image AlphaKeyboard = null;
		__this->___AlphaKeyboard_16 = (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AlphaKeyboard_16), (void*)(Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL);
		// public Image SymbolKeyboard = null;
		__this->___SymbolKeyboard_17 = (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SymbolKeyboard_17), (void*)(Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL);
		// public Image AlphaSubKeys = null;
		__this->___AlphaSubKeys_18 = (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AlphaSubKeys_18), (void*)(Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL);
		// public Image AlphaWebKeys = null;
		__this->___AlphaWebKeys_19 = (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AlphaWebKeys_19), (void*)(Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL);
		// public Image AlphaMailKeys = null;
		__this->___AlphaMailKeys_20 = (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AlphaMailKeys_20), (void*)(Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL);
		// private LayoutType m_LastKeyboardLayout = LayoutType.Alpha;
		__this->___m_LastKeyboardLayout_21 = 0;
		// private float m_MaxScale = 1.0f;
		__this->___m_MaxScale_22 = (1.0f);
		// private float m_MinScale = 1.0f;
		__this->___m_MinScale_23 = (1.0f);
		// private float m_MaxDistance = 3.5f;
		__this->___m_MaxDistance_24 = (3.5f);
		// private float m_MinDistance = 0.25f;
		__this->___m_MinDistance_25 = (0.25f);
		// public bool CloseOnInactivity = true;
		__this->___CloseOnInactivity_26 = (bool)1;
		// public float CloseOnInactivityTime = 15;
		__this->___CloseOnInactivityTime_27 = (15.0f);
		// public event Action<bool> OnKeyboardShifted = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_30 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_6_7;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_31 = L_30;
		G_B13_0 = L_31;
		G_B13_1 = __this;
		if (L_31)
		{
			G_B14_0 = L_31;
			G_B14_1 = __this;
			goto IL_0182;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* L_32 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_33 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_33, L_32, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__114_6_m155145E9B4C6164BEEC9B461C6240214E6551A85_RuntimeMethod_var), NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_34 = L_33;
		((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_6_7 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_6_7), (void*)L_34);
		G_B14_0 = L_34;
		G_B14_1 = G_B13_1;
	}

IL_0182:
	{
		NullCheck(G_B14_1);
		G_B14_1->___OnKeyboardShifted_29 = G_B14_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B14_1->___OnKeyboardShifted_29), (void*)G_B14_0);
		// public event Action<KeyboardValueKey> OnKeyboardValueKeyPressed = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_35 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_7_8;
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_36 = L_35;
		G_B15_0 = L_36;
		G_B15_1 = __this;
		if (L_36)
		{
			G_B16_0 = L_36;
			G_B16_1 = __this;
			goto IL_01a7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* L_37 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_38 = (Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2*)il2cpp_codegen_object_new(Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Action_1__ctor_m875422328909B5CE80EE81952A62F01E922D143B(L_38, L_37, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__114_7_m4987D42B9B384DD556116220C9057CA3F4B9605D_RuntimeMethod_var), NULL);
		Action_1_t7696B3085ECF2F0663383D6950A250C9454273E2* L_39 = L_38;
		((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_7_8 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_7_8), (void*)L_39);
		G_B16_0 = L_39;
		G_B16_1 = G_B15_1;
	}

IL_01a7:
	{
		NullCheck(G_B16_1);
		G_B16_1->___OnKeyboardValueKeyPressed_30 = G_B16_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B16_1->___OnKeyboardValueKeyPressed_30), (void*)G_B16_0);
		// public event Action<KeyboardKeyFunc> OnKeyboardFunctionKeyPressed = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_40 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_8_9;
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_41 = L_40;
		G_B17_0 = L_41;
		G_B17_1 = __this;
		if (L_41)
		{
			G_B18_0 = L_41;
			G_B18_1 = __this;
			goto IL_01cc;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* L_42 = ((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_43 = (Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF*)il2cpp_codegen_object_new(Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		Action_1__ctor_m15B49F3F1131EEC40B16EC3904BC45D340B57450(L_43, L_42, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__114_8_m12D66DDF69FB675C552BF57756B568CD84E931A4_RuntimeMethod_var), NULL);
		Action_1_t4658079A8BB5DDF2471CC01D07389EBA23AE71DF* L_44 = L_43;
		((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_8_9 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9__114_8_9), (void*)L_44);
		G_B18_0 = L_44;
		G_B18_1 = G_B17_1;
	}

IL_01cc:
	{
		NullCheck(G_B18_1);
		G_B18_1->___OnKeyboardFunctionKeyPressed_31 = G_B18_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B18_1->___OnKeyboardFunctionKeyPressed_31), (void*)G_B18_0);
		// private bool m_IsShifted = false;
		__this->___m_IsShifted_32 = (bool)0;
		// private bool m_IsCapslocked = false;
		__this->___m_IsCapslocked_33 = (bool)0;
		// private int m_CaretPosition = 0;
		__this->___m_CaretPosition_34 = 0;
		// private Vector3 m_StartingScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___m_StartingScale_35 = L_45;
		InputSystemGlobalHandlerListener__ctor_m37CE5624B20B61C3066C8E6630411C2C6AE15EC0(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE7057B62CD4098BE9854815527AAE5621DC18706 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* L_0 = (U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1*)il2cpp_codegen_object_new(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5B30EEA08743DADFF4314C38A67571CF22854F70(L_0, NULL);
		((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5B30EEA08743DADFF4314C38A67571CF22854F70 (U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<.ctor>b__114_0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__114_0_m4CF194453244FBFAB5E1BF9CDD48ECC94F227A8C (U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* __this, RuntimeObject* ___U3Cp0U3E0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___U3Cp1U3E1, const RuntimeMethod* method) 
{
	{
		// public event EventHandler OnTextSubmitted = delegate { };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<.ctor>b__114_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__114_1_m8D8FA9034A5BF06BBB169DA96285EB37D8719DA2 (U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* __this, String_t* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public event Action<string> OnTextUpdated = delegate { };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<.ctor>b__114_2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__114_2_mCC62636AC27CF7D5E02B32EACD169FB781EF50A5 (U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* __this, RuntimeObject* ___U3Cp0U3E0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___U3Cp1U3E1, const RuntimeMethod* method) 
{
	{
		// public event EventHandler OnClosed = delegate { };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<.ctor>b__114_3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__114_3_mE176E1DB59846FDCE6F5A0230E0E5A1C7D6836C1 (U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* __this, RuntimeObject* ___U3Cp0U3E0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___U3Cp1U3E1, const RuntimeMethod* method) 
{
	{
		// public event EventHandler OnPrevious = delegate { };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<.ctor>b__114_4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__114_4_m95D0AC1CD1FF6150E1B5406985213469CCD0B45B (U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* __this, RuntimeObject* ___U3Cp0U3E0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___U3Cp1U3E1, const RuntimeMethod* method) 
{
	{
		// public event EventHandler OnNext = delegate { };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<.ctor>b__114_5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__114_5_m34ACFE41B3DB486C9066EF13B7561E4251B0991F (U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* __this, RuntimeObject* ___U3Cp0U3E0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___U3Cp1U3E1, const RuntimeMethod* method) 
{
	{
		// public event EventHandler OnPlacement = delegate { };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<.ctor>b__114_6(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__114_6_m155145E9B4C6164BEEC9B461C6240214E6551A85 (U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* __this, bool ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public event Action<bool> OnKeyboardShifted = delegate { };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<.ctor>b__114_7(Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardValueKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__114_7_m4987D42B9B384DD556116220C9057CA3F4B9605D (U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* __this, KeyboardValueKey_tB79CC3272F57425B9E8F2106FE9A8919C21DC2E8* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public event Action<KeyboardValueKey> OnKeyboardValueKeyPressed = delegate { };
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboard/<>c::<.ctor>b__114_8(Microsoft.MixedReality.Toolkit.Experimental.UI.KeyboardKeyFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__114_8_m12D66DDF69FB675C552BF57756B568CD84E931A4 (U3CU3Ec_tF26E6523456D474945BDE14046B9E957A99DA1F1* __this, KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650* ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// public event Action<KeyboardKeyFunc> OnKeyboardFunctionKeyPressed = delegate { };
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboardTouchAssistant::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboardTouchAssistant_Start_m3C29FBD6AC93E0C57F1F8697F458598E9698F04F (NonNativeKeyboardTouchAssistant_tEF050E77FC0C666D639BA57E535D757D9DA05D64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityCapabilityCheck_t89E15A80CA84BBA26759BE2D8A2720CD26534921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (CoreServices.InputSystem is IMixedRealityCapabilityCheck capabilityChecker && capabilityChecker.CheckCapability(MixedRealityCapability.ArticulatedHand))
		il2cpp_codegen_runtime_class_init_inline(CoreServices_tCB1FB80E338B89BCA07C52C15B876BC6D4B3439B_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_InputSystem_m09CC5207090321051B3C092D5BA21F2858DCD607(NULL);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IMixedRealityCapabilityCheck_t89E15A80CA84BBA26759BE2D8A2720CD26534921_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.IMixedRealityCapabilityCheck::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability) */, IMixedRealityCapabilityCheck_t89E15A80CA84BBA26759BE2D8A2720CD26534921_il2cpp_TypeInfo_var, L_2, 0);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// EnableTouch();
		NonNativeKeyboardTouchAssistant_EnableTouch_mF58E773C3352137A309604F110075CE4304CF805(__this, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboardTouchAssistant::EnableTouch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboardTouchAssistant_EnableTouch_mF58E773C3352137A309604F110075CE4304CF805 (NonNativeKeyboardTouchAssistant_tEF050E77FC0C666D639BA57E535D757D9DA05D64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentExtensions_EnsureComponent_TisNearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_mBA9D2EC172F2F8D05C7AE587FABE79AA897A24B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m9D6A1A9F3E8724B2D2697E023F359FD37A015744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonNativeKeyboardTouchAssistant_PlayClick_m8769653F9710C9CA484539E16813640809A239C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* V_0 = NULL;
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* V_1 = NULL;
	int32_t V_2 = 0;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_3 = NULL;
	NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D* V_4 = NULL;
	{
		// clickSoundPlayer = gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_0, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		__this->___clickSoundPlayer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickSoundPlayer_5), (void*)L_1);
		// clickSoundPlayer.playOnAwake = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___clickSoundPlayer_5;
		NullCheck(L_2);
		AudioSource_set_playOnAwake_m7EACC6ECEF12D7BA86A4E5A53603F1C8F9E11949(L_2, (bool)0, NULL);
		// clickSoundPlayer.spatialize = true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___clickSoundPlayer_5;
		NullCheck(L_3);
		AudioSource_set_spatialize_mDFA357EDCB0C59EF11F53C845F7ACBF6BF7F7B3C(L_3, (bool)1, NULL);
		// clickSoundPlayer.clip = clickSound;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___clickSoundPlayer_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___clickSound_4;
		NullCheck(L_4);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_4, L_5, NULL);
		// var buttons = GetComponentsInChildren<Button>();
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_6;
		L_6 = Component_GetComponentsInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m9D6A1A9F3E8724B2D2697E023F359FD37A015744(__this, Component_GetComponentsInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m9D6A1A9F3E8724B2D2697E023F359FD37A015744_RuntimeMethod_var);
		V_0 = L_6;
		// foreach (var button in buttons)
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_7 = V_0;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0084;
	}

IL_004c:
	{
		// foreach (var button in buttons)
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		// var ni = button.gameObject.EnsureComponent<NearInteractionTouchableUnityUI>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = V_3;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D* L_14;
		L_14 = ComponentExtensions_EnsureComponent_TisNearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_mBA9D2EC172F2F8D05C7AE587FABE79AA897A24B6(L_13, ComponentExtensions_EnsureComponent_TisNearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D_mBA9D2EC172F2F8D05C7AE587FABE79AA897A24B6_RuntimeMethod_var);
		V_4 = L_14;
		// ni.EventsToReceive = TouchableEventType.Pointer;
		NearInteractionTouchableUnityUI_t86123ECF22EE6D42187517CE7BCFD29236742C5D* L_15 = V_4;
		NullCheck(L_15);
		BaseNearInteractionTouchable_set_EventsToReceive_m860635144CCD9EA8D720B439FF856866DDDDFDA5_inline(L_15, 1, NULL);
		// button.onClick.AddListener(PlayClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = V_3;
		NullCheck(L_16);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_17;
		L_17 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_16, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_18 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_18, __this, (intptr_t)((void*)NonNativeKeyboardTouchAssistant_PlayClick_m8769653F9710C9CA484539E16813640809A239C3_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_17, L_18, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0084:
	{
		// foreach (var button in buttons)
		int32_t L_20 = V_2;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_004c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboardTouchAssistant::PlayClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboardTouchAssistant_PlayClick_m8769653F9710C9CA484539E16813640809A239C3 (NonNativeKeyboardTouchAssistant_tEF050E77FC0C666D639BA57E535D757D9DA05D64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (clickSound != null)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->___clickSound_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// clickSoundPlayer.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___clickSoundPlayer_5;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.NonNativeKeyboardTouchAssistant::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonNativeKeyboardTouchAssistant__ctor_m6C71CB741F98359A6E677BDC76A617F9CBAABADD (NonNativeKeyboardTouchAssistant_tEF050E77FC0C666D639BA57E535D757D9DA05D64* __this, const RuntimeMethod* method) 
{
	{
		// private AudioClip clickSound = null;
		__this->___clickSound_4 = (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickSound_4), (void*)(AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.SliderInputField::OnDeselect(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderInputField_OnDeselect_m90FC4ABBF73BB21189C129888611E0C15A5289B3 (SliderInputField_tF7097DACBE7331DA2538006C3B358DFBB9B8C15D* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.SliderInputField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderInputField__ctor_mF61DE49282A4EEFA96DE79171F84EE9173F73C6B (SliderInputField_tF7097DACBE7331DA2538006C3B358DFBB9B8C15D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_il2cpp_TypeInfo_var);
		TMP_InputField__ctor_m6C5321A190D58235E29A17D7EE17D249D210A07B(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolDisableHighlight::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymbolDisableHighlight_Start_m665FC7464E9B0F57F99FEED4DD8BF9EF5A7B7F32 (SymbolDisableHighlight_t3D178164EBA7C2346B34458052667F8AF333665C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mF89FC4234D3EF3D85C22E0C34623DD0F955A645B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_TextField != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_TextField_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// m_StartingColor = m_TextField.color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___m_TextField_4;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_3);
		__this->___m_StartingColor_7 = L_4;
	}

IL_0024:
	{
		// if (m_ImageField != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___m_ImageField_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// m_StartingColor = m_ImageField.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___m_ImageField_5;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		__this->___m_StartingColor_7 = L_9;
	}

IL_0047:
	{
		// m_Button = GetComponentInParent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10;
		L_10 = Component_GetComponentInParent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mF89FC4234D3EF3D85C22E0C34623DD0F955A645B(__this, Component_GetComponentInParent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mF89FC4234D3EF3D85C22E0C34623DD0F955A645B_RuntimeMethod_var);
		__this->___m_Button_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Button_8), (void*)L_10);
		// UpdateState();
		SymbolDisableHighlight_UpdateState_mB3747EE98ECE43C95622F80FE631C4DEAF2EF158(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolDisableHighlight::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymbolDisableHighlight_Update_m27CC67FEF92E3DDCE33B71565BBAABB08E08B612 (SymbolDisableHighlight_t3D178164EBA7C2346B34458052667F8AF333665C* __this, const RuntimeMethod* method) 
{
	{
		// UpdateState();
		SymbolDisableHighlight_UpdateState_mB3747EE98ECE43C95622F80FE631C4DEAF2EF158(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolDisableHighlight::UpdateState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymbolDisableHighlight_UpdateState_mB3747EE98ECE43C95622F80FE631C4DEAF2EF158 (SymbolDisableHighlight_t3D178164EBA7C2346B34458052667F8AF333665C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_1 = NULL;
	int32_t G_B11_0 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B14_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B13_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B15_1 = NULL;
	{
		// if (m_TextField != null && m_Button != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___m_TextField_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___m_Button_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// m_TextField.color = m_Button.interactable ? m_StartingColor : m_DisabledColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___m_TextField_4;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___m_Button_8;
		NullCheck(L_6);
		bool L_7;
		L_7 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112(L_6, NULL);
		G_B5_0 = L_5;
		if (L_7)
		{
			G_B6_0 = L_5;
			goto IL_003e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___m_DisabledColor_6;
		G_B7_0 = L_8;
		G_B7_1 = G_B5_0;
		goto IL_0044;
	}

IL_003e:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___m_StartingColor_7;
		G_B7_0 = L_9;
		G_B7_1 = G_B6_0;
	}

IL_0044:
	{
		NullCheck(G_B7_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B7_1, G_B7_0);
	}

IL_004b:
	{
		// if (m_ImageField != null && m_Button != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___m_ImageField_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0067;
		}
	}
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___m_Button_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B11_0 = ((int32_t)(L_13));
		goto IL_0068;
	}

IL_0067:
	{
		G_B11_0 = 0;
	}

IL_0068:
	{
		V_1 = (bool)G_B11_0;
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0095;
		}
	}
	{
		// m_ImageField.color = m_Button.interactable ? m_StartingColor : m_DisabledColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___m_ImageField_5;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___m_Button_8;
		NullCheck(L_16);
		bool L_17;
		L_17 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112(L_16, NULL);
		G_B13_0 = L_15;
		if (L_17)
		{
			G_B14_0 = L_15;
			goto IL_0088;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = __this->___m_DisabledColor_6;
		G_B15_0 = L_18;
		G_B15_1 = G_B13_0;
		goto IL_008e;
	}

IL_0088:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = __this->___m_StartingColor_7;
		G_B15_0 = L_19;
		G_B15_1 = G_B14_0;
	}

IL_008e:
	{
		NullCheck(G_B15_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B15_1, G_B15_0);
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolDisableHighlight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymbolDisableHighlight__ctor_m0EA2231AE78C660E8AFCD43B0D47E911ABBCD450 (SymbolDisableHighlight_t3D178164EBA7C2346B34458052667F8AF333665C* __this, const RuntimeMethod* method) 
{
	{
		// private Text m_TextField = null;
		__this->___m_TextField_4 = (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TextField_4), (void*)(Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)NULL);
		// private Image m_ImageField = null;
		__this->___m_ImageField_5 = (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ImageField_5), (void*)(Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL);
		// private Color m_DisabledColor = Color.grey;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline(NULL);
		__this->___m_DisabledColor_6 = L_0;
		// private Color m_StartingColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___m_StartingColor_7 = L_1;
		// private Button m_Button = null;
		__this->___m_Button_8 = (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Button_8), (void*)(Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolKeyboard::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymbolKeyboard_Update_mB14421BE9E12265F73F1BD38104F2B0653C7D412 (SymbolKeyboard_tC38EC965DA87C01BE6111478C5FA2F7F07FEA9A5* __this, const RuntimeMethod* method) 
{
	{
		// m_PageBck.interactable = NonNativeKeyboard.Instance.IsShifted;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___m_PageBck_4;
		NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* L_1;
		L_1 = NonNativeKeyboard_get_Instance_mE2298AEF4256881EF216DC07D471DEDCA7622FDE_inline(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = NonNativeKeyboard_get_IsShifted_m92FCEA8BD1E2F6B4CFC82A446959FDC61B1E82D8(L_1, NULL);
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, L_2, NULL);
		// m_PageFwd.interactable = !NonNativeKeyboard.Instance.IsShifted;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___m_PageFwd_5;
		NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* L_4;
		L_4 = NonNativeKeyboard_get_Instance_mE2298AEF4256881EF216DC07D471DEDCA7622FDE_inline(NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = NonNativeKeyboard_get_IsShifted_m92FCEA8BD1E2F6B4CFC82A446959FDC61B1E82D8(L_4, NULL);
		NullCheck(L_3);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_3, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.SymbolKeyboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SymbolKeyboard__ctor_m1C8A3967A930763A89D8C8AAF74247B665AC50DA (SymbolKeyboard_tC38EC965DA87C01BE6111478C5FA2F7F07FEA9A5* __this, const RuntimeMethod* method) 
{
	{
		// private UnityEngine.UI.Button m_PageBck = null;
		__this->___m_PageBck_4 = (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PageBck_4), (void*)(Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)NULL);
		// private UnityEngine.UI.Button m_PageFwd = null;
		__this->___m_PageFwd_5 = (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PageFwd_5), (void*)(Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::get_MaxWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UICollection_get_MaxWidth_m4B8C1BE1562C8B00109FA8EF5DCB5412DBFED59D (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) 
{
	{
		// get => maxWidth;
		float L_0 = __this->___maxWidth_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::set_MaxWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_set_MaxWidth_mE80E2426328CDC1766A8D4E7C4AA97A1FA56D59B (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => maxWidth = value;
		float L_0 = ___value0;
		__this->___maxWidth_4 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::get_MaxHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UICollection_get_MaxHeight_m675E06FBD90918D0242E8510E8B3A0E7060A6976 (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) 
{
	{
		// get => maxHeight;
		float L_0 = __this->___maxHeight_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::set_MaxHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_set_MaxHeight_m270337B9407C26D151DA204CA107587B4009B5F9 (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => maxHeight = value;
		float L_0 = ___value0;
		__this->___maxHeight_5 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::get_HorizontalSpacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UICollection_get_HorizontalSpacing_m609FD8F9455B7DD8F130D7F54531202349C22F43 (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) 
{
	{
		// get => horizontalSpacing;
		float L_0 = __this->___horizontalSpacing_6;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::set_HorizontalSpacing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_set_HorizontalSpacing_m686D53743FF24CD3C7538157244FB5DE161E8B60 (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => horizontalSpacing = value;
		float L_0 = ___value0;
		__this->___horizontalSpacing_6 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::get_VerticalSpacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UICollection_get_VerticalSpacing_m13EF46197C2B7329C3B3177BAE30F7FEE7776FB6 (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) 
{
	{
		// get => verticalSpacing;
		float L_0 = __this->___verticalSpacing_7;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::set_VerticalSpacing(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_set_VerticalSpacing_m14C846EAF0ACA229921E13EC9A53DCFF5D43F1FB (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => verticalSpacing = value;
		float L_0 = ___value0;
		__this->___verticalSpacing_7 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.RectTransform> Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::get_Items()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30 (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) 
{
	{
		// public List<RectTransform> Items { get; private set; }
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_0 = __this->___U3CItemsU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::set_Items(System.Collections.Generic.List`1<UnityEngine.RectTransform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_set_Items_m57B1555B32F4E859F3C17BC93E50B0B4DB2BCB7E (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<RectTransform> Items { get; private set; }
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_0 = ___value0;
		__this->___U3CItemsU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CItemsU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_Awake_m984562C76B64DD3FF2F5C4B0996D07915B452FF7 (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7EA27CAC733DD95AC0AFB56293AECABB0EA34475_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Items = new List<RectTransform>();
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_0 = (List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B*)il2cpp_codegen_object_new(List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7EA27CAC733DD95AC0AFB56293AECABB0EA34475(L_0, List_1__ctor_m7EA27CAC733DD95AC0AFB56293AECABB0EA34475_RuntimeMethod_var);
		UICollection_set_Items_m57B1555B32F4E859F3C17BC93E50B0B4DB2BCB7E_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_Start_mA657000CA7EB68A3E500878E13BD707FE1F3914B (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___rectTransform_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTransform_9), (void*)L_0);
		// if (!Application.isEditor) { return; }
		bool L_1;
		L_1 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// if (!Application.isEditor) { return; }
		goto IL_002a;
	}

IL_001c:
	{
		// CollectItems();
		UICollection_CollectItems_m2A6CE875DEE4593D417A000BA1BD2A3A88189987(__this, NULL);
		// UpdateLayout();
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::UpdateLayout() */, __this);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_Update_m600B43F3F1EB4751FBF29C467849D23D035779B8 (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (!Application.isEditor) { return; }
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (!Application.isEditor) { return; }
		goto IL_001e;
	}

IL_0010:
	{
		// CollectItems();
		UICollection_CollectItems_m2A6CE875DEE4593D417A000BA1BD2A3A88189987(__this, NULL);
		// UpdateLayout();
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::UpdateLayout() */, __this);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::AddItem(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_AddItem_m005A3233F6BCAB80ED6A85AA11871CC20F9CB8FE (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1B3281E84BCDC45DAA2A744E167AC2065A753F0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Items.Add(item);
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_0;
		L_0 = UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline(__this, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___item0;
		NullCheck(L_0);
		List_1_Add_m1B3281E84BCDC45DAA2A744E167AC2065A753F0E_inline(L_0, L_1, List_1_Add_m1B3281E84BCDC45DAA2A744E167AC2065A753F0E_RuntimeMethod_var);
		// item.SetParent(transform);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___item0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_2, L_3, NULL);
		// item.transform.localScale = Vector3.one;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___item0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_6, NULL);
		// item.position = Vector3.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = ___item0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_8, NULL);
		// item.anchoredPosition3D = Vector3.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = ___item0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_9);
		RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4(L_9, L_10, NULL);
		// UpdateLayout();
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::UpdateLayout() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::RemoveItem(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_RemoveItem_m9443BF7F0A4B4F6F2DB000FADA949E25C1A87E66 (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mFB320CE38ADF699E608E47F454402EDB77BC37CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Items.Remove(item);
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_0;
		L_0 = UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline(__this, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ___item0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mFB320CE38ADF699E608E47F454402EDB77BC37CE(L_0, L_1, List_1_Remove_mFB320CE38ADF699E608E47F454402EDB77BC37CE_RuntimeMethod_var);
		// UpdateLayout();
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::UpdateLayout() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::RemoveAllItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_RemoveAllItems_m770D9FC5360CA66306677C8BB1B5576BD50AB227 (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m093B5A8906C4F9A0DD98022561BB1EAFC518CBE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Items.Clear();
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_0;
		L_0 = UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline(__this, NULL);
		NullCheck(L_0);
		List_1_Clear_m093B5A8906C4F9A0DD98022561BB1EAFC518CBE3_inline(L_0, List_1_Clear_m093B5A8906C4F9A0DD98022561BB1EAFC518CBE3_RuntimeMethod_var);
		// UpdateLayout();
		VirtualActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::UpdateLayout() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::CollectItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_CollectItems_m2A6CE875DEE4593D417A000BA1BD2A3A88189987 (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m093B5A8906C4F9A0DD98022561BB1EAFC518CBE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	{
		// Items.Clear();
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_0;
		L_0 = UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline(__this, NULL);
		NullCheck(L_0);
		List_1_Clear_m093B5A8906C4F9A0DD98022561BB1EAFC518CBE3_inline(L_0, List_1_Clear_m093B5A8906C4F9A0DD98022561BB1EAFC518CBE3_RuntimeMethod_var);
		// foreach (Transform childTransform in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_4;
					if (!L_4)
					{
						goto IL_0064;
					}
				}
				{
					RuntimeObject* L_5 = V_4;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0064:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0046_1;
			}

IL_001c_1:
			{
				// foreach (Transform childTransform in transform)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// RectTransform childRect = childTransform.GetComponent<RectTransform>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_1;
				NullCheck(L_8);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
				L_9 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_8, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
				V_2 = L_9;
				// if (childRect != null)
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_11;
				L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_3 = L_11;
				bool L_12 = V_3;
				if (!L_12)
				{
					goto IL_0045_1;
				}
			}
			{
				// AddItem(childRect);
				RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = V_2;
				UICollection_AddItem_m005A3233F6BCAB80ED6A85AA11871CC20F9CB8FE(__this, L_13, NULL);
			}

IL_0045_1:
			{
			}

IL_0046_1:
			{
				// foreach (Transform childTransform in transform)
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::UpdateLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection_UpdateLayout_m39EC7A0AF30416D92DCFF49A20EBB246D74AB973 (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2F707E98BABA1F4794BF2B315168A109B80B2921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	float G_B16_0 = 0.0f;
	float G_B19_0 = 0.0f;
	{
		// Rect rect = rectTransform.rect;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___rectTransform_9;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_0 = L_1;
		// Vector2 updatedSize = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_1 = L_2;
		// if (maxWidth < 0.0f)
		float L_3 = __this->___maxWidth_4;
		V_8 = (bool)((((float)L_3) < ((float)(0.0f)))? 1 : 0);
		bool L_4 = V_8;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// updatedSize.x = rect.width;
		float L_5;
		L_5 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		(&V_1)->___x_0 = L_5;
		goto IL_0047;
	}

IL_0038:
	{
		// updatedSize.x = maxWidth;
		float L_6 = __this->___maxWidth_4;
		(&V_1)->___x_0 = L_6;
	}

IL_0047:
	{
		// if (maxHeight < 0.0f)
		float L_7 = __this->___maxHeight_5;
		V_9 = (bool)((((float)L_7) < ((float)(0.0f)))? 1 : 0);
		bool L_8 = V_9;
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		// updatedSize.y = rect.height;
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		(&V_1)->___y_1 = L_9;
		goto IL_007b;
	}

IL_006c:
	{
		// updatedSize.y = maxHeight;
		float L_10 = __this->___maxHeight_5;
		(&V_1)->___y_1 = L_10;
	}

IL_007b:
	{
		// Vector2 currentOffset = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_2 = L_11;
		// Vector2 anchorVec = Vector2.up;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		V_3 = L_12;
		// float columnHeight = 0.0f;
		V_4 = (0.0f);
		// float maxPanelWidth = 0.0f;
		V_5 = (0.0f);
		// for (int i = 0; i < Items.Count; i++)
		V_10 = 0;
		goto IL_0212;
	}

IL_009d:
	{
		// Items[i].anchorMin = anchorVec;
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_13;
		L_13 = UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline(__this, NULL);
		int32_t L_14 = V_10;
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15;
		L_15 = List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB(L_13, L_14, List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_3;
		NullCheck(L_15);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_15, L_16, NULL);
		// Items[i].anchorMax = anchorVec;
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_17;
		L_17 = UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline(__this, NULL);
		int32_t L_18 = V_10;
		NullCheck(L_17);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19;
		L_19 = List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB(L_17, L_18, List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_3;
		NullCheck(L_19);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_19, L_20, NULL);
		// Items[i].pivot = anchorVec;
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_21;
		L_21 = UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline(__this, NULL);
		int32_t L_22 = V_10;
		NullCheck(L_21);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23;
		L_23 = List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB(L_21, L_22, List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_3;
		NullCheck(L_23);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_23, L_24, NULL);
		// columnHeight = Mathf.Max(Items[i].rect.height, columnHeight);
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_25;
		L_25 = UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline(__this, NULL);
		int32_t L_26 = V_10;
		NullCheck(L_25);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27;
		L_27 = List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB(L_25, L_26, List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB_RuntimeMethod_var);
		NullCheck(L_27);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_28;
		L_28 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_27, NULL);
		V_11 = L_28;
		float L_29;
		L_29 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_11), NULL);
		float L_30 = V_4;
		float L_31;
		L_31 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_29, L_30, NULL);
		V_4 = L_31;
		// if (Items[i].rect.width + currentOffset.x > updatedSize.x)
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_32;
		L_32 = UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline(__this, NULL);
		int32_t L_33 = V_10;
		NullCheck(L_32);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_34;
		L_34 = List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB(L_32, L_33, List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB_RuntimeMethod_var);
		NullCheck(L_34);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_35;
		L_35 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_34, NULL);
		V_11 = L_35;
		float L_36;
		L_36 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_11), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_2;
		float L_38 = L_37.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_1;
		float L_40 = L_39.___x_0;
		V_12 = (bool)((((float)((float)il2cpp_codegen_add(L_36, L_38))) > ((float)L_40))? 1 : 0);
		bool L_41 = V_12;
		if (!L_41)
		{
			goto IL_01a3;
		}
	}
	{
		// currentOffset.y += columnHeight + verticalSpacing;
		float* L_42 = (&(&V_2)->___y_1);
		float* L_43 = L_42;
		float L_44 = *((float*)L_43);
		float L_45 = V_4;
		float L_46 = __this->___verticalSpacing_7;
		*((float*)L_43) = (float)((float)il2cpp_codegen_add(L_44, ((float)il2cpp_codegen_add(L_45, L_46))));
		// currentOffset.x = 0.0f;
		(&V_2)->___x_0 = (0.0f);
		// columnHeight = Items[i].rect.height;
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_47;
		L_47 = UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline(__this, NULL);
		int32_t L_48 = V_10;
		NullCheck(L_47);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49;
		L_49 = List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB(L_47, L_48, List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB_RuntimeMethod_var);
		NullCheck(L_49);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_50;
		L_50 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_49, NULL);
		V_11 = L_50;
		float L_51;
		L_51 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_11), NULL);
		V_4 = L_51;
		// if (Items[i].rect.height + currentOffset.y > updatedSize.y)
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_52;
		L_52 = UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline(__this, NULL);
		int32_t L_53 = V_10;
		NullCheck(L_52);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_54;
		L_54 = List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB(L_52, L_53, List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB_RuntimeMethod_var);
		NullCheck(L_54);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_55;
		L_55 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_54, NULL);
		V_11 = L_55;
		float L_56;
		L_56 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_11), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = V_2;
		float L_58 = L_57.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_1;
		float L_60 = L_59.___y_1;
		V_13 = (bool)((((float)((float)il2cpp_codegen_add(L_56, L_58))) > ((float)L_60))? 1 : 0);
		bool L_61 = V_13;
		if (!L_61)
		{
			goto IL_01a2;
		}
	}
	{
		// break;
		goto IL_022a;
	}

IL_01a2:
	{
	}

IL_01a3:
	{
		// Items[i].anchoredPosition = new Vector2(currentOffset.x, -currentOffset.y);
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_62;
		L_62 = UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline(__this, NULL);
		int32_t L_63 = V_10;
		NullCheck(L_62);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_64;
		L_64 = List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB(L_62, L_63, List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65 = V_2;
		float L_66 = L_65.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = V_2;
		float L_68 = L_67.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_69), L_66, ((-L_68)), /*hidden argument*/NULL);
		NullCheck(L_64);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_64, L_69, NULL);
		// currentOffset.x += Items[i].rect.width + horizontalSpacing;
		float* L_70 = (&(&V_2)->___x_0);
		float* L_71 = L_70;
		float L_72 = *((float*)L_71);
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_73;
		L_73 = UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline(__this, NULL);
		int32_t L_74 = V_10;
		NullCheck(L_73);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_75;
		L_75 = List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB(L_73, L_74, List_1_get_Item_mE11D272997FCFEA3932C7EF10D990376C973CFEB_RuntimeMethod_var);
		NullCheck(L_75);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_76;
		L_76 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_75, NULL);
		V_11 = L_76;
		float L_77;
		L_77 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_11), NULL);
		float L_78 = __this->___horizontalSpacing_6;
		*((float*)L_71) = (float)((float)il2cpp_codegen_add(L_72, ((float)il2cpp_codegen_add(L_77, L_78))));
		// maxPanelWidth = Mathf.Max(currentOffset.x - horizontalSpacing, maxPanelWidth);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_2;
		float L_80 = L_79.___x_0;
		float L_81 = __this->___horizontalSpacing_6;
		float L_82 = V_5;
		float L_83;
		L_83 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_80, L_81)), L_82, NULL);
		V_5 = L_83;
		// for (int i = 0; i < Items.Count; i++)
		int32_t L_84 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_0212:
	{
		// for (int i = 0; i < Items.Count; i++)
		int32_t L_85 = V_10;
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_86;
		L_86 = UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline(__this, NULL);
		NullCheck(L_86);
		int32_t L_87;
		L_87 = List_1_get_Count_m2F707E98BABA1F4794BF2B315168A109B80B2921_inline(L_86, List_1_get_Count_m2F707E98BABA1F4794BF2B315168A109B80B2921_RuntimeMethod_var);
		V_14 = (bool)((((int32_t)L_85) < ((int32_t)L_87))? 1 : 0);
		bool L_88 = V_14;
		if (L_88)
		{
			goto IL_009d;
		}
	}

IL_022a:
	{
		// float finalWidth = maxWidth < 0.0f ? rect.width : maxPanelWidth;
		float L_89 = __this->___maxWidth_4;
		if ((((float)L_89) < ((float)(0.0f))))
		{
			goto IL_023b;
		}
	}
	{
		float L_90 = V_5;
		G_B16_0 = L_90;
		goto IL_0242;
	}

IL_023b:
	{
		float L_91;
		L_91 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		G_B16_0 = L_91;
	}

IL_0242:
	{
		V_6 = G_B16_0;
		// float finalHeight = maxHeight < 0.0f ? rect.height : columnHeight + currentOffset.y;
		float L_92 = __this->___maxHeight_5;
		if ((((float)L_92) < ((float)(0.0f))))
		{
			goto IL_025c;
		}
	}
	{
		float L_93 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_94 = V_2;
		float L_95 = L_94.___y_1;
		G_B19_0 = ((float)il2cpp_codegen_add(L_93, L_95));
		goto IL_0263;
	}

IL_025c:
	{
		float L_96;
		L_96 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		G_B19_0 = L_96;
	}

IL_0263:
	{
		V_7 = G_B19_0;
		// rectTransform.sizeDelta = new Vector2(finalWidth, finalHeight);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_97 = __this->___rectTransform_9;
		float L_98 = V_6;
		float L_99 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_100), L_98, L_99, /*hidden argument*/NULL);
		NullCheck(L_97);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_97, L_100, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.UICollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICollection__ctor_m8097527EC76B73DDCC991B9B80E337F74DE26E6F (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float maxWidth = -1.0f;
		__this->___maxWidth_4 = (-1.0f);
		// [SerializeField] private float maxHeight = -1.0f;
		__this->___maxHeight_5 = (-1.0f);
		// [SerializeField] private float horizontalSpacing = 0.0f;
		__this->___horizontalSpacing_6 = (0.0f);
		// [SerializeField] private float verticalSpacing = 0.0f;
		__this->___verticalSpacing_7 = (0.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::get_CreateSlidersOnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PinchSliderBox_get_CreateSlidersOnEnable_m9A6C89BFECA7A6E72CC506B91FC10BD19EBF5E82 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) 
{
	{
		// get => createSlidersOnEnable;
		bool L_0 = __this->___createSlidersOnEnable_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::set_CreateSlidersOnEnable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_set_CreateSlidersOnEnable_m2F991B22D94FF2A484D078FDA3B668847089A15F (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => createSlidersOnEnable = value;
		bool L_0 = ___value0;
		__this->___createSlidersOnEnable_4 = L_0;
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::get_CreateXAxisSliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PinchSliderBox_get_CreateXAxisSliders_m31E9408C616119F6B8D9879AD790F0A9EA119FFF (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) 
{
	{
		// get => createXAxisSliders;
		bool L_0 = __this->___createXAxisSliders_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::set_CreateXAxisSliders(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_set_CreateXAxisSliders_mD4F3985B9ECBF7CD0B6B8885A4340E0AA2B141B3 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// createXAxisSliders = value;
		bool L_0 = ___value0;
		__this->___createXAxisSliders_5 = L_0;
		// CreateSliders();
		PinchSliderBox_CreateSliders_m603897BA437FA63448ECCB6A9F9DCE619944059A(__this, NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::get_CreateYAxisSliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PinchSliderBox_get_CreateYAxisSliders_mAD14EF7D41C4A78504D16703B4E2C6B63BB16AEE (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) 
{
	{
		// get => createYAxisSliders;
		bool L_0 = __this->___createYAxisSliders_6;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::set_CreateYAxisSliders(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_set_CreateYAxisSliders_mC53274AE2F8141DA2AE88DC3BC96F00DB797F553 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// createYAxisSliders = value;
		bool L_0 = ___value0;
		__this->___createYAxisSliders_6 = L_0;
		// CreateSliders();
		PinchSliderBox_CreateSliders_m603897BA437FA63448ECCB6A9F9DCE619944059A(__this, NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::get_CreateZAxisSliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PinchSliderBox_get_CreateZAxisSliders_m6C6E8B0042B77C67A1A4CE83149F8065ED9859FC (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) 
{
	{
		// get => createZAxisSliders;
		bool L_0 = __this->___createZAxisSliders_7;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::set_CreateZAxisSliders(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_set_CreateZAxisSliders_m4590D9DA5083EFDAE009D01127FE1A4A2234BA50 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// createZAxisSliders = value;
		bool L_0 = ___value0;
		__this->___createZAxisSliders_7 = L_0;
		// CreateSliders();
		PinchSliderBox_CreateSliders_m603897BA437FA63448ECCB6A9F9DCE619944059A(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::get_ThumbPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PinchSliderBox_get_ThumbPrefab_m3925A6F04D0A0D0C18A4777F9AFA35DC33654291 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) 
{
	{
		// get => thumbPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___thumbPrefab_8;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::set_ThumbPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_set_ThumbPrefab_m873F9B532FBFD695A08C92613B8F64C0A2D16344 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// thumbPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___thumbPrefab_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thumbPrefab_8), (void*)L_0);
		// CreateSliders();
		PinchSliderBox_CreateSliders_m603897BA437FA63448ECCB6A9F9DCE619944059A(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::get_HightlightPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PinchSliderBox_get_HightlightPrefab_m7500D94CAB9C2C92C3EDC9CAB57D9F6162497F00 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) 
{
	{
		// get => hightlightPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___hightlightPrefab_9;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::set_HightlightPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_set_HightlightPrefab_mD43EFB26BE401E77A0524231D9B1B8821FFAA5F0 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// hightlightPrefab = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___hightlightPrefab_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hightlightPrefab_9), (void*)L_0);
		// CreateSliders();
		PinchSliderBox_CreateSliders_m603897BA437FA63448ECCB6A9F9DCE619944059A(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_Awake_m14F7648364A7A11E1A90C588C1D8F15C373423B4 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentExtensions_EnsureComponent_TisMinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5_m40736DD1C076CDA05447EE59A639698F65A010E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardShaderUtility_t35C310CC4594A5281A1A835CDE47E813CC7ADEC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// scaleConstraint = gameObject.EnsureComponent<MinMaxScaleConstraint>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_1;
		L_1 = ComponentExtensions_EnsureComponent_TisMinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5_m40736DD1C076CDA05447EE59A639698F65A010E5(L_0, ComponentExtensions_EnsureComponent_TisMinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5_m40736DD1C076CDA05447EE59A639698F65A010E5_RuntimeMethod_var);
		__this->___scaleConstraint_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scaleConstraint_10), (void*)L_1);
		// scaleConstraint.Initialize(new MixedRealityTransform(transform));
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_2 = __this->___scaleConstraint_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		MixedRealityTransform_tD69A8273A8D1EA76ED0CA106E11CF17F9942C267 L_4;
		memset((&L_4), 0, sizeof(L_4));
		MixedRealityTransform__ctor_m33E8186F0884AE0489A7AB979AF0AD39BA996A9E((&L_4), L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< MixedRealityTransform_tD69A8273A8D1EA76ED0CA106E11CF17F9942C267 >::Invoke(5 /* System.Void Microsoft.MixedReality.Toolkit.UI.TransformConstraint::Initialize(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityTransform) */, L_2, L_4);
		// if (thumbPrefab == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___thumbPrefab_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_6;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		// defaultThumbMaterial = new Material(StandardShaderUtility.MrtkStandardShader);
		il2cpp_codegen_runtime_class_init_inline(StandardShaderUtility_t35C310CC4594A5281A1A835CDE47E813CC7ADEC6_il2cpp_TypeInfo_var);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8;
		L_8 = StandardShaderUtility_get_MrtkStandardShader_m2C26095AB4F1FFDBA377632B801D7FBE0243DD56(NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_9, L_8, NULL);
		__this->___defaultThumbMaterial_13 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultThumbMaterial_13), (void*)L_9);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_OnDestroy_m8E68AD7FB9229644DC1354FE29663D0DD7810330 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(defaultThumbMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___defaultThumbMaterial_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_OnEnable_m4BE881A691FC80A33B9F229367C619A679349BE7 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (createSlidersOnEnable)
		bool L_0 = __this->___createSlidersOnEnable_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// CreateSliders();
		PinchSliderBox_CreateSliders_m603897BA437FA63448ECCB6A9F9DCE619944059A(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_OnDisable_m1BC6A3337E7C6B65EC4FA95A1109D7A529F36938 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) 
{
	{
		// OnHoverExited(null);
		PinchSliderBox_OnHoverExited_mF6360E10FE54022F720BD69D97B40F7624FB6A86(__this, (SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE*)NULL, NULL);
		// DestroyHandles();
		PinchSliderBox_DestroyHandles_m112AD8B91F620C7A76E65F8EDB90250C1152BBD8(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_OnApplicationQuit_m9754C632BD13CA9F6BFD9AC630DD0D06BADB37C5 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) 
{
	{
		// quitting = true;
		__this->___quitting_14 = (bool)1;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::CreateSliders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_CreateSliders_m603897BA437FA63448ECCB6A9F9DCE619944059A (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral038FB9756D5159DC0A7259C2EF80D77A6BF09A84);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// DestroyHandles();
		PinchSliderBox_DestroyHandles_m112AD8B91F620C7A76E65F8EDB90250C1152BBD8(__this, NULL);
		// pivot = new GameObject($"{nameof(PinchSliderBox)}Pivot").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral038FB9756D5159DC0A7259C2EF80D77A6BF09A84, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___pivot_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pivot_11), (void*)L_1);
		// pivot.parent = scaleConstraint.transform.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___pivot_11;
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_3 = __this->___scaleConstraint_10;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
		NullCheck(L_2);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_2, L_5, NULL);
		// pivot.localPosition = scaleConstraint.transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___pivot_11;
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_7 = __this->___scaleConstraint_10;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_9, NULL);
		// pivot.localRotation = scaleConstraint.transform.localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___pivot_11;
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_11 = __this->___scaleConstraint_10;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_12, NULL);
		NullCheck(L_10);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_10, L_13, NULL);
		// scaleConstraint.transform.parent = pivot;
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_14 = __this->___scaleConstraint_10;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___pivot_11;
		NullCheck(L_15);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_15, L_16, NULL);
		// if (hightlightPrefab != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___hightlightPrefab_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_18;
		bool L_19 = V_0;
		if (!L_19)
		{
			goto IL_00c9;
		}
	}
	{
		// axisHighlight = Instantiate(hightlightPrefab, pivot, false).transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___hightlightPrefab_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___pivot_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6(L_20, L_21, (bool)0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		__this->___axisHighlight_12 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___axisHighlight_12), (void*)L_23);
		// axisHighlight.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___axisHighlight_12;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
	}

IL_00c9:
	{
		// if (createXAxisSliders)
		bool L_26 = __this->___createXAxisSliders_5;
		V_1 = L_26;
		bool L_27 = V_1;
		if (!L_27)
		{
			goto IL_00e4;
		}
	}
	{
		// sliderPlanes[(int)SliderAxis.XAxis] = AddSliderPlane(SliderAxis.XAxis);
		SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD* L_28 = __this->___sliderPlanes_19;
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_29;
		L_29 = PinchSliderBox_AddSliderPlane_m70C7BA531A510835A9314EC4CD5B318DFC9FCCCA(__this, 0, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427*)L_29);
	}

IL_00e4:
	{
		// if (createYAxisSliders)
		bool L_30 = __this->___createYAxisSliders_6;
		V_2 = L_30;
		bool L_31 = V_2;
		if (!L_31)
		{
			goto IL_00ff;
		}
	}
	{
		// sliderPlanes[(int)SliderAxis.YAxis] = AddSliderPlane(SliderAxis.YAxis);
		SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD* L_32 = __this->___sliderPlanes_19;
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_33;
		L_33 = PinchSliderBox_AddSliderPlane_m70C7BA531A510835A9314EC4CD5B318DFC9FCCCA(__this, 1, NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427*)L_33);
	}

IL_00ff:
	{
		// if (createZAxisSliders)
		bool L_34 = __this->___createZAxisSliders_7;
		V_3 = L_34;
		bool L_35 = V_3;
		if (!L_35)
		{
			goto IL_011a;
		}
	}
	{
		// sliderPlanes[(int)SliderAxis.ZAxis] = AddSliderPlane(SliderAxis.ZAxis);
		SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD* L_36 = __this->___sliderPlanes_19;
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_37;
		L_37 = PinchSliderBox_AddSliderPlane_m70C7BA531A510835A9314EC4CD5B318DFC9FCCCA(__this, 2, NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427*)L_37);
	}

IL_011a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::DestroyHandles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_DestroyHandles_m112AD8B91F620C7A76E65F8EDB90250C1152BBD8 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mC0F7DD9797615DD420FB602B4FE9B2E16125B858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// if (pivot != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___pivot_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		// if (!quitting)
		bool L_3 = __this->___quitting_14;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// scaleConstraint.transform.parent = pivot.parent;
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_5 = __this->___scaleConstraint_10;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___pivot_11;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_7, NULL);
		NullCheck(L_6);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_6, L_8, NULL);
	}

IL_003d:
	{
		// Destroy(pivot.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___pivot_11;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
		// pivot = null;
		__this->___pivot_11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pivot_11), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// axisHighlight = null;
		__this->___axisHighlight_12 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___axisHighlight_12), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
	}

IL_005d:
	{
		// for (var i = 0; i < SliderPlaneCount; ++i)
		V_2 = 0;
		goto IL_0070;
	}

IL_0061:
	{
		// sliderPlanes[i] = null;
		SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD* L_11 = __this->___sliderPlanes_19;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, NULL);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427*)NULL);
		// for (var i = 0; i < SliderPlaneCount; ++i)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0070:
	{
		// for (var i = 0; i < SliderPlaneCount; ++i)
		int32_t L_14 = V_2;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)3))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0061;
		}
	}
	{
		// sliderToPlane.Clear();
		Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6* L_16 = __this->___sliderToPlane_20;
		NullCheck(L_16);
		Dictionary_2_Clear_mC0F7DD9797615DD420FB602B4FE9B2E16125B858(L_16, Dictionary_2_Clear_mC0F7DD9797615DD420FB602B4FE9B2E16125B858_RuntimeMethod_var);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::AddSliderPlane(Microsoft.MixedReality.Toolkit.UI.SliderAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* PinchSliderBox_AddSliderPlane_m70C7BA531A510835A9314EC4CD5B318DFC9FCCCA (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, int32_t ___axis0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m72A12B46C3164C3B812997121820532498F40EB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* V_0 = NULL;
	float V_1 = 0.0f;
	SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* V_8 = NULL;
	SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* V_9 = NULL;
	PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* V_10 = NULL;
	int32_t V_11 = 0;
	PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* V_12 = NULL;
	SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* V_13 = NULL;
	{
		// var sliders = new PinchSlider[4];
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_0 = (PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1*)(PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1*)SZArrayNew(PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		// var globalDirection = 1.0f;
		V_1 = (1.0f);
		// for (var i = 0; i < 2; ++i)
		V_3 = 0;
		goto IL_0051;
	}

IL_0012:
	{
		// var localDirection = 1.0f;
		V_4 = (1.0f);
		// for (var j = 0; j < 2; ++j)
		V_5 = 0;
		goto IL_003e;
	}

IL_001f:
	{
		// sliders[i * 2 + j] = AddSlider(axis, globalDirection, localDirection);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_1 = V_0;
		int32_t L_2 = V_3;
		int32_t L_3 = V_5;
		int32_t L_4 = ___axis0;
		float L_5 = V_1;
		float L_6 = V_4;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_7;
		L_7 = PinchSliderBox_AddSlider_m6AABD4FCFE8042EEBB98406605A4F835FF6E3596(__this, L_4, L_5, L_6, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_7);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, 2)), L_3))), (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)L_7);
		// localDirection = -localDirection;
		float L_8 = V_4;
		V_4 = ((-L_8));
		// for (var j = 0; j < 2; ++j)
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003e:
	{
		// for (var j = 0; j < 2; ++j)
		int32_t L_10 = V_5;
		V_6 = (bool)((((int32_t)L_10) < ((int32_t)2))? 1 : 0);
		bool L_11 = V_6;
		if (L_11)
		{
			goto IL_001f;
		}
	}
	{
		// globalDirection = -globalDirection;
		float L_12 = V_1;
		V_1 = ((-L_12));
		// for (var i = 0; i < 2; ++i)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0051:
	{
		// for (var i = 0; i < 2; ++i)
		int32_t L_14 = V_3;
		V_7 = (bool)((((int32_t)L_14) < ((int32_t)2))? 1 : 0);
		bool L_15 = V_7;
		if (L_15)
		{
			goto IL_0012;
		}
	}
	{
		// var sliderPlane = new SliderPlane()
		// {
		//     Axis = axis,
		//     SliderPairs = new SliderPair[]
		//     {
		//         new SliderPair() { Sliders = new PinchSlider[] { sliders[0], sliders[1] } },
		//         new SliderPair() { Sliders = new PinchSlider[] { sliders[2], sliders[3] } }
		//     }
		// };
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_16 = (SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427*)il2cpp_codegen_object_new(SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		SliderPlane__ctor_m4E7E3F0E12C8BA46D2E696452F5A6EDC8902791B(L_16, NULL);
		V_8 = L_16;
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_17 = V_8;
		int32_t L_18 = ___axis0;
		NullCheck(L_17);
		L_17->___Axis_0 = L_18;
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_19 = V_8;
		SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7* L_20 = (SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7*)(SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7*)SZArrayNew(SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7_il2cpp_TypeInfo_var, (uint32_t)2);
		SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7* L_21 = L_20;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_22 = (SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5*)il2cpp_codegen_object_new(SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		SliderPair__ctor_m373B0FB277998137BC576B41E963E926F550D1D1(L_22, NULL);
		V_9 = L_22;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_23 = V_9;
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_24 = (PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1*)(PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1*)SZArrayNew(PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1_il2cpp_TypeInfo_var, (uint32_t)2);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_25 = L_24;
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = 0;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)L_28);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_29 = L_25;
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = 1;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_32);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)L_32);
		NullCheck(L_23);
		L_23->___Sliders_0 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->___Sliders_0), (void*)L_29);
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_33 = V_9;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_33);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5*)L_33);
		SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7* L_34 = L_21;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_35 = (SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5*)il2cpp_codegen_object_new(SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		SliderPair__ctor_m373B0FB277998137BC576B41E963E926F550D1D1(L_35, NULL);
		V_9 = L_35;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_36 = V_9;
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_37 = (PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1*)(PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1*)SZArrayNew(PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1_il2cpp_TypeInfo_var, (uint32_t)2);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_38 = L_37;
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = 2;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)L_41);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_42 = L_38;
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_43 = V_0;
		NullCheck(L_43);
		int32_t L_44 = 3;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)L_45);
		NullCheck(L_36);
		L_36->___Sliders_0 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->___Sliders_0), (void*)L_42);
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_46 = V_9;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_46);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5*)L_46);
		NullCheck(L_19);
		L_19->___SliderPairs_1 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___SliderPairs_1), (void*)L_34);
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_47 = V_8;
		V_2 = L_47;
		// foreach (var slider in sliders)
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_48 = V_0;
		V_10 = L_48;
		V_11 = 0;
		goto IL_00eb;
	}

IL_00cd:
	{
		// foreach (var slider in sliders)
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_49 = V_10;
		int32_t L_50 = V_11;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_12 = L_52;
		// sliderToPlane.Add(slider, sliderPlane);
		Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6* L_53 = __this->___sliderToPlane_20;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_54 = V_12;
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_55 = V_2;
		NullCheck(L_53);
		Dictionary_2_Add_m72A12B46C3164C3B812997121820532498F40EB5(L_53, L_54, L_55, Dictionary_2_Add_m72A12B46C3164C3B812997121820532498F40EB5_RuntimeMethod_var);
		int32_t L_56 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00eb:
	{
		// foreach (var slider in sliders)
		int32_t L_57 = V_11;
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_58 = V_10;
		NullCheck(L_58);
		if ((((int32_t)L_57) < ((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length)))))
		{
			goto IL_00cd;
		}
	}
	{
		// return sliderPlane;
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_59 = V_2;
		V_13 = L_59;
		goto IL_00f8;
	}

IL_00f8:
	{
		// }
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_60 = V_13;
		return L_60;
	}
}
// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::AddSlider(Microsoft.MixedReality.Toolkit.UI.SliderAxis,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* PinchSliderBox_AddSlider_m6AABD4FCFE8042EEBB98406605A4F835FF6E3596 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, int32_t ___axis0, float ___globalDirection1, float ___localDirection2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentExtensions_EnsureComponent_TisNearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA_m5C59259B99D27DCE3EBAC981988B9F0CA6BA001A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisPinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01_m1C87F21D3FD154F3602C37FAB87D05E50852EE55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinchSliderBox_OnHoverEntered_mC0982B1CB73A8B227D0F0918850A51AF507B8146_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinchSliderBox_OnHoverExited_mF6360E10FE54022F720BD69D97B40F7624FB6A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinchSliderBox_OnSlideValueUpdated_m95C919A818BA80A3858D1A103E6710008486C713_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderAxis_t02EDA2743E8E86D494D9EE8E36F986575C8901F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mF0F65639FA1B0652AEFED99A4D581492A02FE39B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50886D082DF4269A9D485E5D38E29209E52C86BE);
		s_Il2CppMethodInitialized = true;
	}
	PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* V_9 = NULL;
	{
		// var slider = new GameObject($"Slider {axis} {globalDirection} {localDirection}").AddComponent<PinchSlider>();
		int32_t L_0 = ___axis0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(SliderAxis_t02EDA2743E8E86D494D9EE8E36F986575C8901F3_il2cpp_TypeInfo_var, &L_1);
		float L_3 = ___globalDirection1;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		float L_6 = ___localDirection2;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral50886D082DF4269A9D485E5D38E29209E52C86BE, L_2, L_5, L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_10, L_9, NULL);
		NullCheck(L_10);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_11;
		L_11 = GameObject_AddComponent_TisPinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01_m1C87F21D3FD154F3602C37FAB87D05E50852EE55(L_10, GameObject_AddComponent_TisPinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01_m1C87F21D3FD154F3602C37FAB87D05E50852EE55_RuntimeMethod_var);
		V_0 = L_11;
		// slider.transform.parent = pivot;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___pivot_11;
		NullCheck(L_13);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_13, L_14, NULL);
		// var targetTransform = scaleConstraint.transform;
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_15 = __this->___scaleConstraint_10;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		V_1 = L_16;
		// var axisNormal = GetSliderAxisDirection(CalculateAxisNormal(axis));
		int32_t L_17 = ___axis0;
		int32_t L_18;
		L_18 = PinchSliderBox_CalculateAxisNormal_m7EC3C9664BB766FA359012321B3DDC5840913865(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = PinchSliderBox_GetSliderAxisDirection_mEF69A5FB51F65DF91425C5471752C092E2B14DB7(L_18, NULL);
		V_2 = L_19;
		// var axisNormalHalfScale = CalculateAxisHalfScale(targetTransform, axisNormal);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		float L_22;
		L_22 = PinchSliderBox_CalculateAxisHalfScale_mC38FBE12DD7573C6F834FB8BBA35039CA84DA6D8(L_20, L_21, NULL);
		V_3 = L_22;
		// slider.transform.position = CalculateSliderPosition(targetTransform, axisNormal, axisNormalHalfScale, globalDirection);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_23 = V_0;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_2;
		float L_27 = V_3;
		float L_28 = ___globalDirection1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = PinchSliderBox_CalculateSliderPosition_mC8AF8742B8FC1BDAA1E3FE3AFD20C65A4C526011(L_25, L_26, L_27, L_28, NULL);
		NullCheck(L_24);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_29, NULL);
		// slider.transform.rotation = targetTransform.rotation;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_30 = V_0;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = V_1;
		NullCheck(L_32);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_32, NULL);
		NullCheck(L_31);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_31, L_33, NULL);
		// slider.CurrentSliderAxis = axis;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_34 = V_0;
		int32_t L_35 = ___axis0;
		NullCheck(L_34);
		PinchSlider_set_CurrentSliderAxis_m1384BA1F4EB717D14C9235E1B441836F67E7FF04(L_34, L_35, NULL);
		// var axisIndex = (int)axis;
		int32_t L_36 = ___axis0;
		V_4 = L_36;
		// slider.SliderStartDistance = scaleConstraint.ScaleMinimumVector[axisIndex] * 0.5f * localDirection;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_37 = V_0;
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_38 = __this->___scaleConstraint_10;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = MinMaxScaleConstraint_get_ScaleMinimumVector_m2F3D61BB057ACE55E11F78C19AC03A3846B37876_inline(L_38, NULL);
		V_7 = L_39;
		int32_t L_40 = V_4;
		float L_41;
		L_41 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_7), L_40, NULL);
		float L_42 = ___localDirection2;
		NullCheck(L_37);
		PinchSlider_set_SliderStartDistance_m11AF6DBA87FB58EAD800438824CFA7FCA4D2274D(L_37, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_41, (0.5f))), L_42)), NULL);
		// slider.SliderEndDistance = scaleConstraint.ScaleMaximumVector[axisIndex] * 0.5f * localDirection;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_43 = V_0;
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_44 = __this->___scaleConstraint_10;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = MinMaxScaleConstraint_get_ScaleMaximumVector_m61F236755D1B8ABAE8B47F215D288179DC8A1BAD_inline(L_44, NULL);
		V_7 = L_45;
		int32_t L_46 = V_4;
		float L_47;
		L_47 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_7), L_46, NULL);
		float L_48 = ___localDirection2;
		NullCheck(L_43);
		PinchSlider_set_SliderEndDistance_mC55D80ED438C6402608690644DAD4FB8D4961D49(L_43, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_47, (0.5f))), L_48)), NULL);
		// if (thumbPrefab != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___thumbPrefab_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_49, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_8 = L_50;
		bool L_51 = V_8;
		if (!L_51)
		{
			goto IL_012c;
		}
	}
	{
		// thumb = Instantiate(thumbPrefab, slider.transform, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___thumbPrefab_8;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_53 = V_0;
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_53, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6(L_52, L_54, (bool)0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var);
		V_5 = L_55;
		// thumb.EnsureComponent<NearInteractionGrabbable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = V_5;
		NearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA* L_57;
		L_57 = ComponentExtensions_EnsureComponent_TisNearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA_m5C59259B99D27DCE3EBAC981988B9F0CA6BA001A(L_56, ComponentExtensions_EnsureComponent_TisNearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA_m5C59259B99D27DCE3EBAC981988B9F0CA6BA001A_RuntimeMethod_var);
		// thumb.transform.rotation = Quaternion.LookRotation((targetTransform.rotation * axisNormal) * globalDirection);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = V_5;
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_58, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60 = V_1;
		NullCheck(L_60);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_61;
		L_61 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_61, L_62, NULL);
		float L_64 = ___globalDirection1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_63, L_64, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_66;
		L_66 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_65, NULL);
		NullCheck(L_59);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_59, L_66, NULL);
		goto IL_0141;
	}

IL_012c:
	{
		// thumb = CreateDefaultThumb(defaultThumbMaterial, slider.transform);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_67 = __this->___defaultThumbMaterial_13;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_68 = V_0;
		NullCheck(L_68);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_68, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70;
		L_70 = PinchSliderBox_CreateDefaultThumb_mF589FC13397ABD49861DD63E304DF5D14F92EAA6(L_67, L_69, NULL);
		V_5 = L_70;
	}

IL_0141:
	{
		// slider.ThumbRoot = thumb;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_71 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = V_5;
		NullCheck(L_71);
		PinchSlider_set_ThumbRoot_m20DABEF7C7ACF12174E27B998DEF0BCE2F78A0F3(L_71, L_72, NULL);
		// var scaleRange = scaleConstraint.ScaleMaximumVector[axisIndex] - scaleConstraint.ScaleMinimumVector[axisIndex];
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_73 = __this->___scaleConstraint_10;
		NullCheck(L_73);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = MinMaxScaleConstraint_get_ScaleMaximumVector_m61F236755D1B8ABAE8B47F215D288179DC8A1BAD_inline(L_73, NULL);
		V_7 = L_74;
		int32_t L_75 = V_4;
		float L_76;
		L_76 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_7), L_75, NULL);
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_77 = __this->___scaleConstraint_10;
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = MinMaxScaleConstraint_get_ScaleMinimumVector_m2F3D61BB057ACE55E11F78C19AC03A3846B37876_inline(L_77, NULL);
		V_7 = L_78;
		int32_t L_79 = V_4;
		float L_80;
		L_80 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_7), L_79, NULL);
		V_6 = ((float)il2cpp_codegen_subtract(L_76, L_80));
		// slider.SliderValue = (targetTransform.localScale[axisIndex] - scaleConstraint.ScaleMinimumVector[axisIndex]) / scaleRange;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_81 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82 = V_1;
		NullCheck(L_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_82, NULL);
		V_7 = L_83;
		int32_t L_84 = V_4;
		float L_85;
		L_85 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_7), L_84, NULL);
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_86 = __this->___scaleConstraint_10;
		NullCheck(L_86);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = MinMaxScaleConstraint_get_ScaleMinimumVector_m2F3D61BB057ACE55E11F78C19AC03A3846B37876_inline(L_86, NULL);
		V_7 = L_87;
		int32_t L_88 = V_4;
		float L_89;
		L_89 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_7), L_88, NULL);
		float L_90 = V_6;
		NullCheck(L_81);
		PinchSlider_set_SliderValue_mFAC20C5B0DFE5F5A02EBB1D40BFCA33F4C9A3B3C(L_81, ((float)(((float)il2cpp_codegen_subtract(L_85, L_89))/L_90)), NULL);
		// slider.OnValueUpdated.AddListener(OnSlideValueUpdated);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_91 = V_0;
		NullCheck(L_91);
		SliderEvent_tB453C6FDFA3C55C53C15199AB1EDD19523ED1F96* L_92 = L_91->___OnValueUpdated_19;
		UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A* L_93 = (UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A*)il2cpp_codegen_object_new(UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A_il2cpp_TypeInfo_var);
		NullCheck(L_93);
		UnityAction_1__ctor_mB546EEB26BEEBB00B303EA1DC61A89B5875993B1(L_93, __this, (intptr_t)((void*)PinchSliderBox_OnSlideValueUpdated_m95C919A818BA80A3858D1A103E6710008486C713_RuntimeMethod_var), NULL);
		NullCheck(L_92);
		UnityEvent_1_AddListener_mF0F65639FA1B0652AEFED99A4D581492A02FE39B(L_92, L_93, UnityEvent_1_AddListener_mF0F65639FA1B0652AEFED99A4D581492A02FE39B_RuntimeMethod_var);
		// slider.OnHoverEntered.AddListener(OnHoverEntered);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_94 = V_0;
		NullCheck(L_94);
		SliderEvent_tB453C6FDFA3C55C53C15199AB1EDD19523ED1F96* L_95 = L_94->___OnHoverEntered_22;
		UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A* L_96 = (UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A*)il2cpp_codegen_object_new(UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A_il2cpp_TypeInfo_var);
		NullCheck(L_96);
		UnityAction_1__ctor_mB546EEB26BEEBB00B303EA1DC61A89B5875993B1(L_96, __this, (intptr_t)((void*)PinchSliderBox_OnHoverEntered_mC0982B1CB73A8B227D0F0918850A51AF507B8146_RuntimeMethod_var), NULL);
		NullCheck(L_95);
		UnityEvent_1_AddListener_mF0F65639FA1B0652AEFED99A4D581492A02FE39B(L_95, L_96, UnityEvent_1_AddListener_mF0F65639FA1B0652AEFED99A4D581492A02FE39B_RuntimeMethod_var);
		// slider.OnHoverExited.AddListener(OnHoverExited);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_97 = V_0;
		NullCheck(L_97);
		SliderEvent_tB453C6FDFA3C55C53C15199AB1EDD19523ED1F96* L_98 = L_97->___OnHoverExited_23;
		UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A* L_99 = (UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A*)il2cpp_codegen_object_new(UnityAction_1_t8E4A3E51C66323C839E3781CA3BE2B87ED85B20A_il2cpp_TypeInfo_var);
		NullCheck(L_99);
		UnityAction_1__ctor_mB546EEB26BEEBB00B303EA1DC61A89B5875993B1(L_99, __this, (intptr_t)((void*)PinchSliderBox_OnHoverExited_mF6360E10FE54022F720BD69D97B40F7624FB6A86_RuntimeMethod_var), NULL);
		NullCheck(L_98);
		UnityEvent_1_AddListener_mF0F65639FA1B0652AEFED99A4D581492A02FE39B(L_98, L_99, UnityEvent_1_AddListener_mF0F65639FA1B0652AEFED99A4D581492A02FE39B_RuntimeMethod_var);
		// return slider;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_100 = V_0;
		V_9 = L_100;
		goto IL_01f8;
	}

IL_01f8:
	{
		// }
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_101 = V_9;
		return L_101;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::GetSliderAxisDirection(Microsoft.MixedReality.Toolkit.UI.SliderAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PinchSliderBox_GetSliderAxisDirection_mEF69A5FB51F65DF91425C5471752C092E2B14DB7 (int32_t ___sliderAxis0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// switch (sliderAxis)
		int32_t L_0 = ___sliderAxis0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0029;
			}
		}
	}
	{
		goto IL_0031;
	}

IL_0019:
	{
		// return Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		V_2 = L_3;
		goto IL_003c;
	}

IL_0021:
	{
		// return Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		V_2 = L_4;
		goto IL_003c;
	}

IL_0029:
	{
		// return Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		V_2 = L_5;
		goto IL_003c;
	}

IL_0031:
	{
		// throw new ArgumentOutOfRangeException("Underhanded SliderAxis passed to GetSliderAxisDirection.");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79252F3A65727E7E7C8C285FB1CC955C972C54BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PinchSliderBox_GetSliderAxisDirection_mEF69A5FB51F65DF91425C5471752C092E2B14DB7_RuntimeMethod_var)));
	}

IL_003c:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_2;
		return L_7;
	}
}
// Microsoft.MixedReality.Toolkit.UI.SliderAxis Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::CalculateAxisNormal(Microsoft.MixedReality.Toolkit.UI.SliderAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PinchSliderBox_CalculateAxisNormal_m7EC3C9664BB766FA359012321B3DDC5840913865 (int32_t ___axis0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return (SliderAxis)(((int)axis + AxisOffset) % SliderPlaneCount);
		int32_t L_0 = ___axis0;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_0, 2))%3));
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::CalculateAxisHalfScale(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PinchSliderBox_CalculateAxisHalfScale_mC38FBE12DD7573C6F834FB8BBA35039CA84DA6D8 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return Vector3.Dot(axis, targetTransform.localScale) * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___axis1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___targetTransform0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3;
		L_3 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_0, L_2, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_3, (0.5f)));
		goto IL_0016;
	}

IL_0016:
	{
		// }
		float L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::CalculateSliderPosition(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PinchSliderBox_CalculateSliderPosition_mC8AF8742B8FC1BDAA1E3FE3AFD20C65A4C526011 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axisNormal1, float ___scale2, float ___direction3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return targetTransform.position + (((targetTransform.rotation * axisNormal) * scale) * direction);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___targetTransform0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___targetTransform0;
		NullCheck(L_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___axisNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_3, L_4, NULL);
		float L_6 = ___scale2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		float L_8 = ___direction3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_9, NULL);
		V_0 = L_10;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		return L_11;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::CreateDefaultThumb(UnityEngine.Material,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PinchSliderBox_CreateDefaultThumb_mF589FC13397ABD49861DD63E304DF5D14F92EAA6 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA_m71F501CE1D792F80297EB09E23480BA5954018CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85854D21F273A756078468B1F896F112B0E08118);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// var primitive = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(0, NULL);
		V_0 = L_0;
		// primitive.name = "Thumb";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_1, _stringLiteral85854D21F273A756078468B1F896F112B0E08118, NULL);
		// primitive.AddComponent<NearInteractionGrabbable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		NearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA* L_3;
		L_3 = GameObject_AddComponent_TisNearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA_m71F501CE1D792F80297EB09E23480BA5954018CD(L_2, GameObject_AddComponent_TisNearInteractionGrabbable_tD38EDA009476DBDF5642F3EA120A521970761FBA_m71F501CE1D792F80297EB09E23480BA5954018CD_RuntimeMethod_var);
		// primitive.GetComponent<Renderer>().material = material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5;
		L_5 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_4, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___material0;
		NullCheck(L_5);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_5, L_6, NULL);
		// primitive.GetComponent<SphereCollider>().radius *= 3.0f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_8;
		L_8 = GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0(L_7, GameObject_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mD342F4F06F3848B43732DD183CDDA00AED3EE0A0_RuntimeMethod_var);
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_9 = L_8;
		NullCheck(L_9);
		float L_10;
		L_10 = SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697(L_9, NULL);
		NullCheck(L_9);
		SphereCollider_set_radius_m6119FE18C6739B077AB17334B1B53984911017FF(L_9, ((float)il2cpp_codegen_multiply(L_10, (3.0f))), NULL);
		// primitive.transform.parent = parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___parent1;
		NullCheck(L_12);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_12, L_13, NULL);
		// primitive.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_15);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_15, L_16, NULL);
		// primitive.transform.localRotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_0;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_18);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_18, L_19, NULL);
		// primitive.transform.localScale = Vector3.one * 0.03f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_0;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, (0.0299999993f), NULL);
		NullCheck(L_21);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_21, L_23, NULL);
		// return primitive;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_0;
		V_1 = L_24;
		goto IL_008e;
	}

IL_008e:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_1;
		return L_25;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::OnSlideValueUpdated(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_OnSlideValueUpdated_m95C919A818BA80A3858D1A103E6710008486C713 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE48A0E5A261CB7C4649FDCE8A5675EBD2A936ECC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* V_0 = NULL;
	SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* V_9 = NULL;
	SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* V_10 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_17;
	memset((&V_17), 0, sizeof(V_17));
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	bool V_21 = false;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* V_24 = NULL;
	bool V_25 = false;
	bool V_26 = false;
	SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* G_B3_0 = NULL;
	int32_t G_B12_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B12_1 = NULL;
	int32_t G_B11_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B11_1 = NULL;
	float G_B13_0 = 0.0f;
	int32_t G_B13_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B13_2 = NULL;
	{
		// var sliderPlane = sliderToPlane[data.Slider];
		Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6* L_0 = __this->___sliderToPlane_20;
		SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* L_1 = ___data0;
		NullCheck(L_1);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_2;
		L_2 = SliderEventData_get_Slider_m9AF3806FEBEC323215B3399190E168545CB697EA_inline(L_1, NULL);
		NullCheck(L_0);
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_3;
		L_3 = Dictionary_2_get_Item_mE48A0E5A261CB7C4649FDCE8A5675EBD2A936ECC(L_0, L_2, Dictionary_2_get_Item_mE48A0E5A261CB7C4649FDCE8A5675EBD2A936ECC_RuntimeMethod_var);
		V_0 = L_3;
		// var sliderPair = sliderPlane.GetSliderPair(data.Slider);
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_4 = V_0;
		SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* L_5 = ___data0;
		NullCheck(L_5);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_6;
		L_6 = SliderEventData_get_Slider_m9AF3806FEBEC323215B3399190E168545CB697EA_inline(L_5, NULL);
		NullCheck(L_4);
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_7;
		L_7 = SliderPlane_GetSliderPair_m92A652A5CF281EB5577AA8A9091B40607614D898(L_4, L_6, NULL);
		V_1 = L_7;
		// var axisIndex = (int)sliderPlane.Axis;
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___Axis_0;
		V_2 = L_9;
		// var scaleMin = scaleConstraint.ScaleMinimumVector[axisIndex];
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_10 = __this->___scaleConstraint_10;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = MinMaxScaleConstraint_get_ScaleMinimumVector_m2F3D61BB057ACE55E11F78C19AC03A3846B37876_inline(L_10, NULL);
		V_11 = L_11;
		int32_t L_12 = V_2;
		float L_13;
		L_13 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_11), L_12, NULL);
		V_3 = L_13;
		// var scaleMax = scaleConstraint.ScaleMaximumVector[axisIndex];
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_14 = __this->___scaleConstraint_10;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = MinMaxScaleConstraint_get_ScaleMaximumVector_m61F236755D1B8ABAE8B47F215D288179DC8A1BAD_inline(L_14, NULL);
		V_11 = L_15;
		int32_t L_16 = V_2;
		float L_17;
		L_17 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_11), L_16, NULL);
		V_4 = L_17;
		// var scaleRange = scaleMax - scaleMin;
		float L_18 = V_4;
		float L_19 = V_3;
		V_5 = ((float)il2cpp_codegen_subtract(L_18, L_19));
		// var targetTransform = scaleConstraint.transform;
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_20 = __this->___scaleConstraint_10;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		V_6 = L_21;
		// var scale = targetTransform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_6;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_22, NULL);
		V_7 = L_23;
		// scale[axisIndex] = (sliderPair.Value * scaleRange + scaleMin);
		int32_t L_24 = V_2;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_25 = V_1;
		NullCheck(L_25);
		float L_26;
		L_26 = SliderPair_get_Value_mE87516D520B30C9DD41FC8A43CBB51D0C7EB0F35(L_25, NULL);
		float L_27 = V_5;
		float L_28 = V_3;
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline((&V_7), L_24, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_26, L_27)), L_28)), NULL);
		// targetTransform.localScale = scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_7;
		NullCheck(L_29);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_29, L_30, NULL);
		// var position = targetTransform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_6;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_31, NULL);
		V_8 = L_32;
		// position[axisIndex] = ((sliderPair.Sliders[PositiveIndex].SliderValue * scaleRange + scaleMin) * 0.25f) -
		//                       ((sliderPair.Sliders[NegativeIndex].SliderValue * scaleRange + scaleMin) * 0.25f);
		int32_t L_33 = V_2;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_34 = V_1;
		NullCheck(L_34);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_35 = L_34->___Sliders_0;
		NullCheck(L_35);
		int32_t L_36 = 0;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		float L_38;
		L_38 = PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C(L_37, NULL);
		float L_39 = V_5;
		float L_40 = V_3;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_41 = V_1;
		NullCheck(L_41);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_42 = L_41->___Sliders_0;
		NullCheck(L_42);
		int32_t L_43 = 1;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		float L_45;
		L_45 = PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C(L_44, NULL);
		float L_46 = V_5;
		float L_47 = V_3;
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline((&V_8), L_33, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_38, L_39)), L_40)), (0.25f))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_45, L_46)), L_47)), (0.25f))))), NULL);
		// targetTransform.localPosition = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_8;
		NullCheck(L_48);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_48, L_49, NULL);
		// var oppositeSliderPair = (sliderPair == sliderPlane.SliderPairs[PositiveIndex]) ? sliderPlane.SliderPairs[NegativeIndex] :
		//                                                                                   sliderPlane.SliderPairs[PositiveIndex];
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_50 = V_1;
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_51 = V_0;
		NullCheck(L_51);
		SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7* L_52 = L_51->___SliderPairs_1;
		NullCheck(L_52);
		int32_t L_53 = 0;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		if ((((RuntimeObject*)(SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5*)L_50) == ((RuntimeObject*)(SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5*)L_54)))
		{
			goto IL_00f0;
		}
	}
	{
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_55 = V_0;
		NullCheck(L_55);
		SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7* L_56 = L_55->___SliderPairs_1;
		NullCheck(L_56);
		int32_t L_57 = 0;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		G_B3_0 = L_58;
		goto IL_00f8;
	}

IL_00f0:
	{
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_59 = V_0;
		NullCheck(L_59);
		SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7* L_60 = L_59->___SliderPairs_1;
		NullCheck(L_60);
		int32_t L_61 = 1;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		G_B3_0 = L_62;
	}

IL_00f8:
	{
		V_9 = G_B3_0;
		// for (var i = 0; i < 2; ++i)
		V_12 = 0;
		goto IL_014f;
	}

IL_00ff:
	{
		// if (oppositeSliderPair.Sliders[i].SliderValue != sliderPair.Sliders[i].SliderValue)
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_63 = V_9;
		NullCheck(L_63);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_64 = L_63->___Sliders_0;
		int32_t L_65 = V_12;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		float L_68;
		L_68 = PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C(L_67, NULL);
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_69 = V_1;
		NullCheck(L_69);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_70 = L_69->___Sliders_0;
		int32_t L_71 = V_12;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		float L_74;
		L_74 = PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C(L_73, NULL);
		V_13 = (bool)((((int32_t)((((float)L_68) == ((float)L_74))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_75 = V_13;
		if (!L_75)
		{
			goto IL_0148;
		}
	}
	{
		// oppositeSliderPair.Sliders[i].SliderValue = sliderPair.Sliders[i].SliderValue;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_76 = V_9;
		NullCheck(L_76);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_77 = L_76->___Sliders_0;
		int32_t L_78 = V_12;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_81 = V_1;
		NullCheck(L_81);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_82 = L_81->___Sliders_0;
		int32_t L_83 = V_12;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		float L_86;
		L_86 = PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C(L_85, NULL);
		NullCheck(L_80);
		PinchSlider_set_SliderValue_mFAC20C5B0DFE5F5A02EBB1D40BFCA33F4C9A3B3C(L_80, L_86, NULL);
	}

IL_0148:
	{
		// for (var i = 0; i < 2; ++i)
		int32_t L_87 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_014f:
	{
		// for (var i = 0; i < 2; ++i)
		int32_t L_88 = V_12;
		V_14 = (bool)((((int32_t)L_88) < ((int32_t)2))? 1 : 0);
		bool L_89 = V_14;
		if (L_89)
		{
			goto IL_00ff;
		}
	}
	{
		// var copanarSliderPlane = sliderPlanes[(axisIndex + AxisOffset - 1) % SliderPlaneCount];
		SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD* L_90 = __this->___sliderPlanes_19;
		int32_t L_91 = V_2;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_91, 2)), 1))%3));
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_10 = L_93;
		// if (copanarSliderPlane != null)
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_94 = V_10;
		V_15 = (bool)((!(((RuntimeObject*)(SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427*)L_94) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_95 = V_15;
		if (!L_95)
		{
			goto IL_0272;
		}
	}
	{
		// var axisNormal = GetSliderAxisDirection(CalculateAxisNormal(copanarSliderPlane.Axis));
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_96 = V_10;
		NullCheck(L_96);
		int32_t L_97 = L_96->___Axis_0;
		int32_t L_98;
		L_98 = PinchSliderBox_CalculateAxisNormal_m7EC3C9664BB766FA359012321B3DDC5840913865(L_97, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = PinchSliderBox_GetSliderAxisDirection_mEF69A5FB51F65DF91425C5471752C092E2B14DB7(L_98, NULL);
		V_16 = L_99;
		// var axisNormalInverse = axisNormal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_16;
		V_17 = L_100;
		// for (var i = 0; i < 3; ++i)
		V_20 = 0;
		goto IL_01c3;
	}

IL_0195:
	{
		// axisNormalInverse[i] = axisNormalInverse[i] == 1.0f ? 0.0f : 1.0f;
		int32_t L_101 = V_20;
		int32_t L_102 = V_20;
		float L_103;
		L_103 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&V_17), L_102, NULL);
		G_B11_0 = L_101;
		G_B11_1 = (&V_17);
		if ((((float)L_103) == ((float)(1.0f))))
		{
			G_B12_0 = L_101;
			G_B12_1 = (&V_17);
			goto IL_01b1;
		}
	}
	{
		G_B13_0 = (1.0f);
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_01b6;
	}

IL_01b1:
	{
		G_B13_0 = (0.0f);
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_01b6:
	{
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline(G_B13_2, G_B13_1, G_B13_0, NULL);
		// for (var i = 0; i < 3; ++i)
		int32_t L_104 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_01c3:
	{
		// for (var i = 0; i < 3; ++i)
		int32_t L_105 = V_20;
		V_21 = (bool)((((int32_t)L_105) < ((int32_t)3))? 1 : 0);
		bool L_106 = V_21;
		if (L_106)
		{
			goto IL_0195;
		}
	}
	{
		// var axisNormalHalfScale = CalculateAxisHalfScale(targetTransform, axisNormal);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_16;
		float L_109;
		L_109 = PinchSliderBox_CalculateAxisHalfScale_mC38FBE12DD7573C6F834FB8BBA35039CA84DA6D8(L_107, L_108, NULL);
		V_18 = L_109;
		// var globalDirection = 1.0f;
		V_19 = (1.0f);
		// for (var i = 0; i < 2; ++i)
		V_22 = 0;
		goto IL_0263;
	}

IL_01e5:
	{
		// for (var j = 0; j < 2; ++j)
		V_23 = 0;
		goto IL_024c;
	}

IL_01eb:
	{
		// var slider = copanarSliderPlane.SliderPairs[i].Sliders[j];
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_110 = V_10;
		NullCheck(L_110);
		SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7* L_111 = L_110->___SliderPairs_1;
		int32_t L_112 = V_22;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_114);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_115 = L_114->___Sliders_0;
		int32_t L_116 = V_23;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_24 = L_118;
		// slider.transform.position = CalculateSliderPosition(targetTransform, axisNormal, axisNormalHalfScale, globalDirection);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_119 = V_24;
		NullCheck(L_119);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_120;
		L_120 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_119, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_121 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122 = V_16;
		float L_123 = V_18;
		float L_124 = V_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
		L_125 = PinchSliderBox_CalculateSliderPosition_mC8AF8742B8FC1BDAA1E3FE3AFD20C65A4C526011(L_121, L_122, L_123, L_124, NULL);
		NullCheck(L_120);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_120, L_125, NULL);
		// slider.transform.localPosition -= Vector3.Scale(slider.transform.localPosition, axisNormalInverse);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_126 = V_24;
		NullCheck(L_126);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_127;
		L_127 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_126, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_128 = L_127;
		NullCheck(L_128);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_128, NULL);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_130 = V_24;
		NullCheck(L_130);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_131;
		L_131 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_130, NULL);
		NullCheck(L_131);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		L_132 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_131, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = V_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_132, L_133, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_129, L_134, NULL);
		NullCheck(L_128);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_128, L_135, NULL);
		// for (var j = 0; j < 2; ++j)
		int32_t L_136 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_024c:
	{
		// for (var j = 0; j < 2; ++j)
		int32_t L_137 = V_23;
		V_25 = (bool)((((int32_t)L_137) < ((int32_t)2))? 1 : 0);
		bool L_138 = V_25;
		if (L_138)
		{
			goto IL_01eb;
		}
	}
	{
		// globalDirection = -globalDirection;
		float L_139 = V_19;
		V_19 = ((-L_139));
		// for (var i = 0; i < 2; ++i)
		int32_t L_140 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_0263:
	{
		// for (var i = 0; i < 2; ++i)
		int32_t L_141 = V_22;
		V_26 = (bool)((((int32_t)L_141) < ((int32_t)2))? 1 : 0);
		bool L_142 = V_26;
		if (L_142)
		{
			goto IL_01e5;
		}
	}
	{
	}

IL_0272:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::OnHoverEntered(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_OnHoverEntered_mC0982B1CB73A8B227D0F0918850A51AF507B8146 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE48A0E5A261CB7C4649FDCE8A5675EBD2A936ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* V_3 = NULL;
	float V_4 = 0.0f;
	float G_B4_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B7_2 = NULL;
	{
		// if (axisHighlight != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___axisHighlight_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00e3;
		}
	}
	{
		// axisHighlight.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___axisHighlight_12;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// var axisType = data.Slider.CurrentSliderAxis;
		SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* L_5 = ___data0;
		NullCheck(L_5);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_6;
		L_6 = SliderEventData_get_Slider_m9AF3806FEBEC323215B3399190E168545CB697EA_inline(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = PinchSlider_get_CurrentSliderAxis_mD133A008B14A8FAF2BED4F996324CE970E8BBBDB(L_6, NULL);
		V_1 = L_7;
		// var axis = GetSliderAxisDirection(axisType);
		int32_t L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = PinchSliderBox_GetSliderAxisDirection_mEF69A5FB51F65DF91425C5471752C092E2B14DB7(L_8, NULL);
		V_2 = L_9;
		// var sliderPair = sliderToPlane[data.Slider].GetSliderPair(data.Slider);
		Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6* L_10 = __this->___sliderToPlane_20;
		SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* L_11 = ___data0;
		NullCheck(L_11);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_12;
		L_12 = SliderEventData_get_Slider_m9AF3806FEBEC323215B3399190E168545CB697EA_inline(L_11, NULL);
		NullCheck(L_10);
		SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* L_13;
		L_13 = Dictionary_2_get_Item_mE48A0E5A261CB7C4649FDCE8A5675EBD2A936ECC(L_10, L_12, Dictionary_2_get_Item_mE48A0E5A261CB7C4649FDCE8A5675EBD2A936ECC_RuntimeMethod_var);
		SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* L_14 = ___data0;
		NullCheck(L_14);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_15;
		L_15 = SliderEventData_get_Slider_m9AF3806FEBEC323215B3399190E168545CB697EA_inline(L_14, NULL);
		NullCheck(L_13);
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_16;
		L_16 = SliderPlane_GetSliderPair_m92A652A5CF281EB5577AA8A9091B40607614D898(L_13, L_15, NULL);
		V_3 = L_16;
		// var direction = (sliderPair.Sliders[PositiveIndex] == data.Slider) ? 1.0f : -1.0f;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_17 = V_3;
		NullCheck(L_17);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_18 = L_17->___Sliders_0;
		NullCheck(L_18);
		int32_t L_19 = 0;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* L_21 = ___data0;
		NullCheck(L_21);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_22;
		L_22 = SliderEventData_get_Slider_m9AF3806FEBEC323215B3399190E168545CB697EA_inline(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_20, L_22, NULL);
		if (L_23)
		{
			goto IL_0073;
		}
	}
	{
		G_B4_0 = (-1.0f);
		goto IL_0078;
	}

IL_0073:
	{
		G_B4_0 = (1.0f);
	}

IL_0078:
	{
		V_4 = G_B4_0;
		// axisHighlight.parent = scaleConstraint.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___axisHighlight_12;
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_25 = __this->___scaleConstraint_10;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		NullCheck(L_24);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_24, L_26, NULL);
		// axisHighlight.localPosition = axis * 0.5f * direction;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___axisHighlight_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, (0.5f), NULL);
		float L_30 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_30, NULL);
		NullCheck(L_27);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_27, L_31, NULL);
		// axisHighlight.localRotation = Quaternion.LookRotation(axis, axisType == SliderAxis.YAxis ? Vector3.right : Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___axisHighlight_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_2;
		int32_t L_34 = V_1;
		G_B5_0 = L_33;
		G_B5_1 = L_32;
		if ((((int32_t)L_34) == ((int32_t)1)))
		{
			G_B6_0 = L_33;
			G_B6_1 = L_32;
			goto IL_00c1;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		G_B7_0 = L_35;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_00c6;
	}

IL_00c1:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		G_B7_0 = L_36;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_00c6:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(G_B7_1, G_B7_0, NULL);
		NullCheck(G_B7_2);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(G_B7_2, L_37, NULL);
		// axisHighlight.localScale = Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = __this->___axisHighlight_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_38);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_38, L_39, NULL);
	}

IL_00e3:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::OnHoverExited(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox_OnHoverExited_mF6360E10FE54022F720BD69D97B40F7624FB6A86 (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (axisHighlight != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___axisHighlight_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// axisHighlight.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___axisHighlight_12;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSliderBox__ctor_m8B87D499C349B4A04F10AFF71DADFF4FAB984B2D (PinchSliderBox_tE0DE3FB2E5B2C8C65038C233D83772743442493B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m745537F8F26347E69AFF06EBB5445813F7889EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool createSlidersOnEnable = true;
		__this->___createSlidersOnEnable_4 = (bool)1;
		// private bool createXAxisSliders = true;
		__this->___createXAxisSliders_5 = (bool)1;
		// private bool createYAxisSliders = true;
		__this->___createYAxisSliders_6 = (bool)1;
		// private bool createZAxisSliders = true;
		__this->___createZAxisSliders_7 = (bool)1;
		// private GameObject thumbPrefab = null;
		__this->___thumbPrefab_8 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thumbPrefab_8), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// private GameObject hightlightPrefab = null;
		__this->___hightlightPrefab_9 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hightlightPrefab_9), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// private MinMaxScaleConstraint scaleConstraint = null;
		__this->___scaleConstraint_10 = (MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scaleConstraint_10), (void*)(MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5*)NULL);
		// private Transform pivot = null;
		__this->___pivot_11 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pivot_11), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// private Transform axisHighlight = null;
		__this->___axisHighlight_12 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___axisHighlight_12), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// private Material defaultThumbMaterial = null;
		__this->___defaultThumbMaterial_13 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defaultThumbMaterial_13), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// private bool quitting = false;
		__this->___quitting_14 = (bool)0;
		// private SliderPlane[] sliderPlanes = new SliderPlane[SliderPlaneCount];
		SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD* L_0 = (SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD*)(SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD*)SZArrayNew(SliderPlaneU5BU5D_t9E2AA91851A1D416ED552743F93E0AD70307BAFD_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___sliderPlanes_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sliderPlanes_19), (void*)L_0);
		// private Dictionary<PinchSlider, SliderPlane> sliderToPlane = new Dictionary<PinchSlider, SliderPlane>();
		Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6* L_1 = (Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6*)il2cpp_codegen_object_new(Dictionary_2_t70C628A748A9FC3EB4C51AB8BA1625C2F8EAC4D6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m745537F8F26347E69AFF06EBB5445813F7889EC5(L_1, Dictionary_2__ctor_m745537F8F26347E69AFF06EBB5445813F7889EC5_RuntimeMethod_var);
		__this->___sliderToPlane_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sliderToPlane_20), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPair::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SliderPair_get_Value_mE87516D520B30C9DD41FC8A43CBB51D0C7EB0F35 (SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return (Sliders[PositiveIndex].SliderValue +
		//         Sliders[NegativeIndex].SliderValue) * 0.5f;
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_0 = __this->___Sliders_0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		float L_3;
		L_3 = PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C(L_2, NULL);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_4 = __this->___Sliders_0;
		NullCheck(L_4);
		int32_t L_5 = 1;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		float L_7;
		L_7 = PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C(L_6, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_3, L_7)), (0.5f)));
		goto IL_0025;
	}

IL_0025:
	{
		// }
		float L_8 = V_0;
		return L_8;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderPair__ctor_m373B0FB277998137BC576B41E963E926F550D1D1 (SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PinchSlider[] Sliders = new PinchSlider[2];
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_0 = (PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1*)(PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1*)SZArrayNew(PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___Sliders_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Sliders_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPair Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane::GetSliderPair(Microsoft.MixedReality.Toolkit.UI.PinchSlider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* SliderPlane_GetSliderPair_m92A652A5CF281EB5577AA8A9091B40607614D898 (SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* __this, PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* ___slider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (slider == SliderPairs[PositiveIndex].Sliders[PositiveIndex] ||
		//     slider == SliderPairs[PositiveIndex].Sliders[NegativeIndex])
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_0 = ___slider0;
		SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7* L_1 = __this->___SliderPairs_1;
		NullCheck(L_1);
		int32_t L_2 = 0;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_4 = L_3->___Sliders_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_6, NULL);
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_8 = ___slider0;
		SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7* L_9 = __this->___SliderPairs_1;
		NullCheck(L_9);
		int32_t L_10 = 0;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		PinchSliderU5BU5D_tC7B981703CB0629F47241C95F8A3AA80168A20F1* L_12 = L_11->___Sliders_0;
		NullCheck(L_12);
		int32_t L_13 = 1;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, L_14, NULL);
		G_B3_0 = ((int32_t)(L_15));
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
	}

IL_0030:
	{
		V_0 = (bool)G_B3_0;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_0040;
		}
	}
	{
		// return SliderPairs[PositiveIndex];
		SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7* L_17 = __this->___SliderPairs_1;
		NullCheck(L_17);
		int32_t L_18 = 0;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_1 = L_19;
		goto IL_004c;
	}

IL_0040:
	{
		// return SliderPairs[NegativeIndex];
		SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7* L_20 = __this->___SliderPairs_1;
		NullCheck(L_20);
		int32_t L_21 = 1;
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_1 = L_22;
		goto IL_004c;
	}

IL_004c:
	{
		// }
		SliderPair_t8CA482A9A9FC0CD3E9DBA8AB6C16E630487D9ED5* L_23 = V_1;
		return L_23;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSliderBox/SliderPlane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderPlane__ctor_m4E7E3F0E12C8BA46D2E696452F5A6EDC8902791B (SliderPlane_tE42FF03D3925603A44F1B691EC0BE87D8A292427* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SliderAxis Axis = SliderAxis.XAxis;
		__this->___Axis_0 = 0;
		// public SliderPair[] SliderPairs = new SliderPair[2];
		SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7* L_0 = (SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7*)(SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7*)SZArrayNew(SliderPairU5BU5D_t7852275A2E14F694055B07B89BAE2CE05F453AC7_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___SliderPairs_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SliderPairs_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::get_HandleAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PinchSpring_get_HandleAnchor_m1E742696371423CAFAF1346F318454B5BAEB4E9A (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	{
		// get => handleAnchor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___handleAnchor_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::set_HandleAnchor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_set_HandleAnchor_mC2955803880E1CDA48520C38A96B4AB74E8F22B2 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => handleAnchor = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___handleAnchor_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handleAnchor_4), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::get_HandleConnector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PinchSpring_get_HandleConnector_mFCD6CBB1F7558A9E64CBE6CF226CE25A80507D34 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	{
		// get => handleConnector;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___handleConnector_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::set_HandleConnector(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_set_HandleConnector_m28E68D9713A40DAAC8FD1ECFEA3D126AA97099CA (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => handleConnector = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___handleConnector_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handleConnector_5), (void*)L_0);
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::get_HandleTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PinchSpring_get_HandleTip_m1EDBE94C1F8E85DCD2211ECF40B166FC090937B0 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	{
		// get => handleTip;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___handleTip_6;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::set_HandleTip(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_set_HandleTip_m52A1FEA994673C1105AC12E8430F1E52C0935F34 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5_mE14687E5EB5BCA51FD7A46FFE004A4D15C817A12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// handleTip = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___value0;
		__this->___handleTip_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handleTip_6), (void*)L_0);
		// if (handleTip != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___handleTip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// tipScaleConstraint = handleTip.GetComponent<MinMaxScaleConstraint>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___handleTip_6;
		NullCheck(L_4);
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_5;
		L_5 = Component_GetComponent_TisMinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5_mE14687E5EB5BCA51FD7A46FFE004A4D15C817A12(L_4, Component_GetComponent_TisMinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5_mE14687E5EB5BCA51FD7A46FFE004A4D15C817A12_RuntimeMethod_var);
		__this->___tipScaleConstraint_15 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tipScaleConstraint_15), (void*)L_5);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::get_RestingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PinchSpring_get_RestingDistance_mF1F3D8B96AB085591CA6FEF92015D9B139069A2A (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	{
		// get => restingDistance;
		float L_0 = __this->___restingDistance_7;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::set_RestingDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_set_RestingDistance_mDE9863D7AFD6E3A1CA12321481828D87553C88DF (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => restingDistance = value;
		float L_0 = ___value0;
		__this->___restingDistance_7 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::get_RestingFocusedDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PinchSpring_get_RestingFocusedDistance_mA2B85090F99770C488D35BCFFFD8B09A2D6DE830 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	{
		// get => restingFocusedDistance;
		float L_0 = __this->___restingFocusedDistance_8;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::set_RestingFocusedDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_set_RestingFocusedDistance_m3EA724E4F904B078107A5E489D036913876473D7 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => restingFocusedDistance = value;
		float L_0 = ___value0;
		__this->___restingFocusedDistance_8 = L_0;
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::get_RestingDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PinchSpring_get_RestingDirection_mD1CB58BFF00C711B26C899DD5D0877DED2F11408 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	{
		// get => restingDirection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___restingDirection_9;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::set_RestingDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_set_RestingDirection_mAB3E667F5A052D34E926BEE7A58FF396C95F6097 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// restingDirection = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___restingDirection_9 = L_0;
		// restingDirection.Normalize();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___restingDirection_9);
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline(L_1, NULL);
		// }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::get_TipMass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PinchSpring_get_TipMass_m6B338BEC16D7EAC9A808B2B11EF4D0976150CECF (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	{
		// get => tipMass;
		float L_0 = __this->___tipMass_10;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::set_TipMass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_set_TipMass_mD1B28318B33B979CBC893C02BCFF9DF76A0B9442 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => tipMass = value;
		float L_0 = ___value0;
		__this->___tipMass_10 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::get_SpringStiffness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PinchSpring_get_SpringStiffness_m7F489C14501207E8A0628E959414D9EA2379B9A2 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	{
		// get => springStiffness;
		float L_0 = __this->___springStiffness_11;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::set_SpringStiffness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_set_SpringStiffness_mE451B7F329D49E50F6F85E4B3C98B4795D4CA030 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => springStiffness = value;
		float L_0 = ___value0;
		__this->___springStiffness_11 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::get_SpringDampening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PinchSpring_get_SpringDampening_mB4270F1F375206CFA9ED82A2EB6F71365D52FA25 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	{
		// get => springDampening;
		float L_0 = __this->___springDampening_12;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::set_SpringDampening(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_set_SpringDampening_mBAD4A964B9E8525D80BBF83A80A6716E0C61656F (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => springDampening = value;
		float L_0 = ___value0;
		__this->___springDampening_12 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::get_SnapDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PinchSpring_get_SnapDistance_m1C2B67DAFA8367BCBD734C63FD03F57E06442643 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	{
		// get => snapDistance;
		float L_0 = __this->___snapDistance_13;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::set_SnapDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_set_SnapDistance_mE436FF84A274DBDBB8FF28CDD0222DEF84B4FA58 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => snapDistance = value;
		float L_0 = ___value0;
		__this->___snapDistance_13 = L_0;
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::get_HandleTipInterpolateSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PinchSpring_get_HandleTipInterpolateSpeed_m8EBA8D9C38E4085E196E1D2FA5F2E7FCE2666F65 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	{
		// get => handleTipInterpolateSpeed;
		float L_0 = __this->___handleTipInterpolateSpeed_14;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::set_HandleTipInterpolateSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_set_HandleTipInterpolateSpeed_m49828B5F0CCE43106F2AA6CFD1F47196D564C457 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => handleTipInterpolateSpeed = value;
		float L_0 = ___value0;
		__this->___handleTipInterpolateSpeed_14 = L_0;
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_Start_m2C5CC3FB7C3CBB43F5BA77A3AE803520FC992162 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5_mE14687E5EB5BCA51FD7A46FFE004A4D15C817A12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// restingDirection.Normalize();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___restingDirection_9);
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline(L_0, NULL);
		// if (handleTip != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___handleTip_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// tipScaleConstraint = handleTip.GetComponent<MinMaxScaleConstraint>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___handleTip_6;
		NullCheck(L_4);
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_5;
		L_5 = Component_GetComponent_TisMinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5_mE14687E5EB5BCA51FD7A46FFE004A4D15C817A12(L_4, Component_GetComponent_TisMinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5_mE14687E5EB5BCA51FD7A46FFE004A4D15C817A12_RuntimeMethod_var);
		__this->___tipScaleConstraint_15 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tipScaleConstraint_15), (void*)L_5);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_FixedUpdate_m14535385308A47E8391F06B2108B59D6D3892BBE (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	{
		// UpdateTip();
		PinchSpring_UpdateTip_m65956A3F2DB6107ABAB96FB38ADB781B3BB695E5(__this, NULL);
		// UpdateConnector();
		PinchSpring_UpdateConnector_mF8E126F97F9B0DF5CE992C12139FDB6A8A7AFB88(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_OnPointerDown_mD7F2B80E7710E18369DF007880874525F3EE8876 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m6FADC8F9CAD1FB85A4C920BE87F28602B6D0D367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemExtensions_tA5952B64963B55BD1D45BDD95BAFF3282398459B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manipulatePointer = eventData.Pointer;
		MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MixedRealityPointerEventData_get_Pointer_mE5664622195651CF4C2DC3CEAAF99E3823B74E82_inline(L_0, NULL);
		__this->___manipulatePointer_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manipulatePointer_16), (void*)L_1);
		// EventSystemExtensions.ExecuteHierarchyUpward(gameObject, eventData, MixedRealityInputSystem.OnPointerDownEventHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* L_3 = ___eventData0;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var);
		EventFunction_1_t0FF56C83D3B252AFE788501464E58831E2310B16* L_4 = ((MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var))->___OnPointerDownEventHandler_90;
		il2cpp_codegen_runtime_class_init_inline(EventSystemExtensions_tA5952B64963B55BD1D45BDD95BAFF3282398459B_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m6FADC8F9CAD1FB85A4C920BE87F28602B6D0D367(L_2, L_3, L_4, EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m6FADC8F9CAD1FB85A4C920BE87F28602B6D0D367_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_OnPointerDragged_m8E05CCE61F35AF116330C8F01ED8FD942CF340F4 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m6FADC8F9CAD1FB85A4C920BE87F28602B6D0D367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemExtensions_tA5952B64963B55BD1D45BDD95BAFF3282398459B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventSystemExtensions.ExecuteHierarchyUpward(gameObject, eventData, MixedRealityInputSystem.OnPointerDraggedEventHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* L_1 = ___eventData0;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var);
		EventFunction_1_t0FF56C83D3B252AFE788501464E58831E2310B16* L_2 = ((MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var))->___OnPointerDraggedEventHandler_92;
		il2cpp_codegen_runtime_class_init_inline(EventSystemExtensions_tA5952B64963B55BD1D45BDD95BAFF3282398459B_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m6FADC8F9CAD1FB85A4C920BE87F28602B6D0D367(L_0, L_1, L_2, EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m6FADC8F9CAD1FB85A4C920BE87F28602B6D0D367_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_OnPointerUp_m9689BDB1A88E471E3ECFB10238D7712C4FDF2068 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m6FADC8F9CAD1FB85A4C920BE87F28602B6D0D367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemExtensions_tA5952B64963B55BD1D45BDD95BAFF3282398459B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manipulatePointer = null;
		__this->___manipulatePointer_16 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manipulatePointer_16), (void*)(RuntimeObject*)NULL);
		// EventSystemExtensions.ExecuteHierarchyUpward(gameObject, eventData, MixedRealityInputSystem.OnPointerUpEventHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* L_1 = ___eventData0;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var);
		EventFunction_1_t0FF56C83D3B252AFE788501464E58831E2310B16* L_2 = ((MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var))->___OnPointerUpEventHandler_96;
		il2cpp_codegen_runtime_class_init_inline(EventSystemExtensions_tA5952B64963B55BD1D45BDD95BAFF3282398459B_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m6FADC8F9CAD1FB85A4C920BE87F28602B6D0D367(L_0, L_1, L_2, EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m6FADC8F9CAD1FB85A4C920BE87F28602B6D0D367_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_OnPointerClicked_mEFA2DD0CAFEE21B6B097AD9E978CB23E1586486D (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m6FADC8F9CAD1FB85A4C920BE87F28602B6D0D367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemExtensions_tA5952B64963B55BD1D45BDD95BAFF3282398459B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EventSystemExtensions.ExecuteHierarchyUpward(gameObject, eventData, MixedRealityInputSystem.OnInputClickedEventHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* L_1 = ___eventData0;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var);
		EventFunction_1_t0FF56C83D3B252AFE788501464E58831E2310B16* L_2 = ((MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var))->___OnInputClickedEventHandler_94;
		il2cpp_codegen_runtime_class_init_inline(EventSystemExtensions_tA5952B64963B55BD1D45BDD95BAFF3282398459B_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m6FADC8F9CAD1FB85A4C920BE87F28602B6D0D367(L_0, L_1, L_2, EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityPointerHandler_t3FF57994997E4A63F923DB13BB2E304BAD383FFC_m6FADC8F9CAD1FB85A4C920BE87F28602B6D0D367_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::OnFocusEnter(Microsoft.MixedReality.Toolkit.Input.FocusEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_OnFocusEnter_mAA48CC58EE3F2ABA40CD9193E26C0AE0D864145B (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, FocusEventData_t3AD7DE28F6F0A2A7CA9843944A0E0DE4B8868E4A* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityFocusHandler_t5FCA4CA48911E66F2F7F40219E9A0C654DEFBB52_m6CBEE4A7D2C039A943EFED3FBBCF97126C222968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemExtensions_tA5952B64963B55BD1D45BDD95BAFF3282398459B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// focusedPointer = eventData.Pointer;
		FocusEventData_t3AD7DE28F6F0A2A7CA9843944A0E0DE4B8868E4A* L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = FocusEventData_get_Pointer_m99B9460351B3413A8123E3561E22C06B0B4A664C_inline(L_0, NULL);
		__this->___focusedPointer_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___focusedPointer_17), (void*)L_1);
		// EventSystemExtensions.ExecuteHierarchyUpward(gameObject, eventData, MixedRealityInputSystem.OnFocusEnterEventHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		FocusEventData_t3AD7DE28F6F0A2A7CA9843944A0E0DE4B8868E4A* L_3 = ___eventData0;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var);
		EventFunction_1_t84987B6778476110E256E89C4851AB019A92838B* L_4 = ((MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var))->___OnFocusEnterEventHandler_87;
		il2cpp_codegen_runtime_class_init_inline(EventSystemExtensions_tA5952B64963B55BD1D45BDD95BAFF3282398459B_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityFocusHandler_t5FCA4CA48911E66F2F7F40219E9A0C654DEFBB52_m6CBEE4A7D2C039A943EFED3FBBCF97126C222968(L_2, L_3, L_4, EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityFocusHandler_t5FCA4CA48911E66F2F7F40219E9A0C654DEFBB52_m6CBEE4A7D2C039A943EFED3FBBCF97126C222968_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::OnFocusExit(Microsoft.MixedReality.Toolkit.Input.FocusEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_OnFocusExit_m9C064762F4DCBD68328D009F44F63FFE5994D35B (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, FocusEventData_t3AD7DE28F6F0A2A7CA9843944A0E0DE4B8868E4A* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityFocusHandler_t5FCA4CA48911E66F2F7F40219E9A0C654DEFBB52_m6CBEE4A7D2C039A943EFED3FBBCF97126C222968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystemExtensions_tA5952B64963B55BD1D45BDD95BAFF3282398459B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// focusedPointer = null;
		__this->___focusedPointer_17 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___focusedPointer_17), (void*)(RuntimeObject*)NULL);
		// EventSystemExtensions.ExecuteHierarchyUpward(gameObject, eventData, MixedRealityInputSystem.OnFocusExitEventHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		FocusEventData_t3AD7DE28F6F0A2A7CA9843944A0E0DE4B8868E4A* L_1 = ___eventData0;
		il2cpp_codegen_runtime_class_init_inline(MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var);
		EventFunction_1_t84987B6778476110E256E89C4851AB019A92838B* L_2 = ((MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputSystem_t586837FF59F5C1909D4FFA4373AA7182149E8E40_il2cpp_TypeInfo_var))->___OnFocusExitEventHandler_89;
		il2cpp_codegen_runtime_class_init_inline(EventSystemExtensions_tA5952B64963B55BD1D45BDD95BAFF3282398459B_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityFocusHandler_t5FCA4CA48911E66F2F7F40219E9A0C654DEFBB52_m6CBEE4A7D2C039A943EFED3FBBCF97126C222968(L_0, L_1, L_2, EventSystemExtensions_ExecuteHierarchyUpward_TisIMixedRealityFocusHandler_t5FCA4CA48911E66F2F7F40219E9A0C654DEFBB52_m6CBEE4A7D2C039A943EFED3FBBCF97126C222968_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::UpdateTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_UpdateTip_m65956A3F2DB6107ABAB96FB38ADB781B3BB695E5 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityNearPointer_tA29E79073B12FE06E833720EBEE764F4E3D94373_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	float V_13 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	bool V_16 = false;
	bool V_17 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	float G_B2_0 = 0.0f;
	PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* G_B2_1 = NULL;
	float G_B1_0 = 0.0f;
	PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* G_B3_2 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B22_0;
	memset((&G_B22_0), 0, sizeof(G_B22_0));
	{
		// var deltaTime = Time.deltaTime;
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		// var t = handleTipInterpolateSpeed * deltaTime;
		float L_1 = __this->___handleTipInterpolateSpeed_14;
		float L_2 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// var currentPosition = handleTip.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___handleTip_6;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_2 = L_4;
		// var isFocused = focusedPointer != null;
		RuntimeObject* L_5 = __this->___focusedPointer_17;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		// currentRestingDistance = Mathf.Lerp(currentRestingDistance, isFocused ? restingFocusedDistance : restingDistance, t);
		float L_6 = __this->___currentRestingDistance_19;
		bool L_7 = V_3;
		G_B1_0 = L_6;
		G_B1_1 = __this;
		if (L_7)
		{
			G_B2_0 = L_6;
			G_B2_1 = __this;
			goto IL_0038;
		}
	}
	{
		float L_8 = __this->___restingDistance_7;
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_003e;
	}

IL_0038:
	{
		float L_9 = __this->___restingFocusedDistance_8;
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_003e:
	{
		float L_10 = V_1;
		float L_11;
		L_11 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(G_B3_1, G_B3_0, L_10, NULL);
		NullCheck(G_B3_2);
		G_B3_2->___currentRestingDistance_19 = L_11;
		// var restingPosition = handleAnchor.position + (transform.rotation * restingDirection) * currentRestingDistance;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___handleAnchor_4;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___restingDirection_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_15, L_16, NULL);
		float L_18 = __this->___currentRestingDistance_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_19, NULL);
		V_4 = L_20;
		// var nearPointer = focusedPointer as IMixedRealityNearPointer;
		RuntimeObject* L_21 = __this->___focusedPointer_17;
		V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_21, IMixedRealityNearPointer_tA29E79073B12FE06E833720EBEE764F4E3D94373_il2cpp_TypeInfo_var));
		// if (nearPointer != null && nearPointer.TryGetNearGraspPoint(out graspPosition))
		RuntimeObject* L_22 = V_7;
		if (!L_22)
		{
			goto IL_0098;
		}
	}
	{
		RuntimeObject* L_23 = V_7;
		NullCheck(L_23);
		bool L_24;
		L_24 = InterfaceFuncInvoker1< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityNearPointer::TryGetNearGraspPoint(UnityEngine.Vector3&) */, IMixedRealityNearPointer_tA29E79073B12FE06E833720EBEE764F4E3D94373_il2cpp_TypeInfo_var, L_23, (&V_6));
		G_B6_0 = ((int32_t)(L_24));
		goto IL_0099;
	}

IL_0098:
	{
		G_B6_0 = 0;
	}

IL_0099:
	{
		V_8 = (bool)G_B6_0;
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00ec;
		}
	}
	{
		// if (snapped || ((currentPosition - graspPosition).magnitude < snapDistance))
		bool L_26 = __this->___snapped_20;
		if (L_26)
		{
			goto IL_00c3;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_27, L_28, NULL);
		V_10 = L_29;
		float L_30;
		L_30 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_10), NULL);
		float L_31 = __this->___snapDistance_13;
		G_B10_0 = ((((float)L_30) < ((float)L_31))? 1 : 0);
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B10_0 = 1;
	}

IL_00c4:
	{
		V_9 = (bool)G_B10_0;
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		// targetPosition = graspPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_6;
		V_5 = L_33;
		// snapped = true;
		__this->___snapped_20 = (bool)1;
		goto IL_00e6;
	}

IL_00d9:
	{
		// targetPosition = Vector3.Lerp(currentPosition, graspPosition, t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_6;
		float L_36 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_34, L_35, L_36, NULL);
		V_5 = L_37;
	}

IL_00e6:
	{
		goto IL_0194;
	}

IL_00ec:
	{
		// var delta = restingPosition - currentPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_38, L_39, NULL);
		V_11 = L_40;
		// if (delta != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_43;
		L_43 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_41, L_42, NULL);
		V_12 = L_43;
		bool L_44 = V_12;
		if (!L_44)
		{
			goto IL_0186;
		}
	}
	{
		// var deltaMagnitude = delta.magnitude;
		float L_45;
		L_45 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_11), NULL);
		V_13 = L_45;
		// delta /= deltaMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_11;
		float L_47 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_46, L_47, NULL);
		V_11 = L_48;
		// var force = delta * (springStiffness * deltaMagnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_11;
		float L_50 = __this->___springStiffness_11;
		float L_51 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_49, ((float)il2cpp_codegen_multiply(L_50, L_51)), NULL);
		V_14 = L_52;
		// var acceleration = force / tipMass;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_14;
		float L_54 = __this->___tipMass_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_53, L_54, NULL);
		V_15 = L_55;
		// velocity += acceleration * deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = __this->___velocity_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_15;
		float L_58 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_57, L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_56, L_59, NULL);
		__this->___velocity_18 = L_60;
		// targetPosition = currentPosition + (velocity * deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = __this->___velocity_18;
		float L_63 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_62, L_63, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_61, L_64, NULL);
		V_5 = L_65;
		// velocity *= springDampening;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = __this->___velocity_18;
		float L_67 = __this->___springDampening_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_66, L_67, NULL);
		__this->___velocity_18 = L_68;
		goto IL_018c;
	}

IL_0186:
	{
		// targetPosition = restingPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_4;
		V_5 = L_69;
	}

IL_018c:
	{
		// snapped = false;
		__this->___snapped_20 = (bool)0;
	}

IL_0194:
	{
		// handleTip.position = targetPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = __this->___handleTip_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = V_5;
		NullCheck(L_70);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_70, L_71, NULL);
		// if (tipScaleConstraint != null)
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_72 = __this->___tipScaleConstraint_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_72, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_16 = L_73;
		bool L_74 = V_16;
		if (!L_74)
		{
			goto IL_0212;
		}
	}
	{
		// var isManipulated = manipulatePointer != null;
		RuntimeObject* L_75 = __this->___manipulatePointer_16;
		V_17 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_75) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		// var tagetScale = isManipulated ? Vector3.one * tipScaleConstraint.ScaleMinimum : Vector3.one * tipScaleConstraint.ScaleMaximum;
		bool L_76 = V_17;
		if (L_76)
		{
			goto IL_01db;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_78 = __this->___tipScaleConstraint_15;
		NullCheck(L_78);
		float L_79;
		L_79 = MinMaxScaleConstraint_get_ScaleMaximum_mAFB022CD2566BF19E147E7880D0747306FE52643(L_78, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_77, L_79, NULL);
		G_B22_0 = L_80;
		goto IL_01f0;
	}

IL_01db:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* L_82 = __this->___tipScaleConstraint_15;
		NullCheck(L_82);
		float L_83;
		L_83 = MinMaxScaleConstraint_get_ScaleMinimum_mE0146C4A88EBB8BFA91F77DE015937D8F2C8CC38(L_82, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_81, L_83, NULL);
		G_B22_0 = L_84;
	}

IL_01f0:
	{
		V_18 = G_B22_0;
		// handleTip.localScale = Vector3.Lerp(handleTip.localScale, tagetScale, t);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85 = __this->___handleTip_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86 = __this->___handleTip_6;
		NullCheck(L_86);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_86, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = V_18;
		float L_89 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_87, L_88, L_89, NULL);
		NullCheck(L_85);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_85, L_90, NULL);
	}

IL_0212:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::UpdateConnector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring_UpdateConnector_mF8E126F97F9B0DF5CE992C12139FDB6A8A7AFB88 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// if (handleConnector != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___handleConnector_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00b6;
		}
	}
	{
		// var delta = handleTip.position - handleAnchor.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___handleTip_6;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___handleAnchor_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_6, NULL);
		V_1 = L_7;
		// handleConnector.position = (handleAnchor.position + handleTip.position) * 0.5f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___handleConnector_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___handleAnchor_4;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___handleTip_6;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, (0.5f), NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_14, NULL);
		// if (delta != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_17;
		L_17 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_15, L_16, NULL);
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0085;
		}
	}
	{
		// handleConnector.rotation = Quaternion.LookRotation(delta);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___handleConnector_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_20, NULL);
		NullCheck(L_19);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_19, L_21, NULL);
	}

IL_0085:
	{
		// var scale = handleConnector.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___handleConnector_5;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_22, NULL);
		V_2 = L_23;
		// handleConnector.localScale = new Vector3(scale.x, scale.y, delta.magnitude);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___handleConnector_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		float L_26 = L_25.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		float L_28 = L_27.___y_3;
		float L_29;
		L_29 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), L_26, L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_24, L_30, NULL);
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.UI.PinchSpring::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchSpring__ctor_mD67C4FC31FC220CB60C14005BAB452C04A3EBAE3 (PinchSpring_tA80BEBE29B6252FC14E5184A7C8A1B5F5D47038E* __this, const RuntimeMethod* method) 
{
	{
		// private Transform handleAnchor = null;
		__this->___handleAnchor_4 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handleAnchor_4), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// private Transform handleConnector = null;
		__this->___handleConnector_5 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handleConnector_5), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// private Transform handleTip = null;
		__this->___handleTip_6 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handleTip_6), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// private float restingDistance = 0.0f;
		__this->___restingDistance_7 = (0.0f);
		// private float restingFocusedDistance = 0.05f;
		__this->___restingFocusedDistance_8 = (0.0500000007f);
		// private Vector3 restingDirection = new Vector3(0.0f, 0.0f, 1.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___restingDirection_9 = L_0;
		// private float tipMass = 0.05f;
		__this->___tipMass_10 = (0.0500000007f);
		// private float springStiffness = 50.0f;
		__this->___springStiffness_11 = (50.0f);
		// private float springDampening = 0.9f;
		__this->___springDampening_12 = (0.899999976f);
		// private float snapDistance = 0.03f;
		__this->___snapDistance_13 = (0.0299999993f);
		// private float handleTipInterpolateSpeed = 20.0f;
		__this->___handleTipInterpolateSpeed_14 = (20.0f);
		// private MinMaxScaleConstraint tipScaleConstraint = null;
		__this->___tipScaleConstraint_15 = (MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tipScaleConstraint_15), (void*)(MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5*)NULL);
		// private IMixedRealityPointer manipulatePointer = null;
		__this->___manipulatePointer_16 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manipulatePointer_16), (void*)(RuntimeObject*)NULL);
		// private IMixedRealityPointer focusedPointer = null;
		__this->___focusedPointer_17 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___focusedPointer_17), (void*)(RuntimeObject*)NULL);
		// private Vector3 velocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___velocity_18 = L_1;
		// private float currentRestingDistance = 0.0f;
		__this->___currentRestingDistance_19 = (0.0f);
		// private bool snapped = false;
		__this->___snapped_20 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::get_TargetObjectMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ColorPicker_get_TargetObjectMesh_m91C3E32E4A59F41E8ACA4049628C1C8E54F699F4 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	{
		// get => targetObjectMesh;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___targetObjectMesh_4;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::set_TargetObjectMesh(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_set_TargetObjectMesh_mA8D15E96B84DFD7C5B254933447BDE43107C5261 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___value0, const RuntimeMethod* method) 
{
	{
		// set => targetObjectMesh = value;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___value0;
		__this->___targetObjectMesh_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetObjectMesh_4), (void*)L_0);
		return;
	}
}
// UnityEngine.SpriteRenderer Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::get_TargetObjectSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ColorPicker_get_TargetObjectSprite_m89679FB7782AD743D51B3CAEA89D99C481BE0DB2 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	{
		// get => targetObjectSprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___targetObjectSprite_5;
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::set_TargetObjectSprite(UnityEngine.SpriteRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_set_TargetObjectSprite_mE994FEBC4F6F2CDFA206273CDE70EB468F742646 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___value0, const RuntimeMethod* method) 
{
	{
		// set => targetObjectSprite = value;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___value0;
		__this->___targetObjectSprite_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetObjectSprite_5), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_Start_mB0DF9FC546FA0622752F09EC3CD01C15C165AEBE (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	{
		// GradientDragStartPosition = GradientDragger.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___GradientDragger_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		__this->___GradientDragStartPosition_26 = L_2;
		// GradientDragCurrentPosition = GradientDragStartPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___GradientDragStartPosition_26;
		__this->___GradientDragCurrentPosition_27 = L_3;
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_Update_m87BA3690D017399C716F31B3643F81642B42A413 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (IsDraggingGradient)
		bool L_0 = __this->___IsDraggingGradient_34;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// ConstrainGradientDragging();
		ColorPicker_ConstrainGradientDragging_m19515D45103785BBAD5315914F0217D62E18A56B(__this, NULL);
	}

IL_0014:
	{
		// if (IsDraggingSliders)
		bool L_2 = __this->___IsDraggingSliders_33;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// CalculateGradientDraggerPosition();
		ColorPicker_CalculateGradientDraggerPosition_mEF54FF1D173F1D8F6CBBD581A15FA492C6F26492(__this, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler.OnTouchUpdated(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_Microsoft_MixedReality_Toolkit_Input_IMixedRealityTouchHandler_OnTouchUpdated_m76936232D8C586E1AFC3248026178D39557EDD22 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, HandTrackingInputEventData_tB1F672BC7D48E95B022609AC330253DD7F7F5470* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputEventData_1_get_InputData_m6FA48F377DF5F57338C37322468A877D1448B0E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GradientDragger.transform.position = new Vector3(eventData.InputData.x, eventData.InputData.y, eventData.InputData.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___GradientDragger_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		HandTrackingInputEventData_tB1F672BC7D48E95B022609AC330253DD7F7F5470* L_2 = ___eventData0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = InputEventData_1_get_InputData_m6FA48F377DF5F57338C37322468A877D1448B0E9_inline(L_2, InputEventData_1_get_InputData_m6FA48F377DF5F57338C37322468A877D1448B0E9_RuntimeMethod_var);
		float L_4 = L_3.___x_2;
		HandTrackingInputEventData_tB1F672BC7D48E95B022609AC330253DD7F7F5470* L_5 = ___eventData0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = InputEventData_1_get_InputData_m6FA48F377DF5F57338C37322468A877D1448B0E9_inline(L_5, InputEventData_1_get_InputData_m6FA48F377DF5F57338C37322468A877D1448B0E9_RuntimeMethod_var);
		float L_7 = L_6.___y_3;
		HandTrackingInputEventData_tB1F672BC7D48E95B022609AC330253DD7F7F5470* L_8 = ___eventData0;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = InputEventData_1_get_InputData_m6FA48F377DF5F57338C37322468A877D1448B0E9_inline(L_8, InputEventData_1_get_InputData_m6FA48F377DF5F57338C37322468A877D1448B0E9_RuntimeMethod_var);
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_4, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_11, NULL);
		// ConstrainGradientDragging();
		ColorPicker_ConstrainGradientDragging_m19515D45103785BBAD5315914F0217D62E18A56B(__this, NULL);
		// ApplyColor();
		ColorPicker_ApplyColor_m779AFCF1BFE51E32EFF613FE2BE133A57A79190B(__this, NULL);
		// UpdateSliderText();
		ColorPicker_UpdateSliderText_mDEE2DA32DC117556B9057D61E1795D6E4CE69E4F(__this, NULL);
		// ApplySliderValues();
		ColorPicker_ApplySliderValues_m2FFF7FD3F26DF8549CBC62C59FF5019B94FA346D(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler.OnTouchStarted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_Microsoft_MixedReality_Toolkit_Input_IMixedRealityTouchHandler_OnTouchStarted_mF2F7A4664C1E8CBEFBE9F42B4C3589D48B9BAFD8 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, HandTrackingInputEventData_tB1F672BC7D48E95B022609AC330253DD7F7F5470* ___eventData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler.OnTouchCompleted(Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_Microsoft_MixedReality_Toolkit_Input_IMixedRealityTouchHandler_OnTouchCompleted_m8851FD119F21B60246229A692FFA40CC1BCE6223 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, HandTrackingInputEventData_tB1F672BC7D48E95B022609AC330253DD7F7F5470* ___eventData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::CalculateGradientDraggerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_CalculateGradientDraggerPosition_mEF54FF1D173F1D8F6CBBD581A15FA492C6F26492 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float xPosition = ((Saturation + GradientDragMaxDistance) * -1) + 1;
		float L_0 = __this->___Saturation_30;
		float L_1 = __this->___GradientDragMaxDistance_25;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_0, L_1)), (-1.0f))), (1.0f)));
		// float yPosition = Brightness - GradientDragMaxDistance;
		float L_2 = __this->___Brightness_31;
		float L_3 = __this->___GradientDragMaxDistance_25;
		V_1 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// GradientDragCurrentPosition.x = Mathf.Clamp(xPosition, -GradientDragMaxDistance, GradientDragMaxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___GradientDragCurrentPosition_27);
		float L_5 = V_0;
		float L_6 = __this->___GradientDragMaxDistance_25;
		float L_7 = __this->___GradientDragMaxDistance_25;
		float L_8;
		L_8 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_5, ((-L_6)), L_7, NULL);
		L_4->___x_2 = L_8;
		// GradientDragCurrentPosition.y = Mathf.Clamp(yPosition, -GradientDragMaxDistance, GradientDragMaxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___GradientDragCurrentPosition_27);
		float L_10 = V_1;
		float L_11 = __this->___GradientDragMaxDistance_25;
		float L_12 = __this->___GradientDragMaxDistance_25;
		float L_13;
		L_13 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_10, ((-L_11)), L_12, NULL);
		L_9->___y_3 = L_13;
		// GradientDragger.transform.localPosition = GradientDragCurrentPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___GradientDragger_9;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___GradientDragCurrentPosition_27;
		NullCheck(L_15);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::ConstrainGradientDragging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_ConstrainGradientDragging_m19515D45103785BBAD5315914F0217D62E18A56B (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (GradientDragger.transform.localPosition.x >= GradientDragStartPosition.x + GradientDragMaxDistance)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___GradientDragger_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___GradientDragStartPosition_26);
		float L_5 = L_4->___x_2;
		float L_6 = __this->___GradientDragMaxDistance_25;
		V_0 = (bool)((((int32_t)((!(((float)L_3) >= ((float)((float)il2cpp_codegen_add(L_5, L_6)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		// GradientDragCurrentPosition.x = GradientDragStartPosition.x + GradientDragMaxDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___GradientDragCurrentPosition_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___GradientDragStartPosition_26);
		float L_10 = L_9->___x_2;
		float L_11 = __this->___GradientDragMaxDistance_25;
		L_8->___x_2 = ((float)il2cpp_codegen_add(L_10, L_11));
		goto IL_00c5;
	}

IL_0052:
	{
		// else if (GradientDragger.transform.localPosition.x <= GradientDragStartPosition.x - GradientDragMaxDistance)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___GradientDragger_9;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_13, NULL);
		float L_15 = L_14.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___GradientDragStartPosition_26);
		float L_17 = L_16->___x_2;
		float L_18 = __this->___GradientDragMaxDistance_25;
		V_1 = (bool)((((int32_t)((!(((float)L_15) <= ((float)((float)il2cpp_codegen_subtract(L_17, L_18)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		// GradientDragCurrentPosition.x = GradientDragStartPosition.x - GradientDragMaxDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___GradientDragCurrentPosition_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___GradientDragStartPosition_26);
		float L_22 = L_21->___x_2;
		float L_23 = __this->___GradientDragMaxDistance_25;
		L_20->___x_2 = ((float)il2cpp_codegen_subtract(L_22, L_23));
		goto IL_00c5;
	}

IL_00a3:
	{
		// GradientDragCurrentPosition.x = GradientDragger.transform.localPosition.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___GradientDragCurrentPosition_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___GradientDragger_9;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_26, NULL);
		float L_28 = L_27.___x_2;
		L_24->___x_2 = L_28;
	}

IL_00c5:
	{
		// if (GradientDragger.transform.localPosition.y >= GradientDragStartPosition.y + GradientDragMaxDistance)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___GradientDragger_9;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_30, NULL);
		float L_32 = L_31.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = (&__this->___GradientDragStartPosition_26);
		float L_34 = L_33->___y_3;
		float L_35 = __this->___GradientDragMaxDistance_25;
		V_2 = (bool)((((int32_t)((!(((float)L_32) >= ((float)((float)il2cpp_codegen_add(L_34, L_35)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_2;
		if (!L_36)
		{
			goto IL_0116;
		}
	}
	{
		// GradientDragCurrentPosition.y = GradientDragStartPosition.y + GradientDragMaxDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_37 = (&__this->___GradientDragCurrentPosition_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = (&__this->___GradientDragStartPosition_26);
		float L_39 = L_38->___y_3;
		float L_40 = __this->___GradientDragMaxDistance_25;
		L_37->___y_3 = ((float)il2cpp_codegen_add(L_39, L_40));
		goto IL_0189;
	}

IL_0116:
	{
		// else if (GradientDragger.transform.localPosition.y <= GradientDragStartPosition.y - GradientDragMaxDistance)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___GradientDragger_9;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_42, NULL);
		float L_44 = L_43.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_45 = (&__this->___GradientDragStartPosition_26);
		float L_46 = L_45->___y_3;
		float L_47 = __this->___GradientDragMaxDistance_25;
		V_3 = (bool)((((int32_t)((!(((float)L_44) <= ((float)((float)il2cpp_codegen_subtract(L_46, L_47)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_3;
		if (!L_48)
		{
			goto IL_0167;
		}
	}
	{
		// GradientDragCurrentPosition.y = GradientDragStartPosition.y - GradientDragMaxDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_49 = (&__this->___GradientDragCurrentPosition_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = (&__this->___GradientDragStartPosition_26);
		float L_51 = L_50->___y_3;
		float L_52 = __this->___GradientDragMaxDistance_25;
		L_49->___y_3 = ((float)il2cpp_codegen_subtract(L_51, L_52));
		goto IL_0189;
	}

IL_0167:
	{
		// GradientDragCurrentPosition.y = GradientDragger.transform.localPosition.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_53 = (&__this->___GradientDragCurrentPosition_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___GradientDragger_9;
		NullCheck(L_54);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_55, NULL);
		float L_57 = L_56.___y_3;
		L_53->___y_3 = L_57;
	}

IL_0189:
	{
		// GradientDragger.transform.localPosition = GradientDragCurrentPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___GradientDragger_9;
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = __this->___GradientDragCurrentPosition_27;
		NullCheck(L_59);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_59, L_60, NULL);
		// Saturation = Mathf.Abs(GradientDragCurrentPosition.x + (GradientDragMaxDistance * -1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_61 = (&__this->___GradientDragCurrentPosition_27);
		float L_62 = L_61->___x_2;
		float L_63 = __this->___GradientDragMaxDistance_25;
		float L_64;
		L_64 = fabsf(((float)il2cpp_codegen_add(L_62, ((float)il2cpp_codegen_multiply(L_63, (-1.0f))))));
		__this->___Saturation_30 = L_64;
		// Brightness = GradientDragCurrentPosition.y + GradientDragMaxDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_65 = (&__this->___GradientDragCurrentPosition_27);
		float L_66 = L_65->___y_3;
		float L_67 = __this->___GradientDragMaxDistance_25;
		__this->___Brightness_31 = ((float)il2cpp_codegen_add(L_66, L_67));
		// CustomColor = Color.HSVToRGB(Hue, Saturation, Brightness);
		float L_68 = __this->___Hue_29;
		float L_69 = __this->___Saturation_30;
		float L_70 = __this->___Brightness_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_71;
		L_71 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline(L_68, L_69, L_70, NULL);
		__this->___CustomColor_28 = L_71;
		// CustomColor.a = Alpha;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_72 = (&__this->___CustomColor_28);
		float L_73 = __this->___Alpha_32;
		L_72->___a_3 = L_73;
		// UpdateSliderText();
		ColorPicker_UpdateSliderText_mDEE2DA32DC117556B9057D61E1795D6E4CE69E4F(__this, NULL);
		// ApplyColor();
		ColorPicker_ApplyColor_m779AFCF1BFE51E32EFF613FE2BE133A57A79190B(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::ClickGradientTexture(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_ClickGradientTexture_mDC9F2BF6EAA7ACAFA3E6479F237A1788BFC0957C (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GradientDragger.transform.position = eventData.Pointer.Result.Details.Point;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___GradientDragger_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* L_2 = ___eventData0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = MixedRealityPointerEventData_get_Pointer_mE5664622195651CF4C2DC3CEAAF99E3823B74E82_inline(L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::get_Result() */, IMixedRealityPointer_t6B17FD29F171D88877AB2EF9C59FEBB65ED6E446_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 L_5;
		L_5 = InterfaceFuncInvoker0< FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76 >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Physics.FocusDetails Microsoft.MixedReality.Toolkit.Input.IPointerResult::get_Details() */, IPointerResult_t7778124D479BBC1920888EC74BB907B9B569599F_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = FocusDetails_get_Point_mED97A47BC407BF95930337DF61EE88143661B89B_inline((&V_0), NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_6, NULL);
		// ConstrainGradientDragging();
		ColorPicker_ConstrainGradientDragging_m19515D45103785BBAD5315914F0217D62E18A56B(__this, NULL);
		// ApplyColor();
		ColorPicker_ApplyColor_m779AFCF1BFE51E32EFF613FE2BE133A57A79190B(__this, NULL);
		// UpdateSliderText();
		ColorPicker_UpdateSliderText_mDEE2DA32DC117556B9057D61E1795D6E4CE69E4F(__this, NULL);
		// ApplySliderValues();
		ColorPicker_ApplySliderValues_m2FFF7FD3F26DF8549CBC62C59FF5019B94FA346D(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::StartDragGradient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_StartDragGradient_m0A7712218EB9BB2EDC0145B7BFDEECB0BC1140B6 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	{
		// IsDraggingGradient = true;
		__this->___IsDraggingGradient_34 = (bool)1;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::StopDragGradient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_StopDragGradient_m0312BB992CF0D2B570028064390901EDB41A3E94 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	{
		// IsDraggingGradient = false;
		__this->___IsDraggingGradient_34 = (bool)0;
		// ApplySliderValues();
		ColorPicker_ApplySliderValues_m2FFF7FD3F26DF8549CBC62C59FF5019B94FA346D(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::SummonColorPicker(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_SummonColorPicker_m2FE58715C20D0CE68A6AD0D2B491C38B816961DD (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___container0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33CEE3F15418C0F098986E168E0FDE1AFA894626);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC242170F8A475463E858F2021EC16639E17D4D47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD2AFA0E930AC2AFF92E916F9B1CEBC07261A535);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// transform.localScale = Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_2, NULL);
		// transform.position = GameObject.Find(container.name + "/Anchor").transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___container0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteral33CEE3F15418C0F098986E168E0FDE1AFA894626, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_9, NULL);
		// TargetObjectMesh = GameObject.Find(container.name + "/TargetObject (Mesh)").GetComponent<MeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___container0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteralC242170F8A475463E858F2021EC16639E17D4D47, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_12, NULL);
		NullCheck(L_13);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_14;
		L_14 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_13, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		ColorPicker_set_TargetObjectMesh_mA8D15E96B84DFD7C5B254933447BDE43107C5261_inline(__this, L_14, NULL);
		// TargetObjectSprite = GameObject.Find(container.name + "/TargetObject (Sprite)").GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = ___container0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, _stringLiteralCD2AFA0E930AC2AFF92E916F9B1CEBC07261A535, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(L_17, NULL);
		NullCheck(L_18);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_19;
		L_19 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_18, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		ColorPicker_set_TargetObjectSprite_mE994FEBC4F6F2CDFA206273CDE70EB468F742646_inline(__this, L_19, NULL);
		// ExtractColorFromMaterial(TargetObjectMesh);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_20;
		L_20 = ColorPicker_get_TargetObjectMesh_m91C3E32E4A59F41E8ACA4049628C1C8E54F699F4_inline(__this, NULL);
		ColorPicker_ExtractColorFromMaterial_m2E37AC8D7707F70F6BBAC0EC7C6FB4B9E43AB554(__this, L_20, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::UpdateColorHSV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_UpdateColorHSV_m2DD504A4EB6806BB9C4B7E38CE1A90C43D5243B1 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (IsDraggingSliders == true)
		bool L_0 = __this->___IsDraggingSliders_33;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		// Hue = SliderHue.SliderValue;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_2 = __this->___SliderHue_14;
		NullCheck(L_2);
		float L_3;
		L_3 = PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C(L_2, NULL);
		__this->___Hue_29 = L_3;
		// Saturation = SliderSaturation.SliderValue;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_4 = __this->___SliderSaturation_15;
		NullCheck(L_4);
		float L_5;
		L_5 = PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C(L_4, NULL);
		__this->___Saturation_30 = L_5;
		// Brightness = SliderBrightness.SliderValue;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_6 = __this->___SliderBrightness_16;
		NullCheck(L_6);
		float L_7;
		L_7 = PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C(L_6, NULL);
		__this->___Brightness_31 = L_7;
		// CustomColor = Color.HSVToRGB(Hue, Saturation, Brightness);
		float L_8 = __this->___Hue_29;
		float L_9 = __this->___Saturation_30;
		float L_10 = __this->___Brightness_31;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline(L_8, L_9, L_10, NULL);
		__this->___CustomColor_28 = L_11;
		// CustomColor.a = Alpha;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_12 = (&__this->___CustomColor_28);
		float L_13 = __this->___Alpha_32;
		L_12->___a_3 = L_13;
		// UpdateSliderText();
		ColorPicker_UpdateSliderText_mDEE2DA32DC117556B9057D61E1795D6E4CE69E4F(__this, NULL);
		// ApplyColor();
		ColorPicker_ApplyColor_m779AFCF1BFE51E32EFF613FE2BE133A57A79190B(__this, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::UpdateColorRGB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_UpdateColorRGB_mBAC2D4AE2AA0A89F3883C11359ED1D1D65D32948 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (IsDraggingSliders == true)
		bool L_0 = __this->___IsDraggingSliders_33;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00a0;
		}
	}
	{
		// CustomColor.r = SliderRed.SliderValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2 = (&__this->___CustomColor_28);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_3 = __this->___SliderRed_10;
		NullCheck(L_3);
		float L_4;
		L_4 = PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C(L_3, NULL);
		L_2->___r_0 = L_4;
		// CustomColor.g = SliderGreen.SliderValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5 = (&__this->___CustomColor_28);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_6 = __this->___SliderGreen_11;
		NullCheck(L_6);
		float L_7;
		L_7 = PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C(L_6, NULL);
		L_5->___g_1 = L_7;
		// CustomColor.b = SliderBlue.SliderValue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8 = (&__this->___CustomColor_28);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_9 = __this->___SliderBlue_12;
		NullCheck(L_9);
		float L_10;
		L_10 = PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C(L_9, NULL);
		L_8->___b_2 = L_10;
		// Alpha = SliderAlpha.SliderValue;
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_11 = __this->___SliderAlpha_13;
		NullCheck(L_11);
		float L_12;
		L_12 = PinchSlider_get_SliderValue_mF5D1876DF13C6697326A2DFEE25B78E0A5287E9C(L_11, NULL);
		__this->___Alpha_32 = L_12;
		// CustomColor.a = Alpha;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13 = (&__this->___CustomColor_28);
		float L_14 = __this->___Alpha_32;
		L_13->___a_3 = L_14;
		// Color.RGBToHSV(CustomColor, out Hue, out Saturation, out Brightness);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___CustomColor_28;
		float* L_16 = (&__this->___Hue_29);
		float* L_17 = (&__this->___Saturation_30);
		float* L_18 = (&__this->___Brightness_31);
		Color_RGBToHSV_m10DD6CE937F04FE322EED0E154C1D7D6933EA2F8(L_15, L_16, L_17, L_18, NULL);
		// UpdateSliderText();
		ColorPicker_UpdateSliderText_mDEE2DA32DC117556B9057D61E1795D6E4CE69E4F(__this, NULL);
		// ApplyColor();
		ColorPicker_ApplyColor_m779AFCF1BFE51E32EFF613FE2BE133A57A79190B(__this, NULL);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::ExtractColorFromMaterial(UnityEngine.MeshRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_ExtractColorFromMaterial_m2E37AC8D7707F70F6BBAC0EC7C6FB4B9E43AB554 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer0, const RuntimeMethod* method) 
{
	{
		// CustomColor = meshRenderer.material.color;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___meshRenderer0;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_1, NULL);
		__this->___CustomColor_28 = L_2;
		// Color.RGBToHSV(CustomColor, out Hue, out Saturation, out Brightness);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___CustomColor_28;
		float* L_4 = (&__this->___Hue_29);
		float* L_5 = (&__this->___Saturation_30);
		float* L_6 = (&__this->___Brightness_31);
		Color_RGBToHSV_m10DD6CE937F04FE322EED0E154C1D7D6933EA2F8(L_3, L_4, L_5, L_6, NULL);
		// CustomColor.a = Alpha;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = (&__this->___CustomColor_28);
		float L_8 = __this->___Alpha_32;
		L_7->___a_3 = L_8;
		// CalculateGradientDraggerPosition();
		ColorPicker_CalculateGradientDraggerPosition_mEF54FF1D173F1D8F6CBBD581A15FA492C6F26492(__this, NULL);
		// UpdateSliderText();
		ColorPicker_UpdateSliderText_mDEE2DA32DC117556B9057D61E1795D6E4CE69E4F(__this, NULL);
		// ApplyColor();
		ColorPicker_ApplyColor_m779AFCF1BFE51E32EFF613FE2BE133A57A79190B(__this, NULL);
		// ApplySliderValues();
		ColorPicker_ApplySliderValues_m2FFF7FD3F26DF8549CBC62C59FF5019B94FA346D(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::StartDrag(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_StartDrag_m79A56E0FEC9928838220976A0809F6D3F8BBBC2A (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dragger0, const RuntimeMethod* method) 
{
	{
		// dragger.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___dragger0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// IsDraggingSliders = true;
		__this->___IsDraggingSliders_33 = (bool)1;
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::StopDrag(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_StopDrag_m156D2FC9F03011759330E378924158B70B6E6581 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dragger0, const RuntimeMethod* method) 
{
	{
		// dragger.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___dragger0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// IsDraggingSliders = false;
		__this->___IsDraggingSliders_33 = (bool)0;
		// ApplySliderValues();
		ColorPicker_ApplySliderValues_m2FFF7FD3F26DF8549CBC62C59FF5019B94FA346D(__this, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::UpdateSliderText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_UpdateSliderText_mDEE2DA32DC117556B9057D61E1795D6E4CE69E4F (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// TextRed.text = Mathf.Clamp(Mathf.RoundToInt(CustomColor.r * 255), 0, 255).ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_0 = __this->___TextRed_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1 = (&__this->___CustomColor_28);
		float L_2 = L_1->___r_0;
		int32_t L_3;
		L_3 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(L_2, (255.0f))), NULL);
		int32_t L_4;
		L_4 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_3, 0, ((int32_t)255), NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_5);
		// TextBlue.text = Mathf.Clamp(Mathf.RoundToInt(CustomColor.b * 255), 0, 255).ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_6 = __this->___TextBlue_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = (&__this->___CustomColor_28);
		float L_8 = L_7->___b_2;
		int32_t L_9;
		L_9 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(L_8, (255.0f))), NULL);
		int32_t L_10;
		L_10 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_9, 0, ((int32_t)255), NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_11);
		// TextGreen.text = Mathf.Clamp(Mathf.RoundToInt(CustomColor.g * 255), 0, 255).ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_12 = __this->___TextGreen_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13 = (&__this->___CustomColor_28);
		float L_14 = L_13->___g_1;
		int32_t L_15;
		L_15 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(L_14, (255.0f))), NULL);
		int32_t L_16;
		L_16 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_15, 0, ((int32_t)255), NULL);
		V_0 = L_16;
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_17);
		// TextAlpha.text = Mathf.Clamp(Mathf.RoundToInt(CustomColor.a * 100), 0, 100) + "%";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_18 = __this->___TextAlpha_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_19 = (&__this->___CustomColor_28);
		float L_20 = L_19->___a_3;
		int32_t L_21;
		L_21 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(L_20, (100.0f))), NULL);
		int32_t L_22;
		L_22 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_21, 0, ((int32_t)100), NULL);
		V_0 = L_22;
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_23, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_24);
		// TextHex.text = "#" + ColorUtility.ToHtmlStringRGBA(CustomColor);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_25 = __this->___TextHex_21;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = __this->___CustomColor_28;
		String_t* L_27;
		L_27 = ColorUtility_ToHtmlStringRGBA_m54909224DA2C5FA940C41FBAD832B0B838163409(L_26, NULL);
		String_t* L_28;
		L_28 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, L_27, NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_25, L_28);
		// TextHue.text = Mathf.Clamp(Mathf.RoundToInt(Hue * 360), 0, 360).ToString();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_29 = __this->___TextHue_22;
		float L_30 = __this->___Hue_29;
		int32_t L_31;
		L_31 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(L_30, (360.0f))), NULL);
		int32_t L_32;
		L_32 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_31, 0, ((int32_t)360), NULL);
		V_0 = L_32;
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_29);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_29, L_33);
		// TextSaturation.text = Mathf.Clamp(Mathf.RoundToInt(Saturation * 100), 0, 100) + "%";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_34 = __this->___TextSaturation_23;
		float L_35 = __this->___Saturation_30;
		int32_t L_36;
		L_36 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(L_35, (100.0f))), NULL);
		int32_t L_37;
		L_37 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_36, 0, ((int32_t)100), NULL);
		V_0 = L_37;
		String_t* L_38;
		L_38 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_39;
		L_39 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_38, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_34);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_34, L_39);
		// TextBrightness.text = Mathf.Clamp(Mathf.RoundToInt(Brightness * 100), 0, 100) + "%";
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_40 = __this->___TextBrightness_24;
		float L_41 = __this->___Brightness_31;
		int32_t L_42;
		L_42 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(L_41, (100.0f))), NULL);
		int32_t L_43;
		L_43 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_42, 0, ((int32_t)100), NULL);
		V_0 = L_43;
		String_t* L_44;
		L_44 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_45;
		L_45 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_44, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_40);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_40, L_45);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::ApplyColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_ApplyColor_m779AFCF1BFE51E32EFF613FE2BE133A57A79190B (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral930520E87785B4B66F5B135483BB0740F0C41747);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* V_3 = NULL;
	int32_t V_4 = 0;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_5 = NULL;
	bool V_6 = false;
	SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* V_7 = NULL;
	int32_t V_8 = 0;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (GradientMesh != null && GradientMesh.material != null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___GradientMesh_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->___GradientMesh_8;
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// GradientMesh.material.color = Color.HSVToRGB(Hue, 1, 1);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6 = __this->___GradientMesh_8;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_6, NULL);
		float L_8 = __this->___Hue_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline(L_8, (1.0f), (1.0f), NULL);
		NullCheck(L_7);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_7, L_9, NULL);
	}

IL_004f:
	{
		// if (TargetObjectMesh != null && TargetObjectMesh.material != null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_10;
		L_10 = ColorPicker_get_TargetObjectMesh_m91C3E32E4A59F41E8ACA4049628C1C8E54F699F4_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0070;
		}
	}
	{
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_12;
		L_12 = ColorPicker_get_TargetObjectMesh_m91C3E32E4A59F41E8ACA4049628C1C8E54F699F4_inline(__this, NULL);
		NullCheck(L_12);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
		L_13 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B8_0 = ((int32_t)(L_14));
		goto IL_0071;
	}

IL_0070:
	{
		G_B8_0 = 0;
	}

IL_0071:
	{
		V_1 = (bool)G_B8_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_008e;
		}
	}
	{
		// TargetObjectMesh.material.color = CustomColor;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_16;
		L_16 = ColorPicker_get_TargetObjectMesh_m91C3E32E4A59F41E8ACA4049628C1C8E54F699F4_inline(__this, NULL);
		NullCheck(L_16);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17;
		L_17 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_16, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = __this->___CustomColor_28;
		NullCheck(L_17);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_17, L_18, NULL);
	}

IL_008e:
	{
		// if (TargetObjectSprite != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_19;
		L_19 = ColorPicker_get_TargetObjectSprite_m89679FB7782AD743D51B3CAEA89D99C481BE0DB2_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_20;
		bool L_21 = V_2;
		if (!L_21)
		{
			goto IL_00b2;
		}
	}
	{
		// TargetObjectSprite.color = CustomColor;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22;
		L_22 = ColorPicker_get_TargetObjectSprite_m89679FB7782AD743D51B3CAEA89D99C481BE0DB2_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = __this->___CustomColor_28;
		NullCheck(L_22);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_22, L_23, NULL);
	}

IL_00b2:
	{
		// foreach (MeshRenderer rend in PickerUIMeshes)
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_24 = __this->___PickerUIMeshes_6;
		V_3 = L_24;
		V_4 = 0;
		goto IL_00f0;
	}

IL_00bf:
	{
		// foreach (MeshRenderer rend in PickerUIMeshes)
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_5 = L_28;
		// if (rend != null)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_29 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_30;
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00e9;
		}
	}
	{
		// rend.material.color = CustomColor;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_32 = V_5;
		NullCheck(L_32);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33;
		L_33 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_32, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = __this->___CustomColor_28;
		NullCheck(L_33);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_33, L_34, NULL);
	}

IL_00e9:
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00f0:
	{
		// foreach (MeshRenderer rend in PickerUIMeshes)
		int32_t L_36 = V_4;
		MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* L_37 = V_3;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_00bf;
		}
	}
	{
		// foreach (SpriteRenderer rend in PickerUISprites)
		SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* L_38 = __this->___PickerUISprites_7;
		V_7 = L_38;
		V_8 = 0;
		goto IL_017e;
	}

IL_0105:
	{
		// foreach (SpriteRenderer rend in PickerUISprites)
		SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* L_39 = V_7;
		int32_t L_40 = V_8;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_9 = L_42;
		// if (rend != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_43 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_43, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_10 = L_44;
		bool L_45 = V_10;
		if (!L_45)
		{
			goto IL_0177;
		}
	}
	{
		// rend.color = CustomColor;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_46 = V_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47 = __this->___CustomColor_28;
		NullCheck(L_46);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_46, L_47, NULL);
		// if (rend.name == "Dragger")
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_48 = V_9;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_48, NULL);
		bool L_50;
		L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, _stringLiteral930520E87785B4B66F5B135483BB0740F0C41747, NULL);
		V_11 = L_50;
		bool L_51 = V_11;
		if (!L_51)
		{
			goto IL_0176;
		}
	}
	{
		// rend.color = new Color(CustomColor.r, CustomColor.g, CustomColor.b, 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_52 = V_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_53 = (&__this->___CustomColor_28);
		float L_54 = L_53->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_55 = (&__this->___CustomColor_28);
		float L_56 = L_55->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_57 = (&__this->___CustomColor_28);
		float L_58 = L_57->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59;
		memset((&L_59), 0, sizeof(L_59));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_59), L_54, L_56, L_58, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_52);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_52, L_59, NULL);
	}

IL_0176:
	{
	}

IL_0177:
	{
		int32_t L_60 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_017e:
	{
		// foreach (SpriteRenderer rend in PickerUISprites)
		int32_t L_61 = V_8;
		SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* L_62 = V_7;
		NullCheck(L_62);
		if ((((int32_t)L_61) < ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))
		{
			goto IL_0105;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::ApplySliderValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker_ApplySliderValues_m2FFF7FD3F26DF8549CBC62C59FF5019B94FA346D (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	{
		// SliderRed.SliderValue = Mathf.Clamp(CustomColor.r, 0, 1);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_0 = __this->___SliderRed_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1 = (&__this->___CustomColor_28);
		float L_2 = L_1->___r_0;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), (1.0f), NULL);
		NullCheck(L_0);
		PinchSlider_set_SliderValue_mFAC20C5B0DFE5F5A02EBB1D40BFCA33F4C9A3B3C(L_0, L_3, NULL);
		// SliderGreen.SliderValue = Mathf.Clamp(CustomColor.g, 0, 1);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_4 = __this->___SliderGreen_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5 = (&__this->___CustomColor_28);
		float L_6 = L_5->___g_1;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, (0.0f), (1.0f), NULL);
		NullCheck(L_4);
		PinchSlider_set_SliderValue_mFAC20C5B0DFE5F5A02EBB1D40BFCA33F4C9A3B3C(L_4, L_7, NULL);
		// SliderBlue.SliderValue = Mathf.Clamp(CustomColor.b, 0, 1);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_8 = __this->___SliderBlue_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_9 = (&__this->___CustomColor_28);
		float L_10 = L_9->___b_2;
		float L_11;
		L_11 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_10, (0.0f), (1.0f), NULL);
		NullCheck(L_8);
		PinchSlider_set_SliderValue_mFAC20C5B0DFE5F5A02EBB1D40BFCA33F4C9A3B3C(L_8, L_11, NULL);
		// SliderAlpha.SliderValue = Mathf.Clamp(CustomColor.a, 0, 1);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_12 = __this->___SliderAlpha_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13 = (&__this->___CustomColor_28);
		float L_14 = L_13->___a_3;
		float L_15;
		L_15 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_14, (0.0f), (1.0f), NULL);
		NullCheck(L_12);
		PinchSlider_set_SliderValue_mFAC20C5B0DFE5F5A02EBB1D40BFCA33F4C9A3B3C(L_12, L_15, NULL);
		// SliderHue.SliderValue = Mathf.Clamp(Hue, 0, 1);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_16 = __this->___SliderHue_14;
		float L_17 = __this->___Hue_29;
		float L_18;
		L_18 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_17, (0.0f), (1.0f), NULL);
		NullCheck(L_16);
		PinchSlider_set_SliderValue_mFAC20C5B0DFE5F5A02EBB1D40BFCA33F4C9A3B3C(L_16, L_18, NULL);
		// SliderSaturation.SliderValue = Mathf.Clamp(Saturation, 0, 1);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_19 = __this->___SliderSaturation_15;
		float L_20 = __this->___Saturation_30;
		float L_21;
		L_21 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_20, (0.0f), (1.0f), NULL);
		NullCheck(L_19);
		PinchSlider_set_SliderValue_mFAC20C5B0DFE5F5A02EBB1D40BFCA33F4C9A3B3C(L_19, L_21, NULL);
		// SliderBrightness.SliderValue = Mathf.Clamp(Brightness, 0, 1);
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_22 = __this->___SliderBrightness_16;
		float L_23 = __this->___Brightness_31;
		float L_24;
		L_24 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_23, (0.0f), (1.0f), NULL);
		NullCheck(L_22);
		PinchSlider_set_SliderValue_mFAC20C5B0DFE5F5A02EBB1D40BFCA33F4C9A3B3C(L_22, L_24, NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.ColorPicker.ColorPicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPicker__ctor_m1D789391CBE05AAD48E7CE7769124C65C89642E7 (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	{
		// private MeshRenderer targetObjectMesh = null;
		__this->___targetObjectMesh_4 = (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetObjectMesh_4), (void*)(MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)NULL);
		// private SpriteRenderer targetObjectSprite = null;
		__this->___targetObjectSprite_5 = (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetObjectSprite_5), (void*)(SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)NULL);
		// private MeshRenderer[] PickerUIMeshes = null;
		__this->___PickerUIMeshes_6 = (MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PickerUIMeshes_6), (void*)(MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446*)NULL);
		// private SpriteRenderer[] PickerUISprites = null;
		__this->___PickerUISprites_7 = (SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PickerUISprites_7), (void*)(SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28*)NULL);
		// private MeshRenderer GradientMesh = null;
		__this->___GradientMesh_8 = (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GradientMesh_8), (void*)(MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)NULL);
		// private GameObject GradientDragger = null;
		__this->___GradientDragger_9 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GradientDragger_9), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// private PinchSlider SliderRed = null;
		__this->___SliderRed_10 = (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SliderRed_10), (void*)(PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)NULL);
		// private PinchSlider SliderGreen = null;
		__this->___SliderGreen_11 = (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SliderGreen_11), (void*)(PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)NULL);
		// private PinchSlider SliderBlue = null;
		__this->___SliderBlue_12 = (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SliderBlue_12), (void*)(PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)NULL);
		// private PinchSlider SliderAlpha = null;
		__this->___SliderAlpha_13 = (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SliderAlpha_13), (void*)(PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)NULL);
		// private PinchSlider SliderHue = null;
		__this->___SliderHue_14 = (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SliderHue_14), (void*)(PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)NULL);
		// private PinchSlider SliderSaturation = null;
		__this->___SliderSaturation_15 = (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SliderSaturation_15), (void*)(PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)NULL);
		// private PinchSlider SliderBrightness = null;
		__this->___SliderBrightness_16 = (PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SliderBrightness_16), (void*)(PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01*)NULL);
		// private TextMeshPro TextRed = null;
		__this->___TextRed_17 = (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextRed_17), (void*)(TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL);
		// private TextMeshPro TextGreen = null;
		__this->___TextGreen_18 = (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextGreen_18), (void*)(TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL);
		// private TextMeshPro TextBlue = null;
		__this->___TextBlue_19 = (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextBlue_19), (void*)(TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL);
		// private TextMeshPro TextAlpha = null;
		__this->___TextAlpha_20 = (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextAlpha_20), (void*)(TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL);
		// private TextMeshPro TextHex = null;
		__this->___TextHex_21 = (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextHex_21), (void*)(TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL);
		// private TextMeshPro TextHue = null;
		__this->___TextHue_22 = (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextHue_22), (void*)(TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL);
		// private TextMeshPro TextSaturation = null;
		__this->___TextSaturation_23 = (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextSaturation_23), (void*)(TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL);
		// private TextMeshPro TextBrightness = null;
		__this->___TextBrightness_24 = (TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextBrightness_24), (void*)(TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E*)NULL);
		// private float GradientDragMaxDistance = 0.5f;
		__this->___GradientDragMaxDistance_25 = (0.5f);
		// private float Hue, Saturation, Brightness, Alpha = 0.3f;
		__this->___Alpha_32 = (0.300000012f);
		// private bool IsDraggingSliders = false;
		__this->___IsDraggingSliders_33 = (bool)0;
		// private bool IsDraggingGradient = false;
		__this->___IsDraggingGradient_34 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF3D125C5B3FD1A1C289750E9B17AE69DA88CB4D3 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* NonNativeKeyboard_get_Instance_mE2298AEF4256881EF216DC07D471DEDCA7622FDE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NonNativeKeyboard Instance { get; private set; }
		NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* L_0 = ((NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_StaticFields*)il2cpp_codegen_static_fields_for(NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NonNativeKeyboard_set_Instance_m7B233AFDAACD8724626E022828C6EBB81048BCB5_inline (NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NonNativeKeyboard Instance { get; private set; }
		NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79* L_0 = ___value0;
		((NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_StaticFields*)il2cpp_codegen_static_fields_for(NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_StaticFields*)il2cpp_codegen_static_fields_for(NonNativeKeyboard_tB5E565E4CFAA84A33B855CE7B79A983EFAC7BE79_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___planeNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___planeNormal1;
		float L_2;
		L_2 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		V_2 = L_6;
		goto IL_005d;
	}

IL_0019:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___planeNormal1;
		float L_9;
		L_9 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___planeNormal1;
		float L_13 = L_12.___x_2;
		float L_14 = V_3;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___vector0;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___planeNormal1;
		float L_19 = L_18.___y_3;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___vector0;
		float L_23 = L_22.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___planeNormal1;
		float L_25 = L_24.___z_4;
		float L_26 = V_3;
		float L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)il2cpp_codegen_subtract(L_11, ((float)(((float)il2cpp_codegen_multiply(L_13, L_14))/L_15)))), ((float)il2cpp_codegen_subtract(L_17, ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)))), ((float)il2cpp_codegen_subtract(L_23, ((float)(((float)il2cpp_codegen_multiply(L_25, L_26))/L_27)))), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_005d;
	}

IL_005d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		return L_29;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DictationEventData_get_DictationResult_mF96CB4768813079CAD8C4D785A88301F3FAE0B67_inline (DictationEventData_t12B9F7196FAB9412DC98501BC71F0AFB7B63F450* __this, const RuntimeMethod* method) 
{
	{
		// public string DictationResult { get; private set; }
		String_t* L_0 = __this->___U3CDictationResultU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___rhs1;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyboardKeyFunc_get_ButtonFunction_m1FC5405B71A3B847BFCC28378BDE30447E4C4EAB_inline (KeyboardKeyFunc_t91A230E92ABC164F505662FE773648AA6582D650* __this, const RuntimeMethod* method) 
{
	{
		// public Function ButtonFunction => buttonFunction;
		int32_t L_0 = __this->___buttonFunction_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseNearInteractionTouchable_set_EventsToReceive_m860635144CCD9EA8D720B439FF856866DDDDFDA5_inline (BaseNearInteractionTouchable_t9646FAE4C0D5A711AFEC453F37F9A80FA5921FDF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public TouchableEventType EventsToReceive { get => eventsToReceive; set => eventsToReceive = value; }
		int32_t L_0 = ___value0;
		__this->___eventsToReceive_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_m1CE6BEDA3EF8569E939F77A4B0231D9839864F92_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UICollection_set_Items_m57B1555B32F4E859F3C17BC93E50B0B4DB2BCB7E_inline (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___value0, const RuntimeMethod* method) 
{
	{
		// public List<RectTransform> Items { get; private set; }
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_0 = ___value0;
		__this->___U3CItemsU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CItemsU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* UICollection_get_Items_m50E30E2498B99F5010476F622A21512FB3451F30_inline (UICollection_t9694A1A887D114B22267FA4E2993D8E811A371F8* __this, const RuntimeMethod* method) 
{
	{
		// public List<RectTransform> Items { get; private set; }
		List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* L_0 = __this->___U3CItemsU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MinMaxScaleConstraint_get_ScaleMinimumVector_m2F3D61BB057ACE55E11F78C19AC03A3846B37876_inline (MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 ScaleMinimumVector => minimumScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___minimumScale_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = __this->___x_2;
		V_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = __this->___y_3;
		V_2 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = __this->___z_4;
		V_2 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var)));
	}

IL_003f:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MinMaxScaleConstraint_get_ScaleMaximumVector_m61F236755D1B8ABAE8B47F215D288179DC8A1BAD_inline (MinMaxScaleConstraint_tE1F8DB17DBD2C1CBDD9821386FC16452D6A272A5* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 ScaleMaximumVector => maximumScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___maximumScale_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* SliderEventData_get_Slider_m9AF3806FEBEC323215B3399190E168545CB697EA_inline (SliderEventData_t9521253056FDB039CDDD0FE04DCC4432AFC05EDE* __this, const RuntimeMethod* method) 
{
	{
		// public PinchSlider Slider { get; private set; }
		PinchSlider_tE4C006EED1C607D874C2F39F587C6143C2DC5F01* L_0 = __this->___U3CSliderU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = ___value1;
		__this->___x_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = ___value1;
		__this->___y_3 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = ___value1;
		__this->___z_4 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_RuntimeMethod_var)));
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityPointerEventData_get_Pointer_mE5664622195651CF4C2DC3CEAAF99E3823B74E82_inline (MixedRealityPointerEventData_t109EE708B8ACE83EA37188C65C8F120B7418AB7B* __this, const RuntimeMethod* method) 
{
	{
		// public IMixedRealityPointer Pointer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPointerU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FocusEventData_get_Pointer_m99B9460351B3413A8123E3561E22C06B0B4A664C_inline (FocusEventData_t3AD7DE28F6F0A2A7CA9843944A0E0DE4B8868E4A* __this, const RuntimeMethod* method) 
{
	{
		// public IMixedRealityPointer Pointer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPointerU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___H0, float ___S1, float ___V2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___H0;
		float L_1 = ___S1;
		float L_2 = ___V2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF(L_0, L_1, L_2, (bool)1, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FocusDetails_get_Point_mED97A47BC407BF95930337DF61EE88143661B89B_inline (FocusDetails_tCC0560E1B8D05F5708757F751A5A469A4530EA76* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Point { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPointU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorPicker_set_TargetObjectMesh_mA8D15E96B84DFD7C5B254933447BDE43107C5261_inline (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___value0, const RuntimeMethod* method) 
{
	{
		// set => targetObjectMesh = value;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ___value0;
		__this->___targetObjectMesh_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetObjectMesh_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorPicker_set_TargetObjectSprite_mE994FEBC4F6F2CDFA206273CDE70EB468F742646_inline (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___value0, const RuntimeMethod* method) 
{
	{
		// set => targetObjectSprite = value;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___value0;
		__this->___targetObjectSprite_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetObjectSprite_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ColorPicker_get_TargetObjectMesh_m91C3E32E4A59F41E8ACA4049628C1C8E54F699F4_inline (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	{
		// get => targetObjectMesh;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___targetObjectMesh_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ColorPicker_get_TargetObjectSprite_m89679FB7782AD743D51B3CAEA89D99C481BE0DB2_inline (ColorPicker_t72F92B317FF86E63D24504E4C9AD80DB7B0D6C16* __this, const RuntimeMethod* method) 
{
	{
		// get => targetObjectSprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___targetObjectSprite_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputEventData_1_get_InputData_m6FA48F377DF5F57338C37322468A877D1448B0E9_gshared_inline (InputEventData_1_t512F7986EF58A2396A36B30876A30E3DB626B300* __this, const RuntimeMethod* method) 
{
	{
		// public T InputData { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)__this->___U3CInputDataU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
