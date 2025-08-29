#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// SharpCompress.Compressors.Deflate.DeflateManager/Config[]
struct ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// SharpCompress.Converters.DataConverter
struct DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD;
// SharpCompress.Compressors.Deflate.DeflateManager
struct DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SharpCompress.Compressors.Deflate.StaticTree
struct StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// SharpCompress.Compressors.Deflate.ZlibCodec
struct ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE;
// SharpCompress.Converters.DataConverter/CopyConverter
struct CopyConverter_t957E1D582319526872FEFF453718C07F7CC6B574;
// SharpCompress.Converters.DataConverter/SwapConverter
struct SwapConverter_t37AC82B5B2F004CD16C0F3E8CF13983A1005C522;
// SharpCompress.Compressors.Deflate.DeflateManager/CompressFunc
struct CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3;
// SharpCompress.Compressors.Deflate.DeflateManager/Config
struct Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6;
// SharpCompress.Compressors.Deflate.DeflateManager/Tree
struct Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlushType_tDA7286C689BAF6F24A07FE571035F8913FBD3644_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____3544182260B8A15D332367E48C7530FC0E901FD3_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____5581A70566F03554D8048EDBFC6E6B399AF9BCB1_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____6A316789EED01119DE92841832701A40AB0CABD6_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_11_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C const RuntimeMethod* CopyConverter_GetInt32_m21DC2952DB0D23079D7B9CC011B0471B46FF27CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SwapConverter_GetInt32_m3D3B959B01FC5425792B74A784B3B7677E810E3F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
struct ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30;

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


// SharpCompress.Converters.DataConverter
struct DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD  : public RuntimeObject
{
public:

public:
};

struct DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_StaticFields
{
public:
	// SharpCompress.Converters.DataConverter SharpCompress.Converters.DataConverter::SwapConv
	DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * ___SwapConv_0;
	// System.Boolean SharpCompress.Converters.DataConverter::IsLittleEndian
	bool ___IsLittleEndian_1;
	// SharpCompress.Converters.DataConverter SharpCompress.Converters.DataConverter::<Native>k__BackingField
	DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * ___U3CNativeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_SwapConv_0() { return static_cast<int32_t>(offsetof(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_StaticFields, ___SwapConv_0)); }
	inline DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * get_SwapConv_0() const { return ___SwapConv_0; }
	inline DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD ** get_address_of_SwapConv_0() { return &___SwapConv_0; }
	inline void set_SwapConv_0(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * value)
	{
		___SwapConv_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SwapConv_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsLittleEndian_1() { return static_cast<int32_t>(offsetof(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_StaticFields, ___IsLittleEndian_1)); }
	inline bool get_IsLittleEndian_1() const { return ___IsLittleEndian_1; }
	inline bool* get_address_of_IsLittleEndian_1() { return &___IsLittleEndian_1; }
	inline void set_IsLittleEndian_1(bool value)
	{
		___IsLittleEndian_1 = value;
	}

	inline static int32_t get_offset_of_U3CNativeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_StaticFields, ___U3CNativeU3Ek__BackingField_2)); }
	inline DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * get_U3CNativeU3Ek__BackingField_2() const { return ___U3CNativeU3Ek__BackingField_2; }
	inline DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD ** get_address_of_U3CNativeU3Ek__BackingField_2() { return &___U3CNativeU3Ek__BackingField_2; }
	inline void set_U3CNativeU3Ek__BackingField_2(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * value)
	{
		___U3CNativeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNativeU3Ek__BackingField_2), (void*)value);
	}
};


// SharpCompress.Compressors.Deflate.InternalConstants
struct InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E  : public RuntimeObject
{
public:

public:
};

struct InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields
{
public:
	// System.Int32 SharpCompress.Compressors.Deflate.InternalConstants::MAX_BITS
	int32_t ___MAX_BITS_0;
	// System.Int32 SharpCompress.Compressors.Deflate.InternalConstants::BL_CODES
	int32_t ___BL_CODES_1;
	// System.Int32 SharpCompress.Compressors.Deflate.InternalConstants::D_CODES
	int32_t ___D_CODES_2;
	// System.Int32 SharpCompress.Compressors.Deflate.InternalConstants::LITERALS
	int32_t ___LITERALS_3;
	// System.Int32 SharpCompress.Compressors.Deflate.InternalConstants::LENGTH_CODES
	int32_t ___LENGTH_CODES_4;
	// System.Int32 SharpCompress.Compressors.Deflate.InternalConstants::L_CODES
	int32_t ___L_CODES_5;
	// System.Int32 SharpCompress.Compressors.Deflate.InternalConstants::MAX_BL_BITS
	int32_t ___MAX_BL_BITS_6;
	// System.Int32 SharpCompress.Compressors.Deflate.InternalConstants::REP_3_6
	int32_t ___REP_3_6_7;
	// System.Int32 SharpCompress.Compressors.Deflate.InternalConstants::REPZ_3_10
	int32_t ___REPZ_3_10_8;
	// System.Int32 SharpCompress.Compressors.Deflate.InternalConstants::REPZ_11_138
	int32_t ___REPZ_11_138_9;

public:
	inline static int32_t get_offset_of_MAX_BITS_0() { return static_cast<int32_t>(offsetof(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields, ___MAX_BITS_0)); }
	inline int32_t get_MAX_BITS_0() const { return ___MAX_BITS_0; }
	inline int32_t* get_address_of_MAX_BITS_0() { return &___MAX_BITS_0; }
	inline void set_MAX_BITS_0(int32_t value)
	{
		___MAX_BITS_0 = value;
	}

	inline static int32_t get_offset_of_BL_CODES_1() { return static_cast<int32_t>(offsetof(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields, ___BL_CODES_1)); }
	inline int32_t get_BL_CODES_1() const { return ___BL_CODES_1; }
	inline int32_t* get_address_of_BL_CODES_1() { return &___BL_CODES_1; }
	inline void set_BL_CODES_1(int32_t value)
	{
		___BL_CODES_1 = value;
	}

	inline static int32_t get_offset_of_D_CODES_2() { return static_cast<int32_t>(offsetof(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields, ___D_CODES_2)); }
	inline int32_t get_D_CODES_2() const { return ___D_CODES_2; }
	inline int32_t* get_address_of_D_CODES_2() { return &___D_CODES_2; }
	inline void set_D_CODES_2(int32_t value)
	{
		___D_CODES_2 = value;
	}

	inline static int32_t get_offset_of_LITERALS_3() { return static_cast<int32_t>(offsetof(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields, ___LITERALS_3)); }
	inline int32_t get_LITERALS_3() const { return ___LITERALS_3; }
	inline int32_t* get_address_of_LITERALS_3() { return &___LITERALS_3; }
	inline void set_LITERALS_3(int32_t value)
	{
		___LITERALS_3 = value;
	}

	inline static int32_t get_offset_of_LENGTH_CODES_4() { return static_cast<int32_t>(offsetof(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields, ___LENGTH_CODES_4)); }
	inline int32_t get_LENGTH_CODES_4() const { return ___LENGTH_CODES_4; }
	inline int32_t* get_address_of_LENGTH_CODES_4() { return &___LENGTH_CODES_4; }
	inline void set_LENGTH_CODES_4(int32_t value)
	{
		___LENGTH_CODES_4 = value;
	}

	inline static int32_t get_offset_of_L_CODES_5() { return static_cast<int32_t>(offsetof(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields, ___L_CODES_5)); }
	inline int32_t get_L_CODES_5() const { return ___L_CODES_5; }
	inline int32_t* get_address_of_L_CODES_5() { return &___L_CODES_5; }
	inline void set_L_CODES_5(int32_t value)
	{
		___L_CODES_5 = value;
	}

	inline static int32_t get_offset_of_MAX_BL_BITS_6() { return static_cast<int32_t>(offsetof(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields, ___MAX_BL_BITS_6)); }
	inline int32_t get_MAX_BL_BITS_6() const { return ___MAX_BL_BITS_6; }
	inline int32_t* get_address_of_MAX_BL_BITS_6() { return &___MAX_BL_BITS_6; }
	inline void set_MAX_BL_BITS_6(int32_t value)
	{
		___MAX_BL_BITS_6 = value;
	}

	inline static int32_t get_offset_of_REP_3_6_7() { return static_cast<int32_t>(offsetof(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields, ___REP_3_6_7)); }
	inline int32_t get_REP_3_6_7() const { return ___REP_3_6_7; }
	inline int32_t* get_address_of_REP_3_6_7() { return &___REP_3_6_7; }
	inline void set_REP_3_6_7(int32_t value)
	{
		___REP_3_6_7 = value;
	}

	inline static int32_t get_offset_of_REPZ_3_10_8() { return static_cast<int32_t>(offsetof(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields, ___REPZ_3_10_8)); }
	inline int32_t get_REPZ_3_10_8() const { return ___REPZ_3_10_8; }
	inline int32_t* get_address_of_REPZ_3_10_8() { return &___REPZ_3_10_8; }
	inline void set_REPZ_3_10_8(int32_t value)
	{
		___REPZ_3_10_8 = value;
	}

	inline static int32_t get_offset_of_REPZ_11_138_9() { return static_cast<int32_t>(offsetof(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields, ___REPZ_11_138_9)); }
	inline int32_t get_REPZ_11_138_9() const { return ___REPZ_11_138_9; }
	inline int32_t* get_address_of_REPZ_11_138_9() { return &___REPZ_11_138_9; }
	inline void set_REPZ_11_138_9(int32_t value)
	{
		___REPZ_11_138_9 = value;
	}
};


// SharpCompress.Compressors.Deflate.StaticTree
struct StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620  : public RuntimeObject
{
public:
	// System.Int16[] SharpCompress.Compressors.Deflate.StaticTree::treeCodes
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___treeCodes_6;
	// System.Int32[] SharpCompress.Compressors.Deflate.StaticTree::extraBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___extraBits_7;
	// System.Int32 SharpCompress.Compressors.Deflate.StaticTree::extraBase
	int32_t ___extraBase_8;
	// System.Int32 SharpCompress.Compressors.Deflate.StaticTree::elems
	int32_t ___elems_9;
	// System.Int32 SharpCompress.Compressors.Deflate.StaticTree::maxLength
	int32_t ___maxLength_10;

public:
	inline static int32_t get_offset_of_treeCodes_6() { return static_cast<int32_t>(offsetof(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620, ___treeCodes_6)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_treeCodes_6() const { return ___treeCodes_6; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_treeCodes_6() { return &___treeCodes_6; }
	inline void set_treeCodes_6(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___treeCodes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeCodes_6), (void*)value);
	}

	inline static int32_t get_offset_of_extraBits_7() { return static_cast<int32_t>(offsetof(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620, ___extraBits_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_extraBits_7() const { return ___extraBits_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_extraBits_7() { return &___extraBits_7; }
	inline void set_extraBits_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___extraBits_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extraBits_7), (void*)value);
	}

	inline static int32_t get_offset_of_extraBase_8() { return static_cast<int32_t>(offsetof(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620, ___extraBase_8)); }
	inline int32_t get_extraBase_8() const { return ___extraBase_8; }
	inline int32_t* get_address_of_extraBase_8() { return &___extraBase_8; }
	inline void set_extraBase_8(int32_t value)
	{
		___extraBase_8 = value;
	}

	inline static int32_t get_offset_of_elems_9() { return static_cast<int32_t>(offsetof(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620, ___elems_9)); }
	inline int32_t get_elems_9() const { return ___elems_9; }
	inline int32_t* get_address_of_elems_9() { return &___elems_9; }
	inline void set_elems_9(int32_t value)
	{
		___elems_9 = value;
	}

	inline static int32_t get_offset_of_maxLength_10() { return static_cast<int32_t>(offsetof(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620, ___maxLength_10)); }
	inline int32_t get_maxLength_10() const { return ___maxLength_10; }
	inline int32_t* get_address_of_maxLength_10() { return &___maxLength_10; }
	inline void set_maxLength_10(int32_t value)
	{
		___maxLength_10 = value;
	}
};

struct StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields
{
public:
	// System.Int16[] SharpCompress.Compressors.Deflate.StaticTree::lengthAndLiteralsTreeCodes
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___lengthAndLiteralsTreeCodes_0;
	// System.Int16[] SharpCompress.Compressors.Deflate.StaticTree::distTreeCodes
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___distTreeCodes_1;
	// System.Int32[] SharpCompress.Compressors.Deflate.StaticTree::extra_blbits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___extra_blbits_2;
	// SharpCompress.Compressors.Deflate.StaticTree SharpCompress.Compressors.Deflate.StaticTree::Literals
	StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * ___Literals_3;
	// SharpCompress.Compressors.Deflate.StaticTree SharpCompress.Compressors.Deflate.StaticTree::Distances
	StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * ___Distances_4;
	// SharpCompress.Compressors.Deflate.StaticTree SharpCompress.Compressors.Deflate.StaticTree::BitLengths
	StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * ___BitLengths_5;

public:
	inline static int32_t get_offset_of_lengthAndLiteralsTreeCodes_0() { return static_cast<int32_t>(offsetof(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields, ___lengthAndLiteralsTreeCodes_0)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_lengthAndLiteralsTreeCodes_0() const { return ___lengthAndLiteralsTreeCodes_0; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_lengthAndLiteralsTreeCodes_0() { return &___lengthAndLiteralsTreeCodes_0; }
	inline void set_lengthAndLiteralsTreeCodes_0(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___lengthAndLiteralsTreeCodes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lengthAndLiteralsTreeCodes_0), (void*)value);
	}

	inline static int32_t get_offset_of_distTreeCodes_1() { return static_cast<int32_t>(offsetof(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields, ___distTreeCodes_1)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_distTreeCodes_1() const { return ___distTreeCodes_1; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_distTreeCodes_1() { return &___distTreeCodes_1; }
	inline void set_distTreeCodes_1(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___distTreeCodes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___distTreeCodes_1), (void*)value);
	}

	inline static int32_t get_offset_of_extra_blbits_2() { return static_cast<int32_t>(offsetof(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields, ___extra_blbits_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_extra_blbits_2() const { return ___extra_blbits_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_extra_blbits_2() { return &___extra_blbits_2; }
	inline void set_extra_blbits_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___extra_blbits_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extra_blbits_2), (void*)value);
	}

	inline static int32_t get_offset_of_Literals_3() { return static_cast<int32_t>(offsetof(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields, ___Literals_3)); }
	inline StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * get_Literals_3() const { return ___Literals_3; }
	inline StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 ** get_address_of_Literals_3() { return &___Literals_3; }
	inline void set_Literals_3(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * value)
	{
		___Literals_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Literals_3), (void*)value);
	}

	inline static int32_t get_offset_of_Distances_4() { return static_cast<int32_t>(offsetof(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields, ___Distances_4)); }
	inline StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * get_Distances_4() const { return ___Distances_4; }
	inline StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 ** get_address_of_Distances_4() { return &___Distances_4; }
	inline void set_Distances_4(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * value)
	{
		___Distances_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Distances_4), (void*)value);
	}

	inline static int32_t get_offset_of_BitLengths_5() { return static_cast<int32_t>(offsetof(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields, ___BitLengths_5)); }
	inline StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * get_BitLengths_5() const { return ___BitLengths_5; }
	inline StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 ** get_address_of_BitLengths_5() { return &___BitLengths_5; }
	inline void set_BitLengths_5(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * value)
	{
		___BitLengths_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BitLengths_5), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// SharpCompress.Compressors.Deflate.DeflateManager/Tree
struct Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6  : public RuntimeObject
{
public:
	// System.Int16[] SharpCompress.Compressors.Deflate.DeflateManager/Tree::dyn_tree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dyn_tree_6;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager/Tree::max_code
	int32_t ___max_code_7;
	// SharpCompress.Compressors.Deflate.StaticTree SharpCompress.Compressors.Deflate.DeflateManager/Tree::staticTree
	StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * ___staticTree_8;

public:
	inline static int32_t get_offset_of_dyn_tree_6() { return static_cast<int32_t>(offsetof(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6, ___dyn_tree_6)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_dyn_tree_6() const { return ___dyn_tree_6; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_dyn_tree_6() { return &___dyn_tree_6; }
	inline void set_dyn_tree_6(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___dyn_tree_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_tree_6), (void*)value);
	}

	inline static int32_t get_offset_of_max_code_7() { return static_cast<int32_t>(offsetof(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6, ___max_code_7)); }
	inline int32_t get_max_code_7() const { return ___max_code_7; }
	inline int32_t* get_address_of_max_code_7() { return &___max_code_7; }
	inline void set_max_code_7(int32_t value)
	{
		___max_code_7 = value;
	}

	inline static int32_t get_offset_of_staticTree_8() { return static_cast<int32_t>(offsetof(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6, ___staticTree_8)); }
	inline StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * get_staticTree_8() const { return ___staticTree_8; }
	inline StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 ** get_address_of_staticTree_8() { return &___staticTree_8; }
	inline void set_staticTree_8(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * value)
	{
		___staticTree_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticTree_8), (void*)value);
	}
};

struct Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields
{
public:
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager/Tree::HEAP_SIZE
	int32_t ___HEAP_SIZE_0;
	// System.SByte[] SharpCompress.Compressors.Deflate.DeflateManager/Tree::bl_order
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___bl_order_1;
	// System.SByte[] SharpCompress.Compressors.Deflate.DeflateManager/Tree::_dist_code
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ____dist_code_2;
	// System.SByte[] SharpCompress.Compressors.Deflate.DeflateManager/Tree::LengthCode
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___LengthCode_3;
	// System.Int32[] SharpCompress.Compressors.Deflate.DeflateManager/Tree::LengthBase
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___LengthBase_4;
	// System.Int32[] SharpCompress.Compressors.Deflate.DeflateManager/Tree::DistanceBase
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DistanceBase_5;

public:
	inline static int32_t get_offset_of_HEAP_SIZE_0() { return static_cast<int32_t>(offsetof(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields, ___HEAP_SIZE_0)); }
	inline int32_t get_HEAP_SIZE_0() const { return ___HEAP_SIZE_0; }
	inline int32_t* get_address_of_HEAP_SIZE_0() { return &___HEAP_SIZE_0; }
	inline void set_HEAP_SIZE_0(int32_t value)
	{
		___HEAP_SIZE_0 = value;
	}

	inline static int32_t get_offset_of_bl_order_1() { return static_cast<int32_t>(offsetof(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields, ___bl_order_1)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_bl_order_1() const { return ___bl_order_1; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_bl_order_1() { return &___bl_order_1; }
	inline void set_bl_order_1(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___bl_order_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_order_1), (void*)value);
	}

	inline static int32_t get_offset_of__dist_code_2() { return static_cast<int32_t>(offsetof(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields, ____dist_code_2)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get__dist_code_2() const { return ____dist_code_2; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of__dist_code_2() { return &____dist_code_2; }
	inline void set__dist_code_2(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		____dist_code_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dist_code_2), (void*)value);
	}

	inline static int32_t get_offset_of_LengthCode_3() { return static_cast<int32_t>(offsetof(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields, ___LengthCode_3)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_LengthCode_3() const { return ___LengthCode_3; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_LengthCode_3() { return &___LengthCode_3; }
	inline void set_LengthCode_3(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___LengthCode_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LengthCode_3), (void*)value);
	}

	inline static int32_t get_offset_of_LengthBase_4() { return static_cast<int32_t>(offsetof(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields, ___LengthBase_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_LengthBase_4() const { return ___LengthBase_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_LengthBase_4() { return &___LengthBase_4; }
	inline void set_LengthBase_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___LengthBase_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LengthBase_4), (void*)value);
	}

	inline static int32_t get_offset_of_DistanceBase_5() { return static_cast<int32_t>(offsetof(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields, ___DistanceBase_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DistanceBase_5() const { return ___DistanceBase_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DistanceBase_5() { return &___DistanceBase_5; }
	inline void set_DistanceBase_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DistanceBase_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DistanceBase_5), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct IntPtr_t 
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


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
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
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1152
struct __StaticArrayInitTypeSizeU3D1152_tCC56F0D9A0243853C6790DBB239D8119DF9BE74D 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1152_tCC56F0D9A0243853C6790DBB239D8119DF9BE74D__padding[1152];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116
struct __StaticArrayInitTypeSizeU3D116_t28B2407AE0D193CC28E9644E267DBE88E361D477 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D116_t28B2407AE0D193CC28E9644E267DBE88E361D477__padding[116];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C__padding[120];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124
struct __StaticArrayInitTypeSizeU3D124_tCEE2E21869525756F06107C3680943944ECC84DD 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D124_tCEE2E21869525756F06107C3680943944ECC84DD__padding[124];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19
struct __StaticArrayInitTypeSizeU3D19_t3824799EAA461831CE7712E80D5546815F5F9D75 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D19_t3824799EAA461831CE7712E80D5546815F5F9D75__padding[19];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_tC0C770F58FE9110713FC1345D5BB089E966AF47E 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tC0C770F58FE9110713FC1345D5BB089E966AF47E__padding[256];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=384
struct __StaticArrayInitTypeSizeU3D384_t9322C08B76133CD9497AC590AE086A0C90C69867 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D384_t9322C08B76133CD9497AC590AE086A0C90C69867__padding[384];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512
struct __StaticArrayInitTypeSizeU3D512_t9480B9704844413B5E0181AAD6CEDFFA6B40E9BA 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D512_t9480B9704844413B5E0181AAD6CEDFFA6B40E9BA__padding[512];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6144
struct __StaticArrayInitTypeSizeU3D6144_t2A99B617011E8E1EDE71FAE43C462FB20904B708 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6144_t2A99B617011E8E1EDE71FAE43C462FB20904B708__padding[6144];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
struct __StaticArrayInitTypeSizeU3D68_t9C0E4E9658D4DF647263416DAAE4A6D53D1B2FF7 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t9C0E4E9658D4DF647263416DAAE4A6D53D1B2FF7__padding[68];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76
struct __StaticArrayInitTypeSizeU3D76_t931EABDB1B48511AE6DC77C2CBC300D0A59C3585 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t931EABDB1B48511AE6DC77C2CBC300D0A59C3585__padding[76];
	};

public:
};


// SharpCompress.Converters.DataConverter/CopyConverter
struct CopyConverter_t957E1D582319526872FEFF453718C07F7CC6B574  : public DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD
{
public:

public:
};


// SharpCompress.Converters.DataConverter/SwapConverter
struct SwapConverter_t37AC82B5B2F004CD16C0F3E8CF13983A1005C522  : public DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD
{
public:

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=384 <PrivateImplementationDetails>::1B180C6E41F096D53222F5E8EF558B78182CA401
	__StaticArrayInitTypeSizeU3D384_t9322C08B76133CD9497AC590AE086A0C90C69867  ___1B180C6E41F096D53222F5E8EF558B78182CA401_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38
	__StaticArrayInitTypeSizeU3D76_t931EABDB1B48511AE6DC77C2CBC300D0A59C3585  ___1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>::2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71
	__StaticArrayInitTypeSizeU3D116_t28B2407AE0D193CC28E9644E267DBE88E361D477  ___2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::3544182260B8A15D332367E48C7530FC0E901FD3
	__StaticArrayInitTypeSizeU3D512_t9480B9704844413B5E0181AAD6CEDFFA6B40E9BA  ___3544182260B8A15D332367E48C7530FC0E901FD3_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::5581A70566F03554D8048EDBFC6E6B399AF9BCB1
	__StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C  ___5581A70566F03554D8048EDBFC6E6B399AF9BCB1_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=116 <PrivateImplementationDetails>::67C0E784F3654B008A81E2988588CF4956CCF3DA
	__StaticArrayInitTypeSizeU3D116_t28B2407AE0D193CC28E9644E267DBE88E361D477  ___67C0E784F3654B008A81E2988588CF4956CCF3DA_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::6A316789EED01119DE92841832701A40AB0CABD6
	__StaticArrayInitTypeSizeU3D256_tC0C770F58FE9110713FC1345D5BB089E966AF47E  ___6A316789EED01119DE92841832701A40AB0CABD6_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::79D521E6E3E55103005E9CC3FA43B3174FAF090F
	__StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C  ___79D521E6E3E55103005E9CC3FA43B3174FAF090F_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::8457F44B035C9073EE2D1F132D0A8AF5631DCDC8
	__StaticArrayInitTypeSizeU3D76_t931EABDB1B48511AE6DC77C2CBC300D0A59C3585  ___8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::850D4DC092689E1F0D8A70B6281848B27DEC0014
	__StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C  ___850D4DC092689E1F0D8A70B6281848B27DEC0014_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124 <PrivateImplementationDetails>::8ED8F61DAA454B49CD5059AE4486C59174324E9E
	__StaticArrayInitTypeSizeU3D124_tCEE2E21869525756F06107C3680943944ECC84DD  ___8ED8F61DAA454B49CD5059AE4486C59174324E9E_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19 <PrivateImplementationDetails>::9F8365E9D6C62D3B47026EC465B05A7B5526B5CD
	__StaticArrayInitTypeSizeU3D19_t3824799EAA461831CE7712E80D5546815F5F9D75  ___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6144 <PrivateImplementationDetails>::A474A0BEC4E2CE8491839502AE85F6EA8504C6BD
	__StaticArrayInitTypeSizeU3D6144_t2A99B617011E8E1EDE71FAE43C462FB20904B708  ___A474A0BEC4E2CE8491839502AE85F6EA8504C6BD_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::D068832E6B13A623916709C1E0E25ADCBE7B455F
	__StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C  ___D068832E6B13A623916709C1E0E25ADCBE7B455F_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124 <PrivateImplementationDetails>::DACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A
	__StaticArrayInitTypeSizeU3D124_tCEE2E21869525756F06107C3680943944ECC84DD  ___DACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1152 <PrivateImplementationDetails>::EB6F545AEF284339D25594F900E7A395212460EB
	__StaticArrayInitTypeSizeU3D1152_tCC56F0D9A0243853C6790DBB239D8119DF9BE74D  ___EB6F545AEF284339D25594F900E7A395212460EB_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::F584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF
	__StaticArrayInitTypeSizeU3D68_t9C0E4E9658D4DF647263416DAAE4A6D53D1B2FF7  ___F584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_16;

public:
	inline static int32_t get_offset_of_U31B180C6E41F096D53222F5E8EF558B78182CA401_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___1B180C6E41F096D53222F5E8EF558B78182CA401_0)); }
	inline __StaticArrayInitTypeSizeU3D384_t9322C08B76133CD9497AC590AE086A0C90C69867  get_U31B180C6E41F096D53222F5E8EF558B78182CA401_0() const { return ___1B180C6E41F096D53222F5E8EF558B78182CA401_0; }
	inline __StaticArrayInitTypeSizeU3D384_t9322C08B76133CD9497AC590AE086A0C90C69867 * get_address_of_U31B180C6E41F096D53222F5E8EF558B78182CA401_0() { return &___1B180C6E41F096D53222F5E8EF558B78182CA401_0; }
	inline void set_U31B180C6E41F096D53222F5E8EF558B78182CA401_0(__StaticArrayInitTypeSizeU3D384_t9322C08B76133CD9497AC590AE086A0C90C69867  value)
	{
		___1B180C6E41F096D53222F5E8EF558B78182CA401_0 = value;
	}

	inline static int32_t get_offset_of_U31FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_1)); }
	inline __StaticArrayInitTypeSizeU3D76_t931EABDB1B48511AE6DC77C2CBC300D0A59C3585  get_U31FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_1() const { return ___1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_1; }
	inline __StaticArrayInitTypeSizeU3D76_t931EABDB1B48511AE6DC77C2CBC300D0A59C3585 * get_address_of_U31FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_1() { return &___1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_1; }
	inline void set_U31FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_1(__StaticArrayInitTypeSizeU3D76_t931EABDB1B48511AE6DC77C2CBC300D0A59C3585  value)
	{
		___1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_1 = value;
	}

	inline static int32_t get_offset_of_U32E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_2)); }
	inline __StaticArrayInitTypeSizeU3D116_t28B2407AE0D193CC28E9644E267DBE88E361D477  get_U32E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_2() const { return ___2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_2; }
	inline __StaticArrayInitTypeSizeU3D116_t28B2407AE0D193CC28E9644E267DBE88E361D477 * get_address_of_U32E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_2() { return &___2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_2; }
	inline void set_U32E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_2(__StaticArrayInitTypeSizeU3D116_t28B2407AE0D193CC28E9644E267DBE88E361D477  value)
	{
		___2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_2 = value;
	}

	inline static int32_t get_offset_of_U33544182260B8A15D332367E48C7530FC0E901FD3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___3544182260B8A15D332367E48C7530FC0E901FD3_3)); }
	inline __StaticArrayInitTypeSizeU3D512_t9480B9704844413B5E0181AAD6CEDFFA6B40E9BA  get_U33544182260B8A15D332367E48C7530FC0E901FD3_3() const { return ___3544182260B8A15D332367E48C7530FC0E901FD3_3; }
	inline __StaticArrayInitTypeSizeU3D512_t9480B9704844413B5E0181AAD6CEDFFA6B40E9BA * get_address_of_U33544182260B8A15D332367E48C7530FC0E901FD3_3() { return &___3544182260B8A15D332367E48C7530FC0E901FD3_3; }
	inline void set_U33544182260B8A15D332367E48C7530FC0E901FD3_3(__StaticArrayInitTypeSizeU3D512_t9480B9704844413B5E0181AAD6CEDFFA6B40E9BA  value)
	{
		___3544182260B8A15D332367E48C7530FC0E901FD3_3 = value;
	}

	inline static int32_t get_offset_of_U35581A70566F03554D8048EDBFC6E6B399AF9BCB1_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___5581A70566F03554D8048EDBFC6E6B399AF9BCB1_4)); }
	inline __StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C  get_U35581A70566F03554D8048EDBFC6E6B399AF9BCB1_4() const { return ___5581A70566F03554D8048EDBFC6E6B399AF9BCB1_4; }
	inline __StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C * get_address_of_U35581A70566F03554D8048EDBFC6E6B399AF9BCB1_4() { return &___5581A70566F03554D8048EDBFC6E6B399AF9BCB1_4; }
	inline void set_U35581A70566F03554D8048EDBFC6E6B399AF9BCB1_4(__StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C  value)
	{
		___5581A70566F03554D8048EDBFC6E6B399AF9BCB1_4 = value;
	}

	inline static int32_t get_offset_of_U367C0E784F3654B008A81E2988588CF4956CCF3DA_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___67C0E784F3654B008A81E2988588CF4956CCF3DA_5)); }
	inline __StaticArrayInitTypeSizeU3D116_t28B2407AE0D193CC28E9644E267DBE88E361D477  get_U367C0E784F3654B008A81E2988588CF4956CCF3DA_5() const { return ___67C0E784F3654B008A81E2988588CF4956CCF3DA_5; }
	inline __StaticArrayInitTypeSizeU3D116_t28B2407AE0D193CC28E9644E267DBE88E361D477 * get_address_of_U367C0E784F3654B008A81E2988588CF4956CCF3DA_5() { return &___67C0E784F3654B008A81E2988588CF4956CCF3DA_5; }
	inline void set_U367C0E784F3654B008A81E2988588CF4956CCF3DA_5(__StaticArrayInitTypeSizeU3D116_t28B2407AE0D193CC28E9644E267DBE88E361D477  value)
	{
		___67C0E784F3654B008A81E2988588CF4956CCF3DA_5 = value;
	}

	inline static int32_t get_offset_of_U36A316789EED01119DE92841832701A40AB0CABD6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___6A316789EED01119DE92841832701A40AB0CABD6_6)); }
	inline __StaticArrayInitTypeSizeU3D256_tC0C770F58FE9110713FC1345D5BB089E966AF47E  get_U36A316789EED01119DE92841832701A40AB0CABD6_6() const { return ___6A316789EED01119DE92841832701A40AB0CABD6_6; }
	inline __StaticArrayInitTypeSizeU3D256_tC0C770F58FE9110713FC1345D5BB089E966AF47E * get_address_of_U36A316789EED01119DE92841832701A40AB0CABD6_6() { return &___6A316789EED01119DE92841832701A40AB0CABD6_6; }
	inline void set_U36A316789EED01119DE92841832701A40AB0CABD6_6(__StaticArrayInitTypeSizeU3D256_tC0C770F58FE9110713FC1345D5BB089E966AF47E  value)
	{
		___6A316789EED01119DE92841832701A40AB0CABD6_6 = value;
	}

	inline static int32_t get_offset_of_U379D521E6E3E55103005E9CC3FA43B3174FAF090F_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___79D521E6E3E55103005E9CC3FA43B3174FAF090F_7)); }
	inline __StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C  get_U379D521E6E3E55103005E9CC3FA43B3174FAF090F_7() const { return ___79D521E6E3E55103005E9CC3FA43B3174FAF090F_7; }
	inline __StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C * get_address_of_U379D521E6E3E55103005E9CC3FA43B3174FAF090F_7() { return &___79D521E6E3E55103005E9CC3FA43B3174FAF090F_7; }
	inline void set_U379D521E6E3E55103005E9CC3FA43B3174FAF090F_7(__StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C  value)
	{
		___79D521E6E3E55103005E9CC3FA43B3174FAF090F_7 = value;
	}

	inline static int32_t get_offset_of_U38457F44B035C9073EE2D1F132D0A8AF5631DCDC8_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_8)); }
	inline __StaticArrayInitTypeSizeU3D76_t931EABDB1B48511AE6DC77C2CBC300D0A59C3585  get_U38457F44B035C9073EE2D1F132D0A8AF5631DCDC8_8() const { return ___8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_8; }
	inline __StaticArrayInitTypeSizeU3D76_t931EABDB1B48511AE6DC77C2CBC300D0A59C3585 * get_address_of_U38457F44B035C9073EE2D1F132D0A8AF5631DCDC8_8() { return &___8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_8; }
	inline void set_U38457F44B035C9073EE2D1F132D0A8AF5631DCDC8_8(__StaticArrayInitTypeSizeU3D76_t931EABDB1B48511AE6DC77C2CBC300D0A59C3585  value)
	{
		___8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_8 = value;
	}

	inline static int32_t get_offset_of_U3850D4DC092689E1F0D8A70B6281848B27DEC0014_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___850D4DC092689E1F0D8A70B6281848B27DEC0014_9)); }
	inline __StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C  get_U3850D4DC092689E1F0D8A70B6281848B27DEC0014_9() const { return ___850D4DC092689E1F0D8A70B6281848B27DEC0014_9; }
	inline __StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C * get_address_of_U3850D4DC092689E1F0D8A70B6281848B27DEC0014_9() { return &___850D4DC092689E1F0D8A70B6281848B27DEC0014_9; }
	inline void set_U3850D4DC092689E1F0D8A70B6281848B27DEC0014_9(__StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C  value)
	{
		___850D4DC092689E1F0D8A70B6281848B27DEC0014_9 = value;
	}

	inline static int32_t get_offset_of_U38ED8F61DAA454B49CD5059AE4486C59174324E9E_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___8ED8F61DAA454B49CD5059AE4486C59174324E9E_10)); }
	inline __StaticArrayInitTypeSizeU3D124_tCEE2E21869525756F06107C3680943944ECC84DD  get_U38ED8F61DAA454B49CD5059AE4486C59174324E9E_10() const { return ___8ED8F61DAA454B49CD5059AE4486C59174324E9E_10; }
	inline __StaticArrayInitTypeSizeU3D124_tCEE2E21869525756F06107C3680943944ECC84DD * get_address_of_U38ED8F61DAA454B49CD5059AE4486C59174324E9E_10() { return &___8ED8F61DAA454B49CD5059AE4486C59174324E9E_10; }
	inline void set_U38ED8F61DAA454B49CD5059AE4486C59174324E9E_10(__StaticArrayInitTypeSizeU3D124_tCEE2E21869525756F06107C3680943944ECC84DD  value)
	{
		___8ED8F61DAA454B49CD5059AE4486C59174324E9E_10 = value;
	}

	inline static int32_t get_offset_of_U39F8365E9D6C62D3B47026EC465B05A7B5526B5CD_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_11)); }
	inline __StaticArrayInitTypeSizeU3D19_t3824799EAA461831CE7712E80D5546815F5F9D75  get_U39F8365E9D6C62D3B47026EC465B05A7B5526B5CD_11() const { return ___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_11; }
	inline __StaticArrayInitTypeSizeU3D19_t3824799EAA461831CE7712E80D5546815F5F9D75 * get_address_of_U39F8365E9D6C62D3B47026EC465B05A7B5526B5CD_11() { return &___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_11; }
	inline void set_U39F8365E9D6C62D3B47026EC465B05A7B5526B5CD_11(__StaticArrayInitTypeSizeU3D19_t3824799EAA461831CE7712E80D5546815F5F9D75  value)
	{
		___9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_11 = value;
	}

	inline static int32_t get_offset_of_A474A0BEC4E2CE8491839502AE85F6EA8504C6BD_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___A474A0BEC4E2CE8491839502AE85F6EA8504C6BD_12)); }
	inline __StaticArrayInitTypeSizeU3D6144_t2A99B617011E8E1EDE71FAE43C462FB20904B708  get_A474A0BEC4E2CE8491839502AE85F6EA8504C6BD_12() const { return ___A474A0BEC4E2CE8491839502AE85F6EA8504C6BD_12; }
	inline __StaticArrayInitTypeSizeU3D6144_t2A99B617011E8E1EDE71FAE43C462FB20904B708 * get_address_of_A474A0BEC4E2CE8491839502AE85F6EA8504C6BD_12() { return &___A474A0BEC4E2CE8491839502AE85F6EA8504C6BD_12; }
	inline void set_A474A0BEC4E2CE8491839502AE85F6EA8504C6BD_12(__StaticArrayInitTypeSizeU3D6144_t2A99B617011E8E1EDE71FAE43C462FB20904B708  value)
	{
		___A474A0BEC4E2CE8491839502AE85F6EA8504C6BD_12 = value;
	}

	inline static int32_t get_offset_of_D068832E6B13A623916709C1E0E25ADCBE7B455F_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___D068832E6B13A623916709C1E0E25ADCBE7B455F_13)); }
	inline __StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C  get_D068832E6B13A623916709C1E0E25ADCBE7B455F_13() const { return ___D068832E6B13A623916709C1E0E25ADCBE7B455F_13; }
	inline __StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C * get_address_of_D068832E6B13A623916709C1E0E25ADCBE7B455F_13() { return &___D068832E6B13A623916709C1E0E25ADCBE7B455F_13; }
	inline void set_D068832E6B13A623916709C1E0E25ADCBE7B455F_13(__StaticArrayInitTypeSizeU3D120_tDAA790DE31F7051F1D8FC0727DD77E23F9357A2C  value)
	{
		___D068832E6B13A623916709C1E0E25ADCBE7B455F_13 = value;
	}

	inline static int32_t get_offset_of_DACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___DACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_14)); }
	inline __StaticArrayInitTypeSizeU3D124_tCEE2E21869525756F06107C3680943944ECC84DD  get_DACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_14() const { return ___DACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_14; }
	inline __StaticArrayInitTypeSizeU3D124_tCEE2E21869525756F06107C3680943944ECC84DD * get_address_of_DACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_14() { return &___DACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_14; }
	inline void set_DACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_14(__StaticArrayInitTypeSizeU3D124_tCEE2E21869525756F06107C3680943944ECC84DD  value)
	{
		___DACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_14 = value;
	}

	inline static int32_t get_offset_of_EB6F545AEF284339D25594F900E7A395212460EB_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___EB6F545AEF284339D25594F900E7A395212460EB_15)); }
	inline __StaticArrayInitTypeSizeU3D1152_tCC56F0D9A0243853C6790DBB239D8119DF9BE74D  get_EB6F545AEF284339D25594F900E7A395212460EB_15() const { return ___EB6F545AEF284339D25594F900E7A395212460EB_15; }
	inline __StaticArrayInitTypeSizeU3D1152_tCC56F0D9A0243853C6790DBB239D8119DF9BE74D * get_address_of_EB6F545AEF284339D25594F900E7A395212460EB_15() { return &___EB6F545AEF284339D25594F900E7A395212460EB_15; }
	inline void set_EB6F545AEF284339D25594F900E7A395212460EB_15(__StaticArrayInitTypeSizeU3D1152_tCC56F0D9A0243853C6790DBB239D8119DF9BE74D  value)
	{
		___EB6F545AEF284339D25594F900E7A395212460EB_15 = value;
	}

	inline static int32_t get_offset_of_F584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C_StaticFields, ___F584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_16)); }
	inline __StaticArrayInitTypeSizeU3D68_t9C0E4E9658D4DF647263416DAAE4A6D53D1B2FF7  get_F584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_16() const { return ___F584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_16; }
	inline __StaticArrayInitTypeSizeU3D68_t9C0E4E9658D4DF647263416DAAE4A6D53D1B2FF7 * get_address_of_F584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_16() { return &___F584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_16; }
	inline void set_F584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_16(__StaticArrayInitTypeSizeU3D68_t9C0E4E9658D4DF647263416DAAE4A6D53D1B2FF7  value)
	{
		___F584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_16 = value;
	}
};


// SharpCompress.Compressors.Deflate.CompressionLevel
struct CompressionLevel_t05BBEBA549E6FBF5BC1457BAAE3FF18CF3ED8190 
{
public:
	// System.Int32 SharpCompress.Compressors.Deflate.CompressionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionLevel_t05BBEBA549E6FBF5BC1457BAAE3FF18CF3ED8190, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SharpCompress.Compressors.Deflate.CompressionStrategy
struct CompressionStrategy_tFC2020E8AD303ABF572A16F59A93CE36A6050DF2 
{
public:
	// System.Int32 SharpCompress.Compressors.Deflate.CompressionStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionStrategy_tFC2020E8AD303ABF572A16F59A93CE36A6050DF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
struct Exception_t  : public RuntimeObject
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

// SharpCompress.Compressors.Deflate.FlushType
struct FlushType_tDA7286C689BAF6F24A07FE571035F8913FBD3644 
{
public:
	// System.Int32 SharpCompress.Compressors.Deflate.FlushType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FlushType_tDA7286C689BAF6F24A07FE571035F8913FBD3644, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// SharpCompress.Compressors.Deflate.ZlibStreamFlavor
struct ZlibStreamFlavor_t19CE3EFD23556235B242A8B6DE8E1ED6396898F3 
{
public:
	// System.Int32 SharpCompress.Compressors.Deflate.ZlibStreamFlavor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZlibStreamFlavor_t19CE3EFD23556235B242A8B6DE8E1ED6396898F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SharpCompress.Compressors.Deflate.DeflateManager/BlockState
struct BlockState_t6B94DC096735DB1F3CF3DFBEE3DEF44DAD175A90 
{
public:
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager/BlockState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlockState_t6B94DC096735DB1F3CF3DFBEE3DEF44DAD175A90, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SharpCompress.Compressors.Deflate.DeflateManager/DeflateFlavor
struct DeflateFlavor_tB466FC51E34FD7F15B35D5A0E33223F41DB539F6 
{
public:
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager/DeflateFlavor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeflateFlavor_tB466FC51E34FD7F15B35D5A0E33223F41DB539F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SharpCompress.Compressors.Deflate.InflateBlocks/InflateBlockMode
struct InflateBlockMode_t4CB7F53352E5051AC32C1EEEBD3DF1410DADEFD2 
{
public:
	// System.Int32 SharpCompress.Compressors.Deflate.InflateBlocks/InflateBlockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InflateBlockMode_t4CB7F53352E5051AC32C1EEEBD3DF1410DADEFD2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SharpCompress.Compressors.Deflate.InflateManager/InflateManagerMode
struct InflateManagerMode_t309B397779E608BF25D6A64FC5B62074E2935E07 
{
public:
	// System.Int32 SharpCompress.Compressors.Deflate.InflateManager/InflateManagerMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InflateManagerMode_t309B397779E608BF25D6A64FC5B62074E2935E07, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SharpCompress.Compressors.Deflate.ZlibBaseStream/StreamMode
struct StreamMode_tAB182A34352DEC2189B2DD5F06B4816691FF1182 
{
public:
	// System.Int32 SharpCompress.Compressors.Deflate.ZlibBaseStream/StreamMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamMode_tAB182A34352DEC2189B2DD5F06B4816691FF1182, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SharpCompress.Compressors.Deflate.DeflateManager
struct DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9  : public RuntimeObject
{
public:
	// SharpCompress.Compressors.Deflate.DeflateManager/CompressFunc SharpCompress.Compressors.Deflate.DeflateManager::DeflateFunction
	CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 * ___DeflateFunction_2;
	// SharpCompress.Compressors.Deflate.ZlibCodec SharpCompress.Compressors.Deflate.DeflateManager::_codec
	ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ____codec_5;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::status
	int32_t ___status_6;
	// System.Byte[] SharpCompress.Compressors.Deflate.DeflateManager::pending
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___pending_7;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::nextPending
	int32_t ___nextPending_8;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::pendingCount
	int32_t ___pendingCount_9;
	// System.SByte SharpCompress.Compressors.Deflate.DeflateManager::data_type
	int8_t ___data_type_10;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::last_flush
	int32_t ___last_flush_11;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::w_size
	int32_t ___w_size_12;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::w_bits
	int32_t ___w_bits_13;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::w_mask
	int32_t ___w_mask_14;
	// System.Byte[] SharpCompress.Compressors.Deflate.DeflateManager::window
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___window_15;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::window_size
	int32_t ___window_size_16;
	// System.Int16[] SharpCompress.Compressors.Deflate.DeflateManager::prev
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___prev_17;
	// System.Int16[] SharpCompress.Compressors.Deflate.DeflateManager::head
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___head_18;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::ins_h
	int32_t ___ins_h_19;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::hash_size
	int32_t ___hash_size_20;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::hash_bits
	int32_t ___hash_bits_21;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::hash_mask
	int32_t ___hash_mask_22;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::hash_shift
	int32_t ___hash_shift_23;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::blockStart
	int32_t ___blockStart_24;
	// SharpCompress.Compressors.Deflate.DeflateManager/Config SharpCompress.Compressors.Deflate.DeflateManager::config
	Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * ___config_25;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::match_length
	int32_t ___match_length_26;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::prev_match
	int32_t ___prev_match_27;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::match_available
	int32_t ___match_available_28;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::strstart
	int32_t ___strstart_29;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::match_start
	int32_t ___match_start_30;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::lookahead
	int32_t ___lookahead_31;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::prev_length
	int32_t ___prev_length_32;
	// SharpCompress.Compressors.Deflate.CompressionLevel SharpCompress.Compressors.Deflate.DeflateManager::compressionLevel
	int32_t ___compressionLevel_33;
	// SharpCompress.Compressors.Deflate.CompressionStrategy SharpCompress.Compressors.Deflate.DeflateManager::compressionStrategy
	int32_t ___compressionStrategy_34;
	// System.Int16[] SharpCompress.Compressors.Deflate.DeflateManager::dyn_ltree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dyn_ltree_35;
	// System.Int16[] SharpCompress.Compressors.Deflate.DeflateManager::dyn_dtree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dyn_dtree_36;
	// System.Int16[] SharpCompress.Compressors.Deflate.DeflateManager::bl_tree
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___bl_tree_37;
	// SharpCompress.Compressors.Deflate.DeflateManager/Tree SharpCompress.Compressors.Deflate.DeflateManager::treeLiterals
	Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * ___treeLiterals_38;
	// SharpCompress.Compressors.Deflate.DeflateManager/Tree SharpCompress.Compressors.Deflate.DeflateManager::treeDistances
	Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * ___treeDistances_39;
	// SharpCompress.Compressors.Deflate.DeflateManager/Tree SharpCompress.Compressors.Deflate.DeflateManager::treeBitLengths
	Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * ___treeBitLengths_40;
	// System.Int16[] SharpCompress.Compressors.Deflate.DeflateManager::bl_count
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___bl_count_41;
	// System.Int32[] SharpCompress.Compressors.Deflate.DeflateManager::heap
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___heap_42;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::heap_len
	int32_t ___heap_len_43;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::heap_max
	int32_t ___heap_max_44;
	// System.SByte[] SharpCompress.Compressors.Deflate.DeflateManager::depth
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___depth_45;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::_lengthOffset
	int32_t ____lengthOffset_46;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::lit_bufsize
	int32_t ___lit_bufsize_47;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::last_lit
	int32_t ___last_lit_48;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::_distanceOffset
	int32_t ____distanceOffset_49;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::opt_len
	int32_t ___opt_len_50;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::static_len
	int32_t ___static_len_51;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::matches
	int32_t ___matches_52;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::last_eob_len
	int32_t ___last_eob_len_53;
	// System.Int16 SharpCompress.Compressors.Deflate.DeflateManager::bi_buf
	int16_t ___bi_buf_54;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::bi_valid
	int32_t ___bi_valid_55;
	// System.Boolean SharpCompress.Compressors.Deflate.DeflateManager::Rfc1950BytesEmitted
	bool ___Rfc1950BytesEmitted_56;
	// System.Boolean SharpCompress.Compressors.Deflate.DeflateManager::<WantRfc1950HeaderBytes>k__BackingField
	bool ___U3CWantRfc1950HeaderBytesU3Ek__BackingField_57;

public:
	inline static int32_t get_offset_of_DeflateFunction_2() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___DeflateFunction_2)); }
	inline CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 * get_DeflateFunction_2() const { return ___DeflateFunction_2; }
	inline CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 ** get_address_of_DeflateFunction_2() { return &___DeflateFunction_2; }
	inline void set_DeflateFunction_2(CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 * value)
	{
		___DeflateFunction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeflateFunction_2), (void*)value);
	}

	inline static int32_t get_offset_of__codec_5() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ____codec_5)); }
	inline ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * get__codec_5() const { return ____codec_5; }
	inline ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE ** get_address_of__codec_5() { return &____codec_5; }
	inline void set__codec_5(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * value)
	{
		____codec_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____codec_5), (void*)value);
	}

	inline static int32_t get_offset_of_status_6() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___status_6)); }
	inline int32_t get_status_6() const { return ___status_6; }
	inline int32_t* get_address_of_status_6() { return &___status_6; }
	inline void set_status_6(int32_t value)
	{
		___status_6 = value;
	}

	inline static int32_t get_offset_of_pending_7() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___pending_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_pending_7() const { return ___pending_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_pending_7() { return &___pending_7; }
	inline void set_pending_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___pending_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_7), (void*)value);
	}

	inline static int32_t get_offset_of_nextPending_8() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___nextPending_8)); }
	inline int32_t get_nextPending_8() const { return ___nextPending_8; }
	inline int32_t* get_address_of_nextPending_8() { return &___nextPending_8; }
	inline void set_nextPending_8(int32_t value)
	{
		___nextPending_8 = value;
	}

	inline static int32_t get_offset_of_pendingCount_9() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___pendingCount_9)); }
	inline int32_t get_pendingCount_9() const { return ___pendingCount_9; }
	inline int32_t* get_address_of_pendingCount_9() { return &___pendingCount_9; }
	inline void set_pendingCount_9(int32_t value)
	{
		___pendingCount_9 = value;
	}

	inline static int32_t get_offset_of_data_type_10() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___data_type_10)); }
	inline int8_t get_data_type_10() const { return ___data_type_10; }
	inline int8_t* get_address_of_data_type_10() { return &___data_type_10; }
	inline void set_data_type_10(int8_t value)
	{
		___data_type_10 = value;
	}

	inline static int32_t get_offset_of_last_flush_11() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___last_flush_11)); }
	inline int32_t get_last_flush_11() const { return ___last_flush_11; }
	inline int32_t* get_address_of_last_flush_11() { return &___last_flush_11; }
	inline void set_last_flush_11(int32_t value)
	{
		___last_flush_11 = value;
	}

	inline static int32_t get_offset_of_w_size_12() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___w_size_12)); }
	inline int32_t get_w_size_12() const { return ___w_size_12; }
	inline int32_t* get_address_of_w_size_12() { return &___w_size_12; }
	inline void set_w_size_12(int32_t value)
	{
		___w_size_12 = value;
	}

	inline static int32_t get_offset_of_w_bits_13() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___w_bits_13)); }
	inline int32_t get_w_bits_13() const { return ___w_bits_13; }
	inline int32_t* get_address_of_w_bits_13() { return &___w_bits_13; }
	inline void set_w_bits_13(int32_t value)
	{
		___w_bits_13 = value;
	}

	inline static int32_t get_offset_of_w_mask_14() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___w_mask_14)); }
	inline int32_t get_w_mask_14() const { return ___w_mask_14; }
	inline int32_t* get_address_of_w_mask_14() { return &___w_mask_14; }
	inline void set_w_mask_14(int32_t value)
	{
		___w_mask_14 = value;
	}

	inline static int32_t get_offset_of_window_15() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___window_15)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_window_15() const { return ___window_15; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_window_15() { return &___window_15; }
	inline void set_window_15(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___window_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_15), (void*)value);
	}

	inline static int32_t get_offset_of_window_size_16() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___window_size_16)); }
	inline int32_t get_window_size_16() const { return ___window_size_16; }
	inline int32_t* get_address_of_window_size_16() { return &___window_size_16; }
	inline void set_window_size_16(int32_t value)
	{
		___window_size_16 = value;
	}

	inline static int32_t get_offset_of_prev_17() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___prev_17)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_prev_17() const { return ___prev_17; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_prev_17() { return &___prev_17; }
	inline void set_prev_17(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___prev_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_17), (void*)value);
	}

	inline static int32_t get_offset_of_head_18() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___head_18)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_head_18() const { return ___head_18; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_head_18() { return &___head_18; }
	inline void set_head_18(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___head_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_18), (void*)value);
	}

	inline static int32_t get_offset_of_ins_h_19() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___ins_h_19)); }
	inline int32_t get_ins_h_19() const { return ___ins_h_19; }
	inline int32_t* get_address_of_ins_h_19() { return &___ins_h_19; }
	inline void set_ins_h_19(int32_t value)
	{
		___ins_h_19 = value;
	}

	inline static int32_t get_offset_of_hash_size_20() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___hash_size_20)); }
	inline int32_t get_hash_size_20() const { return ___hash_size_20; }
	inline int32_t* get_address_of_hash_size_20() { return &___hash_size_20; }
	inline void set_hash_size_20(int32_t value)
	{
		___hash_size_20 = value;
	}

	inline static int32_t get_offset_of_hash_bits_21() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___hash_bits_21)); }
	inline int32_t get_hash_bits_21() const { return ___hash_bits_21; }
	inline int32_t* get_address_of_hash_bits_21() { return &___hash_bits_21; }
	inline void set_hash_bits_21(int32_t value)
	{
		___hash_bits_21 = value;
	}

	inline static int32_t get_offset_of_hash_mask_22() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___hash_mask_22)); }
	inline int32_t get_hash_mask_22() const { return ___hash_mask_22; }
	inline int32_t* get_address_of_hash_mask_22() { return &___hash_mask_22; }
	inline void set_hash_mask_22(int32_t value)
	{
		___hash_mask_22 = value;
	}

	inline static int32_t get_offset_of_hash_shift_23() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___hash_shift_23)); }
	inline int32_t get_hash_shift_23() const { return ___hash_shift_23; }
	inline int32_t* get_address_of_hash_shift_23() { return &___hash_shift_23; }
	inline void set_hash_shift_23(int32_t value)
	{
		___hash_shift_23 = value;
	}

	inline static int32_t get_offset_of_blockStart_24() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___blockStart_24)); }
	inline int32_t get_blockStart_24() const { return ___blockStart_24; }
	inline int32_t* get_address_of_blockStart_24() { return &___blockStart_24; }
	inline void set_blockStart_24(int32_t value)
	{
		___blockStart_24 = value;
	}

	inline static int32_t get_offset_of_config_25() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___config_25)); }
	inline Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * get_config_25() const { return ___config_25; }
	inline Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 ** get_address_of_config_25() { return &___config_25; }
	inline void set_config_25(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * value)
	{
		___config_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___config_25), (void*)value);
	}

	inline static int32_t get_offset_of_match_length_26() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___match_length_26)); }
	inline int32_t get_match_length_26() const { return ___match_length_26; }
	inline int32_t* get_address_of_match_length_26() { return &___match_length_26; }
	inline void set_match_length_26(int32_t value)
	{
		___match_length_26 = value;
	}

	inline static int32_t get_offset_of_prev_match_27() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___prev_match_27)); }
	inline int32_t get_prev_match_27() const { return ___prev_match_27; }
	inline int32_t* get_address_of_prev_match_27() { return &___prev_match_27; }
	inline void set_prev_match_27(int32_t value)
	{
		___prev_match_27 = value;
	}

	inline static int32_t get_offset_of_match_available_28() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___match_available_28)); }
	inline int32_t get_match_available_28() const { return ___match_available_28; }
	inline int32_t* get_address_of_match_available_28() { return &___match_available_28; }
	inline void set_match_available_28(int32_t value)
	{
		___match_available_28 = value;
	}

	inline static int32_t get_offset_of_strstart_29() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___strstart_29)); }
	inline int32_t get_strstart_29() const { return ___strstart_29; }
	inline int32_t* get_address_of_strstart_29() { return &___strstart_29; }
	inline void set_strstart_29(int32_t value)
	{
		___strstart_29 = value;
	}

	inline static int32_t get_offset_of_match_start_30() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___match_start_30)); }
	inline int32_t get_match_start_30() const { return ___match_start_30; }
	inline int32_t* get_address_of_match_start_30() { return &___match_start_30; }
	inline void set_match_start_30(int32_t value)
	{
		___match_start_30 = value;
	}

	inline static int32_t get_offset_of_lookahead_31() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___lookahead_31)); }
	inline int32_t get_lookahead_31() const { return ___lookahead_31; }
	inline int32_t* get_address_of_lookahead_31() { return &___lookahead_31; }
	inline void set_lookahead_31(int32_t value)
	{
		___lookahead_31 = value;
	}

	inline static int32_t get_offset_of_prev_length_32() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___prev_length_32)); }
	inline int32_t get_prev_length_32() const { return ___prev_length_32; }
	inline int32_t* get_address_of_prev_length_32() { return &___prev_length_32; }
	inline void set_prev_length_32(int32_t value)
	{
		___prev_length_32 = value;
	}

	inline static int32_t get_offset_of_compressionLevel_33() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___compressionLevel_33)); }
	inline int32_t get_compressionLevel_33() const { return ___compressionLevel_33; }
	inline int32_t* get_address_of_compressionLevel_33() { return &___compressionLevel_33; }
	inline void set_compressionLevel_33(int32_t value)
	{
		___compressionLevel_33 = value;
	}

	inline static int32_t get_offset_of_compressionStrategy_34() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___compressionStrategy_34)); }
	inline int32_t get_compressionStrategy_34() const { return ___compressionStrategy_34; }
	inline int32_t* get_address_of_compressionStrategy_34() { return &___compressionStrategy_34; }
	inline void set_compressionStrategy_34(int32_t value)
	{
		___compressionStrategy_34 = value;
	}

	inline static int32_t get_offset_of_dyn_ltree_35() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___dyn_ltree_35)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_dyn_ltree_35() const { return ___dyn_ltree_35; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_dyn_ltree_35() { return &___dyn_ltree_35; }
	inline void set_dyn_ltree_35(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___dyn_ltree_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_ltree_35), (void*)value);
	}

	inline static int32_t get_offset_of_dyn_dtree_36() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___dyn_dtree_36)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_dyn_dtree_36() const { return ___dyn_dtree_36; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_dyn_dtree_36() { return &___dyn_dtree_36; }
	inline void set_dyn_dtree_36(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___dyn_dtree_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dyn_dtree_36), (void*)value);
	}

	inline static int32_t get_offset_of_bl_tree_37() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___bl_tree_37)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_bl_tree_37() const { return ___bl_tree_37; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_bl_tree_37() { return &___bl_tree_37; }
	inline void set_bl_tree_37(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___bl_tree_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_tree_37), (void*)value);
	}

	inline static int32_t get_offset_of_treeLiterals_38() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___treeLiterals_38)); }
	inline Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * get_treeLiterals_38() const { return ___treeLiterals_38; }
	inline Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 ** get_address_of_treeLiterals_38() { return &___treeLiterals_38; }
	inline void set_treeLiterals_38(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * value)
	{
		___treeLiterals_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeLiterals_38), (void*)value);
	}

	inline static int32_t get_offset_of_treeDistances_39() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___treeDistances_39)); }
	inline Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * get_treeDistances_39() const { return ___treeDistances_39; }
	inline Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 ** get_address_of_treeDistances_39() { return &___treeDistances_39; }
	inline void set_treeDistances_39(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * value)
	{
		___treeDistances_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeDistances_39), (void*)value);
	}

	inline static int32_t get_offset_of_treeBitLengths_40() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___treeBitLengths_40)); }
	inline Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * get_treeBitLengths_40() const { return ___treeBitLengths_40; }
	inline Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 ** get_address_of_treeBitLengths_40() { return &___treeBitLengths_40; }
	inline void set_treeBitLengths_40(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * value)
	{
		___treeBitLengths_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeBitLengths_40), (void*)value);
	}

	inline static int32_t get_offset_of_bl_count_41() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___bl_count_41)); }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* get_bl_count_41() const { return ___bl_count_41; }
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** get_address_of_bl_count_41() { return &___bl_count_41; }
	inline void set_bl_count_41(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		___bl_count_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bl_count_41), (void*)value);
	}

	inline static int32_t get_offset_of_heap_42() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___heap_42)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_heap_42() const { return ___heap_42; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_heap_42() { return &___heap_42; }
	inline void set_heap_42(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___heap_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heap_42), (void*)value);
	}

	inline static int32_t get_offset_of_heap_len_43() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___heap_len_43)); }
	inline int32_t get_heap_len_43() const { return ___heap_len_43; }
	inline int32_t* get_address_of_heap_len_43() { return &___heap_len_43; }
	inline void set_heap_len_43(int32_t value)
	{
		___heap_len_43 = value;
	}

	inline static int32_t get_offset_of_heap_max_44() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___heap_max_44)); }
	inline int32_t get_heap_max_44() const { return ___heap_max_44; }
	inline int32_t* get_address_of_heap_max_44() { return &___heap_max_44; }
	inline void set_heap_max_44(int32_t value)
	{
		___heap_max_44 = value;
	}

	inline static int32_t get_offset_of_depth_45() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___depth_45)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_depth_45() const { return ___depth_45; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_depth_45() { return &___depth_45; }
	inline void set_depth_45(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___depth_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depth_45), (void*)value);
	}

	inline static int32_t get_offset_of__lengthOffset_46() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ____lengthOffset_46)); }
	inline int32_t get__lengthOffset_46() const { return ____lengthOffset_46; }
	inline int32_t* get_address_of__lengthOffset_46() { return &____lengthOffset_46; }
	inline void set__lengthOffset_46(int32_t value)
	{
		____lengthOffset_46 = value;
	}

	inline static int32_t get_offset_of_lit_bufsize_47() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___lit_bufsize_47)); }
	inline int32_t get_lit_bufsize_47() const { return ___lit_bufsize_47; }
	inline int32_t* get_address_of_lit_bufsize_47() { return &___lit_bufsize_47; }
	inline void set_lit_bufsize_47(int32_t value)
	{
		___lit_bufsize_47 = value;
	}

	inline static int32_t get_offset_of_last_lit_48() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___last_lit_48)); }
	inline int32_t get_last_lit_48() const { return ___last_lit_48; }
	inline int32_t* get_address_of_last_lit_48() { return &___last_lit_48; }
	inline void set_last_lit_48(int32_t value)
	{
		___last_lit_48 = value;
	}

	inline static int32_t get_offset_of__distanceOffset_49() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ____distanceOffset_49)); }
	inline int32_t get__distanceOffset_49() const { return ____distanceOffset_49; }
	inline int32_t* get_address_of__distanceOffset_49() { return &____distanceOffset_49; }
	inline void set__distanceOffset_49(int32_t value)
	{
		____distanceOffset_49 = value;
	}

	inline static int32_t get_offset_of_opt_len_50() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___opt_len_50)); }
	inline int32_t get_opt_len_50() const { return ___opt_len_50; }
	inline int32_t* get_address_of_opt_len_50() { return &___opt_len_50; }
	inline void set_opt_len_50(int32_t value)
	{
		___opt_len_50 = value;
	}

	inline static int32_t get_offset_of_static_len_51() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___static_len_51)); }
	inline int32_t get_static_len_51() const { return ___static_len_51; }
	inline int32_t* get_address_of_static_len_51() { return &___static_len_51; }
	inline void set_static_len_51(int32_t value)
	{
		___static_len_51 = value;
	}

	inline static int32_t get_offset_of_matches_52() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___matches_52)); }
	inline int32_t get_matches_52() const { return ___matches_52; }
	inline int32_t* get_address_of_matches_52() { return &___matches_52; }
	inline void set_matches_52(int32_t value)
	{
		___matches_52 = value;
	}

	inline static int32_t get_offset_of_last_eob_len_53() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___last_eob_len_53)); }
	inline int32_t get_last_eob_len_53() const { return ___last_eob_len_53; }
	inline int32_t* get_address_of_last_eob_len_53() { return &___last_eob_len_53; }
	inline void set_last_eob_len_53(int32_t value)
	{
		___last_eob_len_53 = value;
	}

	inline static int32_t get_offset_of_bi_buf_54() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___bi_buf_54)); }
	inline int16_t get_bi_buf_54() const { return ___bi_buf_54; }
	inline int16_t* get_address_of_bi_buf_54() { return &___bi_buf_54; }
	inline void set_bi_buf_54(int16_t value)
	{
		___bi_buf_54 = value;
	}

	inline static int32_t get_offset_of_bi_valid_55() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___bi_valid_55)); }
	inline int32_t get_bi_valid_55() const { return ___bi_valid_55; }
	inline int32_t* get_address_of_bi_valid_55() { return &___bi_valid_55; }
	inline void set_bi_valid_55(int32_t value)
	{
		___bi_valid_55 = value;
	}

	inline static int32_t get_offset_of_Rfc1950BytesEmitted_56() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___Rfc1950BytesEmitted_56)); }
	inline bool get_Rfc1950BytesEmitted_56() const { return ___Rfc1950BytesEmitted_56; }
	inline bool* get_address_of_Rfc1950BytesEmitted_56() { return &___Rfc1950BytesEmitted_56; }
	inline void set_Rfc1950BytesEmitted_56(bool value)
	{
		___Rfc1950BytesEmitted_56 = value;
	}

	inline static int32_t get_offset_of_U3CWantRfc1950HeaderBytesU3Ek__BackingField_57() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9, ___U3CWantRfc1950HeaderBytesU3Ek__BackingField_57)); }
	inline bool get_U3CWantRfc1950HeaderBytesU3Ek__BackingField_57() const { return ___U3CWantRfc1950HeaderBytesU3Ek__BackingField_57; }
	inline bool* get_address_of_U3CWantRfc1950HeaderBytesU3Ek__BackingField_57() { return &___U3CWantRfc1950HeaderBytesU3Ek__BackingField_57; }
	inline void set_U3CWantRfc1950HeaderBytesU3Ek__BackingField_57(bool value)
	{
		___U3CWantRfc1950HeaderBytesU3Ek__BackingField_57 = value;
	}
};

struct DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields
{
public:
	// System.Int32[] SharpCompress.Compressors.Deflate.DeflateManager::ExtraLengthBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ExtraLengthBits_0;
	// System.Int32[] SharpCompress.Compressors.Deflate.DeflateManager::ExtraDistanceBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ExtraDistanceBits_1;
	// System.String[] SharpCompress.Compressors.Deflate.DeflateManager::_ErrorMessage
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____ErrorMessage_3;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::HEAP_SIZE
	int32_t ___HEAP_SIZE_4;

public:
	inline static int32_t get_offset_of_ExtraLengthBits_0() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields, ___ExtraLengthBits_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ExtraLengthBits_0() const { return ___ExtraLengthBits_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ExtraLengthBits_0() { return &___ExtraLengthBits_0; }
	inline void set_ExtraLengthBits_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ExtraLengthBits_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExtraLengthBits_0), (void*)value);
	}

	inline static int32_t get_offset_of_ExtraDistanceBits_1() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields, ___ExtraDistanceBits_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ExtraDistanceBits_1() const { return ___ExtraDistanceBits_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ExtraDistanceBits_1() { return &___ExtraDistanceBits_1; }
	inline void set_ExtraDistanceBits_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ExtraDistanceBits_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExtraDistanceBits_1), (void*)value);
	}

	inline static int32_t get_offset_of__ErrorMessage_3() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields, ____ErrorMessage_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__ErrorMessage_3() const { return ____ErrorMessage_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__ErrorMessage_3() { return &____ErrorMessage_3; }
	inline void set__ErrorMessage_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____ErrorMessage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ErrorMessage_3), (void*)value);
	}

	inline static int32_t get_offset_of_HEAP_SIZE_4() { return static_cast<int32_t>(offsetof(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields, ___HEAP_SIZE_4)); }
	inline int32_t get_HEAP_SIZE_4() const { return ___HEAP_SIZE_4; }
	inline int32_t* get_address_of_HEAP_SIZE_4() { return &___HEAP_SIZE_4; }
	inline void set_HEAP_SIZE_4(int32_t value)
	{
		___HEAP_SIZE_4 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// SharpCompress.Compressors.Deflate.DeflateManager/Config
struct Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6  : public RuntimeObject
{
public:
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager/Config::GoodLength
	int32_t ___GoodLength_0;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager/Config::MaxLazy
	int32_t ___MaxLazy_1;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager/Config::NiceLength
	int32_t ___NiceLength_2;
	// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager/Config::MaxChainLength
	int32_t ___MaxChainLength_3;
	// SharpCompress.Compressors.Deflate.DeflateManager/DeflateFlavor SharpCompress.Compressors.Deflate.DeflateManager/Config::Flavor
	int32_t ___Flavor_4;

public:
	inline static int32_t get_offset_of_GoodLength_0() { return static_cast<int32_t>(offsetof(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6, ___GoodLength_0)); }
	inline int32_t get_GoodLength_0() const { return ___GoodLength_0; }
	inline int32_t* get_address_of_GoodLength_0() { return &___GoodLength_0; }
	inline void set_GoodLength_0(int32_t value)
	{
		___GoodLength_0 = value;
	}

	inline static int32_t get_offset_of_MaxLazy_1() { return static_cast<int32_t>(offsetof(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6, ___MaxLazy_1)); }
	inline int32_t get_MaxLazy_1() const { return ___MaxLazy_1; }
	inline int32_t* get_address_of_MaxLazy_1() { return &___MaxLazy_1; }
	inline void set_MaxLazy_1(int32_t value)
	{
		___MaxLazy_1 = value;
	}

	inline static int32_t get_offset_of_NiceLength_2() { return static_cast<int32_t>(offsetof(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6, ___NiceLength_2)); }
	inline int32_t get_NiceLength_2() const { return ___NiceLength_2; }
	inline int32_t* get_address_of_NiceLength_2() { return &___NiceLength_2; }
	inline void set_NiceLength_2(int32_t value)
	{
		___NiceLength_2 = value;
	}

	inline static int32_t get_offset_of_MaxChainLength_3() { return static_cast<int32_t>(offsetof(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6, ___MaxChainLength_3)); }
	inline int32_t get_MaxChainLength_3() const { return ___MaxChainLength_3; }
	inline int32_t* get_address_of_MaxChainLength_3() { return &___MaxChainLength_3; }
	inline void set_MaxChainLength_3(int32_t value)
	{
		___MaxChainLength_3 = value;
	}

	inline static int32_t get_offset_of_Flavor_4() { return static_cast<int32_t>(offsetof(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6, ___Flavor_4)); }
	inline int32_t get_Flavor_4() const { return ___Flavor_4; }
	inline int32_t* get_address_of_Flavor_4() { return &___Flavor_4; }
	inline void set_Flavor_4(int32_t value)
	{
		___Flavor_4 = value;
	}
};

struct Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_StaticFields
{
public:
	// SharpCompress.Compressors.Deflate.DeflateManager/Config[] SharpCompress.Compressors.Deflate.DeflateManager/Config::Table
	ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* ___Table_5;

public:
	inline static int32_t get_offset_of_Table_5() { return static_cast<int32_t>(offsetof(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_StaticFields, ___Table_5)); }
	inline ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* get_Table_5() const { return ___Table_5; }
	inline ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30** get_address_of_Table_5() { return &___Table_5; }
	inline void set_Table_5(ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* value)
	{
		___Table_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Table_5), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// SharpCompress.Compressors.Deflate.DeflateManager/CompressFunc
struct CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
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
// SharpCompress.Compressors.Deflate.DeflateManager/Config[]
struct ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * m_Items[1];

public:
	inline Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
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



// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void SharpCompress.Converters.DataConverter::Check(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataConverter_Check_mCB14AC4E92C406C9789C8D018FC0E72B61FC0483 (DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dest0, int32_t ___destIdx1, int32_t ___size2, const RuntimeMethod* method);
// System.Void SharpCompress.Converters.DataConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataConverter__ctor_m85B620AC7A88B21612B0D48BDEA5C5AEA2E0C265 (DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,SharpCompress.Compressors.Deflate.DeflateManager/DeflateFlavor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_mE2241E96EC269C7B2417503DC737BD6629519B0D (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * __this, int32_t ___goodLength0, int32_t ___maxLazy1, int32_t ___niceLength2, int32_t ___maxChainLength3, int32_t ___flavor4, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.SharedUtils::URShift(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SharedUtils_URShift_m7BB716EA3AB480F0A85A8BE031249FC373B4C3BB (int32_t ___number0, int32_t ___bits1, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::pqdownheap(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_pqdownheap_mFB4304A3A80F659C3E9C4857021922A9D70E6A07 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___k1, const RuntimeMethod* method);
// System.Byte System.Math::Max(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Math_Max_mCA27A75C0677CDAF214D29620E7F508A9C6FB30A (uint8_t ___val10, uint8_t ___val21, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager/Tree::gen_bitlen(SharpCompress.Compressors.Deflate.DeflateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_bitlen_m7CAEEDA2452375427DE04C150C7E94A95B83A13F (Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * __this, DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * ___s0, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager/Tree::gen_codes(System.Int16[],System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_codes_m46BE925FCEDD9547DE3E67F6DCE34BF1AE44A001 (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___max_code1, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___bl_count2, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager/Tree::bi_reverse(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_bi_reverse_mE9769AC16BD3E314F08ECCB5B9787D14879E2D97 (int32_t ___code0, int32_t ___len1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
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
// System.Int32 SharpCompress.Converters.DataConverter/CopyConverter::GetInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CopyConverter_GetInt32_m21DC2952DB0D23079D7B9CC011B0471B46FF27CB (CopyConverter_t957E1D582319526872FEFF453718C07F7CC6B574 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CopyConverter_GetInt32_m21DC2952DB0D23079D7B9CC011B0471B46FF27CB_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data0;
		NullCheck(L_2);
		int32_t L_3 = ___index1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)L_3))) >= ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CopyConverter_GetInt32_m21DC2952DB0D23079D7B9CC011B0471B46FF27CB_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_5 = ___index1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CopyConverter_GetInt32_m21DC2952DB0D23079D7B9CC011B0471B46FF27CB_RuntimeMethod_var)));
	}

IL_0030:
	{
		V_1 = (uint8_t*)((uintptr_t)(&V_0));
		V_2 = 0;
		goto IL_0045;
	}

IL_0038:
	{
		uint8_t* L_7 = V_1;
		int32_t L_8 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___data0;
		int32_t L_10 = ___index1;
		int32_t L_11 = V_2;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11));
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8))) = (int8_t)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) < ((int32_t)4)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Void SharpCompress.Converters.DataConverter/CopyConverter::PutBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyConverter_PutBytes_m2AA6E1B782A1B84733BD9C84155BF15790EB04F4 (CopyConverter_t957E1D582319526872FEFF453718C07F7CC6B574 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dest0, int32_t ___destIdx1, int32_t ___value2, const RuntimeMethod* method)
{
	uint8_t* V_0 = NULL;
	uint32_t* V_1 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___dest0;
		int32_t L_1 = ___destIdx1;
		DataConverter_Check_mCB14AC4E92C406C9789C8D018FC0E72B61FC0483(__this, L_0, L_1, 4, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___dest0;
		int32_t L_3 = ___destIdx1;
		NullCheck(L_2);
		V_0 = (uint8_t*)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		uint8_t* L_4 = V_0;
		V_1 = (uint32_t*)((uintptr_t)(&___value2));
		uint32_t* L_5 = V_1;
		int32_t L_6 = *((uint32_t*)L_5);
		*((int32_t*)((uintptr_t)L_4)) = (int32_t)L_6;
		V_0 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Void SharpCompress.Converters.DataConverter/CopyConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyConverter__ctor_m3F47DF46FE4DC24C77E6E5578A7AB43E1F53163B (CopyConverter_t957E1D582319526872FEFF453718C07F7CC6B574 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		DataConverter__ctor_m85B620AC7A88B21612B0D48BDEA5C5AEA2E0C265(__this, /*hidden argument*/NULL);
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
// System.Int32 SharpCompress.Converters.DataConverter/SwapConverter::GetInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SwapConverter_GetInt32_m3D3B959B01FC5425792B74A784B3B7677E810E3F (SwapConverter_t37AC82B5B2F004CD16C0F3E8CF13983A1005C522 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SwapConverter_GetInt32_m3D3B959B01FC5425792B74A784B3B7677E810E3F_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data0;
		NullCheck(L_2);
		int32_t L_3 = ___index1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)L_3))) >= ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SwapConverter_GetInt32_m3D3B959B01FC5425792B74A784B3B7677E810E3F_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_5 = ___index1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SwapConverter_GetInt32_m3D3B959B01FC5425792B74A784B3B7677E810E3F_RuntimeMethod_var)));
	}

IL_0030:
	{
		V_1 = (uint8_t*)((uintptr_t)(&V_0));
		V_2 = 0;
		goto IL_0047;
	}

IL_0038:
	{
		uint8_t* L_7 = V_1;
		int32_t L_8 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = ___data0;
		int32_t L_10 = ___index1;
		int32_t L_11 = V_2;
		NullCheck(L_9);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11));
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_8))))) = (int8_t)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) < ((int32_t)4)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Void SharpCompress.Converters.DataConverter/SwapConverter::PutBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwapConverter_PutBytes_m69E3D2CB51E89BF488921B473026C55D0E4C52C7 (SwapConverter_t37AC82B5B2F004CD16C0F3E8CF13983A1005C522 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dest0, int32_t ___destIdx1, int32_t ___value2, const RuntimeMethod* method)
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___dest0;
		int32_t L_1 = ___destIdx1;
		DataConverter_Check_mCB14AC4E92C406C9789C8D018FC0E72B61FC0483(__this, L_0, L_1, 4, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___dest0;
		int32_t L_3 = ___destIdx1;
		NullCheck(L_2);
		V_1 = (uint8_t*)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		uint8_t* L_4 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_4);
		V_2 = (uint8_t*)((uintptr_t)(&___value2));
		V_3 = 0;
		goto IL_002a;
	}

IL_001c:
	{
		uint8_t* L_5 = V_0;
		int32_t L_6 = V_3;
		uint8_t* L_7 = V_2;
		int32_t L_8 = V_3;
		int32_t L_9 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_8)))));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, (int32_t)L_6))) = (int8_t)L_9;
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_11 = V_3;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_001c;
		}
	}
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Void SharpCompress.Converters.DataConverter/SwapConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwapConverter__ctor_mC4FDF7DB60D85A5034626E78E8D6A8BE93AB0C8E (SwapConverter_t37AC82B5B2F004CD16C0F3E8CF13983A1005C522 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		DataConverter__ctor_m85B620AC7A88B21612B0D48BDEA5C5AEA2E0C265(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 (CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___flush0);

	return returnValue;
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager/CompressFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressFunc__ctor_m4BCA0F12F2161F35DA0E0DFBFE66474577F020A8 (CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// SharpCompress.Compressors.Deflate.DeflateManager/BlockState SharpCompress.Compressors.Deflate.DeflateManager/CompressFunc::Invoke(SharpCompress.Compressors.Deflate.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressFunc_Invoke_mFC9C2DA610A127441B8744E03413A410F2FAC3A4 (CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 * __this, int32_t ___flush0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef int32_t (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___flush0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___flush0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___flush0);
					else
						result = GenericVirtFuncInvoker1< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___flush0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___flush0);
					else
						result = VirtFuncInvoker1< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___flush0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___flush0) - 1), targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___flush0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult SharpCompress.Compressors.Deflate.DeflateManager/CompressFunc::BeginInvoke(SharpCompress.Compressors.Deflate.FlushType,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompressFunc_BeginInvoke_m871D831F441ADD31F649420C948A56C79808CBE7 (CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 * __this, int32_t ___flush0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlushType_tDA7286C689BAF6F24A07FE571035F8913FBD3644_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(FlushType_tDA7286C689BAF6F24A07FE571035F8913FBD3644_il2cpp_TypeInfo_var, &___flush0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// SharpCompress.Compressors.Deflate.DeflateManager/BlockState SharpCompress.Compressors.Deflate.DeflateManager/CompressFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressFunc_EndInvoke_mE777BBAA2A420D51E8E7CE4D266D98418F286790 (CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SharpCompress.Compressors.Deflate.DeflateManager/Config::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,SharpCompress.Compressors.Deflate.DeflateManager/DeflateFlavor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_mE2241E96EC269C7B2417503DC737BD6629519B0D (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * __this, int32_t ___goodLength0, int32_t ___maxLazy1, int32_t ___niceLength2, int32_t ___maxChainLength3, int32_t ___flavor4, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goodLength0;
		__this->set_GoodLength_0(L_0);
		int32_t L_1 = ___maxLazy1;
		__this->set_MaxLazy_1(L_1);
		int32_t L_2 = ___niceLength2;
		__this->set_NiceLength_2(L_2);
		int32_t L_3 = ___maxChainLength3;
		__this->set_MaxChainLength_3(L_3);
		int32_t L_4 = ___flavor4;
		__this->set_Flavor_4(L_4);
		return;
	}
}
// SharpCompress.Compressors.Deflate.DeflateManager/Config SharpCompress.Compressors.Deflate.DeflateManager/Config::Lookup(SharpCompress.Compressors.Deflate.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * Config_Lookup_m39339926974537B1D0BAE95B739D86883BFA30B4 (int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* L_0 = ((Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_StaticFields*)il2cpp_codegen_static_fields_for(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var))->get_Table_5();
		int32_t L_1 = ___level0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager/Config::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__cctor_mF77412B68CB9F582C9B35CBAB2DBB70881C80C31 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* L_0 = (ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30*)(ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30*)SZArrayNew(ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* L_1 = L_0;
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_2 = (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)il2cpp_codegen_object_new(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		Config__ctor_mE2241E96EC269C7B2417503DC737BD6629519B0D(L_2, 0, 0, 0, 0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)L_2);
		ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* L_3 = L_1;
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_4 = (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)il2cpp_codegen_object_new(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		Config__ctor_mE2241E96EC269C7B2417503DC737BD6629519B0D(L_4, 4, 4, 8, 4, 1, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)L_4);
		ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* L_5 = L_3;
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_6 = (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)il2cpp_codegen_object_new(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		Config__ctor_mE2241E96EC269C7B2417503DC737BD6629519B0D(L_6, 4, 5, ((int32_t)16), 8, 1, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)L_6);
		ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* L_7 = L_5;
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_8 = (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)il2cpp_codegen_object_new(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		Config__ctor_mE2241E96EC269C7B2417503DC737BD6629519B0D(L_8, 4, 6, ((int32_t)32), ((int32_t)32), 1, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)L_8);
		ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* L_9 = L_7;
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_10 = (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)il2cpp_codegen_object_new(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		Config__ctor_mE2241E96EC269C7B2417503DC737BD6629519B0D(L_10, 4, 4, ((int32_t)16), ((int32_t)16), 2, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)L_10);
		ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* L_11 = L_9;
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_12 = (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)il2cpp_codegen_object_new(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		Config__ctor_mE2241E96EC269C7B2417503DC737BD6629519B0D(L_12, 8, ((int32_t)16), ((int32_t)32), ((int32_t)32), 2, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)L_12);
		ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* L_13 = L_11;
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_14 = (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)il2cpp_codegen_object_new(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		Config__ctor_mE2241E96EC269C7B2417503DC737BD6629519B0D(L_14, 8, ((int32_t)16), ((int32_t)128), ((int32_t)128), 2, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)L_14);
		ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* L_15 = L_13;
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_16 = (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)il2cpp_codegen_object_new(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		Config__ctor_mE2241E96EC269C7B2417503DC737BD6629519B0D(L_16, 8, ((int32_t)32), ((int32_t)128), ((int32_t)256), 2, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)L_16);
		ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* L_17 = L_15;
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_18 = (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)il2cpp_codegen_object_new(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		Config__ctor_mE2241E96EC269C7B2417503DC737BD6629519B0D(L_18, ((int32_t)32), ((int32_t)128), ((int32_t)258), ((int32_t)1024), 2, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)L_18);
		ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30* L_19 = L_17;
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_20 = (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)il2cpp_codegen_object_new(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		Config__ctor_mE2241E96EC269C7B2417503DC737BD6629519B0D(L_20, ((int32_t)32), ((int32_t)258), ((int32_t)258), ((int32_t)4096), 2, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 *)L_20);
		((Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_StaticFields*)il2cpp_codegen_static_fields_for(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var))->set_Table_5(L_19);
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
// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager/Tree::DistanceCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_DistanceCode_m8775714A15E69F689DA2B871B1C1A1F89B657D83 (int32_t ___dist0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___dist0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)256))))
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_1 = ((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->get__dist_code_2();
		int32_t L_2 = ___dist0;
		int32_t L_3;
		L_3 = SharedUtils_URShift_m7BB716EA3AB480F0A85A8BE031249FC373B4C3BB(L_2, 7, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)256), (int32_t)L_3));
		int8_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_6 = ((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->get__dist_code_2();
		int32_t L_7 = ___dist0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager/Tree::gen_bitlen(SharpCompress.Compressors.Deflate.DeflateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_bitlen_m7CAEEDA2452375427DE04C150C7E94A95B83A13F (Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * __this, DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int16_t V_10 = 0;
	int32_t V_11 = 0;
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = __this->get_dyn_tree_6();
		V_0 = L_0;
		StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * L_1 = __this->get_staticTree_8();
		NullCheck(L_1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = L_1->get_treeCodes_6();
		V_1 = L_2;
		StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * L_3 = __this->get_staticTree_8();
		NullCheck(L_3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3->get_extraBits_7();
		V_2 = L_4;
		StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * L_5 = __this->get_staticTree_8();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_extraBase_8();
		V_3 = L_6;
		StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * L_7 = __this->get_staticTree_8();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_maxLength_10();
		V_4 = L_8;
		V_11 = 0;
		V_8 = 0;
		goto IL_0050;
	}

IL_0040:
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_9 = ___s0;
		NullCheck(L_9);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = L_9->get_bl_count_41();
		int32_t L_11 = V_8;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int16_t)0);
		int32_t L_12 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_13 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_14 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_MAX_BITS_0();
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_0040;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = V_0;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_16 = ___s0;
		NullCheck(L_16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = L_16->get_heap_42();
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_18 = ___s0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_heap_max_44();
		NullCheck(L_17);
		int32_t L_20 = L_19;
		int32_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)2)), (int32_t)1))), (int16_t)0);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_22 = ___s0;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_heap_max_44();
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		goto IL_0122;
	}

IL_007c:
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_24 = ___s0;
		NullCheck(L_24);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = L_24->get_heap_42();
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_6 = L_28;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_29 = V_0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_30 = V_0;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_31, (int32_t)2)), (int32_t)1));
		int16_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_29);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_33, (int32_t)2)), (int32_t)1));
		int16_t L_35 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		int32_t L_36 = V_8;
		int32_t L_37 = V_4;
		if ((((int32_t)L_36) <= ((int32_t)L_37)))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_38 = V_4;
		V_8 = L_38;
		int32_t L_39 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00a9:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_40 = V_0;
		int32_t L_41 = V_6;
		int32_t L_42 = V_8;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_41, (int32_t)2)), (int32_t)1))), (int16_t)((int16_t)((int16_t)L_42)));
		int32_t L_43 = V_6;
		int32_t L_44 = __this->get_max_code_7();
		if ((((int32_t)L_43) > ((int32_t)L_44)))
		{
			goto IL_011c;
		}
	}
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_45 = ___s0;
		NullCheck(L_45);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_46 = L_45->get_bl_count_41();
		int32_t L_47 = V_8;
		NullCheck(L_46);
		int16_t* L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)));
		int32_t L_49 = *((int16_t*)L_48);
		*((int16_t*)L_48) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1))));
		V_9 = 0;
		int32_t L_50 = V_6;
		int32_t L_51 = V_3;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00e1;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = V_2;
		int32_t L_53 = V_6;
		int32_t L_54 = V_3;
		NullCheck(L_52);
		int32_t L_55 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)L_54));
		int32_t L_56 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_9 = L_56;
	}

IL_00e1:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_57 = V_0;
		int32_t L_58 = V_6;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_58, (int32_t)2));
		int16_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_10 = L_60;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_61 = ___s0;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_62 = L_61;
		NullCheck(L_62);
		int32_t L_63 = L_62->get_opt_len_50();
		int16_t L_64 = V_10;
		int32_t L_65 = V_8;
		int32_t L_66 = V_9;
		NullCheck(L_62);
		L_62->set_opt_len_50(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_64, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)))))));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_67 = V_1;
		if (!L_67)
		{
			goto IL_011c;
		}
	}
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_68 = ___s0;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_69 = L_68;
		NullCheck(L_69);
		int32_t L_70 = L_69->get_static_len_51();
		int16_t L_71 = V_10;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_72 = V_1;
		int32_t L_73 = V_6;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_73, (int32_t)2)), (int32_t)1));
		int16_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		int32_t L_76 = V_9;
		NullCheck(L_69);
		L_69->set_static_len_51(((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_71, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)L_76)))))));
	}

IL_011c:
	{
		int32_t L_77 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_0122:
	{
		int32_t L_78 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		int32_t L_79 = ((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->get_HEAP_SIZE_0();
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_80 = V_11;
		if (L_80)
		{
			goto IL_0133;
		}
	}
	{
		return;
	}

IL_0133:
	{
		int32_t L_81 = V_4;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)1));
		goto IL_0141;
	}

IL_013b:
	{
		int32_t L_82 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)1));
	}

IL_0141:
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_83 = ___s0;
		NullCheck(L_83);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_84 = L_83->get_bl_count_41();
		int32_t L_85 = V_8;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		int16_t L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		if (!L_87)
		{
			goto IL_013b;
		}
	}
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_88 = ___s0;
		NullCheck(L_88);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_89 = L_88->get_bl_count_41();
		int32_t L_90 = V_8;
		NullCheck(L_89);
		int16_t* L_91 = ((L_89)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_90)));
		int32_t L_92 = *((int16_t*)L_91);
		*((int16_t*)L_91) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_92, (int32_t)1))));
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_93 = ___s0;
		NullCheck(L_93);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_94 = L_93->get_bl_count_41();
		int32_t L_95 = V_8;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_96 = ___s0;
		NullCheck(L_96);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_97 = L_96->get_bl_count_41();
		int32_t L_98 = V_8;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		int16_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)1))), (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)2)))));
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_101 = ___s0;
		NullCheck(L_101);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_102 = L_101->get_bl_count_41();
		int32_t L_103 = V_4;
		NullCheck(L_102);
		int16_t* L_104 = ((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_103)));
		int32_t L_105 = *((int16_t*)L_104);
		*((int16_t*)L_104) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_105, (int32_t)1))));
		int32_t L_106 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)2));
		int32_t L_107 = V_11;
		if ((((int32_t)L_107) > ((int32_t)0)))
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_108 = V_4;
		V_8 = L_108;
		goto IL_020e;
	}

IL_019c:
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_109 = ___s0;
		NullCheck(L_109);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_110 = L_109->get_bl_count_41();
		int32_t L_111 = V_8;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		int16_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_6 = L_113;
		goto IL_0204;
	}

IL_01a9:
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_114 = ___s0;
		NullCheck(L_114);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_115 = L_114->get_heap_42();
		int32_t L_116 = V_5;
		int32_t L_117 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_116, (int32_t)1));
		V_5 = L_117;
		NullCheck(L_115);
		int32_t L_118 = L_117;
		int32_t L_119 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_7 = L_119;
		int32_t L_120 = V_7;
		int32_t L_121 = __this->get_max_code_7();
		if ((((int32_t)L_120) > ((int32_t)L_121)))
		{
			goto IL_0204;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_122 = V_0;
		int32_t L_123 = V_7;
		NullCheck(L_122);
		int32_t L_124 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_123, (int32_t)2)), (int32_t)1));
		int16_t L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		int32_t L_126 = V_8;
		if ((((int32_t)L_125) == ((int32_t)L_126)))
		{
			goto IL_01fe;
		}
	}
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_127 = ___s0;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_128 = ___s0;
		NullCheck(L_128);
		int32_t L_129 = L_128->get_opt_len_50();
		int32_t L_130 = V_8;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_131 = V_0;
		int32_t L_132 = V_7;
		NullCheck(L_131);
		int32_t L_133 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_132, (int32_t)2)), (int32_t)1));
		int16_t L_134 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_135 = V_0;
		int32_t L_136 = V_7;
		NullCheck(L_135);
		int32_t L_137 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_136, (int32_t)2));
		int16_t L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_127);
		L_127->set_opt_len_50(((int32_t)((int32_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_129)), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((int64_t)L_130)), (int64_t)((int64_t)((int64_t)L_134)))), (int64_t)((int64_t)((int64_t)L_138)))))))));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_139 = V_0;
		int32_t L_140 = V_7;
		int32_t L_141 = V_8;
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_140, (int32_t)2)), (int32_t)1))), (int16_t)((int16_t)((int16_t)L_141)));
	}

IL_01fe:
	{
		int32_t L_142 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_142, (int32_t)1));
	}

IL_0204:
	{
		int32_t L_143 = V_6;
		if (L_143)
		{
			goto IL_01a9;
		}
	}
	{
		int32_t L_144 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_144, (int32_t)1));
	}

IL_020e:
	{
		int32_t L_145 = V_8;
		if (L_145)
		{
			goto IL_019c;
		}
	}
	{
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager/Tree::build_tree(SharpCompress.Compressors.Deflate.DeflateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_build_tree_m89B6508ED1B98D14D89E001E7ED41184CAC47965 (Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * __this, DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t G_B9_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B8_1 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B10_2 = NULL;
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = __this->get_dyn_tree_6();
		V_0 = L_0;
		StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * L_1 = __this->get_staticTree_8();
		NullCheck(L_1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = L_1->get_treeCodes_6();
		V_1 = L_2;
		StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * L_3 = __this->get_staticTree_8();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_elems_9();
		V_2 = L_4;
		V_5 = (-1);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_5 = ___s0;
		NullCheck(L_5);
		L_5->set_heap_len_43(0);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_6 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->get_HEAP_SIZE_0();
		NullCheck(L_6);
		L_6->set_heap_max_44(L_7);
		V_3 = 0;
		goto IL_0075;
	}

IL_0038:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2));
		int16_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_12 = ___s0;
		NullCheck(L_12);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = L_12->get_heap_42();
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_14 = ___s0;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_heap_len_43();
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		int32_t L_17 = V_7;
		NullCheck(L_15);
		L_15->set_heap_len_43(L_17);
		int32_t L_18 = V_7;
		int32_t L_19 = V_3;
		int32_t L_20 = L_19;
		V_5 = L_20;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)L_20);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_21 = ___s0;
		NullCheck(L_21);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_22 = L_21->get_depth_45();
		int32_t L_23 = V_3;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int8_t)0);
		goto IL_0071;
	}

IL_0069:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_24 = V_0;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)2)), (int32_t)1))), (int16_t)0);
	}

IL_0071:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0075:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = V_2;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0038;
		}
	}
	{
		goto IL_00e3;
	}

IL_007b:
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_29 = ___s0;
		NullCheck(L_29);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = L_29->get_heap_42();
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_31 = ___s0;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_32 = L_31;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_heap_len_43();
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		int32_t L_34 = V_7;
		NullCheck(L_32);
		L_32->set_heap_len_43(L_34);
		int32_t L_35 = V_7;
		int32_t L_36 = V_5;
		G_B8_0 = L_35;
		G_B8_1 = L_30;
		if ((((int32_t)L_36) < ((int32_t)2)))
		{
			G_B9_0 = L_35;
			G_B9_1 = L_30;
			goto IL_009d;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00a4;
	}

IL_009d:
	{
		int32_t L_37 = V_5;
		int32_t L_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		V_5 = L_38;
		G_B10_0 = L_38;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00a4:
	{
		int32_t L_39 = G_B10_0;
		V_7 = L_39;
		NullCheck(G_B10_2);
		(G_B10_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_1), (int32_t)L_39);
		int32_t L_40 = V_7;
		V_6 = L_40;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_41 = V_0;
		int32_t L_42 = V_6;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)2))), (int16_t)1);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_43 = ___s0;
		NullCheck(L_43);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_44 = L_43->get_depth_45();
		int32_t L_45 = V_6;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (int8_t)0);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_46 = ___s0;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_47 = L_46;
		NullCheck(L_47);
		int32_t L_48 = L_47->get_opt_len_50();
		NullCheck(L_47);
		L_47->set_opt_len_50(((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_49 = V_1;
		if (!L_49)
		{
			goto IL_00e3;
		}
	}
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_50 = ___s0;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_51 = L_50;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_static_len_51();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_53 = V_1;
		int32_t L_54 = V_6;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_54, (int32_t)2)), (int32_t)1));
		int16_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_51);
		L_51->set_static_len_51(((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)L_56)));
	}

IL_00e3:
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_57 = ___s0;
		NullCheck(L_57);
		int32_t L_58 = L_57->get_heap_len_43();
		if ((((int32_t)L_58) < ((int32_t)2)))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_59 = V_5;
		__this->set_max_code_7(L_59);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_60 = ___s0;
		NullCheck(L_60);
		int32_t L_61 = L_60->get_heap_len_43();
		V_3 = ((int32_t)((int32_t)L_61/(int32_t)2));
		goto IL_010b;
	}

IL_00ff:
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_62 = ___s0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_63 = V_0;
		int32_t L_64 = V_3;
		NullCheck(L_62);
		DeflateManager_pqdownheap_mFB4304A3A80F659C3E9C4857021922A9D70E6A07(L_62, L_63, L_64, /*hidden argument*/NULL);
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
	}

IL_010b:
	{
		int32_t L_66 = V_3;
		if ((((int32_t)L_66) >= ((int32_t)1)))
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_67 = V_2;
		V_6 = L_67;
	}

IL_0112:
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_68 = ___s0;
		NullCheck(L_68);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_69 = L_68->get_heap_42();
		NullCheck(L_69);
		int32_t L_70 = 1;
		int32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_3 = L_71;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_72 = ___s0;
		NullCheck(L_72);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_73 = L_72->get_heap_42();
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_74 = ___s0;
		NullCheck(L_74);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_75 = L_74->get_heap_42();
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_76 = ___s0;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_77 = L_76;
		NullCheck(L_77);
		int32_t L_78 = L_77->get_heap_len_43();
		V_7 = L_78;
		int32_t L_79 = V_7;
		NullCheck(L_77);
		L_77->set_heap_len_43(((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)1)));
		int32_t L_80 = V_7;
		NullCheck(L_75);
		int32_t L_81 = L_80;
		int32_t L_82 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_82);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_83 = ___s0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_84 = V_0;
		NullCheck(L_83);
		DeflateManager_pqdownheap_mFB4304A3A80F659C3E9C4857021922A9D70E6A07(L_83, L_84, 1, /*hidden argument*/NULL);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_85 = ___s0;
		NullCheck(L_85);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_86 = L_85->get_heap_42();
		NullCheck(L_86);
		int32_t L_87 = 1;
		int32_t L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_4 = L_88;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_89 = ___s0;
		NullCheck(L_89);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_90 = L_89->get_heap_42();
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_91 = ___s0;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_92 = L_91;
		NullCheck(L_92);
		int32_t L_93 = L_92->get_heap_max_44();
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1));
		int32_t L_94 = V_7;
		NullCheck(L_92);
		L_92->set_heap_max_44(L_94);
		int32_t L_95 = V_7;
		int32_t L_96 = V_3;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(L_95), (int32_t)L_96);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_97 = ___s0;
		NullCheck(L_97);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_98 = L_97->get_heap_42();
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_99 = ___s0;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_100 = L_99;
		NullCheck(L_100);
		int32_t L_101 = L_100->get_heap_max_44();
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_101, (int32_t)1));
		int32_t L_102 = V_7;
		NullCheck(L_100);
		L_100->set_heap_max_44(L_102);
		int32_t L_103 = V_7;
		int32_t L_104 = V_4;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (int32_t)L_104);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_105 = V_0;
		int32_t L_106 = V_6;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_107 = V_0;
		int32_t L_108 = V_3;
		NullCheck(L_107);
		int32_t L_109 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_108, (int32_t)2));
		int16_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_111 = V_0;
		int32_t L_112 = V_4;
		NullCheck(L_111);
		int32_t L_113 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_112, (int32_t)2));
		int16_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_106, (int32_t)2))), (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)L_114)))));
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_115 = ___s0;
		NullCheck(L_115);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_116 = L_115->get_depth_45();
		int32_t L_117 = V_6;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_118 = ___s0;
		NullCheck(L_118);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_119 = L_118->get_depth_45();
		int32_t L_120 = V_3;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		int8_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_123 = ___s0;
		NullCheck(L_123);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_124 = L_123->get_depth_45();
		int32_t L_125 = V_4;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		int8_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		uint8_t L_128;
		L_128 = Math_Max_mCA27A75C0677CDAF214D29620E7F508A9C6FB30A((uint8_t)((int32_t)((uint8_t)L_122)), (uint8_t)((int32_t)((uint8_t)L_127)), /*hidden argument*/NULL);
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(L_117), (int8_t)((int8_t)((int8_t)((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1)))));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_129 = V_0;
		int32_t L_130 = V_3;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_131 = V_0;
		int32_t L_132 = V_4;
		int32_t L_133 = V_6;
		int16_t L_134 = ((int16_t)((int16_t)L_133));
		V_8 = L_134;
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_132, (int32_t)2)), (int32_t)1))), (int16_t)L_134);
		int16_t L_135 = V_8;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_130, (int32_t)2)), (int32_t)1))), (int16_t)L_135);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_136 = ___s0;
		NullCheck(L_136);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_137 = L_136->get_heap_42();
		int32_t L_138 = V_6;
		int32_t L_139 = L_138;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1));
		NullCheck(L_137);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_139);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_140 = ___s0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_141 = V_0;
		NullCheck(L_140);
		DeflateManager_pqdownheap_mFB4304A3A80F659C3E9C4857021922A9D70E6A07(L_140, L_141, 1, /*hidden argument*/NULL);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_142 = ___s0;
		NullCheck(L_142);
		int32_t L_143 = L_142->get_heap_len_43();
		if ((((int32_t)L_143) >= ((int32_t)2)))
		{
			goto IL_0112;
		}
	}
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_144 = ___s0;
		NullCheck(L_144);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_145 = L_144->get_heap_42();
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_146 = ___s0;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_147 = L_146;
		NullCheck(L_147);
		int32_t L_148 = L_147->get_heap_max_44();
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_148, (int32_t)1));
		int32_t L_149 = V_7;
		NullCheck(L_147);
		L_147->set_heap_max_44(L_149);
		int32_t L_150 = V_7;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_151 = ___s0;
		NullCheck(L_151);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_152 = L_151->get_heap_42();
		NullCheck(L_152);
		int32_t L_153 = 1;
		int32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(L_150), (int32_t)L_154);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_155 = ___s0;
		Tree_gen_bitlen_m7CAEEDA2452375427DE04C150C7E94A95B83A13F(__this, L_155, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_156 = V_0;
		int32_t L_157 = V_5;
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_158 = ___s0;
		NullCheck(L_158);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_159 = L_158->get_bl_count_41();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		Tree_gen_codes_m46BE925FCEDD9547DE3E67F6DCE34BF1AE44A001(L_156, L_157, L_159, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager/Tree::gen_codes(System.Int16[],System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_gen_codes_m46BE925FCEDD9547DE3E67F6DCE34BF1AE44A001 (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___max_code1, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___bl_count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_0 = NULL;
	int16_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int16_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_MAX_BITS_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		V_0 = L_1;
		V_1 = (int16_t)0;
		V_2 = 1;
		goto IL_0026;
	}

IL_0013:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_2 = V_0;
		int32_t L_3 = V_2;
		int16_t L_4 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = ___bl_count2;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		int16_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int16_t L_9 = ((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_8))<<(int32_t)1))));
		V_1 = L_9;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int16_t)L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0026:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_12 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_MAX_BITS_0();
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0013;
		}
	}
	{
		V_3 = 0;
		goto IL_0064;
	}

IL_0032:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_13 = ___tree0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2)), (int32_t)1));
		int16_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		int32_t L_17 = V_4;
		if (!L_17)
		{
			goto IL_0060;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_18 = ___tree0;
		int32_t L_19 = V_3;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int16_t* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)));
		int32_t L_23 = *((int16_t*)L_22);
		V_5 = (int16_t)L_23;
		int16_t L_24 = V_5;
		*((int16_t*)L_22) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1))));
		int16_t L_25 = V_5;
		int32_t L_26 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = Tree_bi_reverse_mE9769AC16BD3E314F08ECCB5B9787D14879E2D97(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2))), (int16_t)((int16_t)((int16_t)L_27)));
	}

IL_0060:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0064:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = ___max_code1;
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_0032;
		}
	}
	{
		return;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager/Tree::bi_reverse(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_bi_reverse_mE9769AC16BD3E314F08ECCB5B9787D14879E2D97 (int32_t ___code0, int32_t ___len1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = ___code0;
		V_0 = ((int32_t)((int32_t)L_0|(int32_t)((int32_t)((int32_t)L_1&(int32_t)1))));
		int32_t L_2 = ___code0;
		___code0 = ((int32_t)((int32_t)L_2>>(int32_t)1));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3<<(int32_t)1));
		int32_t L_4 = ___len1;
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		___len1 = L_5;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_6 = V_0;
		return ((int32_t)((int32_t)L_6>>(int32_t)1));
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager/Tree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree__ctor_m51B587944C1B99F45370722EDE89BF881FF58350 (Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager/Tree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree__cctor_m9DEF1FB4585C6F7CE207009BBCC16014D211A219 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____3544182260B8A15D332367E48C7530FC0E901FD3_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____5581A70566F03554D8048EDBFC6E6B399AF9BCB1_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____6A316789EED01119DE92841832701A40AB0CABD6_6_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_11_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_L_CODES_5();
		((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->set_HEAP_SIZE_0(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_0)), (int32_t)1)));
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_1 = (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)SZArrayNew(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_2 = L_1;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____9F8365E9D6C62D3B47026EC465B05A7B5526B5CD_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->set_bl_order_1(L_2);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_4 = (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)SZArrayNew(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_5 = L_4;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____3544182260B8A15D332367E48C7530FC0E901FD3_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_5, L_6, /*hidden argument*/NULL);
		((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->set__dist_code_2(L_5);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_7 = (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)SZArrayNew(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_8 = L_7;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____6A316789EED01119DE92841832701A40AB0CABD6_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_8, L_9, /*hidden argument*/NULL);
		((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->set_LengthCode_3(L_8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = L_10;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_12 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____2E868D9F2085DF93F11F58DE61C05E0D8A8F4A71_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_11, L_12, /*hidden argument*/NULL);
		((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->set_LengthBase_4(L_11);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = L_13;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_15 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____5581A70566F03554D8048EDBFC6E6B399AF9BCB1_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_14, L_15, /*hidden argument*/NULL);
		((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->set_DistanceBase_5(L_14);
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
