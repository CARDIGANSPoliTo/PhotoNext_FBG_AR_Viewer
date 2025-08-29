#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
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
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// SharpCompress.Compressors.Deflate.DeflateManager/Config[]
struct ConfigU5BU5D_t7B1922C351DE9FF6067E59B9091B1C2CA82E2B30;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// SharpCompress.Compressors.Deflate.CRC32
struct CRC32_tBB356C0837066B0839B03775D7B40F613498E290;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// SharpCompress.Converters.DataConverter
struct DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// SharpCompress.Compressors.Deflate.DeflateManager
struct DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// SharpCompress.Compressors.Deflate.InfTree
struct InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E;
// SharpCompress.Compressors.Deflate.InflateBlocks
struct InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4;
// SharpCompress.Compressors.Deflate.InflateCodes
struct InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1;
// SharpCompress.Compressors.Deflate.InflateManager
struct InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// SharpCompress.IO.NonDisposingStream
struct NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// SharpCompress.Compressors.Deflate.StaticTree
struct StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// SharpCompress.Compressors.Deflate.ZlibBaseStream
struct ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3;
// SharpCompress.Compressors.Deflate.ZlibCodec
struct ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE;
// SharpCompress.Compressors.Deflate.ZlibException
struct ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F;
// SharpCompress.Compressors.Deflate.ZlibStream
struct ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C;
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
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CRC32_tBB356C0837066B0839B03775D7B40F613498E290_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CopyConverter_t957E1D582319526872FEFF453718C07F7CC6B574_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwapConverter_t37AC82B5B2F004CD16C0F3E8CF13983A1005C522_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TarHeader_tC48B196EB765EEC1B717FB4CCE1B278C3AFC9BD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____1B180C6E41F096D53222F5E8EF558B78182CA401_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____67C0E784F3654B008A81E2988588CF4956CCF3DA_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____79D521E6E3E55103005E9CC3FA43B3174FAF090F_7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_8_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____850D4DC092689E1F0D8A70B6281848B27DEC0014_9_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____8ED8F61DAA454B49CD5059AE4486C59174324E9E_10_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____A474A0BEC4E2CE8491839502AE85F6EA8504C6BD_12_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____D068832E6B13A623916709C1E0E25ADCBE7B455F_13_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____DACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_14_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____EB6F545AEF284339D25594F900E7A395212460EB_15_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____F584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_16_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0659AF070440111C5138C5C2CF237FE1D199797C;
IL2CPP_EXTERN_C String_t* _stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral09BE1A5FDF1304B1AF66C7AA9E11F5D68F1A7A53;
IL2CPP_EXTERN_C String_t* _stringLiteral0F0911FCBD89FC88F6637AE593EB9E5E3442A4F0;
IL2CPP_EXTERN_C String_t* _stringLiteral0FE5434C6E938CF30A74BC53A565C36727AA6E9E;
IL2CPP_EXTERN_C String_t* _stringLiteral10970F72C2D0D7F199946EF78672994F037BA021;
IL2CPP_EXTERN_C String_t* _stringLiteral10D38DC34936AF6C5FB05636D856173414F0E6F5;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94;
IL2CPP_EXTERN_C String_t* _stringLiteral14D85C5F7C475603476AF01830C5A5FDF517ACB9;
IL2CPP_EXTERN_C String_t* _stringLiteral1B1E3A9AE7E04127D129AAC63B18BB45C6467DB9;
IL2CPP_EXTERN_C String_t* _stringLiteral24B5EB22D8E2EC2684FA8E9A50101FC76FC80368;
IL2CPP_EXTERN_C String_t* _stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43;
IL2CPP_EXTERN_C String_t* _stringLiteral31F5FB1C38A44C5FB3A50E292D89F851681E4A86;
IL2CPP_EXTERN_C String_t* _stringLiteral31FF32DD49EB95324AC3BBB26903BDBBB3D9DE53;
IL2CPP_EXTERN_C String_t* _stringLiteral3233DCBABA7FC4545C644475BBE0516447D29DBD;
IL2CPP_EXTERN_C String_t* _stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384;
IL2CPP_EXTERN_C String_t* _stringLiteral3D7AFE151D76C21DBC230D2F7D219FAB99ADCF3A;
IL2CPP_EXTERN_C String_t* _stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D;
IL2CPP_EXTERN_C String_t* _stringLiteral4DE4583466E161AC08D14AD37D8B70B8580B3627;
IL2CPP_EXTERN_C String_t* _stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0;
IL2CPP_EXTERN_C String_t* _stringLiteral532F5429956965038FA49DA954E9A0D4D34B41A9;
IL2CPP_EXTERN_C String_t* _stringLiteral540BFF2B585F6DE7F5AA022B07C05975323EFD0E;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral5882879161B7C9D56B5A1120EF8EF366916857FF;
IL2CPP_EXTERN_C String_t* _stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE;
IL2CPP_EXTERN_C String_t* _stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766;
IL2CPP_EXTERN_C String_t* _stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC;
IL2CPP_EXTERN_C String_t* _stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6;
IL2CPP_EXTERN_C String_t* _stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417;
IL2CPP_EXTERN_C String_t* _stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8;
IL2CPP_EXTERN_C String_t* _stringLiteral688CD11358D23DA4D6EBCBC3C3C0BF14F0836432;
IL2CPP_EXTERN_C String_t* _stringLiteral6E343721F0E25487FE2756047043B53F090F4259;
IL2CPP_EXTERN_C String_t* _stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5;
IL2CPP_EXTERN_C String_t* _stringLiteral7897EC9A2D8A7F35E69F42F0A932E1E9320CB2DA;
IL2CPP_EXTERN_C String_t* _stringLiteral796754270F9B2AB25ACA5093B84CF8EAF55BA1AE;
IL2CPP_EXTERN_C String_t* _stringLiteral81B54C81CE5770A2FB716FE3138FA18CE998793D;
IL2CPP_EXTERN_C String_t* _stringLiteral8D4D82166AFA3DFA90B42F9624DAC59E5DE0E310;
IL2CPP_EXTERN_C String_t* _stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4;
IL2CPP_EXTERN_C String_t* _stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16;
IL2CPP_EXTERN_C String_t* _stringLiteral983DAC088DBADBDF2CEE0A7F894D264FCD8D805D;
IL2CPP_EXTERN_C String_t* _stringLiteral988F3366E12D654A4876B3640459880EFD9315D1;
IL2CPP_EXTERN_C String_t* _stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06;
IL2CPP_EXTERN_C String_t* _stringLiteral9AE36592E95F2354A6676CC52CF848B11A46DBD9;
IL2CPP_EXTERN_C String_t* _stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB;
IL2CPP_EXTERN_C String_t* _stringLiteralA7908ABB3E478F6388EB5FB76212E4B3E81900AD;
IL2CPP_EXTERN_C String_t* _stringLiteralB274B371D443401B2ED8CB4D62663E14A8DAFE8C;
IL2CPP_EXTERN_C String_t* _stringLiteralB2B8359BD91EB1DF5DC1B2DE300F3D1DC2B414E8;
IL2CPP_EXTERN_C String_t* _stringLiteralB6E4583683A19BA1CBC201CAD5FFABF027A5B94A;
IL2CPP_EXTERN_C String_t* _stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D;
IL2CPP_EXTERN_C String_t* _stringLiteralBD86ABA5185A5933191E8016A9D3ED21FA733955;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948;
IL2CPP_EXTERN_C String_t* _stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110;
IL2CPP_EXTERN_C String_t* _stringLiteralC21230A40726F1E28FBA587F89E72C85A590CD77;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralC362660DF8B25C6834DE818F1371D30BE73D4BAF;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B0C3C63415051741BF2BBE989F54545097E70;
IL2CPP_EXTERN_C String_t* _stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113;
IL2CPP_EXTERN_C String_t* _stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E;
IL2CPP_EXTERN_C String_t* _stringLiteralD82DD7A67123B96565FAC38717BA5FA359AB739E;
IL2CPP_EXTERN_C String_t* _stringLiteralD94DFA59855436FE4E964729609DFFE5BDFF64A0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F;
IL2CPP_EXTERN_C String_t* _stringLiteralE71CA932A8446C0BB531B29F318B54FD59C7E1AB;
IL2CPP_EXTERN_C String_t* _stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4;
IL2CPP_EXTERN_C String_t* _stringLiteralF0FA167A2B553EA3A482772133E47AA3C132FFA2;
IL2CPP_EXTERN_C String_t* _stringLiteralF4950B3758A114DEB554BDFD7BE0362389271888;
IL2CPP_EXTERN_C String_t* _stringLiteralF903893A2701734326457CD3C53F46438FA08D80;
IL2CPP_EXTERN_C const RuntimeMethod* CRC32_SlurpBlock_mC20742277BBA9CAD29C907550CA4BD3A8369F26A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataConverter_Check_mCB14AC4E92C406C9789C8D018FC0E72B61FC0483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_DeflateFast_mA1AAAC7F7E2B7FDB9C7ADE3A37DBC47DEF4616A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_DeflateNone_m2F055D727F66C27E3E8E549E09CA7EBBEC8A4BD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_DeflateSlow_mB93F5375C5A63065F156A15A721056E7D6EB3F3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_Deflate_m126CEB8805497536F7CFB1F2073840FEC382FD66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateManager_Initialize_mF1CEA930CBA0E816432B9F39493D12EADF13140A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflateManager_Inflate_m988DA4158DE766A4DAC550E8CA8585E1FB510186_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InflateManager_Initialize_m200134FD3314E7A277A99C510F7206652B3C01C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NonDisposingStream_Dispose_m62E278A7B084F107B7675D4E0062B7C043A65D40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibBaseStream_ReadZeroTerminatedString_m1C257B5E918E0304E55231BAAE737F1F62156E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibBaseStream_Read_mDBBE1E376A38BC3514B2393E9BA86C2CE80C8D35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibBaseStream_Seek_m0474181B1F14DB5A5BD3A48738BC99A7DE4ABA54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibBaseStream_Write_m19271FEE58E1BCBBB237CDE9773821FF2E97622C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibBaseStream__ReadAndValidateGzipHeader_mB5ADCE23F9E1A6A52751B305116B88E8292D7921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibBaseStream_finish_mF10E648654D2F058518FE90198A342DEC7F3A052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibBaseStream_get_Position_m0682A0FE75551512C46F1F6738FC7996A246A4D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibBaseStream_set_Position_m1FA0E61706850830E8A6774C1EBFB522E7E45BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_Deflate_m40D189358D3052C7844300DC7936C5686BC94345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_EndDeflate_m9818A1239F94F09CB3D6E15F87E39714ED34DE5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_EndInflate_mB50FF344614ED7D50858A3B50B9903F6F9E8821B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_Inflate_mFB3BCD376B03D35495C073F526F88DF90810ECE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_InitializeInflate_mAD21BB13A008C5E3AD87A63183208F242950E0A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec__InternalInitializeDeflate_m6E0EE2A7E6AD52FF761E1D2D12B9F89CC4CEA2EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibCodec_flush_pending_m603D6CAA1E336BBC731C63B92F0103DDD309A023_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_Flush_m97D5028E739F68DA301127ABA5ACD89E002108CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_ReadByte_m72D25D066BFBBA8E1949B4765F7458719ABE0638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_Read_mCA6DE576671BE3893DE432B8D0597D39CA76F644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_Seek_m80ECFE40A1F60A543F84BFA2335C3B3F6C939DB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_SetLength_mF2174257445CBD3EC44A04D2E00E3B4D48B53093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_WriteByte_m0A01E834840873D9E471DB9C50CDCD3ED959075C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_Write_m3CED83DE3E5D085EA1F7BA3E907B33FABAD1F3C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_get_CanRead_m8C6C8B98E72AD7292FCE5AAC807543A8E345FB07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_get_CanWrite_mF4166910849A825DFDA09424BD07270CCF5305C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_get_Length_m4624CE950441041BA10E1695D1FBDD88E6B822D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_set_FlushMode_m779F0A71E5A0FA071BEAAD76BF92C54790EA77C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZlibStream_set_Position_mBDD5BA7AE7E7C4AED2FDAB52A27C23DF4724393D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCA3982F6E23D83FB9356EB6A6EC8244D0AD5BED1 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____items_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// SharpCompress.Compressors.Deflate.Adler
struct Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA  : public RuntimeObject
{
public:

public:
};

struct Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_StaticFields
{
public:
	// System.UInt32 SharpCompress.Compressors.Deflate.Adler::BASE
	uint32_t ___BASE_0;
	// System.Int32 SharpCompress.Compressors.Deflate.Adler::NMAX
	int32_t ___NMAX_1;

public:
	inline static int32_t get_offset_of_BASE_0() { return static_cast<int32_t>(offsetof(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_StaticFields, ___BASE_0)); }
	inline uint32_t get_BASE_0() const { return ___BASE_0; }
	inline uint32_t* get_address_of_BASE_0() { return &___BASE_0; }
	inline void set_BASE_0(uint32_t value)
	{
		___BASE_0 = value;
	}

	inline static int32_t get_offset_of_NMAX_1() { return static_cast<int32_t>(offsetof(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_StaticFields, ___NMAX_1)); }
	inline int32_t get_NMAX_1() const { return ___NMAX_1; }
	inline int32_t* get_address_of_NMAX_1() { return &___NMAX_1; }
	inline void set_NMAX_1(int32_t value)
	{
		___NMAX_1 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.BitConverter
struct BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields
{
public:
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;

public:
	inline static int32_t get_offset_of_IsLittleEndian_0() { return static_cast<int32_t>(offsetof(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields, ___IsLittleEndian_0)); }
	inline bool get_IsLittleEndian_0() const { return ___IsLittleEndian_0; }
	inline bool* get_address_of_IsLittleEndian_0() { return &___IsLittleEndian_0; }
	inline void set_IsLittleEndian_0(bool value)
	{
		___IsLittleEndian_0 = value;
	}
};


// SharpCompress.Compressors.Deflate.CRC32
struct CRC32_tBB356C0837066B0839B03775D7B40F613498E290  : public RuntimeObject
{
public:
	// System.UInt32 SharpCompress.Compressors.Deflate.CRC32::runningCrc32Result
	uint32_t ___runningCrc32Result_1;
	// System.Int64 SharpCompress.Compressors.Deflate.CRC32::<TotalBytesRead>k__BackingField
	int64_t ___U3CTotalBytesReadU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_runningCrc32Result_1() { return static_cast<int32_t>(offsetof(CRC32_tBB356C0837066B0839B03775D7B40F613498E290, ___runningCrc32Result_1)); }
	inline uint32_t get_runningCrc32Result_1() const { return ___runningCrc32Result_1; }
	inline uint32_t* get_address_of_runningCrc32Result_1() { return &___runningCrc32Result_1; }
	inline void set_runningCrc32Result_1(uint32_t value)
	{
		___runningCrc32Result_1 = value;
	}

	inline static int32_t get_offset_of_U3CTotalBytesReadU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CRC32_tBB356C0837066B0839B03775D7B40F613498E290, ___U3CTotalBytesReadU3Ek__BackingField_2)); }
	inline int64_t get_U3CTotalBytesReadU3Ek__BackingField_2() const { return ___U3CTotalBytesReadU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CTotalBytesReadU3Ek__BackingField_2() { return &___U3CTotalBytesReadU3Ek__BackingField_2; }
	inline void set_U3CTotalBytesReadU3Ek__BackingField_2(int64_t value)
	{
		___U3CTotalBytesReadU3Ek__BackingField_2 = value;
	}
};

struct CRC32_tBB356C0837066B0839B03775D7B40F613498E290_StaticFields
{
public:
	// System.UInt32[] SharpCompress.Compressors.Deflate.CRC32::crc32Table
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___crc32Table_0;

public:
	inline static int32_t get_offset_of_crc32Table_0() { return static_cast<int32_t>(offsetof(CRC32_tBB356C0837066B0839B03775D7B40F613498E290_StaticFields, ___crc32Table_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_crc32Table_0() const { return ___crc32Table_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_crc32Table_0() { return &___crc32Table_0; }
	inline void set_crc32Table_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___crc32Table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crc32Table_0), (void*)value);
	}
};


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


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_56)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_59)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_60)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
	}
};


// SharpCompress.Compressors.Deflate.InfTree
struct InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E  : public RuntimeObject
{
public:
	// System.Int32[] SharpCompress.Compressors.Deflate.InfTree::c
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___c_6;
	// System.Int32[] SharpCompress.Compressors.Deflate.InfTree::hn
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hn_7;
	// System.Int32[] SharpCompress.Compressors.Deflate.InfTree::r
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___r_8;
	// System.Int32[] SharpCompress.Compressors.Deflate.InfTree::u
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___u_9;
	// System.Int32[] SharpCompress.Compressors.Deflate.InfTree::v
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___v_10;
	// System.Int32[] SharpCompress.Compressors.Deflate.InfTree::x
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___x_11;

public:
	inline static int32_t get_offset_of_c_6() { return static_cast<int32_t>(offsetof(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E, ___c_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_c_6() const { return ___c_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_c_6() { return &___c_6; }
	inline void set_c_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___c_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_6), (void*)value);
	}

	inline static int32_t get_offset_of_hn_7() { return static_cast<int32_t>(offsetof(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E, ___hn_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_hn_7() const { return ___hn_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_hn_7() { return &___hn_7; }
	inline void set_hn_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___hn_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hn_7), (void*)value);
	}

	inline static int32_t get_offset_of_r_8() { return static_cast<int32_t>(offsetof(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E, ___r_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_r_8() const { return ___r_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_r_8() { return &___r_8; }
	inline void set_r_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___r_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___r_8), (void*)value);
	}

	inline static int32_t get_offset_of_u_9() { return static_cast<int32_t>(offsetof(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E, ___u_9)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_u_9() const { return ___u_9; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_u_9() { return &___u_9; }
	inline void set_u_9(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___u_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___u_9), (void*)value);
	}

	inline static int32_t get_offset_of_v_10() { return static_cast<int32_t>(offsetof(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E, ___v_10)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_v_10() const { return ___v_10; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_v_10() { return &___v_10; }
	inline void set_v_10(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___v_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___v_10), (void*)value);
	}

	inline static int32_t get_offset_of_x_11() { return static_cast<int32_t>(offsetof(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E, ___x_11)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_x_11() const { return ___x_11; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_x_11() { return &___x_11; }
	inline void set_x_11(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___x_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___x_11), (void*)value);
	}
};

struct InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields
{
public:
	// System.Int32[] SharpCompress.Compressors.Deflate.InfTree::fixed_tl
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___fixed_tl_0;
	// System.Int32[] SharpCompress.Compressors.Deflate.InfTree::fixed_td
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___fixed_td_1;
	// System.Int32[] SharpCompress.Compressors.Deflate.InfTree::cplens
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cplens_2;
	// System.Int32[] SharpCompress.Compressors.Deflate.InfTree::cplext
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cplext_3;
	// System.Int32[] SharpCompress.Compressors.Deflate.InfTree::cpdist
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cpdist_4;
	// System.Int32[] SharpCompress.Compressors.Deflate.InfTree::cpdext
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cpdext_5;

public:
	inline static int32_t get_offset_of_fixed_tl_0() { return static_cast<int32_t>(offsetof(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields, ___fixed_tl_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_fixed_tl_0() const { return ___fixed_tl_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_fixed_tl_0() { return &___fixed_tl_0; }
	inline void set_fixed_tl_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___fixed_tl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fixed_tl_0), (void*)value);
	}

	inline static int32_t get_offset_of_fixed_td_1() { return static_cast<int32_t>(offsetof(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields, ___fixed_td_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_fixed_td_1() const { return ___fixed_td_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_fixed_td_1() { return &___fixed_td_1; }
	inline void set_fixed_td_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___fixed_td_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fixed_td_1), (void*)value);
	}

	inline static int32_t get_offset_of_cplens_2() { return static_cast<int32_t>(offsetof(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields, ___cplens_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cplens_2() const { return ___cplens_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cplens_2() { return &___cplens_2; }
	inline void set_cplens_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cplens_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cplens_2), (void*)value);
	}

	inline static int32_t get_offset_of_cplext_3() { return static_cast<int32_t>(offsetof(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields, ___cplext_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cplext_3() const { return ___cplext_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cplext_3() { return &___cplext_3; }
	inline void set_cplext_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cplext_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cplext_3), (void*)value);
	}

	inline static int32_t get_offset_of_cpdist_4() { return static_cast<int32_t>(offsetof(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields, ___cpdist_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cpdist_4() const { return ___cpdist_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cpdist_4() { return &___cpdist_4; }
	inline void set_cpdist_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cpdist_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpdist_4), (void*)value);
	}

	inline static int32_t get_offset_of_cpdext_5() { return static_cast<int32_t>(offsetof(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields, ___cpdext_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cpdext_5() const { return ___cpdext_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cpdext_5() { return &___cpdext_5; }
	inline void set_cpdext_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cpdext_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cpdext_5), (void*)value);
	}
};


// SharpCompress.Compressors.Deflate.InflateCodes
struct InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1  : public RuntimeObject
{
public:
	// System.Int32 SharpCompress.Compressors.Deflate.InflateCodes::bitsToGet
	int32_t ___bitsToGet_0;
	// System.Byte SharpCompress.Compressors.Deflate.InflateCodes::dbits
	uint8_t ___dbits_1;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateCodes::dist
	int32_t ___dist_2;
	// System.Int32[] SharpCompress.Compressors.Deflate.InflateCodes::dtree
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___dtree_3;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateCodes::dtree_index
	int32_t ___dtree_index_4;
	// System.Byte SharpCompress.Compressors.Deflate.InflateCodes::lbits
	uint8_t ___lbits_5;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateCodes::len
	int32_t ___len_6;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateCodes::lit
	int32_t ___lit_7;
	// System.Int32[] SharpCompress.Compressors.Deflate.InflateCodes::ltree
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ltree_8;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateCodes::ltree_index
	int32_t ___ltree_index_9;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateCodes::mode
	int32_t ___mode_10;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateCodes::need
	int32_t ___need_11;
	// System.Int32[] SharpCompress.Compressors.Deflate.InflateCodes::tree
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tree_12;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateCodes::tree_index
	int32_t ___tree_index_13;

public:
	inline static int32_t get_offset_of_bitsToGet_0() { return static_cast<int32_t>(offsetof(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1, ___bitsToGet_0)); }
	inline int32_t get_bitsToGet_0() const { return ___bitsToGet_0; }
	inline int32_t* get_address_of_bitsToGet_0() { return &___bitsToGet_0; }
	inline void set_bitsToGet_0(int32_t value)
	{
		___bitsToGet_0 = value;
	}

	inline static int32_t get_offset_of_dbits_1() { return static_cast<int32_t>(offsetof(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1, ___dbits_1)); }
	inline uint8_t get_dbits_1() const { return ___dbits_1; }
	inline uint8_t* get_address_of_dbits_1() { return &___dbits_1; }
	inline void set_dbits_1(uint8_t value)
	{
		___dbits_1 = value;
	}

	inline static int32_t get_offset_of_dist_2() { return static_cast<int32_t>(offsetof(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1, ___dist_2)); }
	inline int32_t get_dist_2() const { return ___dist_2; }
	inline int32_t* get_address_of_dist_2() { return &___dist_2; }
	inline void set_dist_2(int32_t value)
	{
		___dist_2 = value;
	}

	inline static int32_t get_offset_of_dtree_3() { return static_cast<int32_t>(offsetof(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1, ___dtree_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_dtree_3() const { return ___dtree_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_dtree_3() { return &___dtree_3; }
	inline void set_dtree_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___dtree_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dtree_3), (void*)value);
	}

	inline static int32_t get_offset_of_dtree_index_4() { return static_cast<int32_t>(offsetof(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1, ___dtree_index_4)); }
	inline int32_t get_dtree_index_4() const { return ___dtree_index_4; }
	inline int32_t* get_address_of_dtree_index_4() { return &___dtree_index_4; }
	inline void set_dtree_index_4(int32_t value)
	{
		___dtree_index_4 = value;
	}

	inline static int32_t get_offset_of_lbits_5() { return static_cast<int32_t>(offsetof(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1, ___lbits_5)); }
	inline uint8_t get_lbits_5() const { return ___lbits_5; }
	inline uint8_t* get_address_of_lbits_5() { return &___lbits_5; }
	inline void set_lbits_5(uint8_t value)
	{
		___lbits_5 = value;
	}

	inline static int32_t get_offset_of_len_6() { return static_cast<int32_t>(offsetof(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1, ___len_6)); }
	inline int32_t get_len_6() const { return ___len_6; }
	inline int32_t* get_address_of_len_6() { return &___len_6; }
	inline void set_len_6(int32_t value)
	{
		___len_6 = value;
	}

	inline static int32_t get_offset_of_lit_7() { return static_cast<int32_t>(offsetof(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1, ___lit_7)); }
	inline int32_t get_lit_7() const { return ___lit_7; }
	inline int32_t* get_address_of_lit_7() { return &___lit_7; }
	inline void set_lit_7(int32_t value)
	{
		___lit_7 = value;
	}

	inline static int32_t get_offset_of_ltree_8() { return static_cast<int32_t>(offsetof(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1, ___ltree_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ltree_8() const { return ___ltree_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ltree_8() { return &___ltree_8; }
	inline void set_ltree_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ltree_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ltree_8), (void*)value);
	}

	inline static int32_t get_offset_of_ltree_index_9() { return static_cast<int32_t>(offsetof(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1, ___ltree_index_9)); }
	inline int32_t get_ltree_index_9() const { return ___ltree_index_9; }
	inline int32_t* get_address_of_ltree_index_9() { return &___ltree_index_9; }
	inline void set_ltree_index_9(int32_t value)
	{
		___ltree_index_9 = value;
	}

	inline static int32_t get_offset_of_mode_10() { return static_cast<int32_t>(offsetof(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1, ___mode_10)); }
	inline int32_t get_mode_10() const { return ___mode_10; }
	inline int32_t* get_address_of_mode_10() { return &___mode_10; }
	inline void set_mode_10(int32_t value)
	{
		___mode_10 = value;
	}

	inline static int32_t get_offset_of_need_11() { return static_cast<int32_t>(offsetof(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1, ___need_11)); }
	inline int32_t get_need_11() const { return ___need_11; }
	inline int32_t* get_address_of_need_11() { return &___need_11; }
	inline void set_need_11(int32_t value)
	{
		___need_11 = value;
	}

	inline static int32_t get_offset_of_tree_12() { return static_cast<int32_t>(offsetof(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1, ___tree_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_tree_12() const { return ___tree_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_tree_12() { return &___tree_12; }
	inline void set_tree_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___tree_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tree_12), (void*)value);
	}

	inline static int32_t get_offset_of_tree_index_13() { return static_cast<int32_t>(offsetof(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1, ___tree_index_13)); }
	inline int32_t get_tree_index_13() const { return ___tree_index_13; }
	inline int32_t* get_address_of_tree_index_13() { return &___tree_index_13; }
	inline void set_tree_index_13(int32_t value)
	{
		___tree_index_13 = value;
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


// SharpCompress.Compressors.Deflate.InternalInflateConstants
struct InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0  : public RuntimeObject
{
public:

public:
};

struct InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields
{
public:
	// System.Int32[] SharpCompress.Compressors.Deflate.InternalInflateConstants::InflateMask
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___InflateMask_0;

public:
	inline static int32_t get_offset_of_InflateMask_0() { return static_cast<int32_t>(offsetof(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields, ___InflateMask_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_InflateMask_0() const { return ___InflateMask_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_InflateMask_0() { return &___InflateMask_0; }
	inline void set_InflateMask_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___InflateMask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InflateMask_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
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

// SharpCompress.Compressors.Deflate.SharedUtils
struct SharedUtils_t53F42CEEEF43A6133598D91DF35F51C7B8885145  : public RuntimeObject
{
public:

public:
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


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
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


// SharpCompress.Compressors.CompressionMode
struct CompressionMode_tF657B25D307FF93A32DD7C430DAA207AA5F220D5 
{
public:
	// System.Int32 SharpCompress.Compressors.CompressionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMode_tF657B25D307FF93A32DD7C430DAA207AA5F220D5, ___value___2)); }
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


// System.DateTimeKind
struct DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
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


// SharpCompress.IO.NonDisposingStream
struct NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Boolean SharpCompress.IO.NonDisposingStream::<ThrowOnDispose>k__BackingField
	bool ___U3CThrowOnDisposeU3Ek__BackingField_5;
	// System.IO.Stream SharpCompress.IO.NonDisposingStream::<Stream>k__BackingField
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___U3CStreamU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CThrowOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47, ___U3CThrowOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CThrowOnDisposeU3Ek__BackingField_5() const { return ___U3CThrowOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CThrowOnDisposeU3Ek__BackingField_5() { return &___U3CThrowOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CThrowOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CThrowOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CStreamU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47, ___U3CStreamU3Ek__BackingField_6)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_U3CStreamU3Ek__BackingField_6() const { return ___U3CStreamU3Ek__BackingField_6; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_U3CStreamU3Ek__BackingField_6() { return &___U3CStreamU3Ek__BackingField_6; }
	inline void set_U3CStreamU3Ek__BackingField_6(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___U3CStreamU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStreamU3Ek__BackingField_6), (void*)value);
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


// System.IO.SeekOrigin
struct SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SharpCompress.Common.Tar.Headers.TarHeader
struct TarHeader_tC48B196EB765EEC1B717FB4CCE1B278C3AFC9BD0  : public RuntimeObject
{
public:

public:
};

struct TarHeader_tC48B196EB765EEC1B717FB4CCE1B278C3AFC9BD0_StaticFields
{
public:
	// System.DateTime SharpCompress.Common.Tar.Headers.TarHeader::EPOCH
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___EPOCH_0;

public:
	inline static int32_t get_offset_of_EPOCH_0() { return static_cast<int32_t>(offsetof(TarHeader_tC48B196EB765EEC1B717FB4CCE1B278C3AFC9BD0_StaticFields, ___EPOCH_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_EPOCH_0() const { return ___EPOCH_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_EPOCH_0() { return &___EPOCH_0; }
	inline void set_EPOCH_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___EPOCH_0 = value;
	}
};


// SharpCompress.Compressors.Deflate.ZlibStream
struct ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// SharpCompress.Compressors.Deflate.ZlibBaseStream SharpCompress.Compressors.Deflate.ZlibStream::_baseStream
	ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * ____baseStream_5;
	// System.Boolean SharpCompress.Compressors.Deflate.ZlibStream::_disposed
	bool ____disposed_6;

public:
	inline static int32_t get_offset_of__baseStream_5() { return static_cast<int32_t>(offsetof(ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C, ____baseStream_5)); }
	inline ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * get__baseStream_5() const { return ____baseStream_5; }
	inline ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 ** get_address_of__baseStream_5() { return &____baseStream_5; }
	inline void set__baseStream_5(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * value)
	{
		____baseStream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseStream_5), (void*)value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
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


// SharpCompress.Compressors.Deflate.InflateBlocks
struct InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4  : public RuntimeObject
{
public:
	// SharpCompress.Compressors.Deflate.ZlibCodec SharpCompress.Compressors.Deflate.InflateBlocks::_codec
	ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ____codec_1;
	// System.Int32[] SharpCompress.Compressors.Deflate.InflateBlocks::bb
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bb_2;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateBlocks::bitb
	int32_t ___bitb_3;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateBlocks::bitk
	int32_t ___bitk_4;
	// System.Int32[] SharpCompress.Compressors.Deflate.InflateBlocks::blens
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___blens_5;
	// System.UInt32 SharpCompress.Compressors.Deflate.InflateBlocks::check
	uint32_t ___check_6;
	// System.Object SharpCompress.Compressors.Deflate.InflateBlocks::checkfn
	RuntimeObject * ___checkfn_7;
	// SharpCompress.Compressors.Deflate.InflateCodes SharpCompress.Compressors.Deflate.InflateBlocks::codes
	InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * ___codes_8;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateBlocks::end
	int32_t ___end_9;
	// System.Int32[] SharpCompress.Compressors.Deflate.InflateBlocks::hufts
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hufts_10;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateBlocks::index
	int32_t ___index_11;
	// SharpCompress.Compressors.Deflate.InfTree SharpCompress.Compressors.Deflate.InflateBlocks::inftree
	InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * ___inftree_12;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateBlocks::last
	int32_t ___last_13;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateBlocks::left
	int32_t ___left_14;
	// SharpCompress.Compressors.Deflate.InflateBlocks/InflateBlockMode SharpCompress.Compressors.Deflate.InflateBlocks::mode
	int32_t ___mode_15;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateBlocks::readAt
	int32_t ___readAt_16;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateBlocks::table
	int32_t ___table_17;
	// System.Int32[] SharpCompress.Compressors.Deflate.InflateBlocks::tb
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tb_18;
	// System.Byte[] SharpCompress.Compressors.Deflate.InflateBlocks::window
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___window_19;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateBlocks::writeAt
	int32_t ___writeAt_20;

public:
	inline static int32_t get_offset_of__codec_1() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ____codec_1)); }
	inline ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * get__codec_1() const { return ____codec_1; }
	inline ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE ** get_address_of__codec_1() { return &____codec_1; }
	inline void set__codec_1(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * value)
	{
		____codec_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____codec_1), (void*)value);
	}

	inline static int32_t get_offset_of_bb_2() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___bb_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_bb_2() const { return ___bb_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_bb_2() { return &___bb_2; }
	inline void set_bb_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___bb_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bb_2), (void*)value);
	}

	inline static int32_t get_offset_of_bitb_3() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___bitb_3)); }
	inline int32_t get_bitb_3() const { return ___bitb_3; }
	inline int32_t* get_address_of_bitb_3() { return &___bitb_3; }
	inline void set_bitb_3(int32_t value)
	{
		___bitb_3 = value;
	}

	inline static int32_t get_offset_of_bitk_4() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___bitk_4)); }
	inline int32_t get_bitk_4() const { return ___bitk_4; }
	inline int32_t* get_address_of_bitk_4() { return &___bitk_4; }
	inline void set_bitk_4(int32_t value)
	{
		___bitk_4 = value;
	}

	inline static int32_t get_offset_of_blens_5() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___blens_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_blens_5() const { return ___blens_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_blens_5() { return &___blens_5; }
	inline void set_blens_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___blens_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blens_5), (void*)value);
	}

	inline static int32_t get_offset_of_check_6() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___check_6)); }
	inline uint32_t get_check_6() const { return ___check_6; }
	inline uint32_t* get_address_of_check_6() { return &___check_6; }
	inline void set_check_6(uint32_t value)
	{
		___check_6 = value;
	}

	inline static int32_t get_offset_of_checkfn_7() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___checkfn_7)); }
	inline RuntimeObject * get_checkfn_7() const { return ___checkfn_7; }
	inline RuntimeObject ** get_address_of_checkfn_7() { return &___checkfn_7; }
	inline void set_checkfn_7(RuntimeObject * value)
	{
		___checkfn_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checkfn_7), (void*)value);
	}

	inline static int32_t get_offset_of_codes_8() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___codes_8)); }
	inline InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * get_codes_8() const { return ___codes_8; }
	inline InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 ** get_address_of_codes_8() { return &___codes_8; }
	inline void set_codes_8(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * value)
	{
		___codes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codes_8), (void*)value);
	}

	inline static int32_t get_offset_of_end_9() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___end_9)); }
	inline int32_t get_end_9() const { return ___end_9; }
	inline int32_t* get_address_of_end_9() { return &___end_9; }
	inline void set_end_9(int32_t value)
	{
		___end_9 = value;
	}

	inline static int32_t get_offset_of_hufts_10() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___hufts_10)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_hufts_10() const { return ___hufts_10; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_hufts_10() { return &___hufts_10; }
	inline void set_hufts_10(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___hufts_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hufts_10), (void*)value);
	}

	inline static int32_t get_offset_of_index_11() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___index_11)); }
	inline int32_t get_index_11() const { return ___index_11; }
	inline int32_t* get_address_of_index_11() { return &___index_11; }
	inline void set_index_11(int32_t value)
	{
		___index_11 = value;
	}

	inline static int32_t get_offset_of_inftree_12() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___inftree_12)); }
	inline InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * get_inftree_12() const { return ___inftree_12; }
	inline InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E ** get_address_of_inftree_12() { return &___inftree_12; }
	inline void set_inftree_12(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * value)
	{
		___inftree_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inftree_12), (void*)value);
	}

	inline static int32_t get_offset_of_last_13() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___last_13)); }
	inline int32_t get_last_13() const { return ___last_13; }
	inline int32_t* get_address_of_last_13() { return &___last_13; }
	inline void set_last_13(int32_t value)
	{
		___last_13 = value;
	}

	inline static int32_t get_offset_of_left_14() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___left_14)); }
	inline int32_t get_left_14() const { return ___left_14; }
	inline int32_t* get_address_of_left_14() { return &___left_14; }
	inline void set_left_14(int32_t value)
	{
		___left_14 = value;
	}

	inline static int32_t get_offset_of_mode_15() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___mode_15)); }
	inline int32_t get_mode_15() const { return ___mode_15; }
	inline int32_t* get_address_of_mode_15() { return &___mode_15; }
	inline void set_mode_15(int32_t value)
	{
		___mode_15 = value;
	}

	inline static int32_t get_offset_of_readAt_16() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___readAt_16)); }
	inline int32_t get_readAt_16() const { return ___readAt_16; }
	inline int32_t* get_address_of_readAt_16() { return &___readAt_16; }
	inline void set_readAt_16(int32_t value)
	{
		___readAt_16 = value;
	}

	inline static int32_t get_offset_of_table_17() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___table_17)); }
	inline int32_t get_table_17() const { return ___table_17; }
	inline int32_t* get_address_of_table_17() { return &___table_17; }
	inline void set_table_17(int32_t value)
	{
		___table_17 = value;
	}

	inline static int32_t get_offset_of_tb_18() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___tb_18)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_tb_18() const { return ___tb_18; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_tb_18() { return &___tb_18; }
	inline void set_tb_18(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___tb_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tb_18), (void*)value);
	}

	inline static int32_t get_offset_of_window_19() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___window_19)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_window_19() const { return ___window_19; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_window_19() { return &___window_19; }
	inline void set_window_19(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___window_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_19), (void*)value);
	}

	inline static int32_t get_offset_of_writeAt_20() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4, ___writeAt_20)); }
	inline int32_t get_writeAt_20() const { return ___writeAt_20; }
	inline int32_t* get_address_of_writeAt_20() { return &___writeAt_20; }
	inline void set_writeAt_20(int32_t value)
	{
		___writeAt_20 = value;
	}
};

struct InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_StaticFields
{
public:
	// System.Int32[] SharpCompress.Compressors.Deflate.InflateBlocks::border
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___border_0;

public:
	inline static int32_t get_offset_of_border_0() { return static_cast<int32_t>(offsetof(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_StaticFields, ___border_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_border_0() const { return ___border_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_border_0() { return &___border_0; }
	inline void set_border_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___border_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___border_0), (void*)value);
	}
};


// SharpCompress.Compressors.Deflate.InflateManager
struct InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9  : public RuntimeObject
{
public:
	// SharpCompress.Compressors.Deflate.ZlibCodec SharpCompress.Compressors.Deflate.InflateManager::_codec
	ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ____codec_1;
	// SharpCompress.Compressors.Deflate.InflateBlocks SharpCompress.Compressors.Deflate.InflateManager::blocks
	InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * ___blocks_2;
	// System.UInt32 SharpCompress.Compressors.Deflate.InflateManager::computedCheck
	uint32_t ___computedCheck_3;
	// System.UInt32 SharpCompress.Compressors.Deflate.InflateManager::expectedCheck
	uint32_t ___expectedCheck_4;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateManager::marker
	int32_t ___marker_5;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateManager::method
	int32_t ___method_6;
	// SharpCompress.Compressors.Deflate.InflateManager/InflateManagerMode SharpCompress.Compressors.Deflate.InflateManager::mode
	int32_t ___mode_7;
	// System.Int32 SharpCompress.Compressors.Deflate.InflateManager::wbits
	int32_t ___wbits_8;
	// System.Boolean SharpCompress.Compressors.Deflate.InflateManager::<HandleRfc1950HeaderBytes>k__BackingField
	bool ___U3CHandleRfc1950HeaderBytesU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of__codec_1() { return static_cast<int32_t>(offsetof(InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9, ____codec_1)); }
	inline ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * get__codec_1() const { return ____codec_1; }
	inline ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE ** get_address_of__codec_1() { return &____codec_1; }
	inline void set__codec_1(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * value)
	{
		____codec_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____codec_1), (void*)value);
	}

	inline static int32_t get_offset_of_blocks_2() { return static_cast<int32_t>(offsetof(InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9, ___blocks_2)); }
	inline InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * get_blocks_2() const { return ___blocks_2; }
	inline InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 ** get_address_of_blocks_2() { return &___blocks_2; }
	inline void set_blocks_2(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * value)
	{
		___blocks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blocks_2), (void*)value);
	}

	inline static int32_t get_offset_of_computedCheck_3() { return static_cast<int32_t>(offsetof(InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9, ___computedCheck_3)); }
	inline uint32_t get_computedCheck_3() const { return ___computedCheck_3; }
	inline uint32_t* get_address_of_computedCheck_3() { return &___computedCheck_3; }
	inline void set_computedCheck_3(uint32_t value)
	{
		___computedCheck_3 = value;
	}

	inline static int32_t get_offset_of_expectedCheck_4() { return static_cast<int32_t>(offsetof(InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9, ___expectedCheck_4)); }
	inline uint32_t get_expectedCheck_4() const { return ___expectedCheck_4; }
	inline uint32_t* get_address_of_expectedCheck_4() { return &___expectedCheck_4; }
	inline void set_expectedCheck_4(uint32_t value)
	{
		___expectedCheck_4 = value;
	}

	inline static int32_t get_offset_of_marker_5() { return static_cast<int32_t>(offsetof(InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9, ___marker_5)); }
	inline int32_t get_marker_5() const { return ___marker_5; }
	inline int32_t* get_address_of_marker_5() { return &___marker_5; }
	inline void set_marker_5(int32_t value)
	{
		___marker_5 = value;
	}

	inline static int32_t get_offset_of_method_6() { return static_cast<int32_t>(offsetof(InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9, ___method_6)); }
	inline int32_t get_method_6() const { return ___method_6; }
	inline int32_t* get_address_of_method_6() { return &___method_6; }
	inline void set_method_6(int32_t value)
	{
		___method_6 = value;
	}

	inline static int32_t get_offset_of_mode_7() { return static_cast<int32_t>(offsetof(InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9, ___mode_7)); }
	inline int32_t get_mode_7() const { return ___mode_7; }
	inline int32_t* get_address_of_mode_7() { return &___mode_7; }
	inline void set_mode_7(int32_t value)
	{
		___mode_7 = value;
	}

	inline static int32_t get_offset_of_wbits_8() { return static_cast<int32_t>(offsetof(InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9, ___wbits_8)); }
	inline int32_t get_wbits_8() const { return ___wbits_8; }
	inline int32_t* get_address_of_wbits_8() { return &___wbits_8; }
	inline void set_wbits_8(int32_t value)
	{
		___wbits_8 = value;
	}

	inline static int32_t get_offset_of_U3CHandleRfc1950HeaderBytesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9, ___U3CHandleRfc1950HeaderBytesU3Ek__BackingField_9)); }
	inline bool get_U3CHandleRfc1950HeaderBytesU3Ek__BackingField_9() const { return ___U3CHandleRfc1950HeaderBytesU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CHandleRfc1950HeaderBytesU3Ek__BackingField_9() { return &___U3CHandleRfc1950HeaderBytesU3Ek__BackingField_9; }
	inline void set_U3CHandleRfc1950HeaderBytesU3Ek__BackingField_9(bool value)
	{
		___U3CHandleRfc1950HeaderBytesU3Ek__BackingField_9 = value;
	}
};

struct InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9_StaticFields
{
public:
	// System.Byte[] SharpCompress.Compressors.Deflate.InflateManager::mark
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mark_0;

public:
	inline static int32_t get_offset_of_mark_0() { return static_cast<int32_t>(offsetof(InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9_StaticFields, ___mark_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mark_0() const { return ___mark_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mark_0() { return &___mark_0; }
	inline void set_mark_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mark_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mark_0), (void*)value);
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


// SharpCompress.Compressors.Deflate.ZlibBaseStream
struct ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// SharpCompress.Compressors.Deflate.ZlibCodec SharpCompress.Compressors.Deflate.ZlibBaseStream::_z
	ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ____z_5;
	// SharpCompress.Compressors.Deflate.ZlibBaseStream/StreamMode SharpCompress.Compressors.Deflate.ZlibBaseStream::_streamMode
	int32_t ____streamMode_6;
	// SharpCompress.Compressors.Deflate.FlushType SharpCompress.Compressors.Deflate.ZlibBaseStream::_flushMode
	int32_t ____flushMode_7;
	// SharpCompress.Compressors.Deflate.ZlibStreamFlavor SharpCompress.Compressors.Deflate.ZlibBaseStream::_flavor
	int32_t ____flavor_8;
	// SharpCompress.Compressors.CompressionMode SharpCompress.Compressors.Deflate.ZlibBaseStream::_compressionMode
	int32_t ____compressionMode_9;
	// SharpCompress.Compressors.Deflate.CompressionLevel SharpCompress.Compressors.Deflate.ZlibBaseStream::_level
	int32_t ____level_10;
	// System.Byte[] SharpCompress.Compressors.Deflate.ZlibBaseStream::_workingBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____workingBuffer_11;
	// System.Int32 SharpCompress.Compressors.Deflate.ZlibBaseStream::_bufferSize
	int32_t ____bufferSize_12;
	// System.Byte[] SharpCompress.Compressors.Deflate.ZlibBaseStream::_buf1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buf1_13;
	// System.IO.Stream SharpCompress.Compressors.Deflate.ZlibBaseStream::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_14;
	// SharpCompress.Compressors.Deflate.CompressionStrategy SharpCompress.Compressors.Deflate.ZlibBaseStream::Strategy
	int32_t ___Strategy_15;
	// SharpCompress.Compressors.Deflate.CRC32 SharpCompress.Compressors.Deflate.ZlibBaseStream::crc
	CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * ___crc_16;
	// System.String SharpCompress.Compressors.Deflate.ZlibBaseStream::_GzipFileName
	String_t* ____GzipFileName_17;
	// System.String SharpCompress.Compressors.Deflate.ZlibBaseStream::_GzipComment
	String_t* ____GzipComment_18;
	// System.DateTime SharpCompress.Compressors.Deflate.ZlibBaseStream::_GzipMtime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ____GzipMtime_19;
	// System.Int32 SharpCompress.Compressors.Deflate.ZlibBaseStream::_gzipHeaderByteCount
	int32_t ____gzipHeaderByteCount_20;
	// System.Text.Encoding SharpCompress.Compressors.Deflate.ZlibBaseStream::_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____encoding_21;
	// System.Boolean SharpCompress.Compressors.Deflate.ZlibBaseStream::nomoreinput
	bool ___nomoreinput_22;
	// System.Boolean SharpCompress.Compressors.Deflate.ZlibBaseStream::isDisposed
	bool ___isDisposed_23;

public:
	inline static int32_t get_offset_of__z_5() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____z_5)); }
	inline ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * get__z_5() const { return ____z_5; }
	inline ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE ** get_address_of__z_5() { return &____z_5; }
	inline void set__z_5(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * value)
	{
		____z_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____z_5), (void*)value);
	}

	inline static int32_t get_offset_of__streamMode_6() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____streamMode_6)); }
	inline int32_t get__streamMode_6() const { return ____streamMode_6; }
	inline int32_t* get_address_of__streamMode_6() { return &____streamMode_6; }
	inline void set__streamMode_6(int32_t value)
	{
		____streamMode_6 = value;
	}

	inline static int32_t get_offset_of__flushMode_7() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____flushMode_7)); }
	inline int32_t get__flushMode_7() const { return ____flushMode_7; }
	inline int32_t* get_address_of__flushMode_7() { return &____flushMode_7; }
	inline void set__flushMode_7(int32_t value)
	{
		____flushMode_7 = value;
	}

	inline static int32_t get_offset_of__flavor_8() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____flavor_8)); }
	inline int32_t get__flavor_8() const { return ____flavor_8; }
	inline int32_t* get_address_of__flavor_8() { return &____flavor_8; }
	inline void set__flavor_8(int32_t value)
	{
		____flavor_8 = value;
	}

	inline static int32_t get_offset_of__compressionMode_9() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____compressionMode_9)); }
	inline int32_t get__compressionMode_9() const { return ____compressionMode_9; }
	inline int32_t* get_address_of__compressionMode_9() { return &____compressionMode_9; }
	inline void set__compressionMode_9(int32_t value)
	{
		____compressionMode_9 = value;
	}

	inline static int32_t get_offset_of__level_10() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____level_10)); }
	inline int32_t get__level_10() const { return ____level_10; }
	inline int32_t* get_address_of__level_10() { return &____level_10; }
	inline void set__level_10(int32_t value)
	{
		____level_10 = value;
	}

	inline static int32_t get_offset_of__workingBuffer_11() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____workingBuffer_11)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__workingBuffer_11() const { return ____workingBuffer_11; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__workingBuffer_11() { return &____workingBuffer_11; }
	inline void set__workingBuffer_11(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____workingBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____workingBuffer_11), (void*)value);
	}

	inline static int32_t get_offset_of__bufferSize_12() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____bufferSize_12)); }
	inline int32_t get__bufferSize_12() const { return ____bufferSize_12; }
	inline int32_t* get_address_of__bufferSize_12() { return &____bufferSize_12; }
	inline void set__bufferSize_12(int32_t value)
	{
		____bufferSize_12 = value;
	}

	inline static int32_t get_offset_of__buf1_13() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____buf1_13)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buf1_13() const { return ____buf1_13; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buf1_13() { return &____buf1_13; }
	inline void set__buf1_13(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buf1_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buf1_13), (void*)value);
	}

	inline static int32_t get_offset_of__stream_14() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____stream_14)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_14() const { return ____stream_14; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_14() { return &____stream_14; }
	inline void set__stream_14(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_14), (void*)value);
	}

	inline static int32_t get_offset_of_Strategy_15() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ___Strategy_15)); }
	inline int32_t get_Strategy_15() const { return ___Strategy_15; }
	inline int32_t* get_address_of_Strategy_15() { return &___Strategy_15; }
	inline void set_Strategy_15(int32_t value)
	{
		___Strategy_15 = value;
	}

	inline static int32_t get_offset_of_crc_16() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ___crc_16)); }
	inline CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * get_crc_16() const { return ___crc_16; }
	inline CRC32_tBB356C0837066B0839B03775D7B40F613498E290 ** get_address_of_crc_16() { return &___crc_16; }
	inline void set_crc_16(CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * value)
	{
		___crc_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crc_16), (void*)value);
	}

	inline static int32_t get_offset_of__GzipFileName_17() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____GzipFileName_17)); }
	inline String_t* get__GzipFileName_17() const { return ____GzipFileName_17; }
	inline String_t** get_address_of__GzipFileName_17() { return &____GzipFileName_17; }
	inline void set__GzipFileName_17(String_t* value)
	{
		____GzipFileName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____GzipFileName_17), (void*)value);
	}

	inline static int32_t get_offset_of__GzipComment_18() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____GzipComment_18)); }
	inline String_t* get__GzipComment_18() const { return ____GzipComment_18; }
	inline String_t** get_address_of__GzipComment_18() { return &____GzipComment_18; }
	inline void set__GzipComment_18(String_t* value)
	{
		____GzipComment_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____GzipComment_18), (void*)value);
	}

	inline static int32_t get_offset_of__GzipMtime_19() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____GzipMtime_19)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get__GzipMtime_19() const { return ____GzipMtime_19; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of__GzipMtime_19() { return &____GzipMtime_19; }
	inline void set__GzipMtime_19(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		____GzipMtime_19 = value;
	}

	inline static int32_t get_offset_of__gzipHeaderByteCount_20() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____gzipHeaderByteCount_20)); }
	inline int32_t get__gzipHeaderByteCount_20() const { return ____gzipHeaderByteCount_20; }
	inline int32_t* get_address_of__gzipHeaderByteCount_20() { return &____gzipHeaderByteCount_20; }
	inline void set__gzipHeaderByteCount_20(int32_t value)
	{
		____gzipHeaderByteCount_20 = value;
	}

	inline static int32_t get_offset_of__encoding_21() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ____encoding_21)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__encoding_21() const { return ____encoding_21; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__encoding_21() { return &____encoding_21; }
	inline void set__encoding_21(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____encoding_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_21), (void*)value);
	}

	inline static int32_t get_offset_of_nomoreinput_22() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ___nomoreinput_22)); }
	inline bool get_nomoreinput_22() const { return ___nomoreinput_22; }
	inline bool* get_address_of_nomoreinput_22() { return &___nomoreinput_22; }
	inline void set_nomoreinput_22(bool value)
	{
		___nomoreinput_22 = value;
	}

	inline static int32_t get_offset_of_isDisposed_23() { return static_cast<int32_t>(offsetof(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3, ___isDisposed_23)); }
	inline bool get_isDisposed_23() const { return ___isDisposed_23; }
	inline bool* get_address_of_isDisposed_23() { return &___isDisposed_23; }
	inline void set_isDisposed_23(bool value)
	{
		___isDisposed_23 = value;
	}
};


// SharpCompress.Compressors.Deflate.ZlibCodec
struct ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE  : public RuntimeObject
{
public:
	// System.Byte[] SharpCompress.Compressors.Deflate.ZlibCodec::InputBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___InputBuffer_0;
	// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::NextIn
	int32_t ___NextIn_1;
	// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::AvailableBytesIn
	int32_t ___AvailableBytesIn_2;
	// System.Int64 SharpCompress.Compressors.Deflate.ZlibCodec::TotalBytesIn
	int64_t ___TotalBytesIn_3;
	// System.Byte[] SharpCompress.Compressors.Deflate.ZlibCodec::OutputBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___OutputBuffer_4;
	// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::NextOut
	int32_t ___NextOut_5;
	// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::AvailableBytesOut
	int32_t ___AvailableBytesOut_6;
	// System.Int64 SharpCompress.Compressors.Deflate.ZlibCodec::TotalBytesOut
	int64_t ___TotalBytesOut_7;
	// System.String SharpCompress.Compressors.Deflate.ZlibCodec::Message
	String_t* ___Message_8;
	// SharpCompress.Compressors.Deflate.DeflateManager SharpCompress.Compressors.Deflate.ZlibCodec::dstate
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * ___dstate_9;
	// SharpCompress.Compressors.Deflate.InflateManager SharpCompress.Compressors.Deflate.ZlibCodec::istate
	InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * ___istate_10;
	// System.UInt32 SharpCompress.Compressors.Deflate.ZlibCodec::_Adler32
	uint32_t ____Adler32_11;
	// SharpCompress.Compressors.Deflate.CompressionLevel SharpCompress.Compressors.Deflate.ZlibCodec::CompressLevel
	int32_t ___CompressLevel_12;
	// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::WindowBits
	int32_t ___WindowBits_13;
	// SharpCompress.Compressors.Deflate.CompressionStrategy SharpCompress.Compressors.Deflate.ZlibCodec::Strategy
	int32_t ___Strategy_14;

public:
	inline static int32_t get_offset_of_InputBuffer_0() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ___InputBuffer_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_InputBuffer_0() const { return ___InputBuffer_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_InputBuffer_0() { return &___InputBuffer_0; }
	inline void set_InputBuffer_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___InputBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputBuffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_NextIn_1() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ___NextIn_1)); }
	inline int32_t get_NextIn_1() const { return ___NextIn_1; }
	inline int32_t* get_address_of_NextIn_1() { return &___NextIn_1; }
	inline void set_NextIn_1(int32_t value)
	{
		___NextIn_1 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesIn_2() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ___AvailableBytesIn_2)); }
	inline int32_t get_AvailableBytesIn_2() const { return ___AvailableBytesIn_2; }
	inline int32_t* get_address_of_AvailableBytesIn_2() { return &___AvailableBytesIn_2; }
	inline void set_AvailableBytesIn_2(int32_t value)
	{
		___AvailableBytesIn_2 = value;
	}

	inline static int32_t get_offset_of_TotalBytesIn_3() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ___TotalBytesIn_3)); }
	inline int64_t get_TotalBytesIn_3() const { return ___TotalBytesIn_3; }
	inline int64_t* get_address_of_TotalBytesIn_3() { return &___TotalBytesIn_3; }
	inline void set_TotalBytesIn_3(int64_t value)
	{
		___TotalBytesIn_3 = value;
	}

	inline static int32_t get_offset_of_OutputBuffer_4() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ___OutputBuffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_OutputBuffer_4() const { return ___OutputBuffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_OutputBuffer_4() { return &___OutputBuffer_4; }
	inline void set_OutputBuffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___OutputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutputBuffer_4), (void*)value);
	}

	inline static int32_t get_offset_of_NextOut_5() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ___NextOut_5)); }
	inline int32_t get_NextOut_5() const { return ___NextOut_5; }
	inline int32_t* get_address_of_NextOut_5() { return &___NextOut_5; }
	inline void set_NextOut_5(int32_t value)
	{
		___NextOut_5 = value;
	}

	inline static int32_t get_offset_of_AvailableBytesOut_6() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ___AvailableBytesOut_6)); }
	inline int32_t get_AvailableBytesOut_6() const { return ___AvailableBytesOut_6; }
	inline int32_t* get_address_of_AvailableBytesOut_6() { return &___AvailableBytesOut_6; }
	inline void set_AvailableBytesOut_6(int32_t value)
	{
		___AvailableBytesOut_6 = value;
	}

	inline static int32_t get_offset_of_TotalBytesOut_7() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ___TotalBytesOut_7)); }
	inline int64_t get_TotalBytesOut_7() const { return ___TotalBytesOut_7; }
	inline int64_t* get_address_of_TotalBytesOut_7() { return &___TotalBytesOut_7; }
	inline void set_TotalBytesOut_7(int64_t value)
	{
		___TotalBytesOut_7 = value;
	}

	inline static int32_t get_offset_of_Message_8() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ___Message_8)); }
	inline String_t* get_Message_8() const { return ___Message_8; }
	inline String_t** get_address_of_Message_8() { return &___Message_8; }
	inline void set_Message_8(String_t* value)
	{
		___Message_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_8), (void*)value);
	}

	inline static int32_t get_offset_of_dstate_9() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ___dstate_9)); }
	inline DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * get_dstate_9() const { return ___dstate_9; }
	inline DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 ** get_address_of_dstate_9() { return &___dstate_9; }
	inline void set_dstate_9(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * value)
	{
		___dstate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dstate_9), (void*)value);
	}

	inline static int32_t get_offset_of_istate_10() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ___istate_10)); }
	inline InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * get_istate_10() const { return ___istate_10; }
	inline InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 ** get_address_of_istate_10() { return &___istate_10; }
	inline void set_istate_10(InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * value)
	{
		___istate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___istate_10), (void*)value);
	}

	inline static int32_t get_offset_of__Adler32_11() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ____Adler32_11)); }
	inline uint32_t get__Adler32_11() const { return ____Adler32_11; }
	inline uint32_t* get_address_of__Adler32_11() { return &____Adler32_11; }
	inline void set__Adler32_11(uint32_t value)
	{
		____Adler32_11 = value;
	}

	inline static int32_t get_offset_of_CompressLevel_12() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ___CompressLevel_12)); }
	inline int32_t get_CompressLevel_12() const { return ___CompressLevel_12; }
	inline int32_t* get_address_of_CompressLevel_12() { return &___CompressLevel_12; }
	inline void set_CompressLevel_12(int32_t value)
	{
		___CompressLevel_12 = value;
	}

	inline static int32_t get_offset_of_WindowBits_13() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ___WindowBits_13)); }
	inline int32_t get_WindowBits_13() const { return ___WindowBits_13; }
	inline int32_t* get_address_of_WindowBits_13() { return &___WindowBits_13; }
	inline void set_WindowBits_13(int32_t value)
	{
		___WindowBits_13 = value;
	}

	inline static int32_t get_offset_of_Strategy_14() { return static_cast<int32_t>(offsetof(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE, ___Strategy_14)); }
	inline int32_t get_Strategy_14() const { return ___Strategy_14; }
	inline int32_t* get_address_of_Strategy_14() { return &___Strategy_14; }
	inline void set_Strategy_14(int32_t value)
	{
		___Strategy_14 = value;
	}
};


// SharpCompress.Compressors.Deflate.ZlibException
struct ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F  : public Exception_t
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


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
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


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
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
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
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
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* m_Items[1];

public:
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, uint8_t ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method);

// System.Void SharpCompress.Compressors.Deflate.ZlibException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779 (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Int64 SharpCompress.Compressors.Deflate.CRC32::get_TotalBytesRead()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t CRC32_get_TotalBytesRead_mB5D5A4EA79AAA47C21D46066AAB0DFD2886A1367_inline (CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.CRC32::set_TotalBytesRead(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CRC32_set_TotalBytesRead_m6087B16415981109F677837E1A5925AF63D6C9FC_inline (CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// SharpCompress.Converters.DataConverter SharpCompress.Converters.DataConverter::get_Native()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * DataConverter_get_Native_m8B38C68D21EE2E48085D5E43E845ED81CBD74ABA_inline (const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void SharpCompress.Converters.DataConverter/SwapConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwapConverter__ctor_mC4FDF7DB60D85A5034626E78E8D6A8BE93AB0C8E (SwapConverter_t37AC82B5B2F004CD16C0F3E8CF13983A1005C522 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Converters.DataConverter/CopyConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CopyConverter__ctor_m3F47DF46FE4DC24C77E6E5578A7AB43E1F53163B (CopyConverter_t957E1D582319526872FEFF453718C07F7CC6B574 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager/Tree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree__ctor_m51B587944C1B99F45370722EDE89BF881FF58350 (Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * __this, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// SharpCompress.Compressors.Deflate.DeflateManager/Config SharpCompress.Compressors.Deflate.DeflateManager/Config::Lookup(SharpCompress.Compressors.Deflate.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * Config_Lookup_m39339926974537B1D0BAE95B739D86883BFA30B4 (int32_t ___level0, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::SetDeflater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_SetDeflater_m5949CD0A69CC1519A5369F6A863D4543F1816222 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::_InitializeBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeBlocks_m01EE8F6E4EF47341C75CACBCF4529278A1AD524C (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method);
// System.Boolean SharpCompress.Compressors.Deflate.DeflateManager::IsSmaller(System.Int16[],System.Int32,System.Int32,System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager_IsSmaller_mF48368921F1AE578BD7560322D5C6782268BFDDA (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___n1, int32_t ___m2, SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___depth3, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::ScanTree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_ScanTree_m9D101A67C266CAC4820902BE32E443520538F202 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___maxCode1, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager/Tree::build_tree(SharpCompress.Compressors.Deflate.DeflateManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tree_build_tree_m89B6508ED1B98D14D89E001E7ED41184CAC47965 (Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * __this, DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * ___s0, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::send_bits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___value0, int32_t ___length1, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::send_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_tree_m2F0F15EB97981A748AD1FBA702DFF0A0EE760553 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___max_code1, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::send_code(System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_code_mD123713AC2BC540F890BBBBC0AEA9BFBB134A841 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___c0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::bi_flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_flush_m3C813B8D7BA2F842ACC7FC55F2525C9D61B37918 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager/Tree::DistanceCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tree_DistanceCode_m8775714A15E69F689DA2B871B1C1A1F89B657D83 (int32_t ___dist0, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::bi_windup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_windup_mD7D84409E2B493B57667914EC4BB6A2BD892EA97 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::put_bytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_put_bytes_mDB73981CA19C0DF6D855DC5E72AE933D2C8F9F57 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_flush_block_m4650FF815429F1B2098D07F21F1160650C58C64D (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.ZlibCodec::flush_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec_flush_pending_m603D6CAA1E336BBC731C63B92F0103DDD309A023 (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::_fillWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__fillWindow_mC37EFA59D0B6CCCCAE58D2EC7A90A231352BF407 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::flush_block_only(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_flush_block_only_m15E48FA16BC9E92DF78FEE7669B167C3215345E7 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, bool ___eof0, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::copy_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_copy_block_m29AD096AFF764219A4FEB71D67DC57286ADCE260 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::set_data_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_set_data_type_m8A2DC4092533B92F613FDD4A9BC3CC3833E65B01 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::BuildBlTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_BuildBlTree_m59A0965407CEB16BB38B1A0A4EEDB3447A0F6A01 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_stored_block_mD30318735C4176CD5579464E81D299E42CC89CAE (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::send_compressed_block(System.Int16[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_compressed_block_mCDF460A2CCFC299808EC304989B3841B87E117F3 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___ltree0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dtree1, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::send_all_trees(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_all_trees_m89A031277053DC0ECEEA997C19A24C816ECB1CCE (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::read_buf(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_read_buf_mB4414E126598E0519086D57CD737885EB28B0061 (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, int32_t ___start1, int32_t ___size2, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::longest_match(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_longest_match_m84D860B4FDECCD4AEF4964B7A6D819064D4F5095 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___cur_match0, const RuntimeMethod* method);
// System.Boolean SharpCompress.Compressors.Deflate.DeflateManager::_tr_tally(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager__tr_tally_m8FF3703E35B68D847D9E7B7954E1D62EC9C0982F (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___dist0, int32_t ___lc1, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::Initialize(SharpCompress.Compressors.Deflate.ZlibCodec,SharpCompress.Compressors.Deflate.CompressionLevel,System.Int32,System.Int32,SharpCompress.Compressors.Deflate.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_mF1CEA930CBA0E816432B9F39493D12EADF13140A (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___codec0, int32_t ___level1, int32_t ___windowBits2, int32_t ___memLevel3, int32_t ___strategy4, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_Reset_m659BF60C83D54C39E38E0E5DF40E2F230D6B154A (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method);
// System.Boolean SharpCompress.Compressors.Deflate.DeflateManager::get_WantRfc1950HeaderBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_m8C9173A19AADA6593ECABA165C7E72EA2EEB8906_inline (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method);
// System.UInt32 SharpCompress.Compressors.Deflate.Adler::Adler32(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Adler_Adler32_mC43A8AA565B6B644F4FAC3378372FEC0D35CC83C (uint32_t ___adler0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::_InitializeTreeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeTreeData_m6E46ABBEF32C9196B1F69489D15A819BAA57BB47 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::_InitializeLazyMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeLazyMatch_mBB7117944A0EAA04BDD8D5B9072A681739DAFAF6 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager/CompressFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressFunc__ctor_m4BCA0F12F2161F35DA0E0DFBFE66474577F020A8 (CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// SharpCompress.Compressors.Deflate.DeflateManager/BlockState SharpCompress.Compressors.Deflate.DeflateManager/CompressFunc::Invoke(SharpCompress.Compressors.Deflate.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CompressFunc_Invoke_mFC9C2DA610A127441B8744E03413A410F2FAC3A4 (CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::_tr_align()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_align_m7EFF5750BDD2FB2B697B7CC11DFFD9DC0B733B75 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.SharedUtils::URShift(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SharedUtils_URShift_m7BB716EA3AB480F0A85A8BE031249FC373B4C3BB (int32_t ___number0, int32_t ___bits1, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.InfTree::initWorkArea(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree_initWorkArea_m891E4AAE5D4B981037C287B2E5678B7E52832003 (InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * __this, int32_t ___vsize0, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m0CBBE74E32F752697E4E9CB54088B58B48C6B4E5 (InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___d4, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___e5, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___t6, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m7, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp8, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hn9, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___v10, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.InflateCodes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes__ctor_m2B38E7CDE678551CBAC32587F0F71E8F09D09C72 (InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.InfTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__ctor_m94AA20A5291C693B6BBE845D603ABFA25AB89729 (InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * __this, const RuntimeMethod* method);
// System.UInt32 SharpCompress.Compressors.Deflate.InflateBlocks::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InflateBlocks_Reset_m20A9C3E2617933A4CCFF4A8598A629B6E11E1C64 (InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * __this, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.InflateBlocks::Flush(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9 (InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * __this, int32_t ___r0, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],SharpCompress.Compressors.Deflate.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_mCE1A419F62D4BBE86BB4BF2CE84058F0629FE629 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bl0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bd1, Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___tl2, Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___td3, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___z4, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.InflateCodes::Init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes_Init_mF8CA9661723C58C91BC091BC5F6371DB33C04A8E (InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td4, int32_t ___td_index5, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],SharpCompress.Compressors.Deflate.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_m1A3C2BF27262AA9283006D2B428BBF4989C96967 (InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___c0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bb1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tb2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp3, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___z4, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],SharpCompress.Compressors.Deflate.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m082A71C934CD06EDDDDB1D1D32D21EB64FA6F92A (InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___c2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bl3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bd4, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl5, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td6, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp7, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___z8, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.InflateCodes::Process(SharpCompress.Compressors.Deflate.InflateBlocks,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_Process_mD7047C71459875A65685D743AE6B6F31DBC2FF22 (InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * __this, InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * ___blocks0, int32_t ___r1, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.InflateCodes::InflateFast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,SharpCompress.Compressors.Deflate.InflateBlocks,SharpCompress.Compressors.Deflate.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_InflateFast_m4BCCA20A108CE0888A0226CCC5A7F12FB7E75D58 (InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td4, int32_t ___td_index5, InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * ___s6, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___z7, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.InflateManager::set_HandleRfc1950HeaderBytes(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InflateManager_set_HandleRfc1950HeaderBytes_m1433E981E63FBC780FDCB38941F163C9D8713A8E_inline (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean SharpCompress.Compressors.Deflate.InflateManager::get_HandleRfc1950HeaderBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InflateManager_get_HandleRfc1950HeaderBytes_m597E311EA470B8B491AC83A47F2E3FD672C4890D_inline (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.InflateBlocks::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks_Free_mD2060C09AD45AC6935F2A9A9DD8BC43697843145 (InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * __this, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.InflateManager::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_End_m3EA2A090979B5CD64B92454887C778F40D4012EE (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.InflateBlocks::.ctor(SharpCompress.Compressors.Deflate.ZlibCodec,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks__ctor_m5F917E3C54C5588199A37B6F9FE9799E7C22E2B9 (InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * __this, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___codec0, RuntimeObject * ___checkfn1, int32_t ___w2, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.InflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Reset_mE64E0D7CC3898CB87843C7159276622743614C3C (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.InflateBlocks::Process(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Process_mF0DEEFADE2587D1AD65BF9503E4AF29FD0027CA4 (InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * __this, int32_t ___r0, const RuntimeMethod* method);
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Void SharpCompress.IO.NonDisposingStream::set_ThrowOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NonDisposingStream_set_ThrowOnDispose_mD2526D3BBD9D31D1D96C6D7081809D06631E53C6_inline (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean SharpCompress.IO.NonDisposingStream::get_ThrowOnDispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NonDisposingStream_get_ThrowOnDispose_m49DA920DCF6CEC4C607D725CA2B4BE640280F420_inline (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IO.Stream SharpCompress.IO.NonDisposingStream::get_Stream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * NonDisposingStream_get_Stream_m2AEA34940605DD4BC49E8545F01509A7D5B2A5F1_inline (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.StaticTree::.ctor(System.Int16[],System.Int32[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTree__ctor_mFF870C238CB7D73758703558BB0715BEB3E0CE0A (StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___treeCodes0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___extraBits1, int32_t ___extraBase2, int32_t ___elems3, int32_t ___maxLength4, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.CRC32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32__ctor_m138BB7B74EE9393DDA7774CA3449F03AD8BB0B4C (CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.ZlibCodec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec__ctor_m9737041F37CDC490A82DB4CFB5FE038C7B22EBCB (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::InitializeInflate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_m9E09F2B5E3424762CE9E16B278421EAA05C485F3 (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, bool ___expectRfc1950Header0, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::InitializeDeflate(SharpCompress.Compressors.Deflate.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_m9F5C03C9F01C16E0021D6F836BB888C229760D58 (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, int32_t ___level0, bool ___wantRfc1950Header1, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.CRC32::SlurpBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32_SlurpBlock_mC20742277BBA9CAD29C907550CA4BD3A8369F26A (CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___block0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method);
// SharpCompress.Compressors.Deflate.ZlibCodec SharpCompress.Compressors.Deflate.ZlibBaseStream::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ZlibBaseStream_get_z_m9B6C7619DFF16C2D8FFBDE2671BE04DBA69A2C22 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method);
// System.Byte[] SharpCompress.Compressors.Deflate.ZlibBaseStream::get_workingBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ZlibBaseStream_get_workingBuffer_m31B85AA363694D870CACD4DBFE04BF494A77B29C (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method);
// System.Boolean SharpCompress.Compressors.Deflate.ZlibBaseStream::get__wantCompress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::Inflate(SharpCompress.Compressors.Deflate.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_Inflate_mFB3BCD376B03D35495C073F526F88DF90810ECE8 (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::Deflate(SharpCompress.Compressors.Deflate.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_Deflate_m40D189358D3052C7844300DC7936C5686BC94345 (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.CRC32::get_Crc32Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRC32_get_Crc32Result_m262513941A406031F4BEA995317CB1A375803DF0 (CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * __this, const RuntimeMethod* method);
// SharpCompress.Converters.DataConverter SharpCompress.Converters.DataConverter::get_LittleEndian()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * DataConverter_get_LittleEndian_mC7822C7BD3EAD97E9F5EF035FA36D5380DEB5F48 (const RuntimeMethod* method);
// System.Byte[] SharpCompress.Converters.DataConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DataConverter_GetBytes_m872C3D684F41B2AAEA26350EC9F57C1184220B18 (DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::EndDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndDeflate_m9818A1239F94F09CB3D6E15F87E39714ED34DE5E (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::EndInflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndInflate_mB50FF344614ED7D50858A3B50B9903F6F9E8821B (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mDC5C7A9933446223A84ED106AE3E949E644FB0BE (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.ZlibBaseStream::finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_finish_mF10E648654D2F058518FE90198A342DEC7F3A052 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.ZlibBaseStream::end()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_end_m65747FF0CC18B1EAC97637661672CD38742472ED (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778 (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, const RuntimeMethod*))List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
inline void List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, uint8_t, const RuntimeMethod*))List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_gshared)(__this, ___item0, method);
}
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, const RuntimeMethod*))List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_gshared)(__this, method);
}
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_AddSeconds_mCA0940A7E7C3ED40A86532349B7D4CB3A0F0DEAF (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, double ___value0, const RuntimeMethod* method);
// System.String SharpCompress.Compressors.Deflate.ZlibBaseStream::ReadZeroTerminatedString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZlibBaseStream_ReadZeroTerminatedString_m1C257B5E918E0304E55231BAAE737F1F62156E1F (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.ZlibBaseStream::_ReadAndValidateGzipHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibBaseStream__ReadAndValidateGzipHeader_mB5ADCE23F9E1A6A52751B305116B88E8292D7921 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773 (RuntimeArray * __this, int32_t ___dimension0, const RuntimeMethod* method);
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB (RuntimeArray * __this, int32_t ___dimension0, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::InitializeInflate(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_mAD21BB13A008C5E3AD87A63183208F242950E0A1 (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, int32_t ___windowBits0, bool ___expectRfc1950Header1, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.InflateManager::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateManager__ctor_m9F35E84AD6EEE2DE66DC4B3D467A3ADDF75F96DA (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, bool ___expectRfc1950HeaderBytes0, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.InflateManager::Initialize(SharpCompress.Compressors.Deflate.ZlibCodec,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Initialize_m200134FD3314E7A277A99C510F7206652B3C01C9 (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___codec0, int32_t ___w1, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.InflateManager::Inflate(SharpCompress.Compressors.Deflate.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Inflate_m988DA4158DE766A4DAC550E8CA8585E1FB510186 (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::_InternalInitializeDeflate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec__InternalInitializeDeflate_m6E0EE2A7E6AD52FF761E1D2D12B9F89CC4CEA2EF (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, bool ___wantRfc1950Header0, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__ctor_m0296E40C752AB9E641EA93ADDA0FC4F03BD12CAE (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::set_WantRfc1950HeaderBytes(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeflateManager_set_WantRfc1950HeaderBytes_m894E5832A4FB04A11C5DCB9ADC0A7790CEB08F53_inline (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::Initialize(SharpCompress.Compressors.Deflate.ZlibCodec,SharpCompress.Compressors.Deflate.CompressionLevel,System.Int32,SharpCompress.Compressors.Deflate.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_m7AC0246ABE3A13DC3EBBF8A4C3A6F9CBE3848230 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___codec0, int32_t ___level1, int32_t ___bits2, int32_t ___compressionStrategy3, const RuntimeMethod* method);
// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::Deflate(SharpCompress.Compressors.Deflate.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Deflate_m126CEB8805497536F7CFB1F2073840FEC382FD66 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___flush0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.ZlibStream::.ctor(System.IO.Stream,SharpCompress.Compressors.CompressionMode,SharpCompress.Compressors.Deflate.CompressionLevel,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream__ctor_m1C8C6A9B2A49B9630EC2DCFAA9CD76376D5AC684 (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, int32_t ___level2, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding3, const RuntimeMethod* method);
// System.Void SharpCompress.Compressors.Deflate.ZlibBaseStream::.ctor(System.IO.Stream,SharpCompress.Compressors.CompressionMode,SharpCompress.Compressors.Deflate.CompressionLevel,SharpCompress.Compressors.Deflate.ZlibStreamFlavor,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream__ctor_m2BC19E7942713EC395F38F59D6A5A913A2B59DA6 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___compressionMode1, int32_t ___level2, int32_t ___flavor3, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding4, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, const RuntimeMethod* method);
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
// System.UInt32 SharpCompress.Compressors.Deflate.Adler::Adler32(System.UInt32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Adler_Adler32_mC43A8AA565B6B644F4FAC3378372FEC0D35CC83C (uint32_t ___adler0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf1, int32_t ___index2, int32_t ___len3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B6_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buf1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		uint32_t L_1 = ___adler0;
		V_0 = ((int32_t)((int32_t)L_1&(int32_t)((int32_t)65535)));
		uint32_t L_2 = ___adler0;
		V_1 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_2>>((int32_t)16)))&(int32_t)((int32_t)65535)));
		goto IL_015e;
	}

IL_001d:
	{
		int32_t L_3 = ___len3;
		IL2CPP_RUNTIME_CLASS_INIT(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_StaticFields*)il2cpp_codegen_static_fields_for(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var))->get_NMAX_1();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		int32_t L_5 = ((Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_StaticFields*)il2cpp_codegen_static_fields_for(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var))->get_NMAX_1();
		G_B6_0 = L_5;
		goto IL_002d;
	}

IL_002c:
	{
		int32_t L_6 = ___len3;
		G_B6_0 = L_6;
	}

IL_002d:
	{
		V_2 = G_B6_0;
		int32_t L_7 = ___len3;
		int32_t L_8 = V_2;
		___len3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		goto IL_012d;
	}

IL_0038:
	{
		uint32_t L_9 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___buf1;
		int32_t L_11 = ___index2;
		int32_t L_12 = L_11;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_14));
		uint32_t L_15 = V_1;
		uint32_t L_16 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
		uint32_t L_17 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = ___buf1;
		int32_t L_19 = ___index2;
		int32_t L_20 = L_19;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		NullCheck(L_18);
		int32_t L_21 = L_20;
		uint8_t L_22 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_22));
		uint32_t L_23 = V_1;
		uint32_t L_24 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24));
		uint32_t L_25 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = ___buf1;
		int32_t L_27 = ___index2;
		int32_t L_28 = L_27;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		NullCheck(L_26);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_30));
		uint32_t L_31 = V_1;
		uint32_t L_32 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32));
		uint32_t L_33 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = ___buf1;
		int32_t L_35 = ___index2;
		int32_t L_36 = L_35;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		NullCheck(L_34);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_38));
		uint32_t L_39 = V_1;
		uint32_t L_40 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)L_40));
		uint32_t L_41 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = ___buf1;
		int32_t L_43 = ___index2;
		int32_t L_44 = L_43;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		NullCheck(L_42);
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_46));
		uint32_t L_47 = V_1;
		uint32_t L_48 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48));
		uint32_t L_49 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = ___buf1;
		int32_t L_51 = ___index2;
		int32_t L_52 = L_51;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		NullCheck(L_50);
		int32_t L_53 = L_52;
		uint8_t L_54 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_54));
		uint32_t L_55 = V_1;
		uint32_t L_56 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_56));
		uint32_t L_57 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_58 = ___buf1;
		int32_t L_59 = ___index2;
		int32_t L_60 = L_59;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
		NullCheck(L_58);
		int32_t L_61 = L_60;
		uint8_t L_62 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)L_62));
		uint32_t L_63 = V_1;
		uint32_t L_64 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)L_64));
		uint32_t L_65 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_66 = ___buf1;
		int32_t L_67 = ___index2;
		int32_t L_68 = L_67;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1));
		NullCheck(L_66);
		int32_t L_69 = L_68;
		uint8_t L_70 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_70));
		uint32_t L_71 = V_1;
		uint32_t L_72 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)L_72));
		uint32_t L_73 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_74 = ___buf1;
		int32_t L_75 = ___index2;
		int32_t L_76 = L_75;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		NullCheck(L_74);
		int32_t L_77 = L_76;
		uint8_t L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)L_78));
		uint32_t L_79 = V_1;
		uint32_t L_80 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)L_80));
		uint32_t L_81 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_82 = ___buf1;
		int32_t L_83 = ___index2;
		int32_t L_84 = L_83;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
		NullCheck(L_82);
		int32_t L_85 = L_84;
		uint8_t L_86 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)L_86));
		uint32_t L_87 = V_1;
		uint32_t L_88 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)L_88));
		uint32_t L_89 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_90 = ___buf1;
		int32_t L_91 = ___index2;
		int32_t L_92 = L_91;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
		NullCheck(L_90);
		int32_t L_93 = L_92;
		uint8_t L_94 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)L_94));
		uint32_t L_95 = V_1;
		uint32_t L_96 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)L_96));
		uint32_t L_97 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_98 = ___buf1;
		int32_t L_99 = ___index2;
		int32_t L_100 = L_99;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
		NullCheck(L_98);
		int32_t L_101 = L_100;
		uint8_t L_102 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)L_102));
		uint32_t L_103 = V_1;
		uint32_t L_104 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)L_104));
		uint32_t L_105 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_106 = ___buf1;
		int32_t L_107 = ___index2;
		int32_t L_108 = L_107;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
		NullCheck(L_106);
		int32_t L_109 = L_108;
		uint8_t L_110 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)L_110));
		uint32_t L_111 = V_1;
		uint32_t L_112 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)L_112));
		uint32_t L_113 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_114 = ___buf1;
		int32_t L_115 = ___index2;
		int32_t L_116 = L_115;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		NullCheck(L_114);
		int32_t L_117 = L_116;
		uint8_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)L_118));
		uint32_t L_119 = V_1;
		uint32_t L_120 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)L_120));
		uint32_t L_121 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_122 = ___buf1;
		int32_t L_123 = ___index2;
		int32_t L_124 = L_123;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)1));
		NullCheck(L_122);
		int32_t L_125 = L_124;
		uint8_t L_126 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)L_126));
		uint32_t L_127 = V_1;
		uint32_t L_128 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)L_128));
		uint32_t L_129 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_130 = ___buf1;
		int32_t L_131 = ___index2;
		int32_t L_132 = L_131;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)1));
		NullCheck(L_130);
		int32_t L_133 = L_132;
		uint8_t L_134 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)L_134));
		uint32_t L_135 = V_1;
		uint32_t L_136 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)L_136));
		int32_t L_137 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_137, (int32_t)((int32_t)16)));
	}

IL_012d:
	{
		int32_t L_138 = V_2;
		if ((((int32_t)L_138) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_139 = V_2;
		if (!L_139)
		{
			goto IL_014e;
		}
	}

IL_0138:
	{
		uint32_t L_140 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_141 = ___buf1;
		int32_t L_142 = ___index2;
		int32_t L_143 = L_142;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_143, (int32_t)1));
		NullCheck(L_141);
		int32_t L_144 = L_143;
		uint8_t L_145 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)L_145));
		uint32_t L_146 = V_1;
		uint32_t L_147 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)L_147));
		int32_t L_148 = V_2;
		int32_t L_149 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_148, (int32_t)1));
		V_2 = L_149;
		if (L_149)
		{
			goto IL_0138;
		}
	}

IL_014e:
	{
		uint32_t L_150 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		uint32_t L_151 = ((Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_StaticFields*)il2cpp_codegen_static_fields_for(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var))->get_BASE_0();
		V_0 = ((int32_t)((uint32_t)(int32_t)L_150%(uint32_t)(int32_t)L_151));
		uint32_t L_152 = V_1;
		uint32_t L_153 = ((Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_StaticFields*)il2cpp_codegen_static_fields_for(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var))->get_BASE_0();
		V_1 = ((int32_t)((uint32_t)(int32_t)L_152%(uint32_t)(int32_t)L_153));
	}

IL_015e:
	{
		int32_t L_154 = ___len3;
		if ((((int32_t)L_154) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		uint32_t L_155 = V_1;
		uint32_t L_156 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_155<<(int32_t)((int32_t)16)))|(int32_t)L_156));
	}
}
// System.Void SharpCompress.Compressors.Deflate.Adler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Adler__cctor_m32C185A4E74A3891D06BC49FAFDC6FB587C29908 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_StaticFields*)il2cpp_codegen_static_fields_for(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var))->set_BASE_0(((int32_t)65521));
		((Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_StaticFields*)il2cpp_codegen_static_fields_for(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var))->set_NMAX_1(((int32_t)5552));
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
// System.Void SharpCompress.Compressors.Deflate.CRC32::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32__cctor_m03011154CB285DB126D0F84CCBCDF28A508999E3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32_tBB356C0837066B0839B03775D7B40F613498E290_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		V_0 = ((int32_t)-306674912);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_0 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		((CRC32_tBB356C0837066B0839B03775D7B40F613498E290_StaticFields*)il2cpp_codegen_static_fields_for(CRC32_tBB356C0837066B0839B03775D7B40F613498E290_il2cpp_TypeInfo_var))->set_crc32Table_0(L_0);
		V_1 = 0;
		goto IL_0045;
	}

IL_0019:
	{
		uint32_t L_1 = V_1;
		V_3 = L_1;
		V_2 = 8;
		goto IL_0035;
	}

IL_001f:
	{
		uint32_t L_2 = V_3;
		if ((!(((uint32_t)((int32_t)((int32_t)L_2&(int32_t)1))) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		uint32_t L_3 = V_3;
		uint32_t L_4 = V_0;
		V_3 = ((int32_t)((int32_t)((int32_t)((uint32_t)L_3>>1))^(int32_t)L_4));
		goto IL_0031;
	}

IL_002d:
	{
		uint32_t L_5 = V_3;
		V_3 = ((int32_t)((uint32_t)L_5>>1));
	}

IL_0031:
	{
		uint32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
	}

IL_0035:
	{
		uint32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) <= ((uint32_t)0))))
		{
			goto IL_001f;
		}
	}
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_8 = ((CRC32_tBB356C0837066B0839B03775D7B40F613498E290_StaticFields*)il2cpp_codegen_static_fields_for(CRC32_tBB356C0837066B0839B03775D7B40F613498E290_il2cpp_TypeInfo_var))->get_crc32Table_0();
		uint32_t L_9 = V_1;
		uint32_t L_10 = V_3;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)L_10);
		uint32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0045:
	{
		uint32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) >= ((uint32_t)((int32_t)256)))))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}
}
// System.Int64 SharpCompress.Compressors.Deflate.CRC32::get_TotalBytesRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CRC32_get_TotalBytesRead_mB5D5A4EA79AAA47C21D46066AAB0DFD2886A1367 (CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CTotalBytesReadU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void SharpCompress.Compressors.Deflate.CRC32::set_TotalBytesRead(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32_set_TotalBytesRead_m6087B16415981109F677837E1A5925AF63D6C9FC (CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CTotalBytesReadU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.CRC32::get_Crc32Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRC32_get_Crc32Result_m262513941A406031F4BEA995317CB1A375803DF0 (CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = __this->get_runningCrc32Result_1();
		return ((~L_0));
	}
}
// System.Void SharpCompress.Compressors.Deflate.CRC32::SlurpBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32_SlurpBlock_mC20742277BBA9CAD29C907550CA4BD3A8369F26A (CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___block0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32_tBB356C0837066B0839B03775D7B40F613498E290_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___block0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_1 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4950B3758A114DEB554BDFD7BE0362389271888)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CRC32_SlurpBlock_mC20742277BBA9CAD29C907550CA4BD3A8369F26A_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_0012:
	{
		int32_t L_2 = ___offset1;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3));
		uint32_t L_4 = __this->get_runningCrc32Result_1();
		IL2CPP_RUNTIME_CLASS_INIT(CRC32_tBB356C0837066B0839B03775D7B40F613498E290_il2cpp_TypeInfo_var);
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_5 = ((CRC32_tBB356C0837066B0839B03775D7B40F613498E290_StaticFields*)il2cpp_codegen_static_fields_for(CRC32_tBB356C0837066B0839B03775D7B40F613498E290_il2cpp_TypeInfo_var))->get_crc32Table_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___block0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		uint32_t L_10 = __this->get_runningCrc32Result_1();
		NullCheck(L_5);
		int32_t L_11 = ((int32_t)((int32_t)L_9^(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)255)))));
		uint32_t L_12 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		__this->set_runningCrc32Result_1(((int32_t)((int32_t)((int32_t)((uint32_t)L_4>>8))^(int32_t)L_12)));
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___count2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_16;
		L_16 = CRC32_get_TotalBytesRead_mB5D5A4EA79AAA47C21D46066AAB0DFD2886A1367_inline(__this, /*hidden argument*/NULL);
		int32_t L_17 = ___count2;
		CRC32_set_TotalBytesRead_m6087B16415981109F677837E1A5925AF63D6C9FC_inline(__this, ((int64_t)il2cpp_codegen_add((int64_t)L_16, (int64_t)((int64_t)((int64_t)L_17)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.CRC32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRC32__ctor_m138BB7B74EE9393DDA7774CA3449F03AD8BB0B4C (CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * __this, const RuntimeMethod* method)
{
	{
		__this->set_runningCrc32Result_1((-1));
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
// System.Byte[] SharpCompress.Converters.DataConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* DataConverter_GetBytes_m872C3D684F41B2AAEA26350EC9F57C1184220B18 (DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = V_0;
		int32_t L_2 = ___value0;
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(5 /* System.Void SharpCompress.Converters.DataConverter::PutBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_1, 0, L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		return L_3;
	}
}
// SharpCompress.Converters.DataConverter SharpCompress.Converters.DataConverter::get_LittleEndian()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * DataConverter_get_LittleEndian_mC7822C7BD3EAD97E9F5EF035FA36D5380DEB5F48 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * L_1 = ((DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_StaticFields*)il2cpp_codegen_static_fields_for(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var))->get_SwapConv_0();
		return L_1;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * L_2;
		L_2 = DataConverter_get_Native_m8B38C68D21EE2E48085D5E43E845ED81CBD74ABA_inline(/*hidden argument*/NULL);
		return L_2;
	}
}
// SharpCompress.Converters.DataConverter SharpCompress.Converters.DataConverter::get_Native()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * DataConverter_get_Native_m8B38C68D21EE2E48085D5E43E845ED81CBD74ABA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * L_0 = ((DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_StaticFields*)il2cpp_codegen_static_fields_for(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var))->get_U3CNativeU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void SharpCompress.Converters.DataConverter::Check(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataConverter_Check_mCB14AC4E92C406C9789C8D018FC0E72B61FC0483 (DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dest0, int32_t ___destIdx1, int32_t ___size2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___dest0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral532F5429956965038FA49DA954E9A0D4D34B41A9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataConverter_Check_mCB14AC4E92C406C9789C8D018FC0E72B61FC0483_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___destIdx1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = ___destIdx1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___dest0;
		NullCheck(L_4);
		int32_t L_5 = ___size2;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)L_5)))))
		{
			goto IL_0025;
		}
	}

IL_001a:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF903893A2701734326457CD3C53F46438FA08D80)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataConverter_Check_mCB14AC4E92C406C9789C8D018FC0E72B61FC0483_RuntimeMethod_var)));
	}

IL_0025:
	{
		return;
	}
}
// System.Void SharpCompress.Converters.DataConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataConverter__ctor_m85B620AC7A88B21612B0D48BDEA5C5AEA2E0C265 (DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SharpCompress.Converters.DataConverter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataConverter__cctor_m4E067667C9B9B483FE007B5FDD7D2BCD5F9B6777 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CopyConverter_t957E1D582319526872FEFF453718C07F7CC6B574_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwapConverter_t37AC82B5B2F004CD16C0F3E8CF13983A1005C522_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SwapConverter_t37AC82B5B2F004CD16C0F3E8CF13983A1005C522 * L_0 = (SwapConverter_t37AC82B5B2F004CD16C0F3E8CF13983A1005C522 *)il2cpp_codegen_object_new(SwapConverter_t37AC82B5B2F004CD16C0F3E8CF13983A1005C522_il2cpp_TypeInfo_var);
		SwapConverter__ctor_mC4FDF7DB60D85A5034626E78E8D6A8BE93AB0C8E(L_0, /*hidden argument*/NULL);
		((DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_StaticFields*)il2cpp_codegen_static_fields_for(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var))->set_SwapConv_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_1 = ((BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var))->get_IsLittleEndian_0();
		((DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_StaticFields*)il2cpp_codegen_static_fields_for(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var))->set_IsLittleEndian_1(L_1);
		CopyConverter_t957E1D582319526872FEFF453718C07F7CC6B574 * L_2 = (CopyConverter_t957E1D582319526872FEFF453718C07F7CC6B574 *)il2cpp_codegen_object_new(CopyConverter_t957E1D582319526872FEFF453718C07F7CC6B574_il2cpp_TypeInfo_var);
		CopyConverter__ctor_m3F47DF46FE4DC24C77E6E5578A7AB43E1F53163B(L_2, /*hidden argument*/NULL);
		((DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_StaticFields*)il2cpp_codegen_static_fields_for(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var))->set_U3CNativeU3Ek__BackingField_2(L_2);
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
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__ctor_m0296E40C752AB9E641EA93ADDA0FC4F03BD12CAE (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_0 = (Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 *)il2cpp_codegen_object_new(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		Tree__ctor_m51B587944C1B99F45370722EDE89BF881FF58350(L_0, /*hidden argument*/NULL);
		__this->set_treeLiterals_38(L_0);
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_1 = (Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 *)il2cpp_codegen_object_new(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		Tree__ctor_m51B587944C1B99F45370722EDE89BF881FF58350(L_1, /*hidden argument*/NULL);
		__this->set_treeDistances_39(L_1);
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_2 = (Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 *)il2cpp_codegen_object_new(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		Tree__ctor_m51B587944C1B99F45370722EDE89BF881FF58350(L_2, /*hidden argument*/NULL);
		__this->set_treeBitLengths_40(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_3 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_MAX_BITS_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		__this->set_bl_count_41(L_4);
		int32_t L_5 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_L_CODES_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_5)), (int32_t)1)));
		__this->set_heap_42(L_6);
		int32_t L_7 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_L_CODES_5();
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_8 = (SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7*)SZArrayNew(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_7)), (int32_t)1)));
		__this->set_depth_45(L_8);
		__this->set_U3CWantRfc1950HeaderBytesU3Ek__BackingField_57((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		int32_t L_9 = ((DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var))->get_HEAP_SIZE_4();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2)));
		__this->set_dyn_ltree_35(L_10);
		int32_t L_11 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_D_CODES_2();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_12 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_11)), (int32_t)1)), (int32_t)2)));
		__this->set_dyn_dtree_36(L_12);
		int32_t L_13 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_BL_CODES_1();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_14 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_13)), (int32_t)1)), (int32_t)2)));
		__this->set_bl_tree_37(L_14);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::_InitializeLazyMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeLazyMatch_mBB7117944A0EAA04BDD8D5B9072A681739DAFAF6 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_w_size_12();
		__this->set_window_size_16(((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_0)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = __this->get_head_18();
		int32_t L_2 = __this->get_hash_size_20();
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_1, 0, L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_compressionLevel_33();
		IL2CPP_RUNTIME_CLASS_INIT(Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6_il2cpp_TypeInfo_var);
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_4;
		L_4 = Config_Lookup_m39339926974537B1D0BAE95B739D86883BFA30B4(L_3, /*hidden argument*/NULL);
		__this->set_config_25(L_4);
		DeflateManager_SetDeflater_m5949CD0A69CC1519A5369F6A863D4543F1816222(__this, /*hidden argument*/NULL);
		__this->set_strstart_29(0);
		__this->set_blockStart_24(0);
		__this->set_lookahead_31(0);
		int32_t L_5 = 2;
		V_0 = L_5;
		__this->set_prev_length_32(L_5);
		int32_t L_6 = V_0;
		__this->set_match_length_26(L_6);
		__this->set_match_available_28(0);
		__this->set_ins_h_19(0);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::_InitializeTreeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeTreeData_m6E46ABBEF32C9196B1F69489D15A819BAA57BB47 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_0 = __this->get_treeLiterals_38();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = __this->get_dyn_ltree_35();
		NullCheck(L_0);
		L_0->set_dyn_tree_6(L_1);
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_2 = __this->get_treeLiterals_38();
		IL2CPP_RUNTIME_CLASS_INIT(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var);
		StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * L_3 = ((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->get_Literals_3();
		NullCheck(L_2);
		L_2->set_staticTree_8(L_3);
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_4 = __this->get_treeDistances_39();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = __this->get_dyn_dtree_36();
		NullCheck(L_4);
		L_4->set_dyn_tree_6(L_5);
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_6 = __this->get_treeDistances_39();
		StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * L_7 = ((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->get_Distances_4();
		NullCheck(L_6);
		L_6->set_staticTree_8(L_7);
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_8 = __this->get_treeBitLengths_40();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_9 = __this->get_bl_tree_37();
		NullCheck(L_8);
		L_8->set_dyn_tree_6(L_9);
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_10 = __this->get_treeBitLengths_40();
		StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * L_11 = ((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->get_BitLengths_5();
		NullCheck(L_10);
		L_10->set_staticTree_8(L_11);
		__this->set_bi_buf_54((int16_t)0);
		__this->set_bi_valid_55(0);
		__this->set_last_eob_len_53(8);
		DeflateManager__InitializeBlocks_m01EE8F6E4EF47341C75CACBCF4529278A1AD524C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::_InitializeBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__InitializeBlocks_m01EE8F6E4EF47341C75CACBCF4529278A1AD524C (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		goto IL_0013;
	}

IL_0004:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = __this->get_dyn_ltree_35();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2))), (int16_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0013:
	{
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_4 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_L_CODES_5();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_0004;
		}
	}
	{
		V_1 = 0;
		goto IL_002e;
	}

IL_001f:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = __this->get_dyn_dtree_36();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2))), (int16_t)0);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_9 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_D_CODES_2();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_001f;
		}
	}
	{
		V_2 = 0;
		goto IL_0049;
	}

IL_003a:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = __this->get_bl_tree_37();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)2))), (int16_t)0);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_14 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_BL_CODES_1();
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003a;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = __this->get_dyn_ltree_35();
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)512)), (int16_t)1);
		int32_t L_16 = 0;
		V_3 = L_16;
		__this->set_static_len_51(L_16);
		int32_t L_17 = V_3;
		__this->set_opt_len_50(L_17);
		int32_t L_18 = 0;
		V_3 = L_18;
		__this->set_matches_52(L_18);
		int32_t L_19 = V_3;
		__this->set_last_lit_48(L_19);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::pqdownheap(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_pqdownheap_mFB4304A3A80F659C3E9C4857021922A9D70E6A07 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___k1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_heap_42();
		int32_t L_1 = ___k1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = ___k1;
		V_1 = ((int32_t)((int32_t)L_4<<(int32_t)1));
		goto IL_006a;
	}

IL_000f:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = __this->get_heap_len_43();
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_003c;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = ___tree0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_heap_42();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = __this->get_heap_42();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_16 = __this->get_depth_45();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = DeflateManager_IsSmaller_mF48368921F1AE578BD7560322D5C6782268BFDDA(L_7, L_11, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_003c:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = ___tree0;
		int32_t L_20 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = __this->get_heap_42();
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_25 = __this->get_depth_45();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = DeflateManager_IsSmaller_mF48368921F1AE578BD7560322D5C6782268BFDDA(L_19, L_20, L_24, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_0073;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = __this->get_heap_42();
		int32_t L_28 = ___k1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = __this->get_heap_42();
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		int32_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (int32_t)L_32);
		int32_t L_33 = V_1;
		___k1 = L_33;
		int32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34<<(int32_t)1));
	}

IL_006a:
	{
		int32_t L_35 = V_1;
		int32_t L_36 = __this->get_heap_len_43();
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_000f;
		}
	}

IL_0073:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = __this->get_heap_42();
		int32_t L_38 = ___k1;
		int32_t L_39 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)L_39);
		return;
	}
}
// System.Boolean SharpCompress.Compressors.Deflate.DeflateManager::IsSmaller(System.Int16[],System.Int32,System.Int32,System.SByte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager_IsSmaller_mF48368921F1AE578BD7560322D5C6782268BFDDA (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___n1, int32_t ___m2, SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___depth3, const RuntimeMethod* method)
{
	int16_t V_0 = 0;
	int16_t V_1 = 0;
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___tree0;
		int32_t L_1 = ___n1;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2));
		int16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___tree0;
		int32_t L_5 = ___m2;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)2));
		int16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		int16_t L_8 = V_0;
		int16_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0022;
		}
	}
	{
		int16_t L_10 = V_0;
		int16_t L_11 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0020;
		}
	}
	{
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_12 = ___depth3;
		int32_t L_13 = ___n1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_16 = ___depth3;
		int32_t L_17 = ___m2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		return (bool)((((int32_t)((((int32_t)L_15) > ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)0;
	}

IL_0022:
	{
		return (bool)1;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::ScanTree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_ScanTree_m9D101A67C266CAC4820902BE32E443520538F202 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___maxCode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_1 = (-1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___tree0;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int16_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_3 = L_2;
		V_4 = 0;
		V_5 = 7;
		V_6 = 4;
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
	}

IL_001c:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = ___tree0;
		int32_t L_5 = ___maxCode1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), (int32_t)2)), (int32_t)1))), (int16_t)((int32_t)32767));
		V_0 = 0;
		goto IL_0106;
	}

IL_0031:
	{
		int32_t L_6 = V_3;
		V_2 = L_6;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = ___tree0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), (int32_t)2)), (int32_t)1));
		int16_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		int32_t L_11 = V_4;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		V_4 = L_12;
		int32_t L_13 = V_5;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_0102;
		}
	}

IL_004f:
	{
		int32_t L_16 = V_4;
		int32_t L_17 = V_6;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_006f;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_18 = __this->get_bl_tree_37();
		int32_t L_19 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = __this->get_bl_tree_37();
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)2));
		int16_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = V_4;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2))), (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24)))));
		goto IL_00dc;
	}

IL_006f:
	{
		int32_t L_25 = V_2;
		if (!L_25)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_26 = V_2;
		int32_t L_27 = V_1;
		if ((((int32_t)L_26) == ((int32_t)L_27)))
		{
			goto IL_008a;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_28 = __this->get_bl_tree_37();
		int32_t L_29 = V_2;
		NullCheck(L_28);
		int16_t* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)2)))));
		int32_t L_31 = *((int16_t*)L_30);
		*((int16_t*)L_30) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1))));
	}

IL_008a:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_32 = __this->get_bl_tree_37();
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_33 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_REP_3_6_7();
		NullCheck(L_32);
		int16_t* L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_33, (int32_t)2)))));
		int32_t L_35 = *((int16_t*)L_34);
		*((int16_t*)L_34) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1))));
		goto IL_00dc;
	}

IL_00a4:
	{
		int32_t L_36 = V_4;
		if ((((int32_t)L_36) > ((int32_t)((int32_t)10))))
		{
			goto IL_00c4;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_37 = __this->get_bl_tree_37();
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_38 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_REPZ_3_10_8();
		NullCheck(L_37);
		int16_t* L_39 = ((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_38, (int32_t)2)))));
		int32_t L_40 = *((int16_t*)L_39);
		*((int16_t*)L_39) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1))));
		goto IL_00dc;
	}

IL_00c4:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_41 = __this->get_bl_tree_37();
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_42 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_REPZ_11_138_9();
		NullCheck(L_41);
		int16_t* L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)2)))));
		int32_t L_44 = *((int16_t*)L_43);
		*((int16_t*)L_43) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1))));
	}

IL_00dc:
	{
		V_4 = 0;
		int32_t L_45 = V_2;
		V_1 = L_45;
		int32_t L_46 = V_3;
		if (L_46)
		{
			goto IL_00f0;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
		goto IL_0102;
	}

IL_00f0:
	{
		int32_t L_47 = V_2;
		int32_t L_48 = V_3;
		if ((!(((uint32_t)L_47) == ((uint32_t)L_48))))
		{
			goto IL_00fc;
		}
	}
	{
		V_5 = 6;
		V_6 = 3;
		goto IL_0102;
	}

IL_00fc:
	{
		V_5 = 7;
		V_6 = 4;
	}

IL_0102:
	{
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_0106:
	{
		int32_t L_50 = V_0;
		int32_t L_51 = ___maxCode1;
		if ((((int32_t)L_50) <= ((int32_t)L_51)))
		{
			goto IL_0031;
		}
	}
	{
		return;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::BuildBlTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_BuildBlTree_m59A0965407CEB16BB38B1A0A4EEDB3447A0F6A01 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = __this->get_dyn_ltree_35();
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_1 = __this->get_treeLiterals_38();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_max_code_7();
		DeflateManager_ScanTree_m9D101A67C266CAC4820902BE32E443520538F202(__this, L_0, L_2, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = __this->get_dyn_dtree_36();
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_4 = __this->get_treeDistances_39();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_max_code_7();
		DeflateManager_ScanTree_m9D101A67C266CAC4820902BE32E443520538F202(__this, L_3, L_5, /*hidden argument*/NULL);
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_6 = __this->get_treeBitLengths_40();
		NullCheck(L_6);
		Tree_build_tree_m89B6508ED1B98D14D89E001E7ED41184CAC47965(L_6, __this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_7 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_BL_CODES_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		goto IL_005c;
	}

IL_0044:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = __this->get_bl_tree_37();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_9 = ((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->get_bl_order_1();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)2)), (int32_t)1));
		int16_t L_14 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
	}

IL_005c:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)3)))
		{
			goto IL_0044;
		}
	}

IL_0060:
	{
		int32_t L_17 = __this->get_opt_len_50();
		int32_t L_18 = V_0;
		__this->set_opt_len_50(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)3, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)))), (int32_t)5)), (int32_t)5)), (int32_t)4)))));
		int32_t L_19 = V_0;
		return L_19;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::send_all_trees(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_all_trees_m89A031277053DC0ECEEA997C19A24C816ECB1CCE (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___lcodes0, int32_t ___dcodes1, int32_t ___blcodes2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___lcodes0;
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)257))), 5, /*hidden argument*/NULL);
		int32_t L_1 = ___dcodes1;
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), 5, /*hidden argument*/NULL);
		int32_t L_2 = ___blcodes2;
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)4)), 4, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0043;
	}

IL_0026:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = __this->get_bl_tree_37();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_4 = ((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->get_bl_order_1();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)2)), (int32_t)1));
		int16_t L_9 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(__this, L_9, 3, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___blcodes2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0026;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_13 = __this->get_dyn_ltree_35();
		int32_t L_14 = ___lcodes0;
		DeflateManager_send_tree_m2F0F15EB97981A748AD1FBA702DFF0A0EE760553(__this, L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = __this->get_dyn_dtree_36();
		int32_t L_16 = ___dcodes1;
		DeflateManager_send_tree_m2F0F15EB97981A748AD1FBA702DFF0A0EE760553(__this, L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::send_tree(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_tree_m2F0F15EB97981A748AD1FBA702DFF0A0EE760553 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree0, int32_t ___max_code1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_1 = (-1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___tree0;
		NullCheck(L_0);
		int32_t L_1 = 1;
		int16_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_3 = L_2;
		V_4 = 0;
		V_5 = 7;
		V_6 = 4;
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
	}

IL_001c:
	{
		V_0 = 0;
		goto IL_0102;
	}

IL_0023:
	{
		int32_t L_4 = V_3;
		V_2 = L_4;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = ___tree0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), (int32_t)2)), (int32_t)1));
		int16_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		int32_t L_9 = V_4;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		V_4 = L_10;
		int32_t L_11 = V_5;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_00fe;
		}
	}

IL_0041:
	{
		int32_t L_14 = V_4;
		int32_t L_15 = V_6;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_005f;
		}
	}

IL_0047:
	{
		int32_t L_16 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_17 = __this->get_bl_tree_37();
		DeflateManager_send_code_mD123713AC2BC540F890BBBBC0AEA9BFBB134A841(__this, L_16, L_17, /*hidden argument*/NULL);
		int32_t L_18 = V_4;
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
		V_4 = L_19;
		if (L_19)
		{
			goto IL_0047;
		}
	}
	{
		goto IL_00d8;
	}

IL_005f:
	{
		int32_t L_20 = V_2;
		if (!L_20)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_23 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_24 = __this->get_bl_tree_37();
		DeflateManager_send_code_mD123713AC2BC540F890BBBBC0AEA9BFBB134A841(__this, L_23, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
	}

IL_0079:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_26 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_REP_3_6_7();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_27 = __this->get_bl_tree_37();
		DeflateManager_send_code_mD123713AC2BC540F890BBBBC0AEA9BFBB134A841(__this, L_26, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_4;
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)3)), 2, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_0097:
	{
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) > ((int32_t)((int32_t)10))))
		{
			goto IL_00bb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_30 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_REPZ_3_10_8();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_31 = __this->get_bl_tree_37();
		DeflateManager_send_code_mD123713AC2BC540F890BBBBC0AEA9BFBB134A841(__this, L_30, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_4;
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)3)), 3, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_00bb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_33 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_REPZ_11_138_9();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_34 = __this->get_bl_tree_37();
		DeflateManager_send_code_mD123713AC2BC540F890BBBBC0AEA9BFBB134A841(__this, L_33, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_4;
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)((int32_t)11))), 7, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		V_4 = 0;
		int32_t L_36 = V_2;
		V_1 = L_36;
		int32_t L_37 = V_3;
		if (L_37)
		{
			goto IL_00ec;
		}
	}
	{
		V_5 = ((int32_t)138);
		V_6 = 3;
		goto IL_00fe;
	}

IL_00ec:
	{
		int32_t L_38 = V_2;
		int32_t L_39 = V_3;
		if ((!(((uint32_t)L_38) == ((uint32_t)L_39))))
		{
			goto IL_00f8;
		}
	}
	{
		V_5 = 6;
		V_6 = 3;
		goto IL_00fe;
	}

IL_00f8:
	{
		V_5 = 7;
		V_6 = 4;
	}

IL_00fe:
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_0102:
	{
		int32_t L_41 = V_0;
		int32_t L_42 = ___max_code1;
		if ((((int32_t)L_41) <= ((int32_t)L_42)))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::put_bytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_put_bytes_mDB73981CA19C0DF6D855DC5E72AE933D2C8F9F57 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___p0, int32_t ___start1, int32_t ___len2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___p0;
		int32_t L_1 = ___start1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_pending_7();
		int32_t L_3 = __this->get_pendingCount_9();
		int32_t L_4 = ___len2;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_0, L_1, (RuntimeArray *)(RuntimeArray *)L_2, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_pendingCount_9();
		int32_t L_6 = ___len2;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6)));
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::send_code(System.Int32,System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_code_mD123713AC2BC540F890BBBBC0AEA9BFBB134A841 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___c0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___tree1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___c0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)2));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = ___tree1;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_5 = ___tree1;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int16_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(__this, ((int32_t)((int32_t)L_4&(int32_t)((int32_t)65535))), ((int32_t)((int32_t)L_8&(int32_t)((int32_t)65535))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::send_bits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___value0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___length1;
		V_0 = L_0;
		int32_t L_1 = __this->get_bi_valid_55();
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)16), (int32_t)L_2)))))
		{
			goto IL_0098;
		}
	}
	{
		int16_t L_3 = __this->get_bi_buf_54();
		int32_t L_4 = ___value0;
		int32_t L_5 = __this->get_bi_valid_55();
		__this->set_bi_buf_54(((int16_t)((int16_t)((int32_t)((int32_t)L_3|(int32_t)((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)31)))))&(int32_t)((int32_t)65535))))))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_pending_7();
		int32_t L_7 = __this->get_pendingCount_9();
		V_1 = L_7;
		int32_t L_8 = V_1;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_1;
		int16_t L_10 = __this->get_bi_buf_54();
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)((uint8_t)L_10)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_pending_7();
		int32_t L_12 = __this->get_pendingCount_9();
		V_1 = L_12;
		int32_t L_13 = V_1;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_1;
		int16_t L_15 = __this->get_bi_buf_54();
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_15>>(int32_t)8)))));
		int32_t L_16 = ___value0;
		int32_t L_17 = __this->get_bi_valid_55();
		__this->set_bi_buf_54(((int16_t)((int16_t)((int32_t)((uint32_t)L_16>>((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)16), (int32_t)L_17))&(int32_t)((int32_t)31))))))));
		int32_t L_18 = __this->get_bi_valid_55();
		int32_t L_19 = V_0;
		__this->set_bi_valid_55(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)((int32_t)16))))));
		return;
	}

IL_0098:
	{
		int16_t L_20 = __this->get_bi_buf_54();
		int32_t L_21 = ___value0;
		int32_t L_22 = __this->get_bi_valid_55();
		__this->set_bi_buf_54(((int16_t)((int16_t)((int32_t)((int32_t)L_20|(int32_t)((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21<<(int32_t)((int32_t)((int32_t)L_22&(int32_t)((int32_t)31)))))&(int32_t)((int32_t)65535))))))))));
		int32_t L_23 = __this->get_bi_valid_55();
		int32_t L_24 = V_0;
		__this->set_bi_valid_55(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24)));
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::_tr_align()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_align_m7EFF5750BDD2FB2B697B7CC11DFFD9DC0B733B75 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(__this, 2, 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->get_lengthAndLiteralsTreeCodes_0();
		DeflateManager_send_code_mD123713AC2BC540F890BBBBC0AEA9BFBB134A841(__this, ((int32_t)256), L_0, /*hidden argument*/NULL);
		DeflateManager_bi_flush_m3C813B8D7BA2F842ACC7FC55F2525C9D61B37918(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_last_eob_len_53();
		int32_t L_2 = __this->get_bi_valid_55();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_1)), (int32_t)((int32_t)10))), (int32_t)L_2))) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0052;
		}
	}
	{
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(__this, 2, 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = ((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->get_lengthAndLiteralsTreeCodes_0();
		DeflateManager_send_code_mD123713AC2BC540F890BBBBC0AEA9BFBB134A841(__this, ((int32_t)256), L_3, /*hidden argument*/NULL);
		DeflateManager_bi_flush_m3C813B8D7BA2F842ACC7FC55F2525C9D61B37918(__this, /*hidden argument*/NULL);
	}

IL_0052:
	{
		__this->set_last_eob_len_53(7);
		return;
	}
}
// System.Boolean SharpCompress.Compressors.Deflate.DeflateManager::_tr_tally(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager__tr_tally_m8FF3703E35B68D847D9E7B7954E1D62EC9C0982F (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___dist0, int32_t ___lc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_pending_7();
		int32_t L_1 = __this->get__distanceOffset_49();
		int32_t L_2 = __this->get_last_lit_48();
		int32_t L_3 = ___dist0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)2))))), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)L_3>>8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_pending_7();
		int32_t L_5 = __this->get__distanceOffset_49();
		int32_t L_6 = __this->get_last_lit_48();
		int32_t L_7 = ___dist0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)2)))), (int32_t)1))), (uint8_t)((int32_t)((uint8_t)L_7)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = __this->get_pending_7();
		int32_t L_9 = __this->get__lengthOffset_46();
		int32_t L_10 = __this->get_last_lit_48();
		int32_t L_11 = ___lc1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10))), (uint8_t)((int32_t)((uint8_t)L_11)));
		int32_t L_12 = __this->get_last_lit_48();
		__this->set_last_lit_48(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
		int32_t L_13 = ___dist0;
		if (L_13)
		{
			goto IL_0071;
		}
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_14 = __this->get_dyn_ltree_35();
		int32_t L_15 = ___lc1;
		NullCheck(L_14);
		int16_t* L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)))));
		int32_t L_17 = *((int16_t*)L_16);
		*((int16_t*)L_16) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1))));
		goto IL_00bf;
	}

IL_0071:
	{
		int32_t L_18 = __this->get_matches_52();
		__this->set_matches_52(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		int32_t L_19 = ___dist0;
		___dist0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = __this->get_dyn_ltree_35();
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_21 = ((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->get_LengthCode_3();
		int32_t L_22 = ___lc1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_25 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_LITERALS_3();
		NullCheck(L_20);
		int16_t* L_26 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25)), (int32_t)1)), (int32_t)2)))));
		int32_t L_27 = *((int16_t*)L_26);
		*((int16_t*)L_26) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1))));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_28 = __this->get_dyn_dtree_36();
		int32_t L_29 = ___dist0;
		int32_t L_30;
		L_30 = Tree_DistanceCode_m8775714A15E69F689DA2B871B1C1A1F89B657D83(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		int16_t* L_31 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)2)))));
		int32_t L_32 = *((int16_t*)L_31);
		*((int16_t*)L_31) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1))));
	}

IL_00bf:
	{
		int32_t L_33 = __this->get_last_lit_48();
		if (((int32_t)((int32_t)L_33&(int32_t)((int32_t)8191))))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_34 = __this->get_compressionLevel_33();
		if ((((int32_t)L_34) <= ((int32_t)2)))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_35 = __this->get_last_lit_48();
		V_0 = ((int32_t)((int32_t)L_35<<(int32_t)3));
		int32_t L_36 = __this->get_strstart_29();
		int32_t L_37 = __this->get_blockStart_24();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37));
		V_2 = 0;
		goto IL_0111;
	}

IL_00f1:
	{
		int32_t L_38 = V_0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_39 = __this->get_dyn_dtree_36();
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_40, (int32_t)2));
		int16_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = ((DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var))->get_ExtraDistanceBits_1();
		int32_t L_44 = V_2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int32_t)((int32_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_38)), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_42)), (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)5)), (int64_t)((int64_t)((int64_t)L_46))))))))));
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_0111:
	{
		int32_t L_48 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_49 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_D_CODES_2();
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_50 = V_0;
		V_0 = ((int32_t)((int32_t)L_50>>(int32_t)3));
		int32_t L_51 = __this->get_matches_52();
		int32_t L_52 = __this->get_last_lit_48();
		if ((((int32_t)L_51) >= ((int32_t)((int32_t)((int32_t)L_52/(int32_t)2)))))
		{
			goto IL_0135;
		}
	}
	{
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		if ((((int32_t)L_53) >= ((int32_t)((int32_t)((int32_t)L_54/(int32_t)2)))))
		{
			goto IL_0135;
		}
	}
	{
		return (bool)1;
	}

IL_0135:
	{
		int32_t L_55 = __this->get_last_lit_48();
		int32_t L_56 = __this->get_lit_bufsize_47();
		if ((((int32_t)L_55) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)1)))))
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_57 = __this->get_last_lit_48();
		int32_t L_58 = __this->get_lit_bufsize_47();
		return (bool)((((int32_t)L_57) == ((int32_t)L_58))? 1 : 0);
	}

IL_0154:
	{
		return (bool)1;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::send_compressed_block(System.Int16[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_send_compressed_block_mCDF460A2CCFC299808EC304989B3841B87E117F3 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___ltree0, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___dtree1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_2 = 0;
		int32_t L_0 = __this->get_last_lit_48();
		if (!L_0)
		{
			goto IL_00db;
		}
	}

IL_000d:
	{
		int32_t L_1 = __this->get__distanceOffset_49();
		int32_t L_2 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)2))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_pending_7();
		int32_t L_4 = V_5;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_pending_7();
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6<<(int32_t)8))&(int32_t)((int32_t)65280)))|(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)255)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_pending_7();
		int32_t L_12 = __this->get__lengthOffset_46();
		int32_t L_13 = V_2;
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int32_t)((int32_t)L_15&(int32_t)((int32_t)255)));
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
		int32_t L_17 = V_0;
		if (L_17)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_18 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = ___ltree0;
		DeflateManager_send_code_mD123713AC2BC540F890BBBBC0AEA9BFBB134A841(__this, L_18, L_19, /*hidden argument*/NULL);
		goto IL_00cf;
	}

IL_0064:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_20 = ((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->get_LengthCode_3();
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = L_23;
		int32_t L_24 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_25 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_LITERALS_3();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_26 = ___ltree0;
		DeflateManager_send_code_mD123713AC2BC540F890BBBBC0AEA9BFBB134A841(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25)), (int32_t)1)), L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = ((DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var))->get_ExtraLengthBits_0();
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_4 = L_30;
		int32_t L_31 = V_4;
		if (!L_31)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_32 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = ((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->get_LengthBase_4();
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_36));
		int32_t L_37 = V_1;
		int32_t L_38 = V_4;
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(__this, L_37, L_38, /*hidden argument*/NULL);
	}

IL_009c:
	{
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
		int32_t L_40 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = Tree_DistanceCode_m8775714A15E69F689DA2B871B1C1A1F89B657D83(L_40, /*hidden argument*/NULL);
		V_3 = L_41;
		int32_t L_42 = V_3;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_43 = ___dtree1;
		DeflateManager_send_code_mD123713AC2BC540F890BBBBC0AEA9BFBB134A841(__this, L_42, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = ((DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var))->get_ExtraDistanceBits_1();
		int32_t L_45 = V_3;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_4 = L_47;
		int32_t L_48 = V_4;
		if (!L_48)
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_49 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = ((Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_StaticFields*)il2cpp_codegen_static_fields_for(Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6_il2cpp_TypeInfo_var))->get_DistanceBase_5();
		int32_t L_51 = V_3;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		int32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)L_53));
		int32_t L_54 = V_0;
		int32_t L_55 = V_4;
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(__this, L_54, L_55, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		int32_t L_56 = V_2;
		int32_t L_57 = __this->get_last_lit_48();
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_000d;
		}
	}

IL_00db:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_58 = ___ltree0;
		DeflateManager_send_code_mD123713AC2BC540F890BBBBC0AEA9BFBB134A841(__this, ((int32_t)256), L_58, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_59 = ___ltree0;
		NullCheck(L_59);
		int32_t L_60 = ((int32_t)513);
		int16_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		__this->set_last_eob_len_53(L_61);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::set_data_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_set_data_type_m8A2DC4092533B92F613FDD4A9BC3CC3833E65B01 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B11_0 = NULL;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B12_1 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		goto IL_0019;
	}

IL_0008:
	{
		int32_t L_0 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = __this->get_dyn_ltree_35();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)2));
		int16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_4));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0019:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)7)))
		{
			goto IL_0008;
		}
	}
	{
		goto IL_0030;
	}

IL_001f:
	{
		int32_t L_7 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_8 = __this->get_dyn_ltree_35();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2));
		int16_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_11));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)128))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_004b;
	}

IL_003a:
	{
		int32_t L_14 = V_2;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = __this->get_dyn_ltree_35();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)2));
		int16_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_18));
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_21 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_LITERALS_3();
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_1;
		G_B10_0 = __this;
		if ((((int32_t)L_22) > ((int32_t)((int32_t)((int32_t)L_23>>(int32_t)2)))))
		{
			G_B11_0 = __this;
			goto IL_005d;
		}
	}
	{
		G_B12_0 = 1;
		G_B12_1 = G_B10_0;
		goto IL_005e;
	}

IL_005d:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_005e:
	{
		NullCheck(G_B12_1);
		G_B12_1->set_data_type_10(((int8_t)((int8_t)G_B12_0)));
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::bi_flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_flush_m3C813B8D7BA2F842ACC7FC55F2525C9D61B37918 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bi_valid_55();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0059;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_pending_7();
		int32_t L_2 = __this->get_pendingCount_9();
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = V_0;
		int16_t L_5 = __this->get_bi_buf_54();
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)((uint8_t)L_5)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_pending_7();
		int32_t L_7 = __this->get_pendingCount_9();
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_0;
		int16_t L_10 = __this->get_bi_buf_54();
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_10>>(int32_t)8)))));
		__this->set_bi_buf_54((int16_t)0);
		__this->set_bi_valid_55(0);
		return;
	}

IL_0059:
	{
		int32_t L_11 = __this->get_bi_valid_55();
		if ((((int32_t)L_11) < ((int32_t)8)))
		{
			goto IL_009e;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_pending_7();
		int32_t L_13 = __this->get_pendingCount_9();
		V_0 = L_13;
		int32_t L_14 = V_0;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		int32_t L_15 = V_0;
		int16_t L_16 = __this->get_bi_buf_54();
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)((uint8_t)L_16)));
		int16_t L_17 = __this->get_bi_buf_54();
		__this->set_bi_buf_54(((int16_t)((int16_t)((int32_t)((int32_t)L_17>>(int32_t)8)))));
		int32_t L_18 = __this->get_bi_valid_55();
		__this->set_bi_valid_55(((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)8)));
	}

IL_009e:
	{
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::bi_windup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_bi_windup_mD7D84409E2B493B57667914EC4BB6A2BD892EA97 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_bi_valid_55();
		if ((((int32_t)L_0) <= ((int32_t)8)))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_pending_7();
		int32_t L_2 = __this->get_pendingCount_9();
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = V_0;
		int16_t L_5 = __this->get_bi_buf_54();
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)((uint8_t)L_5)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_pending_7();
		int32_t L_7 = __this->get_pendingCount_9();
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_0;
		int16_t L_10 = __this->get_bi_buf_54();
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_10>>(int32_t)8)))));
		goto IL_0073;
	}

IL_004b:
	{
		int32_t L_11 = __this->get_bi_valid_55();
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_pending_7();
		int32_t L_13 = __this->get_pendingCount_9();
		V_0 = L_13;
		int32_t L_14 = V_0;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		int32_t L_15 = V_0;
		int16_t L_16 = __this->get_bi_buf_54();
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)((int32_t)((uint8_t)L_16)));
	}

IL_0073:
	{
		__this->set_bi_buf_54((int16_t)0);
		__this->set_bi_valid_55(0);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::copy_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_copy_block_m29AD096AFF764219A4FEB71D67DC57286ADCE260 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___buf0, int32_t ___len1, bool ___header2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		DeflateManager_bi_windup_mD7D84409E2B493B57667914EC4BB6A2BD892EA97(__this, /*hidden argument*/NULL);
		__this->set_last_eob_len_53(8);
		bool L_0 = ___header2;
		if (!L_0)
		{
			goto IL_007e;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_pending_7();
		int32_t L_2 = __this->get_pendingCount_9();
		V_0 = L_2;
		int32_t L_3 = V_0;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = V_0;
		int32_t L_5 = ___len1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)((uint8_t)L_5)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_pending_7();
		int32_t L_7 = __this->get_pendingCount_9();
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		int32_t L_9 = V_0;
		int32_t L_10 = ___len1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_10>>(int32_t)8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_pending_7();
		int32_t L_12 = __this->get_pendingCount_9();
		V_0 = L_12;
		int32_t L_13 = V_0;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_0;
		int32_t L_15 = ___len1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)((uint8_t)((~L_15)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = __this->get_pending_7();
		int32_t L_17 = __this->get_pendingCount_9();
		V_0 = L_17;
		int32_t L_18 = V_0;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		int32_t L_19 = V_0;
		int32_t L_20 = ___len1;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((~L_20))>>(int32_t)8)))));
	}

IL_007e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = __this->get_window_15();
		int32_t L_22 = ___buf0;
		int32_t L_23 = ___len1;
		DeflateManager_put_bytes_mDB73981CA19C0DF6D855DC5E72AE933D2C8F9F57(__this, L_21, L_22, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::flush_block_only(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_flush_block_only_m15E48FA16BC9E92DF78FEE7669B167C3215345E7 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, bool ___eof0, const RuntimeMethod* method)
{
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B2_0 = NULL;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B3_1 = NULL;
	{
		int32_t L_0 = __this->get_blockStart_24();
		G_B1_0 = __this;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_000d:
	{
		int32_t L_1 = __this->get_blockStart_24();
		G_B3_0 = L_1;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		int32_t L_2 = __this->get_strstart_29();
		int32_t L_3 = __this->get_blockStart_24();
		bool L_4 = ___eof0;
		NullCheck(G_B3_1);
		DeflateManager__tr_flush_block_m4650FF815429F1B2098D07F21F1160650C58C64D(G_B3_1, G_B3_0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)), L_4, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_strstart_29();
		__this->set_blockStart_24(L_5);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_6 = __this->get__codec_5();
		NullCheck(L_6);
		ZlibCodec_flush_pending_m603D6CAA1E336BBC731C63B92F0103DDD309A023(L_6, /*hidden argument*/NULL);
		return;
	}
}
// SharpCompress.Compressors.Deflate.DeflateManager/BlockState SharpCompress.Compressors.Deflate.DeflateManager::DeflateNone(SharpCompress.Compressors.Deflate.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_DeflateNone_m2F055D727F66C27E3E8E549E09CA7EBBEC8A4BD8 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)65535);
		int32_t L_0 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_pending_7();
		NullCheck(L_1);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)5)))))
		{
			goto IL_001e;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_pending_7();
		NullCheck(L_2);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)5));
	}

IL_001e:
	{
		int32_t L_3 = __this->get_lookahead_31();
		if ((((int32_t)L_3) > ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		DeflateManager__fillWindow_mC37EFA59D0B6CCCCAE58D2EC7A90A231352BF407(__this, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_lookahead_31();
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_5 = ___flush0;
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		return (int32_t)(0);
	}

IL_003a:
	{
		int32_t L_6 = __this->get_lookahead_31();
		if (!L_6)
		{
			goto IL_00db;
		}
	}

IL_0045:
	{
		int32_t L_7 = __this->get_strstart_29();
		int32_t L_8 = __this->get_lookahead_31();
		__this->set_strstart_29(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		__this->set_lookahead_31(0);
		int32_t L_9 = __this->get_blockStart_24();
		int32_t L_10 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10));
		int32_t L_11 = __this->get_strstart_29();
		if (!L_11)
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_12 = __this->get_strstart_29();
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_00a4;
		}
	}

IL_0079:
	{
		int32_t L_14 = __this->get_strstart_29();
		int32_t L_15 = V_1;
		__this->set_lookahead_31(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)));
		int32_t L_16 = V_1;
		__this->set_strstart_29(L_16);
		DeflateManager_flush_block_only_m15E48FA16BC9E92DF78FEE7669B167C3215345E7(__this, (bool)0, /*hidden argument*/NULL);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_17 = __this->get__codec_5();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_AvailableBytesOut_6();
		if (L_18)
		{
			goto IL_00a4;
		}
	}
	{
		return (int32_t)(0);
	}

IL_00a4:
	{
		int32_t L_19 = __this->get_strstart_29();
		int32_t L_20 = __this->get_blockStart_24();
		int32_t L_21 = __this->get_w_size_12();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20))) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)((int32_t)262))))))
		{
			goto IL_001e;
		}
	}
	{
		DeflateManager_flush_block_only_m15E48FA16BC9E92DF78FEE7669B167C3215345E7(__this, (bool)0, /*hidden argument*/NULL);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_22 = __this->get__codec_5();
		NullCheck(L_22);
		int32_t L_23 = L_22->get_AvailableBytesOut_6();
		if (L_23)
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(0);
	}

IL_00db:
	{
		int32_t L_24 = ___flush0;
		DeflateManager_flush_block_only_m15E48FA16BC9E92DF78FEE7669B167C3215345E7(__this, (bool)((((int32_t)L_24) == ((int32_t)4))? 1 : 0), /*hidden argument*/NULL);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_25 = __this->get__codec_5();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_AvailableBytesOut_6();
		if (L_26)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_27 = ___flush0;
		if ((((int32_t)L_27) == ((int32_t)4)))
		{
			goto IL_00f8;
		}
	}
	{
		return (int32_t)(0);
	}

IL_00f8:
	{
		return (int32_t)(2);
	}

IL_00fa:
	{
		int32_t L_28 = ___flush0;
		if ((((int32_t)L_28) == ((int32_t)4)))
		{
			goto IL_0100;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0100:
	{
		return (int32_t)(3);
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::_tr_stored_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_stored_block_mD30318735C4176CD5579464E81D299E42CC89CAE (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method)
{
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B2_0 = NULL;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B3_1 = NULL;
	{
		bool L_0 = ___eof2;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0008;
	}

IL_0007:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0008:
	{
		NullCheck(G_B3_1);
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(G_B3_1, G_B3_0, 3, /*hidden argument*/NULL);
		int32_t L_1 = ___buf0;
		int32_t L_2 = ___stored_len1;
		DeflateManager_copy_block_m29AD096AFF764219A4FEB71D67DC57286ADCE260(__this, L_1, L_2, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::_tr_flush_block(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__tr_flush_block_m4650FF815429F1B2098D07F21F1160650C58C64D (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___buf0, int32_t ___stored_len1, bool ___eof2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B12_0 = 0;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B12_1 = NULL;
	int32_t G_B11_0 = 0;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B11_1 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B13_2 = NULL;
	int32_t G_B16_0 = 0;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B16_1 = NULL;
	int32_t G_B15_0 = 0;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B15_1 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B17_2 = NULL;
	{
		V_2 = 0;
		int32_t L_0 = __this->get_compressionLevel_33();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		int8_t L_1 = __this->get_data_type_10();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}
	{
		DeflateManager_set_data_type_m8A2DC4092533B92F613FDD4A9BC3CC3833E65B01(__this, /*hidden argument*/NULL);
	}

IL_001a:
	{
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_2 = __this->get_treeLiterals_38();
		NullCheck(L_2);
		Tree_build_tree_m89B6508ED1B98D14D89E001E7ED41184CAC47965(L_2, __this, /*hidden argument*/NULL);
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_3 = __this->get_treeDistances_39();
		NullCheck(L_3);
		Tree_build_tree_m89B6508ED1B98D14D89E001E7ED41184CAC47965(L_3, __this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = DeflateManager_BuildBlTree_m59A0965407CEB16BB38B1A0A4EEDB3447A0F6A01(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int32_t L_5 = __this->get_opt_len_50();
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)3)), (int32_t)7))>>(int32_t)3));
		int32_t L_6 = __this->get_static_len_51();
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)3)), (int32_t)7))>>(int32_t)3));
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9 = V_1;
		V_0 = L_9;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_10 = ___stored_len1;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)5));
		V_1 = L_11;
		V_0 = L_11;
	}

IL_0061:
	{
		int32_t L_12 = ___stored_len1;
		int32_t L_13 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)4))) > ((int32_t)L_13)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_14 = ___buf0;
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_15 = ___buf0;
		int32_t L_16 = ___stored_len1;
		bool L_17 = ___eof2;
		DeflateManager__tr_stored_block_mD30318735C4176CD5579464E81D299E42CC89CAE(__this, L_15, L_16, L_17, /*hidden argument*/NULL);
		goto IL_00e1;
	}

IL_0076:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_009c;
		}
	}
	{
		bool L_20 = ___eof2;
		G_B11_0 = 2;
		G_B11_1 = __this;
		if (L_20)
		{
			G_B12_0 = 2;
			G_B12_1 = __this;
			goto IL_0082;
		}
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_0083;
	}

IL_0082:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_0083:
	{
		NullCheck(G_B13_2);
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(G_B13_2, ((int32_t)il2cpp_codegen_add((int32_t)G_B13_1, (int32_t)G_B13_0)), 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_21 = ((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->get_lengthAndLiteralsTreeCodes_0();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_22 = ((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->get_distTreeCodes_1();
		DeflateManager_send_compressed_block_mCDF460A2CCFC299808EC304989B3841B87E117F3(__this, L_21, L_22, /*hidden argument*/NULL);
		goto IL_00e1;
	}

IL_009c:
	{
		bool L_23 = ___eof2;
		G_B15_0 = 4;
		G_B15_1 = __this;
		if (L_23)
		{
			G_B16_0 = 4;
			G_B16_1 = __this;
			goto IL_00a4;
		}
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B17_0 = 1;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
	}

IL_00a5:
	{
		NullCheck(G_B17_2);
		DeflateManager_send_bits_m0541346712CB5A9FC549078DE0F02DFF4505AAA2(G_B17_2, ((int32_t)il2cpp_codegen_add((int32_t)G_B17_1, (int32_t)G_B17_0)), 3, /*hidden argument*/NULL);
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_24 = __this->get_treeLiterals_38();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_max_code_7();
		Tree_t7D83CAA4CB9A85B292AE0AFBCAE924B8E82A61E6 * L_26 = __this->get_treeDistances_39();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_max_code_7();
		int32_t L_28 = V_2;
		DeflateManager_send_all_trees_m89A031277053DC0ECEEA997C19A24C816ECB1CCE(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)), /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_29 = __this->get_dyn_ltree_35();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_30 = __this->get_dyn_dtree_36();
		DeflateManager_send_compressed_block_mCDF460A2CCFC299808EC304989B3841B87E117F3(__this, L_29, L_30, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		DeflateManager__InitializeBlocks_m01EE8F6E4EF47341C75CACBCF4529278A1AD524C(__this, /*hidden argument*/NULL);
		bool L_31 = ___eof2;
		if (!L_31)
		{
			goto IL_00f0;
		}
	}
	{
		DeflateManager_bi_windup_mD7D84409E2B493B57667914EC4BB6A2BD892EA97(__this, /*hidden argument*/NULL);
	}

IL_00f0:
	{
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::_fillWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__fillWindow_mC37EFA59D0B6CCCCAE58D2EC7A90A231352BF407 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B10_0 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B10_1 = NULL;
	int32_t G_B9_0 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B11_2 = NULL;
	int32_t G_B15_0 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B15_1 = NULL;
	int32_t G_B14_0 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B14_1 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* G_B16_2 = NULL;

IL_0000:
	{
		int32_t L_0 = __this->get_window_size_16();
		int32_t L_1 = __this->get_lookahead_31();
		int32_t L_2 = __this->get_strstart_29();
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2));
		int32_t L_3 = V_3;
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_4 = __this->get_strstart_29();
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = __this->get_lookahead_31();
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = __this->get_w_size_12();
		V_3 = L_6;
		goto IL_013f;
	}

IL_0034:
	{
		int32_t L_7 = V_3;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		goto IL_013f;
	}

IL_0041:
	{
		int32_t L_9 = __this->get_strstart_29();
		int32_t L_10 = __this->get_w_size_12();
		int32_t L_11 = __this->get_w_size_12();
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)), (int32_t)((int32_t)262))))))
		{
			goto IL_013f;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_window_15();
		int32_t L_13 = __this->get_w_size_12();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_window_15();
		int32_t L_15 = __this->get_w_size_12();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_12, L_13, (RuntimeArray *)(RuntimeArray *)L_14, 0, L_15, /*hidden argument*/NULL);
		int32_t L_16 = __this->get_match_start_30();
		int32_t L_17 = __this->get_w_size_12();
		__this->set_match_start_30(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)));
		int32_t L_18 = __this->get_strstart_29();
		int32_t L_19 = __this->get_w_size_12();
		__this->set_strstart_29(((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19)));
		int32_t L_20 = __this->get_blockStart_24();
		int32_t L_21 = __this->get_w_size_12();
		__this->set_blockStart_24(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)));
		int32_t L_22 = __this->get_hash_size_20();
		V_0 = L_22;
		int32_t L_23 = V_0;
		V_2 = L_23;
	}

IL_00bf:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_24 = __this->get_head_18();
		int32_t L_25 = V_2;
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
		V_2 = L_26;
		NullCheck(L_24);
		int32_t L_27 = L_26;
		int16_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_1 = ((int32_t)((int32_t)L_28&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_29 = __this->get_head_18();
		int32_t L_30 = V_2;
		int32_t L_31 = V_1;
		int32_t L_32 = __this->get_w_size_12();
		G_B9_0 = L_30;
		G_B9_1 = L_29;
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			G_B10_0 = L_30;
			G_B10_1 = L_29;
			goto IL_00e5;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_00ed;
	}

IL_00e5:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = __this->get_w_size_12();
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_34));
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_00ed:
	{
		NullCheck(G_B11_2);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (int16_t)((int16_t)((int16_t)G_B11_0)));
		int32_t L_35 = V_0;
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1));
		V_0 = L_36;
		if (L_36)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_37 = __this->get_w_size_12();
		V_0 = L_37;
		int32_t L_38 = V_0;
		V_2 = L_38;
	}

IL_00ff:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_39 = __this->get_prev_17();
		int32_t L_40 = V_2;
		int32_t L_41 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1));
		V_2 = L_41;
		NullCheck(L_39);
		int32_t L_42 = L_41;
		int16_t L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_1 = ((int32_t)((int32_t)L_43&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_44 = __this->get_prev_17();
		int32_t L_45 = V_2;
		int32_t L_46 = V_1;
		int32_t L_47 = __this->get_w_size_12();
		G_B14_0 = L_45;
		G_B14_1 = L_44;
		if ((((int32_t)L_46) >= ((int32_t)L_47)))
		{
			G_B15_0 = L_45;
			G_B15_1 = L_44;
			goto IL_0125;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_012d;
	}

IL_0125:
	{
		int32_t L_48 = V_1;
		int32_t L_49 = __this->get_w_size_12();
		G_B16_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)L_49));
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_012d:
	{
		NullCheck(G_B16_2);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (int16_t)((int16_t)((int16_t)G_B16_0)));
		int32_t L_50 = V_0;
		int32_t L_51 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)1));
		V_0 = L_51;
		if (L_51)
		{
			goto IL_00ff;
		}
	}
	{
		int32_t L_52 = V_3;
		int32_t L_53 = __this->get_w_size_12();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)L_53));
	}

IL_013f:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_54 = __this->get__codec_5();
		NullCheck(L_54);
		int32_t L_55 = L_54->get_AvailableBytesIn_2();
		if (L_55)
		{
			goto IL_014d;
		}
	}
	{
		return;
	}

IL_014d:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_56 = __this->get__codec_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_57 = __this->get_window_15();
		int32_t L_58 = __this->get_strstart_29();
		int32_t L_59 = __this->get_lookahead_31();
		int32_t L_60 = V_3;
		NullCheck(L_56);
		int32_t L_61;
		L_61 = ZlibCodec_read_buf_mB4414E126598E0519086D57CD737885EB28B0061(L_56, L_57, ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)L_59)), L_60, /*hidden argument*/NULL);
		V_0 = L_61;
		int32_t L_62 = __this->get_lookahead_31();
		int32_t L_63 = V_0;
		__this->set_lookahead_31(((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)L_63)));
		int32_t L_64 = __this->get_lookahead_31();
		if ((((int32_t)L_64) < ((int32_t)3)))
		{
			goto IL_01d0;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_65 = __this->get_window_15();
		int32_t L_66 = __this->get_strstart_29();
		NullCheck(L_65);
		int32_t L_67 = L_66;
		uint8_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		__this->set_ins_h_19(((int32_t)((int32_t)L_68&(int32_t)((int32_t)255))));
		int32_t L_69 = __this->get_ins_h_19();
		int32_t L_70 = __this->get_hash_shift_23();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_71 = __this->get_window_15();
		int32_t L_72 = __this->get_strstart_29();
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		uint8_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75 = __this->get_hash_mask_22();
		__this->set_ins_h_19(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_69<<(int32_t)((int32_t)((int32_t)L_70&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_74&(int32_t)((int32_t)255)))))&(int32_t)L_75)));
	}

IL_01d0:
	{
		int32_t L_76 = __this->get_lookahead_31();
		if ((((int32_t)L_76) >= ((int32_t)((int32_t)262))))
		{
			goto IL_01ed;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_77 = __this->get__codec_5();
		NullCheck(L_77);
		int32_t L_78 = L_77->get_AvailableBytesIn_2();
		if (L_78)
		{
			goto IL_0000;
		}
	}

IL_01ed:
	{
		return;
	}
}
// SharpCompress.Compressors.Deflate.DeflateManager/BlockState SharpCompress.Compressors.Deflate.DeflateManager::DeflateFast(SharpCompress.Compressors.Deflate.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_DeflateFast_mA1AAAC7F7E2B7FDB9C7ADE3A37DBC47DEF4616A1 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = __this->get_lookahead_31();
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)262))))
		{
			goto IL_0032;
		}
	}
	{
		DeflateManager__fillWindow_mC37EFA59D0B6CCCCAE58D2EC7A90A231352BF407(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_lookahead_31();
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)262))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = ___flush0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0027:
	{
		int32_t L_3 = __this->get_lookahead_31();
		if (!L_3)
		{
			goto IL_02c9;
		}
	}

IL_0032:
	{
		int32_t L_4 = __this->get_lookahead_31();
		if ((((int32_t)L_4) < ((int32_t)3)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_5 = __this->get_ins_h_19();
		int32_t L_6 = __this->get_hash_shift_23();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_window_15();
		int32_t L_8 = __this->get_strstart_29();
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)2));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = __this->get_hash_mask_22();
		__this->set_ins_h_19(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)255)))))&(int32_t)L_11)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_12 = __this->get_head_18();
		int32_t L_13 = __this->get_ins_h_19();
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int16_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)((int32_t)L_15&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_16 = __this->get_prev_17();
		int32_t L_17 = __this->get_strstart_29();
		int32_t L_18 = __this->get_w_mask_14();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = __this->get_head_18();
		int32_t L_20 = __this->get_ins_h_19();
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int16_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_17&(int32_t)L_18))), (int16_t)L_22);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_23 = __this->get_head_18();
		int32_t L_24 = __this->get_ins_h_19();
		int32_t L_25 = __this->get_strstart_29();
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (int16_t)((int16_t)((int16_t)L_25)));
	}

IL_00b7:
	{
		int32_t L_26 = V_0;
		if (!((int64_t)((int64_t)L_26)))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_27 = __this->get_strstart_29();
		int32_t L_28 = V_0;
		int32_t L_29 = __this->get_w_size_12();
		if ((((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_28))&(int32_t)((int32_t)65535)))) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)((int32_t)262))))))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_30 = __this->get_compressionStrategy_34();
		if ((((int32_t)L_30) == ((int32_t)2)))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32;
		L_32 = DeflateManager_longest_match_m84D860B4FDECCD4AEF4964B7A6D819064D4F5095(__this, L_31, /*hidden argument*/NULL);
		__this->set_match_length_26(L_32);
	}

IL_00ed:
	{
		int32_t L_33 = __this->get_match_length_26();
		if ((((int32_t)L_33) < ((int32_t)3)))
		{
			goto IL_0273;
		}
	}
	{
		int32_t L_34 = __this->get_strstart_29();
		int32_t L_35 = __this->get_match_start_30();
		int32_t L_36 = __this->get_match_length_26();
		bool L_37;
		L_37 = DeflateManager__tr_tally_m8FF3703E35B68D847D9E7B7954E1D62EC9C0982F(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_35)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)3)), /*hidden argument*/NULL);
		V_1 = L_37;
		int32_t L_38 = __this->get_lookahead_31();
		int32_t L_39 = __this->get_match_length_26();
		__this->set_lookahead_31(((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)L_39)));
		int32_t L_40 = __this->get_match_length_26();
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_41 = __this->get_config_25();
		NullCheck(L_41);
		int32_t L_42 = L_41->get_MaxLazy_1();
		if ((((int32_t)L_40) > ((int32_t)L_42)))
		{
			goto IL_020b;
		}
	}
	{
		int32_t L_43 = __this->get_lookahead_31();
		if ((((int32_t)L_43) < ((int32_t)3)))
		{
			goto IL_020b;
		}
	}
	{
		int32_t L_44 = __this->get_match_length_26();
		__this->set_match_length_26(((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1)));
	}

IL_0158:
	{
		int32_t L_45 = __this->get_strstart_29();
		__this->set_strstart_29(((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1)));
		int32_t L_46 = __this->get_ins_h_19();
		int32_t L_47 = __this->get_hash_shift_23();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_48 = __this->get_window_15();
		int32_t L_49 = __this->get_strstart_29();
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)2));
		uint8_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		int32_t L_52 = __this->get_hash_mask_22();
		__this->set_ins_h_19(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_46<<(int32_t)((int32_t)((int32_t)L_47&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_51&(int32_t)((int32_t)255)))))&(int32_t)L_52)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_53 = __this->get_head_18();
		int32_t L_54 = __this->get_ins_h_19();
		NullCheck(L_53);
		int32_t L_55 = L_54;
		int16_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int32_t)((int32_t)L_56&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_57 = __this->get_prev_17();
		int32_t L_58 = __this->get_strstart_29();
		int32_t L_59 = __this->get_w_mask_14();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_60 = __this->get_head_18();
		int32_t L_61 = __this->get_ins_h_19();
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int16_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_58&(int32_t)L_59))), (int16_t)L_63);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_64 = __this->get_head_18();
		int32_t L_65 = __this->get_ins_h_19();
		int32_t L_66 = __this->get_strstart_29();
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (int16_t)((int16_t)((int16_t)L_66)));
		int32_t L_67 = __this->get_match_length_26();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)1));
		int32_t L_68 = V_2;
		__this->set_match_length_26(L_68);
		int32_t L_69 = V_2;
		if (L_69)
		{
			goto IL_0158;
		}
	}
	{
		int32_t L_70 = __this->get_strstart_29();
		__this->set_strstart_29(((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1)));
		goto IL_02aa;
	}

IL_020b:
	{
		int32_t L_71 = __this->get_strstart_29();
		int32_t L_72 = __this->get_match_length_26();
		__this->set_strstart_29(((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)L_72)));
		__this->set_match_length_26(0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_73 = __this->get_window_15();
		int32_t L_74 = __this->get_strstart_29();
		NullCheck(L_73);
		int32_t L_75 = L_74;
		uint8_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		__this->set_ins_h_19(((int32_t)((int32_t)L_76&(int32_t)((int32_t)255))));
		int32_t L_77 = __this->get_ins_h_19();
		int32_t L_78 = __this->get_hash_shift_23();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_79 = __this->get_window_15();
		int32_t L_80 = __this->get_strstart_29();
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
		uint8_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		int32_t L_83 = __this->get_hash_mask_22();
		__this->set_ins_h_19(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_77<<(int32_t)((int32_t)((int32_t)L_78&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_82&(int32_t)((int32_t)255)))))&(int32_t)L_83)));
		goto IL_02aa;
	}

IL_0273:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_84 = __this->get_window_15();
		int32_t L_85 = __this->get_strstart_29();
		NullCheck(L_84);
		int32_t L_86 = L_85;
		uint8_t L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		bool L_88;
		L_88 = DeflateManager__tr_tally_m8FF3703E35B68D847D9E7B7954E1D62EC9C0982F(__this, 0, ((int32_t)((int32_t)L_87&(int32_t)((int32_t)255))), /*hidden argument*/NULL);
		V_1 = L_88;
		int32_t L_89 = __this->get_lookahead_31();
		__this->set_lookahead_31(((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)1)));
		int32_t L_90 = __this->get_strstart_29();
		__this->set_strstart_29(((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1)));
	}

IL_02aa:
	{
		bool L_91 = V_1;
		if (!L_91)
		{
			goto IL_0002;
		}
	}
	{
		DeflateManager_flush_block_only_m15E48FA16BC9E92DF78FEE7669B167C3215345E7(__this, (bool)0, /*hidden argument*/NULL);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_92 = __this->get__codec_5();
		NullCheck(L_92);
		int32_t L_93 = L_92->get_AvailableBytesOut_6();
		if (L_93)
		{
			goto IL_0002;
		}
	}
	{
		return (int32_t)(0);
	}

IL_02c9:
	{
		int32_t L_94 = ___flush0;
		DeflateManager_flush_block_only_m15E48FA16BC9E92DF78FEE7669B167C3215345E7(__this, (bool)((((int32_t)L_94) == ((int32_t)4))? 1 : 0), /*hidden argument*/NULL);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_95 = __this->get__codec_5();
		NullCheck(L_95);
		int32_t L_96 = L_95->get_AvailableBytesOut_6();
		if (L_96)
		{
			goto IL_02e8;
		}
	}
	{
		int32_t L_97 = ___flush0;
		if ((!(((uint32_t)L_97) == ((uint32_t)4))))
		{
			goto IL_02e6;
		}
	}
	{
		return (int32_t)(2);
	}

IL_02e6:
	{
		return (int32_t)(0);
	}

IL_02e8:
	{
		int32_t L_98 = ___flush0;
		if ((((int32_t)L_98) == ((int32_t)4)))
		{
			goto IL_02ee;
		}
	}
	{
		return (int32_t)(1);
	}

IL_02ee:
	{
		return (int32_t)(3);
	}
}
// SharpCompress.Compressors.Deflate.DeflateManager/BlockState SharpCompress.Compressors.Deflate.DeflateManager::DeflateSlow(SharpCompress.Compressors.Deflate.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_DeflateSlow_mB93F5375C5A63065F156A15A721056E7D6EB3F3B (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = __this->get_lookahead_31();
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)262))))
		{
			goto IL_0032;
		}
	}
	{
		DeflateManager__fillWindow_mC37EFA59D0B6CCCCAE58D2EC7A90A231352BF407(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_lookahead_31();
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)262))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = ___flush0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0027:
	{
		int32_t L_3 = __this->get_lookahead_31();
		if (!L_3)
		{
			goto IL_0328;
		}
	}

IL_0032:
	{
		int32_t L_4 = __this->get_lookahead_31();
		if ((((int32_t)L_4) < ((int32_t)3)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_5 = __this->get_ins_h_19();
		int32_t L_6 = __this->get_hash_shift_23();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = __this->get_window_15();
		int32_t L_8 = __this->get_strstart_29();
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)2));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = __this->get_hash_mask_22();
		__this->set_ins_h_19(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)255)))))&(int32_t)L_11)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_12 = __this->get_head_18();
		int32_t L_13 = __this->get_ins_h_19();
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int16_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)((int32_t)L_15&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_16 = __this->get_prev_17();
		int32_t L_17 = __this->get_strstart_29();
		int32_t L_18 = __this->get_w_mask_14();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = __this->get_head_18();
		int32_t L_20 = __this->get_ins_h_19();
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int16_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_17&(int32_t)L_18))), (int16_t)L_22);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_23 = __this->get_head_18();
		int32_t L_24 = __this->get_ins_h_19();
		int32_t L_25 = __this->get_strstart_29();
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (int16_t)((int16_t)((int16_t)L_25)));
	}

IL_00b7:
	{
		int32_t L_26 = __this->get_match_length_26();
		__this->set_prev_length_32(L_26);
		int32_t L_27 = __this->get_match_start_30();
		__this->set_prev_match_27(L_27);
		__this->set_match_length_26(2);
		int32_t L_28 = V_0;
		if (!L_28)
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_29 = __this->get_prev_length_32();
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_30 = __this->get_config_25();
		NullCheck(L_30);
		int32_t L_31 = L_30->get_MaxLazy_1();
		if ((((int32_t)L_29) >= ((int32_t)L_31)))
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_32 = __this->get_strstart_29();
		int32_t L_33 = V_0;
		int32_t L_34 = __this->get_w_size_12();
		if ((((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33))&(int32_t)((int32_t)65535)))) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)((int32_t)262))))))
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_35 = __this->get_compressionStrategy_34();
		if ((((int32_t)L_35) == ((int32_t)2)))
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = DeflateManager_longest_match_m84D860B4FDECCD4AEF4964B7A6D819064D4F5095(__this, L_36, /*hidden argument*/NULL);
		__this->set_match_length_26(L_37);
	}

IL_011e:
	{
		int32_t L_38 = __this->get_match_length_26();
		if ((((int32_t)L_38) > ((int32_t)5)))
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_39 = __this->get_compressionStrategy_34();
		if ((((int32_t)L_39) == ((int32_t)1)))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_40 = __this->get_match_length_26();
		if ((!(((uint32_t)L_40) == ((uint32_t)3))))
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_41 = __this->get_strstart_29();
		int32_t L_42 = __this->get_match_start_30();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)L_42))) <= ((int32_t)((int32_t)4096))))
		{
			goto IL_0154;
		}
	}

IL_014d:
	{
		__this->set_match_length_26(2);
	}

IL_0154:
	{
		int32_t L_43 = __this->get_prev_length_32();
		if ((((int32_t)L_43) < ((int32_t)3)))
		{
			goto IL_02a3;
		}
	}
	{
		int32_t L_44 = __this->get_match_length_26();
		int32_t L_45 = __this->get_prev_length_32();
		if ((((int32_t)L_44) > ((int32_t)L_45)))
		{
			goto IL_02a3;
		}
	}
	{
		int32_t L_46 = __this->get_strstart_29();
		int32_t L_47 = __this->get_lookahead_31();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47)), (int32_t)3));
		int32_t L_48 = __this->get_strstart_29();
		int32_t L_49 = __this->get_prev_match_27();
		int32_t L_50 = __this->get_prev_length_32();
		bool L_51;
		L_51 = DeflateManager__tr_tally_m8FF3703E35B68D847D9E7B7954E1D62EC9C0982F(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1)), (int32_t)L_49)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)3)), /*hidden argument*/NULL);
		V_1 = L_51;
		int32_t L_52 = __this->get_lookahead_31();
		int32_t L_53 = __this->get_prev_length_32();
		__this->set_lookahead_31(((int32_t)il2cpp_codegen_subtract((int32_t)L_52, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)1)))));
		int32_t L_54 = __this->get_prev_length_32();
		__this->set_prev_length_32(((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)2)));
	}

IL_01c2:
	{
		int32_t L_55 = __this->get_strstart_29();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
		int32_t L_56 = V_3;
		__this->set_strstart_29(L_56);
		int32_t L_57 = V_3;
		int32_t L_58 = V_2;
		if ((((int32_t)L_57) > ((int32_t)L_58)))
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_59 = __this->get_ins_h_19();
		int32_t L_60 = __this->get_hash_shift_23();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_61 = __this->get_window_15();
		int32_t L_62 = __this->get_strstart_29();
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)2));
		uint8_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		int32_t L_65 = __this->get_hash_mask_22();
		__this->set_ins_h_19(((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_59<<(int32_t)((int32_t)((int32_t)L_60&(int32_t)((int32_t)31)))))^(int32_t)((int32_t)((int32_t)L_64&(int32_t)((int32_t)255)))))&(int32_t)L_65)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_66 = __this->get_head_18();
		int32_t L_67 = __this->get_ins_h_19();
		NullCheck(L_66);
		int32_t L_68 = L_67;
		int16_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_0 = ((int32_t)((int32_t)L_69&(int32_t)((int32_t)65535)));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_70 = __this->get_prev_17();
		int32_t L_71 = __this->get_strstart_29();
		int32_t L_72 = __this->get_w_mask_14();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_73 = __this->get_head_18();
		int32_t L_74 = __this->get_ins_h_19();
		NullCheck(L_73);
		int32_t L_75 = L_74;
		int16_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_71&(int32_t)L_72))), (int16_t)L_76);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_77 = __this->get_head_18();
		int32_t L_78 = __this->get_ins_h_19();
		int32_t L_79 = __this->get_strstart_29();
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (int16_t)((int16_t)((int16_t)L_79)));
	}

IL_0252:
	{
		int32_t L_80 = __this->get_prev_length_32();
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)1));
		int32_t L_81 = V_3;
		__this->set_prev_length_32(L_81);
		int32_t L_82 = V_3;
		if (L_82)
		{
			goto IL_01c2;
		}
	}
	{
		__this->set_match_available_28(0);
		__this->set_match_length_26(2);
		int32_t L_83 = __this->get_strstart_29();
		__this->set_strstart_29(((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)1)));
		bool L_84 = V_1;
		if (!L_84)
		{
			goto IL_0002;
		}
	}
	{
		DeflateManager_flush_block_only_m15E48FA16BC9E92DF78FEE7669B167C3215345E7(__this, (bool)0, /*hidden argument*/NULL);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_85 = __this->get__codec_5();
		NullCheck(L_85);
		int32_t L_86 = L_85->get_AvailableBytesOut_6();
		if (L_86)
		{
			goto IL_0002;
		}
	}
	{
		return (int32_t)(0);
	}

IL_02a3:
	{
		int32_t L_87 = __this->get_match_available_28();
		if (!L_87)
		{
			goto IL_0300;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_88 = __this->get_window_15();
		int32_t L_89 = __this->get_strstart_29();
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)1));
		uint8_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		bool L_92;
		L_92 = DeflateManager__tr_tally_m8FF3703E35B68D847D9E7B7954E1D62EC9C0982F(__this, 0, ((int32_t)((int32_t)L_91&(int32_t)((int32_t)255))), /*hidden argument*/NULL);
		V_1 = L_92;
		bool L_93 = V_1;
		if (!L_93)
		{
			goto IL_02d2;
		}
	}
	{
		DeflateManager_flush_block_only_m15E48FA16BC9E92DF78FEE7669B167C3215345E7(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_02d2:
	{
		int32_t L_94 = __this->get_strstart_29();
		__this->set_strstart_29(((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1)));
		int32_t L_95 = __this->get_lookahead_31();
		__this->set_lookahead_31(((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)1)));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_96 = __this->get__codec_5();
		NullCheck(L_96);
		int32_t L_97 = L_96->get_AvailableBytesOut_6();
		if (L_97)
		{
			goto IL_0002;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0300:
	{
		__this->set_match_available_28(1);
		int32_t L_98 = __this->get_strstart_29();
		__this->set_strstart_29(((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1)));
		int32_t L_99 = __this->get_lookahead_31();
		__this->set_lookahead_31(((int32_t)il2cpp_codegen_subtract((int32_t)L_99, (int32_t)1)));
		goto IL_0002;
	}

IL_0328:
	{
		int32_t L_100 = __this->get_match_available_28();
		if (!L_100)
		{
			goto IL_0354;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_101 = __this->get_window_15();
		int32_t L_102 = __this->get_strstart_29();
		NullCheck(L_101);
		int32_t L_103 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_102, (int32_t)1));
		uint8_t L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		bool L_105;
		L_105 = DeflateManager__tr_tally_m8FF3703E35B68D847D9E7B7954E1D62EC9C0982F(__this, 0, ((int32_t)((int32_t)L_104&(int32_t)((int32_t)255))), /*hidden argument*/NULL);
		V_1 = L_105;
		__this->set_match_available_28(0);
	}

IL_0354:
	{
		int32_t L_106 = ___flush0;
		DeflateManager_flush_block_only_m15E48FA16BC9E92DF78FEE7669B167C3215345E7(__this, (bool)((((int32_t)L_106) == ((int32_t)4))? 1 : 0), /*hidden argument*/NULL);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_107 = __this->get__codec_5();
		NullCheck(L_107);
		int32_t L_108 = L_107->get_AvailableBytesOut_6();
		if (L_108)
		{
			goto IL_0373;
		}
	}
	{
		int32_t L_109 = ___flush0;
		if ((!(((uint32_t)L_109) == ((uint32_t)4))))
		{
			goto IL_0371;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0371:
	{
		return (int32_t)(0);
	}

IL_0373:
	{
		int32_t L_110 = ___flush0;
		if ((((int32_t)L_110) == ((int32_t)4)))
		{
			goto IL_0379;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0379:
	{
		return (int32_t)(3);
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::longest_match(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_longest_match_m84D860B4FDECCD4AEF4964B7A6D819064D4F5095 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___cur_match0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint8_t V_9 = 0x0;
	uint8_t V_10 = 0x0;
	int32_t G_B3_0 = 0;
	{
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_0 = __this->get_config_25();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_MaxChainLength_3();
		V_0 = L_1;
		int32_t L_2 = __this->get_strstart_29();
		V_1 = L_2;
		int32_t L_3 = __this->get_prev_length_32();
		V_4 = L_3;
		int32_t L_4 = __this->get_strstart_29();
		int32_t L_5 = __this->get_w_size_12();
		if ((((int32_t)L_4) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)262))))))
		{
			goto IL_0032;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0045;
	}

IL_0032:
	{
		int32_t L_6 = __this->get_strstart_29();
		int32_t L_7 = __this->get_w_size_12();
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)262)))));
	}

IL_0045:
	{
		V_5 = G_B3_0;
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_8 = __this->get_config_25();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_NiceLength_2();
		V_6 = L_9;
		int32_t L_10 = __this->get_w_mask_14();
		V_7 = L_10;
		int32_t L_11 = __this->get_strstart_29();
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)258)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_window_15();
		int32_t L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)), (int32_t)1));
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_9 = L_16;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = __this->get_window_15();
		int32_t L_18 = V_1;
		int32_t L_19 = V_4;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19));
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_10 = L_21;
		int32_t L_22 = __this->get_prev_length_32();
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_23 = __this->get_config_25();
		NullCheck(L_23);
		int32_t L_24 = L_23->get_GoodLength_0();
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)((int32_t)L_25>>(int32_t)2));
	}

IL_009d:
	{
		int32_t L_26 = V_6;
		int32_t L_27 = __this->get_lookahead_31();
		if ((((int32_t)L_26) <= ((int32_t)L_27)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_28 = __this->get_lookahead_31();
		V_6 = L_28;
	}

IL_00af:
	{
		int32_t L_29 = ___cur_match0;
		V_2 = L_29;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = __this->get_window_15();
		int32_t L_31 = V_2;
		int32_t L_32 = V_4;
		NullCheck(L_30);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32));
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		uint8_t L_35 = V_10;
		if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
		{
			goto IL_0234;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = __this->get_window_15();
		int32_t L_37 = V_2;
		int32_t L_38 = V_4;
		NullCheck(L_36);
		int32_t L_39 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_38)), (int32_t)1));
		uint8_t L_40 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		uint8_t L_41 = V_9;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_0234;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = __this->get_window_15();
		int32_t L_43 = V_2;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		uint8_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = __this->get_window_15();
		int32_t L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		uint8_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		if ((!(((uint32_t)L_45) == ((uint32_t)L_49))))
		{
			goto IL_0234;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_50 = __this->get_window_15();
		int32_t L_51 = V_2;
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		V_2 = L_52;
		NullCheck(L_50);
		int32_t L_53 = L_52;
		uint8_t L_54 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_55 = __this->get_window_15();
		int32_t L_56 = V_1;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		uint8_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		if ((!(((uint32_t)L_54) == ((uint32_t)L_58))))
		{
			goto IL_0234;
		}
	}
	{
		int32_t L_59 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)2));
		int32_t L_60 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_010f:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_61 = __this->get_window_15();
		int32_t L_62 = V_1;
		int32_t L_63 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		V_1 = L_63;
		NullCheck(L_61);
		int32_t L_64 = L_63;
		uint8_t L_65 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_66 = __this->get_window_15();
		int32_t L_67 = V_2;
		int32_t L_68 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		V_2 = L_68;
		NullCheck(L_66);
		int32_t L_69 = L_68;
		uint8_t L_70 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		if ((!(((uint32_t)L_65) == ((uint32_t)L_70))))
		{
			goto IL_01f0;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_71 = __this->get_window_15();
		int32_t L_72 = V_1;
		int32_t L_73 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
		V_1 = L_73;
		NullCheck(L_71);
		int32_t L_74 = L_73;
		uint8_t L_75 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_76 = __this->get_window_15();
		int32_t L_77 = V_2;
		int32_t L_78 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
		V_2 = L_78;
		NullCheck(L_76);
		int32_t L_79 = L_78;
		uint8_t L_80 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		if ((!(((uint32_t)L_75) == ((uint32_t)L_80))))
		{
			goto IL_01f0;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_81 = __this->get_window_15();
		int32_t L_82 = V_1;
		int32_t L_83 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
		V_1 = L_83;
		NullCheck(L_81);
		int32_t L_84 = L_83;
		uint8_t L_85 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_86 = __this->get_window_15();
		int32_t L_87 = V_2;
		int32_t L_88 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
		V_2 = L_88;
		NullCheck(L_86);
		int32_t L_89 = L_88;
		uint8_t L_90 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		if ((!(((uint32_t)L_85) == ((uint32_t)L_90))))
		{
			goto IL_01f0;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_91 = __this->get_window_15();
		int32_t L_92 = V_1;
		int32_t L_93 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
		V_1 = L_93;
		NullCheck(L_91);
		int32_t L_94 = L_93;
		uint8_t L_95 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_96 = __this->get_window_15();
		int32_t L_97 = V_2;
		int32_t L_98 = ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
		V_2 = L_98;
		NullCheck(L_96);
		int32_t L_99 = L_98;
		uint8_t L_100 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		if ((!(((uint32_t)L_95) == ((uint32_t)L_100))))
		{
			goto IL_01f0;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_101 = __this->get_window_15();
		int32_t L_102 = V_1;
		int32_t L_103 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
		V_1 = L_103;
		NullCheck(L_101);
		int32_t L_104 = L_103;
		uint8_t L_105 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_106 = __this->get_window_15();
		int32_t L_107 = V_2;
		int32_t L_108 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1));
		V_2 = L_108;
		NullCheck(L_106);
		int32_t L_109 = L_108;
		uint8_t L_110 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		if ((!(((uint32_t)L_105) == ((uint32_t)L_110))))
		{
			goto IL_01f0;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_111 = __this->get_window_15();
		int32_t L_112 = V_1;
		int32_t L_113 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
		V_1 = L_113;
		NullCheck(L_111);
		int32_t L_114 = L_113;
		uint8_t L_115 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_116 = __this->get_window_15();
		int32_t L_117 = V_2;
		int32_t L_118 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
		V_2 = L_118;
		NullCheck(L_116);
		int32_t L_119 = L_118;
		uint8_t L_120 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		if ((!(((uint32_t)L_115) == ((uint32_t)L_120))))
		{
			goto IL_01f0;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_121 = __this->get_window_15();
		int32_t L_122 = V_1;
		int32_t L_123 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1));
		V_1 = L_123;
		NullCheck(L_121);
		int32_t L_124 = L_123;
		uint8_t L_125 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_126 = __this->get_window_15();
		int32_t L_127 = V_2;
		int32_t L_128 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1));
		V_2 = L_128;
		NullCheck(L_126);
		int32_t L_129 = L_128;
		uint8_t L_130 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		if ((!(((uint32_t)L_125) == ((uint32_t)L_130))))
		{
			goto IL_01f0;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_131 = __this->get_window_15();
		int32_t L_132 = V_1;
		int32_t L_133 = ((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)1));
		V_1 = L_133;
		NullCheck(L_131);
		int32_t L_134 = L_133;
		uint8_t L_135 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_136 = __this->get_window_15();
		int32_t L_137 = V_2;
		int32_t L_138 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1));
		V_2 = L_138;
		NullCheck(L_136);
		int32_t L_139 = L_138;
		uint8_t L_140 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		if ((!(((uint32_t)L_135) == ((uint32_t)L_140))))
		{
			goto IL_01f0;
		}
	}
	{
		int32_t L_141 = V_1;
		int32_t L_142 = V_8;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_010f;
		}
	}

IL_01f0:
	{
		int32_t L_143 = V_8;
		int32_t L_144 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)258), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_143, (int32_t)L_144))));
		int32_t L_145 = V_8;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_145, (int32_t)((int32_t)258)));
		int32_t L_146 = V_3;
		int32_t L_147 = V_4;
		if ((((int32_t)L_146) <= ((int32_t)L_147)))
		{
			goto IL_0234;
		}
	}
	{
		int32_t L_148 = ___cur_match0;
		__this->set_match_start_30(L_148);
		int32_t L_149 = V_3;
		V_4 = L_149;
		int32_t L_150 = V_3;
		int32_t L_151 = V_6;
		if ((((int32_t)L_150) >= ((int32_t)L_151)))
		{
			goto IL_0256;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_152 = __this->get_window_15();
		int32_t L_153 = V_1;
		int32_t L_154 = V_4;
		NullCheck(L_152);
		int32_t L_155 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_153, (int32_t)L_154)), (int32_t)1));
		uint8_t L_156 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		V_9 = L_156;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_157 = __this->get_window_15();
		int32_t L_158 = V_1;
		int32_t L_159 = V_4;
		NullCheck(L_157);
		int32_t L_160 = ((int32_t)il2cpp_codegen_add((int32_t)L_158, (int32_t)L_159));
		uint8_t L_161 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		V_10 = L_161;
	}

IL_0234:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_162 = __this->get_prev_17();
		int32_t L_163 = ___cur_match0;
		int32_t L_164 = V_7;
		NullCheck(L_162);
		int32_t L_165 = ((int32_t)((int32_t)L_163&(int32_t)L_164));
		int16_t L_166 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		int32_t L_167 = ((int32_t)((int32_t)L_166&(int32_t)((int32_t)65535)));
		___cur_match0 = L_167;
		int32_t L_168 = V_5;
		if ((((int32_t)L_167) <= ((int32_t)L_168)))
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_169 = V_0;
		int32_t L_170 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_169, (int32_t)1));
		V_0 = L_170;
		if (L_170)
		{
			goto IL_00af;
		}
	}

IL_0256:
	{
		int32_t L_171 = V_4;
		int32_t L_172 = __this->get_lookahead_31();
		if ((((int32_t)L_171) > ((int32_t)L_172)))
		{
			goto IL_0263;
		}
	}
	{
		int32_t L_173 = V_4;
		return L_173;
	}

IL_0263:
	{
		int32_t L_174 = __this->get_lookahead_31();
		return L_174;
	}
}
// System.Boolean SharpCompress.Compressors.Deflate.DeflateManager::get_WantRfc1950HeaderBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_m8C9173A19AADA6593ECABA165C7E72EA2EEB8906 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CWantRfc1950HeaderBytesU3Ek__BackingField_57();
		return L_0;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::set_WantRfc1950HeaderBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_set_WantRfc1950HeaderBytes_m894E5832A4FB04A11C5DCB9ADC0A7790CEB08F53 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CWantRfc1950HeaderBytesU3Ek__BackingField_57(L_0);
		return;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::Initialize(SharpCompress.Compressors.Deflate.ZlibCodec,SharpCompress.Compressors.Deflate.CompressionLevel,System.Int32,SharpCompress.Compressors.Deflate.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_m7AC0246ABE3A13DC3EBBF8A4C3A6F9CBE3848230 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___codec0, int32_t ___level1, int32_t ___bits2, int32_t ___compressionStrategy3, const RuntimeMethod* method)
{
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_0 = ___codec0;
		int32_t L_1 = ___level1;
		int32_t L_2 = ___bits2;
		int32_t L_3 = ___compressionStrategy3;
		int32_t L_4;
		L_4 = DeflateManager_Initialize_mF1CEA930CBA0E816432B9F39493D12EADF13140A(__this, L_0, L_1, L_2, 8, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::Initialize(SharpCompress.Compressors.Deflate.ZlibCodec,SharpCompress.Compressors.Deflate.CompressionLevel,System.Int32,System.Int32,SharpCompress.Compressors.Deflate.CompressionStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Initialize_mF1CEA930CBA0E816432B9F39493D12EADF13140A (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___codec0, int32_t ___level1, int32_t ___windowBits2, int32_t ___memLevel3, int32_t ___strategy4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_0 = ___codec0;
		__this->set__codec_5(L_0);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_1 = __this->get__codec_5();
		NullCheck(L_1);
		L_1->set_Message_8((String_t*)NULL);
		int32_t L_2 = ___windowBits2;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)9))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___windowBits2;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0028;
		}
	}

IL_001d:
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_4 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral540BFF2B585F6DE7F5AA022B07C05975323EFD0E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Initialize_mF1CEA930CBA0E816432B9F39493D12EADF13140A_RuntimeMethod_var)));
	}

IL_0028:
	{
		int32_t L_5 = ___memLevel3;
		if ((((int32_t)L_5) < ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_6 = ___memLevel3;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)9))))
		{
			goto IL_004a;
		}
	}

IL_0033:
	{
		int32_t L_7 = ((int32_t)9);
		RuntimeObject * L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral796754270F9B2AB25ACA5093B84CF8EAF55BA1AE)), L_8, /*hidden argument*/NULL);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_10 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Initialize_mF1CEA930CBA0E816432B9F39493D12EADF13140A_RuntimeMethod_var)));
	}

IL_004a:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_11 = __this->get__codec_5();
		NullCheck(L_11);
		L_11->set_dstate_9(__this);
		int32_t L_12 = ___windowBits2;
		__this->set_w_bits_13(L_12);
		int32_t L_13 = __this->get_w_bits_13();
		__this->set_w_size_12(((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_13&(int32_t)((int32_t)31))))));
		int32_t L_14 = __this->get_w_size_12();
		__this->set_w_mask_14(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)));
		int32_t L_15 = ___memLevel3;
		__this->set_hash_bits_21(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)7)));
		int32_t L_16 = __this->get_hash_bits_21();
		__this->set_hash_size_20(((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)31))))));
		int32_t L_17 = __this->get_hash_size_20();
		__this->set_hash_mask_22(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)));
		int32_t L_18 = __this->get_hash_bits_21();
		__this->set_hash_shift_23(((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)3)), (int32_t)1))/(int32_t)3)));
		int32_t L_19 = __this->get_w_size_12();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2)));
		__this->set_window_15(L_20);
		int32_t L_21 = __this->get_w_size_12();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_22 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->set_prev_17(L_22);
		int32_t L_23 = __this->get_hash_size_20();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_24 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)L_23);
		__this->set_head_18(L_24);
		int32_t L_25 = ___memLevel3;
		__this->set_lit_bufsize_47(((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)6))&(int32_t)((int32_t)31))))));
		int32_t L_26 = __this->get_lit_bufsize_47();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)4)));
		__this->set_pending_7(L_27);
		int32_t L_28 = __this->get_lit_bufsize_47();
		__this->set__distanceOffset_49(L_28);
		int32_t L_29 = __this->get_lit_bufsize_47();
		__this->set__lengthOffset_46(((int32_t)il2cpp_codegen_multiply((int32_t)3, (int32_t)L_29)));
		int32_t L_30 = ___level1;
		__this->set_compressionLevel_33(L_30);
		int32_t L_31 = ___strategy4;
		__this->set_compressionStrategy_34(L_31);
		DeflateManager_Reset_m659BF60C83D54C39E38E0E5DF40E2F230D6B154A(__this, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_Reset_m659BF60C83D54C39E38E0E5DF40E2F230D6B154A (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B2_0 = NULL;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * G_B3_1 = NULL;
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_0 = __this->get__codec_5();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_1 = __this->get__codec_5();
		int64_t L_2 = ((int64_t)((int64_t)0));
		V_0 = L_2;
		NullCheck(L_1);
		L_1->set_TotalBytesOut_7(L_2);
		int64_t L_3 = V_0;
		NullCheck(L_0);
		L_0->set_TotalBytesIn_3(L_3);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_4 = __this->get__codec_5();
		NullCheck(L_4);
		L_4->set_Message_8((String_t*)NULL);
		__this->set_pendingCount_9(0);
		__this->set_nextPending_8(0);
		__this->set_Rfc1950BytesEmitted_56((bool)0);
		bool L_5;
		L_5 = DeflateManager_get_WantRfc1950HeaderBytes_m8C9173A19AADA6593ECABA165C7E72EA2EEB8906_inline(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_5)
		{
			G_B2_0 = __this;
			goto IL_0049;
		}
	}
	{
		G_B3_0 = ((int32_t)113);
		G_B3_1 = G_B1_0;
		goto IL_004b;
	}

IL_0049:
	{
		G_B3_0 = ((int32_t)42);
		G_B3_1 = G_B2_0;
	}

IL_004b:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_status_6(G_B3_0);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_6 = __this->get__codec_5();
		IL2CPP_RUNTIME_CLASS_INIT(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		uint32_t L_7;
		L_7 = Adler_Adler32_mC43A8AA565B6B644F4FAC3378372FEC0D35CC83C(0, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, 0, 0, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set__Adler32_11(L_7);
		__this->set_last_flush_11(0);
		DeflateManager__InitializeTreeData_m6E46ABBEF32C9196B1F69489D15A819BAA57BB47(__this, /*hidden argument*/NULL);
		DeflateManager__InitializeLazyMatch_mBB7117944A0EAA04BDD8D5B9072A681739DAFAF6(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::SetDeflater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager_SetDeflater_m5949CD0A69CC1519A5369F6A863D4543F1816222 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_DeflateFast_mA1AAAC7F7E2B7FDB9C7ADE3A37DBC47DEF4616A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_DeflateNone_m2F055D727F66C27E3E8E549E09CA7EBBEC8A4BD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_DeflateSlow_mB93F5375C5A63065F156A15A721056E7D6EB3F3B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Config_t26D8373A63D130D33EE94EE0F043C1515745F4D6 * L_0 = __this->get_config_25();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_Flavor_4();
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0045;
			}
		}
	}
	{
		return;
	}

IL_001f:
	{
		CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 * L_3 = (CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 *)il2cpp_codegen_object_new(CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3_il2cpp_TypeInfo_var);
		CompressFunc__ctor_m4BCA0F12F2161F35DA0E0DFBFE66474577F020A8(L_3, __this, (intptr_t)((intptr_t)DeflateManager_DeflateNone_m2F055D727F66C27E3E8E549E09CA7EBBEC8A4BD8_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_DeflateFunction_2(L_3);
		return;
	}

IL_0032:
	{
		CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 * L_4 = (CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 *)il2cpp_codegen_object_new(CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3_il2cpp_TypeInfo_var);
		CompressFunc__ctor_m4BCA0F12F2161F35DA0E0DFBFE66474577F020A8(L_4, __this, (intptr_t)((intptr_t)DeflateManager_DeflateFast_mA1AAAC7F7E2B7FDB9C7ADE3A37DBC47DEF4616A1_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_DeflateFunction_2(L_4);
		return;
	}

IL_0045:
	{
		CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 * L_5 = (CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 *)il2cpp_codegen_object_new(CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3_il2cpp_TypeInfo_var);
		CompressFunc__ctor_m4BCA0F12F2161F35DA0E0DFBFE66474577F020A8(L_5, __this, (intptr_t)((intptr_t)DeflateManager_DeflateSlow_mB93F5375C5A63065F156A15A721056E7D6EB3F3B_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_DeflateFunction_2(L_5);
		return;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.DeflateManager::Deflate(SharpCompress.Compressors.Deflate.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateManager_Deflate_m126CEB8805497536F7CFB1F2073840FEC382FD66 (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_0 = __this->get__codec_5();
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0->get_OutputBuffer_4();
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_2 = __this->get__codec_5();
		NullCheck(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = L_2->get_InputBuffer_0();
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_4 = __this->get__codec_5();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_AvailableBytesIn_2();
		if (L_5)
		{
			goto IL_0038;
		}
	}

IL_0027:
	{
		int32_t L_6 = __this->get_status_6();
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)666)))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_7 = ___flush0;
		if ((((int32_t)L_7) == ((int32_t)4)))
		{
			goto IL_0065;
		}
	}

IL_0038:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_8 = __this->get__codec_5();
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = ((DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var))))->get__ErrorMessage_3();
		NullCheck(L_9);
		int32_t L_10 = 4;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		L_8->set_Message_8(L_11);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_12 = __this->get__codec_5();
		NullCheck(L_12);
		String_t* L_13 = L_12->get_Message_8();
		String_t* L_14;
		L_14 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DE4583466E161AC08D14AD37D8B70B8580B3627)), L_13, /*hidden argument*/NULL);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_15 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Deflate_m126CEB8805497536F7CFB1F2073840FEC382FD66_RuntimeMethod_var)));
	}

IL_0065:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_16 = __this->get__codec_5();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_AvailableBytesOut_6();
		if (L_17)
		{
			goto IL_008f;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_18 = __this->get__codec_5();
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = ((DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var))))->get__ErrorMessage_3();
		NullCheck(L_19);
		int32_t L_20 = 7;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_18);
		L_18->set_Message_8(L_21);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_22 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB6E4583683A19BA1CBC201CAD5FFABF027A5B94A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Deflate_m126CEB8805497536F7CFB1F2073840FEC382FD66_RuntimeMethod_var)));
	}

IL_008f:
	{
		int32_t L_23 = __this->get_last_flush_11();
		V_0 = L_23;
		int32_t L_24 = ___flush0;
		__this->set_last_flush_11(L_24);
		int32_t L_25 = __this->get_status_6();
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_01fa;
		}
	}
	{
		int32_t L_26 = __this->get_w_bits_13();
		V_1 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)8, (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)8))<<(int32_t)4))))<<(int32_t)8));
		int32_t L_27 = __this->get_compressionLevel_33();
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1))&(int32_t)((int32_t)255)))>>(int32_t)1));
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) <= ((int32_t)3)))
		{
			goto IL_00d0;
		}
	}
	{
		V_2 = 3;
	}

IL_00d0:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		V_1 = ((int32_t)((int32_t)L_29|(int32_t)((int32_t)((int32_t)L_30<<(int32_t)6))));
		int32_t L_31 = __this->get_strstart_29();
		if (!L_31)
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)((int32_t)L_32|(int32_t)((int32_t)32)));
	}

IL_00e3:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)31), (int32_t)((int32_t)((int32_t)L_34%(int32_t)((int32_t)31)))))));
		__this->set_status_6(((int32_t)113));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = __this->get_pending_7();
		int32_t L_36 = __this->get_pendingCount_9();
		V_3 = L_36;
		int32_t L_37 = V_3;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
		int32_t L_38 = V_3;
		int32_t L_39 = V_1;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_39>>(int32_t)8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = __this->get_pending_7();
		int32_t L_41 = __this->get_pendingCount_9();
		V_3 = L_41;
		int32_t L_42 = V_3;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)));
		int32_t L_43 = V_3;
		int32_t L_44 = V_1;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (uint8_t)((int32_t)((uint8_t)L_44)));
		int32_t L_45 = __this->get_strstart_29();
		if (!L_45)
		{
			goto IL_01e6;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46 = __this->get_pending_7();
		int32_t L_47 = __this->get_pendingCount_9();
		V_3 = L_47;
		int32_t L_48 = V_3;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1)));
		int32_t L_49 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_50 = __this->get__codec_5();
		NullCheck(L_50);
		uint32_t L_51 = L_50->get__Adler32_11();
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_51&(int32_t)((int32_t)-16777216)))>>((int32_t)24))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_52 = __this->get_pending_7();
		int32_t L_53 = __this->get_pendingCount_9();
		V_3 = L_53;
		int32_t L_54 = V_3;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1)));
		int32_t L_55 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_56 = __this->get__codec_5();
		NullCheck(L_56);
		uint32_t L_57 = L_56->get__Adler32_11();
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_57&(int32_t)((int32_t)16711680)))>>((int32_t)16))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_58 = __this->get_pending_7();
		int32_t L_59 = __this->get_pendingCount_9();
		V_3 = L_59;
		int32_t L_60 = V_3;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1)));
		int32_t L_61 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_62 = __this->get__codec_5();
		NullCheck(L_62);
		uint32_t L_63 = L_62->get__Adler32_11();
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_63&(int32_t)((int32_t)65280)))>>8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_64 = __this->get_pending_7();
		int32_t L_65 = __this->get_pendingCount_9();
		V_3 = L_65;
		int32_t L_66 = V_3;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1)));
		int32_t L_67 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_68 = __this->get__codec_5();
		NullCheck(L_68);
		uint32_t L_69 = L_68->get__Adler32_11();
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_69&(int32_t)((int32_t)255))))));
	}

IL_01e6:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_70 = __this->get__codec_5();
		IL2CPP_RUNTIME_CLASS_INIT(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		uint32_t L_71;
		L_71 = Adler_Adler32_mC43A8AA565B6B644F4FAC3378372FEC0D35CC83C(0, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, 0, 0, /*hidden argument*/NULL);
		NullCheck(L_70);
		L_70->set__Adler32_11(L_71);
	}

IL_01fa:
	{
		int32_t L_72 = __this->get_pendingCount_9();
		if (!L_72)
		{
			goto IL_0223;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_73 = __this->get__codec_5();
		NullCheck(L_73);
		ZlibCodec_flush_pending_m603D6CAA1E336BBC731C63B92F0103DDD309A023(L_73, /*hidden argument*/NULL);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_74 = __this->get__codec_5();
		NullCheck(L_74);
		int32_t L_75 = L_74->get_AvailableBytesOut_6();
		if (L_75)
		{
			goto IL_023a;
		}
	}
	{
		__this->set_last_flush_11((-1));
		return 0;
	}

IL_0223:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_76 = __this->get__codec_5();
		NullCheck(L_76);
		int32_t L_77 = L_76->get_AvailableBytesIn_2();
		if (L_77)
		{
			goto IL_023a;
		}
	}
	{
		int32_t L_78 = ___flush0;
		int32_t L_79 = V_0;
		if ((((int32_t)L_78) > ((int32_t)L_79)))
		{
			goto IL_023a;
		}
	}
	{
		int32_t L_80 = ___flush0;
		if ((((int32_t)L_80) == ((int32_t)4)))
		{
			goto IL_023a;
		}
	}
	{
		return 0;
	}

IL_023a:
	{
		int32_t L_81 = __this->get_status_6();
		if ((!(((uint32_t)L_81) == ((uint32_t)((int32_t)666)))))
		{
			goto IL_0271;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_82 = __this->get__codec_5();
		NullCheck(L_82);
		int32_t L_83 = L_82->get_AvailableBytesIn_2();
		if (!L_83)
		{
			goto IL_0271;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_84 = __this->get__codec_5();
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_85 = ((DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var))))->get__ErrorMessage_3();
		NullCheck(L_85);
		int32_t L_86 = 7;
		String_t* L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_84);
		L_84->set_Message_8(L_87);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_88 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_88, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5882879161B7C9D56B5A1120EF8EF366916857FF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_88, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateManager_Deflate_m126CEB8805497536F7CFB1F2073840FEC382FD66_RuntimeMethod_var)));
	}

IL_0271:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_89 = __this->get__codec_5();
		NullCheck(L_89);
		int32_t L_90 = L_89->get_AvailableBytesIn_2();
		if (L_90)
		{
			goto IL_029c;
		}
	}
	{
		int32_t L_91 = __this->get_lookahead_31();
		if (L_91)
		{
			goto IL_029c;
		}
	}
	{
		int32_t L_92 = ___flush0;
		if (!L_92)
		{
			goto IL_033c;
		}
	}
	{
		int32_t L_93 = __this->get_status_6();
		if ((((int32_t)L_93) == ((int32_t)((int32_t)666))))
		{
			goto IL_033c;
		}
	}

IL_029c:
	{
		CompressFunc_t7E107D60313276A34BBFC41C88FCE07B0F2EF7F3 * L_94 = __this->get_DeflateFunction_2();
		int32_t L_95 = ___flush0;
		NullCheck(L_94);
		int32_t L_96;
		L_96 = CompressFunc_Invoke_mFC9C2DA610A127441B8744E03413A410F2FAC3A4(L_94, L_95, /*hidden argument*/NULL);
		V_4 = L_96;
		int32_t L_97 = V_4;
		if ((((int32_t)L_97) == ((int32_t)2)))
		{
			goto IL_02b4;
		}
	}
	{
		int32_t L_98 = V_4;
		if ((!(((uint32_t)L_98) == ((uint32_t)3))))
		{
			goto IL_02bf;
		}
	}

IL_02b4:
	{
		__this->set_status_6(((int32_t)666));
	}

IL_02bf:
	{
		int32_t L_99 = V_4;
		if (!L_99)
		{
			goto IL_02c8;
		}
	}
	{
		int32_t L_100 = V_4;
		if ((!(((uint32_t)L_100) == ((uint32_t)2))))
		{
			goto IL_02de;
		}
	}

IL_02c8:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_101 = __this->get__codec_5();
		NullCheck(L_101);
		int32_t L_102 = L_101->get_AvailableBytesOut_6();
		if (L_102)
		{
			goto IL_02dc;
		}
	}
	{
		__this->set_last_flush_11((-1));
	}

IL_02dc:
	{
		return 0;
	}

IL_02de:
	{
		int32_t L_103 = V_4;
		if ((!(((uint32_t)L_103) == ((uint32_t)1))))
		{
			goto IL_033c;
		}
	}
	{
		int32_t L_104 = ___flush0;
		if ((!(((uint32_t)L_104) == ((uint32_t)1))))
		{
			goto IL_02ef;
		}
	}
	{
		DeflateManager__tr_align_m7EFF5750BDD2FB2B697B7CC11DFFD9DC0B733B75(__this, /*hidden argument*/NULL);
		goto IL_031b;
	}

IL_02ef:
	{
		DeflateManager__tr_stored_block_mD30318735C4176CD5579464E81D299E42CC89CAE(__this, 0, 0, (bool)0, /*hidden argument*/NULL);
		int32_t L_105 = ___flush0;
		if ((!(((uint32_t)L_105) == ((uint32_t)3))))
		{
			goto IL_031b;
		}
	}
	{
		V_5 = 0;
		goto IL_0311;
	}

IL_0301:
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_106 = __this->get_head_18();
		int32_t L_107 = V_5;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(L_107), (int16_t)0);
		int32_t L_108 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
	}

IL_0311:
	{
		int32_t L_109 = V_5;
		int32_t L_110 = __this->get_hash_size_20();
		if ((((int32_t)L_109) < ((int32_t)L_110)))
		{
			goto IL_0301;
		}
	}

IL_031b:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_111 = __this->get__codec_5();
		NullCheck(L_111);
		ZlibCodec_flush_pending_m603D6CAA1E336BBC731C63B92F0103DDD309A023(L_111, /*hidden argument*/NULL);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_112 = __this->get__codec_5();
		NullCheck(L_112);
		int32_t L_113 = L_112->get_AvailableBytesOut_6();
		if (L_113)
		{
			goto IL_033c;
		}
	}
	{
		__this->set_last_flush_11((-1));
		return 0;
	}

IL_033c:
	{
		int32_t L_114 = ___flush0;
		if ((((int32_t)L_114) == ((int32_t)4)))
		{
			goto IL_0342;
		}
	}
	{
		return 0;
	}

IL_0342:
	{
		bool L_115;
		L_115 = DeflateManager_get_WantRfc1950HeaderBytes_m8C9173A19AADA6593ECABA165C7E72EA2EEB8906_inline(__this, /*hidden argument*/NULL);
		if (!L_115)
		{
			goto IL_0352;
		}
	}
	{
		bool L_116 = __this->get_Rfc1950BytesEmitted_56();
		if (!L_116)
		{
			goto IL_0354;
		}
	}

IL_0352:
	{
		return 1;
	}

IL_0354:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_117 = __this->get_pending_7();
		int32_t L_118 = __this->get_pendingCount_9();
		V_3 = L_118;
		int32_t L_119 = V_3;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1)));
		int32_t L_120 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_121 = __this->get__codec_5();
		NullCheck(L_121);
		uint32_t L_122 = L_121->get__Adler32_11();
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(L_120), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_122&(int32_t)((int32_t)-16777216)))>>((int32_t)24))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_123 = __this->get_pending_7();
		int32_t L_124 = __this->get_pendingCount_9();
		V_3 = L_124;
		int32_t L_125 = V_3;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)1)));
		int32_t L_126 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_127 = __this->get__codec_5();
		NullCheck(L_127);
		uint32_t L_128 = L_127->get__Adler32_11();
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(L_126), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_128&(int32_t)((int32_t)16711680)))>>((int32_t)16))))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_129 = __this->get_pending_7();
		int32_t L_130 = __this->get_pendingCount_9();
		V_3 = L_130;
		int32_t L_131 = V_3;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1)));
		int32_t L_132 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_133 = __this->get__codec_5();
		NullCheck(L_133);
		uint32_t L_134 = L_133->get__Adler32_11();
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(L_132), (uint8_t)((int32_t)((uint8_t)((int32_t)((uint32_t)((int32_t)((int32_t)L_134&(int32_t)((int32_t)65280)))>>8)))));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_135 = __this->get_pending_7();
		int32_t L_136 = __this->get_pendingCount_9();
		V_3 = L_136;
		int32_t L_137 = V_3;
		__this->set_pendingCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)1)));
		int32_t L_138 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_139 = __this->get__codec_5();
		NullCheck(L_139);
		uint32_t L_140 = L_139->get__Adler32_11();
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(L_138), (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_140&(int32_t)((int32_t)255))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_141 = __this->get__codec_5();
		NullCheck(L_141);
		ZlibCodec_flush_pending_m603D6CAA1E336BBC731C63B92F0103DDD309A023(L_141, /*hidden argument*/NULL);
		__this->set_Rfc1950BytesEmitted_56((bool)1);
		int32_t L_142 = __this->get_pendingCount_9();
		if (L_142)
		{
			goto IL_0420;
		}
	}
	{
		return 1;
	}

IL_0420:
	{
		return 0;
	}
}
// System.Void SharpCompress.Compressors.Deflate.DeflateManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateManager__cctor_m69DB2E6F60AC4095942F2BBB5AB9D5297DCFE620 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____67C0E784F3654B008A81E2988588CF4956CCF3DA_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____79D521E6E3E55103005E9CC3FA43B3174FAF090F_7_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)29));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____67C0E784F3654B008A81E2988588CF4956CCF3DA_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var))->set_ExtraLengthBits_0(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____79D521E6E3E55103005E9CC3FA43B3174FAF090F_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var))->set_ExtraDistanceBits_1(L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral482ED093E46F7DA449A2F28A73CE48672055D68D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral661F5A48D8E4456AB4A0DDF5C1AC6662771BD8E8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA541627E44F69CBC3AEDEE28BE998B39F96432DB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB8E9BB1ED5D2A79EBA8E9348D65B785814976F6D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral10970F72C2D0D7F199946EF78672994F037BA021);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral70549B04203CDBBC9F231B74BD8C82FD9F025FA5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral5D57A89B9684097C0A02D286D7DA92E3C900F766);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		((DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var))->set__ErrorMessage_3(L_16);
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_17 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_L_CODES_5();
		((DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var))->set_HEAP_SIZE_4(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_17)), (int32_t)1)));
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
// System.Int32 SharpCompress.Compressors.Deflate.InfTree::huft_build(System.Int32[],System.Int32,System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_huft_build_m0CBBE74E32F752697E4E9CB54088B58B48C6B4E5 (InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___b0, int32_t ___bindex1, int32_t ___n2, int32_t ___s3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___d4, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___e5, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___t6, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m7, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp8, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hn9, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___v10, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B52_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B52_1 = NULL;
	int32_t G_B51_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B51_1 = NULL;
	int32_t G_B53_0 = 0;
	int32_t G_B53_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B53_2 = NULL;
	{
		V_9 = 0;
		int32_t L_0 = ___n2;
		V_4 = L_0;
	}

IL_0006:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_c_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___b0;
		int32_t L_3 = ___bindex1;
		int32_t L_4 = V_9;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		int32_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_1);
		int32_t* L_7 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)));
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_9 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_4;
		if (L_11)
		{
			goto IL_0006;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = __this->get_c_6();
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = ___n2;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0043;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = ___t6;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = ___m7;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		return 0;
	}

IL_0043:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = ___m7;
		NullCheck(L_18);
		int32_t L_19 = 0;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_7 = L_20;
		V_5 = 1;
		goto IL_005f;
	}

IL_004e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = __this->get_c_6();
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if (L_24)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_005f:
	{
		int32_t L_26 = V_5;
		if ((((int32_t)L_26) <= ((int32_t)((int32_t)15))))
		{
			goto IL_004e;
		}
	}

IL_0065:
	{
		int32_t L_27 = V_5;
		V_6 = L_27;
		int32_t L_28 = V_7;
		int32_t L_29 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_30 = V_5;
		V_7 = L_30;
	}

IL_0073:
	{
		V_4 = ((int32_t)15);
		goto IL_008a;
	}

IL_0079:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = __this->get_c_6();
		int32_t L_32 = V_4;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if (L_34)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1));
	}

IL_008a:
	{
		int32_t L_36 = V_4;
		if (L_36)
		{
			goto IL_0079;
		}
	}

IL_008e:
	{
		int32_t L_37 = V_4;
		V_2 = L_37;
		int32_t L_38 = V_7;
		int32_t L_39 = V_4;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_40 = V_4;
		V_7 = L_40;
	}

IL_009b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = ___m7;
		int32_t L_42 = V_7;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_42);
		int32_t L_43 = V_5;
		V_13 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_43&(int32_t)((int32_t)31)))));
		goto IL_00cd;
	}

IL_00ac:
	{
		int32_t L_44 = V_13;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = __this->get_c_6();
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)L_48));
		V_13 = L_49;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_00c1;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_00c1:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		int32_t L_51 = V_13;
		V_13 = ((int32_t)((int32_t)L_51<<(int32_t)1));
	}

IL_00cd:
	{
		int32_t L_52 = V_5;
		int32_t L_53 = V_4;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_54 = V_13;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_55 = __this->get_c_6();
		int32_t L_56 = V_4;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_58));
		V_13 = L_59;
		if ((((int32_t)L_59) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_00e8:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_60 = __this->get_c_6();
		int32_t L_61 = V_4;
		NullCheck(L_60);
		int32_t* L_62 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)));
		int32_t L_63 = *((int32_t*)L_62);
		int32_t L_64 = V_13;
		*((int32_t*)L_62) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)L_64));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_65 = __this->get_x_11();
		int32_t L_66 = 0;
		V_5 = L_66;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_66);
		V_9 = 1;
		V_12 = 2;
		goto IL_0133;
	}

IL_010f:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = __this->get_x_11();
		int32_t L_68 = V_12;
		int32_t L_69 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_70 = __this->get_c_6();
		int32_t L_71 = V_9;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		int32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		int32_t L_74 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)L_73));
		V_5 = L_74;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (int32_t)L_74);
		int32_t L_75 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		int32_t L_76 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_0133:
	{
		int32_t L_77 = V_4;
		int32_t L_78 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)1));
		V_4 = L_78;
		if (L_78)
		{
			goto IL_010f;
		}
	}
	{
		V_4 = 0;
		V_9 = 0;
	}

IL_0142:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_79 = ___b0;
		int32_t L_80 = ___bindex1;
		int32_t L_81 = V_9;
		NullCheck(L_79);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)L_81));
		int32_t L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = L_83;
		V_5 = L_84;
		if (!L_84)
		{
			goto IL_016a;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_85 = ___v10;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_86 = __this->get_x_11();
		int32_t L_87 = V_5;
		NullCheck(L_86);
		int32_t* L_88 = ((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)));
		int32_t L_89 = *((int32_t*)L_88);
		V_15 = L_89;
		int32_t L_90 = V_15;
		*((int32_t*)L_88) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		int32_t L_91 = V_15;
		int32_t L_92 = V_4;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (int32_t)L_92);
	}

IL_016a:
	{
		int32_t L_93 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
		int32_t L_94 = V_4;
		int32_t L_95 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		V_4 = L_95;
		int32_t L_96 = ___n2;
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_0142;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_97 = __this->get_x_11();
		int32_t L_98 = V_2;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		int32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		___n2 = L_100;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_101 = __this->get_x_11();
		int32_t L_102 = 0;
		V_4 = L_102;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_102);
		V_9 = 0;
		V_3 = (-1);
		int32_t L_103 = V_7;
		V_11 = ((-L_103));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_104 = __this->get_u_9();
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		V_10 = 0;
		V_14 = 0;
		goto IL_0413;
	}

IL_01ae:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_105 = __this->get_c_6();
		int32_t L_106 = V_6;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		int32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_0 = L_108;
		goto IL_0403;
	}

IL_01bd:
	{
		int32_t L_109 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
		int32_t L_110 = V_11;
		int32_t L_111 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)L_111));
		int32_t L_112 = V_2;
		int32_t L_113 = V_11;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_112, (int32_t)L_113));
		int32_t L_114 = V_14;
		int32_t L_115 = V_7;
		if ((((int32_t)L_114) > ((int32_t)L_115)))
		{
			goto IL_01d8;
		}
	}
	{
		int32_t L_116 = V_14;
		G_B35_0 = L_116;
		goto IL_01da;
	}

IL_01d8:
	{
		int32_t L_117 = V_7;
		G_B35_0 = L_117;
	}

IL_01da:
	{
		V_14 = G_B35_0;
		int32_t L_118 = V_6;
		int32_t L_119 = V_11;
		int32_t L_120 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_118, (int32_t)L_119));
		V_5 = L_120;
		int32_t L_121 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_120&(int32_t)((int32_t)31)))));
		V_1 = L_121;
		int32_t L_122 = V_0;
		if ((((int32_t)L_121) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1)))))
		{
			goto IL_022e;
		}
	}
	{
		int32_t L_123 = V_1;
		int32_t L_124 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_123, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)1))));
		int32_t L_125 = V_6;
		V_12 = L_125;
		int32_t L_126 = V_5;
		int32_t L_127 = V_14;
		if ((((int32_t)L_126) >= ((int32_t)L_127)))
		{
			goto IL_022e;
		}
	}
	{
		goto IL_0223;
	}

IL_0202:
	{
		int32_t L_128 = V_1;
		int32_t L_129 = ((int32_t)((int32_t)L_128<<(int32_t)1));
		V_1 = L_129;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_130 = __this->get_c_6();
		int32_t L_131 = V_12;
		int32_t L_132 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
		V_12 = L_132;
		NullCheck(L_130);
		int32_t L_133 = L_132;
		int32_t L_134 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		if ((((int32_t)L_129) <= ((int32_t)L_134)))
		{
			goto IL_022e;
		}
	}
	{
		int32_t L_135 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_136 = __this->get_c_6();
		int32_t L_137 = V_12;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		int32_t L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_135, (int32_t)L_139));
	}

IL_0223:
	{
		int32_t L_140 = V_5;
		int32_t L_141 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)1));
		V_5 = L_141;
		int32_t L_142 = V_14;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_0202;
		}
	}

IL_022e:
	{
		int32_t L_143 = V_5;
		V_14 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_143&(int32_t)((int32_t)31)))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_144 = ___hn9;
		NullCheck(L_144);
		int32_t L_145 = 0;
		int32_t L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)L_147))) <= ((int32_t)((int32_t)1440))))
		{
			goto IL_0248;
		}
	}
	{
		return ((int32_t)-3);
	}

IL_0248:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_148 = __this->get_u_9();
		int32_t L_149 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_150 = ___hn9;
		NullCheck(L_150);
		int32_t L_151 = 0;
		int32_t L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		int32_t L_153 = L_152;
		V_10 = L_153;
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (int32_t)L_153);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_154 = ___hn9;
		NullCheck(L_154);
		int32_t* L_155 = ((L_154)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_156 = *((int32_t*)L_155);
		int32_t L_157 = V_14;
		*((int32_t*)L_155) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_156, (int32_t)L_157));
		int32_t L_158 = V_3;
		if (!L_158)
		{
			goto IL_02ce;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_159 = __this->get_x_11();
		int32_t L_160 = V_3;
		int32_t L_161 = V_4;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(L_160), (int32_t)L_161);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_162 = __this->get_r_8();
		int32_t L_163 = V_5;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int8_t)((int8_t)L_163)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_164 = __this->get_r_8();
		int32_t L_165 = V_7;
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int8_t)((int8_t)L_165)));
		int32_t L_166 = V_4;
		int32_t L_167 = V_11;
		int32_t L_168 = V_7;
		int32_t L_169;
		L_169 = SharedUtils_URShift_m7BB716EA3AB480F0A85A8BE031249FC373B4C3BB(L_166, ((int32_t)il2cpp_codegen_subtract((int32_t)L_167, (int32_t)L_168)), /*hidden argument*/NULL);
		V_5 = L_169;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_170 = __this->get_r_8();
		int32_t L_171 = V_10;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_172 = __this->get_u_9();
		int32_t L_173 = V_3;
		NullCheck(L_172);
		int32_t L_174 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_173, (int32_t)1));
		int32_t L_175 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		int32_t L_176 = V_5;
		NullCheck(L_170);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_171, (int32_t)L_175)), (int32_t)L_176)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_177 = __this->get_r_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_178 = ___hp8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_179 = __this->get_u_9();
		int32_t L_180 = V_3;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_180, (int32_t)1));
		int32_t L_182 = (L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183 = V_5;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_177, 0, (RuntimeArray *)(RuntimeArray *)L_178, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_182, (int32_t)L_183)), (int32_t)3)), 3, /*hidden argument*/NULL);
		goto IL_02d4;
	}

IL_02ce:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_184 = ___t6;
		int32_t L_185 = V_10;
		NullCheck(L_184);
		(L_184)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_185);
	}

IL_02d4:
	{
		int32_t L_186 = V_6;
		int32_t L_187 = V_11;
		int32_t L_188 = V_7;
		if ((((int32_t)L_186) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_187, (int32_t)L_188)))))
		{
			goto IL_01bd;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_189 = __this->get_r_8();
		int32_t L_190 = V_6;
		int32_t L_191 = V_11;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int8_t)((int8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_190, (int32_t)L_191)))));
		int32_t L_192 = V_9;
		int32_t L_193 = ___n2;
		if ((((int32_t)L_192) < ((int32_t)L_193)))
		{
			goto IL_0302;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_194 = __this->get_r_8();
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)192));
		goto IL_036b;
	}

IL_0302:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_195 = ___v10;
		int32_t L_196 = V_9;
		NullCheck(L_195);
		int32_t L_197 = L_196;
		int32_t L_198 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = ___s3;
		if ((((int32_t)L_198) >= ((int32_t)L_199)))
		{
			goto IL_0339;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_200 = __this->get_r_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_201 = ___v10;
		int32_t L_202 = V_9;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		int32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		G_B51_0 = 0;
		G_B51_1 = L_200;
		if ((((int32_t)L_204) < ((int32_t)((int32_t)256))))
		{
			G_B52_0 = 0;
			G_B52_1 = L_200;
			goto IL_0322;
		}
	}
	{
		G_B53_0 = ((int32_t)96);
		G_B53_1 = G_B51_0;
		G_B53_2 = G_B51_1;
		goto IL_0323;
	}

IL_0322:
	{
		G_B53_0 = 0;
		G_B53_1 = G_B52_0;
		G_B53_2 = G_B52_1;
	}

IL_0323:
	{
		NullCheck(G_B53_2);
		(G_B53_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B53_1), (int32_t)((int8_t)((int8_t)G_B53_0)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_205 = __this->get_r_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_206 = ___v10;
		int32_t L_207 = V_9;
		int32_t L_208 = L_207;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_208, (int32_t)1));
		NullCheck(L_206);
		int32_t L_209 = L_208;
		int32_t L_210 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		NullCheck(L_205);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_210);
		goto IL_036b;
	}

IL_0339:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_211 = __this->get_r_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_212 = ___e5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_213 = ___v10;
		int32_t L_214 = V_9;
		NullCheck(L_213);
		int32_t L_215 = L_214;
		int32_t L_216 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = ___s3;
		NullCheck(L_212);
		int32_t L_218 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_216, (int32_t)L_217));
		int32_t L_219 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		NullCheck(L_211);
		(L_211)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int8_t)((int8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_219, (int32_t)((int32_t)16))), (int32_t)((int32_t)64))))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_220 = __this->get_r_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_221 = ___d4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_222 = ___v10;
		int32_t L_223 = V_9;
		int32_t L_224 = L_223;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_224, (int32_t)1));
		NullCheck(L_222);
		int32_t L_225 = L_224;
		int32_t L_226 = (L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = ___s3;
		NullCheck(L_221);
		int32_t L_228 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_226, (int32_t)L_227));
		int32_t L_229 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_228));
		NullCheck(L_220);
		(L_220)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_229);
	}

IL_036b:
	{
		int32_t L_230 = V_6;
		int32_t L_231 = V_11;
		V_1 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_230, (int32_t)L_231))&(int32_t)((int32_t)31)))));
		int32_t L_232 = V_4;
		int32_t L_233 = V_11;
		int32_t L_234;
		L_234 = SharedUtils_URShift_m7BB716EA3AB480F0A85A8BE031249FC373B4C3BB(L_232, L_233, /*hidden argument*/NULL);
		V_5 = L_234;
		goto IL_039f;
	}

IL_0383:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_235 = __this->get_r_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_236 = ___hp8;
		int32_t L_237 = V_10;
		int32_t L_238 = V_5;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_235, 0, (RuntimeArray *)(RuntimeArray *)L_236, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_237, (int32_t)L_238)), (int32_t)3)), 3, /*hidden argument*/NULL);
		int32_t L_239 = V_5;
		int32_t L_240 = V_1;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_239, (int32_t)L_240));
	}

IL_039f:
	{
		int32_t L_241 = V_5;
		int32_t L_242 = V_14;
		if ((((int32_t)L_241) < ((int32_t)L_242)))
		{
			goto IL_0383;
		}
	}
	{
		int32_t L_243 = V_6;
		V_5 = ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_243, (int32_t)1))&(int32_t)((int32_t)31)))));
		goto IL_03c3;
	}

IL_03b2:
	{
		int32_t L_244 = V_4;
		int32_t L_245 = V_5;
		V_4 = ((int32_t)((int32_t)L_244^(int32_t)L_245));
		int32_t L_246 = V_5;
		int32_t L_247;
		L_247 = SharedUtils_URShift_m7BB716EA3AB480F0A85A8BE031249FC373B4C3BB(L_246, 1, /*hidden argument*/NULL);
		V_5 = L_247;
	}

IL_03c3:
	{
		int32_t L_248 = V_4;
		int32_t L_249 = V_5;
		if (((int32_t)((int32_t)L_248&(int32_t)L_249)))
		{
			goto IL_03b2;
		}
	}
	{
		int32_t L_250 = V_4;
		int32_t L_251 = V_5;
		V_4 = ((int32_t)((int32_t)L_250^(int32_t)L_251));
		int32_t L_252 = V_11;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_252&(int32_t)((int32_t)31))))), (int32_t)1));
		goto IL_03f4;
	}

IL_03de:
	{
		int32_t L_253 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_253, (int32_t)1));
		int32_t L_254 = V_11;
		int32_t L_255 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_254, (int32_t)L_255));
		int32_t L_256 = V_11;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_256&(int32_t)((int32_t)31))))), (int32_t)1));
	}

IL_03f4:
	{
		int32_t L_257 = V_4;
		int32_t L_258 = V_8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_259 = __this->get_x_11();
		int32_t L_260 = V_3;
		NullCheck(L_259);
		int32_t L_261 = L_260;
		int32_t L_262 = (L_259)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		if ((!(((uint32_t)((int32_t)((int32_t)L_257&(int32_t)L_258))) == ((uint32_t)L_262))))
		{
			goto IL_03de;
		}
	}

IL_0403:
	{
		int32_t L_263 = V_0;
		int32_t L_264 = L_263;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_264, (int32_t)1));
		if (L_264)
		{
			goto IL_02d4;
		}
	}
	{
		int32_t L_265 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_265, (int32_t)1));
	}

IL_0413:
	{
		int32_t L_266 = V_6;
		int32_t L_267 = V_2;
		if ((((int32_t)L_266) <= ((int32_t)L_267)))
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_268 = V_13;
		if (!L_268)
		{
			goto IL_0423;
		}
	}
	{
		int32_t L_269 = V_2;
		if ((!(((uint32_t)L_269) == ((uint32_t)1))))
		{
			goto IL_0425;
		}
	}

IL_0423:
	{
		return 0;
	}

IL_0425:
	{
		return ((int32_t)-5);
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.InfTree::inflate_trees_bits(System.Int32[],System.Int32[],System.Int32[],System.Int32[],SharpCompress.Compressors.Deflate.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_bits_m1A3C2BF27262AA9283006D2B428BBF4989C96967 (InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___c0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bb1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tb2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp3, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___z4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		InfTree_initWorkArea_m891E4AAE5D4B981037C287B2E5678B7E52832003(__this, ((int32_t)19), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_hn_7();
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___c0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___tb2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ___bb1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___hp3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = __this->get_hn_7();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = __this->get_v_10();
		int32_t L_7;
		L_7 = InfTree_huft_build_m0CBBE74E32F752697E4E9CB54088B58B48C6B4E5(__this, L_1, 0, ((int32_t)19), ((int32_t)19), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0043;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_9 = ___z4;
		NullCheck(L_9);
		L_9->set_Message_8(_stringLiteral90581047810EB87A7277461DDA1C1493B91DAAA4);
		goto IL_005c;
	}

IL_0043:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-5))))
		{
			goto IL_004d;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = ___bb1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (L_13)
		{
			goto IL_005c;
		}
	}

IL_004d:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_14 = ___z4;
		NullCheck(L_14);
		L_14->set_Message_8(_stringLiteral13A5361A51002BE0AE3A86C6F54E7ADAC4F2CE94);
		V_0 = ((int32_t)-3);
	}

IL_005c:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.InfTree::inflate_trees_dynamic(System.Int32,System.Int32,System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.Int32[],SharpCompress.Compressors.Deflate.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_dynamic_m082A71C934CD06EDDDDB1D1D32D21EB64FA6F92A (InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * __this, int32_t ___nl0, int32_t ___nd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___c2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bl3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bd4, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl5, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td6, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___hp7, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___z8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		InfTree_initWorkArea_m891E4AAE5D4B981037C287B2E5678B7E52832003(__this, ((int32_t)288), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_hn_7();
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___c2;
		int32_t L_2 = ___nl0;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ((InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var))->get_cplens_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ((InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var))->get_cplext_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ___tl5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = ___bl3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = ___hp7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_hn_7();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = __this->get_v_10();
		int32_t L_10;
		L_10 = InfTree_huft_build_m0CBBE74E32F752697E4E9CB54088B58B48C6B4E5(__this, L_1, 0, L_2, ((int32_t)257), L_3, L_4, L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0048;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = ___bl3;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_0071;
		}
	}

IL_0048:
	{
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_005b;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_16 = ___z8;
		NullCheck(L_16);
		L_16->set_Message_8(_stringLiteral527C1A81C9577E20EFCD218DE9B39383A8F64CD0);
		goto IL_006f;
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-4))))
		{
			goto IL_006f;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_18 = ___z8;
		NullCheck(L_18);
		L_18->set_Message_8(_stringLiteralE960A05B0E3F3B1A832A46162FB0C2332497D8F4);
		V_0 = ((int32_t)-3);
	}

IL_006f:
	{
		int32_t L_19 = V_0;
		return L_19;
	}

IL_0071:
	{
		InfTree_initWorkArea_m891E4AAE5D4B981037C287B2E5678B7E52832003(__this, ((int32_t)288), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = ___c2;
		int32_t L_21 = ___nl0;
		int32_t L_22 = ___nd1;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = ((InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var))->get_cpdist_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = ((InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var))->get_cpdext_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = ___td6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = ___bd4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = ___hp7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = __this->get_hn_7();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = __this->get_v_10();
		int32_t L_30;
		L_30 = InfTree_huft_build_m0CBBE74E32F752697E4E9CB54088B58B48C6B4E5(__this, L_20, L_21, L_22, 0, L_23, L_24, L_25, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		V_0 = L_30;
		int32_t L_31 = V_0;
		if (L_31)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = ___bd4;
		NullCheck(L_32);
		int32_t L_33 = 0;
		int32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if (L_34)
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_35 = ___nl0;
		if ((((int32_t)L_35) <= ((int32_t)((int32_t)257))))
		{
			goto IL_00f3;
		}
	}

IL_00b4:
	{
		int32_t L_36 = V_0;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_00c7;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_37 = ___z8;
		NullCheck(L_37);
		L_37->set_Message_8(_stringLiteral5A888468814C6717D8F1F53C27076E49BCF685AE);
		goto IL_00f1;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_00dd;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_39 = ___z8;
		NullCheck(L_39);
		L_39->set_Message_8(_stringLiteralCFBC3A862771D0485E915BD869029175AD24B07C);
		V_0 = ((int32_t)-3);
		goto IL_00f1;
	}

IL_00dd:
	{
		int32_t L_40 = V_0;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)-4))))
		{
			goto IL_00f1;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_41 = ___z8;
		NullCheck(L_41);
		L_41->set_Message_8(_stringLiteral61CF8C6E69A5020616A55D8196F59FE4DE0129D6);
		V_0 = ((int32_t)-3);
	}

IL_00f1:
	{
		int32_t L_42 = V_0;
		return L_42;
	}

IL_00f3:
	{
		return 0;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.InfTree::inflate_trees_fixed(System.Int32[],System.Int32[],System.Int32[][],System.Int32[][],SharpCompress.Compressors.Deflate.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InfTree_inflate_trees_fixed_mCE1A419F62D4BBE86BB4BF2CE84058F0629FE629 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bl0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___bd1, Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___tl2, Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___td3, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___z4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___bl0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___bd1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)5);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_2 = ___tl2;
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = ((InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var))->get_fixed_tl_0();
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_3);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_4 = ___td3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = ((InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var))->get_fixed_td_1();
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_5);
		return 0;
	}
}
// System.Void SharpCompress.Compressors.Deflate.InfTree::initWorkArea(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree_initWorkArea_m891E4AAE5D4B981037C287B2E5678B7E52832003 (InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * __this, int32_t ___vsize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_hn_7();
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_hn_7(L_1);
		int32_t L_2 = ___vsize0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_v_10(L_3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_c_6(L_4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_r_8(L_5);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		__this->set_u_9(L_6);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->set_x_11(L_7);
		return;
	}

IL_0054:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_v_10();
		NullCheck(L_8);
		int32_t L_9 = ___vsize0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))) >= ((int32_t)L_9)))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_10 = ___vsize0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->set_v_10(L_11);
	}

IL_006b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = __this->get_v_10();
		int32_t L_13 = ___vsize0;
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_12, 0, L_13, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = __this->get_c_6();
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_14, 0, ((int32_t)16), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = __this->get_r_8();
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = __this->get_r_8();
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = __this->get_r_8();
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = __this->get_u_9();
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_18, 0, ((int32_t)15), /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = __this->get_x_11();
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_19, 0, ((int32_t)16), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.InfTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__ctor_m94AA20A5291C693B6BBE845D603ABFA25AB89729 (InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.InfTree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfTree__cctor_mD109E3E69FFB8EC45FCF3B4C27826572FF77759D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____1B180C6E41F096D53222F5E8EF558B78182CA401_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____79D521E6E3E55103005E9CC3FA43B3174FAF090F_7_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____8ED8F61DAA454B49CD5059AE4486C59174324E9E_10_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____A474A0BEC4E2CE8491839502AE85F6EA8504C6BD_12_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____D068832E6B13A623916709C1E0E25ADCBE7B455F_13_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____DACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_14_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1536));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____A474A0BEC4E2CE8491839502AE85F6EA8504C6BD_12_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var))->set_fixed_tl_0(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)96));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____1B180C6E41F096D53222F5E8EF558B78182CA401_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var))->set_fixed_td_1(L_4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____8ED8F61DAA454B49CD5059AE4486C59174324E9E_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var))->set_cplens_2(L_7);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)31));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = L_9;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____DACFCC5E985D9E113ABB74724C5D3CC4FDC4FB8A_14_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var))->set_cplext_3(L_10);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = L_12;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____D068832E6B13A623916709C1E0E25ADCBE7B455F_13_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		((InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var))->set_cpdist_4(L_13);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = L_15;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____79D521E6E3E55103005E9CC3FA43B3174FAF090F_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_16, L_17, /*hidden argument*/NULL);
		((InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_StaticFields*)il2cpp_codegen_static_fields_for(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var))->set_cpdext_5(L_16);
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
// System.Void SharpCompress.Compressors.Deflate.InflateBlocks::.ctor(SharpCompress.Compressors.Deflate.ZlibCodec,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks__ctor_m5F917E3C54C5588199A37B6F9FE9799E7C22E2B9 (InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * __this, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___codec0, RuntimeObject * ___checkfn1, int32_t ___w2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_bb_2(L_0);
		InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * L_1 = (InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 *)il2cpp_codegen_object_new(InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1_il2cpp_TypeInfo_var);
		InflateCodes__ctor_m2B38E7CDE678551CBAC32587F0F71E8F09D09C72(L_1, /*hidden argument*/NULL);
		__this->set_codes_8(L_1);
		InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * L_2 = (InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E *)il2cpp_codegen_object_new(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var);
		InfTree__ctor_m94AA20A5291C693B6BBE845D603ABFA25AB89729(L_2, /*hidden argument*/NULL);
		__this->set_inftree_12(L_2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_tb_18(L_3);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_4 = ___codec0;
		__this->set__codec_1(L_4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4320));
		__this->set_hufts_10(L_5);
		int32_t L_6 = ___w2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_window_19(L_7);
		int32_t L_8 = ___w2;
		__this->set_end_9(L_8);
		RuntimeObject * L_9 = ___checkfn1;
		__this->set_checkfn_7(L_9);
		__this->set_mode_15(0);
		uint32_t L_10;
		L_10 = InflateBlocks_Reset_m20A9C3E2617933A4CCFF4A8598A629B6E11E1C64(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt32 SharpCompress.Compressors.Deflate.InflateBlocks::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InflateBlocks_Reset_m20A9C3E2617933A4CCFF4A8598A629B6E11E1C64 (InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t G_B2_0 = 0;
	uint32_t G_B1_0 = 0;
	{
		uint32_t L_0 = __this->get_check_6();
		__this->set_mode_15(0);
		__this->set_bitk_4(0);
		__this->set_bitb_3(0);
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->set_writeAt_20(L_1);
		int32_t L_2 = V_0;
		__this->set_readAt_16(L_2);
		RuntimeObject * L_3 = __this->get_checkfn_7();
		G_B1_0 = L_0;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0050;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_4 = __this->get__codec_1();
		IL2CPP_RUNTIME_CLASS_INIT(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = Adler_Adler32_mC43A8AA565B6B644F4FAC3378372FEC0D35CC83C(0, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL, 0, 0, /*hidden argument*/NULL);
		uint32_t L_6 = L_5;
		V_1 = L_6;
		__this->set_check_6(L_6);
		uint32_t L_7 = V_1;
		NullCheck(L_4);
		L_4->set__Adler32_11(L_7);
		G_B2_0 = G_B1_0;
	}

IL_0050:
	{
		return G_B2_0;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.InflateBlocks::Process(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Process_mF0DEEFADE2587D1AD65BF9503E4AF29FD0027CA4 (InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * __this, int32_t ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_9 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_10 = NULL;
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* V_11 = NULL;
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_17 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_18 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_19 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_20 = NULL;
	int32_t G_B3_0 = 0;
	InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * G_B28_0 = NULL;
	InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * G_B25_0 = NULL;
	InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * G_B27_0 = NULL;
	InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * G_B26_0 = NULL;
	int32_t G_B29_0 = 0;
	InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * G_B29_1 = NULL;
	int32_t G_B38_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B48_0 = 0;
	InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * G_B58_0 = NULL;
	InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * G_B57_0 = NULL;
	int32_t G_B59_0 = 0;
	InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * G_B59_1 = NULL;
	int32_t G_B100_0 = 0;
	int32_t G_B103_0 = 0;
	int32_t G_B116_0 = 0;
	int32_t G_B129_0 = 0;
	int32_t G_B135_0 = 0;
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_0 = __this->get__codec_1();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_NextIn_1();
		V_3 = L_1;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_2 = __this->get__codec_1();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_AvailableBytesIn_2();
		V_4 = L_3;
		int32_t L_4 = __this->get_bitb_3();
		V_1 = L_4;
		int32_t L_5 = __this->get_bitk_4();
		V_2 = L_5;
		int32_t L_6 = __this->get_writeAt_20();
		V_5 = L_6;
		int32_t L_7 = V_5;
		int32_t L_8 = __this->get_readAt_16();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_9 = __this->get_end_9();
		int32_t L_10 = V_5;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10));
		goto IL_004f;
	}

IL_0044:
	{
		int32_t L_11 = __this->get_readAt_16();
		int32_t L_12 = V_5;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)L_12)), (int32_t)1));
	}

IL_004f:
	{
		V_6 = G_B3_0;
	}

IL_0051:
	{
		int32_t L_13 = __this->get_mode_15();
		V_7 = L_13;
		int32_t L_14 = V_7;
		switch (L_14)
		{
			case 0:
			{
				goto IL_0116;
			}
			case 1:
			{
				goto IL_02eb;
			}
			case 2:
			{
				goto IL_03ad;
			}
			case 3:
			{
				goto IL_061c;
			}
			case 4:
			{
				goto IL_07d1;
			}
			case 5:
			{
				goto IL_08c4;
			}
			case 6:
			{
				goto IL_0cc9;
			}
			case 7:
			{
				goto IL_0da2;
			}
			case 8:
			{
				goto IL_0e49;
			}
			case 9:
			{
				goto IL_0ea3;
			}
		}
	}
	{
		goto IL_0efe;
	}

IL_008d:
	{
		int32_t L_15 = V_4;
		if (!L_15)
		{
			goto IL_0096;
		}
	}
	{
		___r0 = 0;
		goto IL_00ed;
	}

IL_0096:
	{
		int32_t L_16 = V_1;
		__this->set_bitb_3(L_16);
		int32_t L_17 = V_2;
		__this->set_bitk_4(L_17);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_18 = __this->get__codec_1();
		int32_t L_19 = V_4;
		NullCheck(L_18);
		L_18->set_AvailableBytesIn_2(L_19);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_20 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_21 = L_20;
		NullCheck(L_21);
		int64_t L_22 = L_21->get_TotalBytesIn_3();
		int32_t L_23 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_24 = __this->get__codec_1();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_NextIn_1();
		NullCheck(L_21);
		L_21->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_22, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_25)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_26 = __this->get__codec_1();
		int32_t L_27 = V_3;
		NullCheck(L_26);
		L_26->set_NextIn_1(L_27);
		int32_t L_28 = V_5;
		__this->set_writeAt_20(L_28);
		int32_t L_29 = ___r0;
		int32_t L_30;
		L_30 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_00ed:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
		int32_t L_32 = V_1;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_33 = __this->get__codec_1();
		NullCheck(L_33);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = L_33->get_InputBuffer_0();
		int32_t L_35 = V_3;
		int32_t L_36 = L_35;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		NullCheck(L_34);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = V_2;
		V_1 = ((int32_t)((int32_t)L_32|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_38&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_39&(int32_t)((int32_t)31)))))));
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)8));
	}

IL_0116:
	{
		int32_t L_41 = V_2;
		if ((((int32_t)L_41) < ((int32_t)3)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_42 = V_1;
		V_0 = ((int32_t)((int32_t)L_42&(int32_t)7));
		int32_t L_43 = V_0;
		__this->set_last_13(((int32_t)((int32_t)L_43&(int32_t)1)));
		int32_t L_44 = V_0;
		V_8 = ((int32_t)((uint32_t)L_44>>1));
		uint32_t L_45 = V_8;
		switch (L_45)
		{
			case 0:
			{
				goto IL_014b;
			}
			case 1:
			{
				goto IL_016e;
			}
			case 2:
			{
				goto IL_01d3;
			}
			case 3:
			{
				goto IL_01e7;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_014b:
	{
		int32_t L_46 = V_1;
		V_1 = ((int32_t)((int32_t)L_46>>(int32_t)3));
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)3));
		int32_t L_48 = V_2;
		V_0 = ((int32_t)((int32_t)L_48&(int32_t)7));
		int32_t L_49 = V_1;
		int32_t L_50 = V_0;
		V_1 = ((int32_t)((int32_t)L_49>>(int32_t)((int32_t)((int32_t)L_50&(int32_t)((int32_t)31)))));
		int32_t L_51 = V_2;
		int32_t L_52 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)L_52));
		__this->set_mode_15(1);
		goto IL_0051;
	}

IL_016e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_9 = L_53;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_54 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_10 = L_54;
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_55 = (Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)SZArrayNew(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var, (uint32_t)1);
		V_11 = L_55;
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_56 = (Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)SZArrayNew(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var, (uint32_t)1);
		V_12 = L_56;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = V_9;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_58 = V_10;
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_59 = V_11;
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_60 = V_12;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_61 = __this->get__codec_1();
		IL2CPP_RUNTIME_CLASS_INIT(InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E_il2cpp_TypeInfo_var);
		int32_t L_62;
		L_62 = InfTree_inflate_trees_fixed_mCE1A419F62D4BBE86BB4BF2CE84058F0629FE629(L_57, L_58, L_59, L_60, L_61, /*hidden argument*/NULL);
		InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * L_63 = __this->get_codes_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = V_9;
		NullCheck(L_64);
		int32_t L_65 = 0;
		int32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = V_10;
		NullCheck(L_67);
		int32_t L_68 = 0;
		int32_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_70 = V_11;
		NullCheck(L_70);
		int32_t L_71 = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_72 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_73 = V_12;
		NullCheck(L_73);
		int32_t L_74 = 0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_75 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_63);
		InflateCodes_Init_mF8CA9661723C58C91BC091BC5F6371DB33C04A8E(L_63, L_66, L_69, L_72, 0, L_75, 0, /*hidden argument*/NULL);
		int32_t L_76 = V_1;
		V_1 = ((int32_t)((int32_t)L_76>>(int32_t)3));
		int32_t L_77 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)3));
		__this->set_mode_15(6);
		goto IL_0051;
	}

IL_01d3:
	{
		int32_t L_78 = V_1;
		V_1 = ((int32_t)((int32_t)L_78>>(int32_t)3));
		int32_t L_79 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)3));
		__this->set_mode_15(3);
		goto IL_0051;
	}

IL_01e7:
	{
		int32_t L_80 = V_1;
		V_1 = ((int32_t)((int32_t)L_80>>(int32_t)3));
		int32_t L_81 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)3));
		__this->set_mode_15(((int32_t)9));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_82 = __this->get__codec_1();
		NullCheck(L_82);
		L_82->set_Message_8(_stringLiteral9A971A9294400EA492DFEFCF8370FA1EBA838E06);
		___r0 = ((int32_t)-3);
		int32_t L_83 = V_1;
		__this->set_bitb_3(L_83);
		int32_t L_84 = V_2;
		__this->set_bitk_4(L_84);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_85 = __this->get__codec_1();
		int32_t L_86 = V_4;
		NullCheck(L_85);
		L_85->set_AvailableBytesIn_2(L_86);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_87 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_88 = L_87;
		NullCheck(L_88);
		int64_t L_89 = L_88->get_TotalBytesIn_3();
		int32_t L_90 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_91 = __this->get__codec_1();
		NullCheck(L_91);
		int32_t L_92 = L_91->get_NextIn_1();
		NullCheck(L_88);
		L_88->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_89, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)L_92)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_93 = __this->get__codec_1();
		int32_t L_94 = V_3;
		NullCheck(L_93);
		L_93->set_NextIn_1(L_94);
		int32_t L_95 = V_5;
		__this->set_writeAt_20(L_95);
		int32_t L_96 = ___r0;
		int32_t L_97;
		L_97 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_96, /*hidden argument*/NULL);
		return L_97;
	}

IL_0262:
	{
		int32_t L_98 = V_4;
		if (!L_98)
		{
			goto IL_026b;
		}
	}
	{
		___r0 = 0;
		goto IL_02c2;
	}

IL_026b:
	{
		int32_t L_99 = V_1;
		__this->set_bitb_3(L_99);
		int32_t L_100 = V_2;
		__this->set_bitk_4(L_100);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_101 = __this->get__codec_1();
		int32_t L_102 = V_4;
		NullCheck(L_101);
		L_101->set_AvailableBytesIn_2(L_102);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_103 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_104 = L_103;
		NullCheck(L_104);
		int64_t L_105 = L_104->get_TotalBytesIn_3();
		int32_t L_106 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_107 = __this->get__codec_1();
		NullCheck(L_107);
		int32_t L_108 = L_107->get_NextIn_1();
		NullCheck(L_104);
		L_104->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_105, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)L_108)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_109 = __this->get__codec_1();
		int32_t L_110 = V_3;
		NullCheck(L_109);
		L_109->set_NextIn_1(L_110);
		int32_t L_111 = V_5;
		__this->set_writeAt_20(L_111);
		int32_t L_112 = ___r0;
		int32_t L_113;
		L_113 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_112, /*hidden argument*/NULL);
		return L_113;
	}

IL_02c2:
	{
		int32_t L_114 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_114, (int32_t)1));
		int32_t L_115 = V_1;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_116 = __this->get__codec_1();
		NullCheck(L_116);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_117 = L_116->get_InputBuffer_0();
		int32_t L_118 = V_3;
		int32_t L_119 = L_118;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1));
		NullCheck(L_117);
		int32_t L_120 = L_119;
		uint8_t L_121 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		int32_t L_122 = V_2;
		V_1 = ((int32_t)((int32_t)L_115|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_121&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_122&(int32_t)((int32_t)31)))))));
		int32_t L_123 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)8));
	}

IL_02eb:
	{
		int32_t L_124 = V_2;
		if ((((int32_t)L_124) < ((int32_t)((int32_t)32))))
		{
			goto IL_0262;
		}
	}
	{
		int32_t L_125 = V_1;
		int32_t L_126 = V_1;
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((~L_125))>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)65535)))) == ((int32_t)((int32_t)((int32_t)L_126&(int32_t)((int32_t)65535))))))
		{
			goto IL_037a;
		}
	}
	{
		__this->set_mode_15(((int32_t)9));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_127 = __this->get__codec_1();
		NullCheck(L_127);
		L_127->set_Message_8(_stringLiteralCC98F8D5063D43F6A1D8B5158D9DE47EAC048113);
		___r0 = ((int32_t)-3);
		int32_t L_128 = V_1;
		__this->set_bitb_3(L_128);
		int32_t L_129 = V_2;
		__this->set_bitk_4(L_129);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_130 = __this->get__codec_1();
		int32_t L_131 = V_4;
		NullCheck(L_130);
		L_130->set_AvailableBytesIn_2(L_131);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_132 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_133 = L_132;
		NullCheck(L_133);
		int64_t L_134 = L_133->get_TotalBytesIn_3();
		int32_t L_135 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_136 = __this->get__codec_1();
		NullCheck(L_136);
		int32_t L_137 = L_136->get_NextIn_1();
		NullCheck(L_133);
		L_133->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_134, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_135, (int32_t)L_137)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_138 = __this->get__codec_1();
		int32_t L_139 = V_3;
		NullCheck(L_138);
		L_138->set_NextIn_1(L_139);
		int32_t L_140 = V_5;
		__this->set_writeAt_20(L_140);
		int32_t L_141 = ___r0;
		int32_t L_142;
		L_142 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_141, /*hidden argument*/NULL);
		return L_142;
	}

IL_037a:
	{
		int32_t L_143 = V_1;
		__this->set_left_14(((int32_t)((int32_t)L_143&(int32_t)((int32_t)65535))));
		int32_t L_144 = 0;
		V_2 = L_144;
		V_1 = L_144;
		int32_t L_145 = __this->get_left_14();
		G_B25_0 = __this;
		if (L_145)
		{
			G_B28_0 = __this;
			goto IL_03a2;
		}
	}
	{
		int32_t L_146 = __this->get_last_13();
		G_B26_0 = G_B25_0;
		if (L_146)
		{
			G_B27_0 = G_B25_0;
			goto IL_039f;
		}
	}
	{
		G_B29_0 = 0;
		G_B29_1 = G_B26_0;
		goto IL_03a3;
	}

IL_039f:
	{
		G_B29_0 = 7;
		G_B29_1 = G_B27_0;
		goto IL_03a3;
	}

IL_03a2:
	{
		G_B29_0 = 2;
		G_B29_1 = G_B28_0;
	}

IL_03a3:
	{
		NullCheck(G_B29_1);
		G_B29_1->set_mode_15(G_B29_0);
		goto IL_0051;
	}

IL_03ad:
	{
		int32_t L_147 = V_4;
		if (L_147)
		{
			goto IL_0408;
		}
	}
	{
		int32_t L_148 = V_1;
		__this->set_bitb_3(L_148);
		int32_t L_149 = V_2;
		__this->set_bitk_4(L_149);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_150 = __this->get__codec_1();
		int32_t L_151 = V_4;
		NullCheck(L_150);
		L_150->set_AvailableBytesIn_2(L_151);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_152 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_153 = L_152;
		NullCheck(L_153);
		int64_t L_154 = L_153->get_TotalBytesIn_3();
		int32_t L_155 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_156 = __this->get__codec_1();
		NullCheck(L_156);
		int32_t L_157 = L_156->get_NextIn_1();
		NullCheck(L_153);
		L_153->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_154, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_155, (int32_t)L_157)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_158 = __this->get__codec_1();
		int32_t L_159 = V_3;
		NullCheck(L_158);
		L_158->set_NextIn_1(L_159);
		int32_t L_160 = V_5;
		__this->set_writeAt_20(L_160);
		int32_t L_161 = ___r0;
		int32_t L_162;
		L_162 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_161, /*hidden argument*/NULL);
		return L_162;
	}

IL_0408:
	{
		int32_t L_163 = V_6;
		if (L_163)
		{
			goto IL_051a;
		}
	}
	{
		int32_t L_164 = V_5;
		int32_t L_165 = __this->get_end_9();
		if ((!(((uint32_t)L_164) == ((uint32_t)L_165))))
		{
			goto IL_0446;
		}
	}
	{
		int32_t L_166 = __this->get_readAt_16();
		if (!L_166)
		{
			goto IL_0446;
		}
	}
	{
		V_5 = 0;
		int32_t L_167 = V_5;
		int32_t L_168 = __this->get_readAt_16();
		if ((((int32_t)L_167) < ((int32_t)L_168)))
		{
			goto IL_0439;
		}
	}
	{
		int32_t L_169 = __this->get_end_9();
		int32_t L_170 = V_5;
		G_B38_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_169, (int32_t)L_170));
		goto IL_0444;
	}

IL_0439:
	{
		int32_t L_171 = __this->get_readAt_16();
		int32_t L_172 = V_5;
		G_B38_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_171, (int32_t)L_172)), (int32_t)1));
	}

IL_0444:
	{
		V_6 = G_B38_0;
	}

IL_0446:
	{
		int32_t L_173 = V_6;
		if (L_173)
		{
			goto IL_051a;
		}
	}
	{
		int32_t L_174 = V_5;
		__this->set_writeAt_20(L_174);
		int32_t L_175 = ___r0;
		int32_t L_176;
		L_176 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_175, /*hidden argument*/NULL);
		___r0 = L_176;
		int32_t L_177 = __this->get_writeAt_20();
		V_5 = L_177;
		int32_t L_178 = V_5;
		int32_t L_179 = __this->get_readAt_16();
		if ((((int32_t)L_178) < ((int32_t)L_179)))
		{
			goto IL_047b;
		}
	}
	{
		int32_t L_180 = __this->get_end_9();
		int32_t L_181 = V_5;
		G_B43_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_180, (int32_t)L_181));
		goto IL_0486;
	}

IL_047b:
	{
		int32_t L_182 = __this->get_readAt_16();
		int32_t L_183 = V_5;
		G_B43_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_182, (int32_t)L_183)), (int32_t)1));
	}

IL_0486:
	{
		V_6 = G_B43_0;
		int32_t L_184 = V_5;
		int32_t L_185 = __this->get_end_9();
		if ((!(((uint32_t)L_184) == ((uint32_t)L_185))))
		{
			goto IL_04bf;
		}
	}
	{
		int32_t L_186 = __this->get_readAt_16();
		if (!L_186)
		{
			goto IL_04bf;
		}
	}
	{
		V_5 = 0;
		int32_t L_187 = V_5;
		int32_t L_188 = __this->get_readAt_16();
		if ((((int32_t)L_187) < ((int32_t)L_188)))
		{
			goto IL_04b2;
		}
	}
	{
		int32_t L_189 = __this->get_end_9();
		int32_t L_190 = V_5;
		G_B48_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_189, (int32_t)L_190));
		goto IL_04bd;
	}

IL_04b2:
	{
		int32_t L_191 = __this->get_readAt_16();
		int32_t L_192 = V_5;
		G_B48_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_191, (int32_t)L_192)), (int32_t)1));
	}

IL_04bd:
	{
		V_6 = G_B48_0;
	}

IL_04bf:
	{
		int32_t L_193 = V_6;
		if (L_193)
		{
			goto IL_051a;
		}
	}
	{
		int32_t L_194 = V_1;
		__this->set_bitb_3(L_194);
		int32_t L_195 = V_2;
		__this->set_bitk_4(L_195);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_196 = __this->get__codec_1();
		int32_t L_197 = V_4;
		NullCheck(L_196);
		L_196->set_AvailableBytesIn_2(L_197);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_198 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_199 = L_198;
		NullCheck(L_199);
		int64_t L_200 = L_199->get_TotalBytesIn_3();
		int32_t L_201 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_202 = __this->get__codec_1();
		NullCheck(L_202);
		int32_t L_203 = L_202->get_NextIn_1();
		NullCheck(L_199);
		L_199->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_200, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_201, (int32_t)L_203)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_204 = __this->get__codec_1();
		int32_t L_205 = V_3;
		NullCheck(L_204);
		L_204->set_NextIn_1(L_205);
		int32_t L_206 = V_5;
		__this->set_writeAt_20(L_206);
		int32_t L_207 = ___r0;
		int32_t L_208;
		L_208 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_207, /*hidden argument*/NULL);
		return L_208;
	}

IL_051a:
	{
		___r0 = 0;
		int32_t L_209 = __this->get_left_14();
		V_0 = L_209;
		int32_t L_210 = V_0;
		int32_t L_211 = V_4;
		if ((((int32_t)L_210) <= ((int32_t)L_211)))
		{
			goto IL_052c;
		}
	}
	{
		int32_t L_212 = V_4;
		V_0 = L_212;
	}

IL_052c:
	{
		int32_t L_213 = V_0;
		int32_t L_214 = V_6;
		if ((((int32_t)L_213) <= ((int32_t)L_214)))
		{
			goto IL_0534;
		}
	}
	{
		int32_t L_215 = V_6;
		V_0 = L_215;
	}

IL_0534:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_216 = __this->get__codec_1();
		NullCheck(L_216);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_217 = L_216->get_InputBuffer_0();
		int32_t L_218 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_219 = __this->get_window_19();
		int32_t L_220 = V_5;
		int32_t L_221 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_217, L_218, (RuntimeArray *)(RuntimeArray *)L_219, L_220, L_221, /*hidden argument*/NULL);
		int32_t L_222 = V_3;
		int32_t L_223 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_222, (int32_t)L_223));
		int32_t L_224 = V_4;
		int32_t L_225 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_224, (int32_t)L_225));
		int32_t L_226 = V_5;
		int32_t L_227 = V_0;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_226, (int32_t)L_227));
		int32_t L_228 = V_6;
		int32_t L_229 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_228, (int32_t)L_229));
		int32_t L_230 = __this->get_left_14();
		int32_t L_231 = V_0;
		int32_t L_232 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_230, (int32_t)L_231));
		V_13 = L_232;
		__this->set_left_14(L_232);
		int32_t L_233 = V_13;
		if (L_233)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_234 = __this->get_last_13();
		G_B57_0 = __this;
		if (L_234)
		{
			G_B58_0 = __this;
			goto IL_0588;
		}
	}
	{
		G_B59_0 = 0;
		G_B59_1 = G_B57_0;
		goto IL_0589;
	}

IL_0588:
	{
		G_B59_0 = 7;
		G_B59_1 = G_B58_0;
	}

IL_0589:
	{
		NullCheck(G_B59_1);
		G_B59_1->set_mode_15(G_B59_0);
		goto IL_0051;
	}

IL_0593:
	{
		int32_t L_235 = V_4;
		if (!L_235)
		{
			goto IL_059c;
		}
	}
	{
		___r0 = 0;
		goto IL_05f3;
	}

IL_059c:
	{
		int32_t L_236 = V_1;
		__this->set_bitb_3(L_236);
		int32_t L_237 = V_2;
		__this->set_bitk_4(L_237);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_238 = __this->get__codec_1();
		int32_t L_239 = V_4;
		NullCheck(L_238);
		L_238->set_AvailableBytesIn_2(L_239);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_240 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_241 = L_240;
		NullCheck(L_241);
		int64_t L_242 = L_241->get_TotalBytesIn_3();
		int32_t L_243 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_244 = __this->get__codec_1();
		NullCheck(L_244);
		int32_t L_245 = L_244->get_NextIn_1();
		NullCheck(L_241);
		L_241->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_242, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_243, (int32_t)L_245)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_246 = __this->get__codec_1();
		int32_t L_247 = V_3;
		NullCheck(L_246);
		L_246->set_NextIn_1(L_247);
		int32_t L_248 = V_5;
		__this->set_writeAt_20(L_248);
		int32_t L_249 = ___r0;
		int32_t L_250;
		L_250 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_249, /*hidden argument*/NULL);
		return L_250;
	}

IL_05f3:
	{
		int32_t L_251 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_251, (int32_t)1));
		int32_t L_252 = V_1;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_253 = __this->get__codec_1();
		NullCheck(L_253);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_254 = L_253->get_InputBuffer_0();
		int32_t L_255 = V_3;
		int32_t L_256 = L_255;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_256, (int32_t)1));
		NullCheck(L_254);
		int32_t L_257 = L_256;
		uint8_t L_258 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		int32_t L_259 = V_2;
		V_1 = ((int32_t)((int32_t)L_252|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_258&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_259&(int32_t)((int32_t)31)))))));
		int32_t L_260 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_260, (int32_t)8));
	}

IL_061c:
	{
		int32_t L_261 = V_2;
		if ((((int32_t)L_261) < ((int32_t)((int32_t)14))))
		{
			goto IL_0593;
		}
	}
	{
		int32_t L_262 = V_1;
		int32_t L_263 = ((int32_t)((int32_t)L_262&(int32_t)((int32_t)16383)));
		V_0 = L_263;
		__this->set_table_17(L_263);
		int32_t L_264 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_264&(int32_t)((int32_t)31)))) > ((int32_t)((int32_t)29))))
		{
			goto IL_0645;
		}
	}
	{
		int32_t L_265 = V_0;
		if ((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_265>>(int32_t)5))&(int32_t)((int32_t)31)))) <= ((int32_t)((int32_t)29))))
		{
			goto IL_06b8;
		}
	}

IL_0645:
	{
		__this->set_mode_15(((int32_t)9));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_266 = __this->get__codec_1();
		NullCheck(L_266);
		L_266->set_Message_8(_stringLiteral260306369A04CA189E353A93EBB484ED8F9A9B43);
		___r0 = ((int32_t)-3);
		int32_t L_267 = V_1;
		__this->set_bitb_3(L_267);
		int32_t L_268 = V_2;
		__this->set_bitk_4(L_268);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_269 = __this->get__codec_1();
		int32_t L_270 = V_4;
		NullCheck(L_269);
		L_269->set_AvailableBytesIn_2(L_270);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_271 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_272 = L_271;
		NullCheck(L_272);
		int64_t L_273 = L_272->get_TotalBytesIn_3();
		int32_t L_274 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_275 = __this->get__codec_1();
		NullCheck(L_275);
		int32_t L_276 = L_275->get_NextIn_1();
		NullCheck(L_272);
		L_272->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_273, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_274, (int32_t)L_276)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_277 = __this->get__codec_1();
		int32_t L_278 = V_3;
		NullCheck(L_277);
		L_277->set_NextIn_1(L_278);
		int32_t L_279 = V_5;
		__this->set_writeAt_20(L_279);
		int32_t L_280 = ___r0;
		int32_t L_281;
		L_281 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_280, /*hidden argument*/NULL);
		return L_281;
	}

IL_06b8:
	{
		int32_t L_282 = V_0;
		int32_t L_283 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)258), (int32_t)((int32_t)((int32_t)L_282&(int32_t)((int32_t)31))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_283>>(int32_t)5))&(int32_t)((int32_t)31)))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_284 = __this->get_blens_5();
		if (!L_284)
		{
			goto IL_06dd;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_285 = __this->get_blens_5();
		NullCheck(L_285);
		int32_t L_286 = V_0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_285)->max_length)))) >= ((int32_t)L_286)))
		{
			goto IL_06eb;
		}
	}

IL_06dd:
	{
		int32_t L_287 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_288 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_287);
		__this->set_blens_5(L_288);
		goto IL_06f8;
	}

IL_06eb:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_289 = __this->get_blens_5();
		int32_t L_290 = V_0;
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_289, 0, L_290, /*hidden argument*/NULL);
	}

IL_06f8:
	{
		int32_t L_291 = V_1;
		V_1 = ((int32_t)((int32_t)L_291>>(int32_t)((int32_t)14)));
		int32_t L_292 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_292, (int32_t)((int32_t)14)));
		__this->set_index_11(0);
		__this->set_mode_15(4);
		goto IL_07d1;
	}

IL_0715:
	{
		int32_t L_293 = V_4;
		if (!L_293)
		{
			goto IL_071e;
		}
	}
	{
		___r0 = 0;
		goto IL_0775;
	}

IL_071e:
	{
		int32_t L_294 = V_1;
		__this->set_bitb_3(L_294);
		int32_t L_295 = V_2;
		__this->set_bitk_4(L_295);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_296 = __this->get__codec_1();
		int32_t L_297 = V_4;
		NullCheck(L_296);
		L_296->set_AvailableBytesIn_2(L_297);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_298 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_299 = L_298;
		NullCheck(L_299);
		int64_t L_300 = L_299->get_TotalBytesIn_3();
		int32_t L_301 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_302 = __this->get__codec_1();
		NullCheck(L_302);
		int32_t L_303 = L_302->get_NextIn_1();
		NullCheck(L_299);
		L_299->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_300, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_301, (int32_t)L_303)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_304 = __this->get__codec_1();
		int32_t L_305 = V_3;
		NullCheck(L_304);
		L_304->set_NextIn_1(L_305);
		int32_t L_306 = V_5;
		__this->set_writeAt_20(L_306);
		int32_t L_307 = ___r0;
		int32_t L_308;
		L_308 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_307, /*hidden argument*/NULL);
		return L_308;
	}

IL_0775:
	{
		int32_t L_309 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_309, (int32_t)1));
		int32_t L_310 = V_1;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_311 = __this->get__codec_1();
		NullCheck(L_311);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_312 = L_311->get_InputBuffer_0();
		int32_t L_313 = V_3;
		int32_t L_314 = L_313;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_314, (int32_t)1));
		NullCheck(L_312);
		int32_t L_315 = L_314;
		uint8_t L_316 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		int32_t L_317 = V_2;
		V_1 = ((int32_t)((int32_t)L_310|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_316&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_317&(int32_t)((int32_t)31)))))));
		int32_t L_318 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_318, (int32_t)8));
	}

IL_079e:
	{
		int32_t L_319 = V_2;
		if ((((int32_t)L_319) < ((int32_t)3)))
		{
			goto IL_0715;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_320 = __this->get_blens_5();
		IL2CPP_RUNTIME_CLASS_INIT(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_321 = ((InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_il2cpp_TypeInfo_var))->get_border_0();
		int32_t L_322 = __this->get_index_11();
		V_13 = L_322;
		int32_t L_323 = V_13;
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_323, (int32_t)1)));
		int32_t L_324 = V_13;
		NullCheck(L_321);
		int32_t L_325 = L_324;
		int32_t L_326 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = V_1;
		NullCheck(L_320);
		(L_320)->SetAt(static_cast<il2cpp_array_size_t>(L_326), (int32_t)((int32_t)((int32_t)L_327&(int32_t)7)));
		int32_t L_328 = V_1;
		V_1 = ((int32_t)((int32_t)L_328>>(int32_t)3));
		int32_t L_329 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_329, (int32_t)3));
	}

IL_07d1:
	{
		int32_t L_330 = __this->get_index_11();
		int32_t L_331 = __this->get_table_17();
		if ((((int32_t)L_330) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)4, (int32_t)((int32_t)((int32_t)L_331>>(int32_t)((int32_t)10))))))))
		{
			goto IL_079e;
		}
	}
	{
		goto IL_0808;
	}

IL_07e6:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_332 = __this->get_blens_5();
		IL2CPP_RUNTIME_CLASS_INIT(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_333 = ((InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_il2cpp_TypeInfo_var))->get_border_0();
		int32_t L_334 = __this->get_index_11();
		V_13 = L_334;
		int32_t L_335 = V_13;
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_335, (int32_t)1)));
		int32_t L_336 = V_13;
		NullCheck(L_333);
		int32_t L_337 = L_336;
		int32_t L_338 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		NullCheck(L_332);
		(L_332)->SetAt(static_cast<il2cpp_array_size_t>(L_338), (int32_t)0);
	}

IL_0808:
	{
		int32_t L_339 = __this->get_index_11();
		if ((((int32_t)L_339) < ((int32_t)((int32_t)19))))
		{
			goto IL_07e6;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_340 = __this->get_bb_2();
		NullCheck(L_340);
		(L_340)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)7);
		InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * L_341 = __this->get_inftree_12();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_342 = __this->get_blens_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_343 = __this->get_bb_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_344 = __this->get_tb_18();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_345 = __this->get_hufts_10();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_346 = __this->get__codec_1();
		NullCheck(L_341);
		int32_t L_347;
		L_347 = InfTree_inflate_trees_bits_m1A3C2BF27262AA9283006D2B428BBF4989C96967(L_341, L_342, L_343, L_344, L_345, L_346, /*hidden argument*/NULL);
		V_0 = L_347;
		int32_t L_348 = V_0;
		if (!L_348)
		{
			goto IL_08b6;
		}
	}
	{
		int32_t L_349 = V_0;
		___r0 = L_349;
		int32_t L_350 = ___r0;
		if ((!(((uint32_t)L_350) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_085f;
		}
	}
	{
		__this->set_blens_5((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		__this->set_mode_15(((int32_t)9));
	}

IL_085f:
	{
		int32_t L_351 = V_1;
		__this->set_bitb_3(L_351);
		int32_t L_352 = V_2;
		__this->set_bitk_4(L_352);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_353 = __this->get__codec_1();
		int32_t L_354 = V_4;
		NullCheck(L_353);
		L_353->set_AvailableBytesIn_2(L_354);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_355 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_356 = L_355;
		NullCheck(L_356);
		int64_t L_357 = L_356->get_TotalBytesIn_3();
		int32_t L_358 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_359 = __this->get__codec_1();
		NullCheck(L_359);
		int32_t L_360 = L_359->get_NextIn_1();
		NullCheck(L_356);
		L_356->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_357, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_358, (int32_t)L_360)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_361 = __this->get__codec_1();
		int32_t L_362 = V_3;
		NullCheck(L_361);
		L_361->set_NextIn_1(L_362);
		int32_t L_363 = V_5;
		__this->set_writeAt_20(L_363);
		int32_t L_364 = ___r0;
		int32_t L_365;
		L_365 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_364, /*hidden argument*/NULL);
		return L_365;
	}

IL_08b6:
	{
		__this->set_index_11(0);
		__this->set_mode_15(5);
	}

IL_08c4:
	{
		int32_t L_366 = __this->get_table_17();
		V_0 = L_366;
		int32_t L_367 = __this->get_index_11();
		int32_t L_368 = V_0;
		int32_t L_369 = V_0;
		if ((((int32_t)L_367) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)258), (int32_t)((int32_t)((int32_t)L_368&(int32_t)((int32_t)31))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_369>>(int32_t)5))&(int32_t)((int32_t)31))))))))
		{
			goto IL_0bb9;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_370 = __this->get_bb_2();
		NullCheck(L_370);
		int32_t L_371 = 0;
		int32_t L_372 = (L_370)->GetAt(static_cast<il2cpp_array_size_t>(L_371));
		V_0 = L_372;
		goto IL_097e;
	}

IL_08f5:
	{
		int32_t L_373 = V_4;
		if (!L_373)
		{
			goto IL_08fe;
		}
	}
	{
		___r0 = 0;
		goto IL_0955;
	}

IL_08fe:
	{
		int32_t L_374 = V_1;
		__this->set_bitb_3(L_374);
		int32_t L_375 = V_2;
		__this->set_bitk_4(L_375);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_376 = __this->get__codec_1();
		int32_t L_377 = V_4;
		NullCheck(L_376);
		L_376->set_AvailableBytesIn_2(L_377);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_378 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_379 = L_378;
		NullCheck(L_379);
		int64_t L_380 = L_379->get_TotalBytesIn_3();
		int32_t L_381 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_382 = __this->get__codec_1();
		NullCheck(L_382);
		int32_t L_383 = L_382->get_NextIn_1();
		NullCheck(L_379);
		L_379->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_380, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_381, (int32_t)L_383)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_384 = __this->get__codec_1();
		int32_t L_385 = V_3;
		NullCheck(L_384);
		L_384->set_NextIn_1(L_385);
		int32_t L_386 = V_5;
		__this->set_writeAt_20(L_386);
		int32_t L_387 = ___r0;
		int32_t L_388;
		L_388 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_387, /*hidden argument*/NULL);
		return L_388;
	}

IL_0955:
	{
		int32_t L_389 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_389, (int32_t)1));
		int32_t L_390 = V_1;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_391 = __this->get__codec_1();
		NullCheck(L_391);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_392 = L_391->get_InputBuffer_0();
		int32_t L_393 = V_3;
		int32_t L_394 = L_393;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_394, (int32_t)1));
		NullCheck(L_392);
		int32_t L_395 = L_394;
		uint8_t L_396 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_395));
		int32_t L_397 = V_2;
		V_1 = ((int32_t)((int32_t)L_390|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_396&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_397&(int32_t)((int32_t)31)))))));
		int32_t L_398 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_398, (int32_t)8));
	}

IL_097e:
	{
		int32_t L_399 = V_2;
		int32_t L_400 = V_0;
		if ((((int32_t)L_399) < ((int32_t)L_400)))
		{
			goto IL_08f5;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_401 = __this->get_hufts_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_402 = __this->get_tb_18();
		NullCheck(L_402);
		int32_t L_403 = 0;
		int32_t L_404 = (L_402)->GetAt(static_cast<il2cpp_array_size_t>(L_403));
		int32_t L_405 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_406 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_407 = V_0;
		NullCheck(L_406);
		int32_t L_408 = L_407;
		int32_t L_409 = (L_406)->GetAt(static_cast<il2cpp_array_size_t>(L_408));
		NullCheck(L_401);
		int32_t L_410 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_404, (int32_t)((int32_t)((int32_t)L_405&(int32_t)L_409)))), (int32_t)3)), (int32_t)1));
		int32_t L_411 = (L_401)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		V_0 = L_411;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_412 = __this->get_hufts_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_413 = __this->get_tb_18();
		NullCheck(L_413);
		int32_t L_414 = 0;
		int32_t L_415 = (L_413)->GetAt(static_cast<il2cpp_array_size_t>(L_414));
		int32_t L_416 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_417 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_418 = V_0;
		NullCheck(L_417);
		int32_t L_419 = L_418;
		int32_t L_420 = (L_417)->GetAt(static_cast<il2cpp_array_size_t>(L_419));
		NullCheck(L_412);
		int32_t L_421 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_415, (int32_t)((int32_t)((int32_t)L_416&(int32_t)L_420)))), (int32_t)3)), (int32_t)2));
		int32_t L_422 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_421));
		V_16 = L_422;
		int32_t L_423 = V_16;
		if ((((int32_t)L_423) >= ((int32_t)((int32_t)16))))
		{
			goto IL_09f5;
		}
	}
	{
		int32_t L_424 = V_1;
		int32_t L_425 = V_0;
		V_1 = ((int32_t)((int32_t)L_424>>(int32_t)((int32_t)((int32_t)L_425&(int32_t)((int32_t)31)))));
		int32_t L_426 = V_2;
		int32_t L_427 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_426, (int32_t)L_427));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_428 = __this->get_blens_5();
		int32_t L_429 = __this->get_index_11();
		V_13 = L_429;
		int32_t L_430 = V_13;
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_430, (int32_t)1)));
		int32_t L_431 = V_13;
		int32_t L_432 = V_16;
		NullCheck(L_428);
		(L_428)->SetAt(static_cast<il2cpp_array_size_t>(L_431), (int32_t)L_432);
		goto IL_08c4;
	}

IL_09f5:
	{
		int32_t L_433 = V_16;
		if ((((int32_t)L_433) == ((int32_t)((int32_t)18))))
		{
			goto IL_0a02;
		}
	}
	{
		int32_t L_434 = V_16;
		G_B100_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_434, (int32_t)((int32_t)14)));
		goto IL_0a03;
	}

IL_0a02:
	{
		G_B100_0 = 7;
	}

IL_0a03:
	{
		V_14 = G_B100_0;
		int32_t L_435 = V_16;
		if ((((int32_t)L_435) == ((int32_t)((int32_t)18))))
		{
			goto IL_0a0e;
		}
	}
	{
		G_B103_0 = 3;
		goto IL_0a10;
	}

IL_0a0e:
	{
		G_B103_0 = ((int32_t)11);
	}

IL_0a10:
	{
		V_15 = G_B103_0;
		goto IL_0aa0;
	}

IL_0a17:
	{
		int32_t L_436 = V_4;
		if (!L_436)
		{
			goto IL_0a20;
		}
	}
	{
		___r0 = 0;
		goto IL_0a77;
	}

IL_0a20:
	{
		int32_t L_437 = V_1;
		__this->set_bitb_3(L_437);
		int32_t L_438 = V_2;
		__this->set_bitk_4(L_438);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_439 = __this->get__codec_1();
		int32_t L_440 = V_4;
		NullCheck(L_439);
		L_439->set_AvailableBytesIn_2(L_440);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_441 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_442 = L_441;
		NullCheck(L_442);
		int64_t L_443 = L_442->get_TotalBytesIn_3();
		int32_t L_444 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_445 = __this->get__codec_1();
		NullCheck(L_445);
		int32_t L_446 = L_445->get_NextIn_1();
		NullCheck(L_442);
		L_442->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_443, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_444, (int32_t)L_446)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_447 = __this->get__codec_1();
		int32_t L_448 = V_3;
		NullCheck(L_447);
		L_447->set_NextIn_1(L_448);
		int32_t L_449 = V_5;
		__this->set_writeAt_20(L_449);
		int32_t L_450 = ___r0;
		int32_t L_451;
		L_451 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_450, /*hidden argument*/NULL);
		return L_451;
	}

IL_0a77:
	{
		int32_t L_452 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_452, (int32_t)1));
		int32_t L_453 = V_1;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_454 = __this->get__codec_1();
		NullCheck(L_454);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_455 = L_454->get_InputBuffer_0();
		int32_t L_456 = V_3;
		int32_t L_457 = L_456;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_457, (int32_t)1));
		NullCheck(L_455);
		int32_t L_458 = L_457;
		uint8_t L_459 = (L_455)->GetAt(static_cast<il2cpp_array_size_t>(L_458));
		int32_t L_460 = V_2;
		V_1 = ((int32_t)((int32_t)L_453|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_459&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_460&(int32_t)((int32_t)31)))))));
		int32_t L_461 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_461, (int32_t)8));
	}

IL_0aa0:
	{
		int32_t L_462 = V_2;
		int32_t L_463 = V_0;
		int32_t L_464 = V_14;
		if ((((int32_t)L_462) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_463, (int32_t)L_464)))))
		{
			goto IL_0a17;
		}
	}
	{
		int32_t L_465 = V_1;
		int32_t L_466 = V_0;
		V_1 = ((int32_t)((int32_t)L_465>>(int32_t)((int32_t)((int32_t)L_466&(int32_t)((int32_t)31)))));
		int32_t L_467 = V_2;
		int32_t L_468 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_467, (int32_t)L_468));
		int32_t L_469 = V_15;
		int32_t L_470 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_471 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_472 = V_14;
		NullCheck(L_471);
		int32_t L_473 = L_472;
		int32_t L_474 = (L_471)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_469, (int32_t)((int32_t)((int32_t)L_470&(int32_t)L_474))));
		int32_t L_475 = V_1;
		int32_t L_476 = V_14;
		V_1 = ((int32_t)((int32_t)L_475>>(int32_t)((int32_t)((int32_t)L_476&(int32_t)((int32_t)31)))));
		int32_t L_477 = V_2;
		int32_t L_478 = V_14;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_477, (int32_t)L_478));
		int32_t L_479 = __this->get_index_11();
		V_14 = L_479;
		int32_t L_480 = __this->get_table_17();
		V_0 = L_480;
		int32_t L_481 = V_14;
		int32_t L_482 = V_15;
		int32_t L_483 = V_0;
		int32_t L_484 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_481, (int32_t)L_482))) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)258), (int32_t)((int32_t)((int32_t)L_483&(int32_t)((int32_t)31))))), (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_484>>(int32_t)5))&(int32_t)((int32_t)31))))))))
		{
			goto IL_0b03;
		}
	}
	{
		int32_t L_485 = V_16;
		if ((!(((uint32_t)L_485) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0b7d;
		}
	}
	{
		int32_t L_486 = V_14;
		if ((((int32_t)L_486) >= ((int32_t)1)))
		{
			goto IL_0b7d;
		}
	}

IL_0b03:
	{
		__this->set_blens_5((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		__this->set_mode_15(((int32_t)9));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_487 = __this->get__codec_1();
		NullCheck(L_487);
		L_487->set_Message_8(_stringLiteral359C7A1FB5CEBD929D7F11F5D3E96EDE7FF01384);
		___r0 = ((int32_t)-3);
		int32_t L_488 = V_1;
		__this->set_bitb_3(L_488);
		int32_t L_489 = V_2;
		__this->set_bitk_4(L_489);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_490 = __this->get__codec_1();
		int32_t L_491 = V_4;
		NullCheck(L_490);
		L_490->set_AvailableBytesIn_2(L_491);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_492 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_493 = L_492;
		NullCheck(L_493);
		int64_t L_494 = L_493->get_TotalBytesIn_3();
		int32_t L_495 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_496 = __this->get__codec_1();
		NullCheck(L_496);
		int32_t L_497 = L_496->get_NextIn_1();
		NullCheck(L_493);
		L_493->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_494, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_495, (int32_t)L_497)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_498 = __this->get__codec_1();
		int32_t L_499 = V_3;
		NullCheck(L_498);
		L_498->set_NextIn_1(L_499);
		int32_t L_500 = V_5;
		__this->set_writeAt_20(L_500);
		int32_t L_501 = ___r0;
		int32_t L_502;
		L_502 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_501, /*hidden argument*/NULL);
		return L_502;
	}

IL_0b7d:
	{
		int32_t L_503 = V_16;
		if ((((int32_t)L_503) == ((int32_t)((int32_t)16))))
		{
			goto IL_0b86;
		}
	}
	{
		G_B116_0 = 0;
		goto IL_0b91;
	}

IL_0b86:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_504 = __this->get_blens_5();
		int32_t L_505 = V_14;
		NullCheck(L_504);
		int32_t L_506 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_505, (int32_t)1));
		int32_t L_507 = (L_504)->GetAt(static_cast<il2cpp_array_size_t>(L_506));
		G_B116_0 = L_507;
	}

IL_0b91:
	{
		V_16 = G_B116_0;
	}

IL_0b93:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_508 = __this->get_blens_5();
		int32_t L_509 = V_14;
		int32_t L_510 = L_509;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_510, (int32_t)1));
		int32_t L_511 = V_16;
		NullCheck(L_508);
		(L_508)->SetAt(static_cast<il2cpp_array_size_t>(L_510), (int32_t)L_511);
		int32_t L_512 = V_15;
		int32_t L_513 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_512, (int32_t)1));
		V_15 = L_513;
		if (L_513)
		{
			goto IL_0b93;
		}
	}
	{
		int32_t L_514 = V_14;
		__this->set_index_11(L_514);
		goto IL_08c4;
	}

IL_0bb9:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_515 = __this->get_tb_18();
		NullCheck(L_515);
		(L_515)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_516 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_517 = L_516;
		NullCheck(L_517);
		(L_517)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)9));
		V_17 = L_517;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_518 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_519 = L_518;
		NullCheck(L_519);
		(L_519)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)6);
		V_18 = L_519;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_520 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_19 = L_520;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_521 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_20 = L_521;
		int32_t L_522 = __this->get_table_17();
		V_0 = L_522;
		InfTree_t6D602BFF0F7C2788CD5D18E2A99F138281682A6E * L_523 = __this->get_inftree_12();
		int32_t L_524 = V_0;
		int32_t L_525 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_526 = __this->get_blens_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_527 = V_17;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_528 = V_18;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_529 = V_19;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_530 = V_20;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_531 = __this->get_hufts_10();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_532 = __this->get__codec_1();
		NullCheck(L_523);
		int32_t L_533;
		L_533 = InfTree_inflate_trees_dynamic_m082A71C934CD06EDDDDB1D1D32D21EB64FA6F92A(L_523, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)257), (int32_t)((int32_t)((int32_t)L_524&(int32_t)((int32_t)31))))), ((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_525>>(int32_t)5))&(int32_t)((int32_t)31))))), L_526, L_527, L_528, L_529, L_530, L_531, L_532, /*hidden argument*/NULL);
		V_0 = L_533;
		int32_t L_534 = V_0;
		if (!L_534)
		{
			goto IL_0c9b;
		}
	}
	{
		int32_t L_535 = V_0;
		if ((!(((uint32_t)L_535) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0c41;
		}
	}
	{
		__this->set_blens_5((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		__this->set_mode_15(((int32_t)9));
	}

IL_0c41:
	{
		int32_t L_536 = V_0;
		___r0 = L_536;
		int32_t L_537 = V_1;
		__this->set_bitb_3(L_537);
		int32_t L_538 = V_2;
		__this->set_bitk_4(L_538);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_539 = __this->get__codec_1();
		int32_t L_540 = V_4;
		NullCheck(L_539);
		L_539->set_AvailableBytesIn_2(L_540);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_541 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_542 = L_541;
		NullCheck(L_542);
		int64_t L_543 = L_542->get_TotalBytesIn_3();
		int32_t L_544 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_545 = __this->get__codec_1();
		NullCheck(L_545);
		int32_t L_546 = L_545->get_NextIn_1();
		NullCheck(L_542);
		L_542->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_543, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_544, (int32_t)L_546)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_547 = __this->get__codec_1();
		int32_t L_548 = V_3;
		NullCheck(L_547);
		L_547->set_NextIn_1(L_548);
		int32_t L_549 = V_5;
		__this->set_writeAt_20(L_549);
		int32_t L_550 = ___r0;
		int32_t L_551;
		L_551 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_550, /*hidden argument*/NULL);
		return L_551;
	}

IL_0c9b:
	{
		InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * L_552 = __this->get_codes_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_553 = V_17;
		NullCheck(L_553);
		int32_t L_554 = 0;
		int32_t L_555 = (L_553)->GetAt(static_cast<il2cpp_array_size_t>(L_554));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_556 = V_18;
		NullCheck(L_556);
		int32_t L_557 = 0;
		int32_t L_558 = (L_556)->GetAt(static_cast<il2cpp_array_size_t>(L_557));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_559 = __this->get_hufts_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_560 = V_19;
		NullCheck(L_560);
		int32_t L_561 = 0;
		int32_t L_562 = (L_560)->GetAt(static_cast<il2cpp_array_size_t>(L_561));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_563 = __this->get_hufts_10();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_564 = V_20;
		NullCheck(L_564);
		int32_t L_565 = 0;
		int32_t L_566 = (L_564)->GetAt(static_cast<il2cpp_array_size_t>(L_565));
		NullCheck(L_552);
		InflateCodes_Init_mF8CA9661723C58C91BC091BC5F6371DB33C04A8E(L_552, L_555, L_558, L_559, L_562, L_563, L_566, /*hidden argument*/NULL);
		__this->set_mode_15(6);
	}

IL_0cc9:
	{
		int32_t L_567 = V_1;
		__this->set_bitb_3(L_567);
		int32_t L_568 = V_2;
		__this->set_bitk_4(L_568);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_569 = __this->get__codec_1();
		int32_t L_570 = V_4;
		NullCheck(L_569);
		L_569->set_AvailableBytesIn_2(L_570);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_571 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_572 = L_571;
		NullCheck(L_572);
		int64_t L_573 = L_572->get_TotalBytesIn_3();
		int32_t L_574 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_575 = __this->get__codec_1();
		NullCheck(L_575);
		int32_t L_576 = L_575->get_NextIn_1();
		NullCheck(L_572);
		L_572->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_573, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_574, (int32_t)L_576)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_577 = __this->get__codec_1();
		int32_t L_578 = V_3;
		NullCheck(L_577);
		L_577->set_NextIn_1(L_578);
		int32_t L_579 = V_5;
		__this->set_writeAt_20(L_579);
		InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * L_580 = __this->get_codes_8();
		int32_t L_581 = ___r0;
		NullCheck(L_580);
		int32_t L_582;
		L_582 = InflateCodes_Process_mD7047C71459875A65685D743AE6B6F31DBC2FF22(L_580, __this, L_581, /*hidden argument*/NULL);
		___r0 = L_582;
		int32_t L_583 = ___r0;
		if ((((int32_t)L_583) == ((int32_t)1)))
		{
			goto IL_0d33;
		}
	}
	{
		int32_t L_584 = ___r0;
		int32_t L_585;
		L_585 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_584, /*hidden argument*/NULL);
		return L_585;
	}

IL_0d33:
	{
		___r0 = 0;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_586 = __this->get__codec_1();
		NullCheck(L_586);
		int32_t L_587 = L_586->get_NextIn_1();
		V_3 = L_587;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_588 = __this->get__codec_1();
		NullCheck(L_588);
		int32_t L_589 = L_588->get_AvailableBytesIn_2();
		V_4 = L_589;
		int32_t L_590 = __this->get_bitb_3();
		V_1 = L_590;
		int32_t L_591 = __this->get_bitk_4();
		V_2 = L_591;
		int32_t L_592 = __this->get_writeAt_20();
		V_5 = L_592;
		int32_t L_593 = V_5;
		int32_t L_594 = __this->get_readAt_16();
		if ((((int32_t)L_593) < ((int32_t)L_594)))
		{
			goto IL_0d7a;
		}
	}
	{
		int32_t L_595 = __this->get_end_9();
		int32_t L_596 = V_5;
		G_B129_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_595, (int32_t)L_596));
		goto IL_0d85;
	}

IL_0d7a:
	{
		int32_t L_597 = __this->get_readAt_16();
		int32_t L_598 = V_5;
		G_B129_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_597, (int32_t)L_598)), (int32_t)1));
	}

IL_0d85:
	{
		V_6 = G_B129_0;
		int32_t L_599 = __this->get_last_13();
		if (L_599)
		{
			goto IL_0d9b;
		}
	}
	{
		__this->set_mode_15(0);
		goto IL_0051;
	}

IL_0d9b:
	{
		__this->set_mode_15(7);
	}

IL_0da2:
	{
		int32_t L_600 = V_5;
		__this->set_writeAt_20(L_600);
		int32_t L_601 = ___r0;
		int32_t L_602;
		L_602 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_601, /*hidden argument*/NULL);
		___r0 = L_602;
		int32_t L_603 = __this->get_writeAt_20();
		V_5 = L_603;
		int32_t L_604 = V_5;
		int32_t L_605 = __this->get_readAt_16();
		if ((((int32_t)L_604) < ((int32_t)L_605)))
		{
			goto IL_0dd0;
		}
	}
	{
		int32_t L_606 = __this->get_end_9();
		int32_t L_607 = V_5;
		G_B135_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_606, (int32_t)L_607));
		goto IL_0ddb;
	}

IL_0dd0:
	{
		int32_t L_608 = __this->get_readAt_16();
		int32_t L_609 = V_5;
		G_B135_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_608, (int32_t)L_609)), (int32_t)1));
	}

IL_0ddb:
	{
		V_6 = G_B135_0;
		int32_t L_610 = __this->get_readAt_16();
		int32_t L_611 = __this->get_writeAt_20();
		if ((((int32_t)L_610) == ((int32_t)L_611)))
		{
			goto IL_0e42;
		}
	}
	{
		int32_t L_612 = V_1;
		__this->set_bitb_3(L_612);
		int32_t L_613 = V_2;
		__this->set_bitk_4(L_613);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_614 = __this->get__codec_1();
		int32_t L_615 = V_4;
		NullCheck(L_614);
		L_614->set_AvailableBytesIn_2(L_615);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_616 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_617 = L_616;
		NullCheck(L_617);
		int64_t L_618 = L_617->get_TotalBytesIn_3();
		int32_t L_619 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_620 = __this->get__codec_1();
		NullCheck(L_620);
		int32_t L_621 = L_620->get_NextIn_1();
		NullCheck(L_617);
		L_617->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_618, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_619, (int32_t)L_621)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_622 = __this->get__codec_1();
		int32_t L_623 = V_3;
		NullCheck(L_622);
		L_622->set_NextIn_1(L_623);
		int32_t L_624 = V_5;
		__this->set_writeAt_20(L_624);
		int32_t L_625 = ___r0;
		int32_t L_626;
		L_626 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_625, /*hidden argument*/NULL);
		return L_626;
	}

IL_0e42:
	{
		__this->set_mode_15(8);
	}

IL_0e49:
	{
		___r0 = 1;
		int32_t L_627 = V_1;
		__this->set_bitb_3(L_627);
		int32_t L_628 = V_2;
		__this->set_bitk_4(L_628);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_629 = __this->get__codec_1();
		int32_t L_630 = V_4;
		NullCheck(L_629);
		L_629->set_AvailableBytesIn_2(L_630);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_631 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_632 = L_631;
		NullCheck(L_632);
		int64_t L_633 = L_632->get_TotalBytesIn_3();
		int32_t L_634 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_635 = __this->get__codec_1();
		NullCheck(L_635);
		int32_t L_636 = L_635->get_NextIn_1();
		NullCheck(L_632);
		L_632->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_633, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_634, (int32_t)L_636)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_637 = __this->get__codec_1();
		int32_t L_638 = V_3;
		NullCheck(L_637);
		L_637->set_NextIn_1(L_638);
		int32_t L_639 = V_5;
		__this->set_writeAt_20(L_639);
		int32_t L_640 = ___r0;
		int32_t L_641;
		L_641 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_640, /*hidden argument*/NULL);
		return L_641;
	}

IL_0ea3:
	{
		___r0 = ((int32_t)-3);
		int32_t L_642 = V_1;
		__this->set_bitb_3(L_642);
		int32_t L_643 = V_2;
		__this->set_bitk_4(L_643);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_644 = __this->get__codec_1();
		int32_t L_645 = V_4;
		NullCheck(L_644);
		L_644->set_AvailableBytesIn_2(L_645);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_646 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_647 = L_646;
		NullCheck(L_647);
		int64_t L_648 = L_647->get_TotalBytesIn_3();
		int32_t L_649 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_650 = __this->get__codec_1();
		NullCheck(L_650);
		int32_t L_651 = L_650->get_NextIn_1();
		NullCheck(L_647);
		L_647->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_648, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_649, (int32_t)L_651)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_652 = __this->get__codec_1();
		int32_t L_653 = V_3;
		NullCheck(L_652);
		L_652->set_NextIn_1(L_653);
		int32_t L_654 = V_5;
		__this->set_writeAt_20(L_654);
		int32_t L_655 = ___r0;
		int32_t L_656;
		L_656 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_655, /*hidden argument*/NULL);
		return L_656;
	}

IL_0efe:
	{
		___r0 = ((int32_t)-2);
		int32_t L_657 = V_1;
		__this->set_bitb_3(L_657);
		int32_t L_658 = V_2;
		__this->set_bitk_4(L_658);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_659 = __this->get__codec_1();
		int32_t L_660 = V_4;
		NullCheck(L_659);
		L_659->set_AvailableBytesIn_2(L_660);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_661 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_662 = L_661;
		NullCheck(L_662);
		int64_t L_663 = L_662->get_TotalBytesIn_3();
		int32_t L_664 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_665 = __this->get__codec_1();
		NullCheck(L_665);
		int32_t L_666 = L_665->get_NextIn_1();
		NullCheck(L_662);
		L_662->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_663, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_664, (int32_t)L_666)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_667 = __this->get__codec_1();
		int32_t L_668 = V_3;
		NullCheck(L_667);
		L_667->set_NextIn_1(L_668);
		int32_t L_669 = V_5;
		__this->set_writeAt_20(L_669);
		int32_t L_670 = ___r0;
		int32_t L_671;
		L_671 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(__this, L_670, /*hidden argument*/NULL);
		return L_671;
	}
}
// System.Void SharpCompress.Compressors.Deflate.InflateBlocks::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks_Free_mD2060C09AD45AC6935F2A9A9DD8BC43697843145 (InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0;
		L_0 = InflateBlocks_Reset_m20A9C3E2617933A4CCFF4A8598A629B6E11E1C64(__this, /*hidden argument*/NULL);
		__this->set_window_19((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		__this->set_hufts_10((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		return;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.InflateBlocks::Flush(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9 (InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * __this, int32_t ___r0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	{
		V_1 = 0;
		goto IL_014b;
	}

IL_0007:
	{
		int32_t L_0 = V_1;
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_1 = __this->get_readAt_16();
		int32_t L_2 = __this->get_writeAt_20();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = __this->get_end_9();
		G_B5_0 = L_3;
		goto IL_0026;
	}

IL_0020:
	{
		int32_t L_4 = __this->get_writeAt_20();
		G_B5_0 = L_4;
	}

IL_0026:
	{
		int32_t L_5 = __this->get_readAt_16();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)G_B5_0, (int32_t)L_5));
		goto IL_003e;
	}

IL_0030:
	{
		int32_t L_6 = __this->get_writeAt_20();
		int32_t L_7 = __this->get_readAt_16();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7));
	}

IL_003e:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_9 = ___r0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_0049;
		}
	}
	{
		___r0 = 0;
	}

IL_0049:
	{
		int32_t L_10 = ___r0;
		return L_10;
	}

IL_004b:
	{
		int32_t L_11 = V_0;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_12 = __this->get__codec_1();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_AvailableBytesOut_6();
		if ((((int32_t)L_11) <= ((int32_t)L_13)))
		{
			goto IL_0065;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_14 = __this->get__codec_1();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_AvailableBytesOut_6();
		V_0 = L_15;
	}

IL_0065:
	{
		int32_t L_16 = V_0;
		if (!L_16)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_17 = ___r0;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_0070;
		}
	}
	{
		___r0 = 0;
	}

IL_0070:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_18 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_AvailableBytesOut_6();
		int32_t L_21 = V_0;
		NullCheck(L_19);
		L_19->set_AvailableBytesOut_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_22 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_23 = L_22;
		NullCheck(L_23);
		int64_t L_24 = L_23->get_TotalBytesOut_7();
		int32_t L_25 = V_0;
		NullCheck(L_23);
		L_23->set_TotalBytesOut_7(((int64_t)il2cpp_codegen_add((int64_t)L_24, (int64_t)((int64_t)((int64_t)L_25)))));
		RuntimeObject * L_26 = __this->get_checkfn_7();
		if (!L_26)
		{
			goto IL_00cb;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_27 = __this->get__codec_1();
		uint32_t L_28 = __this->get_check_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = __this->get_window_19();
		int32_t L_30 = __this->get_readAt_16();
		int32_t L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		uint32_t L_32;
		L_32 = Adler_Adler32_mC43A8AA565B6B644F4FAC3378372FEC0D35CC83C(L_28, L_29, L_30, L_31, /*hidden argument*/NULL);
		uint32_t L_33 = L_32;
		V_2 = L_33;
		__this->set_check_6(L_33);
		uint32_t L_34 = V_2;
		NullCheck(L_27);
		L_27->set__Adler32_11(L_34);
	}

IL_00cb:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = __this->get_window_19();
		int32_t L_36 = __this->get_readAt_16();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_37 = __this->get__codec_1();
		NullCheck(L_37);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = L_37->get_OutputBuffer_4();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_39 = __this->get__codec_1();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_NextOut_5();
		int32_t L_41 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_35, L_36, (RuntimeArray *)(RuntimeArray *)L_38, L_40, L_41, /*hidden argument*/NULL);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_42 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_43 = L_42;
		NullCheck(L_43);
		int32_t L_44 = L_43->get_NextOut_5();
		int32_t L_45 = V_0;
		NullCheck(L_43);
		L_43->set_NextOut_5(((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_45)));
		int32_t L_46 = __this->get_readAt_16();
		int32_t L_47 = V_0;
		__this->set_readAt_16(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47)));
		int32_t L_48 = __this->get_readAt_16();
		int32_t L_49 = __this->get_end_9();
		if ((!(((uint32_t)L_48) == ((uint32_t)L_49))))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_50 = V_1;
		if (L_50)
		{
			goto IL_0143;
		}
	}
	{
		__this->set_readAt_16(0);
		int32_t L_51 = __this->get_writeAt_20();
		int32_t L_52 = __this->get_end_9();
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0147;
		}
	}
	{
		__this->set_writeAt_20(0);
		goto IL_0147;
	}

IL_0143:
	{
		int32_t L_53 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0147:
	{
		int32_t L_54 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_014b:
	{
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) < ((int32_t)2)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_56 = ___r0;
		return L_56;
	}
}
// System.Void SharpCompress.Compressors.Deflate.InflateBlocks::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateBlocks__cctor_m4D543DD98C58E9CE65398021299E5547EF121168 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____1FDC8DB567F5AAA7068D0D2A601CD71657CBDF38_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_StaticFields*)il2cpp_codegen_static_fields_for(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_il2cpp_TypeInfo_var))->set_border_0(L_1);
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
// System.Void SharpCompress.Compressors.Deflate.InflateCodes::Init(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes_Init_mF8CA9661723C58C91BC091BC5F6371DB33C04A8E (InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td4, int32_t ___td_index5, const RuntimeMethod* method)
{
	{
		__this->set_mode_10(0);
		int32_t L_0 = ___bl0;
		__this->set_lbits_5((uint8_t)((int32_t)((uint8_t)L_0)));
		int32_t L_1 = ___bd1;
		__this->set_dbits_1((uint8_t)((int32_t)((uint8_t)L_1)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = ___tl2;
		__this->set_ltree_8(L_2);
		int32_t L_3 = ___tl_index3;
		__this->set_ltree_index_9(L_3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___td4;
		__this->set_dtree_3(L_4);
		int32_t L_5 = ___td_index5;
		__this->set_dtree_index_4(L_5);
		__this->set_tree_12((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		return;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.InflateCodes::Process(SharpCompress.Compressors.Deflate.InflateBlocks,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_Process_mD7047C71459875A65685D743AE6B6F31DBC2FF22 (InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * __this, InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * ___blocks0, int32_t ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B11_0 = 0;
	InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * G_B14_0 = NULL;
	InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * G_B15_1 = NULL;
	int32_t G_B69_0 = 0;
	int32_t G_B74_0 = 0;
	int32_t G_B79_0 = 0;
	int32_t G_B93_0 = 0;
	int32_t G_B98_0 = 0;
	int32_t G_B103_0 = 0;
	int32_t G_B112_0 = 0;
	{
		V_3 = 0;
		V_4 = 0;
		V_5 = 0;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_0 = ___blocks0;
		NullCheck(L_0);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_1 = L_0->get__codec_1();
		V_10 = L_1;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_2 = V_10;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_NextIn_1();
		V_5 = L_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_4 = V_10;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_AvailableBytesIn_2();
		V_6 = L_5;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_6 = ___blocks0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_bitb_3();
		V_3 = L_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_8 = ___blocks0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_bitk_4();
		V_4 = L_9;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_10 = ___blocks0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_writeAt_20();
		V_7 = L_11;
		int32_t L_12 = V_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_13 = ___blocks0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_readAt_16();
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_004e;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_15 = ___blocks0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_end_9();
		int32_t L_17 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17));
		goto IL_0059;
	}

IL_004e:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_18 = ___blocks0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_readAt_16();
		int32_t L_20 = V_7;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20)), (int32_t)1));
	}

IL_0059:
	{
		V_8 = G_B3_0;
	}

IL_005b:
	{
		int32_t L_21 = __this->get_mode_10();
		V_11 = L_21;
		int32_t L_22 = V_11;
		switch (L_22)
		{
			case 0:
			{
				goto IL_0097;
			}
			case 1:
			{
				goto IL_01aa;
			}
			case 2:
			{
				goto IL_037f;
			}
			case 3:
			{
				goto IL_045b;
			}
			case 4:
			{
				goto IL_05ff;
			}
			case 5:
			{
				goto IL_06b7;
			}
			case 6:
			{
				goto IL_0832;
			}
			case 7:
			{
				goto IL_0961;
			}
			case 8:
			{
				goto IL_0a12;
			}
			case 9:
			{
				goto IL_0a5f;
			}
		}
	}
	{
		goto IL_0aad;
	}

IL_0097:
	{
		int32_t L_23 = V_8;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)258))))
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_24 = V_6;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)10))))
		{
			goto IL_017f;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_25 = ___blocks0;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		L_25->set_bitb_3(L_26);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_27 = ___blocks0;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		L_27->set_bitk_4(L_28);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_29 = V_10;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		L_29->set_AvailableBytesIn_2(L_30);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_31 = V_10;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_32 = L_31;
		NullCheck(L_32);
		int64_t L_33 = L_32->get_TotalBytesIn_3();
		int32_t L_34 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_35 = V_10;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_NextIn_1();
		NullCheck(L_32);
		L_32->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_33, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)L_36)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_37 = V_10;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		L_37->set_NextIn_1(L_38);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_39 = ___blocks0;
		int32_t L_40 = V_7;
		NullCheck(L_39);
		L_39->set_writeAt_20(L_40);
		uint8_t L_41 = __this->get_lbits_5();
		uint8_t L_42 = __this->get_dbits_1();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = __this->get_ltree_8();
		int32_t L_44 = __this->get_ltree_index_9();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = __this->get_dtree_3();
		int32_t L_46 = __this->get_dtree_index_4();
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_47 = ___blocks0;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_48 = V_10;
		int32_t L_49;
		L_49 = InflateCodes_InflateFast_m4BCCA20A108CE0888A0226CCC5A7F12FB7E75D58(__this, L_41, L_42, L_43, L_44, L_45, L_46, L_47, L_48, /*hidden argument*/NULL);
		___r1 = L_49;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_50 = V_10;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_NextIn_1();
		V_5 = L_51;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_52 = V_10;
		NullCheck(L_52);
		int32_t L_53 = L_52->get_AvailableBytesIn_2();
		V_6 = L_53;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_54 = ___blocks0;
		NullCheck(L_54);
		int32_t L_55 = L_54->get_bitb_3();
		V_3 = L_55;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_56 = ___blocks0;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_bitk_4();
		V_4 = L_57;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_58 = ___blocks0;
		NullCheck(L_58);
		int32_t L_59 = L_58->get_writeAt_20();
		V_7 = L_59;
		int32_t L_60 = V_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_61 = ___blocks0;
		NullCheck(L_61);
		int32_t L_62 = L_61->get_readAt_16();
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_015b;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_63 = ___blocks0;
		NullCheck(L_63);
		int32_t L_64 = L_63->get_end_9();
		int32_t L_65 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)L_65));
		goto IL_0166;
	}

IL_015b:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_66 = ___blocks0;
		NullCheck(L_66);
		int32_t L_67 = L_66->get_readAt_16();
		int32_t L_68 = V_7;
		G_B11_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)L_68)), (int32_t)1));
	}

IL_0166:
	{
		V_8 = G_B11_0;
		int32_t L_69 = ___r1;
		if (!L_69)
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_70 = ___r1;
		G_B13_0 = __this;
		if ((((int32_t)L_70) == ((int32_t)1)))
		{
			G_B14_0 = __this;
			goto IL_0174;
		}
	}
	{
		G_B15_0 = ((int32_t)9);
		G_B15_1 = G_B13_0;
		goto IL_0175;
	}

IL_0174:
	{
		G_B15_0 = 7;
		G_B15_1 = G_B14_0;
	}

IL_0175:
	{
		NullCheck(G_B15_1);
		G_B15_1->set_mode_10(G_B15_0);
		goto IL_005b;
	}

IL_017f:
	{
		uint8_t L_71 = __this->get_lbits_5();
		__this->set_need_11(L_71);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_72 = __this->get_ltree_8();
		__this->set_tree_12(L_72);
		int32_t L_73 = __this->get_ltree_index_9();
		__this->set_tree_index_13(L_73);
		__this->set_mode_10(1);
	}

IL_01aa:
	{
		int32_t L_74 = __this->get_need_11();
		V_0 = L_74;
		goto IL_0257;
	}

IL_01b6:
	{
		int32_t L_75 = V_6;
		if (!L_75)
		{
			goto IL_01bf;
		}
	}
	{
		___r1 = 0;
		goto IL_022d;
	}

IL_01bf:
	{
		int32_t L_76 = __this->get_tree_index_13();
		int32_t L_77 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_78 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_79 = V_4;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		int32_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_12 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)((int32_t)((int32_t)L_77&(int32_t)L_81)))), (int32_t)3));
		int32_t L_82 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_83 = __this->get_tree_12();
		int32_t L_84 = V_12;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
		int32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		if ((((int32_t)L_82) >= ((int32_t)L_86)))
		{
			goto IL_025f;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_87 = ___blocks0;
		int32_t L_88 = V_3;
		NullCheck(L_87);
		L_87->set_bitb_3(L_88);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_89 = ___blocks0;
		int32_t L_90 = V_4;
		NullCheck(L_89);
		L_89->set_bitk_4(L_90);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_91 = V_10;
		int32_t L_92 = V_6;
		NullCheck(L_91);
		L_91->set_AvailableBytesIn_2(L_92);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_93 = V_10;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_94 = L_93;
		NullCheck(L_94);
		int64_t L_95 = L_94->get_TotalBytesIn_3();
		int32_t L_96 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_97 = V_10;
		NullCheck(L_97);
		int32_t L_98 = L_97->get_NextIn_1();
		NullCheck(L_94);
		L_94->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_95, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_96, (int32_t)L_98)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_99 = V_10;
		int32_t L_100 = V_5;
		NullCheck(L_99);
		L_99->set_NextIn_1(L_100);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_101 = ___blocks0;
		int32_t L_102 = V_7;
		NullCheck(L_101);
		L_101->set_writeAt_20(L_102);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_103 = ___blocks0;
		int32_t L_104 = ___r1;
		NullCheck(L_103);
		int32_t L_105;
		L_105 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_103, L_104, /*hidden argument*/NULL);
		return L_105;
	}

IL_022d:
	{
		int32_t L_106 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)1));
		int32_t L_107 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_108 = V_10;
		NullCheck(L_108);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_109 = L_108->get_InputBuffer_0();
		int32_t L_110 = V_5;
		int32_t L_111 = L_110;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)1));
		NullCheck(L_109);
		int32_t L_112 = L_111;
		uint8_t L_113 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		int32_t L_114 = V_4;
		V_3 = ((int32_t)((int32_t)L_107|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_113&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_114&(int32_t)((int32_t)31)))))));
		int32_t L_115 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)8));
	}

IL_0257:
	{
		int32_t L_116 = V_4;
		int32_t L_117 = V_0;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_01b6;
		}
	}

IL_025f:
	{
		int32_t L_118 = __this->get_tree_index_13();
		int32_t L_119 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_120 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_121 = V_0;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		int32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)((int32_t)((int32_t)L_119&(int32_t)L_123)))), (int32_t)3));
		int32_t L_124 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_125 = __this->get_tree_12();
		int32_t L_126 = V_1;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)1));
		int32_t L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		V_3 = ((int32_t)((int32_t)L_124>>(int32_t)((int32_t)((int32_t)L_128&(int32_t)((int32_t)31)))));
		int32_t L_129 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_130 = __this->get_tree_12();
		int32_t L_131 = V_1;
		NullCheck(L_130);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
		int32_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_129, (int32_t)L_133));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_134 = __this->get_tree_12();
		int32_t L_135 = V_1;
		NullCheck(L_134);
		int32_t L_136 = L_135;
		int32_t L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		V_2 = L_137;
		int32_t L_138 = V_2;
		if (L_138)
		{
			goto IL_02b9;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_139 = __this->get_tree_12();
		int32_t L_140 = V_1;
		NullCheck(L_139);
		int32_t L_141 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)2));
		int32_t L_142 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		__this->set_lit_7(L_142);
		__this->set_mode_10(6);
		goto IL_005b;
	}

IL_02b9:
	{
		int32_t L_143 = V_2;
		if (!((int32_t)((int32_t)L_143&(int32_t)((int32_t)16))))
		{
			goto IL_02e5;
		}
	}
	{
		int32_t L_144 = V_2;
		__this->set_bitsToGet_0(((int32_t)((int32_t)L_144&(int32_t)((int32_t)15))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_145 = __this->get_tree_12();
		int32_t L_146 = V_1;
		NullCheck(L_145);
		int32_t L_147 = ((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)2));
		int32_t L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		__this->set_len_6(L_148);
		__this->set_mode_10(2);
		goto IL_005b;
	}

IL_02e5:
	{
		int32_t L_149 = V_2;
		if (((int32_t)((int32_t)L_149&(int32_t)((int32_t)64))))
		{
			goto IL_030b;
		}
	}
	{
		int32_t L_150 = V_2;
		__this->set_need_11(L_150);
		int32_t L_151 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_152 = __this->get_tree_12();
		int32_t L_153 = V_1;
		NullCheck(L_152);
		int32_t L_154 = ((int32_t)il2cpp_codegen_add((int32_t)L_153, (int32_t)2));
		int32_t L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		__this->set_tree_index_13(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_151/(int32_t)3)), (int32_t)L_155)));
		goto IL_005b;
	}

IL_030b:
	{
		int32_t L_156 = V_2;
		if (!((int32_t)((int32_t)L_156&(int32_t)((int32_t)32))))
		{
			goto IL_031d;
		}
	}
	{
		__this->set_mode_10(7);
		goto IL_005b;
	}

IL_031d:
	{
		__this->set_mode_10(((int32_t)9));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_157 = V_10;
		NullCheck(L_157);
		L_157->set_Message_8(_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		___r1 = ((int32_t)-3);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_158 = ___blocks0;
		int32_t L_159 = V_3;
		NullCheck(L_158);
		L_158->set_bitb_3(L_159);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_160 = ___blocks0;
		int32_t L_161 = V_4;
		NullCheck(L_160);
		L_160->set_bitk_4(L_161);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_162 = V_10;
		int32_t L_163 = V_6;
		NullCheck(L_162);
		L_162->set_AvailableBytesIn_2(L_163);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_164 = V_10;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_165 = L_164;
		NullCheck(L_165);
		int64_t L_166 = L_165->get_TotalBytesIn_3();
		int32_t L_167 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_168 = V_10;
		NullCheck(L_168);
		int32_t L_169 = L_168->get_NextIn_1();
		NullCheck(L_165);
		L_165->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_166, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_167, (int32_t)L_169)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_170 = V_10;
		int32_t L_171 = V_5;
		NullCheck(L_170);
		L_170->set_NextIn_1(L_171);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_172 = ___blocks0;
		int32_t L_173 = V_7;
		NullCheck(L_172);
		L_172->set_writeAt_20(L_173);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_174 = ___blocks0;
		int32_t L_175 = ___r1;
		NullCheck(L_174);
		int32_t L_176;
		L_176 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_174, L_175, /*hidden argument*/NULL);
		return L_176;
	}

IL_037f:
	{
		int32_t L_177 = __this->get_bitsToGet_0();
		V_0 = L_177;
		goto IL_0405;
	}

IL_0388:
	{
		int32_t L_178 = V_6;
		if (!L_178)
		{
			goto IL_0391;
		}
	}
	{
		___r1 = 0;
		goto IL_03db;
	}

IL_0391:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_179 = ___blocks0;
		int32_t L_180 = V_3;
		NullCheck(L_179);
		L_179->set_bitb_3(L_180);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_181 = ___blocks0;
		int32_t L_182 = V_4;
		NullCheck(L_181);
		L_181->set_bitk_4(L_182);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_183 = V_10;
		int32_t L_184 = V_6;
		NullCheck(L_183);
		L_183->set_AvailableBytesIn_2(L_184);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_185 = V_10;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_186 = L_185;
		NullCheck(L_186);
		int64_t L_187 = L_186->get_TotalBytesIn_3();
		int32_t L_188 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_189 = V_10;
		NullCheck(L_189);
		int32_t L_190 = L_189->get_NextIn_1();
		NullCheck(L_186);
		L_186->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_187, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_188, (int32_t)L_190)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_191 = V_10;
		int32_t L_192 = V_5;
		NullCheck(L_191);
		L_191->set_NextIn_1(L_192);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_193 = ___blocks0;
		int32_t L_194 = V_7;
		NullCheck(L_193);
		L_193->set_writeAt_20(L_194);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_195 = ___blocks0;
		int32_t L_196 = ___r1;
		NullCheck(L_195);
		int32_t L_197;
		L_197 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_195, L_196, /*hidden argument*/NULL);
		return L_197;
	}

IL_03db:
	{
		int32_t L_198 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_198, (int32_t)1));
		int32_t L_199 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_200 = V_10;
		NullCheck(L_200);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_201 = L_200->get_InputBuffer_0();
		int32_t L_202 = V_5;
		int32_t L_203 = L_202;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_203, (int32_t)1));
		NullCheck(L_201);
		int32_t L_204 = L_203;
		uint8_t L_205 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		int32_t L_206 = V_4;
		V_3 = ((int32_t)((int32_t)L_199|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_205&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_206&(int32_t)((int32_t)31)))))));
		int32_t L_207 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_207, (int32_t)8));
	}

IL_0405:
	{
		int32_t L_208 = V_4;
		int32_t L_209 = V_0;
		if ((((int32_t)L_208) < ((int32_t)L_209)))
		{
			goto IL_0388;
		}
	}
	{
		int32_t L_210 = __this->get_len_6();
		int32_t L_211 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_212 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_213 = V_0;
		NullCheck(L_212);
		int32_t L_214 = L_213;
		int32_t L_215 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		__this->set_len_6(((int32_t)il2cpp_codegen_add((int32_t)L_210, (int32_t)((int32_t)((int32_t)L_211&(int32_t)L_215)))));
		int32_t L_216 = V_3;
		int32_t L_217 = V_0;
		V_3 = ((int32_t)((int32_t)L_216>>(int32_t)((int32_t)((int32_t)L_217&(int32_t)((int32_t)31)))));
		int32_t L_218 = V_4;
		int32_t L_219 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_218, (int32_t)L_219));
		uint8_t L_220 = __this->get_dbits_1();
		__this->set_need_11(L_220);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_221 = __this->get_dtree_3();
		__this->set_tree_12(L_221);
		int32_t L_222 = __this->get_dtree_index_4();
		__this->set_tree_index_13(L_222);
		__this->set_mode_10(3);
	}

IL_045b:
	{
		int32_t L_223 = __this->get_need_11();
		V_0 = L_223;
		goto IL_0508;
	}

IL_0467:
	{
		int32_t L_224 = V_6;
		if (!L_224)
		{
			goto IL_0470;
		}
	}
	{
		___r1 = 0;
		goto IL_04de;
	}

IL_0470:
	{
		int32_t L_225 = __this->get_tree_index_13();
		int32_t L_226 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_227 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_228 = V_4;
		NullCheck(L_227);
		int32_t L_229 = L_228;
		int32_t L_230 = (L_227)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		V_13 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_225, (int32_t)((int32_t)((int32_t)L_226&(int32_t)L_230)))), (int32_t)3));
		int32_t L_231 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_232 = __this->get_tree_12();
		int32_t L_233 = V_13;
		NullCheck(L_232);
		int32_t L_234 = ((int32_t)il2cpp_codegen_add((int32_t)L_233, (int32_t)1));
		int32_t L_235 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		if ((((int32_t)L_231) >= ((int32_t)L_235)))
		{
			goto IL_0510;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_236 = ___blocks0;
		int32_t L_237 = V_3;
		NullCheck(L_236);
		L_236->set_bitb_3(L_237);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_238 = ___blocks0;
		int32_t L_239 = V_4;
		NullCheck(L_238);
		L_238->set_bitk_4(L_239);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_240 = V_10;
		int32_t L_241 = V_6;
		NullCheck(L_240);
		L_240->set_AvailableBytesIn_2(L_241);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_242 = V_10;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_243 = L_242;
		NullCheck(L_243);
		int64_t L_244 = L_243->get_TotalBytesIn_3();
		int32_t L_245 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_246 = V_10;
		NullCheck(L_246);
		int32_t L_247 = L_246->get_NextIn_1();
		NullCheck(L_243);
		L_243->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_244, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_245, (int32_t)L_247)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_248 = V_10;
		int32_t L_249 = V_5;
		NullCheck(L_248);
		L_248->set_NextIn_1(L_249);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_250 = ___blocks0;
		int32_t L_251 = V_7;
		NullCheck(L_250);
		L_250->set_writeAt_20(L_251);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_252 = ___blocks0;
		int32_t L_253 = ___r1;
		NullCheck(L_252);
		int32_t L_254;
		L_254 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_252, L_253, /*hidden argument*/NULL);
		return L_254;
	}

IL_04de:
	{
		int32_t L_255 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_255, (int32_t)1));
		int32_t L_256 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_257 = V_10;
		NullCheck(L_257);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_258 = L_257->get_InputBuffer_0();
		int32_t L_259 = V_5;
		int32_t L_260 = L_259;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_260, (int32_t)1));
		NullCheck(L_258);
		int32_t L_261 = L_260;
		uint8_t L_262 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		int32_t L_263 = V_4;
		V_3 = ((int32_t)((int32_t)L_256|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_262&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_263&(int32_t)((int32_t)31)))))));
		int32_t L_264 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_264, (int32_t)8));
	}

IL_0508:
	{
		int32_t L_265 = V_4;
		int32_t L_266 = V_0;
		if ((((int32_t)L_265) < ((int32_t)L_266)))
		{
			goto IL_0467;
		}
	}

IL_0510:
	{
		int32_t L_267 = __this->get_tree_index_13();
		int32_t L_268 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_269 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_270 = V_0;
		NullCheck(L_269);
		int32_t L_271 = L_270;
		int32_t L_272 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_271));
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_267, (int32_t)((int32_t)((int32_t)L_268&(int32_t)L_272)))), (int32_t)3));
		int32_t L_273 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_274 = __this->get_tree_12();
		int32_t L_275 = V_1;
		NullCheck(L_274);
		int32_t L_276 = ((int32_t)il2cpp_codegen_add((int32_t)L_275, (int32_t)1));
		int32_t L_277 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		V_3 = ((int32_t)((int32_t)L_273>>(int32_t)((int32_t)((int32_t)L_277&(int32_t)((int32_t)31)))));
		int32_t L_278 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_279 = __this->get_tree_12();
		int32_t L_280 = V_1;
		NullCheck(L_279);
		int32_t L_281 = ((int32_t)il2cpp_codegen_add((int32_t)L_280, (int32_t)1));
		int32_t L_282 = (L_279)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_278, (int32_t)L_282));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_283 = __this->get_tree_12();
		int32_t L_284 = V_1;
		NullCheck(L_283);
		int32_t L_285 = L_284;
		int32_t L_286 = (L_283)->GetAt(static_cast<il2cpp_array_size_t>(L_285));
		V_2 = L_286;
		int32_t L_287 = V_2;
		if (!((int32_t)((int32_t)L_287&(int32_t)((int32_t)16))))
		{
			goto IL_0577;
		}
	}
	{
		int32_t L_288 = V_2;
		__this->set_bitsToGet_0(((int32_t)((int32_t)L_288&(int32_t)((int32_t)15))));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_289 = __this->get_tree_12();
		int32_t L_290 = V_1;
		NullCheck(L_289);
		int32_t L_291 = ((int32_t)il2cpp_codegen_add((int32_t)L_290, (int32_t)2));
		int32_t L_292 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_291));
		__this->set_dist_2(L_292);
		__this->set_mode_10(4);
		goto IL_005b;
	}

IL_0577:
	{
		int32_t L_293 = V_2;
		if (((int32_t)((int32_t)L_293&(int32_t)((int32_t)64))))
		{
			goto IL_059d;
		}
	}
	{
		int32_t L_294 = V_2;
		__this->set_need_11(L_294);
		int32_t L_295 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_296 = __this->get_tree_12();
		int32_t L_297 = V_1;
		NullCheck(L_296);
		int32_t L_298 = ((int32_t)il2cpp_codegen_add((int32_t)L_297, (int32_t)2));
		int32_t L_299 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		__this->set_tree_index_13(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_295/(int32_t)3)), (int32_t)L_299)));
		goto IL_005b;
	}

IL_059d:
	{
		__this->set_mode_10(((int32_t)9));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_300 = V_10;
		NullCheck(L_300);
		L_300->set_Message_8(_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		___r1 = ((int32_t)-3);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_301 = ___blocks0;
		int32_t L_302 = V_3;
		NullCheck(L_301);
		L_301->set_bitb_3(L_302);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_303 = ___blocks0;
		int32_t L_304 = V_4;
		NullCheck(L_303);
		L_303->set_bitk_4(L_304);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_305 = V_10;
		int32_t L_306 = V_6;
		NullCheck(L_305);
		L_305->set_AvailableBytesIn_2(L_306);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_307 = V_10;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_308 = L_307;
		NullCheck(L_308);
		int64_t L_309 = L_308->get_TotalBytesIn_3();
		int32_t L_310 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_311 = V_10;
		NullCheck(L_311);
		int32_t L_312 = L_311->get_NextIn_1();
		NullCheck(L_308);
		L_308->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_309, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_310, (int32_t)L_312)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_313 = V_10;
		int32_t L_314 = V_5;
		NullCheck(L_313);
		L_313->set_NextIn_1(L_314);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_315 = ___blocks0;
		int32_t L_316 = V_7;
		NullCheck(L_315);
		L_315->set_writeAt_20(L_316);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_317 = ___blocks0;
		int32_t L_318 = ___r1;
		NullCheck(L_317);
		int32_t L_319;
		L_319 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_317, L_318, /*hidden argument*/NULL);
		return L_319;
	}

IL_05ff:
	{
		int32_t L_320 = __this->get_bitsToGet_0();
		V_0 = L_320;
		goto IL_0685;
	}

IL_0608:
	{
		int32_t L_321 = V_6;
		if (!L_321)
		{
			goto IL_0611;
		}
	}
	{
		___r1 = 0;
		goto IL_065b;
	}

IL_0611:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_322 = ___blocks0;
		int32_t L_323 = V_3;
		NullCheck(L_322);
		L_322->set_bitb_3(L_323);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_324 = ___blocks0;
		int32_t L_325 = V_4;
		NullCheck(L_324);
		L_324->set_bitk_4(L_325);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_326 = V_10;
		int32_t L_327 = V_6;
		NullCheck(L_326);
		L_326->set_AvailableBytesIn_2(L_327);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_328 = V_10;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_329 = L_328;
		NullCheck(L_329);
		int64_t L_330 = L_329->get_TotalBytesIn_3();
		int32_t L_331 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_332 = V_10;
		NullCheck(L_332);
		int32_t L_333 = L_332->get_NextIn_1();
		NullCheck(L_329);
		L_329->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_330, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_331, (int32_t)L_333)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_334 = V_10;
		int32_t L_335 = V_5;
		NullCheck(L_334);
		L_334->set_NextIn_1(L_335);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_336 = ___blocks0;
		int32_t L_337 = V_7;
		NullCheck(L_336);
		L_336->set_writeAt_20(L_337);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_338 = ___blocks0;
		int32_t L_339 = ___r1;
		NullCheck(L_338);
		int32_t L_340;
		L_340 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_338, L_339, /*hidden argument*/NULL);
		return L_340;
	}

IL_065b:
	{
		int32_t L_341 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_341, (int32_t)1));
		int32_t L_342 = V_3;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_343 = V_10;
		NullCheck(L_343);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_344 = L_343->get_InputBuffer_0();
		int32_t L_345 = V_5;
		int32_t L_346 = L_345;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_346, (int32_t)1));
		NullCheck(L_344);
		int32_t L_347 = L_346;
		uint8_t L_348 = (L_344)->GetAt(static_cast<il2cpp_array_size_t>(L_347));
		int32_t L_349 = V_4;
		V_3 = ((int32_t)((int32_t)L_342|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_348&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_349&(int32_t)((int32_t)31)))))));
		int32_t L_350 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_350, (int32_t)8));
	}

IL_0685:
	{
		int32_t L_351 = V_4;
		int32_t L_352 = V_0;
		if ((((int32_t)L_351) < ((int32_t)L_352)))
		{
			goto IL_0608;
		}
	}
	{
		int32_t L_353 = __this->get_dist_2();
		int32_t L_354 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_355 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_356 = V_0;
		NullCheck(L_355);
		int32_t L_357 = L_356;
		int32_t L_358 = (L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		__this->set_dist_2(((int32_t)il2cpp_codegen_add((int32_t)L_353, (int32_t)((int32_t)((int32_t)L_354&(int32_t)L_358)))));
		int32_t L_359 = V_3;
		int32_t L_360 = V_0;
		V_3 = ((int32_t)((int32_t)L_359>>(int32_t)((int32_t)((int32_t)L_360&(int32_t)((int32_t)31)))));
		int32_t L_361 = V_4;
		int32_t L_362 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_361, (int32_t)L_362));
		__this->set_mode_10(5);
	}

IL_06b7:
	{
		int32_t L_363 = V_7;
		int32_t L_364 = __this->get_dist_2();
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_363, (int32_t)L_364));
		goto IL_06cf;
	}

IL_06c4:
	{
		int32_t L_365 = V_9;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_366 = ___blocks0;
		NullCheck(L_366);
		int32_t L_367 = L_366->get_end_9();
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_365, (int32_t)L_367));
	}

IL_06cf:
	{
		int32_t L_368 = V_9;
		if ((((int32_t)L_368) < ((int32_t)0)))
		{
			goto IL_06c4;
		}
	}
	{
		goto IL_081b;
	}

IL_06d9:
	{
		int32_t L_369 = V_8;
		if (L_369)
		{
			goto IL_07de;
		}
	}
	{
		int32_t L_370 = V_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_371 = ___blocks0;
		NullCheck(L_371);
		int32_t L_372 = L_371->get_end_9();
		if ((!(((uint32_t)L_370) == ((uint32_t)L_372))))
		{
			goto IL_0717;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_373 = ___blocks0;
		NullCheck(L_373);
		int32_t L_374 = L_373->get_readAt_16();
		if (!L_374)
		{
			goto IL_0717;
		}
	}
	{
		V_7 = 0;
		int32_t L_375 = V_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_376 = ___blocks0;
		NullCheck(L_376);
		int32_t L_377 = L_376->get_readAt_16();
		if ((((int32_t)L_375) < ((int32_t)L_377)))
		{
			goto IL_070a;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_378 = ___blocks0;
		NullCheck(L_378);
		int32_t L_379 = L_378->get_end_9();
		int32_t L_380 = V_7;
		G_B69_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_379, (int32_t)L_380));
		goto IL_0715;
	}

IL_070a:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_381 = ___blocks0;
		NullCheck(L_381);
		int32_t L_382 = L_381->get_readAt_16();
		int32_t L_383 = V_7;
		G_B69_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_382, (int32_t)L_383)), (int32_t)1));
	}

IL_0715:
	{
		V_8 = G_B69_0;
	}

IL_0717:
	{
		int32_t L_384 = V_8;
		if (L_384)
		{
			goto IL_07de;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_385 = ___blocks0;
		int32_t L_386 = V_7;
		NullCheck(L_385);
		L_385->set_writeAt_20(L_386);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_387 = ___blocks0;
		int32_t L_388 = ___r1;
		NullCheck(L_387);
		int32_t L_389;
		L_389 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_387, L_388, /*hidden argument*/NULL);
		___r1 = L_389;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_390 = ___blocks0;
		NullCheck(L_390);
		int32_t L_391 = L_390->get_writeAt_20();
		V_7 = L_391;
		int32_t L_392 = V_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_393 = ___blocks0;
		NullCheck(L_393);
		int32_t L_394 = L_393->get_readAt_16();
		if ((((int32_t)L_392) < ((int32_t)L_394)))
		{
			goto IL_074c;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_395 = ___blocks0;
		NullCheck(L_395);
		int32_t L_396 = L_395->get_end_9();
		int32_t L_397 = V_7;
		G_B74_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_396, (int32_t)L_397));
		goto IL_0757;
	}

IL_074c:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_398 = ___blocks0;
		NullCheck(L_398);
		int32_t L_399 = L_398->get_readAt_16();
		int32_t L_400 = V_7;
		G_B74_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_399, (int32_t)L_400)), (int32_t)1));
	}

IL_0757:
	{
		V_8 = G_B74_0;
		int32_t L_401 = V_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_402 = ___blocks0;
		NullCheck(L_402);
		int32_t L_403 = L_402->get_end_9();
		if ((!(((uint32_t)L_401) == ((uint32_t)L_403))))
		{
			goto IL_0790;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_404 = ___blocks0;
		NullCheck(L_404);
		int32_t L_405 = L_404->get_readAt_16();
		if (!L_405)
		{
			goto IL_0790;
		}
	}
	{
		V_7 = 0;
		int32_t L_406 = V_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_407 = ___blocks0;
		NullCheck(L_407);
		int32_t L_408 = L_407->get_readAt_16();
		if ((((int32_t)L_406) < ((int32_t)L_408)))
		{
			goto IL_0783;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_409 = ___blocks0;
		NullCheck(L_409);
		int32_t L_410 = L_409->get_end_9();
		int32_t L_411 = V_7;
		G_B79_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_410, (int32_t)L_411));
		goto IL_078e;
	}

IL_0783:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_412 = ___blocks0;
		NullCheck(L_412);
		int32_t L_413 = L_412->get_readAt_16();
		int32_t L_414 = V_7;
		G_B79_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_413, (int32_t)L_414)), (int32_t)1));
	}

IL_078e:
	{
		V_8 = G_B79_0;
	}

IL_0790:
	{
		int32_t L_415 = V_8;
		if (L_415)
		{
			goto IL_07de;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_416 = ___blocks0;
		int32_t L_417 = V_3;
		NullCheck(L_416);
		L_416->set_bitb_3(L_417);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_418 = ___blocks0;
		int32_t L_419 = V_4;
		NullCheck(L_418);
		L_418->set_bitk_4(L_419);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_420 = V_10;
		int32_t L_421 = V_6;
		NullCheck(L_420);
		L_420->set_AvailableBytesIn_2(L_421);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_422 = V_10;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_423 = L_422;
		NullCheck(L_423);
		int64_t L_424 = L_423->get_TotalBytesIn_3();
		int32_t L_425 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_426 = V_10;
		NullCheck(L_426);
		int32_t L_427 = L_426->get_NextIn_1();
		NullCheck(L_423);
		L_423->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_424, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_425, (int32_t)L_427)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_428 = V_10;
		int32_t L_429 = V_5;
		NullCheck(L_428);
		L_428->set_NextIn_1(L_429);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_430 = ___blocks0;
		int32_t L_431 = V_7;
		NullCheck(L_430);
		L_430->set_writeAt_20(L_431);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_432 = ___blocks0;
		int32_t L_433 = ___r1;
		NullCheck(L_432);
		int32_t L_434;
		L_434 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_432, L_433, /*hidden argument*/NULL);
		return L_434;
	}

IL_07de:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_435 = ___blocks0;
		NullCheck(L_435);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_436 = L_435->get_window_19();
		int32_t L_437 = V_7;
		int32_t L_438 = L_437;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_438, (int32_t)1));
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_439 = ___blocks0;
		NullCheck(L_439);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_440 = L_439->get_window_19();
		int32_t L_441 = V_9;
		int32_t L_442 = L_441;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_442, (int32_t)1));
		NullCheck(L_440);
		int32_t L_443 = L_442;
		uint8_t L_444 = (L_440)->GetAt(static_cast<il2cpp_array_size_t>(L_443));
		NullCheck(L_436);
		(L_436)->SetAt(static_cast<il2cpp_array_size_t>(L_438), (uint8_t)L_444);
		int32_t L_445 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_445, (int32_t)1));
		int32_t L_446 = V_9;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_447 = ___blocks0;
		NullCheck(L_447);
		int32_t L_448 = L_447->get_end_9();
		if ((!(((uint32_t)L_446) == ((uint32_t)L_448))))
		{
			goto IL_080d;
		}
	}
	{
		V_9 = 0;
	}

IL_080d:
	{
		int32_t L_449 = __this->get_len_6();
		__this->set_len_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_449, (int32_t)1)));
	}

IL_081b:
	{
		int32_t L_450 = __this->get_len_6();
		if (L_450)
		{
			goto IL_06d9;
		}
	}
	{
		__this->set_mode_10(0);
		goto IL_005b;
	}

IL_0832:
	{
		int32_t L_451 = V_8;
		if (L_451)
		{
			goto IL_0937;
		}
	}
	{
		int32_t L_452 = V_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_453 = ___blocks0;
		NullCheck(L_453);
		int32_t L_454 = L_453->get_end_9();
		if ((!(((uint32_t)L_452) == ((uint32_t)L_454))))
		{
			goto IL_0870;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_455 = ___blocks0;
		NullCheck(L_455);
		int32_t L_456 = L_455->get_readAt_16();
		if (!L_456)
		{
			goto IL_0870;
		}
	}
	{
		V_7 = 0;
		int32_t L_457 = V_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_458 = ___blocks0;
		NullCheck(L_458);
		int32_t L_459 = L_458->get_readAt_16();
		if ((((int32_t)L_457) < ((int32_t)L_459)))
		{
			goto IL_0863;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_460 = ___blocks0;
		NullCheck(L_460);
		int32_t L_461 = L_460->get_end_9();
		int32_t L_462 = V_7;
		G_B93_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_461, (int32_t)L_462));
		goto IL_086e;
	}

IL_0863:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_463 = ___blocks0;
		NullCheck(L_463);
		int32_t L_464 = L_463->get_readAt_16();
		int32_t L_465 = V_7;
		G_B93_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_464, (int32_t)L_465)), (int32_t)1));
	}

IL_086e:
	{
		V_8 = G_B93_0;
	}

IL_0870:
	{
		int32_t L_466 = V_8;
		if (L_466)
		{
			goto IL_0937;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_467 = ___blocks0;
		int32_t L_468 = V_7;
		NullCheck(L_467);
		L_467->set_writeAt_20(L_468);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_469 = ___blocks0;
		int32_t L_470 = ___r1;
		NullCheck(L_469);
		int32_t L_471;
		L_471 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_469, L_470, /*hidden argument*/NULL);
		___r1 = L_471;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_472 = ___blocks0;
		NullCheck(L_472);
		int32_t L_473 = L_472->get_writeAt_20();
		V_7 = L_473;
		int32_t L_474 = V_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_475 = ___blocks0;
		NullCheck(L_475);
		int32_t L_476 = L_475->get_readAt_16();
		if ((((int32_t)L_474) < ((int32_t)L_476)))
		{
			goto IL_08a5;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_477 = ___blocks0;
		NullCheck(L_477);
		int32_t L_478 = L_477->get_end_9();
		int32_t L_479 = V_7;
		G_B98_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_478, (int32_t)L_479));
		goto IL_08b0;
	}

IL_08a5:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_480 = ___blocks0;
		NullCheck(L_480);
		int32_t L_481 = L_480->get_readAt_16();
		int32_t L_482 = V_7;
		G_B98_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_481, (int32_t)L_482)), (int32_t)1));
	}

IL_08b0:
	{
		V_8 = G_B98_0;
		int32_t L_483 = V_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_484 = ___blocks0;
		NullCheck(L_484);
		int32_t L_485 = L_484->get_end_9();
		if ((!(((uint32_t)L_483) == ((uint32_t)L_485))))
		{
			goto IL_08e9;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_486 = ___blocks0;
		NullCheck(L_486);
		int32_t L_487 = L_486->get_readAt_16();
		if (!L_487)
		{
			goto IL_08e9;
		}
	}
	{
		V_7 = 0;
		int32_t L_488 = V_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_489 = ___blocks0;
		NullCheck(L_489);
		int32_t L_490 = L_489->get_readAt_16();
		if ((((int32_t)L_488) < ((int32_t)L_490)))
		{
			goto IL_08dc;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_491 = ___blocks0;
		NullCheck(L_491);
		int32_t L_492 = L_491->get_end_9();
		int32_t L_493 = V_7;
		G_B103_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_492, (int32_t)L_493));
		goto IL_08e7;
	}

IL_08dc:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_494 = ___blocks0;
		NullCheck(L_494);
		int32_t L_495 = L_494->get_readAt_16();
		int32_t L_496 = V_7;
		G_B103_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_495, (int32_t)L_496)), (int32_t)1));
	}

IL_08e7:
	{
		V_8 = G_B103_0;
	}

IL_08e9:
	{
		int32_t L_497 = V_8;
		if (L_497)
		{
			goto IL_0937;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_498 = ___blocks0;
		int32_t L_499 = V_3;
		NullCheck(L_498);
		L_498->set_bitb_3(L_499);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_500 = ___blocks0;
		int32_t L_501 = V_4;
		NullCheck(L_500);
		L_500->set_bitk_4(L_501);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_502 = V_10;
		int32_t L_503 = V_6;
		NullCheck(L_502);
		L_502->set_AvailableBytesIn_2(L_503);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_504 = V_10;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_505 = L_504;
		NullCheck(L_505);
		int64_t L_506 = L_505->get_TotalBytesIn_3();
		int32_t L_507 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_508 = V_10;
		NullCheck(L_508);
		int32_t L_509 = L_508->get_NextIn_1();
		NullCheck(L_505);
		L_505->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_506, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_507, (int32_t)L_509)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_510 = V_10;
		int32_t L_511 = V_5;
		NullCheck(L_510);
		L_510->set_NextIn_1(L_511);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_512 = ___blocks0;
		int32_t L_513 = V_7;
		NullCheck(L_512);
		L_512->set_writeAt_20(L_513);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_514 = ___blocks0;
		int32_t L_515 = ___r1;
		NullCheck(L_514);
		int32_t L_516;
		L_516 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_514, L_515, /*hidden argument*/NULL);
		return L_516;
	}

IL_0937:
	{
		___r1 = 0;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_517 = ___blocks0;
		NullCheck(L_517);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_518 = L_517->get_window_19();
		int32_t L_519 = V_7;
		int32_t L_520 = L_519;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_520, (int32_t)1));
		int32_t L_521 = __this->get_lit_7();
		NullCheck(L_518);
		(L_518)->SetAt(static_cast<il2cpp_array_size_t>(L_520), (uint8_t)((int32_t)((uint8_t)L_521)));
		int32_t L_522 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_522, (int32_t)1));
		__this->set_mode_10(0);
		goto IL_005b;
	}

IL_0961:
	{
		int32_t L_523 = V_4;
		if ((((int32_t)L_523) <= ((int32_t)7)))
		{
			goto IL_0978;
		}
	}
	{
		int32_t L_524 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_524, (int32_t)8));
		int32_t L_525 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_525, (int32_t)1));
		int32_t L_526 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_526, (int32_t)1));
	}

IL_0978:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_527 = ___blocks0;
		int32_t L_528 = V_7;
		NullCheck(L_527);
		L_527->set_writeAt_20(L_528);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_529 = ___blocks0;
		int32_t L_530 = ___r1;
		NullCheck(L_529);
		int32_t L_531;
		L_531 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_529, L_530, /*hidden argument*/NULL);
		___r1 = L_531;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_532 = ___blocks0;
		NullCheck(L_532);
		int32_t L_533 = L_532->get_writeAt_20();
		V_7 = L_533;
		int32_t L_534 = V_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_535 = ___blocks0;
		NullCheck(L_535);
		int32_t L_536 = L_535->get_readAt_16();
		if ((((int32_t)L_534) < ((int32_t)L_536)))
		{
			goto IL_09a6;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_537 = ___blocks0;
		NullCheck(L_537);
		int32_t L_538 = L_537->get_end_9();
		int32_t L_539 = V_7;
		G_B112_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_538, (int32_t)L_539));
		goto IL_09b1;
	}

IL_09a6:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_540 = ___blocks0;
		NullCheck(L_540);
		int32_t L_541 = L_540->get_readAt_16();
		int32_t L_542 = V_7;
		G_B112_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_541, (int32_t)L_542)), (int32_t)1));
	}

IL_09b1:
	{
		V_8 = G_B112_0;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_543 = ___blocks0;
		NullCheck(L_543);
		int32_t L_544 = L_543->get_readAt_16();
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_545 = ___blocks0;
		NullCheck(L_545);
		int32_t L_546 = L_545->get_writeAt_20();
		if ((((int32_t)L_544) == ((int32_t)L_546)))
		{
			goto IL_0a0b;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_547 = ___blocks0;
		int32_t L_548 = V_3;
		NullCheck(L_547);
		L_547->set_bitb_3(L_548);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_549 = ___blocks0;
		int32_t L_550 = V_4;
		NullCheck(L_549);
		L_549->set_bitk_4(L_550);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_551 = V_10;
		int32_t L_552 = V_6;
		NullCheck(L_551);
		L_551->set_AvailableBytesIn_2(L_552);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_553 = V_10;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_554 = L_553;
		NullCheck(L_554);
		int64_t L_555 = L_554->get_TotalBytesIn_3();
		int32_t L_556 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_557 = V_10;
		NullCheck(L_557);
		int32_t L_558 = L_557->get_NextIn_1();
		NullCheck(L_554);
		L_554->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_555, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_556, (int32_t)L_558)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_559 = V_10;
		int32_t L_560 = V_5;
		NullCheck(L_559);
		L_559->set_NextIn_1(L_560);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_561 = ___blocks0;
		int32_t L_562 = V_7;
		NullCheck(L_561);
		L_561->set_writeAt_20(L_562);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_563 = ___blocks0;
		int32_t L_564 = ___r1;
		NullCheck(L_563);
		int32_t L_565;
		L_565 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_563, L_564, /*hidden argument*/NULL);
		return L_565;
	}

IL_0a0b:
	{
		__this->set_mode_10(8);
	}

IL_0a12:
	{
		___r1 = 1;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_566 = ___blocks0;
		int32_t L_567 = V_3;
		NullCheck(L_566);
		L_566->set_bitb_3(L_567);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_568 = ___blocks0;
		int32_t L_569 = V_4;
		NullCheck(L_568);
		L_568->set_bitk_4(L_569);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_570 = V_10;
		int32_t L_571 = V_6;
		NullCheck(L_570);
		L_570->set_AvailableBytesIn_2(L_571);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_572 = V_10;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_573 = L_572;
		NullCheck(L_573);
		int64_t L_574 = L_573->get_TotalBytesIn_3();
		int32_t L_575 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_576 = V_10;
		NullCheck(L_576);
		int32_t L_577 = L_576->get_NextIn_1();
		NullCheck(L_573);
		L_573->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_574, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_575, (int32_t)L_577)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_578 = V_10;
		int32_t L_579 = V_5;
		NullCheck(L_578);
		L_578->set_NextIn_1(L_579);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_580 = ___blocks0;
		int32_t L_581 = V_7;
		NullCheck(L_580);
		L_580->set_writeAt_20(L_581);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_582 = ___blocks0;
		int32_t L_583 = ___r1;
		NullCheck(L_582);
		int32_t L_584;
		L_584 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_582, L_583, /*hidden argument*/NULL);
		return L_584;
	}

IL_0a5f:
	{
		___r1 = ((int32_t)-3);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_585 = ___blocks0;
		int32_t L_586 = V_3;
		NullCheck(L_585);
		L_585->set_bitb_3(L_586);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_587 = ___blocks0;
		int32_t L_588 = V_4;
		NullCheck(L_587);
		L_587->set_bitk_4(L_588);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_589 = V_10;
		int32_t L_590 = V_6;
		NullCheck(L_589);
		L_589->set_AvailableBytesIn_2(L_590);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_591 = V_10;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_592 = L_591;
		NullCheck(L_592);
		int64_t L_593 = L_592->get_TotalBytesIn_3();
		int32_t L_594 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_595 = V_10;
		NullCheck(L_595);
		int32_t L_596 = L_595->get_NextIn_1();
		NullCheck(L_592);
		L_592->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_593, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_594, (int32_t)L_596)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_597 = V_10;
		int32_t L_598 = V_5;
		NullCheck(L_597);
		L_597->set_NextIn_1(L_598);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_599 = ___blocks0;
		int32_t L_600 = V_7;
		NullCheck(L_599);
		L_599->set_writeAt_20(L_600);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_601 = ___blocks0;
		int32_t L_602 = ___r1;
		NullCheck(L_601);
		int32_t L_603;
		L_603 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_601, L_602, /*hidden argument*/NULL);
		return L_603;
	}

IL_0aad:
	{
		___r1 = ((int32_t)-2);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_604 = ___blocks0;
		int32_t L_605 = V_3;
		NullCheck(L_604);
		L_604->set_bitb_3(L_605);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_606 = ___blocks0;
		int32_t L_607 = V_4;
		NullCheck(L_606);
		L_606->set_bitk_4(L_607);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_608 = V_10;
		int32_t L_609 = V_6;
		NullCheck(L_608);
		L_608->set_AvailableBytesIn_2(L_609);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_610 = V_10;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_611 = L_610;
		NullCheck(L_611);
		int64_t L_612 = L_611->get_TotalBytesIn_3();
		int32_t L_613 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_614 = V_10;
		NullCheck(L_614);
		int32_t L_615 = L_614->get_NextIn_1();
		NullCheck(L_611);
		L_611->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_612, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_613, (int32_t)L_615)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_616 = V_10;
		int32_t L_617 = V_5;
		NullCheck(L_616);
		L_616->set_NextIn_1(L_617);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_618 = ___blocks0;
		int32_t L_619 = V_7;
		NullCheck(L_618);
		L_618->set_writeAt_20(L_619);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_620 = ___blocks0;
		int32_t L_621 = ___r1;
		NullCheck(L_620);
		int32_t L_622;
		L_622 = InflateBlocks_Flush_m66D74B2638DDE90638BCA625B95F5A68EAC7ABD9(L_620, L_621, /*hidden argument*/NULL);
		return L_622;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.InflateCodes::InflateFast(System.Int32,System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32,SharpCompress.Compressors.Deflate.InflateBlocks,SharpCompress.Compressors.Deflate.ZlibCodec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateCodes_InflateFast_m4BCCA20A108CE0888A0226CCC5A7F12FB7E75D58 (InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * __this, int32_t ___bl0, int32_t ___bd1, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tl2, int32_t ___tl_index3, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___td4, int32_t ___td_index5, InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * ___s6, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___z7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B53_0 = 0;
	int32_t G_B59_0 = 0;
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_0 = ___z7;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_NextIn_1();
		V_6 = L_1;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_2 = ___z7;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_AvailableBytesIn_2();
		V_7 = L_3;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_4 = ___s6;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_bitb_3();
		V_4 = L_5;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_6 = ___s6;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_bitk_4();
		V_5 = L_7;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_8 = ___s6;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_writeAt_20();
		V_8 = L_9;
		int32_t L_10 = V_8;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_11 = ___s6;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_readAt_16();
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0044;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_13 = ___s6;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_end_9();
		int32_t L_15 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15));
		goto IL_0050;
	}

IL_0044:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_16 = ___s6;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_readAt_16();
		int32_t L_18 = V_8;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)), (int32_t)1));
	}

IL_0050:
	{
		V_9 = G_B3_0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_20 = ___bl0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_10 = L_22;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_24 = ___bd1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_11 = L_26;
		goto IL_0092;
	}

IL_0066:
	{
		int32_t L_27 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1));
		int32_t L_28 = V_4;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_29 = ___z7;
		NullCheck(L_29);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = L_29->get_InputBuffer_0();
		int32_t L_31 = V_6;
		int32_t L_32 = L_31;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		NullCheck(L_30);
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_5;
		V_4 = ((int32_t)((int32_t)L_28|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_34&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_35&(int32_t)((int32_t)31)))))));
		int32_t L_36 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)8));
	}

IL_0092:
	{
		int32_t L_37 = V_5;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)20))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_38 = V_4;
		int32_t L_39 = V_10;
		V_0 = ((int32_t)((int32_t)L_38&(int32_t)L_39));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = ___tl2;
		V_1 = L_40;
		int32_t L_41 = ___tl_index3;
		V_2 = L_41;
		int32_t L_42 = V_2;
		int32_t L_43 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)L_43)), (int32_t)3));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_44 = V_1;
		int32_t L_45 = V_15;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = L_47;
		V_3 = L_48;
		if (L_48)
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_49 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = V_1;
		int32_t L_51 = V_15;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		int32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_4 = ((int32_t)((int32_t)L_49>>(int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)31)))));
		int32_t L_54 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_55 = V_1;
		int32_t L_56 = V_15;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_58));
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_59 = ___s6;
		NullCheck(L_59);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_60 = L_59->get_window_19();
		int32_t L_61 = V_8;
		int32_t L_62 = L_61;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_63 = V_1;
		int32_t L_64 = V_15;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)2));
		int32_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (uint8_t)((int32_t)((uint8_t)L_66)));
		int32_t L_67 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)1));
		goto IL_05c0;
	}

IL_00ec:
	{
		int32_t L_68 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_69 = V_1;
		int32_t L_70 = V_15;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		int32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_4 = ((int32_t)((int32_t)L_68>>(int32_t)((int32_t)((int32_t)L_72&(int32_t)((int32_t)31)))));
		int32_t L_73 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_74 = V_1;
		int32_t L_75 = V_15;
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_73, (int32_t)L_77));
		int32_t L_78 = V_3;
		if (!((int32_t)((int32_t)L_78&(int32_t)((int32_t)16))))
		{
			goto IL_044b;
		}
	}
	{
		int32_t L_79 = V_3;
		V_3 = ((int32_t)((int32_t)L_79&(int32_t)((int32_t)15)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_80 = V_1;
		int32_t L_81 = V_15;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)2));
		int32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_85 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_86 = V_3;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		int32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)((int32_t)((int32_t)L_84&(int32_t)L_88))));
		int32_t L_89 = V_4;
		int32_t L_90 = V_3;
		V_4 = ((int32_t)((int32_t)L_89>>(int32_t)((int32_t)((int32_t)L_90&(int32_t)((int32_t)31)))));
		int32_t L_91 = V_5;
		int32_t L_92 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)L_92));
		goto IL_0163;
	}

IL_0137:
	{
		int32_t L_93 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1));
		int32_t L_94 = V_4;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_95 = ___z7;
		NullCheck(L_95);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_96 = L_95->get_InputBuffer_0();
		int32_t L_97 = V_6;
		int32_t L_98 = L_97;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
		NullCheck(L_96);
		int32_t L_99 = L_98;
		uint8_t L_100 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		int32_t L_101 = V_5;
		V_4 = ((int32_t)((int32_t)L_94|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_100&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_101&(int32_t)((int32_t)31)))))));
		int32_t L_102 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)8));
	}

IL_0163:
	{
		int32_t L_103 = V_5;
		if ((((int32_t)L_103) < ((int32_t)((int32_t)15))))
		{
			goto IL_0137;
		}
	}
	{
		int32_t L_104 = V_4;
		int32_t L_105 = V_11;
		V_0 = ((int32_t)((int32_t)L_104&(int32_t)L_105));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_106 = ___td4;
		V_1 = L_106;
		int32_t L_107 = ___td_index5;
		V_2 = L_107;
		int32_t L_108 = V_2;
		int32_t L_109 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)L_109)), (int32_t)3));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_110 = V_1;
		int32_t L_111 = V_15;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		int32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_3 = L_113;
	}

IL_0181:
	{
		int32_t L_114 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_115 = V_1;
		int32_t L_116 = V_15;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		int32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_4 = ((int32_t)((int32_t)L_114>>(int32_t)((int32_t)((int32_t)L_118&(int32_t)((int32_t)31)))));
		int32_t L_119 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_120 = V_1;
		int32_t L_121 = V_15;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
		int32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_119, (int32_t)L_123));
		int32_t L_124 = V_3;
		if (!((int32_t)((int32_t)L_124&(int32_t)((int32_t)16))))
		{
			goto IL_0394;
		}
	}
	{
		int32_t L_125 = V_3;
		V_3 = ((int32_t)((int32_t)L_125&(int32_t)((int32_t)15)));
		goto IL_01d6;
	}

IL_01aa:
	{
		int32_t L_126 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_126, (int32_t)1));
		int32_t L_127 = V_4;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_128 = ___z7;
		NullCheck(L_128);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_129 = L_128->get_InputBuffer_0();
		int32_t L_130 = V_6;
		int32_t L_131 = L_130;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1));
		NullCheck(L_129);
		int32_t L_132 = L_131;
		uint8_t L_133 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		int32_t L_134 = V_5;
		V_4 = ((int32_t)((int32_t)L_127|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_133&(int32_t)((int32_t)255)))<<(int32_t)((int32_t)((int32_t)L_134&(int32_t)((int32_t)31)))))));
		int32_t L_135 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)8));
	}

IL_01d6:
	{
		int32_t L_136 = V_5;
		int32_t L_137 = V_3;
		if ((((int32_t)L_136) < ((int32_t)L_137)))
		{
			goto IL_01aa;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_138 = V_1;
		int32_t L_139 = V_15;
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)2));
		int32_t L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		int32_t L_142 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_143 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_144 = V_3;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		int32_t L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)((int32_t)((int32_t)L_142&(int32_t)L_146))));
		int32_t L_147 = V_4;
		int32_t L_148 = V_3;
		V_4 = ((int32_t)((int32_t)L_147>>(int32_t)((int32_t)((int32_t)L_148&(int32_t)((int32_t)31)))));
		int32_t L_149 = V_5;
		int32_t L_150 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_149, (int32_t)L_150));
		int32_t L_151 = V_9;
		int32_t L_152 = V_12;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_151, (int32_t)L_152));
		int32_t L_153 = V_8;
		int32_t L_154 = V_13;
		if ((((int32_t)L_153) < ((int32_t)L_154)))
		{
			goto IL_029a;
		}
	}
	{
		int32_t L_155 = V_8;
		int32_t L_156 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_155, (int32_t)L_156));
		int32_t L_157 = V_8;
		int32_t L_158 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_157, (int32_t)L_158))) <= ((int32_t)0)))
		{
			goto IL_026b;
		}
	}
	{
		int32_t L_159 = V_8;
		int32_t L_160 = V_14;
		if ((((int32_t)2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_159, (int32_t)L_160)))))
		{
			goto IL_026b;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_161 = ___s6;
		NullCheck(L_161);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_162 = L_161->get_window_19();
		int32_t L_163 = V_8;
		int32_t L_164 = L_163;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)1));
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_165 = ___s6;
		NullCheck(L_165);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_166 = L_165->get_window_19();
		int32_t L_167 = V_14;
		int32_t L_168 = L_167;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_168, (int32_t)1));
		NullCheck(L_166);
		int32_t L_169 = L_168;
		uint8_t L_170 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(L_164), (uint8_t)L_170);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_171 = ___s6;
		NullCheck(L_171);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_172 = L_171->get_window_19();
		int32_t L_173 = V_8;
		int32_t L_174 = L_173;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)1));
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_175 = ___s6;
		NullCheck(L_175);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_176 = L_175->get_window_19();
		int32_t L_177 = V_14;
		int32_t L_178 = L_177;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)1));
		NullCheck(L_176);
		int32_t L_179 = L_178;
		uint8_t L_180 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(L_174), (uint8_t)L_180);
		int32_t L_181 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_181, (int32_t)2));
		goto IL_0328;
	}

IL_026b:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_182 = ___s6;
		NullCheck(L_182);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_183 = L_182->get_window_19();
		int32_t L_184 = V_14;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_185 = ___s6;
		NullCheck(L_185);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_186 = L_185->get_window_19();
		int32_t L_187 = V_8;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_183, L_184, (RuntimeArray *)(RuntimeArray *)L_186, L_187, 2, /*hidden argument*/NULL);
		int32_t L_188 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_188, (int32_t)2));
		int32_t L_189 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_189, (int32_t)2));
		int32_t L_190 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_190, (int32_t)2));
		goto IL_0328;
	}

IL_029a:
	{
		int32_t L_191 = V_8;
		int32_t L_192 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_191, (int32_t)L_192));
	}

IL_02a1:
	{
		int32_t L_193 = V_14;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_194 = ___s6;
		NullCheck(L_194);
		int32_t L_195 = L_194->get_end_9();
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_193, (int32_t)L_195));
		int32_t L_196 = V_14;
		if ((((int32_t)L_196) < ((int32_t)0)))
		{
			goto IL_02a1;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_197 = ___s6;
		NullCheck(L_197);
		int32_t L_198 = L_197->get_end_9();
		int32_t L_199 = V_14;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_198, (int32_t)L_199));
		int32_t L_200 = V_12;
		int32_t L_201 = V_3;
		if ((((int32_t)L_200) <= ((int32_t)L_201)))
		{
			goto IL_0328;
		}
	}
	{
		int32_t L_202 = V_12;
		int32_t L_203 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_202, (int32_t)L_203));
		int32_t L_204 = V_8;
		int32_t L_205 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_204, (int32_t)L_205))) <= ((int32_t)0)))
		{
			goto IL_02ff;
		}
	}
	{
		int32_t L_206 = V_3;
		int32_t L_207 = V_8;
		int32_t L_208 = V_14;
		if ((((int32_t)L_206) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_207, (int32_t)L_208)))))
		{
			goto IL_02ff;
		}
	}

IL_02d8:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_209 = ___s6;
		NullCheck(L_209);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_210 = L_209->get_window_19();
		int32_t L_211 = V_8;
		int32_t L_212 = L_211;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_212, (int32_t)1));
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_213 = ___s6;
		NullCheck(L_213);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_214 = L_213->get_window_19();
		int32_t L_215 = V_14;
		int32_t L_216 = L_215;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_216, (int32_t)1));
		NullCheck(L_214);
		int32_t L_217 = L_216;
		uint8_t L_218 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		NullCheck(L_210);
		(L_210)->SetAt(static_cast<il2cpp_array_size_t>(L_212), (uint8_t)L_218);
		int32_t L_219 = V_3;
		int32_t L_220 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_219, (int32_t)1));
		V_3 = L_220;
		if (L_220)
		{
			goto IL_02d8;
		}
	}
	{
		goto IL_0325;
	}

IL_02ff:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_221 = ___s6;
		NullCheck(L_221);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_222 = L_221->get_window_19();
		int32_t L_223 = V_14;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_224 = ___s6;
		NullCheck(L_224);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_225 = L_224->get_window_19();
		int32_t L_226 = V_8;
		int32_t L_227 = V_3;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_222, L_223, (RuntimeArray *)(RuntimeArray *)L_225, L_226, L_227, /*hidden argument*/NULL);
		int32_t L_228 = V_8;
		int32_t L_229 = V_3;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_228, (int32_t)L_229));
		int32_t L_230 = V_14;
		int32_t L_231 = V_3;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_230, (int32_t)L_231));
		V_3 = 0;
	}

IL_0325:
	{
		V_14 = 0;
	}

IL_0328:
	{
		int32_t L_232 = V_8;
		int32_t L_233 = V_14;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_232, (int32_t)L_233))) <= ((int32_t)0)))
		{
			goto IL_0365;
		}
	}
	{
		int32_t L_234 = V_12;
		int32_t L_235 = V_8;
		int32_t L_236 = V_14;
		if ((((int32_t)L_234) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_235, (int32_t)L_236)))))
		{
			goto IL_0365;
		}
	}

IL_0339:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_237 = ___s6;
		NullCheck(L_237);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_238 = L_237->get_window_19();
		int32_t L_239 = V_8;
		int32_t L_240 = L_239;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_240, (int32_t)1));
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_241 = ___s6;
		NullCheck(L_241);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_242 = L_241->get_window_19();
		int32_t L_243 = V_14;
		int32_t L_244 = L_243;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_244, (int32_t)1));
		NullCheck(L_242);
		int32_t L_245 = L_244;
		uint8_t L_246 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		NullCheck(L_238);
		(L_238)->SetAt(static_cast<il2cpp_array_size_t>(L_240), (uint8_t)L_246);
		int32_t L_247 = V_12;
		int32_t L_248 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_247, (int32_t)1));
		V_12 = L_248;
		if (L_248)
		{
			goto IL_0339;
		}
	}
	{
		goto IL_05c0;
	}

IL_0365:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_249 = ___s6;
		NullCheck(L_249);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_250 = L_249->get_window_19();
		int32_t L_251 = V_14;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_252 = ___s6;
		NullCheck(L_252);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_253 = L_252->get_window_19();
		int32_t L_254 = V_8;
		int32_t L_255 = V_12;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_250, L_251, (RuntimeArray *)(RuntimeArray *)L_253, L_254, L_255, /*hidden argument*/NULL);
		int32_t L_256 = V_8;
		int32_t L_257 = V_12;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_256, (int32_t)L_257));
		int32_t L_258 = V_14;
		int32_t L_259 = V_12;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_258, (int32_t)L_259));
		V_12 = 0;
		goto IL_05c0;
	}

IL_0394:
	{
		int32_t L_260 = V_3;
		if (((int32_t)((int32_t)L_260&(int32_t)((int32_t)64))))
		{
			goto IL_03c1;
		}
	}
	{
		int32_t L_261 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_262 = V_1;
		int32_t L_263 = V_15;
		NullCheck(L_262);
		int32_t L_264 = ((int32_t)il2cpp_codegen_add((int32_t)L_263, (int32_t)2));
		int32_t L_265 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_261, (int32_t)L_265));
		int32_t L_266 = V_0;
		int32_t L_267 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_268 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_269 = V_3;
		NullCheck(L_268);
		int32_t L_270 = L_269;
		int32_t L_271 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_266, (int32_t)((int32_t)((int32_t)L_267&(int32_t)L_271))));
		int32_t L_272 = V_2;
		int32_t L_273 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_272, (int32_t)L_273)), (int32_t)3));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_274 = V_1;
		int32_t L_275 = V_15;
		NullCheck(L_274);
		int32_t L_276 = L_275;
		int32_t L_277 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		V_3 = L_277;
		goto IL_0181;
	}

IL_03c1:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_278 = ___z7;
		NullCheck(L_278);
		L_278->set_Message_8(_stringLiteralBDD794DC7884A15D601FC8AD88E8B6637CF36948);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_279 = ___z7;
		NullCheck(L_279);
		int32_t L_280 = L_279->get_AvailableBytesIn_2();
		int32_t L_281 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_280, (int32_t)L_281));
		int32_t L_282 = V_5;
		int32_t L_283 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_282>>(int32_t)3))) < ((int32_t)L_283)))
		{
			goto IL_03e5;
		}
	}
	{
		int32_t L_284 = V_12;
		G_B41_0 = L_284;
		goto IL_03e9;
	}

IL_03e5:
	{
		int32_t L_285 = V_5;
		G_B41_0 = ((int32_t)((int32_t)L_285>>(int32_t)3));
	}

IL_03e9:
	{
		V_12 = G_B41_0;
		int32_t L_286 = V_7;
		int32_t L_287 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_286, (int32_t)L_287));
		int32_t L_288 = V_6;
		int32_t L_289 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_288, (int32_t)L_289));
		int32_t L_290 = V_5;
		int32_t L_291 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_290, (int32_t)((int32_t)((int32_t)L_291<<(int32_t)3))));
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_292 = ___s6;
		int32_t L_293 = V_4;
		NullCheck(L_292);
		L_292->set_bitb_3(L_293);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_294 = ___s6;
		int32_t L_295 = V_5;
		NullCheck(L_294);
		L_294->set_bitk_4(L_295);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_296 = ___z7;
		int32_t L_297 = V_7;
		NullCheck(L_296);
		L_296->set_AvailableBytesIn_2(L_297);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_298 = ___z7;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_299 = L_298;
		NullCheck(L_299);
		int64_t L_300 = L_299->get_TotalBytesIn_3();
		int32_t L_301 = V_6;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_302 = ___z7;
		NullCheck(L_302);
		int32_t L_303 = L_302->get_NextIn_1();
		NullCheck(L_299);
		L_299->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_300, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_301, (int32_t)L_303)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_304 = ___z7;
		int32_t L_305 = V_6;
		NullCheck(L_304);
		L_304->set_NextIn_1(L_305);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_306 = ___s6;
		int32_t L_307 = V_8;
		NullCheck(L_306);
		L_306->set_writeAt_20(L_307);
		return ((int32_t)-3);
	}

IL_044b:
	{
		int32_t L_308 = V_3;
		if (((int32_t)((int32_t)L_308&(int32_t)((int32_t)64))))
		{
			goto IL_04b3;
		}
	}
	{
		int32_t L_309 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_310 = V_1;
		int32_t L_311 = V_15;
		NullCheck(L_310);
		int32_t L_312 = ((int32_t)il2cpp_codegen_add((int32_t)L_311, (int32_t)2));
		int32_t L_313 = (L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_309, (int32_t)L_313));
		int32_t L_314 = V_0;
		int32_t L_315 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_316 = ((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->get_InflateMask_0();
		int32_t L_317 = V_3;
		NullCheck(L_316);
		int32_t L_318 = L_317;
		int32_t L_319 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_314, (int32_t)((int32_t)((int32_t)L_315&(int32_t)L_319))));
		int32_t L_320 = V_2;
		int32_t L_321 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_320, (int32_t)L_321)), (int32_t)3));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_322 = V_1;
		int32_t L_323 = V_15;
		NullCheck(L_322);
		int32_t L_324 = L_323;
		int32_t L_325 = (L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		int32_t L_326 = L_325;
		V_3 = L_326;
		if (L_326)
		{
			goto IL_00ec;
		}
	}
	{
		int32_t L_327 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_328 = V_1;
		int32_t L_329 = V_15;
		NullCheck(L_328);
		int32_t L_330 = ((int32_t)il2cpp_codegen_add((int32_t)L_329, (int32_t)1));
		int32_t L_331 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		V_4 = ((int32_t)((int32_t)L_327>>(int32_t)((int32_t)((int32_t)L_331&(int32_t)((int32_t)31)))));
		int32_t L_332 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_333 = V_1;
		int32_t L_334 = V_15;
		NullCheck(L_333);
		int32_t L_335 = ((int32_t)il2cpp_codegen_add((int32_t)L_334, (int32_t)1));
		int32_t L_336 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_332, (int32_t)L_336));
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_337 = ___s6;
		NullCheck(L_337);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_338 = L_337->get_window_19();
		int32_t L_339 = V_8;
		int32_t L_340 = L_339;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_340, (int32_t)1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_341 = V_1;
		int32_t L_342 = V_15;
		NullCheck(L_341);
		int32_t L_343 = ((int32_t)il2cpp_codegen_add((int32_t)L_342, (int32_t)2));
		int32_t L_344 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(L_340), (uint8_t)((int32_t)((uint8_t)L_344)));
		int32_t L_345 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_345, (int32_t)1));
		goto IL_05c0;
	}

IL_04b3:
	{
		int32_t L_346 = V_3;
		if (!((int32_t)((int32_t)L_346&(int32_t)((int32_t)32))))
		{
			goto IL_0536;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_347 = ___z7;
		NullCheck(L_347);
		int32_t L_348 = L_347->get_AvailableBytesIn_2();
		int32_t L_349 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_348, (int32_t)L_349));
		int32_t L_350 = V_5;
		int32_t L_351 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_350>>(int32_t)3))) < ((int32_t)L_351)))
		{
			goto IL_04d1;
		}
	}
	{
		int32_t L_352 = V_12;
		G_B49_0 = L_352;
		goto IL_04d5;
	}

IL_04d1:
	{
		int32_t L_353 = V_5;
		G_B49_0 = ((int32_t)((int32_t)L_353>>(int32_t)3));
	}

IL_04d5:
	{
		V_12 = G_B49_0;
		int32_t L_354 = V_7;
		int32_t L_355 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_354, (int32_t)L_355));
		int32_t L_356 = V_6;
		int32_t L_357 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_356, (int32_t)L_357));
		int32_t L_358 = V_5;
		int32_t L_359 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_358, (int32_t)((int32_t)((int32_t)L_359<<(int32_t)3))));
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_360 = ___s6;
		int32_t L_361 = V_4;
		NullCheck(L_360);
		L_360->set_bitb_3(L_361);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_362 = ___s6;
		int32_t L_363 = V_5;
		NullCheck(L_362);
		L_362->set_bitk_4(L_363);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_364 = ___z7;
		int32_t L_365 = V_7;
		NullCheck(L_364);
		L_364->set_AvailableBytesIn_2(L_365);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_366 = ___z7;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_367 = L_366;
		NullCheck(L_367);
		int64_t L_368 = L_367->get_TotalBytesIn_3();
		int32_t L_369 = V_6;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_370 = ___z7;
		NullCheck(L_370);
		int32_t L_371 = L_370->get_NextIn_1();
		NullCheck(L_367);
		L_367->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_368, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_369, (int32_t)L_371)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_372 = ___z7;
		int32_t L_373 = V_6;
		NullCheck(L_372);
		L_372->set_NextIn_1(L_373);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_374 = ___s6;
		int32_t L_375 = V_8;
		NullCheck(L_374);
		L_374->set_writeAt_20(L_375);
		return 1;
	}

IL_0536:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_376 = ___z7;
		NullCheck(L_376);
		L_376->set_Message_8(_stringLiteral96025B6397AAC8D06A75085B92AD0F0146044D16);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_377 = ___z7;
		NullCheck(L_377);
		int32_t L_378 = L_377->get_AvailableBytesIn_2();
		int32_t L_379 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_378, (int32_t)L_379));
		int32_t L_380 = V_5;
		int32_t L_381 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_380>>(int32_t)3))) < ((int32_t)L_381)))
		{
			goto IL_055a;
		}
	}
	{
		int32_t L_382 = V_12;
		G_B53_0 = L_382;
		goto IL_055e;
	}

IL_055a:
	{
		int32_t L_383 = V_5;
		G_B53_0 = ((int32_t)((int32_t)L_383>>(int32_t)3));
	}

IL_055e:
	{
		V_12 = G_B53_0;
		int32_t L_384 = V_7;
		int32_t L_385 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_384, (int32_t)L_385));
		int32_t L_386 = V_6;
		int32_t L_387 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_386, (int32_t)L_387));
		int32_t L_388 = V_5;
		int32_t L_389 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_388, (int32_t)((int32_t)((int32_t)L_389<<(int32_t)3))));
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_390 = ___s6;
		int32_t L_391 = V_4;
		NullCheck(L_390);
		L_390->set_bitb_3(L_391);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_392 = ___s6;
		int32_t L_393 = V_5;
		NullCheck(L_392);
		L_392->set_bitk_4(L_393);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_394 = ___z7;
		int32_t L_395 = V_7;
		NullCheck(L_394);
		L_394->set_AvailableBytesIn_2(L_395);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_396 = ___z7;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_397 = L_396;
		NullCheck(L_397);
		int64_t L_398 = L_397->get_TotalBytesIn_3();
		int32_t L_399 = V_6;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_400 = ___z7;
		NullCheck(L_400);
		int32_t L_401 = L_400->get_NextIn_1();
		NullCheck(L_397);
		L_397->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_398, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_399, (int32_t)L_401)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_402 = ___z7;
		int32_t L_403 = V_6;
		NullCheck(L_402);
		L_402->set_NextIn_1(L_403);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_404 = ___s6;
		int32_t L_405 = V_8;
		NullCheck(L_404);
		L_404->set_writeAt_20(L_405);
		return ((int32_t)-3);
	}

IL_05c0:
	{
		int32_t L_406 = V_9;
		if ((((int32_t)L_406) < ((int32_t)((int32_t)258))))
		{
			goto IL_05d2;
		}
	}
	{
		int32_t L_407 = V_7;
		if ((((int32_t)L_407) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0092;
		}
	}

IL_05d2:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_408 = ___z7;
		NullCheck(L_408);
		int32_t L_409 = L_408->get_AvailableBytesIn_2();
		int32_t L_410 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_409, (int32_t)L_410));
		int32_t L_411 = V_5;
		int32_t L_412 = V_12;
		if ((((int32_t)((int32_t)((int32_t)L_411>>(int32_t)3))) < ((int32_t)L_412)))
		{
			goto IL_05ea;
		}
	}
	{
		int32_t L_413 = V_12;
		G_B59_0 = L_413;
		goto IL_05ee;
	}

IL_05ea:
	{
		int32_t L_414 = V_5;
		G_B59_0 = ((int32_t)((int32_t)L_414>>(int32_t)3));
	}

IL_05ee:
	{
		V_12 = G_B59_0;
		int32_t L_415 = V_7;
		int32_t L_416 = V_12;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_415, (int32_t)L_416));
		int32_t L_417 = V_6;
		int32_t L_418 = V_12;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_417, (int32_t)L_418));
		int32_t L_419 = V_5;
		int32_t L_420 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_419, (int32_t)((int32_t)((int32_t)L_420<<(int32_t)3))));
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_421 = ___s6;
		int32_t L_422 = V_4;
		NullCheck(L_421);
		L_421->set_bitb_3(L_422);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_423 = ___s6;
		int32_t L_424 = V_5;
		NullCheck(L_423);
		L_423->set_bitk_4(L_424);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_425 = ___z7;
		int32_t L_426 = V_7;
		NullCheck(L_425);
		L_425->set_AvailableBytesIn_2(L_426);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_427 = ___z7;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_428 = L_427;
		NullCheck(L_428);
		int64_t L_429 = L_428->get_TotalBytesIn_3();
		int32_t L_430 = V_6;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_431 = ___z7;
		NullCheck(L_431);
		int32_t L_432 = L_431->get_NextIn_1();
		NullCheck(L_428);
		L_428->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_429, (int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_430, (int32_t)L_432)))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_433 = ___z7;
		int32_t L_434 = V_6;
		NullCheck(L_433);
		L_433->set_NextIn_1(L_434);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_435 = ___s6;
		int32_t L_436 = V_8;
		NullCheck(L_435);
		L_435->set_writeAt_20(L_436);
		return 0;
	}
}
// System.Void SharpCompress.Compressors.Deflate.InflateCodes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateCodes__ctor_m2B38E7CDE678551CBAC32587F0F71E8F09D09C72 (InflateCodes_t8339BEB1200B677AAFFCD55A9D579F806EE5A0F1 * __this, const RuntimeMethod* method)
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
// System.Void SharpCompress.Compressors.Deflate.InflateManager::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateManager__ctor_m9F35E84AD6EEE2DE66DC4B3D467A3ADDF75F96DA (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, bool ___expectRfc1950HeaderBytes0, const RuntimeMethod* method)
{
	{
		__this->set_U3CHandleRfc1950HeaderBytesU3Ek__BackingField_9((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___expectRfc1950HeaderBytes0;
		InflateManager_set_HandleRfc1950HeaderBytes_m1433E981E63FBC780FDCB38941F163C9D8713A8E_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SharpCompress.Compressors.Deflate.InflateManager::get_HandleRfc1950HeaderBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InflateManager_get_HandleRfc1950HeaderBytes_m597E311EA470B8B491AC83A47F2E3FD672C4890D (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CHandleRfc1950HeaderBytesU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void SharpCompress.Compressors.Deflate.InflateManager::set_HandleRfc1950HeaderBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateManager_set_HandleRfc1950HeaderBytes_m1433E981E63FBC780FDCB38941F163C9D8713A8E (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHandleRfc1950HeaderBytesU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.InflateManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Reset_mE64E0D7CC3898CB87843C7159276622743614C3C (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * G_B2_0 = NULL;
	InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * G_B3_1 = NULL;
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_0 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_1 = __this->get__codec_1();
		int64_t L_2 = ((int64_t)((int64_t)0));
		V_0 = L_2;
		NullCheck(L_1);
		L_1->set_TotalBytesOut_7(L_2);
		int64_t L_3 = V_0;
		NullCheck(L_0);
		L_0->set_TotalBytesIn_3(L_3);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_4 = __this->get__codec_1();
		NullCheck(L_4);
		L_4->set_Message_8((String_t*)NULL);
		bool L_5;
		L_5 = InflateManager_get_HandleRfc1950HeaderBytes_m597E311EA470B8B491AC83A47F2E3FD672C4890D_inline(__this, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_5)
		{
			G_B2_0 = __this;
			goto IL_0033;
		}
	}
	{
		G_B3_0 = 7;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_mode_7(G_B3_0);
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_6 = __this->get_blocks_2();
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = InflateBlocks_Reset_m20A9C3E2617933A4CCFF4A8598A629B6E11E1C64(L_6, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.InflateManager::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_End_m3EA2A090979B5CD64B92454887C778F40D4012EE (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, const RuntimeMethod* method)
{
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_0 = __this->get_blocks_2();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_1 = __this->get_blocks_2();
		NullCheck(L_1);
		InflateBlocks_Free_mD2060C09AD45AC6935F2A9A9DD8BC43697843145(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		__this->set_blocks_2((InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 *)NULL);
		return 0;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.InflateManager::Initialize(SharpCompress.Compressors.Deflate.ZlibCodec,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Initialize_m200134FD3314E7A277A99C510F7206652B3C01C9 (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ___codec0, int32_t ___w1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * G_B5_0 = NULL;
	InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * G_B5_1 = NULL;
	ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * G_B4_0 = NULL;
	InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * G_B4_1 = NULL;
	InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * G_B6_0 = NULL;
	ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * G_B6_1 = NULL;
	InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * G_B6_2 = NULL;
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_0 = ___codec0;
		__this->set__codec_1(L_0);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_1 = __this->get__codec_1();
		NullCheck(L_1);
		L_1->set_Message_8((String_t*)NULL);
		__this->set_blocks_2((InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 *)NULL);
		int32_t L_2 = ___w1;
		if ((((int32_t)L_2) < ((int32_t)8)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___w1;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0035;
		}
	}

IL_0023:
	{
		int32_t L_4;
		L_4 = InflateManager_End_m3EA2A090979B5CD64B92454887C778F40D4012EE(__this, /*hidden argument*/NULL);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_5 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31F5FB1C38A44C5FB3A50E292D89F851681E4A86)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflateManager_Initialize_m200134FD3314E7A277A99C510F7206652B3C01C9_RuntimeMethod_var)));
	}

IL_0035:
	{
		int32_t L_6 = ___w1;
		__this->set_wbits_8(L_6);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_7 = ___codec0;
		bool L_8;
		L_8 = InflateManager_get_HandleRfc1950HeaderBytes_m597E311EA470B8B491AC83A47F2E3FD672C4890D_inline(__this, /*hidden argument*/NULL);
		G_B4_0 = L_7;
		G_B4_1 = __this;
		if (L_8)
		{
			G_B5_0 = L_7;
			G_B5_1 = __this;
			goto IL_0049;
		}
	}
	{
		G_B6_0 = ((InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 *)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_004a;
	}

IL_0049:
	{
		G_B6_0 = __this;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_004a:
	{
		int32_t L_9 = ___w1;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_10 = (InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 *)il2cpp_codegen_object_new(InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4_il2cpp_TypeInfo_var);
		InflateBlocks__ctor_m5F917E3C54C5588199A37B6F9FE9799E7C22E2B9(L_10, G_B6_1, G_B6_0, ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)31))))), /*hidden argument*/NULL);
		NullCheck(G_B6_2);
		G_B6_2->set_blocks_2(L_10);
		int32_t L_11;
		L_11 = InflateManager_Reset_mE64E0D7CC3898CB87843C7159276622743614C3C(__this, /*hidden argument*/NULL);
		return 0;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.InflateManager::Inflate(SharpCompress.Compressors.Deflate.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InflateManager_Inflate_m988DA4158DE766A4DAC550E8CA8585E1FB510186 (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0659AF070440111C5138C5C2CF237FE1D199797C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral988F3366E12D654A4876B3640459880EFD9315D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * G_B18_0 = NULL;
	InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * G_B19_1 = NULL;
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_0 = __this->get__codec_1();
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0->get_InputBuffer_0();
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_2 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7897EC9A2D8A7F35E69F42F0A932E1E9320CB2DA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflateManager_Inflate_m988DA4158DE766A4DAC550E8CA8585E1FB510186_RuntimeMethod_var)));
	}

IL_0018:
	{
		V_1 = 0;
		V_2 = ((int32_t)-5);
	}

IL_001d:
	{
		int32_t L_3 = __this->get_mode_7();
		V_3 = L_3;
		int32_t L_4 = V_3;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0067;
			}
			case 1:
			{
				goto IL_015f;
			}
			case 2:
			{
				goto IL_020b;
			}
			case 3:
			{
				goto IL_0286;
			}
			case 4:
			{
				goto IL_0305;
			}
			case 5:
			{
				goto IL_0383;
			}
			case 6:
			{
				goto IL_040d;
			}
			case 7:
			{
				goto IL_042f;
			}
			case 8:
			{
				goto IL_0491;
			}
			case 9:
			{
				goto IL_050d;
			}
			case 10:
			{
				goto IL_058d;
			}
			case 11:
			{
				goto IL_060c;
			}
			case 12:
			{
				goto IL_06b8;
			}
			case 13:
			{
				goto IL_06ba;
			}
		}
	}
	{
		goto IL_06d5;
	}

IL_0067:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_5 = __this->get__codec_1();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_AvailableBytesIn_2();
		if (L_6)
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_7 = V_2;
		return L_7;
	}

IL_0076:
	{
		int32_t L_8 = V_1;
		V_2 = L_8;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_9 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_AvailableBytesIn_2();
		NullCheck(L_10);
		L_10->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_12 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_13 = L_12;
		NullCheck(L_13);
		int64_t L_14 = L_13->get_TotalBytesIn_3();
		NullCheck(L_13);
		L_13->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_14, (int64_t)((int64_t)((int64_t)1)))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_15 = __this->get__codec_1();
		NullCheck(L_15);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = L_15->get_InputBuffer_0();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_17 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_NextIn_1();
		V_4 = L_19;
		int32_t L_20 = V_4;
		NullCheck(L_18);
		L_18->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		int32_t L_21 = V_4;
		NullCheck(L_16);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		uint8_t L_24 = L_23;
		V_4 = L_24;
		__this->set_method_6(L_24);
		int32_t L_25 = V_4;
		if ((((int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)15)))) == ((int32_t)8)))
		{
			goto IL_0109;
		}
	}
	{
		__this->set_mode_7(((int32_t)13));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_26 = __this->get__codec_1();
		int32_t L_27 = __this->get_method_6();
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral988F3366E12D654A4876B3640459880EFD9315D1, L_29, /*hidden argument*/NULL);
		NullCheck(L_26);
		L_26->set_Message_8(L_30);
		__this->set_marker_5(5);
		goto IL_001d;
	}

IL_0109:
	{
		int32_t L_31 = __this->get_method_6();
		int32_t L_32 = __this->get_wbits_8();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_31>>(int32_t)4)), (int32_t)8))) <= ((int32_t)L_32)))
		{
			goto IL_0153;
		}
	}
	{
		__this->set_mode_7(((int32_t)13));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_33 = __this->get__codec_1();
		int32_t L_34 = __this->get_method_6();
		int32_t L_35 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_34>>(int32_t)4)), (int32_t)8));
		RuntimeObject * L_36 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral0659AF070440111C5138C5C2CF237FE1D199797C, L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		L_33->set_Message_8(L_37);
		__this->set_marker_5(5);
		goto IL_001d;
	}

IL_0153:
	{
		__this->set_mode_7(1);
		goto IL_001d;
	}

IL_015f:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_38 = __this->get__codec_1();
		NullCheck(L_38);
		int32_t L_39 = L_38->get_AvailableBytesIn_2();
		if (L_39)
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_40 = V_2;
		return L_40;
	}

IL_016e:
	{
		int32_t L_41 = V_1;
		V_2 = L_41;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_42 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_43 = L_42;
		NullCheck(L_43);
		int32_t L_44 = L_43->get_AvailableBytesIn_2();
		NullCheck(L_43);
		L_43->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1)));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_45 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_46 = L_45;
		NullCheck(L_46);
		int64_t L_47 = L_46->get_TotalBytesIn_3();
		NullCheck(L_46);
		L_46->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_47, (int64_t)((int64_t)((int64_t)1)))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_48 = __this->get__codec_1();
		NullCheck(L_48);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = L_48->get_InputBuffer_0();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_50 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_51 = L_50;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_NextIn_1();
		V_4 = L_52;
		int32_t L_53 = V_4;
		NullCheck(L_51);
		L_51->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1)));
		int32_t L_54 = V_4;
		NullCheck(L_49);
		int32_t L_55 = L_54;
		uint8_t L_56 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int32_t)((int32_t)L_56&(int32_t)((int32_t)255)));
		int32_t L_57 = __this->get_method_6();
		int32_t L_58 = V_0;
		if (!((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_57<<(int32_t)8)), (int32_t)L_58))%(int32_t)((int32_t)31))))
		{
			goto IL_01f6;
		}
	}
	{
		__this->set_mode_7(((int32_t)13));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_59 = __this->get__codec_1();
		NullCheck(L_59);
		L_59->set_Message_8(_stringLiteral6304F4645B5484ACF5D9DF2D847AE616393DC417);
		__this->set_marker_5(5);
		goto IL_001d;
	}

IL_01f6:
	{
		int32_t L_60 = V_0;
		G_B17_0 = __this;
		if (!((int32_t)((int32_t)L_60&(int32_t)((int32_t)32))))
		{
			G_B18_0 = __this;
			goto IL_0200;
		}
	}
	{
		G_B19_0 = 2;
		G_B19_1 = G_B17_0;
		goto IL_0201;
	}

IL_0200:
	{
		G_B19_0 = 7;
		G_B19_1 = G_B18_0;
	}

IL_0201:
	{
		NullCheck(G_B19_1);
		G_B19_1->set_mode_7(G_B19_0);
		goto IL_001d;
	}

IL_020b:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_61 = __this->get__codec_1();
		NullCheck(L_61);
		int32_t L_62 = L_61->get_AvailableBytesIn_2();
		if (L_62)
		{
			goto IL_021a;
		}
	}
	{
		int32_t L_63 = V_2;
		return L_63;
	}

IL_021a:
	{
		int32_t L_64 = V_1;
		V_2 = L_64;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_65 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_66 = L_65;
		NullCheck(L_66);
		int32_t L_67 = L_66->get_AvailableBytesIn_2();
		NullCheck(L_66);
		L_66->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)1)));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_68 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_69 = L_68;
		NullCheck(L_69);
		int64_t L_70 = L_69->get_TotalBytesIn_3();
		NullCheck(L_69);
		L_69->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_70, (int64_t)((int64_t)((int64_t)1)))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_71 = __this->get__codec_1();
		NullCheck(L_71);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_72 = L_71->get_InputBuffer_0();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_73 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_74 = L_73;
		NullCheck(L_74);
		int32_t L_75 = L_74->get_NextIn_1();
		V_4 = L_75;
		int32_t L_76 = V_4;
		NullCheck(L_74);
		L_74->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1)));
		int32_t L_77 = V_4;
		NullCheck(L_72);
		int32_t L_78 = L_77;
		uint8_t L_79 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		__this->set_expectedCheck_4(((int32_t)((uint32_t)((int64_t)((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_79<<(int32_t)((int32_t)24)))))&(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)-16777216))))))))));
		__this->set_mode_7(3);
		goto IL_001d;
	}

IL_0286:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_80 = __this->get__codec_1();
		NullCheck(L_80);
		int32_t L_81 = L_80->get_AvailableBytesIn_2();
		if (L_81)
		{
			goto IL_0295;
		}
	}
	{
		int32_t L_82 = V_2;
		return L_82;
	}

IL_0295:
	{
		int32_t L_83 = V_1;
		V_2 = L_83;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_84 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_85 = L_84;
		NullCheck(L_85);
		int32_t L_86 = L_85->get_AvailableBytesIn_2();
		NullCheck(L_85);
		L_85->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_86, (int32_t)1)));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_87 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_88 = L_87;
		NullCheck(L_88);
		int64_t L_89 = L_88->get_TotalBytesIn_3();
		NullCheck(L_88);
		L_88->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_89, (int64_t)((int64_t)((int64_t)1)))));
		uint32_t L_90 = __this->get_expectedCheck_4();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_91 = __this->get__codec_1();
		NullCheck(L_91);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_92 = L_91->get_InputBuffer_0();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_93 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_94 = L_93;
		NullCheck(L_94);
		int32_t L_95 = L_94->get_NextIn_1();
		V_4 = L_95;
		int32_t L_96 = V_4;
		NullCheck(L_94);
		L_94->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1)));
		int32_t L_97 = V_4;
		NullCheck(L_92);
		int32_t L_98 = L_97;
		uint8_t L_99 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_99<<(int32_t)((int32_t)16)))&(int32_t)((int32_t)16711680))))));
		__this->set_mode_7(4);
		goto IL_001d;
	}

IL_0305:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_100 = __this->get__codec_1();
		NullCheck(L_100);
		int32_t L_101 = L_100->get_AvailableBytesIn_2();
		if (L_101)
		{
			goto IL_0314;
		}
	}
	{
		int32_t L_102 = V_2;
		return L_102;
	}

IL_0314:
	{
		int32_t L_103 = V_1;
		V_2 = L_103;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_104 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_105 = L_104;
		NullCheck(L_105);
		int32_t L_106 = L_105->get_AvailableBytesIn_2();
		NullCheck(L_105);
		L_105->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_106, (int32_t)1)));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_107 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_108 = L_107;
		NullCheck(L_108);
		int64_t L_109 = L_108->get_TotalBytesIn_3();
		NullCheck(L_108);
		L_108->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_109, (int64_t)((int64_t)((int64_t)1)))));
		uint32_t L_110 = __this->get_expectedCheck_4();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_111 = __this->get__codec_1();
		NullCheck(L_111);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_112 = L_111->get_InputBuffer_0();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_113 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_114 = L_113;
		NullCheck(L_114);
		int32_t L_115 = L_114->get_NextIn_1();
		V_4 = L_115;
		int32_t L_116 = V_4;
		NullCheck(L_114);
		L_114->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1)));
		int32_t L_117 = V_4;
		NullCheck(L_112);
		int32_t L_118 = L_117;
		uint8_t L_119 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_119<<(int32_t)8))&(int32_t)((int32_t)65280))))));
		__this->set_mode_7(5);
		goto IL_001d;
	}

IL_0383:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_120 = __this->get__codec_1();
		NullCheck(L_120);
		int32_t L_121 = L_120->get_AvailableBytesIn_2();
		if (L_121)
		{
			goto IL_0392;
		}
	}
	{
		int32_t L_122 = V_2;
		return L_122;
	}

IL_0392:
	{
		int32_t L_123 = V_1;
		V_2 = L_123;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_124 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_125 = L_124;
		NullCheck(L_125);
		int32_t L_126 = L_125->get_AvailableBytesIn_2();
		NullCheck(L_125);
		L_125->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_126, (int32_t)1)));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_127 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_128 = L_127;
		NullCheck(L_128);
		int64_t L_129 = L_128->get_TotalBytesIn_3();
		NullCheck(L_128);
		L_128->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_129, (int64_t)((int64_t)((int64_t)1)))));
		uint32_t L_130 = __this->get_expectedCheck_4();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_131 = __this->get__codec_1();
		NullCheck(L_131);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_132 = L_131->get_InputBuffer_0();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_133 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_134 = L_133;
		NullCheck(L_134);
		int32_t L_135 = L_134->get_NextIn_1();
		V_4 = L_135;
		int32_t L_136 = V_4;
		NullCheck(L_134);
		L_134->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1)));
		int32_t L_137 = V_4;
		NullCheck(L_132);
		int32_t L_138 = L_137;
		uint8_t L_139 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)((int32_t)((int32_t)L_139&(int32_t)((int32_t)255))))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_140 = __this->get__codec_1();
		uint32_t L_141 = __this->get_expectedCheck_4();
		NullCheck(L_140);
		L_140->set__Adler32_11(L_141);
		__this->set_mode_7(6);
		return 2;
	}

IL_040d:
	{
		__this->set_mode_7(((int32_t)13));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_142 = __this->get__codec_1();
		NullCheck(L_142);
		L_142->set_Message_8(_stringLiteralD3DEC6A6A3177F7D2965AAB68291E77977CF1E3E);
		__this->set_marker_5(0);
		return ((int32_t)-2);
	}

IL_042f:
	{
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_143 = __this->get_blocks_2();
		int32_t L_144 = V_2;
		NullCheck(L_143);
		int32_t L_145;
		L_145 = InflateBlocks_Process_mF0DEEFADE2587D1AD65BF9503E4AF29FD0027CA4(L_143, L_144, /*hidden argument*/NULL);
		V_2 = L_145;
		int32_t L_146 = V_2;
		if ((!(((uint32_t)L_146) == ((uint32_t)((int32_t)-3)))))
		{
			goto IL_0455;
		}
	}
	{
		__this->set_mode_7(((int32_t)13));
		__this->set_marker_5(0);
		goto IL_001d;
	}

IL_0455:
	{
		int32_t L_147 = V_2;
		if (L_147)
		{
			goto IL_045a;
		}
	}
	{
		int32_t L_148 = V_1;
		V_2 = L_148;
	}

IL_045a:
	{
		int32_t L_149 = V_2;
		if ((((int32_t)L_149) == ((int32_t)1)))
		{
			goto IL_0460;
		}
	}
	{
		int32_t L_150 = V_2;
		return L_150;
	}

IL_0460:
	{
		int32_t L_151 = V_1;
		V_2 = L_151;
		InflateBlocks_tD1ED7B660344C44BCCF4CC5D148A849AF87B07E4 * L_152 = __this->get_blocks_2();
		NullCheck(L_152);
		uint32_t L_153;
		L_153 = InflateBlocks_Reset_m20A9C3E2617933A4CCFF4A8598A629B6E11E1C64(L_152, /*hidden argument*/NULL);
		__this->set_computedCheck_3(L_153);
		bool L_154;
		L_154 = InflateManager_get_HandleRfc1950HeaderBytes_m597E311EA470B8B491AC83A47F2E3FD672C4890D_inline(__this, /*hidden argument*/NULL);
		if (L_154)
		{
			goto IL_0485;
		}
	}
	{
		__this->set_mode_7(((int32_t)12));
		return 1;
	}

IL_0485:
	{
		__this->set_mode_7(8);
		goto IL_001d;
	}

IL_0491:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_155 = __this->get__codec_1();
		NullCheck(L_155);
		int32_t L_156 = L_155->get_AvailableBytesIn_2();
		if (L_156)
		{
			goto IL_04a0;
		}
	}
	{
		int32_t L_157 = V_2;
		return L_157;
	}

IL_04a0:
	{
		int32_t L_158 = V_1;
		V_2 = L_158;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_159 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_160 = L_159;
		NullCheck(L_160);
		int32_t L_161 = L_160->get_AvailableBytesIn_2();
		NullCheck(L_160);
		L_160->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_161, (int32_t)1)));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_162 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_163 = L_162;
		NullCheck(L_163);
		int64_t L_164 = L_163->get_TotalBytesIn_3();
		NullCheck(L_163);
		L_163->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_164, (int64_t)((int64_t)((int64_t)1)))));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_165 = __this->get__codec_1();
		NullCheck(L_165);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_166 = L_165->get_InputBuffer_0();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_167 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_168 = L_167;
		NullCheck(L_168);
		int32_t L_169 = L_168->get_NextIn_1();
		V_4 = L_169;
		int32_t L_170 = V_4;
		NullCheck(L_168);
		L_168->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)1)));
		int32_t L_171 = V_4;
		NullCheck(L_166);
		int32_t L_172 = L_171;
		uint8_t L_173 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		__this->set_expectedCheck_4(((int32_t)((uint32_t)((int64_t)((int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_173<<(int32_t)((int32_t)24)))))&(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)-16777216))))))))));
		__this->set_mode_7(((int32_t)9));
		goto IL_001d;
	}

IL_050d:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_174 = __this->get__codec_1();
		NullCheck(L_174);
		int32_t L_175 = L_174->get_AvailableBytesIn_2();
		if (L_175)
		{
			goto IL_051c;
		}
	}
	{
		int32_t L_176 = V_2;
		return L_176;
	}

IL_051c:
	{
		int32_t L_177 = V_1;
		V_2 = L_177;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_178 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_179 = L_178;
		NullCheck(L_179);
		int32_t L_180 = L_179->get_AvailableBytesIn_2();
		NullCheck(L_179);
		L_179->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_180, (int32_t)1)));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_181 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_182 = L_181;
		NullCheck(L_182);
		int64_t L_183 = L_182->get_TotalBytesIn_3();
		NullCheck(L_182);
		L_182->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_183, (int64_t)((int64_t)((int64_t)1)))));
		uint32_t L_184 = __this->get_expectedCheck_4();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_185 = __this->get__codec_1();
		NullCheck(L_185);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_186 = L_185->get_InputBuffer_0();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_187 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_188 = L_187;
		NullCheck(L_188);
		int32_t L_189 = L_188->get_NextIn_1();
		V_4 = L_189;
		int32_t L_190 = V_4;
		NullCheck(L_188);
		L_188->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_190, (int32_t)1)));
		int32_t L_191 = V_4;
		NullCheck(L_186);
		int32_t L_192 = L_191;
		uint8_t L_193 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_184, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_193<<(int32_t)((int32_t)16)))&(int32_t)((int32_t)16711680))))));
		__this->set_mode_7(((int32_t)10));
		goto IL_001d;
	}

IL_058d:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_194 = __this->get__codec_1();
		NullCheck(L_194);
		int32_t L_195 = L_194->get_AvailableBytesIn_2();
		if (L_195)
		{
			goto IL_059c;
		}
	}
	{
		int32_t L_196 = V_2;
		return L_196;
	}

IL_059c:
	{
		int32_t L_197 = V_1;
		V_2 = L_197;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_198 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_199 = L_198;
		NullCheck(L_199);
		int32_t L_200 = L_199->get_AvailableBytesIn_2();
		NullCheck(L_199);
		L_199->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_200, (int32_t)1)));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_201 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_202 = L_201;
		NullCheck(L_202);
		int64_t L_203 = L_202->get_TotalBytesIn_3();
		NullCheck(L_202);
		L_202->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_203, (int64_t)((int64_t)((int64_t)1)))));
		uint32_t L_204 = __this->get_expectedCheck_4();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_205 = __this->get__codec_1();
		NullCheck(L_205);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_206 = L_205->get_InputBuffer_0();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_207 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_208 = L_207;
		NullCheck(L_208);
		int32_t L_209 = L_208->get_NextIn_1();
		V_4 = L_209;
		int32_t L_210 = V_4;
		NullCheck(L_208);
		L_208->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_210, (int32_t)1)));
		int32_t L_211 = V_4;
		NullCheck(L_206);
		int32_t L_212 = L_211;
		uint8_t L_213 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_204, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_213<<(int32_t)8))&(int32_t)((int32_t)65280))))));
		__this->set_mode_7(((int32_t)11));
		goto IL_001d;
	}

IL_060c:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_214 = __this->get__codec_1();
		NullCheck(L_214);
		int32_t L_215 = L_214->get_AvailableBytesIn_2();
		if (L_215)
		{
			goto IL_061b;
		}
	}
	{
		int32_t L_216 = V_2;
		return L_216;
	}

IL_061b:
	{
		int32_t L_217 = V_1;
		V_2 = L_217;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_218 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_219 = L_218;
		NullCheck(L_219);
		int32_t L_220 = L_219->get_AvailableBytesIn_2();
		NullCheck(L_219);
		L_219->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_220, (int32_t)1)));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_221 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_222 = L_221;
		NullCheck(L_222);
		int64_t L_223 = L_222->get_TotalBytesIn_3();
		NullCheck(L_222);
		L_222->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_223, (int64_t)((int64_t)((int64_t)1)))));
		uint32_t L_224 = __this->get_expectedCheck_4();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_225 = __this->get__codec_1();
		NullCheck(L_225);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_226 = L_225->get_InputBuffer_0();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_227 = __this->get__codec_1();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_228 = L_227;
		NullCheck(L_228);
		int32_t L_229 = L_228->get_NextIn_1();
		V_4 = L_229;
		int32_t L_230 = V_4;
		NullCheck(L_228);
		L_228->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_230, (int32_t)1)));
		int32_t L_231 = V_4;
		NullCheck(L_226);
		int32_t L_232 = L_231;
		uint8_t L_233 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		__this->set_expectedCheck_4(((int32_t)il2cpp_codegen_add((int32_t)L_224, (int32_t)((int32_t)((int32_t)L_233&(int32_t)((int32_t)255))))));
		uint32_t L_234 = __this->get_computedCheck_3();
		uint32_t L_235 = __this->get_expectedCheck_4();
		if ((((int32_t)L_234) == ((int32_t)L_235)))
		{
			goto IL_06ae;
		}
	}
	{
		__this->set_mode_7(((int32_t)13));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_236 = __this->get__codec_1();
		NullCheck(L_236);
		L_236->set_Message_8(_stringLiteral06F3358B23D666113A1020E1C9CFEBE16373BE40);
		__this->set_marker_5(5);
		goto IL_001d;
	}

IL_06ae:
	{
		__this->set_mode_7(((int32_t)12));
		return 1;
	}

IL_06b8:
	{
		return 1;
	}

IL_06ba:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_237 = __this->get__codec_1();
		NullCheck(L_237);
		String_t* L_238 = L_237->get_Message_8();
		String_t* L_239;
		L_239 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31FF32DD49EB95324AC3BBB26903BDBBB3D9DE53)), L_238, /*hidden argument*/NULL);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_240 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_240, L_239, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_240, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflateManager_Inflate_m988DA4158DE766A4DAC550E8CA8585E1FB510186_RuntimeMethod_var)));
	}

IL_06d5:
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_241 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_241, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD94DFA59855436FE4E964729609DFFE5BDFF64A0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_241, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InflateManager_Inflate_m988DA4158DE766A4DAC550E8CA8585E1FB510186_RuntimeMethod_var)));
	}
}
// System.Void SharpCompress.Compressors.Deflate.InflateManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflateManager__cctor_mB2F54105B9AA4A0C52DC96ADBAC43DCBD271D0EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)255));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)255));
		((InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9_StaticFields*)il2cpp_codegen_static_fields_for(InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9_il2cpp_TypeInfo_var))->set_mark_0(L_2);
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
// System.Void SharpCompress.Compressors.Deflate.InternalConstants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalConstants__cctor_mD15302F26B29A45092DA27AA59765464C3A49A8E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->set_MAX_BITS_0(((int32_t)15));
		((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->set_BL_CODES_1(((int32_t)19));
		((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->set_D_CODES_2(((int32_t)30));
		((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->set_LITERALS_3(((int32_t)256));
		((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->set_LENGTH_CODES_4(((int32_t)29));
		int32_t L_0 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_LITERALS_3();
		int32_t L_1 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_LENGTH_CODES_4();
		((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->set_L_CODES_5(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)), (int32_t)L_1)));
		((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->set_MAX_BL_BITS_6(7);
		((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->set_REP_3_6_7(((int32_t)16));
		((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->set_REPZ_3_10_8(((int32_t)17));
		((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->set_REPZ_11_138_9(((int32_t)18));
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
// System.Void SharpCompress.Compressors.Deflate.InternalInflateConstants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalInflateConstants__cctor_mEA36C7437B00E24B313FD3060E44332A726C6FEB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____F584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_16_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)17));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____F584B6C7CCA3CD4ECC3B9B1E20D2F2EFB73DBBDF_16_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_StaticFields*)il2cpp_codegen_static_fields_for(InternalInflateConstants_t8B996955B88A75634B10DE16A6E2B7E6ABD3DCD0_il2cpp_TypeInfo_var))->set_InflateMask_0(L_1);
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
// System.Void SharpCompress.IO.NonDisposingStream::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDisposingStream__ctor_m2334EE7FC74ED15522EA0650DDFB3E0180F577C6 (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, bool ___throwOnDispose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4(__this, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		__this->set_U3CStreamU3Ek__BackingField_6(L_0);
		bool L_1 = ___throwOnDispose1;
		NonDisposingStream_set_ThrowOnDispose_mD2526D3BBD9D31D1D96C6D7081809D06631E53C6_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SharpCompress.IO.NonDisposingStream::get_ThrowOnDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonDisposingStream_get_ThrowOnDispose_m49DA920DCF6CEC4C607D725CA2B4BE640280F420 (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CThrowOnDisposeU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void SharpCompress.IO.NonDisposingStream::set_ThrowOnDispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDisposingStream_set_ThrowOnDispose_mD2526D3BBD9D31D1D96C6D7081809D06631E53C6 (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CThrowOnDisposeU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void SharpCompress.IO.NonDisposingStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDisposingStream_Dispose_m62E278A7B084F107B7675D4E0062B7C043A65D40 (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = NonDisposingStream_get_ThrowOnDispose_m49DA920DCF6CEC4C607D725CA2B4BE640280F420_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		bool L_1;
		L_1 = NonDisposingStream_get_ThrowOnDispose_m49DA920DCF6CEC4C607D725CA2B4BE640280F420_inline(__this, /*hidden argument*/NULL);
		bool L_2 = L_1;
		RuntimeObject * L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD86ABA5185A5933191E8016A9D3ED21FA733955)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral688CD11358D23DA4D6EBCBC3C3C0BF14F0836432)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE71CA932A8446C0BB531B29F318B54FD59C7E1AB)), L_3, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_5 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NonDisposingStream_Dispose_m62E278A7B084F107B7675D4E0062B7C043A65D40_RuntimeMethod_var)));
	}

IL_002d:
	{
		return;
	}
}
// System.IO.Stream SharpCompress.IO.NonDisposingStream::get_Stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * NonDisposingStream_get_Stream_m2AEA34940605DD4BC49E8545F01509A7D5B2A5F1 (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_U3CStreamU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Boolean SharpCompress.IO.NonDisposingStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonDisposingStream_get_CanRead_m1ADBFB78A8B2D9639ECEF4F18B55263D01570C4B (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NonDisposingStream_get_Stream_m2AEA34940605DD4BC49E8545F01509A7D5B2A5F1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean SharpCompress.IO.NonDisposingStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonDisposingStream_get_CanSeek_mFE322F6E8A742490452BDBFB1A16B3AE4A41AFF3 (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NonDisposingStream_get_Stream_m2AEA34940605DD4BC49E8545F01509A7D5B2A5F1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		return L_1;
	}
}
// System.Boolean SharpCompress.IO.NonDisposingStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NonDisposingStream_get_CanWrite_mDE557DEE178EEB5A28CC5C659FD98D3D3B348805 (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NonDisposingStream_get_Stream_m2AEA34940605DD4BC49E8545F01509A7D5B2A5F1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Void SharpCompress.IO.NonDisposingStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDisposingStream_Flush_m147E9F3EA21C81C3F79CA85D91E9525EF5A5E7E5 (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NonDisposingStream_get_Stream_m2AEA34940605DD4BC49E8545F01509A7D5B2A5F1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(21 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 SharpCompress.IO.NonDisposingStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NonDisposingStream_get_Length_m2D6B3E193AB8D43D135EDA45425811DB5D4B387A (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NonDisposingStream_get_Stream_m2AEA34940605DD4BC49E8545F01509A7D5B2A5F1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Int64 SharpCompress.IO.NonDisposingStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NonDisposingStream_get_Position_m11EF5F9E4860FD9E966E518F52A50F65414D035E (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NonDisposingStream_get_Stream_m2AEA34940605DD4BC49E8545F01509A7D5B2A5F1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void SharpCompress.IO.NonDisposingStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDisposingStream_set_Position_m2EE8E2605AAD5C92EF552D707F1824E59FDD5BB6 (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NonDisposingStream_get_Stream_m2AEA34940605DD4BC49E8545F01509A7D5B2A5F1_inline(__this, /*hidden argument*/NULL);
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Int32 SharpCompress.IO.NonDisposingStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NonDisposingStream_Read_mA4197A35BA661B294D135DD07B93434655F28277 (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NonDisposingStream_get_Stream_m2AEA34940605DD4BC49E8545F01509A7D5B2A5F1_inline(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int64 SharpCompress.IO.NonDisposingStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NonDisposingStream_Seek_m160EDD651AC7FACD59EF9028001AF071B373C632 (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NonDisposingStream_get_Stream_m2AEA34940605DD4BC49E8545F01509A7D5B2A5F1_inline(__this, /*hidden argument*/NULL);
		int64_t L_1 = ___offset0;
		int32_t L_2 = ___origin1;
		NullCheck(L_0);
		int64_t L_3;
		L_3 = VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(29 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void SharpCompress.IO.NonDisposingStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDisposingStream_SetLength_mFF9EE9F1955F0A6EF6CF108A23269E006179F17A (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NonDisposingStream_get_Stream_m2AEA34940605DD4BC49E8545F01509A7D5B2A5F1_inline(__this, /*hidden argument*/NULL);
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(30 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Void SharpCompress.IO.NonDisposingStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonDisposingStream_Write_mB17229B5ABA56725D9CECE0BFFDE795AFF5A12FC (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NonDisposingStream_get_Stream_m2AEA34940605DD4BC49E8545F01509A7D5B2A5F1_inline(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___buffer0;
		int32_t L_2 = ___offset1;
		int32_t L_3 = ___count2;
		NullCheck(L_0);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
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
// System.Int32 SharpCompress.Compressors.Deflate.SharedUtils::URShift(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SharedUtils_URShift_m7BB716EA3AB480F0A85A8BE031249FC373B4C3BB (int32_t ___number0, int32_t ___bits1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___number0;
		int32_t L_1 = ___bits1;
		return ((int32_t)((uint32_t)L_0>>((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))));
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
// System.Void SharpCompress.Compressors.Deflate.StaticTree::.ctor(System.Int16[],System.Int32[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTree__ctor_mFF870C238CB7D73758703558BB0715BEB3E0CE0A (StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * __this, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* ___treeCodes0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___extraBits1, int32_t ___extraBase2, int32_t ___elems3, int32_t ___maxLength4, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = ___treeCodes0;
		__this->set_treeCodes_6(L_0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___extraBits1;
		__this->set_extraBits_7(L_1);
		int32_t L_2 = ___extraBase2;
		__this->set_extraBase_8(L_2);
		int32_t L_3 = ___elems3;
		__this->set_elems_9(L_3);
		int32_t L_4 = ___maxLength4;
		__this->set_maxLength_10(L_4);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.StaticTree::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTree__cctor_m1305CE3D7522AB76EBB54454CA578CA05C632F93 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_8_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____850D4DC092689E1F0D8A70B6281848B27DEC0014_9_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____EB6F545AEF284339D25594F900E7A395212460EB_15_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_0 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)576));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____EB6F545AEF284339D25594F900E7A395212460EB_15_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->set_lengthAndLiteralsTreeCodes_0(L_1);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_3 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)60));
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____850D4DC092689E1F0D8A70B6281848B27DEC0014_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->set_distTreeCodes_1(L_4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3A48B5F7FC88BF4E019798366F6B83281CF6456C____8457F44B035C9073EE2D1F132D0A8AF5631DCDC8_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->set_extra_blbits_2(L_7);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_9 = ((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->get_lengthAndLiteralsTreeCodes_0();
		IL2CPP_RUNTIME_CLASS_INIT(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = ((DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var))->get_ExtraLengthBits_0();
		IL2CPP_RUNTIME_CLASS_INIT(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var);
		int32_t L_11 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_LITERALS_3();
		int32_t L_12 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_L_CODES_5();
		int32_t L_13 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_MAX_BITS_0();
		StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * L_14 = (StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 *)il2cpp_codegen_object_new(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var);
		StaticTree__ctor_mFF870C238CB7D73758703558BB0715BEB3E0CE0A(L_14, L_9, L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), L_12, L_13, /*hidden argument*/NULL);
		((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->set_Literals_3(L_14);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_15 = ((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->get_distTreeCodes_1();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = ((DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_StaticFields*)il2cpp_codegen_static_fields_for(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var))->get_ExtraDistanceBits_1();
		int32_t L_17 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_D_CODES_2();
		int32_t L_18 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_MAX_BITS_0();
		StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * L_19 = (StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 *)il2cpp_codegen_object_new(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var);
		StaticTree__ctor_mFF870C238CB7D73758703558BB0715BEB3E0CE0A(L_19, L_15, L_16, 0, L_17, L_18, /*hidden argument*/NULL);
		((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->set_Distances_4(L_19);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = ((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->get_extra_blbits_2();
		int32_t L_21 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_BL_CODES_1();
		int32_t L_22 = ((InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_StaticFields*)il2cpp_codegen_static_fields_for(InternalConstants_tEB6456B14900DDFE353A8BB94EBC6A8784A7411E_il2cpp_TypeInfo_var))->get_MAX_BL_BITS_6();
		StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 * L_23 = (StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620 *)il2cpp_codegen_object_new(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var);
		StaticTree__ctor_mFF870C238CB7D73758703558BB0715BEB3E0CE0A(L_23, (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)NULL, L_20, 0, L_21, L_22, /*hidden argument*/NULL);
		((StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_StaticFields*)il2cpp_codegen_static_fields_for(StaticTree_tF3D8BD6096F5D50325A397C26D7576D5818FD620_il2cpp_TypeInfo_var))->set_BitLengths_5(L_23);
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
// System.Void SharpCompress.Common.Tar.Headers.TarHeader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TarHeader__cctor_mB7666C3746BC28D7A0072A4039C9D5623FE411D5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TarHeader_tC48B196EB765EEC1B717FB4CCE1B278C3AFC9BD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		((TarHeader_tC48B196EB765EEC1B717FB4CCE1B278C3AFC9BD0_StaticFields*)il2cpp_codegen_static_fields_for(TarHeader_tC48B196EB765EEC1B717FB4CCE1B278C3AFC9BD0_il2cpp_TypeInfo_var))->set_EPOCH_0(L_0);
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
// System.Void SharpCompress.Compressors.Deflate.ZlibBaseStream::.ctor(System.IO.Stream,SharpCompress.Compressors.CompressionMode,SharpCompress.Compressors.Deflate.CompressionLevel,SharpCompress.Compressors.Deflate.ZlibStreamFlavor,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream__ctor_m2BC19E7942713EC395F38F59D6A5A913A2B59DA6 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___compressionMode1, int32_t ___level2, int32_t ___flavor3, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRC32_tBB356C0837066B0839B03775D7B40F613498E290_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__streamMode_6(2);
		__this->set__bufferSize_12(((int32_t)16384));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set__buf1_13(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4(__this, /*hidden argument*/NULL);
		__this->set__flushMode_7(0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___stream0;
		__this->set__stream_14(L_1);
		int32_t L_2 = ___compressionMode1;
		__this->set__compressionMode_9(L_2);
		int32_t L_3 = ___flavor3;
		__this->set__flavor_8(L_3);
		int32_t L_4 = ___level2;
		__this->set__level_10(L_4);
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_5 = ___encoding4;
		__this->set__encoding_21(L_5);
		int32_t L_6 = ___flavor3;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)1952)))))
		{
			goto IL_0064;
		}
	}
	{
		CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * L_7 = (CRC32_tBB356C0837066B0839B03775D7B40F613498E290 *)il2cpp_codegen_object_new(CRC32_tBB356C0837066B0839B03775D7B40F613498E290_il2cpp_TypeInfo_var);
		CRC32__ctor_m138BB7B74EE9393DDA7774CA3449F03AD8BB0B4C(L_7, /*hidden argument*/NULL);
		__this->set_crc_16(L_7);
	}

IL_0064:
	{
		return;
	}
}
// System.Boolean SharpCompress.Compressors.Deflate.ZlibBaseStream::get__wantCompress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__compressionMode_9();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// SharpCompress.Compressors.Deflate.ZlibCodec SharpCompress.Compressors.Deflate.ZlibBaseStream::get_z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * ZlibBaseStream_get_z_m9B6C7619DFF16C2D8FFBDE2671BE04DBA69A2C22 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_0 = __this->get__z_5();
		if (L_0)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_1 = __this->get__flavor_8();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)1950)))? 1 : 0);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_2 = (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE *)il2cpp_codegen_object_new(ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE_il2cpp_TypeInfo_var);
		ZlibCodec__ctor_m9737041F37CDC490A82DB4CFB5FE038C7B22EBCB(L_2, /*hidden argument*/NULL);
		__this->set__z_5(L_2);
		int32_t L_3 = __this->get__compressionMode_9();
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_4 = __this->get__z_5();
		bool L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = ZlibCodec_InitializeInflate_m9E09F2B5E3424762CE9E16B278421EAA05C485F3(L_4, L_5, /*hidden argument*/NULL);
		goto IL_005d;
	}

IL_0039:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_7 = __this->get__z_5();
		int32_t L_8 = __this->get_Strategy_15();
		NullCheck(L_7);
		L_7->set_Strategy_14(L_8);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_9 = __this->get__z_5();
		int32_t L_10 = __this->get__level_10();
		bool L_11 = V_0;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = ZlibCodec_InitializeDeflate_m9F5C03C9F01C16E0021D6F836BB888C229760D58(L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_005d:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_13 = __this->get__z_5();
		return L_13;
	}
}
// System.Byte[] SharpCompress.Compressors.Deflate.ZlibBaseStream::get_workingBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ZlibBaseStream_get_workingBuffer_m31B85AA363694D870CACD4DBFE04BF494A77B29C (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__workingBuffer_11();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->get__bufferSize_12();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set__workingBuffer_11(L_2);
	}

IL_0019:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get__workingBuffer_11();
		return L_3;
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibBaseStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_Write_m19271FEE58E1BCBBB237CDE9773821FF2E97622C (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t G_B12_0 = 0;
	String_t* G_B17_0 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B26_0 = 0;
	{
		CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * L_0 = __this->get_crc_16();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * L_1 = __this->get_crc_16();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___buffer0;
		int32_t L_3 = ___offset1;
		int32_t L_4 = ___count2;
		NullCheck(L_1);
		CRC32_SlurpBlock_mC20742277BBA9CAD29C907550CA4BD3A8369F26A(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_5 = __this->get__streamMode_6();
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0028;
		}
	}
	{
		__this->set__streamMode_6(0);
		goto IL_003b;
	}

IL_0028:
	{
		int32_t L_6 = __this->get__streamMode_6();
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_7 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24B5EB22D8E2EC2684FA8E9A50101FC76FC80368)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_Write_m19271FEE58E1BCBBB237CDE9773821FF2E97622C_RuntimeMethod_var)));
	}

IL_003b:
	{
		int32_t L_8 = ___count2;
		if (L_8)
		{
			goto IL_003f;
		}
	}
	{
		return;
	}

IL_003f:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_9;
		L_9 = ZlibBaseStream_get_z_m9B6C7619DFF16C2D8FFBDE2671BE04DBA69A2C22(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = ___buffer0;
		NullCheck(L_9);
		L_9->set_InputBuffer_0(L_10);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_11 = __this->get__z_5();
		int32_t L_12 = ___offset1;
		NullCheck(L_11);
		L_11->set_NextIn_1(L_12);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_13 = __this->get__z_5();
		int32_t L_14 = ___count2;
		NullCheck(L_13);
		L_13->set_AvailableBytesIn_2(L_14);
		V_0 = (bool)0;
	}

IL_0065:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_15 = __this->get__z_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = ZlibBaseStream_get_workingBuffer_m31B85AA363694D870CACD4DBFE04BF494A77B29C(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_OutputBuffer_4(L_16);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_17 = __this->get__z_5();
		NullCheck(L_17);
		L_17->set_NextOut_5(0);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_18 = __this->get__z_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = __this->get__workingBuffer_11();
		NullCheck(L_19);
		NullCheck(L_18);
		L_18->set_AvailableBytesOut_6(((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))));
		bool L_20;
		L_20 = ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07(__this, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00b0;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_21 = __this->get__z_5();
		int32_t L_22 = __this->get__flushMode_7();
		NullCheck(L_21);
		int32_t L_23;
		L_23 = ZlibCodec_Inflate_mFB3BCD376B03D35495C073F526F88DF90810ECE8(L_21, L_22, /*hidden argument*/NULL);
		G_B12_0 = L_23;
		goto IL_00c1;
	}

IL_00b0:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_24 = __this->get__z_5();
		int32_t L_25 = __this->get__flushMode_7();
		NullCheck(L_24);
		int32_t L_26;
		L_26 = ZlibCodec_Deflate_m40D189358D3052C7844300DC7936C5686BC94345(L_24, L_25, /*hidden argument*/NULL);
		G_B12_0 = L_26;
	}

IL_00c1:
	{
		V_1 = G_B12_0;
		int32_t L_27 = V_1;
		if (!L_27)
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_28 = V_1;
		if ((((int32_t)L_28) == ((int32_t)1)))
		{
			goto IL_00f8;
		}
	}
	{
		bool L_29;
		L_29 = ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07(__this, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00d8;
		}
	}
	{
		G_B17_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110));
		goto IL_00dd;
	}

IL_00d8:
	{
		G_B17_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F));
	}

IL_00dd:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_30 = __this->get__z_5();
		NullCheck(L_30);
		String_t* L_31 = L_30->get_Message_8();
		String_t* L_32;
		L_32 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B17_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81B54C81CE5770A2FB716FE3138FA18CE998793D)), L_31, /*hidden argument*/NULL);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_33 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_33, L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_Write_m19271FEE58E1BCBBB237CDE9773821FF2E97622C_RuntimeMethod_var)));
	}

IL_00f8:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_34 = __this->get__stream_14();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_35 = __this->get__workingBuffer_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36 = __this->get__workingBuffer_11();
		NullCheck(L_36);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_37 = __this->get__z_5();
		NullCheck(L_37);
		int32_t L_38 = L_37->get_AvailableBytesOut_6();
		NullCheck(L_34);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_35, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))), (int32_t)L_38)));
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_39 = __this->get__z_5();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_AvailableBytesIn_2();
		if (L_40)
		{
			goto IL_013b;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_41 = __this->get__z_5();
		NullCheck(L_41);
		int32_t L_42 = L_41->get_AvailableBytesOut_6();
		G_B21_0 = ((!(((uint32_t)L_42) <= ((uint32_t)0)))? 1 : 0);
		goto IL_013c;
	}

IL_013b:
	{
		G_B21_0 = 0;
	}

IL_013c:
	{
		V_0 = (bool)G_B21_0;
		int32_t L_43 = __this->get__flavor_8();
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)1952)))))
		{
			goto IL_0172;
		}
	}
	{
		bool L_44;
		L_44 = ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07(__this, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0172;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_45 = __this->get__z_5();
		NullCheck(L_45);
		int32_t L_46 = L_45->get_AvailableBytesIn_2();
		if ((!(((uint32_t)L_46) == ((uint32_t)8))))
		{
			goto IL_0170;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_47 = __this->get__z_5();
		NullCheck(L_47);
		int32_t L_48 = L_47->get_AvailableBytesOut_6();
		G_B26_0 = ((!(((uint32_t)L_48) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0171;
	}

IL_0170:
	{
		G_B26_0 = 0;
	}

IL_0171:
	{
		V_0 = (bool)G_B26_0;
	}

IL_0172:
	{
		bool L_49 = V_0;
		if (!L_49)
		{
			goto IL_0065;
		}
	}
	{
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibBaseStream::finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_finish_mF10E648654D2F058518FE90198A342DEC7F3A052 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t G_B7_0 = 0;
	String_t* G_B12_0 = NULL;
	int32_t G_B20_0 = 0;
	int32_t G_B25_0 = 0;
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_0 = __this->get__z_5();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = __this->get__streamMode_6();
		if (L_1)
		{
			goto IL_01de;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_0016:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_2 = __this->get__z_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = ZlibBaseStream_get_workingBuffer_m31B85AA363694D870CACD4DBFE04BF494A77B29C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_OutputBuffer_4(L_3);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_4 = __this->get__z_5();
		NullCheck(L_4);
		L_4->set_NextOut_5(0);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_5 = __this->get__z_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get__workingBuffer_11();
		NullCheck(L_6);
		NullCheck(L_5);
		L_5->set_AvailableBytesOut_6(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		bool L_7;
		L_7 = ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07(__this, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005c;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_8 = __this->get__z_5();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = ZlibCodec_Inflate_mFB3BCD376B03D35495C073F526F88DF90810ECE8(L_8, 4, /*hidden argument*/NULL);
		G_B7_0 = L_9;
		goto IL_0068;
	}

IL_005c:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_10 = __this->get__z_5();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ZlibCodec_Deflate_m40D189358D3052C7844300DC7936C5686BC94345(L_10, 4, /*hidden argument*/NULL);
		G_B7_0 = L_11;
	}

IL_0068:
	{
		V_1 = G_B7_0;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_13 = V_1;
		if (!L_13)
		{
			goto IL_00cf;
		}
	}
	{
		bool L_14;
		L_14 = ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07(__this, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_007f;
		}
	}
	{
		G_B12_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110));
		goto IL_0084;
	}

IL_007f:
	{
		G_B12_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F));
	}

IL_0084:
	{
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B12_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC21230A40726F1E28FBA587F89E72C85A590CD77)), /*hidden argument*/NULL);
		V_2 = L_15;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_16 = __this->get__z_5();
		NullCheck(L_16);
		String_t* L_17 = L_16->get_Message_8();
		if (L_17)
		{
			goto IL_00b3;
		}
	}
	{
		String_t* L_18 = V_2;
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_20);
		String_t* L_22;
		L_22 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F0911FCBD89FC88F6637AE593EB9E5E3442A4F0)), L_18, L_21, /*hidden argument*/NULL);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_23 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_23, L_22, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_finish_mF10E648654D2F058518FE90198A342DEC7F3A052_RuntimeMethod_var)));
	}

IL_00b3:
	{
		String_t* L_24 = V_2;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_25 = __this->get__z_5();
		NullCheck(L_25);
		String_t* L_26 = L_25->get_Message_8();
		String_t* L_27;
		L_27 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155)), L_26, /*hidden argument*/NULL);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_28 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_28, L_27, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_finish_mF10E648654D2F058518FE90198A342DEC7F3A052_RuntimeMethod_var)));
	}

IL_00cf:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = __this->get__workingBuffer_11();
		NullCheck(L_29);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_30 = __this->get__z_5();
		NullCheck(L_30);
		int32_t L_31 = L_30->get_AvailableBytesOut_6();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))), (int32_t)L_31))) <= ((int32_t)0)))
		{
			goto IL_010c;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_32 = __this->get__stream_14();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33 = __this->get__workingBuffer_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = __this->get__workingBuffer_11();
		NullCheck(L_34);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_35 = __this->get__z_5();
		NullCheck(L_35);
		int32_t L_36 = L_35->get_AvailableBytesOut_6();
		NullCheck(L_32);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_32, L_33, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))), (int32_t)L_36)));
	}

IL_010c:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_37 = __this->get__z_5();
		NullCheck(L_37);
		int32_t L_38 = L_37->get_AvailableBytesIn_2();
		if (L_38)
		{
			goto IL_0129;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_39 = __this->get__z_5();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_AvailableBytesOut_6();
		G_B20_0 = ((!(((uint32_t)L_40) <= ((uint32_t)0)))? 1 : 0);
		goto IL_012a;
	}

IL_0129:
	{
		G_B20_0 = 0;
	}

IL_012a:
	{
		V_0 = (bool)G_B20_0;
		int32_t L_41 = __this->get__flavor_8();
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)1952)))))
		{
			goto IL_0160;
		}
	}
	{
		bool L_42;
		L_42 = ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07(__this, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0160;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_43 = __this->get__z_5();
		NullCheck(L_43);
		int32_t L_44 = L_43->get_AvailableBytesIn_2();
		if ((!(((uint32_t)L_44) == ((uint32_t)8))))
		{
			goto IL_015e;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_45 = __this->get__z_5();
		NullCheck(L_45);
		int32_t L_46 = L_45->get_AvailableBytesOut_6();
		G_B25_0 = ((!(((uint32_t)L_46) <= ((uint32_t)0)))? 1 : 0);
		goto IL_015f;
	}

IL_015e:
	{
		G_B25_0 = 0;
	}

IL_015f:
	{
		V_0 = (bool)G_B25_0;
	}

IL_0160:
	{
		bool L_47 = V_0;
		if (!L_47)
		{
			goto IL_0016;
		}
	}
	{
		VirtActionInvoker0::Invoke(21 /* System.Void System.IO.Stream::Flush() */, __this);
		int32_t L_48 = __this->get__flavor_8();
		if ((!(((uint32_t)L_48) == ((uint32_t)((int32_t)1952)))))
		{
			goto IL_0357;
		}
	}
	{
		bool L_49;
		L_49 = ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07(__this, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_01d3;
		}
	}
	{
		CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * L_50 = __this->get_crc_16();
		NullCheck(L_50);
		int32_t L_51;
		L_51 = CRC32_get_Crc32Result_m262513941A406031F4BEA995317CB1A375803DF0(L_50, /*hidden argument*/NULL);
		V_3 = L_51;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_52 = __this->get__stream_14();
		IL2CPP_RUNTIME_CLASS_INIT(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * L_53;
		L_53 = DataConverter_get_LittleEndian_mC7822C7BD3EAD97E9F5EF035FA36D5380DEB5F48(/*hidden argument*/NULL);
		int32_t L_54 = V_3;
		NullCheck(L_53);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_55;
		L_55 = DataConverter_GetBytes_m872C3D684F41B2AAEA26350EC9F57C1184220B18(L_53, L_54, /*hidden argument*/NULL);
		NullCheck(L_52);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_52, L_55, 0, 4);
		CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * L_56 = __this->get_crc_16();
		NullCheck(L_56);
		int64_t L_57;
		L_57 = CRC32_get_TotalBytesRead_mB5D5A4EA79AAA47C21D46066AAB0DFD2886A1367_inline(L_56, /*hidden argument*/NULL);
		V_4 = ((int32_t)((int32_t)((int64_t)((int64_t)L_57&(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)(-1)))))))));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_58 = __this->get__stream_14();
		DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * L_59;
		L_59 = DataConverter_get_LittleEndian_mC7822C7BD3EAD97E9F5EF035FA36D5380DEB5F48(/*hidden argument*/NULL);
		int32_t L_60 = V_4;
		NullCheck(L_59);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_61;
		L_61 = DataConverter_GetBytes_m872C3D684F41B2AAEA26350EC9F57C1184220B18(L_59, L_60, /*hidden argument*/NULL);
		NullCheck(L_58);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_58, L_61, 0, 4);
		return;
	}

IL_01d3:
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_62 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D4D82166AFA3DFA90B42F9624DAC59E5DE0E310)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_finish_mF10E648654D2F058518FE90198A342DEC7F3A052_RuntimeMethod_var)));
	}

IL_01de:
	{
		int32_t L_63 = __this->get__streamMode_6();
		if ((!(((uint32_t)L_63) == ((uint32_t)1))))
		{
			goto IL_0357;
		}
	}
	{
		int32_t L_64 = __this->get__flavor_8();
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)1952)))))
		{
			goto IL_0357;
		}
	}
	{
		bool L_65;
		L_65 = ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07(__this, /*hidden argument*/NULL);
		if (L_65)
		{
			goto IL_034c;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_66 = __this->get__z_5();
		NullCheck(L_66);
		int64_t L_67 = L_66->get_TotalBytesOut_7();
		if (L_67)
		{
			goto IL_0213;
		}
	}
	{
		return;
	}

IL_0213:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_68 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)8);
		V_5 = L_68;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_69 = __this->get__z_5();
		NullCheck(L_69);
		int32_t L_70 = L_69->get_AvailableBytesIn_2();
		if ((((int32_t)L_70) == ((int32_t)8)))
		{
			goto IL_02a6;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_71 = __this->get__z_5();
		NullCheck(L_71);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_72 = L_71->get_InputBuffer_0();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_73 = __this->get__z_5();
		NullCheck(L_73);
		int32_t L_74 = L_73->get_NextIn_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_75 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_76 = __this->get__z_5();
		NullCheck(L_76);
		int32_t L_77 = L_76->get_AvailableBytesIn_2();
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_72, L_74, (RuntimeArray *)(RuntimeArray *)L_75, 0, L_77, /*hidden argument*/NULL);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_78 = __this->get__z_5();
		NullCheck(L_78);
		int32_t L_79 = L_78->get_AvailableBytesIn_2();
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)8, (int32_t)L_79));
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_80 = __this->get__stream_14();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_81 = V_5;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_82 = __this->get__z_5();
		NullCheck(L_82);
		int32_t L_83 = L_82->get_AvailableBytesIn_2();
		int32_t L_84 = V_10;
		NullCheck(L_80);
		int32_t L_85;
		L_85 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_80, L_81, L_83, L_84);
		V_11 = L_85;
		int32_t L_86 = V_10;
		int32_t L_87 = V_11;
		if ((((int32_t)L_86) == ((int32_t)L_87)))
		{
			goto IL_02c8;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_88 = __this->get__z_5();
		NullCheck(L_88);
		int32_t L_89 = L_88->get_AvailableBytesIn_2();
		int32_t L_90 = V_11;
		int32_t L_91 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)L_90));
		RuntimeObject * L_92 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_91);
		String_t* L_93;
		L_93 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B1E3A9AE7E04127D129AAC63B18BB45C6467DB9)), L_92, /*hidden argument*/NULL);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_94 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_94, L_93, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_finish_mF10E648654D2F058518FE90198A342DEC7F3A052_RuntimeMethod_var)));
	}

IL_02a6:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_95 = __this->get__z_5();
		NullCheck(L_95);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_96 = L_95->get_InputBuffer_0();
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_97 = __this->get__z_5();
		NullCheck(L_97);
		int32_t L_98 = L_97->get_NextIn_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_99 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_100 = V_5;
		NullCheck(L_100);
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_96, L_98, (RuntimeArray *)(RuntimeArray *)L_99, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_100)->max_length))), /*hidden argument*/NULL);
	}

IL_02c8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * L_101;
		L_101 = DataConverter_get_LittleEndian_mC7822C7BD3EAD97E9F5EF035FA36D5380DEB5F48(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_102 = V_5;
		NullCheck(L_101);
		int32_t L_103;
		L_103 = VirtFuncInvoker2< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(4 /* System.Int32 SharpCompress.Converters.DataConverter::GetInt32(System.Byte[],System.Int32) */, L_101, L_102, 0);
		V_6 = L_103;
		CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * L_104 = __this->get_crc_16();
		NullCheck(L_104);
		int32_t L_105;
		L_105 = CRC32_get_Crc32Result_m262513941A406031F4BEA995317CB1A375803DF0(L_104, /*hidden argument*/NULL);
		V_7 = L_105;
		DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * L_106;
		L_106 = DataConverter_get_LittleEndian_mC7822C7BD3EAD97E9F5EF035FA36D5380DEB5F48(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_107 = V_5;
		NullCheck(L_106);
		int32_t L_108;
		L_108 = VirtFuncInvoker2< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(4 /* System.Int32 SharpCompress.Converters.DataConverter::GetInt32(System.Byte[],System.Int32) */, L_106, L_107, 4);
		V_8 = L_108;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_109 = __this->get__z_5();
		NullCheck(L_109);
		int64_t L_110 = L_109->get_TotalBytesOut_7();
		V_9 = ((int32_t)((int32_t)((int64_t)((int64_t)L_110&(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)(-1)))))))));
		int32_t L_111 = V_7;
		int32_t L_112 = V_6;
		if ((((int32_t)L_111) == ((int32_t)L_112)))
		{
			goto IL_0328;
		}
	}
	{
		int32_t L_113 = V_7;
		int32_t L_114 = L_113;
		RuntimeObject * L_115 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_114);
		int32_t L_116 = V_6;
		int32_t L_117 = L_116;
		RuntimeObject * L_118 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_117);
		String_t* L_119;
		L_119 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E343721F0E25487FE2756047043B53F090F4259)), L_115, L_118, /*hidden argument*/NULL);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_120 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_120, L_119, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_120, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_finish_mF10E648654D2F058518FE90198A342DEC7F3A052_RuntimeMethod_var)));
	}

IL_0328:
	{
		int32_t L_121 = V_9;
		int32_t L_122 = V_8;
		if ((((int32_t)L_121) == ((int32_t)L_122)))
		{
			goto IL_0357;
		}
	}
	{
		int32_t L_123 = V_9;
		int32_t L_124 = L_123;
		RuntimeObject * L_125 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_124);
		int32_t L_126 = V_8;
		int32_t L_127 = L_126;
		RuntimeObject * L_128 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_127);
		String_t* L_129;
		L_129 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB274B371D443401B2ED8CB4D62663E14A8DAFE8C)), L_125, L_128, /*hidden argument*/NULL);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_130 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_130, L_129, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_130, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_finish_mF10E648654D2F058518FE90198A342DEC7F3A052_RuntimeMethod_var)));
	}

IL_034c:
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_131 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_131, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10D38DC34936AF6C5FB05636D856173414F0E6F5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_131, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_finish_mF10E648654D2F058518FE90198A342DEC7F3A052_RuntimeMethod_var)));
	}

IL_0357:
	{
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibBaseStream::end()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_end_m65747FF0CC18B1EAC97637661672CD38742472ED (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method)
{
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_0;
		L_0 = ZlibBaseStream_get_z_m9B6C7619DFF16C2D8FFBDE2671BE04DBA69A2C22(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1;
		L_1 = ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_2 = __this->get__z_5();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ZlibCodec_EndDeflate_m9818A1239F94F09CB3D6E15F87E39714ED34DE5E(L_2, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001f:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_4 = __this->get__z_5();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ZlibCodec_EndInflate_mB50FF344614ED7D50858A3B50B9903F6F9E8821B(L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		__this->set__z_5((ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE *)NULL);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibBaseStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_Dispose_mE8E458147DC22B4DAAED1FA0D4C377CC245F06F2 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B9_0 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B8_0 = NULL;
	{
		bool L_0 = __this->get_isDisposed_23();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->set_isDisposed_23((bool)1);
		bool L_1 = ___disposing0;
		Stream_Dispose_mDC5C7A9933446223A84ED106AE3E949E644FB0BE(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = ___disposing0;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = __this->get__stream_14();
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		return;
	}

IL_0023:
	{
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		ZlibBaseStream_finish_mF10E648654D2F058518FE90198A342DEC7F3A052(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x4B, FINALLY_002c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		{
			ZlibBaseStream_end_m65747FF0CC18B1EAC97637661672CD38742472ED(__this, /*hidden argument*/NULL);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = __this->get__stream_14();
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5 = L_4;
			G_B8_0 = L_5;
			if (L_5)
			{
				G_B9_0 = L_5;
				goto IL_003e;
			}
		}

IL_003b:
		{
			goto IL_0043;
		}

IL_003e:
		{
			NullCheck(G_B9_0);
			Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(G_B9_0, /*hidden argument*/NULL);
		}

IL_0043:
		{
			__this->set__stream_14((Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL);
			IL2CPP_END_FINALLY(44)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
	}

IL_004b:
	{
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibBaseStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_Flush_mFECB528AE91654E3F7C7DE9A174F97DC035BE1BC (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__stream_14();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(21 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 SharpCompress.Compressors.Deflate.ZlibBaseStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZlibBaseStream_Seek_m0474181B1F14DB5A5BD3A48738BC99A7DE4ABA54 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_Seek_m0474181B1F14DB5A5BD3A48738BC99A7DE4ABA54_RuntimeMethod_var)));
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibBaseStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_SetLength_m1401888C2E711B1555215BAFC08894222FC74DBB (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__stream_14();
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(30 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.String SharpCompress.Compressors.Deflate.ZlibBaseStream::ReadZeroTerminatedString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ZlibBaseStream_ReadZeroTerminatedString_m1C257B5E918E0304E55231BAAE737F1F62156E1F (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	{
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)il2cpp_codegen_object_new(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
		List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778(L_0, /*hidden argument*/List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = __this->get__stream_14();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get__buf1_13();
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, 1);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_4 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3233DCBABA7FC4545C644475BBE0516447D29DBD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_ReadZeroTerminatedString_m1C257B5E918E0304E55231BAAE737F1F62156E1F_RuntimeMethod_var)));
	}

IL_0029:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = __this->get__buf1_13();
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint8_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if (L_7)
		{
			goto IL_0037;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0045;
	}

IL_0037:
	{
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_8 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = __this->get__buf1_13();
		NullCheck(L_9);
		int32_t L_10 = 0;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED(L_8, L_11, /*hidden argument*/List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var);
	}

IL_0045:
	{
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0008;
		}
	}
	{
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E(L_13, /*hidden argument*/List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var);
		V_2 = L_14;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_15 = __this->get__encoding_21();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_2;
		NullCheck(L_17);
		NullCheck(L_15);
		String_t* L_18;
		L_18 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(44 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_15, L_16, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))));
		return L_18;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.ZlibBaseStream::_ReadAndValidateGzipHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibBaseStream__ReadAndValidateGzipHeader_mB5ADCE23F9E1A6A52751B305116B88E8292D7921 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TarHeader_tC48B196EB765EEC1B717FB4CCE1B278C3AFC9BD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int16_t V_5 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_6 = NULL;
	{
		V_0 = 0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		V_1 = L_0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = __this->get__stream_14();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_1;
		NullCheck(L_3);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))));
		V_2 = L_4;
		int32_t L_5 = V_2;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return 0;
	}

IL_0020:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)10))))
		{
			goto IL_0030;
		}
	}
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_7 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14D85C5F7C475603476AF01830C5A5FDF517ACB9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream__ReadAndValidateGzipHeader_mB5ADCE23F9E1A6A52751B305116B88E8292D7921_RuntimeMethod_var)));
	}

IL_0030:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = 0;
		uint8_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)31)))))
		{
			goto IL_0047;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)139)))))
		{
			goto IL_0047;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = 2;
		uint8_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((((int32_t)L_16) == ((int32_t)8)))
		{
			goto IL_0052;
		}
	}

IL_0047:
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_17 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2B8359BD91EB1DF5DC1B2DE300F3D1DC2B414E8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream__ReadAndValidateGzipHeader_mB5ADCE23F9E1A6A52751B305116B88E8292D7921_RuntimeMethod_var)));
	}

IL_0052:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * L_18;
		L_18 = DataConverter_get_LittleEndian_mC7822C7BD3EAD97E9F5EF035FA36D5380DEB5F48(/*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20;
		L_20 = VirtFuncInvoker2< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t >::Invoke(4 /* System.Int32 SharpCompress.Converters.DataConverter::GetInt32(System.Byte[],System.Int32) */, L_18, L_19, 4);
		V_3 = L_20;
		IL2CPP_RUNTIME_CLASS_INIT(TarHeader_tC48B196EB765EEC1B717FB4CCE1B278C3AFC9BD0_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_21 = ((TarHeader_tC48B196EB765EEC1B717FB4CCE1B278C3AFC9BD0_StaticFields*)il2cpp_codegen_static_fields_for(TarHeader_tC48B196EB765EEC1B717FB4CCE1B278C3AFC9BD0_il2cpp_TypeInfo_var))->get_EPOCH_0();
		V_4 = L_21;
		int32_t L_22 = V_3;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_23;
		L_23 = DateTime_AddSeconds_mCA0940A7E7C3ED40A86532349B7D4CB3A0F0DEAF((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_4), ((double)((double)L_22)), /*hidden argument*/NULL);
		__this->set__GzipMtime_19(L_23);
		int32_t L_24 = V_0;
		int32_t L_25 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = 3;
		uint8_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((!(((uint32_t)((int32_t)((int32_t)L_28&(int32_t)4))) == ((uint32_t)4))))
		{
			goto IL_00d4;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_29 = __this->get__stream_14();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31;
		L_31 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_29, L_30, 0, 2);
		V_2 = L_31;
		int32_t L_32 = V_0;
		int32_t L_33 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = 0;
		uint8_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = V_1;
		NullCheck(L_37);
		int32_t L_38 = 1;
		uint8_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_5 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_39, (int32_t)((int32_t)256)))))));
		int16_t L_40 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_40);
		V_6 = L_41;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_42 = __this->get__stream_14();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_43 = V_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_44 = V_6;
		NullCheck(L_44);
		NullCheck(L_42);
		int32_t L_45;
		L_45 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_42, L_43, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length))));
		V_2 = L_45;
		int32_t L_46 = V_2;
		int16_t L_47 = V_5;
		if ((((int32_t)L_46) == ((int32_t)L_47)))
		{
			goto IL_00d0;
		}
	}
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_48 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_48, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3D7AFE151D76C21DBC230D2F7D219FAB99ADCF3A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream__ReadAndValidateGzipHeader_mB5ADCE23F9E1A6A52751B305116B88E8292D7921_RuntimeMethod_var)));
	}

IL_00d0:
	{
		int32_t L_49 = V_0;
		int32_t L_50 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50));
	}

IL_00d4:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_51 = V_1;
		NullCheck(L_51);
		int32_t L_52 = 3;
		uint8_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((!(((uint32_t)((int32_t)((int32_t)L_53&(int32_t)8))) == ((uint32_t)8))))
		{
			goto IL_00e8;
		}
	}
	{
		String_t* L_54;
		L_54 = ZlibBaseStream_ReadZeroTerminatedString_m1C257B5E918E0304E55231BAAE737F1F62156E1F(__this, /*hidden argument*/NULL);
		__this->set__GzipFileName_17(L_54);
	}

IL_00e8:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_55 = V_1;
		NullCheck(L_55);
		int32_t L_56 = 3;
		uint8_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if ((!(((uint32_t)((int32_t)((int32_t)L_57&(int32_t)((int32_t)16)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_00fe;
		}
	}
	{
		String_t* L_58;
		L_58 = ZlibBaseStream_ReadZeroTerminatedString_m1C257B5E918E0304E55231BAAE737F1F62156E1F(__this, /*hidden argument*/NULL);
		__this->set__GzipComment_18(L_58);
	}

IL_00fe:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_59 = V_1;
		NullCheck(L_59);
		int32_t L_60 = 3;
		uint8_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		if ((!(((uint32_t)((int32_t)((int32_t)L_61&(int32_t)2))) == ((uint32_t)2))))
		{
			goto IL_0115;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_62 = __this->get__buf1_13();
		int32_t L_63;
		L_63 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_62, 0, 1);
	}

IL_0115:
	{
		int32_t L_64 = V_0;
		return L_64;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.ZlibBaseStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibBaseStream_Read_mDBBE1E376A38BC3514B2393E9BA86C2CE80C8D35 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B29_0 = 0;
	String_t* G_B36_0 = NULL;
	String_t* G_B35_0 = NULL;
	String_t* G_B37_0 = NULL;
	String_t* G_B37_1 = NULL;
	{
		int32_t L_0 = __this->get__streamMode_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0057;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = __this->get__stream_14();
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_1);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_3 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC62B0C3C63415051741BF2BBE989F54545097E70)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_Read_mDBBE1E376A38BC3514B2393E9BA86C2CE80C8D35_RuntimeMethod_var)));
	}

IL_0021:
	{
		__this->set__streamMode_6(1);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_4;
		L_4 = ZlibBaseStream_get_z_m9B6C7619DFF16C2D8FFBDE2671BE04DBA69A2C22(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_AvailableBytesIn_2(0);
		int32_t L_5 = __this->get__flavor_8();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)1952)))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_6;
		L_6 = ZlibBaseStream__ReadAndValidateGzipHeader_mB5ADCE23F9E1A6A52751B305116B88E8292D7921(__this, /*hidden argument*/NULL);
		__this->set__gzipHeaderByteCount_20(L_6);
		int32_t L_7 = __this->get__gzipHeaderByteCount_20();
		if (L_7)
		{
			goto IL_0057;
		}
	}
	{
		return 0;
	}

IL_0057:
	{
		int32_t L_8 = __this->get__streamMode_6();
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_006b;
		}
	}
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_9 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7908ABB3E478F6388EB5FB76212E4B3E81900AD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_Read_mDBBE1E376A38BC3514B2393E9BA86C2CE80C8D35_RuntimeMethod_var)));
	}

IL_006b:
	{
		int32_t L_10 = ___count2;
		if (L_10)
		{
			goto IL_0070;
		}
	}
	{
		return 0;
	}

IL_0070:
	{
		bool L_11 = __this->get_nomoreinput_22();
		if (!L_11)
		{
			goto IL_0082;
		}
	}
	{
		bool L_12;
		L_12 = ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0082;
		}
	}
	{
		return 0;
	}

IL_0082:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ___buffer0;
		if (L_13)
		{
			goto IL_0090;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_14 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_Read_mDBBE1E376A38BC3514B2393E9BA86C2CE80C8D35_RuntimeMethod_var)));
	}

IL_0090:
	{
		int32_t L_15 = ___count2;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_009f;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_16 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_Read_mDBBE1E376A38BC3514B2393E9BA86C2CE80C8D35_RuntimeMethod_var)));
	}

IL_009f:
	{
		int32_t L_17 = ___offset1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = ___buffer0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_18);
		int32_t L_19;
		L_19 = Array_GetLowerBound_m6198001EA09E7523356C18FD6E3315E1B3A5C773((RuntimeArray *)(RuntimeArray *)L_18, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_17) >= ((int32_t)L_19)))
		{
			goto IL_00b4;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_20 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_Read_mDBBE1E376A38BC3514B2393E9BA86C2CE80C8D35_RuntimeMethod_var)));
	}

IL_00b4:
	{
		int32_t L_21 = ___offset1;
		int32_t L_22 = ___count2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = ___buffer0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_23);
		int32_t L_24;
		L_24 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_23, 0, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22))) <= ((int32_t)L_24)))
		{
			goto IL_00cb;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_25 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_Read_mDBBE1E376A38BC3514B2393E9BA86C2CE80C8D35_RuntimeMethod_var)));
	}

IL_00cb:
	{
		V_0 = 0;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_26 = __this->get__z_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = ___buffer0;
		NullCheck(L_26);
		L_26->set_OutputBuffer_4(L_27);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_28 = __this->get__z_5();
		int32_t L_29 = ___offset1;
		NullCheck(L_28);
		L_28->set_NextOut_5(L_29);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_30 = __this->get__z_5();
		int32_t L_31 = ___count2;
		NullCheck(L_30);
		L_30->set_AvailableBytesOut_6(L_31);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_32 = __this->get__z_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_33;
		L_33 = ZlibBaseStream_get_workingBuffer_m31B85AA363694D870CACD4DBFE04BF494A77B29C(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		L_32->set_InputBuffer_0(L_33);
	}

IL_0102:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_34 = __this->get__z_5();
		NullCheck(L_34);
		int32_t L_35 = L_34->get_AvailableBytesIn_2();
		if (L_35)
		{
			goto IL_015c;
		}
	}
	{
		bool L_36 = __this->get_nomoreinput_22();
		if (L_36)
		{
			goto IL_015c;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_37 = __this->get__z_5();
		NullCheck(L_37);
		L_37->set_NextIn_1(0);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_38 = __this->get__z_5();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_39 = __this->get__stream_14();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40 = __this->get__workingBuffer_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41 = __this->get__workingBuffer_11();
		NullCheck(L_41);
		NullCheck(L_39);
		int32_t L_42;
		L_42 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_39, L_40, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))));
		NullCheck(L_38);
		L_38->set_AvailableBytesIn_2(L_42);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_43 = __this->get__z_5();
		NullCheck(L_43);
		int32_t L_44 = L_43->get_AvailableBytesIn_2();
		if (L_44)
		{
			goto IL_015c;
		}
	}
	{
		__this->set_nomoreinput_22((bool)1);
	}

IL_015c:
	{
		bool L_45;
		L_45 = ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07(__this, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0177;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_46 = __this->get__z_5();
		int32_t L_47 = __this->get__flushMode_7();
		NullCheck(L_46);
		int32_t L_48;
		L_48 = ZlibCodec_Inflate_mFB3BCD376B03D35495C073F526F88DF90810ECE8(L_46, L_47, /*hidden argument*/NULL);
		G_B29_0 = L_48;
		goto IL_0188;
	}

IL_0177:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_49 = __this->get__z_5();
		int32_t L_50 = __this->get__flushMode_7();
		NullCheck(L_49);
		int32_t L_51;
		L_51 = ZlibCodec_Deflate_m40D189358D3052C7844300DC7936C5686BC94345(L_49, L_50, /*hidden argument*/NULL);
		G_B29_0 = L_51;
	}

IL_0188:
	{
		V_0 = G_B29_0;
		bool L_52 = __this->get_nomoreinput_22();
		if (!L_52)
		{
			goto IL_0198;
		}
	}
	{
		int32_t L_53 = V_0;
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)-5)))))
		{
			goto IL_0198;
		}
	}
	{
		return 0;
	}

IL_0198:
	{
		int32_t L_54 = V_0;
		if (!L_54)
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_55 = V_0;
		if ((((int32_t)L_55) == ((int32_t)1)))
		{
			goto IL_01d4;
		}
	}
	{
		bool L_56;
		L_56 = ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07(__this, /*hidden argument*/NULL);
		G_B35_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD82DD7A67123B96565FAC38717BA5FA359AB739E));
		if (L_56)
		{
			G_B36_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD82DD7A67123B96565FAC38717BA5FA359AB739E));
			goto IL_01b3;
		}
	}
	{
		G_B37_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1E0482ABDB4530F47C01C2A81FB06ED6E98A110));
		G_B37_1 = G_B35_0;
		goto IL_01b8;
	}

IL_01b3:
	{
		G_B37_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC4A06A0DE599F745DBDD44A6FDE6212859D3A5F));
		G_B37_1 = G_B36_0;
	}

IL_01b8:
	{
		int32_t L_57 = V_0;
		int32_t L_58 = L_57;
		RuntimeObject * L_59 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_58);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_60 = __this->get__z_5();
		NullCheck(L_60);
		String_t* L_61 = L_60->get_Message_8();
		String_t* L_62;
		L_62 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(G_B37_1, G_B37_0, L_59, L_61, /*hidden argument*/NULL);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_63 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_63, L_62, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_Read_mDBBE1E376A38BC3514B2393E9BA86C2CE80C8D35_RuntimeMethod_var)));
	}

IL_01d4:
	{
		bool L_64 = __this->get_nomoreinput_22();
		if (L_64)
		{
			goto IL_01e0;
		}
	}
	{
		int32_t L_65 = V_0;
		if ((!(((uint32_t)L_65) == ((uint32_t)1))))
		{
			goto IL_01ee;
		}
	}

IL_01e0:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_66 = __this->get__z_5();
		NullCheck(L_66);
		int32_t L_67 = L_66->get_AvailableBytesOut_6();
		int32_t L_68 = ___count2;
		if ((((int32_t)L_67) == ((int32_t)L_68)))
		{
			goto IL_020a;
		}
	}

IL_01ee:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_69 = __this->get__z_5();
		NullCheck(L_69);
		int32_t L_70 = L_69->get_AvailableBytesOut_6();
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_020a;
		}
	}
	{
		bool L_71 = __this->get_nomoreinput_22();
		if (L_71)
		{
			goto IL_020a;
		}
	}
	{
		int32_t L_72 = V_0;
		if (!L_72)
		{
			goto IL_0102;
		}
	}

IL_020a:
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_73 = __this->get__z_5();
		NullCheck(L_73);
		int32_t L_74 = L_73->get_AvailableBytesOut_6();
		if ((((int32_t)L_74) <= ((int32_t)0)))
		{
			goto IL_026c;
		}
	}
	{
		int32_t L_75 = V_0;
		if (L_75)
		{
			goto IL_0227;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_76 = __this->get__z_5();
		NullCheck(L_76);
		int32_t L_77 = L_76->get_AvailableBytesIn_2();
	}

IL_0227:
	{
		bool L_78 = __this->get_nomoreinput_22();
		if (!L_78)
		{
			goto IL_026c;
		}
	}
	{
		bool L_79;
		L_79 = ZlibBaseStream_get__wantCompress_m8C5D52EE3C31B71013B5EF6C2DC23B74A1164C07(__this, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_026c;
		}
	}
	{
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_80 = __this->get__z_5();
		NullCheck(L_80);
		int32_t L_81;
		L_81 = ZlibCodec_Deflate_m40D189358D3052C7844300DC7936C5686BC94345(L_80, 4, /*hidden argument*/NULL);
		V_0 = L_81;
		int32_t L_82 = V_0;
		if (!L_82)
		{
			goto IL_026c;
		}
	}
	{
		int32_t L_83 = V_0;
		if ((((int32_t)L_83) == ((int32_t)1)))
		{
			goto IL_026c;
		}
	}
	{
		int32_t L_84 = V_0;
		int32_t L_85 = L_84;
		RuntimeObject * L_86 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_85);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_87 = __this->get__z_5();
		NullCheck(L_87);
		String_t* L_88 = L_87->get_Message_8();
		String_t* L_89;
		L_89 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC362660DF8B25C6834DE818F1371D30BE73D4BAF)), L_86, L_88, /*hidden argument*/NULL);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_90 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_90, L_89, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_90, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_Read_mDBBE1E376A38BC3514B2393E9BA86C2CE80C8D35_RuntimeMethod_var)));
	}

IL_026c:
	{
		int32_t L_91 = ___count2;
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_92 = __this->get__z_5();
		NullCheck(L_92);
		int32_t L_93 = L_92->get_AvailableBytesOut_6();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)L_93));
		CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * L_94 = __this->get_crc_16();
		if (!L_94)
		{
			goto IL_0290;
		}
	}
	{
		CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * L_95 = __this->get_crc_16();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_96 = ___buffer0;
		int32_t L_97 = ___offset1;
		int32_t L_98 = V_0;
		NullCheck(L_95);
		CRC32_SlurpBlock_mC20742277BBA9CAD29C907550CA4BD3A8369F26A(L_95, L_96, L_97, L_98, /*hidden argument*/NULL);
	}

IL_0290:
	{
		int32_t L_99 = V_0;
		return L_99;
	}
}
// System.Boolean SharpCompress.Compressors.Deflate.ZlibBaseStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibBaseStream_get_CanRead_mFED42C3E412B900380395B8990570AB3089BCF78 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__stream_14();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean SharpCompress.Compressors.Deflate.ZlibBaseStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibBaseStream_get_CanSeek_m97562F6158C6EB13E248C0B2493C1EA36DE7A994 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__stream_14();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		return L_1;
	}
}
// System.Boolean SharpCompress.Compressors.Deflate.ZlibBaseStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibBaseStream_get_CanWrite_m7571D4C8B2A513569548A3E6CB7B5F7574FD2988 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__stream_14();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Int64 SharpCompress.Compressors.Deflate.ZlibBaseStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZlibBaseStream_get_Length_mB873F13F54DCAA72CA507E035D59A8E5583B7572 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__stream_14();
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Int64 SharpCompress.Compressors.Deflate.ZlibBaseStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZlibBaseStream_get_Position_m0682A0FE75551512C46F1F6738FC7996A246A4D9 (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_get_Position_m0682A0FE75551512C46F1F6738FC7996A246A4D9_RuntimeMethod_var)));
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibBaseStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibBaseStream_set_Position_m1FA0E61706850830E8A6774C1EBFB522E7E45BCB (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibBaseStream_set_Position_m1FA0E61706850830E8A6774C1EBFB522E7E45BCB_RuntimeMethod_var)));
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
// System.Void SharpCompress.Compressors.Deflate.ZlibCodec::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec__ctor_m9737041F37CDC490A82DB4CFB5FE038C7B22EBCB (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, const RuntimeMethod* method)
{
	{
		__this->set_CompressLevel_12(6);
		__this->set_WindowBits_13(((int32_t)15));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::InitializeInflate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_m9E09F2B5E3424762CE9E16B278421EAA05C485F3 (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, bool ___expectRfc1950Header0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_WindowBits_13();
		bool L_1 = ___expectRfc1950Header0;
		int32_t L_2;
		L_2 = ZlibCodec_InitializeInflate_mAD21BB13A008C5E3AD87A63183208F242950E0A1(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::InitializeInflate(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeInflate_mAD21BB13A008C5E3AD87A63183208F242950E0A1 (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, int32_t ___windowBits0, bool ___expectRfc1950Header1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___windowBits0;
		__this->set_WindowBits_13(L_0);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_1 = __this->get_dstate_9();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_2 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FE5434C6E938CF30A74BC53A565C36727AA6E9E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibCodec_InitializeInflate_mAD21BB13A008C5E3AD87A63183208F242950E0A1_RuntimeMethod_var)));
	}

IL_001a:
	{
		bool L_3 = ___expectRfc1950Header1;
		InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * L_4 = (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 *)il2cpp_codegen_object_new(InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9_il2cpp_TypeInfo_var);
		InflateManager__ctor_m9F35E84AD6EEE2DE66DC4B3D467A3ADDF75F96DA(L_4, L_3, /*hidden argument*/NULL);
		__this->set_istate_10(L_4);
		InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * L_5 = __this->get_istate_10();
		int32_t L_6 = ___windowBits0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InflateManager_Initialize_m200134FD3314E7A277A99C510F7206652B3C01C9(L_5, __this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::Inflate(SharpCompress.Compressors.Deflate.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_Inflate_mFB3BCD376B03D35495C073F526F88DF90810ECE8 (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	{
		InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * L_0 = __this->get_istate_10();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_1 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0FA167A2B553EA3A482772133E47AA3C132FFA2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibCodec_Inflate_mFB3BCD376B03D35495C073F526F88DF90810ECE8_RuntimeMethod_var)));
	}

IL_0013:
	{
		InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * L_2 = __this->get_istate_10();
		int32_t L_3 = ___flush0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InflateManager_Inflate_m988DA4158DE766A4DAC550E8CA8585E1FB510186(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::EndInflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndInflate_mB50FF344614ED7D50858A3B50B9903F6F9E8821B (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, const RuntimeMethod* method)
{
	{
		InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * L_0 = __this->get_istate_10();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_1 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0FA167A2B553EA3A482772133E47AA3C132FFA2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibCodec_EndInflate_mB50FF344614ED7D50858A3B50B9903F6F9E8821B_RuntimeMethod_var)));
	}

IL_0013:
	{
		InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * L_2 = __this->get_istate_10();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InflateManager_End_m3EA2A090979B5CD64B92454887C778F40D4012EE(L_2, /*hidden argument*/NULL);
		__this->set_istate_10((InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 *)NULL);
		return L_3;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::InitializeDeflate(SharpCompress.Compressors.Deflate.CompressionLevel,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_InitializeDeflate_m9F5C03C9F01C16E0021D6F836BB888C229760D58 (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, int32_t ___level0, bool ___wantRfc1950Header1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___level0;
		__this->set_CompressLevel_12(L_0);
		bool L_1 = ___wantRfc1950Header1;
		int32_t L_2;
		L_2 = ZlibCodec__InternalInitializeDeflate_m6E0EE2A7E6AD52FF761E1D2D12B9F89CC4CEA2EF(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::_InternalInitializeDeflate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec__InternalInitializeDeflate_m6E0EE2A7E6AD52FF761E1D2D12B9F89CC4CEA2EF (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, bool ___wantRfc1950Header0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * L_0 = __this->get_istate_10();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_1 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AE36592E95F2354A6676CC52CF848B11A46DBD9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibCodec__InternalInitializeDeflate_m6E0EE2A7E6AD52FF761E1D2D12B9F89CC4CEA2EF_RuntimeMethod_var)));
	}

IL_0013:
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_2 = (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 *)il2cpp_codegen_object_new(DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9_il2cpp_TypeInfo_var);
		DeflateManager__ctor_m0296E40C752AB9E641EA93ADDA0FC4F03BD12CAE(L_2, /*hidden argument*/NULL);
		__this->set_dstate_9(L_2);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_3 = __this->get_dstate_9();
		bool L_4 = ___wantRfc1950Header0;
		NullCheck(L_3);
		DeflateManager_set_WantRfc1950HeaderBytes_m894E5832A4FB04A11C5DCB9ADC0A7790CEB08F53_inline(L_3, L_4, /*hidden argument*/NULL);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_5 = __this->get_dstate_9();
		int32_t L_6 = __this->get_CompressLevel_12();
		int32_t L_7 = __this->get_WindowBits_13();
		int32_t L_8 = __this->get_Strategy_14();
		NullCheck(L_5);
		int32_t L_9;
		L_9 = DeflateManager_Initialize_m7AC0246ABE3A13DC3EBBF8A4C3A6F9CBE3848230(L_5, __this, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::Deflate(SharpCompress.Compressors.Deflate.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_Deflate_m40D189358D3052C7844300DC7936C5686BC94345 (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, int32_t ___flush0, const RuntimeMethod* method)
{
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_0 = __this->get_dstate_9();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_1 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral983DAC088DBADBDF2CEE0A7F894D264FCD8D805D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibCodec_Deflate_m40D189358D3052C7844300DC7936C5686BC94345_RuntimeMethod_var)));
	}

IL_0013:
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_2 = __this->get_dstate_9();
		int32_t L_3 = ___flush0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = DeflateManager_Deflate_m126CEB8805497536F7CFB1F2073840FEC382FD66(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::EndDeflate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_EndDeflate_m9818A1239F94F09CB3D6E15F87E39714ED34DE5E (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, const RuntimeMethod* method)
{
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_0 = __this->get_dstate_9();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_1 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral983DAC088DBADBDF2CEE0A7F894D264FCD8D805D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibCodec_EndDeflate_m9818A1239F94F09CB3D6E15F87E39714ED34DE5E_RuntimeMethod_var)));
	}

IL_0013:
	{
		__this->set_dstate_9((DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 *)NULL);
		return 0;
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibCodec::flush_pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibCodec_flush_pending_m603D6CAA1E336BBC731C63B92F0103DDD309A023 (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_0 = __this->get_dstate_9();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_pendingCount_9();
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_AvailableBytesOut_6();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = __this->get_AvailableBytesOut_6();
		V_0 = L_4;
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_6 = __this->get_dstate_9();
		NullCheck(L_6);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = L_6->get_pending_7();
		NullCheck(L_7);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_8 = __this->get_dstate_9();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_nextPending_8();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))) <= ((int32_t)L_9)))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_OutputBuffer_4();
		NullCheck(L_10);
		int32_t L_11 = __this->get_NextOut_5();
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))) <= ((int32_t)L_11)))
		{
			goto IL_0078;
		}
	}
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_12 = __this->get_dstate_9();
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = L_12->get_pending_7();
		NullCheck(L_13);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_14 = __this->get_dstate_9();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_nextPending_8();
		int32_t L_16 = V_0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)))))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = __this->get_OutputBuffer_4();
		NullCheck(L_17);
		int32_t L_18 = __this->get_NextOut_5();
		int32_t L_19 = V_0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19)))))
		{
			goto IL_00aa;
		}
	}

IL_0078:
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_20 = __this->get_dstate_9();
		NullCheck(L_20);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21 = L_20->get_pending_7();
		NullCheck(L_21);
		int32_t L_22 = ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)));
		RuntimeObject * L_23 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_22);
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_24 = __this->get_dstate_9();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_pendingCount_9();
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_26);
		String_t* L_28;
		L_28 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral09BE1A5FDF1304B1AF66C7AA9E11F5D68F1A7A53)), L_23, L_27, /*hidden argument*/NULL);
		ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * L_29 = (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F_il2cpp_TypeInfo_var)));
		ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibCodec_flush_pending_m603D6CAA1E336BBC731C63B92F0103DDD309A023_RuntimeMethod_var)));
	}

IL_00aa:
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_30 = __this->get_dstate_9();
		NullCheck(L_30);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = L_30->get_pending_7();
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_32 = __this->get_dstate_9();
		NullCheck(L_32);
		int32_t L_33 = L_32->get_nextPending_8();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = __this->get_OutputBuffer_4();
		int32_t L_35 = __this->get_NextOut_5();
		int32_t L_36 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_31, L_33, (RuntimeArray *)(RuntimeArray *)L_34, L_35, L_36, /*hidden argument*/NULL);
		int32_t L_37 = __this->get_NextOut_5();
		int32_t L_38 = V_0;
		__this->set_NextOut_5(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_38)));
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_39 = __this->get_dstate_9();
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_40 = L_39;
		NullCheck(L_40);
		int32_t L_41 = L_40->get_nextPending_8();
		int32_t L_42 = V_0;
		NullCheck(L_40);
		L_40->set_nextPending_8(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42)));
		int64_t L_43 = __this->get_TotalBytesOut_7();
		int32_t L_44 = V_0;
		__this->set_TotalBytesOut_7(((int64_t)il2cpp_codegen_add((int64_t)L_43, (int64_t)((int64_t)((int64_t)L_44)))));
		int32_t L_45 = __this->get_AvailableBytesOut_6();
		int32_t L_46 = V_0;
		__this->set_AvailableBytesOut_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)L_46)));
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_47 = __this->get_dstate_9();
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_pendingCount_9();
		int32_t L_50 = V_0;
		NullCheck(L_48);
		L_48->set_pendingCount_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)L_50)));
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_51 = __this->get_dstate_9();
		NullCheck(L_51);
		int32_t L_52 = L_51->get_pendingCount_9();
		if (L_52)
		{
			goto IL_013c;
		}
	}
	{
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_53 = __this->get_dstate_9();
		NullCheck(L_53);
		L_53->set_nextPending_8(0);
	}

IL_013c:
	{
		return;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.ZlibCodec::read_buf(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibCodec_read_buf_mB4414E126598E0519086D57CD737885EB28B0061 (ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf0, int32_t ___start1, int32_t ___size2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_AvailableBytesIn_2();
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = ___size2;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_3 = ___size2;
		V_0 = L_3;
	}

IL_000d:
	{
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		int32_t L_5 = __this->get_AvailableBytesIn_2();
		int32_t L_6 = V_0;
		__this->set_AvailableBytesIn_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)));
		DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * L_7 = __this->get_dstate_9();
		NullCheck(L_7);
		bool L_8;
		L_8 = DeflateManager_get_WantRfc1950HeaderBytes_m8C9173A19AADA6593ECABA165C7E72EA2EEB8906_inline(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		uint32_t L_9 = __this->get__Adler32_11();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_InputBuffer_0();
		int32_t L_11 = __this->get_NextIn_1();
		int32_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Adler_tE578F88FF5D2A2B63D5223F4C31FECEB6A641ACA_il2cpp_TypeInfo_var);
		uint32_t L_13;
		L_13 = Adler_Adler32_mC43A8AA565B6B644F4FAC3378372FEC0D35CC83C(L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		__this->set__Adler32_11(L_13);
	}

IL_004b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = __this->get_InputBuffer_0();
		int32_t L_15 = __this->get_NextIn_1();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ___buf0;
		int32_t L_17 = ___start1;
		int32_t L_18 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_14, L_15, (RuntimeArray *)(RuntimeArray *)L_16, L_17, L_18, /*hidden argument*/NULL);
		int32_t L_19 = __this->get_NextIn_1();
		int32_t L_20 = V_0;
		__this->set_NextIn_1(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20)));
		int64_t L_21 = __this->get_TotalBytesIn_3();
		int32_t L_22 = V_0;
		__this->set_TotalBytesIn_3(((int64_t)il2cpp_codegen_add((int64_t)L_21, (int64_t)((int64_t)((int64_t)L_22)))));
		int32_t L_23 = V_0;
		return L_23;
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
// System.Void SharpCompress.Compressors.Deflate.ZlibException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibException__ctor_m498D82138D9FA678B9D8304BE0EBBF3F18854779 (ZlibException_t9309556B76B30A9C315311B7C4A83A95641ED85F * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
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
// System.Void SharpCompress.Compressors.Deflate.ZlibStream::.ctor(System.IO.Stream,SharpCompress.Compressors.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream__ctor_m1070EFDC23CC9F17CE6543C9018691BBC671F09E (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2;
		L_2 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ZlibStream__ctor_m1C8C6A9B2A49B9630EC2DCFAA9CD76376D5AC684(__this, L_0, L_1, 6, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibStream::.ctor(System.IO.Stream,SharpCompress.Compressors.CompressionMode,SharpCompress.Compressors.Deflate.CompressionLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream__ctor_m1D7CB9FB13143D5684BFE961E86642B1FE4F72CE (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, int32_t ___level2, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		int32_t L_2 = ___level2;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3;
		L_3 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		ZlibStream__ctor_m1C8C6A9B2A49B9630EC2DCFAA9CD76376D5AC684(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibStream::.ctor(System.IO.Stream,SharpCompress.Compressors.CompressionMode,SharpCompress.Compressors.Deflate.CompressionLevel,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream__ctor_m1C8C6A9B2A49B9630EC2DCFAA9CD76376D5AC684 (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, int32_t ___level2, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_il2cpp_TypeInfo_var);
		Stream__ctor_m5EB0B4BCC014E7D1F18FE0E72B2D6D0C5C13D5C4(__this, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___mode1;
		int32_t L_2 = ___level2;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ___encoding3;
		ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_4 = (ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 *)il2cpp_codegen_object_new(ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3_il2cpp_TypeInfo_var);
		ZlibBaseStream__ctor_m2BC19E7942713EC395F38F59D6A5A913A2B59DA6(L_4, L_0, L_1, L_2, ((int32_t)1950), L_3, /*hidden argument*/NULL);
		__this->set__baseStream_5(L_4);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibStream::set_FlushMode(SharpCompress.Compressors.Deflate.FlushType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream_set_FlushMode_m779F0A71E5A0FA071BEAAD76BF92C54790EA77C0 (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibStream_set_FlushMode_m779F0A71E5A0FA071BEAAD76BF92C54790EA77C0_RuntimeMethod_var)));
	}

IL_0013:
	{
		ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_2 = __this->get__baseStream_5();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		L_2->set__flushMode_7(L_3);
		return;
	}
}
// System.Boolean SharpCompress.Compressors.Deflate.ZlibStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibStream_get_CanRead_m8C6C8B98E72AD7292FCE5AAC807543A8E345FB07 (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibStream_get_CanRead_m8C6C8B98E72AD7292FCE5AAC807543A8E345FB07_RuntimeMethod_var)));
	}

IL_0013:
	{
		ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_2 = __this->get__baseStream_5();
		NullCheck(L_2);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = L_2->get__stream_14();
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		return L_4;
	}
}
// System.Boolean SharpCompress.Compressors.Deflate.ZlibStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibStream_get_CanSeek_m70E279365EB976CC8703CAA25D0528C87C7553A1 (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean SharpCompress.Compressors.Deflate.ZlibStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZlibStream_get_CanWrite_mF4166910849A825DFDA09424BD07270CCF5305C4 (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibStream_get_CanWrite_mF4166910849A825DFDA09424BD07270CCF5305C4_RuntimeMethod_var)));
	}

IL_0013:
	{
		ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_2 = __this->get__baseStream_5();
		NullCheck(L_2);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = L_2->get__stream_14();
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_3);
		return L_4;
	}
}
// System.Int64 SharpCompress.Compressors.Deflate.ZlibStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZlibStream_get_Length_m4624CE950441041BA10E1695D1FBDD88E6B822D4 (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibStream_get_Length_m4624CE950441041BA10E1695D1FBDD88E6B822D4_RuntimeMethod_var)));
	}
}
// System.Int64 SharpCompress.Compressors.Deflate.ZlibStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZlibStream_get_Position_mDFB80B1489738D12A75D228065EB9EC7B62E0349 (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, const RuntimeMethod* method)
{
	{
		ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_0 = __this->get__baseStream_5();
		NullCheck(L_0);
		int32_t L_1 = L_0->get__streamMode_6();
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_2 = __this->get__baseStream_5();
		NullCheck(L_2);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_3 = L_2->get__z_5();
		NullCheck(L_3);
		int64_t L_4 = L_3->get_TotalBytesOut_7();
		return L_4;
	}

IL_001e:
	{
		ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_5 = __this->get__baseStream_5();
		NullCheck(L_5);
		int32_t L_6 = L_5->get__streamMode_6();
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_7 = __this->get__baseStream_5();
		NullCheck(L_7);
		ZlibCodec_t02E53AAB7C1E73742477BB76E88EE9E0EAC182EE * L_8 = L_7->get__z_5();
		NullCheck(L_8);
		int64_t L_9 = L_8->get_TotalBytesIn_3();
		return L_9;
	}

IL_003d:
	{
		return ((int64_t)((int64_t)0));
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream_set_Position_mBDD5BA7AE7E7C4AED2FDAB52A27C23DF4724393D (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibStream_set_Position_mBDD5BA7AE7E7C4AED2FDAB52A27C23DF4724393D_RuntimeMethod_var)));
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream_Dispose_m81C66908E831782BEA46A551CA9524968BA370E3 (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, bool ___disposing0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * G_B4_0 = NULL;
	ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * G_B3_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = __this->get__disposed_6();
			if (L_0)
			{
				goto IL_0023;
			}
		}

IL_0008:
		{
			bool L_1 = ___disposing0;
			if (!L_1)
			{
				goto IL_001c;
			}
		}

IL_000b:
		{
			ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_2 = __this->get__baseStream_5();
			ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_3 = L_2;
			G_B3_0 = L_3;
			if (L_3)
			{
				G_B4_0 = L_3;
				goto IL_0017;
			}
		}

IL_0014:
		{
			goto IL_001c;
		}

IL_0017:
		{
			NullCheck(G_B4_0);
			Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(G_B4_0, /*hidden argument*/NULL);
		}

IL_001c:
		{
			__this->set__disposed_6((bool)1);
		}

IL_0023:
		{
			IL2CPP_LEAVE(0x2D, FINALLY_0025);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		bool L_4 = ___disposing0;
		Stream_Dispose_mDC5C7A9933446223A84ED106AE3E949E644FB0BE(__this, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(37)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
	}

IL_002d:
	{
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream_Flush_m97D5028E739F68DA301127ABA5ACD89E002108CD (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibStream_Flush_m97D5028E739F68DA301127ABA5ACD89E002108CD_RuntimeMethod_var)));
	}

IL_0013:
	{
		ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_2 = __this->get__baseStream_5();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(21 /* System.Void System.IO.Stream::Flush() */, L_2);
		return;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.ZlibStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibStream_Read_mCA6DE576671BE3893DE432B8D0597D39CA76F644 (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibStream_Read_mCA6DE576671BE3893DE432B8D0597D39CA76F644_RuntimeMethod_var)));
	}

IL_0013:
	{
		ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_2 = __this->get__baseStream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		int32_t L_6;
		L_6 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Int32 SharpCompress.Compressors.Deflate.ZlibStream::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ZlibStream_ReadByte_m72D25D066BFBBA8E1949B4765F7458719ABE0638 (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibStream_ReadByte_m72D25D066BFBBA8E1949B4765F7458719ABE0638_RuntimeMethod_var)));
	}

IL_0013:
	{
		ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_2 = __this->get__baseStream_5();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(32 /* System.Int32 System.IO.Stream::ReadByte() */, L_2);
		return L_3;
	}
}
// System.Int64 SharpCompress.Compressors.Deflate.ZlibStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZlibStream_Seek_m80ECFE40A1F60A543F84BFA2335C3B3F6C939DB1 (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibStream_Seek_m80ECFE40A1F60A543F84BFA2335C3B3F6C939DB1_RuntimeMethod_var)));
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream_SetLength_mF2174257445CBD3EC44A04D2E00E3B4D48B53093 (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibStream_SetLength_mF2174257445CBD3EC44A04D2E00E3B4D48B53093_RuntimeMethod_var)));
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream_Write_m3CED83DE3E5D085EA1F7BA3E907B33FABAD1F3C2 (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibStream_Write_m3CED83DE3E5D085EA1F7BA3E907B33FABAD1F3C2_RuntimeMethod_var)));
	}

IL_0013:
	{
		ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_2 = __this->get__baseStream_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___buffer0;
		int32_t L_4 = ___offset1;
		int32_t L_5 = ___count2;
		NullCheck(L_2);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(33 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		return;
	}
}
// System.Void SharpCompress.Compressors.Deflate.ZlibStream::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZlibStream_WriteByte_m0A01E834840873D9E471DB9C50CDCD3ED959075C (ZlibStream_tC2CF2D21D668DB884AAE473E5EF458794748342C * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__disposed_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_1 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E8D8498F7E1FE7ABCB662D0A1CCD0D77D0C00AC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZlibStream_WriteByte_m0A01E834840873D9E471DB9C50CDCD3ED959075C_RuntimeMethod_var)));
	}

IL_0013:
	{
		ZlibBaseStream_t9B11835FDF322480FD8456E3C09E9D3B884AE1A3 * L_2 = __this->get__baseStream_5();
		uint8_t L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(34 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t CRC32_get_TotalBytesRead_mB5D5A4EA79AAA47C21D46066AAB0DFD2886A1367_inline (CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CTotalBytesReadU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CRC32_set_TotalBytesRead_m6087B16415981109F677837E1A5925AF63D6C9FC_inline (CRC32_tBB356C0837066B0839B03775D7B40F613498E290 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CTotalBytesReadU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * DataConverter_get_Native_m8B38C68D21EE2E48085D5E43E845ED81CBD74ABA_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var);
		DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD * L_0 = ((DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_StaticFields*)il2cpp_codegen_static_fields_for(DataConverter_t4B81A49A174F009844342F62ED21C94C613453CD_il2cpp_TypeInfo_var))->get_U3CNativeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeflateManager_get_WantRfc1950HeaderBytes_m8C9173A19AADA6593ECABA165C7E72EA2EEB8906_inline (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CWantRfc1950HeaderBytesU3Ek__BackingField_57();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InflateManager_set_HandleRfc1950HeaderBytes_m1433E981E63FBC780FDCB38941F163C9D8713A8E_inline (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHandleRfc1950HeaderBytesU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InflateManager_get_HandleRfc1950HeaderBytes_m597E311EA470B8B491AC83A47F2E3FD672C4890D_inline (InflateManager_t94BBCCA448619F277B29731BDFC29017ED158BA9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CHandleRfc1950HeaderBytesU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NonDisposingStream_set_ThrowOnDispose_mD2526D3BBD9D31D1D96C6D7081809D06631E53C6_inline (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CThrowOnDisposeU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NonDisposingStream_get_ThrowOnDispose_m49DA920DCF6CEC4C607D725CA2B4BE640280F420_inline (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CThrowOnDisposeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * NonDisposingStream_get_Stream_m2AEA34940605DD4BC49E8545F01509A7D5B2A5F1_inline (NonDisposingStream_t170A22BBD50B1AF10BA3D01ADA54AD60743AEF47 * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get_U3CStreamU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DeflateManager_set_WantRfc1950HeaderBytes_m894E5832A4FB04A11C5DCB9ADC0A7790CEB08F53_inline (DeflateManager_t2340266C768495AEB6A6BD4A4D447B798176D1C9 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CWantRfc1950HeaderBytesU3Ek__BackingField_57(L_0);
		return;
	}
}
