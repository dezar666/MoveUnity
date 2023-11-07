#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Concurrent.ConcurrentQueue`1<LogMessage>
struct ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9;
// System.Collections.Concurrent.ConcurrentQueue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.Dictionary`2<System.Char,System.String>
struct Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>
struct Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEqualityComparer`1<System.Char>
struct IEqualityComparer_1_t84CD58C3582484C691B22BB0E534C8ADD9B22966;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.String>
struct KeyCollection_t0FD9EECB23AA29667D87078D602659F959A0FF3D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,YMMJSONUtils.JObject>
struct KeyCollection_tC51CF0A3B186BC380808B9318CC7C56FD3644F9B;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<IDatePersistence>
struct List_1_t47CFEB4A1D553DC3E2A5023F60B48B5EE677F159;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<YMMJSONUtils.JObject>
struct List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<LogMessage>
struct Segment_t4110E00936B77BA6F681D56DC365E61128EC45C2;
// SerializableDictionary`2<System.Int32,System.Boolean>
struct SerializableDictionary_2_tB14DBB3450AC0EAFE7C540DBA69676330906FBE3;
// SerializableDictionary`2<System.String,System.Boolean>
struct SerializableDictionary_2_t1E9965CA9DB11A865605B4BA17645100F6263CB9;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Char,System.String>
struct ValueCollection_t50882FF02995C66EE3946729BF420CAB6A828FD3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,YMMJSONUtils.JObject>
struct ValueCollection_t95F7F922558511951438334CE9FA7A6D7E604520;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Collections.Generic.Dictionary`2/Entry<System.Char,System.String>[]
struct EntryU5BU5D_t238AD73EAFC2E2EBB354482102AFAE62262E0A1C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,YMMJSONUtils.JObject>[]
struct EntryU5BU5D_t4345C4E37F303166A5ACB2BD5206121B40DAA431;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// BlockState[]
struct BlockStateU5BU5D_t4A8423311EDD1A936640D3BE18AEC814A6DF7F4D;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// ChangeGrass[]
struct ChangeGrassU5BU5D_t585730B721C8205A61D2FC6B9725BD4B5FA243ED;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// EnemyManager[]
struct EnemyManagerU5BU5D_tEBF3B3A1F37EAE6CD09BC665E9F55E7B83D67BE2;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// ItemPickUp[]
struct ItemPickUpU5BU5D_tA93E03103F17E83ABF041C71033A9AD9BFF7582B;
// YMMJSONUtils.JObject[]
struct JObjectU5BU5D_tD5B7463B5D5149722FE8BA1F83AC12A9887A3488;
// LevelManager[]
struct LevelManagerU5BU5D_tEFB5A2FE0FDBFA932F30E720DD75643B7DEF03D7;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// Teleport[]
struct TeleportU5BU5D_t8F18F5838DA3CC2B64358571F586209C3A5C51B6;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
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
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// FpsDisplay/FPSColor[]
struct FPSColorU5BU5D_tCE767ECA83A75389A07BF36A43CFBF6BC7EB89EC;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CharacterMovement
struct CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// CollectedItems
struct CollectedItems_tBDA98FFEBF8ADD9E346417ED22C08B4177E6B1E0;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// CurrentLevel
struct CurrentLevel_t8CD70AE97791B07F5855BC398A64DE9E1FDC3494;
// DataPersictenceManager
struct DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// FadedSceneLoader
struct FadedSceneLoader_tCF4876F76024D65CC24A18500759F8D161BAA7C3;
// FileAppender
struct FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996;
// FileDataHandler
struct FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// FileWriter
struct FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// FpsCounter
struct FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D;
// FpsDisplay
struct FpsDisplay_tEA3840316D8926D6080862BF1482309EE394F9A7;
// GameData
struct GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Gate
struct Gate_tD423C3E3C6A390BF4DCC10322CBA2485840FF97A;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// IYandexAppMetrica
struct IYandexAppMetrica_tB3A5E9F132EF235F8E00022B73B3B6BCCEAAD334;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// YMMJSONUtils.JObject
struct JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0;
// YMMJSONUtils.JSONEncoder
struct JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87;
// Key
struct Key_tABCAEDDA423FEA303C2D20401D8E0797217C46F7;
// LastLevel
struct LastLevel_tB72C74C5ABEDCD7648EE85015D0BB46178A2B238;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LevelButton
struct LevelButton_t181AB7DF29F57A7CBB327E3C2C0CD1E8AB8D1D33;
// LevelCompleated
struct LevelCompleated_t68241CF086BC49C7639BB955BFB4873BD3CBC8AA;
// LevelLoader
struct LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020;
// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// LogMessage
struct LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990;
// Logger
struct Logger_t19EB2991B2797127D411A958B24298AE41917827;
// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MovementScript
struct MovementScript_t6522B47D756CA8CDD763EF2587FD7A492FBA2AD2;
// MovingBlock
struct MovingBlock_t8D89009029AED7959D38DE9EE86A556B7F2C24EA;
// MovingObject
struct MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// LayerLab.CasualGame.PanelCasualGame
struct PanelCasualGame_t51BB081FC0E5F9E57CE91F3135C48C7101669513;
// LayerLab.CasualGame.PanelControlCasualGame
struct PanelControlCasualGame_tDD8EA28B8DA4618151B4B524E2B823A96E91FE0C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4;
// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayerAudioManager
struct PlayerAudioManager_t3899732640F9371B24B96E3479AB30E439A2B462;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// ScoreBar
struct ScoreBar_tD55000AAA69DF439305FD72C98CDA18DE7CF3566;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// SetSpawnPoint
struct SetSpawnPoint_tE19853A2C396AAA47BBDB4927074D03A63279337;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SnapPosition
struct SnapPosition_tA8954B7A34C68D2B95E25A05FBD48B160F718877;
// SoundController
struct SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// SwipeDetection
struct SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62;
// SwipeInput
struct SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Teleport
struct Teleport_t7DA0AAB400611F9CE2A644E906868E196EBF22AC;
// TeleportPoint
struct TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// ToggleScript
struct ToggleScript_t86B17E85F7C4F77D06BC61AC68F2A5816DB5AF50;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TreeItem
struct TreeItem_t6AB996CBA4C62BA5570A32A7B69BB4B096E367A3;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// System.Type
struct Type_t;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D;
// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3;
// UnityEngine.UI.Extensions.CasualGame.UIParticleSystem
struct UIParticleSystem_tE2CFBE1857452933388A21DC001933C6DBC62AC5;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WallBuilder
struct WallBuilder_t967DD1B1805AA4C8939B7E725EE2ACC8B4097831;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// LevelCompleated/<WaitSomeTime>d__11
struct U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12;
// MainMenu/<LoadAsync>d__14
struct U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// SwipeDetection/Swipe
struct Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppMetrica_tBA71C26309F2BD9EBE9EC60D01788F52D063EF81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FadedSceneLoader_tCF4876F76024D65CC24A18500759F8D161BAA7C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IYandexAppMetrica_tB3A5E9F132EF235F8E00022B73B3B6BCCEAAD334_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoveDirection_t25F216271E44E3F390EF779503C6C81639E888C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral013DA6E48D6D0616544F966EBF1ADEC7B6254D4B;
IL2CPP_EXTERN_C String_t* _stringLiteral035D44F946AF053A0163B3A4BFD6A52AED246816;
IL2CPP_EXTERN_C String_t* _stringLiteral03CB7A0F2F7AAD28CE58D297B7A10BA9606D89D4;
IL2CPP_EXTERN_C String_t* _stringLiteral04CAC48E1938CF72D7BBC46B278992C1A311515A;
IL2CPP_EXTERN_C String_t* _stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE;
IL2CPP_EXTERN_C String_t* _stringLiteral0DA1A21F5DC7D20E3A2832D8CDA7B4ADCD2A2789;
IL2CPP_EXTERN_C String_t* _stringLiteral15E812F5755E8FB8F14234EC436436A5686DEAF4;
IL2CPP_EXTERN_C String_t* _stringLiteral1645079AF0AD68877D5774BC81695A708DB69E30;
IL2CPP_EXTERN_C String_t* _stringLiteral17CF05962AC1AC77CD4B5247CC6311690D8DAFE5;
IL2CPP_EXTERN_C String_t* _stringLiteral1AA1790AE1BC157DD7BC2E8E7D142CB22C2346A8;
IL2CPP_EXTERN_C String_t* _stringLiteral1B0F94B590FC16451340705DFFEBEA0F5DB16189;
IL2CPP_EXTERN_C String_t* _stringLiteral1D31BD1B4C79BAB71F98F7341183F855786534EE;
IL2CPP_EXTERN_C String_t* _stringLiteral1D7E532EA242647676D2FDC0CEDAC8275E273296;
IL2CPP_EXTERN_C String_t* _stringLiteral1DC9F6BC39F00E092B0BEEEEE189243DA24E1C20;
IL2CPP_EXTERN_C String_t* _stringLiteral1EABFF598CE5B1DE50532CB71FD74C8F1B848045;
IL2CPP_EXTERN_C String_t* _stringLiteral223CA56814CE64D5CFDB92BD828F5C0263182384;
IL2CPP_EXTERN_C String_t* _stringLiteral22B0985C4D41B05D3B01754EAFB601C5802BDD79;
IL2CPP_EXTERN_C String_t* _stringLiteral232FD38C46B54EF04D83C7ECFDDB14B35740E3D1;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral23B4237CD57C98463074F50A9168192F28DC9F95;
IL2CPP_EXTERN_C String_t* _stringLiteral23D72B75D68B9604EF38286D992443551BE6B472;
IL2CPP_EXTERN_C String_t* _stringLiteral26624E47EFBA198B8A9D8F24D36ED1F5C840F72B;
IL2CPP_EXTERN_C String_t* _stringLiteral26DC5E0BF73157E4A9F40EBB2C5D045B1E35CA62;
IL2CPP_EXTERN_C String_t* _stringLiteral29ACA8B35D157255506569C2FDE770164887E7A9;
IL2CPP_EXTERN_C String_t* _stringLiteral2EA2405F13DEC80B58830B0537815C420C4EDA1A;
IL2CPP_EXTERN_C String_t* _stringLiteral31390CC5A93CAD4B352761FBC72BF7060DCD4290;
IL2CPP_EXTERN_C String_t* _stringLiteral331550C0DB1643A8C5E6C9E3A71B9D7B919BAA4D;
IL2CPP_EXTERN_C String_t* _stringLiteral36811CDFE9188DD6E678940755868CCAD833C207;
IL2CPP_EXTERN_C String_t* _stringLiteral378D4B13D43254F58BBC24781F8D679374A87290;
IL2CPP_EXTERN_C String_t* _stringLiteral38428ED9CF894DD8900E3EFE3AF876442EC18630;
IL2CPP_EXTERN_C String_t* _stringLiteral3B1F844FC8B37D0220BFC2B961AA65E0F1B37A4A;
IL2CPP_EXTERN_C String_t* _stringLiteral3F2610BD29C00CCB98CBE4D5E8D3EA27DFA76A57;
IL2CPP_EXTERN_C String_t* _stringLiteral42F23AB2A3A10ACC0655DD1B40479C7C524EB8CF;
IL2CPP_EXTERN_C String_t* _stringLiteral48C81EC4EFA65C9154EEE61EFFDE60DBE59D9149;
IL2CPP_EXTERN_C String_t* _stringLiteral49459F40691C75A3DA9CEC5653DF0A89223D96CB;
IL2CPP_EXTERN_C String_t* _stringLiteral4A53270547EE7281801C431BDD0E98947C3D3235;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4C66E45573C133DD8A6C2C27F219D662406993BA;
IL2CPP_EXTERN_C String_t* _stringLiteral4F91A67128A20B774E7007B8FA34D9460DEECFE5;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral521FB55423CC068B92B5E8453A36DF0D6CBDD93F;
IL2CPP_EXTERN_C String_t* _stringLiteral54D7885D1D716DC6D8F0018DDB6363829D28D5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral556DDA907570BAA94FD8305D5E082166623C2DE7;
IL2CPP_EXTERN_C String_t* _stringLiteral564F8D06BB59C6D9E75745A49D7A45A7875B78B8;
IL2CPP_EXTERN_C String_t* _stringLiteral57FB75EFE62EFCFA46A7519D514A1EE2738B1325;
IL2CPP_EXTERN_C String_t* _stringLiteral594731E53B6AAB1637B129ADD00D9E8B719AB998;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral597CCAAD822896FC6E71012763467F92C7EBBB45;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5CFAA1085C1E7A33C1838490FEE60CB112C68908;
IL2CPP_EXTERN_C String_t* _stringLiteral656F9736477335AF0B68DB002FCA2CF39D90BE17;
IL2CPP_EXTERN_C String_t* _stringLiteral689C266FAF9DA42F9B0B13194EC62FCD4F537F54;
IL2CPP_EXTERN_C String_t* _stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E;
IL2CPP_EXTERN_C String_t* _stringLiteral6A5A33D881BF3BC2A264AD65CEA496BEFB499ECD;
IL2CPP_EXTERN_C String_t* _stringLiteral6DE9B802160BBFD2676221825BF9B1BA083BB842;
IL2CPP_EXTERN_C String_t* _stringLiteral6F7B03E8D49E8A4621051DE1962CB493500481ED;
IL2CPP_EXTERN_C String_t* _stringLiteral6FD9807F6FB54EB3596675E429E3C989BAD29058;
IL2CPP_EXTERN_C String_t* _stringLiteral700C1596CA301B3AA61533700CEED311DC1053BC;
IL2CPP_EXTERN_C String_t* _stringLiteral70A3CC498A396DB6AAFDB20BBB977F32E586F3ED;
IL2CPP_EXTERN_C String_t* _stringLiteral711F8FB7EBB7FDAC8B8722A4C60A0BFB244C05CD;
IL2CPP_EXTERN_C String_t* _stringLiteral727B9F62266ED714B16AD3CD556D127E287B7EF2;
IL2CPP_EXTERN_C String_t* _stringLiteral7353C41C94834E4F94476B65695D9DD63DA5FAF5;
IL2CPP_EXTERN_C String_t* _stringLiteral77B27FBC427F2E64E84540382BF80B1B14133EC9;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral77F9EF517F2B20A7654CC97FB749C3F9AA1BCFB7;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral792BED7AE838D9267644F8329AA86A301260BB2C;
IL2CPP_EXTERN_C String_t* _stringLiteral7A0715F14179DC419A2631015EA9C917407CE86C;
IL2CPP_EXTERN_C String_t* _stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F;
IL2CPP_EXTERN_C String_t* _stringLiteral7B2714DCE6714B9B5A18319E32D6EAF31CA21A99;
IL2CPP_EXTERN_C String_t* _stringLiteral7BB1216534F62E33C705BB99471F10C9CAEBFBE4;
IL2CPP_EXTERN_C String_t* _stringLiteral7BE89227A0BBC17012796DD27BB68B0D5FB2D35E;
IL2CPP_EXTERN_C String_t* _stringLiteral7D552237CC7BE75F25030583A548DF1569AD38DE;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral80B8671A49E749CC71E72F5C36599D0445F8A623;
IL2CPP_EXTERN_C String_t* _stringLiteral816238D2C5B664EF76E039079E40C1492ADCF0EC;
IL2CPP_EXTERN_C String_t* _stringLiteral8164785248D4527B71ED3FFED13F52B8742057B7;
IL2CPP_EXTERN_C String_t* _stringLiteral823AC7F13547BB61EE004EE339F656811348D94B;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral8694E1E68DB7369546A675F7A3F8977179E3D8FE;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral881DF9583D296C0D5B7AC5C9B371AC14F893F4B1;
IL2CPP_EXTERN_C String_t* _stringLiteral8E79A8D4955F07A325276C196D56413096F3F6BA;
IL2CPP_EXTERN_C String_t* _stringLiteral8FE7B9E4379FA727669A5DD2E2B5591AE8C6D6FD;
IL2CPP_EXTERN_C String_t* _stringLiteral90DF7078E3D93E8E6F0CB88954D180EF21C4F4D1;
IL2CPP_EXTERN_C String_t* _stringLiteral917D3978F2F19410A74AF83F4C3E93E187A682AC;
IL2CPP_EXTERN_C String_t* _stringLiteral921E89896A83EEAD71759D0E569160913410C0AC;
IL2CPP_EXTERN_C String_t* _stringLiteral94AA14A52763F3CD8FFB480C9EF5EBD529D39C24;
IL2CPP_EXTERN_C String_t* _stringLiteral9B1CF05486392B109EE5E1C6F8F3769A8C65518F;
IL2CPP_EXTERN_C String_t* _stringLiteral9C4889529E6F250EE1453BAA8219F701E36118F6;
IL2CPP_EXTERN_C String_t* _stringLiteral9C532A4F4F5ED29A023CF3CE13143084C214486E;
IL2CPP_EXTERN_C String_t* _stringLiteral9D738A6BF0A0D11C2CB2FF3E38BE9D7F4597A159;
IL2CPP_EXTERN_C String_t* _stringLiteral9D757937698966F2331E4E96A61C39D901252926;
IL2CPP_EXTERN_C String_t* _stringLiteral9F68598AE98A5313BD184DAEF34A7037F05FC8E8;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralA168A02D7C7E01EBCA44030225683D8463171553;
IL2CPP_EXTERN_C String_t* _stringLiteralA191E9A1127B5BD50FB629B3243E9F005DCF1660;
IL2CPP_EXTERN_C String_t* _stringLiteralA1F8C30AF9A614832E6AEAE94C81E0CB4D21FA81;
IL2CPP_EXTERN_C String_t* _stringLiteralA6A6AB007C12E7673D8479299FDC94A4D003EBF9;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79;
IL2CPP_EXTERN_C String_t* _stringLiteralB0B6A8F061CC3AE2C94A330AEE6DD40E4E4E2B4E;
IL2CPP_EXTERN_C String_t* _stringLiteralB27C66584E1BBBB39F7A399DF03A22113AEEE5A6;
IL2CPP_EXTERN_C String_t* _stringLiteralB31DFDC0094CA632CE85BD98DC353BD74EC823B2;
IL2CPP_EXTERN_C String_t* _stringLiteralB49A2230911F3A9414AEBBE06AFCE6B72B36DCF2;
IL2CPP_EXTERN_C String_t* _stringLiteralB6462FAAFEFEE122295AC0F69CB1803C25C9F50E;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB954912D5B613A9BBB9E57567C01A78DAF496997;
IL2CPP_EXTERN_C String_t* _stringLiteralB95535A26883746A4AFAFCF1C30C4CBD75904AF6;
IL2CPP_EXTERN_C String_t* _stringLiteralB9E15D36DACFA970D8917F8A2D25B3E56074B572;
IL2CPP_EXTERN_C String_t* _stringLiteralBC3101BFE36604E54F5668684B113C5BF96A5EF8;
IL2CPP_EXTERN_C String_t* _stringLiteralBCE50315D5962AAE042FCBB79C1CFB34677DFCCF;
IL2CPP_EXTERN_C String_t* _stringLiteralC47E7F7AEF16F78CE7B3D75756F38A67794AF4D0;
IL2CPP_EXTERN_C String_t* _stringLiteralC6C53101303B2CB0C0C2D14996D67FFA573A5642;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E0E3DDECD62C377ADB2F682C9E0A3CA8051B29;
IL2CPP_EXTERN_C String_t* _stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E;
IL2CPP_EXTERN_C String_t* _stringLiteralCA7B796A938750C9E9B720D01F4B50435E945834;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCB440E56745B2EEC470D57A82E21F57A7EAD6F3B;
IL2CPP_EXTERN_C String_t* _stringLiteralCB56C5DE1C5ECEFCE364F9867C5BE3D34C10819D;
IL2CPP_EXTERN_C String_t* _stringLiteralCED3387522B9AA1B7C4BAC7682637F8019E0E6B4;
IL2CPP_EXTERN_C String_t* _stringLiteralD12AD3BCDBBC36B051A719533D5A3EE506E3FB4A;
IL2CPP_EXTERN_C String_t* _stringLiteralD148CB06A19DAF883B82CBAE85CC78AB432BD259;
IL2CPP_EXTERN_C String_t* _stringLiteralD489269E8E1F5DAC95F746BB35583B31B03CA894;
IL2CPP_EXTERN_C String_t* _stringLiteralD75E9C7F49F91A91ADCC572A05944309180DEA26;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDB6C948A11F94B49A41CEE21C07BACE833C0EA3D;
IL2CPP_EXTERN_C String_t* _stringLiteralDD8D195854FE6A5448A819D605C3800954C75B0F;
IL2CPP_EXTERN_C String_t* _stringLiteralE02F95854508CEE53A194021280421E6D86608C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE1143D7DA21141328B0C670E4618982430814767;
IL2CPP_EXTERN_C String_t* _stringLiteralE3FF2A704FE59A527FD465C10FF5763D7572482C;
IL2CPP_EXTERN_C String_t* _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73;
IL2CPP_EXTERN_C String_t* _stringLiteralE6B0BC311A9215FBF3033BA1827C581F7D7DFFCE;
IL2CPP_EXTERN_C String_t* _stringLiteralEA2E8F12196B3367A735F4C71E698E73DDBB43BD;
IL2CPP_EXTERN_C String_t* _stringLiteralECBC52CAFDDD6151BB724471E83608B3091C31F8;
IL2CPP_EXTERN_C String_t* _stringLiteralED12904133FFAC97817184051B6295791EAE98DB;
IL2CPP_EXTERN_C String_t* _stringLiteralEF7FC24B5117DE7A50326EB54B70AF5BAC17A774;
IL2CPP_EXTERN_C String_t* _stringLiteralF16BEBAAB4E57C7E143CFCE970AA15566F151F99;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF300D2310959AF105732D339376803869D9B2B91;
IL2CPP_EXTERN_C String_t* _stringLiteralF77EF0378833B12CB5CD7EA0B4BBC50FA06C5A21;
IL2CPP_EXTERN_C String_t* _stringLiteralF7A9D932DF5909F071A811EB0CE88038FA67F832;
IL2CPP_EXTERN_C String_t* _stringLiteralF8591E019243177659D36C84E0F0DD536C62D029;
IL2CPP_EXTERN_C String_t* _stringLiteralF859CAA74FC4BD45E85F9AFF276F614AE47D3DA2;
IL2CPP_EXTERN_C String_t* _stringLiteralF8F98CCC463B752A50D594965B61D8CE349F0E30;
IL2CPP_EXTERN_C String_t* _stringLiteralF99EE8F8E0BAA5AFD89858A0AD24112CDD14DCE0;
IL2CPP_EXTERN_C String_t* _stringLiteralF9C6A41D0A85FED5D961B9FB1D44EDDEC4167CE5;
IL2CPP_EXTERN_C String_t* _stringLiteralFA2FECEE38ECDF3CAE29DB6E47DF50AEE7A51939;
IL2CPP_EXTERN_C String_t* _stringLiteralFA6EA40B2C0B543B0A9184854D4DDDDA02A93BAC;
IL2CPP_EXTERN_C String_t* _stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372;
IL2CPP_EXTERN_C String_t* _stringLiteralFB3E2E45E3697C91835CFBCA547A1B38DF6A850D;
IL2CPP_EXTERN_C String_t* _stringLiteralFF01C47ABD568A459C8EA38273E930831E0F8561;
IL2CPP_EXTERN_C String_t* _stringLiteralFF4D3CF653D251924E09F33181DC7CA164DA089E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m68853A22B1875F33EC45FD811EB549E514AF3967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisGate_tD423C3E3C6A390BF4DCC10322CBA2485840FF97A_m96F7615263E9BEDC5D421737518A1AA42C5C312C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisFpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D_m04D82DBA08268244BF399CA23F30CF2721087FED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_mFA30A89771E56B87D41EEF72A0969417ADFD7A92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_Enqueue_m455347725C1000B8192519960CE0827B39BEC52B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_m56A21F997D27329672F7A810F53DA388B150CC1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryPeek_m151A799F3F31AA856814B0E6DC0332E2D28BE84C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1__ctor_m368F24325463577D3742C9AEB909D32B3801054F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_IsEmpty_m6CE30460B27EB39201A28B7BF36E7F8BD19F01B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD910C8C31EEBBC6D0255B0A6C1015C336766F7BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE20FFA7104A72C1287E19145D9E3E4B79389FE77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m26DE880E0A89E5960769D6B4C69997F515719EAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m99A8D7F5DD0B41EE3B14353563B2DD233240ED6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mE376C3153AF8A4C73E7BB28DC48B74B8D94D3E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m74389F941790611A0AAA7DC6737505543F4AD599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9D3D87AA358305E6E80650D2BA23EDF5FA0BC4BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4662D2D23FE7D2DDA7DD756BD6CA55AFC7323E73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1744D6B27D6DE777DEEE0ED567EE3915E72E73C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9CE8AB0D3CE22AF6EA366818537EA5E742D9B8DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileWriter_CheckNewDay_m56A05C05C8503DDD72E93070F14E5ED72702D3B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileWriter_StoreMessages_m193AAA6FBD1901239AA20533401FFA2D85BB3A94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m5AA4E4CD890D601E009AA5EBFE9271F890FF1792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONEncoder_EncodeDictionary_m117B097DCEB57B3E91C31A187787DF32ACBB110D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONEncoder_EncodeObject_mBB8F7517EAC9ED600D19F919785FAF0F826C1EB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m2B05E53F44FBEF7541C2A010717F8FE9EDAF68D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m3FAF8F4C8DC7CFD6A0F410D4B783A54BB0AFF06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelButton_U3CAwakeU3Eb__5_0_m9A3D803582ABD0DA31677FC586C39DC4A2A33D31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m870ECBBD4C871BAF1CBCB15305895DCF9E54D563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0B9748B12E79C2BCB14830E19F81EA1D60D21677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Logger_OnLogMessageReceived_m3762DE0D3EAF97AFC2F4E618DC9A83A979F999B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindAnyObjectByType_TisDataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_mDAE22B7C8EAED7D23E55AC40B9267E71DD01E9C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindAnyObjectByType_TisLevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_m58C802447FCEBB44BB69C667D54F5D60F7B97D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m3712EC6864371DA8E0347499ACF880075A6B1F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisDataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_m7682FAE984173C23D04D2BE96886D82E768FE189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisSwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232_m7284C4FF5DF5ECAB11EDCFD60E9E412EB18999D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelControlCasualGame_Click_Next_mFFFA512A3BE668CDEAAA791FD3480D06AF0B0488_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelControlCasualGame_Click_Prev_m0F0142CD5150795577770E70E8AFEF169583F6BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SoundController_HandleEffectsSliderValueChanged_m9D165CD91DFBFAE2BBC898B565FD1F00ADF428AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SoundController_HandleMusicSliderValueChanged_m33DD5F28FA41733A094DF975B70EA9F4F0316EF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SoundController_HandleNatureSliderValueChanged_m6BE2FD56A141DE94B67E31D285B36E33FAB237BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SwipeDetection_U3CAwakeU3Eb__14_0_mFF1BF39B4B715B3B732DE5FB91B6A5F975B128D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SwipeDetection_U3CAwakeU3Eb__14_1_mED521C44DF37E1C721B895F64772D5785060EB45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m0EFC7DF986C4C5FA692050BBED54323202D3B988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m479C4B2D8A7F0E16B10353CCE4CABAF2748607EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsyncU3Ed__14_System_Collections_IEnumerator_Reset_m0135BE4A24F9983B078CA981A55949A95BADCFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitSomeTimeU3Ed__11_System_Collections_IEnumerator_Reset_mE448C3902A7DEC91366D28586BE4B2975F9AD9DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct FPSColorU5BU5D_tCE767ECA83A75389A07BF36A43CFBF6BC7EB89EC;
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.ConcurrentQueue`1<LogMessage>
struct ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9  : public RuntimeObject
{
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject* ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t4110E00936B77BA6F681D56DC365E61128EC45C2* ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t4110E00936B77BA6F681D56DC365E61128EC45C2* ____head_4;
};

// System.Collections.Generic.Dictionary`2<System.Char,System.String>
struct Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t238AD73EAFC2E2EBB354482102AFAE62262E0A1C* ____entries_1;
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
	KeyCollection_t0FD9EECB23AA29667D87078D602659F959A0FF3D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t50882FF02995C66EE3946729BF420CAB6A828FD3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>
struct Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4345C4E37F303166A5ACB2BD5206121B40DAA431* ____entries_1;
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
	KeyCollection_tC51CF0A3B186BC380808B9318CC7C56FD3644F9B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t95F7F922558511951438334CE9FA7A6D7E604520* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<YMMJSONUtils.JObject>
struct List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JObjectU5BU5D_tD5B7463B5D5149722FE8BA1F83AC12A9887A3488* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// FileAppender
struct FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996  : public RuntimeObject
{
	// System.Object FileAppender::_lockObject
	RuntimeObject* ____lockObject_0;
	// System.String FileAppender::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_1;
};

// YMMJSONUtils.JObject
struct JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0  : public RuntimeObject
{
	// YMMJSONUtils.JObjectKind YMMJSONUtils.JObject::<Kind>k__BackingField
	int32_t ___U3CKindU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject> YMMJSONUtils.JObject::<ObjectValue>k__BackingField
	Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* ___U3CObjectValueU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<YMMJSONUtils.JObject> YMMJSONUtils.JObject::<ArrayValue>k__BackingField
	List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* ___U3CArrayValueU3Ek__BackingField_2;
	// System.String YMMJSONUtils.JObject::<StringValue>k__BackingField
	String_t* ___U3CStringValueU3Ek__BackingField_3;
	// System.Boolean YMMJSONUtils.JObject::<BooleanValue>k__BackingField
	bool ___U3CBooleanValueU3Ek__BackingField_4;
	// System.Double YMMJSONUtils.JObject::<DoubleValue>k__BackingField
	double ___U3CDoubleValueU3Ek__BackingField_5;
	// System.Single YMMJSONUtils.JObject::<FloatValue>k__BackingField
	float ___U3CFloatValueU3Ek__BackingField_6;
	// System.UInt64 YMMJSONUtils.JObject::<ULongValue>k__BackingField
	uint64_t ___U3CULongValueU3Ek__BackingField_7;
	// System.Int64 YMMJSONUtils.JObject::<LongValue>k__BackingField
	int64_t ___U3CLongValueU3Ek__BackingField_8;
	// System.UInt32 YMMJSONUtils.JObject::<UIntValue>k__BackingField
	uint32_t ___U3CUIntValueU3Ek__BackingField_9;
	// System.Int32 YMMJSONUtils.JObject::<IntValue>k__BackingField
	int32_t ___U3CIntValueU3Ek__BackingField_10;
	// System.UInt16 YMMJSONUtils.JObject::<UShortValue>k__BackingField
	uint16_t ___U3CUShortValueU3Ek__BackingField_11;
	// System.Int16 YMMJSONUtils.JObject::<ShortValue>k__BackingField
	int16_t ___U3CShortValueU3Ek__BackingField_12;
	// System.Byte YMMJSONUtils.JObject::<ByteValue>k__BackingField
	uint8_t ___U3CByteValueU3Ek__BackingField_13;
	// System.SByte YMMJSONUtils.JObject::<SByteValue>k__BackingField
	int8_t ___U3CSByteValueU3Ek__BackingField_14;
	// System.Boolean YMMJSONUtils.JObject::<IsNegative>k__BackingField
	bool ___U3CIsNegativeU3Ek__BackingField_15;
	// System.Boolean YMMJSONUtils.JObject::<IsFractional>k__BackingField
	bool ___U3CIsFractionalU3Ek__BackingField_16;
	// YMMJSONUtils.IntegerSize YMMJSONUtils.JObject::<MinInteger>k__BackingField
	int32_t ___U3CMinIntegerU3Ek__BackingField_17;
	// YMMJSONUtils.FloatSize YMMJSONUtils.JObject::<MinFloat>k__BackingField
	int32_t ___U3CMinFloatU3Ek__BackingField_18;
};

// YMMJSONUtils.JSONEncoder
struct JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87  : public RuntimeObject
{
	// System.Text.StringBuilder YMMJSONUtils.JSONEncoder::_buffer
	StringBuilder_t* ____buffer_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// LevelCompleated/<WaitSomeTime>d__11
struct U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12  : public RuntimeObject
{
	// System.Int32 LevelCompleated/<WaitSomeTime>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LevelCompleated/<WaitSomeTime>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LevelCompleated LevelCompleated/<WaitSomeTime>d__11::<>4__this
	LevelCompleated_t68241CF086BC49C7639BB955BFB4873BD3CBC8AA* ___U3CU3E4__this_2;
};

// MainMenu/<LoadAsync>d__14
struct U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034  : public RuntimeObject
{
	// System.Int32 MainMenu/<LoadAsync>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainMenu/<LoadAsync>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 MainMenu/<LoadAsync>d__14::sceneToLoad
	int32_t ___sceneToLoad_2;
	// MainMenu MainMenu/<LoadAsync>d__14::<>4__this
	MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* ___U3CU3E4__this_3;
	// UnityEngine.AsyncOperation MainMenu/<LoadAsync>d__14::<asyncLoad>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CasyncLoadU3E5__2_4;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// System.Collections.Generic.KeyValuePair`2<System.String,YMMJSONUtils.JObject>
struct KeyValuePair_2_t142818D9698E73468317690A85E83C5250D4E338 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 
{
	// System.Boolean DG.Tweening.Plugins.Options.FloatOptions::snapping
	bool ___snapping_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_com
{
	int32_t ___snapping_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
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

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
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

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TextureSheetAnimationModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
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

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,YMMJSONUtils.JObject>
struct Enumerator_t9BEBDC2A32C3D729DA5F33E1F8EFEEA5DF75B4E5 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t142818D9698E73468317690A85E83C5250D4E338 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
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

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
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

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

// FileWriter
struct FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0  : public RuntimeObject
{
	// System.String FileWriter::_folder
	String_t* ____folder_0;
	// System.String FileWriter::_filePath
	String_t* ____filePath_1;
	// FileAppender FileWriter::_appender
	FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996* ____appender_2;
	// System.Threading.Thread FileWriter::_workingThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____workingThread_3;
	// System.Collections.Concurrent.ConcurrentQueue`1<LogMessage> FileWriter::_messages
	ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9* ____messages_4;
	// System.Boolean FileWriter::_disposing
	bool ____disposing_5;
	// System.Threading.ManualResetEvent FileWriter::_mre
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____mre_6;
	// System.Threading.Thread FileWriter::_checkNewDateThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____checkNewDateThread_7;
	// System.DateTime FileWriter::_prevDate
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____prevDate_8;
};

// GameData
struct GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6  : public RuntimeObject
{
	// UnityEngine.Vector3 GameData::spawnPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPos_0;
	// UnityEngine.Vector3 GameData::playerPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___playerPos_1;
	// System.Int32 GameData::lastLevel
	int32_t ___lastLevel_2;
	// System.Int32 GameData::maxLevel
	int32_t ___maxLevel_3;
	// SerializableDictionary`2<System.Int32,System.Boolean> GameData::compleatedLevels
	SerializableDictionary_2_tB14DBB3450AC0EAFE7C540DBA69676330906FBE3* ___compleatedLevels_4;
	// SerializableDictionary`2<System.String,System.Boolean> GameData::collectedItems
	SerializableDictionary_2_t1E9965CA9DB11A865605B4BA17645100F6263CB9* ___collectedItems_5;
	// System.Single GameData::musicVolume
	float ___musicVolume_6;
	// System.Single GameData::natureVolume
	float ___natureVolume_7;
	// System.Single GameData::effectsVolume
	float ___effectsVolume_8;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// LogMessage
struct LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990  : public RuntimeObject
{
	// UnityEngine.LogType LogMessage::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_0;
	// System.DateTime LogMessage::<Time>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CTimeU3Ek__BackingField_1;
	// System.String LogMessage::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 
{
	// DG.Tweening.RotateMode DG.Tweening.Plugins.Options.QuaternionOptions::rotateMode
	int32_t ___rotateMode_0;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.QuaternionOptions::axisConstraint
	int32_t ___axisConstraint_1;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	// System.Boolean DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAt
	bool ___dynamicLookAt_3;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAtWorldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_pinvoke
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_com
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// UnityEngine.UIVertex
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3_7;
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

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// FpsDisplay/FPSColor
struct FPSColor_t194EE0F9E3B31967D3ADEDBDB95923EC2A45C060 
{
	// UnityEngine.Color FpsDisplay/FPSColor::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_0;
	// System.Int32 FpsDisplay/FPSColor::MinFPS
	int32_t ___MinFPS_1;
};

// UnityEngine.ParticleSystem/Particle
struct Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D 
{
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_ParentRandomSeed
	uint32_t ___m_ParentRandomSeed_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_12;
	// System.Int32 UnityEngine.ParticleSystem/Particle::m_MeshIndex
	int32_t ___m_MeshIndex_13;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_14;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_15;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_Flags
	uint32_t ___m_Flags_16;
};

// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
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

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	float ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	float ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	float ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Audio.AudioMixer
struct AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
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

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// SwipeDetection/Swipe
struct Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4  : public MulticastDelegate_t
{
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

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CharacterMovement
struct CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LevelManager CharacterMovement::levelManager
	LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* ___levelManager_4;
	// UnityEngine.InputSystem.InputAction CharacterMovement::move
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___move_5;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> CharacterMovement::greenGrass
	Stack_1_tEDA6555F162AE2CC5394B19622F8A10CD078C7AF* ___greenGrass_6;
	// UnityEngine.Animator CharacterMovement::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
	// System.Boolean CharacterMovement::isMoving
	bool ___isMoving_8;
	// System.Boolean CharacterMovement::isAlive
	bool ___isAlive_9;
	// System.Boolean CharacterMovement::isCharged
	bool ___isCharged_10;
	// System.Boolean CharacterMovement::canTeleport
	bool ___canTeleport_11;
	// System.Boolean CharacterMovement::checkState
	bool ___checkState_12;
	// System.Boolean CharacterMovement::stateFlag
	bool ___stateFlag_13;
	// UnityEngine.Vector3 CharacterMovement::origPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origPos_14;
	// UnityEngine.Vector3 CharacterMovement::targetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos_15;
	// UnityEngine.Vector3 CharacterMovement::checkPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___checkPos_16;
	// UnityEngine.Vector3 CharacterMovement::spawnPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPos_17;
	// UnityEngine.Vector3 CharacterMovement::prevSpawnPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___prevSpawnPos_18;
	// System.Single CharacterMovement::timeToMove
	float ___timeToMove_19;
	// UnityEngine.LayerMask CharacterMovement::obstacleLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___obstacleLayer_20;
	// UnityEngine.LayerMask CharacterMovement::FloorObstacleLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___FloorObstacleLayer_21;
	// System.Single CharacterMovement::raycastLength
	float ___raycastLength_22;
	// UnityEngine.GameObject CharacterMovement::DrownVFX
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DrownVFX_23;
	// UnityEngine.GameObject CharacterMovement::GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GameObject_24;
	// UnityEngine.Transform CharacterMovement::CheckPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___CheckPoint_25;
	// UnityEngine.GameObject CharacterMovement::levelCompleatedUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___levelCompleatedUI_26;
	// SwipeInput CharacterMovement::swipeInput
	SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232* ___swipeInput_27;
	// UnityEngine.AudioClip CharacterMovement::playerMoveAudio
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___playerMoveAudio_28;
	// UnityEngine.AudioClip CharacterMovement::playerDying
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___playerDying_29;
	// UnityEngine.AudioClip CharacterMovement::dropOnWater
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___dropOnWater_30;
	// UnityEngine.AudioClip CharacterMovement::buildWall
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___buildWall_31;
	// UnityEngine.ParticleSystem CharacterMovement::charge
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___charge_32;
	// PlayerAudioManager CharacterMovement::<PlayerAudioManager>k__BackingField
	PlayerAudioManager_t3899732640F9371B24B96E3479AB30E439A2B462* ___U3CPlayerAudioManagerU3Ek__BackingField_33;
	// CollectedItems CharacterMovement::collectedItems
	CollectedItems_tBDA98FFEBF8ADD9E346417ED22C08B4177E6B1E0* ___collectedItems_34;
	// SwipeInput CharacterMovement::_swipeInput
	SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232* ____swipeInput_35;
	// System.Int32 CharacterMovement::currentStep
	int32_t ___currentStep_36;
	// System.Int32 CharacterMovement::<TeleportFlag>k__BackingField
	int32_t ___U3CTeleportFlagU3Ek__BackingField_37;
	// System.Single CharacterMovement::duration
	float ___duration_38;
	// UnityEngine.Coroutine CharacterMovement::_playerMoving
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____playerMoving_39;
};

// CurrentLevel
struct CurrentLevel_t8CD70AE97791B07F5855BC398A64DE9E1FDC3494  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 CurrentLevel::level
	int32_t ___level_4;
	// UnityEngine.UI.Text CurrentLevel::levelText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___levelText_5;
	// CharacterMovement CurrentLevel::characterMovement
	CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* ___characterMovement_6;
};

// DataPersictenceManager
struct DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean DataPersictenceManager::initializeDataIfNull
	bool ___initializeDataIfNull_4;
	// System.String DataPersictenceManager::fileName
	String_t* ___fileName_5;
	// GameData DataPersictenceManager::gameData
	GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___gameData_6;
	// System.Collections.Generic.List`1<IDatePersistence> DataPersictenceManager::dataPersistenceObjects
	List_1_t47CFEB4A1D553DC3E2A5023F60B48B5EE677F159* ___dataPersistenceObjects_7;
	// FileDataHandler DataPersictenceManager::dataHandler
	FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* ___dataHandler_8;
};

// FadedSceneLoader
struct FadedSceneLoader_tCF4876F76024D65CC24A18500759F8D161BAA7C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean FadedSceneLoader::_isLoading
	bool ____isLoading_7;
};

// FpsCounter
struct FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 FpsCounter::_frameRange
	int32_t ____frameRange_4;
	// System.Int32[] FpsCounter::_fpsBuffer
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____fpsBuffer_5;
	// System.Int32 FpsCounter::_fpsBufferIndex
	int32_t ____fpsBufferIndex_6;
	// System.Int32 FpsCounter::<AverageFPS>k__BackingField
	int32_t ___U3CAverageFPSU3Ek__BackingField_7;
	// System.Int32 FpsCounter::<HighestPFS>k__BackingField
	int32_t ___U3CHighestPFSU3Ek__BackingField_8;
	// System.Int32 FpsCounter::<LowersFPS>k__BackingField
	int32_t ___U3CLowersFPSU3Ek__BackingField_9;
};

// FpsDisplay
struct FpsDisplay_tEA3840316D8926D6080862BF1482309EE394F9A7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text FpsDisplay::_averageLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____averageLabel_4;
	// UnityEngine.UI.Text FpsDisplay::_highestLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____highestLabel_5;
	// UnityEngine.UI.Text FpsDisplay::_lowestLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____lowestLabel_6;
	// FpsDisplay/FPSColor[] FpsDisplay::_fpsColors
	FPSColorU5BU5D_tCE767ECA83A75389A07BF36A43CFBF6BC7EB89EC* ____fpsColors_7;
	// FpsCounter FpsDisplay::_fpsCounter
	FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* ____fpsCounter_8;
	// System.String[] FpsDisplay::_stringsFrom00To99
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____stringsFrom00To99_9;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CharacterMovement GameManager::characterMovement
	CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* ___characterMovement_4;
	// WallBuilder GameManager::wallBuilder
	WallBuilder_t967DD1B1805AA4C8939B7E725EE2ACC8B4097831* ___wallBuilder_5;
	// LevelManager[] GameManager::levels
	LevelManagerU5BU5D_tEFB5A2FE0FDBFA932F30E720DD75643B7DEF03D7* ___levels_6;
	// LevelManager[] GameManager::compleatedLevels
	LevelManagerU5BU5D_tEFB5A2FE0FDBFA932F30E720DD75643B7DEF03D7* ___compleatedLevels_7;
	// ChangeGrass[] GameManager::allGrass
	ChangeGrassU5BU5D_t585730B721C8205A61D2FC6B9725BD4B5FA243ED* ___allGrass_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> GameManager::spawnPoints
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___spawnPoints_9;
	// System.Int32 GameManager::lastLevel
	int32_t ___lastLevel_10;
	// System.Int32 GameManager::maxLevel
	int32_t ___maxLevel_11;
	// System.Int32 GameManager::prevLevel
	int32_t ___prevLevel_12;
	// UnityEngine.Vector3 GameManager::spawnPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPos_13;
	// UnityEngine.Vector3 GameManager::prevSpawnPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___prevSpawnPos_14;
	// System.Single GameManager::_musicValue
	float ____musicValue_15;
	// System.Single GameManager::_natureValue
	float ____natureValue_16;
	// System.Single GameManager::_effectsValue
	float ____effectsValue_17;
	// UnityEngine.UI.Slider GameManager::_music
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____music_18;
	// UnityEngine.UI.Slider GameManager::_nature
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____nature_19;
	// UnityEngine.UI.Slider GameManager::_effect
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____effect_20;
	// UnityEngine.Audio.AudioMixer GameManager::_mixer
	AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* ____mixer_21;
	// System.String GameManager::musicParam
	String_t* ___musicParam_22;
	// System.String GameManager::natureParam
	String_t* ___natureParam_23;
	// System.String GameManager::effectsParam
	String_t* ___effectsParam_24;
	// System.String GameManager::itemsParam
	String_t* ___itemsParam_25;
};

// Gate
struct Gate_tD423C3E3C6A390BF4DCC10322CBA2485840FF97A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Key Gate::_key
	Key_tABCAEDDA423FEA303C2D20401D8E0797217C46F7* ____key_4;
	// UnityEngine.GameObject Gate::_gateWall
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gateWall_5;
	// System.Boolean Gate::_isNeedKey
	bool ____isNeedKey_6;
	// DG.Tweening.Sequence Gate::_sequence
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ____sequence_7;
};

// Key
struct Key_tABCAEDDA423FEA303C2D20401D8E0797217C46F7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Key::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_4;
};

// LevelButton
struct LevelButton_t181AB7DF29F57A7CBB327E3C2C0CD1E8AB8D1D33  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image LevelButton::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_4;
	// LevelLoader LevelButton::levelLoader
	LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* ___levelLoader_5;
	// UnityEngine.UI.Button LevelButton::button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button_6;
	// UnityEngine.Vector3 LevelButton::spawnPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPos_7;
	// System.Int32 LevelButton::level
	int32_t ___level_8;
};

// LevelCompleated
struct LevelCompleated_t68241CF086BC49C7639BB955BFB4873BD3CBC8AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text LevelCompleated::tailText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___tailText_4;
	// UnityEngine.UI.Text LevelCompleated::stepsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___stepsText_5;
	// UnityEngine.UI.Text LevelCompleated::attemtsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___attemtsText_6;
	// System.String LevelCompleated::headTextExaples
	String_t* ___headTextExaples_7;
	// System.Single LevelCompleated::fadeTime
	float ___fadeTime_8;
	// System.Single LevelCompleated::showingTime
	float ___showingTime_9;
	// UnityEngine.CanvasGroup LevelCompleated::canvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___canvasGroup_10;
	// UnityEngine.RectTransform LevelCompleated::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_11;
};

// LevelLoader
struct LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject LevelLoader::levelSelectiingScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___levelSelectiingScreen_4;
	// UnityEngine.UI.Button[] LevelLoader::buttons
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___buttons_5;
	// DataPersictenceManager LevelLoader::persictenceManager
	DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* ___persictenceManager_6;
	// MainMenu LevelLoader::mainMenu
	MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* ___mainMenu_7;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> LevelLoader::chapter1spawnPos
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___chapter1spawnPos_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> LevelLoader::chapter2spawnPos
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___chapter2spawnPos_9;
	// UnityEngine.Vector3[] LevelLoader::allSpawnPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___allSpawnPoints_10;
	// UnityEngine.Vector3 LevelLoader::spawnPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPos_11;
	// System.Int32 LevelLoader::level
	int32_t ___level_12;
	// System.Int32 LevelLoader::maxLevel
	int32_t ___maxLevel_13;
};

// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] LevelManager::allGrass
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___allGrass_4;
	// LevelManager LevelManager::nextLevel
	LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* ___nextLevel_5;
	// LastLevel LevelManager::lastLevel
	LastLevel_tB72C74C5ABEDCD7648EE85015D0BB46178A2B238* ___lastLevel_6;
	// GameManager LevelManager::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_7;
	// EnemyManager[] LevelManager::allEnemies
	EnemyManagerU5BU5D_tEBF3B3A1F37EAE6CD09BC665E9F55E7B83D67BE2* ___allEnemies_8;
	// BlockState[] LevelManager::destroyableBlocks
	BlockStateU5BU5D_t4A8423311EDD1A936640D3BE18AEC814A6DF7F4D* ___destroyableBlocks_9;
	// ItemPickUp[] LevelManager::allTreeItems
	ItemPickUpU5BU5D_tA93E03103F17E83ABF041C71033A9AD9BFF7582B* ___allTreeItems_10;
	// Teleport[] LevelManager::allTeleports
	TeleportU5BU5D_t8F18F5838DA3CC2B64358571F586209C3A5C51B6* ___allTeleports_11;
	// UnityEngine.Transform LevelManager::spawnPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnPos_12;
	// System.Int32 LevelManager::level
	int32_t ___level_13;
	// System.Int32 LevelManager::stepsOnLevel
	int32_t ___stepsOnLevel_14;
	// System.Int32 LevelManager::maxSteps
	int32_t ___maxSteps_15;
	// System.Int32 LevelManager::deathOnLevelCounter
	int32_t ___deathOnLevelCounter_16;
	// System.Int32 LevelManager::levelRecord
	int32_t ___levelRecord_17;
	// System.Int32 LevelManager::collectedItemsOnLevel
	int32_t ___collectedItemsOnLevel_18;
	// System.Int32 LevelManager::totalItemsOnLevel
	int32_t ___totalItemsOnLevel_19;
	// System.Int32 LevelManager::restarts
	int32_t ___restarts_20;
	// System.Boolean LevelManager::levelCompleated
	bool ___levelCompleated_21;
	// System.Boolean LevelManager::levelIsReached
	bool ___levelIsReached_22;
	// System.Boolean LevelManager::isLastLevel
	bool ___isLastLevel_23;
	// System.Boolean LevelManager::isGateOpened
	bool ___isGateOpened_24;
};

// Logger
struct Logger_t19EB2991B2797127D411A958B24298AE41917827  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Logger::_workDirectory
	String_t* ____workDirectory_4;
	// FileWriter Logger::_fileWriter
	FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* ____fileWriter_5;
};

// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String MainMenu::sceneToLoad
	String_t* ___sceneToLoad_4;
	// UnityEngine.GameObject MainMenu::loadingScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loadingScreen_5;
	// UnityEngine.UI.Slider MainMenu::loadingSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___loadingSlider_6;
	// UnityEngine.UI.Button MainMenu::newGameButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___newGameButton_7;
	// UnityEngine.UI.Button MainMenu::continueGameButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___continueGameButton_8;
	// UnityEngine.GameObject MainMenu::levelSelectingScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___levelSelectingScreen_9;
	// LevelLoader MainMenu::levelLoader
	LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* ___levelLoader_10;
};

// MovementScript
struct MovementScript_t6522B47D756CA8CDD763EF2587FD7A492FBA2AD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MovementScript::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
};

// MovingBlock
struct MovingBlock_t8D89009029AED7959D38DE9EE86A556B7F2C24EA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform MovingBlock::APoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___APoint_4;
	// UnityEngine.Transform MovingBlock::BPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___BPoint_5;
	// UnityEngine.GameObject MovingBlock::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_6;
	// UnityEngine.GameObject MovingBlock::rock
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rock_7;
	// System.Single MovingBlock::moveSpeed
	float ___moveSpeed_8;
	// System.Single MovingBlock::checkDistance
	float ___checkDistance_9;
	// System.Boolean MovingBlock::canMove
	bool ___canMove_10;
};

// MovingObject
struct MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MoveType MovingObject::_moveType
	int32_t ____moveType_4;
	// UnityEngine.Transform MovingObject::_model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____model_5;
	// System.Int32 MovingObject::_moveDistanse
	int32_t ____moveDistanse_6;
	// MoveDirection MovingObject::_direction
	int32_t ____direction_7;
	// System.Single MovingObject::_movingDuration
	float ____movingDuration_8;
	// UnityEngine.Vector3 MovingObject::_movingDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____movingDirection_9;
	// System.Int32 MovingObject::_angle
	int32_t ____angle_10;
	// System.Single MovingObject::_rotatingDuration
	float ____rotatingDuration_11;
	// System.Boolean MovingObject::_isActivated
	bool ____isActivated_12;
};

// LayerLab.CasualGame.PanelCasualGame
struct PanelCasualGame_t51BB081FC0E5F9E57CE91F3135C48C7101669513  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] LayerLab.CasualGame.PanelCasualGame::otherPanels
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___otherPanels_4;
};

// LayerLab.CasualGame.PanelControlCasualGame
struct PanelControlCasualGame_tDD8EA28B8DA4618151B4B524E2B823A96E91FE0C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LayerLab.CasualGame.PanelControlCasualGame::page
	int32_t ___page_4;
	// System.Boolean LayerLab.CasualGame.PanelControlCasualGame::isReady
	bool ___isReady_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LayerLab.CasualGame.PanelControlCasualGame::panels
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___panels_6;
	// TMPro.TextMeshProUGUI LayerLab.CasualGame.PanelControlCasualGame::textTitle
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textTitle_7;
	// UnityEngine.Transform LayerLab.CasualGame.PanelControlCasualGame::panelTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___panelTransform_8;
	// UnityEngine.UI.Button LayerLab.CasualGame.PanelControlCasualGame::buttonPrev
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonPrev_9;
	// UnityEngine.UI.Button LayerLab.CasualGame.PanelControlCasualGame::buttonNext
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonNext_10;
};

// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SwipeInput PauseMenu::swipeInput
	SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232* ___swipeInput_4;
	// DataPersictenceManager PauseMenu::dataPersictenceManager
	DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* ___dataPersictenceManager_5;
};

// ScoreBar
struct ScoreBar_tD55000AAA69DF439305FD72C98CDA18DE7CF3566  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ScoreBar::stepText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___stepText_4;
	// UnityEngine.UI.Text ScoreBar::deathText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___deathText_5;
	// System.Int32 ScoreBar::step
	int32_t ___step_6;
	// System.Int32 ScoreBar::maxStep
	int32_t ___maxStep_7;
	// System.Int32 ScoreBar::deathsCount
	int32_t ___deathsCount_8;
	// CharacterMovement ScoreBar::characterMovement
	CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* ___characterMovement_9;
};

// SetSpawnPoint
struct SetSpawnPoint_tE19853A2C396AAA47BBDB4927074D03A63279337  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 SetSpawnPoint::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_4;
};

// SnapPosition
struct SnapPosition_tA8954B7A34C68D2B95E25A05FBD48B160F718877  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SoundController
struct SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DataPersictenceManager SoundController::dataPersictenceManager
	DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* ___dataPersictenceManager_5;
	// GameManager SoundController::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_6;
	// UnityEngine.UI.Slider SoundController::_musicSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____musicSlider_7;
	// UnityEngine.UI.Slider SoundController::_natureSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____natureSlider_8;
	// UnityEngine.UI.Slider SoundController::_effectsSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ____effectsSlider_9;
	// UnityEngine.Audio.AudioMixer SoundController::_mixer
	AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* ____mixer_10;
	// System.String SoundController::musicParam
	String_t* ___musicParam_11;
	// System.String SoundController::natureParam
	String_t* ___natureParam_12;
	// System.String SoundController::effectsParam
	String_t* ___effectsParam_13;
	// System.String SoundController::itemsParam
	String_t* ___itemsParam_14;
	// System.Single SoundController::_musicValue
	float ____musicValue_15;
	// System.Single SoundController::_natureValue
	float ____natureValue_16;
	// System.Single SoundController::_effectsValue
	float ____effectsValue_17;
};

// SwipeDetection
struct SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SwipeDetection/Swipe SwipeDetection::swipePerformed
	Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* ___swipePerformed_5;
	// UnityEngine.InputSystem.InputAction SwipeDetection::position
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___position_6;
	// UnityEngine.InputSystem.InputAction SwipeDetection::press
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___press_7;
	// System.Single SwipeDetection::swipeResistance
	float ___swipeResistance_8;
	// UnityEngine.Vector2 SwipeDetection::initialPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialPos_9;
	// System.Boolean SwipeDetection::isMoving
	bool ___isMoving_10;
	// System.Boolean SwipeDetection::isPaused
	bool ___isPaused_11;
	// System.Boolean SwipeDetection::debugMode
	bool ___debugMode_12;
};

// SwipeInput
struct SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SwipeInput::swipeResistance
	float ___swipeResistance_4;
	// UnityEngine.Vector2 SwipeInput::direction
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction_5;
	// UnityEngine.Vector2 SwipeInput::startPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPos_6;
	// UnityEngine.Vector2 SwipeInput::endPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endPos_7;
	// System.Boolean SwipeInput::debugMode
	bool ___debugMode_8;
	// System.Boolean SwipeInput::canDetectSwipe
	bool ___canDetectSwipe_9;
	// System.Boolean SwipeInput::isOnMenu
	bool ___isOnMenu_10;
	// UnityEngine.Events.UnityEvent SwipeInput::onSwipeUp
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onSwipeUp_11;
	// UnityEngine.Events.UnityEvent SwipeInput::onSwipeDown
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onSwipeDown_12;
	// UnityEngine.Events.UnityEvent SwipeInput::onSwipeRight
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onSwipeRight_13;
	// UnityEngine.Events.UnityEvent SwipeInput::onSwipeLeft
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onSwipeLeft_14;
};

// Teleport
struct Teleport_t7DA0AAB400611F9CE2A644E906868E196EBF22AC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color Teleport::_mainColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____mainColor_4;
	// System.Single Teleport::_mainColorAlpha
	float ____mainColorAlpha_5;
	// UnityEngine.AudioClip Teleport::_teleportSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____teleportSound_6;
	// TeleportPoint Teleport::teleportTargetA
	TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* ___teleportTargetA_7;
	// TeleportPoint Teleport::teleportTargetB
	TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* ___teleportTargetB_8;
	// UnityEngine.Light Teleport::_lightA
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ____lightA_9;
	// UnityEngine.Light Teleport::_lightB
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ____lightB_10;
};

// TeleportPoint
struct TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TeleportPoint TeleportPoint::_target
	TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* ____target_4;
	// UnityEngine.AudioSource TeleportPoint::_source
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____source_5;
	// System.Boolean TeleportPoint::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_6;
};

// ToggleScript
struct ToggleScript_t86B17E85F7C4F77D06BC61AC68F2A5816DB5AF50  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ToggleScript::fpsPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fpsPanel_4;
	// UnityEngine.UI.Toggle ToggleScript::toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_5;
};

// TreeItem
struct TreeItem_t6AB996CBA4C62BA5570A32A7B69BB4B096E367A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WallBuilder
struct WallBuilder_t967DD1B1805AA4C8939B7E725EE2ACC8B4097831  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Key WallBuilder::_key
	Key_tABCAEDDA423FEA303C2D20401D8E0797217C46F7* ____key_4;
	// System.Single WallBuilder::buildingSpeed
	float ___buildingSpeed_5;
	// UnityEngine.GameObject WallBuilder::stopWall
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___stopWall_6;
	// UnityEngine.Vector3 WallBuilder::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_7;
	// System.Boolean WallBuilder::buildWall
	bool ___buildWall_8;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
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
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// UnityEngine.UI.Extensions.CasualGame.UIParticleSystem
struct UIParticleSystem_tE2CFBE1857452933388A21DC001933C6DBC62AC5  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.Boolean UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::fixedTime
	bool ___fixedTime_37;
	// System.Boolean UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::use3dRotation
	bool ___use3dRotation_38;
	// UnityEngine.Transform UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____transform_39;
	// UnityEngine.ParticleSystem UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::pSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___pSystem_40;
	// UnityEngine.ParticleSystem/Particle[] UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::particles
	ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___particles_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::_quad
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ____quad_42;
	// UnityEngine.Vector4 UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::imageUV
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___imageUV_43;
	// UnityEngine.ParticleSystem/TextureSheetAnimationModule UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::textureSheetAnimation
	TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 ___textureSheetAnimation_44;
	// System.Int32 UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::textureSheetAnimationFrames
	int32_t ___textureSheetAnimationFrames_45;
	// UnityEngine.Vector2 UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::textureSheetAnimationFrameSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___textureSheetAnimationFrameSize_46;
	// UnityEngine.ParticleSystemRenderer UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::pRenderer
	ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* ___pRenderer_47;
	// System.Boolean UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::isInitialised
	bool ___isInitialised_48;
	// UnityEngine.Material UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_49;
	// UnityEngine.Texture UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::currentTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___currentTexture_50;
	// UnityEngine.ParticleSystem/MainModule UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::mainModule
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ___mainModule_51;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// System.Collections.Concurrent.ConcurrentQueue`1<LogMessage>

// System.Collections.Concurrent.ConcurrentQueue`1<LogMessage>

// System.Collections.Generic.Dictionary`2<System.Char,System.String>

// System.Collections.Generic.Dictionary`2<System.Char,System.String>

// System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>

// System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<YMMJSONUtils.JObject>
struct List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JObjectU5BU5D_tD5B7463B5D5149722FE8BA1F83AC12A9887A3488* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<YMMJSONUtils.JObject>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// FileAppender

// FileAppender

// YMMJSONUtils.JObject

// YMMJSONUtils.JObject

// YMMJSONUtils.JSONEncoder
struct JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Char,System.String> YMMJSONUtils.JSONEncoder::EscapeChars
	Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* ___EscapeChars_1;
};

// YMMJSONUtils.JSONEncoder

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// LevelCompleated/<WaitSomeTime>d__11

// LevelCompleated/<WaitSomeTime>d__11

// MainMenu/<LoadAsync>d__14

// MainMenu/<LoadAsync>d__14

// System.Collections.Generic.KeyValuePair`2<System.String,YMMJSONUtils.JObject>

// System.Collections.Generic.KeyValuePair`2<System.String,YMMJSONUtils.JObject>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.Single>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.DateTime
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

// System.DateTime

// System.Collections.DictionaryEntry

// System.Collections.DictionaryEntry

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.ParticleSystem/MainModule

// UnityEngine.ParticleSystem/MinMaxCurve

// UnityEngine.ParticleSystem/MinMaxCurve

// UnityEngine.ParticleSystem/TextureSheetAnimationModule

// UnityEngine.ParticleSystem/TextureSheetAnimationModule

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,YMMJSONUtils.JObject>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,YMMJSONUtils.JObject>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.IO.FileStream

// FileWriter

// FileWriter

// GameData

// GameData

// LogMessage

// LogMessage

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.UIVertex
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert_10;
};

// UnityEngine.UIVertex

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_10;
};

// UnityEngine.UI.VertexHelper

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};

// System.Threading.WaitHandle

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// FpsDisplay/FPSColor

// FpsDisplay/FPSColor

// UnityEngine.ParticleSystem/Particle

// UnityEngine.ParticleSystem/Particle

// UnityEngine.UI.Slider/SliderEvent

// UnityEngine.UI.Slider/SliderEvent

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>

// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>

// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Audio.AudioMixer

// UnityEngine.Audio.AudioMixer

// UnityEngine.Component

// UnityEngine.Component

// System.Threading.EventWaitHandle

// System.Threading.EventWaitHandle

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputAction

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>

// UnityEngine.Events.UnityAction`1<System.Single>

// UnityEngine.Events.UnityAction`1<System.Single>

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo

// System.Threading.ManualResetEvent

// System.Threading.ManualResetEvent

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// System.Threading.ThreadStart

// System.Threading.ThreadStart

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Application/LogCallback

// UnityEngine.Application/LogCallback

// SwipeDetection/Swipe

// SwipeDetection/Swipe

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.CanvasGroup

// UnityEngine.CanvasGroup

// UnityEngine.Light

// UnityEngine.Light

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.ParticleSystemRenderer

// UnityEngine.ParticleSystemRenderer

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// CharacterMovement

// CharacterMovement

// CurrentLevel

// CurrentLevel

// DataPersictenceManager
struct DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_StaticFields
{
	// DataPersictenceManager DataPersictenceManager::<instance>k__BackingField
	DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* ___U3CinstanceU3Ek__BackingField_9;
};

// DataPersictenceManager

// FadedSceneLoader
struct FadedSceneLoader_tCF4876F76024D65CC24A18500759F8D161BAA7C3_StaticFields
{
	// FadedSceneLoader FadedSceneLoader::instance
	FadedSceneLoader_tCF4876F76024D65CC24A18500759F8D161BAA7C3* ___instance_8;
};

// FadedSceneLoader

// FpsCounter

// FpsCounter

// FpsDisplay

// FpsDisplay

// GameManager

// GameManager

// Gate

// Gate

// Key

// Key

// LevelButton

// LevelButton

// LevelCompleated

// LevelCompleated

// LevelLoader

// LevelLoader

// LevelManager

// LevelManager

// Logger

// Logger

// MainMenu

// MainMenu

// MovementScript

// MovementScript

// MovingBlock

// MovingBlock

// MovingObject

// MovingObject

// LayerLab.CasualGame.PanelCasualGame

// LayerLab.CasualGame.PanelCasualGame

// LayerLab.CasualGame.PanelControlCasualGame

// LayerLab.CasualGame.PanelControlCasualGame

// PauseMenu

// PauseMenu

// ScoreBar

// ScoreBar

// SetSpawnPoint

// SetSpawnPoint

// SnapPosition

// SnapPosition

// SoundController

// SoundController

// SwipeDetection
struct SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields
{
	// SwipeDetection SwipeDetection::instance
	SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* ___instance_4;
};

// SwipeDetection

// SwipeInput

// SwipeInput

// Teleport

// Teleport

// TeleportPoint

// TeleportPoint

// ToggleScript

// ToggleScript

// TreeItem

// TreeItem

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UIManager

// UIManager

// WallBuilder

// WallBuilder

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Toggle

// UnityEngine.UI.Toggle

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text

// UnityEngine.UI.Extensions.CasualGame.UIParticleSystem

// UnityEngine.UI.Extensions.CasualGame.UIParticleSystem

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// FpsDisplay/FPSColor[]
struct FPSColorU5BU5D_tCE767ECA83A75389A07BF36A43CFBF6BC7EB89EC  : public RuntimeArray
{
	ALIGN_FIELD (8) FPSColor_t194EE0F9E3B31967D3ADEDBDB95923EC2A45C060 m_Items[1];

	inline FPSColor_t194EE0F9E3B31967D3ADEDBDB95923EC2A45C060 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FPSColor_t194EE0F9E3B31967D3ADEDBDB95923EC2A45C060* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FPSColor_t194EE0F9E3B31967D3ADEDBDB95923EC2A45C060 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline FPSColor_t194EE0F9E3B31967D3ADEDBDB95923EC2A45C060 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FPSColor_t194EE0F9E3B31967D3ADEDBDB95923EC2A45C060* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FPSColor_t194EE0F9E3B31967D3ADEDBDB95923EC2A45C060 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7  : public RuntimeArray
{
	ALIGN_FIELD (8) Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D m_Items[1];

	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F  : public RuntimeArray
{
	ALIGN_FIELD (8) UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 m_Items[1];

	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		m_Items[index] = value;
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1__ctor_mBD638A8A935506D26301AF551FBF883A3354434B_gshared (ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1_Enqueue_m12CEC37645C8F7D938CAC8B31291CD47605A4E8A_gshared (ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryPeek(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryPeek_mE3A3EDD7528C3CDE54213918D544D67E487CEC34_gshared (ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_result, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryDequeue(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m25152A8A3C9E8C62D269FF97A19A7E3609036349_gshared (ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_result, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_get_IsEmpty_mB9B15158145849DEC44B4534F7D4003831774FB7_gshared (ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindAnyObjectByType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindAnyObjectByType_TisRuntimeObject_mE7A79400E013891ADB85E4C6A5CF95B447D374BA_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisIl2CppFullySharedGenericAny_m8FE39C82005602F4FEA27DC201600DABE2481BD1_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_component, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentInParent_TisIl2CppFullySharedGenericAny_mC623E57DF1C1113E52B35DF8F5130A698B7174A5_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared (RuntimeObject* ___0_t, int32_t ___1_ease, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_ReadValue_TisIl2CppFullySharedGenericStruct_m0B8C6490DD8EE673339E603898F5BB14254C3DBD_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m6C912B287F81A629FB1D697E7CEB80D3B940295F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisIl2CppFullySharedGenericAny_m754E9486E0B3F9C50B4261F1F2088D02098E214B_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_component, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* __this, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259* ___0_call, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.String FileAppender::get_FileName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FileAppender_get_FileName_m890AA718DBCA4DD525AB7EA2FB814063BA878489_inline (FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996* __this, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_Open_mB4B41C2CDABC136A36207B3215D1BCC3A22AD5E7 (String_t* ___0_path, int32_t ___1_mode, int32_t ___2_access, int32_t ___3_share, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<LogMessage>::.ctor()
inline void ConcurrentQueue_1__ctor_m368F24325463577D3742C9AEB909D32B3801054F (ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56*, const RuntimeMethod*))ConcurrentQueue_1__ctor_mBD638A8A935506D26301AF551FBF883A3354434B_gshared)((ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56*)__this, method);
}
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* __this, bool ___0_initialState, const RuntimeMethod* method) ;
// System.Void FileWriter::ManagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileWriter_ManagePath_m61BEFE02C17F650EA3ACA4B9DC31846C161B0C06 (FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___0_start, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::set_Priority(System.Threading.ThreadPriority)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Priority_m3B0C22105EA0A8D7E210D3F53EF9649C59B1C297 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.String LogMessage::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LogMessage_get_Message_mAD928421E0DE1A3C83D022D4E83638D37536FBAC_inline (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// UnityEngine.LogType LogMessage::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LogMessage_get_Type_mA8F90FC985C53EF80C387544F1D619A21B85BA33_inline (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void LogMessage::.ctor(UnityEngine.LogType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessage__ctor_m0FCE7F4FFBC047BD2177E9A613C2E69B0AE9E0FA (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, int32_t ___0_type, String_t* ___1_message, const RuntimeMethod* method) ;
// System.DateTime LogMessage::get_Time()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D LogMessage_get_Time_m1DC7FC139F37988040AE4BDEA4F396E88F9C0184_inline (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, const RuntimeMethod* method) ;
// System.Void LogMessage::set_Time(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogMessage_set_Time_m379BC8E54EC486AF113CBCFE40495D1CF72CB810_inline (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<LogMessage>::Enqueue(T)
inline void ConcurrentQueue_1_Enqueue_m455347725C1000B8192519960CE0827B39BEC52B (ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9* __this, LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))ConcurrentQueue_1_Enqueue_m12CEC37645C8F7D938CAC8B31291CD47605A4E8A_gshared)((ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<LogMessage>::TryPeek(T&)
inline bool ConcurrentQueue_1_TryPeek_m151A799F3F31AA856814B0E6DC0332E2D28BE84C (ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9* __this, LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990** ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))ConcurrentQueue_1_TryPeek_mE3A3EDD7528C3CDE54213918D544D67E487CEC34_gshared)((ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56*)__this, (Il2CppFullySharedGenericAny*)___0_result, method);
}
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___0_millisecondsTimeout, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void FileAppender::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileAppender__ctor_m23C45EF0CF7FD4BD69F7C30F60C1C4870CB960FF (FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996* __this, String_t* ___0_fileName, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Boolean FileAppender::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileAppender_Append_mD863F1FEEC7CDE17ECE246842E6E27BBBAC2C155 (FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996* __this, String_t* ___0_content, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<LogMessage>::TryDequeue(T&)
inline bool ConcurrentQueue_1_TryDequeue_m56A21F997D27329672F7A810F53DA388B150CC1E (ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9* __this, LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990** ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m25152A8A3C9E8C62D269FF97A19A7E3609036349_gshared)((ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56*)__this, (Il2CppFullySharedGenericAny*)___0_result, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<LogMessage>::get_IsEmpty()
inline bool ConcurrentQueue_1_get_IsEmpty_m6CE30460B27EB39201A28B7BF36E7F8BD19F01B6 (ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56*, const RuntimeMethod*))ConcurrentQueue_1_get_IsEmpty_mB9B15158145849DEC44B4534F7D4003831774FB7_gshared)((ConcurrentQueue_1_t94DD2648ECD2CD2F820284EB39B21F7D62F72C56*)__this, method);
}
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6 (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Abort_mB956BACF405EFC38C6A3D0B93142E4CEDD64D941 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void FileWriter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileWriter__ctor_mCCEBFBF0BD18CA3622C69C180611F8FEA54184D6 (FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* __this, String_t* ___0_folder, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceivedThreaded(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceivedThreaded_mDD8B873BF766306B205F549CF98249DD84FCA04C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
// System.Void FileWriter::Write(LogMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileWriter_Write_m5A04F07FCFCCD654DCBF44175BF6F68E6C383D52 (FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* __this, LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* ___0_message, const RuntimeMethod* method) ;
// System.Void FileWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileWriter_Dispose_mB70ED346890793BFF5CA1D4F5EC9D45363DE9421 (FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void LogMessage::set_Type(UnityEngine.LogType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogMessage_set_Type_m36EB20AEB2681422C57A4F642CEA08D50D3111D0_inline (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void LogMessage::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogMessage_set_Message_mA28C213AE457895F2475CFB4D4BF26C13E0F8DBA_inline (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindAnyObjectByType<LevelLoader>()
inline LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* Object_FindAnyObjectByType_TisLevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_m58C802447FCEBB44BB69C667D54F5D60F7B97D36 (const RuntimeMethod* method)
{
	return ((  LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* (*) (const RuntimeMethod*))Object_FindAnyObjectByType_TisRuntimeObject_mE7A79400E013891ADB85E4C6A5CF95B447D374BA_gshared)(method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void LevelLoader::SetNewLevel(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_SetNewLevel_m6BD95D6E0E450B0219869FC54A5EC346E1A20EEB (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, int32_t ___1_lvl, const RuntimeMethod* method) ;
// DataPersictenceManager DataPersictenceManager::get_instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* DataPersictenceManager_get_instance_mE92EDD86FC7E69CB5D0C8DF5F7EEE9DDCD261FEA_inline (const RuntimeMethod* method) ;
// System.Boolean DataPersictenceManager::HasGameData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataPersictenceManager_HasGameData_m43EF9694BB6113515C651CC573EEDB9912E12562 (DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* __this, const RuntimeMethod* method) ;
// System.Void MainMenu::DisableMenuButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_DisableMenuButtons_mF2EDE36188A931AF15B39226F5614000D978D629 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<DataPersictenceManager>()
inline DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* Object_FindObjectOfType_TisDataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_m7682FAE984173C23D04D2BE96886D82E768FE189 (const RuntimeMethod* method)
{
	return ((  DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void DataPersictenceManager::NewGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersictenceManager_NewGame_mBEB4F49FA2F44F16FDC584D77FB6738170CBF758 (DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* __this, const RuntimeMethod* method) ;
// System.Void FadedSceneLoader::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadedSceneLoader_LoadScene_m3AC82DE35F71F876597AEC2280F33A8B310B7091 (FadedSceneLoader_tCF4876F76024D65CC24A18500759F8D161BAA7C3* __this, String_t* ___0_sceneName, const RuntimeMethod* method) ;
// IYandexAppMetrica AppMetrica::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppMetrica_get_Instance_mED02404EEAAAB55D2B0D3D011251696B5DB2D87A (const RuntimeMethod* method) ;
// System.Void LevelLoader::ChangeSpawnPointAndLoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_ChangeSpawnPointAndLoadLevel_m1E9806CD6C61459BF877C394CF035737C5E965D6 (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, String_t* ___0_sceneToLoad, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void LevelLoader::ActivateButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoader_ActivateButtons_mDAB23FCB063EDDC76DD71FF33FDF9DBFB3AB9FBE (LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator MainMenu::LoadAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenu_LoadAsync_mCFCB7BBB7C771B9421FE8844466EB50F517C6A59 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, int32_t ___0_sceneToLoad, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void MainMenu/<LoadAsync>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__14__ctor_m95C4EA888549692B3A8CA6F3B1E15C2A1CB22CA3 (U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Void MovingBlock::CheckDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingBlock_CheckDistance_m5874AC302B2D52577A91B162D97F93F46FBDB762 (MovingBlock_t8D89009029AED7959D38DE9EE86A556B7F2C24EA* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<CharacterMovement>(T&)
inline bool GameObject_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m5AA4E4CD890D601E009AA5EBFE9271F890FF1792 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_TryGetComponent_TisIl2CppFullySharedGenericAny_m8FE39C82005602F4FEA27DC201600DABE2481BD1_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)___0_component, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Gate>()
inline Gate_tD423C3E3C6A390BF4DCC10322CBA2485840FF97A* Component_GetComponentInParent_TisGate_tD423C3E3C6A390BF4DCC10322CBA2485840FF97A_m96F7615263E9BEDC5D421737518A1AA42C5C312C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Gate_tD423C3E3C6A390BF4DCC10322CBA2485840FF97A* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponentInParent_TisIl2CppFullySharedGenericAny_mC623E57DF1C1113E52B35DF8F5130A698B7174A5_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Gate::OpenGate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gate_OpenGate_mB9091BD9F1F394BDF50204952F39AB9BDE2F7977 (Gate_tD423C3E3C6A390BF4DCC10322CBA2485840FF97A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MovingObject::GetDirection(MoveDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MovingObject_GetDirection_mEBDE3CBD9075EA3B6BDFA9BC058BA69E6526A210 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, int32_t ___0_direction, const RuntimeMethod* method) ;
// System.Void MovingObject::MoveObject(MoveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_MoveObject_mD4A6C8B0D9B8CB7BE6BA3E2E6DE8707613E70C04 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, int32_t ___0_moveType, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOMove_m82274FDC0216A91A1FAF16844805D06BF9A287FF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endValue, float ___2_duration, bool ___3_snapping, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___0_t, int32_t ___1_ease, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* (*) (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared)(___0_t, ___1_ease, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.ShortcutExtensions::DORotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ShortcutExtensions_DORotate_mA2804C1A3E4780383111262752CC7056BBC7D470 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_endValue, float ___2_duration, int32_t ___3_mode, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m479C4B2D8A7F0E16B10353CCE4CABAF2748607EE (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ___0_t, int32_t ___1_ease, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* (*) (TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared)(___0_t, ___1_ease, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void MovingObject::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Move_m078C840D104CAFAE5BF0D7AF1636FD03D6D47960 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, const RuntimeMethod* method) ;
// System.Void MovingObject::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Rotate_m6F4E99C8E49B7B6C694B27B5CD31B5FB26890B22 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 il2cppRetVal;
	((  void (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))InputAction_ReadValue_TisIl2CppFullySharedGenericStruct_m0B8C6490DD8EE673339E603898F5BB14254C3DBD_gshared)((InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.InputSystem.InputAction::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 SwipeDetection::get_currentPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SwipeDetection_get_currentPos_mDB90EDDFBD64BD13C7D6FB7512EC7EC60F3E063D (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Void SwipeDetection/Swipe::Invoke(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Swipe_Invoke_mEDDD5BEFBC9CDF36CC68D87E531E6C05FB22520C_inline (Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method) ;
// System.Void SwipeDetection::DetectSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_DetectSwipe_mD6AC075DC5A5C380C502DA4A8547C66869ADA34E (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) ;
// System.Void SwipeInput::DetectSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeInput_DetectSwipe_mE97FD53992E3F55FD07BCE17429F4FE805341316 (SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void Teleport::SetTeleportsValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_SetTeleportsValues_m75B95FC6ADEDB8A914FE158AA593F67F853C9FE8 (Teleport_t7DA0AAB400611F9CE2A644E906868E196EBF22AC* __this, const RuntimeMethod* method) ;
// System.Void Teleport::SetTeleportsColors(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_SetTeleportsColors_mED4C8609413EBBE5C6D61CA4DEBB74D8FA5288E6 (Teleport_t7DA0AAB400611F9CE2A644E906868E196EBF22AC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_alpha, const RuntimeMethod* method) ;
// System.Void TeleportPoint::SetTargetPoint(TeleportPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TeleportPoint_SetTargetPoint_mF212848923729D808D41F71AFA2C90A9DCB9AC88_inline (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* ___0_point, const RuntimeMethod* method) ;
// System.Void TeleportPoint::SetState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPoint_SetState_m5259DD3F3426A41D254588E64237D3EA7F8312FE (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, bool ___0_state, const RuntimeMethod* method) ;
// System.Void TeleportPoint::SetAudio(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPoint_SetAudio_m196A52DC1BD4F91C8F03A6C7401D8DF9F268FACA (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* Component_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m68853A22B1875F33EC45FD811EB549E514AF3967 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m6C912B287F81A629FB1D697E7CEB80D3B940295F_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<CharacterMovement>(T&)
inline bool Component_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_mFA30A89771E56B87D41EEF72A0969417ADFD7A92 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_TryGetComponent_TisIl2CppFullySharedGenericAny_m754E9486E0B3F9C50B4261F1F2088D02098E214B_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)___0_component, method);
}
// System.Boolean TeleportPoint::get_IsActive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TeleportPoint_get_IsActive_m258A179E47CE50D6B5AF1D1BAF0CFB5E949BEFAB_inline (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, const RuntimeMethod* method) ;
// System.Void CharacterMovement::StopMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterMovement_StopMovement_m54A84847F307FC35CE209BD2FB257D79020170D2 (CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Handheld::Vibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handheld_Vibrate_m820B68A9A3A1C5C0173B99A94C2054778BC3A2F9 (const RuntimeMethod* method) ;
// System.Void TeleportPoint::SwitchState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPoint_SwitchState_m3F704BBA24ED2097604284AD0934FC2FAA945FE4 (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, const RuntimeMethod* method) ;
// System.Void TeleportPoint::set_IsActive(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TeleportPoint_set_IsActive_mB4FE047F2DEC8DB13BD4D9065354086BB557CB13_inline (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<CharacterMovement>()
inline CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* Object_FindObjectOfType_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m3712EC6864371DA8E0347499ACF880075A6B1F92 (const RuntimeMethod* method)
{
	return ((  CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void CurrentLevel::UpdateLevelText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentLevel_UpdateLevelText_m23507589E6BF0809C7CDFC9EB5C67A599BA1594B (CurrentLevel_t8CD70AE97791B07F5855BC398A64DE9E1FDC3494* __this, const RuntimeMethod* method) ;
// System.Void FpsCounter::InitializeBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsCounter_InitializeBuffer_m0CDA43A78F7166DDF1BA329F6C2DF14E6C1C6298 (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) ;
// System.Void FpsCounter::UpdateBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsCounter_UpdateBuffer_mE6F1372BA931F803FFD54898A8A2C4B75718CE18 (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) ;
// System.Void FpsCounter::CalculateFps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsCounter_CalculateFps_m63E95981B7B2F1CF3E0F8122BB200647AB0E1E1B (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Void FpsCounter::set_HighestPFS(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FpsCounter_set_HighestPFS_mBA48A4553C914FA4188FB97B2C04BF451CE0788F_inline (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void FpsCounter::set_LowersFPS(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FpsCounter_set_LowersFPS_mCE7E78B36FA4771A6C514F82A9063732858F78EF_inline (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void FpsCounter::set_AverageFPS(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FpsCounter_set_AverageFPS_mECBFF81A9A5AB622B428A1CF179D416E983D287D_inline (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<FpsCounter>()
inline FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* Component_GetComponent_TisFpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D_m04D82DBA08268244BF399CA23F30CF2721087FED (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 FpsCounter::get_AverageFPS()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FpsCounter_get_AverageFPS_mD00F62B3E502460309C955F4A36AEE5AEF20106A_inline (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) ;
// System.Void FpsDisplay::Display(UnityEngine.UI.Text,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsDisplay_Display_m0E4E99340C59F889C73F57B47CD49F57312AD76C (FpsDisplay_tEA3840316D8926D6080862BF1482309EE394F9A7* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___0_label, int32_t ___1_fps, const RuntimeMethod* method) ;
// System.Int32 FpsCounter::get_HighestPFS()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FpsCounter_get_HighestPFS_m5E4BCB9BA0F69C16EDE766363572D3D729982A93_inline (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) ;
// System.Int32 FpsCounter::get_LowersFPS()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FpsCounter_get_LowersFPS_m4E97FCC8B11DB3BF859BF24F768282E1699DF0DB_inline (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* DOTweenModuleUI_DOAnchorPos_m5B60876E10960019C209F1C215F921E6F994831A (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_target, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_endValue, float ___2_duration, bool ___3_snapping, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* TweenSettingsExtensions_SetEase_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m0EFC7DF986C4C5FA692050BBED54323202D3B988 (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* ___0_t, int32_t ___1_ease, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* (*) (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared)(___0_t, ___1_ease, method);
}
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.CanvasGroup,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* DOTweenModuleUI_DOFade_mA073F33862AA7BEF33842B8200D0E79E046D114E (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___0_target, float ___1_endValue, float ___2_duration, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LevelCompleated::WaitSomeTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelCompleated_WaitSomeTime_m4B872525467F61DF191B353DB09BD657F945FA54 (LevelCompleated_t68241CF086BC49C7639BB955BFB4873BD3CBC8AA* __this, const RuntimeMethod* method) ;
// System.Void LevelCompleated/<WaitSomeTime>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSomeTimeU3Ed__11__ctor_mBFCB83152EB53E98DDED8C0F2A0C43CFBB623B98 (U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void LevelCompleated::PanelFadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelCompleated_PanelFadeOut_mD39295DE2B6233D94EACE02FD318EAB2D2E10407 (LevelCompleated_t68241CF086BC49C7639BB955BFB4873BD3CBC8AA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<SwipeInput>()
inline SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232* Object_FindObjectOfType_TisSwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232_m7284C4FF5DF5ECAB11EDCFD60E9E412EB18999D3 (const RuntimeMethod* method)
{
	return ((  SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.Object::FindAnyObjectByType<DataPersictenceManager>()
inline DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* Object_FindAnyObjectByType_TisDataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_mDAE22B7C8EAED7D23E55AC40B9267E71DD01E9C2 (const RuntimeMethod* method)
{
	return ((  DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* (*) (const RuntimeMethod*))Object_FindAnyObjectByType_TisRuntimeObject_mE7A79400E013891ADB85E4C6A5CF95B447D374BA_gshared)(method);
}
// System.Void DataPersictenceManager::SaveGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersictenceManager_SaveGame_m6E19B682CE003F3AE8F8B27C518E530DC3D6B106 (DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void ScoreBar::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreBar_UpdateText_m210CFD9669B4A79BE99144851309FE69C6231EA0 (ScoreBar_tD55000AAA69DF439305FD72C98CDA18DE7CF3566* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GameManager>()
inline GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40 (const RuntimeMethod* method)
{
	return ((  GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m5CDE58421961A2EE0BCD97B9A4F3602910C2CE29_gshared)((UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*, const RuntimeMethod*))UnityEvent_1_AddListener_mCF6F788014D8853604DCD25C8AFB5C342F032F9D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, (UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259*)___0_call, method);
}
// System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335 (AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_xAngle, float ___1_yAngle, float ___2_zAngle, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void WallBuilder::BuildWall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallBuilder_BuildWall_mE16F7DE1958E5E1E04CBF3E00A3D8F252EC1F5B0 (WallBuilder_t967DD1B1805AA4C8939B7E725EE2ACC8B4097831* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m6C912B287F81A629FB1D697E7CEB80D3B940295F_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void LayerLab.CasualGame.PanelControlCasualGame::CheckControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlCasualGame_CheckControl_mCFEC5EAE8CD9645C243DB932CC0E6A579CF69968 (PanelControlCasualGame_tDD8EA28B8DA4618151B4B524E2B823A96E91FE0C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void LayerLab.CasualGame.PanelControlCasualGame::Click_Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlCasualGame_Click_Prev_m0F0142CD5150795577770E70E8AFEF169583F6BE (PanelControlCasualGame_tDD8EA28B8DA4618151B4B524E2B823A96E91FE0C* __this, const RuntimeMethod* method) ;
// System.Void LayerLab.CasualGame.PanelControlCasualGame::Click_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlCasualGame_Click_Next_mFFFA512A3BE668CDEAAA791FD3480D06AF0B0488 (PanelControlCasualGame_tDD8EA28B8DA4618151B4B524E2B823A96E91FE0C* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Void LayerLab.CasualGame.PanelControlCasualGame::SetArrowActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlCasualGame_SetArrowActive_mAC7DD2BF7DD4B05FB6F94D12F13646165E703035 (PanelControlCasualGame_tDD8EA28B8DA4618151B4B524E2B823A96E91FE0C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/MainModule::get_maxParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystemRenderer>()
inline ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2D_get_whiteTexture_m3A243ED388F9EF0EC515015A6E0E50FD261D2FA1 (const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/MainModule::set_scalingMode(UnityEngine.ParticleSystemScalingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_scalingMode_m08A4399A0E64E5894509084A42BB528BE16A648D (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/TextureSheetAnimationModule UnityEngine.ParticleSystem::get_textureSheetAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 ParticleSystem_get_textureSheetAnimation_mA35CFDD2E7F70F3AFA88A766359336F36CBA937B (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureSheetAnimationModule_get_enabled_mF860A1A9A5794EA2FC3A5B9652C812981A4F3136 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_numTilesY_mA39AD9D6245BE792B776B9834A3E83609266A8C4 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticleSystem_Initialize_mACCD4389A958352AA02C7FE87A08C44D9950D83C (UIParticleSystem_tE2CFBE1857452933388A21DC001933C6DBC62AC5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_playOnAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_playOnAwake_m4FEB55773ED05AB5166314D9883671F4B277762A (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, bool ___0_withChildren, int32_t ___1_stopBehavior, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_m0F67158FED60933343574A1BEB68FEB9D5476E3F (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* ___0_particles, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem/MainModule::get_simulationSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_rotation_mA3A5978F95EDA141FE91C3423DE46DE9B91B49A2 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::GetCurrentColor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Particle_GetCurrentColor_m793DDF1AC5043A8991B6663D965404B1B3855C78 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___0_system, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::GetCurrentSize(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_GetCurrentSize_m3F7D066BF44CDC3B0E501CA10A06313CD0CCCA64 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___0_system, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemScalingMode UnityEngine.ParticleSystem/MainModule::get_scalingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_scalingMode_m2C235E61B1ABBD31F471DC80EF15EA315EA3F0FA (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::get_remainingLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/Particle::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_frameOverTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::get_curveMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* MinMaxCurve_get_curveMin_m2F6041CAA8760D21D39A6204973B411D7109CF00 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::get_curve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* MinMaxCurve_get_curve_mE735424B0F4A9F55699BD82254F159D4226F9661 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_cycleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_cycleCount_m99F3A1F1DFA7947B44B826C6B9C96B268FFE5DC0 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystemAnimationType UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_animation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_animation_mB402112DF63C35BB5B34B892D51791ABAED84176 (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_rowIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_rowIndex_m72BA6BAAD0F816E11E276B28907119054D8EA03C (TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_rotation3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Particle_get_rotation3D_m8BE7C2D25F8E6F44F19690266100723A5DBE64D1 (Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddUIVertexQuad_m6AC21081F2A5A48D22BC3497E527D0A9AB8278B0 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___0_verts, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Simulate_m514E1FCC76A6882650BD237E1D14B43ECAA97643 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, float ___0_t, bool ___1_withChildren, bool ___2_restart, bool ___3_fixedTimeStep, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic__ctor_mD2E256F950AAAE0E2445971361B5C54D2066E4C2 (MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* __this, const RuntimeMethod* method) ;
// YMMJSONUtils.JObjectKind YMMJSONUtils.JObject::get_Kind()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JObject_get_Kind_m13EF0DE2F4E15D4EE5E40A5315B6A6B495C5A58C_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject> YMMJSONUtils.JObject::get_ObjectValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>::get_Count()
inline int32_t Dictionary_2_get_Count_mE376C3153AF8A4C73E7BB28DC48B74B8D94D3E11 (Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Collections.Generic.List`1<YMMJSONUtils.JObject> YMMJSONUtils.JObject::get_ArrayValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<YMMJSONUtils.JObject>::get_Count()
inline int32_t List_1_get_Count_m870ECBBD4C871BAF1CBCB15305895DCF9E54D563_inline (List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>::get_Item(TKey)
inline JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* Dictionary_2_get_Item_m74389F941790611A0AAA7DC6737505543F4AD599 (Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T System.Collections.Generic.List`1<YMMJSONUtils.JObject>::get_Item(System.Int32)
inline JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* List_1_get_Item_m0B9748B12E79C2BCB14830E19F81EA1D60D21677 (List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String YMMJSONUtils.JObject::get_StringValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JObject_get_StringValue_mDA41484A8D0519352C5185A234DAFC10D4499C58_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Boolean YMMJSONUtils.JObject::get_BooleanValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JObject_get_BooleanValue_m1F133DF675798A4E95D1EC81D918B139FCB22542_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Double YMMJSONUtils.JObject::get_DoubleValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Single YMMJSONUtils.JObject::get_FloatValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float JObject_get_FloatValue_mA3FFA45A05D8D82FEBBF01968D3C5E545D003782_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.UInt64 YMMJSONUtils.JObject::get_ULongValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Int64 YMMJSONUtils.JObject::get_LongValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.UInt32 YMMJSONUtils.JObject::get_UIntValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t JObject_get_UIntValue_m20AF155A1577719B5C67D5FC8F09B5AAF7C25E1D_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Int32 YMMJSONUtils.JObject::get_IntValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JObject_get_IntValue_mDB5384E73EDBA994CB3A4B840B201ED8B8373C64_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.UInt16 YMMJSONUtils.JObject::get_UShortValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t JObject_get_UShortValue_mEB27E08EB88B31CE82192C8F6294F1E374C1B384_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Int16 YMMJSONUtils.JObject::get_ShortValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t JObject_get_ShortValue_mE133387DB20068631DA7874BD278B57C3D0E3E0A_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Byte YMMJSONUtils.JObject::get_ByteValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t JObject_get_ByteValue_m7895737CF1888EE4A42011AA0C276953746A6A68_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.SByte YMMJSONUtils.JObject::get_SByteValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t JObject_get_SByteValue_m4440148C8FCE7D523D3D1CC9F85F6A3E171C7528_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_mC3F8118DC1B1D33330FCCCFE9AAADBFBE97B8917 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, String_t* ___0_str, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_m84C13B77E472D391E1159CB615193999B13E0A27 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_b, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_m3F751D0346A8ED5B4900A1F09C9551E090423929 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::.ctor(System.Boolean,System.Boolean,System.Boolean,System.UInt64,System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_m7C615C831B35544505EC8D11CA992452676EF0AA (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_isNegative, bool ___1_isFractional, bool ___2_negativeExponent, uint64_t ___3_integerPart, uint64_t ___4_fractionalPart, int32_t ___5_fractionalPartLength, uint64_t ___6_exponent, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::.ctor(System.Collections.Generic.List`1<YMMJSONUtils.JObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_m17011C1ACA3110B22E4B691913B2BB6DCFABEA90 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* ___0_list, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_m5E1C718DC194B62A2A9CE1735EDB311E330CED8D (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* ___0_dict, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_Kind(YMMJSONUtils.JObjectKind)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_Kind_mD12ABA0C4D0CD58238BCD6030B2D6DC54F326A55_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_StringValue(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_StringValue_m0D9956200CEC32514C50C065145D6C07A538514B_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_BooleanValue(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_BooleanValue_mCBD498B3264596F62B855602A850FEB4FA85F6FF_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::MakeInteger(System.Boolean,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_MakeInteger_m24713DDA28ACFCFDDAAFCD8C4753AC5D151314D3 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_isNegative, uint64_t ___1_integerPart, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::MakeFloat(System.Boolean,System.Boolean,System.UInt64,System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_MakeFloat_m1755505E51AE821225A8FED4833751165990EF09 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_isNegative, bool ___1_negativeExponent, uint64_t ___2_integerPart, uint64_t ___3_fractionalPart, int32_t ___4_fractionalPartLength, uint64_t ___5_exponent, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_ArrayValue(System.Collections.Generic.List`1<YMMJSONUtils.JObject>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_ArrayValue_mFB93C515E10CCD51A778A1F5E3A6E8625E957768_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_ObjectValue(System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_ObjectValue_mC1FC6DE92EC25FA91A918316481B05AC58ACCC7A_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_IsNegative(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_IsNegative_m41E004D6B71423BCD1EDAC00A99BA7702D66F5FD_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean YMMJSONUtils.JObject::get_IsNegative()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JObject_get_IsNegative_m15AE1952AD430DAF3AFF8A432B0B293F3532D2D1_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_ULongValue(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_ULongValue_m9654C958809EA25787D7D7372A902AB027E3B6FC_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_MinInteger(YMMJSONUtils.IntegerSize)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_LongValue(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_LongValue_m61322073008C2963061CF72D956EC1E9B7F12840_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_UIntValue(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_UIntValue_mAA1F90058E59ED87886D5D8E29D5C7966A73A790_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_IntValue(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_IntValue_mC89875DBCA17A4D681CF67B487C5B0B931902FDE_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_UShortValue(System.UInt16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_UShortValue_mD1B79F3A0F374218A07E9D691E6342EBDD70CF6D_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_ShortValue(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_ShortValue_mCF4F6AD2201D8838236118D877F84F8056035909_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int16_t ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_ByteValue(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_ByteValue_m747F43C9CFA9A2FBA947FB54E03E8BE24222F5CA_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_SByteValue(System.SByte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_SByteValue_mD18B9137B1DABC6DA436CB03095622ED2F8BEEFE_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int8_t ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_DoubleValue(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_DoubleValue_mBF9257A740E2CD3F8DA22A95D59BED05629F65D3_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_MinFloat(YMMJSONUtils.FloatSize)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_MinFloat_m3DE4B8C688B984FE01CF1BB843252F7221E27649_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_FloatValue(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_FloatValue_mFC011B853FC8F233733A79C3327BCE651E9242D0_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___0_x, double ___1_y, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JObject::set_IsFractional(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_IsFractional_m54D026ED3DC60C618E4F0B035EADBAA2F7F85322_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean YMMJSONUtils.JObject::EqualNumber(YMMJSONUtils.JObject,YMMJSONUtils.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JObject_EqualNumber_m13C1DA0ED16D8036F4F1077AC6D615DE43EA4292 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___0_o1, JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___1_o2, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>::GetEnumerator()
inline Enumerator_t9BEBDC2A32C3D729DA5F33E1F8EFEEA5DF75B4E5 Dictionary_2_GetEnumerator_m26DE880E0A89E5960769D6B4C69997F515719EAE (Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* __this, const RuntimeMethod* method)
{
	Enumerator_t9BEBDC2A32C3D729DA5F33E1F8EFEEA5DF75B4E5 il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,YMMJSONUtils.JObject>::Dispose()
inline void Enumerator_Dispose_m4662D2D23FE7D2DDA7DD756BD6CA55AFC7323E73 (Enumerator_t9BEBDC2A32C3D729DA5F33E1F8EFEEA5DF75B4E5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,YMMJSONUtils.JObject>::get_Current()
inline KeyValuePair_2_t142818D9698E73468317690A85E83C5250D4E338 Enumerator_get_Current_m9CE8AB0D3CE22AF6EA366818537EA5E742D9B8DE_inline (Enumerator_t9BEBDC2A32C3D729DA5F33E1F8EFEEA5DF75B4E5* __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t142818D9698E73468317690A85E83C5250D4E338 il2cppRetVal;
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,YMMJSONUtils.JObject>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m2B05E53F44FBEF7541C2A010717F8FE9EDAF68D2_inline (KeyValuePair_2_t142818D9698E73468317690A85E83C5250D4E338* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mE20FFA7104A72C1287E19145D9E3E4B79389FE77 (Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,YMMJSONUtils.JObject>::get_Value()
inline JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* KeyValuePair_2_get_Value_m3FAF8F4C8DC7CFD6A0F410D4B783A54BB0AFF06E_inline (KeyValuePair_2_t142818D9698E73468317690A85E83C5250D4E338* __this, const RuntimeMethod* method)
{
	JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,YMMJSONUtils.JObject>::MoveNext()
inline bool Enumerator_MoveNext_m1744D6B27D6DE777DEEE0ED567EE3915E72E73C1 (Enumerator_t9BEBDC2A32C3D729DA5F33E1F8EFEEA5DF75B4E5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Boolean YMMJSONUtils.JObject::get_IsFractional()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JObject_get_IsFractional_m92C680D42BB5FDFF8790B4937389C67F44455470_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Int32 System.Double::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
// YMMJSONUtils.FloatSize YMMJSONUtils.JObject::get_MinFloat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JObject_get_MinFloat_mAC7ECB9CAF2FBB9A77E4E72C3BEB1A0A65402E83_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// YMMJSONUtils.IntegerSize YMMJSONUtils.JObject::get_MinInteger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JObject_get_MinInteger_m7F550F98B8E124D92712CF3AB5666F23B1798EF9_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JSONEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder__ctor_m7996D27E65BA8DEA8981B519CDA71CF7B1068A04 (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JSONEncoder::EncodeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeObject_mBB8F7517EAC9ED600D19F919785FAF0F826C1EB2 (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JSONEncoder::EncodeNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeNull_mB74CD302064B5C6DB11221CCBE016A9EB35222E0 (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JSONEncoder::EncodeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeString_mB8D4CFF3A1E0A4AC019B31A49092B33A2772A6B1 (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, String_t* ___0_str, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JSONEncoder::EncodeFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeFloat_m211558D4E8A28E3E3A66FD4D93A6FEF7DCA78F46 (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, float ___0_f, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JSONEncoder::EncodeDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeDouble_m9ADE6CBC4900C98ECE4BC350F85E790916060DCA (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, double ___0_d, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JSONEncoder::EncodeLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeLong_m2EBDA912616EB3C187E4DCE2AB578E1BD4A59584 (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, int64_t ___0_l, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JSONEncoder::EncodeULong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeULong_mD567573B1B7D9F4B49371D2B529706F0F010E16D (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, uint64_t ___0_l, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JSONEncoder::EncodeBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeBool_m833DAD684ED4AA287A0AE5AB6729C8BFF5318AF8 (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, bool ___0_b, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JSONEncoder::EncodeDictionary(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeDictionary_m117B097DCEB57B3E91C31A187787DF32ACBB110D (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, RuntimeObject* ___0_d, const RuntimeMethod* method) ;
// System.Void YMMJSONUtils.JSONEncoder::EncodeEnumerable(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeEnumerable_mBBB301D592E22D694ACBE3FF317125DB0970814E (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, RuntimeObject* ___0_e, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Enum::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___0_value, Type_t* ___1_conversionType, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD910C8C31EEBBC6D0255B0A6C1015C336766F7BF (Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* __this, Il2CppChar ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Char,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_m9D3D87AA358305E6E80650D2BA23EDF5FA0BC4BC (Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* __this, Il2CppChar ___0_key, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String System.Convert::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35 (int32_t ___0_value, int32_t ___1_toBase, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.String::ToUpper(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_mFC5C17C8BFF52540CC7A73E36DFC9617281325D1 (String_t* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___0_culture, const RuntimeMethod* method) ;
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___0_totalWidth, Il2CppChar ___1_paddingChar, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357 (double* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.String System.Int64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD (int64_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.String System.UInt64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7 (uint64_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.String>::.ctor()
inline void Dictionary_2__ctor_m99A8D7F5DD0B41EE3B14353563B2DD233240ED6B (Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6 (Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* __this, Il2CppChar ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String FileAppender::get_FileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileAppender_get_FileName_m890AA718DBCA4DD525AB7EA2FB814063BA878489 (FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996* __this, const RuntimeMethod* method) 
{
	{
		// public string FileName { get; }
		String_t* L_0 = __this->___U3CFileNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void FileAppender::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileAppender__ctor_m23C45EF0CF7FD4BD69F7C30F60C1C4870CB960FF (FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996* __this, String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly object _lockObject = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____lockObject_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lockObject_0), (void*)L_0);
		// public FileAppender(string fileName)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// FileName = fileName;
		String_t* L_1 = ___0_fileName;
		__this->___U3CFileNameU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFileNameU3Ek__BackingField_1), (void*)L_1);
		// }
		return;
	}
}
// System.Boolean FileAppender::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileAppender_Append_mD863F1FEEC7CDE17ECE246842E6E27BBBAC2C155 (FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996* __this, String_t* ___0_content, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// lock (_lockObject)
			RuntimeObject* L_0 = __this->____lockObject_0;
			V_0 = L_0;
			V_1 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0045_1:
				{// begin finally (depth: 2)
					{
						bool L_1 = V_1;
						if (!L_1)
						{
							goto IL_004e_1;
						}
					}
					{
						RuntimeObject* L_2 = V_0;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
					}

IL_004e_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
					// using (FileStream fs = File.Open(FileName, FileMode.Append, FileAccess.Write, FileShare.Read))
					String_t* L_4;
					L_4 = FileAppender_get_FileName_m890AA718DBCA4DD525AB7EA2FB814063BA878489_inline(__this, NULL);
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5;
					L_5 = File_Open_mB4B41C2CDABC136A36207B3215D1BCC3A22AD5E7(L_4, 6, 2, 1, NULL);
					V_2 = L_5;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0039_2:
						{// begin finally (depth: 3)
							{
								FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = V_2;
								if (!L_6)
								{
									goto IL_0042_2;
								}
							}
							{
								FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = V_2;
								NullCheck(L_7);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
							}

IL_0042_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						// var bytes = Encoding.UTF8.GetBytes(content);
						Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
						L_8 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
						String_t* L_9 = ___0_content;
						NullCheck(L_8);
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
						L_10 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, L_9);
						V_3 = L_10;
						// fs.Write(bytes, 0, bytes.Length);
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_11 = V_2;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_3;
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_3;
						NullCheck(L_13);
						NullCheck(L_11);
						VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)));
						// }
						goto IL_0043_2;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0043_2:
				{
					// }
					goto IL_004f_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_004f_1:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_0058;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0053;
		}
		throw e;
	}

CATCH_0053:
	{// begin catch(System.Exception)
		// catch (Exception e)
		// return false;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0058;
	}// end catch (depth: 1)

IL_0058:
	{
		// }
		bool L_14 = V_1;
		return L_14;
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
// System.Void FileWriter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileWriter__ctor_mCCEBFBF0BD18CA3622C69C180611F8FEA54184D6 (FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* __this, String_t* ___0_folder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1__ctor_m368F24325463577D3742C9AEB909D32B3801054F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileWriter_CheckNewDay_m56A05C05C8503DDD72E93070F14E5ED72702D3B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileWriter_StoreMessages_m193AAA6FBD1901239AA20533401FFA2D85BB3A94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly ConcurrentQueue<LogMessage> _messages = new ConcurrentQueue<LogMessage>();
		ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9* L_0 = (ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9*)il2cpp_codegen_object_new(ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConcurrentQueue_1__ctor_m368F24325463577D3742C9AEB909D32B3801054F(L_0, ConcurrentQueue_1__ctor_m368F24325463577D3742C9AEB909D32B3801054F_RuntimeMethod_var);
		__this->____messages_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____messages_4), (void*)L_0);
		// private readonly ManualResetEvent _mre = new ManualResetEvent(true);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_1 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_1, (bool)1, NULL);
		__this->____mre_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mre_6), (void*)L_1);
		// public FileWriter(string folder)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _folder = folder;
		String_t* L_2 = ___0_folder;
		__this->____folder_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____folder_0), (void*)L_2);
		// ManagePath();
		FileWriter_ManagePath_m61BEFE02C17F650EA3ACA4B9DC31846C161B0C06(__this, NULL);
		// _workingThread = new Thread(StoreMessages)
		// {
		//     IsBackground = true,
		//     Priority = ThreadPriority.BelowNormal
		// };
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_3 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_3, __this, (intptr_t)((void*)FileWriter_StoreMessages_m193AAA6FBD1901239AA20533401FFA2D85BB3A94_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_4, L_3, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_5 = L_4;
		NullCheck(L_5);
		Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30(L_5, (bool)1, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_6 = L_5;
		NullCheck(L_6);
		Thread_set_Priority_m3B0C22105EA0A8D7E210D3F53EF9649C59B1C297(L_6, 1, NULL);
		__this->____workingThread_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____workingThread_3), (void*)L_6);
		// _workingThread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_7 = __this->____workingThread_3;
		NullCheck(L_7);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_7, NULL);
		// _checkNewDateThread = new Thread(CheckNewDay)
		// {
		//     IsBackground = true,
		//     Priority = ThreadPriority.BelowNormal
		// };
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_8 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_8, __this, (intptr_t)((void*)FileWriter_CheckNewDay_m56A05C05C8503DDD72E93070F14E5ED72702D3B2_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_9 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_9, L_8, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_10 = L_9;
		NullCheck(L_10);
		Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30(L_10, (bool)1, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_11 = L_10;
		NullCheck(L_11);
		Thread_set_Priority_m3B0C22105EA0A8D7E210D3F53EF9649C59B1C297(L_11, 1, NULL);
		__this->____checkNewDateThread_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____checkNewDateThread_7), (void*)L_11);
		// }
		return;
	}
}
// System.Void FileWriter::ManagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileWriter_ManagePath_m61BEFE02C17F650EA3ACA4B9DC31846C161B0C06 (FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22B0985C4D41B05D3B01754EAFB601C5802BDD79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BE89227A0BBC17012796DD27BB68B0D5FB2D35E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _prevDate = DateTime.UtcNow;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		__this->____prevDate_8 = L_0;
		// _filePath = $"{_folder}/{DateTime.UtcNow.ToString(DateFormat)}.log";
		String_t* L_1 = __this->____folder_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_0), _stringLiteral7BE89227A0BBC17012796DD27BB68B0D5FB2D35E, NULL);
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_1, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_3, _stringLiteral22B0985C4D41B05D3B01754EAFB601C5802BDD79, NULL);
		__this->____filePath_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filePath_1), (void*)L_4);
		// }
		return;
	}
}
// System.Void FileWriter::Write(LogMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileWriter_Write_m5A04F07FCFCCD654DCBF44175BF6F68E6C383D52 (FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* __this, LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_m455347725C1000B8192519960CE0827B39BEC52B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB56C5DE1C5ECEFCE364F9867C5BE3D34C10819D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (message.Message.Length > MAX_MESSAGE_LENGTH)
			LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* L_0 = ___0_message;
			NullCheck(L_0);
			String_t* L_1;
			L_1 = LogMessage_get_Message_mAD928421E0DE1A3C83D022D4E83638D37536FBAC_inline(L_0, NULL);
			NullCheck(L_1);
			int32_t L_2;
			L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
			if ((((int32_t)L_2) <= ((int32_t)((int32_t)3500))))
			{
				goto IL_0063_1;
			}
		}
		{
			// var preview = message.Message.Substring(0, MAX_MESSAGE_LENGTH);
			LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* L_3 = ___0_message;
			NullCheck(L_3);
			String_t* L_4;
			L_4 = LogMessage_get_Message_mAD928421E0DE1A3C83D022D4E83638D37536FBAC_inline(L_3, NULL);
			NullCheck(L_4);
			String_t* L_5;
			L_5 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_4, 0, ((int32_t)3500), NULL);
			V_0 = L_5;
			// _messages.Enqueue(new LogMessage(message.Type, $"Message is too long {message.Message.Length}. Preview: {preview}")
			// {
			//     Time = message.Time
			// });
			ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9* L_6 = __this->____messages_4;
			LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* L_7 = ___0_message;
			NullCheck(L_7);
			int32_t L_8;
			L_8 = LogMessage_get_Type_mA8F90FC985C53EF80C387544F1D619A21B85BA33_inline(L_7, NULL);
			LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* L_9 = ___0_message;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = LogMessage_get_Message_mAD928421E0DE1A3C83D022D4E83638D37536FBAC_inline(L_9, NULL);
			NullCheck(L_10);
			int32_t L_11;
			L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
			int32_t L_12 = L_11;
			RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
			String_t* L_14 = V_0;
			String_t* L_15;
			L_15 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralCB56C5DE1C5ECEFCE364F9867C5BE3D34C10819D, L_13, L_14, NULL);
			LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* L_16 = (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990*)il2cpp_codegen_object_new(LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990_il2cpp_TypeInfo_var);
			NullCheck(L_16);
			LogMessage__ctor_m0FCE7F4FFBC047BD2177E9A613C2E69B0AE9E0FA(L_16, L_8, L_15, NULL);
			LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* L_17 = L_16;
			LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* L_18 = ___0_message;
			NullCheck(L_18);
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19;
			L_19 = LogMessage_get_Time_m1DC7FC139F37988040AE4BDEA4F396E88F9C0184_inline(L_18, NULL);
			NullCheck(L_17);
			LogMessage_set_Time_m379BC8E54EC486AF113CBCFE40495D1CF72CB810_inline(L_17, L_19, NULL);
			NullCheck(L_6);
			ConcurrentQueue_1_Enqueue_m455347725C1000B8192519960CE0827B39BEC52B(L_6, L_17, ConcurrentQueue_1_Enqueue_m455347725C1000B8192519960CE0827B39BEC52B_RuntimeMethod_var);
			goto IL_006f_1;
		}

IL_0063_1:
		{
			// _messages.Enqueue(message);
			ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9* L_20 = __this->____messages_4;
			LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* L_21 = ___0_message;
			NullCheck(L_20);
			ConcurrentQueue_1_Enqueue_m455347725C1000B8192519960CE0827B39BEC52B(L_20, L_21, ConcurrentQueue_1_Enqueue_m455347725C1000B8192519960CE0827B39BEC52B_RuntimeMethod_var);
		}

IL_006f_1:
		{
			// _mre.Set();
			ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_22 = __this->____mre_6;
			NullCheck(L_22);
			bool L_23;
			L_23 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_22, NULL);
			// }
			goto IL_0080;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007d;
		}
		throw e;
	}

CATCH_007d:
	{// begin catch(System.Exception)
		// catch (Exception e)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0080;
	}// end catch (depth: 1)

IL_0080:
	{
		// }
		return;
	}
}
// System.Void FileWriter::StoreMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileWriter_StoreMessages_m193AAA6FBD1901239AA20533401FFA2D85BB3A94 (FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_m56A21F997D27329672F7A810F53DA388B150CC1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryPeek_m151A799F3F31AA856814B0E6DC0332E2D28BE84C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_IsEmpty_m6CE30460B27EB39201A28B7BF36E7F8BD19F01B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23D72B75D68B9604EF38286D992443551BE6B472);
		s_Il2CppMethodInitialized = true;
	}
	LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* V_0 = NULL;
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		goto IL_00c9;
	}

IL_0005:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (!_messages.TryPeek(out message))
			ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9* L_0 = __this->____messages_4;
			NullCheck(L_0);
			bool L_1;
			L_1 = ConcurrentQueue_1_TryPeek_m151A799F3F31AA856814B0E6DC0332E2D28BE84C(L_0, (&V_0), ConcurrentQueue_1_TryPeek_m151A799F3F31AA856814B0E6DC0332E2D28BE84C_RuntimeMethod_var);
			if (L_1)
			{
				goto IL_001b_1;
			}
		}
		{
			// Thread.Sleep(5);
			Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(5, NULL);
		}

IL_001b_1:
		{
			// if (_appender == null || _appender.FileName != _filePath)
			FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996* L_2 = __this->____appender_2;
			if (!L_2)
			{
				goto IL_003b_1;
			}
		}
		{
			FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996* L_3 = __this->____appender_2;
			NullCheck(L_3);
			String_t* L_4;
			L_4 = FileAppender_get_FileName_m890AA718DBCA4DD525AB7EA2FB814063BA878489_inline(L_3, NULL);
			String_t* L_5 = __this->____filePath_1;
			bool L_6;
			L_6 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_4, L_5, NULL);
			if (!L_6)
			{
				goto IL_004c_1;
			}
		}

IL_003b_1:
		{
			// _appender = new FileAppender(_filePath);
			String_t* L_7 = __this->____filePath_1;
			FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996* L_8 = (FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996*)il2cpp_codegen_object_new(FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			FileAppender__ctor_m23C45EF0CF7FD4BD69F7C30F60C1C4870CB960FF(L_8, L_7, NULL);
			__this->____appender_2 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____appender_2), (void*)L_8);
		}

IL_004c_1:
		{
			// var messageToWrite = string.Format(LogTimeFormat, message.Time,
			//     message.Type, message.Message);
			LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* L_9 = V_0;
			NullCheck(L_9);
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_10;
			L_10 = LogMessage_get_Time_m1DC7FC139F37988040AE4BDEA4F396E88F9C0184_inline(L_9, NULL);
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_11 = L_10;
			RuntimeObject* L_12 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_11);
			LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* L_13 = V_0;
			NullCheck(L_13);
			int32_t L_14;
			L_14 = LogMessage_get_Type_mA8F90FC985C53EF80C387544F1D619A21B85BA33_inline(L_13, NULL);
			int32_t L_15 = L_14;
			RuntimeObject* L_16 = Box(LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var, &L_15);
			LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* L_17 = V_0;
			NullCheck(L_17);
			String_t* L_18;
			L_18 = LogMessage_get_Message_mAD928421E0DE1A3C83D022D4E83638D37536FBAC_inline(L_17, NULL);
			String_t* L_19;
			L_19 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral23D72B75D68B9604EF38286D992443551BE6B472, L_12, L_16, L_18, NULL);
			V_1 = L_19;
			// if (_appender.Append(messageToWrite))
			FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996* L_20 = __this->____appender_2;
			String_t* L_21 = V_1;
			NullCheck(L_20);
			bool L_22;
			L_22 = FileAppender_Append_mD863F1FEEC7CDE17ECE246842E6E27BBBAC2C155(L_20, L_21, NULL);
			if (!L_22)
			{
				goto IL_0091_1;
			}
		}
		{
			// _messages.TryDequeue(out message);
			ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9* L_23 = __this->____messages_4;
			NullCheck(L_23);
			bool L_24;
			L_24 = ConcurrentQueue_1_TryDequeue_m56A21F997D27329672F7A810F53DA388B150CC1E(L_23, (&V_0), ConcurrentQueue_1_TryDequeue_m56A21F997D27329672F7A810F53DA388B150CC1E_RuntimeMethod_var);
			goto IL_0097_1;
		}

IL_0091_1:
		{
			// Thread.Sleep(5);
			Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(5, NULL);
		}

IL_0097_1:
		{
			// }
			goto IL_009c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0099;
		}
		throw e;
	}

CATCH_0099:
	{// begin catch(System.Exception)
		// catch (Exception e)
		// break;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ac;
	}// end catch (depth: 1)

IL_009c:
	{
		// while (!_messages.IsEmpty)
		ConcurrentQueue_1_t220D4D8FAD5E0D04B1DCE1F1EEFE39807BAD28E9* L_25 = __this->____messages_4;
		NullCheck(L_25);
		bool L_26;
		L_26 = ConcurrentQueue_1_get_IsEmpty_m6CE30460B27EB39201A28B7BF36E7F8BD19F01B6(L_25, ConcurrentQueue_1_get_IsEmpty_m6CE30460B27EB39201A28B7BF36E7F8BD19F01B6_RuntimeMethod_var);
		if (!L_26)
		{
			goto IL_0005;
		}
	}

IL_00ac:
	{
		// _mre.Reset();
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_27 = __this->____mre_6;
		NullCheck(L_27);
		bool L_28;
		L_28 = EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6(L_27, NULL);
		// _mre.WaitOne(500);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_29 = __this->____mre_6;
		NullCheck(L_29);
		bool L_30;
		L_30 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_29, ((int32_t)500));
	}

IL_00c9:
	{
		// while (!_disposing)
		bool L_31 = __this->____disposing_5;
		if (!L_31)
		{
			goto IL_009c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FileWriter::CheckNewDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileWriter_CheckNewDay_m56A05C05C8503DDD72E93070F14E5ED72702D3B2 (FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0033;
	}

IL_0002:
	{
		// var currentDate = DateTime.UtcNow;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_0 = L_0;
		// if (currentDate.Day != _prevDate.Day)
		int32_t L_1;
		L_1 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&V_0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_2 = (&__this->____prevDate_8);
		int32_t L_3;
		L_3 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28(L_2, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0029;
		}
	}
	{
		// _prevDate = currentDate;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = V_0;
		__this->____prevDate_8 = L_4;
		// ManagePath();
		FileWriter_ManagePath_m61BEFE02C17F650EA3ACA4B9DC31846C161B0C06(__this, NULL);
	}

IL_0029:
	{
		// Thread.Sleep(1000);
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(((int32_t)1000), NULL);
	}

IL_0033:
	{
		// while (!_disposing)
		bool L_5 = __this->____disposing_5;
		if (!L_5)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FileWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileWriter_Dispose_mB70ED346890793BFF5CA1D4F5EC9D45363DE9421 (FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* G_B2_0 = NULL;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* G_B1_0 = NULL;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* G_B5_0 = NULL;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* G_B4_0 = NULL;
	{
		// _disposing = true;
		__this->____disposing_5 = (bool)1;
		// _workingThread?.Abort();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0 = __this->____workingThread_3;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		Thread_Abort_mB956BACF405EFC38C6A3D0B93142E4CEDD64D941(G_B2_0, NULL);
	}

IL_0018:
	{
		// _checkNewDateThread?.Abort();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_2 = __this->____checkNewDateThread_7;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0024;
		}
	}
	{
		goto IL_0029;
	}

IL_0024:
	{
		NullCheck(G_B5_0);
		Thread_Abort_mB956BACF405EFC38C6A3D0B93142E4CEDD64D941(G_B5_0, NULL);
	}

IL_0029:
	{
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		// }
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
// System.Void Logger::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Awake_m014FE5A3316852C1F55FC1A4F9C8A027330F79AD (Logger_t19EB2991B2797127D411A958B24298AE41917827* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_OnLogMessageReceived_m3762DE0D3EAF97AFC2F4E618DC9A83A979F999B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6B0BC311A9215FBF3033BA1827C581F7D7DFFCE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _workDirectory = $"{Application.persistentDataPath}/Logs";
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteralE6B0BC311A9215FBF3033BA1827C581F7D7DFFCE, NULL);
		__this->____workDirectory_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____workDirectory_4), (void*)L_1);
		// if (!Directory.Exists(_workDirectory))
		String_t* L_2 = __this->____workDirectory_4;
		bool L_3;
		L_3 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_2, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Directory.CreateDirectory(_workDirectory);
		String_t* L_4 = __this->____workDirectory_4;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_5;
		L_5 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_4, NULL);
	}

IL_002e:
	{
		// _fileWriter = new FileWriter(_workDirectory);
		String_t* L_6 = __this->____workDirectory_4;
		FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* L_7 = (FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0*)il2cpp_codegen_object_new(FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		FileWriter__ctor_mCCEBFBF0BD18CA3622C69C180611F8FEA54184D6(L_7, L_6, NULL);
		__this->____fileWriter_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fileWriter_5), (void*)L_7);
		// Application.logMessageReceivedThreaded += OnLogMessageReceived;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_8 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_8, __this, (intptr_t)((void*)Logger_OnLogMessageReceived_m3762DE0D3EAF97AFC2F4E618DC9A83A979F999B9_RuntimeMethod_var), NULL);
		Application_add_logMessageReceivedThreaded_mDD8B873BF766306B205F549CF98249DD84FCA04C(L_8, NULL);
		// }
		return;
	}
}
// System.Void Logger::OnLogMessageReceived(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_OnLogMessageReceived_m3762DE0D3EAF97AFC2F4E618DC9A83A979F999B9 (Logger_t19EB2991B2797127D411A958B24298AE41917827* __this, String_t* ___0_condition, String_t* ___1_stacktrace, int32_t ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type == LogType.Exception)
		int32_t L_0 = ___2_type;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0029;
		}
	}
	{
		// _fileWriter.Write(new LogMessage(type, condition));
		FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* L_1 = __this->____fileWriter_5;
		int32_t L_2 = ___2_type;
		String_t* L_3 = ___0_condition;
		LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* L_4 = (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990*)il2cpp_codegen_object_new(LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		LogMessage__ctor_m0FCE7F4FFBC047BD2177E9A613C2E69B0AE9E0FA(L_4, L_2, L_3, NULL);
		NullCheck(L_1);
		FileWriter_Write_m5A04F07FCFCCD654DCBF44175BF6F68E6C383D52(L_1, L_4, NULL);
		// _fileWriter.Write(new LogMessage(type, stacktrace));
		FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* L_5 = __this->____fileWriter_5;
		int32_t L_6 = ___2_type;
		String_t* L_7 = ___1_stacktrace;
		LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* L_8 = (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990*)il2cpp_codegen_object_new(LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		LogMessage__ctor_m0FCE7F4FFBC047BD2177E9A613C2E69B0AE9E0FA(L_8, L_6, L_7, NULL);
		NullCheck(L_5);
		FileWriter_Write_m5A04F07FCFCCD654DCBF44175BF6F68E6C383D52(L_5, L_8, NULL);
		return;
	}

IL_0029:
	{
		// _fileWriter.Write(new LogMessage(type, condition));
		FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* L_9 = __this->____fileWriter_5;
		int32_t L_10 = ___2_type;
		String_t* L_11 = ___0_condition;
		LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* L_12 = (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990*)il2cpp_codegen_object_new(LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		LogMessage__ctor_m0FCE7F4FFBC047BD2177E9A613C2E69B0AE9E0FA(L_12, L_10, L_11, NULL);
		NullCheck(L_9);
		FileWriter_Write_m5A04F07FCFCCD654DCBF44175BF6F68E6C383D52(L_9, L_12, NULL);
		// }
		return;
	}
}
// System.Void Logger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Update_mD82F4471CA4D48E35E05BDF8A1E4B28B50A3EE35 (Logger_t19EB2991B2797127D411A958B24298AE41917827* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Logger::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_OnDestroy_m5D5D78679B978DB6B986D0E862481D9702058D60 (Logger_t19EB2991B2797127D411A958B24298AE41917827* __this, const RuntimeMethod* method) 
{
	{
		// _fileWriter.Dispose();
		FileWriter_tBF06C2815777F715569080EF08C211B836FC9DC0* L_0 = __this->____fileWriter_5;
		NullCheck(L_0);
		FileWriter_Dispose_mB70ED346890793BFF5CA1D4F5EC9D45363DE9421(L_0, NULL);
		// }
		return;
	}
}
// System.Void Logger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__ctor_mAFAF99FBD532DB8359E42AA95A493ED8E27CCEB5 (Logger_t19EB2991B2797127D411A958B24298AE41917827* __this, const RuntimeMethod* method) 
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
// UnityEngine.LogType LogMessage::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogMessage_get_Type_mA8F90FC985C53EF80C387544F1D619A21B85BA33 (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, const RuntimeMethod* method) 
{
	{
		// public LogType Type { get; set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void LogMessage::set_Type(UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessage_set_Type_m36EB20AEB2681422C57A4F642CEA08D50D3111D0 (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public LogType Type { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.DateTime LogMessage::get_Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D LogMessage_get_Time_m1DC7FC139F37988040AE4BDEA4F396E88F9C0184 (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime Time { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CTimeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void LogMessage::set_Time(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessage_set_Time_m379BC8E54EC486AF113CBCFE40495D1CF72CB810 (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		// public DateTime Time { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CTimeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String LogMessage::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogMessage_get_Message_mAD928421E0DE1A3C83D022D4E83638D37536FBAC (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void LogMessage::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessage_set_Message_mA28C213AE457895F2475CFB4D4BF26C13E0F8DBA (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CMessageU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void LogMessage::.ctor(UnityEngine.LogType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogMessage__ctor_m0FCE7F4FFBC047BD2177E9A613C2E69B0AE9E0FA (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, int32_t ___0_type, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LogMessage(LogType type, string message)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Type = type;
		int32_t L_0 = ___0_type;
		LogMessage_set_Type_m36EB20AEB2681422C57A4F642CEA08D50D3111D0_inline(__this, L_0, NULL);
		// Message = message;
		String_t* L_1 = ___1_message;
		LogMessage_set_Message_mA28C213AE457895F2475CFB4D4BF26C13E0F8DBA_inline(__this, L_1, NULL);
		// Time = DateTime.UtcNow;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		LogMessage_set_Time_m379BC8E54EC486AF113CBCFE40495D1CF72CB810_inline(__this, L_2, NULL);
		// }
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
// System.Void LevelButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelButton_Awake_mF5BDB38AD77655A7463945D8059E5648B21D2905 (LevelButton_t181AB7DF29F57A7CBB327E3C2C0CD1E8AB8D1D33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelButton_U3CAwakeU3Eb__5_0_m9A3D803582ABD0DA31677FC586C39DC4A2A33D31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindAnyObjectByType_TisLevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_m58C802447FCEBB44BB69C667D54F5D60F7B97D36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelLoader = FindAnyObjectByType<LevelLoader>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_0;
		L_0 = Object_FindAnyObjectByType_TisLevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_m58C802447FCEBB44BB69C667D54F5D60F7B97D36(Object_FindAnyObjectByType_TisLevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020_m58C802447FCEBB44BB69C667D54F5D60F7B97D36_RuntimeMethod_var);
		__this->___levelLoader_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___levelLoader_5), (void*)L_0);
		// button = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->___button_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___button_6), (void*)L_1);
		// button.onClick.AddListener(() =>
		// {
		//     levelLoader.SetNewLevel(spawnPos, level);
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___button_6;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)LevelButton_U3CAwakeU3Eb__5_0_m9A3D803582ABD0DA31677FC586C39DC4A2A33D31_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void LevelButton::UnlockButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelButton_UnlockButton_m798D8817F4E9B39BB0A542A7FD579A23E224A1C6 (LevelButton_t181AB7DF29F57A7CBB327E3C2C0CD1E8AB8D1D33* __this, const RuntimeMethod* method) 
{
	{
		// image.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___image_4;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// button.interactable= true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___button_6;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LevelButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelButton__ctor_m8C628B744C236D57872088616A5BD5890630E350 (LevelButton_t181AB7DF29F57A7CBB327E3C2C0CD1E8AB8D1D33* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void LevelButton::<Awake>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelButton_U3CAwakeU3Eb__5_0_m9A3D803582ABD0DA31677FC586C39DC4A2A33D31 (LevelButton_t181AB7DF29F57A7CBB327E3C2C0CD1E8AB8D1D33* __this, const RuntimeMethod* method) 
{
	{
		// levelLoader.SetNewLevel(spawnPos, level);
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_0 = __this->___levelLoader_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___spawnPos_7;
		int32_t L_2 = __this->___level_8;
		NullCheck(L_0);
		LevelLoader_SetNewLevel_m6BD95D6E0E450B0219869FC54A5EC346E1A20EEB(L_0, L_1, L_2, NULL);
		// });
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
// System.Void MainMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Start_m1729BDE6D096D9F4C92DBE72B392BA89E9A9ECAD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// if (!DataPersictenceManager.instance.HasGameData())
		DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* L_0;
		L_0 = DataPersictenceManager_get_instance_mE92EDD86FC7E69CB5D0C8DF5F7EEE9DDCD261FEA_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = DataPersictenceManager_HasGameData_m43EF9694BB6113515C651CC573EEDB9912E12562(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// continueGameButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___continueGameButton_8;
		NullCheck(L_2);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)0, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void MainMenu::OnNewGameClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_OnNewGameClicked_mA41E487E72B1389E9FA924D6B4B87BFCFDCAF51F (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppMetrica_tBA71C26309F2BD9EBE9EC60D01788F52D063EF81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FadedSceneLoader_tCF4876F76024D65CC24A18500759F8D161BAA7C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IYandexAppMetrica_tB3A5E9F132EF235F8E00022B73B3B6BCCEAAD334_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_m7682FAE984173C23D04D2BE96886D82E768FE189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15E812F5755E8FB8F14234EC436436A5686DEAF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EA2405F13DEC80B58830B0537815C420C4EDA1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB95535A26883746A4AFAFCF1C30C4CBD75904AF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DisableMenuButtons();
		MainMenu_DisableMenuButtons_mF2EDE36188A931AF15B39226F5614000D978D629(__this, NULL);
		// Debug.Log("Start New Game");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral15E812F5755E8FB8F14234EC436436A5686DEAF4, NULL);
		// FindObjectOfType<DataPersictenceManager>().NewGame();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* L_0;
		L_0 = Object_FindObjectOfType_TisDataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_m7682FAE984173C23D04D2BE96886D82E768FE189(Object_FindObjectOfType_TisDataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_m7682FAE984173C23D04D2BE96886D82E768FE189_RuntimeMethod_var);
		NullCheck(L_0);
		DataPersictenceManager_NewGame_mBEB4F49FA2F44F16FDC584D77FB6738170CBF758(L_0, NULL);
		// levelLoader.spawnPos = levelLoader.allSpawnPoints[0];
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_1 = __this->___levelLoader_10;
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_2 = __this->___levelLoader_10;
		NullCheck(L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = L_2->___allSpawnPoints_10;
		NullCheck(L_3);
		int32_t L_4 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		L_1->___spawnPos_11 = L_5;
		// levelLoader.maxLevel = 1;
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_6 = __this->___levelLoader_10;
		NullCheck(L_6);
		L_6->___maxLevel_13 = 1;
		// levelLoader.level = 1;
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_7 = __this->___levelLoader_10;
		NullCheck(L_7);
		L_7->___level_12 = 1;
		// FadedSceneLoader.instance.LoadScene("chapter_1");
		FadedSceneLoader_tCF4876F76024D65CC24A18500759F8D161BAA7C3* L_8 = ((FadedSceneLoader_tCF4876F76024D65CC24A18500759F8D161BAA7C3_StaticFields*)il2cpp_codegen_static_fields_for(FadedSceneLoader_tCF4876F76024D65CC24A18500759F8D161BAA7C3_il2cpp_TypeInfo_var))->___instance_8;
		NullCheck(L_8);
		FadedSceneLoader_LoadScene_m3AC82DE35F71F876597AEC2280F33A8B310B7091(L_8, _stringLiteral2EA2405F13DEC80B58830B0537815C420C4EDA1A, NULL);
		// AppMetrica.Instance.ReportEvent("new_game_started");
		il2cpp_codegen_runtime_class_init_inline(AppMetrica_tBA71C26309F2BD9EBE9EC60D01788F52D063EF81_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = AppMetrica_get_Instance_mED02404EEAAAB55D2B0D3D011251696B5DB2D87A(NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void IYandexAppMetrica::ReportEvent(System.String) */, IYandexAppMetrica_tB3A5E9F132EF235F8E00022B73B3B6BCCEAAD334_il2cpp_TypeInfo_var, L_9, _stringLiteralB95535A26883746A4AFAFCF1C30C4CBD75904AF6);
		// AppMetrica.Instance.SendEventsBuffer();
		RuntimeObject* L_10;
		L_10 = AppMetrica_get_Instance_mED02404EEAAAB55D2B0D3D011251696B5DB2D87A(NULL);
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(27 /* System.Void IYandexAppMetrica::SendEventsBuffer() */, IYandexAppMetrica_tB3A5E9F132EF235F8E00022B73B3B6BCCEAAD334_il2cpp_TypeInfo_var, L_10);
		// }
		return;
	}
}
// System.Void MainMenu::OnContinueClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_OnContinueClicked_m387EEC23CE995277420DFFDB8E88045959F11C41 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppMetrica_tBA71C26309F2BD9EBE9EC60D01788F52D063EF81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IYandexAppMetrica_tB3A5E9F132EF235F8E00022B73B3B6BCCEAAD334_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EA2405F13DEC80B58830B0537815C420C4EDA1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31390CC5A93CAD4B352761FBC72BF7060DCD4290);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C4889529E6F250EE1453BAA8219F701E36118F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA2FECEE38ECDF3CAE29DB6E47DF50AEE7A51939);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DisableMenuButtons();
		MainMenu_DisableMenuButtons_mF2EDE36188A931AF15B39226F5614000D978D629(__this, NULL);
		// Debug.Log("Continue game");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral31390CC5A93CAD4B352761FBC72BF7060DCD4290, NULL);
		// if (levelLoader.maxLevel < 16)
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_0 = __this->___levelLoader_10;
		NullCheck(L_0);
		int32_t L_1 = L_0->___maxLevel_13;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0031;
		}
	}
	{
		// levelLoader.ChangeSpawnPointAndLoadLevel("chapter_1");
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_2 = __this->___levelLoader_10;
		NullCheck(L_2);
		LevelLoader_ChangeSpawnPointAndLoadLevel_m1E9806CD6C61459BF877C394CF035737C5E965D6(L_2, _stringLiteral2EA2405F13DEC80B58830B0537815C420C4EDA1A, NULL);
		goto IL_0041;
	}

IL_0031:
	{
		// levelLoader.ChangeSpawnPointAndLoadLevel("chapter_2_");
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_3 = __this->___levelLoader_10;
		NullCheck(L_3);
		LevelLoader_ChangeSpawnPointAndLoadLevel_m1E9806CD6C61459BF877C394CF035737C5E965D6(L_3, _stringLiteral9C4889529E6F250EE1453BAA8219F701E36118F6, NULL);
	}

IL_0041:
	{
		// AppMetrica.Instance.ReportEvent("loaded_last_played_level");
		il2cpp_codegen_runtime_class_init_inline(AppMetrica_tBA71C26309F2BD9EBE9EC60D01788F52D063EF81_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = AppMetrica_get_Instance_mED02404EEAAAB55D2B0D3D011251696B5DB2D87A(NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void IYandexAppMetrica::ReportEvent(System.String) */, IYandexAppMetrica_tB3A5E9F132EF235F8E00022B73B3B6BCCEAAD334_il2cpp_TypeInfo_var, L_4, _stringLiteralFA2FECEE38ECDF3CAE29DB6E47DF50AEE7A51939);
		// AppMetrica.Instance.SendEventsBuffer();
		RuntimeObject* L_5;
		L_5 = AppMetrica_get_Instance_mED02404EEAAAB55D2B0D3D011251696B5DB2D87A(NULL);
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(27 /* System.Void IYandexAppMetrica::SendEventsBuffer() */, IYandexAppMetrica_tB3A5E9F132EF235F8E00022B73B3B6BCCEAAD334_il2cpp_TypeInfo_var, L_5);
		// }
		return;
	}
}
// System.Void MainMenu::OnSelectLevelClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_OnSelectLevelClicked_mA45FE501F6B070386AC3E8B04333DB0FE15BFED7 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// levelSelectingScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___levelSelectingScreen_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// levelLoader.ActivateButtons();
		LevelLoader_t1FCE9D8EDBEB9407EEDEC5B9B35EA3330DDAC020* L_1 = __this->___levelLoader_10;
		NullCheck(L_1);
		LevelLoader_ActivateButtons_mDAB23FCB063EDDC76DD71FF33FDF9DBFB3AB9FBE(L_1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::OnExitClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_OnExitClicked_m6249EB1271BE764D0709690634DF68A397EAD71A (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppMetrica_tBA71C26309F2BD9EBE9EC60D01788F52D063EF81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IYandexAppMetrica_tB3A5E9F132EF235F8E00022B73B3B6BCCEAAD334_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36811CDFE9188DD6E678940755868CCAD833C207);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// AppMetrica.Instance.ReportEvent("game_closed");
		il2cpp_codegen_runtime_class_init_inline(AppMetrica_tBA71C26309F2BD9EBE9EC60D01788F52D063EF81_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = AppMetrica_get_Instance_mED02404EEAAAB55D2B0D3D011251696B5DB2D87A(NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void IYandexAppMetrica::ReportEvent(System.String) */, IYandexAppMetrica_tB3A5E9F132EF235F8E00022B73B3B6BCCEAAD334_il2cpp_TypeInfo_var, L_0, _stringLiteral36811CDFE9188DD6E678940755868CCAD833C207);
		// AppMetrica.Instance.SendEventsBuffer();
		RuntimeObject* L_1;
		L_1 = AppMetrica_get_Instance_mED02404EEAAAB55D2B0D3D011251696B5DB2D87A(NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(27 /* System.Void IYandexAppMetrica::SendEventsBuffer() */, IYandexAppMetrica_tB3A5E9F132EF235F8E00022B73B3B6BCCEAAD334_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void MainMenu::DisableMenuButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_DisableMenuButtons_mF2EDE36188A931AF15B39226F5614000D978D629 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// newGameButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___newGameButton_7;
		NullCheck(L_0);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)0, NULL);
		// continueGameButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___continueGameButton_8;
		NullCheck(L_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Load(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Load_m14AEAF7F99B8FBF004383536E41C240EF2143080 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, int32_t ___0_sceneToLoad, const RuntimeMethod* method) 
{
	{
		// loadingScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___loadingScreen_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// StartCoroutine(LoadAsync(sceneToLoad));
		int32_t L_1 = ___0_sceneToLoad;
		RuntimeObject* L_2;
		L_2 = MainMenu_LoadAsync_mCFCB7BBB7C771B9421FE8844466EB50F517C6A59(__this, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MainMenu::LoadAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenu_LoadAsync_mCFCB7BBB7C771B9421FE8844466EB50F517C6A59 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, int32_t ___0_sceneToLoad, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034* L_0 = (U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034*)il2cpp_codegen_object_new(U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadAsyncU3Ed__14__ctor_m95C4EA888549692B3A8CA6F3B1E15C2A1CB22CA3(L_0, 0, NULL);
		U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034* L_2 = L_1;
		int32_t L_3 = ___0_sceneToLoad;
		NullCheck(L_2);
		L_2->___sceneToLoad_2 = L_3;
		return L_2;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m8209CEC1D907C87A96D777961F4D0536E6E948DD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
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
// System.Void MainMenu/<LoadAsync>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__14__ctor_m95C4EA888549692B3A8CA6F3B1E15C2A1CB22CA3 (U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MainMenu/<LoadAsync>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__14_System_IDisposable_Dispose_mD03D16A61C5B6F481C7482EDE24EC77BD890AE89 (U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MainMenu/<LoadAsync>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadAsyncU3Ed__14_MoveNext_mED63FF7F47FB9B9AA2F5435D16BC9635601D158C (U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_1 = __this->___U3CU3E4__this_3;
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
			goto IL_0057;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneToLoad);
		int32_t L_4 = __this->___sceneToLoad_2;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5;
		L_5 = SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935(L_4, NULL);
		__this->___U3CasyncLoadU3E5__2_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncLoadU3E5__2_4), (void*)L_5);
		goto IL_005e;
	}

IL_0031:
	{
		// loadingSlider.value = asyncLoad.progress;
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_6 = V_1;
		NullCheck(L_6);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = L_6->___loadingSlider_6;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_8 = __this->___U3CasyncLoadU3E5__2_4;
		NullCheck(L_8);
		float L_9;
		L_9 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_7, L_9);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0057:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005e:
	{
		// while (!asyncLoad.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_10 = __this->___U3CasyncLoadU3E5__2_4;
		NullCheck(L_10);
		bool L_11;
		L_11 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_10, NULL);
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object MainMenu/<LoadAsync>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAsyncU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m04F2801B210981B8AF49DFBDD956F6C88A1F5BA8 (U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MainMenu/<LoadAsync>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsyncU3Ed__14_System_Collections_IEnumerator_Reset_m0135BE4A24F9983B078CA981A55949A95BADCFAC (U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAsyncU3Ed__14_System_Collections_IEnumerator_Reset_m0135BE4A24F9983B078CA981A55949A95BADCFAC_RuntimeMethod_var)));
	}
}
// System.Object MainMenu/<LoadAsync>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAsyncU3Ed__14_System_Collections_IEnumerator_get_Current_m57F48F4B0A039B7249F16A9A1F239CDDDFCBB30B (U3CLoadAsyncU3Ed__14_tBA3D204B2A1D990B270A7D471C123AB38FBED034* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void MovementScript::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementScript_OnCollisionEnter_mE4E0A4DD70B3FAC7634C2EAFF7C3BC1062E3586C (MovementScript_t6522B47D756CA8CDD763EF2587FD7A492FBA2AD2* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject == player)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___player_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// player.GetComponent<Rigidbody>().AddForce(Vector3.left * 10, ForceMode.Impulse);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___player_4;
		NullCheck(L_4);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5;
		L_5 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_4, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, (10.0f), NULL);
		NullCheck(L_5);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_5, L_7, 1, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void MovementScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementScript__ctor_m2DD1B34C7EF8C0E7F06CD27B5AF9CEB9196A8FBA (MovementScript_t6522B47D756CA8CDD763EF2587FD7A492FBA2AD2* __this, const RuntimeMethod* method) 
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
// System.Void MovingBlock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingBlock_Start_m98A0EC3E43C6A3680A0F180188A55E134007A6F3 (MovingBlock_t8D89009029AED7959D38DE9EE86A556B7F2C24EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void MovingBlock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingBlock_Update_m04FC2DA1792B8D112CB2CFF4F3FC811005A6A0CE (MovingBlock_t8D89009029AED7959D38DE9EE86A556B7F2C24EA* __this, const RuntimeMethod* method) 
{
	{
		// CheckDistance();
		MovingBlock_CheckDistance_m5874AC302B2D52577A91B162D97F93F46FBDB762(__this, NULL);
		// }
		return;
	}
}
// System.Void MovingBlock::onMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingBlock_onMove_m1C9997AA6CEC21FCDDB63CAE795F4F73E0550A5D (MovingBlock_t8D89009029AED7959D38DE9EE86A556B7F2C24EA* __this, const RuntimeMethod* method) 
{
	{
		// if (transform.position == APoint.position && canMove)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___APoint_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		bool L_4;
		L_4 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		bool L_5 = __this->___canMove_10;
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		// transform.position = Vector3.Lerp(APoint.position, BPoint.position, moveSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___APoint_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___BPoint_5;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = __this->___moveSpeed_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_8, L_10, L_11, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_12, NULL);
		return;
	}

IL_0052:
	{
		// else if (transform.position == BPoint.position && canMove)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___BPoint_5;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		bool L_17;
		L_17 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_14, L_16, NULL);
		if (!L_17)
		{
			goto IL_00a3;
		}
	}
	{
		bool L_18 = __this->___canMove_10;
		if (!L_18)
		{
			goto IL_00a3;
		}
	}
	{
		// transform.position = Vector3.Lerp(BPoint.position, APoint.position, moveSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___BPoint_5;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___APoint_4;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = __this->___moveSpeed_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_21, L_23, L_24, NULL);
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_25, NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void MovingBlock::onStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingBlock_onStart_mD6B1AFF4DD480FB74DCC1548665B336A06A35689 (MovingBlock_t8D89009029AED7959D38DE9EE86A556B7F2C24EA* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = APoint.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___APoint_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void MovingBlock::CheckDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingBlock_CheckDistance_m5874AC302B2D52577A91B162D97F93F46FBDB762 (MovingBlock_t8D89009029AED7959D38DE9EE86A556B7F2C24EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A53270547EE7281801C431BDD0E98947C3D3235);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float G_B2_0 = 0.0f;
	float G_B1_0 = 0.0f;
	{
		// Vector3 playerPos = player.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		// Vector3 rockPos = rock.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___rock_7;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_0 = L_5;
		// float distance = Vector3.Distance(playerPos, rockPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7;
		L_7 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_6, NULL);
		// if (distance <= checkDistance) {Debug.Log("Player in range of {0}", rock); }
		float L_8 = L_7;
		float L_9 = __this->___checkDistance_9;
		G_B1_0 = L_8;
		if ((!(((float)L_8) <= ((float)L_9))))
		{
			G_B2_0 = L_8;
			goto IL_0040;
		}
	}
	{
		// if (distance <= checkDistance) {Debug.Log("Player in range of {0}", rock); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___rock_7;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(_stringLiteral4A53270547EE7281801C431BDD0E98947C3D3235, L_10, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0040:
	{
		// if (distance <= checkDistance)
		float L_11 = __this->___checkDistance_9;
		if ((!(((float)G_B2_0) <= ((float)L_11))))
		{
			goto IL_0050;
		}
	}
	{
		// canMove = true;
		__this->___canMove_10 = (bool)1;
		return;
	}

IL_0050:
	{
		// else { canMove = false; }
		__this->___canMove_10 = (bool)0;
		// }
		return;
	}
}
// System.Void MovingBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingBlock__ctor_m97946B6793CBA0D0D018E2DACCC005BC4F1F7BB9 (MovingBlock_t8D89009029AED7959D38DE9EE86A556B7F2C24EA* __this, const RuntimeMethod* method) 
{
	{
		// public float moveSpeed = 0.5f;
		__this->___moveSpeed_8 = (0.5f);
		// public float checkDistance = 20f;
		__this->___checkDistance_9 = (20.0f);
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
// System.Void Key::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Key_Start_m4623E79D02D7B947893DC95D623501BA70CAEAE4 (Key_tABCAEDDA423FEA303C2D20401D8E0797217C46F7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->____audioSource_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____audioSource_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Key::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Key_OnTriggerEnter_m9DB36FB68944E6C173FF7CE7F1393676785FE813 (Key_tABCAEDDA423FEA303C2D20401D8E0797217C46F7* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisGate_tD423C3E3C6A390BF4DCC10322CBA2485840FF97A_m96F7615263E9BEDC5D421737518A1AA42C5C312C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m5AA4E4CD890D601E009AA5EBFE9271F890FF1792_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* V_0 = NULL;
	{
		// if (other.gameObject.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m5AA4E4CD890D601E009AA5EBFE9271F890FF1792(L_1, (&V_0), GameObject_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m5AA4E4CD890D601E009AA5EBFE9271F890FF1792_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// _audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->____audioSource_4;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// characterMovement.levelManager.isGateOpened = true;
		CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* L_4 = V_0;
		NullCheck(L_4);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_5 = L_4->___levelManager_4;
		NullCheck(L_5);
		L_5->___isGateOpened_24 = (bool)1;
		// Gate gate = GetComponentInParent<Gate>();
		Gate_tD423C3E3C6A390BF4DCC10322CBA2485840FF97A* L_6;
		L_6 = Component_GetComponentInParent_TisGate_tD423C3E3C6A390BF4DCC10322CBA2485840FF97A_m96F7615263E9BEDC5D421737518A1AA42C5C312C(__this, Component_GetComponentInParent_TisGate_tD423C3E3C6A390BF4DCC10322CBA2485840FF97A_m96F7615263E9BEDC5D421737518A1AA42C5C312C_RuntimeMethod_var);
		// gate.OpenGate();
		NullCheck(L_6);
		Gate_OpenGate_mB9091BD9F1F394BDF50204952F39AB9BDE2F7977(L_6, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Key::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Key_OnTriggerExit_m2EF4DA390FA97372A0C1A90C79430E581CA6EBFF (Key_tABCAEDDA423FEA303C2D20401D8E0797217C46F7* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	{
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Key::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Key__ctor_mA069FB77FE5BAEC833A31356AB0867315F988954 (Key_tABCAEDDA423FEA303C2D20401D8E0797217C46F7* __this, const RuntimeMethod* method) 
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
// System.Void MovingObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Start_m0C6E23E9EFB7BBF2B653F8C194A8E1FAF030A011 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, const RuntimeMethod* method) 
{
	{
		// _movingDirection = GetDirection(_direction);
		int32_t L_0 = __this->____direction_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = MovingObject_GetDirection_mEBDE3CBD9075EA3B6BDFA9BC058BA69E6526A210(__this, L_0, NULL);
		__this->____movingDirection_9 = L_1;
		// }
		return;
	}
}
// System.Void MovingObject::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_OnTriggerEnter_m2E0D191B6278540590B5F067514C25B155047CEC (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m5AA4E4CD890D601E009AA5EBFE9271F890FF1792_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* V_0 = NULL;
	{
		// if (other.gameObject.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement)
		//     && _isActivated == false)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m5AA4E4CD890D601E009AA5EBFE9271F890FF1792(L_1, (&V_0), GameObject_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m5AA4E4CD890D601E009AA5EBFE9271F890FF1792_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		bool L_3 = __this->____isActivated_12;
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		// _isActivated = true;
		__this->____isActivated_12 = (bool)1;
		// MoveObject(_moveType);
		int32_t L_4 = __this->____moveType_4;
		MovingObject_MoveObject_mD4A6C8B0D9B8CB7BE6BA3E2E6DE8707613E70C04(__this, L_4, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void MovingObject::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Move_m078C840D104CAFAE5BF0D7AF1636FD03D6D47960 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveDirection_t25F216271E44E3F390EF779503C6C81639E888C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E0E3DDECD62C377ADB2F682C9E0A3CA8051B29);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _model.DOMove(_model.position + _movingDirection * _moveDistanse, _movingDuration).SetEase(Ease.Linear);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____model_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____model_5;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->____movingDirection_9;
		int32_t L_4 = __this->____moveDistanse_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, ((float)L_4), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_5, NULL);
		float L_7 = __this->____movingDuration_8;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_8;
		L_8 = ShortcutExtensions_DOMove_m82274FDC0216A91A1FAF16844805D06BF9A287FF(L_0, L_6, L_7, (bool)0, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_9;
		L_9 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F(L_8, 1, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_mEACEF6A6E654DEDDB2620CD0BE1DA29C023F4E2F_RuntimeMethod_var);
		// Debug.Log($"Move {_direction} for {_moveDistanse}. Vector - {_movingDirection}");
		int32_t L_10 = __this->____direction_7;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(MoveDirection_t25F216271E44E3F390EF779503C6C81639E888C9_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = __this->____moveDistanse_6;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->____movingDirection_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16;
		RuntimeObject* L_18 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19;
		L_19 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralC8E0E3DDECD62C377ADB2F682C9E0A3CA8051B29, L_12, L_15, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
		// }
		return;
	}
}
// System.Void MovingObject::Rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Rotate_m6F4E99C8E49B7B6C694B27B5CD31B5FB26890B22 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m479C4B2D8A7F0E16B10353CCE4CABAF2748607EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FD9807F6FB54EB3596675E429E3C989BAD29058);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _model.DORotate(new Vector3(0f, transform.rotation.y + _angle, 0f), _rotatingDuration, RotateMode.FastBeyond360).SetEase(Ease.Linear);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____model_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		float L_3 = L_2.___y_1;
		int32_t L_4 = __this->____angle_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), ((float)il2cpp_codegen_add(L_3, ((float)L_4))), (0.0f), /*hidden argument*/NULL);
		float L_6 = __this->____rotatingDuration_11;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_7;
		L_7 = ShortcutExtensions_DORotate_mA2804C1A3E4780383111262752CC7056BBC7D470(L_0, L_5, L_6, 1, NULL);
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_8;
		L_8 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m479C4B2D8A7F0E16B10353CCE4CABAF2748607EE(L_7, 1, TweenSettingsExtensions_SetEase_TisTweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3_m479C4B2D8A7F0E16B10353CCE4CABAF2748607EE_RuntimeMethod_var);
		// Debug.Log($"Rotating for {_angle}");
		int32_t L_9 = __this->____angle_10;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral6FD9807F6FB54EB3596675E429E3C989BAD29058, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		// }
		return;
	}
}
// System.Void MovingObject::MoveObject(MoveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_MoveObject_mD4A6C8B0D9B8CB7BE6BA3E2E6DE8707613E70C04 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, int32_t ___0_moveType, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_moveType;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___0_moveType;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0017;
	}

IL_0009:
	{
		// Move();
		MovingObject_Move_m078C840D104CAFAE5BF0D7AF1636FD03D6D47960(__this, NULL);
		// break;
		return;
	}

IL_0010:
	{
		// Rotate();
		MovingObject_Rotate_m6F4E99C8E49B7B6C694B27B5CD31B5FB26890B22(__this, NULL);
		// break;
		return;
	}

IL_0017:
	{
		// Move();
		MovingObject_Move_m078C840D104CAFAE5BF0D7AF1636FD03D6D47960(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 MovingObject::GetDirection(MoveDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MovingObject_GetDirection_mEBDE3CBD9075EA3B6BDFA9BC058BA69E6526A210 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, int32_t ___0_direction, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_direction;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0032;
			}
			case 4:
			{
				goto IL_0038;
			}
			case 5:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_0044;
	}

IL_0020:
	{
		// return Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		return L_1;
	}

IL_0026:
	{
		// return Vector3.down;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		return L_2;
	}

IL_002c:
	{
		// return Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		return L_3;
	}

IL_0032:
	{
		// return Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		return L_4;
	}

IL_0038:
	{
		// return Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		return L_5;
	}

IL_003e:
	{
		// return Vector3.back;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		return L_6;
	}

IL_0044:
	{
		// default: return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		return L_7;
	}
}
// System.Void MovingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject__ctor_m8C4852F93E00E1456255E1775B6C56654158E0E4 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, const RuntimeMethod* method) 
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
// System.Void SnapPosition::Snap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapPosition_Snap_m54FA06637DF7FA50DF8259029DC29100DA5E6024 (SnapPosition_tA8954B7A34C68D2B95E25A05FBD48B160F718877* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var t = GetComponent<Transform>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(__this, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		// var p = t.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// t.position = new Vector3(Mathf.CeilToInt(p.x), Mathf.CeilToInt(p.y), Mathf.CeilToInt(p.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___x_2;
		int32_t L_5;
		L_5 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = L_6.___y_3;
		int32_t L_8;
		L_8 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = L_9.___z_4;
		int32_t L_11;
		L_11 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)L_5), ((float)L_8), ((float)L_11), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_12, NULL);
		// }
		return;
	}
}
// System.Void SnapPosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapPosition__ctor_m31B6ADF29CC2837D6019A673D81646B8A0E7FC9D (SnapPosition_tA8954B7A34C68D2B95E25A05FBD48B160F718877* __this, const RuntimeMethod* method) 
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
// System.Void SwipeDetection::add_swipePerformed(SwipeDetection/Swipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_add_swipePerformed_m7C21A8D9BC1C1FF927ED55A199DE998C3C5D6D79 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* V_0 = NULL;
	Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* V_1 = NULL;
	Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* V_2 = NULL;
	{
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_0 = __this->___swipePerformed_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_1 = V_0;
		V_1 = L_1;
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_2 = V_1;
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4*)CastclassSealed((RuntimeObject*)L_4, Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4_il2cpp_TypeInfo_var));
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4** L_5 = (&__this->___swipePerformed_5);
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_6 = V_2;
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_7 = V_1;
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_8;
		L_8 = InterlockedCompareExchangeImpl<Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4*>(L_5, L_6, L_7);
		V_0 = L_8;
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_9 = V_0;
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_10 = V_1;
		if ((!(((RuntimeObject*)(Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4*)L_9) == ((RuntimeObject*)(Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SwipeDetection::remove_swipePerformed(SwipeDetection/Swipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_remove_swipePerformed_mBB4814A67C945516989ECDD1926480575542D761 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* V_0 = NULL;
	Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* V_1 = NULL;
	Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* V_2 = NULL;
	{
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_0 = __this->___swipePerformed_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_1 = V_0;
		V_1 = L_1;
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_2 = V_1;
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4*)CastclassSealed((RuntimeObject*)L_4, Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4_il2cpp_TypeInfo_var));
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4** L_5 = (&__this->___swipePerformed_5);
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_6 = V_2;
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_7 = V_1;
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_8;
		L_8 = InterlockedCompareExchangeImpl<Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4*>(L_5, L_6, L_7);
		V_0 = L_8;
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_9 = V_0;
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_10 = V_1;
		if ((!(((RuntimeObject*)(Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4*)L_9) == ((RuntimeObject*)(Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.Vector2 SwipeDetection::get_currentPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SwipeDetection_get_currentPos_mDB90EDDFBD64BD13C7D6FB7512EC7EC60F3E063D (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector2 currentPos => position.ReadValue<Vector2>();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___position_6;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_0, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void SwipeDetection::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_Awake_m177BA109B7EF174B364372DFA77A3B5BB397421B (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_U3CAwakeU3Eb__14_0_mFF1BF39B4B715B3B732DE5FB91B6A5F975B128D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_U3CAwakeU3Eb__14_1_mED521C44DF37E1C721B895F64772D5785060EB45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// position.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___position_6;
		NullCheck(L_0);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_0, NULL);
		// press.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = __this->___press_7;
		NullCheck(L_1);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_1, NULL);
		// press.performed += _ => { initialPos = currentPos; };
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = __this->___press_7;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)SwipeDetection_U3CAwakeU3Eb__14_0_mFF1BF39B4B715B3B732DE5FB91B6A5F975B128D0_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_2, L_3, NULL);
		// press.canceled += _ => DetectSwipe();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = __this->___press_7;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_5 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_5, __this, (intptr_t)((void*)SwipeDetection_U3CAwakeU3Eb__14_1_mED521C44DF37E1C721B895F64772D5785060EB45_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_4, L_5, NULL);
		// instance = this;
		((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_StaticFields*)il2cpp_codegen_static_fields_for(SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void SwipeDetection::DetectSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_DetectSwipe_mD6AC075DC5A5C380C502DA4A8547C66869ADA34E (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04CAC48E1938CF72D7BBC46B278992C1A311515A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23B4237CD57C98463074F50A9168192F28DC9F95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B1CF05486392B109EE5E1C6F8F3769A8C65518F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9C6A41D0A85FED5D961B9FB1D44EDDEC4167CE5);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (isMoving || isPaused)
		bool L_0 = __this->___isMoving_10;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___isPaused_11;
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// Vector2 delta = currentPos - initialPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = SwipeDetection_get_currentPos_mDB90EDDFBD64BD13C7D6FB7512EC7EC60F3E063D(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___initialPos_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// Vector2 direction = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_1 = L_5;
		// if (Mathf.Abs(delta.x) > Mathf.Abs(delta.y) && Mathf.Abs(delta.x) > swipeResistance)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___x_0;
		float L_8;
		L_8 = fabsf(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10 = L_9.___y_1;
		float L_11;
		L_11 = fabsf(L_10);
		if ((!(((float)L_8) > ((float)L_11))))
		{
			goto IL_009b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		float L_13 = L_12.___x_0;
		float L_14;
		L_14 = fabsf(L_13);
		float L_15 = __this->___swipeResistance_8;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_009b;
		}
	}
	{
		// if (delta.x > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		float L_17 = L_16.___x_0;
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_0081;
		}
	}
	{
		// direction = Vector2.right;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		V_1 = L_18;
		// if (this.debugMode) Debug.Log("Swipe Right");
		bool L_19 = __this->___debugMode_12;
		if (!L_19)
		{
			goto IL_0105;
		}
	}
	{
		// if (this.debugMode) Debug.Log("Swipe Right");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9B1CF05486392B109EE5E1C6F8F3769A8C65518F, NULL);
		goto IL_0105;
	}

IL_0081:
	{
		// direction = Vector2.left;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline(NULL);
		V_1 = L_20;
		// if (this.debugMode) Debug.Log("Swipe Left");
		bool L_21 = __this->___debugMode_12;
		if (!L_21)
		{
			goto IL_0105;
		}
	}
	{
		// if (this.debugMode) Debug.Log("Swipe Left");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral04CAC48E1938CF72D7BBC46B278992C1A311515A, NULL);
		goto IL_0105;
	}

IL_009b:
	{
		// else if (Mathf.Abs(delta.y) > Mathf.Abs(delta.x) && Mathf.Abs(delta.y) > swipeResistance)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_0;
		float L_23 = L_22.___y_1;
		float L_24;
		L_24 = fabsf(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_0;
		float L_26 = L_25.___x_0;
		float L_27;
		L_27 = fabsf(L_26);
		if ((!(((float)L_24) > ((float)L_27))))
		{
			goto IL_0105;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_0;
		float L_29 = L_28.___y_1;
		float L_30;
		L_30 = fabsf(L_29);
		float L_31 = __this->___swipeResistance_8;
		if ((!(((float)L_30) > ((float)L_31))))
		{
			goto IL_0105;
		}
	}
	{
		// if (delta.y > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_0;
		float L_33 = L_32.___y_1;
		if ((!(((float)L_33) > ((float)(0.0f)))))
		{
			goto IL_00ed;
		}
	}
	{
		// direction = Vector2.up;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		V_1 = L_34;
		// if (this.debugMode) Debug.Log("Swipe Up");
		bool L_35 = __this->___debugMode_12;
		if (!L_35)
		{
			goto IL_0105;
		}
	}
	{
		// if (this.debugMode) Debug.Log("Swipe Up");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral23B4237CD57C98463074F50A9168192F28DC9F95, NULL);
		goto IL_0105;
	}

IL_00ed:
	{
		// direction = Vector2.down;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline(NULL);
		V_1 = L_36;
		// if (this.debugMode) Debug.Log("Swipe Down");
		bool L_37 = __this->___debugMode_12;
		if (!L_37)
		{
			goto IL_0105;
		}
	}
	{
		// if (this.debugMode) Debug.Log("Swipe Down");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF9C6A41D0A85FED5D961B9FB1D44EDDEC4167CE5, NULL);
	}

IL_0105:
	{
		// if (direction != Vector2.zero & swipePerformed != null)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_40;
		L_40 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_38, L_39, NULL);
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_41 = __this->___swipePerformed_5;
		if (!((int32_t)((int32_t)L_40&((!(((RuntimeObject*)(Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0))))
		{
			goto IL_0128;
		}
	}
	{
		// swipePerformed(direction);
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* L_42 = __this->___swipePerformed_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = V_1;
		NullCheck(L_42);
		Swipe_Invoke_mEDDD5BEFBC9CDF36CC68D87E531E6C05FB22520C_inline(L_42, L_43, NULL);
	}

IL_0128:
	{
		// }
		return;
	}
}
// System.Void SwipeDetection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection__ctor_m57902E84B7829542CBF0214C71B3F7816129BD9B (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float swipeResistance = 100;
		__this->___swipeResistance_8 = (100.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void SwipeDetection::<Awake>b__14_0(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_U3CAwakeU3Eb__14_0_mFF1BF39B4B715B3B732DE5FB91B6A5F975B128D0 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0__, const RuntimeMethod* method) 
{
	{
		// press.performed += _ => { initialPos = currentPos; };
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = SwipeDetection_get_currentPos_mDB90EDDFBD64BD13C7D6FB7512EC7EC60F3E063D(__this, NULL);
		__this->___initialPos_9 = L_0;
		// press.performed += _ => { initialPos = currentPos; };
		return;
	}
}
// System.Void SwipeDetection::<Awake>b__14_1(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_U3CAwakeU3Eb__14_1_mED521C44DF37E1C721B895F64772D5785060EB45 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0__, const RuntimeMethod* method) 
{
	{
		// press.canceled += _ => DetectSwipe();
		SwipeDetection_DetectSwipe_mD6AC075DC5A5C380C502DA4A8547C66869ADA34E(__this, NULL);
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
void Swipe_Invoke_mEDDD5BEFBC9CDF36CC68D87E531E6C05FB22520C_Multicast(Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* currentDelegate = reinterpret_cast<Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_direction, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Swipe_Invoke_mEDDD5BEFBC9CDF36CC68D87E531E6C05FB22520C_OpenInst(Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_direction, method);
}
void Swipe_Invoke_mEDDD5BEFBC9CDF36CC68D87E531E6C05FB22520C_OpenStatic(Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_direction, method);
}
void Swipe_Invoke_mEDDD5BEFBC9CDF36CC68D87E531E6C05FB22520C_OpenStaticInvoker(Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(__this->___method_ptr_0, method, NULL, ___0_direction);
}
void Swipe_Invoke_mEDDD5BEFBC9CDF36CC68D87E531E6C05FB22520C_ClosedStaticInvoker(Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_direction);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4 (Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_direction);

}
// System.Void SwipeDetection/Swipe::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swipe__ctor_mE06576E2FD4648D606A0D5BA9E9BD5F3BF4C7020 (Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Swipe_Invoke_mEDDD5BEFBC9CDF36CC68D87E531E6C05FB22520C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Swipe_Invoke_mEDDD5BEFBC9CDF36CC68D87E531E6C05FB22520C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Swipe_Invoke_mEDDD5BEFBC9CDF36CC68D87E531E6C05FB22520C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&Swipe_Invoke_mEDDD5BEFBC9CDF36CC68D87E531E6C05FB22520C_Multicast;
}
// System.Void SwipeDetection/Swipe::Invoke(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swipe_Invoke_mEDDD5BEFBC9CDF36CC68D87E531E6C05FB22520C (Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_direction, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SwipeDetection/Swipe::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Swipe_BeginInvoke_mBD4A56F2A1944D8B253271173A182EF1981CB56B (Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &___0_direction);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void SwipeDetection/Swipe::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swipe_EndInvoke_m4CBB984CDF54F758F615E0AFBFC953868AFAC059 (Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SwipeInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeInput_Update_m6708BCFBC0EE395A4979AEDF1A330330549339CA (SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232* __this, const RuntimeMethod* method) 
{
	{
		// if (canDetectSwipe && !isOnMenu) { DetectSwipe(); }
		bool L_0 = __this->___canDetectSwipe_9;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = __this->___isOnMenu_10;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (canDetectSwipe && !isOnMenu) { DetectSwipe(); }
		SwipeInput_DetectSwipe_mE97FD53992E3F55FD07BCE17429F4FE805341316(__this, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void SwipeInput::DetectSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeInput_DetectSwipe_mE97FD53992E3F55FD07BCE17429F4FE805341316 (SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04CAC48E1938CF72D7BBC46B278992C1A311515A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23B4237CD57C98463074F50A9168192F28DC9F95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B1CF05486392B109EE5E1C6F8F3769A8C65518F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9C6A41D0A85FED5D961B9FB1D44EDDEC4167CE5);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetKeyDown(KeyCode.Mouse0))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)323), NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// this.startPos = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		__this->___startPos_6 = L_2;
	}

IL_001c:
	{
		// if (Input.GetKeyUp(KeyCode.Mouse0))
		bool L_3;
		L_3 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)323), NULL);
		if (!L_3)
		{
			goto IL_0160;
		}
	}
	{
		// this.endPos = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_4, NULL);
		__this->___endPos_7 = L_5;
		// Vector2 delta = startPos - endPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___startPos_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___endPos_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_7, NULL);
		V_0 = L_8;
		// if (Mathf.Abs(delta.x) > Mathf.Abs(delta.y) && Mathf.Abs(delta.x) > swipeResistance)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10 = L_9.___x_0;
		float L_11;
		L_11 = fabsf(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		float L_13 = L_12.___y_1;
		float L_14;
		L_14 = fabsf(L_13);
		if ((!(((float)L_11) > ((float)L_14))))
		{
			goto IL_00d7;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		float L_16 = L_15.___x_0;
		float L_17;
		L_17 = fabsf(L_16);
		float L_18 = __this->___swipeResistance_4;
		if ((!(((float)L_17) > ((float)L_18))))
		{
			goto IL_00d7;
		}
	}
	{
		// if (delta.x < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_0;
		float L_20 = L_19.___x_0;
		if ((!(((float)L_20) < ((float)(0.0f)))))
		{
			goto IL_00ae;
		}
	}
	{
		// if (debugMode) Debug.Log("Swipe Right");
		bool L_21 = __this->___debugMode_8;
		if (!L_21)
		{
			goto IL_0097;
		}
	}
	{
		// if (debugMode) Debug.Log("Swipe Right");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9B1CF05486392B109EE5E1C6F8F3769A8C65518F, NULL);
	}

IL_0097:
	{
		// direction = Vector2.right;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		__this->___direction_5 = L_22;
		// onSwipeRight.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_23 = __this->___onSwipeRight_13;
		NullCheck(L_23);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_23, NULL);
		return;
	}

IL_00ae:
	{
		// if (debugMode) Debug.Log("Swipe Left");
		bool L_24 = __this->___debugMode_8;
		if (!L_24)
		{
			goto IL_00c0;
		}
	}
	{
		// if (debugMode) Debug.Log("Swipe Left");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral04CAC48E1938CF72D7BBC46B278992C1A311515A, NULL);
	}

IL_00c0:
	{
		// direction = Vector2.left;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline(NULL);
		__this->___direction_5 = L_25;
		// onSwipeLeft.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_26 = __this->___onSwipeLeft_14;
		NullCheck(L_26);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_26, NULL);
		return;
	}

IL_00d7:
	{
		// else if (Mathf.Abs(delta.y) > Mathf.Abs(delta.x) && Mathf.Abs(delta.y) > swipeResistance)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_0;
		float L_28 = L_27.___y_1;
		float L_29;
		L_29 = fabsf(L_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_0;
		float L_31 = L_30.___x_0;
		float L_32;
		L_32 = fabsf(L_31);
		if ((!(((float)L_29) > ((float)L_32))))
		{
			goto IL_0160;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_0;
		float L_34 = L_33.___y_1;
		float L_35;
		L_35 = fabsf(L_34);
		float L_36 = __this->___swipeResistance_4;
		if ((!(((float)L_35) > ((float)L_36))))
		{
			goto IL_0160;
		}
	}
	{
		// if (delta.y < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_0;
		float L_38 = L_37.___y_1;
		if ((!(((float)L_38) < ((float)(0.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		// if (debugMode) Debug.Log("Swipe Up");
		bool L_39 = __this->___debugMode_8;
		if (!L_39)
		{
			goto IL_0121;
		}
	}
	{
		// if (debugMode) Debug.Log("Swipe Up");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral23B4237CD57C98463074F50A9168192F28DC9F95, NULL);
	}

IL_0121:
	{
		// direction = Vector2.up;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		__this->___direction_5 = L_40;
		// onSwipeUp.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_41 = __this->___onSwipeUp_11;
		NullCheck(L_41);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_41, NULL);
		return;
	}

IL_0138:
	{
		// if (debugMode) Debug.Log("Swipe Down");
		bool L_42 = __this->___debugMode_8;
		if (!L_42)
		{
			goto IL_014a;
		}
	}
	{
		// if (debugMode) Debug.Log("Swipe Down");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF9C6A41D0A85FED5D961B9FB1D44EDDEC4167CE5, NULL);
	}

IL_014a:
	{
		// direction = Vector2.down;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline(NULL);
		__this->___direction_5 = L_43;
		// onSwipeDown.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_44 = __this->___onSwipeDown_12;
		NullCheck(L_44);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_44, NULL);
	}

IL_0160:
	{
		// }
		return;
	}
}
// System.Void SwipeInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeInput__ctor_mD07810289BC69F0E11D6F33945CD16CCBD0CAD89 (SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232* __this, const RuntimeMethod* method) 
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
// System.Void Teleport::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_Start_mF02EA4951C78290474EB25074D85C0EC70EA0815 (Teleport_t7DA0AAB400611F9CE2A644E906868E196EBF22AC* __this, const RuntimeMethod* method) 
{
	{
		// SetTeleportsValues();
		Teleport_SetTeleportsValues_m75B95FC6ADEDB8A914FE158AA593F67F853C9FE8(__this, NULL);
		// SetTeleportsColors(_mainColor, _mainColorAlpha);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->____mainColor_4;
		float L_1 = __this->____mainColorAlpha_5;
		Teleport_SetTeleportsColors_mED4C8609413EBBE5C6D61CA4DEBB74D8FA5288E6(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Teleport::SetTeleportsValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_SetTeleportsValues_m75B95FC6ADEDB8A914FE158AA593F67F853C9FE8 (Teleport_t7DA0AAB400611F9CE2A644E906868E196EBF22AC* __this, const RuntimeMethod* method) 
{
	{
		// teleportTargetA.SetTargetPoint(teleportTargetB);
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_0 = __this->___teleportTargetA_7;
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_1 = __this->___teleportTargetB_8;
		NullCheck(L_0);
		TeleportPoint_SetTargetPoint_mF212848923729D808D41F71AFA2C90A9DCB9AC88_inline(L_0, L_1, NULL);
		// teleportTargetB.SetTargetPoint(teleportTargetA);
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_2 = __this->___teleportTargetB_8;
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_3 = __this->___teleportTargetA_7;
		NullCheck(L_2);
		TeleportPoint_SetTargetPoint_mF212848923729D808D41F71AFA2C90A9DCB9AC88_inline(L_2, L_3, NULL);
		// teleportTargetA.SetState(true);
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_4 = __this->___teleportTargetA_7;
		NullCheck(L_4);
		TeleportPoint_SetState_m5259DD3F3426A41D254588E64237D3EA7F8312FE(L_4, (bool)1, NULL);
		// teleportTargetB.SetState(true);
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_5 = __this->___teleportTargetB_8;
		NullCheck(L_5);
		TeleportPoint_SetState_m5259DD3F3426A41D254588E64237D3EA7F8312FE(L_5, (bool)1, NULL);
		// teleportTargetA.SetAudio(_teleportSound);
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_6 = __this->___teleportTargetA_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = __this->____teleportSound_6;
		NullCheck(L_6);
		TeleportPoint_SetAudio_m196A52DC1BD4F91C8F03A6C7401D8DF9F268FACA(L_6, L_7, NULL);
		// teleportTargetB.SetAudio(_teleportSound);
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_8 = __this->___teleportTargetB_8;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = __this->____teleportSound_6;
		NullCheck(L_8);
		TeleportPoint_SetAudio_m196A52DC1BD4F91C8F03A6C7401D8DF9F268FACA(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Teleport::SetTeleportsColors(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport_SetTeleportsColors_mED4C8609413EBBE5C6D61CA4DEBB74D8FA5288E6 (Teleport_t7DA0AAB400611F9CE2A644E906868E196EBF22AC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_alpha, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m68853A22B1875F33EC45FD811EB549E514AF3967_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// color.a = alpha;
		float L_0 = ___1_alpha;
		(&___0_color)->___a_3 = L_0;
		// _lightA = teleportTargetA.GetComponentInChildren<Light>();
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_1 = __this->___teleportTargetA_7;
		NullCheck(L_1);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2;
		L_2 = Component_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m68853A22B1875F33EC45FD811EB549E514AF3967(L_1, Component_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m68853A22B1875F33EC45FD811EB549E514AF3967_RuntimeMethod_var);
		__this->____lightA_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lightA_9), (void*)L_2);
		// _lightB = teleportTargetB.GetComponentInChildren<Light>();
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_3 = __this->___teleportTargetB_8;
		NullCheck(L_3);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4;
		L_4 = Component_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m68853A22B1875F33EC45FD811EB549E514AF3967(L_3, Component_GetComponentInChildren_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m68853A22B1875F33EC45FD811EB549E514AF3967_RuntimeMethod_var);
		__this->____lightB_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lightB_10), (void*)L_4);
		// _lightA.color = _lightB.color = color;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_5 = __this->____lightA_9;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_6 = __this->____lightB_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___0_color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = L_7;
		V_0 = L_8;
		NullCheck(L_6);
		Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C(L_6, L_8, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		NullCheck(L_5);
		Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void Teleport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teleport__ctor_mBE9263D3201BDF5309D9B75C0EEEDAC1FA904EC9 (Teleport_t7DA0AAB400611F9CE2A644E906868E196EBF22AC* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _mainColorAlpha = 0.7f;
		__this->____mainColorAlpha_5 = (0.699999988f);
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
// System.Boolean TeleportPoint::get_IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TeleportPoint_get_IsActive_m258A179E47CE50D6B5AF1D1BAF0CFB5E949BEFAB (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsActive { get;private set; }
		bool L_0 = __this->___U3CIsActiveU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void TeleportPoint::set_IsActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPoint_set_IsActive_mB4FE047F2DEC8DB13BD4D9065354086BB557CB13 (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsActive { get;private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsActiveU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void TeleportPoint::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPoint_Start_m950F43A5C415487A90D2E002FF6598E16C4A4510 (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _source = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->____source_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____source_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void TeleportPoint::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPoint_OnTriggerEnter_mEBE1B7FEAB04B63A4FDF4729F83EA0270E50BA16 (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_mFA30A89771E56B87D41EEF72A0969417ADFD7A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1645079AF0AD68877D5774BC81695A708DB69E30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DE9B802160BBFD2676221825BF9B1BA083BB842);
		s_Il2CppMethodInitialized = true;
	}
	CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* V_0 = NULL;
	{
		// Debug.Log("Enter trigger");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6DE9B802160BBFD2676221825BF9B1BA083BB842, NULL);
		// if (other.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement) && IsActive)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_mFA30A89771E56B87D41EEF72A0969417ADFD7A92(L_0, (&V_0), Component_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_mFA30A89771E56B87D41EEF72A0969417ADFD7A92_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		bool L_2;
		L_2 = TeleportPoint_get_IsActive_m258A179E47CE50D6B5AF1D1BAF0CFB5E949BEFAB_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		// characterMovement.StopMovement();
		CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* L_3 = V_0;
		NullCheck(L_3);
		CharacterMovement_StopMovement_m54A84847F307FC35CE209BD2FB257D79020170D2(L_3, NULL);
		// characterMovement.transform.position = _target.transform.position;
		CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_6 = __this->____target_4;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_8, NULL);
		// Handheld.Vibrate();
		Handheld_Vibrate_m820B68A9A3A1C5C0173B99A94C2054778BC3A2F9(NULL);
		// Debug.Log("vibrate");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1645079AF0AD68877D5774BC81695A708DB69E30, NULL);
		// _source.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->____source_5;
		NullCheck(L_9);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void TeleportPoint::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPoint_OnTriggerExit_mF6E30EFA41C6A6AB5D51C188E1C0BEDB045D119F (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_mFA30A89771E56B87D41EEF72A0969417ADFD7A92_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* V_0 = NULL;
	{
		// if (other.TryGetComponent<CharacterMovement>(out CharacterMovement characterMovement) )
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_mFA30A89771E56B87D41EEF72A0969417ADFD7A92(L_0, (&V_0), Component_TryGetComponent_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_mFA30A89771E56B87D41EEF72A0969417ADFD7A92_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// if (_target.IsActive)
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_2 = __this->____target_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = TeleportPoint_get_IsActive_m258A179E47CE50D6B5AF1D1BAF0CFB5E949BEFAB_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// _target.SwitchState();
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_4 = __this->____target_4;
		NullCheck(L_4);
		TeleportPoint_SwitchState_m3F704BBA24ED2097604284AD0934FC2FAA945FE4(L_4, NULL);
		// SwitchState();
		TeleportPoint_SwitchState_m3F704BBA24ED2097604284AD0934FC2FAA945FE4(__this, NULL);
	}

IL_0028:
	{
		// if(!IsActive) SwitchState();
		bool L_5;
		L_5 = TeleportPoint_get_IsActive_m258A179E47CE50D6B5AF1D1BAF0CFB5E949BEFAB_inline(__this, NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		// if(!IsActive) SwitchState();
		TeleportPoint_SwitchState_m3F704BBA24ED2097604284AD0934FC2FAA945FE4(__this, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void TeleportPoint::SetTargetPoint(TeleportPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPoint_SetTargetPoint_mF212848923729D808D41F71AFA2C90A9DCB9AC88 (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* ___0_point, const RuntimeMethod* method) 
{
	{
		// _target = point;
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_0 = ___0_point;
		__this->____target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void TeleportPoint::SwitchState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPoint_SwitchState_m3F704BBA24ED2097604284AD0934FC2FAA945FE4 (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, const RuntimeMethod* method) 
{
	{
		// IsActive = !IsActive;
		bool L_0;
		L_0 = TeleportPoint_get_IsActive_m258A179E47CE50D6B5AF1D1BAF0CFB5E949BEFAB_inline(__this, NULL);
		TeleportPoint_set_IsActive_mB4FE047F2DEC8DB13BD4D9065354086BB557CB13_inline(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void TeleportPoint::SetState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPoint_SetState_m5259DD3F3426A41D254588E64237D3EA7F8312FE (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, bool ___0_state, const RuntimeMethod* method) 
{
	{
		// IsActive = state;
		bool L_0 = ___0_state;
		TeleportPoint_set_IsActive_mB4FE047F2DEC8DB13BD4D9065354086BB557CB13_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TeleportPoint::SetAudio(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPoint_SetAudio_m196A52DC1BD4F91C8F03A6C7401D8DF9F268FACA (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) 
{
	{
		// _source.clip = clip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____source_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___0_clip;
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TeleportPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPoint__ctor_mAADD3354EEFD0412667F722DD1EB365346C2E558 (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, const RuntimeMethod* method) 
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
// System.Void CurrentLevel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentLevel_Start_mEE43318280EA29857F5B8205D462419953991647 (CurrentLevel_t8CD70AE97791B07F5855BC398A64DE9E1FDC3494* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m3712EC6864371DA8E0347499ACF880075A6B1F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// characterMovement= FindObjectOfType<CharacterMovement>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* L_0;
		L_0 = Object_FindObjectOfType_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m3712EC6864371DA8E0347499ACF880075A6B1F92(Object_FindObjectOfType_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m3712EC6864371DA8E0347499ACF880075A6B1F92_RuntimeMethod_var);
		__this->___characterMovement_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___characterMovement_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void CurrentLevel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentLevel_Update_mC988DD03B372F989B02F34F12956BF7554E68EE4 (CurrentLevel_t8CD70AE97791B07F5855BC398A64DE9E1FDC3494* __this, const RuntimeMethod* method) 
{
	{
		// UpdateLevelText();
		CurrentLevel_UpdateLevelText_m23507589E6BF0809C7CDFC9EB5C67A599BA1594B(__this, NULL);
		// }
		return;
	}
}
// System.Void CurrentLevel::UpdateLevelText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentLevel_UpdateLevelText_m23507589E6BF0809C7CDFC9EB5C67A599BA1594B (CurrentLevel_t8CD70AE97791B07F5855BC398A64DE9E1FDC3494* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral921E89896A83EEAD71759D0E569160913410C0AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// level = characterMovement.levelManager.level;
		CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* L_0 = __this->___characterMovement_6;
		NullCheck(L_0);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_1 = L_0->___levelManager_4;
		NullCheck(L_1);
		int32_t L_2 = L_1->___level_13;
		__this->___level_4 = L_2;
		// levelText.text = string.Format("Level {0}", level);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___levelText_5;
		int32_t L_4 = __this->___level_4;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral921E89896A83EEAD71759D0E569160913410C0AC, L_6, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		// }
		return;
	}
}
// System.Void CurrentLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentLevel__ctor_m2A89D924AB99BCA1A9EB010A6E126AAD64801F47 (CurrentLevel_t8CD70AE97791B07F5855BC398A64DE9E1FDC3494* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private int level = 1;
		__this->___level_4 = 1;
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
// System.Int32 FpsCounter::get_AverageFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FpsCounter_get_AverageFPS_mD00F62B3E502460309C955F4A36AEE5AEF20106A (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) 
{
	{
		// public int AverageFPS { get; private set; }
		int32_t L_0 = __this->___U3CAverageFPSU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void FpsCounter::set_AverageFPS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsCounter_set_AverageFPS_mECBFF81A9A5AB622B428A1CF179D416E983D287D (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int AverageFPS { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CAverageFPSU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Int32 FpsCounter::get_HighestPFS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FpsCounter_get_HighestPFS_m5E4BCB9BA0F69C16EDE766363572D3D729982A93 (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) 
{
	{
		// public int HighestPFS { get; private set; }
		int32_t L_0 = __this->___U3CHighestPFSU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void FpsCounter::set_HighestPFS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsCounter_set_HighestPFS_mBA48A4553C914FA4188FB97B2C04BF451CE0788F (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int HighestPFS { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CHighestPFSU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Int32 FpsCounter::get_LowersFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FpsCounter_get_LowersFPS_m4E97FCC8B11DB3BF859BF24F768282E1699DF0DB (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) 
{
	{
		// public int LowersFPS { get; private set; }
		int32_t L_0 = __this->___U3CLowersFPSU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void FpsCounter::set_LowersFPS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsCounter_set_LowersFPS_mCE7E78B36FA4771A6C514F82A9063732858F78EF (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int LowersFPS { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CLowersFPSU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void FpsCounter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsCounter_Update_mE884091387D71F2C763ECA753CF2FC11FD871595 (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) 
{
	{
		// if (_fpsBuffer == null || _frameRange != _fpsBuffer.Length)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____fpsBuffer_5;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->____frameRange_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____fpsBuffer_5;
		NullCheck(L_2);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_001e;
		}
	}

IL_0018:
	{
		// InitializeBuffer();
		FpsCounter_InitializeBuffer_m0CDA43A78F7166DDF1BA329F6C2DF14E6C1C6298(__this, NULL);
	}

IL_001e:
	{
		// UpdateBuffer();
		FpsCounter_UpdateBuffer_mE6F1372BA931F803FFD54898A8A2C4B75718CE18(__this, NULL);
		// CalculateFps();
		FpsCounter_CalculateFps_m63E95981B7B2F1CF3E0F8122BB200647AB0E1E1B(__this, NULL);
		// }
		return;
	}
}
// System.Void FpsCounter::InitializeBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsCounter_InitializeBuffer_m0CDA43A78F7166DDF1BA329F6C2DF14E6C1C6298 (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_frameRange <= 0)
		int32_t L_0 = __this->____frameRange_4;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// _frameRange = 1;
		__this->____frameRange_4 = 1;
	}

IL_0010:
	{
		// _fpsBuffer = new int[_frameRange];
		int32_t L_1 = __this->____frameRange_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->____fpsBuffer_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fpsBuffer_5), (void*)L_2);
		// _fpsBufferIndex = 0;
		__this->____fpsBufferIndex_6 = 0;
		// }
		return;
	}
}
// System.Void FpsCounter::UpdateBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsCounter_UpdateBuffer_mE6F1372BA931F803FFD54898A8A2C4B75718CE18 (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// _fpsBuffer[_fpsBufferIndex++] = (int)(1f / Time.unscaledDeltaTime);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____fpsBuffer_5;
		int32_t L_1 = __this->____fpsBufferIndex_6;
		V_0 = L_1;
		int32_t L_2 = V_0;
		__this->____fpsBufferIndex_6 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		float L_4;
		L_4 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((float)((1.0f)/L_4))));
		// if (_fpsBufferIndex >= _frameRange)
		int32_t L_5 = __this->____fpsBufferIndex_6;
		int32_t L_6 = __this->____frameRange_4;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0039;
		}
	}
	{
		// _fpsBufferIndex = 0;
		__this->____fpsBufferIndex_6 = 0;
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void FpsCounter::CalculateFps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsCounter_CalculateFps_m63E95981B7B2F1CF3E0F8122BB200647AB0E1E1B (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// int sum = 0;
		V_0 = 0;
		// int lowest = int.MaxValue;
		V_1 = ((int32_t)2147483647LL);
		// int highest = 0;
		V_2 = 0;
		// for (int i = 0; i < _frameRange; i++)
		V_3 = 0;
		goto IL_0031;
	}

IL_000e:
	{
		// int fps = _fpsBuffer[i];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____fpsBuffer_5;
		int32_t L_1 = V_3;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_4 = L_3;
		// sum += fps;
		int32_t L_4 = V_0;
		int32_t L_5 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// if (fps > highest)
		int32_t L_6 = V_4;
		int32_t L_7 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0025;
		}
	}
	{
		// highest = fps;
		int32_t L_8 = V_4;
		V_2 = L_8;
	}

IL_0025:
	{
		// if (fps < lowest)
		int32_t L_9 = V_4;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_002d;
		}
	}
	{
		// lowest = fps;
		int32_t L_11 = V_4;
		V_1 = L_11;
	}

IL_002d:
	{
		// for (int i = 0; i < _frameRange; i++)
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0031:
	{
		// for (int i = 0; i < _frameRange; i++)
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____frameRange_4;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000e;
		}
	}
	{
		// HighestPFS = highest;
		int32_t L_15 = V_2;
		FpsCounter_set_HighestPFS_mBA48A4553C914FA4188FB97B2C04BF451CE0788F_inline(__this, L_15, NULL);
		// LowersFPS = lowest;
		int32_t L_16 = V_1;
		FpsCounter_set_LowersFPS_mCE7E78B36FA4771A6C514F82A9063732858F78EF_inline(__this, L_16, NULL);
		// AverageFPS = sum / _frameRange;
		int32_t L_17 = V_0;
		int32_t L_18 = __this->____frameRange_4;
		FpsCounter_set_AverageFPS_mECBFF81A9A5AB622B428A1CF179D416E983D287D_inline(__this, ((int32_t)(L_17/L_18)), NULL);
		// }
		return;
	}
}
// System.Void FpsCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsCounter__ctor_m506029A7C7CCCDE4C29F0EE36A507786FBCBCA0E (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) 
{
	{
		// private int _frameRange = 60;
		__this->____frameRange_4 = ((int32_t)60);
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
// System.Void FpsDisplay::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsDisplay_Awake_m854381B8E3CEE1E29B63730B2D2EC281E374C47F (FpsDisplay_tEA3840316D8926D6080862BF1482309EE394F9A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D_m04D82DBA08268244BF399CA23F30CF2721087FED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _fpsCounter = GetComponent<FpsCounter>();
		FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* L_0;
		L_0 = Component_GetComponent_TisFpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D_m04D82DBA08268244BF399CA23F30CF2721087FED(__this, Component_GetComponent_TisFpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D_m04D82DBA08268244BF399CA23F30CF2721087FED_RuntimeMethod_var);
		__this->____fpsCounter_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fpsCounter_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void FpsDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsDisplay_Update_m1B799566BBF7AABA321F32A7FD4FCC8E6E7ACD21 (FpsDisplay_tEA3840316D8926D6080862BF1482309EE394F9A7* __this, const RuntimeMethod* method) 
{
	{
		// Display(_averageLabel, _fpsCounter.AverageFPS);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____averageLabel_4;
		FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* L_1 = __this->____fpsCounter_8;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = FpsCounter_get_AverageFPS_mD00F62B3E502460309C955F4A36AEE5AEF20106A_inline(L_1, NULL);
		FpsDisplay_Display_m0E4E99340C59F889C73F57B47CD49F57312AD76C(__this, L_0, L_2, NULL);
		// Display(_highestLabel, _fpsCounter.HighestPFS);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->____highestLabel_5;
		FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* L_4 = __this->____fpsCounter_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = FpsCounter_get_HighestPFS_m5E4BCB9BA0F69C16EDE766363572D3D729982A93_inline(L_4, NULL);
		FpsDisplay_Display_m0E4E99340C59F889C73F57B47CD49F57312AD76C(__this, L_3, L_5, NULL);
		// Display(_lowestLabel, _fpsCounter.LowersFPS);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->____lowestLabel_6;
		FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* L_7 = __this->____fpsCounter_8;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = FpsCounter_get_LowersFPS_m4E97FCC8B11DB3BF859BF24F768282E1699DF0DB_inline(L_7, NULL);
		FpsDisplay_Display_m0E4E99340C59F889C73F57B47CD49F57312AD76C(__this, L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void FpsDisplay::Display(UnityEngine.UI.Text,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsDisplay_Display_m0E4E99340C59F889C73F57B47CD49F57312AD76C (FpsDisplay_tEA3840316D8926D6080862BF1482309EE394F9A7* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___0_label, int32_t ___1_fps, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// label.text = _stringsFrom00To99[Mathf.Clamp(fps, 0, 99)];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = ___0_label;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->____stringsFrom00To99_9;
		int32_t L_2 = ___1_fps;
		int32_t L_3;
		L_3 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_2, 0, ((int32_t)99), NULL);
		NullCheck(L_1);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// for (int i = 0; i < _fpsColors.Length; i++)
		V_0 = 0;
		goto IL_004a;
	}

IL_001a:
	{
		// if (fps >= _fpsColors[i].MinFPS)
		int32_t L_6 = ___1_fps;
		FPSColorU5BU5D_tCE767ECA83A75389A07BF36A43CFBF6BC7EB89EC* L_7 = __this->____fpsColors_7;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___MinFPS_1;
		if ((((int32_t)L_6) < ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		// label.color = _fpsColors[i].Color;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = ___0_label;
		FPSColorU5BU5D_tCE767ECA83A75389A07BF36A43CFBF6BC7EB89EC* L_11 = __this->____fpsColors_7;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___Color_0;
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_13);
		// break;
		return;
	}

IL_0046:
	{
		// for (int i = 0; i < _fpsColors.Length; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < _fpsColors.Length; i++)
		int32_t L_15 = V_0;
		FPSColorU5BU5D_tCE767ECA83A75389A07BF36A43CFBF6BC7EB89EC* L_16 = __this->____fpsColors_7;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FpsDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsDisplay__ctor_m667967E45EB1F3507C5A6E682268D901816BAD27 (FpsDisplay_tEA3840316D8926D6080862BF1482309EE394F9A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral013DA6E48D6D0616544F966EBF1ADEC7B6254D4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral035D44F946AF053A0163B3A4BFD6A52AED246816);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03CB7A0F2F7AAD28CE58D297B7A10BA9606D89D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DA1A21F5DC7D20E3A2832D8CDA7B4ADCD2A2789);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17CF05962AC1AC77CD4B5247CC6311690D8DAFE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AA1790AE1BC157DD7BC2E8E7D142CB22C2346A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B0F94B590FC16451340705DFFEBEA0F5DB16189);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D31BD1B4C79BAB71F98F7341183F855786534EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D7E532EA242647676D2FDC0CEDAC8275E273296);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DC9F6BC39F00E092B0BEEEEE189243DA24E1C20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EABFF598CE5B1DE50532CB71FD74C8F1B848045);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral223CA56814CE64D5CFDB92BD828F5C0263182384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DC5E0BF73157E4A9F40EBB2C5D045B1E35CA62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29ACA8B35D157255506569C2FDE770164887E7A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral331550C0DB1643A8C5E6C9E3A71B9D7B919BAA4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378D4B13D43254F58BBC24781F8D679374A87290);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38428ED9CF894DD8900E3EFE3AF876442EC18630);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B1F844FC8B37D0220BFC2B961AA65E0F1B37A4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F2610BD29C00CCB98CBE4D5E8D3EA27DFA76A57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42F23AB2A3A10ACC0655DD1B40479C7C524EB8CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48C81EC4EFA65C9154EEE61EFFDE60DBE59D9149);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F91A67128A20B774E7007B8FA34D9460DEECFE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral521FB55423CC068B92B5E8453A36DF0D6CBDD93F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54D7885D1D716DC6D8F0018DDB6363829D28D5FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral556DDA907570BAA94FD8305D5E082166623C2DE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral564F8D06BB59C6D9E75745A49D7A45A7875B78B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57FB75EFE62EFCFA46A7519D514A1EE2738B1325);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral594731E53B6AAB1637B129ADD00D9E8B719AB998);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral597CCAAD822896FC6E71012763467F92C7EBBB45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CFAA1085C1E7A33C1838490FEE60CB112C68908);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral656F9736477335AF0B68DB002FCA2CF39D90BE17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral689C266FAF9DA42F9B0B13194EC62FCD4F537F54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A5A33D881BF3BC2A264AD65CEA496BEFB499ECD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F7B03E8D49E8A4621051DE1962CB493500481ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral700C1596CA301B3AA61533700CEED311DC1053BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70A3CC498A396DB6AAFDB20BBB977F32E586F3ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral711F8FB7EBB7FDAC8B8722A4C60A0BFB244C05CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral727B9F62266ED714B16AD3CD556D127E287B7EF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7353C41C94834E4F94476B65695D9DD63DA5FAF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B27FBC427F2E64E84540382BF80B1B14133EC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77F9EF517F2B20A7654CC97FB749C3F9AA1BCFB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral792BED7AE838D9267644F8329AA86A301260BB2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A0715F14179DC419A2631015EA9C917407CE86C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B2714DCE6714B9B5A18319E32D6EAF31CA21A99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BB1216534F62E33C705BB99471F10C9CAEBFBE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D552237CC7BE75F25030583A548DF1569AD38DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80B8671A49E749CC71E72F5C36599D0445F8A623);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral816238D2C5B664EF76E039079E40C1492ADCF0EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8164785248D4527B71ED3FFED13F52B8742057B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral823AC7F13547BB61EE004EE339F656811348D94B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral881DF9583D296C0D5B7AC5C9B371AC14F893F4B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E79A8D4955F07A325276C196D56413096F3F6BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FE7B9E4379FA727669A5DD2E2B5591AE8C6D6FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90DF7078E3D93E8E6F0CB88954D180EF21C4F4D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94AA14A52763F3CD8FFB480C9EF5EBD529D39C24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C532A4F4F5ED29A023CF3CE13143084C214486E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D738A6BF0A0D11C2CB2FF3E38BE9D7F4597A159);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D757937698966F2331E4E96A61C39D901252926);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA168A02D7C7E01EBCA44030225683D8463171553);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1F8C30AF9A614832E6AEAE94C81E0CB4D21FA81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6A6AB007C12E7673D8479299FDC94A4D003EBF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0B6A8F061CC3AE2C94A330AEE6DD40E4E4E2B4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB27C66584E1BBBB39F7A399DF03A22113AEEE5A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB31DFDC0094CA632CE85BD98DC353BD74EC823B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49A2230911F3A9414AEBBE06AFCE6B72B36DCF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB954912D5B613A9BBB9E57567C01A78DAF496997);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9E15D36DACFA970D8917F8A2D25B3E56074B572);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC3101BFE36604E54F5668684B113C5BF96A5EF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCE50315D5962AAE042FCBB79C1CFB34677DFCCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC47E7F7AEF16F78CE7B3D75756F38A67794AF4D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6C53101303B2CB0C0C2D14996D67FFA573A5642);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA7B796A938750C9E9B720D01F4B50435E945834);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCED3387522B9AA1B7C4BAC7682637F8019E0E6B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD12AD3BCDBBC36B051A719533D5A3EE506E3FB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD75E9C7F49F91A91ADCC572A05944309180DEA26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB6C948A11F94B49A41CEE21C07BACE833C0EA3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD8D195854FE6A5448A819D605C3800954C75B0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02F95854508CEE53A194021280421E6D86608C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1143D7DA21141328B0C670E4618982430814767);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3FF2A704FE59A527FD465C10FF5763D7572482C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2E8F12196B3367A735F4C71E698E73DDBB43BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECBC52CAFDDD6151BB724471E83608B3091C31F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED12904133FFAC97817184051B6295791EAE98DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF7FC24B5117DE7A50326EB54B70AF5BAC17A774);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF16BEBAAB4E57C7E143CFCE970AA15566F151F99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF77EF0378833B12CB5CD7EA0B4BBC50FA06C5A21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7A9D932DF5909F071A811EB0CE88038FA67F832);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8591E019243177659D36C84E0F0DD536C62D029);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF859CAA74FC4BD45E85F9AFF276F614AE47D3DA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8F98CCC463B752A50D594965B61D8CE349F0E30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF99EE8F8E0BAA5AFD89858A0AD24112CDD14DCE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA6EA40B2C0B543B0A9184854D4DDDDA02A93BAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB3E2E45E3697C91835CFBCA547A1B38DF6A850D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF01C47ABD568A459C8EA38273E930831E0F8561);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF4D3CF653D251924E09F33181DC7CA164DA089E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string[] _stringsFrom00To99 = {
		//     "00", "01", "02", "03", "04", "05", "06", "07", "08", "09",
		//     "10", "11", "12", "13", "14", "15", "16", "17", "18", "19",
		//     "20", "21", "22", "23", "24", "25", "26", "27", "28", "29",
		//     "30", "31", "32", "33", "34", "35", "36", "37", "38", "39",
		//     "40", "41", "42", "43", "44", "45", "46", "47", "48", "49",
		//     "50", "51", "52", "53", "54", "55", "56", "57", "58", "59",
		//     "60", "61", "62", "63", "64", "65", "66", "67", "68", "69",
		//     "70", "71", "72", "73", "74", "75", "76", "77", "78", "79",
		//     "80", "81", "82", "83", "84", "85", "86", "87", "88", "89",
		//     "90", "91", "92", "93", "94", "95", "96", "97", "98", "99"
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE5C37D372367C69DCD30FE688631A1B0CE49EA73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral26DC5E0BF73157E4A9F40EBB2C5D045B1E35CA62);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral26DC5E0BF73157E4A9F40EBB2C5D045B1E35CA62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral597CCAAD822896FC6E71012763467F92C7EBBB45);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral597CCAAD822896FC6E71012763467F92C7EBBB45);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral3B1F844FC8B37D0220BFC2B961AA65E0F1B37A4A);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3B1F844FC8B37D0220BFC2B961AA65E0F1B37A4A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralD75E9C7F49F91A91ADCC572A05944309180DEA26);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralD75E9C7F49F91A91ADCC572A05944309180DEA26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral7353C41C94834E4F94476B65695D9DD63DA5FAF5);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral7353C41C94834E4F94476B65695D9DD63DA5FAF5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral48C81EC4EFA65C9154EEE61EFFDE60DBE59D9149);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral48C81EC4EFA65C9154EEE61EFFDE60DBE59D9149);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral035D44F946AF053A0163B3A4BFD6A52AED246816);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral035D44F946AF053A0163B3A4BFD6A52AED246816);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralC6C53101303B2CB0C0C2D14996D67FFA573A5642);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC6C53101303B2CB0C0C2D14996D67FFA573A5642);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral6F7B03E8D49E8A4621051DE1962CB493500481ED);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral6F7B03E8D49E8A4621051DE1962CB493500481ED);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralAA4DA1A93F07E2E4B09F8D5E2C45905E26A45E79);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral816238D2C5B664EF76E039079E40C1492ADCF0EC);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral816238D2C5B664EF76E039079E40C1492ADCF0EC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralB9E15D36DACFA970D8917F8A2D25B3E56074B572);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralB9E15D36DACFA970D8917F8A2D25B3E56074B572);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral1AA1790AE1BC157DD7BC2E8E7D142CB22C2346A8);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral1AA1790AE1BC157DD7BC2E8E7D142CB22C2346A8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralC47E7F7AEF16F78CE7B3D75756F38A67794AF4D0);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralC47E7F7AEF16F78CE7B3D75756F38A67794AF4D0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralF8591E019243177659D36C84E0F0DD536C62D029);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteralF8591E019243177659D36C84E0F0DD536C62D029);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralFF01C47ABD568A459C8EA38273E930831E0F8561);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralFF01C47ABD568A459C8EA38273E930831E0F8561);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralEF7FC24B5117DE7A50326EB54B70AF5BAC17A774);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteralEF7FC24B5117DE7A50326EB54B70AF5BAC17A774);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralF859CAA74FC4BD45E85F9AFF276F614AE47D3DA2);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteralF859CAA74FC4BD45E85F9AFF276F614AE47D3DA2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralA1F8C30AF9A614832E6AEAE94C81E0CB4D21FA81);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteralA1F8C30AF9A614832E6AEAE94C81E0CB4D21FA81);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral521FB55423CC068B92B5E8453A36DF0D6CBDD93F);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteral521FB55423CC068B92B5E8453A36DF0D6CBDD93F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteral055601E076D65992B3FCD809DD5E222AFB903BEE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral331550C0DB1643A8C5E6C9E3A71B9D7B919BAA4D);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteral331550C0DB1643A8C5E6C9E3A71B9D7B919BAA4D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral700C1596CA301B3AA61533700CEED311DC1053BC);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteral700C1596CA301B3AA61533700CEED311DC1053BC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteralFB3E2E45E3697C91835CFBCA547A1B38DF6A850D);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteralFB3E2E45E3697C91835CFBCA547A1B38DF6A850D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral17CF05962AC1AC77CD4B5247CC6311690D8DAFE5);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteral17CF05962AC1AC77CD4B5247CC6311690D8DAFE5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralF77EF0378833B12CB5CD7EA0B4BBC50FA06C5A21);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteralF77EF0378833B12CB5CD7EA0B4BBC50FA06C5A21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteralECBC52CAFDDD6151BB724471E83608B3091C31F8);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)_stringLiteralECBC52CAFDDD6151BB724471E83608B3091C31F8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral94AA14A52763F3CD8FFB480C9EF5EBD529D39C24);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)_stringLiteral94AA14A52763F3CD8FFB480C9EF5EBD529D39C24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral881DF9583D296C0D5B7AC5C9B371AC14F893F4B1);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)_stringLiteral881DF9583D296C0D5B7AC5C9B371AC14F893F4B1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (String_t*)_stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral42F23AB2A3A10ACC0655DD1B40479C7C524EB8CF);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (String_t*)_stringLiteral42F23AB2A3A10ACC0655DD1B40479C7C524EB8CF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral556DDA907570BAA94FD8305D5E082166623C2DE7);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (String_t*)_stringLiteral556DDA907570BAA94FD8305D5E082166623C2DE7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteralB954912D5B613A9BBB9E57567C01A78DAF496997);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (String_t*)_stringLiteralB954912D5B613A9BBB9E57567C01A78DAF496997);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralDD8D195854FE6A5448A819D605C3800954C75B0F);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (String_t*)_stringLiteralDD8D195854FE6A5448A819D605C3800954C75B0F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral5CFAA1085C1E7A33C1838490FEE60CB112C68908);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (String_t*)_stringLiteral5CFAA1085C1E7A33C1838490FEE60CB112C68908);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral7D552237CC7BE75F25030583A548DF1569AD38DE);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (String_t*)_stringLiteral7D552237CC7BE75F25030583A548DF1569AD38DE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral711F8FB7EBB7FDAC8B8722A4C60A0BFB244C05CD);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (String_t*)_stringLiteral711F8FB7EBB7FDAC8B8722A4C60A0BFB244C05CD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteral9C532A4F4F5ED29A023CF3CE13143084C214486E);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (String_t*)_stringLiteral9C532A4F4F5ED29A023CF3CE13143084C214486E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral689C266FAF9DA42F9B0B13194EC62FCD4F537F54);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (String_t*)_stringLiteral689C266FAF9DA42F9B0B13194EC62FCD4F537F54);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteralA6A6AB007C12E7673D8479299FDC94A4D003EBF9);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (String_t*)_stringLiteralA6A6AB007C12E7673D8479299FDC94A4D003EBF9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteralBC3101BFE36604E54F5668684B113C5BF96A5EF8);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (String_t*)_stringLiteralBC3101BFE36604E54F5668684B113C5BF96A5EF8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral792BED7AE838D9267644F8329AA86A301260BB2C);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (String_t*)_stringLiteral792BED7AE838D9267644F8329AA86A301260BB2C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteral8FE7B9E4379FA727669A5DD2E2B5591AE8C6D6FD);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (String_t*)_stringLiteral8FE7B9E4379FA727669A5DD2E2B5591AE8C6D6FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_44;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteralD12AD3BCDBBC36B051A719533D5A3EE506E3FB4A);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (String_t*)_stringLiteralD12AD3BCDBBC36B051A719533D5A3EE506E3FB4A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral1EABFF598CE5B1DE50532CB71FD74C8F1B848045);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (String_t*)_stringLiteral1EABFF598CE5B1DE50532CB71FD74C8F1B848045);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteral656F9736477335AF0B68DB002FCA2CF39D90BE17);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (String_t*)_stringLiteral656F9736477335AF0B68DB002FCA2CF39D90BE17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteral1D31BD1B4C79BAB71F98F7341183F855786534EE);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (String_t*)_stringLiteral1D31BD1B4C79BAB71F98F7341183F855786534EE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_48;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteralE3FF2A704FE59A527FD465C10FF5763D7572482C);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (String_t*)_stringLiteralE3FF2A704FE59A527FD465C10FF5763D7572482C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, _stringLiteralF8F98CCC463B752A50D594965B61D8CE349F0E30);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)49)), (String_t*)_stringLiteralF8F98CCC463B752A50D594965B61D8CE349F0E30);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = L_50;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, _stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)50)), (String_t*)_stringLiteralFAE74549D07FE5D38BE375A2E20B9E26944AC372);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_51;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteral823AC7F13547BB61EE004EE339F656811348D94B);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)51)), (String_t*)_stringLiteral823AC7F13547BB61EE004EE339F656811348D94B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, _stringLiteralEA2E8F12196B3367A735F4C71E698E73DDBB43BD);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)52)), (String_t*)_stringLiteralEA2E8F12196B3367A735F4C71E698E73DDBB43BD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_53;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteral1B0F94B590FC16451340705DFFEBEA0F5DB16189);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)53)), (String_t*)_stringLiteral1B0F94B590FC16451340705DFFEBEA0F5DB16189);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = L_54;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, _stringLiteral1D7E532EA242647676D2FDC0CEDAC8275E273296);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)54)), (String_t*)_stringLiteral1D7E532EA242647676D2FDC0CEDAC8275E273296);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_55;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, _stringLiteral6A5A33D881BF3BC2A264AD65CEA496BEFB499ECD);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)55)), (String_t*)_stringLiteral6A5A33D881BF3BC2A264AD65CEA496BEFB499ECD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = L_56;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteralFF4D3CF653D251924E09F33181DC7CA164DA089E);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)56)), (String_t*)_stringLiteralFF4D3CF653D251924E09F33181DC7CA164DA089E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_57;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteral8E79A8D4955F07A325276C196D56413096F3F6BA);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)57)), (String_t*)_stringLiteral8E79A8D4955F07A325276C196D56413096F3F6BA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = L_58;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteralB0B6A8F061CC3AE2C94A330AEE6DD40E4E4E2B4E);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)58)), (String_t*)_stringLiteralB0B6A8F061CC3AE2C94A330AEE6DD40E4E4E2B4E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = L_59;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, _stringLiteralFA6EA40B2C0B543B0A9184854D4DDDDA02A93BAC);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)59)), (String_t*)_stringLiteralFA6EA40B2C0B543B0A9184854D4DDDDA02A93BAC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = L_60;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, _stringLiteral90DF7078E3D93E8E6F0CB88954D180EF21C4F4D1);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)60)), (String_t*)_stringLiteral90DF7078E3D93E8E6F0CB88954D180EF21C4F4D1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, _stringLiteralE1143D7DA21141328B0C670E4618982430814767);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)61)), (String_t*)_stringLiteralE1143D7DA21141328B0C670E4618982430814767);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = L_62;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, _stringLiteralED12904133FFAC97817184051B6295791EAE98DB);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)62)), (String_t*)_stringLiteralED12904133FFAC97817184051B6295791EAE98DB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_63;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral7BB1216534F62E33C705BB99471F10C9CAEBFBE4);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)63)), (String_t*)_stringLiteral7BB1216534F62E33C705BB99471F10C9CAEBFBE4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, _stringLiteral1DC9F6BC39F00E092B0BEEEEE189243DA24E1C20);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)64)), (String_t*)_stringLiteral1DC9F6BC39F00E092B0BEEEEE189243DA24E1C20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_65;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, _stringLiteralE02F95854508CEE53A194021280421E6D86608C6);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)65)), (String_t*)_stringLiteralE02F95854508CEE53A194021280421E6D86608C6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, _stringLiteralA168A02D7C7E01EBCA44030225683D8463171553);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)66)), (String_t*)_stringLiteralA168A02D7C7E01EBCA44030225683D8463171553);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = L_67;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, _stringLiteral378D4B13D43254F58BBC24781F8D679374A87290);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)67)), (String_t*)_stringLiteral378D4B13D43254F58BBC24781F8D679374A87290);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69 = L_68;
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, _stringLiteral70A3CC498A396DB6AAFDB20BBB977F32E586F3ED);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)68)), (String_t*)_stringLiteral70A3CC498A396DB6AAFDB20BBB977F32E586F3ED);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = L_69;
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, _stringLiteralB27C66584E1BBBB39F7A399DF03A22113AEEE5A6);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)69)), (String_t*)_stringLiteralB27C66584E1BBBB39F7A399DF03A22113AEEE5A6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_70;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralBCE50315D5962AAE042FCBB79C1CFB34677DFCCF);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)70)), (String_t*)_stringLiteralBCE50315D5962AAE042FCBB79C1CFB34677DFCCF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_71;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, _stringLiteralB31DFDC0094CA632CE85BD98DC353BD74EC823B2);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)71)), (String_t*)_stringLiteralB31DFDC0094CA632CE85BD98DC353BD74EC823B2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = L_72;
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, _stringLiteralB49A2230911F3A9414AEBBE06AFCE6B72B36DCF2);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)72)), (String_t*)_stringLiteralB49A2230911F3A9414AEBBE06AFCE6B72B36DCF2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = L_73;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, _stringLiteral564F8D06BB59C6D9E75745A49D7A45A7875B78B8);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)73)), (String_t*)_stringLiteral564F8D06BB59C6D9E75745A49D7A45A7875B78B8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = L_74;
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, _stringLiteral8164785248D4527B71ED3FFED13F52B8742057B7);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)74)), (String_t*)_stringLiteral8164785248D4527B71ED3FFED13F52B8742057B7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76 = L_75;
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, _stringLiteral223CA56814CE64D5CFDB92BD828F5C0263182384);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)75)), (String_t*)_stringLiteral223CA56814CE64D5CFDB92BD828F5C0263182384);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_77 = L_76;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, _stringLiteralCED3387522B9AA1B7C4BAC7682637F8019E0E6B4);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)76)), (String_t*)_stringLiteralCED3387522B9AA1B7C4BAC7682637F8019E0E6B4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = L_77;
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, _stringLiteral9D738A6BF0A0D11C2CB2FF3E38BE9D7F4597A159);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)77)), (String_t*)_stringLiteral9D738A6BF0A0D11C2CB2FF3E38BE9D7F4597A159);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = L_78;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, _stringLiteralF7A9D932DF5909F071A811EB0CE88038FA67F832);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)78)), (String_t*)_stringLiteralF7A9D932DF5909F071A811EB0CE88038FA67F832);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_79;
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, _stringLiteral54D7885D1D716DC6D8F0018DDB6363829D28D5FE);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)79)), (String_t*)_stringLiteral54D7885D1D716DC6D8F0018DDB6363829D28D5FE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_81 = L_80;
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, _stringLiteral013DA6E48D6D0616544F966EBF1ADEC7B6254D4B);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)80)), (String_t*)_stringLiteral013DA6E48D6D0616544F966EBF1ADEC7B6254D4B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = L_81;
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, _stringLiteral4F91A67128A20B774E7007B8FA34D9460DEECFE5);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)81)), (String_t*)_stringLiteral4F91A67128A20B774E7007B8FA34D9460DEECFE5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = L_82;
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, _stringLiteral727B9F62266ED714B16AD3CD556D127E287B7EF2);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)82)), (String_t*)_stringLiteral727B9F62266ED714B16AD3CD556D127E287B7EF2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_84 = L_83;
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, _stringLiteralDB6C948A11F94B49A41CEE21C07BACE833C0EA3D);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)83)), (String_t*)_stringLiteralDB6C948A11F94B49A41CEE21C07BACE833C0EA3D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = L_84;
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, _stringLiteral77F9EF517F2B20A7654CC97FB749C3F9AA1BCFB7);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)84)), (String_t*)_stringLiteral77F9EF517F2B20A7654CC97FB749C3F9AA1BCFB7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_86 = L_85;
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, _stringLiteral9D757937698966F2331E4E96A61C39D901252926);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)85)), (String_t*)_stringLiteral9D757937698966F2331E4E96A61C39D901252926);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_87 = L_86;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, _stringLiteralCA7B796A938750C9E9B720D01F4B50435E945834);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)86)), (String_t*)_stringLiteralCA7B796A938750C9E9B720D01F4B50435E945834);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_88 = L_87;
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, _stringLiteral80B8671A49E749CC71E72F5C36599D0445F8A623);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)87)), (String_t*)_stringLiteral80B8671A49E749CC71E72F5C36599D0445F8A623);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = L_88;
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, _stringLiteral77B27FBC427F2E64E84540382BF80B1B14133EC9);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)88)), (String_t*)_stringLiteral77B27FBC427F2E64E84540382BF80B1B14133EC9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = L_89;
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, _stringLiteral0DA1A21F5DC7D20E3A2832D8CDA7B4ADCD2A2789);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)89)), (String_t*)_stringLiteral0DA1A21F5DC7D20E3A2832D8CDA7B4ADCD2A2789);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_91 = L_90;
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, _stringLiteral57FB75EFE62EFCFA46A7519D514A1EE2738B1325);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)90)), (String_t*)_stringLiteral57FB75EFE62EFCFA46A7519D514A1EE2738B1325);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_92 = L_91;
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, _stringLiteralF16BEBAAB4E57C7E143CFCE970AA15566F151F99);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)91)), (String_t*)_stringLiteralF16BEBAAB4E57C7E143CFCE970AA15566F151F99);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_93 = L_92;
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, _stringLiteral29ACA8B35D157255506569C2FDE770164887E7A9);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)92)), (String_t*)_stringLiteral29ACA8B35D157255506569C2FDE770164887E7A9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_94 = L_93;
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, _stringLiteralF99EE8F8E0BAA5AFD89858A0AD24112CDD14DCE0);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)93)), (String_t*)_stringLiteralF99EE8F8E0BAA5AFD89858A0AD24112CDD14DCE0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_95 = L_94;
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, _stringLiteral38428ED9CF894DD8900E3EFE3AF876442EC18630);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)94)), (String_t*)_stringLiteral38428ED9CF894DD8900E3EFE3AF876442EC18630);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_96 = L_95;
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, _stringLiteral3F2610BD29C00CCB98CBE4D5E8D3EA27DFA76A57);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)95)), (String_t*)_stringLiteral3F2610BD29C00CCB98CBE4D5E8D3EA27DFA76A57);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_97 = L_96;
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, _stringLiteral03CB7A0F2F7AAD28CE58D297B7A10BA9606D89D4);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)96)), (String_t*)_stringLiteral03CB7A0F2F7AAD28CE58D297B7A10BA9606D89D4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_98 = L_97;
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, _stringLiteral7A0715F14179DC419A2631015EA9C917407CE86C);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)97)), (String_t*)_stringLiteral7A0715F14179DC419A2631015EA9C917407CE86C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_99 = L_98;
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, _stringLiteral7B2714DCE6714B9B5A18319E32D6EAF31CA21A99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)98)), (String_t*)_stringLiteral7B2714DCE6714B9B5A18319E32D6EAF31CA21A99);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_100 = L_99;
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, _stringLiteral594731E53B6AAB1637B129ADD00D9E8B719AB998);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)99)), (String_t*)_stringLiteral594731E53B6AAB1637B129ADD00D9E8B719AB998);
		__this->____stringsFrom00To99_9 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stringsFrom00To99_9), (void*)L_100);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ToggleScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleScript_Update_m633F92905250B9156CEE0990433FDC945A30BB47 (ToggleScript_t86B17E85F7C4F77D06BC61AC68F2A5816DB5AF50* __this, const RuntimeMethod* method) 
{
	{
		// if (toggle.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// fpsPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___fpsPanel_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		return;
	}

IL_001a:
	{
		// fpsPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___fpsPanel_4;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ToggleScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleScript__ctor_m3D888E7A78AC29D3708B6F68A6907D61A21B33A2 (ToggleScript_t86B17E85F7C4F77D06BC61AC68F2A5816DB5AF50* __this, const RuntimeMethod* method) 
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
// System.Void LevelCompleated::SetText(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelCompleated_SetText_m973F2D6DFD3B402724F184E7C5C329CB677DCE74 (LevelCompleated_t68241CF086BC49C7639BB955BFB4873BD3CBC8AA* __this, int32_t ___0_level, int32_t ___1_step, int32_t ___2_attemts, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C66E45573C133DD8A6C2C27F219D662406993BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6462FAAFEFEE122295AC0F69CB1803C25C9F50E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB440E56745B2EEC470D57A82E21F57A7EAD6F3B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// tailText.text = "Level completed!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___tailText_4;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralB6462FAAFEFEE122295AC0F69CB1803C25C9F50E);
		// stepsText.text = "Steps: " + step;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___stepsText_5;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___1_step), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCB440E56745B2EEC470D57A82E21F57A7EAD6F3B, L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// attemtsText.text = "Attempts: " + (attemts + 1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___attemtsText_6;
		int32_t L_5 = ___2_attemts;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4C66E45573C133DD8A6C2C27F219D662406993BA, L_6, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// }
		return;
	}
}
// System.Void LevelCompleated::PanelFadeIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelCompleated_PanelFadeIn_mBCD675F3DF5FBA589686BBAEE056D9694A43E168 (LevelCompleated_t68241CF086BC49C7639BB955BFB4873BD3CBC8AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m0EFC7DF986C4C5FA692050BBED54323202D3B988_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvasGroup.alpha = 0f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->___canvasGroup_10;
		NullCheck(L_0);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_0, (0.0f), NULL);
		// rectTransform.transform.localPosition= new Vector3(0f,-500f, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___rectTransform_11;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (-500.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_3, NULL);
		// rectTransform.DOAnchorPos(new Vector2(0f, 0f), fadeTime, false).SetEase(Ease.OutElastic);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___rectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_6 = __this->___fadeTime_8;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_7;
		L_7 = DOTweenModuleUI_DOAnchorPos_m5B60876E10960019C209F1C215F921E6F994831A(L_4, L_5, L_6, (bool)0, NULL);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_8;
		L_8 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m0EFC7DF986C4C5FA692050BBED54323202D3B988(L_7, ((int32_t)24), TweenSettingsExtensions_SetEase_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m0EFC7DF986C4C5FA692050BBED54323202D3B988_RuntimeMethod_var);
		// canvasGroup.DOFade(1, fadeTime);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_9 = __this->___canvasGroup_10;
		float L_10 = __this->___fadeTime_8;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_11;
		L_11 = DOTweenModuleUI_DOFade_mA073F33862AA7BEF33842B8200D0E79E046D114E(L_9, (1.0f), L_10, NULL);
		// StartCoroutine(WaitSomeTime());
		RuntimeObject* L_12;
		L_12 = LevelCompleated_WaitSomeTime_m4B872525467F61DF191B353DB09BD657F945FA54(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_12, NULL);
		// }
		return;
	}
}
// System.Void LevelCompleated::PanelFadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelCompleated_PanelFadeOut_mD39295DE2B6233D94EACE02FD318EAB2D2E10407 (LevelCompleated_t68241CF086BC49C7639BB955BFB4873BD3CBC8AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m0EFC7DF986C4C5FA692050BBED54323202D3B988_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvasGroup.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = __this->___canvasGroup_10;
		NullCheck(L_0);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_0, (1.0f), NULL);
		// rectTransform.transform.localPosition = new Vector3(0f, 0f, 0f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___rectTransform_11;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_3, NULL);
		// rectTransform.DOAnchorPos(new Vector2(0f, -500f), fadeTime, false).SetEase(Ease.InOutQuint);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___rectTransform_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (-500.0f), /*hidden argument*/NULL);
		float L_6 = __this->___fadeTime_8;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_7;
		L_7 = DOTweenModuleUI_DOAnchorPos_m5B60876E10960019C209F1C215F921E6F994831A(L_4, L_5, L_6, (bool)0, NULL);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_8;
		L_8 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m0EFC7DF986C4C5FA692050BBED54323202D3B988(L_7, ((int32_t)16), TweenSettingsExtensions_SetEase_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_m0EFC7DF986C4C5FA692050BBED54323202D3B988_RuntimeMethod_var);
		// canvasGroup.DOFade(0, fadeTime);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_9 = __this->___canvasGroup_10;
		float L_10 = __this->___fadeTime_8;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_11;
		L_11 = DOTweenModuleUI_DOFade_mA073F33862AA7BEF33842B8200D0E79E046D114E(L_9, (0.0f), L_10, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LevelCompleated::WaitSomeTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelCompleated_WaitSomeTime_m4B872525467F61DF191B353DB09BD657F945FA54 (LevelCompleated_t68241CF086BC49C7639BB955BFB4873BD3CBC8AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12* L_0 = (U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12*)il2cpp_codegen_object_new(U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitSomeTimeU3Ed__11__ctor_mBFCB83152EB53E98DDED8C0F2A0C43CFBB623B98(L_0, 0, NULL);
		U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void LevelCompleated::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelCompleated__ctor_m4BA99D9AA06AA2E5E3DC59311AF0A57ED4098D99 (LevelCompleated_t68241CF086BC49C7639BB955BFB4873BD3CBC8AA* __this, const RuntimeMethod* method) 
{
	{
		// public float fadeTime = 1f;
		__this->___fadeTime_8 = (1.0f);
		// public float showingTime = 3f;
		__this->___showingTime_9 = (3.0f);
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
// System.Void LevelCompleated/<WaitSomeTime>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSomeTimeU3Ed__11__ctor_mBFCB83152EB53E98DDED8C0F2A0C43CFBB623B98 (U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LevelCompleated/<WaitSomeTime>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSomeTimeU3Ed__11_System_IDisposable_Dispose_m463A29856C9FE5439AEF06ACE22D6C490F99C1BA (U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LevelCompleated/<WaitSomeTime>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitSomeTimeU3Ed__11_MoveNext_m6DEBD3D0C95EC21F655A5DAF0B8617BED3C676EC (U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LevelCompleated_t68241CF086BC49C7639BB955BFB4873BD3CBC8AA* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LevelCompleated_t68241CF086BC49C7639BB955BFB4873BD3CBC8AA* L_1 = __this->___U3CU3E4__this_2;
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
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(showingTime);
		LevelCompleated_t68241CF086BC49C7639BB955BFB4873BD3CBC8AA* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___showingTime_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PanelFadeOut();
		LevelCompleated_t68241CF086BC49C7639BB955BFB4873BD3CBC8AA* L_7 = V_1;
		NullCheck(L_7);
		LevelCompleated_PanelFadeOut_mD39295DE2B6233D94EACE02FD318EAB2D2E10407(L_7, NULL);
		// }
		return (bool)0;
	}
}
// System.Object LevelCompleated/<WaitSomeTime>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitSomeTimeU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF064261DFE66F61288840F20A4697C354750A3F4 (U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LevelCompleated/<WaitSomeTime>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitSomeTimeU3Ed__11_System_Collections_IEnumerator_Reset_mE448C3902A7DEC91366D28586BE4B2975F9AD9DF (U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitSomeTimeU3Ed__11_System_Collections_IEnumerator_Reset_mE448C3902A7DEC91366D28586BE4B2975F9AD9DF_RuntimeMethod_var)));
	}
}
// System.Object LevelCompleated/<WaitSomeTime>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitSomeTimeU3Ed__11_System_Collections_IEnumerator_get_Current_m178878E45D3F625E0016049C9C052D569A5E27A9 (U3CWaitSomeTimeU3Ed__11_t4AC50F73BF138D5C411F51DFBDCEBE93E1B06D12* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PauseMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Awake_mD17C2664126E61F76112D3C96B5A4684E0D00B66 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindAnyObjectByType_TisDataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_mDAE22B7C8EAED7D23E55AC40B9267E71DD01E9C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisSwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232_m7284C4FF5DF5ECAB11EDCFD60E9E412EB18999D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// swipeInput = FindObjectOfType<SwipeInput>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232* L_0;
		L_0 = Object_FindObjectOfType_TisSwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232_m7284C4FF5DF5ECAB11EDCFD60E9E412EB18999D3(Object_FindObjectOfType_TisSwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232_m7284C4FF5DF5ECAB11EDCFD60E9E412EB18999D3_RuntimeMethod_var);
		__this->___swipeInput_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___swipeInput_4), (void*)L_0);
		// dataPersictenceManager = FindAnyObjectByType<DataPersictenceManager>();
		DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* L_1;
		L_1 = Object_FindAnyObjectByType_TisDataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_mDAE22B7C8EAED7D23E55AC40B9267E71DD01E9C2(Object_FindAnyObjectByType_TisDataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_mDAE22B7C8EAED7D23E55AC40B9267E71DD01E9C2_RuntimeMethod_var);
		__this->___dataPersictenceManager_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataPersictenceManager_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void PauseMenu::OnMainMenuButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_OnMainMenuButtonClick_m78544739652C20A789274AF6B16A6B3763A2AF42 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dataPersictenceManager.SaveGame();
		DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* L_0 = __this->___dataPersictenceManager_5;
		NullCheck(L_0);
		DataPersictenceManager_SaveGame_m6E19B682CE003F3AE8F8B27C518E530DC3D6B106(L_0, NULL);
		// SceneManager.LoadScene("MainMenu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::OnPauseButtonClickFromGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_OnPauseButtonClickFromGame_m55AD0A49F2F8988F7B3909D87CC23B311E8B8271 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// swipeInput.canDetectSwipe = false;
		SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232* L_0 = __this->___swipeInput_4;
		NullCheck(L_0);
		L_0->___canDetectSwipe_9 = (bool)0;
		// swipeInput.isOnMenu = true;
		SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232* L_1 = __this->___swipeInput_4;
		NullCheck(L_1);
		L_1->___isOnMenu_10 = (bool)1;
		// }
		return;
	}
}
// System.Void PauseMenu::OnContinueButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_OnContinueButtonClick_m1E322FFAD7C2E488B012A0EB11E26DDC24B3C877 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// swipeInput.canDetectSwipe = true;
		SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232* L_0 = __this->___swipeInput_4;
		NullCheck(L_0);
		L_0->___canDetectSwipe_9 = (bool)1;
		// swipeInput.isOnMenu = false;
		SwipeInput_tD6A0359A461805C0103BF72B1EE8796E49218232* L_1 = __this->___swipeInput_4;
		NullCheck(L_1);
		L_1->___isOnMenu_10 = (bool)0;
		// dataPersictenceManager.SaveGame();
		DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* L_2 = __this->___dataPersictenceManager_5;
		NullCheck(L_2);
		DataPersictenceManager_SaveGame_m6E19B682CE003F3AE8F8B27C518E530DC3D6B106(L_2, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::OnBackButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_OnBackButtonClick_mB57FAFCB801929797BF8CB23DE69E7B4318D1490 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PauseMenu::OnSettingsButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_OnSettingsButtonClick_mE22750310F39931E94474955AEFFE0F6D2743CED (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_m81B0E020DC5008DA4D414200BAAF7122B430D826 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
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
// System.Void ScoreBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreBar_Start_m80687AB5FE35F70E8619F3639F53C44A5BAFA05D (ScoreBar_tD55000AAA69DF439305FD72C98CDA18DE7CF3566* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m3712EC6864371DA8E0347499ACF880075A6B1F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// characterMovement = FindObjectOfType<CharacterMovement>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* L_0;
		L_0 = Object_FindObjectOfType_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m3712EC6864371DA8E0347499ACF880075A6B1F92(Object_FindObjectOfType_TisCharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA_m3712EC6864371DA8E0347499ACF880075A6B1F92_RuntimeMethod_var);
		__this->___characterMovement_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___characterMovement_9), (void*)L_0);
		// }
		return;
	}
}
// System.Void ScoreBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreBar_Update_m249A59C2AD22EBA4C23B020F9D0316CE19266097 (ScoreBar_tD55000AAA69DF439305FD72C98CDA18DE7CF3566* __this, const RuntimeMethod* method) 
{
	{
		// UpdateText();
		ScoreBar_UpdateText_m210CFD9669B4A79BE99144851309FE69C6231EA0(__this, NULL);
		// }
		return;
	}
}
// System.Void ScoreBar::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreBar_UpdateText_m210CFD9669B4A79BE99144851309FE69C6231EA0 (ScoreBar_tD55000AAA69DF439305FD72C98CDA18DE7CF3566* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8694E1E68DB7369546A675F7A3F8977179E3D8FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral917D3978F2F19410A74AF83F4C3E93E187A682AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// step = characterMovement.currentStep;
		CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* L_0 = __this->___characterMovement_9;
		NullCheck(L_0);
		int32_t L_1 = L_0->___currentStep_36;
		__this->___step_6 = L_1;
		// deathsCount = characterMovement.levelManager.deathOnLevelCounter;
		CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* L_2 = __this->___characterMovement_9;
		NullCheck(L_2);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_3 = L_2->___levelManager_4;
		NullCheck(L_3);
		int32_t L_4 = L_3->___deathOnLevelCounter_16;
		__this->___deathsCount_8 = L_4;
		// if (step == -1) { step= 0; }
		int32_t L_5 = __this->___step_6;
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0037;
		}
	}
	{
		// if (step == -1) { step= 0; }
		__this->___step_6 = 0;
	}

IL_0037:
	{
		// maxStep = characterMovement.levelManager.maxSteps;
		CharacterMovement_t9D8626C3C95447C5CD13E831D32857E23BD590FA* L_6 = __this->___characterMovement_9;
		NullCheck(L_6);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_7 = L_6->___levelManager_4;
		NullCheck(L_7);
		int32_t L_8 = L_7->___maxSteps_15;
		__this->___maxStep_7 = L_8;
		// stepText.text = string.Format("Step: {0}/{1}", step, maxStep);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___stepText_4;
		int32_t L_10 = __this->___step_6;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = __this->___maxStep_7;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8694E1E68DB7369546A675F7A3F8977179E3D8FE, L_12, L_15, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_16);
		// deathText.text = string.Format("Deaths: {0}", deathsCount);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___deathText_5;
		int32_t L_18 = __this->___deathsCount_8;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral917D3978F2F19410A74AF83F4C3E93E187A682AC, L_20, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_21);
		// }
		return;
	}
}
// System.Void ScoreBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreBar__ctor_m2F9D35EB63F410884ACD3539C1D7A94241F94C1E (ScoreBar_tD55000AAA69DF439305FD72C98CDA18DE7CF3566* __this, const RuntimeMethod* method) 
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
// System.Void SoundController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_Awake_m46A5E05025ADB321CC87B9C76003991E0BF81E09 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_m7682FAE984173C23D04D2BE96886D82E768FE189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundController_HandleEffectsSliderValueChanged_m9D165CD91DFBFAE2BBC898B565FD1F00ADF428AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundController_HandleMusicSliderValueChanged_m33DD5F28FA41733A094DF975B70EA9F4F0316EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundController_HandleNatureSliderValueChanged_m6BE2FD56A141DE94B67E31D285B36E33FAB237BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = FindObjectOfType<GameManager>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40(Object_FindObjectOfType_TisGameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_mE5C677E730DDBC0DA49AF7F357BDE2DC9FF98C40_RuntimeMethod_var);
		__this->___gameManager_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_6), (void*)L_0);
		// dataPersictenceManager = FindObjectOfType<DataPersictenceManager>();
		DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* L_1;
		L_1 = Object_FindObjectOfType_TisDataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_m7682FAE984173C23D04D2BE96886D82E768FE189(Object_FindObjectOfType_TisDataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_m7682FAE984173C23D04D2BE96886D82E768FE189_RuntimeMethod_var);
		__this->___dataPersictenceManager_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataPersictenceManager_5), (void*)L_1);
		// _musicSlider.onValueChanged.AddListener(HandleMusicSliderValueChanged);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->____musicSlider_7;
		NullCheck(L_2);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_3;
		L_3 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_2, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_4 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_4, __this, (intptr_t)((void*)SoundController_HandleMusicSliderValueChanged_m33DD5F28FA41733A094DF975B70EA9F4F0316EF7_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_3, L_4, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// _natureSlider.onValueChanged.AddListener(HandleNatureSliderValueChanged);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_5 = __this->____natureSlider_8;
		NullCheck(L_5);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_6;
		L_6 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_5, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_7 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_7, __this, (intptr_t)((void*)SoundController_HandleNatureSliderValueChanged_m6BE2FD56A141DE94B67E31D285B36E33FAB237BF_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_6, L_7, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// _effectsSlider.onValueChanged.AddListener(HandleEffectsSliderValueChanged);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->____effectsSlider_9;
		NullCheck(L_8);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_9;
		L_9 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_8, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_10 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_10, __this, (intptr_t)((void*)SoundController_HandleEffectsSliderValueChanged_m9D165CD91DFBFAE2BBC898B565FD1F00ADF428AA_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_9, L_10, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SoundController::HandleMusicSliderValueChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_HandleMusicSliderValueChanged_m33DD5F28FA41733A094DF975B70EA9F4F0316EF7 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// _musicValue = Mathf.Log10(value) * MULTIPLIER;
		float L_0 = ___0_value;
		float L_1;
		L_1 = log10f(L_0);
		__this->____musicValue_15 = ((float)il2cpp_codegen_multiply(L_1, (20.0f)));
		// _mixer.SetFloat(musicParam, _musicValue);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_2 = __this->____mixer_10;
		String_t* L_3 = __this->___musicParam_11;
		float L_4 = __this->____musicValue_15;
		NullCheck(L_2);
		bool L_5;
		L_5 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_2, L_3, L_4, NULL);
		// gameManager._musicValue = _musicValue;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = __this->___gameManager_6;
		float L_7 = __this->____musicValue_15;
		NullCheck(L_6);
		L_6->____musicValue_15 = L_7;
		// dataPersictenceManager.SaveGame();
		DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* L_8 = __this->___dataPersictenceManager_5;
		NullCheck(L_8);
		DataPersictenceManager_SaveGame_m6E19B682CE003F3AE8F8B27C518E530DC3D6B106(L_8, NULL);
		// }
		return;
	}
}
// System.Void SoundController::HandleNatureSliderValueChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_HandleNatureSliderValueChanged_m6BE2FD56A141DE94B67E31D285B36E33FAB237BF (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// _natureValue = Mathf.Log10(value) * MULTIPLIER;
		float L_0 = ___0_value;
		float L_1;
		L_1 = log10f(L_0);
		__this->____natureValue_16 = ((float)il2cpp_codegen_multiply(L_1, (20.0f)));
		// _mixer.SetFloat(natureParam, _natureValue);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_2 = __this->____mixer_10;
		String_t* L_3 = __this->___natureParam_12;
		float L_4 = __this->____natureValue_16;
		NullCheck(L_2);
		bool L_5;
		L_5 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_2, L_3, L_4, NULL);
		// gameManager._natureValue = _natureValue;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = __this->___gameManager_6;
		float L_7 = __this->____natureValue_16;
		NullCheck(L_6);
		L_6->____natureValue_16 = L_7;
		// dataPersictenceManager.SaveGame();
		DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* L_8 = __this->___dataPersictenceManager_5;
		NullCheck(L_8);
		DataPersictenceManager_SaveGame_m6E19B682CE003F3AE8F8B27C518E530DC3D6B106(L_8, NULL);
		// }
		return;
	}
}
// System.Void SoundController::HandleEffectsSliderValueChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_HandleEffectsSliderValueChanged_m9D165CD91DFBFAE2BBC898B565FD1F00ADF428AA (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// _effectsValue = Mathf.Log10(value) * MULTIPLIER;
		float L_0 = ___0_value;
		float L_1;
		L_1 = log10f(L_0);
		__this->____effectsValue_17 = ((float)il2cpp_codegen_multiply(L_1, (20.0f)));
		// _mixer.SetFloat(effectsParam, _effectsValue);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_2 = __this->____mixer_10;
		String_t* L_3 = __this->___effectsParam_13;
		float L_4 = __this->____effectsValue_17;
		NullCheck(L_2);
		bool L_5;
		L_5 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_2, L_3, L_4, NULL);
		// _mixer.SetFloat(itemsParam, _effectsValue + 30);
		AudioMixer_tE2E8D79241711CDF9AB428C7FB96A35D80E40B04* L_6 = __this->____mixer_10;
		String_t* L_7 = __this->___itemsParam_14;
		float L_8 = __this->____effectsValue_17;
		NullCheck(L_6);
		bool L_9;
		L_9 = AudioMixer_SetFloat_m4789959013BE79E4F84F446405914908ADC3F335(L_6, L_7, ((float)il2cpp_codegen_add(L_8, (30.0f))), NULL);
		// gameManager._effectsValue = _effectsValue;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = __this->___gameManager_6;
		float L_11 = __this->____effectsValue_17;
		NullCheck(L_10);
		L_10->____effectsValue_17 = L_11;
		// dataPersictenceManager.SaveGame();
		DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* L_12 = __this->___dataPersictenceManager_5;
		NullCheck(L_12);
		DataPersictenceManager_SaveGame_m6E19B682CE003F3AE8F8B27C518E530DC3D6B106(L_12, NULL);
		// }
		return;
	}
}
// System.Void SoundController::LoadData(GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_LoadData_mA53C7B4821C96119A4A6122727B04FD1DB517ACE (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___0_data, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SoundController::SaveData(GameData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_SaveData_mE7C91FA7D9303568586BF8545ED5A10F257AE504 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** ___0_data, const RuntimeMethod* method) 
{
	{
		// data.musicVolume = this._musicValue;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_0 = ___0_data;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_1 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_0);
		float L_2 = __this->____musicValue_15;
		NullCheck(L_1);
		L_1->___musicVolume_6 = L_2;
		// data.natureVolume = this._natureValue;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_3 = ___0_data;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_4 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_3);
		float L_5 = __this->____natureValue_16;
		NullCheck(L_4);
		L_4->___natureVolume_7 = L_5;
		// data.effectsVolume = this._effectsValue;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_6 = ___0_data;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_7 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_6);
		float L_8 = __this->____effectsValue_17;
		NullCheck(L_7);
		L_7->___effectsVolume_8 = L_8;
		// }
		return;
	}
}
// System.Void SoundController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_Start_mBA4C6FF0D121F3625B0AA199C8DFBDA4E583BBD7 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SoundController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_Update_mC395C5B781CC9EEBE5879A1664341515825F6611 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SoundController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController__ctor_mC458393260F108EF7CD72146FBC7623A50767BC1 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA191E9A1127B5BD50FB629B3243E9F005DCF1660);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD148CB06A19DAF883B82CBAE85CC78AB432BD259);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF300D2310959AF105732D339376803869D9B2B91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string musicParam = "music";
		__this->___musicParam_11 = _stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___musicParam_11), (void*)_stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F);
		// public string natureParam = "nature";
		__this->___natureParam_12 = _stringLiteralD148CB06A19DAF883B82CBAE85CC78AB432BD259;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___natureParam_12), (void*)_stringLiteralD148CB06A19DAF883B82CBAE85CC78AB432BD259);
		// public string effectsParam = "effects";
		__this->___effectsParam_13 = _stringLiteralA191E9A1127B5BD50FB629B3243E9F005DCF1660;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectsParam_13), (void*)_stringLiteralA191E9A1127B5BD50FB629B3243E9F005DCF1660);
		// public string itemsParam = "items";
		__this->___itemsParam_14 = _stringLiteralF300D2310959AF105732D339376803869D9B2B91;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___itemsParam_14), (void*)_stringLiteralF300D2310959AF105732D339376803869D9B2B91);
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
// System.Void UIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Start_m113F392674AB08A26877728CD36F06332E869080 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Update_m95D2E80B8F461F15C1B9BD6DB0811F5CC18571AB (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mC9DC2B8984E76F424E73C1860AD4BD3DEBF6573F (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
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
// System.Void SetSpawnPoint::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetSpawnPoint_Start_m2934C0B95B8D8FD57A6BAD47A46A6FDDD097CC46 (SetSpawnPoint_tE19853A2C396AAA47BBDB4927074D03A63279337* __this, const RuntimeMethod* method) 
{
	{
		// position= transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___position_4 = L_1;
		// }
		return;
	}
}
// System.Void SetSpawnPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetSpawnPoint__ctor_m364C9415721AF2C0A9037AD6DABFA9398FC0F9B8 (SetSpawnPoint_tE19853A2C396AAA47BBDB4927074D03A63279337* __this, const RuntimeMethod* method) 
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
// System.Void TreeItem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeItem_Update_mE413F49A34A4669E0F57F867EEC7EFA992708300 (TreeItem_t6AB996CBA4C62BA5570A32A7B69BB4B096E367A3* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(0, 40 * Time.deltaTime, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_0);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_0, (0.0f), ((float)il2cpp_codegen_multiply((40.0f), L_1)), (0.0f), NULL);
		// }
		return;
	}
}
// System.Void TreeItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeItem__ctor_mC9C9C27F9E44D5B7AF33D63F9DE579470D44B39D (TreeItem_t6AB996CBA4C62BA5570A32A7B69BB4B096E367A3* __this, const RuntimeMethod* method) 
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
// System.Void WallBuilder::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallBuilder_Awake_m1177B246D9C3D97ACB82BC31520A4E92E0DB79A2 (WallBuilder_t967DD1B1805AA4C8939B7E725EE2ACC8B4097831* __this, const RuntimeMethod* method) 
{
	{
		// startPos = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->___startPos_7 = L_1;
		// }
		return;
	}
}
// System.Void WallBuilder::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallBuilder_Update_m875BF10E669B558687FBF12746D34412235C72E3 (WallBuilder_t967DD1B1805AA4C8939B7E725EE2ACC8B4097831* __this, const RuntimeMethod* method) 
{
	{
		// BuildWall();
		WallBuilder_BuildWall_mE16F7DE1958E5E1E04CBF3E00A3D8F252EC1F5B0(__this, NULL);
		// }
		return;
	}
}
// System.Void WallBuilder::BuildWall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallBuilder_BuildWall_mE16F7DE1958E5E1E04CBF3E00A3D8F252EC1F5B0 (WallBuilder_t967DD1B1805AA4C8939B7E725EE2ACC8B4097831* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buildWall && transform.localPosition.y <= Vector3.zero.y)
		bool L_0 = __this->___buildWall_8;
		if (!L_0)
		{
			goto IL_00f8;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) <= ((float)L_5))))
		{
			goto IL_00f8;
		}
	}
	{
		// transform.localPosition += Vector3.up * buildingSpeed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_10 = __this->___buildingSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_13, NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_14, NULL);
		// if (transform.localPosition.y >= Vector3.zero.y)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_15, NULL);
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_19 = L_18.___y_3;
		if ((!(((float)L_17) >= ((float)L_19))))
		{
			goto IL_00b2;
		}
	}
	{
		// buildWall = false;
		__this->___buildWall_8 = (bool)0;
		// transform.localPosition = new Vector3(transform.localPosition.x, 0f, transform.localPosition.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_21, NULL);
		float L_23 = L_22.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_24, NULL);
		float L_26 = L_25.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), L_23, (0.0f), L_26, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_20, L_27, NULL);
	}

IL_00b2:
	{
		// stopWall.transform.localPosition -= Vector3.up * buildingSpeed * Time.deltaTime;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___stopWall_6;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = L_29;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_33 = __this->___buildingSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, L_33, NULL);
		float L_35;
		L_35 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_31, L_36, NULL);
		NullCheck(L_30);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_30, L_37, NULL);
		// gameObject.GetComponent<Collider>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_38);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_39;
		L_39 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_38, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		NullCheck(L_39);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_39, (bool)1, NULL);
	}

IL_00f8:
	{
		// }
		return;
	}
}
// System.Void WallBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallBuilder__ctor_mC21DF5680573FF1D917B3CE0623B192D52498D27 (WallBuilder_t967DD1B1805AA4C8939B7E725EE2ACC8B4097831* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float buildingSpeed = 5f;
		__this->___buildingSpeed_5 = (5.0f);
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
// System.Void LayerLab.CasualGame.PanelCasualGame::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelCasualGame_OnEnable_m08F438A1246D1BA9F105DB94BBCB4CC5B5870432 (PanelCasualGame_t51BB081FC0E5F9E57CE91F3135C48C7101669513* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___otherPanels_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___otherPanels_4;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LayerLab.CasualGame.PanelCasualGame::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelCasualGame_OnDisable_mCA373401517C9C64E278905FF72C80C174046F08 (PanelCasualGame_t51BB081FC0E5F9E57CE91F3135C48C7101669513* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___otherPanels_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___otherPanels_4;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LayerLab.CasualGame.PanelCasualGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelCasualGame__ctor_m8D143C0282F56A32B10B49323AC68D1193456D80 (PanelCasualGame_t51BB081FC0E5F9E57CE91F3135C48C7101669513* __this, const RuntimeMethod* method) 
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
// System.Void LayerLab.CasualGame.PanelControlCasualGame::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlCasualGame_Start_mD7B53D399892AA5718F823859BCD34E7EE499FED (PanelControlCasualGame_tDD8EA28B8DA4618151B4B524E2B823A96E91FE0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelControlCasualGame_Click_Next_mFFFA512A3BE668CDEAAA791FD3480D06AF0B0488_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelControlCasualGame_Click_Prev_m0F0142CD5150795577770E70E8AFEF169583F6BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// textTitle = transform.GetComponentInChildren<TextMeshProUGUI>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_0, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		__this->___textTitle_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textTitle_7), (void*)L_1);
		// buttonPrev.onClick.AddListener(Click_Prev);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___buttonPrev_9;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)PanelControlCasualGame_Click_Prev_m0F0142CD5150795577770E70E8AFEF169583F6BE_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// buttonNext.onClick.AddListener(Click_Next);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___buttonNext_10;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)PanelControlCasualGame_Click_Next_mFFFA512A3BE668CDEAAA791FD3480D06AF0B0488_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_6, L_7, NULL);
		// foreach (Transform t in panelTransform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___panelTransform_8;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_8, NULL);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_11 = V_2;
					if (!L_11)
					{
						goto IL_009a;
					}
				}
				{
					RuntimeObject* L_12 = V_2;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_009a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0080_1;
			}

IL_0057_1:
			{
				// foreach (Transform t in panelTransform)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_14, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// panels.Add(t.gameObject);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = __this->___panels_6;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_1;
				NullCheck(L_16);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
				NullCheck(L_15);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_15, L_17, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
				// t.gameObject.SetActive(false);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_1;
				NullCheck(L_18);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
				L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
				NullCheck(L_19);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
			}

IL_0080_1:
			{
				// foreach (Transform t in panelTransform)
				RuntimeObject* L_20 = V_0;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0057_1;
				}
			}
			{
				goto IL_009b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009b:
	{
		// panels[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->___panels_6;
		int32_t L_23 = __this->___page_4;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_22, L_23, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
		// isReady = true;
		__this->___isReady_5 = (bool)1;
		// CheckControl();
		PanelControlCasualGame_CheckControl_mCFEC5EAE8CD9645C243DB932CC0E6A579CF69968(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.CasualGame.PanelControlCasualGame::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlCasualGame_Update_m0AECE20029F13CCB34FD3BE00EC398F6F8624D69 (PanelControlCasualGame_tDD8EA28B8DA4618151B4B524E2B823A96E91FE0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (panels.Count <= 0 || !isReady) return;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___panels_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		bool L_2 = __this->___isReady_5;
		if (L_2)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (panels.Count <= 0 || !isReady) return;
		return;
	}

IL_0017:
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)276), NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// Click_Prev();
		PanelControlCasualGame_Click_Prev_m0F0142CD5150795577770E70E8AFEF169583F6BE(__this, NULL);
		return;
	}

IL_002a:
	{
		// else if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_4;
		L_4 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)275), NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// Click_Next();
		PanelControlCasualGame_Click_Next_mFFFA512A3BE668CDEAAA791FD3480D06AF0B0488(__this, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void LayerLab.CasualGame.PanelControlCasualGame::Click_Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlCasualGame_Click_Prev_m0F0142CD5150795577770E70E8AFEF169583F6BE (PanelControlCasualGame_tDD8EA28B8DA4618151B4B524E2B823A96E91FE0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (page <= 0 || !isReady) return;
		int32_t L_0 = __this->___page_4;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->___isReady_5;
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0011:
	{
		// if (page <= 0 || !isReady) return;
		return;
	}

IL_0012:
	{
		// panels[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___panels_6;
		int32_t L_3 = __this->___page_4;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, L_3, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// panels[page -= 1].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___panels_6;
		int32_t L_6 = __this->___page_4;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		V_0 = L_7;
		__this->___page_4 = L_7;
		int32_t L_8 = V_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, L_8, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// textTitle.text = panels[page].name;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = __this->___textTitle_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___panels_6;
		int32_t L_12 = __this->___page_4;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_11, L_12, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_13, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_14);
		// CheckControl();
		PanelControlCasualGame_CheckControl_mCFEC5EAE8CD9645C243DB932CC0E6A579CF69968(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.CasualGame.PanelControlCasualGame::Click_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlCasualGame_Click_Next_mFFFA512A3BE668CDEAAA791FD3480D06AF0B0488 (PanelControlCasualGame_tDD8EA28B8DA4618151B4B524E2B823A96E91FE0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (page >= panels.Count - 1) return;
		int32_t L_0 = __this->___page_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___panels_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_0016;
		}
	}
	{
		// if (page >= panels.Count - 1) return;
		return;
	}

IL_0016:
	{
		// panels[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___panels_6;
		int32_t L_4 = __this->___page_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// panels[page += 1].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___panels_6;
		int32_t L_7 = __this->___page_4;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		V_0 = L_8;
		__this->___page_4 = L_8;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_9, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// CheckControl();
		PanelControlCasualGame_CheckControl_mCFEC5EAE8CD9645C243DB932CC0E6A579CF69968(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.CasualGame.PanelControlCasualGame::SetArrowActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlCasualGame_SetArrowActive_mAC7DD2BF7DD4B05FB6F94D12F13646165E703035 (PanelControlCasualGame_tDD8EA28B8DA4618151B4B524E2B823A96E91FE0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonPrev.gameObject.SetActive(page > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___buttonPrev_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		int32_t L_2 = __this->___page_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0), NULL);
		// buttonNext.gameObject.SetActive(page < panels.Count - 1);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___buttonNext_10;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		int32_t L_5 = __this->___page_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___panels_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_6, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1))))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void LayerLab.CasualGame.PanelControlCasualGame::CheckControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlCasualGame_CheckControl_mCFEC5EAE8CD9645C243DB932CC0E6A579CF69968 (PanelControlCasualGame_tDD8EA28B8DA4618151B4B524E2B823A96E91FE0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textTitle.text = panels[page].name.Replace("_", " ");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___textTitle_7;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___panels_6;
		int32_t L_2 = __this->___page_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_1, L_2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_4, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_5);
		// SetArrowActive();
		PanelControlCasualGame_SetArrowActive_mAC7DD2BF7DD4B05FB6F94D12F13646165E703035(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.CasualGame.PanelControlCasualGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlCasualGame__ctor_m3A22E527A0AD4EFDFD88302437CC03BE141AA709 (PanelControlCasualGame_tDD8EA28B8DA4618151B4B524E2B823A96E91FE0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<GameObject> panels = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___panels_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panels_6), (void*)L_0);
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
// UnityEngine.Texture UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* UIParticleSystem_get_mainTexture_mDD4FB916D6532688BC49D59CE86F870F93DC35E7 (UIParticleSystem_tE2CFBE1857452933388A21DC001933C6DBC62AC5* __this, const RuntimeMethod* method) 
{
	{
		// return currentTexture;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___currentTexture_50;
		return L_0;
	}
}
// System.Boolean UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticleSystem_Initialize_mACCD4389A958352AA02C7FE87A08C44D9950D83C (UIParticleSystem_tE2CFBE1857452933388A21DC001933C6DBC62AC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F68598AE98A5313BD184DAEF34A7037F05FC8E8);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_1 = NULL;
	{
		// if (_transform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____transform_39;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _transform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->____transform_39 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____transform_39), (void*)L_2);
	}

IL_001a:
	{
		// if (pSystem == null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->___pSystem_40;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_014e;
		}
	}
	{
		// pSystem = GetComponent<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5;
		L_5 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		__this->___pSystem_40 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pSystem_40), (void*)L_5);
		// if (pSystem == null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = __this->___pSystem_40;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// mainModule = pSystem.main;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->___pSystem_40;
		NullCheck(L_8);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_9;
		L_9 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_8, NULL);
		__this->___mainModule_51 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mainModule_51))->___m_ParticleSystem_0), (void*)NULL);
		// if (pSystem.main.maxParticles > 14000)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = __this->___pSystem_40;
		NullCheck(L_10);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_11;
		L_11 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_10, NULL);
		V_0 = L_11;
		int32_t L_12;
		L_12 = MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198((&V_0), NULL);
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)14000))))
		{
			goto IL_0082;
		}
	}
	{
		// mainModule.maxParticles = 14000;
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_13 = (&__this->___mainModule_51);
		MainModule_set_maxParticles_mF9E7A56D7E1A528904BE1A8C0E14F15C3AF0F748(L_13, ((int32_t)14000), NULL);
	}

IL_0082:
	{
		// pRenderer = pSystem.GetComponent<ParticleSystemRenderer>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14 = __this->___pSystem_40;
		NullCheck(L_14);
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_15;
		L_15 = Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023(L_14, Component_GetComponent_TisParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4_mDB29DD32DF46B9659262256BDBD5B4F1BB805023_RuntimeMethod_var);
		__this->___pRenderer_47 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pRenderer_47), (void*)L_15);
		// if (pRenderer != null)
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_16 = __this->___pRenderer_47;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		// pRenderer.enabled = false;
		ParticleSystemRenderer_t576C271A363A738A6C576D4C6AEFB3B5B23E46C4* L_18 = __this->___pRenderer_47;
		NullCheck(L_18);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_18, (bool)0, NULL);
	}

IL_00ad:
	{
		// if (material == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19;
		L_19 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00da;
		}
	}
	{
		// var foundShader = Shader.Find("UI Extensions/Particles/Additive");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_21;
		L_21 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral9F68598AE98A5313BD184DAEF34A7037F05FC8E8, NULL);
		V_1 = L_21;
		// if (foundShader)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_22 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_22, NULL);
		if (!L_23)
		{
			goto IL_00da;
		}
	}
	{
		// material = new Material(foundShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_24 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_25, L_24, NULL);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, __this, L_25);
	}

IL_00da:
	{
		// currentMaterial = material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26;
		L_26 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		__this->___currentMaterial_49 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentMaterial_49), (void*)L_26);
		// if (currentMaterial && currentMaterial.HasProperty("_MainTex"))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___currentMaterial_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_27, NULL);
		if (!L_28)
		{
			goto IL_012f;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___currentMaterial_49;
		NullCheck(L_29);
		bool L_30;
		L_30 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_29, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, NULL);
		if (!L_30)
		{
			goto IL_012f;
		}
	}
	{
		// currentTexture = currentMaterial.mainTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___currentMaterial_49;
		NullCheck(L_31);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_32;
		L_32 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_31, NULL);
		__this->___currentTexture_50 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTexture_50), (void*)L_32);
		// if (currentTexture == null)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_33 = __this->___currentTexture_50;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_33, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_34)
		{
			goto IL_012f;
		}
	}
	{
		// currentTexture = Texture2D.whiteTexture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_35;
		L_35 = Texture2D_get_whiteTexture_m3A243ED388F9EF0EC515015A6E0E50FD261D2FA1(NULL);
		__this->___currentTexture_50 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTexture_50), (void*)L_35);
	}

IL_012f:
	{
		// material = currentMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = __this->___currentMaterial_49;
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, __this, L_36);
		// mainModule.scalingMode = ParticleSystemScalingMode.Hierarchy;
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_37 = (&__this->___mainModule_51);
		MainModule_set_scalingMode_m08A4399A0E64E5894509084A42BB528BE16A648D(L_37, 0, NULL);
		// particles = null;
		__this->___particles_41 = (ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particles_41), (void*)(ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)NULL);
	}

IL_014e:
	{
		// if (particles == null)
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_38 = __this->___particles_41;
		if (L_38)
		{
			goto IL_0174;
		}
	}
	{
		// particles = new ParticleSystem.Particle[pSystem.main.maxParticles];
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_39 = __this->___pSystem_40;
		NullCheck(L_39);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_40;
		L_40 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_39, NULL);
		V_0 = L_40;
		int32_t L_41;
		L_41 = MainModule_get_maxParticles_m7E3A0D115823903F57BEAA9E3D2EDA019FD09198((&V_0), NULL);
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_42 = (ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)(ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7*)SZArrayNew(ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7_il2cpp_TypeInfo_var, (uint32_t)L_41);
		__this->___particles_41 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particles_41), (void*)L_42);
	}

IL_0174:
	{
		// imageUV = new Vector4(0, 0, 1, 1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_43), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___imageUV_43 = L_43;
		// textureSheetAnimation = pSystem.textureSheetAnimation;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_44 = __this->___pSystem_40;
		NullCheck(L_44);
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6 L_45;
		L_45 = ParticleSystem_get_textureSheetAnimation_mA35CFDD2E7F70F3AFA88A766359336F36CBA937B(L_44, NULL);
		__this->___textureSheetAnimation_44 = L_45;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___textureSheetAnimation_44))->___m_ParticleSystem_0), (void*)NULL);
		// textureSheetAnimationFrames = 0;
		__this->___textureSheetAnimationFrames_45 = 0;
		// textureSheetAnimationFrameSize = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___textureSheetAnimationFrameSize_46 = L_46;
		// if (textureSheetAnimation.enabled)
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_47 = (&__this->___textureSheetAnimation_44);
		bool L_48;
		L_48 = TextureSheetAnimationModule_get_enabled_mF860A1A9A5794EA2FC3A5B9652C812981A4F3136(L_47, NULL);
		if (!L_48)
		{
			goto IL_020f;
		}
	}
	{
		// textureSheetAnimationFrames = textureSheetAnimation.numTilesX * textureSheetAnimation.numTilesY;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_49 = (&__this->___textureSheetAnimation_44);
		int32_t L_50;
		L_50 = TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE(L_49, NULL);
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_51 = (&__this->___textureSheetAnimation_44);
		int32_t L_52;
		L_52 = TextureSheetAnimationModule_get_numTilesY_mA39AD9D6245BE792B776B9834A3E83609266A8C4(L_51, NULL);
		__this->___textureSheetAnimationFrames_45 = ((int32_t)il2cpp_codegen_multiply(L_50, L_52));
		// textureSheetAnimationFrameSize = new Vector2(1f / textureSheetAnimation.numTilesX, 1f / textureSheetAnimation.numTilesY);
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_53 = (&__this->___textureSheetAnimation_44);
		int32_t L_54;
		L_54 = TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE(L_53, NULL);
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_55 = (&__this->___textureSheetAnimation_44);
		int32_t L_56;
		L_56 = TextureSheetAnimationModule_get_numTilesY_mA39AD9D6245BE792B776B9834A3E83609266A8C4(L_55, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_57), ((float)((1.0f)/((float)L_54))), ((float)((1.0f)/((float)L_56))), /*hidden argument*/NULL);
		__this->___textureSheetAnimationFrameSize_46 = L_57;
	}

IL_020f:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_Awake_mDD46445EA97E3F0FDF1021560128F021B6A9B4AE (UIParticleSystem_tE2CFBE1857452933388A21DC001933C6DBC62AC5* __this, const RuntimeMethod* method) 
{
	{
		// base.Awake();
		UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2(__this, NULL);
		// if (!Initialize())
		bool L_0;
		L_0 = UIParticleSystem_Initialize_mACCD4389A958352AA02C7FE87A08C44D9950D83C(__this, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::OnPopulateMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_OnPopulateMesh_mAEC35EC02B9BC56E6F44611A3E0ED2FA3E97973F (UIParticleSystem_tE2CFBE1857452933388A21DC001933C6DBC62AC5* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___0_vh, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_19 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_20;
	memset((&V_20), 0, sizeof(V_20));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_21;
	memset((&V_21), 0, sizeof(V_21));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_22;
	memset((&V_22), 0, sizeof(V_22));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B30_0;
	memset((&G_B30_0), 0, sizeof(G_B30_0));
	{
		// vh.Clear();
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___0_vh;
		NullCheck(L_0);
		VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5(L_0, NULL);
		// if (!gameObject.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// if (!isInitialised && !pSystem.main.playOnAwake)
		bool L_3 = __this->___isInitialised_48;
		if (L_3)
		{
			goto IL_0046;
		}
	}
	{
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = __this->___pSystem_40;
		NullCheck(L_4);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_5;
		L_5 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_4, NULL);
		V_4 = L_5;
		bool L_6;
		L_6 = MainModule_get_playOnAwake_m4FEB55773ED05AB5166314D9883671F4B277762A((&V_4), NULL);
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		// pSystem.Stop(false, ParticleSystemStopBehavior.StopEmittingAndClear);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7 = __this->___pSystem_40;
		NullCheck(L_7);
		ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326(L_7, (bool)0, 0, NULL);
		// isInitialised = true;
		__this->___isInitialised_48 = (bool)1;
	}

IL_0046:
	{
		// Vector2 temp = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_8;
		// Vector2 corner1 = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_1 = L_9;
		// Vector2 corner2 = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_2 = L_10;
		// int count = pSystem.GetParticles(particles);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_11 = __this->___pSystem_40;
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_12 = __this->___particles_41;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = ParticleSystem_GetParticles_m0F67158FED60933343574A1BEB68FEB9D5476E3F(L_11, L_12, NULL);
		V_3 = L_13;
		// for (int i = 0; i < count; ++i)
		V_5 = 0;
		goto IL_07de;
	}

IL_0072:
	{
		// ParticleSystem.Particle particle = particles[i];
		ParticleU5BU5D_tE2CC7CC8844B6F592CC26DE7B533D8BC74C9BEC7* L_14 = __this->___particles_41;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Particle_tF16C89682A98AB276CCBE4DA0A6E82F98500F79D L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_6 = L_17;
		// Vector2 position = (mainModule.simulationSpace == ParticleSystemSimulationSpace.Local ? particle.position : _transform.InverseTransformPoint(particle.position));
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_18 = (&__this->___mainModule_51);
		int32_t L_19;
		L_19 = MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC(L_18, NULL);
		if (!L_19)
		{
			goto IL_00a2;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->____transform_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837((&V_6), NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_20, L_21, NULL);
		G_B9_0 = L_22;
		goto IL_00a9;
	}

IL_00a2:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837((&V_6), NULL);
		G_B9_0 = L_23;
	}

IL_00a9:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(G_B9_0, NULL);
		V_7 = L_24;
		// float rotation = -particle.rotation * Mathf.Deg2Rad;
		float L_25;
		L_25 = Particle_get_rotation_mA3A5978F95EDA141FE91C3423DE46DE9B91B49A2((&V_6), NULL);
		V_8 = ((float)il2cpp_codegen_multiply(((-L_25)), (0.0174532924f)));
		// float rotation90 = rotation + Mathf.PI / 2;
		float L_26 = V_8;
		V_9 = ((float)il2cpp_codegen_add(L_26, (1.57079637f)));
		// Color32 color = particle.GetCurrentColor(pSystem);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_27 = __this->___pSystem_40;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_28;
		L_28 = Particle_GetCurrentColor_m793DDF1AC5043A8991B6663D965404B1B3855C78((&V_6), L_27, NULL);
		V_10 = L_28;
		// float size = particle.GetCurrentSize(pSystem) * 0.5f;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_29 = __this->___pSystem_40;
		float L_30;
		L_30 = Particle_GetCurrentSize_m3F7D066BF44CDC3B0E501CA10A06313CD0CCCA64((&V_6), L_29, NULL);
		V_11 = ((float)il2cpp_codegen_multiply(L_30, (0.5f)));
		// if (mainModule.scalingMode == ParticleSystemScalingMode.Shape)
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_31 = (&__this->___mainModule_51);
		int32_t L_32;
		L_32 = MainModule_get_scalingMode_m2C235E61B1ABBD31F471DC80EF15EA315EA3F0FA(L_31, NULL);
		if ((!(((uint32_t)L_32) == ((uint32_t)2))))
		{
			goto IL_0110;
		}
	}
	{
		// position /= canvas.scaleFactor;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_7;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_34;
		L_34 = Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419(__this, NULL);
		NullCheck(L_34);
		float L_35;
		L_35 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_34, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_33, L_35, NULL);
		V_7 = L_36;
	}

IL_0110:
	{
		// Vector4 particleUV = imageUV;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_37 = __this->___imageUV_43;
		V_12 = L_37;
		// if (textureSheetAnimation.enabled)
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_38 = (&__this->___textureSheetAnimation_44);
		bool L_39;
		L_39 = TextureSheetAnimationModule_get_enabled_mF860A1A9A5794EA2FC3A5B9652C812981A4F3136(L_38, NULL);
		if (!L_39)
		{
			goto IL_0321;
		}
	}
	{
		// float frameProgress = 1 - (particle.remainingLifetime / particle.startLifetime);
		float L_40;
		L_40 = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9((&V_6), NULL);
		float L_41;
		L_41 = Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664((&V_6), NULL);
		V_13 = ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_40/L_41))));
		// if (textureSheetAnimation.frameOverTime.curveMin != null)
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_42 = (&__this->___textureSheetAnimation_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_43;
		L_43 = TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C(L_42, NULL);
		V_15 = L_43;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_44;
		L_44 = MinMaxCurve_get_curveMin_m2F6041CAA8760D21D39A6204973B411D7109CF00((&V_15), NULL);
		if (!L_44)
		{
			goto IL_018a;
		}
	}
	{
		// frameProgress = textureSheetAnimation.frameOverTime.curveMin.Evaluate(1 - (particle.remainingLifetime / particle.startLifetime));
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_45 = (&__this->___textureSheetAnimation_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_46;
		L_46 = TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C(L_45, NULL);
		V_15 = L_46;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_47;
		L_47 = MinMaxCurve_get_curveMin_m2F6041CAA8760D21D39A6204973B411D7109CF00((&V_15), NULL);
		float L_48;
		L_48 = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9((&V_6), NULL);
		float L_49;
		L_49 = Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664((&V_6), NULL);
		NullCheck(L_47);
		float L_50;
		L_50 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_47, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_48/L_49)))), NULL);
		V_13 = L_50;
		goto IL_0213;
	}

IL_018a:
	{
		// else if (textureSheetAnimation.frameOverTime.curve != null)
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_51 = (&__this->___textureSheetAnimation_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_52;
		L_52 = TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C(L_51, NULL);
		V_15 = L_52;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53;
		L_53 = MinMaxCurve_get_curve_mE735424B0F4A9F55699BD82254F159D4226F9661((&V_15), NULL);
		if (!L_53)
		{
			goto IL_01d2;
		}
	}
	{
		// frameProgress = textureSheetAnimation.frameOverTime.curve.Evaluate(1 - (particle.remainingLifetime / particle.startLifetime));
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_54 = (&__this->___textureSheetAnimation_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_55;
		L_55 = TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C(L_54, NULL);
		V_15 = L_55;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_56;
		L_56 = MinMaxCurve_get_curve_mE735424B0F4A9F55699BD82254F159D4226F9661((&V_15), NULL);
		float L_57;
		L_57 = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9((&V_6), NULL);
		float L_58;
		L_58 = Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664((&V_6), NULL);
		NullCheck(L_56);
		float L_59;
		L_59 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_56, ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_57/L_58)))), NULL);
		V_13 = L_59;
		goto IL_0213;
	}

IL_01d2:
	{
		// else if (textureSheetAnimation.frameOverTime.constant > 0)
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_60 = (&__this->___textureSheetAnimation_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_61;
		L_61 = TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C(L_60, NULL);
		V_15 = L_61;
		float L_62;
		L_62 = MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91((&V_15), NULL);
		if ((!(((float)L_62) > ((float)(0.0f)))))
		{
			goto IL_0213;
		}
	}
	{
		// frameProgress = textureSheetAnimation.frameOverTime.constant - (particle.remainingLifetime / particle.startLifetime);
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_63 = (&__this->___textureSheetAnimation_44);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_64;
		L_64 = TextureSheetAnimationModule_get_frameOverTime_m8038DE0B8AD6C65CA259826FF71A41E1DD7D2A6C(L_63, NULL);
		V_15 = L_64;
		float L_65;
		L_65 = MinMaxCurve_get_constant_m4F2B7693C00CC9FAEDE1DAD32FEEE893414FBE91((&V_15), NULL);
		float L_66;
		L_66 = Particle_get_remainingLifetime_m0677284AA2A1518AFC954CD0E8DCCE8F519055A9((&V_6), NULL);
		float L_67;
		L_67 = Particle_get_startLifetime_m393EE5F4A45F3106D2F5C52CA747ED5FDBC3F664((&V_6), NULL);
		V_13 = ((float)il2cpp_codegen_subtract(L_65, ((float)(L_66/L_67))));
	}

IL_0213:
	{
		// frameProgress = Mathf.Repeat(frameProgress * textureSheetAnimation.cycleCount, 1);
		float L_68 = V_13;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_69 = (&__this->___textureSheetAnimation_44);
		int32_t L_70;
		L_70 = TextureSheetAnimationModule_get_cycleCount_m99F3A1F1DFA7947B44B826C6B9C96B268FFE5DC0(L_69, NULL);
		float L_71;
		L_71 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_multiply(L_68, ((float)L_70))), (1.0f), NULL);
		V_13 = L_71;
		// int frame = 0;
		V_14 = 0;
		// switch (textureSheetAnimation.animation)
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_72 = (&__this->___textureSheetAnimation_44);
		int32_t L_73;
		L_73 = TextureSheetAnimationModule_get_animation_mB402112DF63C35BB5B34B892D51791ABAED84176(L_72, NULL);
		V_17 = L_73;
		int32_t L_74 = V_17;
		if (!L_74)
		{
			goto IL_0249;
		}
	}
	{
		int32_t L_75 = V_17;
		if ((((int32_t)L_75) == ((int32_t)1)))
		{
			goto IL_025c;
		}
	}
	{
		goto IL_0292;
	}

IL_0249:
	{
		// frame = Mathf.FloorToInt(frameProgress * textureSheetAnimationFrames);
		float L_76 = V_13;
		int32_t L_77 = __this->___textureSheetAnimationFrames_45;
		int32_t L_78;
		L_78 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_multiply(L_76, ((float)L_77))), NULL);
		V_14 = L_78;
		// break;
		goto IL_0292;
	}

IL_025c:
	{
		// frame = Mathf.FloorToInt(frameProgress * textureSheetAnimation.numTilesX);
		float L_79 = V_13;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_80 = (&__this->___textureSheetAnimation_44);
		int32_t L_81;
		L_81 = TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE(L_80, NULL);
		int32_t L_82;
		L_82 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_multiply(L_79, ((float)L_81))), NULL);
		V_14 = L_82;
		// int row = textureSheetAnimation.rowIndex;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_83 = (&__this->___textureSheetAnimation_44);
		int32_t L_84;
		L_84 = TextureSheetAnimationModule_get_rowIndex_m72BA6BAAD0F816E11E276B28907119054D8EA03C(L_83, NULL);
		V_16 = L_84;
		// frame += row * textureSheetAnimation.numTilesX;
		int32_t L_85 = V_14;
		int32_t L_86 = V_16;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_87 = (&__this->___textureSheetAnimation_44);
		int32_t L_88;
		L_88 = TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE(L_87, NULL);
		V_14 = ((int32_t)il2cpp_codegen_add(L_85, ((int32_t)il2cpp_codegen_multiply(L_86, L_88))));
	}

IL_0292:
	{
		// frame %= textureSheetAnimationFrames;
		int32_t L_89 = V_14;
		int32_t L_90 = __this->___textureSheetAnimationFrames_45;
		V_14 = ((int32_t)(L_89%L_90));
		// particleUV.x = (frame % textureSheetAnimation.numTilesX) * textureSheetAnimationFrameSize.x;
		int32_t L_91 = V_14;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_92 = (&__this->___textureSheetAnimation_44);
		int32_t L_93;
		L_93 = TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE(L_92, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_94 = (&__this->___textureSheetAnimationFrameSize_46);
		float L_95 = L_94->___x_0;
		(&V_12)->___x_1 = ((float)il2cpp_codegen_multiply(((float)((int32_t)(L_91%L_93))), L_95));
		// particleUV.y = 1.0f - Mathf.FloorToInt(frame / textureSheetAnimation.numTilesX) * textureSheetAnimationFrameSize.y;
		int32_t L_96 = V_14;
		TextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6* L_97 = (&__this->___textureSheetAnimation_44);
		int32_t L_98;
		L_98 = TextureSheetAnimationModule_get_numTilesX_m79581CB3D709DBE8936BB375F1141B6822322FBE(L_97, NULL);
		int32_t L_99;
		L_99 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)((int32_t)(L_96/L_98))), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_100 = (&__this->___textureSheetAnimationFrameSize_46);
		float L_101 = L_100->___y_1;
		(&V_12)->___y_2 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)L_99), L_101))));
		// particleUV.z = particleUV.x + textureSheetAnimationFrameSize.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_102 = V_12;
		float L_103 = L_102.___x_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_104 = (&__this->___textureSheetAnimationFrameSize_46);
		float L_105 = L_104->___x_0;
		(&V_12)->___z_3 = ((float)il2cpp_codegen_add(L_103, L_105));
		// particleUV.w = particleUV.y + textureSheetAnimationFrameSize.y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_106 = V_12;
		float L_107 = L_106.___y_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_108 = (&__this->___textureSheetAnimationFrameSize_46);
		float L_109 = L_108->___y_1;
		(&V_12)->___w_4 = ((float)il2cpp_codegen_add(L_107, L_109));
	}

IL_0321:
	{
		// temp.x = particleUV.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_110 = V_12;
		float L_111 = L_110.___x_1;
		(&V_0)->___x_0 = L_111;
		// temp.y = particleUV.y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_112 = V_12;
		float L_113 = L_112.___y_2;
		(&V_0)->___y_1 = L_113;
		// _quad[0] = UIVertex.simpleVert;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_114 = __this->____quad_42;
		il2cpp_codegen_runtime_class_init_inline(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_115 = ((UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields*)il2cpp_codegen_static_fields_for(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var))->___simpleVert_10;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(0), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_115);
		// _quad[0].color = color;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_116 = __this->____quad_42;
		NullCheck(L_116);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_117 = V_10;
		((L_116)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___color_3 = L_117;
		// _quad[0].uv0 = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_118 = __this->____quad_42;
		NullCheck(L_118);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_119 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_120;
		L_120 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_119, NULL);
		((L_118)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___uv0_4 = L_120;
		// temp.x = particleUV.x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_121 = V_12;
		float L_122 = L_121.___x_1;
		(&V_0)->___x_0 = L_122;
		// temp.y = particleUV.w;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_123 = V_12;
		float L_124 = L_123.___w_4;
		(&V_0)->___y_1 = L_124;
		// _quad[1] = UIVertex.simpleVert;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_125 = __this->____quad_42;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_126 = ((UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields*)il2cpp_codegen_static_fields_for(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var))->___simpleVert_10;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(1), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_126);
		// _quad[1].color = color;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_127 = __this->____quad_42;
		NullCheck(L_127);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_128 = V_10;
		((L_127)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___color_3 = L_128;
		// _quad[1].uv0 = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_129 = __this->____quad_42;
		NullCheck(L_129);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_130 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_131;
		L_131 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_130, NULL);
		((L_129)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___uv0_4 = L_131;
		// temp.x = particleUV.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_132 = V_12;
		float L_133 = L_132.___z_3;
		(&V_0)->___x_0 = L_133;
		// temp.y = particleUV.w;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_134 = V_12;
		float L_135 = L_134.___w_4;
		(&V_0)->___y_1 = L_135;
		// _quad[2] = UIVertex.simpleVert;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_136 = __this->____quad_42;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_137 = ((UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields*)il2cpp_codegen_static_fields_for(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var))->___simpleVert_10;
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(2), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_137);
		// _quad[2].color = color;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_138 = __this->____quad_42;
		NullCheck(L_138);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_139 = V_10;
		((L_138)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___color_3 = L_139;
		// _quad[2].uv0 = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_140 = __this->____quad_42;
		NullCheck(L_140);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_141 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_142;
		L_142 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_141, NULL);
		((L_140)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___uv0_4 = L_142;
		// temp.x = particleUV.z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_143 = V_12;
		float L_144 = L_143.___z_3;
		(&V_0)->___x_0 = L_144;
		// temp.y = particleUV.y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_145 = V_12;
		float L_146 = L_145.___y_2;
		(&V_0)->___y_1 = L_146;
		// _quad[3] = UIVertex.simpleVert;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_147 = __this->____quad_42;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_148 = ((UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields*)il2cpp_codegen_static_fields_for(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_il2cpp_TypeInfo_var))->___simpleVert_10;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(3), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_148);
		// _quad[3].color = color;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_149 = __this->____quad_42;
		NullCheck(L_149);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_150 = V_10;
		((L_149)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___color_3 = L_150;
		// _quad[3].uv0 = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_151 = __this->____quad_42;
		NullCheck(L_151);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_152 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_153;
		L_153 = Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline(L_152, NULL);
		((L_151)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___uv0_4 = L_153;
		// if (rotation == 0)
		float L_154 = V_8;
		if ((!(((float)L_154) == ((float)(0.0f)))))
		{
			goto IL_0596;
		}
	}
	{
		// corner1.x = position.x - size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_155 = V_7;
		float L_156 = L_155.___x_0;
		float L_157 = V_11;
		(&V_1)->___x_0 = ((float)il2cpp_codegen_subtract(L_156, L_157));
		// corner1.y = position.y - size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_158 = V_7;
		float L_159 = L_158.___y_1;
		float L_160 = V_11;
		(&V_1)->___y_1 = ((float)il2cpp_codegen_subtract(L_159, L_160));
		// corner2.x = position.x + size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_161 = V_7;
		float L_162 = L_161.___x_0;
		float L_163 = V_11;
		(&V_2)->___x_0 = ((float)il2cpp_codegen_add(L_162, L_163));
		// corner2.y = position.y + size;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_164 = V_7;
		float L_165 = L_164.___y_1;
		float L_166 = V_11;
		(&V_2)->___y_1 = ((float)il2cpp_codegen_add(L_165, L_166));
		// temp.x = corner1.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_167 = V_1;
		float L_168 = L_167.___x_0;
		(&V_0)->___x_0 = L_168;
		// temp.y = corner1.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_169 = V_1;
		float L_170 = L_169.___y_1;
		(&V_0)->___y_1 = L_170;
		// _quad[0].position = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_171 = __this->____quad_42;
		NullCheck(L_171);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_172 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173;
		L_173 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_172, NULL);
		((L_171)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0 = L_173;
		// temp.x = corner1.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_174 = V_1;
		float L_175 = L_174.___x_0;
		(&V_0)->___x_0 = L_175;
		// temp.y = corner2.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_176 = V_2;
		float L_177 = L_176.___y_1;
		(&V_0)->___y_1 = L_177;
		// _quad[1].position = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_178 = __this->____quad_42;
		NullCheck(L_178);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_179 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180;
		L_180 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_179, NULL);
		((L_178)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___position_0 = L_180;
		// temp.x = corner2.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_181 = V_2;
		float L_182 = L_181.___x_0;
		(&V_0)->___x_0 = L_182;
		// temp.y = corner2.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_183 = V_2;
		float L_184 = L_183.___y_1;
		(&V_0)->___y_1 = L_184;
		// _quad[2].position = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_185 = __this->____quad_42;
		NullCheck(L_185);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_186 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_187;
		L_187 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_186, NULL);
		((L_185)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___position_0 = L_187;
		// temp.x = corner2.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_188 = V_2;
		float L_189 = L_188.___x_0;
		(&V_0)->___x_0 = L_189;
		// temp.y = corner1.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_190 = V_1;
		float L_191 = L_190.___y_1;
		(&V_0)->___y_1 = L_191;
		// _quad[3].position = temp;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_192 = __this->____quad_42;
		NullCheck(L_192);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_193 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194;
		L_194 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_193, NULL);
		((L_192)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___position_0 = L_194;
		goto IL_07cc;
	}

IL_0596:
	{
		// if (use3dRotation)
		bool L_195 = __this->___use3dRotation_38;
		if (!L_195)
		{
			goto IL_06fc;
		}
	}
	{
		// Vector3 pos3d = (mainModule.simulationSpace == ParticleSystemSimulationSpace.Local ? particle.position : _transform.InverseTransformPoint(particle.position));
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_196 = (&__this->___mainModule_51);
		int32_t L_197;
		L_197 = MainModule_get_simulationSpace_m03E205A92F6CF911F0CD82DA457D156609C02ADC(L_196, NULL);
		if (!L_197)
		{
			goto IL_05c2;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_198 = __this->____transform_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_199;
		L_199 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837((&V_6), NULL);
		NullCheck(L_198);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_200;
		L_200 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_198, L_199, NULL);
		G_B30_0 = L_200;
		goto IL_05c9;
	}

IL_05c2:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_201;
		L_201 = Particle_get_position_m3EDB68F03D6EC0F086D6FF6F25ABE7D0E1111837((&V_6), NULL);
		G_B30_0 = L_201;
	}

IL_05c9:
	{
		V_18 = G_B30_0;
		// if (mainModule.scalingMode == ParticleSystemScalingMode.Shape)
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* L_202 = (&__this->___mainModule_51);
		int32_t L_203;
		L_203 = MainModule_get_scalingMode_m2C235E61B1ABBD31F471DC80EF15EA315EA3F0FA(L_202, NULL);
		if ((!(((uint32_t)L_203) == ((uint32_t)2))))
		{
			goto IL_05ed;
		}
	}
	{
		// position /= canvas.scaleFactor;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_204 = V_7;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_205;
		L_205 = Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419(__this, NULL);
		NullCheck(L_205);
		float L_206;
		L_206 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_205, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_207;
		L_207 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_204, L_206, NULL);
		V_7 = L_207;
	}

IL_05ed:
	{
		// Vector3[] verts = new Vector3[4]
		// {
		//     new Vector3(-size, -size, 0),
		//     new Vector3(-size, size, 0),
		//     new Vector3(size, size, 0),
		//     new Vector3(size, -size, 0)
		// };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_208 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_209 = L_208;
		float L_210 = V_11;
		float L_211 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_212;
		memset((&L_212), 0, sizeof(L_212));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_212), ((-L_210)), ((-L_211)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_209);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_212);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_213 = L_209;
		float L_214 = V_11;
		float L_215 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_216;
		memset((&L_216), 0, sizeof(L_216));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_216), ((-L_214)), L_215, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_213);
		(L_213)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_216);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_217 = L_213;
		float L_218 = V_11;
		float L_219 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_220;
		memset((&L_220), 0, sizeof(L_220));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_220), L_218, L_219, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_217);
		(L_217)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_220);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_221 = L_217;
		float L_222 = V_11;
		float L_223 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_224;
		memset((&L_224), 0, sizeof(L_224));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_224), L_222, ((-L_223)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_221);
		(L_221)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_224);
		V_19 = L_221;
		// Quaternion particleRotation = Quaternion.Euler(particle.rotation3D);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_225;
		L_225 = Particle_get_rotation3D_m8BE7C2D25F8E6F44F19690266100723A5DBE64D1((&V_6), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_226;
		L_226 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_225, NULL);
		V_20 = L_226;
		// _quad[0].position = pos3d + particleRotation * verts[0];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_227 = __this->____quad_42;
		NullCheck(L_227);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_228 = V_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_229 = V_20;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_230 = V_19;
		NullCheck(L_230);
		int32_t L_231 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_232 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_233;
		L_233 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_229, L_232, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_234;
		L_234 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_228, L_233, NULL);
		((L_227)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0 = L_234;
		// _quad[1].position = pos3d + particleRotation * verts[1];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_235 = __this->____quad_42;
		NullCheck(L_235);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_236 = V_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_237 = V_20;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_238 = V_19;
		NullCheck(L_238);
		int32_t L_239 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_240 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_241;
		L_241 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_237, L_240, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_242;
		L_242 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_236, L_241, NULL);
		((L_235)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___position_0 = L_242;
		// _quad[2].position = pos3d + particleRotation * verts[2];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_243 = __this->____quad_42;
		NullCheck(L_243);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_244 = V_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_245 = V_20;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_246 = V_19;
		NullCheck(L_246);
		int32_t L_247 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_248 = (L_246)->GetAt(static_cast<il2cpp_array_size_t>(L_247));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_249;
		L_249 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_245, L_248, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_250;
		L_250 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_244, L_249, NULL);
		((L_243)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___position_0 = L_250;
		// _quad[3].position = pos3d + particleRotation * verts[3];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_251 = __this->____quad_42;
		NullCheck(L_251);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_252 = V_18;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_253 = V_20;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_254 = V_19;
		NullCheck(L_254);
		int32_t L_255 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_256 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_255));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_257;
		L_257 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_253, L_256, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_258;
		L_258 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_252, L_257, NULL);
		((L_251)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___position_0 = L_258;
		goto IL_07cc;
	}

IL_06fc:
	{
		// Vector2 right = new Vector2(Mathf.Cos(rotation), Mathf.Sin(rotation)) * size;
		float L_259 = V_8;
		float L_260;
		L_260 = cosf(L_259);
		float L_261 = V_8;
		float L_262;
		L_262 = sinf(L_261);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_263;
		memset((&L_263), 0, sizeof(L_263));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_263), L_260, L_262, /*hidden argument*/NULL);
		float L_264 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_265;
		L_265 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_263, L_264, NULL);
		V_21 = L_265;
		// Vector2 up = new Vector2(Mathf.Cos(rotation90), Mathf.Sin(rotation90)) * size;
		float L_266 = V_9;
		float L_267;
		L_267 = cosf(L_266);
		float L_268 = V_9;
		float L_269;
		L_269 = sinf(L_268);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_270;
		memset((&L_270), 0, sizeof(L_270));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_270), L_267, L_269, /*hidden argument*/NULL);
		float L_271 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_272;
		L_272 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_270, L_271, NULL);
		V_22 = L_272;
		// _quad[0].position = position - right - up;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_273 = __this->____quad_42;
		NullCheck(L_273);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_274 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_275 = V_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_276;
		L_276 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_274, L_275, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_277 = V_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_278;
		L_278 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_276, L_277, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_279;
		L_279 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_278, NULL);
		((L_273)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0 = L_279;
		// _quad[1].position = position - right + up;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_280 = __this->____quad_42;
		NullCheck(L_280);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_281 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_282 = V_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_283;
		L_283 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_281, L_282, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_284 = V_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_285;
		L_285 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_283, L_284, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_286;
		L_286 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_285, NULL);
		((L_280)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___position_0 = L_286;
		// _quad[2].position = position + right + up;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_287 = __this->____quad_42;
		NullCheck(L_287);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_288 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_289 = V_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_290;
		L_290 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_288, L_289, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_291 = V_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_292;
		L_292 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_290, L_291, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_293;
		L_293 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_292, NULL);
		((L_287)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___position_0 = L_293;
		// _quad[3].position = position + right - up;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_294 = __this->____quad_42;
		NullCheck(L_294);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_295 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_296 = V_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_297;
		L_297 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_295, L_296, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_298 = V_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_299;
		L_299 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_297, L_298, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_300;
		L_300 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_299, NULL);
		((L_294)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___position_0 = L_300;
	}

IL_07cc:
	{
		// vh.AddUIVertexQuad(_quad);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_301 = ___0_vh;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_302 = __this->____quad_42;
		NullCheck(L_301);
		VertexHelper_AddUIVertexQuad_m6AC21081F2A5A48D22BC3497E527D0A9AB8278B0(L_301, L_302, NULL);
		// for (int i = 0; i < count; ++i)
		int32_t L_303 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_303, 1));
	}

IL_07de:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_304 = V_5;
		int32_t L_305 = V_3;
		if ((((int32_t)L_304) < ((int32_t)L_305)))
		{
			goto IL_0072;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_Update_mFC0490C08AF98330039F26A6D156189EF60BCBCF (UIParticleSystem_tE2CFBE1857452933388A21DC001933C6DBC62AC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!fixedTime && Application.isPlaying)
		bool L_0 = __this->___fixedTime_37;
		if (L_0)
		{
			goto IL_009b;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_1)
		{
			goto IL_009b;
		}
	}
	{
		// pSystem.Simulate(Time.unscaledDeltaTime, false, false, true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = __this->___pSystem_40;
		float L_3;
		L_3 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		NullCheck(L_2);
		ParticleSystem_Simulate_m514E1FCC76A6882650BD237E1D14B43ECAA97643(L_2, L_3, (bool)0, (bool)0, (bool)1, NULL);
		// SetAllDirty();
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, __this);
		// if ((currentMaterial != null && currentTexture != currentMaterial.mainTexture) ||
		//     (material != null && currentMaterial != null && material.shader != currentMaterial.shader))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___currentMaterial_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = __this->___currentTexture_50;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___currentMaterial_49;
		NullCheck(L_7);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8;
		L_8 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_008d;
		}
	}

IL_0054:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_009b;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___currentMaterial_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_009b;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		NullCheck(L_14);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15;
		L_15 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_14, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___currentMaterial_49;
		NullCheck(L_16);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17;
		L_17 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_009b;
		}
	}

IL_008d:
	{
		// pSystem = null;
		__this->___pSystem_40 = (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pSystem_40), (void*)(ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL);
		// Initialize();
		bool L_19;
		L_19 = UIParticleSystem_Initialize_mACCD4389A958352AA02C7FE87A08C44D9950D83C(__this, NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_LateUpdate_m85FAD65FD4DF2DC973970EB2F9ABAF60A65871D4 (UIParticleSystem_tE2CFBE1857452933388A21DC001933C6DBC62AC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// SetAllDirty();
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, __this);
		goto IL_00a3;
	}

IL_0012:
	{
		// if (fixedTime)
		bool L_1 = __this->___fixedTime_37;
		if (!L_1)
		{
			goto IL_00a3;
		}
	}
	{
		// pSystem.Simulate(Time.unscaledDeltaTime, false, false, true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = __this->___pSystem_40;
		float L_3;
		L_3 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		NullCheck(L_2);
		ParticleSystem_Simulate_m514E1FCC76A6882650BD237E1D14B43ECAA97643(L_2, L_3, (bool)0, (bool)0, (bool)1, NULL);
		// SetAllDirty();
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, __this);
		// if ((currentMaterial != null && currentTexture != currentMaterial.mainTexture) ||
		//     (material != null && currentMaterial != null && material.shader != currentMaterial.shader))
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___currentMaterial_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = __this->___currentTexture_50;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___currentMaterial_49;
		NullCheck(L_7);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8;
		L_8 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_0095;
		}
	}

IL_005c:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_00a3;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___currentMaterial_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_00a3;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		NullCheck(L_14);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_15;
		L_15 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_14, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___currentMaterial_49;
		NullCheck(L_16);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_17;
		L_17 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0095:
	{
		// pSystem = null;
		__this->___pSystem_40 = (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pSystem_40), (void*)(ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL);
		// Initialize();
		bool L_19;
		L_19 = UIParticleSystem_Initialize_mACCD4389A958352AA02C7FE87A08C44D9950D83C(__this, NULL);
	}

IL_00a3:
	{
		// if (material == currentMaterial)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___currentMaterial_49;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_00b7;
		}
	}
	{
		// return;
		return;
	}

IL_00b7:
	{
		// pSystem = null;
		__this->___pSystem_40 = (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pSystem_40), (void*)(ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)NULL);
		// Initialize();
		bool L_23;
		L_23 = UIParticleSystem_Initialize_mACCD4389A958352AA02C7FE87A08C44D9950D83C(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_OnDestroy_m094314EA640812E0C4BB7B844EC3F9D78B478A4A (UIParticleSystem_tE2CFBE1857452933388A21DC001933C6DBC62AC5* __this, const RuntimeMethod* method) 
{
	{
		// currentMaterial = null;
		__this->___currentMaterial_49 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentMaterial_49), (void*)(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// currentTexture = null;
		__this->___currentTexture_50 = (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTexture_50), (void*)(Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::StartParticleEmission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_StartParticleEmission_m94100C9ADAC8C92795A9F6EC8792ECCE7EC9D615 (UIParticleSystem_tE2CFBE1857452933388A21DC001933C6DBC62AC5* __this, const RuntimeMethod* method) 
{
	{
		// pSystem.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___pSystem_40;
		NullCheck(L_0);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::StopParticleEmission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_StopParticleEmission_mC5940F4BE626FFF72BEE1E8BF698FE30B6D83415 (UIParticleSystem_tE2CFBE1857452933388A21DC001933C6DBC62AC5* __this, const RuntimeMethod* method) 
{
	{
		// pSystem.Stop(false, ParticleSystemStopBehavior.StopEmittingAndClear);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___pSystem_40;
		NullCheck(L_0);
		ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326(L_0, (bool)0, 0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::PauseParticleEmission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_PauseParticleEmission_m42FB728FC9660E5AC0DA56A8A087CE50DC4CDCD6 (UIParticleSystem_tE2CFBE1857452933388A21DC001933C6DBC62AC5* __this, const RuntimeMethod* method) 
{
	{
		// pSystem.Stop(false, ParticleSystemStopBehavior.StopEmitting);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___pSystem_40;
		NullCheck(L_0);
		ParticleSystem_Stop_mB5761CB85083F593FFEC3D27931CACF1855A6326(L_0, (bool)0, 1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.CasualGame.UIParticleSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem__ctor_m0B93700192311EF5053FB193AC3D218FAA957932 (UIParticleSystem_tE2CFBE1857452933388A21DC001933C6DBC62AC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool fixedTime = true;
		__this->___fixedTime_37 = (bool)1;
		// private UIVertex[] _quad = new UIVertex[4];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_0 = (UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)(UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)SZArrayNew(UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->____quad_42 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____quad_42), (void*)L_0);
		// private Vector4 imageUV = Vector4.zero;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		__this->___imageUV_43 = L_1;
		MaskableGraphic__ctor_mD2E256F950AAAE0E2445971361B5C54D2066E4C2(__this, NULL);
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
// YMMJSONUtils.JObjectKind YMMJSONUtils.JObject::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JObject_get_Kind_m13EF0DE2F4E15D4EE5E40A5315B6A6B495C5A58C (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public JObjectKind Kind { get; private set; }
		int32_t L_0 = __this->___U3CKindU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_Kind(YMMJSONUtils.JObjectKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_Kind_mD12ABA0C4D0CD58238BCD6030B2D6DC54F326A55 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public JObjectKind Kind { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CKindU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject> YMMJSONUtils.JObject::get_ObjectValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, JObject> ObjectValue { get; private set; }
		Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_0 = __this->___U3CObjectValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_ObjectValue(System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_ObjectValue_mC1FC6DE92EC25FA91A918316481B05AC58ACCC7A (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, JObject> ObjectValue { get; private set; }
		Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_0 = ___0_value;
		__this->___U3CObjectValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CObjectValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<YMMJSONUtils.JObject> YMMJSONUtils.JObject::get_ArrayValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public List<JObject> ArrayValue { get; private set; }
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_0 = __this->___U3CArrayValueU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_ArrayValue(System.Collections.Generic.List`1<YMMJSONUtils.JObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_ArrayValue_mFB93C515E10CCD51A778A1F5E3A6E8625E957768 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<JObject> ArrayValue { get; private set; }
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_0 = ___0_value;
		__this->___U3CArrayValueU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArrayValueU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String YMMJSONUtils.JObject::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JObject_get_StringValue_mDA41484A8D0519352C5185A234DAFC10D4499C58 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public string StringValue { get; private set; }
		String_t* L_0 = __this->___U3CStringValueU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_StringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_StringValue_m0D9956200CEC32514C50C065145D6C07A538514B (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string StringValue { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CStringValueU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStringValueU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Boolean YMMJSONUtils.JObject::get_BooleanValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JObject_get_BooleanValue_m1F133DF675798A4E95D1EC81D918B139FCB22542 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public bool BooleanValue { get; private set; }
		bool L_0 = __this->___U3CBooleanValueU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_BooleanValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_BooleanValue_mCBD498B3264596F62B855602A850FEB4FA85F6FF (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool BooleanValue { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CBooleanValueU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 YMMJSONUtils.JObject::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JObject_get_Count_mF9AF92947ACABC66F11C63C58693AEA05545EDF9 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE376C3153AF8A4C73E7BB28DC48B74B8D94D3E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m870ECBBD4C871BAF1CBCB15305895DCF9E54D563_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Kind == JObjectKind.Array ? ArrayValue.Count
		//     : Kind == JObjectKind.Object ? ObjectValue.Count
		//         : 0;
		int32_t L_0;
		L_0 = JObject_get_Kind_m13EF0DE2F4E15D4EE5E40A5315B6A6B495C5A58C_inline(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1;
		L_1 = JObject_get_Kind_m13EF0DE2F4E15D4EE5E40A5315B6A6B495C5A58C_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_2;
		L_2 = JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_mE376C3153AF8A4C73E7BB28DC48B74B8D94D3E11(L_2, Dictionary_2_get_Count_mE376C3153AF8A4C73E7BB28DC48B74B8D94D3E11_RuntimeMethod_var);
		return L_3;
	}

IL_001f:
	{
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_4;
		L_4 = JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m870ECBBD4C871BAF1CBCB15305895DCF9E54D563_inline(L_4, List_1_get_Count_m870ECBBD4C871BAF1CBCB15305895DCF9E54D563_RuntimeMethod_var);
		return L_5;
	}
}
// System.Double YMMJSONUtils.JObject::get_DoubleValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public double DoubleValue { get; private set; }
		double L_0 = __this->___U3CDoubleValueU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_DoubleValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_DoubleValue_mBF9257A740E2CD3F8DA22A95D59BED05629F65D3 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// public double DoubleValue { get; private set; }
		double L_0 = ___0_value;
		__this->___U3CDoubleValueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Single YMMJSONUtils.JObject::get_FloatValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JObject_get_FloatValue_mA3FFA45A05D8D82FEBBF01968D3C5E545D003782 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public float FloatValue { get; private set; }
		float L_0 = __this->___U3CFloatValueU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_FloatValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_FloatValue_mFC011B853FC8F233733A79C3327BCE651E9242D0 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float FloatValue { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CFloatValueU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.UInt64 YMMJSONUtils.JObject::get_ULongValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public ulong ULongValue { get; private set; }
		uint64_t L_0 = __this->___U3CULongValueU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_ULongValue(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_ULongValue_m9654C958809EA25787D7D7372A902AB027E3B6FC (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public ulong ULongValue { get; private set; }
		uint64_t L_0 = ___0_value;
		__this->___U3CULongValueU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Int64 YMMJSONUtils.JObject::get_LongValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public long LongValue { get; private set; }
		int64_t L_0 = __this->___U3CLongValueU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_LongValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_LongValue_m61322073008C2963061CF72D956EC1E9B7F12840 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public long LongValue { get; private set; }
		int64_t L_0 = ___0_value;
		__this->___U3CLongValueU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.UInt32 YMMJSONUtils.JObject::get_UIntValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t JObject_get_UIntValue_m20AF155A1577719B5C67D5FC8F09B5AAF7C25E1D (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public uint UIntValue { get; private set; }
		uint32_t L_0 = __this->___U3CUIntValueU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_UIntValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_UIntValue_mAA1F90058E59ED87886D5D8E29D5C7966A73A790 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public uint UIntValue { get; private set; }
		uint32_t L_0 = ___0_value;
		__this->___U3CUIntValueU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Int32 YMMJSONUtils.JObject::get_IntValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JObject_get_IntValue_mDB5384E73EDBA994CB3A4B840B201ED8B8373C64 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public int IntValue { get; private set; }
		int32_t L_0 = __this->___U3CIntValueU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_IntValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_IntValue_mC89875DBCA17A4D681CF67B487C5B0B931902FDE (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int IntValue { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CIntValueU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.UInt16 YMMJSONUtils.JObject::get_UShortValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t JObject_get_UShortValue_mEB27E08EB88B31CE82192C8F6294F1E374C1B384 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public ushort UShortValue { get; private set; }
		uint16_t L_0 = __this->___U3CUShortValueU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_UShortValue(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_UShortValue_mD1B79F3A0F374218A07E9D691E6342EBDD70CF6D (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public ushort UShortValue { get; private set; }
		uint16_t L_0 = ___0_value;
		__this->___U3CUShortValueU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Int16 YMMJSONUtils.JObject::get_ShortValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t JObject_get_ShortValue_mE133387DB20068631DA7874BD278B57C3D0E3E0A (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public short ShortValue { get; private set; }
		int16_t L_0 = __this->___U3CShortValueU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_ShortValue(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_ShortValue_mCF4F6AD2201D8838236118D877F84F8056035909 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public short ShortValue { get; private set; }
		int16_t L_0 = ___0_value;
		__this->___U3CShortValueU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Byte YMMJSONUtils.JObject::get_ByteValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t JObject_get_ByteValue_m7895737CF1888EE4A42011AA0C276953746A6A68 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public byte ByteValue { get; private set; }
		uint8_t L_0 = __this->___U3CByteValueU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_ByteValue(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_ByteValue_m747F43C9CFA9A2FBA947FB54E03E8BE24222F5CA (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public byte ByteValue { get; private set; }
		uint8_t L_0 = ___0_value;
		__this->___U3CByteValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.SByte YMMJSONUtils.JObject::get_SByteValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t JObject_get_SByteValue_m4440148C8FCE7D523D3D1CC9F85F6A3E171C7528 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public sbyte SByteValue { get; private set; }
		int8_t L_0 = __this->___U3CSByteValueU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_SByteValue(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_SByteValue_mD18B9137B1DABC6DA436CB03095622ED2F8BEEFE (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int8_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public sbyte SByteValue { get; private set; }
		int8_t L_0 = ___0_value;
		__this->___U3CSByteValueU3Ek__BackingField_14 = L_0;
		return;
	}
}
// System.Boolean YMMJSONUtils.JObject::get_IsNegative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JObject_get_IsNegative_m15AE1952AD430DAF3AFF8A432B0B293F3532D2D1 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsNegative { get; private set; }
		bool L_0 = __this->___U3CIsNegativeU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_IsNegative(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_IsNegative_m41E004D6B71423BCD1EDAC00A99BA7702D66F5FD (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsNegative { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsNegativeU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Boolean YMMJSONUtils.JObject::get_IsFractional()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JObject_get_IsFractional_m92C680D42BB5FDFF8790B4937389C67F44455470 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsFractional { get; private set; }
		bool L_0 = __this->___U3CIsFractionalU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_IsFractional(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_IsFractional_m54D026ED3DC60C618E4F0B035EADBAA2F7F85322 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsFractional { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsFractionalU3Ek__BackingField_16 = L_0;
		return;
	}
}
// YMMJSONUtils.IntegerSize YMMJSONUtils.JObject::get_MinInteger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JObject_get_MinInteger_m7F550F98B8E124D92712CF3AB5666F23B1798EF9 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public IntegerSize MinInteger { get; private set; }
		int32_t L_0 = __this->___U3CMinIntegerU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_MinInteger(YMMJSONUtils.IntegerSize)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public IntegerSize MinInteger { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CMinIntegerU3Ek__BackingField_17 = L_0;
		return;
	}
}
// YMMJSONUtils.FloatSize YMMJSONUtils.JObject::get_MinFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JObject_get_MinFloat_mAC7ECB9CAF2FBB9A77E4E72C3BEB1A0A65402E83 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public FloatSize MinFloat { get; private set; }
		int32_t L_0 = __this->___U3CMinFloatU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void YMMJSONUtils.JObject::set_MinFloat(YMMJSONUtils.FloatSize)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_set_MinFloat_m3DE4B8C688B984FE01CF1BB843252F7221E27649 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public FloatSize MinFloat { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CMinFloatU3Ek__BackingField_18 = L_0;
		return;
	}
}
// YMMJSONUtils.JObject YMMJSONUtils.JObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* JObject_get_Item_m46C334AB26DA340F719D09FCA60BCB60C9CD48CA (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m74389F941790611A0AAA7DC6737505543F4AD599_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JObject this [string key] { get { return ObjectValue [key]; } }
		Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_0;
		L_0 = JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706_inline(__this, NULL);
		String_t* L_1 = ___0_key;
		NullCheck(L_0);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_2;
		L_2 = Dictionary_2_get_Item_m74389F941790611A0AAA7DC6737505543F4AD599(L_0, L_1, Dictionary_2_get_Item_m74389F941790611A0AAA7DC6737505543F4AD599_RuntimeMethod_var);
		return L_2;
	}
}
// YMMJSONUtils.JObject YMMJSONUtils.JObject::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* JObject_get_Item_m812085ADF993D5888C5F69233195E5851C80C41A (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0B9748B12E79C2BCB14830E19F81EA1D60D21677_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JObject this [int key] { get { return ArrayValue [key]; } }
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_0;
		L_0 = JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D_inline(__this, NULL);
		int32_t L_1 = ___0_key;
		NullCheck(L_0);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_2;
		L_2 = List_1_get_Item_m0B9748B12E79C2BCB14830E19F81EA1D60D21677(L_0, L_1, List_1_get_Item_m0B9748B12E79C2BCB14830E19F81EA1D60D21677_RuntimeMethod_var);
		return L_2;
	}
}
// System.String YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JObject_op_Explicit_mF2761D04D5F3040220C8CD8FE8EA279778FE6BF9 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return obj.StringValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_0 = ___0_obj;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JObject_get_StringValue_mDA41484A8D0519352C5185A234DAFC10D4499C58_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JObject_op_Explicit_m19008AD18E1FCBF9D79A5187C8D836105D19FC04 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return obj.BooleanValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_0 = ___0_obj;
		NullCheck(L_0);
		bool L_1;
		L_1 = JObject_get_BooleanValue_m1F133DF675798A4E95D1EC81D918B139FCB22542_inline(L_0, NULL);
		return L_1;
	}
}
// System.Double YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JObject_op_Explicit_mD0762F2EA449372122CB19402F2DB1157D18F9AC (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return obj.DoubleValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_0 = ___0_obj;
		NullCheck(L_0);
		double L_1;
		L_1 = JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline(L_0, NULL);
		return L_1;
	}
}
// System.Single YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JObject_op_Explicit_mB6572C5D630607B87338E6DB8EEABF732795670E (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return obj.FloatValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_0 = ___0_obj;
		NullCheck(L_0);
		float L_1;
		L_1 = JObject_get_FloatValue_mA3FFA45A05D8D82FEBBF01968D3C5E545D003782_inline(L_0, NULL);
		return L_1;
	}
}
// System.UInt64 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t JObject_op_Explicit_mF93A0792EE3E59C3FED11CBD73C41AFEBBF1BAC1 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return obj.ULongValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_0 = ___0_obj;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(L_0, NULL);
		return L_1;
	}
}
// System.Int64 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JObject_op_Explicit_m04C1184AE5E38B7395E4179D671F91A714EC7547 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return obj.LongValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_0 = ___0_obj;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036_inline(L_0, NULL);
		return L_1;
	}
}
// System.UInt32 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t JObject_op_Explicit_m67DF5B6B2AC56ED28C6442611A2DCF580CB4F1BC (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return obj.UIntValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_0 = ___0_obj;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = JObject_get_UIntValue_m20AF155A1577719B5C67D5FC8F09B5AAF7C25E1D_inline(L_0, NULL);
		return L_1;
	}
}
// System.Int32 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JObject_op_Explicit_m127E69D1EA04F159DC6C2A4D68AC3D093BBA1C90 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return obj.IntValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_0 = ___0_obj;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = JObject_get_IntValue_mDB5384E73EDBA994CB3A4B840B201ED8B8373C64_inline(L_0, NULL);
		return L_1;
	}
}
// System.UInt16 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t JObject_op_Explicit_mF53789F21030554B4F37A3916CD572FA60947E58 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return obj.UShortValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_0 = ___0_obj;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = JObject_get_UShortValue_mEB27E08EB88B31CE82192C8F6294F1E374C1B384_inline(L_0, NULL);
		return L_1;
	}
}
// System.Int16 YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t JObject_op_Explicit_m17A1B55D3CA61D55BC191C1B3BD74E952450E410 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return obj.ShortValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_0 = ___0_obj;
		NullCheck(L_0);
		int16_t L_1;
		L_1 = JObject_get_ShortValue_mE133387DB20068631DA7874BD278B57C3D0E3E0A_inline(L_0, NULL);
		return L_1;
	}
}
// System.Byte YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t JObject_op_Explicit_mD3AA5ED928AA7F3FA7042B45588F7E2C7E8D5E87 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return obj.ByteValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_0 = ___0_obj;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = JObject_get_ByteValue_m7895737CF1888EE4A42011AA0C276953746A6A68_inline(L_0, NULL);
		return L_1;
	}
}
// System.SByte YMMJSONUtils.JObject::op_Explicit(YMMJSONUtils.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t JObject_op_Explicit_mA6F080ECD9E0E9D3F44F5142F2E574620457CAB4 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return obj.SByteValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_0 = ___0_obj;
		NullCheck(L_0);
		int8_t L_1;
		L_1 = JObject_get_SByteValue_m4440148C8FCE7D523D3D1CC9F85F6A3E171C7528_inline(L_0, NULL);
		return L_1;
	}
}
// YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* JObject_CreateString_m899839292DD024870EDE6306B4B0535A46BE241A (String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JObject (str);
		String_t* L_0 = ___0_str;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_1 = (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0*)il2cpp_codegen_object_new(JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JObject__ctor_mC3F8118DC1B1D33330FCCCFE9AAADBFBE97B8917(L_1, L_0, NULL);
		return L_1;
	}
}
// YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateBoolean(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* JObject_CreateBoolean_m6E47D6BEB4FAB46B635DC549FF1CC2CB53EE47D6 (bool ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JObject (b);
		bool L_0 = ___0_b;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_1 = (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0*)il2cpp_codegen_object_new(JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JObject__ctor_m84C13B77E472D391E1159CB615193999B13E0A27(L_1, L_0, NULL);
		return L_1;
	}
}
// YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* JObject_CreateNull_mCC9470E3886535B7C49D04C024CB17D5F9AEEB01 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JObject ();
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_0 = (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0*)il2cpp_codegen_object_new(JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JObject__ctor_m3F751D0346A8ED5B4900A1F09C9551E090423929(L_0, NULL);
		return L_0;
	}
}
// YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateNumber(System.Boolean,System.Boolean,System.Boolean,System.UInt64,System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* JObject_CreateNumber_m4AF101A3B2A17D61CBEE83BFB705F99C7EC13EBE (bool ___0_isNegative, bool ___1_isFractional, bool ___2_negativeExponent, uint64_t ___3_integerPart, uint64_t ___4_fractionalPart, int32_t ___5_fractionalPartLength, uint64_t ___6_exponent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JObject (isNegative, isFractional, negativeExponent, integerPart, fractionalPart, fractionalPartLength, exponent);
		bool L_0 = ___0_isNegative;
		bool L_1 = ___1_isFractional;
		bool L_2 = ___2_negativeExponent;
		uint64_t L_3 = ___3_integerPart;
		uint64_t L_4 = ___4_fractionalPart;
		int32_t L_5 = ___5_fractionalPartLength;
		uint64_t L_6 = ___6_exponent;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_7 = (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0*)il2cpp_codegen_object_new(JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		JObject__ctor_m7C615C831B35544505EC8D11CA992452676EF0AA(L_7, L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateArray(System.Collections.Generic.List`1<YMMJSONUtils.JObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* JObject_CreateArray_m4C5105CA517576DE31D219D5E64949AEE3F71350 (List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* ___0_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JObject (list);
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_0 = ___0_list;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_1 = (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0*)il2cpp_codegen_object_new(JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JObject__ctor_m17011C1ACA3110B22E4B691913B2BB6DCFABEA90(L_1, L_0, NULL);
		return L_1;
	}
}
// YMMJSONUtils.JObject YMMJSONUtils.JObject::CreateObject(System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* JObject_CreateObject_m65F2C167E2B3A232C87AF94E760AD3DA881C976C (Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* ___0_dict, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new JObject (dict);
		Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_0 = ___0_dict;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_1 = (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0*)il2cpp_codegen_object_new(JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JObject__ctor_m5E1C718DC194B62A2A9CE1735EDB311E330CED8D(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void YMMJSONUtils.JObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_mC3F8118DC1B1D33330FCCCFE9AAADBFBE97B8917 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	{
		// private JObject (string str)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Kind = JObjectKind.String;
		JObject_set_Kind_mD12ABA0C4D0CD58238BCD6030B2D6DC54F326A55_inline(__this, 2, NULL);
		// StringValue = str;
		String_t* L_0 = ___0_str;
		JObject_set_StringValue_m0D9956200CEC32514C50C065145D6C07A538514B_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JObject::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_m84C13B77E472D391E1159CB615193999B13E0A27 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_b, const RuntimeMethod* method) 
{
	{
		// private JObject (bool b)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Kind = JObjectKind.Boolean;
		JObject_set_Kind_mD12ABA0C4D0CD58238BCD6030B2D6DC54F326A55_inline(__this, 4, NULL);
		// BooleanValue = b;
		bool L_0 = ___0_b;
		JObject_set_BooleanValue_mCBD498B3264596F62B855602A850FEB4FA85F6FF_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_m3F751D0346A8ED5B4900A1F09C9551E090423929 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// private JObject ()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Kind = JObjectKind.Null;
		JObject_set_Kind_mD12ABA0C4D0CD58238BCD6030B2D6DC54F326A55_inline(__this, 5, NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JObject::.ctor(System.Boolean,System.Boolean,System.Boolean,System.UInt64,System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_m7C615C831B35544505EC8D11CA992452676EF0AA (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_isNegative, bool ___1_isFractional, bool ___2_negativeExponent, uint64_t ___3_integerPart, uint64_t ___4_fractionalPart, int32_t ___5_fractionalPartLength, uint64_t ___6_exponent, const RuntimeMethod* method) 
{
	{
		// private JObject (bool isNegative, bool isFractional, bool negativeExponent, ulong integerPart, ulong fractionalPart, int fractionalPartLength, ulong exponent)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Kind = JObjectKind.Number;
		JObject_set_Kind_mD12ABA0C4D0CD58238BCD6030B2D6DC54F326A55_inline(__this, 3, NULL);
		// if (!isFractional) {
		bool L_0 = ___1_isFractional;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		// MakeInteger (isNegative, integerPart);
		bool L_1 = ___0_isNegative;
		uint64_t L_2 = ___3_integerPart;
		JObject_MakeInteger_m24713DDA28ACFCFDDAAFCD8C4753AC5D151314D3(__this, L_1, L_2, NULL);
		return;
	}

IL_001a:
	{
		// MakeFloat (isNegative, negativeExponent, integerPart, fractionalPart, fractionalPartLength, exponent);
		bool L_3 = ___0_isNegative;
		bool L_4 = ___2_negativeExponent;
		uint64_t L_5 = ___3_integerPart;
		uint64_t L_6 = ___4_fractionalPart;
		int32_t L_7 = ___5_fractionalPartLength;
		uint64_t L_8 = ___6_exponent;
		JObject_MakeFloat_m1755505E51AE821225A8FED4833751165990EF09(__this, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JObject::.ctor(System.Collections.Generic.List`1<YMMJSONUtils.JObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_m17011C1ACA3110B22E4B691913B2BB6DCFABEA90 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* ___0_list, const RuntimeMethod* method) 
{
	{
		// private JObject (List<JObject> list)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Kind = JObjectKind.Array;
		JObject_set_Kind_mD12ABA0C4D0CD58238BCD6030B2D6DC54F326A55_inline(__this, 1, NULL);
		// ArrayValue = list;
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_0 = ___0_list;
		JObject_set_ArrayValue_mFB93C515E10CCD51A778A1F5E3A6E8625E957768_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,YMMJSONUtils.JObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_m5E1C718DC194B62A2A9CE1735EDB311E330CED8D (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* ___0_dict, const RuntimeMethod* method) 
{
	{
		// private JObject (Dictionary<string, JObject> dict)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Kind = JObjectKind.Object;
		JObject_set_Kind_mD12ABA0C4D0CD58238BCD6030B2D6DC54F326A55_inline(__this, 0, NULL);
		// ObjectValue = dict;
		Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_0 = ___0_dict;
		JObject_set_ObjectValue_mC1FC6DE92EC25FA91A918316481B05AC58ACCC7A_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JObject::MakeInteger(System.Boolean,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_MakeInteger_m24713DDA28ACFCFDDAAFCD8C4753AC5D151314D3 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_isNegative, uint64_t ___1_integerPart, const RuntimeMethod* method) 
{
	{
		// IsNegative = isNegative;
		bool L_0 = ___0_isNegative;
		JObject_set_IsNegative_m41E004D6B71423BCD1EDAC00A99BA7702D66F5FD_inline(__this, L_0, NULL);
		// if (!IsNegative) {
		bool L_1;
		L_1 = JObject_get_IsNegative_m15AE1952AD430DAF3AFF8A432B0B293F3532D2D1_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0147;
		}
	}
	{
		// ULongValue = integerPart;
		uint64_t L_2 = ___1_integerPart;
		JObject_set_ULongValue_m9654C958809EA25787D7D7372A902AB027E3B6FC_inline(__this, L_2, NULL);
		// MinInteger = IntegerSize.UInt64;
		JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759_inline(__this, 0, NULL);
		// if (ULongValue <= Int64.MaxValue) {
		uint64_t L_3;
		L_3 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		if ((!(((uint64_t)L_3) <= ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			goto IL_0044;
		}
	}
	{
		// LongValue = (long)ULongValue;
		uint64_t L_4;
		L_4 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		JObject_set_LongValue_m61322073008C2963061CF72D956EC1E9B7F12840_inline(__this, L_4, NULL);
		// MinInteger = IntegerSize.Int64;
		JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759_inline(__this, 1, NULL);
	}

IL_0044:
	{
		// if (ULongValue <= UInt32.MaxValue) {
		uint64_t L_5;
		L_5 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		if ((!(((uint64_t)L_5) <= ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_0062;
		}
	}
	{
		// UIntValue = (uint)ULongValue;
		uint64_t L_6;
		L_6 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		JObject_set_UIntValue_mAA1F90058E59ED87886D5D8E29D5C7966A73A790_inline(__this, ((int32_t)(uint32_t)L_6), NULL);
		// MinInteger = IntegerSize.UInt32;
		JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759_inline(__this, 2, NULL);
	}

IL_0062:
	{
		// if (ULongValue <= Int32.MaxValue) {
		uint64_t L_7;
		L_7 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		if ((!(((uint64_t)L_7) <= ((uint64_t)((int64_t)((int32_t)2147483647LL))))))
		{
			goto IL_0084;
		}
	}
	{
		// IntValue = (int)ULongValue;
		uint64_t L_8;
		L_8 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		JObject_set_IntValue_mC89875DBCA17A4D681CF67B487C5B0B931902FDE_inline(__this, ((int32_t)L_8), NULL);
		// MinInteger = IntegerSize.Int32;
		JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759_inline(__this, 3, NULL);
	}

IL_0084:
	{
		// if (ULongValue <= UInt16.MaxValue) {
		uint64_t L_9;
		L_9 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		if ((!(((uint64_t)L_9) <= ((uint64_t)((int64_t)((int32_t)65535))))))
		{
			goto IL_00a6;
		}
	}
	{
		// UShortValue = (ushort)ULongValue;
		uint64_t L_10;
		L_10 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		JObject_set_UShortValue_mD1B79F3A0F374218A07E9D691E6342EBDD70CF6D_inline(__this, (uint16_t)((int32_t)(uint16_t)L_10), NULL);
		// MinInteger = IntegerSize.UInt16;
		JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759_inline(__this, 4, NULL);
	}

IL_00a6:
	{
		// if (ULongValue <= (ulong)Int16.MaxValue) {
		uint64_t L_11;
		L_11 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		if ((!(((uint64_t)L_11) <= ((uint64_t)((int64_t)((int32_t)32767))))))
		{
			goto IL_00c8;
		}
	}
	{
		// ShortValue = (short)ULongValue;
		uint64_t L_12;
		L_12 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		JObject_set_ShortValue_mCF4F6AD2201D8838236118D877F84F8056035909_inline(__this, ((int16_t)L_12), NULL);
		// MinInteger = IntegerSize.Int16;
		JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759_inline(__this, 5, NULL);
	}

IL_00c8:
	{
		// if (ULongValue <= Byte.MaxValue) {
		uint64_t L_13;
		L_13 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		if ((!(((uint64_t)L_13) <= ((uint64_t)((int64_t)((int32_t)255))))))
		{
			goto IL_00ea;
		}
	}
	{
		// ByteValue = (byte)ULongValue;
		uint64_t L_14;
		L_14 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		JObject_set_ByteValue_m747F43C9CFA9A2FBA947FB54E03E8BE24222F5CA_inline(__this, (uint8_t)((int32_t)(uint8_t)L_14), NULL);
		// MinInteger = IntegerSize.UInt8;
		JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759_inline(__this, 6, NULL);
	}

IL_00ea:
	{
		// if (ULongValue <= (ulong)SByte.MaxValue) {
		uint64_t L_15;
		L_15 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		if ((!(((uint64_t)L_15) <= ((uint64_t)((int64_t)((int32_t)127))))))
		{
			goto IL_0109;
		}
	}
	{
		// SByteValue = (sbyte)ULongValue;
		uint64_t L_16;
		L_16 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		JObject_set_SByteValue_mD18B9137B1DABC6DA436CB03095622ED2F8BEEFE_inline(__this, ((int8_t)L_16), NULL);
		// MinInteger = IntegerSize.Int8;
		JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759_inline(__this, 7, NULL);
	}

IL_0109:
	{
		// DoubleValue = ULongValue;
		uint64_t L_17;
		L_17 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		JObject_set_DoubleValue_mBF9257A740E2CD3F8DA22A95D59BED05629F65D3_inline(__this, ((double)((double)(uint64_t)L_17)), NULL);
		// MinFloat = FloatSize.Double;
		JObject_set_MinFloat_m3DE4B8C688B984FE01CF1BB843252F7221E27649_inline(__this, 0, NULL);
		// if (DoubleValue <= Single.MaxValue) {
		double L_18;
		L_18 = JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline(__this, NULL);
		if ((!(((double)L_18) <= ((double)(3.4028234663852886E+38)))))
		{
			goto IL_01f2;
		}
	}
	{
		// FloatValue = (float)DoubleValue;
		double L_19;
		L_19 = JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline(__this, NULL);
		JObject_set_FloatValue_mFC011B853FC8F233733A79C3327BCE651E9242D0_inline(__this, ((float)L_19), NULL);
		// MinFloat = FloatSize.Single;
		JObject_set_MinFloat_m3DE4B8C688B984FE01CF1BB843252F7221E27649_inline(__this, 1, NULL);
		return;
	}

IL_0147:
	{
		// LongValue = -(long)integerPart;
		uint64_t L_20 = ___1_integerPart;
		JObject_set_LongValue_m61322073008C2963061CF72D956EC1E9B7F12840_inline(__this, ((-((int64_t)L_20))), NULL);
		// MinInteger = IntegerSize.Int64;
		JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759_inline(__this, 1, NULL);
		// if (LongValue >= Int32.MinValue) {
		int64_t L_21;
		L_21 = JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036_inline(__this, NULL);
		if ((((int64_t)L_21) < ((int64_t)((int64_t)((int32_t)-2147483648LL)))))
		{
			goto IL_0178;
		}
	}
	{
		// IntValue = (int)LongValue;
		int64_t L_22;
		L_22 = JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036_inline(__this, NULL);
		JObject_set_IntValue_mC89875DBCA17A4D681CF67B487C5B0B931902FDE_inline(__this, ((int32_t)L_22), NULL);
		// MinInteger = IntegerSize.Int32;
		JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759_inline(__this, 3, NULL);
	}

IL_0178:
	{
		// if (LongValue >= Int16.MinValue) {
		int64_t L_23;
		L_23 = JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036_inline(__this, NULL);
		if ((((int64_t)L_23) < ((int64_t)((int64_t)((int32_t)-32768)))))
		{
			goto IL_019a;
		}
	}
	{
		// ShortValue = (short)LongValue;
		int64_t L_24;
		L_24 = JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036_inline(__this, NULL);
		JObject_set_ShortValue_mCF4F6AD2201D8838236118D877F84F8056035909_inline(__this, ((int16_t)L_24), NULL);
		// MinInteger = IntegerSize.Int16;
		JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759_inline(__this, 5, NULL);
	}

IL_019a:
	{
		// if (LongValue >= SByte.MinValue) {
		int64_t L_25;
		L_25 = JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036_inline(__this, NULL);
		if ((((int64_t)L_25) < ((int64_t)((int64_t)((int32_t)-128)))))
		{
			goto IL_01b9;
		}
	}
	{
		// SByteValue = (sbyte)LongValue;
		int64_t L_26;
		L_26 = JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036_inline(__this, NULL);
		JObject_set_SByteValue_mD18B9137B1DABC6DA436CB03095622ED2F8BEEFE_inline(__this, ((int8_t)L_26), NULL);
		// MinInteger = IntegerSize.Int8;
		JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759_inline(__this, 7, NULL);
	}

IL_01b9:
	{
		// DoubleValue = LongValue;
		int64_t L_27;
		L_27 = JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036_inline(__this, NULL);
		JObject_set_DoubleValue_mBF9257A740E2CD3F8DA22A95D59BED05629F65D3_inline(__this, ((double)L_27), NULL);
		// MinFloat = FloatSize.Double;
		JObject_set_MinFloat_m3DE4B8C688B984FE01CF1BB843252F7221E27649_inline(__this, 0, NULL);
		// if (DoubleValue >= -Single.MaxValue) {
		double L_28;
		L_28 = JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline(__this, NULL);
		if ((!(((double)L_28) >= ((double)(-3.4028234663852886E+38)))))
		{
			goto IL_01f2;
		}
	}
	{
		// FloatValue = (float)DoubleValue;
		double L_29;
		L_29 = JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline(__this, NULL);
		JObject_set_FloatValue_mFC011B853FC8F233733A79C3327BCE651E9242D0_inline(__this, ((float)L_29), NULL);
		// MinFloat = FloatSize.Single;
		JObject_set_MinFloat_m3DE4B8C688B984FE01CF1BB843252F7221E27649_inline(__this, 1, NULL);
	}

IL_01f2:
	{
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JObject::MakeFloat(System.Boolean,System.Boolean,System.UInt64,System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_MakeFloat_m1755505E51AE821225A8FED4833751165990EF09 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_isNegative, bool ___1_negativeExponent, uint64_t ___2_integerPart, uint64_t ___3_fractionalPart, int32_t ___4_fractionalPartLength, uint64_t ___5_exponent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* G_B2_0 = NULL;
	JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* G_B3_1 = NULL;
	double G_B5_0 = 0.0;
	double G_B5_1 = 0.0;
	JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* G_B5_2 = NULL;
	double G_B4_0 = 0.0;
	double G_B4_1 = 0.0;
	JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	double G_B6_1 = 0.0;
	double G_B6_2 = 0.0;
	JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* G_B6_3 = NULL;
	{
		// DoubleValue = (isNegative ? -1 : 1) * ((double)integerPart + (double)fractionalPart / Math.Pow (10, fractionalPartLength)) * Math.Pow (10, (negativeExponent ? -1 : 1) * (long)exponent);
		bool L_0 = ___0_isNegative;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_0008:
	{
		uint64_t L_1 = ___2_integerPart;
		uint64_t L_2 = ___3_fractionalPart;
		int32_t L_3 = ___4_fractionalPartLength;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((10.0), ((double)L_3), NULL);
		bool L_5 = ___1_negativeExponent;
		G_B4_0 = (10.0);
		G_B4_1 = ((double)il2cpp_codegen_multiply(((double)G_B3_0), ((double)il2cpp_codegen_add(((double)((double)(uint64_t)L_1)), ((double)(((double)((double)(uint64_t)L_2))/L_4))))));
		G_B4_2 = G_B3_1;
		if (L_5)
		{
			G_B5_0 = (10.0);
			G_B5_1 = ((double)il2cpp_codegen_multiply(((double)G_B3_0), ((double)il2cpp_codegen_add(((double)((double)(uint64_t)L_1)), ((double)(((double)((double)(uint64_t)L_2))/L_4))))));
			G_B5_2 = G_B3_1;
			goto IL_0033;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0034;
	}

IL_0033:
	{
		G_B6_0 = (-1);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0034:
	{
		uint64_t L_6 = ___5_exponent;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265(G_B6_1, ((double)((int64_t)il2cpp_codegen_multiply(((int64_t)G_B6_0), (int64_t)L_6))), NULL);
		NullCheck(G_B6_3);
		JObject_set_DoubleValue_mBF9257A740E2CD3F8DA22A95D59BED05629F65D3_inline(G_B6_3, ((double)il2cpp_codegen_multiply(G_B6_2, L_7)), NULL);
		// MinFloat = FloatSize.Double;
		JObject_set_MinFloat_m3DE4B8C688B984FE01CF1BB843252F7221E27649_inline(__this, 0, NULL);
		// IsFractional = true;
		JObject_set_IsFractional_m54D026ED3DC60C618E4F0B035EADBAA2F7F85322_inline(__this, (bool)1, NULL);
		// if (DoubleValue < 0) {
		double L_8;
		L_8 = JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline(__this, NULL);
		if ((!(((double)L_8) < ((double)(0.0)))))
		{
			goto IL_0090;
		}
	}
	{
		// IsNegative = true;
		JObject_set_IsNegative_m41E004D6B71423BCD1EDAC00A99BA7702D66F5FD_inline(__this, (bool)1, NULL);
		// if (DoubleValue >= -Single.MaxValue) {
		double L_9;
		L_9 = JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline(__this, NULL);
		if ((!(((double)L_9) >= ((double)(-3.4028234663852886E+38)))))
		{
			goto IL_00b5;
		}
	}
	{
		// FloatValue = (float)DoubleValue;
		double L_10;
		L_10 = JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline(__this, NULL);
		JObject_set_FloatValue_mFC011B853FC8F233733A79C3327BCE651E9242D0_inline(__this, ((float)L_10), NULL);
		// MinFloat = FloatSize.Single;
		JObject_set_MinFloat_m3DE4B8C688B984FE01CF1BB843252F7221E27649_inline(__this, 1, NULL);
		return;
	}

IL_0090:
	{
		// } else if (DoubleValue <= Single.MaxValue) {
		double L_11;
		L_11 = JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline(__this, NULL);
		if ((!(((double)L_11) <= ((double)(3.4028234663852886E+38)))))
		{
			goto IL_00b5;
		}
	}
	{
		// FloatValue = (float)DoubleValue;
		double L_12;
		L_12 = JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline(__this, NULL);
		JObject_set_FloatValue_mFC011B853FC8F233733A79C3327BCE651E9242D0_inline(__this, ((float)L_12), NULL);
		// MinFloat = FloatSize.Single;
		JObject_set_MinFloat_m3DE4B8C688B984FE01CF1BB843252F7221E27649_inline(__this, 1, NULL);
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Boolean YMMJSONUtils.JObject::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JObject_Equals_m8D9A02DC9315E65D67684DD25A7FE20072E9ED4A (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE20FFA7104A72C1287E19145D9E3E4B79389FE77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m26DE880E0A89E5960769D6B4C69997F515719EAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE376C3153AF8A4C73E7BB28DC48B74B8D94D3E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m74389F941790611A0AAA7DC6737505543F4AD599_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4662D2D23FE7D2DDA7DD756BD6CA55AFC7323E73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1744D6B27D6DE777DEEE0ED567EE3915E72E73C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9CE8AB0D3CE22AF6EA366818537EA5E742D9B8DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m2B05E53F44FBEF7541C2A010717F8FE9EDAF68D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m3FAF8F4C8DC7CFD6A0F410D4B783A54BB0AFF06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m870ECBBD4C871BAF1CBCB15305895DCF9E54D563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0B9748B12E79C2BCB14830E19F81EA1D60D21677_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Enumerator_t9BEBDC2A32C3D729DA5F33E1F8EFEEA5DF75B4E5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	KeyValuePair_2_t142818D9698E73468317690A85E83C5250D4E338 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// if (ReferenceEquals (obj, this))
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0006:
	{
		// if (!(obj is JObject))
		RuntimeObject* L_1 = ___0_obj;
		if (((JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0*)IsInstClass((RuntimeObject*)L_1, JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var)))
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// var jobj = (JObject)obj;
		RuntimeObject* L_2 = ___0_obj;
		V_0 = ((JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0*)CastclassClass((RuntimeObject*)L_2, JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var));
		// if (jobj.Kind != Kind)
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = JObject_get_Kind_m13EF0DE2F4E15D4EE5E40A5315B6A6B495C5A58C_inline(L_3, NULL);
		int32_t L_5;
		L_5 = JObject_get_Kind_m13EF0DE2F4E15D4EE5E40A5315B6A6B495C5A58C_inline(__this, NULL);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0027;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0027:
	{
		// switch (Kind) {
		int32_t L_6;
		L_6 = JObject_get_Kind_m13EF0DE2F4E15D4EE5E40A5315B6A6B495C5A58C_inline(__this, NULL);
		V_1 = L_6;
		int32_t L_7 = V_1;
		switch (L_7)
		{
			case 0:
			{
				goto IL_00b7;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_013c;
			}
			case 3:
			{
				goto IL_00af;
			}
			case 4:
			{
				goto IL_00a0;
			}
		}
	}
	{
		goto IL_014e;
	}

IL_004d:
	{
		// if (ArrayValue.Count != jobj.ArrayValue.Count)
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_8;
		L_8 = JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m870ECBBD4C871BAF1CBCB15305895DCF9E54D563_inline(L_8, List_1_get_Count_m870ECBBD4C871BAF1CBCB15305895DCF9E54D563_RuntimeMethod_var);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_10 = V_0;
		NullCheck(L_10);
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_11;
		L_11 = JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D_inline(L_10, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m870ECBBD4C871BAF1CBCB15305895DCF9E54D563_inline(L_11, List_1_get_Count_m870ECBBD4C871BAF1CBCB15305895DCF9E54D563_RuntimeMethod_var);
		if ((((int32_t)L_9) == ((int32_t)L_12)))
		{
			goto IL_0067;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0067:
	{
		// for (var i = 0; i < ArrayValue.Count; ++i) {
		V_2 = 0;
		goto IL_0090;
	}

IL_006b:
	{
		// if (!ArrayValue [i].Equals (jobj.ArrayValue [i]))
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_13;
		L_13 = JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D_inline(__this, NULL);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_15;
		L_15 = List_1_get_Item_m0B9748B12E79C2BCB14830E19F81EA1D60D21677(L_13, L_14, List_1_get_Item_m0B9748B12E79C2BCB14830E19F81EA1D60D21677_RuntimeMethod_var);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_16 = V_0;
		NullCheck(L_16);
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_17;
		L_17 = JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D_inline(L_16, NULL);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_19;
		L_19 = List_1_get_Item_m0B9748B12E79C2BCB14830E19F81EA1D60D21677(L_17, L_18, List_1_get_Item_m0B9748B12E79C2BCB14830E19F81EA1D60D21677_RuntimeMethod_var);
		NullCheck(L_15);
		bool L_20;
		L_20 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_15, L_19);
		if (L_20)
		{
			goto IL_008c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_008c:
	{
		// for (var i = 0; i < ArrayValue.Count; ++i) {
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0090:
	{
		// for (var i = 0; i < ArrayValue.Count; ++i) {
		int32_t L_22 = V_2;
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_23;
		L_23 = JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D_inline(__this, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m870ECBBD4C871BAF1CBCB15305895DCF9E54D563_inline(L_23, List_1_get_Count_m870ECBBD4C871BAF1CBCB15305895DCF9E54D563_RuntimeMethod_var);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_006b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00a0:
	{
		// return BooleanValue == jobj.BooleanValue;
		bool L_25;
		L_25 = JObject_get_BooleanValue_m1F133DF675798A4E95D1EC81D918B139FCB22542_inline(__this, NULL);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_26 = V_0;
		NullCheck(L_26);
		bool L_27;
		L_27 = JObject_get_BooleanValue_m1F133DF675798A4E95D1EC81D918B139FCB22542_inline(L_26, NULL);
		return (bool)((((int32_t)L_25) == ((int32_t)L_27))? 1 : 0);
	}

IL_00af:
	{
		// return EqualNumber (this, jobj);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_28 = V_0;
		bool L_29;
		L_29 = JObject_EqualNumber_m13C1DA0ED16D8036F4F1077AC6D615DE43EA4292(__this, L_28, NULL);
		return L_29;
	}

IL_00b7:
	{
		// if (ObjectValue.Count != jobj.ObjectValue.Count)
		Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_30;
		L_30 = JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706_inline(__this, NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Dictionary_2_get_Count_mE376C3153AF8A4C73E7BB28DC48B74B8D94D3E11(L_30, Dictionary_2_get_Count_mE376C3153AF8A4C73E7BB28DC48B74B8D94D3E11_RuntimeMethod_var);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_32 = V_0;
		NullCheck(L_32);
		Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_33;
		L_33 = JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706_inline(L_32, NULL);
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Dictionary_2_get_Count_mE376C3153AF8A4C73E7BB28DC48B74B8D94D3E11(L_33, Dictionary_2_get_Count_mE376C3153AF8A4C73E7BB28DC48B74B8D94D3E11_RuntimeMethod_var);
		if ((((int32_t)L_31) == ((int32_t)L_34)))
		{
			goto IL_00d1;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00d1:
	{
		// foreach (var pair in ObjectValue) {
		Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_35;
		L_35 = JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706_inline(__this, NULL);
		NullCheck(L_35);
		Enumerator_t9BEBDC2A32C3D729DA5F33E1F8EFEEA5DF75B4E5 L_36;
		L_36 = Dictionary_2_GetEnumerator_m26DE880E0A89E5960769D6B4C69997F515719EAE(L_35, Dictionary_2_GetEnumerator_m26DE880E0A89E5960769D6B4C69997F515719EAE_RuntimeMethod_var);
		V_3 = L_36;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4662D2D23FE7D2DDA7DD756BD6CA55AFC7323E73((&V_3), Enumerator_Dispose_m4662D2D23FE7D2DDA7DD756BD6CA55AFC7323E73_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0121_1;
			}

IL_00df_1:
			{
				// foreach (var pair in ObjectValue) {
				KeyValuePair_2_t142818D9698E73468317690A85E83C5250D4E338 L_37;
				L_37 = Enumerator_get_Current_m9CE8AB0D3CE22AF6EA366818537EA5E742D9B8DE_inline((&V_3), Enumerator_get_Current_m9CE8AB0D3CE22AF6EA366818537EA5E742D9B8DE_RuntimeMethod_var);
				V_4 = L_37;
				// if (!jobj.ObjectValue.ContainsKey (pair.Key) ||
				//     !pair.Value.Equals (jobj.ObjectValue [pair.Key]))
				JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_38 = V_0;
				NullCheck(L_38);
				Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_39;
				L_39 = JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706_inline(L_38, NULL);
				String_t* L_40;
				L_40 = KeyValuePair_2_get_Key_m2B05E53F44FBEF7541C2A010717F8FE9EDAF68D2_inline((&V_4), KeyValuePair_2_get_Key_m2B05E53F44FBEF7541C2A010717F8FE9EDAF68D2_RuntimeMethod_var);
				NullCheck(L_39);
				bool L_41;
				L_41 = Dictionary_2_ContainsKey_mE20FFA7104A72C1287E19145D9E3E4B79389FE77(L_39, L_40, Dictionary_2_ContainsKey_mE20FFA7104A72C1287E19145D9E3E4B79389FE77_RuntimeMethod_var);
				if (!L_41)
				{
					goto IL_011c_1;
				}
			}
			{
				JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_42;
				L_42 = KeyValuePair_2_get_Value_m3FAF8F4C8DC7CFD6A0F410D4B783A54BB0AFF06E_inline((&V_4), KeyValuePair_2_get_Value_m3FAF8F4C8DC7CFD6A0F410D4B783A54BB0AFF06E_RuntimeMethod_var);
				JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_43 = V_0;
				NullCheck(L_43);
				Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_44;
				L_44 = JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706_inline(L_43, NULL);
				String_t* L_45;
				L_45 = KeyValuePair_2_get_Key_m2B05E53F44FBEF7541C2A010717F8FE9EDAF68D2_inline((&V_4), KeyValuePair_2_get_Key_m2B05E53F44FBEF7541C2A010717F8FE9EDAF68D2_RuntimeMethod_var);
				NullCheck(L_44);
				JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_46;
				L_46 = Dictionary_2_get_Item_m74389F941790611A0AAA7DC6737505543F4AD599(L_44, L_45, Dictionary_2_get_Item_m74389F941790611A0AAA7DC6737505543F4AD599_RuntimeMethod_var);
				NullCheck(L_42);
				bool L_47;
				L_47 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_42, L_46);
				if (L_47)
				{
					goto IL_0121_1;
				}
			}

IL_011c_1:
			{
				// return false;
				V_5 = (bool)0;
				goto IL_0150;
			}

IL_0121_1:
			{
				// foreach (var pair in ObjectValue) {
				bool L_48;
				L_48 = Enumerator_MoveNext_m1744D6B27D6DE777DEEE0ED567EE3915E72E73C1((&V_3), Enumerator_MoveNext_m1744D6B27D6DE777DEEE0ED567EE3915E72E73C1_RuntimeMethod_var);
				if (L_48)
				{
					goto IL_00df_1;
				}
			}
			{
				goto IL_013a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013a:
	{
		// return true;
		return (bool)1;
	}

IL_013c:
	{
		// return StringValue == jobj.StringValue;
		String_t* L_49;
		L_49 = JObject_get_StringValue_mDA41484A8D0519352C5185A234DAFC10D4499C58_inline(__this, NULL);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_50 = V_0;
		NullCheck(L_50);
		String_t* L_51;
		L_51 = JObject_get_StringValue_mDA41484A8D0519352C5185A234DAFC10D4499C58_inline(L_50, NULL);
		bool L_52;
		L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, L_51, NULL);
		return L_52;
	}

IL_014e:
	{
		// return true;
		return (bool)1;
	}

IL_0150:
	{
		// }
		bool L_53 = V_5;
		return L_53;
	}
}
// System.Int32 YMMJSONUtils.JObject::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JObject_GetHashCode_m91C908795F81B70ACF230C7E128CE8A9D8139423 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	double V_2 = 0.0;
	int64_t V_3 = 0;
	uint64_t V_4 = 0;
	{
		// switch (Kind) {
		int32_t L_0;
		L_0 = JObject_get_Kind_m13EF0DE2F4E15D4EE5E40A5315B6A6B495C5A58C_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0050;
			}
			case 3:
			{
				goto IL_005c;
			}
			case 4:
			{
				goto IL_0033;
			}
			case 5:
			{
				goto IL_0042;
			}
		}
	}
	{
		goto IL_009a;
	}

IL_0027:
	{
		// return ArrayValue.GetHashCode ();
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_2;
		L_2 = JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}

IL_0033:
	{
		// return BooleanValue.GetHashCode ();
		bool L_4;
		L_4 = JObject_get_BooleanValue_m1F133DF675798A4E95D1EC81D918B139FCB22542_inline(__this, NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		return L_5;
	}

IL_0042:
	{
		// return 0;
		return 0;
	}

IL_0044:
	{
		// return ObjectValue.GetHashCode ();
		Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_6;
		L_6 = JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		return L_7;
	}

IL_0050:
	{
		// return StringValue.GetHashCode ();
		String_t* L_8;
		L_8 = JObject_get_StringValue_mDA41484A8D0519352C5185A234DAFC10D4499C58_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		return L_9;
	}

IL_005c:
	{
		// if (IsFractional)
		bool L_10;
		L_10 = JObject_get_IsFractional_m92C680D42BB5FDFF8790B4937389C67F44455470_inline(__this, NULL);
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		// return DoubleValue.GetHashCode ();
		double L_11;
		L_11 = JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline(__this, NULL);
		V_2 = L_11;
		int32_t L_12;
		L_12 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_2), NULL);
		return L_12;
	}

IL_0073:
	{
		// if (IsNegative)
		bool L_13;
		L_13 = JObject_get_IsNegative_m15AE1952AD430DAF3AFF8A432B0B293F3532D2D1_inline(__this, NULL);
		if (!L_13)
		{
			goto IL_008a;
		}
	}
	{
		// return LongValue.GetHashCode ();
		int64_t L_14;
		L_14 = JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036_inline(__this, NULL);
		V_3 = L_14;
		int32_t L_15;
		L_15 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_3), NULL);
		return L_15;
	}

IL_008a:
	{
		// return ULongValue.GetHashCode ();
		uint64_t L_16;
		L_16 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(__this, NULL);
		V_4 = L_16;
		int32_t L_17;
		L_17 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_4), NULL);
		return L_17;
	}

IL_009a:
	{
		// return 0;
		return 0;
	}
}
// System.Boolean YMMJSONUtils.JObject::EqualNumber(YMMJSONUtils.JObject,YMMJSONUtils.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JObject_EqualNumber_m13C1DA0ED16D8036F4F1077AC6D615DE43EA4292 (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___0_o1, JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* ___1_o2, const RuntimeMethod* method) 
{
	{
		// if (o1.MinFloat != o2.MinFloat ||
		//     o1.MinInteger != o2.MinInteger ||
		//     o1.IsNegative != o2.IsNegative ||
		//     o1.IsFractional != o2.IsFractional)
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_0 = ___0_o1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = JObject_get_MinFloat_mAC7ECB9CAF2FBB9A77E4E72C3BEB1A0A65402E83_inline(L_0, NULL);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_2 = ___1_o2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = JObject_get_MinFloat_mAC7ECB9CAF2FBB9A77E4E72C3BEB1A0A65402E83_inline(L_2, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0038;
		}
	}
	{
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_4 = ___0_o1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = JObject_get_MinInteger_m7F550F98B8E124D92712CF3AB5666F23B1798EF9_inline(L_4, NULL);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_6 = ___1_o2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = JObject_get_MinInteger_m7F550F98B8E124D92712CF3AB5666F23B1798EF9_inline(L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0038;
		}
	}
	{
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_8 = ___0_o1;
		NullCheck(L_8);
		bool L_9;
		L_9 = JObject_get_IsNegative_m15AE1952AD430DAF3AFF8A432B0B293F3532D2D1_inline(L_8, NULL);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_10 = ___1_o2;
		NullCheck(L_10);
		bool L_11;
		L_11 = JObject_get_IsNegative_m15AE1952AD430DAF3AFF8A432B0B293F3532D2D1_inline(L_10, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_0038;
		}
	}
	{
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_12 = ___0_o1;
		NullCheck(L_12);
		bool L_13;
		L_13 = JObject_get_IsFractional_m92C680D42BB5FDFF8790B4937389C67F44455470_inline(L_12, NULL);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_14 = ___1_o2;
		NullCheck(L_14);
		bool L_15;
		L_15 = JObject_get_IsFractional_m92C680D42BB5FDFF8790B4937389C67F44455470_inline(L_14, NULL);
		if ((((int32_t)L_13) == ((int32_t)L_15)))
		{
			goto IL_003a;
		}
	}

IL_0038:
	{
		// return false;
		return (bool)0;
	}

IL_003a:
	{
		// if (o1.IsFractional) {
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_16 = ___0_o1;
		NullCheck(L_16);
		bool L_17;
		L_17 = JObject_get_IsFractional_m92C680D42BB5FDFF8790B4937389C67F44455470_inline(L_16, NULL);
		if (!L_17)
		{
			goto IL_0051;
		}
	}
	{
		// return o1.DoubleValue == o2.DoubleValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_18 = ___0_o1;
		NullCheck(L_18);
		double L_19;
		L_19 = JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline(L_18, NULL);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_20 = ___1_o2;
		NullCheck(L_20);
		double L_21;
		L_21 = JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline(L_20, NULL);
		return (bool)((((double)L_19) == ((double)L_21))? 1 : 0);
	}

IL_0051:
	{
		// if (o1.IsNegative) {
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_22 = ___0_o1;
		NullCheck(L_22);
		bool L_23;
		L_23 = JObject_get_IsNegative_m15AE1952AD430DAF3AFF8A432B0B293F3532D2D1_inline(L_22, NULL);
		if (!L_23)
		{
			goto IL_0068;
		}
	}
	{
		// return o1.LongValue == o2.LongValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_24 = ___0_o1;
		NullCheck(L_24);
		int64_t L_25;
		L_25 = JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036_inline(L_24, NULL);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_26 = ___1_o2;
		NullCheck(L_26);
		int64_t L_27;
		L_27 = JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036_inline(L_26, NULL);
		return (bool)((((int64_t)L_25) == ((int64_t)L_27))? 1 : 0);
	}

IL_0068:
	{
		// return o1.ULongValue == o2.ULongValue;
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_28 = ___0_o1;
		NullCheck(L_28);
		uint64_t L_29;
		L_29 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(L_28, NULL);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_30 = ___1_o2;
		NullCheck(L_30);
		uint64_t L_31;
		L_31 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(L_30, NULL);
		return (bool)((((int64_t)L_29) == ((int64_t)L_31))? 1 : 0);
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
// System.String YMMJSONUtils.JSONEncoder::Encode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JSONEncoder_Encode_m7FB8D291C8AEE9066494A239925CB458A68F0E50 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var encoder = new JSONEncoder ();
		JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* L_0 = (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87*)il2cpp_codegen_object_new(JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JSONEncoder__ctor_m7996D27E65BA8DEA8981B519CDA71CF7B1068A04(L_0, NULL);
		// encoder.EncodeObject (obj);
		JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* L_1 = L_0;
		RuntimeObject* L_2 = ___0_obj;
		NullCheck(L_1);
		JSONEncoder_EncodeObject_mBB8F7517EAC9ED600D19F919785FAF0F826C1EB2(L_1, L_2, NULL);
		// return encoder._buffer.ToString ();
		NullCheck(L_1);
		StringBuilder_t* L_3 = L_1->____buffer_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void YMMJSONUtils.JSONEncoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder__ctor_m7996D27E65BA8DEA8981B519CDA71CF7B1068A04 (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly StringBuilder _buffer = new StringBuilder ();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->____buffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buffer_0), (void*)L_0);
		// private JSONEncoder ()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JSONEncoder::EncodeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeObject_mBB8F7517EAC9ED600D19F919785FAF0F826C1EB2 (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (obj == null) {
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// EncodeNull ();
		JSONEncoder_EncodeNull_mB74CD302064B5C6DB11221CCBE016A9EB35222E0(__this, NULL);
		return;
	}

IL_000a:
	{
		// } else if (obj is string) {
		RuntimeObject* L_1 = ___0_obj;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		// EncodeString ((string)obj);
		RuntimeObject* L_2 = ___0_obj;
		JSONEncoder_EncodeString_mB8D4CFF3A1E0A4AC019B31A49092B33A2772A6B1(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var)), NULL);
		return;
	}

IL_001f:
	{
		// } else if (obj is float) {
		RuntimeObject* L_3 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_3, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		// EncodeFloat ((float)obj);
		RuntimeObject* L_4 = ___0_obj;
		JSONEncoder_EncodeFloat_m211558D4E8A28E3E3A66FD4D93A6FEF7DCA78F46(__this, ((*(float*)((float*)(float*)UnBox(L_4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_0034:
	{
		// } else if (obj is double) {
		RuntimeObject* L_5 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_0049;
		}
	}
	{
		// EncodeDouble ((double)obj);
		RuntimeObject* L_6 = ___0_obj;
		JSONEncoder_EncodeDouble_m9ADE6CBC4900C98ECE4BC350F85E790916060DCA(__this, ((*(double*)((double*)(double*)UnBox(L_6, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_0049:
	{
		// } else if (obj is int) {
		RuntimeObject* L_7 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_005f;
		}
	}
	{
		// EncodeLong ((int)obj);
		RuntimeObject* L_8 = ___0_obj;
		JSONEncoder_EncodeLong_m2EBDA912616EB3C187E4DCE2AB578E1BD4A59584(__this, ((int64_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_8, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))), NULL);
		return;
	}

IL_005f:
	{
		// } else if (obj is uint) {
		RuntimeObject* L_9 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))
		{
			goto IL_0075;
		}
	}
	{
		// EncodeULong ((uint)obj);
		RuntimeObject* L_10 = ___0_obj;
		JSONEncoder_EncodeULong_mD567573B1B7D9F4B49371D2B529706F0F010E16D(__this, ((int64_t)(uint64_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_10, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))), NULL);
		return;
	}

IL_0075:
	{
		// } else if (obj is long) {
		RuntimeObject* L_11 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_008a;
		}
	}
	{
		// EncodeLong ((long)obj);
		RuntimeObject* L_12 = ___0_obj;
		JSONEncoder_EncodeLong_m2EBDA912616EB3C187E4DCE2AB578E1BD4A59584(__this, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_12, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_008a:
	{
		// } else if (obj is ulong) {
		RuntimeObject* L_13 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_13, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))
		{
			goto IL_009f;
		}
	}
	{
		// EncodeULong ((ulong)obj);
		RuntimeObject* L_14 = ___0_obj;
		JSONEncoder_EncodeULong_mD567573B1B7D9F4B49371D2B529706F0F010E16D(__this, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_14, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_009f:
	{
		// } else if (obj is short) {
		RuntimeObject* L_15 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_15, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_00b5;
		}
	}
	{
		// EncodeLong ((short)obj);
		RuntimeObject* L_16 = ___0_obj;
		JSONEncoder_EncodeLong_m2EBDA912616EB3C187E4DCE2AB578E1BD4A59584(__this, ((int64_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_16, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))), NULL);
		return;
	}

IL_00b5:
	{
		// } else if (obj is ushort) {
		RuntimeObject* L_17 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_17, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))
		{
			goto IL_00cb;
		}
	}
	{
		// EncodeULong ((ushort)obj);
		RuntimeObject* L_18 = ___0_obj;
		JSONEncoder_EncodeULong_mD567573B1B7D9F4B49371D2B529706F0F010E16D(__this, ((int64_t)(uint64_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_18, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))), NULL);
		return;
	}

IL_00cb:
	{
		// } else if (obj is byte) {
		RuntimeObject* L_19 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_19, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))
		{
			goto IL_00e1;
		}
	}
	{
		// EncodeULong ((byte)obj);
		RuntimeObject* L_20 = ___0_obj;
		JSONEncoder_EncodeULong_mD567573B1B7D9F4B49371D2B529706F0F010E16D(__this, ((int64_t)(uint64_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_20, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))), NULL);
		return;
	}

IL_00e1:
	{
		// } else if (obj is bool) {
		RuntimeObject* L_21 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_21, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_00f6;
		}
	}
	{
		// EncodeBool ((bool)obj);
		RuntimeObject* L_22 = ___0_obj;
		JSONEncoder_EncodeBool_m833DAD684ED4AA287A0AE5AB6729C8BFF5318AF8(__this, ((*(bool*)((bool*)(bool*)UnBox(L_22, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))), NULL);
		return;
	}

IL_00f6:
	{
		// } else if (obj is IDictionary) {
		RuntimeObject* L_23 = ___0_obj;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)))
		{
			goto IL_010b;
		}
	}
	{
		// EncodeDictionary ((IDictionary)obj);
		RuntimeObject* L_24 = ___0_obj;
		JSONEncoder_EncodeDictionary_m117B097DCEB57B3E91C31A187787DF32ACBB110D(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_24, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), NULL);
		return;
	}

IL_010b:
	{
		// } else if (obj is IEnumerable) {
		RuntimeObject* L_25 = ___0_obj;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_25, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)))
		{
			goto IL_0120;
		}
	}
	{
		// EncodeEnumerable ((IEnumerable)obj);
		RuntimeObject* L_26 = ___0_obj;
		JSONEncoder_EncodeEnumerable_mBBB301D592E22D694ACBE3FF317125DB0970814E(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_26, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)), NULL);
		return;
	}

IL_0120:
	{
		// } else if (obj is Enum) {
		RuntimeObject* L_27 = ___0_obj;
		if (!((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)IsInstClass((RuntimeObject*)L_27, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var)))
		{
			goto IL_0140;
		}
	}
	{
		// EncodeObject (Convert.ChangeType (obj, Enum.GetUnderlyingType (obj.GetType ())));
		RuntimeObject* L_28 = ___0_obj;
		RuntimeObject* L_29 = ___0_obj;
		NullCheck(L_29);
		Type_t* L_30;
		L_30 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_31;
		L_31 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_30, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_32;
		L_32 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_28, L_31, NULL);
		JSONEncoder_EncodeObject_mBB8F7517EAC9ED600D19F919785FAF0F826C1EB2(__this, L_32, NULL);
		return;
	}

IL_0140:
	{
		// } else if (obj is JObject) {
		RuntimeObject* L_33 = ___0_obj;
		if (!((JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0*)IsInstClass((RuntimeObject*)L_33, JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var)))
		{
			goto IL_020b;
		}
	}
	{
		// var jobj = (JObject)obj;
		RuntimeObject* L_34 = ___0_obj;
		V_0 = ((JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0*)CastclassClass((RuntimeObject*)L_34, JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0_il2cpp_TypeInfo_var));
		// switch (jobj.Kind) {
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = JObject_get_Kind_m13EF0DE2F4E15D4EE5E40A5315B6A6B495C5A58C_inline(L_35, NULL);
		V_1 = L_36;
		int32_t L_37 = V_1;
		switch (L_37)
		{
			case 0:
			{
				goto IL_01d1;
			}
			case 1:
			{
				goto IL_0179;
			}
			case 2:
			{
				goto IL_01de;
			}
			case 3:
			{
				goto IL_019a;
			}
			case 4:
			{
				goto IL_0186;
			}
			case 5:
			{
				goto IL_0193;
			}
		}
	}
	{
		goto IL_01eb;
	}

IL_0179:
	{
		// EncodeEnumerable (jobj.ArrayValue);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_38 = V_0;
		NullCheck(L_38);
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_39;
		L_39 = JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D_inline(L_38, NULL);
		JSONEncoder_EncodeEnumerable_mBBB301D592E22D694ACBE3FF317125DB0970814E(__this, L_39, NULL);
		// break;
		return;
	}

IL_0186:
	{
		// EncodeBool (jobj.BooleanValue);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_40 = V_0;
		NullCheck(L_40);
		bool L_41;
		L_41 = JObject_get_BooleanValue_m1F133DF675798A4E95D1EC81D918B139FCB22542_inline(L_40, NULL);
		JSONEncoder_EncodeBool_m833DAD684ED4AA287A0AE5AB6729C8BFF5318AF8(__this, L_41, NULL);
		// break;
		return;
	}

IL_0193:
	{
		// EncodeNull ();
		JSONEncoder_EncodeNull_mB74CD302064B5C6DB11221CCBE016A9EB35222E0(__this, NULL);
		// break;
		return;
	}

IL_019a:
	{
		// if (jobj.IsFractional) {
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_42 = V_0;
		NullCheck(L_42);
		bool L_43;
		L_43 = JObject_get_IsFractional_m92C680D42BB5FDFF8790B4937389C67F44455470_inline(L_42, NULL);
		if (!L_43)
		{
			goto IL_01af;
		}
	}
	{
		// EncodeDouble (jobj.DoubleValue);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_44 = V_0;
		NullCheck(L_44);
		double L_45;
		L_45 = JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline(L_44, NULL);
		JSONEncoder_EncodeDouble_m9ADE6CBC4900C98ECE4BC350F85E790916060DCA(__this, L_45, NULL);
		return;
	}

IL_01af:
	{
		// } else if (jobj.IsNegative) {
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_46 = V_0;
		NullCheck(L_46);
		bool L_47;
		L_47 = JObject_get_IsNegative_m15AE1952AD430DAF3AFF8A432B0B293F3532D2D1_inline(L_46, NULL);
		if (!L_47)
		{
			goto IL_01c4;
		}
	}
	{
		// EncodeLong (jobj.LongValue);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_48 = V_0;
		NullCheck(L_48);
		int64_t L_49;
		L_49 = JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036_inline(L_48, NULL);
		JSONEncoder_EncodeLong_m2EBDA912616EB3C187E4DCE2AB578E1BD4A59584(__this, L_49, NULL);
		return;
	}

IL_01c4:
	{
		// EncodeULong (jobj.ULongValue);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_50 = V_0;
		NullCheck(L_50);
		uint64_t L_51;
		L_51 = JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline(L_50, NULL);
		JSONEncoder_EncodeULong_mD567573B1B7D9F4B49371D2B529706F0F010E16D(__this, L_51, NULL);
		// break;
		return;
	}

IL_01d1:
	{
		// EncodeDictionary (jobj.ObjectValue);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_52 = V_0;
		NullCheck(L_52);
		Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_53;
		L_53 = JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706_inline(L_52, NULL);
		JSONEncoder_EncodeDictionary_m117B097DCEB57B3E91C31A187787DF32ACBB110D(__this, L_53, NULL);
		// break;
		return;
	}

IL_01de:
	{
		// EncodeString (jobj.StringValue);
		JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* L_54 = V_0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = JObject_get_StringValue_mDA41484A8D0519352C5185A234DAFC10D4499C58_inline(L_54, NULL);
		JSONEncoder_EncodeString_mB8D4CFF3A1E0A4AC019B31A49092B33A2772A6B1(__this, L_55, NULL);
		// break;
		return;
	}

IL_01eb:
	{
		// throw new ArgumentException ("Can't serialize object of type " + obj.GetType ().Name, "obj");
		RuntimeObject* L_56 = ___0_obj;
		NullCheck(L_56);
		Type_t* L_57;
		L_57 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_56, NULL);
		NullCheck(L_57);
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_57);
		String_t* L_59;
		L_59 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral232FD38C46B54EF04D83C7ECFDDB14B35740E3D1)), L_58, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_60 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_60);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_60, L_59, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONEncoder_EncodeObject_mBB8F7517EAC9ED600D19F919785FAF0F826C1EB2_RuntimeMethod_var)));
	}

IL_020b:
	{
		// throw new ArgumentException ("Can't serialize object of type " + obj.GetType ().Name, "obj");
		RuntimeObject* L_61 = ___0_obj;
		NullCheck(L_61);
		Type_t* L_62;
		L_62 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_61, NULL);
		NullCheck(L_62);
		String_t* L_63;
		L_63 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_62);
		String_t* L_64;
		L_64 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral232FD38C46B54EF04D83C7ECFDDB14B35740E3D1)), L_63, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_65 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_65);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_65, L_64, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral690BF02630AC0BD6AA6BD08D2C36A28E1FC54F3E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONEncoder_EncodeObject_mBB8F7517EAC9ED600D19F919785FAF0F826C1EB2_RuntimeMethod_var)));
	}
}
// System.Void YMMJSONUtils.JSONEncoder::EncodeNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeNull_mB74CD302064B5C6DB11221CCBE016A9EB35222E0 (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _buffer.Append ("null");
		StringBuilder_t* L_0 = __this->____buffer_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JSONEncoder::EncodeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeString_mB8D4CFF3A1E0A4AC019B31A49092B33A2772A6B1 (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD910C8C31EEBBC6D0255B0A6C1015C336766F7BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9D3D87AA358305E6E80650D2BA23EDF5FA0BC4BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		// _buffer.Append ('"');
		StringBuilder_t* L_0 = __this->____buffer_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)34), NULL);
		// foreach (var c in str) {
		String_t* L_2 = ___0_str;
		V_0 = L_2;
		V_1 = 0;
		goto IL_0092;
	}

IL_0014:
	{
		// foreach (var c in str) {
		String_t* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		V_2 = L_5;
		// if (EscapeChars.ContainsKey (c)) {
		il2cpp_codegen_runtime_class_init_inline(JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_il2cpp_TypeInfo_var);
		Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* L_6 = ((JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_StaticFields*)il2cpp_codegen_static_fields_for(JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_il2cpp_TypeInfo_var))->___EscapeChars_1;
		Il2CppChar L_7 = V_2;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_mD910C8C31EEBBC6D0255B0A6C1015C336766F7BF(L_6, L_7, Dictionary_2_ContainsKey_mD910C8C31EEBBC6D0255B0A6C1015C336766F7BF_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		// _buffer.Append (EscapeChars [c]);
		StringBuilder_t* L_9 = __this->____buffer_0;
		il2cpp_codegen_runtime_class_init_inline(JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_il2cpp_TypeInfo_var);
		Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* L_10 = ((JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_StaticFields*)il2cpp_codegen_static_fields_for(JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_il2cpp_TypeInfo_var))->___EscapeChars_1;
		Il2CppChar L_11 = V_2;
		NullCheck(L_10);
		String_t* L_12;
		L_12 = Dictionary_2_get_Item_m9D3D87AA358305E6E80650D2BA23EDF5FA0BC4BC(L_10, L_11, Dictionary_2_get_Item_m9D3D87AA358305E6E80650D2BA23EDF5FA0BC4BC_RuntimeMethod_var);
		NullCheck(L_9);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, L_12, NULL);
		goto IL_008e;
	}

IL_0042:
	{
		// if (c > 0x80 || c < 0x20) {
		Il2CppChar L_14 = V_2;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)128))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_15 = V_2;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0081;
		}
	}

IL_004f:
	{
		// _buffer.Append ("\\u" + Convert.ToString (c, 16)
		//                .ToUpper (CultureInfo.InvariantCulture)
		//                .PadLeft (4, '0'));
		StringBuilder_t* L_16 = __this->____buffer_0;
		Il2CppChar L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35(L_17, ((int32_t)16), NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_19;
		L_19 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		NullCheck(L_18);
		String_t* L_20;
		L_20 = String_ToUpper_mFC5C17C8BFF52540CC7A73E36DFC9617281325D1(L_18, L_19, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_20, 4, ((int32_t)48), NULL);
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, L_21, NULL);
		NullCheck(L_16);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, L_22, NULL);
		goto IL_008e;
	}

IL_0081:
	{
		// _buffer.Append (c);
		StringBuilder_t* L_24 = __this->____buffer_0;
		Il2CppChar L_25 = V_2;
		NullCheck(L_24);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_24, L_25, NULL);
	}

IL_008e:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0092:
	{
		// foreach (var c in str) {
		int32_t L_28 = V_1;
		String_t* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_29, NULL);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0014;
		}
	}
	{
		// _buffer.Append ('"');
		StringBuilder_t* L_31 = __this->____buffer_0;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_31, ((int32_t)34), NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JSONEncoder::EncodeFloat(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeFloat_m211558D4E8A28E3E3A66FD4D93A6FEF7DCA78F46 (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _buffer.Append (f.ToString (CultureInfo.InvariantCulture));
		StringBuilder_t* L_0 = __this->____buffer_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_2;
		L_2 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&___0_f), L_1, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JSONEncoder::EncodeDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeDouble_m9ADE6CBC4900C98ECE4BC350F85E790916060DCA (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, double ___0_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _buffer.Append (d.ToString (CultureInfo.InvariantCulture));
		StringBuilder_t* L_0 = __this->____buffer_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_2;
		L_2 = Double_ToString_m4318830D9F771852FDCF21C14CF9E8ABC7E77357((&___0_d), L_1, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JSONEncoder::EncodeLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeLong_m2EBDA912616EB3C187E4DCE2AB578E1BD4A59584 (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, int64_t ___0_l, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _buffer.Append (l.ToString (CultureInfo.InvariantCulture));
		StringBuilder_t* L_0 = __this->____buffer_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_2;
		L_2 = Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD((&___0_l), L_1, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JSONEncoder::EncodeULong(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeULong_mD567573B1B7D9F4B49371D2B529706F0F010E16D (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, uint64_t ___0_l, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _buffer.Append (l.ToString (CultureInfo.InvariantCulture));
		StringBuilder_t* L_0 = __this->____buffer_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_2;
		L_2 = UInt64_ToString_mCDDACF05D6B5B3ECB10B1FEEE58ED3407973E7A7((&___0_l), L_1, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JSONEncoder::EncodeBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeBool_m833DAD684ED4AA287A0AE5AB6729C8BFF5318AF8 (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, bool ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* G_B2_0 = NULL;
	StringBuilder_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t* G_B3_1 = NULL;
	{
		// _buffer.Append (b ? "true" : "false");
		StringBuilder_t* L_0 = __this->____buffer_0;
		bool L_1 = ___0_b;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0010;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JSONEncoder::EncodeDictionary(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeDictionary_m117B097DCEB57B3E91C31A187787DF32ACBB110D (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, RuntimeObject* ___0_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	{
		// var isFirst = true;
		V_0 = (bool)1;
		// _buffer.Append ('{');
		StringBuilder_t* L_0 = __this->____buffer_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)123), NULL);
		// foreach (DictionaryEntry pair in d) {
		RuntimeObject* L_2 = ___0_d;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_009d;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_009d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0083_1;
			}

IL_0019_1:
			{
				// foreach (DictionaryEntry pair in d) {
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_8, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				// if (!(pair.Key is string)) {
				RuntimeObject* L_9;
				L_9 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_2), NULL);
				if (((String_t*)IsInstSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)))
				{
					goto IL_0043_1;
				}
			}
			{
				// throw new ArgumentException ("Dictionary keys must be strings", "d");
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				NullCheck(L_10);
				ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral49459F40691C75A3DA9CEC5653DF0A89223D96CB)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JSONEncoder_EncodeDictionary_m117B097DCEB57B3E91C31A187787DF32ACBB110D_RuntimeMethod_var)));
			}

IL_0043_1:
			{
				// if (!isFirst)
				bool L_11 = V_0;
				if (L_11)
				{
					goto IL_0054_1;
				}
			}
			{
				// _buffer.Append (',');
				StringBuilder_t* L_12 = __this->____buffer_0;
				NullCheck(L_12);
				StringBuilder_t* L_13;
				L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, ((int32_t)44), NULL);
			}

IL_0054_1:
			{
				// EncodeString ((string)pair.Key);
				RuntimeObject* L_14;
				L_14 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_2), NULL);
				JSONEncoder_EncodeString_mB8D4CFF3A1E0A4AC019B31A49092B33A2772A6B1(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_14, String_t_il2cpp_TypeInfo_var)), NULL);
				// _buffer.Append (':');
				StringBuilder_t* L_15 = __this->____buffer_0;
				NullCheck(L_15);
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)58), NULL);
				// EncodeObject (pair.Value);
				RuntimeObject* L_17;
				L_17 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_2), NULL);
				JSONEncoder_EncodeObject_mBB8F7517EAC9ED600D19F919785FAF0F826C1EB2(__this, L_17, NULL);
				// isFirst = false;
				V_0 = (bool)0;
			}

IL_0083_1:
			{
				// foreach (DictionaryEntry pair in d) {
				RuntimeObject* L_18 = V_1;
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_009e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009e:
	{
		// _buffer.Append ('}');
		StringBuilder_t* L_20 = __this->____buffer_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_20, ((int32_t)125), NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JSONEncoder::EncodeEnumerable(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder_EncodeEnumerable_mBBB301D592E22D694ACBE3FF317125DB0970814E (JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87* __this, RuntimeObject* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// var isFirst = true;
		V_0 = (bool)1;
		// _buffer.Append ('[');
		StringBuilder_t* L_0 = __this->____buffer_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)91), NULL);
		// foreach (var obj in e) {
		RuntimeObject* L_2 = ___0_e;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_3;
					if (!L_5)
					{
						goto IL_0054;
					}
				}
				{
					RuntimeObject* L_6 = V_3;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0054:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003a_1;
			}

IL_0019_1:
			{
				// foreach (var obj in e) {
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				// if (!isFirst)
				bool L_9 = V_0;
				if (L_9)
				{
					goto IL_0031_1;
				}
			}
			{
				// _buffer.Append (',');
				StringBuilder_t* L_10 = __this->____buffer_0;
				NullCheck(L_10);
				StringBuilder_t* L_11;
				L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)44), NULL);
			}

IL_0031_1:
			{
				// EncodeObject (obj);
				RuntimeObject* L_12 = V_2;
				JSONEncoder_EncodeObject_mBB8F7517EAC9ED600D19F919785FAF0F826C1EB2(__this, L_12, NULL);
				// isFirst = false;
				V_0 = (bool)0;
			}

IL_003a_1:
			{
				// foreach (var obj in e) {
				RuntimeObject* L_13 = V_1;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0055;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		// _buffer.Append (']');
		StringBuilder_t* L_15 = __this->____buffer_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, ((int32_t)93), NULL);
		// }
		return;
	}
}
// System.Void YMMJSONUtils.JSONEncoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONEncoder__cctor_m6D6479FDAFF725F4E8E196BB636B780496B16D99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m99A8D7F5DD0B41EE3B14353563B2DD233240ED6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26624E47EFBA198B8A9D8F24D36ED1F5C840F72B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD489269E8E1F5DAC95F746BB35583B31B03CA894);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly Dictionary<char, string> EscapeChars =
		//     new Dictionary<char, string> {
		//         { '"', "\\\"" },
		//         { '\\', "\\\\" },
		//         { '\b', "\\b" },
		//         { '\f', "\\f" },
		//         { '\n', "\\n" },
		//         { '\r', "\\r" },
		//         { '\t', "\\t" },
		//         { '\u2028', "\\u2028" },
		//         { '\u2029', "\\u2029" }
		//     };
		Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* L_0 = (Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755*)il2cpp_codegen_object_new(Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m99A8D7F5DD0B41EE3B14353563B2DD233240ED6B(L_0, Dictionary_2__ctor_m99A8D7F5DD0B41EE3B14353563B2DD233240ED6B_RuntimeMethod_var);
		Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6(L_1, ((int32_t)34), _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6_RuntimeMethod_var);
		Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6(L_2, ((int32_t)92), _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6_RuntimeMethod_var);
		Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6(L_3, 8, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6_RuntimeMethod_var);
		Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6(L_4, ((int32_t)12), _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6_RuntimeMethod_var);
		Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6(L_5, ((int32_t)10), _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6_RuntimeMethod_var);
		Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6(L_6, ((int32_t)13), _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6_RuntimeMethod_var);
		Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6(L_7, ((int32_t)9), _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6_RuntimeMethod_var);
		Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* L_8 = L_7;
		NullCheck(L_8);
		Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6(L_8, ((int32_t)8232), _stringLiteralD489269E8E1F5DAC95F746BB35583B31B03CA894, Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6_RuntimeMethod_var);
		Dictionary_2_tA99466CDBAC89A0ADADBF9EF5CDC1AA88D2A8755* L_9 = L_8;
		NullCheck(L_9);
		Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6(L_9, ((int32_t)8233), _stringLiteral26624E47EFBA198B8A9D8F24D36ED1F5C840F72B, Dictionary_2_Add_m019D4D34CC97DD77627ACB2A914CA21016CA34E6_RuntimeMethod_var);
		((JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_StaticFields*)il2cpp_codegen_static_fields_for(JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_il2cpp_TypeInfo_var))->___EscapeChars_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_StaticFields*)il2cpp_codegen_static_fields_for(JSONEncoder_t29A69811E1A7EDF0F0C56419CA2F9655C77B8A87_il2cpp_TypeInfo_var))->___EscapeChars_1), (void*)L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FileAppender_get_FileName_m890AA718DBCA4DD525AB7EA2FB814063BA878489_inline (FileAppender_tC4E823EF268D99248EE475AE078121375A5EA996* __this, const RuntimeMethod* method) 
{
	{
		// public string FileName { get; }
		String_t* L_0 = __this->___U3CFileNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LogMessage_get_Message_mAD928421E0DE1A3C83D022D4E83638D37536FBAC_inline (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LogMessage_get_Type_mA8F90FC985C53EF80C387544F1D619A21B85BA33_inline (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, const RuntimeMethod* method) 
{
	{
		// public LogType Type { get; set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D LogMessage_get_Time_m1DC7FC139F37988040AE4BDEA4F396E88F9C0184_inline (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, const RuntimeMethod* method) 
{
	{
		// public DateTime Time { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___U3CTimeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogMessage_set_Time_m379BC8E54EC486AF113CBCFE40495D1CF72CB810_inline (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		// public DateTime Time { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CTimeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogMessage_set_Type_m36EB20AEB2681422C57A4F642CEA08D50D3111D0_inline (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public LogType Type { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CTypeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogMessage_set_Message_mA28C213AE457895F2475CFB4D4BF26C13E0F8DBA_inline (LogMessage_tE11BB847BFD4FBB237B06D9B05F0534F616AD990* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Message { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CMessageU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* DataPersictenceManager_get_instance_mE92EDD86FC7E69CB5D0C8DF5F7EEE9DDCD261FEA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DataPersictenceManager instance { get; private set; }
		DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A* L_0 = ((DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_StaticFields*)il2cpp_codegen_static_fields_for(DataPersictenceManager_tD502F499E640293CF7F41FF51B3241B9D7D3862A_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___leftVector_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m7672D87B9C778FB2AEF7BB79758142D01166B493_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___downVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Swipe_Invoke_mEDDD5BEFBC9CDF36CC68D87E531E6C05FB22520C_inline (Swipe_t63DD0A703094C186E9D955718F5F2103B1FDDFC4* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_direction, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_direction, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TeleportPoint_SetTargetPoint_mF212848923729D808D41F71AFA2C90A9DCB9AC88_inline (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* ___0_point, const RuntimeMethod* method) 
{
	{
		// _target = point;
		TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* L_0 = ___0_point;
		__this->____target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____target_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TeleportPoint_get_IsActive_m258A179E47CE50D6B5AF1D1BAF0CFB5E949BEFAB_inline (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsActive { get;private set; }
		bool L_0 = __this->___U3CIsActiveU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TeleportPoint_set_IsActive_mB4FE047F2DEC8DB13BD4D9065354086BB557CB13_inline (TeleportPoint_tA012B52592886F5C71E1D7F55672FC8882B841D9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsActive { get;private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsActiveU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FpsCounter_set_HighestPFS_mBA48A4553C914FA4188FB97B2C04BF451CE0788F_inline (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int HighestPFS { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CHighestPFSU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FpsCounter_set_LowersFPS_mCE7E78B36FA4771A6C514F82A9063732858F78EF_inline (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int LowersFPS { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CLowersFPSU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FpsCounter_set_AverageFPS_mECBFF81A9A5AB622B428A1CF179D416E983D287D_inline (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int AverageFPS { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CAverageFPSU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FpsCounter_get_AverageFPS_mD00F62B3E502460309C955F4A36AEE5AEF20106A_inline (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) 
{
	{
		// public int AverageFPS { get; private set; }
		int32_t L_0 = __this->___U3CAverageFPSU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FpsCounter_get_HighestPFS_m5E4BCB9BA0F69C16EDE766363572D3D729982A93_inline (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) 
{
	{
		// public int HighestPFS { get; private set; }
		int32_t L_0 = __this->___U3CHighestPFSU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FpsCounter_get_LowersFPS_m4E97FCC8B11DB3BF859BF24F768282E1699DF0DB_inline (FpsCounter_t691C08D24BC49E7284EE5B53FD52FE1C4A6F1D5D* __this, const RuntimeMethod* method) 
{
	{
		// public int LowersFPS { get; private set; }
		int32_t L_0 = __this->___U3CLowersFPSU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) 
{
	{
		// public SliderEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___1_length;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___1_length;
		float L_5 = ___1_length;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB193CD8DA20DEB9E9F95CFEB5A2B1B9B3B7ECFEB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JObject_get_Kind_m13EF0DE2F4E15D4EE5E40A5315B6A6B495C5A58C_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public JObjectKind Kind { get; private set; }
		int32_t L_0 = __this->___U3CKindU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* JObject_get_ObjectValue_m3FBB6CB07FE3CE0EDF6359170143E8BFFF801706_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, JObject> ObjectValue { get; private set; }
		Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_0 = __this->___U3CObjectValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* JObject_get_ArrayValue_m25ABBB3606809FF32B31A802CB6BEAE2531FF23D_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public List<JObject> ArrayValue { get; private set; }
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_0 = __this->___U3CArrayValueU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JObject_get_StringValue_mDA41484A8D0519352C5185A234DAFC10D4499C58_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public string StringValue { get; private set; }
		String_t* L_0 = __this->___U3CStringValueU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JObject_get_BooleanValue_m1F133DF675798A4E95D1EC81D918B139FCB22542_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public bool BooleanValue { get; private set; }
		bool L_0 = __this->___U3CBooleanValueU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double JObject_get_DoubleValue_mE0D1D061C44CD1B9CF7406681691091F8411A13E_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public double DoubleValue { get; private set; }
		double L_0 = __this->___U3CDoubleValueU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float JObject_get_FloatValue_mA3FFA45A05D8D82FEBBF01968D3C5E545D003782_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public float FloatValue { get; private set; }
		float L_0 = __this->___U3CFloatValueU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t JObject_get_ULongValue_m6098D492833A1374824E49EA52B676C6D6AF85E4_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public ulong ULongValue { get; private set; }
		uint64_t L_0 = __this->___U3CULongValueU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t JObject_get_LongValue_m3518FC7C47C4007A0226243FC982D16E59446036_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public long LongValue { get; private set; }
		int64_t L_0 = __this->___U3CLongValueU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t JObject_get_UIntValue_m20AF155A1577719B5C67D5FC8F09B5AAF7C25E1D_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public uint UIntValue { get; private set; }
		uint32_t L_0 = __this->___U3CUIntValueU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JObject_get_IntValue_mDB5384E73EDBA994CB3A4B840B201ED8B8373C64_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public int IntValue { get; private set; }
		int32_t L_0 = __this->___U3CIntValueU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t JObject_get_UShortValue_mEB27E08EB88B31CE82192C8F6294F1E374C1B384_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public ushort UShortValue { get; private set; }
		uint16_t L_0 = __this->___U3CUShortValueU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t JObject_get_ShortValue_mE133387DB20068631DA7874BD278B57C3D0E3E0A_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public short ShortValue { get; private set; }
		int16_t L_0 = __this->___U3CShortValueU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t JObject_get_ByteValue_m7895737CF1888EE4A42011AA0C276953746A6A68_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public byte ByteValue { get; private set; }
		uint8_t L_0 = __this->___U3CByteValueU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t JObject_get_SByteValue_m4440148C8FCE7D523D3D1CC9F85F6A3E171C7528_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public sbyte SByteValue { get; private set; }
		int8_t L_0 = __this->___U3CSByteValueU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_Kind_mD12ABA0C4D0CD58238BCD6030B2D6DC54F326A55_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public JObjectKind Kind { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CKindU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_StringValue_m0D9956200CEC32514C50C065145D6C07A538514B_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string StringValue { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CStringValueU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStringValueU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_BooleanValue_mCBD498B3264596F62B855602A850FEB4FA85F6FF_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool BooleanValue { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CBooleanValueU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_ArrayValue_mFB93C515E10CCD51A778A1F5E3A6E8625E957768_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<JObject> ArrayValue { get; private set; }
		List_1_t9CD4D47F2D65E57DEF6A07191FE269C05A2B9360* L_0 = ___0_value;
		__this->___U3CArrayValueU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArrayValueU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_ObjectValue_mC1FC6DE92EC25FA91A918316481B05AC58ACCC7A_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Dictionary<string, JObject> ObjectValue { get; private set; }
		Dictionary_2_tC8D4944C81C4E1C9C850097189A46CE85D86384A* L_0 = ___0_value;
		__this->___U3CObjectValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CObjectValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_IsNegative_m41E004D6B71423BCD1EDAC00A99BA7702D66F5FD_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsNegative { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsNegativeU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JObject_get_IsNegative_m15AE1952AD430DAF3AFF8A432B0B293F3532D2D1_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsNegative { get; private set; }
		bool L_0 = __this->___U3CIsNegativeU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_ULongValue_m9654C958809EA25787D7D7372A902AB027E3B6FC_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public ulong ULongValue { get; private set; }
		uint64_t L_0 = ___0_value;
		__this->___U3CULongValueU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_MinInteger_m75E5238BC62C5F4A3DD8CA35321C5BAF4582D759_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public IntegerSize MinInteger { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CMinIntegerU3Ek__BackingField_17 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_LongValue_m61322073008C2963061CF72D956EC1E9B7F12840_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public long LongValue { get; private set; }
		int64_t L_0 = ___0_value;
		__this->___U3CLongValueU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_UIntValue_mAA1F90058E59ED87886D5D8E29D5C7966A73A790_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public uint UIntValue { get; private set; }
		uint32_t L_0 = ___0_value;
		__this->___U3CUIntValueU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_IntValue_mC89875DBCA17A4D681CF67B487C5B0B931902FDE_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int IntValue { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CIntValueU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_UShortValue_mD1B79F3A0F374218A07E9D691E6342EBDD70CF6D_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public ushort UShortValue { get; private set; }
		uint16_t L_0 = ___0_value;
		__this->___U3CUShortValueU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_ShortValue_mCF4F6AD2201D8838236118D877F84F8056035909_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public short ShortValue { get; private set; }
		int16_t L_0 = ___0_value;
		__this->___U3CShortValueU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_ByteValue_m747F43C9CFA9A2FBA947FB54E03E8BE24222F5CA_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public byte ByteValue { get; private set; }
		uint8_t L_0 = ___0_value;
		__this->___U3CByteValueU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_SByteValue_mD18B9137B1DABC6DA436CB03095622ED2F8BEEFE_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int8_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public sbyte SByteValue { get; private set; }
		int8_t L_0 = ___0_value;
		__this->___U3CSByteValueU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_DoubleValue_mBF9257A740E2CD3F8DA22A95D59BED05629F65D3_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// public double DoubleValue { get; private set; }
		double L_0 = ___0_value;
		__this->___U3CDoubleValueU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_MinFloat_m3DE4B8C688B984FE01CF1BB843252F7221E27649_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public FloatSize MinFloat { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CMinFloatU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_FloatValue_mFC011B853FC8F233733A79C3327BCE651E9242D0_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float FloatValue { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CFloatValueU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JObject_set_IsFractional_m54D026ED3DC60C618E4F0B035EADBAA2F7F85322_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsFractional { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsFractionalU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JObject_get_IsFractional_m92C680D42BB5FDFF8790B4937389C67F44455470_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsFractional { get; private set; }
		bool L_0 = __this->___U3CIsFractionalU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JObject_get_MinFloat_mAC7ECB9CAF2FBB9A77E4E72C3BEB1A0A65402E83_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public FloatSize MinFloat { get; private set; }
		int32_t L_0 = __this->___U3CMinFloatU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JObject_get_MinInteger_m7F550F98B8E124D92712CF3AB5666F23B1798EF9_inline (JObject_t04675B14F13EB832C1F532C2CD0A8DF6FE08FFC0* __this, const RuntimeMethod* method) 
{
	{
		// public IntegerSize MinInteger { get; private set; }
		int32_t L_0 = __this->___U3CMinIntegerU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
	const uint32_t SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// TValue
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
