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

// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Exception
struct Exception_t;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral84B7AF18301C4FCEAF238EFECCD57132EA7A8123;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE66F2A0BF1FC8D36C62A99EBEF8D0990BCB894FA;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C const RuntimeMethod* GridLength__ctor_m446A5914B755CB3C92FD21F9D005CEBD1433811A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t GridLength_Equals_m615A35DCF3537A075CE456F92042F0746AD48765_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GridLength_ToString_m38305C78D8A237F12F40C0F50915085DE3FEEFA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GridLength_ToString_m810E87CF082B9A8E8C471C08E1908AAE135642F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GridLength__cctor_mD3AF335465DDD53CC9EC5EF0D9EE5099C28BE7CE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GridLength__ctor_m446A5914B755CB3C92FD21F9D005CEBD1433811A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GridLength_get_Value_m127F7C204A1E30E487277741630649E1A6135E70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListToBindableVectorViewAdapter_GetEnumerator_m1946B6325E818CC98A24C8A67FFCA3656ACB078F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListToBindableVectorViewAdapter_IndexOf_m1C9D9F10213594BA4538F263EE5EA9B27A13BAAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListToBindableVectorViewAdapter_get_Size_m639607FFD5260E793DE3C653992EEE933C570826_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Thickness_Equals_m8DCC96D818C25C9B4DC4AE6AAC37D1D5A0F4BD19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Thickness_InternalToString_m864A354FC7B0430B7E03A8FFC54D57948A748FB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Thickness_ToString_mA3FE85EA438304C042DC7ED8362EC3149404D50F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Thickness_ToString_mF9F9D919F85AEEDCC30815B197935833902A9D89_MetadataUsageId;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t06BBC1F7936C30FC698BCD7E69D19E1BBBDEA992 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
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
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
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
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct  ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899  : public RuntimeObject
{
public:
	// System.Collections.IList System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::_list
	RuntimeObject* ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899, ____list_0)); }
	inline RuntimeObject* get__list_0() const { return ____list_0; }
	inline RuntimeObject** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(RuntimeObject* value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_0), (void*)value);
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// Windows.UI.Xaml.Thickness
struct  Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 
{
public:
	// System.Double Windows.UI.Xaml.Thickness::_left
	double ____left_0;
	// System.Double Windows.UI.Xaml.Thickness::_top
	double ____top_1;
	// System.Double Windows.UI.Xaml.Thickness::_right
	double ____right_2;
	// System.Double Windows.UI.Xaml.Thickness::_bottom
	double ____bottom_3;

public:
	inline static int32_t get_offset_of__left_0() { return static_cast<int32_t>(offsetof(Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5, ____left_0)); }
	inline double get__left_0() const { return ____left_0; }
	inline double* get_address_of__left_0() { return &____left_0; }
	inline void set__left_0(double value)
	{
		____left_0 = value;
	}

	inline static int32_t get_offset_of__top_1() { return static_cast<int32_t>(offsetof(Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5, ____top_1)); }
	inline double get__top_1() const { return ____top_1; }
	inline double* get_address_of__top_1() { return &____top_1; }
	inline void set__top_1(double value)
	{
		____top_1 = value;
	}

	inline static int32_t get_offset_of__right_2() { return static_cast<int32_t>(offsetof(Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5, ____right_2)); }
	inline double get__right_2() const { return ____right_2; }
	inline double* get_address_of__right_2() { return &____right_2; }
	inline void set__right_2(double value)
	{
		____right_2 = value;
	}

	inline static int32_t get_offset_of__bottom_3() { return static_cast<int32_t>(offsetof(Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5, ____bottom_3)); }
	inline double get__bottom_3() const { return ____bottom_3; }
	inline double* get_address_of__bottom_3() { return &____bottom_3; }
	inline void set__bottom_3(double value)
	{
		____bottom_3 = value;
	}
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

// Windows.UI.Xaml.GridUnitType
struct  GridUnitType_tE49D8B88C194FB705994C6194521D8CB9050831A 
{
public:
	// System.Int32 Windows.UI.Xaml.GridUnitType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GridUnitType_tE49D8B88C194FB705994C6194521D8CB9050831A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Windows.UI.Xaml.GridLength
struct  GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 
{
public:
	// System.Double Windows.UI.Xaml.GridLength::_unitValue
	double ____unitValue_0;
	// Windows.UI.Xaml.GridUnitType Windows.UI.Xaml.GridLength::_unitType
	int32_t ____unitType_1;

public:
	inline static int32_t get_offset_of__unitValue_0() { return static_cast<int32_t>(offsetof(GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557, ____unitValue_0)); }
	inline double get__unitValue_0() const { return ____unitValue_0; }
	inline double* get_address_of__unitValue_0() { return &____unitValue_0; }
	inline void set__unitValue_0(double value)
	{
		____unitValue_0 = value;
	}

	inline static int32_t get_offset_of__unitType_1() { return static_cast<int32_t>(offsetof(GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557, ____unitType_1)); }
	inline int32_t get__unitType_1() const { return ____unitType_1; }
	inline int32_t* get_address_of__unitType_1() { return &____unitType_1; }
	inline void set__unitType_1(int32_t value)
	{
		____unitType_1 = value;
	}
};

struct GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557_StaticFields
{
public:
	// Windows.UI.Xaml.GridLength Windows.UI.Xaml.GridLength::s_Auto
	GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557  ___s_Auto_2;

public:
	inline static int32_t get_offset_of_s_Auto_2() { return static_cast<int32_t>(offsetof(GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557_StaticFields, ___s_Auto_2)); }
	inline GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557  get_s_Auto_2() const { return ___s_Auto_2; }
	inline GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * get_address_of_s_Auto_2() { return &___s_Auto_2; }
	inline void set_s_Auto_2(GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557  value)
	{
		___s_Auto_2 = value;
	}
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


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Double Windows.UI.Xaml.GridLength::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double GridLength_get_Value_m127F7C204A1E30E487277741630649E1A6135E70 (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, const RuntimeMethod* method);
// Windows.UI.Xaml.GridUnitType Windows.UI.Xaml.GridLength::get_GridUnitType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridLength_get_GridUnitType_m61E609C5C94C2C557C4830BFF7252B103CC7D06D_inline (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, const RuntimeMethod* method);
// System.Boolean System.Double::IsNaN(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347 (double ___d0, const RuntimeMethod* method);
// System.Boolean System.Double::IsInfinity(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_IsInfinity_mEA460DCA490F45C8AB5179BFFE48D3E06965381B (double ___d0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Windows.UI.Xaml.GridLength::.ctor(System.Double,Windows.UI.Xaml.GridUnitType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLength__ctor_m446A5914B755CB3C92FD21F9D005CEBD1433811A (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, double ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Boolean Windows.UI.Xaml.GridLength::op_Equality(Windows.UI.Xaml.GridLength,Windows.UI.Xaml.GridLength)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridLength_op_Equality_mAD4F6728CE94E0648211624FEEAFA8795FF2389E (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557  ___gl10, GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557  ___gl21, const RuntimeMethod* method);
// System.Boolean Windows.UI.Xaml.GridLength::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridLength_Equals_m615A35DCF3537A075CE456F92042F0746AD48765 (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, RuntimeObject * ___oCompare0, const RuntimeMethod* method);
// System.Int32 Windows.UI.Xaml.GridLength::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridLength_GetHashCode_m26C8EA5D472C659DE1877F8090EBA633C18BAB7B (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String Windows.UI.Xaml.GridLength::ToString(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GridLength_ToString_m810E87CF082B9A8E8C471C08E1908AAE135642F6 (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___cultureInfo0, const RuntimeMethod* method);
// System.String Windows.UI.Xaml.GridLength::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GridLength_ToString_m38305C78D8A237F12F40C0F50915085DE3FEEFA2 (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Double,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m5BC045F91E837268FECEA78DA859902005EF91D1 (double ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Exception::SetErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_SetErrorCode_m92A787DA80F9CBC81E05D158F3D8099A8F1DD44D (Exception_t * __this, int32_t ___hr0, const RuntimeMethod* method);
// System.Void Windows.UI.Xaml.Thickness::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thickness__ctor_m20CA38C174FC617B8177572422D25F464205539B (Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * __this, double ___left0, double ___top1, double ___right2, double ___bottom3, const RuntimeMethod* method);
// System.String Windows.UI.Xaml.Thickness::ToString(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Thickness_ToString_mA3FE85EA438304C042DC7ED8362EC3149404D50F (Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___cultureInfo0, const RuntimeMethod* method);
// System.String Windows.UI.Xaml.Thickness::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Thickness_ToString_mF9F9D919F85AEEDCC30815B197935833902A9D89 (Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * __this, const RuntimeMethod* method);
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_m8F66D26308482525EE295CC145F2F1F6220ED81E (RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.String Windows.UI.Xaml.Thickness::InternalToString(System.Double,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Thickness_InternalToString_m864A354FC7B0430B7E03A8FFC54D57948A748FB7 (Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * __this, double ___l0, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___cultureInfo1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean Windows.UI.Xaml.Thickness::op_Equality(Windows.UI.Xaml.Thickness,Windows.UI.Xaml.Thickness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Thickness_op_Equality_m732014E17DB8E78C1CB42C75880C6EAB1F748A47 (Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5  ___t10, Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5  ___t21, const RuntimeMethod* method);
// System.Boolean Windows.UI.Xaml.Thickness::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Thickness_Equals_m8DCC96D818C25C9B4DC4AE6AAC37D1D5A0F4BD19 (Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Double::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39 (double* __this, const RuntimeMethod* method);
// System.Int32 Windows.UI.Xaml.Thickness::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thickness_GetHashCode_m760531EA0099D4B12B521E2209E2CF908AD3AC1E (Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * __this, const RuntimeMethod* method);
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
// System.Double Windows.UI.Xaml.GridLength::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double GridLength_get_Value_m127F7C204A1E30E487277741630649E1A6135E70 (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GridLength_get_Value_m127F7C204A1E30E487277741630649E1A6135E70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__unitType_1();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		double L_1 = __this->get__unitValue_0();
		return L_1;
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557_il2cpp_TypeInfo_var);
		double L_2 = (((GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557_StaticFields*)il2cpp_codegen_static_fields_for(GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557_il2cpp_TypeInfo_var))->get_address_of_s_Auto_2())->get__unitValue_0();
		return L_2;
	}
}
IL2CPP_EXTERN_C  double GridLength_get_Value_m127F7C204A1E30E487277741630649E1A6135E70_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * _thisAdjusted = reinterpret_cast<GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *>(__this + _offset);
	return GridLength_get_Value_m127F7C204A1E30E487277741630649E1A6135E70(_thisAdjusted, method);
}
// Windows.UI.Xaml.GridUnitType Windows.UI.Xaml.GridLength::get_GridUnitType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridLength_get_GridUnitType_m61E609C5C94C2C557C4830BFF7252B103CC7D06D (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__unitType_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t GridLength_get_GridUnitType_m61E609C5C94C2C557C4830BFF7252B103CC7D06D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * _thisAdjusted = reinterpret_cast<GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *>(__this + _offset);
	return GridLength_get_GridUnitType_m61E609C5C94C2C557C4830BFF7252B103CC7D06D_inline(_thisAdjusted, method);
}
// System.Void Windows.UI.Xaml.GridLength::.ctor(System.Double,Windows.UI.Xaml.GridUnitType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLength__ctor_m446A5914B755CB3C92FD21F9D005CEBD1433811A (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, double ___value0, int32_t ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GridLength__ctor_m446A5914B755CB3C92FD21F9D005CEBD1433811A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * G_B10_0 = NULL;
	GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * G_B9_0 = NULL;
	double G_B11_0 = 0.0;
	GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * G_B11_1 = NULL;
	{
		double L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_1 = Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		double L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_3 = Double_IsInfinity_mEA460DCA490F45C8AB5179BFFE48D3E06965381B(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		double L_4 = ___value0;
		if ((!(((double)L_4) < ((double)(0.0)))))
		{
			goto IL_002c;
		}
	}

IL_001c:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_5, _stringLiteralE66F2A0BF1FC8D36C62A99EBEF8D0990BCB894FA, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, GridLength__ctor_m446A5914B755CB3C92FD21F9D005CEBD1433811A_RuntimeMethod_var);
	}

IL_002c:
	{
		int32_t L_6 = ___type1;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_7 = ___type1;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = ___type1;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_0047;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_9, _stringLiteralE66F2A0BF1FC8D36C62A99EBEF8D0990BCB894FA, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, GridLength__ctor_m446A5914B755CB3C92FD21F9D005CEBD1433811A_RuntimeMethod_var);
	}

IL_0047:
	{
		int32_t L_10 = ___type1;
		G_B9_0 = __this;
		if (!L_10)
		{
			G_B10_0 = __this;
			goto IL_004e;
		}
	}
	{
		double L_11 = ___value0;
		G_B11_0 = L_11;
		G_B11_1 = G_B9_0;
		goto IL_0057;
	}

IL_004e:
	{
		G_B11_0 = (1.0);
		G_B11_1 = G_B10_0;
	}

IL_0057:
	{
		G_B11_1->set__unitValue_0(G_B11_0);
		int32_t L_12 = ___type1;
		__this->set__unitType_1(L_12);
		return;
	}
}
IL2CPP_EXTERN_C  void GridLength__ctor_m446A5914B755CB3C92FD21F9D005CEBD1433811A_AdjustorThunk (RuntimeObject * __this, double ___value0, int32_t ___type1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * _thisAdjusted = reinterpret_cast<GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *>(__this + _offset);
	GridLength__ctor_m446A5914B755CB3C92FD21F9D005CEBD1433811A(_thisAdjusted, ___value0, ___type1, method);
}
// System.Boolean Windows.UI.Xaml.GridLength::op_Equality(Windows.UI.Xaml.GridLength,Windows.UI.Xaml.GridLength)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridLength_op_Equality_mAD4F6728CE94E0648211624FEEAFA8795FF2389E (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557  ___gl10, GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557  ___gl21, const RuntimeMethod* method)
{
	{
		int32_t L_0 = GridLength_get_GridUnitType_m61E609C5C94C2C557C4830BFF7252B103CC7D06D_inline((GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *)(&___gl10), /*hidden argument*/NULL);
		int32_t L_1 = GridLength_get_GridUnitType_m61E609C5C94C2C557C4830BFF7252B103CC7D06D_inline((GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *)(&___gl21), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		double L_2 = GridLength_get_Value_m127F7C204A1E30E487277741630649E1A6135E70((GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *)(&___gl10), /*hidden argument*/NULL);
		double L_3 = GridLength_get_Value_m127F7C204A1E30E487277741630649E1A6135E70((GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *)(&___gl21), /*hidden argument*/NULL);
		return (bool)((((double)L_2) == ((double)L_3))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.UI.Xaml.GridLength::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GridLength_Equals_m615A35DCF3537A075CE456F92042F0746AD48765 (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, RuntimeObject * ___oCompare0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GridLength_Equals_m615A35DCF3537A075CE456F92042F0746AD48765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___oCompare0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557  L_1 = (*(GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *)__this);
		RuntimeObject * L_2 = ___oCompare0;
		IL2CPP_RUNTIME_CLASS_INIT(GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557_il2cpp_TypeInfo_var);
		bool L_3 = GridLength_op_Equality_mAD4F6728CE94E0648211624FEEAFA8795FF2389E(L_1, ((*(GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *)((GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *)UnBox(L_2, GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool GridLength_Equals_m615A35DCF3537A075CE456F92042F0746AD48765_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___oCompare0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * _thisAdjusted = reinterpret_cast<GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *>(__this + _offset);
	return GridLength_Equals_m615A35DCF3537A075CE456F92042F0746AD48765(_thisAdjusted, ___oCompare0, method);
}
// System.Int32 Windows.UI.Xaml.GridLength::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GridLength_GetHashCode_m26C8EA5D472C659DE1877F8090EBA633C18BAB7B (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get__unitValue_0();
		int32_t L_1 = __this->get__unitType_1();
		return ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)L_0))), (int32_t)L_1));
	}
}
IL2CPP_EXTERN_C  int32_t GridLength_GetHashCode_m26C8EA5D472C659DE1877F8090EBA633C18BAB7B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * _thisAdjusted = reinterpret_cast<GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *>(__this + _offset);
	return GridLength_GetHashCode_m26C8EA5D472C659DE1877F8090EBA633C18BAB7B(_thisAdjusted, method);
}
// System.String Windows.UI.Xaml.GridLength::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GridLength_ToString_m38305C78D8A237F12F40C0F50915085DE3FEEFA2 (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GridLength_ToString_m38305C78D8A237F12F40C0F50915085DE3FEEFA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_1 = GridLength_ToString_m810E87CF082B9A8E8C471C08E1908AAE135642F6((GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *)__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* GridLength_ToString_m38305C78D8A237F12F40C0F50915085DE3FEEFA2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * _thisAdjusted = reinterpret_cast<GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *>(__this + _offset);
	return GridLength_ToString_m38305C78D8A237F12F40C0F50915085DE3FEEFA2(_thisAdjusted, method);
}
// System.String Windows.UI.Xaml.GridLength::ToString(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GridLength_ToString_m810E87CF082B9A8E8C471C08E1908AAE135642F6 (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___cultureInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GridLength_ToString_m810E87CF082B9A8E8C471C08E1908AAE135642F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__unitType_1();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral84B7AF18301C4FCEAF238EFECCD57132EA7A8123;
	}

IL_000e:
	{
		int32_t L_1 = __this->get__unitType_1();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0024;
		}
	}
	{
		double L_2 = __this->get__unitValue_0();
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_3 = ___cultureInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_4 = Convert_ToString_m5BC045F91E837268FECEA78DA859902005EF91D1(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0024:
	{
		double L_5 = __this->get__unitValue_0();
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_6 = ___cultureInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_7 = Convert_ToString_m5BC045F91E837268FECEA78DA859902005EF91D1(L_5, L_6, /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_7, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, /*hidden argument*/NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  String_t* GridLength_ToString_m810E87CF082B9A8E8C471C08E1908AAE135642F6_AdjustorThunk (RuntimeObject * __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___cultureInfo0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * _thisAdjusted = reinterpret_cast<GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 *>(__this + _offset);
	return GridLength_ToString_m810E87CF082B9A8E8C471C08E1908AAE135642F6(_thisAdjusted, ___cultureInfo0, method);
}
// System.Void Windows.UI.Xaml.GridLength::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLength__cctor_mD3AF335465DDD53CC9EC5EF0D9EE5099C28BE7CE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GridLength__cctor_mD3AF335465DDD53CC9EC5EF0D9EE5099C28BE7CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557  L_0;
		memset((&L_0), 0, sizeof(L_0));
		GridLength__ctor_m446A5914B755CB3C92FD21F9D005CEBD1433811A((&L_0), (1.0), 0, /*hidden argument*/NULL);
		((GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557_StaticFields*)il2cpp_codegen_static_fields_for(GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557_il2cpp_TypeInfo_var))->set_s_Auto_2(L_0);
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
// System.Void System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::.ctor(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListToBindableVectorViewAdapter__ctor_m29C5639232A6D62DA361BDA1E673937B478C28CC (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, RuntimeObject* ___underlyingList0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___underlyingList0;
		__this->set__list_0(L_0);
		return;
	}
}
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ListToBindableVectorViewAdapter_get_Size_m639607FFD5260E793DE3C653992EEE933C570826 (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListToBindableVectorViewAdapter_get_Size_m639607FFD5260E793DE3C653992EEE933C570826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__list_0();
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::GetAt(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2 (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_0 = __this->get__list_0();
		uint32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_001b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000f;
		throw e;
	}

CATCH_000f:
	{ // begin catch(System.ArgumentOutOfRangeException)
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = ((ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)__exception_local);
		NullCheck(L_3);
		Exception_SetErrorCode_m92A787DA80F9CBC81E05D158F3D8099A8F1DD44D(L_3, ((int32_t)-2147483637), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ListToBindableVectorViewAdapter_GetAt_m4B138FEE3A71058B2D8B39DF8BCE91EF18E317C2_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_001b:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::IndexOf(System.Object,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListToBindableVectorViewAdapter_IndexOf_m1C9D9F10213594BA4538F263EE5EA9B27A13BAAD (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, RuntimeObject * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListToBindableVectorViewAdapter_IndexOf_m1C9D9F10213594BA4538F263EE5EA9B27A13BAAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->get__list_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(7 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		uint32_t* L_4 = ___index1;
		*((int32_t*)L_4) = (int32_t)0;
		return (bool)0;
	}

IL_0016:
	{
		uint32_t* L_5 = ___index1;
		int32_t L_6 = V_0;
		*((int32_t*)L_5) = (int32_t)L_6;
		return (bool)1;
	}
}
// System.Collections.IEnumerator System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListToBindableVectorViewAdapter_GetEnumerator_m1946B6325E818CC98A24C8A67FFCA3656ACB078F (ListToBindableVectorViewAdapter_t965AC456C345910A7A10D27FF3D1869D28582899 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListToBindableVectorViewAdapter_GetEnumerator_m1946B6325E818CC98A24C8A67FFCA3656ACB078F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__list_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_0);
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
// System.Void Windows.UI.Xaml.Thickness::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thickness__ctor_m20CA38C174FC617B8177572422D25F464205539B (Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * __this, double ___left0, double ___top1, double ___right2, double ___bottom3, const RuntimeMethod* method)
{
	{
		double L_0 = ___left0;
		__this->set__left_0(L_0);
		double L_1 = ___top1;
		__this->set__top_1(L_1);
		double L_2 = ___right2;
		__this->set__right_2(L_2);
		double L_3 = ___bottom3;
		__this->set__bottom_3(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void Thickness__ctor_m20CA38C174FC617B8177572422D25F464205539B_AdjustorThunk (RuntimeObject * __this, double ___left0, double ___top1, double ___right2, double ___bottom3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * _thisAdjusted = reinterpret_cast<Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 *>(__this + _offset);
	Thickness__ctor_m20CA38C174FC617B8177572422D25F464205539B(_thisAdjusted, ___left0, ___top1, ___right2, ___bottom3, method);
}
// System.String Windows.UI.Xaml.Thickness::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Thickness_ToString_mF9F9D919F85AEEDCC30815B197935833902A9D89 (Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Thickness_ToString_mF9F9D919F85AEEDCC30815B197935833902A9D89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_1 = Thickness_ToString_mA3FE85EA438304C042DC7ED8362EC3149404D50F((Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 *)__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Thickness_ToString_mF9F9D919F85AEEDCC30815B197935833902A9D89_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * _thisAdjusted = reinterpret_cast<Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 *>(__this + _offset);
	return Thickness_ToString_mF9F9D919F85AEEDCC30815B197935833902A9D89(_thisAdjusted, method);
}
// System.String Windows.UI.Xaml.Thickness::ToString(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Thickness_ToString_mA3FE85EA438304C042DC7ED8362EC3149404D50F (Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___cultureInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Thickness_ToString_mA3FE85EA438304C042DC7ED8362EC3149404D50F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0 = ___cultureInfo0;
		Il2CppChar L_1 = TokenizerHelper_GetNumericListSeparator_m8F66D26308482525EE295CC145F2F1F6220ED81E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_2, ((int32_t)64), /*hidden argument*/NULL);
		StringBuilder_t * L_3 = L_2;
		double L_4 = __this->get__left_0();
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_5 = ___cultureInfo0;
		String_t* L_6 = Thickness_InternalToString_m864A354FC7B0430B7E03A8FFC54D57948A748FB7((Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 *)__this, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_3, L_6, /*hidden argument*/NULL);
		StringBuilder_t * L_7 = L_3;
		Il2CppChar L_8 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_7, L_8, /*hidden argument*/NULL);
		StringBuilder_t * L_9 = L_7;
		double L_10 = __this->get__top_1();
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_11 = ___cultureInfo0;
		String_t* L_12 = Thickness_InternalToString_m864A354FC7B0430B7E03A8FFC54D57948A748FB7((Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 *)__this, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_9, L_12, /*hidden argument*/NULL);
		StringBuilder_t * L_13 = L_9;
		Il2CppChar L_14 = V_0;
		NullCheck(L_13);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_13, L_14, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = L_13;
		double L_16 = __this->get__right_2();
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_17 = ___cultureInfo0;
		String_t* L_18 = Thickness_InternalToString_m864A354FC7B0430B7E03A8FFC54D57948A748FB7((Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 *)__this, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, L_18, /*hidden argument*/NULL);
		StringBuilder_t * L_19 = L_15;
		Il2CppChar L_20 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_19, L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_21 = L_19;
		double L_22 = __this->get__bottom_3();
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_23 = ___cultureInfo0;
		String_t* L_24 = Thickness_InternalToString_m864A354FC7B0430B7E03A8FFC54D57948A748FB7((Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 *)__this, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_21, L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		return L_25;
	}
}
IL2CPP_EXTERN_C  String_t* Thickness_ToString_mA3FE85EA438304C042DC7ED8362EC3149404D50F_AdjustorThunk (RuntimeObject * __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___cultureInfo0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * _thisAdjusted = reinterpret_cast<Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 *>(__this + _offset);
	return Thickness_ToString_mA3FE85EA438304C042DC7ED8362EC3149404D50F(_thisAdjusted, ___cultureInfo0, method);
}
// System.String Windows.UI.Xaml.Thickness::InternalToString(System.Double,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Thickness_InternalToString_m864A354FC7B0430B7E03A8FFC54D57948A748FB7 (Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * __this, double ___l0, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___cultureInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Thickness_InternalToString_m864A354FC7B0430B7E03A8FFC54D57948A748FB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___l0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_1 = Double_IsNaN_m94415C98C2D7DCAA32A82E1911AC13958AAD4347(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral84B7AF18301C4FCEAF238EFECCD57132EA7A8123;
	}

IL_000e:
	{
		double L_2 = ___l0;
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_3 = ___cultureInfo1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_4 = Convert_ToString_m5BC045F91E837268FECEA78DA859902005EF91D1(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* Thickness_InternalToString_m864A354FC7B0430B7E03A8FFC54D57948A748FB7_AdjustorThunk (RuntimeObject * __this, double ___l0, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___cultureInfo1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * _thisAdjusted = reinterpret_cast<Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 *>(__this + _offset);
	return Thickness_InternalToString_m864A354FC7B0430B7E03A8FFC54D57948A748FB7(_thisAdjusted, ___l0, ___cultureInfo1, method);
}
// System.Boolean Windows.UI.Xaml.Thickness::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Thickness_Equals_m8DCC96D818C25C9B4DC4AE6AAC37D1D5A0F4BD19 (Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Thickness_Equals_m8DCC96D818C25C9B4DC4AE6AAC37D1D5A0F4BD19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5  L_1 = (*(Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 *)__this);
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = Thickness_op_Equality_m732014E17DB8E78C1CB42C75880C6EAB1F748A47(L_1, ((*(Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 *)((Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 *)UnBox(L_2, Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Thickness_Equals_m8DCC96D818C25C9B4DC4AE6AAC37D1D5A0F4BD19_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * _thisAdjusted = reinterpret_cast<Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 *>(__this + _offset);
	return Thickness_Equals_m8DCC96D818C25C9B4DC4AE6AAC37D1D5A0F4BD19(_thisAdjusted, ___obj0, method);
}
// System.Int32 Windows.UI.Xaml.Thickness::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thickness_GetHashCode_m760531EA0099D4B12B521E2209E2CF908AD3AC1E (Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * __this, const RuntimeMethod* method)
{
	{
		double* L_0 = __this->get_address_of__left_0();
		int32_t L_1 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)L_0, /*hidden argument*/NULL);
		double* L_2 = __this->get_address_of__top_1();
		int32_t L_3 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)L_2, /*hidden argument*/NULL);
		double* L_4 = __this->get_address_of__right_2();
		int32_t L_5 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)L_4, /*hidden argument*/NULL);
		double* L_6 = __this->get_address_of__bottom_3();
		int32_t L_7 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)L_6, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5))^(int32_t)L_7));
	}
}
IL2CPP_EXTERN_C  int32_t Thickness_GetHashCode_m760531EA0099D4B12B521E2209E2CF908AD3AC1E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 * _thisAdjusted = reinterpret_cast<Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5 *>(__this + _offset);
	return Thickness_GetHashCode_m760531EA0099D4B12B521E2209E2CF908AD3AC1E(_thisAdjusted, method);
}
// System.Boolean Windows.UI.Xaml.Thickness::op_Equality(Windows.UI.Xaml.Thickness,Windows.UI.Xaml.Thickness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Thickness_op_Equality_m732014E17DB8E78C1CB42C75880C6EAB1F748A47 (Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5  ___t10, Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5  ___t21, const RuntimeMethod* method)
{
	{
		Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5  L_0 = ___t10;
		double L_1 = L_0.get__left_0();
		Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5  L_2 = ___t21;
		double L_3 = L_2.get__left_0();
		if ((!(((double)L_1) == ((double)L_3))))
		{
			goto IL_0039;
		}
	}
	{
		Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5  L_4 = ___t10;
		double L_5 = L_4.get__top_1();
		Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5  L_6 = ___t21;
		double L_7 = L_6.get__top_1();
		if ((!(((double)L_5) == ((double)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5  L_8 = ___t10;
		double L_9 = L_8.get__right_2();
		Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5  L_10 = ___t21;
		double L_11 = L_10.get__right_2();
		if ((!(((double)L_9) == ((double)L_11))))
		{
			goto IL_0039;
		}
	}
	{
		Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5  L_12 = ___t10;
		double L_13 = L_12.get__bottom_3();
		Thickness_t20C180251458D0AB9DB8AE6B0FC578213AB4FCB5  L_14 = ___t21;
		double L_15 = L_14.get__bottom_3();
		return (bool)((((double)L_13) == ((double)L_15))? 1 : 0);
	}

IL_0039:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GridLength_get_GridUnitType_m61E609C5C94C2C557C4830BFF7252B103CC7D06D_inline (GridLength_t680C6F57CD5971765D4E0EBECB8675D086001557 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__unitType_1();
		return L_0;
	}
}
