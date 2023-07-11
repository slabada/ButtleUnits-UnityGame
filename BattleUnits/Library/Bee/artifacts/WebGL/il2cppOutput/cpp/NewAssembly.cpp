#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Boolean>
struct Func_2_t5976237A7992D9268FA6781222CDDD5B9DEBF3E1;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Boolean>
struct Func_2_tCD6D9E8073BC970E3890876E1B8CBA6AE4A759D4;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Boolean>
struct Func_2_tD0B684F5B00E893C308BA22EA282D34F6F26CBAC;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>
struct Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerable_1_tD63C4F32AE153E624761B412328D266FA3CE64E9;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerable_1_t8834432ACD63B33A3DF05BA557CCCF899ADBB33A;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerable_1_tC553A7669449415558239639A6767294F3A7263C;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerator`1<UnityEngine.WaitForSeconds>
struct IEnumerator_1_tB2BFB4133F91ED862CC4E6AF324A91AC36BAE45E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t95FD5642BC2C9C7777B7A737F21A78E0AFDD8AA0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// SerializableDictionary`2<System.String,System.Boolean>
struct SerializableDictionary_2_tBA52F9DD61DDC46D69CD1E0FD059609A1DE8C6D4;
// SerializableDictionary`2<System.String,System.Int32>
struct SerializableDictionary_2_t472BFB623F963AA5096AF9DA09A0BE8EECE8F34B;
// SerializableDictionary`2<System.String,System.Single>
struct SerializableDictionary_2_t3F16BB684F55D4EA6DDD4ED74F0ABF99CA7749EB;
// SerializableDictionary`2<System.String,System.String>
struct SerializableDictionary_2_tCF7E29416C920324352EB631CE711D14E8EAD8DB;
// SerializableDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct SerializableDictionary_2_tB773204B6F016F08B6C97156A84C2235A6DA4907;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t067B6565DAB51831954BD36DF5F65A806EDBEF99;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_tA250E7D856E5178DDAACCBBCBBA2BC8EBC5A2EE1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Boolean>[]
struct EntryU5BU5D_t3A6696E01E2E8EE835C72A4B0C9E75120C7A122D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Single>[]
struct EntryU5BU5D_t7ED48D7F5F895684C377F90C33DDD1E0CCACDE61;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// YandexSDK.Settings
struct Settings_tA5E3F3FA570A24528DEE30A330B73DFFBC36C9BA;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// YandexSDK.YaSDK
struct YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150;
// YandexPlayerPrefsManager
struct YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290;
// YandexSDK.YaSDK/<CountTillNextInterstitial>d__57
struct U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220;
// YandexSDK.YaSDK/onGetPlayerDataHandler
struct onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467;
// YandexSDK.YaSDK/onPlayerAuthenticatedHandler
struct onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF;
// YandexPlayerPrefs/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3882088536482E6E439D93FCAAF4863FECDC73B4;
// YandexPlayerPrefs/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t093602D9C9F502B69DF9C3C40E8FF55085E9021C;
// YandexPlayerPrefs/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t67211C19DAA7B35F1A0F89B5BFAA512F63841026;
// YandexPlayerPrefs/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t8891F481E484715E7D06365220AA783D9BAB29FB;
// YandexPlayerPrefsManager/Save
struct Save_t1D649698B30E14376AADDA69592937B29C9D1996;
// YandexPlayerPrefsManager/StringBoolDictionary
struct StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9;
// YandexPlayerPrefsManager/StringFloatDictionary
struct StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324;
// YandexPlayerPrefsManager/StringIntDictionary
struct StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5;
// YandexPlayerPrefsManager/StringStringDictionary
struct StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5976237A7992D9268FA6781222CDDD5B9DEBF3E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCD6D9E8073BC970E3890876E1B8CBA6AE4A759D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD0B684F5B00E893C308BA22EA282D34F6F26CBAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Save_t1D649698B30E14376AADDA69592937B29C9D1996_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t3882088536482E6E439D93FCAAF4863FECDC73B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t093602D9C9F502B69DF9C3C40E8FF55085E9021C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t67211C19DAA7B35F1A0F89B5BFAA512F63841026_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t8891F481E484715E7D06365220AA783D9BAB29FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
IL2CPP_EXTERN_C String_t* _stringLiteralA4FDB95127E13C5A6EE35E465C184E86F9C46BB2;
IL2CPP_EXTERN_C String_t* _stringLiteralE2F42C604FCA8A3191D4293D98DB923DDA4D9DFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE60E55FFA39342CB1DB630CDA80C3E018BCD5145;
IL2CPP_EXTERN_C String_t* _stringLiteralED7D39EDF70E08FE57B2522D102BF72B9E5D5331;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1A27BC9CF50D35530441CEA168D31238D61AD3DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0300F4FCE9728AAD7E821680B932DFAEBDA0D792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m458C89B39D1B27C85ECD461431511CB6E76FE562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF6B9323B3D7DCD5B236DAB212C1CFDD805BB563D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisKeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078_m302F5F64B1C21A28DB3F9E33A3238397147F9630_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m72BEF033ECEC33678AD7E4C1F428DF5321B84FF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisKeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C_mCC30B0AD7C074F4B02EA97F5CD7065B298EA8FF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisKeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042_m7EBA3BBB82485819CFCF34434A8A35C486DE670D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisYandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_mC418C3430D3A9EA47FB53D884205371034A5A030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisSave_t1D649698B30E14376AADDA69592937B29C9D1996_mD3736ADA339307AC380BEF1B5C5E0C8C6313A4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC9FB52D78F362AE8CD0466E65D0CAFB23CD1C25D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionary_2__ctor_m2898A4C84D070D940A235BA8146CAA6B44ABB497_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionary_2__ctor_mA6E070954E1550E214C8456D87919C1327C664E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionary_2__ctor_mD2E5D64EB4B23466BF11E69018C8D1FEB7063ABB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableDictionary_2__ctor_mDB518BFF2C27B1548DB66F2E78533895766C52D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCountTillNextInterstitialU3Ed__57_System_Collections_IEnumerator_Reset_mE66ED4DF697C4F68C6C2DCBB4E7BF60F42BB6731_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetIntU3Eb__0_m32A1403BBFAF41AEA0FD40543667D255C018B5B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CGetFloatU3Eb__0_m7AC59B6BD0C66E2E96703D70A87C26D5A6C846B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CGetStringU3Eb__0_m54AFE832443CD235A19137900502925D8B481363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CGetBoolU3Eb__0_m81DF6CB88ADB99CBF50026BC3FEB69D11954B1F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YaSDK_SetSave_TisSave_t1D649698B30E14376AADDA69592937B29C9D1996_m8F5FB3F945FD57C45999D8200BEC01492FD60DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YandexPlayerPrefsManager_GetSave_m5FCEAE1E0A4F5305F9BDBB6C3DBD9D714C090D44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YandexPlayerPrefsManager_OnGetSave_m90FDC0C6F7A56EE7D239F1BFE827BB3437121B43_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0C112E5CAA92B84246F32571AEE3CF07A67970A3 
{
};

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

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
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
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7ED48D7F5F895684C377F90C33DDD1E0CCACDE61* ____entries_1;
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
	KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA250E7D856E5178DDAACCBBCBBA2BC8EBC5A2EE1* ____values_8;
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

// SerializableDictionary
struct SerializableDictionary_tC451040A9DF71193030078F9ABAC82831C5038A6  : public RuntimeObject
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

// YandexPlayerPrefs
struct YandexPlayerPrefs_t8963EFC69B24CE0C6C450A0188F293E3CAED3EE7  : public RuntimeObject
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

// YandexSDK.YaSDK/<CountTillNextInterstitial>d__57
struct U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220  : public RuntimeObject
{
	// System.Int32 YandexSDK.YaSDK/<CountTillNextInterstitial>d__57::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.WaitForSeconds YandexSDK.YaSDK/<CountTillNextInterstitial>d__57::<>2__current
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___U3CU3E2__current_1;
	// YandexSDK.YaSDK YandexSDK.YaSDK/<CountTillNextInterstitial>d__57::<>4__this
	YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* ___U3CU3E4__this_2;
};

// YandexPlayerPrefs/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3882088536482E6E439D93FCAAF4863FECDC73B4  : public RuntimeObject
{
	// System.String YandexPlayerPrefs/<>c__DisplayClass2_0::key
	String_t* ___key_0;
};

// YandexPlayerPrefs/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t093602D9C9F502B69DF9C3C40E8FF55085E9021C  : public RuntimeObject
{
	// System.String YandexPlayerPrefs/<>c__DisplayClass3_0::key
	String_t* ___key_0;
};

// YandexPlayerPrefs/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t67211C19DAA7B35F1A0F89B5BFAA512F63841026  : public RuntimeObject
{
	// System.String YandexPlayerPrefs/<>c__DisplayClass6_0::key
	String_t* ___key_0;
};

// YandexPlayerPrefs/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t8891F481E484715E7D06365220AA783D9BAB29FB  : public RuntimeObject
{
	// System.String YandexPlayerPrefs/<>c__DisplayClass8_0::key
	String_t* ___key_0;
};

// YandexPlayerPrefsManager/Save
struct Save_t1D649698B30E14376AADDA69592937B29C9D1996  : public RuntimeObject
{
	// YandexPlayerPrefsManager/StringIntDictionary YandexPlayerPrefsManager/Save::intPrefs
	StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5* ___intPrefs_0;
	// YandexPlayerPrefsManager/StringFloatDictionary YandexPlayerPrefsManager/Save::floatPrefs
	StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324* ___floatPrefs_1;
	// YandexPlayerPrefsManager/StringStringDictionary YandexPlayerPrefsManager/Save::stringPrefs
	StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292* ___stringPrefs_2;
	// YandexPlayerPrefsManager/StringBoolDictionary YandexPlayerPrefsManager/Save::boolPrefs
	StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9* ___boolPrefs_3;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
struct KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
struct KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>
struct KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	float ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

// SerializableDictionaryBase`3<System.String,System.Boolean,System.Boolean>
struct SerializableDictionaryBase_3_t78101F5B30D41B163A783378132A6FC6027FB2F8  : public Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C
{
	// TKey[] SerializableDictionaryBase`3::m_keys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_keys_14;
	// TValueStorage[] SerializableDictionaryBase`3::m_values
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___m_values_15;
};

// SerializableDictionaryBase`3<System.String,System.Int32,System.Int32>
struct SerializableDictionaryBase_3_t2FA38426D66B6568BE4AB014CDA9855494CB8A37  : public Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588
{
	// TKey[] SerializableDictionaryBase`3::m_keys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_keys_14;
	// TValueStorage[] SerializableDictionaryBase`3::m_values
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_values_15;
};

// SerializableDictionaryBase`3<System.String,System.Single,System.Single>
struct SerializableDictionaryBase_3_t16BB143C4327E114FDD908262B99174EFD015E87  : public Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9
{
	// TKey[] SerializableDictionaryBase`3::m_keys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_keys_14;
	// TValueStorage[] SerializableDictionaryBase`3::m_values
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_values_15;
};

// SerializableDictionaryBase`3<System.String,System.String,System.String>
struct SerializableDictionaryBase_3_t60A97DA2B6A6A427ED481E71D3CCE928E8A61961  : public Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83
{
	// TKey[] SerializableDictionaryBase`3::m_keys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_keys_14;
	// TValueStorage[] SerializableDictionaryBase`3::m_values
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_values_15;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// SerializableDictionary`2<System.String,System.Boolean>
struct SerializableDictionary_2_tBA52F9DD61DDC46D69CD1E0FD059609A1DE8C6D4  : public SerializableDictionaryBase_3_t78101F5B30D41B163A783378132A6FC6027FB2F8
{
};

// SerializableDictionary`2<System.String,System.Int32>
struct SerializableDictionary_2_t472BFB623F963AA5096AF9DA09A0BE8EECE8F34B  : public SerializableDictionaryBase_3_t2FA38426D66B6568BE4AB014CDA9855494CB8A37
{
};

// SerializableDictionary`2<System.String,System.Single>
struct SerializableDictionary_2_t3F16BB684F55D4EA6DDD4ED74F0ABF99CA7749EB  : public SerializableDictionaryBase_3_t16BB143C4327E114FDD908262B99174EFD015E87
{
};

// SerializableDictionary`2<System.String,System.String>
struct SerializableDictionary_2_tCF7E29416C920324352EB631CE711D14E8EAD8DB  : public SerializableDictionaryBase_3_t60A97DA2B6A6A427ED481E71D3CCE928E8A61961
{
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
	intptr_t ___method_ptr_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// YandexPlayerPrefsManager/StringBoolDictionary
struct StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9  : public SerializableDictionary_2_tBA52F9DD61DDC46D69CD1E0FD059609A1DE8C6D4
{
};

// YandexPlayerPrefsManager/StringFloatDictionary
struct StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324  : public SerializableDictionary_2_t3F16BB684F55D4EA6DDD4ED74F0ABF99CA7749EB
{
};

// YandexPlayerPrefsManager/StringIntDictionary
struct StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5  : public SerializableDictionary_2_t472BFB623F963AA5096AF9DA09A0BE8EECE8F34B
{
};

// YandexPlayerPrefsManager/StringStringDictionary
struct StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292  : public SerializableDictionary_2_tCF7E29416C920324352EB631CE711D14E8EAD8DB
{
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Boolean>
struct Func_2_t5976237A7992D9268FA6781222CDDD5B9DEBF3E1  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Boolean>
struct Func_2_tCD6D9E8073BC970E3890876E1B8CBA6AE4A759D4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Boolean>
struct Func_2_tD0B684F5B00E893C308BA22EA282D34F6F26CBAC  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>
struct Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// YandexSDK.Settings
struct Settings_tA5E3F3FA570A24528DEE30A330B73DFFBC36C9BA  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String YandexSDK.Settings::buildPath
	String_t* ___buildPath_4;
	// System.String YandexSDK.Settings::projectName
	String_t* ___projectName_5;
};

// YandexSDK.YaSDK/onGetPlayerDataHandler
struct onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467  : public MulticastDelegate_t
{
};

// YandexSDK.YaSDK/onPlayerAuthenticatedHandler
struct onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// YandexSDK.YaSDK
struct YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action YandexSDK.YaSDK::onInterstitialShown
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onInterstitialShown_7;
	// System.Action`1<System.String> YandexSDK.YaSDK::onInterstitialFailed
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onInterstitialFailed_8;
	// System.Action`1<System.Int32> YandexSDK.YaSDK::onRewardedAdOpened
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___onRewardedAdOpened_9;
	// System.Boolean YandexSDK.YaSDK::isInterstitialReady
	bool ___isInterstitialReady_13;
	// YandexSDK.Platform YandexSDK.YaSDK::currentPlatform
	int32_t ___currentPlatform_14;
	// System.Boolean YandexSDK.YaSDK::canReview
	bool ___canReview_15;
	// System.Int32 YandexSDK.YaSDK::rewardedAdPlacementAsInt
	int32_t ___rewardedAdPlacementAsInt_16;
	// System.String YandexSDK.YaSDK::rewardedAdPlacement
	String_t* ___rewardedAdPlacement_17;
	// System.Int32 YandexSDK.YaSDK::secondTillNextInterstitial
	int32_t ___secondTillNextInterstitial_18;
	// System.Single YandexSDK.YaSDK::currentSecondsTillNextInterstitial
	float ___currentSecondsTillNextInterstitial_19;
};

// YandexPlayerPrefsManager
struct YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// YandexPlayerPrefsManager/Save YandexPlayerPrefsManager::currentSave
	Save_t1D649698B30E14376AADDA69592937B29C9D1996* ___currentSave_5;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>

// System.Collections.Generic.Dictionary`2<System.String,System.Single>

// System.Collections.Generic.Dictionary`2<System.String,System.Single>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// SerializableDictionary

// SerializableDictionary

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// YandexPlayerPrefs

// YandexPlayerPrefs

// YandexSDK.YaSDK/<CountTillNextInterstitial>d__57

// YandexSDK.YaSDK/<CountTillNextInterstitial>d__57

// YandexPlayerPrefs/<>c__DisplayClass2_0

// YandexPlayerPrefs/<>c__DisplayClass2_0

// YandexPlayerPrefs/<>c__DisplayClass3_0

// YandexPlayerPrefs/<>c__DisplayClass3_0

// YandexPlayerPrefs/<>c__DisplayClass6_0

// YandexPlayerPrefs/<>c__DisplayClass6_0

// YandexPlayerPrefs/<>c__DisplayClass8_0

// YandexPlayerPrefs/<>c__DisplayClass8_0

// YandexPlayerPrefsManager/Save

// YandexPlayerPrefsManager/Save

// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// SerializableDictionary`2<System.String,System.Boolean>

// SerializableDictionary`2<System.String,System.Boolean>

// SerializableDictionary`2<System.String,System.Int32>

// SerializableDictionary`2<System.String,System.Int32>

// SerializableDictionary`2<System.String,System.Single>

// SerializableDictionary`2<System.String,System.Single>

// SerializableDictionary`2<System.String,System.String>

// SerializableDictionary`2<System.String,System.String>

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// YandexPlayerPrefsManager/StringBoolDictionary

// YandexPlayerPrefsManager/StringBoolDictionary

// YandexPlayerPrefsManager/StringFloatDictionary

// YandexPlayerPrefsManager/StringFloatDictionary

// YandexPlayerPrefsManager/StringIntDictionary

// YandexPlayerPrefsManager/StringIntDictionary

// YandexPlayerPrefsManager/StringStringDictionary

// YandexPlayerPrefsManager/StringStringDictionary

// System.Action`1<System.Int32>

// System.Action`1<System.Int32>

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// System.NotSupportedException

// System.NotSupportedException

// YandexSDK.Settings

// YandexSDK.Settings

// YandexSDK.YaSDK/onGetPlayerDataHandler

// YandexSDK.YaSDK/onGetPlayerDataHandler

// YandexSDK.YaSDK/onPlayerAuthenticatedHandler

// YandexSDK.YaSDK/onPlayerAuthenticatedHandler

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// YandexSDK.YaSDK
struct YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields
{
	// YandexSDK.YaSDK YandexSDK.YaSDK::instance
	YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* ___instance_4;
	// YandexSDK.YaSDK/onPlayerAuthenticatedHandler YandexSDK.YaSDK::onPlayerAuthenticated
	onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* ___onPlayerAuthenticated_5;
	// YandexSDK.YaSDK/onGetPlayerDataHandler YandexSDK.YaSDK::onGetPlayerData
	onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* ___onGetPlayerData_6;
	// System.Action`1<System.String> YandexSDK.YaSDK::onRewardedAdReward
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onRewardedAdReward_10;
	// System.Action`1<System.Int32> YandexSDK.YaSDK::onRewardedAdClosed
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___onRewardedAdClosed_11;
	// System.Action`1<System.Int32> YandexSDK.YaSDK::onRewardedAdError
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___onRewardedAdError_12;
};

// YandexSDK.YaSDK

// YandexPlayerPrefsManager
struct YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields
{
	// YandexPlayerPrefsManager YandexPlayerPrefsManager::current
	YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* ___current_4;
};

// YandexPlayerPrefsManager
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerable_FirstOrDefault_TisIl2CppFullySharedGenericAny_m453402C488FDE63E630C415A9C1C74901B7964F9_gshared (RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_FromJson_TisIl2CppFullySharedGenericAny_mCA9E8A2C7BF60F5C6F2FE4812F33F4C06E5B44D0_gshared (String_t* ___0_json, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK::SetSave<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_SetSave_TisIl2CppFullySharedGenericAny_mD39EE51F359CD327F6358A67D3EB3F9086FCAE3D_gshared (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_saveStateClass, const RuntimeMethod* method) ;
// System.Void SerializableDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableDictionary_2__ctor_mD404FAADEB6A5C9882345AE422B726ACDF3EE65F_gshared (SerializableDictionary_2_tB773204B6F016F08B6C97156A84C2235A6DA4907* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;

// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<YandexPlayerPrefsManager>()
inline YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* GameObject_AddComponent_TisYandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_mC418C3430D3A9EA47FB53D884205371034A5A030 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)&___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)&___1_value, method);
}
// System.Void YandexPlayerPrefsManager::SetSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexPlayerPrefsManager_SetSave_m343D83669C3D17990C1BCE01C59F130F790FFC39 (YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* __this, const RuntimeMethod* method) ;
// System.Void YandexPlayerPrefs/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m42519E2D43C315D717C4B1A26B4F7922C15B1693 (U3CU3Ec__DisplayClass2_0_t3882088536482E6E439D93FCAAF4863FECDC73B4* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5E44DDB1D1F0D970596D4CEB96CD6F75204FFE9D (Func_2_tCD6D9E8073BC970E3890876E1B8CBA6AE4A759D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_object, ___1_method, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078 Enumerable_FirstOrDefault_TisKeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078_m302F5F64B1C21A28DB3F9E33A3238397147F9630 (RuntimeObject* ___0_source, Func_2_tCD6D9E8073BC970E3890876E1B8CBA6AE4A759D4* ___1_predicate, const RuntimeMethod* method)
{
	KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078 il2cppRetVal;
	((  void (*) (RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisIl2CppFullySharedGenericAny_m453402C488FDE63E630C415A9C1C74901B7964F9_gshared)((RuntimeObject*)___0_source, (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)___1_predicate, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_inline (KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void YandexPlayerPrefs/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mF5897E8EEDA7AF6E614B5189AACCB21CA3219836 (U3CU3Ec__DisplayClass3_0_t093602D9C9F502B69DF9C3C40E8FF55085E9021C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1A27BC9CF50D35530441CEA168D31238D61AD3DF (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE7E5E1E62E546303B70844C3EA0BAAE1CB6FA718 (Func_2_tD0B684F5B00E893C308BA22EA282D34F6F26CBAC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_object, ___1_method, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 Enumerable_FirstOrDefault_TisKeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042_m7EBA3BBB82485819CFCF34434A8A35C486DE670D (RuntimeObject* ___0_source, Func_2_tD0B684F5B00E893C308BA22EA282D34F6F26CBAC* ___1_predicate, const RuntimeMethod* method)
{
	KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 il2cppRetVal;
	((  void (*) (RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisIl2CppFullySharedGenericAny_m453402C488FDE63E630C415A9C1C74901B7964F9_gshared)((RuntimeObject*)___0_source, (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)___1_predicate, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Single>::get_Value()
inline float KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_inline (KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042* __this, const RuntimeMethod* method)
{
	float il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::Add(TKey,TValue)
inline void Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, String_t* ___0_key, float ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)&___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, String_t* ___0_key, float ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)&___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void YandexPlayerPrefs/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m5FD7394955FAE5E204B7A92C69AEFEBB9ACFCEAE (U3CU3Ec__DisplayClass6_0_t67211C19DAA7B35F1A0F89B5BFAA512F63841026* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m612313685E65C8F88E36E0730D48C7BA57EB3D9A (Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_object, ___1_method, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerable_FirstOrDefault_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m72BEF033ECEC33678AD7E4C1F428DF5321B84FF3 (RuntimeObject* ___0_source, Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* ___1_predicate, const RuntimeMethod* method)
{
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A il2cppRetVal;
	((  void (*) (RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisIl2CppFullySharedGenericAny_m453402C488FDE63E630C415A9C1C74901B7964F9_gshared)((RuntimeObject*)___0_source, (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)___1_predicate, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6 (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
inline void Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292 (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, String_t* ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)&___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mF6B9323B3D7DCD5B236DAB212C1CFDD805BB563D (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, String_t* ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)&___1_value, method);
}
// System.Void YandexPlayerPrefs/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m7969ECC0EF5B2F43205A7C35E46563562F35AB75 (U3CU3Ec__DisplayClass8_0_t8891F481E484715E7D06365220AA783D9BAB29FB* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3E3B60749104379B7CA88A15B394B51B1FE7E591 (Func_2_t5976237A7992D9268FA6781222CDDD5B9DEBF3E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_object, ___1_method, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C Enumerable_FirstOrDefault_TisKeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C_mCC30B0AD7C074F4B02EA97F5CD7065B298EA8FF7 (RuntimeObject* ___0_source, Func_2_t5976237A7992D9268FA6781222CDDD5B9DEBF3E1* ___1_predicate, const RuntimeMethod* method)
{
	KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C il2cppRetVal;
	((  void (*) (RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisIl2CppFullySharedGenericAny_m453402C488FDE63E630C415A9C1C74901B7964F9_gshared)((RuntimeObject*)___0_source, (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)___1_predicate, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_inline (KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C* __this, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Single>::Remove(TKey)
inline bool Dictionary_2_Remove_m0300F4FCE9728AAD7E821680B932DFAEBDA0D792 (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
inline bool Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(TKey)
inline bool Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Remove(TKey)
inline bool Dictionary_2_Remove_m458C89B39D1B27C85ECD461431511CB6E76FE562 (Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC9FB52D78F362AE8CD0466E65D0CAFB23CD1C25D_inline (KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Single>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_inline (KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_inline (KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK::AuthenticateUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_AuthenticateUser_mD09DD59EC08900E547F27BAEE14FFFB1CCF622DB (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK/onPlayerAuthenticatedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onPlayerAuthenticatedHandler__ctor_m701A4ABC299EDCF2C86D3FD5FEBD507F3CF71501 (onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK::add_onPlayerAuthenticated(YandexSDK.YaSDK/onPlayerAuthenticatedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_add_onPlayerAuthenticated_m3557461EF5BE6EEE887F2E568C6A0AE6700677A5 (onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* ___0_value, const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK/onGetPlayerDataHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onGetPlayerDataHandler__ctor_m207931BB478D88A2E32F417BB6752B02695D9DEB (onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK::add_onGetPlayerData(YandexSDK.YaSDK/onGetPlayerDataHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_add_onGetPlayerData_m4C881919D0087668E7107D34C612AE5AE8D632FF (onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* ___0_value, const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK::remove_onPlayerAuthenticated(YandexSDK.YaSDK/onPlayerAuthenticatedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_remove_onPlayerAuthenticated_m616ECB6FB4A6341DFC353C71F7DD895F88D07E7C (onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* ___0_value, const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK::remove_onGetPlayerData(YandexSDK.YaSDK/onGetPlayerDataHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_remove_onGetPlayerData_mDAC6C8846E055E0D1800360462C79C6464417178 (onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* ___0_value, const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK::GetSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_GetSave_m8B556C0915838D320D9D7E043EF90714D83F60F9 (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, const RuntimeMethod* method) ;
// System.Void YandexPlayerPrefsManager/Save::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Save__ctor_mB9AF86B5C152341B33681646F8CE5890BCFF8DBA (Save_t1D649698B30E14376AADDA69592937B29C9D1996* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<YandexPlayerPrefsManager/Save>(System.String)
inline Save_t1D649698B30E14376AADDA69592937B29C9D1996* JsonUtility_FromJson_TisSave_t1D649698B30E14376AADDA69592937B29C9D1996_mD3736ADA339307AC380BEF1B5C5E0C8C6313A4DD (String_t* ___0_json, const RuntimeMethod* method)
{
	Save_t1D649698B30E14376AADDA69592937B29C9D1996* il2cppRetVal;
	((  void (*) (String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))JsonUtility_FromJson_TisIl2CppFullySharedGenericAny_mCA9E8A2C7BF60F5C6F2FE4812F33F4C06E5B44D0_gshared)(___0_json, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void YandexSDK.YaSDK::SetSave<YandexPlayerPrefsManager/Save>(T)
inline void YaSDK_SetSave_TisSave_t1D649698B30E14376AADDA69592937B29C9D1996_m8F5FB3F945FD57C45999D8200BEC01492FD60DD4 (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, Save_t1D649698B30E14376AADDA69592937B29C9D1996* ___0_saveStateClass, const RuntimeMethod* method)
{
	((  void (*) (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))YaSDK_SetSave_TisIl2CppFullySharedGenericAny_mD39EE51F359CD327F6358A67D3EB3F9086FCAE3D_gshared)((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150*)__this, (Il2CppFullySharedGenericAny)___0_saveStateClass, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void YandexPlayerPrefsManager/StringIntDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringIntDictionary__ctor_m7C7FE1F0D5566BEB99090C0D073173387FACA4F5 (StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5* __this, const RuntimeMethod* method) ;
// System.Void YandexPlayerPrefsManager/StringFloatDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringFloatDictionary__ctor_mA9C6050AE5E49015E0B3709B6C51CDF67D34C75F (StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324* __this, const RuntimeMethod* method) ;
// System.Void YandexPlayerPrefsManager/StringStringDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringDictionary__ctor_m23B4B06AD7CA24CBAF572FF0BBE1F6D67F671AC5 (StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292* __this, const RuntimeMethod* method) ;
// System.Void YandexPlayerPrefsManager/StringBoolDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBoolDictionary__ctor_m51E49C7684ACC947BED12B1AE68BA9FEE6EBF0CA (StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9* __this, const RuntimeMethod* method) ;
// System.Void SerializableDictionary`2<System.String,System.Int32>::.ctor()
inline void SerializableDictionary_2__ctor_mA6E070954E1550E214C8456D87919C1327C664E7 (SerializableDictionary_2_t472BFB623F963AA5096AF9DA09A0BE8EECE8F34B* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionary_2_tB773204B6F016F08B6C97156A84C2235A6DA4907*, const RuntimeMethod*))SerializableDictionary_2__ctor_mD404FAADEB6A5C9882345AE422B726ACDF3EE65F_gshared)((SerializableDictionary_2_tB773204B6F016F08B6C97156A84C2235A6DA4907*)__this, method);
}
// System.Void SerializableDictionary`2<System.String,System.Single>::.ctor()
inline void SerializableDictionary_2__ctor_mD2E5D64EB4B23466BF11E69018C8D1FEB7063ABB (SerializableDictionary_2_t3F16BB684F55D4EA6DDD4ED74F0ABF99CA7749EB* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionary_2_tB773204B6F016F08B6C97156A84C2235A6DA4907*, const RuntimeMethod*))SerializableDictionary_2__ctor_mD404FAADEB6A5C9882345AE422B726ACDF3EE65F_gshared)((SerializableDictionary_2_tB773204B6F016F08B6C97156A84C2235A6DA4907*)__this, method);
}
// System.Void SerializableDictionary`2<System.String,System.String>::.ctor()
inline void SerializableDictionary_2__ctor_m2898A4C84D070D940A235BA8146CAA6B44ABB497 (SerializableDictionary_2_tCF7E29416C920324352EB631CE711D14E8EAD8DB* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionary_2_tB773204B6F016F08B6C97156A84C2235A6DA4907*, const RuntimeMethod*))SerializableDictionary_2__ctor_mD404FAADEB6A5C9882345AE422B726ACDF3EE65F_gshared)((SerializableDictionary_2_tB773204B6F016F08B6C97156A84C2235A6DA4907*)__this, method);
}
// System.Void SerializableDictionary`2<System.String,System.Boolean>::.ctor()
inline void SerializableDictionary_2__ctor_mDB518BFF2C27B1548DB66F2E78533895766C52D8 (SerializableDictionary_2_tBA52F9DD61DDC46D69CD1E0FD059609A1DE8C6D4* __this, const RuntimeMethod* method)
{
	((  void (*) (SerializableDictionary_2_tB773204B6F016F08B6C97156A84C2235A6DA4907*, const RuntimeMethod*))SerializableDictionary_2__ctor_mD404FAADEB6A5C9882345AE422B726ACDF3EE65F_gshared)((SerializableDictionary_2_tB773204B6F016F08B6C97156A84C2235A6DA4907*)__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.WaitForSeconds> YandexSDK.YaSDK::CountTillNextInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YaSDK_CountTillNextInterstitial_m0D66D92BD8C725B56158E801D03B94CBE375057F (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK::Authenticate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_Authenticate_m27939593BBC9C0B46D460A44E328E042CD513F75 (const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK/onPlayerAuthenticatedHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void onPlayerAuthenticatedHandler_Invoke_m93DCEF8882B4EEEC32B98105A8511AC1CF8E1839_inline (onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* __this, const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK::GetPlayerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_GetPlayerData_mCBB25840669DEC73C7BA9BFE974B34455EF4C597 (const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK/onGetPlayerDataHandler::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A_inline (onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* __this, String_t* ___0_item, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioListener::set_pause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK::ShowFullscreenAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_ShowFullscreenAd_mB0498A125959445958887CF601EDA75F6039BEC9 (const RuntimeMethod* method) ;
// System.Int32 YandexSDK.YaSDK::ShowRewardedAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YaSDK_ShowRewardedAd_m96C8E7989982183E631268C5DAD02805FC1AD5BD (String_t* ___0_placement, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)&___0_obj, method);
}
// System.Void YandexSDK.YaSDK::OpenRateUs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_OpenRateUs_m2489D6F2F05F5B532E1D217EE1732CA2514A810A (const RuntimeMethod* method) ;
// System.Void YandexSDK.YaSDK/<CountTillNextInterstitial>d__57::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountTillNextInterstitialU3Ed__57__ctor_m86586930AA90AA4E08C2E3FF44186489DDD5767A (U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL Authenticate();
IL2CPP_EXTERN_C void DEFAULT_CALL SetPlayerData(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL GetPlayerData();
IL2CPP_EXTERN_C void DEFAULT_CALL ShowFullscreenAd();
IL2CPP_EXTERN_C void DEFAULT_CALL OpenRateUs();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ShowRewardedAd(char*);
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
// System.Void YandexPlayerPrefs::CreateYandexPlayerPrefsManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexPlayerPrefs_CreateYandexPlayerPrefsManager_m8FE61C23C6E5A3D0B38F6F0E6A1B1D32EFDB1FFE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisYandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_mC418C3430D3A9EA47FB53D884205371034A5A030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2F42C604FCA8A3191D4293D98DB923DDA4D9DFB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject yandexPlayerPrefsManager = new GameObject("YandexPlayerPrefsManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteralE2F42C604FCA8A3191D4293D98DB923DDA4D9DFB, NULL);
		// YandexPlayerPrefsManager.current = yandexPlayerPrefsManager.AddComponent<YandexPlayerPrefsManager>();
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_1;
		L_1 = GameObject_AddComponent_TisYandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_mC418C3430D3A9EA47FB53D884205371034A5A030(L_0, GameObject_AddComponent_TisYandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_mC418C3430D3A9EA47FB53D884205371034A5A030_RuntimeMethod_var);
		((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void YandexPlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexPlayerPrefs_SetInt_mF6D088B81E9633449E701493AE6A7E2B4F058F90 (String_t* ___0_key, int32_t ___1_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!YandexPlayerPrefsManager.current.currentSave.intPrefs.ContainsKey(key))
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_0 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_1 = L_0->___currentSave_5;
		StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5* L_2 = L_1->___intPrefs_0;
		String_t* L_3 = ___0_key;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E(L_2, L_3, Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// YandexPlayerPrefsManager.current.currentSave.intPrefs.Add(key, val);
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_5 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_6 = L_5->___currentSave_5;
		StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5* L_7 = L_6->___intPrefs_0;
		String_t* L_8 = ___0_key;
		int32_t L_9 = ___1_val;
		Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883(L_7, L_8, L_9, Dictionary_2_Add_m2FE98C9C3763E31D7CB55207ED3A46B33BF64883_RuntimeMethod_var);
		goto IL_0045;
	}

IL_002f:
	{
		// YandexPlayerPrefsManager.current.currentSave.intPrefs[key] = val;
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_10 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_11 = L_10->___currentSave_5;
		StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5* L_12 = L_11->___intPrefs_0;
		String_t* L_13 = ___0_key;
		int32_t L_14 = ___1_val;
		Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2(L_12, L_13, L_14, Dictionary_2_set_Item_m038480C0EC13713DBD89A53BE69FF0359501B4C2_RuntimeMethod_var);
	}

IL_0045:
	{
		// YandexPlayerPrefsManager.current.SetSave();
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_15 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		YandexPlayerPrefsManager_SetSave_m343D83669C3D17990C1BCE01C59F130F790FFC39(L_15, NULL);
		// }
		return;
	}
}
// System.Int32 YandexPlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YandexPlayerPrefs_GetInt_mEEA2924FBB70EB89A46AA031C822512A5B84E433 (String_t* ___0_key, int32_t ___1_defVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisKeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078_m302F5F64B1C21A28DB3F9E33A3238397147F9630_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD6D9E8073BC970E3890876E1B8CBA6AE4A759D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetIntU3Eb__0_m32A1403BBFAF41AEA0FD40543667D255C018B5B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t3882088536482E6E439D93FCAAF4863FECDC73B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t3882088536482E6E439D93FCAAF4863FECDC73B4* V_0 = NULL;
	KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CU3Ec__DisplayClass2_0_t3882088536482E6E439D93FCAAF4863FECDC73B4* L_0 = (U3CU3Ec__DisplayClass2_0_t3882088536482E6E439D93FCAAF4863FECDC73B4*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t3882088536482E6E439D93FCAAF4863FECDC73B4_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_m42519E2D43C315D717C4B1A26B4F7922C15B1693(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t3882088536482E6E439D93FCAAF4863FECDC73B4* L_1 = V_0;
		String_t* L_2 = ___0_key;
		L_1->___key_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___key_0), (void*)L_2);
		// if (YandexPlayerPrefsManager.current.currentSave.intPrefs.ContainsKey(key))
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_3 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_4 = L_3->___currentSave_5;
		StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5* L_5 = L_4->___intPrefs_0;
		U3CU3Ec__DisplayClass2_0_t3882088536482E6E439D93FCAAF4863FECDC73B4* L_6 = V_0;
		String_t* L_7 = L_6->___key_0;
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E(L_5, L_7, Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		// return YandexPlayerPrefsManager.current.currentSave.intPrefs.FirstOrDefault(x => x.Key == key).Value;
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_9 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_10 = L_9->___currentSave_5;
		StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5* L_11 = L_10->___intPrefs_0;
		U3CU3Ec__DisplayClass2_0_t3882088536482E6E439D93FCAAF4863FECDC73B4* L_12 = V_0;
		Func_2_tCD6D9E8073BC970E3890876E1B8CBA6AE4A759D4* L_13 = (Func_2_tCD6D9E8073BC970E3890876E1B8CBA6AE4A759D4*)il2cpp_codegen_object_new(Func_2_tCD6D9E8073BC970E3890876E1B8CBA6AE4A759D4_il2cpp_TypeInfo_var);
		Func_2__ctor_m5E44DDB1D1F0D970596D4CEB96CD6F75204FFE9D(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetIntU3Eb__0_m32A1403BBFAF41AEA0FD40543667D255C018B5B1_RuntimeMethod_var), NULL);
		KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078 L_14;
		L_14 = Enumerable_FirstOrDefault_TisKeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078_m302F5F64B1C21A28DB3F9E33A3238397147F9630(L_11, L_13, Enumerable_FirstOrDefault_TisKeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078_m302F5F64B1C21A28DB3F9E33A3238397147F9630_RuntimeMethod_var);
		V_1 = L_14;
		int32_t L_15;
		L_15 = KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_inline((&V_1), KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_RuntimeMethod_var);
		return L_15;
	}

IL_0052:
	{
		// return defVal;
		int32_t L_16 = ___1_defVal;
		return L_16;
	}
}
// System.Single YandexPlayerPrefs::GetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YandexPlayerPrefs_GetFloat_m11928DBCA910B53EC4BEC7378521BBD43B1EB026 (String_t* ___0_key, float ___1_defVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A27BC9CF50D35530441CEA168D31238D61AD3DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisKeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042_m7EBA3BBB82485819CFCF34434A8A35C486DE670D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD0B684F5B00E893C308BA22EA282D34F6F26CBAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CGetFloatU3Eb__0_m7AC59B6BD0C66E2E96703D70A87C26D5A6C846B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t093602D9C9F502B69DF9C3C40E8FF55085E9021C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t093602D9C9F502B69DF9C3C40E8FF55085E9021C* V_0 = NULL;
	KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CU3Ec__DisplayClass3_0_t093602D9C9F502B69DF9C3C40E8FF55085E9021C* L_0 = (U3CU3Ec__DisplayClass3_0_t093602D9C9F502B69DF9C3C40E8FF55085E9021C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t093602D9C9F502B69DF9C3C40E8FF55085E9021C_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_mF5897E8EEDA7AF6E614B5189AACCB21CA3219836(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t093602D9C9F502B69DF9C3C40E8FF55085E9021C* L_1 = V_0;
		String_t* L_2 = ___0_key;
		L_1->___key_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___key_0), (void*)L_2);
		// if (YandexPlayerPrefsManager.current.currentSave.floatPrefs.ContainsKey(key))
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_3 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_4 = L_3->___currentSave_5;
		StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324* L_5 = L_4->___floatPrefs_1;
		U3CU3Ec__DisplayClass3_0_t093602D9C9F502B69DF9C3C40E8FF55085E9021C* L_6 = V_0;
		String_t* L_7 = L_6->___key_0;
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_m1A27BC9CF50D35530441CEA168D31238D61AD3DF(L_5, L_7, Dictionary_2_ContainsKey_m1A27BC9CF50D35530441CEA168D31238D61AD3DF_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		// return YandexPlayerPrefsManager.current.currentSave.floatPrefs.FirstOrDefault(x => x.Key == key).Value;
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_9 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_10 = L_9->___currentSave_5;
		StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324* L_11 = L_10->___floatPrefs_1;
		U3CU3Ec__DisplayClass3_0_t093602D9C9F502B69DF9C3C40E8FF55085E9021C* L_12 = V_0;
		Func_2_tD0B684F5B00E893C308BA22EA282D34F6F26CBAC* L_13 = (Func_2_tD0B684F5B00E893C308BA22EA282D34F6F26CBAC*)il2cpp_codegen_object_new(Func_2_tD0B684F5B00E893C308BA22EA282D34F6F26CBAC_il2cpp_TypeInfo_var);
		Func_2__ctor_mE7E5E1E62E546303B70844C3EA0BAAE1CB6FA718(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CGetFloatU3Eb__0_m7AC59B6BD0C66E2E96703D70A87C26D5A6C846B2_RuntimeMethod_var), NULL);
		KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 L_14;
		L_14 = Enumerable_FirstOrDefault_TisKeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042_m7EBA3BBB82485819CFCF34434A8A35C486DE670D(L_11, L_13, Enumerable_FirstOrDefault_TisKeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042_m7EBA3BBB82485819CFCF34434A8A35C486DE670D_RuntimeMethod_var);
		V_1 = L_14;
		float L_15;
		L_15 = KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_inline((&V_1), KeyValuePair_2_get_Value_m30E64ED1AAB4CEE02DE4DF270E768EFA08F9DD98_RuntimeMethod_var);
		return L_15;
	}

IL_0052:
	{
		// return defVal;
		float L_16 = ___1_defVal;
		return L_16;
	}
}
// System.Void YandexPlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexPlayerPrefs_SetFloat_m3741F443174ED14EE650B7C0C0F17E36D66FD770 (String_t* ___0_key, float ___1_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A27BC9CF50D35530441CEA168D31238D61AD3DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!YandexPlayerPrefsManager.current.currentSave.floatPrefs.ContainsKey(key))
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_0 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_1 = L_0->___currentSave_5;
		StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324* L_2 = L_1->___floatPrefs_1;
		String_t* L_3 = ___0_key;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m1A27BC9CF50D35530441CEA168D31238D61AD3DF(L_2, L_3, Dictionary_2_ContainsKey_m1A27BC9CF50D35530441CEA168D31238D61AD3DF_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// YandexPlayerPrefsManager.current.currentSave.floatPrefs.Add(key, val);
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_5 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_6 = L_5->___currentSave_5;
		StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324* L_7 = L_6->___floatPrefs_1;
		String_t* L_8 = ___0_key;
		float L_9 = ___1_val;
		Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B(L_7, L_8, L_9, Dictionary_2_Add_m787336866CB5447623BBE9C53570F28C3DA2D38B_RuntimeMethod_var);
		goto IL_0045;
	}

IL_002f:
	{
		// YandexPlayerPrefsManager.current.currentSave.floatPrefs[key] = val;
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_10 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_11 = L_10->___currentSave_5;
		StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324* L_12 = L_11->___floatPrefs_1;
		String_t* L_13 = ___0_key;
		float L_14 = ___1_val;
		Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A(L_12, L_13, L_14, Dictionary_2_set_Item_m14CD98262463C5CFD081DE1CF30325E54465CD3A_RuntimeMethod_var);
	}

IL_0045:
	{
		// YandexPlayerPrefsManager.current.SetSave();
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_15 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		YandexPlayerPrefsManager_SetSave_m343D83669C3D17990C1BCE01C59F130F790FFC39(L_15, NULL);
		// }
		return;
	}
}
// System.Void YandexPlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexPlayerPrefs_SetString_mFA250245136100DCED606878F703829E1097D8EF (String_t* ___0_key, String_t* ___1_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!YandexPlayerPrefsManager.current.currentSave.stringPrefs.ContainsKey(key))
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_0 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_1 = L_0->___currentSave_5;
		StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292* L_2 = L_1->___stringPrefs_2;
		String_t* L_3 = ___0_key;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_2, L_3, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// YandexPlayerPrefsManager.current.currentSave.stringPrefs.Add(key, val);
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_5 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_6 = L_5->___currentSave_5;
		StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292* L_7 = L_6->___stringPrefs_2;
		String_t* L_8 = ___0_key;
		String_t* L_9 = ___1_val;
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_7, L_8, L_9, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		goto IL_0045;
	}

IL_002f:
	{
		// YandexPlayerPrefsManager.current.currentSave.stringPrefs[key] = val;
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_10 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_11 = L_10->___currentSave_5;
		StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292* L_12 = L_11->___stringPrefs_2;
		String_t* L_13 = ___0_key;
		String_t* L_14 = ___1_val;
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_12, L_13, L_14, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_0045:
	{
		// YandexPlayerPrefsManager.current.SetSave();
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_15 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		YandexPlayerPrefsManager_SetSave_m343D83669C3D17990C1BCE01C59F130F790FFC39(L_15, NULL);
		// }
		return;
	}
}
// System.String YandexPlayerPrefs::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* YandexPlayerPrefs_GetString_m033450D774A1506C6D5F99F2BDBC9B253C97F745 (String_t* ___0_key, String_t* ___1_defVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m72BEF033ECEC33678AD7E4C1F428DF5321B84FF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CGetStringU3Eb__0_m54AFE832443CD235A19137900502925D8B481363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t67211C19DAA7B35F1A0F89B5BFAA512F63841026_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t67211C19DAA7B35F1A0F89B5BFAA512F63841026* V_0 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CU3Ec__DisplayClass6_0_t67211C19DAA7B35F1A0F89B5BFAA512F63841026* L_0 = (U3CU3Ec__DisplayClass6_0_t67211C19DAA7B35F1A0F89B5BFAA512F63841026*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t67211C19DAA7B35F1A0F89B5BFAA512F63841026_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_m5FD7394955FAE5E204B7A92C69AEFEBB9ACFCEAE(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t67211C19DAA7B35F1A0F89B5BFAA512F63841026* L_1 = V_0;
		String_t* L_2 = ___0_key;
		L_1->___key_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___key_0), (void*)L_2);
		// if (YandexPlayerPrefsManager.current.currentSave.stringPrefs.ContainsKey(key))
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_3 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_4 = L_3->___currentSave_5;
		StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292* L_5 = L_4->___stringPrefs_2;
		U3CU3Ec__DisplayClass6_0_t67211C19DAA7B35F1A0F89B5BFAA512F63841026* L_6 = V_0;
		String_t* L_7 = L_6->___key_0;
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_5, L_7, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		// return YandexPlayerPrefsManager.current.currentSave.stringPrefs.FirstOrDefault(x => x.Key == key).Value;
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_9 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_10 = L_9->___currentSave_5;
		StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292* L_11 = L_10->___stringPrefs_2;
		U3CU3Ec__DisplayClass6_0_t67211C19DAA7B35F1A0F89B5BFAA512F63841026* L_12 = V_0;
		Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* L_13 = (Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1*)il2cpp_codegen_object_new(Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var);
		Func_2__ctor_m612313685E65C8F88E36E0730D48C7BA57EB3D9A(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CGetStringU3Eb__0_m54AFE832443CD235A19137900502925D8B481363_RuntimeMethod_var), NULL);
		KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_14;
		L_14 = Enumerable_FirstOrDefault_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m72BEF033ECEC33678AD7E4C1F428DF5321B84FF3(L_11, L_13, Enumerable_FirstOrDefault_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m72BEF033ECEC33678AD7E4C1F428DF5321B84FF3_RuntimeMethod_var);
		V_1 = L_14;
		String_t* L_15;
		L_15 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_1), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		return L_15;
	}

IL_0052:
	{
		// return defVal;
		String_t* L_16 = ___1_defVal;
		return L_16;
	}
}
// System.Void YandexPlayerPrefs::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexPlayerPrefs_SetBool_m23341EE10C3F292478269B7D477BB08A058AB044 (String_t* ___0_key, bool ___1_val, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF6B9323B3D7DCD5B236DAB212C1CFDD805BB563D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!YandexPlayerPrefsManager.current.currentSave.boolPrefs.ContainsKey(key))
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_0 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_1 = L_0->___currentSave_5;
		StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9* L_2 = L_1->___boolPrefs_3;
		String_t* L_3 = ___0_key;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6(L_2, L_3, Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		// YandexPlayerPrefsManager.current.currentSave.boolPrefs.Add(key, val);
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_5 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_6 = L_5->___currentSave_5;
		StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9* L_7 = L_6->___boolPrefs_3;
		String_t* L_8 = ___0_key;
		bool L_9 = ___1_val;
		Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292(L_7, L_8, L_9, Dictionary_2_Add_m3724D93D5AC25A6A987063F7B26C195F00C75292_RuntimeMethod_var);
		goto IL_0045;
	}

IL_002f:
	{
		// YandexPlayerPrefsManager.current.currentSave.boolPrefs[key] = val;
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_10 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_11 = L_10->___currentSave_5;
		StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9* L_12 = L_11->___boolPrefs_3;
		String_t* L_13 = ___0_key;
		bool L_14 = ___1_val;
		Dictionary_2_set_Item_mF6B9323B3D7DCD5B236DAB212C1CFDD805BB563D(L_12, L_13, L_14, Dictionary_2_set_Item_mF6B9323B3D7DCD5B236DAB212C1CFDD805BB563D_RuntimeMethod_var);
	}

IL_0045:
	{
		// YandexPlayerPrefsManager.current.SetSave();
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_15 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		YandexPlayerPrefsManager_SetSave_m343D83669C3D17990C1BCE01C59F130F790FFC39(L_15, NULL);
		// }
		return;
	}
}
// System.Boolean YandexPlayerPrefs::GetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YandexPlayerPrefs_GetBool_mD0E3C1190C3C698A578FE6DB3D820B97F53444DA (String_t* ___0_key, bool ___1_defVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisKeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C_mCC30B0AD7C074F4B02EA97F5CD7065B298EA8FF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5976237A7992D9268FA6781222CDDD5B9DEBF3E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CGetBoolU3Eb__0_m81DF6CB88ADB99CBF50026BC3FEB69D11954B1F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t8891F481E484715E7D06365220AA783D9BAB29FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t8891F481E484715E7D06365220AA783D9BAB29FB* V_0 = NULL;
	KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CU3Ec__DisplayClass8_0_t8891F481E484715E7D06365220AA783D9BAB29FB* L_0 = (U3CU3Ec__DisplayClass8_0_t8891F481E484715E7D06365220AA783D9BAB29FB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t8891F481E484715E7D06365220AA783D9BAB29FB_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_m7969ECC0EF5B2F43205A7C35E46563562F35AB75(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t8891F481E484715E7D06365220AA783D9BAB29FB* L_1 = V_0;
		String_t* L_2 = ___0_key;
		L_1->___key_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___key_0), (void*)L_2);
		// if (YandexPlayerPrefsManager.current.currentSave.boolPrefs.ContainsKey(key))
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_3 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_4 = L_3->___currentSave_5;
		StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9* L_5 = L_4->___boolPrefs_3;
		U3CU3Ec__DisplayClass8_0_t8891F481E484715E7D06365220AA783D9BAB29FB* L_6 = V_0;
		String_t* L_7 = L_6->___key_0;
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6(L_5, L_7, Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		// return YandexPlayerPrefsManager.current.currentSave.boolPrefs.FirstOrDefault(x => x.Key == key).Value;
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_9 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_10 = L_9->___currentSave_5;
		StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9* L_11 = L_10->___boolPrefs_3;
		U3CU3Ec__DisplayClass8_0_t8891F481E484715E7D06365220AA783D9BAB29FB* L_12 = V_0;
		Func_2_t5976237A7992D9268FA6781222CDDD5B9DEBF3E1* L_13 = (Func_2_t5976237A7992D9268FA6781222CDDD5B9DEBF3E1*)il2cpp_codegen_object_new(Func_2_t5976237A7992D9268FA6781222CDDD5B9DEBF3E1_il2cpp_TypeInfo_var);
		Func_2__ctor_m3E3B60749104379B7CA88A15B394B51B1FE7E591(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CGetBoolU3Eb__0_m81DF6CB88ADB99CBF50026BC3FEB69D11954B1F1_RuntimeMethod_var), NULL);
		KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C L_14;
		L_14 = Enumerable_FirstOrDefault_TisKeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C_mCC30B0AD7C074F4B02EA97F5CD7065B298EA8FF7(L_11, L_13, Enumerable_FirstOrDefault_TisKeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C_mCC30B0AD7C074F4B02EA97F5CD7065B298EA8FF7_RuntimeMethod_var);
		V_1 = L_14;
		bool L_15;
		L_15 = KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_inline((&V_1), KeyValuePair_2_get_Value_mE1DC07B8A2496F1389E87AC01B53A247272C8FDD_RuntimeMethod_var);
		return L_15;
	}

IL_0052:
	{
		// return defVal;
		bool L_16 = ___1_defVal;
		return L_16;
	}
}
// System.Boolean YandexPlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YandexPlayerPrefs_HasKey_m1C3E000574AB6FA1A6C6EF9719F499C5EF974BCC (String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A27BC9CF50D35530441CEA168D31238D61AD3DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (YandexPlayerPrefsManager.current.currentSave.boolPrefs.ContainsKey(key) || YandexPlayerPrefsManager.current.currentSave.floatPrefs.ContainsKey(key) || YandexPlayerPrefsManager.current.currentSave.intPrefs.ContainsKey(key) || YandexPlayerPrefsManager.current.currentSave.stringPrefs.ContainsKey(key))
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_0 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_1 = L_0->___currentSave_5;
		StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9* L_2 = L_1->___boolPrefs_3;
		String_t* L_3 = ___0_key;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6(L_2, L_3, Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_005c;
		}
	}
	{
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_5 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_6 = L_5->___currentSave_5;
		StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324* L_7 = L_6->___floatPrefs_1;
		String_t* L_8 = ___0_key;
		bool L_9;
		L_9 = Dictionary_2_ContainsKey_m1A27BC9CF50D35530441CEA168D31238D61AD3DF(L_7, L_8, Dictionary_2_ContainsKey_m1A27BC9CF50D35530441CEA168D31238D61AD3DF_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_005c;
		}
	}
	{
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_10 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_11 = L_10->___currentSave_5;
		StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5* L_12 = L_11->___intPrefs_0;
		String_t* L_13 = ___0_key;
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E(L_12, L_13, Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_005c;
		}
	}
	{
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_15 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_16 = L_15->___currentSave_5;
		StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292* L_17 = L_16->___stringPrefs_2;
		String_t* L_18 = ___0_key;
		bool L_19;
		L_19 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_17, L_18, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_005e;
		}
	}

IL_005c:
	{
		// return true;
		return (bool)1;
	}

IL_005e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void YandexPlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexPlayerPrefs_DeleteKey_mD9299AB8735100ADBAE2F825D07F15EB4E929A2E (String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A27BC9CF50D35530441CEA168D31238D61AD3DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0300F4FCE9728AAD7E821680B932DFAEBDA0D792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m458C89B39D1B27C85ECD461431511CB6E76FE562_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (YandexPlayerPrefsManager.current.currentSave.floatPrefs.ContainsKey(key))
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_0 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_1 = L_0->___currentSave_5;
		StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324* L_2 = L_1->___floatPrefs_1;
		String_t* L_3 = ___0_key;
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m1A27BC9CF50D35530441CEA168D31238D61AD3DF(L_2, L_3, Dictionary_2_ContainsKey_m1A27BC9CF50D35530441CEA168D31238D61AD3DF_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// YandexPlayerPrefsManager.current.currentSave.floatPrefs.Remove(key);
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_5 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_6 = L_5->___currentSave_5;
		StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324* L_7 = L_6->___floatPrefs_1;
		String_t* L_8 = ___0_key;
		bool L_9;
		L_9 = Dictionary_2_Remove_m0300F4FCE9728AAD7E821680B932DFAEBDA0D792(L_7, L_8, Dictionary_2_Remove_m0300F4FCE9728AAD7E821680B932DFAEBDA0D792_RuntimeMethod_var);
	}

IL_002d:
	{
		// if (YandexPlayerPrefsManager.current.currentSave.intPrefs.ContainsKey(key))
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_10 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_11 = L_10->___currentSave_5;
		StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5* L_12 = L_11->___intPrefs_0;
		String_t* L_13 = ___0_key;
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E(L_12, L_13, Dictionary_2_ContainsKey_mAEDD6BBEE1B37BC5E1D803803352FBE4CF4D3D7E_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_005a;
		}
	}
	{
		// YandexPlayerPrefsManager.current.currentSave.intPrefs.Remove(key);
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_15 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_16 = L_15->___currentSave_5;
		StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5* L_17 = L_16->___intPrefs_0;
		String_t* L_18 = ___0_key;
		bool L_19;
		L_19 = Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC(L_17, L_18, Dictionary_2_Remove_m0C90DB78F4134CDEB001F338AA2745F8D9651CAC_RuntimeMethod_var);
	}

IL_005a:
	{
		// if (YandexPlayerPrefsManager.current.currentSave.stringPrefs.ContainsKey(key))
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_20 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_21 = L_20->___currentSave_5;
		StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292* L_22 = L_21->___stringPrefs_2;
		String_t* L_23 = ___0_key;
		bool L_24;
		L_24 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_22, L_23, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_24)
		{
			goto IL_0087;
		}
	}
	{
		// YandexPlayerPrefsManager.current.currentSave.stringPrefs.Remove(key);
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_25 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_26 = L_25->___currentSave_5;
		StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292* L_27 = L_26->___stringPrefs_2;
		String_t* L_28 = ___0_key;
		bool L_29;
		L_29 = Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC(L_27, L_28, Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC_RuntimeMethod_var);
	}

IL_0087:
	{
		// if (YandexPlayerPrefsManager.current.currentSave.boolPrefs.ContainsKey(key))
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_30 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_31 = L_30->___currentSave_5;
		StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9* L_32 = L_31->___boolPrefs_3;
		String_t* L_33 = ___0_key;
		bool L_34;
		L_34 = Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6(L_32, L_33, Dictionary_2_ContainsKey_mB58A1ED30A4979126B249E60D66D4391F6FF65F6_RuntimeMethod_var);
		if (!L_34)
		{
			goto IL_00b4;
		}
	}
	{
		// YandexPlayerPrefsManager.current.currentSave.boolPrefs.Remove(key);
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_35 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_36 = L_35->___currentSave_5;
		StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9* L_37 = L_36->___boolPrefs_3;
		String_t* L_38 = ___0_key;
		bool L_39;
		L_39 = Dictionary_2_Remove_m458C89B39D1B27C85ECD461431511CB6E76FE562(L_37, L_38, Dictionary_2_Remove_m458C89B39D1B27C85ECD461431511CB6E76FE562_RuntimeMethod_var);
	}

IL_00b4:
	{
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
// System.Void YandexPlayerPrefs/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m42519E2D43C315D717C4B1A26B4F7922C15B1693 (U3CU3Ec__DisplayClass2_0_t3882088536482E6E439D93FCAAF4863FECDC73B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean YandexPlayerPrefs/<>c__DisplayClass2_0::<GetInt>b__0(System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CGetIntU3Eb__0_m32A1403BBFAF41AEA0FD40543667D255C018B5B1 (U3CU3Ec__DisplayClass2_0_t3882088536482E6E439D93FCAAF4863FECDC73B4* __this, KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078 ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC9FB52D78F362AE8CD0466E65D0CAFB23CD1C25D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return YandexPlayerPrefsManager.current.currentSave.intPrefs.FirstOrDefault(x => x.Key == key).Value;
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mC9FB52D78F362AE8CD0466E65D0CAFB23CD1C25D_inline((&___0_x), KeyValuePair_2_get_Key_mC9FB52D78F362AE8CD0466E65D0CAFB23CD1C25D_RuntimeMethod_var);
		String_t* L_1 = __this->___key_0;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
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
// System.Void YandexPlayerPrefs/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mF5897E8EEDA7AF6E614B5189AACCB21CA3219836 (U3CU3Ec__DisplayClass3_0_t093602D9C9F502B69DF9C3C40E8FF55085E9021C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean YandexPlayerPrefs/<>c__DisplayClass3_0::<GetFloat>b__0(System.Collections.Generic.KeyValuePair`2<System.String,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3CGetFloatU3Eb__0_m7AC59B6BD0C66E2E96703D70A87C26D5A6C846B2 (U3CU3Ec__DisplayClass3_0_t093602D9C9F502B69DF9C3C40E8FF55085E9021C* __this, KeyValuePair_2_t730166D708411B4A6E7A81C0F07347F5880B8042 ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return YandexPlayerPrefsManager.current.currentSave.floatPrefs.FirstOrDefault(x => x.Key == key).Value;
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_inline((&___0_x), KeyValuePair_2_get_Key_mC2FF3D101DE860E615E7858EDD2FC8BBA371FA88_RuntimeMethod_var);
		String_t* L_1 = __this->___key_0;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
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
// System.Void YandexPlayerPrefs/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m5FD7394955FAE5E204B7A92C69AEFEBB9ACFCEAE (U3CU3Ec__DisplayClass6_0_t67211C19DAA7B35F1A0F89B5BFAA512F63841026* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean YandexPlayerPrefs/<>c__DisplayClass6_0::<GetString>b__0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CGetStringU3Eb__0_m54AFE832443CD235A19137900502925D8B481363 (U3CU3Ec__DisplayClass6_0_t67211C19DAA7B35F1A0F89B5BFAA512F63841026* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return YandexPlayerPrefsManager.current.currentSave.stringPrefs.FirstOrDefault(x => x.Key == key).Value;
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&___0_x), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		String_t* L_1 = __this->___key_0;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
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
// System.Void YandexPlayerPrefs/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m7969ECC0EF5B2F43205A7C35E46563562F35AB75 (U3CU3Ec__DisplayClass8_0_t8891F481E484715E7D06365220AA783D9BAB29FB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean YandexPlayerPrefs/<>c__DisplayClass8_0::<GetBool>b__0(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass8_0_U3CGetBoolU3Eb__0_m81DF6CB88ADB99CBF50026BC3FEB69D11954B1F1 (U3CU3Ec__DisplayClass8_0_t8891F481E484715E7D06365220AA783D9BAB29FB* __this, KeyValuePair_2_t6FBA699E626F0DB5D988252D056F02A4938CF89C ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return YandexPlayerPrefsManager.current.currentSave.boolPrefs.FirstOrDefault(x => x.Key == key).Value;
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_inline((&___0_x), KeyValuePair_2_get_Key_m6BEF534E92E19F6138AF24B4F759D2D181F38BC0_RuntimeMethod_var);
		String_t* L_1 = __this->___key_0;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
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
// System.Void YandexPlayerPrefsManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexPlayerPrefsManager_Awake_m5FBB571D0D022C8055C88D1650DD3229895127C2 (YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (current != null)
		YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* L_0 = ((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		// current = this;
		((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_StaticFields*)il2cpp_codegen_static_fields_for(YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290_il2cpp_TypeInfo_var))->___current_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_3, NULL);
	}

IL_002b:
	{
		// YaSDK.instance.AuthenticateUser();
		YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* L_4 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___instance_4;
		YaSDK_AuthenticateUser_mD09DD59EC08900E547F27BAEE14FFFB1CCF622DB(L_4, NULL);
		// }
		return;
	}
}
// System.Void YandexPlayerPrefsManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexPlayerPrefsManager_OnEnable_mE4777ED2822101FB7539AB471ABC56FB0AB42774 (YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_GetSave_m5FCEAE1E0A4F5305F9BDBB6C3DBD9D714C090D44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_OnGetSave_m90FDC0C6F7A56EE7D239F1BFE827BB3437121B43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// YaSDK.onPlayerAuthenticated += GetSave;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_0 = (onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF*)il2cpp_codegen_object_new(onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF_il2cpp_TypeInfo_var);
		onPlayerAuthenticatedHandler__ctor_m701A4ABC299EDCF2C86D3FD5FEBD507F3CF71501(L_0, __this, (intptr_t)((void*)YandexPlayerPrefsManager_GetSave_m5FCEAE1E0A4F5305F9BDBB6C3DBD9D714C090D44_RuntimeMethod_var), NULL);
		YaSDK_add_onPlayerAuthenticated_m3557461EF5BE6EEE887F2E568C6A0AE6700677A5(L_0, NULL);
		// YaSDK.onGetPlayerData += OnGetSave;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_1 = (onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467*)il2cpp_codegen_object_new(onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467_il2cpp_TypeInfo_var);
		onGetPlayerDataHandler__ctor_m207931BB478D88A2E32F417BB6752B02695D9DEB(L_1, __this, (intptr_t)((void*)YandexPlayerPrefsManager_OnGetSave_m90FDC0C6F7A56EE7D239F1BFE827BB3437121B43_RuntimeMethod_var), NULL);
		YaSDK_add_onGetPlayerData_m4C881919D0087668E7107D34C612AE5AE8D632FF(L_1, NULL);
		// }
		return;
	}
}
// System.Void YandexPlayerPrefsManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexPlayerPrefsManager_OnDisable_m803BF50153E0FEA9A5A79AE965623BFD1A9C2A06 (YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_GetSave_m5FCEAE1E0A4F5305F9BDBB6C3DBD9D714C090D44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YandexPlayerPrefsManager_OnGetSave_m90FDC0C6F7A56EE7D239F1BFE827BB3437121B43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// YaSDK.onPlayerAuthenticated -= GetSave;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_0 = (onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF*)il2cpp_codegen_object_new(onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF_il2cpp_TypeInfo_var);
		onPlayerAuthenticatedHandler__ctor_m701A4ABC299EDCF2C86D3FD5FEBD507F3CF71501(L_0, __this, (intptr_t)((void*)YandexPlayerPrefsManager_GetSave_m5FCEAE1E0A4F5305F9BDBB6C3DBD9D714C090D44_RuntimeMethod_var), NULL);
		YaSDK_remove_onPlayerAuthenticated_m616ECB6FB4A6341DFC353C71F7DD895F88D07E7C(L_0, NULL);
		// YaSDK.onGetPlayerData -= OnGetSave;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_1 = (onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467*)il2cpp_codegen_object_new(onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467_il2cpp_TypeInfo_var);
		onGetPlayerDataHandler__ctor_m207931BB478D88A2E32F417BB6752B02695D9DEB(L_1, __this, (intptr_t)((void*)YandexPlayerPrefsManager_OnGetSave_m90FDC0C6F7A56EE7D239F1BFE827BB3437121B43_RuntimeMethod_var), NULL);
		YaSDK_remove_onGetPlayerData_mDAC6C8846E055E0D1800360462C79C6464417178(L_1, NULL);
		// }
		return;
	}
}
// System.Void YandexPlayerPrefsManager::GetSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexPlayerPrefsManager_GetSave_m5FCEAE1E0A4F5305F9BDBB6C3DBD9D714C090D44 (YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// YaSDK.instance.GetSave();
		YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___instance_4;
		YaSDK_GetSave_m8B556C0915838D320D9D7E043EF90714D83F60F9(L_0, NULL);
		// }
		return;
	}
}
// System.Void YandexPlayerPrefsManager::OnGetSave(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexPlayerPrefsManager_OnGetSave_m90FDC0C6F7A56EE7D239F1BFE827BB3437121B43 (YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* __this, String_t* ___0_save, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisSave_t1D649698B30E14376AADDA69592937B29C9D1996_mD3736ADA339307AC380BEF1B5C5E0C8C6313A4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Save_t1D649698B30E14376AADDA69592937B29C9D1996_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (save == string.Empty)
		String_t* L_0 = ___0_save;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// currentSave = new Save();
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_3 = (Save_t1D649698B30E14376AADDA69592937B29C9D1996*)il2cpp_codegen_object_new(Save_t1D649698B30E14376AADDA69592937B29C9D1996_il2cpp_TypeInfo_var);
		Save__ctor_mB9AF86B5C152341B33681646F8CE5890BCFF8DBA(L_3, NULL);
		__this->___currentSave_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentSave_5), (void*)L_3);
		return;
	}

IL_0019:
	{
		// currentSave = JsonUtility.FromJson<Save>(save);
		String_t* L_4 = ___0_save;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_5;
		L_5 = JsonUtility_FromJson_TisSave_t1D649698B30E14376AADDA69592937B29C9D1996_mD3736ADA339307AC380BEF1B5C5E0C8C6313A4DD(L_4, JsonUtility_FromJson_TisSave_t1D649698B30E14376AADDA69592937B29C9D1996_mD3736ADA339307AC380BEF1B5C5E0C8C6313A4DD_RuntimeMethod_var);
		__this->___currentSave_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentSave_5), (void*)L_5);
		// }
		return;
	}
}
// System.Void YandexPlayerPrefsManager::SetSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexPlayerPrefsManager_SetSave_m343D83669C3D17990C1BCE01C59F130F790FFC39 (YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_SetSave_TisSave_t1D649698B30E14376AADDA69592937B29C9D1996_m8F5FB3F945FD57C45999D8200BEC01492FD60DD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// YaSDK.instance.SetSave<Save>(currentSave);
		YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___instance_4;
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_1 = __this->___currentSave_5;
		YaSDK_SetSave_TisSave_t1D649698B30E14376AADDA69592937B29C9D1996_m8F5FB3F945FD57C45999D8200BEC01492FD60DD4(L_0, L_1, YaSDK_SetSave_TisSave_t1D649698B30E14376AADDA69592937B29C9D1996_m8F5FB3F945FD57C45999D8200BEC01492FD60DD4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void YandexPlayerPrefsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YandexPlayerPrefsManager__ctor_m38AED6211743D8554FCB83DE46F5358820DD7463 (YandexPlayerPrefsManager_t9B324661867E44B1AF4D21FEBC4CA9A94E090290* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Save_t1D649698B30E14376AADDA69592937B29C9D1996_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Save currentSave = new Save();
		Save_t1D649698B30E14376AADDA69592937B29C9D1996* L_0 = (Save_t1D649698B30E14376AADDA69592937B29C9D1996*)il2cpp_codegen_object_new(Save_t1D649698B30E14376AADDA69592937B29C9D1996_il2cpp_TypeInfo_var);
		Save__ctor_mB9AF86B5C152341B33681646F8CE5890BCFF8DBA(L_0, NULL);
		__this->___currentSave_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentSave_5), (void*)L_0);
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
// System.Void YandexPlayerPrefsManager/Save::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Save__ctor_mB9AF86B5C152341B33681646F8CE5890BCFF8DBA (Save_t1D649698B30E14376AADDA69592937B29C9D1996* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public StringIntDictionary intPrefs = new StringIntDictionary();
		StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5* L_0 = (StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5*)il2cpp_codegen_object_new(StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5_il2cpp_TypeInfo_var);
		StringIntDictionary__ctor_m7C7FE1F0D5566BEB99090C0D073173387FACA4F5(L_0, NULL);
		__this->___intPrefs_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___intPrefs_0), (void*)L_0);
		// public StringFloatDictionary floatPrefs = new StringFloatDictionary();
		StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324* L_1 = (StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324*)il2cpp_codegen_object_new(StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324_il2cpp_TypeInfo_var);
		StringFloatDictionary__ctor_mA9C6050AE5E49015E0B3709B6C51CDF67D34C75F(L_1, NULL);
		__this->___floatPrefs_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___floatPrefs_1), (void*)L_1);
		// public StringStringDictionary stringPrefs = new StringStringDictionary();
		StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292* L_2 = (StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292*)il2cpp_codegen_object_new(StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292_il2cpp_TypeInfo_var);
		StringStringDictionary__ctor_m23B4B06AD7CA24CBAF572FF0BBE1F6D67F671AC5(L_2, NULL);
		__this->___stringPrefs_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stringPrefs_2), (void*)L_2);
		// public StringBoolDictionary boolPrefs = new StringBoolDictionary();
		StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9* L_3 = (StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9*)il2cpp_codegen_object_new(StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9_il2cpp_TypeInfo_var);
		StringBoolDictionary__ctor_m51E49C7684ACC947BED12B1AE68BA9FEE6EBF0CA(L_3, NULL);
		__this->___boolPrefs_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boolPrefs_3), (void*)L_3);
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
// System.Void YandexPlayerPrefsManager/StringIntDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringIntDictionary__ctor_m7C7FE1F0D5566BEB99090C0D073173387FACA4F5 (StringIntDictionary_t81A47697AA1C3D93248097485B8FDB3D07BA07C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionary_2__ctor_mA6E070954E1550E214C8456D87919C1327C664E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializableDictionary_2__ctor_mA6E070954E1550E214C8456D87919C1327C664E7(__this, SerializableDictionary_2__ctor_mA6E070954E1550E214C8456D87919C1327C664E7_RuntimeMethod_var);
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
// System.Void YandexPlayerPrefsManager/StringFloatDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringFloatDictionary__ctor_mA9C6050AE5E49015E0B3709B6C51CDF67D34C75F (StringFloatDictionary_tB2F0EDDB9E64D92B09A843BFA7660654CFD66324* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionary_2__ctor_mD2E5D64EB4B23466BF11E69018C8D1FEB7063ABB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializableDictionary_2__ctor_mD2E5D64EB4B23466BF11E69018C8D1FEB7063ABB(__this, SerializableDictionary_2__ctor_mD2E5D64EB4B23466BF11E69018C8D1FEB7063ABB_RuntimeMethod_var);
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
// System.Void YandexPlayerPrefsManager/StringStringDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStringDictionary__ctor_m23B4B06AD7CA24CBAF572FF0BBE1F6D67F671AC5 (StringStringDictionary_tBCA7DA6A3BB79D29740C7F507F56A97ABA454292* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionary_2__ctor_m2898A4C84D070D940A235BA8146CAA6B44ABB497_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializableDictionary_2__ctor_m2898A4C84D070D940A235BA8146CAA6B44ABB497(__this, SerializableDictionary_2__ctor_m2898A4C84D070D940A235BA8146CAA6B44ABB497_RuntimeMethod_var);
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
// System.Void YandexPlayerPrefsManager/StringBoolDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBoolDictionary__ctor_m51E49C7684ACC947BED12B1AE68BA9FEE6EBF0CA (StringBoolDictionary_t055DE82F8971A09AB633DF64FCB89DA3C8EE02F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableDictionary_2__ctor_mDB518BFF2C27B1548DB66F2E78533895766C52D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializableDictionary_2__ctor_mDB518BFF2C27B1548DB66F2E78533895766C52D8(__this, SerializableDictionary_2__ctor_mDB518BFF2C27B1548DB66F2E78533895766C52D8_RuntimeMethod_var);
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
// System.Void YandexSDK.Settings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Settings__ctor_mD18981CEEA10FA45C08EB133152A62EE3791E92F (Settings_tA5E3F3FA570A24528DEE30A330B73DFFBC36C9BA* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void YandexSDK.YaSDK::Authenticate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_Authenticate_m27939593BBC9C0B46D460A44E328E042CD513F75 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Authenticate)();

}
// System.Void YandexSDK.YaSDK::SetPlayerData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_SetPlayerData_m63CB369A8524C563687A370229CBE888701EB4DC (String_t* ___0_data, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_data' to native representation
	char* ____0_data_marshaled = NULL;
	____0_data_marshaled = il2cpp_codegen_marshal_string(___0_data);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SetPlayerData)(____0_data_marshaled);

	// Marshaling cleanup of parameter '___0_data' native representation
	il2cpp_codegen_marshal_free(____0_data_marshaled);
	____0_data_marshaled = NULL;

}
// System.Void YandexSDK.YaSDK::GetPlayerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_GetPlayerData_mCBB25840669DEC73C7BA9BFE974B34455EF4C597 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GetPlayerData)();

}
// System.Void YandexSDK.YaSDK::ShowFullscreenAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_ShowFullscreenAd_mB0498A125959445958887CF601EDA75F6039BEC9 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ShowFullscreenAd)();

}
// System.Void YandexSDK.YaSDK::OpenRateUs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_OpenRateUs_m2489D6F2F05F5B532E1D217EE1732CA2514A810A (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(OpenRateUs)();

}
// System.Int32 YandexSDK.YaSDK::ShowRewardedAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YaSDK_ShowRewardedAd_m96C8E7989982183E631268C5DAD02805FC1AD5BD (String_t* ___0_placement, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_placement' to native representation
	char* ____0_placement_marshaled = NULL;
	____0_placement_marshaled = il2cpp_codegen_marshal_string(___0_placement);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ShowRewardedAd)(____0_placement_marshaled);

	// Marshaling cleanup of parameter '___0_placement' native representation
	il2cpp_codegen_marshal_free(____0_placement_marshaled);
	____0_placement_marshaled = NULL;

	return returnValue;
}
// System.Void YandexSDK.YaSDK::add_onPlayerAuthenticated(YandexSDK.YaSDK/onPlayerAuthenticatedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_add_onPlayerAuthenticated_m3557461EF5BE6EEE887F2E568C6A0AE6700677A5 (onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* V_0 = NULL;
	onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* V_1 = NULL;
	onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* V_2 = NULL;
	{
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onPlayerAuthenticated_5;
		V_0 = L_0;
	}

IL_0006:
	{
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_1 = V_0;
		V_1 = L_1;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_2 = V_1;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF*)CastclassSealed((RuntimeObject*)L_4, onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF_il2cpp_TypeInfo_var));
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_5 = V_2;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_6 = V_1;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_7;
		L_7 = InterlockedCompareExchangeImpl<onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF*>((&((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onPlayerAuthenticated_5), L_5, L_6);
		V_0 = L_7;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_8 = V_0;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_9 = V_1;
		if ((!(((RuntimeObject*)(onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF*)L_8) == ((RuntimeObject*)(onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void YandexSDK.YaSDK::remove_onPlayerAuthenticated(YandexSDK.YaSDK/onPlayerAuthenticatedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_remove_onPlayerAuthenticated_m616ECB6FB4A6341DFC353C71F7DD895F88D07E7C (onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* V_0 = NULL;
	onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* V_1 = NULL;
	onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* V_2 = NULL;
	{
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onPlayerAuthenticated_5;
		V_0 = L_0;
	}

IL_0006:
	{
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_1 = V_0;
		V_1 = L_1;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_2 = V_1;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF*)CastclassSealed((RuntimeObject*)L_4, onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF_il2cpp_TypeInfo_var));
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_5 = V_2;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_6 = V_1;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_7;
		L_7 = InterlockedCompareExchangeImpl<onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF*>((&((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onPlayerAuthenticated_5), L_5, L_6);
		V_0 = L_7;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_8 = V_0;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_9 = V_1;
		if ((!(((RuntimeObject*)(onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF*)L_8) == ((RuntimeObject*)(onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void YandexSDK.YaSDK::add_onGetPlayerData(YandexSDK.YaSDK/onGetPlayerDataHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_add_onGetPlayerData_m4C881919D0087668E7107D34C612AE5AE8D632FF (onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* V_0 = NULL;
	onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* V_1 = NULL;
	onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* V_2 = NULL;
	{
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onGetPlayerData_6;
		V_0 = L_0;
	}

IL_0006:
	{
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_1 = V_0;
		V_1 = L_1;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_2 = V_1;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467*)CastclassSealed((RuntimeObject*)L_4, onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467_il2cpp_TypeInfo_var));
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_5 = V_2;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_6 = V_1;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_7;
		L_7 = InterlockedCompareExchangeImpl<onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467*>((&((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onGetPlayerData_6), L_5, L_6);
		V_0 = L_7;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_8 = V_0;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_9 = V_1;
		if ((!(((RuntimeObject*)(onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467*)L_8) == ((RuntimeObject*)(onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void YandexSDK.YaSDK::remove_onGetPlayerData(YandexSDK.YaSDK/onGetPlayerDataHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_remove_onGetPlayerData_mDAC6C8846E055E0D1800360462C79C6464417178 (onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* V_0 = NULL;
	onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* V_1 = NULL;
	onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* V_2 = NULL;
	{
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onGetPlayerData_6;
		V_0 = L_0;
	}

IL_0006:
	{
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_1 = V_0;
		V_1 = L_1;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_2 = V_1;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467*)CastclassSealed((RuntimeObject*)L_4, onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467_il2cpp_TypeInfo_var));
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_5 = V_2;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_6 = V_1;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_7;
		L_7 = InterlockedCompareExchangeImpl<onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467*>((&((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onGetPlayerData_6), L_5, L_6);
		V_0 = L_7;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_8 = V_0;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_9 = V_1;
		if ((!(((RuntimeObject*)(onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467*)L_8) == ((RuntimeObject*)(onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void YandexSDK.YaSDK::add_onInterstitialShown(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_add_onInterstitialShown_mFAA41EDBD544FE85C8128DA069C09AAFAC6E5933 (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onInterstitialShown_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)(&__this->___onInterstitialShown_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void YandexSDK.YaSDK::remove_onInterstitialShown(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_remove_onInterstitialShown_m7246CD164F24EB663701E69EEBC412784A40816B (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___onInterstitialShown_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)(&__this->___onInterstitialShown_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void YandexSDK.YaSDK::add_onInterstitialFailed(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_add_onInterstitialFailed_mC2DFC0C24B76605F91795FB46DD4BDCD068D7841 (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
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
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___onInterstitialFailed_8;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A**)(&__this->___onInterstitialFailed_8);
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
// System.Void YandexSDK.YaSDK::remove_onInterstitialFailed(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_remove_onInterstitialFailed_m1D2499CE8350450E90A44CDBA0EB3527E5EA5DB1 (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
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
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___onInterstitialFailed_8;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A**)(&__this->___onInterstitialFailed_8);
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
// System.Void YandexSDK.YaSDK::add_onRewardedAdOpened(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_add_onRewardedAdOpened_m648070E8AC95CE0098FA6A2224A0AA53BEFB4E9F (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___onRewardedAdOpened_9;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404** L_5 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404**)(&__this->___onRewardedAdOpened_9);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void YandexSDK.YaSDK::remove_onRewardedAdOpened(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_remove_onRewardedAdOpened_mB137736B1C695AB90949313C1813514E93A6DA62 (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___onRewardedAdOpened_9;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404** L_5 = (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404**)(&__this->___onRewardedAdOpened_9);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void YandexSDK.YaSDK::add_onRewardedAdReward(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_add_onRewardedAdReward_m5DE2CFCB8F7F3C76373105CCA8B70542F48D6FAF (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdReward_10;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>((&((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdReward_10), L_5, L_6);
		V_0 = L_7;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_8) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void YandexSDK.YaSDK::remove_onRewardedAdReward(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_remove_onRewardedAdReward_mDC6040B8641F910A4D275E59046135FFA4391726 (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdReward_10;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>((&((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdReward_10), L_5, L_6);
		V_0 = L_7;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_8) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void YandexSDK.YaSDK::add_onRewardedAdClosed(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_add_onRewardedAdClosed_m442904394CDFC614BBA75354485CCDACA23BDDB6 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdClosed_11;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>((&((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdClosed_11), L_5, L_6);
		V_0 = L_7;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_8) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void YandexSDK.YaSDK::remove_onRewardedAdClosed(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_remove_onRewardedAdClosed_mBC65B072D50B90373ADEF8849E74080EE8B9452C (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdClosed_11;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>((&((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdClosed_11), L_5, L_6);
		V_0 = L_7;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_8) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void YandexSDK.YaSDK::add_onRewardedAdError(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_add_onRewardedAdError_mAB7A3843063D0714CCB1457E8FE08826C0FD4A38 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdError_12;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>((&((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdError_12), L_5, L_6);
		V_0 = L_7;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_8) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void YandexSDK.YaSDK::remove_onRewardedAdError(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_remove_onRewardedAdError_mDCB27EF88D7221EFD236B06B84D25ED9872F589C (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdError_12;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>((&((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdError_12), L_5, L_6);
		V_0 = L_7;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_8) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void YandexSDK.YaSDK::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_Awake_mD989C6579AE80613FFA0C60E14E65D9AE60EA717 (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		goto IL_0026;
	}

IL_001a:
	{
		// instance = this;
		((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(__this, NULL);
	}

IL_0026:
	{
		// currentSecondsTillNextInterstitial = secondTillNextInterstitial;
		int32_t L_3 = __this->___secondTillNextInterstitial_18;
		__this->___currentSecondsTillNextInterstitial_19 = ((float)L_3);
		// StartCoroutine(CountTillNextInterstitial());
		RuntimeObject* L_4;
		L_4 = YaSDK_CountTillNextInterstitial_m0D66D92BD8C725B56158E801D03B94CBE375057F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::AuthenticateUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_AuthenticateUser_mD09DD59EC08900E547F27BAEE14FFFB1CCF622DB (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, const RuntimeMethod* method) 
{
	{
		// Authenticate();
		YaSDK_Authenticate_m27939593BBC9C0B46D460A44E328E042CD513F75(NULL);
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::OnCanReview(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_OnCanReview_m17A0CEAE4B84B04A6220C92EBCE68D24F0AFF4FA (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED7D39EDF70E08FE57B2522D102BF72B9E5D5331);
		s_Il2CppMethodInitialized = true;
	}
	YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* G_B2_0 = NULL;
	YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* G_B3_1 = NULL;
	{
		// canReview = (str == "yes")? true : false;
		String_t* L_0 = ___0_str;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralED7D39EDF70E08FE57B2522D102BF72B9E5D5331, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		G_B3_1->___canReview_15 = (bool)G_B3_0;
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::OnPlayerAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_OnPlayerAuthenticated_mEDD01B02EAA9DEEC1E15D6F0090476AC4F3E1F28 (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* G_B2_0 = NULL;
	onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* G_B1_0 = NULL;
	{
		// onPlayerAuthenticated?.Invoke();
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onPlayerAuthenticated_5;
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		onPlayerAuthenticatedHandler_Invoke_m93DCEF8882B4EEEC32B98105A8511AC1CF8E1839_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::GetSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_GetSave_m8B556C0915838D320D9D7E043EF90714D83F60F9 (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, const RuntimeMethod* method) 
{
	{
		// GetPlayerData();
		YaSDK_GetPlayerData_mCBB25840669DEC73C7BA9BFE974B34455EF4C597(NULL);
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::OnGetPlayerData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_OnGetPlayerData_m0ADF49E5809F9458D2E8F845DD4C59DE9965C0A6 (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, String_t* ___0_dataStr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		s_Il2CppMethodInitialized = true;
	}
	onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* G_B3_0 = NULL;
	onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* G_B2_0 = NULL;
	onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* G_B6_0 = NULL;
	onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* G_B5_0 = NULL;
	{
		// if (!dataStr.Contains("none"))
		String_t* L_0 = ___0_dataStr;
		bool L_1;
		L_1 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_0, _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// onGetPlayerData?.Invoke(dataStr);
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_2 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onGetPlayerData_6;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		String_t* L_4 = ___0_dataStr;
		onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A_inline(G_B3_0, L_4, NULL);
		return;
	}

IL_001e:
	{
		// onGetPlayerData?.Invoke(string.Empty);
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_5 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onGetPlayerData_6;
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* L_6 = L_5;
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0028;
		}
	}
	{
		return;
	}

IL_0028:
	{
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A_inline(G_B6_0, L_7, NULL);
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::OnGetPlayerPlatform(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_OnGetPlayerPlatform_m1C9C3B3ED614451EA144959879781716E0C90D4D (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, String_t* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4FDB95127E13C5A6EE35E465C184E86F9C46BB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE60E55FFA39342CB1DB630CDA80C3E018BCD5145);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_p;
		bool L_1;
		L_1 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, _stringLiteralE60E55FFA39342CB1DB630CDA80C3E018BCD5145, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = ___0_p;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralA4FDB95127E13C5A6EE35E465C184E86F9C46BB2, NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_001b:
	{
		// currentPlatform = Platform.phone;
		__this->___currentPlatform_14 = 0;
		// break;
		return;
	}

IL_0023:
	{
		// currentPlatform = Platform.desktop;
		__this->___currentPlatform_14 = 1;
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::ShowInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_ShowInterstitial_mA7EE4F78C10DC8C659D08AC8F6A8551325C5A7BB (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, const RuntimeMethod* method) 
{
	{
		// if (!isInterstitialReady)
		bool L_0 = __this->___isInterstitialReady_13;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// AudioListener.pause = true;
		AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33((bool)1, NULL);
		// isInterstitialReady = false;
		__this->___isInterstitialReady_13 = (bool)0;
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// ShowFullscreenAd();
		YaSDK_ShowFullscreenAd_mB0498A125959445958887CF601EDA75F6039BEC9(NULL);
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::ShowRewarded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_ShowRewarded_m43D61F0892D19D361FC07310FE95C4DD6D2A6D0F (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, String_t* ___0_placement, const RuntimeMethod* method) 
{
	{
		// rewardedAdPlacementAsInt = (ShowRewardedAd(placement));
		String_t* L_0 = ___0_placement;
		int32_t L_1;
		L_1 = YaSDK_ShowRewardedAd_m96C8E7989982183E631268C5DAD02805FC1AD5BD(L_0, NULL);
		__this->___rewardedAdPlacementAsInt_16 = L_1;
		// rewardedAdPlacement = (placement);
		String_t* L_2 = ___0_placement;
		__this->___rewardedAdPlacement_17 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedAdPlacement_17), (void*)L_2);
		// AudioListener.pause = true;
		AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33((bool)1, NULL);
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::OnInterstitialShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_OnInterstitialShown_mDDD5123D4806F9B53D073158B8109244083FDB8E (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, const RuntimeMethod* method) 
{
	{
		// AudioListener.pause = false;
		AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33((bool)0, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// StartCoroutine(CountTillNextInterstitial());
		RuntimeObject* L_0;
		L_0 = YaSDK_CountTillNextInterstitial_m0D66D92BD8C725B56158E801D03B94CBE375057F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// if (onInterstitialShown != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___onInterstitialShown_7;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// onInterstitialShown();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___onInterstitialShown_7;
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::OnInterstitialError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_OnInterstitialError_mD25B56BF6E3D221F1CDC2712EFB8156243961ACB (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, String_t* ___0_error, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// AudioListener.pause = false;
		AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33((bool)0, NULL);
		// StartCoroutine(CountTillNextInterstitial());
		RuntimeObject* L_0;
		L_0 = YaSDK_CountTillNextInterstitial_m0D66D92BD8C725B56158E801D03B94CBE375057F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// if (onInterstitialFailed != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = __this->___onInterstitialFailed_8;
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// onInterstitialFailed(error);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = __this->___onInterstitialFailed_8;
		String_t* L_4 = ___0_error;
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_3, L_4, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::OnRewardedOpen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_OnRewardedOpen_mFEF0A9004C1DBFFF678C8D2307FE7AD42FED3F3E (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, int32_t ___0_placement, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// if (onRewardedAdOpened != null)
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = __this->___onRewardedAdOpened_9;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// onRewardedAdOpened(placement);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = __this->___onRewardedAdOpened_9;
		int32_t L_2 = ___0_placement;
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_1, L_2, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::OnRewarded(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_OnRewarded_mA882EAB61DC16F9DAB0270DD9E1AA7CDA476BF70 (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, int32_t ___0_placement, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B4_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B3_0 = NULL;
	{
		// if (placement == rewardedAdPlacementAsInt)
		int32_t L_0 = ___0_placement;
		int32_t L_1 = __this->___rewardedAdPlacementAsInt_16;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0025;
		}
	}
	{
		// if (onRewardedAdReward != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdReward_10;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// onRewardedAdReward?.Invoke(rewardedAdPlacement);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdReward_10;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_001a:
	{
		String_t* L_5 = __this->___rewardedAdPlacement_17;
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B4_0, L_5, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::OnRewardedClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_OnRewardedClose_m538BD7D6BC3D461B250EC1007369A36F0A7E95DB (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, int32_t ___0_placement, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// AudioListener.pause = false;
		AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33((bool)0, NULL);
		// if (onRewardedAdClosed != null)
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdClosed_11;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// onRewardedAdClosed(placement);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdClosed_11;
		int32_t L_2 = ___0_placement;
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_1, L_2, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::OnRewardedError(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_OnRewardedError_m67AFFCEA3A9000C7CAB37B1F7033AB54232B8586 (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, int32_t ___0_placement, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// AudioListener.pause = false;
		AudioListener_set_pause_m4D52C9FFC6B10B0F281329FA0FB3CE2C64894F33((bool)0, NULL);
		// if (onRewardedAdError != null)
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdError_12;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// onRewardedAdError(placement);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = ((YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_StaticFields*)il2cpp_codegen_static_fields_for(YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150_il2cpp_TypeInfo_var))->___onRewardedAdError_12;
		int32_t L_2 = ___0_placement;
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(L_1, L_2, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void YandexSDK.YaSDK::OpenRateUsWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK_OpenRateUsWindow_mB2D874D3C0002C95DBACF2576F380BBCEBB9293D (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, const RuntimeMethod* method) 
{
	{
		// OpenRateUs();
		YaSDK_OpenRateUs_m2489D6F2F05F5B532E1D217EE1732CA2514A810A(NULL);
		// canReview = false;
		__this->___canReview_15 = (bool)0;
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.WaitForSeconds> YandexSDK.YaSDK::CountTillNextInterstitial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YaSDK_CountTillNextInterstitial_m0D66D92BD8C725B56158E801D03B94CBE375057F (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220* L_0 = (U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220*)il2cpp_codegen_object_new(U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220_il2cpp_TypeInfo_var);
		U3CCountTillNextInterstitialU3Ed__57__ctor_m86586930AA90AA4E08C2E3FF44186489DDD5767A(L_0, 0, NULL);
		U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void YandexSDK.YaSDK::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YaSDK__ctor_m5FA409088DA69FD080672C42F6DBA062742DE869 (YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string rewardedAdPlacement = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___rewardedAdPlacement_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedAdPlacement_17), (void*)L_0);
		// [SerializeField] private int secondTillNextInterstitial = 180;
		__this->___secondTillNextInterstitial_18 = ((int32_t)180);
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
void onPlayerAuthenticatedHandler_Invoke_m93DCEF8882B4EEEC32B98105A8511AC1CF8E1839_Multicast(onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* currentDelegate = reinterpret_cast<onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void onPlayerAuthenticatedHandler_Invoke_m93DCEF8882B4EEEC32B98105A8511AC1CF8E1839_OpenInst(onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void onPlayerAuthenticatedHandler_Invoke_m93DCEF8882B4EEEC32B98105A8511AC1CF8E1839_OpenStatic(onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void onPlayerAuthenticatedHandler_Invoke_m93DCEF8882B4EEEC32B98105A8511AC1CF8E1839_OpenStaticInvoker(onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
void onPlayerAuthenticatedHandler_Invoke_m93DCEF8882B4EEEC32B98105A8511AC1CF8E1839_ClosedStaticInvoker(onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF (onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void YandexSDK.YaSDK/onPlayerAuthenticatedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onPlayerAuthenticatedHandler__ctor_m701A4ABC299EDCF2C86D3FD5FEBD507F3CF71501 (onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&onPlayerAuthenticatedHandler_Invoke_m93DCEF8882B4EEEC32B98105A8511AC1CF8E1839_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&onPlayerAuthenticatedHandler_Invoke_m93DCEF8882B4EEEC32B98105A8511AC1CF8E1839_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&onPlayerAuthenticatedHandler_Invoke_m93DCEF8882B4EEEC32B98105A8511AC1CF8E1839_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&onPlayerAuthenticatedHandler_Invoke_m93DCEF8882B4EEEC32B98105A8511AC1CF8E1839_Multicast;
}
// System.Void YandexSDK.YaSDK/onPlayerAuthenticatedHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onPlayerAuthenticatedHandler_Invoke_m93DCEF8882B4EEEC32B98105A8511AC1CF8E1839 (onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult YandexSDK.YaSDK/onPlayerAuthenticatedHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* onPlayerAuthenticatedHandler_BeginInvoke_m00BEE8A66DE5434C0B70E7706D3D16417F0C269A (onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void YandexSDK.YaSDK/onPlayerAuthenticatedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onPlayerAuthenticatedHandler_EndInvoke_mA4AEDE8FFE286A056E1B3971FCB85901B03B8E59 (onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A_Multicast(onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* currentDelegate = reinterpret_cast<onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_item, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A_OpenInst(onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_item, method);
}
void onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A_OpenStatic(onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_item, method);
}
void onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A_OpenStaticInvoker(onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_item);
}
void onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A_ClosedStaticInvoker(onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_item);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467 (onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_item' to native representation
	char* ____0_item_marshaled = NULL;
	____0_item_marshaled = il2cpp_codegen_marshal_string(___0_item);

	// Native function invocation
	il2cppPInvokeFunc(____0_item_marshaled);

	// Marshaling cleanup of parameter '___0_item' native representation
	il2cpp_codegen_marshal_free(____0_item_marshaled);
	____0_item_marshaled = NULL;

}
// System.Void YandexSDK.YaSDK/onGetPlayerDataHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onGetPlayerDataHandler__ctor_m207931BB478D88A2E32F417BB6752B02695D9DEB (onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
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
				__this->___invoke_impl_1 = (intptr_t)&onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A_Multicast;
}
// System.Void YandexSDK.YaSDK/onGetPlayerDataHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A (onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* __this, String_t* ___0_item, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_item, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult YandexSDK.YaSDK/onGetPlayerDataHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* onGetPlayerDataHandler_BeginInvoke_m61D9E7BF1DCA5306C9C27946C350A2700C7009EF (onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* __this, String_t* ___0_item, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_item;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void YandexSDK.YaSDK/onGetPlayerDataHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onGetPlayerDataHandler_EndInvoke_mC0D2D276816BD7BD143ED4320514D0C19EA3B2CB (onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void YandexSDK.YaSDK/<CountTillNextInterstitial>d__57::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountTillNextInterstitialU3Ed__57__ctor_m86586930AA90AA4E08C2E3FF44186489DDD5767A (U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void YandexSDK.YaSDK/<CountTillNextInterstitial>d__57::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountTillNextInterstitialU3Ed__57_System_IDisposable_Dispose_m66866A4A512429C35551B5001F4967C5E1004A32 (U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean YandexSDK.YaSDK/<CountTillNextInterstitial>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCountTillNextInterstitialU3Ed__57_MoveNext_m8A4AB1222D0C7E1B9B604AA0BDFF62324CC96A15 (U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0049;
	}

IL_0020:
	{
		// currentSecondsTillNextInterstitial -=  Time.unscaledDeltaTime;
		YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* L_4 = V_1;
		YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* L_5 = V_1;
		float L_6 = L_5->___currentSecondsTillNextInterstitial_19;
		float L_7;
		L_7 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		L_4->___currentSecondsTillNextInterstitial_19 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// yield return null;
		__this->___U3CU3E2__current_1 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0049:
	{
		// while (currentSecondsTillNextInterstitial > 0)
		YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* L_8 = V_1;
		float L_9 = L_8->___currentSecondsTillNextInterstitial_19;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0020;
		}
	}
	{
		// isInterstitialReady = true;
		YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* L_10 = V_1;
		L_10->___isInterstitialReady_13 = (bool)1;
		// currentSecondsTillNextInterstitial = secondTillNextInterstitial;
		YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* L_11 = V_1;
		YaSDK_tD74323CB25B1AE37B863C060339E670D67E02150* L_12 = V_1;
		int32_t L_13 = L_12->___secondTillNextInterstitial_18;
		L_11->___currentSecondsTillNextInterstitial_19 = ((float)L_13);
		// }
		return (bool)0;
	}
}
// UnityEngine.WaitForSeconds YandexSDK.YaSDK/<CountTillNextInterstitial>d__57::System.Collections.Generic.IEnumerator<UnityEngine.WaitForSeconds>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* U3CCountTillNextInterstitialU3Ed__57_System_Collections_Generic_IEnumeratorU3CUnityEngine_WaitForSecondsU3E_get_Current_m154F78713E832DD8C5B29C5EB17A787E0AE3AAFA (U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220* __this, const RuntimeMethod* method) 
{
	{
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void YandexSDK.YaSDK/<CountTillNextInterstitial>d__57::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountTillNextInterstitialU3Ed__57_System_Collections_IEnumerator_Reset_mE66ED4DF697C4F68C6C2DCBB4E7BF60F42BB6731 (U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCountTillNextInterstitialU3Ed__57_System_Collections_IEnumerator_Reset_mE66ED4DF697C4F68C6C2DCBB4E7BF60F42BB6731_RuntimeMethod_var)));
	}
}
// System.Object YandexSDK.YaSDK/<CountTillNextInterstitial>d__57::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountTillNextInterstitialU3Ed__57_System_Collections_IEnumerator_get_Current_mD07486E1F6C345932BDB0B35FAB238F526414E32 (U3CCountTillNextInterstitialU3Ed__57_t93A0A23B38A3410B55118D745AD6D0755938D220* __this, const RuntimeMethod* method) 
{
	{
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void onPlayerAuthenticatedHandler_Invoke_m93DCEF8882B4EEEC32B98105A8511AC1CF8E1839_inline (onPlayerAuthenticatedHandler_t9C0E2CC2329E83033795E86D3C30892929DB73FF* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void onGetPlayerDataHandler_Invoke_m47B876F4D2CC9730C2E1E434439E6E14154B5C0A_inline (onGetPlayerDataHandler_t221DAA2031928F30AFBF8A4FA1049CF3C7A0C467* __this, String_t* ___0_item, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_item, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
