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

// Mono.Security.ASN1
struct ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Mono.Security.X509.X509Certificate
struct X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1;
// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5;
// System.Security.Cryptography.CspParameters
struct CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC;
// System.Security.Cryptography.DSA
struct DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Security.Cryptography.RSA
struct RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0020AFCD2A595DC9D38B0B64F22A804DDD545B19;
IL2CPP_EXTERN_C String_t* _stringLiteral1045B6110EDC3126BBD5A19E37F361FC6C1BEF73;
IL2CPP_EXTERN_C String_t* _stringLiteral1A9D5DF8D363B563E3F4B00A79ABC1FCCF634926;
IL2CPP_EXTERN_C String_t* _stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D;
IL2CPP_EXTERN_C String_t* _stringLiteral5347E948E2C7139AA4A2019B2258B383380AAF28;
IL2CPP_EXTERN_C String_t* _stringLiteral53815C6246623C4D6881BDFC9739F0995E0348D7;
IL2CPP_EXTERN_C String_t* _stringLiteral64C20978E7AB9FC2DA82BFCC570876980F075DCA;
IL2CPP_EXTERN_C String_t* _stringLiteral6F27085477FEF835533F57795ECCC582A399A354;
IL2CPP_EXTERN_C String_t* _stringLiteral713F80EC870389B7162B470F3D04ACB2C5D5A99A;
IL2CPP_EXTERN_C String_t* _stringLiteral726CEA169077B8664BA7F5B82683F22AD5DD43CB;
IL2CPP_EXTERN_C String_t* _stringLiteral76BD78135D3BAEAB59B575277E9B53FED6B66341;
IL2CPP_EXTERN_C String_t* _stringLiteral7B73AE650FB092AAEEF5A713A7829FD5C6DB2252;
IL2CPP_EXTERN_C String_t* _stringLiteral860E8E41981CF09A35AF77AFF02EC3B0843F918C;
IL2CPP_EXTERN_C String_t* _stringLiteral9631FC2517EF15E3814EC0A1FCCF9820A879D95E;
IL2CPP_EXTERN_C String_t* _stringLiteral99226315FDF5AD4FC8F149EACEFFD00809BB7E2A;
IL2CPP_EXTERN_C String_t* _stringLiteralA1269F510FE5417827959FDFE8E6E0FCD9BAD5E9;
IL2CPP_EXTERN_C String_t* _stringLiteralA1435E53973560651ADEDEBD6BD8B882F5D9ADEC;
IL2CPP_EXTERN_C String_t* _stringLiteralB00FD2CDC8278FCFC000C09E9FEA2770BD6D8E8D;
IL2CPP_EXTERN_C String_t* _stringLiteralC5B7E93C5B246F4073777D69E866EDB3F00FCCFD;
IL2CPP_EXTERN_C String_t* _stringLiteralDA565DE66B4789974C1F4B3AAD64CFA280FCF306;
IL2CPP_EXTERN_C String_t* _stringLiteralE0D38CB0C52B5D2181A97C29DE75FAFE93454DD6;
IL2CPP_EXTERN_C String_t* _stringLiteralE27CA3F3042EF2220CE3FB15F5626369069FFC3E;
IL2CPP_EXTERN_C String_t* _stringLiteralFF9D342CFAFB05A5935D2EFC6B9DEEF4CD0D7F7E;
IL2CPP_EXTERN_C const RuntimeMethod* ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateKeyInfo_DecodeDSA_m079B9B162482341C9AE062D24CE3BB86D6723416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateKeyInfo_DecodeRSA_mEAF2C11CDFF27504F19297E9BFFC7AEA5E76C457_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateKeyInfo_Encode_m0B6682733B5764EC52E9E2551BBEDDC3F4C74133_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ContentInfo_GetASN1_m76B0C44E6F6A92A8EE1811B7A635AF5383482939_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ContentInfo__ctor_m3314A5824571AE429FD8181D94314025223D39F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ContentInfo__ctor_mF4223283B123E27B30F936CCEFE18BEE4CC6430E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EncryptedData_get_EncryptedContent_mBA18486D808A211596313C21AD8D1CC4CA7AD675_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EncryptedPrivateKeyInfo_get_EncryptedData_m41DB5DB34320FF2B84BF2811ADFF9B449E3B9868_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EncryptedPrivateKeyInfo_get_Salt_m5529731CFA0E535CA09D34EC420D78E143E8C879_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PrivateKeyInfo_DecodeDSA_m079B9B162482341C9AE062D24CE3BB86D6723416_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PrivateKeyInfo_DecodeRSA_mEAF2C11CDFF27504F19297E9BFFC7AEA5E76C457_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PrivateKeyInfo_Encode_m0B6682733B5764EC52E9E2551BBEDDC3F4C74133_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PrivateKeyInfo_Encode_m5BD66DC87E5D2E9BE4538390321D06C44ED7140C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PrivateKeyInfo_RemoveLeadingZero_m095360C99508EC21B354AF0AC6C4EA67AC48A6BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PrivateKeyInfo__ctor_m513A5BDF96132DFA8D718CB5E761D1C39C214DAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PrivateKeyInfo_get_PrivateKey_mFDE27BD70465C0C71949DA3E3E4F752AB7AE1263_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509CertificateEnumerator_MoveNext_m6D9B757FF19EE0AB676DF601D145009646579840_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m7F2C17CFD3DFD79B14CCEF343CA9C593C064169F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m6B7E6EE6C087A2833A11BAF537C0D162619AF889_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m60E14E055A388DEF34E5D4AB19A73C2789D8B00B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509CertificateEnumerator__ctor_m121D2627B82462B1F3AF7637F188AA1013879E1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509CertificateEnumerator_get_Current_mA9AD4D624A06130CD4A92FCDC0B03A52425D5BE6_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Mono.Security.ASN1
struct  ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8, ___m_aValue_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_aValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8, ___elist_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elist_2), (void*)value);
	}
};


// Mono.Security.Cryptography.PKCS8_EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8_EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8_EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8_EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8_EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____algorithm_0), (void*)value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55, ____salt_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____salt_1), (void*)value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55, ____data_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}
};


// Mono.Security.Cryptography.PKCS8_PrivateKeyInfo
struct  PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::_key
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::_list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____algorithm_1), (void*)value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93, ____key_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_2), (void*)value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93, ____list_3)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__list_3() const { return ____list_3; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_3), (void*)value);
	}
};


// Mono.Security.PKCS7_ContentInfo
struct  ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7_ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7_ContentInfo::content
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2, ___content_1)); }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * get_content_1() const { return ___content_1; }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_1), (void*)value);
	}
};


// Mono.Security.PKCS7_EncryptedData
struct  EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7_EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7_ContentInfo Mono.Security.PKCS7_EncryptedData::_content
	ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * ____content_1;
	// Mono.Security.PKCS7_ContentInfo Mono.Security.PKCS7_EncryptedData::_encryptionAlgorithm
	ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7_EncryptedData::_encrypted
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1, ____content_1)); }
	inline ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * get__content_1() const { return ____content_1; }
	inline ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_1), (void*)value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1, ____encryptionAlgorithm_2)); }
	inline ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encryptionAlgorithm_2), (void*)value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1, ____encrypted_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encrypted_3), (void*)value);
	}
};


// Mono.Security.X509.X509CertificateCollection_X509CertificateEnumerator
struct  X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection_X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct  ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_4;

public:
	inline static int32_t get_offset_of_emptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields, ___emptyArray_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_4() const { return ___emptyArray_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_4() { return &___emptyArray_4; }
	inline void set_emptyArray_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_4), (void*)value);
	}
};


// System.Collections.CollectionBase
struct  CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB, ___list_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_list_0() const { return ___list_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_tA093382691AAF32E84D3063E83C59472F9714499* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LegalKeySizesValue_1), (void*)value);
	}
};


// System.Security.Cryptography.CspParameters
struct  CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_0;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_1;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_2;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_3;
	// System.Int32 System.Security.Cryptography.CspParameters::m_flags
	int32_t ___m_flags_4;

public:
	inline static int32_t get_offset_of_ProviderType_0() { return static_cast<int32_t>(offsetof(CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC, ___ProviderType_0)); }
	inline int32_t get_ProviderType_0() const { return ___ProviderType_0; }
	inline int32_t* get_address_of_ProviderType_0() { return &___ProviderType_0; }
	inline void set_ProviderType_0(int32_t value)
	{
		___ProviderType_0 = value;
	}

	inline static int32_t get_offset_of_ProviderName_1() { return static_cast<int32_t>(offsetof(CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC, ___ProviderName_1)); }
	inline String_t* get_ProviderName_1() const { return ___ProviderName_1; }
	inline String_t** get_address_of_ProviderName_1() { return &___ProviderName_1; }
	inline void set_ProviderName_1(String_t* value)
	{
		___ProviderName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProviderName_1), (void*)value);
	}

	inline static int32_t get_offset_of_KeyContainerName_2() { return static_cast<int32_t>(offsetof(CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC, ___KeyContainerName_2)); }
	inline String_t* get_KeyContainerName_2() const { return ___KeyContainerName_2; }
	inline String_t** get_address_of_KeyContainerName_2() { return &___KeyContainerName_2; }
	inline void set_KeyContainerName_2(String_t* value)
	{
		___KeyContainerName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyContainerName_2), (void*)value);
	}

	inline static int32_t get_offset_of_KeyNumber_3() { return static_cast<int32_t>(offsetof(CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC, ___KeyNumber_3)); }
	inline int32_t get_KeyNumber_3() const { return ___KeyNumber_3; }
	inline int32_t* get_address_of_KeyNumber_3() { return &___KeyNumber_3; }
	inline void set_KeyNumber_3(int32_t value)
	{
		___KeyNumber_3 = value;
	}

	inline static int32_t get_offset_of_m_flags_4() { return static_cast<int32_t>(offsetof(CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC, ___m_flags_4)); }
	inline int32_t get_m_flags_4() const { return ___m_flags_4; }
	inline int32_t* get_address_of_m_flags_4() { return &___m_flags_4; }
	inline void set_m_flags_4(int32_t value)
	{
		___m_flags_4 = value;
	}
};


// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50  : public RuntimeObject
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

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
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


// System.Security.Cryptography.DSA
struct  DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7  : public AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F
{
public:

public:
};


// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1 
{
public:
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___P_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Q_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___G_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Y_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___J_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___X_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Seed_6;
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___P_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P_0), (void*)value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___Q_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Q_1), (void*)value);
	}

	inline static int32_t get_offset_of_G_2() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___G_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_G_2() const { return ___G_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_G_2() { return &___G_2; }
	inline void set_G_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___G_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___G_2), (void*)value);
	}

	inline static int32_t get_offset_of_Y_3() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___Y_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Y_3() const { return ___Y_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Y_3() { return &___Y_3; }
	inline void set_Y_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Y_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Y_3), (void*)value);
	}

	inline static int32_t get_offset_of_J_4() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___J_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_J_4() const { return ___J_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_J_4() { return &___J_4; }
	inline void set_J_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___J_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___J_4), (void*)value);
	}

	inline static int32_t get_offset_of_X_5() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___X_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_X_5() const { return ___X_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_X_5() { return &___X_5; }
	inline void set_X_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___X_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___X_5), (void*)value);
	}

	inline static int32_t get_offset_of_Seed_6() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___Seed_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Seed_6() const { return ___Seed_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Seed_6() { return &___Seed_6; }
	inline void set_Seed_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Seed_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Seed_6), (void*)value);
	}

	inline static int32_t get_offset_of_Counter_7() { return static_cast<int32_t>(offsetof(DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1, ___Counter_7)); }
	inline int32_t get_Counter_7() const { return ___Counter_7; }
	inline int32_t* get_address_of_Counter_7() { return &___Counter_7; }
	inline void set_Counter_7(int32_t value)
	{
		___Counter_7 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___P_0;
	Il2CppSafeArray/*NONE*/* ___Q_1;
	Il2CppSafeArray/*NONE*/* ___G_2;
	Il2CppSafeArray/*NONE*/* ___Y_3;
	Il2CppSafeArray/*NONE*/* ___J_4;
	Il2CppSafeArray/*NONE*/* ___X_5;
	Il2CppSafeArray/*NONE*/* ___Seed_6;
	int32_t ___Counter_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___P_0;
	Il2CppSafeArray/*NONE*/* ___Q_1;
	Il2CppSafeArray/*NONE*/* ___G_2;
	Il2CppSafeArray/*NONE*/* ___Y_3;
	Il2CppSafeArray/*NONE*/* ___J_4;
	Il2CppSafeArray/*NONE*/* ___X_5;
	Il2CppSafeArray/*NONE*/* ___Seed_6;
	int32_t ___Counter_7;
};

// System.Security.Cryptography.RSA
struct  RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B  : public AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F
{
public:

public:
};


// System.Security.Cryptography.RSAParameters
struct  RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Exponent_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Modulus_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___P_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Q_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___DP_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___DQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___InverseQ_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___D_7;

public:
	inline static int32_t get_offset_of_Exponent_0() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___Exponent_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Exponent_0() const { return ___Exponent_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Exponent_0() { return &___Exponent_0; }
	inline void set_Exponent_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Exponent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Exponent_0), (void*)value);
	}

	inline static int32_t get_offset_of_Modulus_1() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___Modulus_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Modulus_1() const { return ___Modulus_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Modulus_1() { return &___Modulus_1; }
	inline void set_Modulus_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Modulus_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Modulus_1), (void*)value);
	}

	inline static int32_t get_offset_of_P_2() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___P_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_P_2() const { return ___P_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_P_2() { return &___P_2; }
	inline void set_P_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___P_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P_2), (void*)value);
	}

	inline static int32_t get_offset_of_Q_3() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___Q_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Q_3() const { return ___Q_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Q_3() { return &___Q_3; }
	inline void set_Q_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Q_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Q_3), (void*)value);
	}

	inline static int32_t get_offset_of_DP_4() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___DP_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_DP_4() const { return ___DP_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_DP_4() { return &___DP_4; }
	inline void set_DP_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___DP_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DP_4), (void*)value);
	}

	inline static int32_t get_offset_of_DQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___DQ_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_DQ_5() const { return ___DQ_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_DQ_5() { return &___DQ_5; }
	inline void set_DQ_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___DQ_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DQ_5), (void*)value);
	}

	inline static int32_t get_offset_of_InverseQ_6() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___InverseQ_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_InverseQ_6() const { return ___InverseQ_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_InverseQ_6() { return &___InverseQ_6; }
	inline void set_InverseQ_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___InverseQ_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InverseQ_6), (void*)value);
	}

	inline static int32_t get_offset_of_D_7() { return static_cast<int32_t>(offsetof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28, ___D_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_D_7() const { return ___D_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_D_7() { return &___D_7; }
	inline void set_D_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___D_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___D_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Exponent_0;
	Il2CppSafeArray/*NONE*/* ___Modulus_1;
	Il2CppSafeArray/*NONE*/* ___P_2;
	Il2CppSafeArray/*NONE*/* ___Q_3;
	Il2CppSafeArray/*NONE*/* ___DP_4;
	Il2CppSafeArray/*NONE*/* ___DQ_5;
	Il2CppSafeArray/*NONE*/* ___InverseQ_6;
	Il2CppSafeArray/*NONE*/* ___D_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Exponent_0;
	Il2CppSafeArray/*NONE*/* ___Modulus_1;
	Il2CppSafeArray/*NONE*/* ___P_2;
	Il2CppSafeArray/*NONE*/* ___Q_3;
	Il2CppSafeArray/*NONE*/* ___DP_4;
	Il2CppSafeArray/*NONE*/* ___DQ_5;
	Il2CppSafeArray/*NONE*/* ___InverseQ_6;
	Il2CppSafeArray/*NONE*/* ___D_7;
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


// Mono.Security.X509.X509Certificate
struct  X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_signaturealgoparams_13;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * ____rsa_14;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * ____dsa_15;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_16;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___serialnumber_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___issuerUniqueID_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___subjectUniqueID_19;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * ___extensions_20;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___decoder_0)); }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_encodedcert_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encodedcert_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_from_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_until_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___issuer_4)); }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuer_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_issuername_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keyalgo_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keyalgoparams_7), (void*)value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___subject_8)); }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * get_subject_8() const { return ___subject_8; }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subject_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_publickey_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_publickey_10), (void*)value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___signature_11)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signature_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_signaturealgo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_signaturealgoparams_13), (void*)value);
	}

	inline static int32_t get_offset_of__rsa_14() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ____rsa_14)); }
	inline RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * get__rsa_14() const { return ____rsa_14; }
	inline RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B ** get_address_of__rsa_14() { return &____rsa_14; }
	inline void set__rsa_14(RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * value)
	{
		____rsa_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rsa_14), (void*)value);
	}

	inline static int32_t get_offset_of__dsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ____dsa_15)); }
	inline DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * get__dsa_15() const { return ____dsa_15; }
	inline DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 ** get_address_of__dsa_15() { return &____dsa_15; }
	inline void set__dsa_15(DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * value)
	{
		____dsa_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dsa_15), (void*)value);
	}

	inline static int32_t get_offset_of_version_16() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___version_16)); }
	inline int32_t get_version_16() const { return ___version_16; }
	inline int32_t* get_address_of_version_16() { return &___version_16; }
	inline void set_version_16(int32_t value)
	{
		___version_16 = value;
	}

	inline static int32_t get_offset_of_serialnumber_17() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___serialnumber_17)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_serialnumber_17() const { return ___serialnumber_17; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_serialnumber_17() { return &___serialnumber_17; }
	inline void set_serialnumber_17(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___serialnumber_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialnumber_17), (void*)value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_18() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___issuerUniqueID_18)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_issuerUniqueID_18() const { return ___issuerUniqueID_18; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_issuerUniqueID_18() { return &___issuerUniqueID_18; }
	inline void set_issuerUniqueID_18(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___issuerUniqueID_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuerUniqueID_18), (void*)value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___subjectUniqueID_19)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_subjectUniqueID_19() const { return ___subjectUniqueID_19; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_subjectUniqueID_19() { return &___subjectUniqueID_19; }
	inline void set_subjectUniqueID_19(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___subjectUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subjectUniqueID_19), (void*)value);
	}

	inline static int32_t get_offset_of_extensions_20() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___extensions_20)); }
	inline X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * get_extensions_20() const { return ___extensions_20; }
	inline X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 ** get_address_of_extensions_20() { return &___extensions_20; }
	inline void set_extensions_20(X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * value)
	{
		___extensions_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_20), (void*)value);
	}
};

struct X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_21;

public:
	inline static int32_t get_offset_of_encoding_error_21() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4_StaticFields, ___encoding_error_21)); }
	inline String_t* get_encoding_error_21() const { return ___encoding_error_21; }
	inline String_t** get_address_of_encoding_error_21() { return &___encoding_error_21; }
	inline void set_encoding_error_21(String_t* value)
	{
		___encoding_error_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_error_21), (void*)value);
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

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t8981EF4CA441D46FBF242ABAA443608B474586D1 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CspProviderFlags_t8981EF4CA441D46FBF242ABAA443608B474586D1, ___value___2)); }
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

// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7  : public RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * ___store_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * ___rsa_8;

public:
	inline static int32_t get_offset_of_store_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___store_3)); }
	inline KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * get_store_3() const { return ___store_3; }
	inline KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A ** get_address_of_store_3() { return &___store_3; }
	inline void set_store_3(KeyPairPersistence_t7F7E8811D03A25C0251BF255AB94BAF57E965D9A * value)
	{
		___store_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___store_3), (void*)value);
	}

	inline static int32_t get_offset_of_persistKey_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___persistKey_4)); }
	inline bool get_persistKey_4() const { return ___persistKey_4; }
	inline bool* get_address_of_persistKey_4() { return &___persistKey_4; }
	inline void set_persistKey_4(bool value)
	{
		___persistKey_4 = value;
	}

	inline static int32_t get_offset_of_persisted_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___persisted_5)); }
	inline bool get_persisted_5() const { return ___persisted_5; }
	inline bool* get_address_of_persisted_5() { return &___persisted_5; }
	inline void set_persisted_5(bool value)
	{
		___persisted_5 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___privateKeyExportable_6)); }
	inline bool get_privateKeyExportable_6() const { return ___privateKeyExportable_6; }
	inline bool* get_address_of_privateKeyExportable_6() { return &___privateKeyExportable_6; }
	inline void set_privateKeyExportable_6(bool value)
	{
		___privateKeyExportable_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_rsa_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7, ___rsa_8)); }
	inline RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * get_rsa_8() const { return ___rsa_8; }
	inline RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 ** get_address_of_rsa_8() { return &___rsa_8; }
	inline void set_rsa_8(RSAManaged_t39EF82A0D6040ACF38E3C8A99982838521A33E65 * value)
	{
		___rsa_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rsa_8), (void*)value);
	}
};

struct RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_StaticFields
{
public:
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_2;

public:
	inline static int32_t get_offset_of_s_UseMachineKeyStore_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_StaticFields, ___s_UseMachineKeyStore_2)); }
	inline int32_t get_s_UseMachineKeyStore_2() const { return ___s_UseMachineKeyStore_2; }
	inline int32_t* get_address_of_s_UseMachineKeyStore_2() { return &___s_UseMachineKeyStore_2; }
	inline void set_s_UseMachineKeyStore_2(int32_t value)
	{
		___s_UseMachineKeyStore_2 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Mono.Security.Cryptography.RSAManaged_KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA  : public MulticastDelegate_t
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


// System.Security.Cryptography.CryptographicException
struct  CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, uint8_t ___tag0, const RuntimeMethod* method);
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_mF4223283B123E27B30F936CCEFE18BEE4CC6430E (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method);
// System.Byte Mono.Security.ASN1::get_Tag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ASN1Convert_ToOid_m6F617C7AC370CC5D6EAC2F813D8F7B73A3D8F61F (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::GetASN1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ContentInfo_GetASN1_m76B0C44E6F6A92A8EE1811B7A635AF5383482939 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1Convert_FromOid_mB7601D9CF044DB51F7B944AFCEC2E3F5ECD027CB (String_t* ___oid0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method);
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedData__ctor_m34900CCFBD74FE77EC9FD67B2E59A684410ECFF4 (EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1 * __this, const RuntimeMethod* method);
// System.Byte[] Mono.Security.ASN1::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_m41A77A944949D15779BAF339738C337872DB32F9 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, String_t* ___oid0, const RuntimeMethod* method);
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContentInfo_set_Content_mD1D8952C8B0DFD36F7F811F11F2A4DB35EA9A992_inline (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___value0, const RuntimeMethod* method);
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo__ctor_m6DD099BABFA876AF0B42EB38B46C14EEBCB2CC5B (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1 (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * RandomNumberGenerator_Create_m04A5418F8572F0498EE0659633B4C0620CB55721 (const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31 (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1Convert_ToInt32_m381CC48A18572F6F58C4332C3E07906562034A77 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo__ctor_m513A5BDF96132DFA8D718CB5E761D1C39C214DAC (PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62 (PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_RemoveLeadingZero_m095360C99508EC21B354AF0AC6C4EA67AC48A6BB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bigInt0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bigInt0, int32_t ___length1, const RuntimeMethod* method);
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * RSA_Create_m044F1B4384248B4C9FEA4DAB01DB85B0A829A383 (const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CspParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CspParameters__ctor_mA5F11E1EA0F0841876916834296DD6C49A0D5978 (CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CspParameters::set_Flags(System.Security.Cryptography.CspProviderFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CspParameters_set_Flags_m73AF2CE4BA5726935B70AD6242491B14C7294A55 (CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_m044CC794956315D9C47B26A043EE435534EFFAB1 (RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * __this, CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC * ___parameters0, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, uint8_t ___tag0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromUnsignedBigInteger(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___big0, const RuntimeMethod* method);
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * DSA_Create_m1BB98278D12EF7F48DDF0B52FCF7CA0602AFC618 (const RuntimeMethod* method);
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Encode(System.Security.Cryptography.RSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_Encode_m5BD66DC87E5D2E9BE4538390321D06C44ED7140C (RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * ___rsa0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Encode(System.Security.Cryptography.DSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_Encode_m5959F34D6EB743D351A0E0E6B2B24910D43EE139 (DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * ___dsa0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_mE2C0822BD84EF90D7851CC9D164E187DED6EADF1 (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * __this, String_t* ___format0, String_t* ___insert1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.PKCS7_ContentInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_mF4223283B123E27B30F936CCEFE18BEE4CC6430E (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContentInfo__ctor_mF4223283B123E27B30F936CCEFE18BEE4CC6430E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142(L_0, (uint8_t)((int32_t)160), /*hidden argument*/NULL);
		__this->set_content_1(L_0);
		return;
	}
}
// System.Void Mono.Security.PKCS7_ContentInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_m41A77A944949D15779BAF339738C337872DB32F9 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	{
		ContentInfo__ctor_mF4223283B123E27B30F936CCEFE18BEE4CC6430E(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oid0;
		__this->set_contentType_0(L_0);
		return;
	}
}
// System.Void Mono.Security.PKCS7_ContentInfo::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_m3314A5824571AE429FD8181D94314025223D39F6 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContentInfo__ctor_m3314A5824571AE429FD8181D94314025223D39F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_1, L_0, /*hidden argument*/NULL);
		ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.PKCS7_ContentInfo::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = ___asn10;
		NullCheck(L_0);
		uint8_t L_1 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0022;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = ___asn10;
		NullCheck(L_2);
		int32_t L_3 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_4 = ___asn10;
		NullCheck(L_4);
		int32_t L_5 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)2)))
		{
			goto IL_002d;
		}
	}

IL_0022:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_6, _stringLiteral1A9D5DF8D363B563E3F4B00A79ABC1FCCF634926, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6_RuntimeMethod_var);
	}

IL_002d:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_7 = ___asn10;
		NullCheck(L_7);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_8 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_7, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		uint8_t L_9 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)6)))
		{
			goto IL_0047;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_10, _stringLiteralE27CA3F3042EF2220CE3FB15F5626369069FFC3E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6_RuntimeMethod_var);
	}

IL_0047:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_11 = ___asn10;
		NullCheck(L_11);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_12 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_11, 0, /*hidden argument*/NULL);
		String_t* L_13 = ASN1Convert_ToOid_m6F617C7AC370CC5D6EAC2F813D8F7B73A3D8F61F(L_12, /*hidden argument*/NULL);
		__this->set_contentType_0(L_13);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_14 = ___asn10;
		NullCheck(L_14);
		int32_t L_15 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_008d;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_16 = ___asn10;
		NullCheck(L_16);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_17 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_16, 1, /*hidden argument*/NULL);
		NullCheck(L_17);
		uint8_t L_18 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)160))))
		{
			goto IL_0080;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_19 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_19, _stringLiteral713F80EC870389B7162B470F3D04ACB2C5D5A99A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ContentInfo__ctor_mEFAA11C9FAA8A91A3F5F7AC896B79AFB354569F6_RuntimeMethod_var);
	}

IL_0080:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_20 = ___asn10;
		NullCheck(L_20);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_21 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_20, 1, /*hidden argument*/NULL);
		__this->set_content_1(L_21);
	}

IL_008d:
	{
		return;
	}
}
// Mono.Security.ASN1 Mono.Security.PKCS7_ContentInfo::get_ASN1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ContentInfo_get_ASN1_m9F6079ADC3917582F67F7E4E9AFD596DABF57FDD (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, const RuntimeMethod* method)
{
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = ContentInfo_GetASN1_m76B0C44E6F6A92A8EE1811B7A635AF5383482939(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.PKCS7_ContentInfo::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ContentInfo_get_Content_m36F75EEFBB1ED3608A6270E02F059BDB553546EA (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, const RuntimeMethod* method)
{
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = __this->get_content_1();
		return L_0;
	}
}
// System.Void Mono.Security.PKCS7_ContentInfo::set_Content(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo_set_Content_mD1D8952C8B0DFD36F7F811F11F2A4DB35EA9A992 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___value0, const RuntimeMethod* method)
{
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = ___value0;
		__this->set_content_1(L_0);
		return;
	}
}
// System.String Mono.Security.PKCS7_ContentInfo::get_ContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContentInfo_get_ContentType_m3042D4F065AD15EA03B33F6A266C9F1381D6A5FC (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_contentType_0();
		return L_0;
	}
}
// System.Void Mono.Security.PKCS7_ContentInfo::set_ContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContentInfo_set_ContentType_m21AC696B1C2DADCF1F39F12AA7B37160D5DA415D (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_contentType_0(L_0);
		return;
	}
}
// Mono.Security.ASN1 Mono.Security.PKCS7_ContentInfo::GetASN1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ContentInfo_GetASN1_m76B0C44E6F6A92A8EE1811B7A635AF5383482939 (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ContentInfo_GetASN1_m76B0C44E6F6A92A8EE1811B7A635AF5383482939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142(L_0, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = V_0;
		String_t* L_2 = __this->get_contentType_0();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_3 = ASN1Convert_FromOid_mB7601D9CF044DB51F7B944AFCEC2E3F5ECD027CB(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_1, L_3, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_4 = __this->get_content_1();
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = __this->get_content_1();
		NullCheck(L_5);
		int32_t L_6 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_7 = V_0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_8 = __this->get_content_1();
		NullCheck(L_7);
		ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_7, L_8, /*hidden argument*/NULL);
	}

IL_003d:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_9 = V_0;
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
// System.Void Mono.Security.PKCS7_EncryptedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedData__ctor_m34900CCFBD74FE77EC9FD67B2E59A684410ECFF4 (EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set__version_0((uint8_t)0);
		return;
	}
}
// System.Void Mono.Security.PKCS7_EncryptedData::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC (EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_1 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_2 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B7_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B6_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B9_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B8_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B11_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B10_0 = NULL;
	{
		EncryptedData__ctor_m34900CCFBD74FE77EC9FD67B2E59A684410ECFF4(__this, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = ___asn10;
		NullCheck(L_0);
		uint8_t L_1 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0019;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = ___asn10;
		NullCheck(L_2);
		int32_t L_3 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0024;
		}
	}

IL_0019:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_4, _stringLiteral1045B6110EDC3126BBD5A19E37F361FC6C1BEF73, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_RuntimeMethod_var);
	}

IL_0024:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = ___asn10;
		NullCheck(L_5);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_6 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_5, 0, /*hidden argument*/NULL);
		NullCheck(L_6);
		uint8_t L_7 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_8, _stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_RuntimeMethod_var);
	}

IL_003e:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_9 = ___asn10;
		NullCheck(L_9);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_10 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_9, 0, /*hidden argument*/NULL);
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = 0;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->set__version_0(L_13);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_14 = ___asn10;
		NullCheck(L_14);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_15 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_14, 1, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_16 = L_15;
		NullCheck(L_16);
		uint8_t L_17 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_16, /*hidden argument*/NULL);
		G_B6_0 = L_16;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)48))))
		{
			G_B7_0 = L_16;
			goto IL_006e;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_18 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_18, _stringLiteral99226315FDF5AD4FC8F149EACEFFD00809BB7E2A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_RuntimeMethod_var);
	}

IL_006e:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_19 = G_B7_0;
		NullCheck(L_19);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_20 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_19, 0, /*hidden argument*/NULL);
		V_0 = L_20;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_21 = V_0;
		NullCheck(L_21);
		uint8_t L_22 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_21, /*hidden argument*/NULL);
		G_B8_0 = L_19;
		if ((((int32_t)L_22) == ((int32_t)6)))
		{
			G_B9_0 = L_19;
			goto IL_008a;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_23 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_23, _stringLiteral6F27085477FEF835533F57795ECCC582A399A354, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_RuntimeMethod_var);
	}

IL_008a:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_24 = V_0;
		String_t* L_25 = ASN1Convert_ToOid_m6F617C7AC370CC5D6EAC2F813D8F7B73A3D8F61F(L_24, /*hidden argument*/NULL);
		ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * L_26 = (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 *)il2cpp_codegen_object_new(ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2_il2cpp_TypeInfo_var);
		ContentInfo__ctor_m41A77A944949D15779BAF339738C337872DB32F9(L_26, L_25, /*hidden argument*/NULL);
		__this->set__content_1(L_26);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_27 = G_B9_0;
		NullCheck(L_27);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_28 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_27, 1, /*hidden argument*/NULL);
		V_1 = L_28;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_29 = V_1;
		NullCheck(L_29);
		uint8_t L_30 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_29, /*hidden argument*/NULL);
		G_B10_0 = L_27;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)48))))
		{
			G_B11_0 = L_27;
			goto IL_00b8;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_31 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_31, _stringLiteral860E8E41981CF09A35AF77AFF02EC3B0843F918C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_RuntimeMethod_var);
	}

IL_00b8:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_32 = V_1;
		NullCheck(L_32);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_33 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_32, 0, /*hidden argument*/NULL);
		String_t* L_34 = ASN1Convert_ToOid_m6F617C7AC370CC5D6EAC2F813D8F7B73A3D8F61F(L_33, /*hidden argument*/NULL);
		ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * L_35 = (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 *)il2cpp_codegen_object_new(ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2_il2cpp_TypeInfo_var);
		ContentInfo__ctor_m41A77A944949D15779BAF339738C337872DB32F9(L_35, L_34, /*hidden argument*/NULL);
		__this->set__encryptionAlgorithm_2(L_35);
		ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * L_36 = __this->get__encryptionAlgorithm_2();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_37 = V_1;
		NullCheck(L_37);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_38 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_37, 1, /*hidden argument*/NULL);
		NullCheck(L_36);
		ContentInfo_set_Content_mD1D8952C8B0DFD36F7F811F11F2A4DB35EA9A992_inline(L_36, L_38, /*hidden argument*/NULL);
		NullCheck(G_B11_0);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_39 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(G_B11_0, 2, /*hidden argument*/NULL);
		V_2 = L_39;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_40 = V_2;
		NullCheck(L_40);
		uint8_t L_41 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_40, /*hidden argument*/NULL);
		if ((((int32_t)L_41) == ((int32_t)((int32_t)128))))
		{
			goto IL_0100;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_42 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_42, _stringLiteral7B73AE650FB092AAEEF5A713A7829FD5C6DB2252, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, EncryptedData__ctor_m9A93E0A9F1A322DD1161E80CD97BBBF33E1518BC_RuntimeMethod_var);
	}

IL_0100:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_43 = V_2;
		NullCheck(L_43);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_43, /*hidden argument*/NULL);
		__this->set__encrypted_3(L_44);
		return;
	}
}
// Mono.Security.PKCS7_ContentInfo Mono.Security.PKCS7_EncryptedData::get_EncryptionAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * EncryptedData_get_EncryptionAlgorithm_m144F3DFCF4DB066A6A0E06DD048A8ADB8C2C5F0E (EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1 * __this, const RuntimeMethod* method)
{
	{
		ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * L_0 = __this->get__encryptionAlgorithm_2();
		return L_0;
	}
}
// System.Byte[] Mono.Security.PKCS7_EncryptedData::get_EncryptedContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* EncryptedData_get_EncryptedContent_mBA18486D808A211596313C21AD8D1CC4CA7AD675 (EncryptedData_t9F115E031209EE2EA8934AB2CA3686B6257EF4C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedData_get_EncryptedContent_mBA18486D808A211596313C21AD8D1CC4CA7AD675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__encrypted_3();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get__encrypted_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
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
// System.Void Mono.Security.Cryptography.PKCS8_EncryptedPrivateKeyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo__ctor_m6DD099BABFA876AF0B42EB38B46C14EEBCB2CC5B (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Cryptography.PKCS8_EncryptedPrivateKeyInfo::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo__ctor_m342DBA8F50EBE7CC3E8C72FA55A086A44EB0595A (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	{
		EncryptedPrivateKeyInfo__ctor_m6DD099BABFA876AF0B42EB38B46C14EEBCB2CC5B(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mono.Security.Cryptography.PKCS8_EncryptedPrivateKeyInfo::get_Algorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EncryptedPrivateKeyInfo_get_Algorithm_m6E3979843B72EAD0345E7D190562A054347B26E7 (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__algorithm_0();
		return L_0;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8_EncryptedPrivateKeyInfo::get_EncryptedData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* EncryptedPrivateKeyInfo_get_EncryptedData_m41DB5DB34320FF2B84BF2811ADFF9B449E3B9868 (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedPrivateKeyInfo_get_EncryptedData_m41DB5DB34320FF2B84BF2811ADFF9B449E3B9868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__data_3();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get__data_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
	}

IL_0019:
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8_EncryptedPrivateKeyInfo::get_Salt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* EncryptedPrivateKeyInfo_get_Salt_m5529731CFA0E535CA09D34EC420D78E143E8C879 (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedPrivateKeyInfo_get_Salt_m5529731CFA0E535CA09D34EC420D78E143E8C879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__salt_1();
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * L_1 = RandomNumberGenerator_Create_m04A5418F8572F0498EE0659633B4C0620CB55721(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->set__salt_1(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get__salt_1();
		NullCheck(L_1);
		VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(6 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_1, L_3);
	}

IL_0024:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get__salt_1();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_4);
		RuntimeObject * L_5 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_4, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_5, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
	}
}
// System.Int32 Mono.Security.Cryptography.PKCS8_EncryptedPrivateKeyInfo::get_IterationCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncryptedPrivateKeyInfo_get_IterationCount_m0FFFFF80E6542001E3AFEC28F9F8DBBA7FEC5FF1 (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__iterations_2();
		return L_0;
	}
}
// System.Void Mono.Security.Cryptography.PKCS8_EncryptedPrivateKeyInfo::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1 (EncryptedPrivateKeyInfo_tD5E3C415B5DDA584F9E9A270556124CAB588FC55 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_1 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_2 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_3 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_4 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B2_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B1_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B4_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B3_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B6_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B5_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B14_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B7_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B9_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B9_1 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B8_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B8_1 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B11_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B11_1 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B10_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B10_1 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B13_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B12_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_1, L_0, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = L_1;
		NullCheck(L_2);
		uint8_t L_3 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_2, /*hidden argument*/NULL);
		G_B1_0 = L_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
		{
			G_B2_0 = L_2;
			goto IL_001b;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_4 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_4, _stringLiteral9631FC2517EF15E3814EC0A1FCCF9820A879D95E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var);
	}

IL_001b:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = G_B2_0;
		NullCheck(L_5);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_6 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_5, 0, /*hidden argument*/NULL);
		V_0 = L_6;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_7 = V_0;
		NullCheck(L_7);
		uint8_t L_8 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_7, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)48))))
		{
			G_B4_0 = L_5;
			goto IL_0038;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_9 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_9, _stringLiteral0020AFCD2A595DC9D38B0B64F22A804DDD545B19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var);
	}

IL_0038:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_10 = V_0;
		NullCheck(L_10);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_11 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_10, 0, /*hidden argument*/NULL);
		V_1 = L_11;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_12 = V_1;
		NullCheck(L_12);
		uint8_t L_13 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_12, /*hidden argument*/NULL);
		G_B5_0 = G_B4_0;
		if ((((int32_t)L_13) == ((int32_t)6)))
		{
			G_B6_0 = G_B4_0;
			goto IL_0054;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_14 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_14, _stringLiteral726CEA169077B8664BA7F5B82683F22AD5DD43CB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var);
	}

IL_0054:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_15 = V_1;
		String_t* L_16 = ASN1Convert_ToOid_m6F617C7AC370CC5D6EAC2F813D8F7B73A3D8F61F(L_15, /*hidden argument*/NULL);
		__this->set__algorithm_0(L_16);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_17, /*hidden argument*/NULL);
		G_B7_0 = G_B6_0;
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			G_B14_0 = G_B6_0;
			goto IL_00d7;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_19 = V_0;
		NullCheck(L_19);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_20 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_19, 1, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_21 = L_20;
		NullCheck(L_21);
		uint8_t L_22 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_21, /*hidden argument*/NULL);
		G_B8_0 = L_21;
		G_B8_1 = G_B7_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)48))))
		{
			G_B9_0 = L_21;
			G_B9_1 = G_B7_0;
			goto IL_0085;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_23 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_23, _stringLiteral64C20978E7AB9FC2DA82BFCC570876980F075DCA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var);
	}

IL_0085:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_24 = G_B9_0;
		NullCheck(L_24);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_25 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_24, 0, /*hidden argument*/NULL);
		V_3 = L_25;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_26 = V_3;
		NullCheck(L_26);
		uint8_t L_27 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_26, /*hidden argument*/NULL);
		G_B10_0 = L_24;
		G_B10_1 = G_B9_1;
		if ((((int32_t)L_27) == ((int32_t)4)))
		{
			G_B11_0 = L_24;
			G_B11_1 = G_B9_1;
			goto IL_00a1;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_28 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_28, _stringLiteral53815C6246623C4D6881BDFC9739F0995E0348D7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var);
	}

IL_00a1:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_29 = V_3;
		NullCheck(L_29);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_29, /*hidden argument*/NULL);
		__this->set__salt_1(L_30);
		NullCheck(G_B11_0);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_31 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(G_B11_0, 1, /*hidden argument*/NULL);
		V_4 = L_31;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_32 = V_4;
		NullCheck(L_32);
		uint8_t L_33 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_32, /*hidden argument*/NULL);
		G_B12_0 = G_B11_1;
		if ((((int32_t)L_33) == ((int32_t)2)))
		{
			G_B13_0 = G_B11_1;
			goto IL_00ca;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_34 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_34, _stringLiteralDA565DE66B4789974C1F4B3AAD64CFA280FCF306, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var);
	}

IL_00ca:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_35 = V_4;
		int32_t L_36 = ASN1Convert_ToInt32_m381CC48A18572F6F58C4332C3E07906562034A77(L_35, /*hidden argument*/NULL);
		__this->set__iterations_2(L_36);
		G_B14_0 = G_B13_0;
	}

IL_00d7:
	{
		NullCheck(G_B14_0);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_37 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(G_B14_0, 1, /*hidden argument*/NULL);
		V_2 = L_37;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_38 = V_2;
		NullCheck(L_38);
		uint8_t L_39 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_38, /*hidden argument*/NULL);
		if ((((int32_t)L_39) == ((int32_t)4)))
		{
			goto IL_00f2;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_40 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_40, _stringLiteralA1269F510FE5417827959FDFE8E6E0FCD9BAD5E9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, EncryptedPrivateKeyInfo_Decode_m3B7FB3D3766A4617DF21A37E87F9D568B807AAC1_RuntimeMethod_var);
	}

IL_00f2:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_41 = V_2;
		NullCheck(L_41);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_41, /*hidden argument*/NULL);
		__this->set__data_3(L_42);
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
// System.Void Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo__ctor_m513A5BDF96132DFA8D718CB5E761D1C39C214DAC (PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrivateKeyInfo__ctor_m513A5BDF96132DFA8D718CB5E761D1C39C214DAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set__version_0(0);
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_0 = (ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 *)il2cpp_codegen_object_new(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_il2cpp_TypeInfo_var);
		ArrayList__ctor_m6847CFECD6BDC2AD10A4AC9852A572B88B8D6B1B(L_0, /*hidden argument*/NULL);
		__this->set__list_3(L_0);
		return;
	}
}
// System.Void Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo__ctor_m8640F581031D199E229D4A6AA31026B8EA756040 (PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	{
		PrivateKeyInfo__ctor_m513A5BDF96132DFA8D718CB5E761D1C39C214DAC(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::get_PrivateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_get_PrivateKey_mFDE27BD70465C0C71949DA3E3E4F752AB7AE1263 (PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrivateKeyInfo_get_PrivateKey_mFDE27BD70465C0C71949DA3E3E4F752AB7AE1263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__key_2();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
	}

IL_000a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get__key_2();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		RuntimeObject * L_2 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_2, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
	}
}
// System.Void Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62 (PrivateKeyInfo_t0630BC1B782188D56BB3ACE5532AD63C5D7E3D93 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_1 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_2 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_3 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_4 = NULL;
	int32_t V_5 = 0;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B6_0 = NULL;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * G_B5_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
		{
			goto IL_001c;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_4 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_4, _stringLiteralFF9D342CFAFB05A5935D2EFC6B9DEEF4CD0D7F7E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62_RuntimeMethod_var);
	}

IL_001c:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = V_0;
		NullCheck(L_5);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_6 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_5, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_7 = V_1;
		NullCheck(L_7);
		uint8_t L_8 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_0038;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_9 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_9, _stringLiteralB00FD2CDC8278FCFC000C09E9FEA2770BD6D8E8D, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62_RuntimeMethod_var);
	}

IL_0038:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_10 = V_1;
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = 0;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->set__version_0(L_13);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_14 = V_0;
		NullCheck(L_14);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_15 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_14, 1, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_16 = L_15;
		NullCheck(L_16);
		uint8_t L_17 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_16, /*hidden argument*/NULL);
		G_B5_0 = L_16;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)48))))
		{
			G_B6_0 = L_16;
			goto IL_0062;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_18 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_18, _stringLiteral726CEA169077B8664BA7F5B82683F22AD5DD43CB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62_RuntimeMethod_var);
	}

IL_0062:
	{
		NullCheck(G_B6_0);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_19 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(G_B6_0, 0, /*hidden argument*/NULL);
		V_2 = L_19;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_20 = V_2;
		NullCheck(L_20);
		uint8_t L_21 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_21) == ((int32_t)6)))
		{
			goto IL_007d;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_22 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_22, _stringLiteralC5B7E93C5B246F4073777D69E866EDB3F00FCCFD, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, PrivateKeyInfo_Decode_mD156E6A6B78A2A93B6D1BDF524AD9FCE9EBB1A62_RuntimeMethod_var);
	}

IL_007d:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_23 = V_2;
		String_t* L_24 = ASN1Convert_ToOid_m6F617C7AC370CC5D6EAC2F813D8F7B73A3D8F61F(L_23, /*hidden argument*/NULL);
		__this->set__algorithm_1(L_24);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_25 = V_0;
		NullCheck(L_25);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_26 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_25, 2, /*hidden argument*/NULL);
		V_3 = L_26;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_27 = V_3;
		NullCheck(L_27);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_27, /*hidden argument*/NULL);
		__this->set__key_2(L_28);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_30) <= ((int32_t)3)))
		{
			goto IL_00da;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_31 = V_0;
		NullCheck(L_31);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_32 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_31, 3, /*hidden argument*/NULL);
		V_4 = L_32;
		V_5 = 0;
		goto IL_00cf;
	}

IL_00b4:
	{
		ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * L_33 = __this->get__list_3();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_36 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_33, L_36);
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00cf:
	{
		int32_t L_38 = V_5;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_39 = V_4;
		NullCheck(L_39);
		int32_t L_40 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_39, /*hidden argument*/NULL);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_00b4;
		}
	}

IL_00da:
	{
		return;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_RemoveLeadingZero_m095360C99508EC21B354AF0AC6C4EA67AC48A6BB (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bigInt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrivateKeyInfo_RemoveLeadingZero_m095360C99508EC21B354AF0AC6C4EA67AC48A6BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	{
		V_0 = 0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bigInt0;
		NullCheck(L_0);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___bigInt0;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (L_3)
		{
			goto IL_0011;
		}
	}
	{
		V_0 = 1;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
	}

IL_0011:
	{
		int32_t L_5 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_2 = L_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = ___bigInt0;
		int32_t L_8 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_2;
		int32_t L_10 = V_1;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_7, L_8, (RuntimeArray *)(RuntimeArray *)L_9, 0, L_10, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_2;
		return L_11;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bigInt0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bigInt0;
		NullCheck(L_0);
		int32_t L_1 = ___length1;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((uint32_t)L_1))))
		{
			goto IL_0008;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___bigInt0;
		return L_2;
	}

IL_0008:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bigInt0;
		NullCheck(L_3);
		int32_t L_4 = ___length1;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))) <= ((int32_t)L_4)))
		{
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___bigInt0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = PrivateKeyInfo_RemoveLeadingZero_m095360C99508EC21B354AF0AC6C4EA67AC48A6BB(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0015:
	{
		int32_t L_7 = ___length1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_0 = L_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___bigInt0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_0;
		int32_t L_11 = ___length1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___bigInt0;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ___bigInt0;
		NullCheck(L_13);
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_9, 0, (RuntimeArray *)(RuntimeArray *)L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))), (((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_0;
		return L_14;
	}
}
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::DecodeRSA(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * PrivateKeyInfo_DecodeRSA_mEAF2C11CDFF27504F19297E9BFFC7AEA5E76C457 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___keypair0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrivateKeyInfo_DecodeRSA_mEAF2C11CDFF27504F19297E9BFFC7AEA5E76C457_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___keypair0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
		{
			goto IL_001c;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_4 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_4, _stringLiteral76BD78135D3BAEAB59B575277E9B53FED6B66341, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, PrivateKeyInfo_DecodeRSA_mEAF2C11CDFF27504F19297E9BFFC7AEA5E76C457_RuntimeMethod_var);
	}

IL_001c:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = V_0;
		NullCheck(L_5);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_6 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_5, 0, /*hidden argument*/NULL);
		NullCheck(L_6);
		uint8_t L_7 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0036;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_8 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_8, _stringLiteral5347E948E2C7139AA4A2019B2258B383380AAF28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, PrivateKeyInfo_DecodeRSA_mEAF2C11CDFF27504F19297E9BFFC7AEA5E76C457_RuntimeMethod_var);
	}

IL_0036:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = ASN1_get_Count_mBF134B153CFA218C251FB692A25AA392DCF9F583(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)9))))
		{
			goto IL_004b;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_11 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_11, _stringLiteralA1435E53973560651ADEDEBD6BD8B882F5D9ADEC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, PrivateKeyInfo_DecodeRSA_mEAF2C11CDFF27504F19297E9BFFC7AEA5E76C457_RuntimeMethod_var);
	}

IL_004b:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28 ));
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_12 = V_0;
		NullCheck(L_12);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_13 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_12, 1, /*hidden argument*/NULL);
		NullCheck(L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_13, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = PrivateKeyInfo_RemoveLeadingZero_m095360C99508EC21B354AF0AC6C4EA67AC48A6BB(L_14, /*hidden argument*/NULL);
		(&V_1)->set_Modulus_1(L_15);
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_16 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = L_16.get_Modulus_1();
		NullCheck(L_17);
		V_2 = (((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))));
		int32_t L_18 = V_2;
		V_3 = ((int32_t)((int32_t)L_18>>(int32_t)1));
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_19 = V_0;
		NullCheck(L_19);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_20 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_19, 3, /*hidden argument*/NULL);
		NullCheck(L_20);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_20, /*hidden argument*/NULL);
		int32_t L_22 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525(L_21, L_22, /*hidden argument*/NULL);
		(&V_1)->set_D_7(L_23);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_24 = V_0;
		NullCheck(L_24);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_25 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_24, 6, /*hidden argument*/NULL);
		NullCheck(L_25);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_25, /*hidden argument*/NULL);
		int32_t L_27 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525(L_26, L_27, /*hidden argument*/NULL);
		(&V_1)->set_DP_4(L_28);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_29 = V_0;
		NullCheck(L_29);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_30 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_29, 7, /*hidden argument*/NULL);
		NullCheck(L_30);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_30, /*hidden argument*/NULL);
		int32_t L_32 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525(L_31, L_32, /*hidden argument*/NULL);
		(&V_1)->set_DQ_5(L_33);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_34 = V_0;
		NullCheck(L_34);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_35 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_34, 2, /*hidden argument*/NULL);
		NullCheck(L_35);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_35, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = PrivateKeyInfo_RemoveLeadingZero_m095360C99508EC21B354AF0AC6C4EA67AC48A6BB(L_36, /*hidden argument*/NULL);
		(&V_1)->set_Exponent_0(L_37);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_38 = V_0;
		NullCheck(L_38);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_39 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_38, 8, /*hidden argument*/NULL);
		NullCheck(L_39);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_39, /*hidden argument*/NULL);
		int32_t L_41 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525(L_40, L_41, /*hidden argument*/NULL);
		(&V_1)->set_InverseQ_6(L_42);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_43 = V_0;
		NullCheck(L_43);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_44 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_43, 4, /*hidden argument*/NULL);
		NullCheck(L_44);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_44, /*hidden argument*/NULL);
		int32_t L_46 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47 = PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525(L_45, L_46, /*hidden argument*/NULL);
		(&V_1)->set_P_2(L_47);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_48 = V_0;
		NullCheck(L_48);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_49 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_48, 5, /*hidden argument*/NULL);
		NullCheck(L_49);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_49, /*hidden argument*/NULL);
		int32_t L_51 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525(L_50, L_51, /*hidden argument*/NULL);
		(&V_1)->set_Q_3(L_52);
		V_4 = (RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B *)NULL;
	}

IL_0129:
	try
	{ // begin try (depth: 1)
		RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * L_53 = RSA_Create_m044F1B4384248B4C9FEA4DAB01DB85B0A829A383(/*hidden argument*/NULL);
		V_4 = L_53;
		RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * L_54 = V_4;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_55 = V_1;
		NullCheck(L_54);
		VirtActionInvoker1< RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  >::Invoke(11 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_54, L_55);
		goto IL_0158;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_013a;
		throw e;
	}

CATCH_013a:
	{ // begin catch(System.Security.Cryptography.CryptographicException)
		CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC * L_56 = (CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC *)il2cpp_codegen_object_new(CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC_il2cpp_TypeInfo_var);
		CspParameters__ctor_mA5F11E1EA0F0841876916834296DD6C49A0D5978(L_56, /*hidden argument*/NULL);
		CspParameters_t68AAF756CF69FC035037DF834453D0B8B7B503BC * L_57 = L_56;
		NullCheck(L_57);
		CspParameters_set_Flags_m73AF2CE4BA5726935B70AD6242491B14C7294A55(L_57, 1, /*hidden argument*/NULL);
		RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 * L_58 = (RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7 *)il2cpp_codegen_object_new(RSACryptoServiceProvider_tBE6479FC7CD7D294BC6D67E41F90B9D3BBF592B7_il2cpp_TypeInfo_var);
		RSACryptoServiceProvider__ctor_m044CC794956315D9C47B26A043EE435534EFFAB1(L_58, L_57, /*hidden argument*/NULL);
		V_4 = L_58;
		RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * L_59 = V_4;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_60 = V_1;
		NullCheck(L_59);
		VirtActionInvoker1< RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  >::Invoke(11 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_59, L_60);
		goto IL_0158;
	} // end catch (depth: 1)

IL_0158:
	{
		RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * L_61 = V_4;
		return L_61;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::Encode(System.Security.Cryptography.RSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_Encode_m5BD66DC87E5D2E9BE4538390321D06C44ED7140C (RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * ___rsa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrivateKeyInfo_Encode_m5BD66DC87E5D2E9BE4538390321D06C44ED7140C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_1 = NULL;
	{
		RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * L_0 = ___rsa0;
		NullCheck(L_0);
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_1 = VirtFuncInvoker1< RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28 , bool >::Invoke(10 /* System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean) */, L_0, (bool)1);
		V_0 = L_1;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142(L_2, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_1 = L_2;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_3 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC(L_5, (uint8_t)2, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_3, L_5, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_6 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_7 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = L_7.get_Modulus_1();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_9 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_6, L_9, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_10 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_11 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = L_11.get_Exponent_0();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_13 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_10, L_13, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_14 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_15 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = L_15.get_D_7();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_17 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_14, L_17, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_18 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_19 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = L_19.get_P_2();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_21 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_18, L_21, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_22 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_23 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = L_23.get_Q_3();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_25 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_22, L_25, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_26 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_27 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28 = L_27.get_DP_4();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_29 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_26, L_29, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_30 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_31 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32 = L_31.get_DQ_5();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_33 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_30, L_33, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_34 = V_1;
		RSAParameters_tB6E5B0CD72F76465998492E0FA748C14EFBA6C28  L_35 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = L_35.get_InverseQ_6();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_37 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_34, L_37, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_38 = V_1;
		NullCheck(L_38);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_39 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_38);
		return L_39;
	}
}
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * PrivateKeyInfo_DecodeDSA_m079B9B162482341C9AE062D24CE3BB86D6723416 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___privateKey0, DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1  ___dsaParameters1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrivateKeyInfo_DecodeDSA_m079B9B162482341C9AE062D24CE3BB86D6723416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___privateKey0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3 = ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_001b;
		}
	}
	{
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_4 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE6D40FE819914DA1C6600907D160AD4231B46C31(L_4, _stringLiteral76BD78135D3BAEAB59B575277E9B53FED6B66341, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, PrivateKeyInfo_DecodeDSA_m079B9B162482341C9AE062D24CE3BB86D6723416_RuntimeMethod_var);
	}

IL_001b:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_5, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = PrivateKeyInfo_Normalize_mFBBB9676EB34EAF23E711BFC6A1DAD13EAE52525(L_6, ((int32_t)20), /*hidden argument*/NULL);
		(&___dsaParameters1)->set_X_5(L_7);
		DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * L_8 = DSA_Create_m1BB98278D12EF7F48DDF0B52FCF7CA0602AFC618(/*hidden argument*/NULL);
		DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * L_9 = L_8;
		DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1  L_10 = ___dsaParameters1;
		NullCheck(L_9);
		VirtActionInvoker1< DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1  >::Invoke(11 /* System.Void System.Security.Cryptography.DSA::ImportParameters(System.Security.Cryptography.DSAParameters) */, L_9, L_10);
		return L_9;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::Encode(System.Security.Cryptography.DSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_Encode_m5959F34D6EB743D351A0E0E6B2B24910D43EE139 (DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * ___dsa0, const RuntimeMethod* method)
{
	{
		DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * L_0 = ___dsa0;
		NullCheck(L_0);
		DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1  L_1 = VirtFuncInvoker1< DSAParameters_t37819E6A78CC8B484233CBCA9245DC39151018A1 , bool >::Invoke(10 /* System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSA::ExportParameters(System.Boolean) */, L_0, (bool)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = L_1.get_X_5();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_3 = ASN1Convert_FromUnsignedBigInteger_mAAE91D78A45905F09EF49AB626DD17B236A4708F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_3);
		return L_4;
	}
}
// System.Byte[] Mono.Security.Cryptography.PKCS8_PrivateKeyInfo::Encode(System.Security.Cryptography.AsymmetricAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* PrivateKeyInfo_Encode_m0B6682733B5764EC52E9E2551BBEDDC3F4C74133 (AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * ___aa0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PrivateKeyInfo_Encode_m0B6682733B5764EC52E9E2551BBEDDC3F4C74133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * L_0 = ___aa0;
		if (!((RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B *)IsInstClass((RuntimeObject*)L_0, RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * L_1 = ___aa0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = PrivateKeyInfo_Encode_m5BD66DC87E5D2E9BE4538390321D06C44ED7140C(((RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B *)CastclassClass((RuntimeObject*)L_1, RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * L_3 = ___aa0;
		if (!((DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 *)IsInstClass((RuntimeObject*)L_3, DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * L_4 = ___aa0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = PrivateKeyInfo_Encode_m5959F34D6EB743D351A0E0E6B2B24910D43EE139(((DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 *)CastclassClass((RuntimeObject*)L_4, DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_5;
	}

IL_0028:
	{
		AsymmetricAlgorithm_t3519DD47C199C0F5A666E99931C22F84487EE51F * L_6 = ___aa0;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 * L_8 = (CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5 *)il2cpp_codegen_object_new(CryptographicException_tFFE56EF733D1150A0F3738DDE2CC4DE1A61849D5_il2cpp_TypeInfo_var);
		CryptographicException__ctor_mE2C0822BD84EF90D7851CC9D164E187DED6EADF1(L_8, _stringLiteralE0D38CB0C52B5D2181A97C29DE75FAFE93454DD6, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, PrivateKeyInfo_Encode_m0B6682733B5764EC52E9E2551BBEDDC3F4C74133_RuntimeMethod_var);
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
// System.Void Mono.Security.Cryptography.RSAManaged_KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler__ctor_mEC2E71CDD44D771B588C8E2B263DAA18A161AFF1 (KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Security.Cryptography.RSAManaged_KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler_Invoke_mB39E17F6641982F45D5C147AB8D82E0A17D5ABC0 (KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___e1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
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
					typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___sender0) - 1), ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Security.Cryptography.RSAManaged_KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyGeneratedEventHandler_BeginInvoke_mFFF44EBD0D651258101E1458AB1B0AD29CF24375 (KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Mono.Security.Cryptography.RSAManaged_KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGeneratedEventHandler_EndInvoke_mEE04B5ACD0BC9E784EC2211D7138C3E6309491BF (KeyGeneratedEventHandler_t7C83DFCD850346D0E6024E1718E4120CBC4892FA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Mono.Security.X509.X509CertificateCollection_X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator__ctor_m121D2627B82462B1F3AF7637F188AA1013879E1D (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007 * ___mappings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator__ctor_m121D2627B82462B1F3AF7637F188AA1013879E1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007 * L_0 = ___mappings0;
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_0);
		__this->set_enumerator_0(L_1);
		return;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection_X509CertificateEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4 * X509CertificateEnumerator_get_Current_mA9AD4D624A06130CD4A92FCDC0B03A52425D5BE6 (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_get_Current_mA9AD4D624A06130CD4A92FCDC0B03A52425D5BE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return ((X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4 *)CastclassClass((RuntimeObject*)L_1, X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4_il2cpp_TypeInfo_var));
	}
}
// System.Object Mono.Security.X509.X509CertificateCollection_X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m60E14E055A388DEF34E5D4AB19A73C2789D8B00B (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m60E14E055A388DEF34E5D4AB19A73C2789D8B00B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection_X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m7F2C17CFD3DFD79B14CCEF343CA9C593C064169F (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m7F2C17CFD3DFD79B14CCEF343CA9C593C064169F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection_X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m6B7E6EE6C087A2833A11BAF537C0D162619AF889 (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m6B7E6EE6C087A2833A11BAF537C0D162619AF889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection_X509CertificateEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_m6D9B757FF19EE0AB676DF601D145009646579840 (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_MoveNext_m6D9B757FF19EE0AB676DF601D145009646579840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_mA82F15B6EB97BF0F3EBAA69C21765909D7A675D3_inline (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_nTag_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ContentInfo_set_Content_mD1D8952C8B0DFD36F7F811F11F2A4DB35EA9A992_inline (ContentInfo_tD5B20CB7F38B0A2019D613E4DFCEDBA2564101B2 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___value0, const RuntimeMethod* method)
{
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = ___value0;
		__this->set_content_1(L_0);
		return;
	}
}
