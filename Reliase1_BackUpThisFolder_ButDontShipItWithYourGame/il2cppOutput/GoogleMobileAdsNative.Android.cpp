#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693;
// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>
struct EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50;
// System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>
struct EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67;
// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEqualityComparer`1<GoogleMobileAds.Api.NativeAdType>
struct IEqualityComparer_1_tDF6D725D3C1AB54410BA5A4B191B7EF503CEA43A;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Boolean>[]
struct EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.HashSet`1/Slot<GoogleMobileAds.Api.NativeAdType>[]
struct SlotU5BU5D_t857611F300C9CB2FC1E2FA1826D7F33CAA58AE0D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// <Module>/????????????????????????????????????????[]
struct U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483;
// <Module>/?????????????????????????????????????????[]
struct U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23;
// <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????[]
struct U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF;
// GoogleMobileAds.Android.AdLoaderClient
struct AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88;
// GoogleMobileAds.Common.AdLoaderClientArgs
struct AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D;
// GoogleMobileAds.Api.AdValue
struct AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// GoogleMobileAds.Android.CustomNativeAdClient
struct CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8;
// GoogleMobileAds.Common.CustomNativeClientEventArgs
struct CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// GoogleMobileAds.Common.DummyNativeClient
struct DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// GoogleMobileAds.GoogleMobileAdsNativeClientFactory
struct GoogleMobileAdsNativeClientFactory_t7B51A9D779A00C76464A224A4B52821D6A946C84;
// GoogleMobileAds.Common.IAdLoaderClient
struct IAdLoaderClient_tF8A7D1DD7900EBB40ED3BB947225A08502443B15;
// GoogleMobileAds.Common.ICustomNativeAdClient
struct ICustomNativeAdClient_t64801043F3A7F59D9B72FC2076C0CC861EBB3798;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9;
// GoogleMobileAds.Common.INativeAdClient
struct INativeAdClient_t7F9453021411EFCCC382978EBD9D107501DBA784;
// GoogleMobileAds.Common.INativeAdInteractionHandlerClient
struct INativeAdInteractionHandlerClient_t5FC9C293E2875D64B63C1978DA33891687D3D898;
// GoogleMobileAds.Common.IResponseInfoClient
struct IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7;
// GoogleMobileAds.Android.LoadAdErrorClient
struct LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GoogleMobileAds.Android.NativeAdClient
struct NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08;
// GoogleMobileAds.Android.NativeAdInteractionHandlerClient
struct NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772;
// GoogleMobileAds.Common.NativeClientEventArgs
struct NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809;
// GoogleMobileAds.Android.ResponseInfoClient
struct ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// _7T4kB4QON8Mjurd3oP0KXexLP8b._o2NBycuAD3A4LGfSBjHPkip6N4d
struct _o2NBycuAD3A4LGfSBjHPkip6N4d_tF8E4A353D556DDDE1CD5FA0F8A57DEA6798EB8B6;
// <Module>/?????????????????????????????????????????
struct U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4;
// <Module>/?????????????????????????????????????????
struct U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E;
// <Module>/?????????????????????????????????????????
struct U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// <Module>/?????????????????????????????????????????/????????????????????????????????????????
struct U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3;
// <Module>/?????????????????????????????????????????/?????????????????????????????????????????
struct U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9;

IL2CPP_EXTERN_C RuntimeClass* AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C____U200CU200BU206AU200CU202EU200BU202EU200DU200EU200CU202BU200EU206DU202DU202AU206AU206BU202EU200FU206DU206AU206BU206CU202BU202DU206CU200DU202EU202DU200BU200FU200BU200FU202CU206BU200EU200BU202BU200DU206CU202E_3_FieldInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisString_t_mF71821FDD90A1775F3D5C7801386E2FC1E238ED9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483;
struct U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23;
struct U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D* ____entries_1;
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
	KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t857611F300C9CB2FC1E2FA1826D7F33CAA58AE0D* ____slots_8;
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
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
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

// GoogleMobileAds.Common.AdLoaderClientArgs
struct AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9  : public RuntimeObject
{
	// System.String GoogleMobileAds.Common.AdLoaderClientArgs::<AdUnitId>k__BackingField
	String_t* ___U3CAdUnitIdU3Ek__BackingField_0;
	// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Common.AdLoaderClientArgs::<AdTypes>k__BackingField
	HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* ___U3CAdTypesU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> GoogleMobileAds.Common.AdLoaderClientArgs::<FormatIds>k__BackingField
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ___U3CFormatIdsU3Ek__BackingField_2;
	// System.Int32 GoogleMobileAds.Common.AdLoaderClientArgs::<NumberOfAdsToLoad>k__BackingField
	int32_t ___U3CNumberOfAdsToLoadU3Ek__BackingField_3;
};

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::Keywords
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___Keywords_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::Extras
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Extras_3;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::MediationExtras
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___MediationExtras_4;
};

// GoogleMobileAds.Api.AdValue
struct AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdValue/PrecisionType GoogleMobileAds.Api.AdValue::<Precision>k__BackingField
	int32_t ___U3CPrecisionU3Ek__BackingField_0;
	// System.Int64 GoogleMobileAds.Api.AdValue::<Value>k__BackingField
	int64_t ___U3CValueU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdValue::<CurrencyCode>k__BackingField
	String_t* ___U3CCurrencyCodeU3Ek__BackingField_2;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// GoogleMobileAds.Android.CustomNativeAdClient
struct CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject GoogleMobileAds.Android.CustomNativeAdClient::customNativeAd
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___customNativeAd_0;
};

// GoogleMobileAds.Common.DummyNativeClient
struct DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F  : public RuntimeObject
{
	// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs> GoogleMobileAds.Common.DummyNativeClient::OnAdFailedToLoad
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___OnAdFailedToLoad_0;
	// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs> GoogleMobileAds.Common.DummyNativeClient::OnCustomNativeAdLoaded
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___OnCustomNativeAdLoaded_1;
	// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs> GoogleMobileAds.Common.DummyNativeClient::OnCustomNativeAdClicked
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___OnCustomNativeAdClicked_2;
	// System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdLoaded
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* ___OnNativeAdLoaded_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdImpression_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdClicked
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdClicked_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdOpening_6;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Common.DummyNativeClient::OnNativeAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdClosed_7;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// GoogleMobileAds.GoogleMobileAdsNativeClientFactory
struct GoogleMobileAdsNativeClientFactory_t7B51A9D779A00C76464A224A4B52821D6A946C84  : public RuntimeObject
{
};

// GoogleMobileAds.Android.LoadAdErrorClient
struct LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject GoogleMobileAds.Android.LoadAdErrorClient::loadAdError
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___loadAdError_0;
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

// GoogleMobileAds.Android.NativeAdInteractionHandlerClient
struct NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Android.NativeAdInteractionHandlerClient::assetIDMappings
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___assetIDMappings_0;
	// UnityEngine.AndroidJavaObject GoogleMobileAds.Android.NativeAdInteractionHandlerClient::_jugAX0smyU2FXQZEdYZ1tyBwSo5
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____jugAX0smyU2FXQZEdYZ1tyBwSo5_1;
};

// GoogleMobileAds.Common.NativeUtils
struct NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E  : public RuntimeObject
{
};

// GoogleMobileAds.Android.ResponseInfoClient
struct ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject GoogleMobileAds.Android.ResponseInfoClient::_androidResponseInfo
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____androidResponseInfo_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// _7T4kB4QON8Mjurd3oP0KXexLP8b._o2NBycuAD3A4LGfSBjHPkip6N4d
struct _o2NBycuAD3A4LGfSBjHPkip6N4d_tF8E4A353D556DDDE1CD5FA0F8A57DEA6798EB8B6  : public RuntimeObject
{
};

// <Module>/?????????????????????????????????????????
struct U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E  : public RuntimeObject
{
	// System.Byte[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U202CU200BU200FU206FU206EU206CU202EU206AU200EU202BU206CU202EU200BU200CU200DU206FU200CU200DU206BU206EU202AU200CU202DU202DU200EU206CU202EU200CU200CU206AU206CU202DU200CU206BU206DU206FU206AU202EU206FU206BU202E_0;
	// System.UInt32 <Module>/?????????????????????????????????????????::????????????????????????????????????????
	uint32_t ___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1;
	// System.IO.Stream <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U202EU200CU202BU202DU200DU202BU202BU202CU202CU206AU206FU202AU200EU206BU206FU200EU202AU202BU200FU206BU200EU202BU200DU200EU200CU202EU202CU200CU200FU206CU206DU202CU202BU200DU200DU202CU206DU200CU202CU200EU202E_2;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202AU200BU202CU202BU202AU200FU200EU206AU206FU200FU200FU200DU206CU202EU202CU200FU206FU200CU200DU206BU206EU200DU206CU200DU202AU202CU200FU206FU202AU200FU206FU206CU200EU206DU202DU202BU206CU200CU206BU200FU202E_3;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202BU206FU200DU200EU202DU202AU200DU206DU206AU206CU200DU202AU206FU202CU202DU202EU200EU200DU202EU202CU202DU206CU200CU200FU200EU200DU202CU206BU200BU200DU200FU200CU202DU202BU202AU206AU206EU206CU206BU200CU202E_4;
};

// <Module>/?????????????????????????????????????????
struct U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F  : public RuntimeObject
{
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1;
	// System.IO.Stream <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U202AU206AU200EU202EU202CU200BU200EU206AU200EU206AU206BU206EU200CU206CU206AU202DU206EU206EU202BU200EU202DU202EU202CU206EU200FU206EU206AU200BU206EU202AU202DU206EU206FU202BU200FU200DU206FU206FU200BU206DU202E_2;
};

// <Module>/?????????????????????????????????????????/?????????????????????????????????????????
struct U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9  : public RuntimeObject
{
	// <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF* ___U200BU200EU206EU206BU206FU200BU200BU206BU206AU200DU200DU200EU206DU202EU206AU202CU202DU206EU202BU202BU206AU202CU200EU206AU206BU206FU202BU202DU206BU206EU200DU200FU200BU206BU202DU202CU206CU200DU206EU206DU202E_0;
	// System.Int32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	int32_t ___U206BU202BU200CU202CU202AU200CU200DU206EU202CU206EU202DU202AU206EU200DU206AU200DU200BU200CU202AU202CU206FU206EU200EU206DU200CU206CU206FU206EU206BU206FU200CU202EU200FU202EU200DU202AU206BU206BU202AU200FU202E_1;
	// System.Int32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	int32_t ___U206EU206DU206EU202AU202BU206CU202CU206CU206FU202BU206DU206DU202BU206FU202AU206FU200DU206BU200EU206AU202BU202EU200BU200BU202AU206DU206DU202CU202EU202AU202EU200DU206BU200BU206AU200FU206BU200EU206CU200FU202E_2;
	// System.UInt32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U200DU200DU206AU206FU206AU202AU202AU200EU200FU202AU206AU200BU200CU200BU206EU200FU206EU206CU206BU200DU200FU200CU200CU206CU206CU206AU202EU202BU200DU206CU206BU200DU202AU202AU200FU200CU200BU200CU206BU202DU202E_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
struct KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___U3CAdValueU3Ek__BackingField_1;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// GoogleMobileAds.Common.CustomNativeClientEventArgs
struct CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.ICustomNativeAdClient GoogleMobileAds.Common.CustomNativeClientEventArgs::<nativeAdClient>k__BackingField
	RuntimeObject* ___U3CnativeAdClientU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Common.CustomNativeClientEventArgs::<assetName>k__BackingField
	String_t* ___U3CassetNameU3Ek__BackingField_2;
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

// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;
};

// GoogleMobileAds.Common.NativeClientEventArgs
struct NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.INativeAdClient GoogleMobileAds.Common.NativeClientEventArgs::<nativeAdClient>k__BackingField
	RuntimeObject* ___U3CnativeAdClientU3Ek__BackingField_1;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
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

// <Module>/?????????????????????????????????????????
struct U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1 
{
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
};

// <Module>/?????????????????????????????????????????
struct U200EU200DU200FU206EU202EU200DU202BU202EU202DU206EU202EU206BU206DU202BU200CU202AU202CU200BU202BU200BU202BU200BU206EU206EU206BU202AU200FU206EU206EU206CU200DU200DU200DU206DU200CU206EU206EU206CU200CU206DU202E_t15804F2ACFA878B5F1FC17607C381EDC48CE0FF3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U200EU200DU200FU206EU202EU200DU202BU202EU202DU206EU202EU206BU206DU202BU200CU202AU202CU200BU202BU200BU202BU200BU206EU206EU206BU202AU200FU206EU206EU206CU200DU200DU200DU206DU200CU206EU206EU206CU200CU206DU202E_t15804F2ACFA878B5F1FC17607C381EDC48CE0FF3__padding[448];
	};
};

// <Module>/????????????????????????????????????????
struct U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D 
{
	// System.UInt32 <Module>/????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U206AU202DU200BU202DU200EU206AU202DU202EU200CU206BU200BU202AU200FU206BU200CU202EU200CU200EU206CU202BU206DU202EU206DU202AU206AU206DU206AU206DU200FU206AU200DU206AU206AU202DU200DU206FU206CU206FU206AU206EU202E_0;
};

// <Module>/?????????????????????????????????????????
struct U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C 
{
	// <Module>/????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* ___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0;
	// System.Int32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	int32_t ___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1;
};
// Native definition for P/Invoke marshalling of <Module>/?????????????????????????????????????????
struct U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C_marshaled_pinvoke
{
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* ___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0;
	int32_t ___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1;
};
// Native definition for COM marshalling of <Module>/?????????????????????????????????????????
struct U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C_marshaled_com
{
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* ___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0;
	int32_t ___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1;
};

// <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????
struct U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C 
{
	// <Module>/????????????????????????????????????????[] <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* ___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0;
};
// Native definition for P/Invoke marshalling of <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????
struct U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C_marshaled_pinvoke
{
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* ___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0;
};
// Native definition for COM marshalling of <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????
struct U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C_marshaled_com
{
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* ___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
struct Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;

// <Module>
struct U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C 
{
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
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

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// <Module>/?????????????????????????????????????????
struct U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4  : public RuntimeObject
{
	// <Module>/????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* ___U206EU202EU202DU202DU200FU206AU200EU200FU202AU202EU200FU206AU200EU206AU202CU206DU206AU206EU200BU202BU202DU200DU200DU206DU206CU200DU202AU202BU202BU202BU200CU202CU206BU206AU206EU200EU206FU202BU200FU202EU202E_0;
	// <Module>/????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* ___U202BU202DU202BU206CU206CU202EU206CU200CU206BU200BU202AU202CU206AU200DU202AU202DU206CU202EU200EU202BU200DU200FU202CU200CU206EU202BU200BU202DU202EU202AU202BU206CU206FU202BU202DU206BU206AU206DU206BU206FU202E_1;
	// <Module>/????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* ___U202CU202CU206CU200CU200FU200BU206FU206FU206EU202BU206EU200EU200EU200CU206CU202CU202BU202EU202EU206CU200BU202BU206AU206BU206AU206BU206FU202AU200FU206EU202AU202AU206AU200CU202DU200BU206AU206AU206AU206DU202E_2;
	// <Module>/????????????????????????????????????????[] <Module>/?????????????????????????????????????????::????????????????????????????????????????
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* ___U200DU206DU200CU200EU200BU206EU202BU200DU200CU202CU200FU206BU206DU200FU206FU202AU200EU200BU202DU200BU206AU200EU200FU206CU202EU206DU206CU202AU202BU202EU206BU200EU206FU202DU202CU206FU206CU200CU206FU202E_3;
	// <Module>/????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* ___U200DU206EU206DU202AU206EU202DU202BU200CU200DU202BU206DU200DU206CU200CU206AU202EU202CU200DU202EU202AU202BU206EU206AU206AU202EU206EU206EU206DU206BU206EU202DU200FU206CU200DU200BU206CU206EU206BU200EU202AU202E_4;
	// <Module>/????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* ___U206CU200FU200CU202BU200EU200DU200CU202AU206CU206AU206CU206DU206DU200FU206AU200EU202DU206CU202AU206DU202AU200CU200DU202BU202BU200FU206DU202AU200CU200BU206EU202BU200BU206BU200BU200FU200FU206EU200DU206AU202E_5;
	// <Module>/?????????????????????????????????????????/???????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* ___U206AU200CU202EU200BU200EU202AU200EU200EU202BU202EU202DU206BU202CU206AU206CU206AU206DU206EU206DU200CU206CU202DU200CU200BU206BU206DU202EU206AU200FU200DU206DU206AU200BU200BU200CU206CU206CU206BU202EU200CU202E_6;
	// <Module>/?????????????????????????????????????????/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* ___U206AU200FU202BU202BU206AU206DU206AU200EU200CU200EU200BU200FU200EU206AU202DU200DU200BU202BU206DU206EU206EU206BU206CU200CU206CU202AU202CU202DU200FU202BU206EU202DU200DU200CU206AU206FU202AU200FU200CU202CU202E_7;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* ___U200DU202EU202DU202DU206BU202AU202AU200FU206EU206DU206EU202BU200BU206FU202BU206AU206FU200EU206CU202EU200EU200BU202AU202BU206BU200FU202EU206EU202CU202CU200DU202AU202EU206BU200DU202BU202EU200DU202EU206EU202E_8;
	// <Module>/????????????????????????????????????????[] <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* ___U206CU200BU200FU202BU200FU206BU206CU202CU200CU206BU206FU206BU202BU202BU206FU206CU200CU206AU200EU200BU200CU200DU202EU202DU200EU200BU202BU202BU200EU200BU202DU202AU202DU200BU206AU206FU206BU206DU202EU206CU202E_9;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????::????????????????????????????????????????
	U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* ___U206FU206EU206CU206DU200FU202AU206BU200FU200EU206AU200BU202BU206AU200CU206EU200EU206BU200EU206DU206DU202BU200BU206AU200FU200CU206EU202BU200DU202BU202AU206DU202DU206AU202BU202DU202BU206CU202DU200FU202E_10;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
	// <Module>/?????????????????????????????????????????/???????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* ___U206FU206DU200DU202EU206DU206CU202CU206BU206BU202AU200CU202AU206BU202BU206AU200EU200CU202BU200DU206AU202DU206FU206CU206FU206DU206EU200BU200BU202EU202CU206AU206BU206FU200FU206CU206BU206CU206FU206EU202DU202E_12;
	// System.Boolean <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	bool ___U202EU206AU200FU206FU206EU202BU206DU200DU200CU206BU206EU206EU200BU206AU202AU206BU202EU206BU200EU206AU202CU200FU202DU202DU200DU200BU202BU206AU202CU200DU202AU200DU202DU206EU206BU200DU202DU206AU206CU202DU202E_13;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U200EU202AU200FU200FU206DU202BU202BU206BU206DU202CU200CU202DU206CU200BU206AU200CU206CU200DU206EU200FU202CU202CU206EU206AU206FU206FU206CU200CU200FU200DU206BU202BU202CU202BU200BU202DU202EU200BU202CU202DU202E_14;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U202BU206DU202DU200BU206AU206DU206CU200EU200FU200EU206FU200CU206AU202AU206BU202DU206AU200CU200BU200FU202CU206EU206FU202AU200EU206DU206CU200BU206DU202AU206CU206AU206AU200CU206EU202EU206CU206BU206AU206AU202E_15;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C ___U206DU202EU206FU202BU206EU206EU202AU206FU202BU202DU202AU200FU200CU206EU200EU200DU206BU206CU200CU206BU200DU202BU200FU206DU206FU200EU202DU206FU200BU206BU200FU200BU206FU200FU202CU206BU202CU206BU202EU202AU202E_16;
	// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U200CU202CU202EU200CU206AU200DU206FU206EU202BU202BU202EU202EU206CU200EU202BU200CU200BU206FU202AU206EU206BU206FU200BU206DU206EU206BU200CU200BU206EU202EU206DU206BU206CU200EU202AU200DU206AU200FU202EU206BU202E_17;
};

// <Module>/?????????????????????????????????????????/????????????????????????????????????????
struct U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3  : public RuntimeObject
{
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????
	U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* ___U202CU200BU200BU202BU206EU206EU200FU200EU206DU206AU206CU206DU206BU200FU206CU206AU200CU206DU200BU200FU200CU206DU206AU200FU200EU202BU206EU202DU200EU202DU206EU206EU206FU202AU206AU202DU200EU202DU200CU206CU202E_0;
	// <Module>/?????????????????????????????????????????[] <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????
	U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* ___U206FU202EU206BU200FU202BU200DU200FU206FU200FU200BU202AU200CU206AU206CU202CU200CU202DU200EU200EU200EU206FU200EU206CU202DU202AU202DU206BU206EU202DU206AU202EU206DU206FU200CU202AU202DU206DU206BU206BU202AU202E_1;
	// <Module>/???????????????????????????????????????? <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D ___U206BU202DU202BU202EU200BU200BU202CU202EU206EU206CU206AU200EU206EU206EU202BU202AU200FU206DU202BU206AU200EU206EU202BU200BU200FU206BU200FU202BU200EU206EU202EU206AU202BU200EU202EU202AU200DU202CU202BU206BU202E_2;
	// <Module>/???????????????????????????????????????? <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D ___U200FU202AU202EU206AU202BU200CU206AU202BU202BU206BU200BU202CU200EU200CU202EU206BU200BU206CU202BU202DU202CU202CU202BU206BU200EU206CU206DU206AU202AU202AU206DU202AU202DU202CU202DU206CU206FU200BU206CU202BU202E_3;
	// <Module>/????????????????????????????????????????? <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????
	U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C ___U202CU206AU206CU202EU202DU200CU202CU200EU200BU200BU200EU202DU200DU200CU202AU206CU200FU200CU200BU206FU200BU206DU200CU206CU200CU200DU200CU206CU202DU200CU202BU202BU200CU206EU200DU202EU206CU206DU202AU206DU202E_4;
	// System.UInt32 <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????
	uint32_t ___U200FU200EU200BU200FU200BU206BU202EU202DU200CU206CU200EU206DU206EU200FU202DU206EU202CU206CU200FU200CU200FU206DU202BU200BU202DU206FU200BU206EU200EU202CU206DU206BU200DU206FU206EU200DU202DU206FU206BU202EU202E_5;
};

// GoogleMobileAds.Android.AdLoaderClient
struct AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// UnityEngine.AndroidJavaObject GoogleMobileAds.Android.AdLoaderClient::adLoader
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___adLoader_4;
	// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs> GoogleMobileAds.Android.AdLoaderClient::OnAdFailedToLoad
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___OnAdFailedToLoad_5;
	// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs> GoogleMobileAds.Android.AdLoaderClient::OnCustomNativeAdLoaded
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___OnCustomNativeAdLoaded_6;
	// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs> GoogleMobileAds.Android.AdLoaderClient::OnCustomNativeAdClicked
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___OnCustomNativeAdClicked_7;
	// System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs> GoogleMobileAds.Android.AdLoaderClient::OnNativeAdLoaded
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* ___OnNativeAdLoaded_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Android.AdLoaderClient::OnNativeAdImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdImpression_9;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Android.AdLoaderClient::OnNativeAdClicked
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdClicked_10;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Android.AdLoaderClient::OnNativeAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdOpening_11;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Android.AdLoaderClient::OnNativeAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnNativeAdClosed_12;
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

// GoogleMobileAds.Android.NativeAdClient
struct NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Android.NativeAdClient::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_4;
	// UnityEngine.AndroidJavaObject GoogleMobileAds.Android.NativeAdClient::nativeAd
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___nativeAd_5;
	// GoogleMobileAds.Android.NativeAdInteractionHandlerClient GoogleMobileAds.Android.NativeAdClient::interactionHandlerClient
	NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* ___interactionHandlerClient_6;
};

// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>
struct EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>
struct EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>

// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// GoogleMobileAds.Common.AdLoaderClientArgs

// GoogleMobileAds.Common.AdLoaderClientArgs

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_StaticFields
{
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};

// GoogleMobileAds.Api.AdRequest

// GoogleMobileAds.Api.AdValue

// GoogleMobileAds.Api.AdValue

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// GoogleMobileAds.Android.CustomNativeAdClient

// GoogleMobileAds.Android.CustomNativeAdClient

// GoogleMobileAds.Common.DummyNativeClient

// GoogleMobileAds.Common.DummyNativeClient

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// GoogleMobileAds.GoogleMobileAdsNativeClientFactory

// GoogleMobileAds.GoogleMobileAdsNativeClientFactory

// GoogleMobileAds.Android.LoadAdErrorClient

// GoogleMobileAds.Android.LoadAdErrorClient

// GoogleMobileAds.Android.NativeAdInteractionHandlerClient

// GoogleMobileAds.Android.NativeAdInteractionHandlerClient

// GoogleMobileAds.Common.NativeUtils
struct NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_StaticFields
{
	// System.String GoogleMobileAds.Common.NativeUtils::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};

// GoogleMobileAds.Common.NativeUtils

// GoogleMobileAds.Android.ResponseInfoClient

// GoogleMobileAds.Android.ResponseInfoClient

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// _7T4kB4QON8Mjurd3oP0KXexLP8b._o2NBycuAD3A4LGfSBjHPkip6N4d

// _7T4kB4QON8Mjurd3oP0KXexLP8b._o2NBycuAD3A4LGfSBjHPkip6N4d

// <Module>/?????????????????????????????????????????

// <Module>/?????????????????????????????????????????

// <Module>/?????????????????????????????????????????

// <Module>/?????????????????????????????????????????

// <Module>/?????????????????????????????????????????/?????????????????????????????????????????

// <Module>/?????????????????????????????????????????/?????????????????????????????????????????

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// GoogleMobileAds.Api.AdValueEventArgs

// GoogleMobileAds.Api.AdValueEventArgs

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

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

// GoogleMobileAds.Common.CustomNativeClientEventArgs

// GoogleMobileAds.Common.CustomNativeClientEventArgs

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// GoogleMobileAds.Common.LoadAdErrorClientEventArgs

// GoogleMobileAds.Common.LoadAdErrorClientEventArgs

// GoogleMobileAds.Common.NativeClientEventArgs

// GoogleMobileAds.Common.NativeClientEventArgs

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// <Module>/?????????????????????????????????????????

// <Module>/?????????????????????????????????????????

// <Module>/?????????????????????????????????????????

// <Module>/?????????????????????????????????????????

// <Module>/????????????????????????????????????????

// <Module>/????????????????????????????????????????

// <Module>/?????????????????????????????????????????

// <Module>/?????????????????????????????????????????

// <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????

// <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// <Module>
struct U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields
{
	// System.Byte[] <Module>::?????????????????????????????????????????
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2;
	// <Module>/????????????????????????????????????????? <Module>::?????????????????????????????????????????
	U200EU200DU200FU206EU202EU200DU202BU202EU202DU206EU202EU206BU206DU202BU200CU202AU202CU200BU202BU200BU202BU200BU206EU206EU206BU202AU200FU206EU206EU206CU200DU200DU200DU206DU200CU206EU206EU206CU200CU206DU202E_t15804F2ACFA878B5F1FC17607C381EDC48CE0FF3 ___U200CU200BU206AU200CU202EU200BU202EU200DU200EU200CU202BU200EU206DU202DU202AU206AU206BU202EU200FU206DU206AU206BU206CU202BU202DU206CU200DU202EU202DU200BU200FU200BU200FU202CU206BU200EU200BU202BU200DU206CU202E_3;
};

// <Module>

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AndroidJavaProxy

// System.Delegate

// System.Delegate

// System.IO.MemoryStream

// System.IO.MemoryStream

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// <Module>/?????????????????????????????????????????

// <Module>/?????????????????????????????????????????

// <Module>/?????????????????????????????????????????/????????????????????????????????????????

// <Module>/?????????????????????????????????????????/????????????????????????????????????????

// GoogleMobileAds.Android.AdLoaderClient

// GoogleMobileAds.Android.AdLoaderClient

// GoogleMobileAds.Android.NativeAdClient

// GoogleMobileAds.Android.NativeAdClient

// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>

// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>

// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>

// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>

// System.EventHandler`1<System.EventArgs>

// System.EventHandler`1<System.EventArgs>

// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>

// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>

// System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>

// System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>

// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// <Module>/????????????????????????????????????????[]
struct U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483  : public RuntimeArray
{
	ALIGN_FIELD (8) U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D m_Items[1];

	inline U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D value)
	{
		m_Items[index] = value;
	}
};
// <Module>/?????????????????????????????????????????[]
struct U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23  : public RuntimeArray
{
	ALIGN_FIELD (8) U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C m_Items[1];

	inline U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0), (void*)NULL);
	}
	inline U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0), (void*)NULL);
	}
};
// <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????[]
struct U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF  : public RuntimeArray
{
	ALIGN_FIELD (8) U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C m_Items[1];

	inline U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0), (void*)NULL);
	}
	inline U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0), (void*)NULL);
	}
};
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


// - <Module>::?????????????????????????????????????????<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisIl2CppFullySharedGenericAny_mAE2A7477C6EDFEFA112C1ABEBA96754E08F977A7_gshared (uint32_t ___0_p, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// - <Module>::????????????????????????????????????????<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisIl2CppFullySharedGenericAny_m45D5A6712F90096295B9D754BD0C3C77E188D917_gshared (uint32_t ___0_p, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisIl2CppFullySharedGenericAny_m9782F1ADB4CA83645190DAAE8FFE6BBB3E286A2B_gshared (uint32_t ___0_p, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m6D40586EE21316C2647D81169AFFF9B4C7719F74_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisIl2CppFullySharedGenericAny_m6AF1C402E826E1874D947240C28E9F4D1AA3368B_gshared (uint32_t ___0_p, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisIl2CppFullySharedGenericAny_m52FDF5E7B359E801AC84F1DA11FE36C7F1496AAF_gshared (uint32_t ___0_p, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577* __this, RuntimeObject* ___0_sender, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_e, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;

// System.Void <Module>::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U200CU206EU206AU200FU206DU202BU200DU200DU202CU206AU202EU200EU206FU200FU206CU206EU200BU200CU202CU200DU202BU200FU200FU206FU202AU202AU202CU206FU202AU206BU206EU200BU200DU200EU206AU200FU200DU200CU202BU200FU202E_m6EFE767FF4898D3F202F8A917897ABB443398355 (const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.IO.Stream,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U206CU206BU206AU200CU206BU200CU200CU206CU200DU206FU200BU206EU202EU202EU200DU200DU202EU206CU206BU200EU200EU200BU206CU200DU202EU206AU206CU202CU206FU206CU206DU202DU202EU206BU202AU206DU202AU202EU202EU202EU202E_mA15388D19EBEF883059C8EDF924BB761AA0CFF46 (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_p, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_p, int64_t ___2_p, int64_t ___3_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U206EU206FU200CU206FU202BU202EU202CU200FU202DU202CU200BU200FU202CU202BU200CU206CU206BU200BU206FU202BU206EU200BU202BU202EU206CU202CU200BU200EU200CU200BU206BU200CU206FU206BU200EU206CU202AU206EU206FU202AU202E_m89E4B71EA4B5A9F6F0FB9C0C2143BEC3CBA6F145 (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E__ctor_m32A661BC347767D0762224DC7AC0D1831BDA4FA5 (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m5BAFB4CE0C3BB700DB05907C334DD64834D75D1B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, bool ___1_writable, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Byte[] <Module>::?????????????????????????????????????????(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* U3CModuleU3E_U206FU202AU206BU206DU200EU200EU202BU200CU202BU200DU200CU206BU206BU202DU202EU200CU202DU200BU200DU206AU206FU202EU200BU206BU202EU206AU202DU202CU200DU200BU200FU202DU206CU206FU202BU202CU206DU206DU200BU202DU202E_mE7A69621A1762AAEB556AE4F7CCFA5A43A6FFB0F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) ;
// System.Void <Module>/????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E__ctor_m0DA983E9D47D7F98252B00151BC632C68202CCE0 (U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* __this, int32_t ___0_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U206CU206BU202EU202CU200DU200EU202AU200DU202DU200CU206EU200FU206AU202AU206DU206CU206DU206EU206DU206CU200FU202EU202EU202BU206EU206EU202DU206AU202BU202CU202BU206DU202DU206EU200BU200EU200EU206AU202BU206EU202E_m22F86B8CD52D230ECD7AD75DD3C8D221D6C85C0F (U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U202EU200EU206AU202EU200BU206CU206DU200BU206EU206EU206AU206FU206EU200FU202CU200CU206CU200CU200DU206BU200FU206EU200CU206DU200DU202BU202EU206AU206FU200CU202BU202DU200CU200DU202EU206DU200CU200EU206CU200CU202E_m11C6E23613302207ACC9C3EC7909CBD6CC4BBBB1 (U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U206EU200BU206FU206FU206AU200BU206FU200DU206EU200BU206EU206AU202AU200EU200FU200FU202BU202CU200EU206FU206DU200CU200FU200EU202DU202EU202EU206CU206BU200DU202CU200FU206DU202EU200BU200BU200CU206CU202DU200DU202E_m58CDEDE7F052C4A8E91D9E1C48E45BFD3413BC98 (U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E__ctor_m5D03E7761E920102AB522A10737E4C866C8A4662 (U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E__ctor_m386A1264CC83856AF1272CE2AEF5273B628B14AF (U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E__ctor_mCF93EB6ED04A21FE30CB7F6136A508A720A16F36 (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E__ctor_m361EF92A5F5AFB509DBE160D56CF639FDC3A1A3A (U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Math::Max(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7 (uint32_t ___0_val1, uint32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U200CU202BU202DU200CU206EU206AU202DU200FU206BU200FU202AU200CU200BU206AU202DU206FU200FU202BU200EU206DU200FU206AU202AU206CU206FU202CU206AU202EU206FU202AU206FU202DU202EU202DU202EU202EU206EU206FU200EU200FU202E_m4290872A722CF772BB46CA85DCA2D62DA9F0E57B (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, uint32_t ___0_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U206BU206FU200DU202DU200BU202DU206EU206AU202DU200FU202DU202DU206CU206CU206EU200CU202BU202EU200EU200FU200BU206EU206EU206BU200EU206BU206DU206FU206AU206CU200FU200DU206DU206EU206DU206EU206FU206DU206EU200CU202E_m555F6499BD86F24F604FC86E1EB7DB2AF193B3B8 (U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* __this, int32_t ___0_p, int32_t ___1_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_U202BU206DU206CU202CU206DU202EU202DU202AU202CU206FU206CU202BU206EU206EU206FU202EU206AU206BU206AU206DU200DU200BU200BU202BU206EU206DU200EU200CU202CU206BU206CU206DU200EU202EU200BU202AU206EU200EU200EU200FU202E_m62132137009AC758DF72F011B9DA46B0E822A9F7 (U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* __this, uint32_t ___0_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_U206DU200CU202BU200DU206CU200CU200DU202AU202EU206DU206BU206DU206FU202CU206DU202CU202AU200EU200BU206CU202AU206CU206EU202BU202EU200FU206CU206AU202DU200EU206AU202CU206FU206FU206BU202BU202DU206BU202BU206CU202E_mD605740753FDE123716ED1E1EC64D8E2EC4AB8D7 (U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U206FU200BU200BU206FU206BU206DU206BU200CU206DU202BU206BU206DU202DU206DU202BU200BU202AU200FU206CU200FU202AU206DU202AU206DU206AU200CU206BU200BU206AU200FU206BU206FU200FU206AU200EU202CU206BU206CU206EU206BU202E_m7670D7363657FC162B164F9BFC9D8EDE78955C0E (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_p, bool ___1_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_U202CU206BU200BU202AU206BU200FU202DU202BU200EU202CU200EU200CU206DU200DU206CU202AU202AU200FU200EU206CU200CU200EU206CU206BU206FU206AU206EU206AU206FU206DU200DU202CU202BU202EU206DU206DU206AU200EU202EU202CU202E_mEC13F03048B85BA5214C342FD14382E1505F3547 (U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U200CU202BU206EU206AU206AU202AU202DU206FU202BU202DU206FU200BU202DU206DU202EU200CU200BU202AU200CU202EU202CU206DU202BU202EU206CU206BU206EU202BU200CU202DU202AU206BU202CU200FU200CU200BU206FU206BU202CU206AU202E_m490AD3A9242D0324AD9924A35293157B94B73F63 (U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U200EU200DU206DU200EU202BU202BU200FU206EU202CU202AU200DU200EU202DU206EU202EU200CU202EU206CU206CU202DU200BU200DU202BU206EU200DU202EU206CU202AU206BU202DU202DU202DU206AU206DU200DU206DU200EU202AU200CU206BU202E_mF1A33284BF43141A02C43FE2842CB8C79F02706E (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_p, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U202AU200BU206FU206CU206FU202AU202BU206CU202AU200EU200DU200EU206FU206FU202DU200EU206AU206EU202BU200BU206CU202CU206FU200FU200EU206FU200CU202CU202CU206BU206DU206AU206DU200DU206AU202AU206DU206EU202CU200EU202E_m6033FD8C912CFCFF568DF71ABF869FC7F2AAF0D6 (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, uint8_t ___0_p, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_U206AU200BU200CU200BU200DU200BU202AU202AU206EU206FU206CU202EU200DU202DU200CU206DU202CU200BU202DU200FU202DU202DU206FU206DU206AU202BU200BU200DU200DU200CU202BU206FU206CU206DU200BU202CU200EU202AU202BU206AU202E_m5A78A5A6288EEE6417E0FB8882E92CB7A16BCC52 (U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, uint32_t ___1_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206CU202AU206BU206EU202DU200EU202EU206DU206CU202AU206AU206CU202EU200EU202CU206DU206DU206AU206AU206DU202AU202BU206FU202CU202EU200DU200FU202AU206CU202DU206DU206DU206AU200BU200BU206AU206FU200BU206DU206BU202E_m12A23435B4490B62DD3EA9AECDEB281F0C1CCF0A (U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/????????????????????????????????????????[],System.UInt32,<Module>/?????????????????????????????????????????,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U202AU200BU200EU202DU206DU200EU202AU200CU206CU206DU202EU206CU202EU202EU202AU202CU200FU202AU206DU200FU202AU206BU202DU202EU206EU202CU202BU200FU206AU206DU202AU206CU200EU206BU202EU206DU206DU200CU206DU206FU202E_mD3262C01160F05F4F9854759F8BEBC12A39476E1 (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* ___0_p, uint32_t ___1_p, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___2_p, int32_t ___3_p, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U206CU202EU206DU202CU206BU200CU200FU200CU200EU206CU202EU202EU202CU206FU202EU200DU200FU206EU206FU200CU202CU206FU202EU202EU200DU200CU200BU206DU200FU202CU206FU202EU202AU206BU200EU200FU200BU200EU206FU206CU202E_m7E06218FA4367C2AEA20432E6B307F1C8C57E793 (U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, uint32_t ___1_p, uint8_t ___2_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U202DU206DU200EU206DU200EU202AU206AU206AU202AU200FU206DU202AU202BU202DU206FU202BU206CU200CU202EU206CU200CU206FU206CU200EU206CU202AU200EU206CU202BU206CU200DU200EU206BU206BU202DU206BU200EU206BU200CU206FU202E_mCA59E3EA29A46024CB6A88EEE5184F704E3BF929 (U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206AU206DU206DU200BU200CU200DU206BU206FU206CU206FU202AU202BU200FU206BU206AU202AU206DU202CU206CU206FU202DU206EU202CU206BU206AU206BU202EU206FU202AU202BU206EU206DU200FU202EU202AU202EU200EU202BU200BU206BU202E_m12CFBFCAA76732BA2C18BD7668493316D0D3D38E (U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U200FU206DU202EU202BU206FU206DU200EU206BU200FU202DU200DU206AU202DU206DU202AU206AU202EU206DU200CU200BU202DU200BU202BU206EU206BU202BU206BU200FU200FU200FU206BU206BU200DU202CU200EU206CU202CU206EU206CU200EU202E_m8D858CFC9500AA6566538D2E526D11AA5FC82985 (uint32_t ___0_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206FU200BU202EU206EU200CU206DU200EU200EU206BU202AU202AU200CU202EU202CU202BU202BU206AU200FU206BU200BU202DU202EU200FU202AU206DU202AU202AU200FU200DU206DU206EU206DU202DU202CU206AU202DU206BU202EU200BU200EU202E_m2E700D64733D952EA9040A29C2F4AAA432D3896B (U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::???????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206EU202AU202CU202CU202DU206AU202DU202EU200DU200DU202BU202BU206AU206BU206EU206EU200CU202BU200FU206CU200DU202AU200CU206DU202CU202CU206AU206BU202DU202DU206CU200FU206CU200BU200DU200BU202EU202CU202E_mF98912BD51EC40FFE88C0E5345D3E47E97E6729F (U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_U206FU200DU200EU202AU202BU200FU206FU200BU206CU200DU200DU202DU200CU206FU202AU202DU200FU206FU200BU202EU206DU206EU200DU202EU200BU206FU200EU200EU206AU202DU202AU200BU200DU206DU206BU206EU200EU200DU200FU202CU202E_m0EC2E771C35B2C5043DF4432602047105AE490E8 (U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* __this, int32_t ___0_p, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U200FU200BU202BU200BU200FU202CU200BU200FU206CU202EU206FU206CU202DU202DU206AU206BU200BU200BU200BU206AU206AU202AU206CU200BU200EU200BU206FU206AU200FU202CU200DU202DU202CU206CU202BU202BU206BU206EU200FU200EU202E_m41F30D3BFE1297089F132A49898DA2DD86A83D9C (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, uint32_t ___0_p, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U200CU202BU200BU206DU200EU200CU206CU200EU202CU200DU200FU206AU206EU206EU200DU206FU202BU206DU202BU200DU202AU202DU200BU202DU202EU206FU202EU206FU200EU200FU206DU206EU200BU202BU202DU200CU202CU200EU206CU206BU202E_m73D85D55CC80775E3234EFCB6FE480C92984696F (U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, uint32_t ___1_p, uint8_t ___2_p, uint8_t ___3_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U206DU200BU200DU200EU206BU206EU206BU200FU202AU200BU206CU200EU200CU206AU200EU206DU202AU202DU200BU202DU202CU206EU206EU206BU200BU202EU200DU200CU206EU206FU206FU206CU200DU206DU200FU206BU206AU202CU202DU202EU202E_mD5D9C4EBCDEA16E89AF3BAA7F62EAC3C752DEE8A (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U202EU206AU202CU206FU206EU200EU202CU202CU206DU200FU206EU206AU202EU206AU206EU206BU200CU202DU206BU200DU206AU200BU200DU200BU206EU200BU200EU206AU206CU206EU206EU202CU206EU200FU206CU200BU206BU202DU202DU206AU202E_m14AF9DF836CD19F16FBE1003C00F58B1C6A2F929 (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, const RuntimeMethod* method) ;
// System.Boolean <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U202CU202BU206BU206FU200EU206EU202AU202EU200CU200CU206EU202EU206FU206FU202CU202AU202BU202BU200DU202BU206FU206FU206EU206CU206AU200BU206BU206AU202EU202EU202CU206BU200DU202AU202AU202EU200FU206EU206BU200DU202E_mF85A2AEA4AB7426A02A730540D33DA8A8EB73983 (U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::????????????????????????????????????????(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U202CU200FU206DU206DU206BU202CU206BU200CU206CU206AU202BU200FU206EU206AU202CU200EU202AU200EU206EU206DU206BU206BU200BU202DU206DU206DU206BU206CU206FU206CU206AU206AU206EU202CU206AU200FU200DU206FU202DU202E_mF6F7BC0B8DB1DC9BA31FA2913616E378552DA5F1 (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, uint32_t ___0_p, uint32_t ___1_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_U206FU206AU200EU206EU206CU200FU202CU200CU200BU206FU200FU206DU206AU206EU200FU206CU202DU200DU200FU202EU206FU206AU200BU200DU206BU206AU202BU206FU206FU200CU206CU206FU202EU206AU202DU202DU202BU206BU206DU200EU202E_m27EB8F41F824C130C08A061E7F663D0CDB6C7EB1 (U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U206FU200EU200FU200CU206AU206FU206FU202EU200CU200CU200DU206DU200BU206EU200FU202AU202EU206BU206BU206BU200CU200DU206EU202CU200FU202EU206AU200DU206EU206CU206EU202DU206CU200DU200DU206BU206DU202AU206BU202CU202E_m875FCC0B80EBA9F1F93240B081FAC221D0A9ED8A (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* __this, int32_t ___0_p, int32_t ___1_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U200CU206AU200DU200CU200BU200DU206FU206DU202DU202AU200FU202CU202AU206AU206CU202AU206FU206EU202CU200DU202BU202EU202AU202BU206AU206DU206EU206BU202BU202CU200CU202BU200DU206CU200BU200CU202BU200CU202EU202BU202E_mF088E6D8FCE8B710E6C29B907C860C0B8BBB2BC7 (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* __this, int32_t ___0_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U206BU206CU206BU206BU202CU202EU202EU200FU202CU206CU206BU206CU206FU206AU200DU202DU206FU206EU206CU206DU200BU206BU202DU206CU206AU202DU206FU206FU206CU206AU200BU206BU202BU202BU200EU200FU202BU200DU206AU200CU202E_m8148C4F93ADAE2AC630824A16B431A91005DEDA6 (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* __this, uint32_t ___0_p, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U202CU206AU200BU200BU202BU202DU200BU200EU202EU200BU202EU202AU202DU206DU202DU200FU206FU200CU202CU206DU206BU202AU206CU206BU202CU206DU206BU200EU206CU206AU206CU202EU206CU206EU202EU206BU206CU200FU206BU206CU202E_mC4E85EFB2DAD22A1254744E98F2D892E735C13B7 (U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C* __this, const RuntimeMethod* method) ;
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U200FU206EU206EU202EU202AU206AU200CU202CU206DU200DU200BU202AU206AU206BU202EU206AU206CU200EU202DU206FU206AU206FU200FU200FU200EU200EU202CU206FU202EU206AU200DU202BU206DU200CU206AU206AU200EU206AU202AU200EU202E_m0EF954062067A8C2C6D649E82D9EA20104B00C91 (U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C* __this, const RuntimeMethod* method) ;
// System.UInt32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U202BU202AU202EU200CU200EU200DU202EU206EU200FU200FU202BU200EU206EU202EU200FU206FU206CU200EU206DU206BU206BU200FU202DU206EU200BU200BU200CU202AU206FU202AU206EU202BU202CU202AU206CU200EU200CU202AU206BU206CU202E_mAFD2FDB8D024E828CC336D67ECC445225CE1F39E (U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* __this, uint32_t ___0_p, uint8_t ___1_p, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U202AU206EU200EU202EU202EU202AU206EU206DU202AU206AU200DU200BU202BU200FU202EU202AU206AU202AU206FU200FU200CU202EU200DU200CU200EU206FU202BU202CU206EU202DU206BU202BU202DU202EU200CU200CU202DU206BU200BU202EU202E_m34B68E7A54742F21209AD1ED547E3A5F67D6CE81 (U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, const RuntimeMethod* method) ;
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U206CU206FU202CU200FU202BU202AU202EU200DU200DU202EU206AU200EU202AU200BU200EU202CU206BU206CU206DU206DU206EU206BU202BU200EU206CU202CU202AU202CU200CU206CU202BU206CU200FU206AU202AU200FU206EU200BU206BU206BU202E_m39D67D4C3E4B148FD4EC7669E460BC5E0436023A (U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, uint8_t ___1_p, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0 (uint32_t ___0_p, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (uint32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisIl2CppFullySharedGenericAny_mAE2A7477C6EDFEFA112C1ABEBA96754E08F977A7_gshared)(___0_p, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
// - <Module>::????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255 (uint32_t ___0_p, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (uint32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisIl2CppFullySharedGenericAny_m45D5A6712F90096295B9D754BD0C3C77E188D917_gshared)(___0_p, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F (uint32_t ___0_p, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (uint32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisIl2CppFullySharedGenericAny_m9782F1ADB4CA83645190DAAE8FFE6BBB3E286A2B_gshared)(___0_p, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisIl2CppFullySharedGenericAny_mDD5B83921F6078373B85EB4F803492A68545BA7E_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_fieldName, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String GoogleMobileAds.Common.AdLoaderClientArgs::get_AdUnitId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdLoaderClientArgs_get_AdUnitId_m9CB2CEDA6950AE81735C721A64024FEE084C1095_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Common.AdLoaderClientArgs::get_AdTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* AdLoaderClientArgs_get_AdTypes_m3286F08DA89AEF0941C3580385F858CE95635BD4_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>::Contains(T)
inline bool HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F (HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))HashSet_1_Contains_m6D40586EE21316C2647D81169AFFF9B4C7719F74_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Int32 GoogleMobileAds.Common.AdLoaderClientArgs::get_NumberOfAdsToLoad()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdLoaderClientArgs_get_NumberOfAdsToLoad_m16518458445D87FF740EE67FB2117837684591E0_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D (uint32_t ___0_p, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (uint32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisIl2CppFullySharedGenericAny_m6AF1C402E826E1874D947240C28E9F4D1AA3368B_gshared)(___0_p, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> GoogleMobileAds.Common.AdLoaderClientArgs::get_FormatIds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* AdLoaderClientArgs_get_FormatIds_m6731C0FF425BE0CC73D07B3C07A81D5A5C33CF4A_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
inline Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22 (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, const RuntimeMethod* method)
{
	Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::Dispose()
inline void Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14 (Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::get_Current()
inline KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_inline (Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C* __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C il2cppRetVal;
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_inline (KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_inline (KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C* __this, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// - <Module>::?????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisString_t_mF71821FDD90A1775F3D5C7801386E2FC1E238ED9 (uint32_t ___0_p, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (uint32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisIl2CppFullySharedGenericAny_m52FDF5E7B359E801AC84F1DA11FE36C7F1496AAF_gshared)(___0_p, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>::MoveNext()
inline bool Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2 (Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.String GoogleMobileAds.Common.NativeUtils::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NativeUtils_get_Version_mB8F63B5B552D940B0351BE63FA0ED6E4B93B04D2_inline (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject GoogleMobileAds.Android.Utils::GetAdRequestJavaObject(GoogleMobileAds.Api.AdRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* Utils_GetAdRequestJavaObject_m1B081FD57A546B7181D07C58C1101E57A227EF7E (AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___0_request, String_t* ___1_nativePluginVersion, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.NativeClientEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeClientEventArgs__ctor_mF7DEA301F79DC4E7B2B76ECC00B6AD55D15FF636 (NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Android.NativeAdClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdClient__ctor_m0E816B4BC558AF7D091637D3BFFFC2A81CAD5DC6 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_nativeAd, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.NativeClientEventArgs::set_nativeAdClient(GoogleMobileAds.Common.INativeAdClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeClientEventArgs_set_nativeAdClient_mCEDBB0459BE0B3E308DA85F15E98E31D740B97FA_inline (NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mE7BEDD3511C7196786EEA138E2CCB15EDFBA079E_inline (EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* __this, RuntimeObject* ___0_sender, NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_sender, (Il2CppFullySharedGenericAny)___1_e, method);
}
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_sender, (Il2CppFullySharedGenericAny)___1_e, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m23461BB0B5DF74CDA38E5E94CC0CEADB138F06C5_inline (EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* __this, RuntimeObject* ___0_sender, CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_sender, (Il2CppFullySharedGenericAny)___1_e, method);
}
// System.Void GoogleMobileAds.Common.CustomNativeClientEventArgs::set_assetName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_assetName_m0FFF03346E29AB4599BEB94FD9E2CB5BD6D163C4_inline (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Android.CustomNativeAdClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNativeAdClient__ctor_m3DCCBCD93644C868D3D4F8E33B4EECD459CDC311 (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_customNativeAd, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.CustomNativeClientEventArgs::set_nativeAdClient(GoogleMobileAds.Common.ICustomNativeAdClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_nativeAdClient_m7C4578E96709771F4B4E26B0EF01FD72C1CF0E75_inline (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.CustomNativeClientEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs__ctor_mB86D8364F64424DC0778551C310DC8F0B71A46FB (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.LoadAdErrorClientEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdErrorClientEventArgs__ctor_m2D09A984965A5EDB0506CDAC47BE1675E80AE0AB (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Android.LoadAdErrorClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdErrorClient__ctor_mAAB2CB3CA79F7FC1CDDA014A8194DDB6A26F9967 (LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_loadAdError, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.LoadAdErrorClientEventArgs::set_LoadAdErrorClient(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadAdErrorClientEventArgs_set_LoadAdErrorClient_m6E865CB1B347CEF0B75F55CE43EE3FDBF8353353_inline (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m10AA45946252533013704CF408E2DDD0B3BACA82_inline (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* __this, RuntimeObject* ___0_sender, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_sender, (Il2CppFullySharedGenericAny)___1_e, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String[]>(System.String,System.Object[])
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___0_collection, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Byte[]>(System.String,System.Object[])
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Android.AdLoaderClient::.ctor(GoogleMobileAds.Common.AdLoaderClientArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__ctor_m055D518AE1A587BD96A7C9A0ADF874B6296FDD1D (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* ___0_args, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Common.DummyNativeClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNativeClient__ctor_m116A1174D312D713C92ADBB744748987A37D15C1 (DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void GoogleMobileAds.Android.NativeAdInteractionHandlerClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdInteractionHandlerClient__ctor_mBBCE221D0C939EAF772625836F672623C4115DFE (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_p, const RuntimeMethod* method) ;
// System.Object Google.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_m1823918610311F093CBF1E0C77B52C348008763B (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
inline double AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	double il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void GoogleMobileAds.Android.ResponseInfoClient::.ctor(GoogleMobileAds.Common.ResponseInfoClientType,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseInfoClient__ctor_mB3010C36F05A40A73A03FC081FBBD7A15C528EDC (ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E* __this, int32_t ___0_type, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_androidJavaObject, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValueEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdValueEventArgs__ctor_m2786F476E77E35470958434534FA8976541ED4E0 (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValueEventArgs::set_AdValue(GoogleMobileAds.Api.AdValue)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValueEventArgs_set_AdValue_mFDB2656F4BDBCC3CE719341385666747D72F357E_inline (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* __this, AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___0_value, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValue::set_Precision(GoogleMobileAds.Api.AdValue/PrecisionType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_Precision_m488B0F9CAEBACDD5013E094660C3DD58B362FD03_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdValue__ctor_mC8469F36ABE33454B249EBBA51574A1CFAC01010 (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* __this, RuntimeObject* ___0_sender, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline)((EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577*)__this, ___0_sender, (Il2CppFullySharedGenericAny)___1_e, method);
}
// System.Void GoogleMobileAds.Api.AdValue::set_CurrencyCode(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_CurrencyCode_mA493466D946C6484F0F20604EF0B013EA0571F71_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdValue::set_Value(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_Value_m7DF76A9D4ED62FE1F5FDBA6FEBBACD4E92115BE9_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Android.NativeAdInteractionHandlerClient::_UcUTV1J7xVwBRXi5kc1jYnxSp7p()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* NativeAdInteractionHandlerClient__UcUTV1J7xVwBRXi5kc1jYnxSp7p_mE61DAAF1EBB6D8CA6046E3FAEA1732332BE775E2 (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, const RuntimeMethod* method) ;
// System.String Google.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))AndroidJavaObject_Call_TisIl2CppFullySharedGenericAny_mCA7EED8FFBB862858FF426BD7D6B191F9C24234B_gshared)((AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)__this, ___0_methodName, ___1_args, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Common.NativeUtils::CastAssetIDMappings(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* NativeUtils_CastAssetIDMappings_m7E3C8BCCFD5A11C1B344838C26028076B70D52C2 (String_t* ___0_jsonMappings, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E__cctor_mFEE6D1AF7247BA240F45722DF5DF18F016D11468 (const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		U3CModuleU3E_U200CU206EU206AU200FU206DU202BU200DU200DU202CU206AU202EU200EU206FU200FU206CU206EU200BU200CU202CU200DU202BU200FU200FU206FU202AU202AU202CU206FU202AU206BU206EU200BU200DU200EU206AU200FU200DU200CU202BU200FU202E_m6EFE767FF4898D3F202F8A917897ABB443398355(NULL);
		return;
	}
}
// System.Byte[] <Module>::?????????????????????????????????????????(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* U3CModuleU3E_U206FU202AU206BU206DU200EU200EU202BU200CU202BU200DU200CU206BU206BU202DU202EU200CU202DU200BU200DU206AU206FU202EU200BU206BU202EU206AU202DU202CU200DU200BU200FU202DU206CU206FU202BU202CU206DU206DU200BU202DU202E_mE7A69621A1762AAEB556AE4F7CCFA5A43A6FFB0F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_7 = NULL;
	int64_t V_8 = 0;
	uint32_t V_9 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-966435484);
	}

IL_000c:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-229240495)));
		V_9 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)11))))
		{
			case 0:
			{
				goto IL_0080;
			}
			case 1:
			{
				goto IL_0064;
			}
			case 2:
			{
				goto IL_013d;
			}
			case 3:
			{
				goto IL_0007;
			}
			case 4:
			{
				goto IL_00f2;
			}
			case 5:
			{
				goto IL_00ca;
			}
			case 6:
			{
				goto IL_004e;
			}
			case 7:
			{
				goto IL_015c;
			}
			case 8:
			{
				goto IL_012a;
			}
			case 9:
			{
				goto IL_0104;
			}
			case 10:
			{
				goto IL_00aa;
			}
		}
	}
	{
		goto IL_015c;
	}

IL_004e:
	{
		int32_t L_3 = V_4;
		if ((((int32_t)L_3) >= ((int32_t)8)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_4 = ((int32_t)-1294416187);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_5 = ((int32_t)-1714315995);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
	}

IL_0061:
	{
		G_B2_0 = G_B7_1;
		goto IL_000c;
	}

IL_0064:
	{
		U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* L_6 = V_1;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = V_7;
		int64_t L_9 = V_8;
		int64_t L_10 = V_3;
		NullCheck(L_6);
		U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U206CU206BU206AU200CU206BU200CU200CU206CU200DU206FU200BU206EU202EU202EU200DU200DU202EU206CU206BU200EU200EU200BU206CU200DU202EU206AU206CU202CU206FU206CU206DU202DU202EU206BU202AU206DU202AU202EU202EU202EU202E_mA15388D19EBEF883059C8EDF924BB761AA0CFF46(L_6, L_7, L_8, L_9, L_10, NULL);
		uint32_t L_11 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)1207891724)))^((int32_t)2024218603)));
		goto IL_000c;
	}

IL_0080:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(21 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_12, L_13, 0, 5);
		U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* L_15 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_2;
		NullCheck(L_15);
		U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U206EU206FU200CU206FU202BU202EU202CU200FU202DU202CU200BU200FU202CU202BU200CU206CU206BU200BU206FU202BU206EU200BU202BU202EU206CU202CU200BU200EU200CU200BU206BU200CU206FU206BU200EU206CU202AU206EU206FU202AU202E_m89E4B71EA4B5A9F6F0FB9C0C2143BEC3CBA6F145(L_15, L_16, NULL);
		V_3 = ((int64_t)0);
		V_4 = 0;
		uint32_t L_17 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)-2081277928)))^((int32_t)631299282)));
		goto IL_000c;
	}

IL_00aa:
	{
		U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* L_18 = (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4*)il2cpp_codegen_object_new(U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E__ctor_m32A661BC347767D0762224DC7AC0D1831BDA4FA5(L_18, NULL);
		V_1 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)5);
		V_2 = L_19;
		uint32_t L_20 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)-1334841755)))^((int32_t)966888240)));
		goto IL_000c;
	}

IL_00ca:
	{
		int64_t L_21 = V_3;
		int32_t L_22 = V_5;
		int32_t L_23 = V_4;
		V_3 = ((int64_t)(L_21|((int64_t)(((int64_t)((int32_t)(uint8_t)L_22))<<((int32_t)(((int32_t)il2cpp_codegen_multiply(8, L_23))&((int32_t)63)))))));
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		uint32_t L_25 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_25, ((int32_t)-170237091)))^((int32_t)1321037705)));
		goto IL_000c;
	}

IL_00f2:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_26);
		V_5 = L_27;
		G_B2_0 = ((int32_t)-1743794790);
		goto IL_000c;
	}

IL_0104:
	{
		int64_t L_28 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)L_28));
		V_6 = L_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_6;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_31 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		MemoryStream__ctor_m5BAFB4CE0C3BB700DB05907C334DD64834D75D1B(L_31, L_30, (bool)1, NULL);
		V_7 = L_31;
		uint32_t L_32 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_32, ((int32_t)2076956158)))^((int32_t)944482719)));
		goto IL_000c;
	}

IL_012a:
	{
		uint32_t L_33 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_33, ((int32_t)1858554102)))^((int32_t)-502589612)));
		goto IL_000c;
	}

IL_013d:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_34 = V_0;
		NullCheck(L_34);
		int64_t L_35;
		L_35 = VirtualFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_34);
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_35, ((int64_t)((int32_t)13))));
		uint32_t L_36 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_36, ((int32_t)807114278)))^((int32_t)-1833324837)));
		goto IL_000c;
	}

IL_015c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_6;
		return L_37;
	}
}
// System.Void <Module>::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E_U200CU206EU206AU200FU206DU202BU200DU200DU202CU206AU202EU200EU206FU200FU206CU206EU200BU200CU202CU200DU202BU200FU200FU206FU202AU202AU202CU206FU202AU206BU206EU200BU200DU200EU206AU200FU200DU200CU202BU200FU202E_m6EFE767FF4898D3F202F8A917897ABB443398355 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C____U200CU200BU206AU200CU202EU200BU202EU200DU200EU200CU202BU200EU206DU202DU202AU206AU206BU202EU200FU206DU206AU206BU206CU202BU202DU206CU200DU202EU202DU200BU200FU200BU200FU202CU206BU200EU200BU202BU200DU206CU202E_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B48_1 = 0;
	{
		V_0 = ((int32_t)112);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)112));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C____U200CU200BU206AU200CU202EU200BU202EU200DU200EU200CU202BU200EU206DU202DU202AU206AU206BU202EU200FU206DU206AU206BU206CU202BU202DU206CU200DU202EU202DU200BU200FU200BU200FU202CU206BU200EU200BU202BU200DU206CU202E_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_2 = L_3;
		V_3 = ((int32_t)-1813260013);
		V_4 = 0;
		goto IL_021f;
	}

IL_002c:
	{
		G_B2_0 = ((int32_t)897043715);
	}

IL_0031:
	{
		int32_t L_4 = ((int32_t)(G_B2_0^((int32_t)1929044218)));
		V_12 = L_4;
		switch (((int32_t)((uint32_t)(int32_t)L_4%(uint32_t)(int32_t)((int32_t)36))))
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_011c;
			}
			case 2:
			{
				goto IL_01ed;
			}
			case 3:
			{
				goto IL_0198;
			}
			case 4:
			{
				goto IL_03b3;
			}
			case 5:
			{
				goto IL_021f;
			}
			case 6:
			{
				goto IL_01b2;
			}
			case 7:
			{
				goto IL_02cb;
			}
			case 8:
			{
				goto IL_0109;
			}
			case 9:
			{
				goto IL_02e3;
			}
			case 10:
			{
				goto IL_00d7;
			}
			case 11:
			{
				goto IL_046a;
			}
			case 12:
			{
				goto IL_039d;
			}
			case 13:
			{
				goto IL_0314;
			}
			case 14:
			{
				goto IL_0151;
			}
			case 15:
			{
				goto IL_01cb;
			}
			case 16:
			{
				goto IL_0176;
			}
			case 17:
			{
				goto IL_037b;
			}
			case 18:
			{
				goto IL_02a9;
			}
			case 19:
			{
				goto IL_0303;
			}
			case 20:
			{
				goto IL_03da;
			}
			case 21:
			{
				goto IL_03f0;
			}
			case 22:
			{
				goto IL_04db;
			}
			case 23:
			{
				goto IL_027a;
			}
			case 24:
			{
				goto IL_0137;
			}
			case 25:
			{
				goto IL_048c;
			}
			case 26:
			{
				goto IL_0239;
			}
			case 27:
			{
				goto IL_029c;
			}
			case 28:
			{
				goto IL_041b;
			}
			case 29:
			{
				goto IL_0363;
			}
			case 30:
			{
				goto IL_04c5;
			}
			case 31:
			{
				goto IL_00f6;
			}
			case 32:
			{
				goto IL_0340;
			}
			case 33:
			{
				goto IL_0260;
			}
			case 34:
			{
				goto IL_04ab;
			}
			case 35:
			{
				goto IL_032d;
			}
		}
	}
	{
		goto IL_04db;
	}

IL_00d7:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_7;
		NullCheck(L_6);
		int32_t L_7 = 3;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_8^(int32_t)L_11)));
		uint32_t L_12 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)551411800)))^((int32_t)263691406)));
		goto IL_0031;
	}

IL_00f6:
	{
		uint32_t L_13 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)1276780949)))^((int32_t)767792052)));
		goto IL_0031;
	}

IL_0109:
	{
		uint32_t L_14 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)282315282)))^((int32_t)1289971168)));
		goto IL_0031;
	}

IL_011c:
	{
		int32_t L_15 = V_5;
		uint32_t L_16 = V_0;
		if ((((int64_t)((int64_t)L_15)) >= ((int64_t)((int64_t)(uint64_t)L_16))))
		{
			goto IL_012b;
		}
	}
	{
		int32_t L_17 = ((int32_t)1351336545);
		G_B10_0 = L_17;
		G_B10_1 = L_17;
		goto IL_0131;
	}

IL_012b:
	{
		int32_t L_18 = ((int32_t)1368017936);
		G_B10_0 = L_18;
		G_B10_1 = L_18;
	}

IL_0131:
	{
		G_B2_0 = G_B10_1;
		goto IL_0031;
	}

IL_0137:
	{
		int32_t L_19 = V_10;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)16))))
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_20 = ((int32_t)750816111);
		G_B14_0 = L_20;
		G_B14_1 = L_20;
		goto IL_014b;
	}

IL_0145:
	{
		int32_t L_21 = ((int32_t)573997693);
		G_B14_0 = L_21;
		G_B14_1 = L_21;
	}

IL_014b:
	{
		G_B2_0 = G_B14_1;
		goto IL_0031;
	}

IL_0151:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_7;
		NullCheck(L_23);
		int32_t L_24 = ((int32_t)15);
		uint32_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27 = ((int32_t)15);
		uint32_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)((int32_t)L_25^(int32_t)L_28)));
		V_10 = 0;
		uint32_t L_29 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_29, ((int32_t)505160071)))^((int32_t)-77991701)));
		goto IL_0031;
	}

IL_0176:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_7;
		NullCheck(L_31);
		int32_t L_32 = ((int32_t)14);
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35 = ((int32_t)14);
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)((int32_t)L_33^(int32_t)L_36)));
		uint32_t L_37 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_37, ((int32_t)388213049)))^((int32_t)1684419488)));
		goto IL_0031;
	}

IL_0198:
	{
		uint32_t L_38 = V_3;
		uint32_t L_39 = V_3;
		V_3 = ((int32_t)((int32_t)L_38^((int32_t)((uint32_t)L_39>>((int32_t)27)))));
		uint32_t L_40 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_40, ((int32_t)-2045584564)))^((int32_t)1481579029)));
		goto IL_0031;
	}

IL_01b2:
	{
		int32_t L_41 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		uint32_t L_42 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_42, ((int32_t)-963803644)))^((int32_t)806795312)));
		goto IL_0031;
	}

IL_01cb:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_7;
		NullCheck(L_44);
		int32_t L_45 = ((int32_t)13);
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_2;
		NullCheck(L_47);
		int32_t L_48 = ((int32_t)13);
		uint32_t L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)((int32_t)((int32_t)L_46^(int32_t)L_49)));
		uint32_t L_50 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_50, ((int32_t)-1708182969)))^((int32_t)-1758510489)));
		goto IL_0031;
	}

IL_01ed:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_8;
		int32_t L_52 = V_6;
		int32_t L_53 = L_52;
		V_6 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		uint32_t L_54 = V_11;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_54>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_8;
		int32_t L_56 = V_6;
		int32_t L_57 = L_56;
		V_6 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		uint32_t L_58 = V_11;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_58>>((int32_t)16)))));
		uint32_t L_59 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_59, ((int32_t)-432085102)))^((int32_t)-741271190)));
		goto IL_0031;
	}

IL_021f:
	{
		int32_t L_60 = V_4;
		if ((((int32_t)L_60) >= ((int32_t)((int32_t)16))))
		{
			goto IL_022d;
		}
	}
	{
		int32_t L_61 = ((int32_t)897043715);
		G_B24_0 = L_61;
		G_B24_1 = L_61;
		goto IL_0233;
	}

IL_022d:
	{
		int32_t L_62 = ((int32_t)1482560772);
		G_B24_0 = L_62;
		G_B24_1 = L_62;
	}

IL_0233:
	{
		G_B2_0 = G_B24_1;
		goto IL_0031;
	}

IL_0239:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_7 = L_63;
		uint32_t L_64 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_64, 4))));
		V_8 = L_65;
		uint32_t L_66 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_66, ((int32_t)1704807217)))^((int32_t)1506466383)));
		goto IL_0031;
	}

IL_0260:
	{
		int32_t L_67 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_67, ((int32_t)16)));
		uint32_t L_68 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_68, ((int32_t)-854308639)))^((int32_t)-1518592110)));
		goto IL_0031;
	}

IL_027a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = V_7;
		NullCheck(L_70);
		int32_t L_71 = ((int32_t)10);
		uint32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = V_2;
		NullCheck(L_73);
		int32_t L_74 = ((int32_t)10);
		uint32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)((int32_t)((int32_t)L_72^(int32_t)L_75)));
		uint32_t L_76 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_76, ((int32_t)-1774128887)))^((int32_t)463787759)));
		goto IL_0031;
	}

IL_029c:
	{
		V_9 = 0;
		G_B2_0 = ((int32_t)1954550998);
		goto IL_0031;
	}

IL_02a9:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = V_7;
		NullCheck(L_78);
		int32_t L_79 = ((int32_t)11);
		uint32_t L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = ((int32_t)11);
		uint32_t L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)((int32_t)L_80^(int32_t)L_83)));
		uint32_t L_84 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_84, ((int32_t)918302140)))^((int32_t)-914238289)));
		goto IL_0031;
	}

IL_02cb:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = V_2;
		int32_t L_86 = V_4;
		uint32_t L_87 = V_3;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_86), (uint32_t)L_87);
		uint32_t L_88 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_88, ((int32_t)702032703)))^((int32_t)1873426894)));
		goto IL_0031;
	}

IL_02e3:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_8;
		int32_t L_90 = V_6;
		int32_t L_91 = L_90;
		V_6 = ((int32_t)il2cpp_codegen_add(L_91, 1));
		uint32_t L_92 = V_11;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (uint8_t)((int32_t)(uint8_t)L_92));
		uint32_t L_93 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_93, ((int32_t)1472415448)))^((int32_t)1423214236)));
		goto IL_0031;
	}

IL_0303:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = V_7;
		int32_t L_95 = V_10;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		uint32_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		V_11 = L_97;
		G_B2_0 = ((int32_t)2009474391);
		goto IL_0031;
	}

IL_0314:
	{
		int32_t L_98 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_98, 1));
		uint32_t L_99 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_99, ((int32_t)1333069059)))^((int32_t)732818264)));
		goto IL_0031;
	}

IL_032d:
	{
		uint32_t L_100 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_100, ((int32_t)-2022659794)))^((int32_t)-1889541972)));
		goto IL_0031;
	}

IL_0340:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = V_8;
		int32_t L_102 = V_6;
		int32_t L_103 = L_102;
		V_6 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		uint32_t L_104 = V_11;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_104>>((int32_t)24)))));
		uint32_t L_105 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_105, ((int32_t)-1544821862)))^((int32_t)-870950322)));
		goto IL_0031;
	}

IL_0363:
	{
		uint32_t L_106 = V_3;
		uint32_t L_107 = V_3;
		V_3 = ((int32_t)((int32_t)L_106^((int32_t)((uint32_t)L_107>>((int32_t)12)))));
		uint32_t L_108 = V_3;
		uint32_t L_109 = V_3;
		V_3 = ((int32_t)((int32_t)L_108^((int32_t)((int32_t)L_109<<((int32_t)25)))));
		G_B2_0 = ((int32_t)356269037);
		goto IL_0031;
	}

IL_037b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_111 = V_7;
		NullCheck(L_111);
		int32_t L_112 = ((int32_t)12);
		uint32_t L_113 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_114 = V_2;
		NullCheck(L_114);
		int32_t L_115 = ((int32_t)12);
		uint32_t L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)((int32_t)((int32_t)L_113^(int32_t)L_116)));
		uint32_t L_117 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_117, ((int32_t)-744840171)))^((int32_t)303369928)));
		goto IL_0031;
	}

IL_039d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_118 = V_7;
		int32_t L_119 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = V_1;
		int32_t L_121 = V_5;
		int32_t L_122 = V_9;
		NullCheck(L_120);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add(L_121, L_122));
		uint32_t L_124 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_119), (uint32_t)L_124);
		G_B2_0 = ((int32_t)325264456);
		goto IL_0031;
	}

IL_03b3:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = V_2;
		int32_t L_126 = V_10;
		NullCheck(L_125);
		uint32_t* L_127 = ((L_125)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_126)));
		int32_t L_128 = *((uint32_t*)L_127);
		uint32_t L_129 = V_11;
		*((int32_t*)L_127) = (int32_t)((int32_t)(L_128^(int32_t)L_129));
		int32_t L_130 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_130, 1));
		uint32_t L_131 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_131, ((int32_t)-1844620578)))^((int32_t)-1404831594)));
		goto IL_0031;
	}

IL_03da:
	{
		V_6 = 0;
		uint32_t L_132 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_132, ((int32_t)1628214935)))^((int32_t)-1751040000)));
		goto IL_0031;
	}

IL_03f0:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_134 = V_7;
		NullCheck(L_134);
		int32_t L_135 = 0;
		uint32_t L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = V_2;
		NullCheck(L_137);
		int32_t L_138 = 0;
		uint32_t L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_133);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_136^(int32_t)L_139)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_140 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = V_7;
		NullCheck(L_141);
		int32_t L_142 = 1;
		uint32_t L_143 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_144 = V_2;
		NullCheck(L_144);
		int32_t L_145 = 1;
		uint32_t L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		NullCheck(L_140);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_143^(int32_t)L_146)));
		uint32_t L_147 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_147, ((int32_t)1500772543)))^((int32_t)2104906528)));
		goto IL_0031;
	}

IL_041b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_148 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_149 = V_7;
		NullCheck(L_149);
		int32_t L_150 = 4;
		uint32_t L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_152 = V_2;
		NullCheck(L_152);
		int32_t L_153 = 4;
		uint32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)((int32_t)L_151^(int32_t)L_154)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_155 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_156 = V_7;
		NullCheck(L_156);
		int32_t L_157 = 5;
		uint32_t L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_159 = V_2;
		NullCheck(L_159);
		int32_t L_160 = 5;
		uint32_t L_161 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)((int32_t)L_158^(int32_t)L_161)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_162 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_163 = V_7;
		NullCheck(L_163);
		int32_t L_164 = 6;
		uint32_t L_165 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_166 = V_2;
		NullCheck(L_166);
		int32_t L_167 = 6;
		uint32_t L_168 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)((int32_t)L_165^(int32_t)L_168)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_169 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_170 = V_7;
		NullCheck(L_170);
		int32_t L_171 = 7;
		uint32_t L_172 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_173 = V_2;
		NullCheck(L_173);
		int32_t L_174 = 7;
		uint32_t L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)((int32_t)L_172^(int32_t)L_175)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_176 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_177 = V_7;
		NullCheck(L_177);
		int32_t L_178 = 8;
		uint32_t L_179 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_180 = V_2;
		NullCheck(L_180);
		int32_t L_181 = 8;
		uint32_t L_182 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		NullCheck(L_176);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)((int32_t)L_179^(int32_t)L_182)));
		uint32_t L_183 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_183, ((int32_t)-43619153)))^((int32_t)1556778397)));
		goto IL_0031;
	}

IL_046a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_184 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_185 = V_7;
		NullCheck(L_185);
		int32_t L_186 = ((int32_t)9);
		uint32_t L_187 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_188 = V_2;
		NullCheck(L_188);
		int32_t L_189 = ((int32_t)9);
		uint32_t L_190 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		NullCheck(L_184);
		(L_184)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)((int32_t)((int32_t)L_187^(int32_t)L_190)));
		uint32_t L_191 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_191, ((int32_t)-1471106496)))^((int32_t)-388606031)));
		goto IL_0031;
	}

IL_048c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_192 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_193 = V_7;
		NullCheck(L_193);
		int32_t L_194 = 2;
		uint32_t L_195 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_196 = V_2;
		NullCheck(L_196);
		int32_t L_197 = 2;
		uint32_t L_198 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		NullCheck(L_192);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_195^(int32_t)L_198)));
		uint32_t L_199 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_199, ((int32_t)448547992)))^((int32_t)-106412684)));
		goto IL_0031;
	}

IL_04ab:
	{
		int32_t L_200 = V_9;
		if ((((int32_t)L_200) < ((int32_t)((int32_t)16))))
		{
			goto IL_04b9;
		}
	}
	{
		int32_t L_201 = ((int32_t)1253645831);
		G_B48_0 = L_201;
		G_B48_1 = L_201;
		goto IL_04bf;
	}

IL_04b9:
	{
		int32_t L_202 = ((int32_t)2115387450);
		G_B48_0 = L_202;
		G_B48_1 = L_202;
	}

IL_04bf:
	{
		G_B2_0 = G_B48_1;
		goto IL_0031;
	}

IL_04c5:
	{
		V_5 = 0;
		uint32_t L_203 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_203, ((int32_t)2061681953)))^((int32_t)-1769795556)));
		goto IL_0031;
	}

IL_04db:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_204 = V_8;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_205;
		L_205 = U3CModuleU3E_U206FU202AU206BU206DU200EU200EU202BU200CU202BU200DU200CU206BU206BU202DU202EU200CU202DU200BU200DU206AU206FU202EU200BU206BU202EU206AU202DU202CU200DU200BU200FU202DU206CU206FU202BU202CU206DU206DU200BU202DU202E_mE7A69621A1762AAEB556AE4F7CCFA5A43A6FFB0F(L_204, NULL);
		((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2 = L_205;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_StaticFields*)il2cpp_codegen_static_fields_for(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var))->___U200CU200EU202DU206FU206FU202AU202BU202DU206BU206EU206AU200FU206EU200DU202BU200DU206FU206DU206FU206EU202CU202EU206DU200CU202BU206FU202BU206FU202AU206AU200DU202BU202DU202DU206DU206FU206EU206CU206FU200DU202E_2), (void*)L_205);
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
// System.Void <Module>/????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		__this->___U206AU202DU200BU202DU200EU206AU202DU202EU200CU206BU200BU202AU200FU206BU200CU202EU200CU200EU206CU202BU206DU202EU206DU202AU206AU206DU206AU206DU200FU206AU200DU206AU206AU202DU200DU206FU206CU206FU206AU206EU202E_0 = ((int32_t)1024);
		return;
	}
}
IL2CPP_EXTERN_C  void U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D*>(__this + _offset);
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B(_thisAdjusted, method);
}
// System.UInt32 <Module>/????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	{
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_0 = ___0_p;
		NullCheck(L_0);
		uint32_t L_1 = L_0->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1;
		uint32_t L_2 = __this->___U206AU202DU200BU202DU200EU206AU202DU202EU200CU206BU200BU202AU200FU206BU200CU202EU200CU200EU206CU202BU206DU202EU206DU202AU206AU206DU206AU206DU200FU206AU200DU206AU206AU202DU200DU206FU206CU206FU206AU206EU202E_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((uint32_t)L_1>>((int32_t)11))), (int32_t)L_2));
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_3 = ___0_p;
		NullCheck(L_3);
		uint32_t L_4 = L_3->___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0;
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_4) < ((uint32_t)L_5))))
		{
			goto IL_018b;
		}
	}

IL_001d:
	{
		G_B2_0 = ((int32_t)-509579243);
	}

IL_0022:
	{
		int32_t L_6 = ((int32_t)(G_B2_0^((int32_t)-1817280589)));
		V_1 = L_6;
		switch (((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)((int32_t)13))))
		{
			case 0:
			{
				goto IL_0088;
			}
			case 1:
			{
				goto IL_006b;
			}
			case 2:
			{
				goto IL_00ea;
			}
			case 3:
			{
				goto IL_0103;
			}
			case 4:
			{
				goto IL_00b1;
			}
			case 5:
			{
				goto IL_0130;
			}
			case 6:
			{
				goto IL_01a3;
			}
			case 7:
			{
				goto IL_00de;
			}
			case 8:
			{
				goto IL_018b;
			}
			case 9:
			{
				goto IL_001d;
			}
			case 10:
			{
				goto IL_01ca;
			}
			case 11:
			{
				goto IL_01f3;
			}
			case 12:
			{
				goto IL_016b;
			}
		}
	}
	{
		goto IL_01f3;
	}

IL_006b:
	{
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_7 = ___0_p;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_8 = L_7;
		NullCheck(L_8);
		uint32_t L_9 = L_8->___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0;
		uint32_t L_10 = V_0;
		NullCheck(L_8);
		L_8->___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10));
		uint32_t L_11 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)1117004679)))^((int32_t)-8618206)));
		goto IL_0022;
	}

IL_0088:
	{
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_12 = ___0_p;
		NullCheck(L_12);
		uint32_t L_13 = L_12->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1;
		if ((!(((uint32_t)L_13) < ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_14 = ((int32_t)-236257876);
		G_B8_0 = L_14;
		G_B8_1 = L_14;
		goto IL_00a3;
	}

IL_009d:
	{
		int32_t L_15 = ((int32_t)-1238302434);
		G_B8_0 = L_15;
		G_B8_1 = L_15;
	}

IL_00a3:
	{
		uint32_t L_16 = V_1;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)360643023)))));
		goto IL_0022;
	}

IL_00b1:
	{
		uint32_t L_17 = __this->___U206AU202DU200BU202DU200EU206AU202DU202EU200CU206BU200BU202AU200FU206BU200CU202EU200CU200EU206CU202BU206DU202EU206DU202AU206AU206DU206AU206DU200FU206AU200DU206AU206AU202DU200DU206FU206CU206FU206AU206EU202E_0;
		uint32_t L_18 = __this->___U206AU202DU200BU202DU200EU206AU202DU202EU200CU206BU200BU202AU200FU206BU200CU202EU200CU200EU206CU202BU206DU202EU206DU202AU206AU206DU206AU206DU200FU206AU200DU206AU206AU202DU200DU206FU206CU206FU206AU206EU202E_0;
		__this->___U206AU202DU200BU202DU200EU206AU202DU202EU200CU206BU200BU202AU200FU206BU200CU202EU200CU200EU206CU202BU206DU202EU206DU202AU206AU206DU206AU206DU200FU206AU200DU206AU206AU202DU200DU206FU206CU206FU206AU206EU202E_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)2048), (int32_t)L_18))>>5))));
		uint32_t L_19 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)1959824604)))^((int32_t)289487961)));
		goto IL_0022;
	}

IL_00de:
	{
		return 0;
	}
	// Dead block : IL_00e0: ldc.i4 -1015269394

IL_00ea:
	{
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_20 = ___0_p;
		uint32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1 = L_21;
		uint32_t L_22 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, ((int32_t)1609029941)))^((int32_t)-1329839424)));
		goto IL_0022;
	}

IL_0103:
	{
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_23 = ___0_p;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_24 = ___0_p;
		NullCheck(L_24);
		uint32_t L_25 = L_24->___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_26 = ___0_p;
		NullCheck(L_26);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_27 = L_26->___U202AU206AU200EU202EU202CU200BU200EU206AU200EU206AU206BU206EU200CU206CU206AU202DU206EU206EU202BU200EU202DU202EU202CU206EU200FU206EU206AU200BU206EU202AU202DU206EU206FU202BU200FU200DU206FU206FU200BU206DU202E_2;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_27);
		NullCheck(L_23);
		L_23->___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0 = ((int32_t)(((int32_t)((int32_t)L_25<<8))|((int32_t)(uint8_t)L_28)));
		uint32_t L_29 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_29, ((int32_t)-356453380)))^((int32_t)-1240954012)));
		goto IL_0022;
	}

IL_0130:
	{
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_30 = ___0_p;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_31 = ___0_p;
		NullCheck(L_31);
		uint32_t L_32 = L_31->___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_33 = ___0_p;
		NullCheck(L_33);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_34 = L_33->___U202AU206AU200EU202EU202CU200BU200EU206AU200EU206AU206BU206EU200CU206CU206AU202DU206EU206EU202BU200EU202DU202EU202CU206EU200FU206EU206AU200BU206EU202AU202DU206EU206FU202BU200FU200DU206FU206FU200BU206DU202E_2;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_34);
		NullCheck(L_30);
		L_30->___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0 = ((int32_t)(((int32_t)((int32_t)L_32<<8))|((int32_t)(uint8_t)L_35)));
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_36 = ___0_p;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_37 = L_36;
		NullCheck(L_37);
		uint32_t L_38 = L_37->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1;
		NullCheck(L_37);
		L_37->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1 = ((int32_t)((int32_t)L_38<<8));
		uint32_t L_39 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)150062043)))^((int32_t)-162050061)));
		goto IL_0022;
	}

IL_016b:
	{
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_40 = ___0_p;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_41 = L_40;
		NullCheck(L_41);
		uint32_t L_42 = L_41->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1;
		NullCheck(L_41);
		L_41->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1 = ((int32_t)((int32_t)L_42<<8));
		uint32_t L_43 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_43, ((int32_t)405840733)))^((int32_t)1097481420)));
		goto IL_0022;
	}

IL_018b:
	{
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_44 = ___0_p;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_45 = L_44;
		NullCheck(L_45);
		uint32_t L_46 = L_45->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1;
		uint32_t L_47 = V_0;
		NullCheck(L_45);
		L_45->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)L_47));
		G_B2_0 = ((int32_t)-1810461140);
		goto IL_0022;
	}

IL_01a3:
	{
		uint32_t L_48 = __this->___U206AU202DU200BU202DU200EU206AU202DU202EU200CU206BU200BU202AU200FU206BU200CU202EU200CU200EU206CU202BU206DU202EU206DU202AU206AU206DU206AU206DU200FU206AU200DU206AU206AU202DU200DU206FU206CU206FU206AU206EU202E_0;
		uint32_t L_49 = __this->___U206AU202DU200BU202DU200EU206AU202DU202EU200CU206BU200BU202AU200FU206BU200CU202EU200CU200EU206CU202BU206DU202EU206DU202AU206AU206DU206AU206DU200FU206AU200DU206AU206AU202DU200DU206FU206CU206FU206AU206EU202E_0;
		__this->___U206AU202DU200BU202DU200EU206AU202DU202EU200CU206BU200BU202AU200FU206BU200CU202EU200CU200EU206CU202BU206DU202EU206DU202AU206AU206DU206AU206DU200FU206AU200DU206AU206AU202DU200DU206FU206CU206FU206AU206EU202E_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, ((int32_t)((uint32_t)L_49>>5))));
		uint32_t L_50 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_50, ((int32_t)-1879079668)))^((int32_t)1095784268)));
		goto IL_0022;
	}

IL_01ca:
	{
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_51 = ___0_p;
		NullCheck(L_51);
		uint32_t L_52 = L_51->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1;
		if ((!(((uint32_t)L_52) >= ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_01df;
		}
	}
	{
		int32_t L_53 = ((int32_t)1470967009);
		G_B21_0 = L_53;
		G_B21_1 = L_53;
		goto IL_01e5;
	}

IL_01df:
	{
		int32_t L_54 = ((int32_t)1545933745);
		G_B21_0 = L_54;
		G_B21_1 = L_54;
	}

IL_01e5:
	{
		uint32_t L_55 = V_1;
		G_B2_0 = ((int32_t)(G_B21_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_55, ((int32_t)427385967)))));
		goto IL_0022;
	}

IL_01f3:
	{
		return 1;
	}
}
IL2CPP_EXTERN_C  uint32_t U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A_AdjustorThunk (RuntimeObject* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, const RuntimeMethod* method)
{
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(_thisAdjusted, ___0_p, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: <Module>/?????????????????????????????????????????
IL2CPP_EXTERN_C void U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C_marshal_pinvoke(const U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C& unmarshaled, U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledU206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_Length = (unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0)->max_length;
		marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 = il2cpp_codegen_marshal_allocate_array<U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D>(_unmarshaledU206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledU206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_Length); i++)
		{
			(marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0)[i] = (unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 = NULL;
	}
	marshaled.___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1 = unmarshaled.___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1;
}
IL2CPP_EXTERN_C void U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C_marshal_pinvoke_back(const U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C_marshaled_pinvoke& marshaled, U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 != NULL)
	{
		if (unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 == NULL)
		{
			unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 = reinterpret_cast<U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*>((U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0), (void*)reinterpret_cast<U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*>((U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0)[i]);
		}
	}
	int32_t unmarshaledU202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_temp_1 = 0;
	unmarshaledU202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_temp_1 = marshaled.___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1;
	unmarshaled.___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1 = unmarshaledU202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_temp_1;
}
// Conversion method for clean up from marshalling of: <Module>/?????????????????????????????????????????
IL2CPP_EXTERN_C void U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C_marshal_pinvoke_cleanup(U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C_marshaled_pinvoke& marshaled)
{
	if (marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0);
		marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 = NULL;
	}
}
// Conversion methods for marshalling of: <Module>/?????????????????????????????????????????
IL2CPP_EXTERN_C void U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C_marshal_com(const U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C& unmarshaled, U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C_marshaled_com& marshaled)
{
	if (unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledU206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_Length = (unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0)->max_length;
		marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 = il2cpp_codegen_marshal_allocate_array<U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D>(_unmarshaledU206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledU206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_Length); i++)
		{
			(marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0)[i] = (unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 = NULL;
	}
	marshaled.___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1 = unmarshaled.___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1;
}
IL2CPP_EXTERN_C void U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C_marshal_com_back(const U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C_marshaled_com& marshaled, U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 != NULL)
	{
		if (unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 == NULL)
		{
			unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 = reinterpret_cast<U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*>((U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0), (void*)reinterpret_cast<U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*>((U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0)[i]);
		}
	}
	int32_t unmarshaledU202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_temp_1 = 0;
	unmarshaledU202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_temp_1 = marshaled.___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1;
	unmarshaled.___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1 = unmarshaledU202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_temp_1;
}
// Conversion method for clean up from marshalling of: <Module>/?????????????????????????????????????????
IL2CPP_EXTERN_C void U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C_marshal_com_cleanup(U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C_marshaled_com& marshaled)
{
	if (marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0);
		marshaled.___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 = NULL;
	}
}
// System.Void <Module>/?????????????????????????????????????????::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E__ctor_m0DA983E9D47D7F98252B00151BC632C68202CCE0 (U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* __this, int32_t ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___0_p;
		__this->___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1 = L_0;
		int32_t L_1 = ___0_p;
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_2 = (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(1<<((int32_t)(L_1&((int32_t)31))))));
		__this->___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E__ctor_m0DA983E9D47D7F98252B00151BC632C68202CCE0_AdjustorThunk (RuntimeObject* __this, int32_t ___0_p, const RuntimeMethod* method)
{
	U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C*>(__this + _offset);
	U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E__ctor_m0DA983E9D47D7F98252B00151BC632C68202CCE0(_thisAdjusted, ___0_p, method);
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U206CU206BU202EU202CU200DU200EU202AU200DU202DU200CU206EU200FU206AU202AU206DU206CU206DU206EU206DU206CU200FU202EU202EU202BU206EU206EU202DU206AU202BU202CU202BU206DU202DU206EU200BU200EU200EU206AU202BU206EU202E_m22F86B8CD52D230ECD7AD75DD3C8D221D6C85C0F (U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)-989971839);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-1321910526)));
		V_1 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_005c;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0079;
			}
			case 3:
			{
				goto IL_003b;
			}
			case 4:
			{
				goto IL_0002;
			}
		}
	}
	{
		goto IL_0079;
	}

IL_002c:
	{
		uint32_t L_1 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)-1125250336)))^((int32_t)-572554544)));
		goto IL_0007;
	}

IL_003b:
	{
		uint32_t L_2 = V_0;
		int32_t L_3 = __this->___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1;
		if ((((int64_t)((int64_t)(uint64_t)L_2)) < ((int64_t)((int64_t)((int32_t)(1<<((int32_t)(L_3&((int32_t)31)))))))))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_4 = ((int32_t)-2125971753);
		G_B8_0 = L_4;
		G_B8_1 = L_4;
		goto IL_0059;
	}

IL_0053:
	{
		int32_t L_5 = ((int32_t)-1687003254);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
	}

IL_0059:
	{
		G_B2_0 = G_B8_1;
		goto IL_0007;
	}

IL_005c:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_6 = __this->___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_7)))), NULL);
		uint32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, 1));
		G_B2_0 = ((int32_t)-1904577936);
		goto IL_0007;
	}

IL_0079:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U206CU206BU202EU202CU200DU200EU202AU200DU202DU200CU206EU200FU206AU202AU206DU206CU206DU206EU206DU206CU200FU202EU202EU202BU206EU206EU202DU206AU202BU202CU202BU206DU202DU206EU200BU200EU200EU206AU202BU206EU202E_m22F86B8CD52D230ECD7AD75DD3C8D221D6C85C0F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C*>(__this + _offset);
	U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U206CU206BU202EU202CU200DU200EU202AU200DU202DU200CU206EU200FU206AU202AU206DU206CU206DU206EU206DU206CU200FU202EU202EU202BU206EU206EU202DU206AU202BU202CU202BU206DU202DU206EU200BU200EU200EU206AU202BU206EU202E_m22F86B8CD52D230ECD7AD75DD3C8D221D6C85C0F(_thisAdjusted, method);
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U202EU200EU206AU202EU200BU206CU206DU200BU206EU206EU206AU206FU206EU200FU202CU200CU206CU200CU200DU206BU200FU206EU200CU206DU200DU202BU202EU206AU206FU200CU202BU202DU200CU200DU202EU206DU200CU200EU206CU200CU202E_m11C6E23613302207ACC9C3EC7909CBD6CC4BBBB1 (U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		V_0 = 1;
		int32_t L_0 = __this->___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1;
		V_1 = L_0;
	}

IL_0009:
	{
		G_B2_0 = ((int32_t)-815253473);
	}

IL_000e:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-531329904)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_0009;
			}
			case 1:
			{
				goto IL_0037;
			}
			case 2:
			{
				goto IL_0059;
			}
			case 3:
			{
				goto IL_008d;
			}
			case 4:
			{
				goto IL_006e;
			}
			case 5:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_008d;
	}

IL_0037:
	{
		uint32_t L_2 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)-1352112923)))^((int32_t)-428367867)));
		goto IL_000e;
	}

IL_0046:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		uint32_t L_4 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-824528505)))^((int32_t)508723023)));
		goto IL_000e;
	}

IL_0059:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_6 = ((int32_t)-1265086795);
		G_B9_0 = L_6;
		G_B9_1 = L_6;
		goto IL_006b;
	}

IL_0065:
	{
		int32_t L_7 = ((int32_t)-1570708256);
		G_B9_0 = L_7;
		G_B9_1 = L_7;
	}

IL_006b:
	{
		G_B2_0 = G_B9_1;
		goto IL_000e;
	}

IL_006e:
	{
		uint32_t L_8 = V_0;
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_9 = __this->___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0;
		uint32_t L_10 = V_0;
		NullCheck(L_9);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_11 = ___0_p;
		uint32_t L_12;
		L_12 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_10)))), L_11, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_8<<1)), (int32_t)L_12));
		G_B2_0 = ((int32_t)-296293881);
		goto IL_000e;
	}

IL_008d:
	{
		uint32_t L_13 = V_0;
		int32_t L_14 = __this->___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)(1<<((int32_t)(L_14&((int32_t)31)))))));
	}
}
IL2CPP_EXTERN_C  uint32_t U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U202EU200EU206AU202EU200BU206CU206DU200BU206EU206EU206AU206FU206EU200FU202CU200CU206CU200CU200DU206BU200FU206EU200CU206DU200DU202BU202EU206AU206FU200CU202BU202DU200CU200DU202EU206DU200CU200EU206CU200CU202E_m11C6E23613302207ACC9C3EC7909CBD6CC4BBBB1_AdjustorThunk (RuntimeObject* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, const RuntimeMethod* method)
{
	U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U202EU200EU206AU202EU200BU206CU206DU200BU206EU206EU206AU206FU206EU200FU202CU200CU206CU200CU200DU206BU200FU206EU200CU206DU200DU202BU202EU206AU206FU200CU202BU202DU200CU200DU202EU206DU200CU200EU206CU200CU202E_m11C6E23613302207ACC9C3EC7909CBD6CC4BBBB1(_thisAdjusted, ___0_p, method);
	return _returnValue;
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U206EU200BU206FU206FU206AU200BU206FU200DU206EU200BU206EU206AU202AU200EU200FU200FU202BU202CU200EU206FU206DU200CU200FU200EU202DU202EU202EU206CU206BU200DU202CU200FU206DU202EU200BU200BU200CU206CU202DU200DU202E_m58CDEDE7F052C4A8E91D9E1C48E45BFD3413BC98 (U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)-1940588287);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-1071256045)));
		V_4 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)8)))
		{
			case 0:
			{
				goto IL_007d;
			}
			case 1:
			{
				goto IL_006b;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_003c;
			}
			case 4:
			{
				goto IL_00af;
			}
			case 5:
			{
				goto IL_005b;
			}
			case 6:
			{
				goto IL_0002;
			}
			case 7:
			{
				goto IL_00d3;
			}
		}
	}
	{
		goto IL_00d3;
	}

IL_003c:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_1 = __this->___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0;
		uint32_t L_2 = V_0;
		NullCheck(L_1);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_3 = ___0_p;
		uint32_t L_4;
		L_4 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_2)))), L_3, NULL);
		V_3 = L_4;
		uint32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5<<1));
		G_B2_0 = ((int32_t)-394024905);
		goto IL_0007;
	}

IL_005b:
	{
		uint32_t L_6 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)1519114438)))^((int32_t)1448663973)));
		goto IL_0007;
	}

IL_006b:
	{
		V_2 = 0;
		uint32_t L_7 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-43983002)))^((int32_t)-929295688)));
		goto IL_0007;
	}

IL_007d:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = __this->___U202BU206BU200FU202BU200CU202AU202AU200DU206EU200BU206CU206DU200DU202BU200FU206FU200FU202BU202DU200FU202DU200FU206EU206EU200EU200EU206FU206CU202DU206AU202BU202CU206BU206BU200BU200DU202AU202EU200FU206AU202E_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_10 = ((int32_t)-1284627492);
		G_B10_0 = L_10;
		G_B10_1 = L_10;
		goto IL_0094;
	}

IL_008e:
	{
		int32_t L_11 = ((int32_t)-34547672);
		G_B10_0 = L_11;
		G_B10_1 = L_11;
	}

IL_0094:
	{
		G_B2_0 = G_B10_1;
		goto IL_0007;
	}

IL_009a:
	{
		V_1 = 0;
		uint32_t L_12 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)1326832307)))^((int32_t)-1368808716)));
		goto IL_0007;
	}

IL_00af:
	{
		uint32_t L_13 = V_0;
		uint32_t L_14 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14));
		uint32_t L_15 = V_1;
		uint32_t L_16 = V_3;
		int32_t L_17 = V_2;
		V_1 = ((int32_t)((int32_t)L_15|((int32_t)((int32_t)L_16<<((int32_t)(L_17&((int32_t)31)))))));
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint32_t L_19 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)-1287183332)))^((int32_t)-206147173)));
		goto IL_0007;
	}

IL_00d3:
	{
		uint32_t L_20 = V_1;
		return L_20;
	}
}
IL2CPP_EXTERN_C  uint32_t U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U206EU200BU206FU206FU206AU200BU206FU200DU206EU200BU206EU206AU202AU200EU200FU200FU202BU202CU200EU206FU206DU200CU200FU200EU202DU202EU202EU206CU206BU200DU202CU200FU206DU202EU200BU200BU200CU206CU202DU200DU202E_m58CDEDE7F052C4A8E91D9E1C48E45BFD3413BC98_AdjustorThunk (RuntimeObject* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, const RuntimeMethod* method)
{
	U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U206EU200BU206FU206FU206AU200BU206FU200DU206EU200BU206EU206AU202AU200EU200FU200FU202BU202CU200EU206FU206DU200CU200FU200EU202DU202EU202EU206CU206BU200DU202CU200FU206DU202EU200BU200BU200CU206CU202DU200DU202E_m58CDEDE7F052C4A8E91D9E1C48E45BFD3413BC98(_thisAdjusted, ___0_p, method);
	return _returnValue;
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/????????????????????????????????????????[],System.UInt32,<Module>/?????????????????????????????????????????,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U202AU200BU200EU202DU206DU200EU202AU200CU206CU206DU202EU206CU202EU202EU202AU202CU200FU202AU206DU200FU202AU206BU202DU202EU206EU202CU202BU200FU206AU206DU202AU206CU200EU206BU202EU206DU206DU200CU206DU206FU202E_mD3262C01160F05F4F9854759F8BEBC12A39476E1 (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* ___0_p, uint32_t ___1_p, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___2_p, int32_t ___3_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)-1613148265);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-390312031)));
		V_4 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)((int32_t)9))))
		{
			case 0:
			{
				goto IL_009f;
			}
			case 1:
			{
				goto IL_006b;
			}
			case 2:
			{
				goto IL_00b4;
			}
			case 3:
			{
				goto IL_0053;
			}
			case 4:
			{
				goto IL_00e3;
			}
			case 5:
			{
				goto IL_007f;
			}
			case 6:
			{
				goto IL_0002;
			}
			case 7:
			{
				goto IL_0041;
			}
			case 8:
			{
				goto IL_00cb;
			}
		}
	}
	{
		goto IL_00e3;
	}

IL_0041:
	{
		V_1 = 0;
		uint32_t L_1 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)-717151100)))^((int32_t)1151862249)));
		goto IL_0007;
	}

IL_0053:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_2 = ___0_p;
		uint32_t L_3 = ___1_p;
		uint32_t L_4 = V_0;
		NullCheck(L_2);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_5 = ___2_p;
		uint32_t L_6;
		L_6 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4)))))), L_5, NULL);
		V_3 = L_6;
		G_B2_0 = ((int32_t)-714106453);
		goto IL_0007;
	}

IL_006b:
	{
		uint32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7<<1));
		uint32_t L_8 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)1573819992)))^((int32_t)-926168458)));
		goto IL_0007;
	}

IL_007f:
	{
		uint32_t L_9 = V_1;
		uint32_t L_10 = V_3;
		int32_t L_11 = V_2;
		V_1 = ((int32_t)((int32_t)L_9|((int32_t)((int32_t)L_10<<((int32_t)(L_11&((int32_t)31)))))));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		uint32_t L_13 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1167151105)))^((int32_t)-87652741)));
		goto IL_0007;
	}

IL_009f:
	{
		V_2 = 0;
		uint32_t L_14 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)1893690058)))^((int32_t)76622736)));
		goto IL_0007;
	}

IL_00b4:
	{
		uint32_t L_15 = V_0;
		uint32_t L_16 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
		uint32_t L_17 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)1511049191)))^((int32_t)1786809253)));
		goto IL_0007;
	}

IL_00cb:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = ___3_p;
		if ((((int32_t)L_18) >= ((int32_t)L_19)))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_20 = ((int32_t)-1523292701);
		G_B13_0 = L_20;
		G_B13_1 = L_20;
		goto IL_00dd;
	}

IL_00d7:
	{
		int32_t L_21 = ((int32_t)-1075029074);
		G_B13_0 = L_21;
		G_B13_1 = L_21;
	}

IL_00dd:
	{
		G_B2_0 = G_B13_1;
		goto IL_0007;
	}

IL_00e3:
	{
		uint32_t L_22 = V_1;
		return L_22;
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
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E__ctor_m361EF92A5F5AFB509DBE160D56CF639FDC3A1A3A (U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_U206DU200CU202BU200DU206CU200CU200DU202AU202EU206DU206BU206DU206FU202CU206DU202CU202AU200EU200BU206CU202AU206CU206EU202BU202EU200FU206CU206AU202DU200EU206AU202CU206FU206FU206BU202BU202DU206BU202BU206CU202E_mD605740753FDE123716ED1E1EC64D8E2EC4AB8D7 (U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_p, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_p;
		__this->___U202AU206AU200EU202EU202CU200BU200EU206AU200EU206AU206BU206EU200CU206CU206AU202DU206EU206EU202BU200EU202DU202EU202CU206EU200FU206EU206AU200BU206EU202AU202DU206EU206FU202BU200FU200DU206FU206FU200BU206DU202E_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202AU206AU200EU202EU202CU200BU200EU206AU200EU206AU206BU206EU200CU206CU206AU202DU206EU206EU202BU200EU202DU202EU202CU206EU200FU206EU206AU200BU206EU202AU202DU206EU206FU202BU200FU200DU206FU206FU200BU206DU202E_2), (void*)L_0);
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1780494112);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1781821615)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)8)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_00d0;
			}
			case 4:
			{
				goto IL_009f;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_00ba;
			}
			case 7:
			{
				goto IL_0040;
			}
		}
	}
	{
		goto IL_00d0;
	}

IL_0040:
	{
		__this->___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0 = 0;
		uint32_t L_2 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)-1888053976)))^((int32_t)-597644685)));
		goto IL_000c;
	}

IL_0056:
	{
		uint32_t L_3 = __this->___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___U202AU206AU200EU202EU202CU200BU200EU206AU200EU206AU206BU206EU200CU206CU206AU202DU206EU206EU202BU200EU202DU202EU202CU206EU200FU206EU206AU200BU206EU202AU202DU206EU206FU202BU200FU200DU206FU206FU200BU206DU202E_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_4);
		__this->___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0 = ((int32_t)(((int32_t)((int32_t)L_3<<8))|((int32_t)(uint8_t)L_5)));
		G_B2_0 = ((int32_t)1317430273);
		goto IL_000c;
	}

IL_0078:
	{
		uint32_t L_6 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)1671386775)))^((int32_t)1551618730)));
		goto IL_000c;
	}

IL_0087:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)5)))
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_8 = ((int32_t)806569218);
		G_B10_0 = L_8;
		G_B10_1 = L_8;
		goto IL_0099;
	}

IL_0093:
	{
		int32_t L_9 = ((int32_t)2127025452);
		G_B10_0 = L_9;
		G_B10_1 = L_9;
	}

IL_0099:
	{
		G_B2_0 = G_B10_1;
		goto IL_000c;
	}

IL_009f:
	{
		__this->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1 = (-1);
		V_0 = 0;
		uint32_t L_10 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)1675687725)))^((int32_t)1869101082)));
		goto IL_000c;
	}

IL_00ba:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		uint32_t L_12 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)-50683644)))^((int32_t)1707631109)));
		goto IL_000c;
	}

IL_00d0:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_U206FU206AU200EU206EU206CU200FU202CU200CU200BU206FU200FU206DU206AU206EU200FU206CU202DU200DU200FU202EU206FU206AU200BU200DU206BU206AU202BU206FU206FU200CU206CU206FU202EU206AU202DU202DU202BU206BU206DU200EU202E_m27EB8F41F824C130C08A061E7F663D0CDB6C7EB1 (U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		__this->___U202AU206AU200EU202EU202CU200BU200EU206AU200EU206AU206BU206EU200CU206CU206AU202DU206EU206EU202BU200EU202DU202EU202CU206EU200FU206EU206AU200BU206EU202AU202DU206EU206FU202BU200FU200DU206FU206FU200BU206DU202E_2 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202AU206AU200EU202EU202CU200BU200EU206AU200EU206AU206BU206EU200CU206CU206AU202DU206EU206EU202BU200EU202DU202EU202CU206EU200FU206EU206AU200BU206EU202AU202DU206EU206FU202BU200FU200DU206FU206FU200BU206DU202E_2), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_U206CU200BU200DU206FU206BU206AU200CU200EU206EU206CU202AU206AU200CU206BU200BU206BU200FU206AU200CU206AU206BU200DU206FU202CU200FU206CU200BU202CU202DU200FU206DU200EU206AU202CU206AU202BU202EU202CU200CU206BU202E_m781556C30FFBC7E9CF8DFD4D9B1AE4A814D7E083 (U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		goto IL_006b;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)1227753979);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)58563860)));
		V_0 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_008c;
			}
			case 2:
			{
				goto IL_0002;
			}
			case 3:
			{
				goto IL_006b;
			}
			case 4:
			{
				goto IL_002c;
			}
		}
	}
	{
		goto IL_008c;
	}

IL_002c:
	{
		uint32_t L_1 = __this->___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___U202AU206AU200EU202EU202CU200BU200EU206AU200EU206AU206BU206EU200CU206CU206AU202DU206EU206EU202BU200EU202DU202EU202CU206EU200FU206EU206AU200BU206EU202AU202DU206EU206FU202BU200FU200DU206FU206FU200BU206DU202E_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_2);
		__this->___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0 = ((int32_t)(((int32_t)((int32_t)L_1<<8))|((int32_t)(uint8_t)L_3)));
		G_B2_0 = ((int32_t)1022663038);
		goto IL_0007;
	}

IL_004e:
	{
		uint32_t L_4 = __this->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1;
		__this->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1 = ((int32_t)((int32_t)L_4<<8));
		uint32_t L_5 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)304351706)))^((int32_t)-1119993269)));
		goto IL_0007;
	}

IL_006b:
	{
		uint32_t L_6 = __this->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1;
		if ((!(((uint32_t)L_6) < ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_7 = ((int32_t)1227753979);
		G_B9_0 = L_7;
		G_B9_1 = L_7;
		goto IL_0086;
	}

IL_0080:
	{
		int32_t L_8 = ((int32_t)1213856866);
		G_B9_0 = L_8;
		G_B9_1 = L_8;
	}

IL_0086:
	{
		G_B2_0 = G_B9_1;
		goto IL_0007;
	}

IL_008c:
	{
		return;
	}
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_U206FU200DU200EU202AU202BU200FU206FU200BU206CU200DU200DU202DU200CU206FU202AU202DU200FU206FU200BU202EU206DU206EU200DU202EU200BU206FU200EU200EU206AU202DU202AU200BU200DU206DU206BU206EU200EU200DU200FU202CU202E_m0EC2E771C35B2C5043DF4432602047105AE490E8 (U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* __this, int32_t ___0_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	{
		uint32_t L_0 = __this->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1;
		V_0 = L_0;
		uint32_t L_1 = __this->___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0;
		V_1 = L_1;
	}

IL_000e:
	{
		G_B2_0 = ((int32_t)-288343306);
	}

IL_0013:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-1483130456)));
		V_5 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)13))))
		{
			case 0:
			{
				goto IL_00ae;
			}
			case 1:
			{
				goto IL_0148;
			}
			case 2:
			{
				goto IL_00c6;
			}
			case 3:
			{
				goto IL_0124;
			}
			case 4:
			{
				goto IL_00e0;
			}
			case 5:
			{
				goto IL_00f3;
			}
			case 6:
			{
				goto IL_0084;
			}
			case 7:
			{
				goto IL_010d;
			}
			case 8:
			{
				goto IL_000e;
			}
			case 9:
			{
				goto IL_0176;
			}
			case 10:
			{
				goto IL_005d;
			}
			case 11:
			{
				goto IL_0071;
			}
			case 12:
			{
				goto IL_00a0;
			}
		}
	}
	{
		goto IL_0176;
	}

IL_005d:
	{
		V_2 = 0;
		int32_t L_3 = ___0_p;
		V_3 = L_3;
		uint32_t L_4 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-569498554)))^((int32_t)-565587929)));
		goto IL_0013;
	}

IL_0071:
	{
		uint32_t L_5 = V_0;
		V_0 = ((int32_t)((uint32_t)L_5>>1));
		uint32_t L_6 = V_1;
		uint32_t L_7 = V_0;
		V_4 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7))>>((int32_t)31)));
		G_B2_0 = ((int32_t)-711245204);
		goto IL_0013;
	}

IL_0084:
	{
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_0;
		uint32_t L_10 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)((int32_t)L_9&((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 1))))));
		uint32_t L_11 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)-229877067)))^((int32_t)860648307)));
		goto IL_0013;
	}

IL_00a0:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		G_B2_0 = ((int32_t)-896539320);
		goto IL_0013;
	}

IL_00ae:
	{
		int32_t L_13 = V_3;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_14 = ((int32_t)-1369143620);
		G_B11_0 = L_14;
		G_B11_1 = L_14;
		goto IL_00c0;
	}

IL_00ba:
	{
		int32_t L_15 = ((int32_t)-1596334527);
		G_B11_0 = L_15;
		G_B11_1 = L_15;
	}

IL_00c0:
	{
		G_B2_0 = G_B11_1;
		goto IL_0013;
	}

IL_00c6:
	{
		uint32_t L_16 = V_0;
		__this->___U206FU200EU206CU202CU202DU206BU206DU206FU206FU206AU206BU200EU202DU206AU202CU206BU206DU202EU200EU206BU200DU206EU206EU206BU202AU206BU202DU200FU206CU200FU200BU202CU200BU202AU206AU202BU200CU206EU202AU202EU202E_1 = L_16;
		uint32_t L_17 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)894635901)))^((int32_t)164377751)));
		goto IL_0013;
	}

IL_00e0:
	{
		uint32_t L_18 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)-638061866)))^((int32_t)2014721562)));
		goto IL_0013;
	}

IL_00f3:
	{
		uint32_t L_19 = V_1;
		__this->___U206AU200FU206CU202AU202EU200EU200BU202DU200FU200CU206EU202BU206FU206EU200FU206DU202BU206EU200BU206BU202EU200DU202EU200DU206AU202DU200CU200FU206AU202CU206DU206AU206FU202AU200CU206CU206BU202EU206FU202CU202E_0 = L_19;
		uint32_t L_20 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)-645136216)))^((int32_t)-2087455353)));
		goto IL_0013;
	}

IL_010d:
	{
		uint32_t L_21 = V_0;
		V_0 = ((int32_t)((int32_t)L_21<<8));
		uint32_t L_22 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, ((int32_t)-593950817)))^((int32_t)-1477512258)));
		goto IL_0013;
	}

IL_0124:
	{
		uint32_t L_23 = V_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = __this->___U202AU206AU200EU202EU202CU200BU200EU206AU200EU206AU206BU206EU200CU206CU206AU202DU206EU206EU202BU200EU202DU202EU202CU206EU200FU206EU206AU200BU206EU202AU202DU206EU206FU202BU200FU200DU206FU206FU200BU206DU202E_2;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.IO.Stream::ReadByte() */, L_24);
		V_1 = ((int32_t)(((int32_t)((int32_t)L_23<<8))|((int32_t)(uint8_t)L_25)));
		uint32_t L_26 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_26, ((int32_t)-650066344)))^((int32_t)872535024)));
		goto IL_0013;
	}

IL_0148:
	{
		uint32_t L_27 = V_2;
		uint32_t L_28 = V_4;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_27<<1))|((int32_t)il2cpp_codegen_subtract(1, (int32_t)L_28))));
		uint32_t L_29 = V_0;
		if ((!(((uint32_t)L_29) < ((uint32_t)((int32_t)16777216)))))
		{
			goto IL_0161;
		}
	}
	{
		int32_t L_30 = ((int32_t)-1194674325);
		G_B20_0 = L_30;
		G_B20_1 = L_30;
		goto IL_0167;
	}

IL_0161:
	{
		int32_t L_31 = ((int32_t)-1681023347);
		G_B20_0 = L_31;
		G_B20_1 = L_31;
	}

IL_0167:
	{
		uint32_t L_32 = V_5;
		G_B2_0 = ((int32_t)(G_B20_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_32, ((int32_t)-2142444107)))));
		goto IL_0013;
	}

IL_0176:
	{
		uint32_t L_33 = V_2;
		return L_33;
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
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E__ctor_m32A661BC347767D0762224DC7AC0D1831BDA4FA5 (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_0 = (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)192)));
		__this->___U206EU202EU202DU202DU200FU206AU200EU200FU202AU202EU200FU206AU200EU206AU202CU206DU206AU206EU200BU202BU202DU200DU200DU206DU206CU200DU202AU202BU202BU202BU200CU202CU206BU206AU206EU200EU206FU202BU200FU202EU202E_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206EU202EU202DU202DU200FU206AU200EU200FU202AU202EU200FU206AU200EU206AU202CU206DU206AU206EU200BU202BU202DU200DU200DU206DU206CU200DU202AU202BU202BU202BU200CU202CU206BU206AU206EU200EU206FU202BU200FU202EU202E_0), (void*)L_0);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_1 = (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)192)));
		__this->___U202BU202DU202BU206CU206CU202EU206CU200CU206BU200BU202AU202CU206AU200DU202AU202DU206CU202EU200EU202BU200DU200FU202CU200CU206EU202BU200BU202DU202EU202AU202BU206CU206FU202BU202DU206BU206AU206DU206BU206FU202E_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202BU202DU202BU206CU206CU202EU206CU200CU206BU200BU202AU202CU206AU200DU202AU202DU206CU202EU200EU202BU200DU200FU202CU200CU206EU202BU200BU202DU202EU202AU202BU206CU206FU202BU202DU206BU206AU206DU206BU206FU202E_1), (void*)L_1);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_2 = (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)12)));
		__this->___U202CU202CU206CU200CU200FU200BU206FU206FU206EU202BU206EU200EU200EU200CU206CU202CU202BU202EU202EU206CU200BU202BU206AU206BU206AU206BU206FU202AU200FU206EU202AU202AU206AU200CU202DU200BU206AU206AU206AU206DU202E_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202CU202CU206CU200CU200FU200BU206FU206FU206EU202BU206EU200EU200EU200CU206CU202CU202BU202EU202EU206CU200BU202BU206AU206BU206AU206BU206FU202AU200FU206EU202AU202AU206AU200CU202DU200BU206AU206AU206AU206DU202E_2), (void*)L_2);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_3 = (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)12)));
		__this->___U200DU206DU200CU200EU200BU206EU202BU200DU200CU202CU200FU206BU206DU200FU206FU202AU200EU200BU202DU200BU206AU200EU200FU206CU202EU206DU206CU202AU202BU202EU206BU200EU206FU202DU202CU206FU206CU200CU206FU202E_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200DU206DU200CU200EU200BU206EU202BU200DU200CU202CU200FU206BU206DU200FU206FU202AU200EU200BU202DU200BU206AU200EU200FU206CU202EU206DU206CU202AU202BU202EU206BU200EU206FU202DU202CU206FU206CU200CU206FU202E_3), (void*)L_3);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_4 = (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)12)));
		__this->___U200DU206EU206DU202AU206EU202DU202BU200CU200DU202BU206DU200DU206CU200CU206AU202EU202CU200DU202EU202AU202BU206EU206AU206AU202EU206EU206EU206DU206BU206EU202DU200FU206CU200DU200BU206CU206EU206BU200EU202AU202E_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200DU206EU206DU202AU206EU202DU202BU200CU200DU202BU206DU200DU206CU200CU206AU202EU202CU200DU202EU202AU202BU206EU206AU206AU202EU206EU206EU206DU206BU206EU202DU200FU206CU200DU200BU206CU206EU206BU200EU202AU202E_4), (void*)L_4);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_5 = (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)12)));
		__this->___U206CU200FU200CU202BU200EU200DU200CU202AU206CU206AU206CU206DU206DU200FU206AU200EU202DU206CU202AU206DU202AU200CU200DU202BU202BU200FU206DU202AU200CU200BU206EU202BU200BU206BU200BU200FU200FU206EU200DU206AU202E_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206CU200FU200CU202BU200EU200DU200CU202AU206CU206AU206CU206DU206DU200FU206AU200EU202DU206CU202AU206DU202AU200CU200DU202BU202BU200FU206DU202AU200CU200BU206EU202BU200BU206BU200BU200FU200FU206EU200DU206AU202E_5), (void*)L_5);
		U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* L_6 = (U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3*)il2cpp_codegen_object_new(U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E__ctor_m5D03E7761E920102AB522A10737E4C866C8A4662(L_6, NULL);
		__this->___U206AU200CU202EU200BU200EU202AU200EU200EU202BU202EU202DU206BU202CU206AU206CU206AU206DU206EU206DU200CU206CU202DU200CU200BU206BU206DU202EU206AU200FU200DU206DU206AU200BU200BU200CU206CU206CU206BU202EU200CU202E_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206AU200CU202EU200BU200EU202AU200EU200EU202BU202EU202DU206BU202CU206AU206CU206AU206DU206EU206DU200CU206CU202DU200CU200BU206BU206DU202EU206AU200FU200DU206DU206AU200BU200BU200CU206CU206CU206BU202EU200CU202E_6), (void*)L_6);
		U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* L_7 = (U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9*)il2cpp_codegen_object_new(U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E__ctor_m386A1264CC83856AF1272CE2AEF5273B628B14AF(L_7, NULL);
		__this->___U206AU200FU202BU202BU206AU206DU206AU200EU200CU200EU200BU200FU200EU206AU202DU200DU200BU202BU206DU206EU206EU206BU206CU200CU206CU202AU202CU202DU200FU202BU206EU202DU200DU200CU206AU206FU202AU200FU200CU202CU202E_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206AU200FU202BU202BU206AU206DU206AU200EU200CU200EU200BU200FU200EU206AU202DU200DU200BU202BU206DU206EU206EU206BU206CU200CU206CU202AU202CU202DU200FU202BU206EU202DU200DU200CU206AU206FU202AU200FU200CU202CU202E_7), (void*)L_7);
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* L_8 = (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E*)il2cpp_codegen_object_new(U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E__ctor_mCF93EB6ED04A21FE30CB7F6136A508A720A16F36(L_8, NULL);
		__this->___U200DU202EU202DU202DU206BU202AU202AU200FU206EU206DU206EU202BU200BU206FU202BU206AU206FU200EU206CU202EU200EU200BU202AU202BU206BU200FU202EU206EU202CU202CU200DU202AU202EU206BU200DU202BU202EU200DU202EU206EU202E_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200DU202EU202DU202DU206BU202AU202AU200FU206EU206DU206EU202BU200BU206FU202BU206AU206FU200EU206CU202EU200EU200BU202AU202BU206BU200FU202EU206EU202CU202CU200DU202AU202EU206BU200DU202BU202EU200DU202EU206EU202E_8), (void*)L_8);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_9 = (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)114)));
		__this->___U206CU200BU200FU202BU200FU206BU206CU202CU200CU206BU206FU206BU202BU202BU206FU206CU200CU206AU200EU200BU200CU200DU202EU202DU200EU200BU202BU202BU200EU200BU202DU202AU202DU200BU206AU206FU206BU206DU202EU206CU202E_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206CU200BU200FU202BU200FU206BU206CU202CU200CU206BU206FU206BU202BU202BU206FU206CU200CU206AU200EU200BU200CU200DU202EU202DU200EU200BU202BU202BU200EU200BU202DU202AU202DU200BU206AU206FU206BU206DU202EU206CU202E_9), (void*)L_9);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* L_10 = (U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23*)(U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23*)SZArrayNew(U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)4));
		__this->___U206FU206EU206CU206DU200FU202AU206BU200FU200EU206AU200BU202BU206AU200CU206EU200EU206BU200EU206DU206DU202BU200BU206AU200FU200CU206EU202BU200DU202BU202AU206DU202DU206AU202BU202DU202BU206CU202DU200FU202E_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206FU206EU206CU206DU200FU202AU206BU200FU200EU206AU200BU202BU206AU200CU206EU200EU206BU200EU206DU206DU202BU200BU206AU200FU200CU206EU202BU200DU202BU202AU206DU202DU206AU202BU202DU202BU206CU202DU200FU202E_10), (void*)L_10);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_11 = (U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F*)il2cpp_codegen_object_new(U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E__ctor_m361EF92A5F5AFB509DBE160D56CF639FDC3A1A3A(L_11, NULL);
		__this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11), (void*)L_11);
		U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* L_12 = (U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3*)il2cpp_codegen_object_new(U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E__ctor_m5D03E7761E920102AB522A10737E4C866C8A4662(L_12, NULL);
		__this->___U206FU206DU200DU202EU206DU206CU202CU206BU206BU202AU200CU202AU206BU202BU206AU200EU200CU202BU200DU206AU202DU206FU206CU206FU206DU206EU200BU200BU202EU202CU206AU206BU206FU200FU206CU206BU206CU206FU206EU202DU202E_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206FU206DU200DU202EU206DU206CU202CU206BU206BU202AU200CU202AU206BU202BU206AU200EU200CU202BU200DU206AU202DU206FU206CU206FU206DU206EU200BU200BU202EU202CU206AU206BU206FU200FU206CU206BU206CU206FU206EU202DU202E_12), (void*)L_12);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C L_13;
		memset((&L_13), 0, sizeof(L_13));
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E__ctor_m0DA983E9D47D7F98252B00151BC632C68202CCE0((&L_13), 4, /*hidden argument*/NULL);
		__this->___U206DU202EU206FU202BU206EU206EU202AU206FU202BU202DU202AU200FU200CU206EU200EU200DU206BU206CU200CU206BU200DU202BU200FU206DU206FU200EU202DU206FU200BU206BU200FU200BU206FU200FU202CU206BU202CU206BU202EU202AU202E_16 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U206DU202EU206FU202BU206EU206EU202AU206FU202BU202DU202AU200FU200CU206EU200EU200DU206BU206CU200CU206BU200DU202BU200FU206DU206FU200EU202DU206FU200BU206BU200FU200BU206FU200FU202CU206BU202CU206BU202EU202AU202E_16))->___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0), (void*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
	}

IL_00be:
	{
		G_B2_0 = ((int32_t)1062399462);
	}

IL_00c3:
	{
		int32_t L_14 = ((int32_t)(G_B2_0^((int32_t)462081717)));
		V_1 = L_14;
		switch (((int32_t)((uint32_t)(int32_t)L_14%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_00ec;
			}
			case 1:
			{
				goto IL_0114;
			}
			case 2:
			{
				goto IL_00be;
			}
			case 3:
			{
				goto IL_012a;
			}
			case 4:
			{
				goto IL_0103;
			}
			case 5:
			{
				goto IL_014f;
			}
		}
	}
	{
		goto IL_014f;
	}

IL_00ec:
	{
		int32_t L_15 = V_0;
		if ((((int64_t)((int64_t)L_15)) >= ((int64_t)((int64_t)4))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_16 = ((int32_t)1204403584);
		G_B7_0 = L_16;
		G_B7_1 = L_16;
		goto IL_0100;
	}

IL_00fa:
	{
		int32_t L_17 = ((int32_t)1710326918);
		G_B7_0 = L_17;
		G_B7_1 = L_17;
	}

IL_0100:
	{
		G_B2_0 = G_B7_1;
		goto IL_00c3;
	}

IL_0103:
	{
		V_0 = 0;
		uint32_t L_18 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)-287465857)))^((int32_t)-1072743643)));
		goto IL_00c3;
	}

IL_0114:
	{
		__this->___U200EU202AU200FU200FU206DU202BU202BU206BU206DU202CU200CU202DU206CU200BU206AU200CU206CU200DU206EU200FU202CU202CU206EU206AU206FU206FU206CU200CU200FU200DU206BU202BU202CU202BU200BU202DU202EU200BU202CU202DU202E_14 = (-1);
		uint32_t L_19 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)1653109323)))^((int32_t)-845842066)));
		goto IL_00c3;
	}

IL_012a:
	{
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* L_20 = __this->___U206FU206EU206CU206DU200FU202AU206BU200FU200EU206AU200BU202BU206AU200CU206EU200EU206BU200EU206DU206DU202BU200BU206AU200FU200CU206EU202BU200DU202BU202AU206DU202DU206AU202BU202DU202BU206CU202DU200FU202E_10;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C L_22;
		memset((&L_22), 0, sizeof(L_22));
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E__ctor_m0DA983E9D47D7F98252B00151BC632C68202CCE0((&L_22), 6, /*hidden argument*/NULL);
		*(U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))) = L_22;
		Il2CppCodeGenWriteBarrier((void**)&(((U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C*)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))))->___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0), (void*)NULL);
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		G_B2_0 = ((int32_t)1523008339);
		goto IL_00c3;
	}

IL_014f:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U206BU206CU206BU206BU202CU202EU202EU200FU202CU206CU206BU206CU206FU206AU200DU202DU206FU206EU206CU206DU200BU206BU202DU206CU206AU202DU206FU206FU206CU206AU200BU206BU202BU202BU200EU200FU202BU200DU206AU200CU202E_m8148C4F93ADAE2AC630824A16B431A91005DEDA6 (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* __this, uint32_t ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		uint32_t L_0 = __this->___U200EU202AU200FU200FU206DU202BU202BU206BU206DU202CU200CU202DU206CU200BU206AU200CU206CU200DU206EU200FU202CU202CU206EU206AU206FU206FU206CU200CU200FU200DU206BU202BU202CU202BU200BU202DU202EU200BU202CU202DU202E_14;
		uint32_t L_1 = ___0_p;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0070;
		}
	}

IL_0009:
	{
		G_B2_0 = ((int32_t)438674969);
	}

IL_000e:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)713389058)));
		V_1 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0009;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_0070;
			}
		}
	}
	{
		goto IL_0070;
	}

IL_002b:
	{
		uint32_t L_3 = ___0_p;
		__this->___U200EU202AU200FU200FU206DU202BU202BU206BU206DU202CU200CU202DU206CU200BU206AU200CU206CU200DU206EU200FU202CU202CU206EU206AU206FU206FU206CU200CU200FU200DU206BU202BU202CU202BU200BU202DU202EU200BU202CU202DU202E_14 = L_3;
		uint32_t L_4 = __this->___U200EU202AU200FU200FU206DU202BU202BU206BU206DU202CU200CU202DU206CU200BU206AU200CU206CU200DU206EU200FU202CU202CU206EU206AU206FU206FU206CU200CU200FU200DU206BU202BU202CU202BU200BU202DU202EU200BU202CU202DU202E_14;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_4, 1, NULL);
		__this->___U202BU206DU202DU200BU206AU206DU206CU200EU200FU200EU206FU200CU206AU202AU206BU202DU206AU200CU200BU200FU202CU206EU206FU202AU200EU206DU206CU200BU206DU202AU206CU206AU206AU200CU206EU202EU206CU206BU206AU206AU202E_15 = L_5;
		uint32_t L_6 = __this->___U202BU206DU202DU200BU206AU206DU206CU200EU200FU200EU206FU200CU206AU202AU206BU202DU206AU200CU200BU200FU202CU206EU206FU202AU200EU206DU206CU200BU206DU202AU206CU206AU206AU200CU206EU202EU206CU206BU206AU206AU202E_15;
		uint32_t L_7;
		L_7 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_6, ((int32_t)4096), NULL);
		V_0 = L_7;
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* L_8 = __this->___U200DU202EU202DU202DU206BU202AU202AU200FU206EU206DU206EU202BU200BU206FU202BU206AU206FU200EU206CU202EU200EU200BU202AU202BU206BU200FU202EU206EU202CU202CU200DU202AU202EU206BU200DU202BU202EU200DU202EU206EU202E_8;
		uint32_t L_9 = V_0;
		NullCheck(L_8);
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U200CU202BU202DU200CU206EU206AU202DU200FU206BU200FU202AU200CU200BU206AU202DU206FU200FU202BU200EU206DU200FU206AU202AU206CU206FU202CU206AU202EU206FU202AU206FU202DU202EU202DU202EU202EU206EU206FU200EU200FU202E_m4290872A722CF772BB46CA85DCA2D62DA9F0E57B(L_8, L_9, NULL);
		uint32_t L_10 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)778679009)))^((int32_t)-660057003)));
		goto IL_000e;
	}

IL_0070:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U206FU200EU200FU200CU206AU206FU206FU202EU200CU200CU200DU206DU200BU206EU200FU202AU202EU206BU206BU206BU200CU200DU206EU202CU200FU202EU206AU200DU206EU206CU206EU202DU206CU200DU200DU206BU206DU202AU206BU202CU202E_m875FCC0B80EBA9F1F93240B081FAC221D0A9ED8A (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* __this, int32_t ___0_p, int32_t ___1_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* L_0 = __this->___U206AU200FU202BU202BU206AU206DU206AU200EU200CU200EU200BU200FU200EU206AU202DU200DU200BU202BU206DU206EU206EU206BU206CU200CU206CU202AU202CU202DU200FU202BU206EU202DU200DU200CU206AU206FU202AU200FU200CU202CU202E_7;
		int32_t L_1 = ___0_p;
		int32_t L_2 = ___1_p;
		NullCheck(L_0);
		U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U206BU206FU200DU202DU200BU202DU206EU206AU202DU200FU202DU202DU206CU206CU206EU200CU202BU202EU200EU200FU200BU206EU206EU206BU200EU206BU206DU206FU206AU206CU200FU200DU206DU206EU206DU206EU206FU206DU206EU200CU202E_m555F6499BD86F24F604FC86E1EB7DB2AF193B3B8(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U200CU206AU200DU200CU200BU200DU206FU206DU202DU202AU200FU202CU202AU206AU206CU202AU206FU206EU202CU200DU202BU202EU202AU202BU206AU206DU206EU206BU202BU202CU200CU202BU200DU206CU200BU200CU202BU200CU202EU202BU202E_mF088E6D8FCE8B710E6C29B907C860C0B8BBB2BC7 (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* __this, int32_t ___0_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		int32_t L_0 = ___0_p;
		V_0 = ((int32_t)(1<<((int32_t)(L_0&((int32_t)31)))));
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1609983318);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1577843117)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0029:
	{
		U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* L_2 = __this->___U206AU200CU202EU200BU200EU202AU200EU200EU202BU202EU202DU206BU202CU206AU206CU206AU206DU206EU206DU200CU206CU202DU200CU200BU206BU206DU202EU206AU200FU200DU206DU206AU200BU200BU200CU206CU206CU206BU202EU200CU202E_6;
		uint32_t L_3 = V_0;
		NullCheck(L_2);
		U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_U202BU206DU206CU202CU206DU202EU202DU202AU202CU206FU206CU202BU206EU206EU206FU202EU206AU206BU206AU206DU200DU200BU200BU202BU206EU206DU200EU200CU202CU206BU206CU206DU200EU202EU200BU202AU206EU200EU200EU200FU202E_m62132137009AC758DF72F011B9DA46B0E822A9F7(L_2, L_3, NULL);
		U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* L_4 = __this->___U206FU206DU200DU202EU206DU206CU202CU206BU206BU202AU200CU202AU206BU202BU206AU200EU200CU202BU200DU206AU202DU206FU206CU206FU206DU206EU200BU200BU202EU202CU206AU206BU206FU200FU206CU206BU206CU206FU206EU202DU202E_12;
		uint32_t L_5 = V_0;
		NullCheck(L_4);
		U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_U202BU206DU206CU202CU206DU202EU202DU202AU202CU206FU206CU202BU206EU206EU206FU202EU206AU206BU206AU206DU200DU200BU200BU202BU206EU206DU200EU200CU202CU206BU206CU206DU200EU202EU200BU202AU206EU200EU200EU200FU202E_m62132137009AC758DF72F011B9DA46B0E822A9F7(L_4, L_5, NULL);
		uint32_t L_6 = V_0;
		__this->___U200CU202CU202EU200CU206AU200DU206FU206EU202BU202BU202EU202EU206CU200EU202BU200CU200BU206FU202AU206EU206BU206FU200BU206DU206EU206BU200CU200BU206EU202EU206DU206BU206CU200EU202AU200DU206AU200FU202EU206BU202E_17 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 1));
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)1035961369)))^((int32_t)-1007327368)));
		goto IL_000c;
	}

IL_0059:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U200EU200DU206DU200EU202BU202BU200FU206EU202CU202AU200DU200EU202DU206EU202EU200CU202EU206CU206CU202DU200BU200DU202BU206EU200DU202EU206CU202AU206BU202DU202DU202DU206AU206DU200DU206DU200EU202AU200CU206BU202E_mF1A33284BF43141A02C43FE2842CB8C79F02706E (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_p, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	int32_t G_B32_0 = 0;
	int32_t G_B32_1 = 0;
	{
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_0 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_p;
		NullCheck(L_0);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_U206DU200CU202BU200DU206CU200CU200DU202AU202EU206DU206BU206DU206FU202CU206DU202CU202AU200EU200BU206CU202AU206CU206EU202BU202EU200FU206CU206AU202DU200EU206AU202CU206FU206FU206BU202BU202DU206BU202BU206CU202E_mD605740753FDE123716ED1E1EC64D8E2EC4AB8D7(L_0, L_1, NULL);
	}

IL_000c:
	{
		G_B2_0 = ((int32_t)769150460);
	}

IL_0011:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1314324787)));
		V_3 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)24))))
		{
			case 0:
			{
				goto IL_01d5;
			}
			case 1:
			{
				goto IL_00f9;
			}
			case 2:
			{
				goto IL_01b9;
			}
			case 3:
			{
				goto IL_01a3;
			}
			case 4:
			{
				goto IL_0158;
			}
			case 5:
			{
				goto IL_0265;
			}
			case 6:
			{
				goto IL_016a;
			}
			case 7:
			{
				goto IL_022a;
			}
			case 8:
			{
				goto IL_0096;
			}
			case 9:
			{
				goto IL_02fd;
			}
			case 10:
			{
				goto IL_0086;
			}
			case 11:
			{
				goto IL_000c;
			}
			case 12:
			{
				goto IL_02b1;
			}
			case 13:
			{
				goto IL_012c;
			}
			case 14:
			{
				goto IL_0144;
			}
			case 15:
			{
				goto IL_00d3;
			}
			case 16:
			{
				goto IL_028d;
			}
			case 17:
			{
				goto IL_00ba;
			}
			case 18:
			{
				goto IL_0186;
			}
			case 19:
			{
				goto IL_01f2;
			}
			case 20:
			{
				goto IL_0259;
			}
			case 21:
			{
				goto IL_0216;
			}
			case 22:
			{
				goto IL_02eb;
			}
			case 23:
			{
				goto IL_0240;
			}
		}
	}
	{
		goto IL_02fd;
	}

IL_0086:
	{
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3<<4)), (int32_t)L_4));
		G_B2_0 = ((int32_t)1847788611);
		goto IL_0011;
	}

IL_0096:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_5 = __this->___U200DU206DU200CU200EU200BU206EU202BU200DU200CU202CU200FU206BU206DU200FU206FU202AU200EU200BU202DU200BU206AU200EU200FU206CU202EU206DU206CU202AU202BU202EU206BU200EU206FU202DU202CU206FU206CU200CU206FU202E_3;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_6)))), NULL);
		uint32_t L_7 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)951749638)))^((int32_t)-1906100449)));
		goto IL_0011;
	}

IL_00ba:
	{
		uint32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) >= ((uint32_t)((int32_t)114)))))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_9 = ((int32_t)918977698);
		G_B9_0 = L_9;
		G_B9_1 = L_9;
		goto IL_00cd;
	}

IL_00c7:
	{
		int32_t L_10 = ((int32_t)1459219781);
		G_B9_0 = L_10;
		G_B9_1 = L_10;
	}

IL_00cd:
	{
		G_B2_0 = G_B9_1;
		goto IL_0011;
	}

IL_00d3:
	{
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* L_11 = __this->___U200DU202EU202DU202DU206BU202AU202AU200FU206EU206DU206EU202BU200BU206FU202BU206AU206FU200EU206CU202EU200EU200BU202AU202BU206BU200FU202EU206EU202CU202CU200DU202AU202EU206BU200DU202BU202EU200DU202EU206EU202E_8;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = ___1_p;
		bool L_13 = __this->___U202EU206AU200FU206FU206EU202BU206DU200DU200CU206BU206EU206EU200BU206AU202AU206BU202EU206BU200EU206AU202CU200FU202DU202DU200DU200BU202BU206AU202CU200DU202AU200DU202DU206EU206BU200DU202DU206AU206CU202DU202E_13;
		NullCheck(L_11);
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U206FU200BU200BU206FU206BU206DU206BU200CU206DU202BU206BU206DU202DU206DU202BU200BU202AU200FU206CU200FU202AU206DU202AU206DU206AU200CU206BU200BU206AU200FU206BU206FU200FU206AU200EU202CU206BU206CU206EU206BU202E_m7670D7363657FC162B164F9BFC9D8EDE78955C0E(L_11, L_12, L_13, NULL);
		V_0 = 0;
		uint32_t L_14 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-539438242)))^((int32_t)-1466246633)));
		goto IL_0011;
	}

IL_00f9:
	{
		U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* L_15 = __this->___U206AU200CU202EU200BU200EU202AU200EU200EU202BU202EU202DU206BU202CU206AU206CU206AU206DU206EU206DU200CU206CU202DU200CU200BU206BU206DU202EU206AU200FU200DU206DU206AU200BU200BU200CU206CU206CU206BU202EU200CU202E_6;
		NullCheck(L_15);
		U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_U202CU206BU200BU202AU206BU200FU202DU202BU200EU202CU200EU200CU206DU200DU206CU202AU202AU200FU200EU206CU200CU200EU206CU206BU206FU206AU206EU206AU206FU206DU200DU202CU202BU202EU206DU206DU206AU200EU202EU202CU202E_mEC13F03048B85BA5214C342FD14382E1505F3547(L_15, NULL);
		U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* L_16 = __this->___U206FU206DU200DU202EU206DU206CU202CU206BU206BU202AU200CU202AU206BU202BU206AU200EU200CU202BU200DU206AU202DU206FU206CU206FU206DU206EU200BU200BU202EU202CU206AU206BU206FU200FU206CU206BU206CU206FU206EU202DU202E_12;
		NullCheck(L_16);
		U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_U202CU206BU200BU202AU206BU200FU202DU202BU200EU202CU200EU200CU206DU200DU206CU202AU202AU200FU200EU206CU200CU200EU206CU206BU206FU206AU206EU206AU206FU206DU200DU202CU202BU202EU206DU206DU206AU200EU202EU202CU202E_mEC13F03048B85BA5214C342FD14382E1505F3547(L_16, NULL);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* L_17 = (&__this->___U206DU202EU206FU202BU206EU206EU202AU206FU202BU202DU202AU200FU200CU206EU200EU200DU206BU206CU200CU206BU200DU202BU200FU206DU206FU200EU202DU206FU200BU206BU200FU200BU206FU200FU202CU206BU202CU206BU202EU202AU202E_16);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U206CU206BU202EU202CU200DU200EU202AU200DU202DU200CU206EU200FU206AU202AU206DU206CU206DU206EU206DU206CU200FU202EU202EU202BU206EU206EU202DU206AU202BU202CU202BU206DU202DU206EU200BU200EU200EU206AU202BU206EU202E_m22F86B8CD52D230ECD7AD75DD3C8D221D6C85C0F(L_17, NULL);
		uint32_t L_18 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)-340191731)))^((int32_t)1043746119)));
		goto IL_0011;
	}

IL_012c:
	{
		uint32_t L_19 = V_0;
		if ((!(((uint32_t)L_19) >= ((uint32_t)4))))
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_20 = ((int32_t)1426108365);
		G_B15_0 = L_20;
		G_B15_1 = L_20;
		goto IL_013e;
	}

IL_0138:
	{
		int32_t L_21 = ((int32_t)1806135121);
		G_B15_0 = L_21;
		G_B15_1 = L_21;
	}

IL_013e:
	{
		G_B2_0 = G_B15_1;
		goto IL_0011;
	}

IL_0144:
	{
		V_0 = 0;
		uint32_t L_22 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, ((int32_t)-1940195914)))^((int32_t)-766473498)));
		goto IL_0011;
	}

IL_0158:
	{
		uint32_t L_23 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_23, ((int32_t)5555157)))^((int32_t)-1118713286)));
		goto IL_0011;
	}

IL_016a:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_24 = __this->___U206CU200BU200FU202BU200FU206BU206CU202CU200CU206BU206FU206BU202BU202BU206FU206CU200CU206AU200EU200BU200CU200DU202EU202DU200EU200BU202BU202BU200EU200BU202DU202AU202DU200BU206AU206FU206BU206DU202EU206CU202E_9;
		uint32_t L_25 = V_0;
		NullCheck(L_24);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B(((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_25)))), NULL);
		G_B2_0 = ((int32_t)1779601320);
		goto IL_0011;
	}

IL_0186:
	{
		uint32_t L_26 = V_1;
		uint32_t L_27 = __this->___U200CU202CU202EU200CU206AU200DU206FU206EU202BU202BU202EU202EU206CU200EU202BU200CU200BU206FU202AU206EU206BU206FU200BU206DU206EU206BU200CU200BU206EU202EU206DU206BU206CU200EU202AU200DU206AU200FU202EU206BU202E_17;
		if ((!(((uint32_t)L_26) > ((uint32_t)L_27))))
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_28 = ((int32_t)779697736);
		G_B22_0 = L_28;
		G_B22_1 = L_28;
		goto IL_019d;
	}

IL_0197:
	{
		int32_t L_29 = ((int32_t)497032665);
		G_B22_0 = L_29;
		G_B22_1 = L_29;
	}

IL_019d:
	{
		G_B2_0 = G_B22_1;
		goto IL_0011;
	}

IL_01a3:
	{
		uint32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, 1));
		uint32_t L_31 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)1392910931)))^((int32_t)-2108414413)));
		goto IL_0011;
	}

IL_01b9:
	{
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* L_32 = __this->___U206FU206EU206CU206DU200FU202AU206BU200FU200EU206AU200BU202BU206AU200CU206EU200EU206BU200EU206DU206DU202BU200BU206AU200FU200CU206EU202BU200DU202BU202AU206DU202DU206AU202BU202DU202BU206CU202DU200FU202E_10;
		uint32_t L_33 = V_0;
		NullCheck(L_32);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U206CU206BU202EU202CU200DU200EU202AU200DU202DU200CU206EU200FU206AU202AU206DU206CU206DU206EU206DU206CU200FU202EU202EU202BU206EU206EU202DU206AU202BU202CU202BU206DU202DU206EU200BU200EU200EU206AU202BU206EU202E_m22F86B8CD52D230ECD7AD75DD3C8D221D6C85C0F(((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_33)))), NULL);
		G_B2_0 = ((int32_t)2096005116);
		goto IL_0011;
	}

IL_01d5:
	{
		U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* L_34 = __this->___U206AU200FU202BU202BU206AU206DU206AU200EU200CU200EU200BU200FU200EU206AU202DU200DU200BU202BU206DU206EU206EU206BU206CU200CU206CU202AU202CU202DU200FU202BU206EU202DU200DU200CU206AU206FU202AU200FU200CU202CU202E_7;
		NullCheck(L_34);
		U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U200CU202BU206EU206AU206AU202AU202DU206FU202BU202DU206FU200BU202DU206DU202EU200CU200BU202AU200CU202EU202CU206DU202BU202EU206CU206BU206EU202BU200CU202DU202AU206BU202CU200FU200CU200BU206FU206BU202CU206AU202E_m490AD3A9242D0324AD9924A35293157B94B73F63(L_34, NULL);
		uint32_t L_35 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_35, ((int32_t)-429663535)))^((int32_t)322182982)));
		goto IL_0011;
	}

IL_01f2:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_36 = __this->___U202CU202CU206CU200CU200FU200BU206FU206FU206EU202BU206EU200EU200EU200CU206CU202CU202BU202EU202EU206CU200BU202BU206AU206BU206AU206BU206FU202AU200FU206EU202AU202AU206AU200CU202DU200BU206AU206AU206AU206DU202E_2;
		uint32_t L_37 = V_0;
		NullCheck(L_36);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B(((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_37)))), NULL);
		uint32_t L_38 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_38, ((int32_t)1337375074)))^((int32_t)466248165)));
		goto IL_0011;
	}

IL_0216:
	{
		V_0 = 0;
		uint32_t L_39 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)-1094593661)))^((int32_t)-59867648)));
		goto IL_0011;
	}

IL_022a:
	{
		uint32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, 1));
		uint32_t L_41 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_41, ((int32_t)895899420)))^((int32_t)-283224838)));
		goto IL_0011;
	}

IL_0240:
	{
		uint32_t L_42 = V_0;
		if ((!(((uint32_t)L_42) >= ((uint32_t)((int32_t)12)))))
		{
			goto IL_024d;
		}
	}
	{
		int32_t L_43 = ((int32_t)1531447051);
		G_B32_0 = L_43;
		G_B32_1 = L_43;
		goto IL_0253;
	}

IL_024d:
	{
		int32_t L_44 = ((int32_t)1347975799);
		G_B32_0 = L_44;
		G_B32_1 = L_44;
	}

IL_0253:
	{
		G_B2_0 = G_B32_1;
		goto IL_0011;
	}

IL_0259:
	{
		V_1 = 0;
		G_B2_0 = ((int32_t)809170065);
		goto IL_0011;
	}

IL_0265:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_45 = __this->___U202BU202DU202BU206CU206CU202EU206CU200CU206BU200BU202AU202CU206AU200DU202AU202DU206CU202EU200EU202BU200DU200FU202CU200CU206EU202BU200BU202DU202EU202AU202BU206CU206FU202BU202DU206BU206AU206DU206BU206FU202E_1;
		uint32_t L_46 = V_2;
		NullCheck(L_45);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B(((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_46)))), NULL);
		uint32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, 1));
		uint32_t L_48 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_48, ((int32_t)-578078098)))^((int32_t)984796423)));
		goto IL_0011;
	}

IL_028d:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_49 = __this->___U206EU202EU202DU202DU200FU206AU200EU200FU202AU202EU200FU206AU200EU206AU202CU206DU206AU206EU200BU202BU202DU200DU200DU206DU206CU200DU202AU202BU202BU202BU200CU202CU206BU206AU206EU200EU206FU202BU200FU202EU202E_0;
		uint32_t L_50 = V_2;
		NullCheck(L_49);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B(((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_50)))), NULL);
		uint32_t L_51 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_51, ((int32_t)324858167)))^((int32_t)2043346222)));
		goto IL_0011;
	}

IL_02b1:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_52 = __this->___U200DU206EU206DU202AU206EU202DU202BU200CU200DU202BU206DU200DU206CU200CU206AU202EU202CU200DU202EU202AU202BU206EU206AU206AU202EU206EU206EU206DU206BU206EU202DU200FU206CU200DU200BU206CU206EU206BU200EU202AU202E_4;
		uint32_t L_53 = V_0;
		NullCheck(L_52);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B(((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_53)))), NULL);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_54 = __this->___U206CU200FU200CU202BU200EU200DU200CU202AU206CU206AU206CU206DU206DU200FU206AU200EU202DU206CU202AU206DU202AU200CU200DU202BU202BU200FU206DU202AU200CU200BU206EU202BU200BU206BU200BU200FU200FU206EU200DU206AU202E_5;
		uint32_t L_55 = V_0;
		NullCheck(L_54);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B(((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_55)))), NULL);
		uint32_t L_56 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, 1));
		uint32_t L_57 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_57, ((int32_t)1336466918)))^((int32_t)-307619356)));
		goto IL_0011;
	}

IL_02eb:
	{
		uint32_t L_58 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_58, ((int32_t)755154440)))^((int32_t)444423772)));
		goto IL_0011;
	}

IL_02fd:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.IO.Stream,System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U206CU206BU206AU200CU206BU200CU200CU206CU200DU206FU200BU206EU202EU202EU200DU200DU202EU206CU206BU200EU200EU200BU206CU200DU202EU206AU206CU202CU206FU206CU206DU202DU202EU206BU202AU206DU202AU202EU202EU202EU202E_mA15388D19EBEF883059C8EDF924BB761AA0CFF46 (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_p, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___1_p, int64_t ___2_p, int64_t ___3_p, const RuntimeMethod* method) 
{
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint8_t V_7 = 0x0;
	uint32_t V_8 = 0;
	uint8_t V_9 = 0x0;
	uint8_t V_10 = 0x0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	int32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B26_1 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B47_1 = 0;
	int32_t G_B52_0 = 0;
	int32_t G_B52_1 = 0;
	int32_t G_B64_0 = 0;
	int32_t G_B64_1 = 0;
	int32_t G_B75_0 = 0;
	int32_t G_B75_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B81_1 = 0;
	int32_t G_B85_0 = 0;
	int32_t G_B85_1 = 0;
	int32_t G_B90_0 = 0;
	int32_t G_B90_1 = 0;
	int32_t G_B95_0 = 0;
	int32_t G_B95_1 = 0;
	int32_t G_B101_0 = 0;
	int32_t G_B101_1 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_p;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___1_p;
		U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U200EU200DU206DU200EU202BU202BU200FU206EU202CU202AU200DU200EU202DU206EU202EU200CU202EU206CU206CU202DU200BU200DU202BU206EU200DU202EU206CU202AU206BU202DU202DU202DU206AU206DU200DU206DU200EU202AU200CU206BU202E_mF1A33284BF43141A02C43FE2842CB8C79F02706E(__this, L_0, L_1, NULL);
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)1821982104);
	}

IL_000d:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1536218786)));
		V_15 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)58))))
		{
			case 0:
			{
				goto IL_01ad;
			}
			case 1:
			{
				goto IL_069a;
			}
			case 2:
			{
				goto IL_0155;
			}
			case 3:
			{
				goto IL_0775;
			}
			case 4:
			{
				goto IL_0495;
			}
			case 5:
			{
				goto IL_03cd;
			}
			case 6:
			{
				goto IL_033b;
			}
			case 7:
			{
				goto IL_05a7;
			}
			case 8:
			{
				goto IL_0306;
			}
			case 9:
			{
				goto IL_04ac;
			}
			case 10:
			{
				goto IL_0737;
			}
			case 11:
			{
				goto IL_071d;
			}
			case 12:
			{
				goto IL_05f5;
			}
			case 13:
			{
				goto IL_0439;
			}
			case 14:
			{
				goto IL_03e7;
			}
			case 15:
			{
				goto IL_0008;
			}
			case 16:
			{
				goto IL_067a;
			}
			case 17:
			{
				goto IL_0170;
			}
			case 18:
			{
				goto IL_0815;
			}
			case 19:
			{
				goto IL_061d;
			}
			case 20:
			{
				goto IL_058b;
			}
			case 21:
			{
				goto IL_04e0;
			}
			case 22:
			{
				goto IL_06d2;
			}
			case 23:
			{
				goto IL_0706;
			}
			case 24:
			{
				goto IL_04ca;
			}
			case 25:
			{
				goto IL_07e6;
			}
			case 26:
			{
				goto IL_012b;
			}
			case 27:
			{
				goto IL_0408;
			}
			case 28:
			{
				goto IL_0546;
			}
			case 29:
			{
				goto IL_04ef;
			}
			case 30:
			{
				goto IL_07c5;
			}
			case 31:
			{
				goto IL_0516;
			}
			case 32:
			{
				goto IL_0762;
			}
			case 33:
			{
				goto IL_029b;
			}
			case 34:
			{
				goto IL_0320;
			}
			case 35:
			{
				goto IL_03ba;
			}
			case 36:
			{
				goto IL_0530;
			}
			case 37:
			{
				goto IL_0281;
			}
			case 38:
			{
				goto IL_02e6;
			}
			case 39:
			{
				goto IL_074a;
			}
			case 40:
			{
				goto IL_0161;
			}
			case 41:
			{
				goto IL_024d;
			}
			case 42:
			{
				goto IL_02d3;
			}
			case 43:
			{
				goto IL_034c;
			}
			case 44:
			{
				goto IL_07fd;
			}
			case 45:
			{
				goto IL_0219;
			}
			case 46:
			{
				goto IL_010b;
			}
			case 47:
			{
				goto IL_0790;
			}
			case 48:
			{
				goto IL_05cb;
			}
			case 49:
			{
				goto IL_0193;
			}
			case 50:
			{
				goto IL_0417;
			}
			case 51:
			{
				goto IL_01dc;
			}
			case 52:
			{
				goto IL_0386;
			}
			case 53:
			{
				goto IL_0643;
			}
			case 54:
			{
				goto IL_05b4;
			}
			case 55:
			{
				goto IL_059a;
			}
			case 56:
			{
				goto IL_02b1;
			}
			case 57:
			{
				goto IL_0453;
			}
		}
	}
	{
		goto IL_0815;
	}

IL_010b:
	{
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* L_3 = __this->___U200DU202EU202DU202DU206BU202AU202AU200FU206EU206DU206EU202BU200BU206FU202BU206AU206FU200EU206CU202EU200EU200BU202AU202BU206BU200FU202EU206EU202CU202CU200DU202AU202EU206BU200DU202BU202EU200DU202EU206EU202E_8;
		uint8_t L_4 = V_7;
		NullCheck(L_3);
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U202AU200BU206FU206CU206FU202AU202BU206CU202AU200EU200DU200EU206FU206FU202DU200EU206AU206EU202BU200BU206CU202CU206FU200FU200EU206FU200CU202CU202CU206BU206DU206AU206DU200DU206AU202AU206DU206EU202CU200EU202E_m6033FD8C912CFCFF568DF71ABF869FC7F2AAF0D6(L_3, L_4, NULL);
		uint32_t L_5 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)1622341767)))^((int32_t)1674757094)));
		goto IL_000d;
	}

IL_012b:
	{
		U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* L_6 = __this->___U206AU200CU202EU200BU200EU202AU200EU200EU202BU202EU202DU206BU202CU206AU206CU206AU206DU206EU206DU200CU206CU202DU200CU200BU206BU206DU202EU206AU200FU200DU206DU206AU200BU200BU200CU206CU206CU206BU202EU200CU202E_6;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_7 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		uint32_t L_8 = V_8;
		NullCheck(L_6);
		uint32_t L_9;
		L_9 = U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_U206AU200BU200CU200BU200DU200BU202AU202AU206EU206FU206CU202EU200DU202DU200CU206DU202CU200BU202DU200FU202DU202DU206FU206DU206AU202BU200BU200DU200DU200CU202BU206FU206CU206DU200BU202CU200EU202AU202BU206AU202E_m5A78A5A6288EEE6417E0FB8882E92CB7A16BCC52(L_6, L_7, L_8, NULL);
		V_11 = ((int32_t)il2cpp_codegen_add(2, (int32_t)L_9));
		uint32_t L_10 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-871878608)))^((int32_t)-660665693)));
		goto IL_000d;
	}

IL_0155:
	{
		uint32_t L_11 = V_2;
		V_3 = L_11;
		G_B2_0 = ((int32_t)1494718980);
		goto IL_000d;
	}

IL_0161:
	{
		uint32_t L_12 = V_1;
		V_2 = L_12;
		uint32_t L_13 = V_12;
		V_1 = L_13;
		G_B2_0 = ((int32_t)520878700);
		goto IL_000d;
	}

IL_0170:
	{
		uint64_t L_14 = V_5;
		uint64_t L_15 = V_6;
		if ((!(((uint64_t)L_14) < ((uint64_t)L_15))))
		{
			goto IL_017e;
		}
	}
	{
		int32_t L_16 = ((int32_t)516689854);
		G_B11_0 = L_16;
		G_B11_1 = L_16;
		goto IL_0184;
	}

IL_017e:
	{
		int32_t L_17 = ((int32_t)1511134464);
		G_B11_0 = L_17;
		G_B11_1 = L_17;
	}

IL_0184:
	{
		uint32_t L_18 = V_15;
		G_B2_0 = ((int32_t)(G_B11_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)-235222819)))));
		goto IL_000d;
	}

IL_0193:
	{
		U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206CU202AU206BU206EU202DU200EU202EU206DU206CU202AU206AU206CU202EU200EU202CU206DU206DU206AU206AU206DU202AU202BU206FU202CU202EU200DU200FU202AU206CU202DU206DU206DU206AU200BU200BU206AU206FU200BU206DU206BU202E_m12A23435B4490B62DD3EA9AECDEB281F0C1CCF0A((&V_0), NULL);
		uint32_t L_19 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)303719314)))^((int32_t)-545068810)));
		goto IL_000d;
	}

IL_01ad:
	{
		uint32_t L_20 = V_1;
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_21 = __this->___U206CU200BU200FU202BU200FU206BU206CU202CU200CU206BU206FU206BU202BU202BU206FU206CU200CU206AU200EU200BU200CU200DU202EU202DU200EU200BU202BU202BU200EU200BU202DU202AU202DU200BU206AU206FU206BU206DU202EU206CU202E_9;
		uint32_t L_22 = V_1;
		uint32_t L_23 = V_13;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_24 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		int32_t L_25 = V_14;
		uint32_t L_26;
		L_26 = U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U202AU200BU200EU202DU206DU200EU202AU200CU206CU206DU202EU206CU202EU202EU202AU202CU200FU202AU206DU200FU202AU206BU202DU202EU206EU202CU202BU200FU206AU206DU202AU206CU200EU206BU202EU206DU206DU200CU206DU206FU202E_mD3262C01160F05F4F9854759F8BEBC12A39476E1(L_21, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), 1)), L_24, L_25, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_26));
		uint32_t L_27 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)1209046129)))^((int32_t)2089412560)));
		goto IL_000d;
	}

IL_01dc:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_28 = __this->___U200DU206DU200CU200EU200BU206EU202BU200DU200CU202CU200FU206BU206DU200FU206FU202AU200EU200BU202DU200BU206AU200EU200FU206CU202EU206DU206CU202AU202BU202EU206BU200EU206FU202DU202CU206FU206CU200CU206FU202E_3;
		uint32_t L_29 = (&V_0)->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		NullCheck(L_28);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_30 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		uint32_t L_31;
		L_31 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_29)))), L_30, NULL);
		if (L_31)
		{
			goto IL_0204;
		}
	}
	{
		int32_t L_32 = ((int32_t)645548603);
		G_B17_0 = L_32;
		G_B17_1 = L_32;
		goto IL_020a;
	}

IL_0204:
	{
		int32_t L_33 = ((int32_t)628975216);
		G_B17_0 = L_33;
		G_B17_1 = L_33;
	}

IL_020a:
	{
		uint32_t L_34 = V_15;
		G_B2_0 = ((int32_t)(G_B17_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_34, ((int32_t)-1637527826)))));
		goto IL_000d;
	}

IL_0219:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_35 = __this->___U206EU202EU202DU202DU200FU206AU200EU200FU202AU202EU200FU206AU200EU206AU202CU206DU206AU206EU200BU202BU202DU200DU200DU206DU206CU200DU202AU202BU202BU202BU200CU202CU206BU206AU206EU200EU206FU202BU200FU202EU202E_0;
		uint32_t L_36 = (&V_0)->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		NullCheck(L_35);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_37 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		uint32_t L_38;
		L_38 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)((int32_t)L_36<<4)))))), L_37, NULL);
		uint32_t L_39 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)-1835106613)))^((int32_t)-776599218)));
		goto IL_000d;
	}

IL_024d:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_40 = __this->___U206CU200FU200CU202BU200EU200DU200CU202AU206CU206AU206CU206DU206DU200FU206AU200EU202DU206CU202AU206DU202AU200CU200DU202BU202BU200FU206DU202AU200CU200BU206EU202BU200BU206BU200BU200FU200FU206EU200DU206AU202E_5;
		uint32_t L_41 = (&V_0)->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		NullCheck(L_40);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_42 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		uint32_t L_43;
		L_43 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_41)))), L_42, NULL);
		if (L_43)
		{
			goto IL_0275;
		}
	}
	{
		int32_t L_44 = ((int32_t)1779385604);
		G_B22_0 = L_44;
		G_B22_1 = L_44;
		goto IL_027b;
	}

IL_0275:
	{
		int32_t L_45 = ((int32_t)833318006);
		G_B22_0 = L_45;
		G_B22_1 = L_45;
	}

IL_027b:
	{
		G_B2_0 = G_B22_1;
		goto IL_000d;
	}

IL_0281:
	{
		uint32_t L_46 = V_1;
		uint64_t L_47 = V_5;
		if ((!(((uint64_t)((int64_t)(uint64_t)L_46)) < ((uint64_t)L_47))))
		{
			goto IL_028f;
		}
	}
	{
		int32_t L_48 = ((int32_t)1677947755);
		G_B26_0 = L_48;
		G_B26_1 = L_48;
		goto IL_0295;
	}

IL_028f:
	{
		int32_t L_49 = ((int32_t)1349756371);
		G_B26_0 = L_49;
		G_B26_1 = L_49;
	}

IL_0295:
	{
		G_B2_0 = G_B26_1;
		goto IL_000d;
	}

IL_029b:
	{
		uint32_t L_50 = V_2;
		V_12 = L_50;
		uint32_t L_51 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_51, ((int32_t)-675063214)))^((int32_t)1710047166)));
		goto IL_000d;
	}

IL_02b1:
	{
		U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* L_52 = __this->___U206AU200FU202BU202BU206AU206DU206AU200EU200CU200EU200BU200FU200EU206AU202DU200DU200BU202BU206DU206EU206EU206BU206CU200CU206CU202AU202CU202DU200FU202BU206EU202DU200DU200CU206AU206FU202AU200FU200CU202CU202E_7;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_53 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		uint64_t L_54 = V_5;
		uint8_t L_55 = V_10;
		NullCheck(L_52);
		uint8_t L_56;
		L_56 = U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U206CU202EU206DU202CU206BU200CU200FU200CU200EU206CU202EU202EU202CU206FU202EU200DU200FU206EU206FU200CU202CU206FU202EU202EU200DU200CU200BU206DU200FU202CU206FU202EU202AU206BU200EU200FU200BU200EU206FU206CU202E_m7E06218FA4367C2AEA20432E6B307F1C8C57E793(L_52, L_53, ((int32_t)(uint32_t)L_54), L_55, NULL);
		V_9 = L_56;
		G_B2_0 = ((int32_t)1664216684);
		goto IL_000d;
	}

IL_02d3:
	{
		uint32_t L_57 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_57, ((int32_t)1651539091)))^((int32_t)-98454091)));
		goto IL_000d;
	}

IL_02e6:
	{
		U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U202DU206DU200EU206DU200EU202AU206AU206AU202AU200FU206DU202AU202BU202DU206FU202BU206CU200CU202EU206CU200CU206FU206CU200EU206CU202AU200EU206CU202BU206CU200DU200EU206BU206BU202DU206BU200EU206BU200CU206FU202E_mCA59E3EA29A46024CB6A88EEE5184F704E3BF929((&V_0), NULL);
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		uint32_t L_58 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_58, ((int32_t)-1960417431)))^((int32_t)1433822758)));
		goto IL_000d;
	}

IL_0306:
	{
		uint64_t L_59 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_59, ((int64_t)1)));
		uint32_t L_60 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_60, ((int32_t)103808680)))^((int32_t)963929865)));
		goto IL_000d;
	}

IL_0320:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1));
		uint32_t L_61 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_61, ((int32_t)-663941965)))^((int32_t)305524828)));
		goto IL_000d;
	}

IL_033b:
	{
		uint32_t L_62 = V_4;
		V_12 = L_62;
		uint32_t L_63 = V_3;
		V_4 = L_63;
		G_B2_0 = ((int32_t)322492428);
		goto IL_000d;
	}

IL_034c:
	{
		U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206AU206DU206DU200BU200CU200DU206BU206FU206CU206FU202AU202BU200FU206BU206AU202AU206DU202CU206CU206FU202DU206EU202CU206BU206AU206BU202EU206FU202AU202BU206EU206DU200FU202EU202AU202EU200EU202BU200BU206BU202E_m12CFBFCAA76732BA2C18BD7668493316D0D3D38E((&V_0), NULL);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* L_64 = __this->___U206FU206EU206CU206DU200FU202AU206BU200FU200EU206AU200BU202BU206AU200CU206EU200EU206BU200EU206DU206DU202BU200BU206AU200FU200CU206EU202BU200DU202BU202AU206DU202DU206AU202BU202DU202BU206CU202DU200FU202E_10;
		uint32_t L_65 = V_11;
		uint32_t L_66;
		L_66 = U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U200FU206DU202EU202BU206FU206DU200EU206BU200FU202DU200DU206AU202DU206DU202AU206AU202EU206DU200CU200BU202DU200BU202BU206EU206BU202BU206BU200FU200FU200FU206BU206BU200DU202CU200EU206CU202CU206EU206CU200EU202E_m8D858CFC9500AA6566538D2E526D11AA5FC82985(L_65, NULL);
		NullCheck(L_64);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_67 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		uint32_t L_68;
		L_68 = U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U202EU200EU206AU202EU200BU206CU206DU200BU206EU206EU206AU206FU206EU200FU202CU200CU206CU200CU200DU206BU200FU206EU200CU206DU200DU202BU202EU206AU206FU200CU202BU202DU200CU200DU202EU206DU200CU200EU206CU200CU202E_m11C6E23613302207ACC9C3EC7909CBD6CC4BBBB1(((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_66)))), L_67, NULL);
		V_13 = L_68;
		uint32_t L_69 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_69, ((int32_t)1895116835)))^((int32_t)-777050577)));
		goto IL_000d;
	}

IL_0386:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_70 = __this->___U200DU206EU206DU202AU206EU202DU202BU200CU200DU202BU206DU200DU206CU200CU206AU202EU202CU200DU202EU202AU202BU206EU206AU206AU202EU206EU206EU206DU206BU206EU202DU200FU206CU200DU200BU206CU206EU206BU200EU202AU202E_4;
		uint32_t L_71 = (&V_0)->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		NullCheck(L_70);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_72 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		uint32_t L_73;
		L_73 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_71)))), L_72, NULL);
		if (L_73)
		{
			goto IL_03ae;
		}
	}
	{
		int32_t L_74 = ((int32_t)1006545975);
		G_B38_0 = L_74;
		G_B38_1 = L_74;
		goto IL_03b4;
	}

IL_03ae:
	{
		int32_t L_75 = ((int32_t)1300595993);
		G_B38_0 = L_75;
		G_B38_1 = L_75;
	}

IL_03b4:
	{
		G_B2_0 = G_B38_1;
		goto IL_000d;
	}

IL_03ba:
	{
		uint32_t L_76 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_76, ((int32_t)1724483110)))^((int32_t)370677008)));
		goto IL_000d;
	}

IL_03cd:
	{
		U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206FU200BU202EU206EU200CU206DU200EU200EU206BU202AU202AU200CU202EU202CU202BU202BU206AU200FU206BU200BU202DU202EU200FU202AU206DU202AU202AU200FU200DU206DU206EU206DU202DU202CU206AU202DU206BU202EU200BU200EU202E_m2E700D64733D952EA9040A29C2F4AAA432D3896B((&V_0), NULL);
		uint32_t L_77 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_77, ((int32_t)706809264)))^((int32_t)170001074)));
		goto IL_000d;
	}

IL_03e7:
	{
		U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206EU202AU202CU202CU202DU206AU202DU202EU200DU200DU202BU202BU206AU206BU206EU206EU200CU202BU200FU206CU200DU202AU200CU206DU202CU202CU206AU206BU202DU202DU206CU200FU206CU200BU200DU200BU202EU202CU202E_mF98912BD51EC40FFE88C0E5345D3E47E97E6729F((&V_0), NULL);
		uint64_t L_78 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)1)));
		uint32_t L_79 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_79, ((int32_t)1288050137)))^((int32_t)81968899)));
		goto IL_000d;
	}

IL_0408:
	{
		goto IL_071d;
	}
	// Dead block : IL_040d: ldc.i4 1475694798

IL_0417:
	{
		uint32_t L_80 = V_13;
		if ((!(((uint32_t)L_80) < ((uint32_t)4))))
		{
			goto IL_0424;
		}
	}
	{
		int32_t L_81 = ((int32_t)-1206000725);
		G_B47_0 = L_81;
		G_B47_1 = L_81;
		goto IL_042a;
	}

IL_0424:
	{
		int32_t L_82 = ((int32_t)-574442965);
		G_B47_0 = L_82;
		G_B47_1 = L_82;
	}

IL_042a:
	{
		uint32_t L_83 = V_15;
		G_B2_0 = ((int32_t)(G_B47_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_83, ((int32_t)1543586131)))));
		goto IL_000d;
	}

IL_0439:
	{
		uint64_t L_84 = V_5;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, ((int64_t)1)));
		uint32_t L_85 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_85, ((int32_t)1472193915)))^((int32_t)2087618551)));
		goto IL_000d;
	}

IL_0453:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_86 = __this->___U202BU202DU202BU206CU206CU202EU206CU200CU206BU200BU202AU202CU206AU200DU202AU202DU206CU202EU200EU202BU200DU200FU202CU200CU206EU202BU200BU202DU202EU202AU202BU206CU206FU202BU202DU206BU206AU206DU206BU206FU202E_1;
		uint32_t L_87 = (&V_0)->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		uint32_t L_88 = V_8;
		NullCheck(L_86);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_89 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		uint32_t L_90;
		L_90 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_87<<4)), (int32_t)L_88)))))), L_89, NULL);
		if (!L_90)
		{
			goto IL_0480;
		}
	}
	{
		int32_t L_91 = ((int32_t)-1324224281);
		G_B52_0 = L_91;
		G_B52_1 = L_91;
		goto IL_0486;
	}

IL_0480:
	{
		int32_t L_92 = ((int32_t)-597089923);
		G_B52_0 = L_92;
		G_B52_1 = L_92;
	}

IL_0486:
	{
		uint32_t L_93 = V_15;
		G_B2_0 = ((int32_t)(G_B52_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_93, ((int32_t)-2046766306)))));
		goto IL_000d;
	}

IL_0495:
	{
		V_5 = ((int64_t)0);
		uint32_t L_94 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_94, ((int32_t)-1678616115)))^((int32_t)1294172401)));
		goto IL_000d;
	}

IL_04ac:
	{
		uint32_t L_95 = V_1;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_96 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		int32_t L_97 = V_14;
		NullCheck(L_96);
		uint32_t L_98;
		L_98 = U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_U206FU200DU200EU202AU202BU200FU206FU200BU206CU200DU200DU202DU200CU206FU202AU202DU200FU206FU200BU202EU206DU206EU200DU202EU200BU206FU200EU200EU206AU202DU202AU200BU200DU206DU206BU206EU200EU200DU200FU202CU202E_m0EC2E771C35B2C5043DF4432602047105AE490E8(L_96, ((int32_t)il2cpp_codegen_subtract(L_97, 4)), NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, ((int32_t)((int32_t)L_98<<4))));
		G_B2_0 = ((int32_t)2011005243);
		goto IL_000d;
	}

IL_04ca:
	{
		V_4 = 0;
		uint32_t L_99 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_99, ((int32_t)-607669860)))^((int32_t)-47009736)));
		goto IL_000d;
	}

IL_04e0:
	{
		goto IL_07c5;
	}
	// Dead block : IL_04e5: ldc.i4 790397798

IL_04ef:
	{
		uint32_t L_100 = V_1;
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* L_101 = (&__this->___U206DU202EU206FU202BU206EU206EU202AU206FU202BU202DU202AU200FU200CU206EU200EU200DU206BU206CU200CU206BU200DU202BU200FU206DU206FU200EU202DU206FU200BU206BU200FU200BU206FU200FU202CU206BU202CU206BU202EU202AU202E_16);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_102 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		uint32_t L_103;
		L_103 = U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U206EU200BU206FU206FU206AU200BU206FU200DU206EU200BU206EU206AU202AU200EU200FU200FU202BU202CU200EU206FU206DU200CU200FU200EU202DU202EU202EU206CU206BU200DU202CU200FU206DU202EU200BU200BU200CU206CU202DU200DU202E_m58CDEDE7F052C4A8E91D9E1C48E45BFD3413BC98(L_101, L_102, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)L_103));
		uint32_t L_104 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_104, ((int32_t)-1932822475)))^((int32_t)-616282519)));
		goto IL_000d;
	}

IL_0516:
	{
		U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206EU202AU202CU202CU202DU206AU202DU202EU200DU200DU202BU202BU206AU206BU206EU206EU200CU202BU200FU206CU200DU202AU200CU206DU202CU202CU206AU206BU202DU202DU206CU200FU206CU200BU200DU200BU202EU202CU202E_mF98912BD51EC40FFE88C0E5345D3E47E97E6729F((&V_0), NULL);
		uint32_t L_105 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_105, ((int32_t)675072263)))^((int32_t)1500877365)));
		goto IL_000d;
	}

IL_0530:
	{
		uint32_t L_106 = V_3;
		V_12 = L_106;
		uint32_t L_107 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_107, ((int32_t)-461932171)))^((int32_t)-2015811374)));
		goto IL_000d;
	}

IL_0546:
	{
		uint64_t L_108 = V_5;
		uint32_t L_109 = __this->___U200CU202CU202EU200CU206AU200DU206FU206EU202BU202BU202EU202EU206CU200EU202BU200CU200BU206FU202AU206EU206BU206FU200BU206DU206EU206BU200CU200BU206EU202EU206DU206BU206CU200EU202AU200DU206AU200FU202EU206BU202E_17;
		V_8 = ((int32_t)(((int32_t)(uint32_t)L_108)&(int32_t)L_109));
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_110 = __this->___U206EU202EU202DU202DU200FU206AU200EU200FU202AU202EU200FU206AU200EU206AU202CU206DU206AU206EU200BU202BU202DU200DU200DU206DU206CU200DU202AU202BU202BU202BU200CU202CU206BU206AU206EU200EU206FU202BU200FU202EU202E_0;
		uint32_t L_111 = (&V_0)->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		uint32_t L_112 = V_8;
		NullCheck(L_110);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_113 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		uint32_t L_114;
		L_114 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(((L_110)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_111<<4)), (int32_t)L_112)))))), L_113, NULL);
		if (L_114)
		{
			goto IL_057f;
		}
	}
	{
		int32_t L_115 = ((int32_t)448215032);
		G_B64_0 = L_115;
		G_B64_1 = L_115;
		goto IL_0585;
	}

IL_057f:
	{
		int32_t L_116 = ((int32_t)271616819);
		G_B64_0 = L_116;
		G_B64_1 = L_116;
	}

IL_0585:
	{
		G_B2_0 = G_B64_1;
		goto IL_000d;
	}

IL_058b:
	{
		goto IL_0281;
	}
	// Dead block : IL_0590: ldc.i4 1179841569

IL_059a:
	{
		uint32_t L_117 = V_13;
		V_1 = L_117;
		G_B2_0 = ((int32_t)723844043);
		goto IL_000d;
	}

IL_05a7:
	{
		uint32_t L_118 = V_3;
		V_4 = L_118;
		G_B2_0 = ((int32_t)576693369);
		goto IL_000d;
	}

IL_05b4:
	{
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* L_119 = __this->___U200DU202EU202DU202DU206BU202AU202AU200FU206EU206DU206EU202BU200BU206FU202BU206AU206FU200EU206CU202EU200EU200BU202AU202BU206BU200FU202EU206EU202CU202CU200DU202AU202EU206BU200DU202BU202EU200DU202EU206EU202E_8;
		uint8_t L_120 = V_9;
		NullCheck(L_119);
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U202AU200BU206FU206CU206FU202AU202BU206CU202AU200EU200DU200EU206FU206FU202DU200EU206AU206EU202BU200BU206CU202CU206FU200FU200EU206FU200CU202CU202CU206BU206DU206AU206DU200DU206AU202AU206DU206EU202CU200EU202E_m6033FD8C912CFCFF568DF71ABF869FC7F2AAF0D6(L_119, L_120, NULL);
		G_B2_0 = ((int32_t)2052556992);
		goto IL_000d;
	}

IL_05cb:
	{
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* L_121 = __this->___U200DU202EU202DU202DU206BU202AU202AU200FU206EU206DU206EU202BU200BU206FU202BU206AU206FU200EU206CU202EU200EU200BU202AU202BU206BU200FU202EU206EU202CU202CU200DU202AU202EU206BU200DU202BU202EU200DU202EU206EU202E_8;
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* L_122 = __this->___U200DU202EU202DU202DU206BU202AU202AU200FU206EU206DU206EU202BU200BU206FU202BU206AU206FU200EU206CU202EU200EU200BU202AU202BU206BU200FU202EU206EU202CU202CU200DU202AU202EU206BU200DU202BU202EU200DU202EU206EU202E_8;
		uint32_t L_123 = V_1;
		NullCheck(L_122);
		uint8_t L_124;
		L_124 = U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U200FU200BU202BU200BU200FU202CU200BU200FU206CU202EU206FU206CU202DU202DU206AU206BU200BU200BU200BU206AU206AU202AU206CU200BU200EU200BU206FU206AU200FU202CU200DU202DU202CU206CU202BU202BU206BU206EU200FU200EU202E_m41F30D3BFE1297089F132A49898DA2DD86A83D9C(L_122, L_123, NULL);
		NullCheck(L_121);
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U202AU200BU206FU206CU206FU202AU202BU206CU202AU200EU200DU200EU206FU206FU202DU200EU206AU206EU202BU200BU206CU202CU206FU200FU200EU206FU200CU202CU202CU206BU206DU206AU206DU200DU206AU202AU206DU206EU202CU200EU202E_m6033FD8C912CFCFF568DF71ABF869FC7F2AAF0D6(L_121, L_124, NULL);
		uint32_t L_125 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_125, ((int32_t)1763341278)))^((int32_t)-2022937833)));
		goto IL_000d;
	}

IL_05f5:
	{
		U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* L_126 = __this->___U206AU200FU202BU202BU206AU206DU206AU200EU200CU200EU200BU200FU200EU206AU202DU200DU200BU202BU206DU206EU206EU206BU206CU200CU206CU202AU202CU202DU200FU202BU206EU202DU200DU200CU206AU206FU202AU200FU200CU202CU202E_7;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_127 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		NullCheck(L_126);
		uint8_t L_128;
		L_128 = U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U206CU202EU206DU202CU206BU200CU200FU200CU200EU206CU202EU202EU202CU206FU202EU200DU200FU206EU206FU200CU202CU206FU202EU202EU200DU200CU200BU206DU200FU202CU206FU202EU202AU206BU200EU200FU200BU200EU206FU206CU202E_m7E06218FA4367C2AEA20432E6B307F1C8C57E793(L_126, L_127, 0, (uint8_t)0, NULL);
		V_7 = L_128;
		uint32_t L_129 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_129, ((int32_t)-679647398)))^((int32_t)-542829856)));
		goto IL_000d;
	}

IL_061d:
	{
		uint32_t L_130 = V_1;
		uint32_t L_131 = __this->___U202BU206DU202DU200BU206AU206DU206CU200EU200FU200EU206FU200CU206AU202AU206BU202DU206AU200CU200BU200FU202CU206EU206FU202AU200EU206DU206CU200BU206DU202AU206CU206AU206AU200CU206EU202EU206CU206BU206AU206AU202E_15;
		if ((!(((uint32_t)L_130) < ((uint32_t)L_131))))
		{
			goto IL_062e;
		}
	}
	{
		int32_t L_132 = ((int32_t)1508296771);
		G_B75_0 = L_132;
		G_B75_1 = L_132;
		goto IL_0634;
	}

IL_062e:
	{
		int32_t L_133 = ((int32_t)2062810378);
		G_B75_0 = L_133;
		G_B75_1 = L_133;
	}

IL_0634:
	{
		uint32_t L_134 = V_15;
		G_B2_0 = ((int32_t)(G_B75_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_134, ((int32_t)627368593)))));
		goto IL_000d;
	}

IL_0643:
	{
		U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* L_135 = __this->___U206AU200FU202BU202BU206AU206DU206AU200EU200CU200EU200BU200FU200EU206AU202DU200DU200BU202BU206DU206EU206EU206BU206CU200CU206CU202AU202CU202DU200FU202BU206EU202DU200DU200CU206AU206FU202AU200FU200CU202CU202E_7;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_136 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		uint64_t L_137 = V_5;
		uint8_t L_138 = V_10;
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* L_139 = __this->___U200DU202EU202DU202DU206BU202AU202AU200FU206EU206DU206EU202BU200BU206FU202BU206AU206FU200EU206CU202EU200EU200BU202AU202BU206BU200FU202EU206EU202CU202CU200DU202AU202EU206BU200DU202BU202EU200DU202EU206EU202E_8;
		uint32_t L_140 = V_1;
		NullCheck(L_139);
		uint8_t L_141;
		L_141 = U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U200FU200BU202BU200BU200FU202CU200BU200FU206CU202EU206FU206CU202DU202DU206AU206BU200BU200BU200BU206AU206AU202AU206CU200BU200EU200BU206FU206AU200FU202CU200DU202DU202CU206CU202BU202BU206BU206EU200FU200EU202E_m41F30D3BFE1297089F132A49898DA2DD86A83D9C(L_139, L_140, NULL);
		NullCheck(L_135);
		uint8_t L_142;
		L_142 = U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U200CU202BU200BU206DU200EU200CU206CU200EU202CU200DU200FU206AU206EU206EU200DU206FU202BU206DU202BU200DU202AU202DU200BU202DU202EU206FU202EU206FU200EU200FU206DU206EU200BU202BU202DU200CU202CU200EU206CU206BU202E_m73D85D55CC80775E3234EFCB6FE480C92984696F(L_135, L_136, ((int32_t)(uint32_t)L_137), L_138, L_141, NULL);
		V_9 = L_142;
		uint32_t L_143 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_143, ((int32_t)1381113070)))^((int32_t)1774733002)));
		goto IL_000d;
	}

IL_067a:
	{
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* L_144 = __this->___U200DU202EU202DU202DU206BU202AU202AU200FU206EU206DU206EU202BU200BU206FU202BU206AU206FU200EU206CU202EU200EU200BU202AU202BU206BU200FU202EU206EU202CU202CU200DU202AU202EU206BU200DU202BU202EU200DU202EU206EU202E_8;
		NullCheck(L_144);
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U206DU200BU200DU200EU206BU206EU206BU200FU202AU200BU206CU200EU200CU206AU200EU206DU202AU202DU200BU202DU202CU206EU206EU206BU200BU202EU200DU200CU206EU206FU206FU206CU200DU206DU200FU206BU206AU202CU202DU202EU202E_mD5D9C4EBCDEA16E89AF3BAA7F62EAC3C752DEE8A(L_144, NULL);
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* L_145 = __this->___U200DU202EU202DU202DU206BU202AU202AU200FU206EU206DU206EU202BU200BU206FU202BU206AU206FU200EU206CU202EU200EU200BU202AU202BU206BU200FU202EU206EU202CU202CU200DU202AU202EU206BU200DU202BU202EU200DU202EU206EU202E_8;
		NullCheck(L_145);
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U202EU206AU202CU206FU206EU200EU202CU202CU206DU200FU206EU206AU202EU206AU206EU206BU200CU202DU206BU200DU206AU200BU200DU200BU206EU200BU200EU206AU206CU206EU206EU202CU206EU200FU206CU200BU206BU202DU202DU206AU202E_m14AF9DF836CD19F16FBE1003C00F58B1C6A2F929(L_145, NULL);
		G_B2_0 = ((int32_t)2046156246);
		goto IL_000d;
	}

IL_069a:
	{
		uint32_t L_146 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract(((int32_t)((uint32_t)L_146>>1)), 1));
		uint32_t L_147 = V_13;
		int32_t L_148 = V_14;
		V_1 = ((int32_t)(((int32_t)(2|((int32_t)((int32_t)L_147&1))))<<((int32_t)(L_148&((int32_t)31)))));
		uint32_t L_149 = V_13;
		if ((!(((uint32_t)L_149) >= ((uint32_t)((int32_t)14)))))
		{
			goto IL_06bd;
		}
	}
	{
		int32_t L_150 = ((int32_t)1234635556);
		G_B81_0 = L_150;
		G_B81_1 = L_150;
		goto IL_06c3;
	}

IL_06bd:
	{
		int32_t L_151 = ((int32_t)258043759);
		G_B81_0 = L_151;
		G_B81_1 = L_151;
	}

IL_06c3:
	{
		uint32_t L_152 = V_15;
		G_B2_0 = ((int32_t)(G_B81_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_152, ((int32_t)1951633971)))));
		goto IL_000d;
	}

IL_06d2:
	{
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* L_153 = __this->___U200DU202EU202DU202DU206BU202AU202AU200FU206EU206DU206EU202BU200BU206FU202BU206AU206FU200EU206CU202EU200EU200BU202AU202BU206BU200FU202EU206EU202CU202CU200DU202AU202EU206BU200DU202BU202EU200DU202EU206EU202E_8;
		NullCheck(L_153);
		uint8_t L_154;
		L_154 = U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U200FU200BU202BU200BU200FU202CU200BU200FU206CU202EU206FU206CU202DU202DU206AU206BU200BU200BU200BU206AU206AU202AU206CU200BU200EU200BU206FU206AU200FU202CU200DU202DU202CU206CU202BU202BU206BU206EU200FU200EU202E_m41F30D3BFE1297089F132A49898DA2DD86A83D9C(L_153, 0, NULL);
		V_10 = L_154;
		bool L_155;
		L_155 = U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U202CU202BU206BU206FU200EU206EU202AU202EU200CU200CU206EU202EU206FU206FU202CU202AU202BU202BU200DU202BU206FU206FU206EU206CU206AU200BU206BU206AU202EU202EU202CU206BU200DU202AU202AU202EU200FU206EU206BU200DU202E_mF85A2AEA4AB7426A02A730540D33DA8A8EB73983((&V_0), NULL);
		if (L_155)
		{
			goto IL_06f1;
		}
	}
	{
		int32_t L_156 = ((int32_t)854205401);
		G_B85_0 = L_156;
		G_B85_1 = L_156;
		goto IL_06f7;
	}

IL_06f1:
	{
		int32_t L_157 = ((int32_t)542965664);
		G_B85_0 = L_157;
		G_B85_1 = L_157;
	}

IL_06f7:
	{
		uint32_t L_158 = V_15;
		G_B2_0 = ((int32_t)(G_B85_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_158, ((int32_t)373921752)))));
		goto IL_000d;
	}

IL_0706:
	{
		uint32_t L_159 = V_2;
		V_3 = L_159;
		uint32_t L_160 = V_1;
		V_2 = L_160;
		uint32_t L_161 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_161, ((int32_t)556799498)))^((int32_t)1761898346)));
		goto IL_000d;
	}

IL_071d:
	{
		uint64_t L_162 = V_5;
		uint64_t L_163 = V_6;
		if ((!(((uint64_t)L_162) >= ((uint64_t)L_163))))
		{
			goto IL_072b;
		}
	}
	{
		int32_t L_164 = ((int32_t)1321794354);
		G_B90_0 = L_164;
		G_B90_1 = L_164;
		goto IL_0731;
	}

IL_072b:
	{
		int32_t L_165 = ((int32_t)1475694798);
		G_B90_0 = L_165;
		G_B90_1 = L_165;
	}

IL_0731:
	{
		G_B2_0 = G_B90_1;
		goto IL_000d;
	}

IL_0737:
	{
		uint32_t L_166 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_166, ((int32_t)-1697024075)))^((int32_t)-1790007658)));
		goto IL_000d;
	}

IL_074a:
	{
		uint32_t L_167 = V_1;
		if ((!(((uint32_t)L_167) == ((uint32_t)(-1)))))
		{
			goto IL_0756;
		}
	}
	{
		int32_t L_168 = ((int32_t)922233705);
		G_B95_0 = L_168;
		G_B95_1 = L_168;
		goto IL_075c;
	}

IL_0756:
	{
		int32_t L_169 = ((int32_t)1936101530);
		G_B95_0 = L_169;
		G_B95_1 = L_169;
	}

IL_075c:
	{
		G_B2_0 = G_B95_1;
		goto IL_000d;
	}

IL_0762:
	{
		uint32_t L_170 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_170, ((int32_t)2066026113)))^((int32_t)-1818854413)));
		goto IL_000d;
	}

IL_0775:
	{
		uint64_t L_171 = V_5;
		uint32_t L_172 = V_11;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_171, ((int64_t)(uint64_t)L_172)));
		uint32_t L_173 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_173, ((int32_t)-1954168019)))^((int32_t)1989887996)));
		goto IL_000d;
	}

IL_0790:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_174 = __this->___U202CU202CU206CU200CU200FU200BU206FU206FU206EU202BU206EU200EU200EU200CU206CU202CU202BU202EU202EU206CU200BU202BU206AU206BU206AU206BU206FU202AU200FU206EU202AU202AU206AU200CU202DU200BU206AU206AU206AU206DU202E_2;
		uint32_t L_175 = (&V_0)->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		NullCheck(L_174);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_176 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		uint32_t L_177;
		L_177 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(((L_174)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_175)))), L_176, NULL);
		if ((!(((uint32_t)L_177) == ((uint32_t)1))))
		{
			goto IL_07b9;
		}
	}
	{
		int32_t L_178 = ((int32_t)871672879);
		G_B101_0 = L_178;
		G_B101_1 = L_178;
		goto IL_07bf;
	}

IL_07b9:
	{
		int32_t L_179 = ((int32_t)914005571);
		G_B101_0 = L_179;
		G_B101_1 = L_179;
	}

IL_07bf:
	{
		G_B2_0 = G_B101_1;
		goto IL_000d;
	}

IL_07c5:
	{
		U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* L_180 = __this->___U206FU206DU200DU202EU206DU206CU202CU206BU206BU202AU200CU202AU206BU202BU206AU200EU200CU202BU200DU206AU202DU206FU206CU206FU206DU206EU200BU200BU202EU202CU206AU206BU206FU200FU206CU206BU206CU206FU206EU202DU202E_12;
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_181 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		uint32_t L_182 = V_8;
		NullCheck(L_180);
		uint32_t L_183;
		L_183 = U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_U206AU200BU200CU200BU200DU200BU202AU202AU206EU206FU206CU202EU200DU202DU200CU206DU202CU200BU202DU200FU202DU202DU206FU206DU206AU202BU200BU200DU200DU200CU202BU206FU206CU206DU200BU202CU200EU202AU202BU206AU202E_m5A78A5A6288EEE6417E0FB8882E92CB7A16BCC52(L_180, L_181, L_182, NULL);
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_183, 2));
		G_B2_0 = ((int32_t)1299567285);
		goto IL_000d;
	}

IL_07e6:
	{
		int64_t L_184 = ___3_p;
		V_6 = L_184;
		uint32_t L_185 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_185, ((int32_t)-2041997156)))^((int32_t)941939059)));
		goto IL_000d;
	}

IL_07fd:
	{
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* L_186 = __this->___U200DU202EU202DU202DU206BU202AU202AU200FU206EU206DU206EU202BU200BU206FU202BU206AU206FU200EU206CU202EU200EU200BU202AU202BU206BU200FU202EU206EU202CU202CU200DU202AU202EU206BU200DU202BU202EU200DU202EU206EU202E_8;
		uint32_t L_187 = V_1;
		uint32_t L_188 = V_11;
		NullCheck(L_186);
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U202CU200FU206DU206DU206BU202CU206BU200CU206CU206AU202BU200FU206EU206AU202CU200EU202AU200EU206EU206DU206BU206BU200BU202DU206DU206DU206BU206CU206FU206CU206AU206AU206EU202CU206AU200FU200DU206FU202DU202E_mF6F7BC0B8DB1DC9BA31FA2913616E378552DA5F1(L_186, L_187, L_188, NULL);
		G_B2_0 = ((int32_t)1948892515);
		goto IL_000d;
	}

IL_0815:
	{
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_189 = __this->___U206FU206DU206CU202EU206AU202AU202DU206BU206BU202AU200FU200FU200DU206FU202BU206EU200FU202BU200EU200DU202CU200BU200EU202AU202DU202EU206EU206BU206CU206EU206DU206CU206EU200FU202CU206EU200CU206CU200BU200CU202E_11;
		NullCheck(L_189);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_U206FU206AU200EU206EU206CU200FU202CU200CU200BU206FU200FU206DU206AU206EU200FU206CU202DU200DU200FU202EU206FU206AU200BU200DU206BU206AU202BU206FU206FU200CU206CU206FU202EU206AU202DU202DU202BU206BU206DU200EU202E_m27EB8F41F824C130C08A061E7F663D0CDB6C7EB1(L_189, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U206EU206FU200CU206FU202BU202EU202CU200FU202DU202CU200BU200FU202CU202BU200CU206CU206BU200BU206FU202BU206EU200BU202BU202EU206CU202CU200BU200EU200CU200BU206BU200CU206FU206BU200EU206CU202AU206EU206FU202AU202E_m89E4B71EA4B5A9F6F0FB9C0C2143BEC3CBA6F145 (U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_tF9ABED3C07D9A5CE693DDCE0C281744A8D588DB4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int32_t)((int32_t)L_2%((int32_t)9)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_p;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int32_t)((int32_t)L_5/((int32_t)9)));
		int32_t L_6 = V_1;
		V_2 = ((int32_t)(L_6%5));
	}

IL_0012:
	{
		G_B2_0 = ((int32_t)-1089551664);
	}

IL_0017:
	{
		int32_t L_7 = ((int32_t)(G_B2_0^((int32_t)-1909468213)));
		V_6 = L_7;
		switch (((int32_t)((uint32_t)(int32_t)L_7%(uint32_t)(int32_t)8)))
		{
			case 0:
			{
				goto IL_00d4;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_00a1;
			}
			case 4:
			{
				goto IL_0012;
			}
			case 5:
			{
				goto IL_007f;
			}
			case 6:
			{
				goto IL_00ef;
			}
			case 7:
			{
				goto IL_00bb;
			}
		}
	}
	{
		goto IL_00ef;
	}

IL_004c:
	{
		uint32_t L_8 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_p;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(1, L_10));
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, ((int32_t)((int32_t)L_12<<((int32_t)(((int32_t)il2cpp_codegen_multiply(L_13, 8))&((int32_t)31)))))));
		int32_t L_14 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		G_B2_0 = ((int32_t)-284941476);
		goto IL_0017;
	}

IL_006c:
	{
		V_5 = 0;
		uint32_t L_15 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)263206972)))^((int32_t)-57608160)));
		goto IL_0017;
	}

IL_007f:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U206FU200EU200FU200CU206AU206FU206FU202EU200CU200CU200DU206DU200BU206EU200FU202AU202EU206BU206BU206BU200CU200DU206EU202CU200FU202EU206AU200DU206EU206CU206EU202DU206CU200DU200DU206BU206DU202AU206BU202CU202E_m875FCC0B80EBA9F1F93240B081FAC221D0A9ED8A(__this, L_16, L_17, NULL);
		int32_t L_18 = V_3;
		U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U200CU206AU200DU200CU200BU200DU206FU206DU202DU202AU200FU202CU202AU206AU206CU202AU206FU206EU202CU200DU202BU202EU202AU202BU206AU206DU206EU206BU202BU202CU200CU202BU200DU206CU200BU200CU202BU200CU202EU202BU202E_mF088E6D8FCE8B710E6C29B907C860C0B8BBB2BC7(__this, L_18, NULL);
		uint32_t L_19 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)-1329227495)))^((int32_t)-253707576)));
		goto IL_0017;
	}

IL_00a1:
	{
		int32_t L_20 = V_1;
		V_3 = ((int32_t)(L_20/5));
		V_4 = 0;
		uint32_t L_21 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)-710254269)))^((int32_t)-1860666133)));
		goto IL_0017;
	}

IL_00bb:
	{
		int32_t L_22 = V_5;
		if ((((int32_t)L_22) >= ((int32_t)4)))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_23 = ((int32_t)-1515401767);
		G_B11_0 = L_23;
		G_B11_1 = L_23;
		goto IL_00ce;
	}

IL_00c8:
	{
		int32_t L_24 = ((int32_t)-1759290293);
		G_B11_0 = L_24;
		G_B11_1 = L_24;
	}

IL_00ce:
	{
		G_B2_0 = G_B11_1;
		goto IL_0017;
	}

IL_00d4:
	{
		uint32_t L_25 = V_4;
		U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U206BU206CU206BU206BU202CU202EU202EU200FU202CU206CU206BU206CU206FU206AU200DU202DU206FU206EU206CU206DU200BU206BU202DU206CU206AU202DU206FU206FU206CU206AU200BU206BU202BU202BU200EU200FU202BU200DU206AU200CU202E_m8148C4F93ADAE2AC630824A16B431A91005DEDA6(__this, L_25, NULL);
		uint32_t L_26 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_26, ((int32_t)281991067)))^((int32_t)-601413130)));
		goto IL_0017;
	}

IL_00ef:
	{
		return;
	}
}
// System.UInt32 <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U200FU202DU206BU200FU202DU202AU200BU206FU202CU202AU202DU206EU202DU206EU200EU200CU202CU202BU206CU200EU202EU206AU202DU206FU206EU202AU200DU206DU200EU200DU202BU206AU202CU200EU200FU202CU206EU206FU200DU206BU202E_U200FU206DU202EU202BU206FU206DU200EU206BU200FU202DU200DU206AU202DU206DU202AU206AU202EU206DU200CU200BU202DU200BU202BU206EU206BU202BU206BU200FU200FU200FU206BU206BU200DU202CU200EU206CU202CU206EU206CU200EU202E_m8D858CFC9500AA6566538D2E526D11AA5FC82985 (uint32_t ___0_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		uint32_t L_0 = ___0_p;
		___0_p = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 2));
		uint32_t L_1 = ___0_p;
		if ((!(((uint32_t)L_1) < ((uint32_t)4))))
		{
			goto IL_003c;
		}
	}

IL_0009:
	{
		G_B2_0 = ((int32_t)-321938022);
	}

IL_000e:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-928152656)));
		V_0 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0009;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_003c;
	}

IL_002b:
	{
		uint32_t L_3 = ___0_p;
		return L_3;
	}
	// Dead block : IL_002d: ldloc.0

IL_003c:
	{
		return 3;
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
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E__ctor_m5D03E7761E920102AB522A10737E4C866C8A4662 (U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D V_0;
	memset((&V_0), 0, sizeof(V_0));
	U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint32_t V_2 = 0;
	{
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* L_0 = (U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23*)(U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23*)SZArrayNew(U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)16)));
		__this->___U202CU200BU200BU202BU206EU206EU200FU200EU206DU206AU206CU206DU206BU200FU206CU206AU200CU206DU200BU200FU200CU206DU206AU200FU200EU202BU206EU202DU200EU202DU206EU206EU206FU202AU206AU202DU200EU202DU200CU206CU202E_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202CU200BU200BU202BU206EU206EU200FU200EU206DU206AU206CU206DU206BU200FU206CU206AU200CU206DU200BU200FU200CU206DU206AU200FU200EU202BU206EU202DU200EU202DU206EU206EU206FU202AU206AU202DU200EU202DU200CU206CU202E_0), (void*)L_0);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* L_1 = (U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23*)(U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23*)SZArrayNew(U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)((int32_t)16)));
		__this->___U206FU202EU206BU200FU202BU200DU200FU206FU200FU200BU202AU200CU206AU206CU202CU200CU202DU200EU200EU200EU206FU200EU206CU202DU202AU202DU206BU206EU202DU206AU202EU206DU206FU200CU202AU202DU206DU206BU206BU202AU202E_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U206FU202EU206BU200FU202BU200DU200FU206FU200FU200BU202AU200CU206AU206CU202CU200CU202DU200EU200EU200EU206FU200EU206CU202DU202AU202DU206BU206EU202DU206AU202EU206DU206FU200CU202AU202DU206DU206BU206BU202AU202E_1), (void*)L_1);
		il2cpp_codegen_initobj((&V_0), sizeof(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D));
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D L_2 = V_0;
		__this->___U206BU202DU202BU202EU200BU200BU202CU202EU206EU206CU206AU200EU206EU206EU202BU202AU200FU206DU202BU206AU200EU206EU202BU200BU200FU206BU200FU202BU200EU206EU202EU206AU202BU200EU202EU202AU200DU202CU202BU206BU202E_2 = L_2;
		il2cpp_codegen_initobj((&V_1), sizeof(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D));
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D L_3 = V_1;
		__this->___U200FU202AU202EU206AU202BU200CU206AU202BU202BU206BU200BU202CU200EU200CU202EU206BU200BU206CU202BU202DU202CU202CU202BU206BU200EU206CU206DU206AU202AU202AU206DU202AU202DU202CU202DU206CU206FU200BU206CU202BU202E_3 = L_3;
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C L_4;
		memset((&L_4), 0, sizeof(L_4));
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E__ctor_m0DA983E9D47D7F98252B00151BC632C68202CCE0((&L_4), 8, /*hidden argument*/NULL);
		__this->___U202CU206AU206CU202EU202DU200CU202CU200EU200BU200BU200EU202DU200DU200CU202AU206CU200FU200CU200BU206FU200BU206DU200CU206CU200CU200DU200CU206CU202DU200CU202BU202BU200CU206EU200DU202EU206CU206DU202AU206DU202E_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U202CU206AU206CU202EU202DU200CU202CU200EU200BU200BU200EU202DU200DU200CU202AU206CU200FU200CU200BU206FU200BU206DU200CU206CU200CU200DU200CU206CU202DU200CU202BU202BU200CU206EU200DU202EU206CU206DU202AU206DU202E_4))->___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0), (void*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_U202BU206DU206CU202CU206DU202EU202DU202AU202CU206FU206CU202BU206EU206EU206FU202EU206AU206BU206AU206DU200DU200BU200BU202BU206EU206DU200EU200CU202CU206BU206CU206DU200EU202EU200BU202AU206EU200EU200EU200FU202E_m62132137009AC758DF72F011B9DA46B0E822A9F7 (U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* __this, uint32_t ___0_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		uint32_t L_0 = __this->___U200FU200EU200BU200FU200BU206BU202EU202DU200CU206CU200EU206DU206EU200FU202DU206EU202CU206CU200FU200CU200FU206DU202BU200BU202DU206FU200BU206EU200EU202CU206DU206BU200DU206FU206EU200DU202DU206FU206BU202EU202E_5;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)309625796);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1595037547)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0093;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0055;
			}
			case 3:
			{
				goto IL_0007;
			}
			case 4:
			{
				goto IL_0040;
			}
		}
	}
	{
		goto IL_0093;
	}

IL_0031:
	{
		uint32_t L_2 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)-1495840066)))^((int32_t)1616865787)));
		goto IL_000c;
	}

IL_0040:
	{
		uint32_t L_3 = V_0;
		uint32_t L_4 = ___0_p;
		if ((!(((uint32_t)L_3) >= ((uint32_t)L_4))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5 = ((int32_t)250939443);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_0052;
	}

IL_004c:
	{
		int32_t L_6 = ((int32_t)2023363884);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_0052:
	{
		G_B2_0 = G_B8_1;
		goto IL_000c;
	}

IL_0055:
	{
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* L_7 = __this->___U202CU200BU200BU202BU206EU206EU200FU200EU206DU206AU206CU206DU206BU200FU206CU206AU200CU206DU200BU200FU200CU206DU206AU200FU200EU202BU206EU202DU200EU202DU206EU206EU206FU202AU206AU202DU200EU202DU200CU206CU202E_0;
		uint32_t L_8 = V_0;
		NullCheck(L_7);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C L_9;
		memset((&L_9), 0, sizeof(L_9));
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E__ctor_m0DA983E9D47D7F98252B00151BC632C68202CCE0((&L_9), 3, /*hidden argument*/NULL);
		*(U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C*)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_8)))) = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C*)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_8)))))->___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0), (void*)NULL);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* L_10 = __this->___U206FU202EU206BU200FU202BU200DU200FU206FU200FU200BU202AU200CU206AU206CU202CU200CU202DU200EU200EU200EU206FU200EU206CU202DU202AU202DU206BU206EU202DU206AU202EU206DU206FU200CU202AU202DU206DU206BU206BU202AU202E_1;
		uint32_t L_11 = V_0;
		NullCheck(L_10);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C L_12;
		memset((&L_12), 0, sizeof(L_12));
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E__ctor_m0DA983E9D47D7F98252B00151BC632C68202CCE0((&L_12), 3, /*hidden argument*/NULL);
		*(U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C*)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_11)))) = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C*)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_11)))))->___U206CU206AU206AU200BU200BU206FU200DU200FU202AU202EU202AU200EU206CU206EU202BU206AU200EU206AU202EU206DU206BU200CU200DU206CU200DU206EU200DU202CU206DU200DU206AU202DU202DU202BU206FU202AU206CU200EU206DU206EU202E_0), (void*)NULL);
		uint32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, 1));
		G_B2_0 = ((int32_t)614073881);
		goto IL_000c;
	}

IL_0093:
	{
		uint32_t L_14 = ___0_p;
		__this->___U200FU200EU200BU200FU200BU206BU202EU202DU200CU206CU200EU206DU206EU200FU202DU206EU202CU206CU200FU200CU200FU206DU202BU200BU202DU206FU200BU206EU200EU202CU206DU206BU200DU206FU206EU200DU202DU206FU206BU202EU202E_5 = L_14;
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_U202CU206BU200BU202AU206BU200FU202DU202BU200EU202CU200EU200CU206DU200DU206CU202AU202AU200FU200EU206CU200CU200EU206CU206BU206FU206AU206EU206AU206FU206DU200DU202CU202BU202EU206DU206DU206AU200EU202EU202CU202E_mEC13F03048B85BA5214C342FD14382E1505F3547 (U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* L_0 = (&__this->___U206BU202DU202BU202EU200BU200BU202CU202EU206EU206CU206AU200EU206EU206EU202BU202AU200FU206DU202BU206AU200EU206EU202BU200BU200FU206BU200FU202BU200EU206EU202EU206AU202BU200EU202EU202AU200DU202CU202BU206BU202E_2);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B(L_0, NULL);
		V_0 = 0;
	}

IL_000d:
	{
		G_B2_0 = ((int32_t)-589202861);
	}

IL_0012:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1417201546)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)8)))
		{
			case 0:
			{
				goto IL_0068;
			}
			case 1:
			{
				goto IL_00ea;
			}
			case 2:
			{
				goto IL_000d;
			}
			case 3:
			{
				goto IL_0082;
			}
			case 4:
			{
				goto IL_00b0;
			}
			case 5:
			{
				goto IL_0046;
			}
			case 6:
			{
				goto IL_0055;
			}
			case 7:
			{
				goto IL_00cd;
			}
		}
	}
	{
		goto IL_00ea;
	}

IL_0046:
	{
		uint32_t L_2 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)-1734279571)))^((int32_t)684751299)));
		goto IL_0012;
	}

IL_0055:
	{
		uint32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, 1));
		uint32_t L_4 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-91715055)))^((int32_t)1941915772)));
		goto IL_0012;
	}

IL_0068:
	{
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* L_5 = (&__this->___U202CU206AU206CU202EU202DU200CU202CU200EU200BU200BU200EU202DU200DU200CU202AU206CU200FU200CU200BU206FU200BU206DU200CU206CU200CU200DU200CU206CU202DU200CU202BU202BU200CU206EU200DU202EU206CU206DU202AU206DU202E_4);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U206CU206BU202EU202CU200DU200EU202AU200DU202DU200CU206EU200FU206AU202AU206DU206CU206DU206EU206DU206CU200FU202EU202EU202BU206EU206EU202DU206AU202BU202CU202BU206DU202DU206EU200BU200EU200EU206AU202BU206EU202E_m22F86B8CD52D230ECD7AD75DD3C8D221D6C85C0F(L_5, NULL);
		uint32_t L_6 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)939474863)))^((int32_t)-810155449)));
		goto IL_0012;
	}

IL_0082:
	{
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* L_7 = __this->___U202CU200BU200BU202BU206EU206EU200FU200EU206DU206AU206CU206DU206BU200FU206CU206AU200CU206DU200BU200FU200CU206DU206AU200FU200EU202BU206EU202DU200EU202DU206EU206EU206FU202AU206AU202DU200EU202DU200CU206CU202E_0;
		uint32_t L_8 = V_0;
		NullCheck(L_7);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U206CU206BU202EU202CU200DU200EU202AU200DU202DU200CU206EU200FU206AU202AU206DU206CU206DU206EU206DU206CU200FU202EU202EU202BU206EU206EU202DU206AU202BU202CU202BU206DU202DU206EU200BU200EU200EU206AU202BU206EU202E_m22F86B8CD52D230ECD7AD75DD3C8D221D6C85C0F(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_8)))), NULL);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* L_9 = __this->___U206FU202EU206BU200FU202BU200DU200FU206FU200FU200BU202AU200CU206AU206CU202CU200CU202DU200EU200EU200EU206FU200EU206CU202DU202AU202DU206BU206EU202DU206AU202EU206DU206FU200CU202AU202DU206DU206BU206BU202AU202E_1;
		uint32_t L_10 = V_0;
		NullCheck(L_9);
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U206CU206BU202EU202CU200DU200EU202AU200DU202DU200CU206EU200FU206AU202AU206DU206CU206DU206EU206DU206CU200FU202EU202EU202BU206EU206EU202DU206AU202BU202CU202BU206DU202DU206EU200BU200EU200EU206AU202BU206EU202E_m22F86B8CD52D230ECD7AD75DD3C8D221D6C85C0F(((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_10)))), NULL);
		G_B2_0 = ((int32_t)-1436942104);
		goto IL_0012;
	}

IL_00b0:
	{
		uint32_t L_11 = V_0;
		uint32_t L_12 = __this->___U200FU200EU200BU200FU200BU206BU202EU202DU200CU206CU200EU206DU206EU200FU202DU206EU202CU206CU200FU200CU200FU206DU202BU200BU202DU206FU200BU206EU200EU202CU206DU206BU200DU206FU206EU200DU202DU206FU206BU202EU202E_5;
		if ((!(((uint32_t)L_11) < ((uint32_t)L_12))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_13 = ((int32_t)-416119067);
		G_B11_0 = L_13;
		G_B11_1 = L_13;
		goto IL_00c7;
	}

IL_00c1:
	{
		int32_t L_14 = ((int32_t)-826147943);
		G_B11_0 = L_14;
		G_B11_1 = L_14;
	}

IL_00c7:
	{
		G_B2_0 = G_B11_1;
		goto IL_0012;
	}

IL_00cd:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* L_15 = (&__this->___U200FU202AU202EU206AU202BU200CU206AU202BU202BU206BU200BU202CU200EU200CU202EU206BU200BU206CU202BU202DU202CU202CU202BU206BU200EU206CU206DU206AU202AU202AU206DU202AU202DU202CU202DU206CU206FU200BU206CU202BU202E_3);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B(L_15, NULL);
		uint32_t L_16 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)1714028381)))^((int32_t)1218427845)));
		goto IL_0012;
	}

IL_00ea:
	{
		return;
	}
}
// System.UInt32 <Module>/?????????????????????????????????????????/????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_U206AU200BU200CU200BU200DU200BU202AU202AU206EU206FU206CU202EU200DU202DU200CU206DU202CU200BU202DU200FU202DU202DU206FU206DU206AU202BU200BU200DU200DU200CU202BU206FU206CU206DU200BU202CU200EU202AU202BU206AU202E_m5A78A5A6288EEE6417E0FB8882E92CB7A16BCC52 (U200DU202BU206DU206AU206DU202BU206AU206BU200CU200FU202AU200BU206FU206AU206DU206FU202BU202DU206FU206BU202AU202AU202AU206FU202BU206BU202CU206AU206FU202BU200BU206EU202AU206DU206AU202BU200BU202BU200DU202E_t640C689F7D8305B3ABE67A1F6F7EED8D16D007E3* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, uint32_t ___1_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* L_0 = (&__this->___U206BU202DU202BU202EU200BU200BU202CU202EU206EU206CU206AU200EU206EU206EU202BU202AU200FU206DU202BU206AU200EU206EU202BU200BU200FU206BU200FU202BU200EU206EU202EU206AU202BU200EU202EU202AU200DU202CU202BU206BU202E_2);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_1 = ___0_p;
		uint32_t L_2;
		L_2 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_00d3;
		}
	}

IL_0011:
	{
		G_B2_0 = ((int32_t)2057318647);
	}

IL_0016:
	{
		int32_t L_3 = ((int32_t)(G_B2_0^((int32_t)1873751115)));
		V_1 = L_3;
		switch (((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)8)))
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00d3;
			}
			case 2:
			{
				goto IL_004a;
			}
			case 3:
			{
				goto IL_008d;
			}
			case 4:
			{
				goto IL_009f;
			}
			case 5:
			{
				goto IL_00c5;
			}
			case 6:
			{
				goto IL_00f7;
			}
			case 7:
			{
				goto IL_0011;
			}
		}
	}
	{
		goto IL_00f7;
	}

IL_004a:
	{
		uint32_t L_4 = V_0;
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* L_5 = __this->___U206FU202EU206BU200FU202BU200DU200FU206FU200FU200BU202AU200CU206AU206CU202CU200CU202DU200EU200EU200EU206FU200EU206CU202DU202AU202DU206BU206EU202DU206AU202EU206DU206FU200CU202AU202DU206DU206BU206BU202AU202E_1;
		uint32_t L_6 = ___1_p;
		NullCheck(L_5);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_7 = ___0_p;
		uint32_t L_8;
		L_8 = U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U202EU200EU206AU202EU200BU206CU206DU200BU206EU206EU206AU206FU206EU200FU202CU200CU206CU200CU200DU206BU200FU206EU200CU206DU200DU202BU202EU206AU206FU200CU202BU202DU200CU200DU202EU206DU200CU200EU206CU200CU202E_m11C6E23613302207ACC9C3EC7909CBD6CC4BBBB1(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_6)))), L_7, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_8));
		uint32_t L_9 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)1385813336)))^((int32_t)1305914808)));
		goto IL_0016;
	}

IL_006f:
	{
		uint32_t L_10 = V_0;
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_t3786D1BAE9095A178A8568F300B2BB6E398DA77C* L_11 = (&__this->___U202CU206AU206CU202EU202DU200CU202CU200EU200BU200BU200EU202DU200DU200CU202AU206CU200FU200CU200BU206FU200BU206DU200CU206CU200CU200DU200CU206CU202DU200CU202BU202BU200CU206EU200DU202EU206CU206DU202AU206DU202E_4);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_12 = ___0_p;
		uint32_t L_13;
		L_13 = U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U202EU200EU206AU202EU200BU206CU206DU200BU206EU206EU206AU206FU206EU200FU202CU200CU206CU200CU200DU206BU200FU206EU200CU206DU200DU202BU202EU206AU206FU200CU202BU202DU200CU200DU202EU206DU200CU200EU206CU200CU202E_m11C6E23613302207ACC9C3EC7909CBD6CC4BBBB1(L_11, L_12, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_13));
		uint32_t L_14 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-570794876)))^((int32_t)713344693)));
		goto IL_0016;
	}

IL_008d:
	{
		uint32_t L_15 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)-780939317)))^((int32_t)-1682858764)));
		goto IL_0016;
	}

IL_009f:
	{
		U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202EU5BU5D_t28BEE69F715A832E94CC248FA9D1BF005EF2CA23* L_16 = __this->___U202CU200BU200BU202BU206EU206EU200FU200EU206DU206AU206CU206DU206BU200FU206CU206AU200CU206DU200BU200FU200CU206DU206AU200FU200EU202BU206EU202DU200EU202DU206EU206EU206FU202AU206AU202DU200EU202DU200CU206CU202E_0;
		uint32_t L_17 = ___1_p;
		NullCheck(L_16);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_18 = ___0_p;
		uint32_t L_19;
		L_19 = U202CU202DU200BU200BU206AU202BU202AU202EU202CU202BU200FU206FU202AU202AU206FU200DU200DU206EU206CU200DU206DU206DU200FU200FU202EU200FU200DU206AU206FU200CU200BU200CU202BU202AU200FU206EU206CU206BU200DU206FU202E_U202EU200EU206AU202EU200BU206CU206DU200BU206EU206EU206AU206FU206EU200FU202CU200CU206CU200CU200DU206BU200FU206EU200CU206DU200DU202BU202EU206AU206FU200CU202BU202DU200CU200DU202EU206DU200CU200EU206CU200CU202E_m11C6E23613302207ACC9C3EC7909CBD6CC4BBBB1(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_17)))), L_18, NULL);
		return L_19;
	}
	// Dead block : IL_00b3: ldloc.1

IL_00c5:
	{
		uint32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, 8));
		G_B2_0 = ((int32_t)326990467);
		goto IL_0016;
	}

IL_00d3:
	{
		V_0 = 8;
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D* L_21 = (&__this->___U200FU202AU202EU206AU202BU200CU206AU202BU202BU206BU200BU202CU200EU200CU202EU206BU200BU206CU202BU202DU202CU202CU202BU206BU200EU206CU206DU206AU202AU202AU206DU202AU202DU202CU202DU206CU206FU200BU206CU202BU202E_3);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_22 = ___0_p;
		uint32_t L_23;
		L_23 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_24 = ((int32_t)1632777430);
		G_B13_0 = L_24;
		G_B13_1 = L_24;
		goto IL_00f1;
	}

IL_00eb:
	{
		int32_t L_25 = ((int32_t)2137744689);
		G_B13_0 = L_25;
		G_B13_1 = L_25;
	}

IL_00f1:
	{
		G_B2_0 = G_B13_1;
		goto IL_0016;
	}

IL_00f7:
	{
		uint32_t L_26 = V_0;
		return L_26;
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
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E__ctor_m386A1264CC83856AF1272CE2AEF5273B628B14AF (U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U206BU206FU200DU202DU200BU202DU206EU206AU202DU200FU202DU202DU206CU206CU206EU200CU202BU202EU200EU200FU200BU206EU206EU206BU200EU206BU206DU206FU206AU206CU200FU200DU206DU206EU206DU206EU206FU206DU206EU200CU202E_m555F6499BD86F24F604FC86E1EB7DB2AF193B3B8 (U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* __this, int32_t ___0_p, int32_t ___1_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	{
		U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF* L_0 = __this->___U200BU200EU206EU206BU206FU200BU200BU206BU206AU200DU200DU200EU206DU202EU206AU202CU202DU206EU202BU202BU206AU202CU200EU206AU206BU206FU202BU202DU206BU206EU200DU200FU200BU206BU202DU202CU206CU200DU206EU206DU202E_0;
		if (!L_0)
		{
			goto IL_00e2;
		}
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)-1594917047);
	}

IL_0010:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-12365804)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)13))))
		{
			case 0:
			{
				goto IL_0163;
			}
			case 1:
			{
				goto IL_009d;
			}
			case 2:
			{
				goto IL_00c2;
			}
			case 3:
			{
				goto IL_000b;
			}
			case 4:
			{
				goto IL_00e2;
			}
			case 5:
			{
				goto IL_018a;
			}
			case 6:
			{
				goto IL_0118;
			}
			case 7:
			{
				goto IL_0069;
			}
			case 8:
			{
				goto IL_0144;
			}
			case 9:
			{
				goto IL_00f3;
			}
			case 10:
			{
				goto IL_008b;
			}
			case 11:
			{
				goto IL_0130;
			}
			case 12:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_018a;
	}

IL_0059:
	{
		return;
	}
	// Dead block : IL_005a: ldloc.2

IL_0069:
	{
		int32_t L_2 = __this->___U206EU206DU206EU202AU202BU206CU202CU206CU206FU202BU206DU206DU202BU206FU202AU206FU200DU206BU200EU206AU202BU202EU200BU200BU202AU206DU206DU202CU202EU202AU202EU200DU206BU200BU206AU200FU206BU200EU206CU200FU202E_2;
		int32_t L_3 = __this->___U206BU202BU200CU202CU202AU200CU200DU206EU202CU206EU202DU202AU206EU200DU206AU200DU200BU200CU202AU202CU206FU206EU200EU206DU200CU206CU206FU206EU206BU206FU200CU202EU200FU202EU200DU202AU206BU206BU202AU200FU202E_1;
		V_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_2, L_3))&((int32_t)31)))));
		uint32_t L_4 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-1819444975)))^((int32_t)2100263660)));
		goto IL_0010;
	}

IL_008b:
	{
		uint32_t L_5 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)-771261276)))^((int32_t)-502941533)));
		goto IL_0010;
	}

IL_009d:
	{
		int32_t L_6 = __this->___U206BU202BU200CU202CU202AU200CU200DU206EU202CU206EU202DU202AU206EU200DU206AU200DU200BU200CU202AU202CU206FU206EU200EU206DU200CU206CU206FU206EU206BU206FU200CU202EU200FU202EU200DU202AU206BU206BU202AU200FU202E_1;
		int32_t L_7 = ___0_p;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_8 = ((int32_t)1751097646);
		G_B11_0 = L_8;
		G_B11_1 = L_8;
		goto IL_00b4;
	}

IL_00ae:
	{
		int32_t L_9 = ((int32_t)1141929788);
		G_B11_0 = L_9;
		G_B11_1 = L_9;
	}

IL_00b4:
	{
		uint32_t L_10 = V_2;
		G_B2_0 = ((int32_t)(G_B11_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-508840675)))));
		goto IL_0010;
	}

IL_00c2:
	{
		U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF* L_11 = __this->___U200BU200EU206EU206BU206FU200BU200BU206BU206AU200DU200DU200EU206DU202EU206AU202CU202DU206EU202BU202BU206AU202CU200EU206AU206BU206FU202BU202DU206BU206EU200DU200FU200BU206BU202DU202CU206CU200DU206EU206DU202E_0;
		uint32_t L_12 = V_1;
		NullCheck(L_11);
		U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U202CU206AU200BU200BU202BU202DU200BU200EU202EU200BU202EU202AU202DU206DU202DU200FU206FU200CU202CU206DU206BU202AU206CU206BU202CU206DU206BU200EU206CU206AU206CU202EU206CU206EU202EU206BU206CU200FU206BU206CU202E_mC4E85EFB2DAD22A1254744E98F2D892E735C13B7(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_12)))), NULL);
		uint32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, 1));
		G_B2_0 = ((int32_t)-1241463517);
		goto IL_0010;
	}

IL_00e2:
	{
		int32_t L_14 = ___0_p;
		__this->___U206BU202BU200CU202CU202AU200CU200DU206EU202CU206EU202DU202AU206EU200DU206AU200DU200BU200CU202AU202CU206FU206EU200EU206DU200CU206CU206FU206EU206BU206FU200CU202EU200FU202EU200DU202AU206BU206BU202AU200FU202E_1 = L_14;
		G_B2_0 = ((int32_t)-646832462);
		goto IL_0010;
	}

IL_00f3:
	{
		int32_t L_15 = __this->___U206EU206DU206EU202AU202BU206CU202CU206CU206FU202BU206DU206DU202BU206FU202AU206FU200DU206BU200EU206AU202BU202EU200BU200BU202AU206DU206DU202CU202EU202AU202EU200DU206BU200BU206AU200FU206BU200EU206CU200FU202E_2;
		int32_t L_16 = ___1_p;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_17 = ((int32_t)-648079075);
		G_B17_0 = L_17;
		G_B17_1 = L_17;
		goto IL_010a;
	}

IL_0104:
	{
		int32_t L_18 = ((int32_t)-1901915291);
		G_B17_0 = L_18;
		G_B17_1 = L_18;
	}

IL_010a:
	{
		uint32_t L_19 = V_2;
		G_B2_0 = ((int32_t)(G_B17_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)-254011959)))));
		goto IL_0010;
	}

IL_0118:
	{
		uint32_t L_20 = V_1;
		uint32_t L_21 = V_0;
		if ((!(((uint32_t)L_20) < ((uint32_t)L_21))))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_22 = ((int32_t)-1052668511);
		G_B21_0 = L_22;
		G_B21_1 = L_22;
		goto IL_012a;
	}

IL_0124:
	{
		int32_t L_23 = ((int32_t)-1622400068);
		G_B21_0 = L_23;
		G_B21_1 = L_23;
	}

IL_012a:
	{
		G_B2_0 = G_B21_1;
		goto IL_0010;
	}

IL_0130:
	{
		V_1 = 0;
		uint32_t L_24 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)-1170497245)))^((int32_t)57335723)));
		goto IL_0010;
	}

IL_0144:
	{
		uint32_t L_25 = V_0;
		U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF* L_26 = (U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF*)(U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF*)SZArrayNew(U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)L_25));
		__this->___U200BU200EU206EU206BU206FU200BU200BU206BU206AU200DU200DU200EU206DU202EU206AU202CU202DU206EU202BU202BU206AU202CU200EU206AU206BU206FU202BU202DU206BU206EU200DU200FU200BU206BU202DU202CU206CU200DU206EU206DU202E_0 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200BU200EU206EU206BU206FU200BU200BU206BU206AU200DU200DU200EU206DU202EU206AU202CU202DU206EU202BU202BU206AU202CU200EU206AU206BU206FU202BU202DU206BU206EU200DU200FU200BU206BU202DU202CU206CU200DU206EU206DU202E_0), (void*)L_26);
		uint32_t L_27 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)651290116)))^((int32_t)805353405)));
		goto IL_0010;
	}

IL_0163:
	{
		int32_t L_28 = ___0_p;
		__this->___U200DU200DU206AU206FU206AU202AU202AU200EU200FU202AU206AU200BU200CU200BU206EU200FU206EU206CU206BU200DU200FU200CU200CU206CU206CU206AU202EU202BU200DU206CU206BU200DU202AU202AU200FU200CU200BU200CU206BU202DU202E_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_28&((int32_t)31))))), 1));
		int32_t L_29 = ___1_p;
		__this->___U206EU206DU206EU202AU202BU206CU202CU206CU206FU202BU206DU206DU202BU206FU202AU206FU200DU206BU200EU206AU202BU202EU200BU200BU202AU206DU206DU202CU202EU202AU202EU200DU206BU200BU206AU200FU206BU200EU206CU200FU202E_2 = L_29;
		uint32_t L_30 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_30, ((int32_t)-1927489637)))^((int32_t)1059431089)));
		goto IL_0010;
	}

IL_018a:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U200CU202BU206EU206AU206AU202AU202DU206FU202BU202DU206FU200BU202DU206DU202EU200CU200BU202AU200CU202EU202CU206DU202BU202EU206CU206BU206EU202BU200CU202DU202AU206BU202CU200FU200CU200BU206FU206BU202CU206AU202E_m490AD3A9242D0324AD9924A35293157B94B73F63 (U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		int32_t L_0 = __this->___U206EU206DU206EU202AU202BU206CU202CU206CU206FU202BU206DU206DU202BU206FU202AU206FU200DU206BU200EU206AU202BU202EU200BU200BU202AU206DU206DU202CU202EU202AU202EU200DU206BU200BU206AU200FU206BU200EU206CU200FU202E_2;
		int32_t L_1 = __this->___U206BU202BU200CU202CU202AU200CU200DU206EU202CU206EU202DU202AU206EU200DU206AU200DU200BU200CU202AU202CU206FU206EU200EU206DU200CU206CU206FU206EU206BU206FU200CU202EU200FU202EU200DU202AU206BU206BU202AU200FU202E_1;
		V_0 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_add(L_0, L_1))&((int32_t)31)))));
		V_1 = 0;
	}

IL_0015:
	{
		G_B2_0 = ((int32_t)1076929937);
	}

IL_001a:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1477335697)));
		V_2 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0015;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0080;
			}
			case 3:
			{
				goto IL_0063;
			}
			case 4:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_0080;
	}

IL_003f:
	{
		uint32_t L_3 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)1108411827)))^((int32_t)521749115)));
		goto IL_001a;
	}

IL_004e:
	{
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_4) >= ((uint32_t)L_5))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_6 = ((int32_t)1611048632);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
		goto IL_0060;
	}

IL_005a:
	{
		int32_t L_7 = ((int32_t)483817067);
		G_B8_0 = L_7;
		G_B8_1 = L_7;
	}

IL_0060:
	{
		G_B2_0 = G_B8_1;
		goto IL_001a;
	}

IL_0063:
	{
		U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF* L_8 = __this->___U200BU200EU206EU206BU206FU200BU200BU206BU206AU200DU200DU200EU206DU202EU206AU202CU202DU206EU202BU202BU206AU202CU200EU206AU206BU206FU202BU202DU206BU206EU200DU200FU200BU206BU202DU202CU206CU200DU206EU206DU202E_0;
		uint32_t L_9 = V_1;
		NullCheck(L_8);
		U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U200FU206EU206EU202EU202AU206AU200CU202CU206DU200DU200BU202AU206AU206BU202EU206AU206CU200EU202DU206FU206AU206FU200FU200FU200EU200EU202CU206FU202EU206AU200DU202BU206DU200CU206AU206AU200EU206AU202AU200EU202E_m0EF954062067A8C2C6D649E82D9EA20104B00C91(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_9)))), NULL);
		uint32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, 1));
		G_B2_0 = ((int32_t)18747259);
		goto IL_001a;
	}

IL_0080:
	{
		return;
	}
}
// System.UInt32 <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U202BU202AU202EU200CU200EU200DU202EU206EU200FU200FU202BU200EU206EU202EU200FU206FU206CU200EU206DU206BU206BU200FU202DU206EU200BU200BU200CU202AU206FU202AU206EU202BU202CU202AU206CU200EU200CU202AU206BU206CU202E_mAFD2FDB8D024E828CC336D67ECC445225CE1F39E (U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* __this, uint32_t ___0_p, uint8_t ___1_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_p;
		uint32_t L_1 = __this->___U200DU200DU206AU206FU206AU202AU202AU200EU200FU202AU206AU200BU200CU200BU206EU200FU206EU206CU206BU200DU200FU200CU200CU206CU206CU206AU202EU202BU200DU206CU206BU200DU202AU202AU200FU200CU200BU200CU206BU202DU202E_3;
		int32_t L_2 = __this->___U206EU206DU206EU202AU202BU206CU202CU206CU206FU202BU206DU206DU202BU206FU202AU206FU200DU206BU200EU206AU202BU202EU200BU200BU202AU206DU206DU202CU202EU202AU202EU200DU206BU200BU206AU200FU206BU200EU206CU200FU202E_2;
		uint8_t L_3 = ___1_p;
		int32_t L_4 = __this->___U206EU206DU206EU202AU202BU206CU202CU206CU206FU202BU206DU206DU202BU206FU202AU206FU200DU206BU200EU206AU202BU202EU200BU200BU202AU206DU206DU202CU202EU202AU202EU200DU206BU200BU206AU200FU206BU200EU206CU200FU202E_2;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))<<((int32_t)(L_2&((int32_t)31))))), ((int32_t)((int32_t)L_3>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_4))&((int32_t)31)))))));
	}
}
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U206CU202EU206DU202CU206BU200CU200FU200CU200EU206CU202EU202EU202CU206FU202EU200DU200FU206EU206FU200CU202CU206FU202EU202EU200DU200CU200BU206DU200FU202CU206FU202EU202AU206BU200EU200FU200BU200EU206FU206CU202E_m7E06218FA4367C2AEA20432E6B307F1C8C57E793 (U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, uint32_t ___1_p, uint8_t ___2_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF* L_0 = __this->___U200BU200EU206EU206BU206FU200BU200BU206BU206AU200DU200DU200EU206DU202EU206AU202CU202DU206EU202BU202BU206AU202CU200EU206AU206BU206FU202BU202DU206BU206EU200DU200FU200BU206BU202DU202CU206CU200DU206EU206DU202E_0;
		uint32_t L_1 = ___1_p;
		uint8_t L_2 = ___2_p;
		uint32_t L_3;
		L_3 = U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U202BU202AU202EU200CU200EU200DU202EU206EU200FU200FU202BU200EU206EU202EU200FU206FU206CU200EU206DU206BU206BU200FU202DU206EU200BU200BU200CU202AU206FU202AU206EU202BU202CU202AU206CU200EU200CU202AU206BU206CU202E_mAFD2FDB8D024E828CC336D67ECC445225CE1F39E(__this, L_1, L_2, NULL);
		NullCheck(L_0);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_4 = ___0_p;
		uint8_t L_5;
		L_5 = U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U202AU206EU200EU202EU202EU202AU206EU206DU202AU206AU200DU200BU202BU200FU202EU202AU206AU202AU206FU200FU200CU202EU200DU200CU200EU206FU202BU202CU206EU202DU206BU202BU202DU202EU200CU200CU202DU206BU200BU202EU202E_m34B68E7A54742F21209AD1ED547E3A5F67D6CE81(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_3)))), L_4, NULL);
		return L_5;
	}
}
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.UInt32,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U200CU202BU200BU206DU200EU200CU206CU200EU202CU200DU200FU206AU206EU206EU200DU206FU202BU206DU202BU200DU202AU202DU200BU202DU202EU206FU202EU206FU200EU200FU206DU206EU200BU202BU202DU200CU202CU200EU206CU206BU202E_m73D85D55CC80775E3234EFCB6FE480C92984696F (U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_tB35D48975DC576D5C9A57568979D18A801FAC8A9* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, uint32_t ___1_p, uint8_t ___2_p, uint8_t ___3_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202EU5BU5D_tDA523367D0334ADA753F7D05B686B47D99E677BF* L_0 = __this->___U200BU200EU206EU206BU206FU200BU200BU206BU206AU200DU200DU200EU206DU202EU206AU202CU202DU206EU202BU202BU206AU202CU200EU206AU206BU206FU202BU202DU206BU206EU200DU200FU200BU206BU202DU202CU206CU200DU206EU206DU202E_0;
		uint32_t L_1 = ___1_p;
		uint8_t L_2 = ___2_p;
		uint32_t L_3;
		L_3 = U206AU206CU202CU206FU202BU202CU202CU202CU202BU206EU206CU200CU206BU202CU202DU206DU200FU202DU202CU206CU202CU200FU206AU200CU202BU202BU202DU202EU200BU206AU206BU206CU202CU200BU202AU206FU202AU206AU206DU206DU202E_U202BU202AU202EU200CU200EU200DU202EU206EU200FU200FU202BU200EU206EU202EU200FU206FU206CU200EU206DU206BU206BU200FU202DU206EU200BU200BU200CU202AU206FU202AU206EU202BU202CU202AU206CU200EU200CU202AU206BU206CU202E_mAFD2FDB8D024E828CC336D67ECC445225CE1F39E(__this, L_1, L_2, NULL);
		NullCheck(L_0);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_4 = ___0_p;
		uint8_t L_5 = ___3_p;
		uint8_t L_6;
		L_6 = U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U206CU206FU202CU200FU202BU202AU202EU200DU200DU202EU206AU200EU202AU200BU200EU202CU206BU206CU206DU206DU206EU206BU202BU200EU206CU202CU202AU202CU200CU206CU202BU206CU200FU206AU202AU200FU206EU200BU206BU206BU202E_m39D67D4C3E4B148FD4EC7669E460BC5E0436023A(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_3)))), L_4, L_5, NULL);
		return L_6;
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
// Conversion methods for marshalling of: <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????
IL2CPP_EXTERN_C void U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C_marshal_pinvoke(const U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C& unmarshaled, U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledU200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_Length = (unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0)->max_length;
		marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 = il2cpp_codegen_marshal_allocate_array<U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D>(_unmarshaledU200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledU200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_Length); i++)
		{
			(marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0)[i] = (unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 = NULL;
	}
}
IL2CPP_EXTERN_C void U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C_marshal_pinvoke_back(const U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C_marshaled_pinvoke& marshaled, U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 != NULL)
	{
		if (unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 == NULL)
		{
			unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 = reinterpret_cast<U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*>((U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0), (void*)reinterpret_cast<U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*>((U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????
IL2CPP_EXTERN_C void U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C_marshal_pinvoke_cleanup(U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C_marshaled_pinvoke& marshaled)
{
	if (marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0);
		marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 = NULL;
	}
}
// Conversion methods for marshalling of: <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????
IL2CPP_EXTERN_C void U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C_marshal_com(const U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C& unmarshaled, U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C_marshaled_com& marshaled)
{
	if (unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledU200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_Length = (unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0)->max_length;
		marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 = il2cpp_codegen_marshal_allocate_array<U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_tD0A88B005A61CBBAD0B87663FB5A5B7CF53DA90D>(_unmarshaledU200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledU200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_Length); i++)
		{
			(marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0)[i] = (unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 = NULL;
	}
}
IL2CPP_EXTERN_C void U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C_marshal_com_back(const U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C_marshaled_com& marshaled, U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 != NULL)
	{
		if (unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 == NULL)
		{
			unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 = reinterpret_cast<U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*>((U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0), (void*)reinterpret_cast<U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*>((U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????
IL2CPP_EXTERN_C void U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C_marshal_com_cleanup(U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C_marshaled_com& marshaled)
{
	if (marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0);
		marshaled.___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 = NULL;
	}
}
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U202CU206AU200BU200BU202BU202DU200BU200EU202EU200BU202EU202AU202DU206DU202DU200FU206FU200CU202CU206DU206BU202AU206CU206BU202CU206DU206BU200EU206CU206AU206CU202EU206CU206EU202EU206BU206CU200FU206BU206CU202E_mC4E85EFB2DAD22A1254744E98F2D892E735C13B7 (U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_0 = (U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483*)SZArrayNew(U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483_il2cpp_TypeInfo_var, (uint32_t)((int32_t)768));
		__this->___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U202CU206AU200BU200BU202BU202DU200BU200EU202EU200BU202EU202AU202DU206DU202DU200FU206FU200CU202CU206DU206BU202AU206CU206BU202CU206DU206BU200EU206CU206AU206CU202EU206CU206EU202EU206BU206CU200FU206BU206CU202E_mC4E85EFB2DAD22A1254744E98F2D892E735C13B7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C*>(__this + _offset);
	U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U202CU206AU200BU200BU202BU202DU200BU200EU202EU200BU202EU202AU202DU206DU202DU200FU206FU200CU202CU206DU206BU202AU206CU206BU202CU206DU206BU200EU206CU206AU206CU202EU206CU206EU202EU206BU206CU200FU206BU206CU202E_mC4E85EFB2DAD22A1254744E98F2D892E735C13B7(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U200FU206EU206EU202EU202AU206AU200CU202CU206DU200DU200BU202AU206AU206BU202EU206AU206CU200EU202DU206FU206AU206FU200FU200FU200EU200EU202CU206FU202EU206AU200DU202BU206DU200CU206AU206AU200EU206AU202AU200EU202E_m0EF954062067A8C2C6D649E82D9EA20104B00C91 (U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		V_0 = 0;
		goto IL_0046;
	}

IL_0004:
	{
		G_B2_0 = ((int32_t)-2082174530);
	}

IL_0009:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-1923853387)));
		V_1 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_0004;
			}
			case 3:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_005f;
	}

IL_002a:
	{
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_1 = __this->___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU206BU206BU200BU200EU206AU206EU206EU200CU200DU200BU200EU206FU200DU200CU202EU206FU202EU200CU206DU200CU206FU202AU200DU206DU202AU200CU202AU202BU206CU202CU200CU206BU206AU206BU202EU206CU202EU206AU202E_m55F0CB249631F6F2B0359923DAAB0871FA541F3B(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), NULL);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		G_B2_0 = ((int32_t)-1423090583);
		goto IL_0009;
	}

IL_0046:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)768))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_5 = ((int32_t)-2082174530);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_005c;
	}

IL_0056:
	{
		int32_t L_6 = ((int32_t)-1642580044);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_005c:
	{
		G_B2_0 = G_B8_1;
		goto IL_0009;
	}

IL_005f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U200FU206EU206EU202EU202AU206AU200CU202CU206DU200DU200BU202AU206AU206BU202EU206AU206CU200EU202DU206FU206AU206FU200FU200FU200EU200EU202CU206FU202EU206AU200DU202BU206DU200CU206AU206AU200EU206AU202AU200EU202E_m0EF954062067A8C2C6D649E82D9EA20104B00C91_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C*>(__this + _offset);
	U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U200FU206EU206EU202EU202AU206AU200CU202CU206DU200DU200BU202AU206AU206BU202EU206AU206CU200EU202DU206FU206AU206FU200FU200FU200EU200EU202CU206FU202EU206AU200DU202BU206DU200CU206AU206AU200EU206AU202AU200EU202E_m0EF954062067A8C2C6D649E82D9EA20104B00C91(_thisAdjusted, method);
}
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U202AU206EU200EU202EU202EU202AU206EU206DU202AU206AU200DU200BU202BU200FU202EU202AU206AU202AU206FU200FU200CU202EU200DU200CU200EU206FU202BU202CU206EU202DU206BU202BU202DU202EU200CU200CU202DU206BU200BU202EU202E_m34B68E7A54742F21209AD1ED547E3A5F67D6CE81 (U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)-1659254614);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-392137855)));
		V_1 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0024;
			}
			case 2:
			{
				goto IL_0002;
			}
		}
	}
	{
		goto IL_0055;
	}

IL_0024:
	{
		uint32_t L_1 = V_0;
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_2 = __this->___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0;
		uint32_t L_3 = V_0;
		NullCheck(L_2);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_4 = ___0_p;
		uint32_t L_5;
		L_5 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_3)))), L_4, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_1<<1))|(int32_t)L_5));
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) >= ((uint32_t)((int32_t)256)))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_7 = ((int32_t)-1028258891);
		G_B7_0 = L_7;
		G_B7_1 = L_7;
		goto IL_0052;
	}

IL_004c:
	{
		int32_t L_8 = ((int32_t)-1659254614);
		G_B7_0 = L_8;
		G_B7_1 = L_8;
	}

IL_0052:
	{
		G_B2_0 = G_B7_1;
		goto IL_0007;
	}

IL_0055:
	{
		uint32_t L_9 = V_0;
		return (uint8_t)((int32_t)(uint8_t)L_9);
	}
}
IL2CPP_EXTERN_C  uint8_t U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U202AU206EU200EU202EU202EU202AU206EU206DU202AU206AU200DU200BU202BU200FU202EU202AU206AU202AU206FU200FU200CU202EU200DU200CU200EU206FU202BU202CU206EU202DU206BU202BU202DU202EU200CU200CU202DU206BU200BU202EU202E_m34B68E7A54742F21209AD1ED547E3A5F67D6CE81_AdjustorThunk (RuntimeObject* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, const RuntimeMethod* method)
{
	U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U202AU206EU200EU202EU202EU202AU206EU206DU202AU206AU200DU200BU202BU200FU202EU202AU206AU202AU206FU200FU200CU202EU200DU200CU200EU206FU202BU202CU206EU202DU206BU202BU202DU202EU200CU200CU202DU206BU200BU202EU202E_m34B68E7A54742F21209AD1ED547E3A5F67D6CE81(_thisAdjusted, ___0_p, method);
	return _returnValue;
}
// System.Byte <Module>/?????????????????????????????????????????/?????????????????????????????????????????/?????????????????????????????????????????::?????????????????????????????????????????(<Module>/?????????????????????????????????????????,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U206CU206FU202CU200FU202BU202AU202EU200DU200DU202EU206AU200EU202AU200BU200EU202CU206BU206CU206DU206DU206EU206BU202BU200EU206CU202CU202AU202CU200CU206CU202BU206CU200FU206AU202AU200FU206EU200BU206BU206BU202E_m39D67D4C3E4B148FD4EC7669E460BC5E0436023A (U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, uint8_t ___1_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	{
		V_0 = 1;
	}

IL_0002:
	{
		G_B2_0 = ((int32_t)-1856682016);
	}

IL_0007:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-992086491)));
		V_3 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)((int32_t)9))))
		{
			case 0:
			{
				goto IL_0002;
			}
			case 1:
			{
				goto IL_00b3;
			}
			case 2:
			{
				goto IL_006c;
			}
			case 3:
			{
				goto IL_0040;
			}
			case 4:
			{
				goto IL_00a1;
			}
			case 5:
			{
				goto IL_004f;
			}
			case 6:
			{
				goto IL_0085;
			}
			case 7:
			{
				goto IL_00d5;
			}
			case 8:
			{
				goto IL_010b;
			}
		}
	}
	{
		goto IL_010b;
	}

IL_0040:
	{
		uint32_t L_1 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)384111777)))^((int32_t)-1604405026)));
		goto IL_0007;
	}

IL_004f:
	{
		uint32_t L_2 = V_1;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_4 = ((int32_t)-1375648632);
		G_B8_0 = L_4;
		G_B8_1 = L_4;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_5 = ((int32_t)-923663476);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
	}

IL_0061:
	{
		uint32_t L_6 = V_3;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)1287668975)))));
		goto IL_0007;
	}

IL_006c:
	{
		uint32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) >= ((uint32_t)((int32_t)256)))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_8 = ((int32_t)-705141966);
		G_B12_0 = L_8;
		G_B12_1 = L_8;
		goto IL_0082;
	}

IL_007c:
	{
		int32_t L_9 = ((int32_t)-1479341233);
		G_B12_0 = L_9;
		G_B12_1 = L_9;
	}

IL_0082:
	{
		G_B2_0 = G_B12_1;
		goto IL_0007;
	}

IL_0085:
	{
		uint32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) < ((uint32_t)((int32_t)256)))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_11 = ((int32_t)-1856682016);
		G_B16_0 = L_11;
		G_B16_1 = L_11;
		goto IL_009b;
	}

IL_0095:
	{
		int32_t L_12 = ((int32_t)-832338708);
		G_B16_0 = L_12;
		G_B16_1 = L_12;
	}

IL_009b:
	{
		G_B2_0 = G_B16_1;
		goto IL_0007;
	}

IL_00a1:
	{
		uint32_t L_13 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)1696888486)))^((int32_t)-1255095802)));
		goto IL_0007;
	}

IL_00b3:
	{
		uint32_t L_14 = V_0;
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_15 = __this->___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0;
		uint32_t L_16 = V_0;
		NullCheck(L_15);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_17 = ___0_p;
		uint32_t L_18;
		L_18 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_16)))), L_17, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_14<<1))|(int32_t)L_18));
		G_B2_0 = ((int32_t)-945273104);
		goto IL_0007;
	}

IL_00d5:
	{
		uint8_t L_19 = ___1_p;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_19>>7))&1));
		uint8_t L_20 = ___1_p;
		___1_p = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_20<<1)));
		U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202EU5BU5D_t73F759A3E27525AE552E3092E68CCA8A1D38F483* L_21 = __this->___U200EU206EU202EU200EU200CU202BU200DU206EU206EU202AU200DU202CU202AU202EU206AU202EU206FU206EU206BU200EU206EU202CU206EU202EU200DU202BU202AU200DU206EU202EU202EU206BU202CU202AU202CU202AU206AU200DU206BU202EU202E_0;
		uint32_t L_22 = V_1;
		uint32_t L_23 = V_0;
		NullCheck(L_21);
		U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* L_24 = ___0_p;
		uint32_t L_25;
		L_25 = U200EU200FU206BU206BU200BU206FU200BU200BU202BU202AU202EU200EU202BU202DU202CU202CU202DU200FU202CU206DU206BU202EU202BU200EU200BU202CU200EU200EU202CU206BU202BU206FU200DU202BU200EU202DU202CU202AU206AU202E_U200FU202AU200CU202BU202DU200EU200BU202EU200EU200BU202AU206AU200FU202DU206AU200EU200EU206FU206EU202BU202DU206FU206AU200DU206BU206EU200EU206AU206AU202BU200CU200FU202AU206EU206EU202BU200DU202BU202CU202BU202E_m9E20BF5F526037F4893BEEACC0496056484D092A(((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((uintptr_t)((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_add(1, (int32_t)L_22))<<8)), (int32_t)L_23)))))), L_24, NULL);
		V_2 = L_25;
		uint32_t L_26 = V_0;
		uint32_t L_27 = V_2;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_26<<1))|(int32_t)L_27));
		G_B2_0 = ((int32_t)-724317300);
		goto IL_0007;
	}

IL_010b:
	{
		uint32_t L_28 = V_0;
		return (uint8_t)((int32_t)(uint8_t)L_28);
	}
}
IL2CPP_EXTERN_C  uint8_t U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U206CU206FU202CU200FU202BU202AU202EU200DU200DU202EU206AU200EU202AU200BU200EU202CU206BU206CU206DU206DU206EU206BU202BU200EU206CU202CU202AU202CU200CU206CU202BU206CU200FU206AU202AU200FU206EU200BU206BU206BU202E_m39D67D4C3E4B148FD4EC7669E460BC5E0436023A_AdjustorThunk (RuntimeObject* __this, U206CU206DU202EU200FU206AU202DU200CU206BU206CU206AU206BU200EU200FU200CU206CU202CU202AU206BU202EU202CU202AU206DU202EU206BU200CU202EU202BU200CU202CU206FU200EU202BU206EU202CU202EU202DU200EU206FU202CU206FU202E_tD0A264798547B6E037C76B1ACDE0BB6AF222E22F* ___0_p, uint8_t ___1_p, const RuntimeMethod* method)
{
	U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_t5A717FBC9D27BE08AA2E417EB15BBDA4D1EEA27C*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = U200BU202EU202DU206AU206FU202BU206BU202DU200DU206CU206CU206FU206CU200DU200FU200CU202CU200EU206CU206BU202CU200FU206CU200CU206BU206DU206EU200EU200BU206AU200DU206EU200DU206CU206DU202DU200BU206EU200EU202BU202E_U206CU206FU202CU200FU202BU202AU202EU200DU200DU202EU206AU200EU202AU200BU200EU202CU206BU206CU206DU206DU206EU206BU202BU200EU206CU202CU202AU202CU200CU206CU202BU206CU200FU206AU202AU200FU206EU200BU206BU206BU202E_m39D67D4C3E4B148FD4EC7669E460BC5E0436023A(_thisAdjusted, ___0_p, ___1_p, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>/?????????????????????????????????????????::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E__ctor_mCF93EB6ED04A21FE30CB7F6136A508A720A16F36 (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U200CU202BU202DU200CU206EU206AU202DU200FU206BU200FU202AU200CU200BU206AU202DU206FU200FU202BU200EU206DU200FU206AU202AU206CU206FU202CU206AU202EU206FU202AU206FU202DU202EU202DU202EU202EU206EU206FU200EU200FU202E_m4290872A722CF772BB46CA85DCA2D62DA9F0E57B (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, uint32_t ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		uint32_t L_0 = __this->___U202BU206FU200DU200EU202DU202AU200DU206DU206AU206CU200DU202AU206FU202CU202DU202EU200EU200DU202EU202CU202DU206CU200CU200FU200EU200DU202CU206BU200BU200DU200FU200CU202DU202BU202AU206AU206EU206CU206BU200CU202E_4;
		uint32_t L_1 = ___0_p;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_004f;
		}
	}

IL_0009:
	{
		G_B2_0 = ((int32_t)1629560878);
	}

IL_000e:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1666493175)));
		V_0 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_0073;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_0009;
			}
			case 4:
			{
				goto IL_0033;
			}
		}
	}
	{
		goto IL_0073;
	}

IL_0033:
	{
		uint32_t L_3 = ___0_p;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((uintptr_t)L_3));
		__this->___U202CU200BU200FU206FU206EU206CU202EU206AU200EU202BU206CU202EU200BU200CU200DU206FU200CU200DU206BU206EU202AU200CU202DU202DU200EU206CU202EU200CU200CU206AU206CU202DU200CU206BU206DU206FU206AU202EU206FU206BU202E_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202CU200BU200FU206FU206EU206CU202EU206AU200EU202BU206CU202EU200BU200CU200DU206FU200CU200DU206BU206EU202AU200CU202DU202DU200EU206CU202EU200CU200CU206AU206CU202DU200CU206BU206DU206FU206AU202EU206FU206BU202E_0), (void*)L_4);
		uint32_t L_5 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)1399669613)))^((int32_t)1160568150)));
		goto IL_000e;
	}

IL_004f:
	{
		uint32_t L_6 = ___0_p;
		__this->___U202BU206FU200DU200EU202DU202AU200DU206DU206AU206CU200DU202AU206FU202CU202DU202EU200EU200DU202EU202CU202DU206CU200CU200FU200EU200DU202CU206BU200BU200DU200FU200CU202DU202BU202AU206AU206EU206CU206BU200CU202E_4 = L_6;
		G_B2_0 = ((int32_t)1725225483);
		goto IL_000e;
	}

IL_005d:
	{
		__this->___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1 = 0;
		uint32_t L_7 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)680851774)))^((int32_t)-884629797)));
		goto IL_000e;
	}

IL_0073:
	{
		__this->___U202AU200BU202CU202BU202AU200FU200EU206AU206FU200FU200FU200DU206CU202EU202CU200FU206FU200CU200DU206BU206EU200DU206CU200DU202AU202CU200FU206FU202AU200FU206FU206CU200EU206DU202DU202BU206CU200CU206BU200FU202E_3 = 0;
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U206FU200BU200BU206FU206BU206DU206BU200CU206DU202BU206BU206DU202DU206DU202BU200BU202AU200FU206CU200FU202AU206DU202AU206DU206AU200CU206BU200BU206AU200FU206BU206FU200FU206AU200EU202CU206BU206CU206EU206BU202E_m7670D7363657FC162B164F9BFC9D8EDE78955C0E (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_p, bool ___1_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U202EU206AU202CU206FU206EU200EU202CU202CU206DU200FU206EU206AU202EU206AU206EU206BU200CU202DU206BU200DU206AU200BU200DU200BU206EU200BU200EU206AU206CU206EU206EU202CU206EU200FU206CU200BU206BU202DU202DU206AU202E_m14AF9DF836CD19F16FBE1003C00F58B1C6A2F929(__this, NULL);
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)1551743056);
	}

IL_000b:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)1391709953)));
		V_0 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_0006;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0066;
			}
			case 3:
			{
				goto IL_0095;
			}
			case 4:
			{
				goto IL_007c;
			}
			case 5:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_0095;
	}

IL_0034:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_p;
		__this->___U202EU200CU202BU202DU200DU202BU202BU202CU202CU206AU206FU202AU200EU206BU206FU200EU202AU202BU200FU206BU200EU202BU200DU200EU200CU202EU202CU200CU200FU206CU206DU202CU202BU200DU200DU202CU206DU200CU202CU200EU202E_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202EU200CU202BU202DU200DU202BU202BU202CU202CU206AU206FU202AU200EU206BU206FU200EU202AU202BU200FU206BU200EU202BU200DU200EU200CU202EU202CU200CU200FU206CU206DU202CU202BU200DU200DU202CU206DU200CU202CU200EU202E_2), (void*)L_1);
		uint32_t L_2 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)-644828673)))^((int32_t)-2096117069)));
		goto IL_000b;
	}

IL_004a:
	{
		bool L_3 = ___1_p;
		if (L_3)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_4 = ((int32_t)1572703333);
		G_B8_0 = L_4;
		G_B8_1 = L_4;
		goto IL_005b;
	}

IL_0055:
	{
		int32_t L_5 = ((int32_t)687932846);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
	}

IL_005b:
	{
		uint32_t L_6 = V_0;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)684909338)))));
		goto IL_000b;
	}

IL_0066:
	{
		__this->___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1 = 0;
		uint32_t L_7 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-519045063)))^((int32_t)-1974773680)));
		goto IL_000b;
	}

IL_007c:
	{
		__this->___U202AU200BU202CU202BU202AU200FU200EU206AU206FU200FU200FU200DU206CU202EU202CU200FU206FU200CU200DU206BU206EU200DU206CU200DU202AU202CU200FU206FU202AU200FU206FU206CU200EU206DU202DU202BU206CU200CU206BU200FU202E_3 = 0;
		uint32_t L_8 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-804602917)))^((int32_t)788460351)));
		goto IL_000b;
	}

IL_0095:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U202EU206AU202CU206FU206EU200EU202CU202CU206DU200FU206EU206AU202EU206AU206EU206BU200CU202DU206BU200DU206AU200BU200DU200BU206EU200BU200EU206AU206CU206EU206EU202CU206EU200FU206CU200BU206BU202DU202DU206AU202E_m14AF9DF836CD19F16FBE1003C00F58B1C6A2F929 (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U206DU200BU200DU200EU206BU206EU206BU200FU202AU200BU206CU200EU200CU206AU200EU206DU202AU202DU200BU202DU202CU206EU206EU206BU200BU202EU200DU200CU206EU206FU206FU206CU200DU206DU200FU206BU206AU202CU202DU202EU202E_mD5D9C4EBCDEA16E89AF3BAA7F62EAC3C752DEE8A(__this, NULL);
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)490713154);
	}

IL_000b:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)297284087)));
		V_0 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0006;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0042;
			}
			case 3:
			{
				goto IL_0073;
			}
		}
	}
	{
		goto IL_0073;
	}

IL_002c:
	{
		__this->___U202EU200CU202BU202DU200DU202BU202BU202CU202CU206AU206FU202AU200EU206BU206FU200EU202AU202BU200FU206BU200EU202BU200DU200EU200CU202EU202CU200CU200FU206CU206DU202CU202BU200DU200DU202CU206DU200CU202CU200EU202E_2 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U202EU200CU202BU202DU200DU202BU202BU202CU202CU206AU206FU202AU200EU206BU206FU200EU202AU202BU200FU206BU200EU202BU200DU200EU200CU202EU202CU200CU200FU206CU206DU202CU202BU200DU200DU202CU206DU200CU202CU200EU202E_2), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		uint32_t L_1 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)1533227519)))^((int32_t)-929556726)));
		goto IL_000b;
	}

IL_0042:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___U202CU200BU200FU206FU206EU206CU202EU206AU200EU202BU206CU202EU200BU200CU200DU206FU200CU200DU206BU206EU202AU200CU202DU202DU200EU206CU202EU200CU200CU206AU206CU202DU200CU206BU206DU206FU206AU202EU206FU206BU202E_0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___U202CU200BU200FU206FU206EU206CU202EU206AU200EU202BU206CU202EU200BU200CU200DU206FU200CU200DU206BU206EU202AU200CU202DU202DU200EU206CU202EU200CU200CU206AU206CU202DU200CU206BU206DU206FU206AU202EU206FU206BU202E_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___U202CU200BU200FU206FU206EU206CU202EU206AU200EU202BU206CU202EU200BU200CU200DU206FU200CU200DU206BU206EU202AU200CU202DU202DU200EU206CU202EU200CU200CU206AU206CU202DU200CU206BU206DU206FU206AU202EU206FU206BU202E_0;
		NullCheck(L_5);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		uint32_t L_6 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-1591791460)))^((int32_t)359581692)));
		goto IL_000b;
	}

IL_0073:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U206DU200BU200DU200EU206BU206EU206BU200FU202AU200BU206CU200EU200CU206AU200EU206DU202AU202DU200BU202DU202CU206EU206EU206BU200BU202EU200DU200CU206EU206FU206FU206CU200DU206DU200FU206BU206AU202CU202DU202EU202E_mD5D9C4EBCDEA16E89AF3BAA7F62EAC3C752DEE8A (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	{
		uint32_t L_0 = __this->___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1;
		uint32_t L_1 = __this->___U202AU200BU202CU202BU202AU200FU200EU206AU206FU200FU200FU200DU206CU202EU202CU200FU206FU200CU200DU206BU206EU200DU206CU200DU202AU202CU200FU206FU202AU200FU206FU206CU200EU206DU202DU202BU206CU200CU206BU200FU202E_3;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}

IL_000e:
	{
		G_B2_0 = ((int32_t)-1831125412);
	}

IL_0013:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-2085647831)));
		V_1 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)7)))
		{
			case 0:
			{
				goto IL_00af;
			}
			case 1:
			{
				goto IL_0090;
			}
			case 2:
			{
				goto IL_000e;
			}
			case 3:
			{
				goto IL_00d1;
			}
			case 4:
			{
				goto IL_0043;
			}
			case 5:
			{
				goto IL_0080;
			}
			case 6:
			{
				goto IL_006a;
			}
		}
	}
	{
		goto IL_00d1;
	}

IL_0043:
	{
		uint32_t L_3 = __this->___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1;
		uint32_t L_4 = __this->___U202BU206FU200DU200EU202DU202AU200DU206DU206AU206CU200DU202AU206FU202CU202DU202EU200EU200DU202EU202CU202DU206CU200CU200FU200EU200DU202CU206BU200BU200DU200FU200CU202DU202BU202AU206AU206EU206CU206BU200CU202E_4;
		if ((!(((uint32_t)L_3) < ((uint32_t)L_4))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_5 = ((int32_t)-1850465414);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_005f;
	}

IL_0059:
	{
		int32_t L_6 = ((int32_t)-836872466);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_005f:
	{
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)307144022)))));
		goto IL_0013;
	}

IL_006a:
	{
		__this->___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1 = 0;
		uint32_t L_8 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)414595492)))^((int32_t)-107133918)));
		goto IL_0013;
	}

IL_0080:
	{
		return;
	}
	// Dead block : IL_0081: ldloc.1

IL_0090:
	{
		uint32_t L_9 = V_0;
		if (L_9)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_10 = ((int32_t)1654486218);
		G_B14_0 = L_10;
		G_B14_1 = L_10;
		goto IL_00a1;
	}

IL_009b:
	{
		int32_t L_11 = ((int32_t)1240911088);
		G_B14_0 = L_11;
		G_B14_1 = L_11;
	}

IL_00a1:
	{
		uint32_t L_12 = V_1;
		G_B2_0 = ((int32_t)(G_B14_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)113504372)))));
		goto IL_0013;
	}

IL_00af:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = __this->___U202EU200CU202BU202DU200DU202BU202BU202CU202CU206AU206FU202AU200EU206BU206FU200EU202AU202BU200FU206BU200EU202BU200DU200EU200CU202EU202CU200CU200FU206CU206DU202CU202BU200DU200DU202CU206DU200CU202CU200EU202E_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___U202CU200BU200FU206FU206EU206CU202EU206AU200EU202BU206CU202EU200BU200CU200DU206FU200CU200DU206BU206EU202AU200CU202DU202DU200EU206CU202EU200CU200CU206AU206CU202DU200CU206BU206DU206FU206AU202EU206FU206BU202E_0;
		uint32_t L_15 = __this->___U202AU200BU202CU202BU202AU200FU200EU206AU206FU200FU200FU200DU206CU202EU202CU200FU206FU200CU200DU206BU206EU200DU206CU200DU202AU202CU200FU206FU202AU200FU206FU206CU200EU206DU202DU202BU206CU200CU206BU200FU202E_3;
		uint32_t L_16 = V_0;
		NullCheck(L_13);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, L_15, L_16);
		G_B2_0 = ((int32_t)-1277783737);
		goto IL_0013;
	}

IL_00d1:
	{
		uint32_t L_17 = __this->___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1;
		__this->___U202AU200BU202CU202BU202AU200FU200EU206AU206FU200FU200FU200DU206CU202EU202CU200FU206FU200CU200DU206BU206EU200DU206CU200DU202AU202CU200FU206FU202AU200FU206FU206CU200EU206DU202DU202BU206CU200CU206BU200FU202E_3 = L_17;
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::????????????????????????????????????????(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U202CU200FU206DU206DU206BU202CU206BU200CU206CU206AU202BU200FU206EU206AU202CU200EU202AU200EU206EU206DU206BU206BU200BU202DU206DU206DU206BU206CU206FU206CU206AU206AU206EU202CU206AU200FU200DU206FU202DU202E_mF6F7BC0B8DB1DC9BA31FA2913616E378552DA5F1 (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, uint32_t ___0_p, uint32_t ___1_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	{
		uint32_t L_0 = __this->___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1;
		uint32_t L_1 = ___0_p;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), 1));
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)-1772164558);
	}

IL_0010:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-1095735435)));
		V_2 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_00cc;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_000b;
			}
			case 3:
			{
				goto IL_0159;
			}
			case 4:
			{
				goto IL_007c;
			}
			case 5:
			{
				goto IL_013e;
			}
			case 6:
			{
				goto IL_009c;
			}
			case 7:
			{
				goto IL_00fc;
			}
			case 8:
			{
				goto IL_0088;
			}
			case 9:
			{
				goto IL_00b4;
			}
			case 10:
			{
				goto IL_0168;
			}
			case 11:
			{
				goto IL_0121;
			}
		}
	}
	{
		goto IL_0168;
	}

IL_0055:
	{
		uint32_t L_3 = __this->___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1;
		uint32_t L_4 = __this->___U202BU206FU200DU200EU202DU202AU200DU206DU206AU206CU200DU202AU206FU202CU202DU202EU200EU200DU202EU202CU202DU206CU200CU200FU200EU200DU202CU206BU200BU200DU200FU200CU202DU202BU202AU206AU206EU206CU206BU200CU202E_4;
		if ((!(((uint32_t)L_3) >= ((uint32_t)L_4))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_5 = ((int32_t)-1942705526);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_0071;
	}

IL_006b:
	{
		int32_t L_6 = ((int32_t)-1006693664);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_0071:
	{
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-1921465699)))));
		goto IL_0010;
	}

IL_007c:
	{
		uint32_t L_8 = ___1_p;
		___1_p = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1));
		G_B2_0 = ((int32_t)-976955388);
		goto IL_0010;
	}

IL_0088:
	{
		V_0 = 0;
		uint32_t L_9 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)1879520150)))^((int32_t)-37527615)));
		goto IL_0010;
	}

IL_009c:
	{
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U206DU200BU200DU200EU206BU206EU206BU200FU202AU200BU206CU200EU200CU206AU200EU206DU202AU202DU200BU202DU202CU206EU206EU206BU200BU202EU200DU200CU206EU206FU206FU206CU200DU206DU200FU206BU206AU202CU202DU202EU202E_mD5D9C4EBCDEA16E89AF3BAA7F62EAC3C752DEE8A(__this, NULL);
		uint32_t L_10 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-681368330)))^((int32_t)338378669)));
		goto IL_0010;
	}

IL_00b4:
	{
		uint32_t L_11 = ___1_p;
		if ((!(((uint32_t)L_11) > ((uint32_t)0))))
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_12 = ((int32_t)-2130489438);
		G_B14_0 = L_12;
		G_B14_1 = L_12;
		goto IL_00c6;
	}

IL_00c0:
	{
		int32_t L_13 = ((int32_t)-1014543061);
		G_B14_0 = L_13;
		G_B14_1 = L_13;
	}

IL_00c6:
	{
		G_B2_0 = G_B14_1;
		goto IL_0010;
	}

IL_00cc:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___U202CU200BU200FU206FU206EU206CU202EU206AU200EU202BU206CU202EU200BU200CU200DU206FU200CU200DU206BU206EU202AU200CU202DU202DU200EU206CU202EU200CU200CU206AU206CU202DU200CU206BU206DU206FU206AU202EU206FU206BU202E_0;
		uint32_t L_15 = __this->___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1;
		uint32_t L_16 = L_15;
		V_1 = L_16;
		__this->___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, 1));
		uint32_t L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___U202CU200BU200FU206FU206EU206CU202EU206AU200EU202BU206CU202EU200BU200CU200DU206FU200CU200DU206BU206EU202AU200CU202DU202DU200EU206CU202EU200CU200CU206AU206CU202DU200CU206BU206DU206FU206AU202EU206FU206BU202E_0;
		uint32_t L_19 = V_0;
		uint32_t L_20 = L_19;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, 1));
		NullCheck(L_18);
		uintptr_t L_21 = ((uintptr_t)L_20);
		uint8_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_17)), (uint8_t)L_22);
		G_B2_0 = ((int32_t)-713766584);
		goto IL_0010;
	}

IL_00fc:
	{
		uint32_t L_23 = V_0;
		uint32_t L_24 = __this->___U202BU206FU200DU200EU202DU202AU200DU206DU206AU206CU200DU202AU206FU202CU202DU202EU200EU200DU202EU202CU202DU206CU200CU200FU200EU200DU202CU206BU200BU200DU200FU200CU202DU202BU202AU206AU206EU206CU206BU200CU202E_4;
		if ((!(((uint32_t)L_23) >= ((uint32_t)L_24))))
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_25 = ((int32_t)1742554368);
		G_B19_0 = L_25;
		G_B19_1 = L_25;
		goto IL_0113;
	}

IL_010d:
	{
		int32_t L_26 = ((int32_t)1407537978);
		G_B19_0 = L_26;
		G_B19_1 = L_26;
	}

IL_0113:
	{
		uint32_t L_27 = V_2;
		G_B2_0 = ((int32_t)(G_B19_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)2061068840)))));
		goto IL_0010;
	}

IL_0121:
	{
		uint32_t L_28 = V_0;
		uint32_t L_29 = __this->___U202BU206FU200DU200EU202DU202AU200DU206DU206AU206CU200DU202AU206FU202CU202DU202EU200EU200DU202EU202CU202DU206CU200CU200FU200EU200DU202CU206BU200BU200DU200FU200CU202DU202BU202AU206AU206EU206CU206BU200CU202E_4;
		if ((!(((uint32_t)L_28) < ((uint32_t)L_29))))
		{
			goto IL_0132;
		}
	}
	{
		int32_t L_30 = ((int32_t)-1289696215);
		G_B23_0 = L_30;
		G_B23_1 = L_30;
		goto IL_0138;
	}

IL_0132:
	{
		int32_t L_31 = ((int32_t)-1396275159);
		G_B23_0 = L_31;
		G_B23_1 = L_31;
	}

IL_0138:
	{
		G_B2_0 = G_B23_1;
		goto IL_0010;
	}

IL_013e:
	{
		uint32_t L_32 = V_0;
		uint32_t L_33 = __this->___U202BU206FU200DU200EU202DU202AU200DU206DU206AU206CU200DU202AU206FU202CU202DU202EU200EU200DU202EU202CU202DU206CU200CU200FU200EU200DU202CU206BU200BU200DU200FU200CU202DU202BU202AU206AU206EU206CU206BU200CU202E_4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33));
		uint32_t L_34 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_34, ((int32_t)-584848224)))^((int32_t)-1474721278)));
		goto IL_0010;
	}

IL_0159:
	{
		goto IL_00b4;
	}
	// Dead block : IL_015e: ldc.i4 -2130489438

IL_0168:
	{
		return;
	}
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U202AU200BU206FU206CU206FU202AU202BU206CU202AU200EU200DU200EU206FU206FU202DU200EU206AU206EU202BU200BU206CU202CU206FU200FU200EU206FU200CU202CU202CU206BU206DU206AU206DU200DU206AU202AU206DU206EU202CU200EU202E_m6033FD8C912CFCFF568DF71ABF869FC7F2AAF0D6 (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U202CU200BU200FU206FU206EU206CU202EU206AU200EU202BU206CU202EU200BU200CU200DU206FU200CU200DU206BU206EU202AU200CU202DU202DU200EU206CU202EU200CU200CU206AU206CU202DU200CU206BU206DU206FU206AU202EU206FU206BU202E_0;
		uint32_t L_1 = __this->___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1;
		uint32_t L_2 = L_1;
		V_0 = L_2;
		__this->___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, 1));
		uint32_t L_3 = V_0;
		uint8_t L_4 = ___0_p;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((uintptr_t)L_3)), (uint8_t)L_4);
	}

IL_001a:
	{
		G_B2_0 = ((int32_t)-976191124);
	}

IL_001f:
	{
		int32_t L_5 = ((int32_t)(G_B2_0^((int32_t)-1711141742)));
		V_1 = L_5;
		switch (((int32_t)((uint32_t)(int32_t)L_5%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_007c;
			}
			case 1:
			{
				goto IL_0067;
			}
			case 2:
			{
				goto IL_0040;
			}
			case 3:
			{
				goto IL_001a;
			}
		}
	}
	{
		goto IL_007c;
	}

IL_0040:
	{
		uint32_t L_6 = __this->___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1;
		uint32_t L_7 = __this->___U202BU206FU200DU200EU202DU202AU200DU206DU206AU206CU200DU202AU206FU202CU202DU202EU200EU200DU202EU202CU202DU206CU200CU200FU200EU200DU202CU206BU200BU200DU200FU200CU202DU202BU202AU206AU206EU206CU206BU200CU202E_4;
		if ((!(((uint32_t)L_6) < ((uint32_t)L_7))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_8 = ((int32_t)1029170176);
		G_B7_0 = L_8;
		G_B7_1 = L_8;
		goto IL_005c;
	}

IL_0056:
	{
		int32_t L_9 = ((int32_t)1924212217);
		G_B7_0 = L_9;
		G_B7_1 = L_9;
	}

IL_005c:
	{
		uint32_t L_10 = V_1;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)1603425751)))));
		goto IL_001f;
	}

IL_0067:
	{
		U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U206DU200BU200DU200EU206BU206EU206BU200FU202AU200BU206CU200EU200CU206AU200EU206DU202AU202DU200BU202DU202CU206EU206EU206BU200BU202EU200DU200CU206EU206FU206FU206CU200DU206DU200FU206BU206AU202CU202DU202EU202E_mD5D9C4EBCDEA16E89AF3BAA7F62EAC3C752DEE8A(__this, NULL);
		uint32_t L_11 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)953175161)))^((int32_t)-659734621)));
		goto IL_001f;
	}

IL_007c:
	{
		return;
	}
}
// System.Byte <Module>/?????????????????????????????????????????::?????????????????????????????????????????(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_U200FU200BU202BU200BU200FU202CU200BU200FU206CU202EU206FU206CU202DU202DU206AU206BU200BU200BU200BU206AU206AU202AU206CU200BU200EU200BU206FU206AU200FU202CU200DU202DU202CU206CU202BU202BU206BU206EU200FU200EU202E_m41F30D3BFE1297089F132A49898DA2DD86A83D9C (U202DU200FU206FU202CU206BU202DU202CU202AU200BU206AU202AU202DU202BU200EU206BU200EU202BU202DU200CU200BU200DU200FU206CU200DU206FU206DU200DU200FU200BU206EU202AU202BU202DU200DU206BU200FU200BU200EU202DU200FU202E_tA8AD602351829C3ACD072977E58DA86D71647C6E* __this, uint32_t ___0_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		uint32_t L_0 = __this->___U200CU206DU206BU200FU206FU200CU206CU202EU206FU206CU206FU206DU200CU202EU206FU206CU200EU200BU200EU202AU206FU206CU202AU200DU202EU206FU202BU202BU200BU202BU200DU206DU202EU206DU206DU206AU206AU200EU206FU202E_1;
		uint32_t L_1 = ___0_p;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), 1));
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)573664801);
	}

IL_0010:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)197803338)));
		V_1 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_000b;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_006b;
			}
			case 3:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_006b;
	}

IL_0031:
	{
		uint32_t L_3 = V_0;
		uint32_t L_4 = __this->___U202BU206FU200DU200EU202DU202AU200DU206DU206AU206CU200DU202AU206FU202CU202DU202EU200EU200DU202EU202CU202DU206CU200CU200FU200EU200DU202CU206BU200BU200DU200FU200CU202DU202BU202AU206AU206EU206CU206BU200CU202E_4;
		if ((!(((uint32_t)L_3) < ((uint32_t)L_4))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_5 = ((int32_t)884121571);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_0048;
	}

IL_0042:
	{
		int32_t L_6 = ((int32_t)900657076);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_0048:
	{
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)1363432537)))));
		goto IL_0010;
	}

IL_0053:
	{
		uint32_t L_8 = V_0;
		uint32_t L_9 = __this->___U202BU206FU200DU200EU202DU202AU200DU206DU206AU206CU200DU202AU206FU202CU202DU202EU200EU200DU202EU202CU202DU206CU200CU200FU200EU200DU202CU206BU200BU200DU200FU200CU202DU202BU202AU206AU206EU206CU206BU200CU202E_4;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
		uint32_t L_10 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)467359955)))^((int32_t)2007329063)));
		goto IL_0010;
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___U202CU200BU200FU206FU206EU206CU202EU206AU200EU202BU206CU202EU200BU200CU200DU206FU200CU200DU206BU206EU202AU200CU202DU202DU200EU206CU202EU200CU200CU206AU206CU202DU200CU206BU206DU206FU206AU202EU206FU206BU202E_0;
		uint32_t L_12 = V_0;
		NullCheck(L_11);
		uintptr_t L_13 = ((uintptr_t)L_12);
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
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
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U202DU206DU200EU206DU200EU202AU206AU206AU202AU200FU206DU202AU202BU202DU206FU202BU206CU200CU202EU206CU200CU206FU206CU200EU206CU202AU200EU206CU202BU206CU200DU200EU206BU206BU202DU206BU200EU206BU200CU206FU202E_mCA59E3EA29A46024CB6A88EEE5184F704E3BF929 (U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		__this->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U202DU206DU200EU206DU200EU202AU206AU206AU202AU200FU206DU202AU202BU202DU206FU202BU206CU200CU202EU206CU200CU206FU206CU200EU206CU202AU200EU206CU202BU206CU200DU200EU206BU206BU202DU206BU200EU206BU200CU206FU202E_mCA59E3EA29A46024CB6A88EEE5184F704E3BF929_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1*>(__this + _offset);
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U202DU206DU200EU206DU200EU202AU206AU206AU202AU200FU206DU202AU202BU202DU206FU202BU206CU200CU202EU206CU200CU206FU206CU200EU206CU202AU200EU206CU202BU206CU200DU200EU206BU206BU202DU206BU200EU206BU200CU206FU202E_mCA59E3EA29A46024CB6A88EEE5184F704E3BF929(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????::???????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206EU202AU202CU202CU202DU206AU202DU202EU200DU200DU202BU202BU206AU206BU206EU206EU200CU202BU200FU206CU200DU202AU200CU206DU202CU202CU206AU206BU202DU202DU206CU200FU206CU200BU200DU200BU202EU202CU202E_mF98912BD51EC40FFE88C0E5345D3E47E97E6729F (U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		uint32_t L_0 = __this->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		if ((!(((uint32_t)L_0) < ((uint32_t)4))))
		{
			goto IL_0042;
		}
	}

IL_0009:
	{
		G_B2_0 = ((int32_t)1834599159);
	}

IL_000e:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1624737291)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)8)))
		{
			case 0:
			{
				goto IL_005d;
			}
			case 1:
			{
				goto IL_00ba;
			}
			case 2:
			{
				goto IL_0009;
			}
			case 3:
			{
				goto IL_0089;
			}
			case 4:
			{
				goto IL_00a1;
			}
			case 5:
			{
				goto IL_00cc;
			}
			case 6:
			{
				goto IL_0042;
			}
			case 7:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_00cc;
	}

IL_0042:
	{
		uint32_t L_2 = __this->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		if ((!(((uint32_t)L_2) < ((uint32_t)((int32_t)10)))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_3 = ((int32_t)1550698236);
		G_B7_0 = L_3;
		G_B7_1 = L_3;
		goto IL_005a;
	}

IL_0054:
	{
		int32_t L_4 = ((int32_t)1687203576);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
	}

IL_005a:
	{
		G_B2_0 = G_B7_1;
		goto IL_000e;
	}

IL_005d:
	{
		uint32_t L_5 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)1010422772)))^((int32_t)8789582)));
		goto IL_000e;
	}

IL_006c:
	{
		uint32_t L_6 = __this->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		__this->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 3));
		uint32_t L_7 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)2081097549)))^((int32_t)-119600151)));
		goto IL_000e;
	}

IL_0089:
	{
		uint32_t L_8 = __this->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		__this->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 6));
		G_B2_0 = ((int32_t)1494717678);
		goto IL_000e;
	}

IL_00a1:
	{
		__this->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0 = 0;
		uint32_t L_9 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-605901244)))^((int32_t)-1920590541)));
		goto IL_000e;
	}

IL_00ba:
	{
		uint32_t L_10 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-553660002)))^((int32_t)1120403872)));
		goto IL_000e;
	}

IL_00cc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206EU202AU202CU202CU202DU206AU202DU202EU200DU200DU202BU202BU206AU206BU206EU206EU200CU202BU200FU206CU200DU202AU200CU206DU202CU202CU206AU206BU202DU202DU206CU200FU206CU200BU200DU200BU202EU202CU202E_mF98912BD51EC40FFE88C0E5345D3E47E97E6729F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1*>(__this + _offset);
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206EU202AU202CU202CU202DU206AU202DU202EU200DU200DU202BU202BU206AU206BU206EU206EU200CU202BU200FU206CU200DU202AU200CU206DU202CU202CU206AU206BU202DU202DU206CU200FU206CU200BU200DU200BU202EU202CU202E_mF98912BD51EC40FFE88C0E5345D3E47E97E6729F(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206AU206DU206DU200BU200CU200DU206BU206FU206CU206FU202AU202BU200FU206BU206AU202AU206DU202CU206CU206FU202DU206EU202CU206BU206AU206BU202EU206FU202AU202BU206EU206DU200FU202EU202AU202EU200EU202BU200BU206BU202E_m12CFBFCAA76732BA2C18BD7668493316D0D3D38E (U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* G_B2_0 = NULL;
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* G_B3_1 = NULL;
	{
		uint32_t L_0 = __this->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		G_B1_0 = __this;
		if ((!(((uint32_t)L_0) < ((uint32_t)7))))
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 7;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000d:
	{
		G_B3_0 = ((int32_t)10);
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206AU206DU206DU200BU200CU200DU206BU206FU206CU206FU202AU202BU200FU206BU206AU202AU206DU202CU206CU206FU202DU206EU202CU206BU206AU206BU202EU206FU202AU202BU206EU206DU200FU202EU202AU202EU200EU202BU200BU206BU202E_m12CFBFCAA76732BA2C18BD7668493316D0D3D38E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1*>(__this + _offset);
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206AU206DU206DU200BU200CU200DU206BU206FU206CU206FU202AU202BU200FU206BU206AU202AU206DU202CU206CU206FU202DU206EU202CU206BU206AU206BU202EU206FU202AU202BU206EU206DU200FU202EU202AU202EU200EU202BU200BU206BU202E_m12CFBFCAA76732BA2C18BD7668493316D0D3D38E(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206CU202AU206BU206EU202DU200EU202EU206DU206CU202AU206AU206CU202EU200EU202CU206DU206DU206AU206AU206DU202AU202BU206FU202CU202EU200DU200FU202AU206CU202DU206DU206DU206AU200BU200BU206AU206FU200BU206DU206BU202E_m12A23435B4490B62DD3EA9AECDEB281F0C1CCF0A (U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* G_B2_0 = NULL;
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* G_B3_1 = NULL;
	{
		uint32_t L_0 = __this->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		G_B1_0 = __this;
		if ((!(((uint32_t)L_0) < ((uint32_t)7))))
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 8;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000d:
	{
		G_B3_0 = ((int32_t)11);
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206CU202AU206BU206EU202DU200EU202EU206DU206CU202AU206AU206CU202EU200EU202CU206DU206DU206AU206AU206DU202AU202BU206FU202CU202EU200DU200FU202AU206CU202DU206DU206DU206AU200BU200BU206AU206FU200BU206DU206BU202E_m12A23435B4490B62DD3EA9AECDEB281F0C1CCF0A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1*>(__this + _offset);
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206CU202AU206BU206EU202DU200EU202EU206DU206CU202AU206AU206CU202EU200EU202CU206DU206DU206AU206AU206DU202AU202BU206FU202CU202EU200DU200FU202AU206CU202DU206DU206DU206AU200BU200BU206AU206FU200BU206DU206BU202E_m12A23435B4490B62DD3EA9AECDEB281F0C1CCF0A(_thisAdjusted, method);
}
// System.Void <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206FU200BU202EU206EU200CU206DU200EU200EU206BU202AU202AU200CU202EU202CU202BU202BU206AU200FU206BU200BU202DU202EU200FU202AU206DU202AU202AU200FU200DU206DU206EU206DU202DU202CU206AU202DU206BU202EU200BU200EU202E_m2E700D64733D952EA9040A29C2F4AAA432D3896B (U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* G_B2_0 = NULL;
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* G_B3_1 = NULL;
	{
		uint32_t L_0 = __this->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		G_B1_0 = __this;
		if ((!(((uint32_t)L_0) < ((uint32_t)7))))
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((int32_t)9);
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000e:
	{
		G_B3_0 = ((int32_t)11);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		G_B3_1->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206FU200BU202EU206EU200CU206DU200EU200EU206BU202AU202AU200CU202EU202CU202BU202BU206AU200FU206BU200BU202DU202EU200FU202AU206DU202AU202AU200FU200DU206DU206EU206DU202DU202CU206AU202DU206BU202EU200BU200EU202E_m2E700D64733D952EA9040A29C2F4AAA432D3896B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1*>(__this + _offset);
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U206FU200BU202EU206EU200CU206DU200EU200EU206BU202AU202AU200CU202EU202CU202BU202BU206AU200FU206BU200BU202DU202EU200FU202AU206DU202AU202AU200FU200DU206DU206EU206DU202DU202CU206AU202DU206BU202EU200BU200EU202E_m2E700D64733D952EA9040A29C2F4AAA432D3896B(_thisAdjusted, method);
}
// System.Boolean <Module>/?????????????????????????????????????????::?????????????????????????????????????????()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U202CU202BU206BU206FU200EU206EU202AU202EU200CU200CU206EU202EU206FU206FU202CU202AU202BU202BU200DU202BU206FU206FU206EU206CU206AU200BU206BU206AU202EU202EU202CU206BU200DU202AU202AU202EU200FU206EU206BU200DU202E_mF85A2AEA4AB7426A02A730540D33DA8A8EB73983 (U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___U206AU202BU206FU206AU200CU200DU200EU202BU206DU200EU202DU202BU200FU202AU200FU206FU206AU202BU206FU202CU200BU206EU200CU200CU200EU202AU206CU200EU200CU206FU206FU202AU206FU200DU206AU200CU202BU206DU200CU202AU202E_0;
		return (bool)((!(((uint32_t)L_0) >= ((uint32_t)7)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U202CU202BU206BU206FU200EU206EU202AU202EU200CU200CU206EU202EU206FU206FU202CU202AU202BU202BU200DU202BU206FU206FU206EU206CU206AU200BU206BU206AU202EU202EU202CU206BU200DU202AU202AU202EU200FU206EU206BU200DU202E_mF85A2AEA4AB7426A02A730540D33DA8A8EB73983_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_t361499B0392575E6EFDA479E51EF6B6B64346AB1*>(__this + _offset);
	bool _returnValue;
	_returnValue = U200BU200DU206FU206FU206BU206CU206BU200FU202EU200DU202DU200BU206BU200CU206CU200DU202DU200BU206DU206CU200EU200FU206EU202EU206EU206AU206BU202EU202BU206BU206CU206BU202AU200CU202DU202DU206EU202AU200FU206EU202E_U202CU202BU206BU206FU200EU206EU202AU202EU200CU200CU206EU202EU206FU206FU202CU202AU202BU202BU200DU202BU206FU206FU206EU206CU206AU200BU206BU206AU202EU202EU202CU206BU200DU202AU202AU202EU200FU206EU206BU200DU202E_mF85A2AEA4AB7426A02A730540D33DA8A8EB73983(_thisAdjusted, method);
	return _returnValue;
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
// System.Void GoogleMobileAds.Android.AdLoaderClient::.ctor(GoogleMobileAds.Common.AdLoaderClientArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient__ctor_m055D518AE1A587BD96A7C9A0ADF874B6296FDD1D (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisString_t_mF71821FDD90A1775F3D5C7801386E2FC1E238ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	bool V_2 = false;
	KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C V_3;
	memset((&V_3), 0, sizeof(V_3));
	Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	bool V_6 = false;
	uint32_t V_7 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0(((int32_t)1465847653), U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, L_0, NULL);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255(((int32_t)40676781), U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, L_1, NULL);
		V_0 = L_2;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
		String_t* L_4;
		L_4 = U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F(((int32_t)-2128267860), U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, L_4, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_5;
		String_t* L_6;
		L_6 = U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255(((int32_t)167587243), U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_1;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_11 = ___0_args;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = AdLoaderClientArgs_get_AdUnitId_m9CB2CEDA6950AE81735C721A64024FEE084C1095_inline(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_10;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, __this);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)__this);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_14, L_6, L_13, NULL);
		__this->___adLoader_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adLoader_4), (void*)L_14);
		V_2 = (bool)0;
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_15 = ___0_args;
		NullCheck(L_15);
		HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* L_16;
		L_16 = AdLoaderClientArgs_get_AdTypes_m3286F08DA89AEF0941C3580385F858CE95635BD4_inline(L_15, NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F(L_16, 1, HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_008a;
		}
	}
	{
		V_2 = (bool)1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = __this->___adLoader_4;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F(((int32_t)-1873314351), U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_18);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_18, L_19, L_20, NULL);
	}

IL_008a:
	{
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_21 = ___0_args;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = AdLoaderClientArgs_get_NumberOfAdsToLoad_m16518458445D87FF740EE67FB2117837684591E0_inline(L_21, NULL);
		if ((((int32_t)L_22) <= ((int32_t)1)))
		{
			goto IL_00bc;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = __this->___adLoader_4;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D(((int32_t)-731215971), U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_27 = ___0_args;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = AdLoaderClientArgs_get_NumberOfAdsToLoad_m16518458445D87FF740EE67FB2117837684591E0_inline(L_27, NULL);
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_30);
		NullCheck(L_23);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_23, L_24, L_26, NULL);
	}

IL_00bc:
	{
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_31 = ___0_args;
		NullCheck(L_31);
		HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* L_32;
		L_32 = AdLoaderClientArgs_get_AdTypes_m3286F08DA89AEF0941C3580385F858CE95635BD4_inline(L_31, NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F(L_32, 0, HashSet_1_Contains_mB0D824DF87A2347FE9B6F7EDF88397FBC825008F_RuntimeMethod_var);
		if (!L_33)
		{
			goto IL_0138;
		}
	}
	{
		V_2 = (bool)0;
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_34 = ___0_args;
		NullCheck(L_34);
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_35;
		L_35 = AdLoaderClientArgs_get_FormatIds_m6731C0FF425BE0CC73D07B3C07A81D5A5C33CF4A_inline(L_34, NULL);
		NullCheck(L_35);
		Enumerator_tD1EEDE565BC0380945286625C34F4F872BC3821C L_36;
		L_36 = Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22(L_35, Dictionary_2_GetEnumerator_mF1EF3EBE8E3AD852DACF68EB32C1EA646288ED22_RuntimeMethod_var);
		V_4 = L_36;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14((&V_4), Enumerator_Dispose_mAA92A709B68DE27536A8C66FADE01B63FC565B14_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_011f_1;
			}

IL_00db_1:
			{
				KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C L_37;
				L_37 = Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_inline((&V_4), Enumerator_get_Current_mFBA428AA59DC9319F94DD19765071FE5AE457E9C_RuntimeMethod_var);
				V_3 = L_37;
				String_t* L_38;
				L_38 = KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_inline((&V_3), KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var);
				V_5 = L_38;
				bool L_39;
				L_39 = KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_inline((&V_3), KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_RuntimeMethod_var);
				V_6 = L_39;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_40 = __this->___adLoader_4;
				il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
				String_t* L_41;
				L_41 = U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisString_t_mF71821FDD90A1775F3D5C7801386E2FC1E238ED9(((int32_t)-1783330369), U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisString_t_mF71821FDD90A1775F3D5C7801386E2FC1E238ED9_RuntimeMethod_var);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_42;
				String_t* L_44 = V_5;
				NullCheck(L_43);
				ArrayElementTypeCheck (L_43, L_44);
				(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = L_43;
				bool L_46 = V_6;
				bool L_47 = L_46;
				RuntimeObject* L_48 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_47);
				NullCheck(L_45);
				ArrayElementTypeCheck (L_45, L_48);
				(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_48);
				NullCheck(L_40);
				AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_40, L_41, L_45, NULL);
			}

IL_011f_1:
			{
				bool L_49;
				L_49 = Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2((&V_4), Enumerator_MoveNext_m483F1A7F088BB7BA068F7690D7F1A6D9D7A5A7B2_RuntimeMethod_var);
				if (L_49)
				{
					goto IL_00db_1;
				}
			}
			{
				goto IL_0138;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0138:
	{
		bool L_50 = V_2;
		if (!L_50)
		{
			goto IL_0156;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_51 = __this->___adLoader_4;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_52;
		L_52 = U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0(((int32_t)-302279054), U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_53 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_51);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_51, L_52, L_53, NULL);
	}

IL_0156:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_54 = __this->___adLoader_4;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_55;
		L_55 = U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F(((int32_t)-769632526), U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_54);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_54, L_55, L_56, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnAdFailedToLoad_m9F97AF72F7823388F5B7D7BF87A9469B5EF33A78 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_0 = NULL;
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_0 = __this->___OnAdFailedToLoad_5;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-745928364);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-992200376)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_0029;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0029:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50** L_3 = (&__this->___OnAdFailedToLoad_5);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_4 = V_1;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_5 = ___0_value;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_7 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*>(L_3, ((EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)Castclass((RuntimeObject*)L_6, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_9 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_9) == ((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_10)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ((int32_t)-745928364);
		G_B7_0 = L_11;
		G_B7_1 = L_11;
		goto IL_0056;
	}

IL_0050:
	{
		int32_t L_12 = ((int32_t)-1783567393);
		G_B7_0 = L_12;
		G_B7_1 = L_12;
	}

IL_0056:
	{
		G_B2_0 = G_B7_1;
		goto IL_000c;
	}

IL_0059:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnAdFailedToLoad_m230534A775365707E91D50FDCCF4D514A63A6900 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_0 = NULL;
	EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_0 = __this->___OnAdFailedToLoad_5;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-294953488);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-157445667)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50** L_3 = (&__this->___OnAdFailedToLoad_5);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_4 = V_1;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_5 = ___0_value;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_7 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*>(L_3, ((EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)Castclass((RuntimeObject*)L_6, EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		G_B2_0 = ((int32_t)-1413270661);
		goto IL_000c;
	}

IL_004f:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_9 = V_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_9) == ((RuntimeObject*)(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)1033440376);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)874083529);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)978175916)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnCustomNativeAdLoaded(System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnCustomNativeAdLoaded_m89A60D28B0B4B1F38A0A08289B6F162151A59EDD (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_0 = NULL;
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->___OnCustomNativeAdLoaded_6;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)925543539);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1792763821)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_007f;
			}
			case 3:
			{
				goto IL_0057;
			}
			case 4:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)1262500447);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_3 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_4 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_3) == ((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_4))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = ((int32_t)119962727);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_004c;
	}

IL_0046:
	{
		int32_t L_6 = ((int32_t)753981469);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_004c:
	{
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-462953018)))));
		goto IL_000c;
	}

IL_0057:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED** L_8 = (&__this->___OnCustomNativeAdLoaded_6);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_9 = V_1;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_10 = ___0_value;
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_12 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_13;
		L_13 = InterlockedCompareExchangeImpl<EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*>(L_8, ((EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)Castclass((RuntimeObject*)L_11, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var)), L_12);
		V_0 = L_13;
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-172614549)))^((int32_t)33713174)));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnCustomNativeAdLoaded(System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnCustomNativeAdLoaded_m33E5CA04251A6A9BD2D935B2492D33064461B0B1 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_0 = NULL;
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->___OnCustomNativeAdLoaded_6;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-685037139);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1623495775)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0029:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED** L_3 = (&__this->___OnCustomNativeAdLoaded_6);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_4 = V_1;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_5 = ___0_value;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_7 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*>(L_3, ((EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_9 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_9) == ((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_10))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ((int32_t)-655436529);
		G_B7_0 = L_11;
		G_B7_1 = L_11;
		goto IL_0056;
	}

IL_0050:
	{
		int32_t L_12 = ((int32_t)-685037139);
		G_B7_0 = L_12;
		G_B7_1 = L_12;
	}

IL_0056:
	{
		G_B2_0 = G_B7_1;
		goto IL_000c;
	}

IL_0059:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnCustomNativeAdClicked(System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnCustomNativeAdClicked_mD3803E6D3B545DC90D0643FBB139A346D50A871D (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_0 = NULL;
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->___OnCustomNativeAdClicked_7;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-347484771);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-841026472)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)-799209466);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED** L_3 = (&__this->___OnCustomNativeAdClicked_7);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_4 = V_1;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_5 = ___0_value;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_7 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*>(L_3, ((EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_9 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_9) == ((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)292226201);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)70478527);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-368028386)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnCustomNativeAdClicked(System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnCustomNativeAdClicked_mED737635D7893F13FC4F2B00B552987DAF4E76B7 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_0 = NULL;
	EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->___OnCustomNativeAdClicked_7;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1904743967);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-436027288)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_007f;
			}
			case 2:
			{
				goto IL_0007;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_0076;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_2 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_3 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_2) == ((RuntimeObject*)(EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)L_3)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ((int32_t)2033176201);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
		goto IL_0043;
	}

IL_003d:
	{
		int32_t L_5 = ((int32_t)892553411);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
	}

IL_0043:
	{
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)2123923771)))));
		goto IL_000c;
	}

IL_004e:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED** L_7 = (&__this->___OnCustomNativeAdClicked_7);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_8 = V_1;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_9 = ___0_value;
		Delegate_t* L_10;
		L_10 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_8, L_9, NULL);
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_11 = V_0;
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_12;
		L_12 = InterlockedCompareExchangeImpl<EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*>(L_7, ((EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED*)Castclass((RuntimeObject*)L_10, EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED_il2cpp_TypeInfo_var)), L_11);
		V_0 = L_12;
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)1632384393)))^((int32_t)1112771749)));
		goto IL_000c;
	}

IL_0076:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_14 = V_0;
		V_1 = L_14;
		G_B2_0 = ((int32_t)-1268449307);
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnNativeAdLoaded(System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdLoaded_m4E2EDF6256EA7F155F3657C1A463A298587F667D (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* V_0 = NULL;
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_0 = __this->___OnNativeAdLoaded_8;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)671172080);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)183259597)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_006c;
			}
			case 3:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)362742377);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67** L_3 = (&__this->___OnNativeAdLoaded_8);
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_4 = V_1;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_5 = ___0_value;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_7 = V_0;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*>(L_3, ((EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)Castclass((RuntimeObject*)L_6, EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_9 = V_0;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)L_9) == ((RuntimeObject*)(EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)633396156);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)1360307691);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-842368229)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnNativeAdLoaded(System.EventHandler`1<GoogleMobileAds.Common.NativeClientEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdLoaded_mC778D46518E2BA5595BF819D7EA5A1123FEF28DC (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* V_0 = NULL;
	EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_0 = __this->___OnNativeAdLoaded_8;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1983327352);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-2003143904)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_2 = V_0;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_3 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)L_2) == ((RuntimeObject*)(EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)L_3)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ((int32_t)2086073187);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
		goto IL_0043;
	}

IL_003d:
	{
		int32_t L_5 = ((int32_t)2127897938);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
	}

IL_0043:
	{
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)694972137)))));
		goto IL_000c;
	}

IL_004e:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67** L_7 = (&__this->___OnNativeAdLoaded_8);
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_8 = V_1;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_9 = ___0_value;
		Delegate_t* L_10;
		L_10 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_8, L_9, NULL);
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_11 = V_0;
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_12;
		L_12 = InterlockedCompareExchangeImpl<EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*>(L_7, ((EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67*)Castclass((RuntimeObject*)L_10, EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67_il2cpp_TypeInfo_var)), L_11);
		V_0 = L_12;
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-325745590)))^((int32_t)-1636842861)));
		goto IL_000c;
	}

IL_0076:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_14 = V_0;
		V_1 = L_14;
		G_B2_0 = ((int32_t)-1920310368);
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnNativeAdImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdImpression_mB5B3B2F166BD9BE93683C449AE75B30B7E4A0080 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdImpression_9;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1018980439);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1691111482)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_006c;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->___OnNativeAdImpression_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___0_value;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		G_B2_0 = ((int32_t)-1663937437);
		goto IL_000c;
	}

IL_004f:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-1051769599);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-900004468);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1832225663)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnNativeAdImpression(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdImpression_m6E8D45F2A927FD723A1109C0EC914B340140D56F (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdImpression_9;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1570212218);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)270664552)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)949489143);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->___OnNativeAdImpression_9);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___0_value;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-294871319);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-1946312058);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)392476301)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnNativeAdClicked(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdClicked_m1A8D03442432D6C0D4EC4ED6A9F36B9534C47BF6 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdClicked_10;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1158289441);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1356192028)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_003a;
			}
			case 4:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)-1626785816);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_3) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_4)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = ((int32_t)-185494187);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_004c;
	}

IL_0046:
	{
		int32_t L_6 = ((int32_t)-1734935315);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_004c:
	{
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-307769259)))));
		goto IL_000c;
	}

IL_0057:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_8 = (&__this->___OnNativeAdClicked_10);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = ___0_value;
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_12 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13;
		L_13 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_8, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_11, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_12);
		V_0 = L_13;
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-1956598449)))^((int32_t)-1945595342)));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnNativeAdClicked(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdClicked_m2269979F15AB0470549BE5AA3225534D2C3AE929 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdClicked_10;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1067932914);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1265485721)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_007f;
			}
			case 3:
			{
				goto IL_0076;
			}
			case 4:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_2) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ((int32_t)-1719879614);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
		goto IL_0043;
	}

IL_003d:
	{
		int32_t L_5 = ((int32_t)-33807193);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
	}

IL_0043:
	{
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)3668671)))));
		goto IL_000c;
	}

IL_004e:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_7 = (&__this->___OnNativeAdClicked_10);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = ___0_value;
		Delegate_t* L_10;
		L_10 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_8, L_9, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_12;
		L_12 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_7, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_10, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_11);
		V_0 = L_12;
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)1519620552)))^((int32_t)1922444680)));
		goto IL_000c;
	}

IL_0076:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_14 = V_0;
		V_1 = L_14;
		G_B2_0 = ((int32_t)-94787680);
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnNativeAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdOpening_m629E7594AF4AB93C9E6ED60373FD75A453DF4073 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdOpening_11;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1075833393);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1083549317)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_0076;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_2) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ((int32_t)-1476875372);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
		goto IL_0043;
	}

IL_003d:
	{
		int32_t L_5 = ((int32_t)-1019930781);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
	}

IL_0043:
	{
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)61593164)))));
		goto IL_000c;
	}

IL_004e:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_7 = (&__this->___OnNativeAdOpening_11);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = ___0_value;
		Delegate_t* L_10;
		L_10 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_8, L_9, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_12;
		L_12 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_7, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_10, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_11);
		V_0 = L_12;
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1881708206)))^((int32_t)109337566)));
		goto IL_000c;
	}

IL_0076:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_14 = V_0;
		V_1 = L_14;
		G_B2_0 = ((int32_t)-302639907);
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnNativeAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdOpening_m36509A1BE4895D91F3D50D74EF41B7554F088B19 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdOpening_11;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1850466794);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-626864521)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_006c;
			}
			case 3:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->___OnNativeAdOpening_11);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___0_value;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		G_B2_0 = ((int32_t)-1702457);
		goto IL_000c;
	}

IL_004f:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-932792442);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-1663463767);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-186090821)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::add_OnNativeAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_add_OnNativeAdClosed_mDD4019510743B0250E99971A86A34DEB38AA706C (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdClosed_12;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)622073340);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1445051781)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0007;
			}
			case 3:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)1558681662);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->___OnNativeAdClosed_12);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___0_value;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-118372803);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-1121945428);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1276365133)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::remove_OnNativeAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_remove_OnNativeAdClosed_m763234B043A30775FF8CB68E060C592565D2CFEF (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdClosed_12;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1239915871);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)990510166)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0007;
			}
			case 3:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->___OnNativeAdClosed_12);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = ___0_value;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		G_B2_0 = ((int32_t)2081121950);
		goto IL_000c;
	}

IL_004f:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)1881763005);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)1465792999);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)484342127)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_LoadAd_mB863835F9D2F80722EC3C8E81E4A933DB81D5744 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = NativeUtils_get_Version_mB8F63B5B552D940B0351BE63FA0ED6E4B93B04D2_inline(NULL);
		V_0 = L_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->___adLoader_4;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255(((int32_t)-448835001), U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_5 = ___0_request;
		String_t* L_6 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = Utils_GetAdRequestJavaObject_m1B081FD57A546B7181D07C58C1101E57A227EF7E(L_5, L_6, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, L_2, L_4, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onNativeAdLoaded(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onNativeAdLoaded_m61BDD6A9E7B612AC31DE813753C8B2B350C81B03 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_ad, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* V_0 = NULL;
	NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_0 = __this->___OnNativeAdLoaded_8;
		if (!L_0)
		{
			goto IL_0080;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)-1046701715);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-425221068)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0008;
			}
			case 1:
			{
				goto IL_0064;
			}
			case 2:
			{
				goto IL_0080;
			}
			case 3:
			{
				goto IL_0032;
			}
			case 4:
			{
				goto IL_0047;
			}
		}
	}
	{
		goto IL_0080;
	}

IL_0032:
	{
		NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* L_2 = (NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809*)il2cpp_codegen_object_new(NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NativeClientEventArgs__ctor_mF7DEA301F79DC4E7B2B76ECC00B6AD55D15FF636(L_2, NULL);
		V_1 = L_2;
		uint32_t L_3 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)-2026811530)))^((int32_t)-1964546389)));
		goto IL_000d;
	}

IL_0047:
	{
		NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* L_4 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = ___0_ad;
		NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* L_6 = (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08*)il2cpp_codegen_object_new(NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		NativeAdClient__ctor_m0E816B4BC558AF7D091637D3BFFFC2A81CAD5DC6(L_6, L_5, NULL);
		NullCheck(L_4);
		NativeClientEventArgs_set_nativeAdClient_mCEDBB0459BE0B3E308DA85F15E98E31D740B97FA_inline(L_4, L_6, NULL);
		NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* L_7 = V_1;
		V_0 = L_7;
		uint32_t L_8 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-1897373042)))^((int32_t)-718073421)));
		goto IL_000d;
	}

IL_0064:
	{
		EventHandler_1_t7F06ED6C454043EBF7F2DAC7FCA3D96B99BFEB67* L_9 = __this->___OnNativeAdLoaded_8;
		NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* L_10 = V_0;
		NullCheck(L_9);
		EventHandler_1_Invoke_mE7BEDD3511C7196786EEA138E2CCB15EDFBA079E_inline(L_9, __this, L_10, NULL);
		uint32_t L_11 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)-210324237)))^((int32_t)1124463591)));
		goto IL_000d;
	}

IL_0080:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onNativeAdImpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onNativeAdImpression_m4107C0F73DF65CDB649EFD0F8A9AE799E3E77F62 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdImpression_9;
		if (!L_0)
		{
			goto IL_004a;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)-618193275);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-2017461495)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0008;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_002a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = __this->___OnNativeAdImpression_9;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_2, __this, L_3, NULL);
		uint32_t L_4 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)800590423)))^((int32_t)-1634001420)));
		goto IL_000d;
	}

IL_004a:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onNativeAdClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onNativeAdClicked_m78A11AB2516DB8C33645A6601EF43EF41A3CF8F5 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdClicked_10;
		if (!L_0)
		{
			goto IL_004a;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)47191235);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)370059300)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0008;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_002a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = __this->___OnNativeAdClicked_10;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_2, __this, L_3, NULL);
		uint32_t L_4 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)603621907)))^((int32_t)-803074007)));
		goto IL_000d;
	}

IL_004a:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onNativeAdOpening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onNativeAdOpening_m286D9BFFE734BDC414D8AD2230209EB53B0E4CCD (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdOpening_11;
		if (!L_0)
		{
			goto IL_004a;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)609734216);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)291092831)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0008;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_002a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = __this->___OnNativeAdOpening_11;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_2, __this, L_3, NULL);
		uint32_t L_4 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-1807730582)))^((int32_t)2132288361)));
		goto IL_000d;
	}

IL_004a:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onNativeAdClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onNativeAdClosed_mA450F47AF7E4C1030A3184474676462CA2401B44 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnNativeAdClosed_12;
		if (!L_0)
		{
			goto IL_004a;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)1389699135);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)849108831)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0008;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_004a;
	}

IL_002a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = __this->___OnNativeAdClosed_12;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_2, __this, L_3, NULL);
		uint32_t L_4 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-1369027185)))^((int32_t)-395534703)));
		goto IL_000d;
	}

IL_004a:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onCustomNativeAdLoaded(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onCustomNativeAdLoaded_mC4B7F82CE66C7FADC9A6536643211B1ED00BD12B (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_ad, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* V_0 = NULL;
	CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->___OnCustomNativeAdLoaded_6;
		if (!L_0)
		{
			goto IL_00b6;
		}
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)1045513951);
	}

IL_0010:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1259682107)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)7)))
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_008a;
			}
			case 3:
			{
				goto IL_006f;
			}
			case 4:
			{
				goto IL_000b;
			}
			case 5:
			{
				goto IL_00a2;
			}
			case 6:
			{
				goto IL_00b6;
			}
		}
	}
	{
		goto IL_00b6;
	}

IL_003d:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_2 = __this->___OnCustomNativeAdLoaded_6;
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_3 = V_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m23461BB0B5DF74CDA38E5E94CC0CEADB138F06C5_inline(L_2, __this, L_3, NULL);
		uint32_t L_4 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)1065357270)))^((int32_t)-1820408521)));
		goto IL_0010;
	}

IL_0059:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_5 = V_1;
		NullCheck(L_5);
		CustomNativeClientEventArgs_set_assetName_m0FFF03346E29AB4599BEB94FD9E2CB5BD6D163C4_inline(L_5, (String_t*)NULL, NULL);
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)203597711)))^((int32_t)816109341)));
		goto IL_0010;
	}

IL_006f:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_7 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = ___0_ad;
		CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* L_9 = (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8*)il2cpp_codegen_object_new(CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CustomNativeAdClient__ctor_m3DCCBCD93644C868D3D4F8E33B4EECD459CDC311(L_9, L_8, NULL);
		NullCheck(L_7);
		CustomNativeClientEventArgs_set_nativeAdClient_m7C4578E96709771F4B4E26B0EF01FD72C1CF0E75_inline(L_7, L_9, NULL);
		uint32_t L_10 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)477350)))^((int32_t)-1482897839)));
		goto IL_0010;
	}

IL_008a:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_11 = (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734*)il2cpp_codegen_object_new(CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		CustomNativeClientEventArgs__ctor_mB86D8364F64424DC0778551C310DC8F0B71A46FB(L_11, NULL);
		V_1 = L_11;
		uint32_t L_12 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)1020100728)))^((int32_t)1588974702)));
		goto IL_0010;
	}

IL_00a2:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_13 = V_1;
		V_0 = L_13;
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)1559112478)))^((int32_t)902107690)));
		goto IL_0010;
	}

IL_00b6:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onAdFailedToLoad(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onAdFailedToLoad_m0489FF6B55F4129C7CEBB244C9A179C8805D11AD (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* V_0 = NULL;
	LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_0 = (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2*)il2cpp_codegen_object_new(LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LoadAdErrorClientEventArgs__ctor_m2D09A984965A5EDB0506CDAC47BE1675E80AE0AB(L_0, NULL);
		V_1 = L_0;
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)-2134652474);
	}

IL_000b:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-872192496)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0006;
			}
		}
	}
	{
		goto IL_0058;
	}

IL_002c:
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_2 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___0_error;
		LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C* L_4 = (LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C*)il2cpp_codegen_object_new(LoadAdErrorClient_t30C0F884D27062ECF037BEEAE59D951D8D1D0C2C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		LoadAdErrorClient__ctor_mAAB2CB3CA79F7FC1CDDA014A8194DDB6A26F9967(L_4, L_3, NULL);
		NullCheck(L_2);
		LoadAdErrorClientEventArgs_set_LoadAdErrorClient_m6E865CB1B347CEF0B75F55CE43EE3FDBF8353353_inline(L_2, L_4, NULL);
		uint32_t L_5 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)532511527)))^((int32_t)-23014141)));
		goto IL_000b;
	}

IL_0047:
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_6 = V_1;
		V_0 = L_6;
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)1681348251)))^((int32_t)356939039)));
		goto IL_000b;
	}

IL_0058:
	{
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_8 = __this->___OnAdFailedToLoad_5;
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_9 = V_0;
		NullCheck(L_8);
		EventHandler_1_Invoke_m10AA45946252533013704CF408E2DDD0B3BACA82_inline(L_8, __this, L_9, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Android.AdLoaderClient::onCustomNativeAdClick(UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoaderClient_onCustomNativeAdClick_mA8FB2633DF532FE829C54DCB59C4F56922C79DE2 (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_ad, String_t* ___1_assetName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* V_0 = NULL;
	CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_0 = __this->___OnCustomNativeAdClicked_7;
		if (!L_0)
		{
			goto IL_0087;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)-831388949);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-125929875)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0087;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0076;
			}
			case 3:
			{
				goto IL_0008;
			}
			case 4:
			{
				goto IL_005a;
			}
		}
	}
	{
		goto IL_0087;
	}

IL_0032:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_2 = (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734*)il2cpp_codegen_object_new(CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CustomNativeClientEventArgs__ctor_mB86D8364F64424DC0778551C310DC8F0B71A46FB(L_2, NULL);
		V_1 = L_2;
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_3 = V_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___0_ad;
		CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* L_5 = (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8*)il2cpp_codegen_object_new(CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		CustomNativeAdClient__ctor_m3DCCBCD93644C868D3D4F8E33B4EECD459CDC311(L_5, L_4, NULL);
		NullCheck(L_3);
		CustomNativeClientEventArgs_set_nativeAdClient_m7C4578E96709771F4B4E26B0EF01FD72C1CF0E75_inline(L_3, L_5, NULL);
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_6 = V_1;
		String_t* L_7 = ___1_assetName;
		NullCheck(L_6);
		CustomNativeClientEventArgs_set_assetName_m0FFF03346E29AB4599BEB94FD9E2CB5BD6D163C4_inline(L_6, L_7, NULL);
		uint32_t L_8 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-656004826)))^((int32_t)1046370486)));
		goto IL_000d;
	}

IL_005a:
	{
		EventHandler_1_tD6D981F2A43EFF30C6D35D9EE061C3FFC404CBED* L_9 = __this->___OnCustomNativeAdClicked_7;
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_10 = V_0;
		NullCheck(L_9);
		EventHandler_1_Invoke_m23461BB0B5DF74CDA38E5E94CC0CEADB138F06C5_inline(L_9, __this, L_10, NULL);
		uint32_t L_11 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)1022166719)))^((int32_t)-2115901833)));
		goto IL_000d;
	}

IL_0076:
	{
		CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* L_12 = V_1;
		V_0 = L_12;
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-656717296)))^((int32_t)748718557)));
		goto IL_000d;
	}

IL_0087:
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
// System.Void GoogleMobileAds.Android.CustomNativeAdClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNativeAdClient__ctor_m3DCCBCD93644C868D3D4F8E33B4EECD459CDC311 (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_customNativeAd, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)-487603826);
	}

IL_000b:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-1332564556)));
		V_0 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0006;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_003e;
	}

IL_0028:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_customNativeAd;
		__this->___customNativeAd_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___customNativeAd_0), (void*)L_1);
		uint32_t L_2 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)-1624826342)))^((int32_t)1180474004)));
		goto IL_000b;
	}

IL_003e:
	{
		return;
	}
}
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Android.CustomNativeAdClient::GetAvailableAssetNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* CustomNativeAdClient_GetAvailableAssetNames_m285EC00BE481B69C19D018916251869AED0C606C (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___customNativeAd_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0(((int32_t)-948303262), U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00(L_0, L_1, L_2, AndroidJavaObject_Call_TisStringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_mDB9546BEEC88451F68DCAD34A4F2E207E1C31E00_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_4, (RuntimeObject*)L_3, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		return L_4;
	}
}
// System.String GoogleMobileAds.Android.CustomNativeAdClient::GetFormatId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CustomNativeAdClient_GetFormatId_mCE16EF009815B1DDF6D7DA8711619C165D41DCF2 (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___customNativeAd_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0(((int32_t)819823445), U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.Byte[] GoogleMobileAds.Android.CustomNativeAdClient::GetImageByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CustomNativeAdClient_GetImageByteArray_mAAC3371BB7D4286B79052A540C09FEED5017FD9C (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___customNativeAd_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0(((int32_t)-665667671), U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___0_key;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C(L_0, L_1, L_3, AndroidJavaObject_Call_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_mA0C075B9F98F168BBD9A6C0C926437671132FB1C_RuntimeMethod_var);
		V_0 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		if (((int32_t)(((RuntimeArray*)L_6)->max_length)))
		{
			goto IL_0058;
		}
	}

IL_0025:
	{
		G_B2_0 = ((int32_t)655474537);
	}

IL_002a:
	{
		int32_t L_7 = ((int32_t)(G_B2_0^((int32_t)1055947521)));
		V_1 = L_7;
		switch (((int32_t)((uint32_t)(int32_t)L_7%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0058;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_0025;
			}
		}
	}
	{
		goto IL_0058;
	}

IL_0047:
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
	// Dead block : IL_0049: ldloc.1

IL_0058:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		return L_8;
	}
}
// System.String GoogleMobileAds.Android.CustomNativeAdClient::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CustomNativeAdClient_GetText_m26D542BA02FFA8E8C6E2194FBCE801B7D1BAFBBF (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___customNativeAd_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F(((int32_t)-786741098), U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___0_key;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		String_t* L_5;
		L_5 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_0020:
	{
		G_B2_0 = ((int32_t)2061097124);
	}

IL_0025:
	{
		int32_t L_6 = ((int32_t)(G_B2_0^((int32_t)1151294350)));
		V_1 = L_6;
		switch (((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0046;
			}
			case 3:
			{
				goto IL_007d;
			}
		}
	}
	{
		goto IL_007d;
	}

IL_0046:
	{
		String_t* L_7 = V_0;
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_7);
		bool L_9;
		L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_10 = ((int32_t)330542769);
		G_B7_0 = L_10;
		G_B7_1 = L_10;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_11 = ((int32_t)1040496943);
		G_B7_0 = L_11;
		G_B7_1 = L_11;
	}

IL_0061:
	{
		uint32_t L_12 = V_1;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)1774031359)))));
		goto IL_0025;
	}

IL_006c:
	{
		return (String_t*)NULL;
	}
	// Dead block : IL_006e: ldloc.1

IL_007d:
	{
		String_t* L_13 = V_0;
		return L_13;
	}
}
// System.Void GoogleMobileAds.Android.CustomNativeAdClient::PerformClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNativeAdClient_PerformClick_mD96B7418F1B603AD867CE72D0F8BAAF757978873 (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, String_t* ___0_assetName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___customNativeAd_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D(((int32_t)-1305416403), U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___0_assetName;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Android.CustomNativeAdClient::RecordImpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNativeAdClient_RecordImpression_m1F933123831CC10EF002C9C17615BF87402D5B17 (CustomNativeAdClient_t80CEFCF85A9E1FFD8747EEC9810C93FCD76CA7B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___customNativeAd_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255(((int32_t)-376314737), U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, L_1, L_2, NULL);
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
// System.Void GoogleMobileAds.GoogleMobileAdsNativeClientFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoogleMobileAdsNativeClientFactory__ctor_mC493E82853A368369642A0BD1A52FD7C83A98CBD (GoogleMobileAdsNativeClientFactory_t7B51A9D779A00C76464A224A4B52821D6A946C84* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Common.IAdLoaderClient GoogleMobileAds.GoogleMobileAdsNativeClientFactory::BuildAdLoaderClient(GoogleMobileAds.Common.AdLoaderClientArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoogleMobileAdsNativeClientFactory_BuildAdLoaderClient_m05E2420DE482E47ED15980D938702E468EC6C52F (GoogleMobileAdsNativeClientFactory_t7B51A9D779A00C76464A224A4B52821D6A946C84* __this, AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* ___0_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0041;
		}
	}

IL_0009:
	{
		G_B2_0 = ((int32_t)1560876987);
	}

IL_000e:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1443023902)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_0009;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_002b:
	{
		AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* L_2 = ___0_args;
		AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88* L_3 = (AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88*)il2cpp_codegen_object_new(AdLoaderClient_t703D13DC93C98C711E853D1941AE7F7B6A49CA88_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AdLoaderClient__ctor_m055D518AE1A587BD96A7C9A0ADF874B6296FDD1D(L_3, L_2, NULL);
		return L_3;
	}
	// Dead block : IL_0032: ldloc.0

IL_0041:
	{
		DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F* L_4 = (DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F*)il2cpp_codegen_object_new(DummyNativeClient_tA3BCBB551C14B7D926BE9E1E59D3DD60D3DE9B7F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DummyNativeClient__ctor_m116A1174D312D713C92ADBB744748987A37D15C1(L_4, NULL);
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
// System.Void GoogleMobileAds.Android.NativeAdClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdClient__ctor_m0E816B4BC558AF7D091637D3BFFFC2A81CAD5DC6 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_nativeAd, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D(((int32_t)-607772616), U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, L_0, NULL);
	}

IL_0010:
	{
		G_B2_0 = ((int32_t)312679884);
	}

IL_0015:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1232186056)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_00c7;
			}
			case 1:
			{
				goto IL_006a;
			}
			case 2:
			{
				goto IL_0090;
			}
			case 3:
			{
				goto IL_00a9;
			}
			case 4:
			{
				goto IL_0010;
			}
			case 5:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_00c7;
	}

IL_0041:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_nativeAd;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F(((int32_t)-973260319), U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, __this);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)__this);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, L_3, L_5, NULL);
		uint32_t L_6 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-65837662)))^((int32_t)-1294089670)));
		goto IL_0015;
	}

IL_006a:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ___0_nativeAd;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0(((int32_t)-28083328), U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_7);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10;
		L_10 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_7, L_8, L_9, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_10;
		uint32_t L_11 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)36876008)))^((int32_t)2051168795)));
		goto IL_0015;
	}

IL_0090:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ___0_nativeAd;
		__this->___nativeAd_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nativeAd_5), (void*)L_12);
		uint32_t L_13 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1641471697)))^((int32_t)-1811338683)));
		goto IL_0015;
	}

IL_00a9:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_0;
		NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* L_15 = (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772*)il2cpp_codegen_object_new(NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		NativeAdInteractionHandlerClient__ctor_mBBCE221D0C939EAF772625836F672623C4115DFE(L_15, L_14, NULL);
		__this->___interactionHandlerClient_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactionHandlerClient_6), (void*)L_15);
		uint32_t L_16 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)168961788)))^((int32_t)1784297333)));
		goto IL_0015;
	}

IL_00c7:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.NativeAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdClient_add_OnPaidEvent_m70D9951267A97A7D14FF6D684A591A8ED1AF3CA2 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1054393616);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)568012574)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)1729961401);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_3 = (&__this->___OnPaidEvent_4);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_5 = ___0_value;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_3, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-1072995306);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-778501903);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1388544969)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Android.NativeAdClient::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdClient_remove_OnPaidEvent_m2D04EEABF06CA069C5998CC47C2D81254DAC17FC (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1226825477);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)2097846593)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_007f;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_0007;
			}
			case 3:
			{
				goto IL_0031;
			}
			case 4:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_2 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_3 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_2) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_3)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ((int32_t)864674865);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
		goto IL_0043;
	}

IL_003d:
	{
		int32_t L_5 = ((int32_t)1708659390);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
	}

IL_0043:
	{
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-2144502446)))));
		goto IL_000c;
	}

IL_004e:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_7 = (&__this->___OnPaidEvent_4);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = ___0_value;
		Delegate_t* L_10;
		L_10 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_8, L_9, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_11 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_12;
		L_12 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_7, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_10, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_11);
		V_0 = L_12;
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-24027888)))^((int32_t)670774603)));
		goto IL_000c;
	}

IL_0076:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_14 = V_0;
		V_1 = L_14;
		G_B2_0 = ((int32_t)1278353329);
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// GoogleMobileAds.Common.INativeAdInteractionHandlerClient GoogleMobileAds.Android.NativeAdClient::GetInteractionHandlerClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeAdClient_GetInteractionHandlerClient_m671874DD690B9AE29E820FC9379C7F5C1BD162BA (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* L_0 = __this->___interactionHandlerClient_6;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Android.NativeAdClient::GetMainImageURLs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* NativeAdClient_GetMainImageURLs_m9BCA7508CCF497DE097D78E79BD35941C5F57F5C (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_4;
	memset((&V_4), 0, sizeof(V_4));
	uint32_t V_5 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255(((int32_t)2015924802), U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_0 = L_3;
		String_t* L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = Json_Deserialize_m1823918610311F093CBF1E0C77B52C348008763B(L_4, NULL);
		V_1 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)IsInstClass((RuntimeObject*)L_5, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_6, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_2 = L_6;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_7 = V_1;
		NullCheck(L_7);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_8;
		L_8 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_7, List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		V_4 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0096:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_4), Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_0038_1:
			{
				G_B3_0 = ((int32_t)1028417581);
			}

IL_003d_1:
			{
				int32_t L_9 = ((int32_t)(G_B3_0^((int32_t)1197312114)));
				V_5 = L_9;
				switch (((int32_t)((uint32_t)(int32_t)L_9%(uint32_t)(int32_t)4)))
				{
					case 0:
					{
						goto IL_0038_1;
					}
					case 1:
					{
						goto IL_0094_1;
					}
					case 2:
					{
						goto IL_007a_1;
					}
					case 3:
					{
						goto IL_005f_1;
					}
				}
			}
			{
				goto IL_0094_1;
			}

IL_005f_1:
			{
				RuntimeObject* L_10;
				L_10 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_4), Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
				V_3 = L_10;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = V_2;
				RuntimeObject* L_12 = V_3;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
				NullCheck(L_11);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_11, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				G_B3_0 = ((int32_t)938355440);
				goto IL_003d_1;
			}

IL_007a_1:
			{
				bool L_14;
				L_14 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_4), Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
				if (!L_14)
				{
					goto IL_008b_1;
				}
			}
			{
				int32_t L_15 = ((int32_t)1028417581);
				G_B9_0 = L_15;
				G_B9_1 = L_15;
				goto IL_0091_1;
			}

IL_008b_1:
			{
				int32_t L_16 = ((int32_t)1575358935);
				G_B9_0 = L_16;
				G_B9_1 = L_16;
			}

IL_0091_1:
			{
				G_B3_0 = G_B9_1;
				goto IL_003d_1;
			}

IL_0094_1:
			{
				goto IL_00a4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a4:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = V_2;
		return L_17;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetIconURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetIconURL_mA728A5662CE540D685A7A253E5039CFA2A5FE42E (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisString_t_mF71821FDD90A1775F3D5C7801386E2FC1E238ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisString_t_mF71821FDD90A1775F3D5C7801386E2FC1E238ED9(((int32_t)1740148357), U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisString_t_mF71821FDD90A1775F3D5C7801386E2FC1E238ED9_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetAdChoicesLogoURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetAdChoicesLogoURL_mD550F9C08670BC166B4A1FBD9E507F4200BC6430 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D(((int32_t)-1334093965), U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.Double GoogleMobileAds.Android.NativeAdClient::GetStarRating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NativeAdClient_GetStarRating_m62F8B9AA55A697F5C5BFF1992D1905C0B6218109 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255(((int32_t)1182870939), U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		double L_3;
		L_3 = AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362(L_0, L_1, L_2, AndroidJavaObject_Call_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m980F8BA95C5B796FDACBDF865A7BAE431DE77362_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetHeadline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetHeadline_m5F7D25749338CBC20783AB0E73418D353C88DE6B (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F(((int32_t)147530078), U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetBody_mF182ABB2824C766441C71B36C42D2AD3FA2A108B (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0(((int32_t)-1513574444), U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetCallToAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetCallToAction_m7F434ACB9919EDA0D1C21131C717A3FA72702CAC (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisString_t_mF71821FDD90A1775F3D5C7801386E2FC1E238ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisString_t_mF71821FDD90A1775F3D5C7801386E2FC1E238ED9(((int32_t)-449041613), U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisString_t_mF71821FDD90A1775F3D5C7801386E2FC1E238ED9_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetAdvertiser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetAdvertiser_m88DC3EB47B937743B6694F18D01E97879EC53ABD (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0(((int32_t)-189589380), U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetPrice_mE2F14D0C6F44766CAEC9E52ABD581F2FF6AC2A2E (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0(((int32_t)-2119222139), U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::GetStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_GetStore_m8928D674EECA0B8F3BD2D4FE3A0D2241CE25A141 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D(((int32_t)1689029112), U3CModuleU3E_U200CU206EU206FU206DU202DU206EU206DU206BU202CU202CU206BU202DU202BU206AU200FU206BU202CU202BU200BU202EU206BU206FU206CU202DU206EU202DU202AU200BU200CU200BU200DU202EU200BU206EU200CU202EU206AU200CU202AU200CU202E_TisString_t_m747A9E6A778DAA9568227B9605FE0F9123FE552D_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// System.String GoogleMobileAds.Android.NativeAdClient::MediationAdapterClassName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeAdClient_MediationAdapterClassName_m1261DDCFD282B812DDC8AE2C585AB7F6DF560C33 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisString_t_mF71821FDD90A1775F3D5C7801386E2FC1E238ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisString_t_mF71821FDD90A1775F3D5C7801386E2FC1E238ED9(((int32_t)343221731), U3CModuleU3E_U202EU200CU206FU200FU200BU206AU206BU206AU200FU206AU206CU200EU206EU200EU202EU206EU206FU200DU206BU202CU206BU202CU202CU200FU202BU200BU202EU202CU206CU206AU200BU202BU200EU202DU202EU200FU202EU200EU200FU202AU202E_TisString_t_mF71821FDD90A1775F3D5C7801386E2FC1E238ED9_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_3;
	}
}
// GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Android.NativeAdClient::GetResponseInfoClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeAdClient_GetResponseInfoClient_m11DF476D9D021A1AA18FDFB920118AFC4D5B132D (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___nativeAd_5;
		ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E* L_1 = (ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E*)il2cpp_codegen_object_new(ResponseInfoClient_t81DAE53778BC5F4EFC1FB844B50CAD3DC2EE8C7E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ResponseInfoClient__ctor_mB3010C36F05A40A73A03FC081FBBD7A15C528EDC(L_1, 1, L_0, NULL);
		return L_1;
	}
}
// System.Void GoogleMobileAds.Android.NativeAdClient::onPaidEvent(System.Int32,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdClient_onPaidEvent_m7F71EC002964B977E9CC6B0BAC9BAC76CFBC3B50 (NativeAdClient_tE20913FF7DD1102A5905121114F850436F32AF08* __this, int32_t ___0_precision, int64_t ___1_valueInMicros, String_t* ___2_currencyCode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* V_0 = NULL;
	AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* V_1 = NULL;
	AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* V_2 = NULL;
	AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* V_3 = NULL;
	uint32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_4;
		if (!L_0)
		{
			goto IL_0119;
		}
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)21117958);
	}

IL_0010:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)544764211)));
		V_4 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_00ea;
			}
			case 1:
			{
				goto IL_0082;
			}
			case 2:
			{
				goto IL_00ff;
			}
			case 3:
			{
				goto IL_000b;
			}
			case 4:
			{
				goto IL_009b;
			}
			case 5:
			{
				goto IL_006b;
			}
			case 6:
			{
				goto IL_00bb;
			}
			case 7:
			{
				goto IL_0119;
			}
			case 8:
			{
				goto IL_004e;
			}
			case 9:
			{
				goto IL_00d0;
			}
		}
	}
	{
		goto IL_0119;
	}

IL_004e:
	{
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D*)il2cpp_codegen_object_new(AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdValueEventArgs__ctor_m2786F476E77E35470958434534FA8976541ED4E0(L_2, NULL);
		V_3 = L_2;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_3 = V_3;
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_4 = V_0;
		NullCheck(L_3);
		AdValueEventArgs_set_AdValue_mFDB2656F4BDBCC3CE719341385666747D72F357E_inline(L_3, L_4, NULL);
		uint32_t L_5 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)166201252)))^((int32_t)1932047189)));
		goto IL_0010;
	}

IL_006b:
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_6 = V_1;
		int32_t L_7 = ___0_precision;
		NullCheck(L_6);
		AdValue_set_Precision_m488B0F9CAEBACDD5013E094660C3DD58B362FD03_inline(L_6, L_7, NULL);
		uint32_t L_8 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)1198188811)))^((int32_t)-1499415672)));
		goto IL_0010;
	}

IL_0082:
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_9 = (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD*)il2cpp_codegen_object_new(AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		AdValue__ctor_mC8469F36ABE33454B249EBBA51574A1CFAC01010(L_9, NULL);
		V_1 = L_9;
		uint32_t L_10 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)2119717417)))^((int32_t)-62686173)));
		goto IL_0010;
	}

IL_009b:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_11 = __this->___OnPaidEvent_4;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_12 = V_2;
		NullCheck(L_11);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_11, __this, L_12, NULL);
		uint32_t L_13 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-55617407)))^((int32_t)-1673275184)));
		goto IL_0010;
	}

IL_00bb:
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_14 = V_1;
		V_0 = L_14;
		uint32_t L_15 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)72601172)))^((int32_t)358016137)));
		goto IL_0010;
	}

IL_00d0:
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_16 = V_1;
		String_t* L_17 = ___2_currencyCode;
		NullCheck(L_16);
		AdValue_set_CurrencyCode_mA493466D946C6484F0F20604EF0B013EA0571F71_inline(L_16, L_17, NULL);
		uint32_t L_18 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)408794685)))^((int32_t)230711648)));
		goto IL_0010;
	}

IL_00ea:
	{
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_19 = V_3;
		V_2 = L_19;
		uint32_t L_20 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)-180023561)))^((int32_t)-239744477)));
		goto IL_0010;
	}

IL_00ff:
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_21 = V_1;
		int64_t L_22 = ___1_valueInMicros;
		NullCheck(L_21);
		AdValue_set_Value_m7DF76A9D4ED62FE1F5FDBA6FEBBACD4E92115BE9_inline(L_21, L_22, NULL);
		uint32_t L_23 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_23, ((int32_t)-586162455)))^((int32_t)1515917164)));
		goto IL_0010;
	}

IL_0119:
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
// System.Void GoogleMobileAds.Android.NativeAdInteractionHandlerClient::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdInteractionHandlerClient__ctor_mBBCE221D0C939EAF772625836F672623C4115DFE (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)49351155);
	}

IL_000b:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)1889833246)));
		V_2 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0091;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_005c;
			}
			case 3:
			{
				goto IL_0006;
			}
		}
	}
	{
		goto IL_0091;
	}

IL_002c:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F(((int32_t)-175857719), U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, L_1, NULL);
		V_0 = L_2;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
		String_t* L_4;
		L_4 = U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255(((int32_t)-1898311108), U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, L_4, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_5;
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-2004981600)))^((int32_t)582307624)));
		goto IL_000b;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255(((int32_t)1509212127), U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = ___0_p;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_13, L_7, L_11, NULL);
		__this->____jugAX0smyU2FXQZEdYZ1tyBwSo5_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____jugAX0smyU2FXQZEdYZ1tyBwSo5_1), (void*)L_13);
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)671217809)))^((int32_t)-1697910060)));
		goto IL_000b;
	}

IL_0091:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15;
		L_15 = NativeAdInteractionHandlerClient__UcUTV1J7xVwBRXi5kc1jYnxSp7p_mE61DAAF1EBB6D8CA6046E3FAEA1732332BE775E2(__this, NULL);
		__this->___assetIDMappings_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___assetIDMappings_0), (void*)L_15);
		return;
	}
}
// System.Boolean GoogleMobileAds.Android.NativeAdInteractionHandlerClient::RecordImpression(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeAdInteractionHandlerClient_RecordImpression_mD42E2EB34B73D6C0ACCCB490D8C697D5DEED2385 (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_signal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____jugAX0smyU2FXQZEdYZ1tyBwSo5_1;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0(((int32_t)2063055483), U3CModuleU3E_U202DU206AU202AU206CU202CU202BU206FU202DU200EU206CU200CU200DU206DU200DU206FU200FU206AU200EU202AU200BU206DU202CU206DU200EU206AU202DU202AU202AU200CU206CU202AU206CU200DU202BU206BU206FU202AU200EU200BU202AU202E_TisString_t_mEA77FB4843B682CAE93226880FB4B220A7D982E0_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___0_signal;
		String_t* L_5;
		L_5 = Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		bool L_6;
		L_6 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, L_1, L_3, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void GoogleMobileAds.Android.NativeAdInteractionHandlerClient::PerformClick(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdInteractionHandlerClient_PerformClick_mC4E832372C19CD28465B8E2B6BFC8B387DD4BB03 (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_signal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____jugAX0smyU2FXQZEdYZ1tyBwSo5_1;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F(((int32_t)2014397359), U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___0_signal;
		String_t* L_5;
		L_5 = Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Android.NativeAdInteractionHandlerClient::ReportTouchEvent(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAdInteractionHandlerClient_ReportTouchEvent_m57DFD007DBF560986578EC4E79F663DBE0F4C1FA (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_signal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____jugAX0smyU2FXQZEdYZ1tyBwSo5_1;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255(((int32_t)1636122589), U3CModuleU3E_U200EU200DU206EU206AU200BU200EU202BU200BU206BU206FU206DU202BU202DU206FU206AU200FU202CU202DU206DU200FU200EU206DU206CU200DU206CU202CU200FU200FU202AU206FU202BU200EU202DU202BU206FU206DU206FU202DU202DU202E_TisString_t_m87330AD594868C9AE80CE77F615A25E9664AB255_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = ___0_signal;
		String_t* L_5;
		L_5 = Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50(L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Android.NativeAdInteractionHandlerClient::_UcUTV1J7xVwBRXi5kc1jYnxSp7p()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* NativeAdInteractionHandlerClient__UcUTV1J7xVwBRXi5kc1jYnxSp7p_mE61DAAF1EBB6D8CA6046E3FAEA1732332BE775E2 (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____jugAX0smyU2FXQZEdYZ1tyBwSo5_1;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_t39502CCA19ACFCFF9E9935BDE5EA79DC9A5E300C_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F(((int32_t)1489056840), U3CModuleU3E_U200CU206CU206AU200DU200BU200EU206AU200CU200DU200DU206AU200EU206BU200EU202CU206CU200EU206EU206DU206DU206FU202DU200CU206EU202AU200EU202BU206BU206FU200DU206CU202AU206EU202AU206DU206CU202BU200DU206BU200FU202E_TisString_t_m306F0D8CCFFDBFCF64A672C37FA4B0F5C8F7205F_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, L_1, L_2, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_0 = L_3;
		String_t* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5;
		L_5 = NativeUtils_CastAssetIDMappings_m7E3C8BCCFD5A11C1B344838C26028076B70D52C2(L_4, NULL);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Android.NativeAdInteractionHandlerClient::GetAssetIDMappings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* NativeAdInteractionHandlerClient_GetAssetIDMappings_m5192544E845B3DA15D0F7D2CF1C53248F25362E7 (NativeAdInteractionHandlerClient_tFCFA0AB2F818D037F3E084ADDDE73FC296D49772* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___assetIDMappings_0;
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
// System.Void _7T4kB4QON8Mjurd3oP0KXexLP8b._o2NBycuAD3A4LGfSBjHPkip6N4d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _o2NBycuAD3A4LGfSBjHPkip6N4d__ctor_mEAC0010F6E653FB864D8B356E606A9D66DBA51CC (_o2NBycuAD3A4LGfSBjHPkip6N4d_tF8E4A353D556DDDE1CD5FA0F8A57DEA6798EB8B6* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdLoaderClientArgs_get_AdUnitId_m9CB2CEDA6950AE81735C721A64024FEE084C1095_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAdUnitIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* AdLoaderClientArgs_get_AdTypes_m3286F08DA89AEF0941C3580385F858CE95635BD4_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) 
{
	{
		HashSet_1_t7437D68FCF59CBDA966A58E33D67ED831BEE32A4* L_0 = __this->___U3CAdTypesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AdLoaderClientArgs_get_NumberOfAdsToLoad_m16518458445D87FF740EE67FB2117837684591E0_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNumberOfAdsToLoadU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* AdLoaderClientArgs_get_FormatIds_m6731C0FF425BE0CC73D07B3C07A81D5A5C33CF4A_inline (AdLoaderClientArgs_tF1FBCBFAF6704A3BA19BACB4662A36F384B2C3E9* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* L_0 = __this->___U3CFormatIdsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NativeUtils_get_Version_mB8F63B5B552D940B0351BE63FA0ED6E4B93B04D2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_StaticFields*)il2cpp_codegen_static_fields_for(NativeUtils_t67F065557ED31F6FFFCD3B51DF26BCCF070C262E_il2cpp_TypeInfo_var))->___U3CVersionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeClientEventArgs_set_nativeAdClient_mCEDBB0459BE0B3E308DA85F15E98E31D740B97FA_inline (NativeClientEventArgs_tF38996FD66FCC80D9643A81986461E55CDE87809* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CnativeAdClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnativeAdClientU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_assetName_m0FFF03346E29AB4599BEB94FD9E2CB5BD6D163C4_inline (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CassetNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassetNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_nativeAdClient_m7C4578E96709771F4B4E26B0EF01FD72C1CF0E75_inline (CustomNativeClientEventArgs_t97896D6093A5FF9FF777ABA163F25F85CA5C3734* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CnativeAdClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnativeAdClientU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadAdErrorClientEventArgs_set_LoadAdErrorClient_m6E865CB1B347CEF0B75F55CE43EE3FDBF8353353_inline (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CLoadAdErrorClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoadAdErrorClientU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValueEventArgs_set_AdValue_mFDB2656F4BDBCC3CE719341385666747D72F357E_inline (AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* __this, AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___0_value, const RuntimeMethod* method) 
{
	{
		AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* L_0 = ___0_value;
		__this->___U3CAdValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_Precision_m488B0F9CAEBACDD5013E094660C3DD58B362FD03_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CPrecisionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_CurrencyCode_mA493466D946C6484F0F20604EF0B013EA0571F71_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CCurrencyCodeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrencyCodeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdValue_set_Value_m7DF76A9D4ED62FE1F5FDBA6FEBBACD4E92115BE9_inline (AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mB8EBD394BCA1574F4FE9C1C05A4F246099C4DA48_gshared_inline (EventHandler_1_t5629179164803EFAE40F6023484C1674B4493577* __this, RuntimeObject* ___0_sender, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
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
