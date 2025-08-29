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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// System.Action`1<System.Action>
struct Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,DnsClient.ResponseCache/ResponseEntry>
struct ConcurrentDictionary_2_t9469C211C23CC4D25734EB34F3709EE1469DD2CD;
// System.Collections.Concurrent.ConcurrentQueue`1<DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry>
struct ConcurrentQueue_1_tDBC13F0302BAB256F3C567AD6C7338E2C91BB828;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<DnsClient.DnsResponseMessage>>
struct Func_2_t6C19F4CA0481B0A580CDCE0521331661E692F111;
// System.Func`2<DnsClient.Protocol.DnsResourceRecord,System.Boolean>
struct Func_2_tBA779DA373D2FF7FBEE1B4A938BEDABDF9EBFD59;
// System.Func`2<DnsClient.Protocol.DnsResourceRecord,System.Int32>
struct Func_2_tA339043077C4CE3D0CD0B9B39799AB843A779483;
// System.Func`2<System.Net.IPAddress,DnsClient.NameServer>
struct Func_2_t4B7B346AA129E598D4E8BF05B90AF1C5D8CA489B;
// System.Func`2<System.Net.NetworkInformation.NetworkInterface,System.Boolean>
struct Func_2_tDB685A1FC7B9C97C7E26443BD550FA47518BCB8B;
// System.Func`2<System.String,System.String>
struct Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A;
// System.Func`6<System.Int32,System.Int32,System.Int32,System.String,System.String,System.String>
struct Func_6_t7698E6100CEDA401C104679DBDCCECE5A40CD606;
// System.Collections.Generic.IEnumerable`1<DnsClient.NameServer>
struct IEnumerable_1_tF4A9B83B6526519B6C14037623551E9696ECB8FF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IReadOnlyCollection`1<DnsClient.NameServer>
struct IReadOnlyCollection_1_t40D1FB56B357DE4B47E290F7BA5A849F53504038;
// System.Collections.Generic.IReadOnlyList`1<DnsClient.NameServer>
struct IReadOnlyList_1_t8C5665401FEDBC6115E18AD556FCB087F5A3A3CF;
// System.Collections.Generic.List`1<DnsClient.DnsQuestion>
struct List_1_tE4C8D5B1ADBDFE977CD424FC3C63DF9553FEDDCC;
// System.Collections.Generic.List`1<DnsClient.Protocol.DnsResourceRecord>
struct List_1_t41578EE2C7298CFD90BE144F07E203CA3AC1DC37;
// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<DnsClient.DnsResponseMessage>
struct TaskFactory_1_t80B1CE3B7C61CC44AE31FDDF39C5A0FA1FC3A636;
// System.Threading.Tasks.Task`1<DnsClient.DnsResponseMessage>
struct Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700;
// System.Threading.Tasks.Task`1<DnsClient.IDnsQueryResponse>
struct Task_1_t3E14994AB603BD8186E70B8D426FD14DFB507B29;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry>
struct Task_1_tE3958804AC6133A4625A02BF9CC0A3205780D785;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DnsClient.DnsMessageHandler
struct DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242;
// DnsClient.DnsQuerySettings
struct DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D;
// DnsClient.DnsQuestion
struct DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B;
// DnsClient.DnsRequestHeader
struct DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D;
// DnsClient.DnsRequestMessage
struct DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681;
// DnsClient.Protocol.DnsResourceRecord
struct DnsResourceRecord_tB777F2C5F97194975BB8561D94DBC213330828A4;
// DnsClient.DnsResponseException
struct DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B;
// DnsClient.DnsResponseHeader
struct DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB;
// DnsClient.DnsResponseMessage
struct DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9;
// DnsClient.DnsResponseParseException
struct DnsResponseParseException_t8643D394CC55934F2F34B08A96ED7B727BD451BC;
// DnsClient.DnsString
struct DnsString_t110D8E0C678AFD69CD20290C1FCC446BD032B740;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// DnsClient.IDnsQueryResponse
struct IDnsQueryResponse_tBBA88F4C3CB5794B7998232442CBFD1517882CCE;
// DnsClient.Internal.ILogger
struct ILogger_tABC012A6DBE0E70DCAB46C64C8826B3393A42E46;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E;
// System.Net.Sockets.LingerOption
struct LingerOption_t4E191E63AB49943D401B71B3E7830E6586CE0E34;
// DnsClient.LookupClient
struct LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B;
// DnsClient.LookupClientAudit
struct LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3;
// DnsClient.LookupClientOptions
struct LookupClientOptions_t7C0562C89EA7F2B9B6734BA12325821BE8E29C5B;
// DnsClient.LookupClientSettings
struct LookupClientSettings_t65A8EDDCFBEED93AAD9D37D535DDB329EE490268;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// DnsClient.NameServer
struct NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E;
// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// DnsClient.Protocol.ResourceRecordInfo
struct ResourceRecordInfo_tFEB40ADCF4027A6A12E390090A94AB1155F57DEA;
// DnsClient.ResponseCache
struct ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.Diagnostics.SourceSwitch
struct SourceSwitch_tC1DEE6F688A13847CC249DEADD07D00178DE9ADC;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Net.Sockets.TcpClient
struct TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t81B01A2F4F380B9EA2C164F30B3FA2B287DD4126;
// System.Diagnostics.TraceSource
struct TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0;
// DnsClient.TruncatedQueryResponse
struct TruncatedQueryResponse_t5EEF776C062C1EE4914FC548BAC82DFD71D23391;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// DnsClient.DnsTcpMessageHandler/ClientPool
struct ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160;
// DnsClient.LookupClient/<>c__DisplayClass101_0
struct U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF;
// DnsClient.LookupClient/SkipWorker
struct SkipWorker_tD9D2C20328DCE8F86E2B94A5230CCA5EC1FA2E4A;
// DnsClient.LookupClientAudit/<>c
struct U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9;
// DnsClient.NameServer/<>c
struct U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A;
// DnsClient.NameServer/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t90FA21695146462F09CA94F95C2A3D40106BA631;
// System.Linq.RecordCollectionExtension/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t8ECF2E793BE1F67217711285084AB62395589B9B;
// DnsClient.ResponseCache/<>c
struct U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D;
// DnsClient.ResponseCache/ResponseEntry
struct ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// DnsClient.Tracing/TraceLoggerFactory
struct TraceLoggerFactory_tE000501B11CF1E465B0F7131FD3B5283523A4B8F;
// DnsClient.Protocol.TxtRecord/<>c
struct U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172;
// DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry
struct ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF;
// DnsClient.Tracing/TraceLoggerFactory/TraceLogger
struct TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DnsMessageHandleType_tBC2ECE88ABCDB3FCD65C0CE07A42AC466D2AB516_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DnsResponseParseException_t8643D394CC55934F2F34B08A96ED7B727BD451BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDnsQueryResponse_tBBA88F4C3CB5794B7998232442CBFD1517882CCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tABC012A6DBE0E70DCAB46C64C8826B3393A42E46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t40D1FB56B357DE4B47E290F7BA5A849F53504038_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyList_1_t8C5665401FEDBC6115E18AD556FCB087F5A3A3CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LingerOption_t4E191E63AB49943D401B71B3E7830E6586CE0E34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptRecord_t7166C5B33E5E73C4CA9508BB9EF7DEA6028DED1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeoutException_tB5D0EEFAEC3FC79FFDEF23C55D1BDF4DE347C926_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timeout_t1D83B13AB177AA6C3028AA49BDFBA6EE7E142050_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tracing_tC7FB30C589F90CD0B26A97CA9F0BCB4AEF1ACF8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TruncatedQueryResponse_t5EEF776C062C1EE4914FC548BAC82DFD71D23391_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C;
IL2CPP_EXTERN_C String_t* _stringLiteral2388F091C228023E790448E1E25A13FDA7A160F4;
IL2CPP_EXTERN_C String_t* _stringLiteral28670253AAC028F1DB6FEA04B169B7855447E0D2;
IL2CPP_EXTERN_C String_t* _stringLiteral56C0D382AA01360686EC86280707D26099E2C9AD;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral9745D702C802CF9C9AB3EC53210169CD1D79B315;
IL2CPP_EXTERN_C String_t* _stringLiteral9D2B55C4D6F60EC2DEB337D17194E38A53D1285A;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AEB4DBED56DD7667D53D9D797A7112C1253094;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD10DD2A1D34AB26470FEE59FA86FFD7910F46A6D;
IL2CPP_EXTERN_C String_t* _stringLiteralD46F0D83A0FFEB9F0B0ECB960630C2AE129F0445;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralECB8D215DD88CA07BA4D287B2C583453ED16A5D1;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA76F0902F47C07F43966555A9B53075E365DCE3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F_TisU3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1_m45AA50F4CC1DEC8814223FA544E8C6C5170C8203_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E_m203CC179A087A31DB9D221B0FE0FC20CFC90E903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mAEEAEF5A83D0A0781017DBFCD30D2D3813E9217B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mCC6263712051888BAB0E51D4687408F835926A80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m1087C96370C903C960B4DD13032C34C99BBC20B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m46B01FB979A809E6C05E9C45B965319BD31B4618_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m795CA528D6BC9854AFE044102C63F10BB8F22D7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m991CC36E8574C3467ECD880A62EF0BBCF2E282FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m2656FC8B5FA9072E092F3D681A900E4CDE900BDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m08C47E38E1A21F776190E44C64BEDEA3F51D0427_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mD82A0486D406821729B5959CB3BBADCC5CFAE2F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DnsMessageHandler_IsTransientException_TisException_t_mFA4D11BCE61D80E7E604EBFEFB2B30B1260C35D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkipWorker__ctor_m51E4EDF2EA7775B19E392E0C273ADA36FBF0D869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Join_TisNameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_m1EDA34289997CF907CFBC34291BB23ABE85F9BE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtensions_WithCancellation_TisDnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9_m19FBEBBC64A80A00E4FEA032E68A8E2462B3341B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m88862B69D2BD5EDA40FCB8650A46CF332A210988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TraceLogger__ctor_mCE26626E7E4015CFEE7707219FE43175270E96B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetNextClientU3Ed__5_MoveNext_mEADDDCF02B0064AEA0BB0932C9E94F8E76551D88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CResolveQueryAsyncU3Eb__101_0_mFEA5876274D419EE65106FD1527EC8D412DE871F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass101_0_U3CResolveQueryAsyncU3Eb__1_m5BE108B13FBECF6310CD40670F58E0E40EB04007_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

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


// DnsClient.DnsMessageHandler
struct DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242  : public RuntimeObject
{
public:

public:
};


// DnsClient.DnsRequestHeader
struct DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D  : public RuntimeObject
{
public:
	// System.UInt16 DnsClient.DnsRequestHeader::_flags
	uint16_t ____flags_1;
	// System.Int32 DnsClient.DnsRequestHeader::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of__flags_1() { return static_cast<int32_t>(offsetof(DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D, ____flags_1)); }
	inline uint16_t get__flags_1() const { return ____flags_1; }
	inline uint16_t* get_address_of__flags_1() { return &____flags_1; }
	inline void set__flags_1(uint16_t value)
	{
		____flags_1 = value;
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D, ___U3CIdU3Ek__BackingField_2)); }
	inline int32_t get_U3CIdU3Ek__BackingField_2() const { return ___U3CIdU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_2() { return &___U3CIdU3Ek__BackingField_2; }
	inline void set_U3CIdU3Ek__BackingField_2(int32_t value)
	{
		___U3CIdU3Ek__BackingField_2 = value;
	}
};

struct DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D_StaticFields
{
public:
	// System.Random DnsClient.DnsRequestHeader::s_random
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___s_random_0;

public:
	inline static int32_t get_offset_of_s_random_0() { return static_cast<int32_t>(offsetof(DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D_StaticFields, ___s_random_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_s_random_0() const { return ___s_random_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_s_random_0() { return &___s_random_0; }
	inline void set_s_random_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___s_random_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_random_0), (void*)value);
	}
};


// DnsClient.DnsRequestMessage
struct DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681  : public RuntimeObject
{
public:
	// DnsClient.DnsRequestHeader DnsClient.DnsRequestMessage::<Header>k__BackingField
	DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D * ___U3CHeaderU3Ek__BackingField_0;
	// DnsClient.DnsQuestion DnsClient.DnsRequestMessage::<Question>k__BackingField
	DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B * ___U3CQuestionU3Ek__BackingField_1;
	// DnsClient.DnsQuerySettings DnsClient.DnsRequestMessage::<QuerySettings>k__BackingField
	DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * ___U3CQuerySettingsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CHeaderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681, ___U3CHeaderU3Ek__BackingField_0)); }
	inline DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D * get_U3CHeaderU3Ek__BackingField_0() const { return ___U3CHeaderU3Ek__BackingField_0; }
	inline DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D ** get_address_of_U3CHeaderU3Ek__BackingField_0() { return &___U3CHeaderU3Ek__BackingField_0; }
	inline void set_U3CHeaderU3Ek__BackingField_0(DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D * value)
	{
		___U3CHeaderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeaderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CQuestionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681, ___U3CQuestionU3Ek__BackingField_1)); }
	inline DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B * get_U3CQuestionU3Ek__BackingField_1() const { return ___U3CQuestionU3Ek__BackingField_1; }
	inline DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B ** get_address_of_U3CQuestionU3Ek__BackingField_1() { return &___U3CQuestionU3Ek__BackingField_1; }
	inline void set_U3CQuestionU3Ek__BackingField_1(DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B * value)
	{
		___U3CQuestionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CQuestionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CQuerySettingsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681, ___U3CQuerySettingsU3Ek__BackingField_2)); }
	inline DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * get_U3CQuerySettingsU3Ek__BackingField_2() const { return ___U3CQuerySettingsU3Ek__BackingField_2; }
	inline DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D ** get_address_of_U3CQuerySettingsU3Ek__BackingField_2() { return &___U3CQuerySettingsU3Ek__BackingField_2; }
	inline void set_U3CQuerySettingsU3Ek__BackingField_2(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * value)
	{
		___U3CQuerySettingsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CQuerySettingsU3Ek__BackingField_2), (void*)value);
	}
};


// DnsClient.DnsResponseHeader
struct DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB  : public RuntimeObject
{
public:
	// System.UInt16 DnsClient.DnsResponseHeader::_flags
	uint16_t ____flags_0;
	// System.Int32 DnsClient.DnsResponseHeader::<AdditionalCount>k__BackingField
	int32_t ___U3CAdditionalCountU3Ek__BackingField_1;
	// System.Int32 DnsClient.DnsResponseHeader::<AnswerCount>k__BackingField
	int32_t ___U3CAnswerCountU3Ek__BackingField_2;
	// System.Int32 DnsClient.DnsResponseHeader::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_3;
	// System.Int32 DnsClient.DnsResponseHeader::<NameServerCount>k__BackingField
	int32_t ___U3CNameServerCountU3Ek__BackingField_4;
	// System.Int32 DnsClient.DnsResponseHeader::<QuestionCount>k__BackingField
	int32_t ___U3CQuestionCountU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__flags_0() { return static_cast<int32_t>(offsetof(DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB, ____flags_0)); }
	inline uint16_t get__flags_0() const { return ____flags_0; }
	inline uint16_t* get_address_of__flags_0() { return &____flags_0; }
	inline void set__flags_0(uint16_t value)
	{
		____flags_0 = value;
	}

	inline static int32_t get_offset_of_U3CAdditionalCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB, ___U3CAdditionalCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CAdditionalCountU3Ek__BackingField_1() const { return ___U3CAdditionalCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CAdditionalCountU3Ek__BackingField_1() { return &___U3CAdditionalCountU3Ek__BackingField_1; }
	inline void set_U3CAdditionalCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CAdditionalCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CAnswerCountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB, ___U3CAnswerCountU3Ek__BackingField_2)); }
	inline int32_t get_U3CAnswerCountU3Ek__BackingField_2() const { return ___U3CAnswerCountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CAnswerCountU3Ek__BackingField_2() { return &___U3CAnswerCountU3Ek__BackingField_2; }
	inline void set_U3CAnswerCountU3Ek__BackingField_2(int32_t value)
	{
		___U3CAnswerCountU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB, ___U3CIdU3Ek__BackingField_3)); }
	inline int32_t get_U3CIdU3Ek__BackingField_3() const { return ___U3CIdU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_3() { return &___U3CIdU3Ek__BackingField_3; }
	inline void set_U3CIdU3Ek__BackingField_3(int32_t value)
	{
		___U3CIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CNameServerCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB, ___U3CNameServerCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CNameServerCountU3Ek__BackingField_4() const { return ___U3CNameServerCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CNameServerCountU3Ek__BackingField_4() { return &___U3CNameServerCountU3Ek__BackingField_4; }
	inline void set_U3CNameServerCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CNameServerCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CQuestionCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB, ___U3CQuestionCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CQuestionCountU3Ek__BackingField_5() const { return ___U3CQuestionCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CQuestionCountU3Ek__BackingField_5() { return &___U3CQuestionCountU3Ek__BackingField_5; }
	inline void set_U3CQuestionCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CQuestionCountU3Ek__BackingField_5 = value;
	}
};


// DnsClient.DnsResponseMessage
struct DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<DnsClient.Protocol.DnsResourceRecord> DnsClient.DnsResponseMessage::<Additionals>k__BackingField
	List_1_t41578EE2C7298CFD90BE144F07E203CA3AC1DC37 * ___U3CAdditionalsU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<DnsClient.Protocol.DnsResourceRecord> DnsClient.DnsResponseMessage::<Answers>k__BackingField
	List_1_t41578EE2C7298CFD90BE144F07E203CA3AC1DC37 * ___U3CAnswersU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<DnsClient.Protocol.DnsResourceRecord> DnsClient.DnsResponseMessage::<Authorities>k__BackingField
	List_1_t41578EE2C7298CFD90BE144F07E203CA3AC1DC37 * ___U3CAuthoritiesU3Ek__BackingField_2;
	// DnsClient.DnsResponseHeader DnsClient.DnsResponseMessage::<Header>k__BackingField
	DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB * ___U3CHeaderU3Ek__BackingField_3;
	// System.Int32 DnsClient.DnsResponseMessage::<MessageSize>k__BackingField
	int32_t ___U3CMessageSizeU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<DnsClient.DnsQuestion> DnsClient.DnsResponseMessage::<Questions>k__BackingField
	List_1_tE4C8D5B1ADBDFE977CD424FC3C63DF9553FEDDCC * ___U3CQuestionsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CAdditionalsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9, ___U3CAdditionalsU3Ek__BackingField_0)); }
	inline List_1_t41578EE2C7298CFD90BE144F07E203CA3AC1DC37 * get_U3CAdditionalsU3Ek__BackingField_0() const { return ___U3CAdditionalsU3Ek__BackingField_0; }
	inline List_1_t41578EE2C7298CFD90BE144F07E203CA3AC1DC37 ** get_address_of_U3CAdditionalsU3Ek__BackingField_0() { return &___U3CAdditionalsU3Ek__BackingField_0; }
	inline void set_U3CAdditionalsU3Ek__BackingField_0(List_1_t41578EE2C7298CFD90BE144F07E203CA3AC1DC37 * value)
	{
		___U3CAdditionalsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdditionalsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAnswersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9, ___U3CAnswersU3Ek__BackingField_1)); }
	inline List_1_t41578EE2C7298CFD90BE144F07E203CA3AC1DC37 * get_U3CAnswersU3Ek__BackingField_1() const { return ___U3CAnswersU3Ek__BackingField_1; }
	inline List_1_t41578EE2C7298CFD90BE144F07E203CA3AC1DC37 ** get_address_of_U3CAnswersU3Ek__BackingField_1() { return &___U3CAnswersU3Ek__BackingField_1; }
	inline void set_U3CAnswersU3Ek__BackingField_1(List_1_t41578EE2C7298CFD90BE144F07E203CA3AC1DC37 * value)
	{
		___U3CAnswersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAnswersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthoritiesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9, ___U3CAuthoritiesU3Ek__BackingField_2)); }
	inline List_1_t41578EE2C7298CFD90BE144F07E203CA3AC1DC37 * get_U3CAuthoritiesU3Ek__BackingField_2() const { return ___U3CAuthoritiesU3Ek__BackingField_2; }
	inline List_1_t41578EE2C7298CFD90BE144F07E203CA3AC1DC37 ** get_address_of_U3CAuthoritiesU3Ek__BackingField_2() { return &___U3CAuthoritiesU3Ek__BackingField_2; }
	inline void set_U3CAuthoritiesU3Ek__BackingField_2(List_1_t41578EE2C7298CFD90BE144F07E203CA3AC1DC37 * value)
	{
		___U3CAuthoritiesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthoritiesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHeaderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9, ___U3CHeaderU3Ek__BackingField_3)); }
	inline DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB * get_U3CHeaderU3Ek__BackingField_3() const { return ___U3CHeaderU3Ek__BackingField_3; }
	inline DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB ** get_address_of_U3CHeaderU3Ek__BackingField_3() { return &___U3CHeaderU3Ek__BackingField_3; }
	inline void set_U3CHeaderU3Ek__BackingField_3(DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB * value)
	{
		___U3CHeaderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeaderU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageSizeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9, ___U3CMessageSizeU3Ek__BackingField_4)); }
	inline int32_t get_U3CMessageSizeU3Ek__BackingField_4() const { return ___U3CMessageSizeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CMessageSizeU3Ek__BackingField_4() { return &___U3CMessageSizeU3Ek__BackingField_4; }
	inline void set_U3CMessageSizeU3Ek__BackingField_4(int32_t value)
	{
		___U3CMessageSizeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CQuestionsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9, ___U3CQuestionsU3Ek__BackingField_5)); }
	inline List_1_tE4C8D5B1ADBDFE977CD424FC3C63DF9553FEDDCC * get_U3CQuestionsU3Ek__BackingField_5() const { return ___U3CQuestionsU3Ek__BackingField_5; }
	inline List_1_tE4C8D5B1ADBDFE977CD424FC3C63DF9553FEDDCC ** get_address_of_U3CQuestionsU3Ek__BackingField_5() { return &___U3CQuestionsU3Ek__BackingField_5; }
	inline void set_U3CQuestionsU3Ek__BackingField_5(List_1_tE4C8D5B1ADBDFE977CD424FC3C63DF9553FEDDCC * value)
	{
		___U3CQuestionsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CQuestionsU3Ek__BackingField_5), (void*)value);
	}
};


// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA  : public RuntimeObject
{
public:

public:
};


// System.Net.Sockets.LingerOption
struct LingerOption_t4E191E63AB49943D401B71B3E7830E6586CE0E34  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.LingerOption::enabled
	bool ___enabled_0;
	// System.Int32 System.Net.Sockets.LingerOption::lingerTime
	int32_t ___lingerTime_1;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(LingerOption_t4E191E63AB49943D401B71B3E7830E6586CE0E34, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_lingerTime_1() { return static_cast<int32_t>(offsetof(LingerOption_t4E191E63AB49943D401B71B3E7830E6586CE0E34, ___lingerTime_1)); }
	inline int32_t get_lingerTime_1() const { return ___lingerTime_1; }
	inline int32_t* get_address_of_lingerTime_1() { return &___lingerTime_1; }
	inline void set_lingerTime_1(int32_t value)
	{
		___lingerTime_1 = value;
	}
};


// DnsClient.LookupClient
struct LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B  : public RuntimeObject
{
public:
	// DnsClient.LookupClientOptions DnsClient.LookupClient::_originalOptions
	LookupClientOptions_t7C0562C89EA7F2B9B6734BA12325821BE8E29C5B * ____originalOptions_0;
	// DnsClient.DnsMessageHandler DnsClient.LookupClient::_messageHandler
	DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * ____messageHandler_1;
	// DnsClient.DnsMessageHandler DnsClient.LookupClient::_tcpFallbackHandler
	DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * ____tcpFallbackHandler_2;
	// DnsClient.Internal.ILogger DnsClient.LookupClient::_logger
	RuntimeObject* ____logger_3;
	// DnsClient.LookupClient/SkipWorker DnsClient.LookupClient::_skipper
	SkipWorker_tD9D2C20328DCE8F86E2B94A5230CCA5EC1FA2E4A * ____skipper_4;
	// System.Collections.Generic.IReadOnlyCollection`1<DnsClient.NameServer> DnsClient.LookupClient::_resolvedNameServers
	RuntimeObject* ____resolvedNameServers_5;
	// DnsClient.LookupClientSettings DnsClient.LookupClient::<Settings>k__BackingField
	LookupClientSettings_t65A8EDDCFBEED93AAD9D37D535DDB329EE490268 * ___U3CSettingsU3Ek__BackingField_6;
	// DnsClient.ResponseCache DnsClient.LookupClient::<Cache>k__BackingField
	ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28 * ___U3CCacheU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of__originalOptions_0() { return static_cast<int32_t>(offsetof(LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B, ____originalOptions_0)); }
	inline LookupClientOptions_t7C0562C89EA7F2B9B6734BA12325821BE8E29C5B * get__originalOptions_0() const { return ____originalOptions_0; }
	inline LookupClientOptions_t7C0562C89EA7F2B9B6734BA12325821BE8E29C5B ** get_address_of__originalOptions_0() { return &____originalOptions_0; }
	inline void set__originalOptions_0(LookupClientOptions_t7C0562C89EA7F2B9B6734BA12325821BE8E29C5B * value)
	{
		____originalOptions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____originalOptions_0), (void*)value);
	}

	inline static int32_t get_offset_of__messageHandler_1() { return static_cast<int32_t>(offsetof(LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B, ____messageHandler_1)); }
	inline DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * get__messageHandler_1() const { return ____messageHandler_1; }
	inline DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 ** get_address_of__messageHandler_1() { return &____messageHandler_1; }
	inline void set__messageHandler_1(DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * value)
	{
		____messageHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____messageHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of__tcpFallbackHandler_2() { return static_cast<int32_t>(offsetof(LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B, ____tcpFallbackHandler_2)); }
	inline DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * get__tcpFallbackHandler_2() const { return ____tcpFallbackHandler_2; }
	inline DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 ** get_address_of__tcpFallbackHandler_2() { return &____tcpFallbackHandler_2; }
	inline void set__tcpFallbackHandler_2(DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * value)
	{
		____tcpFallbackHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tcpFallbackHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of__logger_3() { return static_cast<int32_t>(offsetof(LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B, ____logger_3)); }
	inline RuntimeObject* get__logger_3() const { return ____logger_3; }
	inline RuntimeObject** get_address_of__logger_3() { return &____logger_3; }
	inline void set__logger_3(RuntimeObject* value)
	{
		____logger_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____logger_3), (void*)value);
	}

	inline static int32_t get_offset_of__skipper_4() { return static_cast<int32_t>(offsetof(LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B, ____skipper_4)); }
	inline SkipWorker_tD9D2C20328DCE8F86E2B94A5230CCA5EC1FA2E4A * get__skipper_4() const { return ____skipper_4; }
	inline SkipWorker_tD9D2C20328DCE8F86E2B94A5230CCA5EC1FA2E4A ** get_address_of__skipper_4() { return &____skipper_4; }
	inline void set__skipper_4(SkipWorker_tD9D2C20328DCE8F86E2B94A5230CCA5EC1FA2E4A * value)
	{
		____skipper_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____skipper_4), (void*)value);
	}

	inline static int32_t get_offset_of__resolvedNameServers_5() { return static_cast<int32_t>(offsetof(LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B, ____resolvedNameServers_5)); }
	inline RuntimeObject* get__resolvedNameServers_5() const { return ____resolvedNameServers_5; }
	inline RuntimeObject** get_address_of__resolvedNameServers_5() { return &____resolvedNameServers_5; }
	inline void set__resolvedNameServers_5(RuntimeObject* value)
	{
		____resolvedNameServers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resolvedNameServers_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSettingsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B, ___U3CSettingsU3Ek__BackingField_6)); }
	inline LookupClientSettings_t65A8EDDCFBEED93AAD9D37D535DDB329EE490268 * get_U3CSettingsU3Ek__BackingField_6() const { return ___U3CSettingsU3Ek__BackingField_6; }
	inline LookupClientSettings_t65A8EDDCFBEED93AAD9D37D535DDB329EE490268 ** get_address_of_U3CSettingsU3Ek__BackingField_6() { return &___U3CSettingsU3Ek__BackingField_6; }
	inline void set_U3CSettingsU3Ek__BackingField_6(LookupClientSettings_t65A8EDDCFBEED93AAD9D37D535DDB329EE490268 * value)
	{
		___U3CSettingsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSettingsU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCacheU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B, ___U3CCacheU3Ek__BackingField_7)); }
	inline ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28 * get_U3CCacheU3Ek__BackingField_7() const { return ___U3CCacheU3Ek__BackingField_7; }
	inline ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28 ** get_address_of_U3CCacheU3Ek__BackingField_7() { return &___U3CCacheU3Ek__BackingField_7; }
	inline void set_U3CCacheU3Ek__BackingField_7(ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28 * value)
	{
		___U3CCacheU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCacheU3Ek__BackingField_7), (void*)value);
	}
};


// DnsClient.LookupClientAudit
struct LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3  : public RuntimeObject
{
public:
	// System.Text.StringBuilder DnsClient.LookupClientAudit::_auditWriter
	StringBuilder_t * ____auditWriter_1;
	// System.Diagnostics.Stopwatch DnsClient.LookupClientAudit::_swatch
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ____swatch_2;
	// DnsClient.DnsQuerySettings DnsClient.LookupClientAudit::<Settings>k__BackingField
	DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * ___U3CSettingsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of__auditWriter_1() { return static_cast<int32_t>(offsetof(LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3, ____auditWriter_1)); }
	inline StringBuilder_t * get__auditWriter_1() const { return ____auditWriter_1; }
	inline StringBuilder_t ** get_address_of__auditWriter_1() { return &____auditWriter_1; }
	inline void set__auditWriter_1(StringBuilder_t * value)
	{
		____auditWriter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____auditWriter_1), (void*)value);
	}

	inline static int32_t get_offset_of__swatch_2() { return static_cast<int32_t>(offsetof(LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3, ____swatch_2)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get__swatch_2() const { return ____swatch_2; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of__swatch_2() { return &____swatch_2; }
	inline void set__swatch_2(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		____swatch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____swatch_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSettingsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3, ___U3CSettingsU3Ek__BackingField_3)); }
	inline DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * get_U3CSettingsU3Ek__BackingField_3() const { return ___U3CSettingsU3Ek__BackingField_3; }
	inline DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D ** get_address_of_U3CSettingsU3Ek__BackingField_3() { return &___U3CSettingsU3Ek__BackingField_3; }
	inline void set_U3CSettingsU3Ek__BackingField_3(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * value)
	{
		___U3CSettingsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSettingsU3Ek__BackingField_3), (void*)value);
	}
};

struct LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3_StaticFields
{
public:
	// System.Int32 DnsClient.LookupClientAudit::s_printOffset
	int32_t ___s_printOffset_0;

public:
	inline static int32_t get_offset_of_s_printOffset_0() { return static_cast<int32_t>(offsetof(LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3_StaticFields, ___s_printOffset_0)); }
	inline int32_t get_s_printOffset_0() const { return ___s_printOffset_0; }
	inline int32_t* get_address_of_s_printOffset_0() { return &___s_printOffset_0; }
	inline void set_s_printOffset_0(int32_t value)
	{
		___s_printOffset_0 = value;
	}
};


// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB  : public RuntimeObject
{
public:

public:
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


// DnsClient.Tracing
struct Tracing_tC7FB30C589F90CD0B26A97CA9F0BCB4AEF1ACF8D  : public RuntimeObject
{
public:

public:
};

struct Tracing_tC7FB30C589F90CD0B26A97CA9F0BCB4AEF1ACF8D_StaticFields
{
public:
	// System.Diagnostics.TraceSource DnsClient.Tracing::<Source>k__BackingField
	TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0 * ___U3CSourceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CSourceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracing_tC7FB30C589F90CD0B26A97CA9F0BCB4AEF1ACF8D_StaticFields, ___U3CSourceU3Ek__BackingField_0)); }
	inline TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0 * get_U3CSourceU3Ek__BackingField_0() const { return ___U3CSourceU3Ek__BackingField_0; }
	inline TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0 ** get_address_of_U3CSourceU3Ek__BackingField_0() { return &___U3CSourceU3Ek__BackingField_0; }
	inline void set_U3CSourceU3Ek__BackingField_0(TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0 * value)
	{
		___U3CSourceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceU3Ek__BackingField_0), (void*)value);
	}
};


// DnsClient.TruncatedQueryResponse
struct TruncatedQueryResponse_t5EEF776C062C1EE4914FC548BAC82DFD71D23391  : public RuntimeObject
{
public:

public:
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

// DnsClient.DnsTcpMessageHandler/ClientPool
struct ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160  : public RuntimeObject
{
public:
	// System.Boolean DnsClient.DnsTcpMessageHandler/ClientPool::disposedValue
	bool ___disposedValue_0;
	// System.Boolean DnsClient.DnsTcpMessageHandler/ClientPool::_enablePool
	bool ____enablePool_1;
	// System.Collections.Concurrent.ConcurrentQueue`1<DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry> DnsClient.DnsTcpMessageHandler/ClientPool::_clients
	ConcurrentQueue_1_tDBC13F0302BAB256F3C567AD6C7338E2C91BB828 * ____clients_2;
	// System.Net.IPEndPoint DnsClient.DnsTcpMessageHandler/ClientPool::_endpoint
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ____endpoint_3;

public:
	inline static int32_t get_offset_of_disposedValue_0() { return static_cast<int32_t>(offsetof(ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160, ___disposedValue_0)); }
	inline bool get_disposedValue_0() const { return ___disposedValue_0; }
	inline bool* get_address_of_disposedValue_0() { return &___disposedValue_0; }
	inline void set_disposedValue_0(bool value)
	{
		___disposedValue_0 = value;
	}

	inline static int32_t get_offset_of__enablePool_1() { return static_cast<int32_t>(offsetof(ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160, ____enablePool_1)); }
	inline bool get__enablePool_1() const { return ____enablePool_1; }
	inline bool* get_address_of__enablePool_1() { return &____enablePool_1; }
	inline void set__enablePool_1(bool value)
	{
		____enablePool_1 = value;
	}

	inline static int32_t get_offset_of__clients_2() { return static_cast<int32_t>(offsetof(ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160, ____clients_2)); }
	inline ConcurrentQueue_1_tDBC13F0302BAB256F3C567AD6C7338E2C91BB828 * get__clients_2() const { return ____clients_2; }
	inline ConcurrentQueue_1_tDBC13F0302BAB256F3C567AD6C7338E2C91BB828 ** get_address_of__clients_2() { return &____clients_2; }
	inline void set__clients_2(ConcurrentQueue_1_tDBC13F0302BAB256F3C567AD6C7338E2C91BB828 * value)
	{
		____clients_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clients_2), (void*)value);
	}

	inline static int32_t get_offset_of__endpoint_3() { return static_cast<int32_t>(offsetof(ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160, ____endpoint_3)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get__endpoint_3() const { return ____endpoint_3; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of__endpoint_3() { return &____endpoint_3; }
	inline void set__endpoint_3(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		____endpoint_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____endpoint_3), (void*)value);
	}
};


// DnsClient.LookupClient/<>c
struct U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D_StaticFields
{
public:
	// DnsClient.LookupClient/<>c DnsClient.LookupClient/<>c::<>9
	U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D * ___U3CU3E9_0;
	// System.Action DnsClient.LookupClient/<>c::<>9__101_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__101_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__101_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D_StaticFields, ___U3CU3E9__101_0_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__101_0_1() const { return ___U3CU3E9__101_0_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__101_0_1() { return &___U3CU3E9__101_0_1; }
	inline void set_U3CU3E9__101_0_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__101_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__101_0_1), (void*)value);
	}
};


// DnsClient.LookupClient/<>c__DisplayClass101_0
struct U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF  : public RuntimeObject
{
public:
	// System.Action DnsClient.LookupClient/<>c__DisplayClass101_0::onCancel
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onCancel_0;

public:
	inline static int32_t get_offset_of_onCancel_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF, ___onCancel_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onCancel_0() const { return ___onCancel_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onCancel_0() { return &___onCancel_0; }
	inline void set_onCancel_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onCancel_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCancel_0), (void*)value);
	}
};


// DnsClient.LookupClient/SkipWorker
struct SkipWorker_tD9D2C20328DCE8F86E2B94A5230CCA5EC1FA2E4A  : public RuntimeObject
{
public:
	// System.Action DnsClient.LookupClient/SkipWorker::_worker
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____worker_0;
	// System.Int32 DnsClient.LookupClient/SkipWorker::_skipFor
	int32_t ____skipFor_1;
	// System.Int32 DnsClient.LookupClient/SkipWorker::_lastRun
	int32_t ____lastRun_2;

public:
	inline static int32_t get_offset_of__worker_0() { return static_cast<int32_t>(offsetof(SkipWorker_tD9D2C20328DCE8F86E2B94A5230CCA5EC1FA2E4A, ____worker_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get__worker_0() const { return ____worker_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of__worker_0() { return &____worker_0; }
	inline void set__worker_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		____worker_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____worker_0), (void*)value);
	}

	inline static int32_t get_offset_of__skipFor_1() { return static_cast<int32_t>(offsetof(SkipWorker_tD9D2C20328DCE8F86E2B94A5230CCA5EC1FA2E4A, ____skipFor_1)); }
	inline int32_t get__skipFor_1() const { return ____skipFor_1; }
	inline int32_t* get_address_of__skipFor_1() { return &____skipFor_1; }
	inline void set__skipFor_1(int32_t value)
	{
		____skipFor_1 = value;
	}

	inline static int32_t get_offset_of__lastRun_2() { return static_cast<int32_t>(offsetof(SkipWorker_tD9D2C20328DCE8F86E2B94A5230CCA5EC1FA2E4A, ____lastRun_2)); }
	inline int32_t get__lastRun_2() const { return ____lastRun_2; }
	inline int32_t* get_address_of__lastRun_2() { return &____lastRun_2; }
	inline void set__lastRun_2(int32_t value)
	{
		____lastRun_2 = value;
	}
};


// DnsClient.LookupClientAudit/<>c
struct U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9_StaticFields
{
public:
	// DnsClient.LookupClientAudit/<>c DnsClient.LookupClientAudit/<>c::<>9
	U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9 * ___U3CU3E9_0;
	// System.Func`2<DnsClient.Protocol.DnsResourceRecord,System.Boolean> DnsClient.LookupClientAudit/<>c::<>9__16_0
	Func_2_tBA779DA373D2FF7FBEE1B4A938BEDABDF9EBFD59 * ___U3CU3E9__16_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9_StaticFields, ___U3CU3E9__16_0_1)); }
	inline Func_2_tBA779DA373D2FF7FBEE1B4A938BEDABDF9EBFD59 * get_U3CU3E9__16_0_1() const { return ___U3CU3E9__16_0_1; }
	inline Func_2_tBA779DA373D2FF7FBEE1B4A938BEDABDF9EBFD59 ** get_address_of_U3CU3E9__16_0_1() { return &___U3CU3E9__16_0_1; }
	inline void set_U3CU3E9__16_0_1(Func_2_tBA779DA373D2FF7FBEE1B4A938BEDABDF9EBFD59 * value)
	{
		___U3CU3E9__16_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_0_1), (void*)value);
	}
};


// DnsClient.NameServer/<>c
struct U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A_StaticFields
{
public:
	// DnsClient.NameServer/<>c DnsClient.NameServer/<>c::<>9
	U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A * ___U3CU3E9_0;
	// System.Func`2<System.Net.IPAddress,DnsClient.NameServer> DnsClient.NameServer/<>c::<>9__34_1
	Func_2_t4B7B346AA129E598D4E8BF05B90AF1C5D8CA489B * ___U3CU3E9__34_1_1;
	// System.Func`2<System.Net.NetworkInformation.NetworkInterface,System.Boolean> DnsClient.NameServer/<>c::<>9__35_0
	Func_2_tDB685A1FC7B9C97C7E26443BD550FA47518BCB8B * ___U3CU3E9__35_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A_StaticFields, ___U3CU3E9__34_1_1)); }
	inline Func_2_t4B7B346AA129E598D4E8BF05B90AF1C5D8CA489B * get_U3CU3E9__34_1_1() const { return ___U3CU3E9__34_1_1; }
	inline Func_2_t4B7B346AA129E598D4E8BF05B90AF1C5D8CA489B ** get_address_of_U3CU3E9__34_1_1() { return &___U3CU3E9__34_1_1; }
	inline void set_U3CU3E9__34_1_1(Func_2_t4B7B346AA129E598D4E8BF05B90AF1C5D8CA489B * value)
	{
		___U3CU3E9__34_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__35_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A_StaticFields, ___U3CU3E9__35_0_2)); }
	inline Func_2_tDB685A1FC7B9C97C7E26443BD550FA47518BCB8B * get_U3CU3E9__35_0_2() const { return ___U3CU3E9__35_0_2; }
	inline Func_2_tDB685A1FC7B9C97C7E26443BD550FA47518BCB8B ** get_address_of_U3CU3E9__35_0_2() { return &___U3CU3E9__35_0_2; }
	inline void set_U3CU3E9__35_0_2(Func_2_tDB685A1FC7B9C97C7E26443BD550FA47518BCB8B * value)
	{
		___U3CU3E9__35_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__35_0_2), (void*)value);
	}
};


// DnsClient.NameServer/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t90FA21695146462F09CA94F95C2A3D40106BA631  : public RuntimeObject
{
public:
	// System.Boolean DnsClient.NameServer/<>c__DisplayClass34_0::skipIPv6SiteLocal
	bool ___skipIPv6SiteLocal_0;

public:
	inline static int32_t get_offset_of_skipIPv6SiteLocal_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t90FA21695146462F09CA94F95C2A3D40106BA631, ___skipIPv6SiteLocal_0)); }
	inline bool get_skipIPv6SiteLocal_0() const { return ___skipIPv6SiteLocal_0; }
	inline bool* get_address_of_skipIPv6SiteLocal_0() { return &___skipIPv6SiteLocal_0; }
	inline void set_skipIPv6SiteLocal_0(bool value)
	{
		___skipIPv6SiteLocal_0 = value;
	}
};


// DnsClient.ResponseCache/<>c
struct U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D_StaticFields
{
public:
	// DnsClient.ResponseCache/<>c DnsClient.ResponseCache/<>c::<>9
	U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D * ___U3CU3E9_0;
	// System.Func`2<DnsClient.Protocol.DnsResourceRecord,System.Boolean> DnsClient.ResponseCache/<>c::<>9__25_0
	Func_2_tBA779DA373D2FF7FBEE1B4A938BEDABDF9EBFD59 * ___U3CU3E9__25_0_1;
	// System.Func`2<DnsClient.Protocol.DnsResourceRecord,System.Int32> DnsClient.ResponseCache/<>c::<>9__25_1
	Func_2_tA339043077C4CE3D0CD0B9B39799AB843A779483 * ___U3CU3E9__25_1_2;
	// System.Action`1<System.Object> DnsClient.ResponseCache/<>c::<>9__27_0
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___U3CU3E9__27_0_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D_StaticFields, ___U3CU3E9__25_0_1)); }
	inline Func_2_tBA779DA373D2FF7FBEE1B4A938BEDABDF9EBFD59 * get_U3CU3E9__25_0_1() const { return ___U3CU3E9__25_0_1; }
	inline Func_2_tBA779DA373D2FF7FBEE1B4A938BEDABDF9EBFD59 ** get_address_of_U3CU3E9__25_0_1() { return &___U3CU3E9__25_0_1; }
	inline void set_U3CU3E9__25_0_1(Func_2_tBA779DA373D2FF7FBEE1B4A938BEDABDF9EBFD59 * value)
	{
		___U3CU3E9__25_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D_StaticFields, ___U3CU3E9__25_1_2)); }
	inline Func_2_tA339043077C4CE3D0CD0B9B39799AB843A779483 * get_U3CU3E9__25_1_2() const { return ___U3CU3E9__25_1_2; }
	inline Func_2_tA339043077C4CE3D0CD0B9B39799AB843A779483 ** get_address_of_U3CU3E9__25_1_2() { return &___U3CU3E9__25_1_2; }
	inline void set_U3CU3E9__25_1_2(Func_2_tA339043077C4CE3D0CD0B9B39799AB843A779483 * value)
	{
		___U3CU3E9__25_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__27_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D_StaticFields, ___U3CU3E9__27_0_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_U3CU3E9__27_0_3() const { return ___U3CU3E9__27_0_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_U3CU3E9__27_0_3() { return &___U3CU3E9__27_0_3; }
	inline void set_U3CU3E9__27_0_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___U3CU3E9__27_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__27_0_3), (void*)value);
	}
};


// DnsClient.Tracing/TraceLoggerFactory
struct TraceLoggerFactory_tE000501B11CF1E465B0F7131FD3B5283523A4B8F  : public RuntimeObject
{
public:

public:
};


// DnsClient.Protocol.TxtRecord/<>c
struct U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172_StaticFields
{
public:
	// DnsClient.Protocol.TxtRecord/<>c DnsClient.Protocol.TxtRecord/<>c::<>9
	U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> DnsClient.Protocol.TxtRecord/<>c::<>9__7_0
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___U3CU3E9__7_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}
};


// DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry
struct ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF  : public RuntimeObject
{
public:
	// System.Net.Sockets.TcpClient DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry::<Client>k__BackingField
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___U3CClientU3Ek__BackingField_0;
	// System.Net.IPEndPoint DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry::<Endpoint>k__BackingField
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___U3CEndpointU3Ek__BackingField_1;
	// System.Int32 DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry::<StartMillis>k__BackingField
	int32_t ___U3CStartMillisU3Ek__BackingField_2;
	// System.Int32 DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry::<MaxLiveTime>k__BackingField
	int32_t ___U3CMaxLiveTimeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF, ___U3CClientU3Ek__BackingField_0)); }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * get_U3CClientU3Ek__BackingField_0() const { return ___U3CClientU3Ek__BackingField_0; }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE ** get_address_of_U3CClientU3Ek__BackingField_0() { return &___U3CClientU3Ek__BackingField_0; }
	inline void set_U3CClientU3Ek__BackingField_0(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * value)
	{
		___U3CClientU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEndpointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF, ___U3CEndpointU3Ek__BackingField_1)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_U3CEndpointU3Ek__BackingField_1() const { return ___U3CEndpointU3Ek__BackingField_1; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_U3CEndpointU3Ek__BackingField_1() { return &___U3CEndpointU3Ek__BackingField_1; }
	inline void set_U3CEndpointU3Ek__BackingField_1(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___U3CEndpointU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEndpointU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartMillisU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF, ___U3CStartMillisU3Ek__BackingField_2)); }
	inline int32_t get_U3CStartMillisU3Ek__BackingField_2() const { return ___U3CStartMillisU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStartMillisU3Ek__BackingField_2() { return &___U3CStartMillisU3Ek__BackingField_2; }
	inline void set_U3CStartMillisU3Ek__BackingField_2(int32_t value)
	{
		___U3CStartMillisU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMaxLiveTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF, ___U3CMaxLiveTimeU3Ek__BackingField_3)); }
	inline int32_t get_U3CMaxLiveTimeU3Ek__BackingField_3() const { return ___U3CMaxLiveTimeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CMaxLiveTimeU3Ek__BackingField_3() { return &___U3CMaxLiveTimeU3Ek__BackingField_3; }
	inline void set_U3CMaxLiveTimeU3Ek__BackingField_3(int32_t value)
	{
		___U3CMaxLiveTimeU3Ek__BackingField_3 = value;
	}
};


// DnsClient.Tracing/TraceLoggerFactory/TraceLogger
struct TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F  : public RuntimeObject
{
public:
	// System.String DnsClient.Tracing/TraceLoggerFactory/TraceLogger::_name
	String_t* ____name_0;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<DnsClient.DnsResponseMessage>
struct ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F, ___m_task_0)); }
	inline Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
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

// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E  : public EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___m_Address_0;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_1;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Address_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_m_Address_0() const { return ___m_Address_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___m_Address_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_1() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Port_1)); }
	inline int32_t get_m_Port_1() const { return ___m_Port_1; }
	inline int32_t* get_address_of_m_Port_1() { return &___m_Port_1; }
	inline void set_m_Port_1(int32_t value)
	{
		___m_Port_1 = value;
	}
};

struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___IPv6Any_3;

public:
	inline static int32_t get_offset_of_Any_2() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___Any_2)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_Any_2() const { return ___Any_2; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_Any_2() { return &___Any_2; }
	inline void set_Any_2(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___Any_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_2), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_3() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___IPv6Any_3)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_IPv6Any_3() const { return ___IPv6Any_3; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_IPv6Any_3() { return &___IPv6Any_3; }
	inline void set_IPv6Any_3(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___IPv6Any_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_3), (void*)value);
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


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<DnsClient.IDnsQueryResponse>
struct AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3E14994AB603BD8186E70B8D426FD14DFB507B29 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2, ___m_task_2)); }
	inline Task_1_t3E14994AB603BD8186E70B8D426FD14DFB507B29 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t3E14994AB603BD8186E70B8D426FD14DFB507B29 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t3E14994AB603BD8186E70B8D426FD14DFB507B29 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3E14994AB603BD8186E70B8D426FD14DFB507B29 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t3E14994AB603BD8186E70B8D426FD14DFB507B29 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t3E14994AB603BD8186E70B8D426FD14DFB507B29 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t3E14994AB603BD8186E70B8D426FD14DFB507B29 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry>
struct AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE3958804AC6133A4625A02BF9CC0A3205780D785 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6, ___m_task_2)); }
	inline Task_1_tE3958804AC6133A4625A02BF9CC0A3205780D785 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tE3958804AC6133A4625A02BF9CC0A3205780D785 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tE3958804AC6133A4625A02BF9CC0A3205780D785 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE3958804AC6133A4625A02BF9CC0A3205780D785 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tE3958804AC6133A4625A02BF9CC0A3205780D785 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tE3958804AC6133A4625A02BF9CC0A3205780D785 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tE3958804AC6133A4625A02BF9CC0A3205780D785 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<DnsClient.DnsResponseMessage>
struct ConfiguredTaskAwaitable_1_t536069738E1EE81F050F5B181584528022FA78D8 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t536069738E1EE81F050F5B181584528022FA78D8, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Net.Sockets.AddressFamily
struct AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_11;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* ___m_linkingRegistrations_12;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_executingCallback_14;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___m_timer_15;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_kernelEvent_3)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kernelEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_registeredCallbacksLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_state_9)); }
	inline int32_t get_m_state_9() const { return ___m_state_9; }
	inline int32_t* get_address_of_m_state_9() { return &___m_state_9; }
	inline void set_m_state_9(int32_t value)
	{
		___m_state_9 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_threadIDExecutingCallbacks_10)); }
	inline int32_t get_m_threadIDExecutingCallbacks_10() const { return ___m_threadIDExecutingCallbacks_10; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_10() { return &___m_threadIDExecutingCallbacks_10; }
	inline void set_m_threadIDExecutingCallbacks_10(int32_t value)
	{
		___m_threadIDExecutingCallbacks_10 = value;
	}

	inline static int32_t get_offset_of_m_disposed_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_disposed_11)); }
	inline bool get_m_disposed_11() const { return ___m_disposed_11; }
	inline bool* get_address_of_m_disposed_11() { return &___m_disposed_11; }
	inline void set_m_disposed_11(bool value)
	{
		___m_disposed_11 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_linkingRegistrations_12)); }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* get_m_linkingRegistrations_12() const { return ___m_linkingRegistrations_12; }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910** get_address_of_m_linkingRegistrations_12() { return &___m_linkingRegistrations_12; }
	inline void set_m_linkingRegistrations_12(CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* value)
	{
		___m_linkingRegistrations_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkingRegistrations_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_executingCallback_14() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_executingCallback_14)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_executingCallback_14() const { return ___m_executingCallback_14; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_executingCallback_14() { return &___m_executingCallback_14; }
	inline void set_m_executingCallback_14(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_executingCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_executingCallback_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_timer_15() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_timer_15)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get_m_timer_15() const { return ___m_timer_15; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of_m_timer_15() { return &___m_timer_15; }
	inline void set_m_timer_15(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		___m_timer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timer_15), (void*)value);
	}
};

struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_LinkedTokenCancelDelegate_13;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___s_timerCallback_16;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_Set_0), (void*)value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_NotCancelable_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_13() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_LinkedTokenCancelDelegate_13)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_LinkedTokenCancelDelegate_13() const { return ___s_LinkedTokenCancelDelegate_13; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_LinkedTokenCancelDelegate_13() { return &___s_LinkedTokenCancelDelegate_13; }
	inline void set_s_LinkedTokenCancelDelegate_13(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_LinkedTokenCancelDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LinkedTokenCancelDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_timerCallback_16() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_timerCallback_16)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_s_timerCallback_16() const { return ___s_timerCallback_16; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_s_timerCallback_16() { return &___s_timerCallback_16; }
	inline void set_s_timerCallback_16(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___s_timerCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_timerCallback_16), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_com
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com ___m_configuredTaskAwaiter_0;
};

// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
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

// DnsClient.DnsHeaderResponseCode
struct DnsHeaderResponseCode_t96967114A601380EB61A2F3B3C0494F26B195CCA 
{
public:
	// System.Int16 DnsClient.DnsHeaderResponseCode::value__
	int16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DnsHeaderResponseCode_t96967114A601380EB61A2F3B3C0494F26B195CCA, ___value___2)); }
	inline int16_t get_value___2() const { return ___value___2; }
	inline int16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int16_t value)
	{
		___value___2 = value;
	}
};


// DnsClient.DnsMessageHandleType
struct DnsMessageHandleType_tBC2ECE88ABCDB3FCD65C0CE07A42AC466D2AB516 
{
public:
	// System.Int32 DnsClient.DnsMessageHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DnsMessageHandleType_tBC2ECE88ABCDB3FCD65C0CE07A42AC466D2AB516, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DnsClient.DnsResponseCode
struct DnsResponseCode_tEA05F10430FF22595013D922D8CD756CEAA3E497 
{
public:
	// System.Int32 DnsClient.DnsResponseCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DnsResponseCode_tEA05F10430FF22595013D922D8CD756CEAA3E497, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// DnsClient.Internal.LogLevel
struct LogLevel_t49394E34311042FD432484F82BFF6C85D7C015FF 
{
public:
	// System.Int32 DnsClient.Internal.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t49394E34311042FD432484F82BFF6C85D7C015FF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DnsClient.NameServer
struct NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E  : public RuntimeObject
{
public:
	// System.Nullable`1<System.Int32> DnsClient.NameServer::<SupportedUdpPayloadSize>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CSupportedUdpPayloadSizeU3Ek__BackingField_8;
	// System.Net.IPEndPoint DnsClient.NameServer::<IPEndPoint>k__BackingField
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___U3CIPEndPointU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CSupportedUdpPayloadSizeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E, ___U3CSupportedUdpPayloadSizeU3Ek__BackingField_8)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CSupportedUdpPayloadSizeU3Ek__BackingField_8() const { return ___U3CSupportedUdpPayloadSizeU3Ek__BackingField_8; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CSupportedUdpPayloadSizeU3Ek__BackingField_8() { return &___U3CSupportedUdpPayloadSizeU3Ek__BackingField_8; }
	inline void set_U3CSupportedUdpPayloadSizeU3Ek__BackingField_8(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CSupportedUdpPayloadSizeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIPEndPointU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E, ___U3CIPEndPointU3Ek__BackingField_9)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_U3CIPEndPointU3Ek__BackingField_9() const { return ___U3CIPEndPointU3Ek__BackingField_9; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_U3CIPEndPointU3Ek__BackingField_9() { return &___U3CIPEndPointU3Ek__BackingField_9; }
	inline void set_U3CIPEndPointU3Ek__BackingField_9(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___U3CIPEndPointU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CIPEndPointU3Ek__BackingField_9), (void*)value);
	}
};

struct NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_StaticFields
{
public:
	// System.Net.IPEndPoint DnsClient.NameServer::GooglePublicDns
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___GooglePublicDns_0;
	// System.Net.IPEndPoint DnsClient.NameServer::GooglePublicDns2
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___GooglePublicDns2_1;
	// System.Net.IPEndPoint DnsClient.NameServer::GooglePublicDnsIPv6
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___GooglePublicDnsIPv6_2;
	// System.Net.IPEndPoint DnsClient.NameServer::GooglePublicDns2IPv6
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___GooglePublicDns2IPv6_3;
	// System.Net.IPEndPoint DnsClient.NameServer::Cloudflare
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___Cloudflare_4;
	// System.Net.IPEndPoint DnsClient.NameServer::Cloudflare2
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___Cloudflare2_5;
	// System.Net.IPEndPoint DnsClient.NameServer::CloudflareIPv6
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___CloudflareIPv6_6;
	// System.Net.IPEndPoint DnsClient.NameServer::Cloudflare2IPv6
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___Cloudflare2IPv6_7;

public:
	inline static int32_t get_offset_of_GooglePublicDns_0() { return static_cast<int32_t>(offsetof(NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_StaticFields, ___GooglePublicDns_0)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_GooglePublicDns_0() const { return ___GooglePublicDns_0; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_GooglePublicDns_0() { return &___GooglePublicDns_0; }
	inline void set_GooglePublicDns_0(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___GooglePublicDns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GooglePublicDns_0), (void*)value);
	}

	inline static int32_t get_offset_of_GooglePublicDns2_1() { return static_cast<int32_t>(offsetof(NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_StaticFields, ___GooglePublicDns2_1)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_GooglePublicDns2_1() const { return ___GooglePublicDns2_1; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_GooglePublicDns2_1() { return &___GooglePublicDns2_1; }
	inline void set_GooglePublicDns2_1(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___GooglePublicDns2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GooglePublicDns2_1), (void*)value);
	}

	inline static int32_t get_offset_of_GooglePublicDnsIPv6_2() { return static_cast<int32_t>(offsetof(NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_StaticFields, ___GooglePublicDnsIPv6_2)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_GooglePublicDnsIPv6_2() const { return ___GooglePublicDnsIPv6_2; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_GooglePublicDnsIPv6_2() { return &___GooglePublicDnsIPv6_2; }
	inline void set_GooglePublicDnsIPv6_2(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___GooglePublicDnsIPv6_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GooglePublicDnsIPv6_2), (void*)value);
	}

	inline static int32_t get_offset_of_GooglePublicDns2IPv6_3() { return static_cast<int32_t>(offsetof(NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_StaticFields, ___GooglePublicDns2IPv6_3)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_GooglePublicDns2IPv6_3() const { return ___GooglePublicDns2IPv6_3; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_GooglePublicDns2IPv6_3() { return &___GooglePublicDns2IPv6_3; }
	inline void set_GooglePublicDns2IPv6_3(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___GooglePublicDns2IPv6_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GooglePublicDns2IPv6_3), (void*)value);
	}

	inline static int32_t get_offset_of_Cloudflare_4() { return static_cast<int32_t>(offsetof(NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_StaticFields, ___Cloudflare_4)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_Cloudflare_4() const { return ___Cloudflare_4; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_Cloudflare_4() { return &___Cloudflare_4; }
	inline void set_Cloudflare_4(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___Cloudflare_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cloudflare_4), (void*)value);
	}

	inline static int32_t get_offset_of_Cloudflare2_5() { return static_cast<int32_t>(offsetof(NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_StaticFields, ___Cloudflare2_5)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_Cloudflare2_5() const { return ___Cloudflare2_5; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_Cloudflare2_5() { return &___Cloudflare2_5; }
	inline void set_Cloudflare2_5(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___Cloudflare2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cloudflare2_5), (void*)value);
	}

	inline static int32_t get_offset_of_CloudflareIPv6_6() { return static_cast<int32_t>(offsetof(NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_StaticFields, ___CloudflareIPv6_6)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_CloudflareIPv6_6() const { return ___CloudflareIPv6_6; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_CloudflareIPv6_6() { return &___CloudflareIPv6_6; }
	inline void set_CloudflareIPv6_6(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___CloudflareIPv6_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CloudflareIPv6_6), (void*)value);
	}

	inline static int32_t get_offset_of_Cloudflare2IPv6_7() { return static_cast<int32_t>(offsetof(NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_StaticFields, ___Cloudflare2IPv6_7)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_Cloudflare2IPv6_7() const { return ___Cloudflare2IPv6_7; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_Cloudflare2IPv6_7() { return &___Cloudflare2IPv6_7; }
	inline void set_Cloudflare2IPv6_7(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___Cloudflare2IPv6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cloudflare2IPv6_7), (void*)value);
	}
};


// System.Net.NetworkInformation.NetworkInterfaceType
struct NetworkInterfaceType_t9E0B7B4B57991C57AA4C3972434A69B956396F74 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkInterfaceType_t9E0B7B4B57991C57AA4C3972434A69B956396F74, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.NetworkInformation.OperationalStatus
struct OperationalStatus_t42068F42C093E9D43B005B395CA86028F1A85F8A 
{
public:
	// System.Int32 System.Net.NetworkInformation.OperationalStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperationalStatus_t42068F42C093E9D43B005B395CA86028F1A85F8A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DnsClient.QueryClass
struct QueryClass_t5981BCFC32C49A7F21358E9D85417A18708827B8 
{
public:
	// System.Int16 DnsClient.QueryClass::value__
	int16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryClass_t5981BCFC32C49A7F21358E9D85417A18708827B8, ___value___2)); }
	inline int16_t get_value___2() const { return ___value___2; }
	inline int16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int16_t value)
	{
		___value___2 = value;
	}
};


// DnsClient.QueryType
struct QueryType_t44D54CC2BB45B7C5B1698CFF143763A3C0090C75 
{
public:
	// System.Int16 DnsClient.QueryType::value__
	int16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryType_t44D54CC2BB45B7C5B1698CFF143763A3C0090C75, ___value___2)); }
	inline int16_t get_value___2() const { return ___value___2; }
	inline int16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int16_t value)
	{
		___value___2 = value;
	}
};


// DnsClient.Protocol.ResourceRecordType
struct ResourceRecordType_t188EE78B1BFFEEFB0815C8C6D1CE395F73DF7773 
{
public:
	// System.Int16 DnsClient.Protocol.ResourceRecordType::value__
	int16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResourceRecordType_t188EE78B1BFFEEFB0815C8C6D1CE395F73DF7773, ___value___2)); }
	inline int16_t get_value___2() const { return ___value___2; }
	inline int16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int16_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.SourceLevels
struct SourceLevels_tB265F8EBCEEA8A95CB44C066DF8026F3D21C332C 
{
public:
	// System.Int32 System.Diagnostics.SourceLevels::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SourceLevels_tB265F8EBCEEA8A95CB44C066DF8026F3D21C332C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Switch
struct Switch_t058E484440C26BA04C7B500114EAD6E5951E09BC  : public RuntimeObject
{
public:
	// System.Object System.Diagnostics.Switch::switchSettings
	RuntimeObject * ___switchSettings_0;
	// System.String System.Diagnostics.Switch::description
	String_t* ___description_1;
	// System.String System.Diagnostics.Switch::displayName
	String_t* ___displayName_2;
	// System.Int32 System.Diagnostics.Switch::switchSetting
	int32_t ___switchSetting_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Switch::initialized
	bool ___initialized_4;
	// System.Boolean System.Diagnostics.Switch::initializing
	bool ___initializing_5;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Switch::switchValueString
	String_t* ___switchValueString_6;
	// System.String System.Diagnostics.Switch::defaultValue
	String_t* ___defaultValue_7;
	// System.Object System.Diagnostics.Switch::m_intializedLock
	RuntimeObject * ___m_intializedLock_8;

public:
	inline static int32_t get_offset_of_switchSettings_0() { return static_cast<int32_t>(offsetof(Switch_t058E484440C26BA04C7B500114EAD6E5951E09BC, ___switchSettings_0)); }
	inline RuntimeObject * get_switchSettings_0() const { return ___switchSettings_0; }
	inline RuntimeObject ** get_address_of_switchSettings_0() { return &___switchSettings_0; }
	inline void set_switchSettings_0(RuntimeObject * value)
	{
		___switchSettings_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___switchSettings_0), (void*)value);
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(Switch_t058E484440C26BA04C7B500114EAD6E5951E09BC, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_displayName_2() { return static_cast<int32_t>(offsetof(Switch_t058E484440C26BA04C7B500114EAD6E5951E09BC, ___displayName_2)); }
	inline String_t* get_displayName_2() const { return ___displayName_2; }
	inline String_t** get_address_of_displayName_2() { return &___displayName_2; }
	inline void set_displayName_2(String_t* value)
	{
		___displayName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayName_2), (void*)value);
	}

	inline static int32_t get_offset_of_switchSetting_3() { return static_cast<int32_t>(offsetof(Switch_t058E484440C26BA04C7B500114EAD6E5951E09BC, ___switchSetting_3)); }
	inline int32_t get_switchSetting_3() const { return ___switchSetting_3; }
	inline int32_t* get_address_of_switchSetting_3() { return &___switchSetting_3; }
	inline void set_switchSetting_3(int32_t value)
	{
		___switchSetting_3 = value;
	}

	inline static int32_t get_offset_of_initialized_4() { return static_cast<int32_t>(offsetof(Switch_t058E484440C26BA04C7B500114EAD6E5951E09BC, ___initialized_4)); }
	inline bool get_initialized_4() const { return ___initialized_4; }
	inline bool* get_address_of_initialized_4() { return &___initialized_4; }
	inline void set_initialized_4(bool value)
	{
		___initialized_4 = value;
	}

	inline static int32_t get_offset_of_initializing_5() { return static_cast<int32_t>(offsetof(Switch_t058E484440C26BA04C7B500114EAD6E5951E09BC, ___initializing_5)); }
	inline bool get_initializing_5() const { return ___initializing_5; }
	inline bool* get_address_of_initializing_5() { return &___initializing_5; }
	inline void set_initializing_5(bool value)
	{
		___initializing_5 = value;
	}

	inline static int32_t get_offset_of_switchValueString_6() { return static_cast<int32_t>(offsetof(Switch_t058E484440C26BA04C7B500114EAD6E5951E09BC, ___switchValueString_6)); }
	inline String_t* get_switchValueString_6() const { return ___switchValueString_6; }
	inline String_t** get_address_of_switchValueString_6() { return &___switchValueString_6; }
	inline void set_switchValueString_6(String_t* value)
	{
		___switchValueString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___switchValueString_6), (void*)value);
	}

	inline static int32_t get_offset_of_defaultValue_7() { return static_cast<int32_t>(offsetof(Switch_t058E484440C26BA04C7B500114EAD6E5951E09BC, ___defaultValue_7)); }
	inline String_t* get_defaultValue_7() const { return ___defaultValue_7; }
	inline String_t** get_address_of_defaultValue_7() { return &___defaultValue_7; }
	inline void set_defaultValue_7(String_t* value)
	{
		___defaultValue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultValue_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_intializedLock_8() { return static_cast<int32_t>(offsetof(Switch_t058E484440C26BA04C7B500114EAD6E5951E09BC, ___m_intializedLock_8)); }
	inline RuntimeObject * get_m_intializedLock_8() const { return ___m_intializedLock_8; }
	inline RuntimeObject ** get_address_of_m_intializedLock_8() { return &___m_intializedLock_8; }
	inline void set_m_intializedLock_8(RuntimeObject * value)
	{
		___m_intializedLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_intializedLock_8), (void*)value);
	}
};

struct Switch_t058E484440C26BA04C7B500114EAD6E5951E09BC_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.WeakReference> System.Diagnostics.Switch::switches
	List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * ___switches_9;
	// System.Int32 System.Diagnostics.Switch::s_LastCollectionCount
	int32_t ___s_LastCollectionCount_10;

public:
	inline static int32_t get_offset_of_switches_9() { return static_cast<int32_t>(offsetof(Switch_t058E484440C26BA04C7B500114EAD6E5951E09BC_StaticFields, ___switches_9)); }
	inline List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * get_switches_9() const { return ___switches_9; }
	inline List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 ** get_address_of_switches_9() { return &___switches_9; }
	inline void set_switches_9(List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * value)
	{
		___switches_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___switches_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_LastCollectionCount_10() { return static_cast<int32_t>(offsetof(Switch_t058E484440C26BA04C7B500114EAD6E5951E09BC_StaticFields, ___s_LastCollectionCount_10)); }
	inline int32_t get_s_LastCollectionCount_10() const { return ___s_LastCollectionCount_10; }
	inline int32_t* get_address_of_s_LastCollectionCount_10() { return &___s_LastCollectionCount_10; }
	inline void set_s_LastCollectionCount_10(int32_t value)
	{
		___s_LastCollectionCount_10 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.Diagnostics.TraceEventType
struct TraceEventType_t408E2DD6BDE793C1B2262282C676165875E87587 
{
public:
	// System.Int32 System.Diagnostics.TraceEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TraceEventType_t408E2DD6BDE793C1B2262282C676165875E87587, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DnsClient.LookupClient/HandleError
struct HandleError_tCC6844F77FD5CEE21581695D78E9EA9252833874 
{
public:
	// System.Int32 DnsClient.LookupClient/HandleError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandleError_tCC6844F77FD5CEE21581695D78E9EA9252833874, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___value_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_value_0() const { return ___value_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Threading.Tasks.Task`1<DnsClient.DnsResponseMessage>
struct Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700, ___m_result_40)); }
	inline DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9 * get_m_result_40() const { return ___m_result_40; }
	inline DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t80B1CE3B7C61CC44AE31FDDF39C5A0FA1FC3A636 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t6C19F4CA0481B0A580CDCE0521331661E692F111 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t80B1CE3B7C61CC44AE31FDDF39C5A0FA1FC3A636 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t80B1CE3B7C61CC44AE31FDDF39C5A0FA1FC3A636 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t80B1CE3B7C61CC44AE31FDDF39C5A0FA1FC3A636 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t6C19F4CA0481B0A580CDCE0521331661E692F111 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t6C19F4CA0481B0A580CDCE0521331661E692F111 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t6C19F4CA0481B0A580CDCE0521331661E692F111 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// DnsClient.DnsQuerySettings
struct DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D  : public RuntimeObject
{
public:
	// System.Boolean DnsClient.DnsQuerySettings::<EnableAuditTrail>k__BackingField
	bool ___U3CEnableAuditTrailU3Ek__BackingField_0;
	// System.Boolean DnsClient.DnsQuerySettings::<UseCache>k__BackingField
	bool ___U3CUseCacheU3Ek__BackingField_1;
	// System.Boolean DnsClient.DnsQuerySettings::<Recursion>k__BackingField
	bool ___U3CRecursionU3Ek__BackingField_2;
	// System.Int32 DnsClient.DnsQuerySettings::<Retries>k__BackingField
	int32_t ___U3CRetriesU3Ek__BackingField_3;
	// System.Boolean DnsClient.DnsQuerySettings::<ThrowDnsErrors>k__BackingField
	bool ___U3CThrowDnsErrorsU3Ek__BackingField_4;
	// System.Boolean DnsClient.DnsQuerySettings::<UseRandomNameServer>k__BackingField
	bool ___U3CUseRandomNameServerU3Ek__BackingField_5;
	// System.Boolean DnsClient.DnsQuerySettings::<ContinueOnDnsError>k__BackingField
	bool ___U3CContinueOnDnsErrorU3Ek__BackingField_6;
	// System.Boolean DnsClient.DnsQuerySettings::<ContinueOnEmptyResponse>k__BackingField
	bool ___U3CContinueOnEmptyResponseU3Ek__BackingField_7;
	// System.TimeSpan DnsClient.DnsQuerySettings::<Timeout>k__BackingField
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___U3CTimeoutU3Ek__BackingField_8;
	// System.Boolean DnsClient.DnsQuerySettings::<UseTcpFallback>k__BackingField
	bool ___U3CUseTcpFallbackU3Ek__BackingField_9;
	// System.Boolean DnsClient.DnsQuerySettings::<UseTcpOnly>k__BackingField
	bool ___U3CUseTcpOnlyU3Ek__BackingField_10;
	// System.Int32 DnsClient.DnsQuerySettings::<ExtendedDnsBufferSize>k__BackingField
	int32_t ___U3CExtendedDnsBufferSizeU3Ek__BackingField_11;
	// System.Boolean DnsClient.DnsQuerySettings::<RequestDnsSecRecords>k__BackingField
	bool ___U3CRequestDnsSecRecordsU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CEnableAuditTrailU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D, ___U3CEnableAuditTrailU3Ek__BackingField_0)); }
	inline bool get_U3CEnableAuditTrailU3Ek__BackingField_0() const { return ___U3CEnableAuditTrailU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CEnableAuditTrailU3Ek__BackingField_0() { return &___U3CEnableAuditTrailU3Ek__BackingField_0; }
	inline void set_U3CEnableAuditTrailU3Ek__BackingField_0(bool value)
	{
		___U3CEnableAuditTrailU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CUseCacheU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D, ___U3CUseCacheU3Ek__BackingField_1)); }
	inline bool get_U3CUseCacheU3Ek__BackingField_1() const { return ___U3CUseCacheU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CUseCacheU3Ek__BackingField_1() { return &___U3CUseCacheU3Ek__BackingField_1; }
	inline void set_U3CUseCacheU3Ek__BackingField_1(bool value)
	{
		___U3CUseCacheU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CRecursionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D, ___U3CRecursionU3Ek__BackingField_2)); }
	inline bool get_U3CRecursionU3Ek__BackingField_2() const { return ___U3CRecursionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CRecursionU3Ek__BackingField_2() { return &___U3CRecursionU3Ek__BackingField_2; }
	inline void set_U3CRecursionU3Ek__BackingField_2(bool value)
	{
		___U3CRecursionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRetriesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D, ___U3CRetriesU3Ek__BackingField_3)); }
	inline int32_t get_U3CRetriesU3Ek__BackingField_3() const { return ___U3CRetriesU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CRetriesU3Ek__BackingField_3() { return &___U3CRetriesU3Ek__BackingField_3; }
	inline void set_U3CRetriesU3Ek__BackingField_3(int32_t value)
	{
		___U3CRetriesU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CThrowDnsErrorsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D, ___U3CThrowDnsErrorsU3Ek__BackingField_4)); }
	inline bool get_U3CThrowDnsErrorsU3Ek__BackingField_4() const { return ___U3CThrowDnsErrorsU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CThrowDnsErrorsU3Ek__BackingField_4() { return &___U3CThrowDnsErrorsU3Ek__BackingField_4; }
	inline void set_U3CThrowDnsErrorsU3Ek__BackingField_4(bool value)
	{
		___U3CThrowDnsErrorsU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CUseRandomNameServerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D, ___U3CUseRandomNameServerU3Ek__BackingField_5)); }
	inline bool get_U3CUseRandomNameServerU3Ek__BackingField_5() const { return ___U3CUseRandomNameServerU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CUseRandomNameServerU3Ek__BackingField_5() { return &___U3CUseRandomNameServerU3Ek__BackingField_5; }
	inline void set_U3CUseRandomNameServerU3Ek__BackingField_5(bool value)
	{
		___U3CUseRandomNameServerU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CContinueOnDnsErrorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D, ___U3CContinueOnDnsErrorU3Ek__BackingField_6)); }
	inline bool get_U3CContinueOnDnsErrorU3Ek__BackingField_6() const { return ___U3CContinueOnDnsErrorU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CContinueOnDnsErrorU3Ek__BackingField_6() { return &___U3CContinueOnDnsErrorU3Ek__BackingField_6; }
	inline void set_U3CContinueOnDnsErrorU3Ek__BackingField_6(bool value)
	{
		___U3CContinueOnDnsErrorU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CContinueOnEmptyResponseU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D, ___U3CContinueOnEmptyResponseU3Ek__BackingField_7)); }
	inline bool get_U3CContinueOnEmptyResponseU3Ek__BackingField_7() const { return ___U3CContinueOnEmptyResponseU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CContinueOnEmptyResponseU3Ek__BackingField_7() { return &___U3CContinueOnEmptyResponseU3Ek__BackingField_7; }
	inline void set_U3CContinueOnEmptyResponseU3Ek__BackingField_7(bool value)
	{
		___U3CContinueOnEmptyResponseU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CTimeoutU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D, ___U3CTimeoutU3Ek__BackingField_8)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_U3CTimeoutU3Ek__BackingField_8() const { return ___U3CTimeoutU3Ek__BackingField_8; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_U3CTimeoutU3Ek__BackingField_8() { return &___U3CTimeoutU3Ek__BackingField_8; }
	inline void set_U3CTimeoutU3Ek__BackingField_8(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___U3CTimeoutU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CUseTcpFallbackU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D, ___U3CUseTcpFallbackU3Ek__BackingField_9)); }
	inline bool get_U3CUseTcpFallbackU3Ek__BackingField_9() const { return ___U3CUseTcpFallbackU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CUseTcpFallbackU3Ek__BackingField_9() { return &___U3CUseTcpFallbackU3Ek__BackingField_9; }
	inline void set_U3CUseTcpFallbackU3Ek__BackingField_9(bool value)
	{
		___U3CUseTcpFallbackU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUseTcpOnlyU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D, ___U3CUseTcpOnlyU3Ek__BackingField_10)); }
	inline bool get_U3CUseTcpOnlyU3Ek__BackingField_10() const { return ___U3CUseTcpOnlyU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CUseTcpOnlyU3Ek__BackingField_10() { return &___U3CUseTcpOnlyU3Ek__BackingField_10; }
	inline void set_U3CUseTcpOnlyU3Ek__BackingField_10(bool value)
	{
		___U3CUseTcpOnlyU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CExtendedDnsBufferSizeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D, ___U3CExtendedDnsBufferSizeU3Ek__BackingField_11)); }
	inline int32_t get_U3CExtendedDnsBufferSizeU3Ek__BackingField_11() const { return ___U3CExtendedDnsBufferSizeU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CExtendedDnsBufferSizeU3Ek__BackingField_11() { return &___U3CExtendedDnsBufferSizeU3Ek__BackingField_11; }
	inline void set_U3CExtendedDnsBufferSizeU3Ek__BackingField_11(int32_t value)
	{
		___U3CExtendedDnsBufferSizeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CRequestDnsSecRecordsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D, ___U3CRequestDnsSecRecordsU3Ek__BackingField_12)); }
	inline bool get_U3CRequestDnsSecRecordsU3Ek__BackingField_12() const { return ___U3CRequestDnsSecRecordsU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CRequestDnsSecRecordsU3Ek__BackingField_12() { return &___U3CRequestDnsSecRecordsU3Ek__BackingField_12; }
	inline void set_U3CRequestDnsSecRecordsU3Ek__BackingField_12(bool value)
	{
		___U3CRequestDnsSecRecordsU3Ek__BackingField_12 = value;
	}
};


// DnsClient.DnsQuestion
struct DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B  : public RuntimeObject
{
public:
	// DnsClient.DnsString DnsClient.DnsQuestion::<QueryName>k__BackingField
	DnsString_t110D8E0C678AFD69CD20290C1FCC446BD032B740 * ___U3CQueryNameU3Ek__BackingField_0;
	// DnsClient.QueryClass DnsClient.DnsQuestion::<QuestionClass>k__BackingField
	int16_t ___U3CQuestionClassU3Ek__BackingField_1;
	// DnsClient.QueryType DnsClient.DnsQuestion::<QuestionType>k__BackingField
	int16_t ___U3CQuestionTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CQueryNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B, ___U3CQueryNameU3Ek__BackingField_0)); }
	inline DnsString_t110D8E0C678AFD69CD20290C1FCC446BD032B740 * get_U3CQueryNameU3Ek__BackingField_0() const { return ___U3CQueryNameU3Ek__BackingField_0; }
	inline DnsString_t110D8E0C678AFD69CD20290C1FCC446BD032B740 ** get_address_of_U3CQueryNameU3Ek__BackingField_0() { return &___U3CQueryNameU3Ek__BackingField_0; }
	inline void set_U3CQueryNameU3Ek__BackingField_0(DnsString_t110D8E0C678AFD69CD20290C1FCC446BD032B740 * value)
	{
		___U3CQueryNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CQueryNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CQuestionClassU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B, ___U3CQuestionClassU3Ek__BackingField_1)); }
	inline int16_t get_U3CQuestionClassU3Ek__BackingField_1() const { return ___U3CQuestionClassU3Ek__BackingField_1; }
	inline int16_t* get_address_of_U3CQuestionClassU3Ek__BackingField_1() { return &___U3CQuestionClassU3Ek__BackingField_1; }
	inline void set_U3CQuestionClassU3Ek__BackingField_1(int16_t value)
	{
		___U3CQuestionClassU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CQuestionTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B, ___U3CQuestionTypeU3Ek__BackingField_2)); }
	inline int16_t get_U3CQuestionTypeU3Ek__BackingField_2() const { return ___U3CQuestionTypeU3Ek__BackingField_2; }
	inline int16_t* get_address_of_U3CQuestionTypeU3Ek__BackingField_2() { return &___U3CQuestionTypeU3Ek__BackingField_2; }
	inline void set_U3CQuestionTypeU3Ek__BackingField_2(int16_t value)
	{
		___U3CQuestionTypeU3Ek__BackingField_2 = value;
	}
};


// DnsClient.DnsResponseException
struct DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B  : public Exception_t
{
public:
	// DnsClient.DnsResponseCode DnsClient.DnsResponseException::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_17;
	// System.String DnsClient.DnsResponseException::<AuditTrail>k__BackingField
	String_t* ___U3CAuditTrailU3Ek__BackingField_18;
	// System.String DnsClient.DnsResponseException::<DnsError>k__BackingField
	String_t* ___U3CDnsErrorU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B, ___U3CCodeU3Ek__BackingField_17)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_17() const { return ___U3CCodeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_17() { return &___U3CCodeU3Ek__BackingField_17; }
	inline void set_U3CCodeU3Ek__BackingField_17(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CAuditTrailU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B, ___U3CAuditTrailU3Ek__BackingField_18)); }
	inline String_t* get_U3CAuditTrailU3Ek__BackingField_18() const { return ___U3CAuditTrailU3Ek__BackingField_18; }
	inline String_t** get_address_of_U3CAuditTrailU3Ek__BackingField_18() { return &___U3CAuditTrailU3Ek__BackingField_18; }
	inline void set_U3CAuditTrailU3Ek__BackingField_18(String_t* value)
	{
		___U3CAuditTrailU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuditTrailU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDnsErrorU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B, ___U3CDnsErrorU3Ek__BackingField_19)); }
	inline String_t* get_U3CDnsErrorU3Ek__BackingField_19() const { return ___U3CDnsErrorU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CDnsErrorU3Ek__BackingField_19() { return &___U3CDnsErrorU3Ek__BackingField_19; }
	inline void set_U3CDnsErrorU3Ek__BackingField_19(String_t* value)
	{
		___U3CDnsErrorU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDnsErrorU3Ek__BackingField_19), (void*)value);
	}
};


// DnsClient.DnsResponseParseException
struct DnsResponseParseException_t8643D394CC55934F2F34B08A96ED7B727BD451BC  : public Exception_t
{
public:
	// System.Byte[] DnsClient.DnsResponseParseException::<ResponseData>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CResponseDataU3Ek__BackingField_17;
	// System.Int32 DnsClient.DnsResponseParseException::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_18;
	// System.Int32 DnsClient.DnsResponseParseException::<ReadLength>k__BackingField
	int32_t ___U3CReadLengthU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CResponseDataU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(DnsResponseParseException_t8643D394CC55934F2F34B08A96ED7B727BD451BC, ___U3CResponseDataU3Ek__BackingField_17)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CResponseDataU3Ek__BackingField_17() const { return ___U3CResponseDataU3Ek__BackingField_17; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CResponseDataU3Ek__BackingField_17() { return &___U3CResponseDataU3Ek__BackingField_17; }
	inline void set_U3CResponseDataU3Ek__BackingField_17(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CResponseDataU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseDataU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIndexU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(DnsResponseParseException_t8643D394CC55934F2F34B08A96ED7B727BD451BC, ___U3CIndexU3Ek__BackingField_18)); }
	inline int32_t get_U3CIndexU3Ek__BackingField_18() const { return ___U3CIndexU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CIndexU3Ek__BackingField_18() { return &___U3CIndexU3Ek__BackingField_18; }
	inline void set_U3CIndexU3Ek__BackingField_18(int32_t value)
	{
		___U3CIndexU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CReadLengthU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(DnsResponseParseException_t8643D394CC55934F2F34B08A96ED7B727BD451BC, ___U3CReadLengthU3Ek__BackingField_19)); }
	inline int32_t get_U3CReadLengthU3Ek__BackingField_19() const { return ___U3CReadLengthU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CReadLengthU3Ek__BackingField_19() { return &___U3CReadLengthU3Ek__BackingField_19; }
	inline void set_U3CReadLengthU3Ek__BackingField_19(int32_t value)
	{
		___U3CReadLengthU3Ek__BackingField_19 = value;
	}
};

struct DnsResponseParseException_t8643D394CC55934F2F34B08A96ED7B727BD451BC_StaticFields
{
public:
	// System.Func`6<System.Int32,System.Int32,System.Int32,System.String,System.String,System.String> DnsClient.DnsResponseParseException::DefaultMessage
	Func_6_t7698E6100CEDA401C104679DBDCCECE5A40CD606 * ___DefaultMessage_20;

public:
	inline static int32_t get_offset_of_DefaultMessage_20() { return static_cast<int32_t>(offsetof(DnsResponseParseException_t8643D394CC55934F2F34B08A96ED7B727BD451BC_StaticFields, ___DefaultMessage_20)); }
	inline Func_6_t7698E6100CEDA401C104679DBDCCECE5A40CD606 * get_DefaultMessage_20() const { return ___DefaultMessage_20; }
	inline Func_6_t7698E6100CEDA401C104679DBDCCECE5A40CD606 ** get_address_of_DefaultMessage_20() { return &___DefaultMessage_20; }
	inline void set_DefaultMessage_20(Func_6_t7698E6100CEDA401C104679DBDCCECE5A40CD606 * value)
	{
		___DefaultMessage_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultMessage_20), (void*)value);
	}
};


// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
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

// DnsClient.Protocol.ResourceRecordInfo
struct ResourceRecordInfo_tFEB40ADCF4027A6A12E390090A94AB1155F57DEA  : public RuntimeObject
{
public:
	// System.Int32 DnsClient.Protocol.ResourceRecordInfo::_ticks
	int32_t ____ticks_0;
	// DnsClient.DnsString DnsClient.Protocol.ResourceRecordInfo::<DomainName>k__BackingField
	DnsString_t110D8E0C678AFD69CD20290C1FCC446BD032B740 * ___U3CDomainNameU3Ek__BackingField_1;
	// DnsClient.Protocol.ResourceRecordType DnsClient.Protocol.ResourceRecordInfo::<RecordType>k__BackingField
	int16_t ___U3CRecordTypeU3Ek__BackingField_2;
	// DnsClient.QueryClass DnsClient.Protocol.ResourceRecordInfo::<RecordClass>k__BackingField
	int16_t ___U3CRecordClassU3Ek__BackingField_3;
	// System.Int32 DnsClient.Protocol.ResourceRecordInfo::<InitialTimeToLive>k__BackingField
	int32_t ___U3CInitialTimeToLiveU3Ek__BackingField_4;
	// System.Int32 DnsClient.Protocol.ResourceRecordInfo::<RawDataLength>k__BackingField
	int32_t ___U3CRawDataLengthU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__ticks_0() { return static_cast<int32_t>(offsetof(ResourceRecordInfo_tFEB40ADCF4027A6A12E390090A94AB1155F57DEA, ____ticks_0)); }
	inline int32_t get__ticks_0() const { return ____ticks_0; }
	inline int32_t* get_address_of__ticks_0() { return &____ticks_0; }
	inline void set__ticks_0(int32_t value)
	{
		____ticks_0 = value;
	}

	inline static int32_t get_offset_of_U3CDomainNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ResourceRecordInfo_tFEB40ADCF4027A6A12E390090A94AB1155F57DEA, ___U3CDomainNameU3Ek__BackingField_1)); }
	inline DnsString_t110D8E0C678AFD69CD20290C1FCC446BD032B740 * get_U3CDomainNameU3Ek__BackingField_1() const { return ___U3CDomainNameU3Ek__BackingField_1; }
	inline DnsString_t110D8E0C678AFD69CD20290C1FCC446BD032B740 ** get_address_of_U3CDomainNameU3Ek__BackingField_1() { return &___U3CDomainNameU3Ek__BackingField_1; }
	inline void set_U3CDomainNameU3Ek__BackingField_1(DnsString_t110D8E0C678AFD69CD20290C1FCC446BD032B740 * value)
	{
		___U3CDomainNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDomainNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRecordTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ResourceRecordInfo_tFEB40ADCF4027A6A12E390090A94AB1155F57DEA, ___U3CRecordTypeU3Ek__BackingField_2)); }
	inline int16_t get_U3CRecordTypeU3Ek__BackingField_2() const { return ___U3CRecordTypeU3Ek__BackingField_2; }
	inline int16_t* get_address_of_U3CRecordTypeU3Ek__BackingField_2() { return &___U3CRecordTypeU3Ek__BackingField_2; }
	inline void set_U3CRecordTypeU3Ek__BackingField_2(int16_t value)
	{
		___U3CRecordTypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CRecordClassU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ResourceRecordInfo_tFEB40ADCF4027A6A12E390090A94AB1155F57DEA, ___U3CRecordClassU3Ek__BackingField_3)); }
	inline int16_t get_U3CRecordClassU3Ek__BackingField_3() const { return ___U3CRecordClassU3Ek__BackingField_3; }
	inline int16_t* get_address_of_U3CRecordClassU3Ek__BackingField_3() { return &___U3CRecordClassU3Ek__BackingField_3; }
	inline void set_U3CRecordClassU3Ek__BackingField_3(int16_t value)
	{
		___U3CRecordClassU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CInitialTimeToLiveU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ResourceRecordInfo_tFEB40ADCF4027A6A12E390090A94AB1155F57DEA, ___U3CInitialTimeToLiveU3Ek__BackingField_4)); }
	inline int32_t get_U3CInitialTimeToLiveU3Ek__BackingField_4() const { return ___U3CInitialTimeToLiveU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CInitialTimeToLiveU3Ek__BackingField_4() { return &___U3CInitialTimeToLiveU3Ek__BackingField_4; }
	inline void set_U3CInitialTimeToLiveU3Ek__BackingField_4(int32_t value)
	{
		___U3CInitialTimeToLiveU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CRawDataLengthU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ResourceRecordInfo_tFEB40ADCF4027A6A12E390090A94AB1155F57DEA, ___U3CRawDataLengthU3Ek__BackingField_5)); }
	inline int32_t get_U3CRawDataLengthU3Ek__BackingField_5() const { return ___U3CRawDataLengthU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CRawDataLengthU3Ek__BackingField_5() { return &___U3CRawDataLengthU3Ek__BackingField_5; }
	inline void set_U3CRawDataLengthU3Ek__BackingField_5(int32_t value)
	{
		___U3CRawDataLengthU3Ek__BackingField_5 = value;
	}
};


// System.Diagnostics.SourceSwitch
struct SourceSwitch_tC1DEE6F688A13847CC249DEADD07D00178DE9ADC  : public Switch_t058E484440C26BA04C7B500114EAD6E5951E09BC
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Net.Sockets.TcpClient
struct TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_ClientSocket_0)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_DataStream_2() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_DataStream_2)); }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * get_m_DataStream_2() const { return ___m_DataStream_2; }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 ** get_address_of_m_DataStream_2() { return &___m_DataStream_2; }
	inline void set_m_DataStream_2(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * value)
	{
		___m_DataStream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DataStream_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}
};


// System.Threading.Timeout
struct Timeout_t1D83B13AB177AA6C3028AA49BDFBA6EE7E142050  : public RuntimeObject
{
public:

public:
};

struct Timeout_t1D83B13AB177AA6C3028AA49BDFBA6EE7E142050_StaticFields
{
public:
	// System.TimeSpan System.Threading.Timeout::InfiniteTimeSpan
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___InfiniteTimeSpan_0;

public:
	inline static int32_t get_offset_of_InfiniteTimeSpan_0() { return static_cast<int32_t>(offsetof(Timeout_t1D83B13AB177AA6C3028AA49BDFBA6EE7E142050_StaticFields, ___InfiniteTimeSpan_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_InfiniteTimeSpan_0() const { return ___InfiniteTimeSpan_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_InfiniteTimeSpan_0() { return &___InfiniteTimeSpan_0; }
	inline void set_InfiniteTimeSpan_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___InfiniteTimeSpan_0 = value;
	}
};


// System.Diagnostics.TraceSource
struct TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0  : public RuntimeObject
{
public:
	// System.Diagnostics.SourceSwitch modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceSource::internalSwitch
	SourceSwitch_tC1DEE6F688A13847CC249DEADD07D00178DE9ADC * ___internalSwitch_2;
	// System.Diagnostics.TraceListenerCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceSource::listeners
	TraceListenerCollection_t81B01A2F4F380B9EA2C164F30B3FA2B287DD4126 * ___listeners_3;
	// System.Collections.Specialized.StringDictionary System.Diagnostics.TraceSource::attributes
	StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * ___attributes_4;
	// System.Diagnostics.SourceLevels System.Diagnostics.TraceSource::switchLevel
	int32_t ___switchLevel_5;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceSource::sourceName
	String_t* ___sourceName_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceSource::_initCalled
	bool ____initCalled_7;

public:
	inline static int32_t get_offset_of_internalSwitch_2() { return static_cast<int32_t>(offsetof(TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0, ___internalSwitch_2)); }
	inline SourceSwitch_tC1DEE6F688A13847CC249DEADD07D00178DE9ADC * get_internalSwitch_2() const { return ___internalSwitch_2; }
	inline SourceSwitch_tC1DEE6F688A13847CC249DEADD07D00178DE9ADC ** get_address_of_internalSwitch_2() { return &___internalSwitch_2; }
	inline void set_internalSwitch_2(SourceSwitch_tC1DEE6F688A13847CC249DEADD07D00178DE9ADC * value)
	{
		___internalSwitch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalSwitch_2), (void*)value);
	}

	inline static int32_t get_offset_of_listeners_3() { return static_cast<int32_t>(offsetof(TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0, ___listeners_3)); }
	inline TraceListenerCollection_t81B01A2F4F380B9EA2C164F30B3FA2B287DD4126 * get_listeners_3() const { return ___listeners_3; }
	inline TraceListenerCollection_t81B01A2F4F380B9EA2C164F30B3FA2B287DD4126 ** get_address_of_listeners_3() { return &___listeners_3; }
	inline void set_listeners_3(TraceListenerCollection_t81B01A2F4F380B9EA2C164F30B3FA2B287DD4126 * value)
	{
		___listeners_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listeners_3), (void*)value);
	}

	inline static int32_t get_offset_of_attributes_4() { return static_cast<int32_t>(offsetof(TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0, ___attributes_4)); }
	inline StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * get_attributes_4() const { return ___attributes_4; }
	inline StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 ** get_address_of_attributes_4() { return &___attributes_4; }
	inline void set_attributes_4(StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * value)
	{
		___attributes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributes_4), (void*)value);
	}

	inline static int32_t get_offset_of_switchLevel_5() { return static_cast<int32_t>(offsetof(TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0, ___switchLevel_5)); }
	inline int32_t get_switchLevel_5() const { return ___switchLevel_5; }
	inline int32_t* get_address_of_switchLevel_5() { return &___switchLevel_5; }
	inline void set_switchLevel_5(int32_t value)
	{
		___switchLevel_5 = value;
	}

	inline static int32_t get_offset_of_sourceName_6() { return static_cast<int32_t>(offsetof(TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0, ___sourceName_6)); }
	inline String_t* get_sourceName_6() const { return ___sourceName_6; }
	inline String_t** get_address_of_sourceName_6() { return &___sourceName_6; }
	inline void set_sourceName_6(String_t* value)
	{
		___sourceName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceName_6), (void*)value);
	}

	inline static int32_t get_offset_of__initCalled_7() { return static_cast<int32_t>(offsetof(TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0, ____initCalled_7)); }
	inline bool get__initCalled_7() const { return ____initCalled_7; }
	inline bool* get_address_of__initCalled_7() { return &____initCalled_7; }
	inline void set__initCalled_7(bool value)
	{
		____initCalled_7 = value;
	}
};

struct TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.WeakReference> System.Diagnostics.TraceSource::tracesources
	List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * ___tracesources_0;
	// System.Int32 System.Diagnostics.TraceSource::s_LastCollectionCount
	int32_t ___s_LastCollectionCount_1;

public:
	inline static int32_t get_offset_of_tracesources_0() { return static_cast<int32_t>(offsetof(TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0_StaticFields, ___tracesources_0)); }
	inline List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * get_tracesources_0() const { return ___tracesources_0; }
	inline List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 ** get_address_of_tracesources_0() { return &___tracesources_0; }
	inline void set_tracesources_0(List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * value)
	{
		___tracesources_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tracesources_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_LastCollectionCount_1() { return static_cast<int32_t>(offsetof(TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0_StaticFields, ___s_LastCollectionCount_1)); }
	inline int32_t get_s_LastCollectionCount_1() const { return ___s_LastCollectionCount_1; }
	inline int32_t* get_address_of_s_LastCollectionCount_1() { return &___s_LastCollectionCount_1; }
	inline void set_s_LastCollectionCount_1(int32_t value)
	{
		___s_LastCollectionCount_1 = value;
	}
};


// DnsClient.LookupClient/<ResolveQueryAsync>d__101
struct U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1 
{
public:
	// System.Int32 DnsClient.LookupClient/<ResolveQueryAsync>d__101::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<DnsClient.IDnsQueryResponse> DnsClient.LookupClient/<ResolveQueryAsync>d__101::<>t__builder
	AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2  ___U3CU3Et__builder_1;
	// DnsClient.DnsMessageHandler DnsClient.LookupClient/<ResolveQueryAsync>d__101::handler
	DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * ___handler_2;
	// DnsClient.DnsRequestMessage DnsClient.LookupClient/<ResolveQueryAsync>d__101::request
	DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * ___request_3;
	// System.Collections.Generic.IReadOnlyList`1<DnsClient.NameServer> DnsClient.LookupClient/<ResolveQueryAsync>d__101::servers
	RuntimeObject* ___servers_4;
	// DnsClient.DnsQuerySettings DnsClient.LookupClient/<ResolveQueryAsync>d__101::settings
	DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * ___settings_5;
	// DnsClient.LookupClientAudit DnsClient.LookupClient/<ResolveQueryAsync>d__101::audit
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * ___audit_6;
	// DnsClient.LookupClient DnsClient.LookupClient/<ResolveQueryAsync>d__101::<>4__this
	LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * ___U3CU3E4__this_7;
	// System.Threading.CancellationToken DnsClient.LookupClient/<ResolveQueryAsync>d__101::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_8;
	// System.Int32 DnsClient.LookupClient/<ResolveQueryAsync>d__101::<serverIndex>5__2
	int32_t ___U3CserverIndexU3E5__2_9;
	// DnsClient.NameServer DnsClient.LookupClient/<ResolveQueryAsync>d__101::<serverInfo>5__3
	NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * ___U3CserverInfoU3E5__3_10;
	// System.Boolean DnsClient.LookupClient/<ResolveQueryAsync>d__101::<isLastServer>5__4
	bool ___U3CisLastServerU3E5__4_11;
	// System.String DnsClient.LookupClient/<ResolveQueryAsync>d__101::<cacheKey>5__5
	String_t* ___U3CcacheKeyU3E5__5_12;
	// System.Int32 DnsClient.LookupClient/<ResolveQueryAsync>d__101::<tries>5__6
	int32_t ___U3CtriesU3E5__6_13;
	// System.Boolean DnsClient.LookupClient/<ResolveQueryAsync>d__101::<isLastTry>5__7
	bool ___U3CisLastTryU3E5__7_14;
	// DnsClient.IDnsQueryResponse DnsClient.LookupClient/<ResolveQueryAsync>d__101::<lastQueryResponse>5__8
	RuntimeObject* ___U3ClastQueryResponseU3E5__8_15;
	// System.Threading.CancellationTokenSource DnsClient.LookupClient/<ResolveQueryAsync>d__101::<>7__wrap8
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___U3CU3E7__wrap8_16;
	// System.Threading.CancellationTokenSource DnsClient.LookupClient/<ResolveQueryAsync>d__101::<>7__wrap9
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___U3CU3E7__wrap9_17;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<DnsClient.DnsResponseMessage> DnsClient.LookupClient/<ResolveQueryAsync>d__101::<>u__1
	ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  ___U3CU3Eu__1_18;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_handler_2() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___handler_2)); }
	inline DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * get_handler_2() const { return ___handler_2; }
	inline DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 ** get_address_of_handler_2() { return &___handler_2; }
	inline void set_handler_2(DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * value)
	{
		___handler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_2), (void*)value);
	}

	inline static int32_t get_offset_of_request_3() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___request_3)); }
	inline DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * get_request_3() const { return ___request_3; }
	inline DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 ** get_address_of_request_3() { return &___request_3; }
	inline void set_request_3(DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * value)
	{
		___request_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_3), (void*)value);
	}

	inline static int32_t get_offset_of_servers_4() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___servers_4)); }
	inline RuntimeObject* get_servers_4() const { return ___servers_4; }
	inline RuntimeObject** get_address_of_servers_4() { return &___servers_4; }
	inline void set_servers_4(RuntimeObject* value)
	{
		___servers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___servers_4), (void*)value);
	}

	inline static int32_t get_offset_of_settings_5() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___settings_5)); }
	inline DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * get_settings_5() const { return ___settings_5; }
	inline DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D ** get_address_of_settings_5() { return &___settings_5; }
	inline void set_settings_5(DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * value)
	{
		___settings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settings_5), (void*)value);
	}

	inline static int32_t get_offset_of_audit_6() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___audit_6)); }
	inline LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * get_audit_6() const { return ___audit_6; }
	inline LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 ** get_address_of_audit_6() { return &___audit_6; }
	inline void set_audit_6(LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * value)
	{
		___audit_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audit_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_7() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___U3CU3E4__this_7)); }
	inline LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * get_U3CU3E4__this_7() const { return ___U3CU3E4__this_7; }
	inline LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B ** get_address_of_U3CU3E4__this_7() { return &___U3CU3E4__this_7; }
	inline void set_U3CU3E4__this_7(LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * value)
	{
		___U3CU3E4__this_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_7), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_8() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___cancellationToken_8)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_8() const { return ___cancellationToken_8; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_8() { return &___cancellationToken_8; }
	inline void set_cancellationToken_8(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_8))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CserverIndexU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___U3CserverIndexU3E5__2_9)); }
	inline int32_t get_U3CserverIndexU3E5__2_9() const { return ___U3CserverIndexU3E5__2_9; }
	inline int32_t* get_address_of_U3CserverIndexU3E5__2_9() { return &___U3CserverIndexU3E5__2_9; }
	inline void set_U3CserverIndexU3E5__2_9(int32_t value)
	{
		___U3CserverIndexU3E5__2_9 = value;
	}

	inline static int32_t get_offset_of_U3CserverInfoU3E5__3_10() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___U3CserverInfoU3E5__3_10)); }
	inline NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * get_U3CserverInfoU3E5__3_10() const { return ___U3CserverInfoU3E5__3_10; }
	inline NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E ** get_address_of_U3CserverInfoU3E5__3_10() { return &___U3CserverInfoU3E5__3_10; }
	inline void set_U3CserverInfoU3E5__3_10(NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * value)
	{
		___U3CserverInfoU3E5__3_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CserverInfoU3E5__3_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisLastServerU3E5__4_11() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___U3CisLastServerU3E5__4_11)); }
	inline bool get_U3CisLastServerU3E5__4_11() const { return ___U3CisLastServerU3E5__4_11; }
	inline bool* get_address_of_U3CisLastServerU3E5__4_11() { return &___U3CisLastServerU3E5__4_11; }
	inline void set_U3CisLastServerU3E5__4_11(bool value)
	{
		___U3CisLastServerU3E5__4_11 = value;
	}

	inline static int32_t get_offset_of_U3CcacheKeyU3E5__5_12() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___U3CcacheKeyU3E5__5_12)); }
	inline String_t* get_U3CcacheKeyU3E5__5_12() const { return ___U3CcacheKeyU3E5__5_12; }
	inline String_t** get_address_of_U3CcacheKeyU3E5__5_12() { return &___U3CcacheKeyU3E5__5_12; }
	inline void set_U3CcacheKeyU3E5__5_12(String_t* value)
	{
		___U3CcacheKeyU3E5__5_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcacheKeyU3E5__5_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtriesU3E5__6_13() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___U3CtriesU3E5__6_13)); }
	inline int32_t get_U3CtriesU3E5__6_13() const { return ___U3CtriesU3E5__6_13; }
	inline int32_t* get_address_of_U3CtriesU3E5__6_13() { return &___U3CtriesU3E5__6_13; }
	inline void set_U3CtriesU3E5__6_13(int32_t value)
	{
		___U3CtriesU3E5__6_13 = value;
	}

	inline static int32_t get_offset_of_U3CisLastTryU3E5__7_14() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___U3CisLastTryU3E5__7_14)); }
	inline bool get_U3CisLastTryU3E5__7_14() const { return ___U3CisLastTryU3E5__7_14; }
	inline bool* get_address_of_U3CisLastTryU3E5__7_14() { return &___U3CisLastTryU3E5__7_14; }
	inline void set_U3CisLastTryU3E5__7_14(bool value)
	{
		___U3CisLastTryU3E5__7_14 = value;
	}

	inline static int32_t get_offset_of_U3ClastQueryResponseU3E5__8_15() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___U3ClastQueryResponseU3E5__8_15)); }
	inline RuntimeObject* get_U3ClastQueryResponseU3E5__8_15() const { return ___U3ClastQueryResponseU3E5__8_15; }
	inline RuntimeObject** get_address_of_U3ClastQueryResponseU3E5__8_15() { return &___U3ClastQueryResponseU3E5__8_15; }
	inline void set_U3ClastQueryResponseU3E5__8_15(RuntimeObject* value)
	{
		___U3ClastQueryResponseU3E5__8_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastQueryResponseU3E5__8_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap8_16() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___U3CU3E7__wrap8_16)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_U3CU3E7__wrap8_16() const { return ___U3CU3E7__wrap8_16; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_U3CU3E7__wrap8_16() { return &___U3CU3E7__wrap8_16; }
	inline void set_U3CU3E7__wrap8_16(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___U3CU3E7__wrap8_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap8_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap9_17() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___U3CU3E7__wrap9_17)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_U3CU3E7__wrap9_17() const { return ___U3CU3E7__wrap9_17; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_U3CU3E7__wrap9_17() { return &___U3CU3E7__wrap9_17; }
	inline void set_U3CU3E7__wrap9_17(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___U3CU3E7__wrap9_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap9_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_18() { return static_cast<int32_t>(offsetof(U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1, ___U3CU3Eu__1_18)); }
	inline ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  get_U3CU3Eu__1_18() const { return ___U3CU3Eu__1_18; }
	inline ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F * get_address_of_U3CU3Eu__1_18() { return &___U3CU3Eu__1_18; }
	inline void set_U3CU3Eu__1_18(ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  value)
	{
		___U3CU3Eu__1_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_18))->___m_task_0), (void*)NULL);
	}
};


// System.Linq.RecordCollectionExtension/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t8ECF2E793BE1F67217711285084AB62395589B9B  : public RuntimeObject
{
public:
	// DnsClient.Protocol.ResourceRecordType System.Linq.RecordCollectionExtension/<>c__DisplayClass20_0::type
	int16_t ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_t8ECF2E793BE1F67217711285084AB62395589B9B, ___type_0)); }
	inline int16_t get_type_0() const { return ___type_0; }
	inline int16_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int16_t value)
	{
		___type_0 = value;
	}
};


// DnsClient.ResponseCache/ResponseEntry
struct ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81  : public RuntimeObject
{
public:
	// System.DateTimeOffset DnsClient.ResponseCache/ResponseEntry::<ExpiresAt>k__BackingField
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___U3CExpiresAtU3Ek__BackingField_0;
	// System.DateTimeOffset DnsClient.ResponseCache/ResponseEntry::<Created>k__BackingField
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___U3CCreatedU3Ek__BackingField_1;
	// System.Double DnsClient.ResponseCache/ResponseEntry::<TTL>k__BackingField
	double ___U3CTTLU3Ek__BackingField_2;
	// DnsClient.IDnsQueryResponse DnsClient.ResponseCache/ResponseEntry::<Response>k__BackingField
	RuntimeObject* ___U3CResponseU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CExpiresAtU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81, ___U3CExpiresAtU3Ek__BackingField_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_U3CExpiresAtU3Ek__BackingField_0() const { return ___U3CExpiresAtU3Ek__BackingField_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_U3CExpiresAtU3Ek__BackingField_0() { return &___U3CExpiresAtU3Ek__BackingField_0; }
	inline void set_U3CExpiresAtU3Ek__BackingField_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___U3CExpiresAtU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CCreatedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81, ___U3CCreatedU3Ek__BackingField_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_U3CCreatedU3Ek__BackingField_1() const { return ___U3CCreatedU3Ek__BackingField_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_U3CCreatedU3Ek__BackingField_1() { return &___U3CCreatedU3Ek__BackingField_1; }
	inline void set_U3CCreatedU3Ek__BackingField_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___U3CCreatedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTTLU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81, ___U3CTTLU3Ek__BackingField_2)); }
	inline double get_U3CTTLU3Ek__BackingField_2() const { return ___U3CTTLU3Ek__BackingField_2; }
	inline double* get_address_of_U3CTTLU3Ek__BackingField_2() { return &___U3CTTLU3Ek__BackingField_2; }
	inline void set_U3CTTLU3Ek__BackingField_2(double value)
	{
		___U3CTTLU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CResponseU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81, ___U3CResponseU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CResponseU3Ek__BackingField_3() const { return ___U3CResponseU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CResponseU3Ek__BackingField_3() { return &___U3CResponseU3Ek__BackingField_3; }
	inline void set_U3CResponseU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CResponseU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResponseU3Ek__BackingField_3), (void*)value);
	}
};


// DnsClient.DnsTcpMessageHandler/ClientPool/<GetNextClient>d__5
struct U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E 
{
public:
	// System.Int32 DnsClient.DnsTcpMessageHandler/ClientPool/<GetNextClient>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry> DnsClient.DnsTcpMessageHandler/ClientPool/<GetNextClient>d__5::<>t__builder
	AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6  ___U3CU3Et__builder_1;
	// DnsClient.DnsTcpMessageHandler/ClientPool DnsClient.DnsTcpMessageHandler/ClientPool/<GetNextClient>d__5::<>4__this
	ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * ___U3CU3E4__this_2;
	// DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry DnsClient.DnsTcpMessageHandler/ClientPool/<GetNextClient>d__5::<entry>5__2
	ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * ___U3CentryU3E5__2_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter DnsClient.DnsTcpMessageHandler/ClientPool/<GetNextClient>d__5::<>u__1
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E, ___U3CU3E4__this_2)); }
	inline ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CentryU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E, ___U3CentryU3E5__2_3)); }
	inline ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * get_U3CentryU3E5__2_3() const { return ___U3CentryU3E5__2_3; }
	inline ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF ** get_address_of_U3CentryU3E5__2_3() { return &___U3CentryU3E5__2_3; }
	inline void set_U3CentryU3E5__2_3(ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * value)
	{
		___U3CentryU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CentryU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E, ___U3CU3Eu__1_4)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<System.Action>
struct Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
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


// DnsClient.Protocol.DnsResourceRecord
struct DnsResourceRecord_tB777F2C5F97194975BB8561D94DBC213330828A4  : public ResourceRecordInfo_tFEB40ADCF4027A6A12E390090A94AB1155F57DEA
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OperationCanceledException
struct OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ____cancellationToken_17;

public:
	inline static int32_t get_offset_of__cancellationToken_17() { return static_cast<int32_t>(offsetof(OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB, ____cancellationToken_17)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get__cancellationToken_17() const { return ____cancellationToken_17; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of__cancellationToken_17() { return &____cancellationToken_17; }
	inline void set__cancellationToken_17(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		____cancellationToken_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cancellationToken_17))->___m_source_0), (void*)NULL);
	}
};


// DnsClient.ResponseCache
struct ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28  : public RuntimeObject
{
public:
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,DnsClient.ResponseCache/ResponseEntry> DnsClient.ResponseCache::_cache
	ConcurrentDictionary_2_t9469C211C23CC4D25734EB34F3709EE1469DD2CD * ____cache_3;
	// System.Object DnsClient.ResponseCache::_cleanupLock
	RuntimeObject * ____cleanupLock_4;
	// System.Boolean DnsClient.ResponseCache::_cleanupRunning
	bool ____cleanupRunning_5;
	// System.Int32 DnsClient.ResponseCache::_lastCleanup
	int32_t ____lastCleanup_6;
	// System.Nullable`1<System.TimeSpan> DnsClient.ResponseCache::_minimumTimeout
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ____minimumTimeout_7;
	// System.Nullable`1<System.TimeSpan> DnsClient.ResponseCache::_maximumTimeout
	Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  ____maximumTimeout_8;
	// System.Boolean DnsClient.ResponseCache::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of__cache_3() { return static_cast<int32_t>(offsetof(ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28, ____cache_3)); }
	inline ConcurrentDictionary_2_t9469C211C23CC4D25734EB34F3709EE1469DD2CD * get__cache_3() const { return ____cache_3; }
	inline ConcurrentDictionary_2_t9469C211C23CC4D25734EB34F3709EE1469DD2CD ** get_address_of__cache_3() { return &____cache_3; }
	inline void set__cache_3(ConcurrentDictionary_2_t9469C211C23CC4D25734EB34F3709EE1469DD2CD * value)
	{
		____cache_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cache_3), (void*)value);
	}

	inline static int32_t get_offset_of__cleanupLock_4() { return static_cast<int32_t>(offsetof(ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28, ____cleanupLock_4)); }
	inline RuntimeObject * get__cleanupLock_4() const { return ____cleanupLock_4; }
	inline RuntimeObject ** get_address_of__cleanupLock_4() { return &____cleanupLock_4; }
	inline void set__cleanupLock_4(RuntimeObject * value)
	{
		____cleanupLock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cleanupLock_4), (void*)value);
	}

	inline static int32_t get_offset_of__cleanupRunning_5() { return static_cast<int32_t>(offsetof(ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28, ____cleanupRunning_5)); }
	inline bool get__cleanupRunning_5() const { return ____cleanupRunning_5; }
	inline bool* get_address_of__cleanupRunning_5() { return &____cleanupRunning_5; }
	inline void set__cleanupRunning_5(bool value)
	{
		____cleanupRunning_5 = value;
	}

	inline static int32_t get_offset_of__lastCleanup_6() { return static_cast<int32_t>(offsetof(ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28, ____lastCleanup_6)); }
	inline int32_t get__lastCleanup_6() const { return ____lastCleanup_6; }
	inline int32_t* get_address_of__lastCleanup_6() { return &____lastCleanup_6; }
	inline void set__lastCleanup_6(int32_t value)
	{
		____lastCleanup_6 = value;
	}

	inline static int32_t get_offset_of__minimumTimeout_7() { return static_cast<int32_t>(offsetof(ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28, ____minimumTimeout_7)); }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  get__minimumTimeout_7() const { return ____minimumTimeout_7; }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * get_address_of__minimumTimeout_7() { return &____minimumTimeout_7; }
	inline void set__minimumTimeout_7(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  value)
	{
		____minimumTimeout_7 = value;
	}

	inline static int32_t get_offset_of__maximumTimeout_8() { return static_cast<int32_t>(offsetof(ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28, ____maximumTimeout_8)); }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  get__maximumTimeout_8() const { return ____maximumTimeout_8; }
	inline Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F * get_address_of__maximumTimeout_8() { return &____maximumTimeout_8; }
	inline void set__maximumTimeout_8(Nullable_1_tCFBE5FE1DB8A702D620FFC81D556C8E8AD5B871F  value)
	{
		____maximumTimeout_8 = value;
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28, ___U3CEnabledU3Ek__BackingField_9)); }
	inline bool get_U3CEnabledU3Ek__BackingField_9() const { return ___U3CEnabledU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_9() { return &___U3CEnabledU3Ek__BackingField_9; }
	inline void set_U3CEnabledU3Ek__BackingField_9(bool value)
	{
		___U3CEnabledU3Ek__BackingField_9 = value;
	}
};

struct ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28_StaticFields
{
public:
	// System.TimeSpan DnsClient.ResponseCache::s_infiniteTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___s_infiniteTimeout_0;
	// System.TimeSpan DnsClient.ResponseCache::s_maxTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___s_maxTimeout_1;
	// System.Int32 DnsClient.ResponseCache::s_cleanupInterval
	int32_t ___s_cleanupInterval_2;

public:
	inline static int32_t get_offset_of_s_infiniteTimeout_0() { return static_cast<int32_t>(offsetof(ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28_StaticFields, ___s_infiniteTimeout_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_s_infiniteTimeout_0() const { return ___s_infiniteTimeout_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_s_infiniteTimeout_0() { return &___s_infiniteTimeout_0; }
	inline void set_s_infiniteTimeout_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___s_infiniteTimeout_0 = value;
	}

	inline static int32_t get_offset_of_s_maxTimeout_1() { return static_cast<int32_t>(offsetof(ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28_StaticFields, ___s_maxTimeout_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_s_maxTimeout_1() const { return ___s_maxTimeout_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_s_maxTimeout_1() { return &___s_maxTimeout_1; }
	inline void set_s_maxTimeout_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___s_maxTimeout_1 = value;
	}

	inline static int32_t get_offset_of_s_cleanupInterval_2() { return static_cast<int32_t>(offsetof(ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28_StaticFields, ___s_cleanupInterval_2)); }
	inline int32_t get_s_cleanupInterval_2() const { return ___s_cleanupInterval_2; }
	inline int32_t* get_address_of_s_cleanupInterval_2() { return &___s_cleanupInterval_2; }
	inline void set_s_cleanupInterval_2(int32_t value)
	{
		___s_cleanupInterval_2 = value;
	}
};


// System.TimeoutException
struct TimeoutException_tB5D0EEFAEC3FC79FFDEF23C55D1BDF4DE347C926  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// DnsClient.Protocol.Options.OptRecord
struct OptRecord_t7166C5B33E5E73C4CA9508BB9EF7DEA6028DED1D  : public DnsResourceRecord_tB777F2C5F97194975BB8561D94DBC213330828A4
{
public:
	// System.Byte[] DnsClient.Protocol.Options.OptRecord::<Data>k__BackingField
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(OptRecord_t7166C5B33E5E73C4CA9508BB9EF7DEA6028DED1D, ___U3CDataU3Ek__BackingField_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CDataU3Ek__BackingField_6() const { return ___U3CDataU3Ek__BackingField_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CDataU3Ek__BackingField_6() { return &___U3CDataU3Ek__BackingField_6; }
	inline void set_U3CDataU3Ek__BackingField_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CDataU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDataU3Ek__BackingField_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskExtensions::WithCancellation<System.Object>(System.Threading.Tasks.Task`1<T>,System.Threading.CancellationToken,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskExtensions_WithCancellation_TisRuntimeObject_mD560BD27002E97D3E958E0DCA86BDF1DDBE618DD_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onCancel2, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18  Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,DnsClient.LookupClient/<ResolveQueryAsync>d__101>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1_m3DA328E673417FD26092580396C1F1E940FC5608_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * ___awaiter0, U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED * __this, const RuntimeMethod* method);
// System.Boolean DnsClient.DnsMessageHandler::IsTransientException<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DnsMessageHandler_IsTransientException_TisRuntimeObject_mA9803763638D6BF9C3573F49867A631E3F492DFD_gshared (DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * __this, RuntimeObject * ___exception0, const RuntimeMethod* method);
// System.String System.String::Join<System.Object>(System.String,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisRuntimeObject_m23086BAAC79E8C7556DC113D4FB2333CD61E849B_gshared (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,DnsClient.DnsTcpMessageHandler/ClientPool/<GetNextClient>d__5>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E_mF85C87A0D63D5645B35B9D7078B146CF8D26A161_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E * ___stateMachine1, const RuntimeMethod* method);

// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// DnsClient.DnsRequestHeader DnsClient.DnsRequestMessage::get_Header()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D * DnsRequestMessage_get_Header_m5E0DF81C306F1A6AA04AF22708E461A0173E4F97_inline (DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * __this, const RuntimeMethod* method);
// System.Void DnsClient.DnsRequestHeader::RefreshId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsRequestHeader_RefreshId_m31E8EEF3686BBCF84053EB721E2F80AE19710551 (DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D * __this, const RuntimeMethod* method);
// System.Boolean DnsClient.DnsQuerySettings::get_EnableAuditTrail()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DnsQuerySettings_get_EnableAuditTrail_m38F4F92AFE8DE1D34C11079B0FE1EB8094A99DC1_inline (DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * __this, const RuntimeMethod* method);
// System.Void DnsClient.LookupClientAudit::AuditRetryNextServer(DnsClient.NameServer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookupClientAudit_AuditRetryNextServer_mB50ED049460AEC6A555B06B6399F056BD494B613 (LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * __this, NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * ___current0, const RuntimeMethod* method);
// System.Boolean DnsClient.DnsQuerySettings::get_UseCache()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DnsQuerySettings_get_UseCache_m3DBA3D8AA74061DEDF1B99FA92A23DED5CAEE79B_inline (DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * __this, const RuntimeMethod* method);
// DnsClient.DnsQuestion DnsClient.DnsRequestMessage::get_Question()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B * DnsRequestMessage_get_Question_m392023E498B19AB69ABA462F1307663BB4629795_inline (DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * __this, const RuntimeMethod* method);
// System.String DnsClient.ResponseCache::GetCacheKey(DnsClient.DnsQuestion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseCache_GetCacheKey_m800D5CC0E696C4A9B5E33A2CB05D2ACD50DD4887 (DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B * ___question0, const RuntimeMethod* method);
// System.Boolean DnsClient.LookupClient::TryGetCachedResult(System.String,DnsClient.DnsRequestMessage,DnsClient.DnsQuerySettings,DnsClient.IDnsQueryResponse&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LookupClient_TryGetCachedResult_m3A781442700DB4E7ADF4E4EA7FA29BC79EB5E224 (LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * __this, String_t* ___cacheKey0, DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * ___request1, DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * ___settings2, RuntimeObject** ___response3, const RuntimeMethod* method);
// System.Int32 DnsClient.DnsQuerySettings::get_Retries()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DnsQuerySettings_get_Retries_m4434254CF8888C2850632B5BFC1B7E59BF6F579C_inline (DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * __this, const RuntimeMethod* method);
// System.Int32 DnsClient.DnsRequestHeader::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DnsRequestHeader_get_Id_mC83131B795D3434BFC4B62C87D14895411564C16_inline (DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D * __this, const RuntimeMethod* method);
// System.Void DnsClient.Internal.LoggerExtensions::LogDebug(DnsClient.Internal.ILogger,System.Int32,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoggerExtensions_LogDebug_m63FB1D574D0AC2FDF8FF113D2AC51F6D29621E98 (RuntimeObject* ___logger0, int32_t ___eventId1, String_t* ___message2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, const RuntimeMethod* method);
// System.Void DnsClient.LookupClient/<>c__DisplayClass101_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass101_0__ctor_mA8156F6149483DA001B3AF89F5ACD4DF006B7A37 (U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_m987F0BEA5521F5575C5E766345C04E7E5E0CD210 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Void DnsClient.LookupClientAudit::StartTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookupClientAudit_StartTimer_m7374CD560F33C98DF48169C2C6D372E0D845ECA3 (LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Net.IPEndPoint DnsClient.NameServer::get_IPEndPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * NameServer_get_IPEndPoint_mD8896AC6855B0A8AD8D887BAE6DAF4E9B1F4AF12_inline (NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Action>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA76F0902F47C07F43966555A9B53075E365DCE3F (Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.TimeSpan DnsClient.DnsQuerySettings::get_Timeout()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DnsQuerySettings_get_Timeout_m465467C5BC1883B0EA5E41FAC0F39A012879A05D_inline (DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * __this, const RuntimeMethod* method);
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Inequality_mDE127E1886D092054E24EA873CEE64D0857CD04C (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t10, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t21, const RuntimeMethod* method);
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationToken_get_None_m13F4B9DCF5D7BE8E9E3F60026C98E50A946FE9DF (const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::op_Inequality(System.Threading.CancellationToken,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_op_Inequality_m7CC475A961147C03C3665DBF0CB9DA0D1F08B2B7 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___left0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___right1, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_CanBeCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_CanBeCanceled_m6E3578EE53E9E051760D798F120A1EB4357B4E09 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::.ctor(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_mC98ADD69D91E9695DB087CAC95159CD2E37B0466 (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___delay0, const RuntimeMethod* method);
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::CreateLinkedTokenSource(System.Threading.CancellationToken,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * CancellationTokenSource_CreateLinkedTokenSource_mBCC8769107D706E358D18C97520172AD8CE79480 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___token10, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___token21, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskExtensions::WithCancellation<DnsClient.DnsResponseMessage>(System.Threading.Tasks.Task`1<T>,System.Threading.CancellationToken,System.Action)
inline Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 * TaskExtensions_WithCancellation_TisDnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9_m19FBEBBC64A80A00E4FEA032E68A8E2462B3341B (Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 * ___task0, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onCancel2, const RuntimeMethod* method)
{
	return ((  Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 * (*) (Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))TaskExtensions_WithCancellation_TisRuntimeObject_mD560BD27002E97D3E958E0DCA86BDF1DDBE618DD_gshared)(___task0, ___cancellationToken1, ___onCancel2, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<DnsClient.DnsResponseMessage>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t536069738E1EE81F050F5B181584528022FA78D8  Task_1_ConfigureAwait_m88862B69D2BD5EDA40FCB8650A46CF332A210988 (Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t536069738E1EE81F050F5B181584528022FA78D8  (*) (Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m0C99499DCC096AEE2A6AD075391C61037CC3DAA1_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<DnsClient.DnsResponseMessage>::GetAwaiter()
inline ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  ConfiguredTaskAwaitable_1_GetAwaiter_m2656FC8B5FA9072E092F3D681A900E4CDE900BDB_inline (ConfiguredTaskAwaitable_1_t536069738E1EE81F050F5B181584528022FA78D8 * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  (*) (ConfiguredTaskAwaitable_1_t536069738E1EE81F050F5B181584528022FA78D8 *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<DnsClient.DnsResponseMessage>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mD82A0486D406821729B5959CB3BBADCC5CFAE2F5 (ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m5E3746D1B0661A5BCD45816E83766F228A077D20_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<DnsClient.IDnsQueryResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<DnsClient.DnsResponseMessage>,DnsClient.LookupClient/<ResolveQueryAsync>d__101>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F_TisU3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1_m45AA50F4CC1DEC8814223FA544E8C6C5170C8203 (AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 * __this, ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F * ___awaiter0, U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 *, ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F *, U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED_TisU3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1_m3DA328E673417FD26092580396C1F1E940FC5608_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<DnsClient.DnsResponseMessage>::GetResult()
inline DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9 * ConfiguredTaskAwaiter_GetResult_m08C47E38E1A21F776190E44C64BEDEA3F51D0427 (ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F * __this, const RuntimeMethod* method)
{
	return ((  DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9 * (*) (ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_mD385ED6B1C12DC6353D50409731FB1729FFD9FA5_gshared)(__this, method);
}
// DnsClient.IDnsQueryResponse DnsClient.LookupClient::ProcessResponseMessage(DnsClient.LookupClientAudit,DnsClient.DnsRequestMessage,DnsClient.DnsResponseMessage,DnsClient.DnsQuerySettings,DnsClient.NameServer,DnsClient.DnsMessageHandleType,System.Int32,System.Boolean,DnsClient.LookupClient/HandleError&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LookupClient_ProcessResponseMessage_mD9444D09B8C1D98936A3FB1E4FE4322E7A9C9CC0 (LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * __this, LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * ___audit0, DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * ___request1, DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9 * ___response2, DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * ___settings3, NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * ___nameServer4, int32_t ___handleType5, int32_t ___serverCount6, bool ___isLastServer7, int32_t* ___handleError8, const RuntimeMethod* method);
// System.Void DnsClient.LookupClientAudit::AuditEnd(DnsClient.IDnsQueryResponse,DnsClient.NameServer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookupClientAudit_AuditEnd_m0C632B92FE91AFF054DFB82F0A5FCECE39898F4E (LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * __this, RuntimeObject* ___queryResponse0, NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * ___nameServer1, const RuntimeMethod* method);
// System.String DnsClient.LookupClientAudit::Build(DnsClient.IDnsQueryResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LookupClientAudit_Build_mECD016096574A0C4F095D7509FD7A87CEAEF9D04 (LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * __this, RuntimeObject* ___response0, const RuntimeMethod* method);
// DnsClient.DnsResponseHeader DnsClient.DnsResponseMessage::get_Header()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB * DnsResponseMessage_get_Header_m1A63428F26219396DC0DEEC343573C17244AF23E_inline (DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9 * __this, const RuntimeMethod* method);
// DnsClient.DnsHeaderResponseCode DnsClient.DnsResponseHeader::get_ResponseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t DnsResponseHeader_get_ResponseCode_m39FE4526F1F2459E66573A5F0B27BC649B61A68C (DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB * __this, const RuntimeMethod* method);
// System.Void DnsClient.DnsResponseException::.ctor(DnsClient.DnsResponseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsResponseException__ctor_mBAF03D6A537C0F5C4D8DDF82C0DD958683AA7C67 (DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * __this, int32_t ___code0, const RuntimeMethod* method);
// System.Void DnsClient.DnsResponseException::set_AuditTrail(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsResponseException_set_AuditTrail_m979D8CFCDDB1458BF3532C68FDA008EF4C682C9E_inline (DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * __this, String_t* ___value0, const RuntimeMethod* method);
// DnsClient.ResponseCache DnsClient.LookupClient::get_Cache()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28 * LookupClient_get_Cache_m20F129FDC5DF706484B60877AA4CF114BE3E6759_inline (LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * __this, const RuntimeMethod* method);
// System.Boolean DnsClient.ResponseCache::Add(System.String,DnsClient.IDnsQueryResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResponseCache_Add_m0AC5C4D7E1E729B766BEC001F366BDAE5EA5346C (ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28 * __this, String_t* ___key0, RuntimeObject* ___response1, const RuntimeMethod* method);
// DnsClient.LookupClient/HandleError DnsClient.LookupClient::HandleDnsResponeParseException(DnsClient.DnsResponseParseException,DnsClient.DnsRequestMessage,DnsClient.DnsMessageHandleType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LookupClient_HandleDnsResponeParseException_m0A2D642065D0FB4621556FB58390B13CCFA8C11A (LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * __this, DnsResponseParseException_t8643D394CC55934F2F34B08A96ED7B727BD451BC * ___ex0, DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * ___request1, int32_t ___handleType2, bool ___isLastServer3, const RuntimeMethod* method);
// System.Void DnsClient.TruncatedQueryResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TruncatedQueryResponse__ctor_m590E885A1675358E2FF5C5A195388544966064DB (TruncatedQueryResponse_t5EEF776C062C1EE4914FC548BAC82DFD71D23391 * __this, const RuntimeMethod* method);
// DnsClient.LookupClient/HandleError DnsClient.LookupClient::HandleDnsResponseException(DnsClient.DnsResponseException,DnsClient.DnsRequestMessage,DnsClient.DnsQuerySettings,DnsClient.NameServer,DnsClient.DnsMessageHandleType,System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LookupClient_HandleDnsResponseException_mD05FC4F14FFFAC262DFE29573C1BEDBA97DE9A71 (LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * __this, DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * ___ex0, DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * ___request1, DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * ___settings2, NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * ___nameServer3, int32_t ___handleType4, bool ___isLastServer5, bool ___isLastTry6, int32_t ___currentTry7, const RuntimeMethod* method);
// System.Boolean DnsClient.DnsMessageHandler::IsTransientException<System.Exception>(T)
inline bool DnsMessageHandler_IsTransientException_TisException_t_mFA4D11BCE61D80E7E604EBFEFB2B30B1260C35D3 (DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	return ((  bool (*) (DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 *, Exception_t *, const RuntimeMethod*))DnsMessageHandler_IsTransientException_TisRuntimeObject_mA9803763638D6BF9C3573F49867A631E3F492DFD_gshared)(__this, ___exception0, method);
}
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// DnsClient.LookupClient/HandleError DnsClient.LookupClient::HandleTimeoutException(System.Exception,DnsClient.DnsRequestMessage,DnsClient.DnsQuerySettings,DnsClient.NameServer,DnsClient.DnsMessageHandleType,System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LookupClient_HandleTimeoutException_mC604FC1B16A022BF98A958E3DBB4A5324E1A1BD0 (LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * __this, Exception_t * ___ex0, DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * ___request1, DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * ___settings2, NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * ___nameServer3, int32_t ___handleType4, bool ___isLastServer5, bool ___isLastTry6, int32_t ___currentTry7, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void DnsClient.DnsResponseException::.ctor(DnsClient.DnsResponseCode,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsResponseException__ctor_mBE3CAD8D28F1FD4B87FADB6E1B4EEF0B2720B7FA (DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * __this, int32_t ___code0, String_t* ___message1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.Void DnsClient.LookupClientAudit::AuditException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookupClientAudit_AuditException_m71328346EBE1506E5781E8ABC64A8BB5CB0B54CA (LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * __this, Exception_t * ___ex0, const RuntimeMethod* method);
// DnsClient.LookupClient/HandleError DnsClient.LookupClient::HandleUnhandledException(System.Exception,DnsClient.DnsRequestMessage,DnsClient.NameServer,DnsClient.DnsMessageHandleType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LookupClient_HandleUnhandledException_mBF11848034C7243072EF157A7545659EFFE934DA (LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * __this, Exception_t * ___ex0, DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * ___request1, NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * ___nameServer2, int32_t ___handleType3, bool ___isLastServer4, const RuntimeMethod* method);
// System.String System.String::Join<DnsClient.NameServer>(System.String,System.Collections.Generic.IEnumerable`1<!!0>)
inline String_t* String_Join_TisNameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_m1EDA34289997CF907CFBC34291BB23ABE85F9BE8 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, RuntimeObject*, const RuntimeMethod*))String_Join_TisRuntimeObject_m23086BAAC79E8C7556DC113D4FB2333CD61E849B_gshared)(___separator0, ___values1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void DnsClient.DnsResponseException::.ctor(DnsClient.DnsResponseCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnsResponseException__ctor_mAC5CC250016E672E6CDDE88B22E192A97F09C9BD (DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * __this, int32_t ___code0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<DnsClient.IDnsQueryResponse>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mCC6263712051888BAB0E51D4687408F835926A80 (AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<DnsClient.IDnsQueryResponse>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m1087C96370C903C960B4DD13032C34C99BBC20B9 (AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void DnsClient.LookupClient/<ResolveQueryAsync>d__101::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54 (U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<DnsClient.IDnsQueryResponse>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m795CA528D6BC9854AFE044102C63F10BB8F22D7A (AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void DnsClient.LookupClient/<ResolveQueryAsync>d__101::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResolveQueryAsyncU3Ed__101_SetStateMachine_m633AFFBCE83F9D348D2B952FF5352DE184CA4AD3 (U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E (const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void DnsClient.LookupClientAudit/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAB09E017A475A2BD16792C37EDB9BBBBA46694D7 (U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9 * __this, const RuntimeMethod* method);
// System.Void DnsClient.NameServer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m884DAFBCDE71D04F7EDB1937B11133032C9BD135 (U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A * __this, const RuntimeMethod* method);
// System.Void DnsClient.NameServer::.ctor(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameServer__ctor_mDF17F4A154D3F3A6D82AEC1682542B1795D2915B (NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___endPoint0, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method);
// System.Boolean System.Net.IPAddress::get_IsIPv6SiteLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv6SiteLocal_m881CFE5D9657870DBC04E05B2696C27CDF3F52C9 (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method);
// DnsClient.Protocol.ResourceRecordType DnsClient.Protocol.ResourceRecordInfo::get_RecordType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ResourceRecordInfo_get_RecordType_m471894AB8C9C1EAE986EC621ACBDB5ED944A933D_inline (ResourceRecordInfo_tFEB40ADCF4027A6A12E390090A94AB1155F57DEA * __this, const RuntimeMethod* method);
// System.Void DnsClient.ResponseCache/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE87853CC30ACB2DB79865A7EC0CD51A7A3028648 (U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D * __this, const RuntimeMethod* method);
// System.Int32 DnsClient.Protocol.ResourceRecordInfo::get_InitialTimeToLive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResourceRecordInfo_get_InitialTimeToLive_mE7A73038A2657262979A561E08AF451B189E4BBB_inline (ResourceRecordInfo_tFEB40ADCF4027A6A12E390090A94AB1155F57DEA * __this, const RuntimeMethod* method);
// System.Void DnsClient.ResponseCache::DoCleanup(DnsClient.ResponseCache)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseCache_DoCleanup_mA907838A0BBB28D9F1F561F85C6633FB1F803EE2 (ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28 * ___cache0, const RuntimeMethod* method);
// System.DateTimeOffset DnsClient.ResponseCache/ResponseEntry::get_ExpiresAt()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ResponseEntry_get_ExpiresAt_m3CD99B1D2B8DA52DB6DD6CB4337F5ED2DDC1FB25_inline (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, const RuntimeMethod* method);
// System.Boolean System.DateTimeOffset::op_GreaterThanOrEqual(System.DateTimeOffset,System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeOffset_op_GreaterThanOrEqual_m328410C6ED97E4F75D0153CCA73E21E205210842 (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___left0, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___right1, const RuntimeMethod* method);
// System.Void DnsClient.ResponseCache/ResponseEntry::set_TTL(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResponseEntry_set_TTL_m3E5F4D5AA1FD157AFB8754670B5966D776A9DBF0_inline (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, double ___value0, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  DateTimeOffset_get_UtcNow_m9ECEB6DAB05B153E7CDC0860E21C00F7562653AB (const RuntimeMethod* method);
// System.DateTimeOffset DnsClient.ResponseCache/ResponseEntry::get_Created()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ResponseEntry_get_Created_m2D87E25288B8D3B3367CD81D14CCE0BCA8267865_inline (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, const RuntimeMethod* method);
// System.Double DnsClient.ResponseCache/ResponseEntry::get_TTL()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ResponseEntry_get_TTL_m98D2C3BC847B66FFC0E9A1DA591329031DB13A94_inline (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  DateTimeOffset_AddMilliseconds_m847143AE9F4D018AE6F7B36EA13A4F802755EE2F (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * __this, double ___milliseconds0, const RuntimeMethod* method);
// System.Void DnsClient.Tracing/TraceLoggerFactory/TraceLogger::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceLogger__ctor_mCE26626E7E4015CFEE7707219FE43175270E96B9 (TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void DnsClient.Protocol.TxtRecord/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8F6BB502588B25052DC19346D8E174B6C91F5979 (U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172 * __this, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::.ctor(System.Net.Sockets.AddressFamily)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient__ctor_m67703F980AF859B47D938D2739C0E3D244659339 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, int32_t ___family0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.LingerOption::.ctor(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LingerOption__ctor_m939C73C595D32F9A58592AC9FD8D66924C48E51A (LingerOption_t4E191E63AB49943D401B71B3E7830E6586CE0E34 * __this, bool ___enable0, int32_t ___seconds1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_LingerState(System.Net.Sockets.LingerOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_LingerState_mEEA3F65E1D3C0A601F1DA4B31322F7F48F9F760B (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, LingerOption_t4E191E63AB49943D401B71B3E7830E6586CE0E34 * ___value0, const RuntimeMethod* method);
// System.Void DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry::.ctor(System.Net.Sockets.TcpClient,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientEntry__ctor_mDB5303FC84905EB09076E373133CB504397B2360 (ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * __this, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client0, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___endpoint1, const RuntimeMethod* method);
// System.Net.Sockets.TcpClient DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ClientEntry_get_Client_m6EF24B5BEF0CE943FA39DA24D3432F5ED1CD95F4_inline (ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * __this, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method);
// System.Int32 System.Net.IPEndPoint::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Net.Sockets.TcpClient::ConnectAsync(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TcpClient_ConnectAsync_mA5396B680DE36D2C9990339E962AD78536C4DB51 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,DnsClient.DnsTcpMessageHandler/ClientPool/<GetNextClient>d__5>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E_m203CC179A087A31DB9D221B0FE0FC20CFC90E903 (AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 *, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *, U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E_mF85C87A0D63D5645B35B9D7078B146CF8D26A161_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Boolean DnsClient.DnsTcpMessageHandler/ClientPool::TryDequeue(DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ClientPool_TryDequeue_m7D214A65E2769D2CF8C8B8A6590A4A9EC2C7C7B0 (ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * __this, ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF ** ___entry0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mAEEAEF5A83D0A0781017DBFCD30D2D3813E9217B (AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m46B01FB979A809E6C05E9C45B965319BD31B4618 (AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 * __this, ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 *, ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void DnsClient.DnsTcpMessageHandler/ClientPool/<GetNextClient>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNextClientU3Ed__5_MoveNext_mEADDDCF02B0064AEA0BB0932C9E94F8E76551D88 (U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m991CC36E8574C3467ECD880A62EF0BBCF2E282FC (AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void DnsClient.DnsTcpMessageHandler/ClientPool/<GetNextClient>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNextClientU3Ed__5_SetStateMachine_m0C585ECB9B6062D378DB0CB8873935EBECACAA8D (U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Diagnostics.TraceSource DnsClient.Tracing::get_Source()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0 * Tracing_get_Source_m3BAD09BD690CFBD86D983D9FE83BA286F3091DAF_inline (const RuntimeMethod* method);
// System.Diagnostics.SourceSwitch System.Diagnostics.TraceSource::get_Switch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SourceSwitch_tC1DEE6F688A13847CC249DEADD07D00178DE9ADC * TraceSource_get_Switch_m8F7DB72267C1DF854A2013AE65B44842FDB8FAE4 (TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0 * __this, const RuntimeMethod* method);
// System.Diagnostics.TraceEventType DnsClient.Tracing/TraceLoggerFactory/TraceLogger::GetTraceEventType(DnsClient.Internal.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TraceLogger_GetTraceEventType_mF90FC336181E930790492588FD0D92FB10943990 (TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F * __this, int32_t ___logLevel0, const RuntimeMethod* method);
// System.Boolean System.Diagnostics.SourceSwitch::ShouldTrace(System.Diagnostics.TraceEventType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SourceSwitch_ShouldTrace_mE8163BA8BD480300BD402629DE8AC9A0E9D04DD8 (SourceSwitch_tC1DEE6F688A13847CC249DEADD07D00178DE9ADC * __this, int32_t ___eventType0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4 (const RuntimeMethod* method);
// System.Void System.Diagnostics.TraceSource::TraceEvent(System.Diagnostics.TraceEventType,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceSource_TraceEvent_mACEB20549F0CCB18513F6D5BB3F9BF4D3ED05551 (TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0 * __this, int32_t ___eventType0, int32_t ___id1, String_t* ___message2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DnsClient.LookupClient/<ResolveQueryAsync>d__101::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54 (U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA76F0902F47C07F43966555A9B53075E365DCE3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F_TisU3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1_m45AA50F4CC1DEC8814223FA544E8C6C5170C8203_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m1087C96370C903C960B4DD13032C34C99BBC20B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m2656FC8B5FA9072E092F3D681A900E4CDE900BDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m08C47E38E1A21F776190E44C64BEDEA3F51D0427_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mD82A0486D406821729B5959CB3BBADCC5CFAE2F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DnsMessageHandleType_tBC2ECE88ABCDB3FCD65C0CE07A42AC466D2AB516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDnsQueryResponse_tBBA88F4C3CB5794B7998232442CBFD1517882CCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tABC012A6DBE0E70DCAB46C64C8826B3393A42E46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t40D1FB56B357DE4B47E290F7BA5A849F53504038_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyList_1_t8C5665401FEDBC6115E18AD556FCB087F5A3A3CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtensions_WithCancellation_TisDnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9_m19FBEBBC64A80A00E4FEA032E68A8E2462B3341B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m88862B69D2BD5EDA40FCB8650A46CF332A210988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timeout_t1D83B13AB177AA6C3028AA49BDFBA6EE7E142050_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TruncatedQueryResponse_t5EEF776C062C1EE4914FC548BAC82DFD71D23391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CResolveQueryAsyncU3Eb__101_0_mFEA5876274D419EE65106FD1527EC8D412DE871F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass101_0_U3CResolveQueryAsyncU3Eb__1_m5BE108B13FBECF6310CD40670F58E0E40EB04007_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D2B55C4D6F60EC2DEB337D17194E38A53D1285A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF * V_5 = NULL;
	DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9 * V_6 = NULL;
	Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 * V_7 = NULL;
	int32_t V_8 = 0;
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * V_9 = NULL;
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * V_10 = NULL;
	ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  V_11;
	memset((&V_11), 0, sizeof(V_11));
	ConfiguredTaskAwaitable_1_t536069738E1EE81F050F5B181584528022FA78D8  V_12;
	memset((&V_12), 0, sizeof(V_12));
	DnsResponseParseException_t8643D394CC55934F2F34B08A96ED7B727BD451BC * V_13 = NULL;
	int32_t V_14 = 0;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * V_15 = NULL;
	int32_t V_16 = 0;
	Exception_t * V_17 = NULL;
	int32_t V_18 = 0;
	Exception_t * V_19 = NULL;
	int32_t V_20 = 0;
	Exception_t * V_21 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 4> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 18> __leave_targets;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B14_0 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B13_0 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B28_0 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B27_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B31_0 = NULL;
	U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF * G_B31_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B30_0 = NULL;
	U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF * G_B30_1 = NULL;
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * G_B44_0 = NULL;
	Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 * G_B44_1 = NULL;
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * G_B43_0 = NULL;
	Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 * G_B43_1 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B66_0 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B65_0 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B69_0 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B68_0 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B73_0 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B73_1 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B73_2 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B72_0 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B72_1 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B72_2 = NULL;
	String_t* G_B74_0 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B74_1 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B74_2 = NULL;
	Exception_t * G_B96_0 = NULL;
	Exception_t * G_B95_0 = NULL;
	int32_t G_B101_0 = 0;
	int32_t G_B100_0 = 0;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B109_0 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B109_1 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B109_2 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B108_0 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B108_1 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B108_2 = NULL;
	String_t* G_B110_0 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B110_1 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B110_2 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B115_0 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B114_0 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B122_0 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B122_1 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B122_2 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B121_0 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B121_1 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B121_2 = NULL;
	String_t* G_B123_0 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B123_1 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B123_2 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B129_0 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B129_1 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B129_2 = NULL;
	LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * G_B128_0 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B128_1 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B128_2 = NULL;
	String_t* G_B130_0 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B130_1 = NULL;
	DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * G_B130_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * L_1 = __this->get_U3CU3E4__this_7();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if ((!(((uint32_t)L_2) > ((uint32_t)1))))
			{
				goto IL_01f7;
			}
		}

IL_0015:
		{
			DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * L_3 = __this->get_handler_2();
			if (L_3)
			{
				goto IL_0028;
			}
		}

IL_001d:
		{
			ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
			ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7AEB4DBED56DD7667D53D9D797A7112C1253094)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54_RuntimeMethod_var)));
		}

IL_0028:
		{
			DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_5 = __this->get_request_3();
			if (L_5)
			{
				goto IL_003b;
			}
		}

IL_0030:
		{
			ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
			ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2388F091C228023E790448E1E25A13FDA7A160F4)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54_RuntimeMethod_var)));
		}

IL_003b:
		{
			__this->set_U3CserverIndexU3E5__2_9(0);
			goto IL_07ac;
		}

IL_0047:
		{
			RuntimeObject* L_7 = __this->get_servers_4();
			int32_t L_8 = __this->get_U3CserverIndexU3E5__2_9();
			NullCheck(L_7);
			NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * L_9;
			L_9 = InterfaceFuncInvoker1< NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IReadOnlyList`1<DnsClient.NameServer>::get_Item(System.Int32) */, IReadOnlyList_1_t8C5665401FEDBC6115E18AD556FCB087F5A3A3CF_il2cpp_TypeInfo_var, L_7, L_8);
			__this->set_U3CserverInfoU3E5__3_10(L_9);
			int32_t L_10 = __this->get_U3CserverIndexU3E5__2_9();
			RuntimeObject* L_11 = __this->get_servers_4();
			NullCheck(L_11);
			int32_t L_12;
			L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<DnsClient.NameServer>::get_Count() */, IReadOnlyCollection_1_t40D1FB56B357DE4B47E290F7BA5A849F53504038_il2cpp_TypeInfo_var, L_11);
			__this->set_U3CisLastServerU3E5__4_11((bool)((((int32_t)((((int32_t)L_10) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1))))? 1 : 0)) == ((int32_t)0))? 1 : 0));
			int32_t L_13 = __this->get_U3CserverIndexU3E5__2_9();
			if ((((int32_t)L_13) <= ((int32_t)0)))
			{
				goto IL_0095;
			}
		}

IL_0085:
		{
			DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_14 = __this->get_request_3();
			NullCheck(L_14);
			DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D * L_15;
			L_15 = DnsRequestMessage_get_Header_m5E0DF81C306F1A6AA04AF22708E461A0173E4F97_inline(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			DnsRequestHeader_RefreshId_m31E8EEF3686BBCF84053EB721E2F80AE19710551(L_15, /*hidden argument*/NULL);
		}

IL_0095:
		{
			DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * L_16 = __this->get_settings_5();
			NullCheck(L_16);
			bool L_17;
			L_17 = DnsQuerySettings_get_EnableAuditTrail_m38F4F92AFE8DE1D34C11079B0FE1EB8094A99DC1_inline(L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00ca;
			}
		}

IL_00a2:
		{
			int32_t L_18 = __this->get_U3CserverIndexU3E5__2_9();
			if ((((int32_t)L_18) <= ((int32_t)0)))
			{
				goto IL_00ca;
			}
		}

IL_00ab:
		{
			bool L_19 = __this->get_U3CisLastServerU3E5__4_11();
			if (L_19)
			{
				goto IL_00ca;
			}
		}

IL_00b3:
		{
			LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_20 = __this->get_audit_6();
			LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_21 = L_20;
			G_B13_0 = L_21;
			if (L_21)
			{
				G_B14_0 = L_21;
				goto IL_00bf;
			}
		}

IL_00bc:
		{
			goto IL_00ca;
		}

IL_00bf:
		{
			NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * L_22 = __this->get_U3CserverInfoU3E5__3_10();
			NullCheck(G_B14_0);
			LookupClientAudit_AuditRetryNextServer_mB50ED049460AEC6A555B06B6399F056BD494B613(G_B14_0, L_22, /*hidden argument*/NULL);
		}

IL_00ca:
		{
			String_t* L_23 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			__this->set_U3CcacheKeyU3E5__5_12(L_23);
			DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * L_24 = __this->get_settings_5();
			NullCheck(L_24);
			bool L_25;
			L_25 = DnsQuerySettings_get_UseCache_m3DBA3D8AA74061DEDF1B99FA92A23DED5CAEE79B_inline(L_24, /*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_011b;
			}
		}

IL_00e2:
		{
			DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_26 = __this->get_request_3();
			NullCheck(L_26);
			DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B * L_27;
			L_27 = DnsRequestMessage_get_Question_m392023E498B19AB69ABA462F1307663BB4629795_inline(L_26, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28_il2cpp_TypeInfo_var);
			String_t* L_28;
			L_28 = ResponseCache_GetCacheKey_m800D5CC0E696C4A9B5E33A2CB05D2ACD50DD4887(L_27, /*hidden argument*/NULL);
			__this->set_U3CcacheKeyU3E5__5_12(L_28);
			LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * L_29 = V_1;
			String_t* L_30 = __this->get_U3CcacheKeyU3E5__5_12();
			DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_31 = __this->get_request_3();
			DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * L_32 = __this->get_settings_5();
			NullCheck(L_29);
			bool L_33;
			L_33 = LookupClient_TryGetCachedResult_m3A781442700DB4E7ADF4E4EA7FA29BC79EB5E224(L_29, L_30, L_31, L_32, (RuntimeObject**)(&V_3), /*hidden argument*/NULL);
			if (!L_33)
			{
				goto IL_011b;
			}
		}

IL_0114:
		{
			RuntimeObject* L_34 = V_3;
			V_2 = L_34;
			goto IL_081e;
		}

IL_011b:
		{
			__this->set_U3CtriesU3E5__6_13(0);
		}

IL_0122:
		{
			int32_t L_35 = __this->get_U3CtriesU3E5__6_13();
			if ((((int32_t)L_35) <= ((int32_t)0)))
			{
				goto IL_013b;
			}
		}

IL_012b:
		{
			DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_36 = __this->get_request_3();
			NullCheck(L_36);
			DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D * L_37;
			L_37 = DnsRequestMessage_get_Header_m5E0DF81C306F1A6AA04AF22708E461A0173E4F97_inline(L_36, /*hidden argument*/NULL);
			NullCheck(L_37);
			DnsRequestHeader_RefreshId_m31E8EEF3686BBCF84053EB721E2F80AE19710551(L_37, /*hidden argument*/NULL);
		}

IL_013b:
		{
			int32_t L_38 = __this->get_U3CtriesU3E5__6_13();
			V_4 = L_38;
			int32_t L_39 = V_4;
			__this->set_U3CtriesU3E5__6_13(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)));
			int32_t L_40 = __this->get_U3CtriesU3E5__6_13();
			DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * L_41 = __this->get_settings_5();
			NullCheck(L_41);
			int32_t L_42;
			L_42 = DnsQuerySettings_get_Retries_m4434254CF8888C2850632B5BFC1B7E59BF6F579C_inline(L_41, /*hidden argument*/NULL);
			__this->set_U3CisLastTryU3E5__7_14((bool)((((int32_t)L_40) > ((int32_t)L_42))? 1 : 0));
			__this->set_U3ClastQueryResponseU3E5__8_15((RuntimeObject*)NULL);
			LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * L_43 = V_1;
			NullCheck(L_43);
			RuntimeObject* L_44 = L_43->get__logger_3();
			NullCheck(L_44);
			bool L_45;
			L_45 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean DnsClient.Internal.ILogger::IsEnabled(DnsClient.Internal.LogLevel) */, ILogger_tABC012A6DBE0E70DCAB46C64C8826B3393A42E46_il2cpp_TypeInfo_var, L_44, 1);
			if (!L_45)
			{
				goto IL_01f7;
			}
		}

IL_017b:
		{
			LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * L_46 = V_1;
			NullCheck(L_46);
			RuntimeObject* L_47 = L_46->get__logger_3();
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_48 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_49 = L_48;
			DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_50 = __this->get_request_3();
			NullCheck(L_50);
			DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D * L_51;
			L_51 = DnsRequestMessage_get_Header_m5E0DF81C306F1A6AA04AF22708E461A0173E4F97_inline(L_50, /*hidden argument*/NULL);
			NullCheck(L_51);
			int32_t L_52;
			L_52 = DnsRequestHeader_get_Id_mC83131B795D3434BFC4B62C87D14895411564C16_inline(L_51, /*hidden argument*/NULL);
			int32_t L_53 = L_52;
			RuntimeObject * L_54 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_53);
			NullCheck(L_49);
			ArrayElementTypeCheck (L_49, L_54);
			(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_54);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_55 = L_49;
			DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * L_56 = __this->get_handler_2();
			NullCheck(L_56);
			int32_t L_57;
			L_57 = VirtFuncInvoker0< int32_t >::Invoke(4 /* DnsClient.DnsMessageHandleType DnsClient.DnsMessageHandler::get_Type() */, L_56);
			int32_t L_58 = L_57;
			RuntimeObject * L_59 = Box(DnsMessageHandleType_tBC2ECE88ABCDB3FCD65C0CE07A42AC466D2AB516_il2cpp_TypeInfo_var, &L_58);
			NullCheck(L_55);
			ArrayElementTypeCheck (L_55, L_59);
			(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_59);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = L_55;
			DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_61 = __this->get_request_3();
			NullCheck(L_61);
			DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B * L_62;
			L_62 = DnsRequestMessage_get_Question_m392023E498B19AB69ABA462F1307663BB4629795_inline(L_61, /*hidden argument*/NULL);
			NullCheck(L_60);
			ArrayElementTypeCheck (L_60, L_62);
			(L_60)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_62);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_63 = L_60;
			NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * L_64 = __this->get_U3CserverInfoU3E5__3_10();
			NullCheck(L_63);
			ArrayElementTypeCheck (L_63, L_64);
			(L_63)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_64);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_65 = L_63;
			int32_t L_66 = __this->get_U3CtriesU3E5__6_13();
			int32_t L_67 = L_66;
			RuntimeObject * L_68 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_67);
			NullCheck(L_65);
			ArrayElementTypeCheck (L_65, L_68);
			(L_65)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_68);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_69 = L_65;
			DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * L_70 = __this->get_settings_5();
			NullCheck(L_70);
			int32_t L_71;
			L_71 = DnsQuerySettings_get_Retries_m4434254CF8888C2850632B5BFC1B7E59BF6F579C_inline(L_70, /*hidden argument*/NULL);
			int32_t L_72 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
			RuntimeObject * L_73 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_72);
			NullCheck(L_69);
			ArrayElementTypeCheck (L_69, L_73);
			(L_69)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_73);
			LoggerExtensions_LogDebug_m63FB1D574D0AC2FDF8FF113D2AC51F6D29621E98(L_47, 2, _stringLiteral9D2B55C4D6F60EC2DEB337D17194E38A53D1285A, L_69, /*hidden argument*/NULL);
		}

IL_01f7:
		{
		}

IL_01f8:
		try
		{ // begin try (depth: 2)
			try
			{ // begin try (depth: 3)
				try
				{ // begin try (depth: 4)
					{
						int32_t L_74 = V_0;
						if (!L_74)
						{
							goto IL_02fe;
						}
					}

IL_01fe:
					{
						int32_t L_75 = V_0;
						if ((((int32_t)L_75) == ((int32_t)1)))
						{
							goto IL_0411;
						}
					}

IL_0205:
					{
						U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF * L_76 = (U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF_il2cpp_TypeInfo_var);
						U3CU3Ec__DisplayClass101_0__ctor_mA8156F6149483DA001B3AF89F5ACD4DF006B7A37(L_76, /*hidden argument*/NULL);
						V_5 = L_76;
						CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_77 = __this->get_address_of_cancellationToken_8();
						CancellationToken_ThrowIfCancellationRequested_m987F0BEA5521F5575C5E766345C04E7E5E0CD210((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_77, /*hidden argument*/NULL);
						LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_78 = __this->get_audit_6();
						LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_79 = L_78;
						G_B27_0 = L_79;
						if (L_79)
						{
							G_B28_0 = L_79;
							goto IL_0223;
						}
					}

IL_0220:
					{
						goto IL_0228;
					}

IL_0223:
					{
						NullCheck(G_B28_0);
						LookupClientAudit_StartTimer_m7374CD560F33C98DF48169C2C6D372E0D845ECA3(G_B28_0, /*hidden argument*/NULL);
					}

IL_0228:
					{
						U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF * L_80 = V_5;
						IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D_il2cpp_TypeInfo_var);
						Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_81 = ((U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D_il2cpp_TypeInfo_var))->get_U3CU3E9__101_0_1();
						Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_82 = L_81;
						G_B30_0 = L_82;
						G_B30_1 = L_80;
						if (L_82)
						{
							G_B31_0 = L_82;
							G_B31_1 = L_80;
							goto IL_0249;
						}
					}

IL_0232:
					{
						IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D_il2cpp_TypeInfo_var);
						U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D * L_83 = ((U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
						Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_84 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
						Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_84, L_83, (intptr_t)((intptr_t)U3CU3Ec_U3CResolveQueryAsyncU3Eb__101_0_mFEA5876274D419EE65106FD1527EC8D412DE871F_RuntimeMethod_var), /*hidden argument*/NULL);
						Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_85 = L_84;
						((U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A276C1CC28B54B8A2E5D9952D8C0D9B0EECD34D_il2cpp_TypeInfo_var))->set_U3CU3E9__101_0_1(L_85);
						G_B31_0 = L_85;
						G_B31_1 = G_B30_1;
					}

IL_0249:
					{
						NullCheck(G_B31_1);
						G_B31_1->set_onCancel_0(G_B31_0);
						DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * L_86 = __this->get_handler_2();
						NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * L_87 = __this->get_U3CserverInfoU3E5__3_10();
						NullCheck(L_87);
						IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_88;
						L_88 = NameServer_get_IPEndPoint_mD8896AC6855B0A8AD8D887BAE6DAF4E9B1F4AF12_inline(L_87, /*hidden argument*/NULL);
						DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_89 = __this->get_request_3();
						CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_90 = __this->get_cancellationToken_8();
						U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF * L_91 = V_5;
						Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * L_92 = (Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC *)il2cpp_codegen_object_new(Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC_il2cpp_TypeInfo_var);
						Action_1__ctor_mA76F0902F47C07F43966555A9B53075E365DCE3F(L_92, L_91, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass101_0_U3CResolveQueryAsyncU3Eb__1_m5BE108B13FBECF6310CD40670F58E0E40EB04007_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA76F0902F47C07F43966555A9B53075E365DCE3F_RuntimeMethod_var);
						NullCheck(L_86);
						Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 * L_93;
						L_93 = VirtFuncInvoker4< Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 *, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *, DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , Action_1_tAAEAEF587B7F955A86B143379726990811FA92DC * >::Invoke(6 /* System.Threading.Tasks.Task`1<DnsClient.DnsResponseMessage> DnsClient.DnsMessageHandler::QueryAsync(System.Net.IPEndPoint,DnsClient.DnsRequestMessage,System.Threading.CancellationToken,System.Action`1<System.Action>) */, L_86, L_88, L_89, L_90, L_92);
						V_7 = L_93;
						DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * L_94 = __this->get_settings_5();
						NullCheck(L_94);
						TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_95;
						L_95 = DnsQuerySettings_get_Timeout_m465467C5BC1883B0EA5E41FAC0F39A012879A05D_inline(L_94, /*hidden argument*/NULL);
						IL2CPP_RUNTIME_CLASS_INIT(Timeout_t1D83B13AB177AA6C3028AA49BDFBA6EE7E142050_il2cpp_TypeInfo_var);
						TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_96 = ((Timeout_t1D83B13AB177AA6C3028AA49BDFBA6EE7E142050_StaticFields*)il2cpp_codegen_static_fields_for(Timeout_t1D83B13AB177AA6C3028AA49BDFBA6EE7E142050_il2cpp_TypeInfo_var))->get_InfiniteTimeSpan_0();
						IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
						bool L_97;
						L_97 = TimeSpan_op_Inequality_mDE127E1886D092054E24EA873CEE64D0857CD04C(L_95, L_96, /*hidden argument*/NULL);
						if (L_97)
						{
							goto IL_02bb;
						}
					}

IL_0296:
					{
						CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_98 = __this->get_cancellationToken_8();
						IL2CPP_RUNTIME_CLASS_INIT(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var);
						CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_99;
						L_99 = CancellationToken_get_None_m13F4B9DCF5D7BE8E9E3F60026C98E50A946FE9DF(/*hidden argument*/NULL);
						bool L_100;
						L_100 = CancellationToken_op_Inequality_m7CC475A961147C03C3665DBF0CB9DA0D1F08B2B7(L_98, L_99, /*hidden argument*/NULL);
						if (!L_100)
						{
							goto IL_03d1;
						}
					}

IL_02ab:
					{
						CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_101 = __this->get_address_of_cancellationToken_8();
						bool L_102;
						L_102 = CancellationToken_get_CanBeCanceled_m6E3578EE53E9E051760D798F120A1EB4357B4E09((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_101, /*hidden argument*/NULL);
						if (!L_102)
						{
							goto IL_03d1;
						}
					}

IL_02bb:
					{
						DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * L_103 = __this->get_settings_5();
						NullCheck(L_103);
						TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_104;
						L_104 = DnsQuerySettings_get_Timeout_m465467C5BC1883B0EA5E41FAC0F39A012879A05D_inline(L_103, /*hidden argument*/NULL);
						CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_105 = (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)il2cpp_codegen_object_new(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
						CancellationTokenSource__ctor_mC98ADD69D91E9695DB087CAC95159CD2E37B0466(L_105, L_104, /*hidden argument*/NULL);
						V_9 = L_105;
						V_10 = (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)NULL;
						CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_106 = __this->get_cancellationToken_8();
						IL2CPP_RUNTIME_CLASS_INIT(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var);
						CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_107;
						L_107 = CancellationToken_get_None_m13F4B9DCF5D7BE8E9E3F60026C98E50A946FE9DF(/*hidden argument*/NULL);
						bool L_108;
						L_108 = CancellationToken_op_Inequality_m7CC475A961147C03C3665DBF0CB9DA0D1F08B2B7(L_106, L_107, /*hidden argument*/NULL);
						if (!L_108)
						{
							goto IL_02f6;
						}
					}

IL_02e2:
					{
						CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_109 = V_9;
						NullCheck(L_109);
						CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_110;
						L_110 = CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C(L_109, /*hidden argument*/NULL);
						CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_111 = __this->get_cancellationToken_8();
						IL2CPP_RUNTIME_CLASS_INIT(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
						CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_112;
						L_112 = CancellationTokenSource_CreateLinkedTokenSource_mBCC8769107D706E358D18C97520172AD8CE79480(L_110, L_111, /*hidden argument*/NULL);
						V_10 = L_112;
					}

IL_02f6:
					{
						CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_113 = V_9;
						__this->set_U3CU3E7__wrap8_16(L_113);
					}

IL_02fe:
					{
					}

IL_02ff:
					try
					{ // begin try (depth: 5)
						{
							int32_t L_114 = V_0;
							if (!L_114)
							{
								goto IL_030a;
							}
						}

IL_0302:
						{
							CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_115 = V_10;
							__this->set_U3CU3E7__wrap9_17(L_115);
						}

IL_030a:
						{
						}

IL_030b:
						try
						{ // begin try (depth: 6)
							{
								int32_t L_116 = V_0;
								if (!L_116)
								{
									goto IL_0367;
								}
							}

IL_030e:
							{
								Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 * L_117 = V_7;
								CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_118 = V_10;
								CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_119 = L_118;
								G_B43_0 = L_119;
								G_B43_1 = L_117;
								if (L_119)
								{
									G_B44_0 = L_119;
									G_B44_1 = L_117;
									goto IL_0318;
								}
							}

IL_0315:
							{
								CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_120 = V_9;
								G_B44_0 = L_120;
								G_B44_1 = G_B43_1;
							}

IL_0318:
							{
								NullCheck(G_B44_0);
								CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_121;
								L_121 = CancellationTokenSource_get_Token_m2A9A82BA3532B89870363E8C1DEAE2F1EFD3962C(G_B44_0, /*hidden argument*/NULL);
								U3CU3Ec__DisplayClass101_0_t0DF58F53A1516CDBC64720C730FBD67B7BE06AAF * L_122 = V_5;
								NullCheck(L_122);
								Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_123 = L_122->get_onCancel_0();
								Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 * L_124;
								L_124 = TaskExtensions_WithCancellation_TisDnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9_m19FBEBBC64A80A00E4FEA032E68A8E2462B3341B(G_B44_1, L_121, L_123, /*hidden argument*/TaskExtensions_WithCancellation_TisDnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9_m19FBEBBC64A80A00E4FEA032E68A8E2462B3341B_RuntimeMethod_var);
								NullCheck(L_124);
								ConfiguredTaskAwaitable_1_t536069738E1EE81F050F5B181584528022FA78D8  L_125;
								L_125 = Task_1_ConfigureAwait_m88862B69D2BD5EDA40FCB8650A46CF332A210988(L_124, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m88862B69D2BD5EDA40FCB8650A46CF332A210988_RuntimeMethod_var);
								V_12 = L_125;
								ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  L_126;
								L_126 = ConfiguredTaskAwaitable_1_GetAwaiter_m2656FC8B5FA9072E092F3D681A900E4CDE900BDB_inline((ConfiguredTaskAwaitable_1_t536069738E1EE81F050F5B181584528022FA78D8 *)(&V_12), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m2656FC8B5FA9072E092F3D681A900E4CDE900BDB_RuntimeMethod_var);
								V_11 = L_126;
								bool L_127;
								L_127 = ConfiguredTaskAwaiter_get_IsCompleted_mD82A0486D406821729B5959CB3BBADCC5CFAE2F5((ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F *)(&V_11), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mD82A0486D406821729B5959CB3BBADCC5CFAE2F5_RuntimeMethod_var);
								if (L_127)
								{
									goto IL_0384;
								}
							}

IL_0343:
							{
								int32_t L_128 = 0;
								V_0 = L_128;
								__this->set_U3CU3E1__state_0(L_128);
								ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  L_129 = V_11;
								__this->set_U3CU3Eu__1_18(L_129);
								AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 * L_130 = __this->get_address_of_U3CU3Et__builder_1();
								AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F_TisU3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1_m45AA50F4CC1DEC8814223FA544E8C6C5170C8203((AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 *)L_130, (ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F *)(&V_11), (U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F_TisU3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1_m45AA50F4CC1DEC8814223FA544E8C6C5170C8203_RuntimeMethod_var);
								IL2CPP_LEAVE(0x832, FINALLY_038f);
							}

IL_0367:
							{
								ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  L_131 = __this->get_U3CU3Eu__1_18();
								V_11 = L_131;
								ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F * L_132 = __this->get_address_of_U3CU3Eu__1_18();
								il2cpp_codegen_initobj(L_132, sizeof(ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F ));
								int32_t L_133 = (-1);
								V_0 = L_133;
								__this->set_U3CU3E1__state_0(L_133);
							}

IL_0384:
							{
								DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9 * L_134;
								L_134 = ConfiguredTaskAwaiter_GetResult_m08C47E38E1A21F776190E44C64BEDEA3F51D0427((ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F *)(&V_11), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m08C47E38E1A21F776190E44C64BEDEA3F51D0427_RuntimeMethod_var);
								V_6 = L_134;
								IL2CPP_LEAVE(0x3A7, FINALLY_038f);
							}
						} // end try (depth: 6)
						catch(Il2CppExceptionWrapper& e)
						{
							__last_unhandled_exception = (Exception_t *)e.ex;
							goto FINALLY_038f;
						}

FINALLY_038f:
						{ // begin finally (depth: 6)
							{
								int32_t L_135 = V_0;
								if ((((int32_t)L_135) >= ((int32_t)0)))
								{
									goto IL_03a6;
								}
							}

IL_0393:
							{
								CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_136 = __this->get_U3CU3E7__wrap9_17();
								if (!L_136)
								{
									goto IL_03a6;
								}
							}

IL_039b:
							{
								CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_137 = __this->get_U3CU3E7__wrap9_17();
								NullCheck(L_137);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_137);
							}

IL_03a6:
							{
								IL2CPP_END_FINALLY(911)
							}
						} // end finally (depth: 6)
						IL2CPP_CLEANUP(911)
						{
							IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
							IL2CPP_END_CLEANUP(0x832, FINALLY_03b0);
							IL2CPP_JUMP_TBL(0x3A7, IL_03a7)
						}

IL_03a7:
						{
							__this->set_U3CU3E7__wrap9_17((CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)NULL);
							IL2CPP_LEAVE(0x3C8, FINALLY_03b0);
						}
					} // end try (depth: 5)
					catch(Il2CppExceptionWrapper& e)
					{
						__last_unhandled_exception = (Exception_t *)e.ex;
						goto FINALLY_03b0;
					}

FINALLY_03b0:
					{ // begin finally (depth: 5)
						{
							int32_t L_138 = V_0;
							if ((((int32_t)L_138) >= ((int32_t)0)))
							{
								goto IL_03c7;
							}
						}

IL_03b4:
						{
							CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_139 = __this->get_U3CU3E7__wrap8_16();
							if (!L_139)
							{
								goto IL_03c7;
							}
						}

IL_03bc:
						{
							CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_140 = __this->get_U3CU3E7__wrap8_16();
							NullCheck(L_140);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_140);
						}

IL_03c7:
						{
							IL2CPP_END_FINALLY(944)
						}
					} // end finally (depth: 5)
					IL2CPP_CLEANUP(944)
					{
						IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
						IL2CPP_JUMP_TBL(0x832, IL_0832)
						IL2CPP_JUMP_TBL(0x3C8, IL_03c8)
					}

IL_03c8:
					{
						__this->set_U3CU3E7__wrap8_16((CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)NULL);
						goto IL_0437;
					}

IL_03d1:
					{
						Task_1_tDDA3034B9B3202FF278AD8BA43D81B0DB9DD3700 * L_141 = V_7;
						NullCheck(L_141);
						ConfiguredTaskAwaitable_1_t536069738E1EE81F050F5B181584528022FA78D8  L_142;
						L_142 = Task_1_ConfigureAwait_m88862B69D2BD5EDA40FCB8650A46CF332A210988(L_141, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m88862B69D2BD5EDA40FCB8650A46CF332A210988_RuntimeMethod_var);
						V_12 = L_142;
						ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  L_143;
						L_143 = ConfiguredTaskAwaitable_1_GetAwaiter_m2656FC8B5FA9072E092F3D681A900E4CDE900BDB_inline((ConfiguredTaskAwaitable_1_t536069738E1EE81F050F5B181584528022FA78D8 *)(&V_12), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m2656FC8B5FA9072E092F3D681A900E4CDE900BDB_RuntimeMethod_var);
						V_11 = L_143;
						bool L_144;
						L_144 = ConfiguredTaskAwaiter_get_IsCompleted_mD82A0486D406821729B5959CB3BBADCC5CFAE2F5((ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F *)(&V_11), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mD82A0486D406821729B5959CB3BBADCC5CFAE2F5_RuntimeMethod_var);
						if (L_144)
						{
							goto IL_042e;
						}
					}

IL_03ed:
					{
						int32_t L_145 = 1;
						V_0 = L_145;
						__this->set_U3CU3E1__state_0(L_145);
						ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  L_146 = V_11;
						__this->set_U3CU3Eu__1_18(L_146);
						AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 * L_147 = __this->get_address_of_U3CU3Et__builder_1();
						AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F_TisU3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1_m45AA50F4CC1DEC8814223FA544E8C6C5170C8203((AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 *)L_147, (ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F *)(&V_11), (U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F_TisU3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1_m45AA50F4CC1DEC8814223FA544E8C6C5170C8203_RuntimeMethod_var);
						goto IL_0832;
					}

IL_0411:
					{
						ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F  L_148 = __this->get_U3CU3Eu__1_18();
						V_11 = L_148;
						ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F * L_149 = __this->get_address_of_U3CU3Eu__1_18();
						il2cpp_codegen_initobj(L_149, sizeof(ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F ));
						int32_t L_150 = (-1);
						V_0 = L_150;
						__this->set_U3CU3E1__state_0(L_150);
					}

IL_042e:
					{
						DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9 * L_151;
						L_151 = ConfiguredTaskAwaiter_GetResult_m08C47E38E1A21F776190E44C64BEDEA3F51D0427((ConfiguredTaskAwaiter_t4DA725301F4FB032FE82C9817FAE8A148B4AAA4F *)(&V_11), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m08C47E38E1A21F776190E44C64BEDEA3F51D0427_RuntimeMethod_var);
						V_6 = L_151;
					}

IL_0437:
					{
						LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * L_152 = V_1;
						LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_153 = __this->get_audit_6();
						DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_154 = __this->get_request_3();
						DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9 * L_155 = V_6;
						DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * L_156 = __this->get_settings_5();
						NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * L_157 = __this->get_U3CserverInfoU3E5__3_10();
						DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * L_158 = __this->get_handler_2();
						NullCheck(L_158);
						int32_t L_159;
						L_159 = VirtFuncInvoker0< int32_t >::Invoke(4 /* DnsClient.DnsMessageHandleType DnsClient.DnsMessageHandler::get_Type() */, L_158);
						RuntimeObject* L_160 = __this->get_servers_4();
						NullCheck(L_160);
						int32_t L_161;
						L_161 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<DnsClient.NameServer>::get_Count() */, IReadOnlyCollection_1_t40D1FB56B357DE4B47E290F7BA5A849F53504038_il2cpp_TypeInfo_var, L_160);
						bool L_162 = __this->get_U3CisLastServerU3E5__4_11();
						NullCheck(L_152);
						RuntimeObject* L_163;
						L_163 = LookupClient_ProcessResponseMessage_mD9444D09B8C1D98936A3FB1E4FE4322E7A9C9CC0(L_152, L_153, L_154, L_155, L_156, L_157, L_159, L_161, L_162, (int32_t*)(&V_8), /*hidden argument*/NULL);
						__this->set_U3ClastQueryResponseU3E5__8_15(L_163);
						RuntimeObject* L_164 = __this->get_U3ClastQueryResponseU3E5__8_15();
						if (!((TruncatedQueryResponse_t5EEF776C062C1EE4914FC548BAC82DFD71D23391 *)IsInstClass((RuntimeObject*)L_164, TruncatedQueryResponse_t5EEF776C062C1EE4914FC548BAC82DFD71D23391_il2cpp_TypeInfo_var)))
						{
							goto IL_0494;
						}
					}

IL_0488:
					{
						RuntimeObject* L_165 = __this->get_U3ClastQueryResponseU3E5__8_15();
						V_2 = L_165;
						goto IL_081e;
					}

IL_0494:
					{
						LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_166 = __this->get_audit_6();
						LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_167 = L_166;
						G_B65_0 = L_167;
						if (L_167)
						{
							G_B66_0 = L_167;
							goto IL_04a0;
						}
					}

IL_049d:
					{
						goto IL_04b1;
					}

IL_04a0:
					{
						RuntimeObject* L_168 = __this->get_U3ClastQueryResponseU3E5__8_15();
						NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * L_169 = __this->get_U3CserverInfoU3E5__3_10();
						NullCheck(G_B66_0);
						LookupClientAudit_AuditEnd_m0C632B92FE91AFF054DFB82F0A5FCECE39898F4E(G_B66_0, L_168, L_169, /*hidden argument*/NULL);
					}

IL_04b1:
					{
						LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_170 = __this->get_audit_6();
						LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_171 = L_170;
						G_B68_0 = L_171;
						if (L_171)
						{
							G_B69_0 = L_171;
							goto IL_04bd;
						}
					}

IL_04ba:
					{
						goto IL_04c9;
					}

IL_04bd:
					{
						RuntimeObject* L_172 = __this->get_U3ClastQueryResponseU3E5__8_15();
						NullCheck(G_B69_0);
						String_t* L_173;
						L_173 = LookupClientAudit_Build_mECD016096574A0C4F095D7509FD7A87CEAEF9D04(G_B69_0, L_172, /*hidden argument*/NULL);
					}

IL_04c9:
					{
						RuntimeObject* L_174 = __this->get_U3ClastQueryResponseU3E5__8_15();
						NullCheck(L_174);
						bool L_175;
						L_175 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean DnsClient.IDnsQueryResponse::get_HasError() */, IDnsQueryResponse_tBBA88F4C3CB5794B7998232442CBFD1517882CCE_il2cpp_TypeInfo_var, L_174);
						if (!L_175)
						{
							goto IL_0501;
						}
					}

IL_04d6:
					{
						DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9 * L_176 = V_6;
						NullCheck(L_176);
						DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB * L_177;
						L_177 = DnsResponseMessage_get_Header_m1A63428F26219396DC0DEEC343573C17244AF23E_inline(L_176, /*hidden argument*/NULL);
						NullCheck(L_177);
						int16_t L_178;
						L_178 = DnsResponseHeader_get_ResponseCode_m39FE4526F1F2459E66573A5F0B27BC649B61A68C(L_177, /*hidden argument*/NULL);
						DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * L_179 = (DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B_il2cpp_TypeInfo_var)));
						DnsResponseException__ctor_mBAF03D6A537C0F5C4D8DDF82C0DD958683AA7C67(L_179, L_178, /*hidden argument*/NULL);
						DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * L_180 = L_179;
						LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_181 = __this->get_audit_6();
						LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_182 = L_181;
						G_B72_0 = L_182;
						G_B72_1 = L_180;
						G_B72_2 = L_180;
						if (L_182)
						{
							G_B73_0 = L_182;
							G_B73_1 = L_180;
							G_B73_2 = L_180;
							goto IL_04f5;
						}
					}

IL_04f1:
					{
						G_B74_0 = ((String_t*)(NULL));
						G_B74_1 = G_B72_1;
						G_B74_2 = G_B72_2;
						goto IL_04fb;
					}

IL_04f5:
					{
						NullCheck(G_B73_0);
						String_t* L_183;
						L_183 = LookupClientAudit_Build_mECD016096574A0C4F095D7509FD7A87CEAEF9D04(G_B73_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
						G_B74_0 = L_183;
						G_B74_1 = G_B73_1;
						G_B74_2 = G_B73_2;
					}

IL_04fb:
					{
						NullCheck(G_B74_1);
						DnsResponseException_set_AuditTrail_m979D8CFCDDB1458BF3532C68FDA008EF4C682C9E_inline(G_B74_1, G_B74_0, /*hidden argument*/NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(G_B74_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54_RuntimeMethod_var)));
					}

IL_0501:
					{
						int32_t L_184 = V_8;
						if ((!(((uint32_t)L_184) == ((uint32_t)3))))
						{
							goto IL_050b;
						}
					}

IL_0506:
					{
						goto IL_078c;
					}

IL_050b:
					{
						DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * L_185 = __this->get_settings_5();
						NullCheck(L_185);
						bool L_186;
						L_186 = DnsQuerySettings_get_UseCache_m3DBA3D8AA74061DEDF1B99FA92A23DED5CAEE79B_inline(L_185, /*hidden argument*/NULL);
						if (!L_186)
						{
							goto IL_0530;
						}
					}

IL_0518:
					{
						LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * L_187 = V_1;
						NullCheck(L_187);
						ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28 * L_188;
						L_188 = LookupClient_get_Cache_m20F129FDC5DF706484B60877AA4CF114BE3E6759_inline(L_187, /*hidden argument*/NULL);
						String_t* L_189 = __this->get_U3CcacheKeyU3E5__5_12();
						RuntimeObject* L_190 = __this->get_U3ClastQueryResponseU3E5__8_15();
						NullCheck(L_188);
						bool L_191;
						L_191 = ResponseCache_Add_m0AC5C4D7E1E729B766BEC001F366BDAE5EA5346C(L_188, L_189, L_190, /*hidden argument*/NULL);
					}

IL_0530:
					{
						RuntimeObject* L_192 = __this->get_U3ClastQueryResponseU3E5__8_15();
						V_2 = L_192;
						goto IL_081e;
					}
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DnsResponseParseException_t8643D394CC55934F2F34B08A96ED7B727BD451BC_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_053c;
					}
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_057b;
					}
					throw e;
				}

CATCH_053c:
				{ // begin catch(DnsClient.DnsResponseParseException)
					{
						V_13 = ((DnsResponseParseException_t8643D394CC55934F2F34B08A96ED7B727BD451BC *)IL2CPP_GET_ACTIVE_EXCEPTION(DnsResponseParseException_t8643D394CC55934F2F34B08A96ED7B727BD451BC *));
						LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * L_193 = V_1;
						DnsResponseParseException_t8643D394CC55934F2F34B08A96ED7B727BD451BC * L_194 = V_13;
						DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_195 = __this->get_request_3();
						DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * L_196 = __this->get_handler_2();
						NullCheck(L_196);
						int32_t L_197;
						L_197 = VirtFuncInvoker0< int32_t >::Invoke(4 /* DnsClient.DnsMessageHandleType DnsClient.DnsMessageHandler::get_Type() */, L_196);
						bool L_198 = __this->get_U3CisLastServerU3E5__4_11();
						NullCheck(L_193);
						int32_t L_199;
						L_199 = LookupClient_HandleDnsResponeParseException_m0A2D642065D0FB4621556FB58390B13CCFA8C11A(L_193, L_194, L_195, L_197, L_198, /*hidden argument*/NULL);
						V_14 = L_199;
						int32_t L_200 = V_14;
						if ((!(((uint32_t)L_200) == ((uint32_t)3))))
						{
							goto IL_0569;
						}
					}

IL_0564:
					{
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_078c;
					}

IL_0569:
					{
						int32_t L_201 = V_14;
						if ((!(((uint32_t)L_201) == ((uint32_t)4))))
						{
							goto IL_0579;
						}
					}

IL_056e:
					{
						TruncatedQueryResponse_t5EEF776C062C1EE4914FC548BAC82DFD71D23391 * L_202 = (TruncatedQueryResponse_t5EEF776C062C1EE4914FC548BAC82DFD71D23391 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TruncatedQueryResponse_t5EEF776C062C1EE4914FC548BAC82DFD71D23391_il2cpp_TypeInfo_var)));
						TruncatedQueryResponse__ctor_m590E885A1675358E2FF5C5A195388544966064DB(L_202, /*hidden argument*/NULL);
						V_2 = L_202;
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_081e;
					}

IL_0579:
					{
						IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54_RuntimeMethod_var)));
					}
				} // end catch (depth: 4)

CATCH_057b:
				{ // begin catch(DnsClient.DnsResponseException)
					{
						V_15 = ((DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B *)IL2CPP_GET_ACTIVE_EXCEPTION(DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B *));
						LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * L_203 = V_1;
						DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * L_204 = V_15;
						DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_205 = __this->get_request_3();
						DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * L_206 = __this->get_settings_5();
						NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * L_207 = __this->get_U3CserverInfoU3E5__3_10();
						DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * L_208 = __this->get_handler_2();
						NullCheck(L_208);
						int32_t L_209;
						L_209 = VirtFuncInvoker0< int32_t >::Invoke(4 /* DnsClient.DnsMessageHandleType DnsClient.DnsMessageHandler::get_Type() */, L_208);
						bool L_210 = __this->get_U3CisLastServerU3E5__4_11();
						bool L_211 = __this->get_U3CisLastTryU3E5__7_14();
						int32_t L_212 = __this->get_U3CtriesU3E5__6_13();
						NullCheck(L_203);
						int32_t L_213;
						L_213 = LookupClient_HandleDnsResponseException_mD05FC4F14FFFAC262DFE29573C1BEDBA97DE9A71(L_203, L_204, L_205, L_206, L_207, L_209, L_210, L_211, L_212, /*hidden argument*/NULL);
						V_16 = L_213;
						int32_t L_214 = V_16;
						if ((!(((uint32_t)L_214) == ((uint32_t)1))))
						{
							goto IL_05bd;
						}
					}

IL_05bb:
					{
						IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54_RuntimeMethod_var)));
					}

IL_05bd:
					{
						int32_t L_215 = V_16;
						if ((!(((uint32_t)L_215) == ((uint32_t)2))))
						{
							goto IL_05c7;
						}
					}

IL_05c2:
					{
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_0776;
					}

IL_05c7:
					{
						int32_t L_216 = V_16;
						if ((!(((uint32_t)L_216) == ((uint32_t)3))))
						{
							goto IL_05d1;
						}
					}

IL_05cc:
					{
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_078c;
					}

IL_05d1:
					{
						RuntimeObject* L_217 = __this->get_U3ClastQueryResponseU3E5__8_15();
						if (L_217)
						{
							goto IL_05db;
						}
					}

IL_05d9:
					{
						IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54_RuntimeMethod_var)));
					}

IL_05db:
					{
						RuntimeObject* L_218 = __this->get_U3ClastQueryResponseU3E5__8_15();
						V_2 = L_218;
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_081e;
					}
				} // end catch (depth: 4)
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			}
			{ // begin filter(depth: 3)
				bool __filter_local = false;
				try
				{ // begin implicit try block
					{
						Exception_t * L_219 = ((Exception_t *)IsInstClass((RuntimeObject*)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var))));
						G_B95_0 = L_219;
						if (L_219)
						{
							G_B96_0 = L_219;
							goto IL_05f3;
						}
					}
					{
						G_B101_0 = 0;
						goto IL_061d;
					}

IL_05f3:
					{
						V_17 = G_B96_0;
						Exception_t * L_220 = V_17;
						if (((TimeoutException_tB5D0EEFAEC3FC79FFDEF23C55D1BDF4DE347C926 *)IsInstClass((RuntimeObject*)L_220, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeoutException_tB5D0EEFAEC3FC79FFDEF23C55D1BDF4DE347C926_il2cpp_TypeInfo_var)))))
						{
							goto IL_0619;
						}
					}
					{
						DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * L_221 = __this->get_handler_2();
						Exception_t * L_222 = V_17;
						NullCheck(L_221);
						bool L_223;
						L_223 = DnsMessageHandler_IsTransientException_TisException_t_mFA4D11BCE61D80E7E604EBFEFB2B30B1260C35D3(L_221, L_222, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DnsMessageHandler_IsTransientException_TisException_t_mFA4D11BCE61D80E7E604EBFEFB2B30B1260C35D3_RuntimeMethod_var)));
						if (L_223)
						{
							goto IL_0619;
						}
					}
					{
						Exception_t * L_224 = V_17;
						G_B100_0 = ((!(((RuntimeObject*)(OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)((OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)IsInstClass((RuntimeObject*)L_224, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
						goto IL_061a;
					}

IL_0619:
					{
						G_B100_0 = 1;
					}

IL_061a:
					{
						G_B101_0 = ((!(((uint32_t)G_B100_0) <= ((uint32_t)0)))? 1 : 0);
					}

IL_061d:
					{
						__filter_local = (G_B101_0) ? true : false;
					}
				} // end implicit try block
				catch(Il2CppExceptionWrapper&)
				{ // begin implicit catch block
					__filter_local = false;
				} // end implicit catch block
				if (__filter_local)
				{
					goto FILTER_061f;
				}
				else
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54_RuntimeMethod_var)));
				}
			} // end filter (depth: 3)

FILTER_061f:
			{ // begin catch(filter)
				{
					CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_225 = __this->get_address_of_cancellationToken_8();
					bool L_226;
					L_226 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_225, /*hidden argument*/NULL);
					if (L_226)
					{
						goto IL_067a;
					}
				}

IL_062d:
				{
					LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * L_227 = V_1;
					Exception_t * L_228 = V_17;
					DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_229 = __this->get_request_3();
					DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * L_230 = __this->get_settings_5();
					NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * L_231 = __this->get_U3CserverInfoU3E5__3_10();
					DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * L_232 = __this->get_handler_2();
					NullCheck(L_232);
					int32_t L_233;
					L_233 = VirtFuncInvoker0< int32_t >::Invoke(4 /* DnsClient.DnsMessageHandleType DnsClient.DnsMessageHandler::get_Type() */, L_232);
					bool L_234 = __this->get_U3CisLastServerU3E5__4_11();
					bool L_235 = __this->get_U3CisLastTryU3E5__7_14();
					int32_t L_236 = __this->get_U3CtriesU3E5__6_13();
					NullCheck(L_227);
					int32_t L_237;
					L_237 = LookupClient_HandleTimeoutException_mC604FC1B16A022BF98A958E3DBB4A5324E1A1BD0(L_227, L_228, L_229, L_230, L_231, L_233, L_234, L_235, L_236, /*hidden argument*/NULL);
					V_18 = L_237;
					int32_t L_238 = V_18;
					if ((!(((uint32_t)L_238) == ((uint32_t)2))))
					{
						goto IL_0670;
					}
				}

IL_066b:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0776;
				}

IL_0670:
				{
					int32_t L_239 = V_18;
					if ((!(((uint32_t)L_239) == ((uint32_t)3))))
					{
						goto IL_067a;
					}
				}

IL_0675:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_078c;
				}

IL_067a:
				{
					DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_240 = __this->get_request_3();
					NullCheck(L_240);
					DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D * L_241;
					L_241 = DnsRequestMessage_get_Header_m5E0DF81C306F1A6AA04AF22708E461A0173E4F97_inline(L_240, /*hidden argument*/NULL);
					NullCheck(L_241);
					int32_t L_242;
					L_242 = DnsRequestHeader_get_Id_mC83131B795D3434BFC4B62C87D14895411564C16_inline(L_241, /*hidden argument*/NULL);
					int32_t L_243 = L_242;
					RuntimeObject * L_244 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_243);
					DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_245 = __this->get_request_3();
					NullCheck(L_245);
					DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B * L_246;
					L_246 = DnsRequestMessage_get_Question_m392023E498B19AB69ABA462F1307663BB4629795_inline(L_245, /*hidden argument*/NULL);
					NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * L_247 = __this->get_U3CserverInfoU3E5__3_10();
					String_t* L_248;
					L_248 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD10DD2A1D34AB26470FEE59FA86FFD7910F46A6D)), L_244, L_246, L_247, /*hidden argument*/NULL);
					Exception_t * L_249 = V_17;
					DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * L_250 = (DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B_il2cpp_TypeInfo_var)));
					DnsResponseException__ctor_mBE3CAD8D28F1FD4B87FADB6E1B4EEF0B2720B7FA(L_250, ((int32_t)999), L_248, L_249, /*hidden argument*/NULL);
					DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * L_251 = L_250;
					LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_252 = __this->get_audit_6();
					LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_253 = L_252;
					G_B108_0 = L_253;
					G_B108_1 = L_251;
					G_B108_2 = L_251;
					if (L_253)
					{
						G_B109_0 = L_253;
						G_B109_1 = L_251;
						G_B109_2 = L_251;
						goto IL_06c4;
					}
				}

IL_06c0:
				{
					G_B110_0 = ((String_t*)(NULL));
					G_B110_1 = G_B108_1;
					G_B110_2 = G_B108_2;
					goto IL_06ca;
				}

IL_06c4:
				{
					NullCheck(G_B109_0);
					String_t* L_254;
					L_254 = LookupClientAudit_Build_mECD016096574A0C4F095D7509FD7A87CEAEF9D04(G_B109_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
					G_B110_0 = L_254;
					G_B110_1 = G_B109_1;
					G_B110_2 = G_B109_2;
				}

IL_06ca:
				{
					NullCheck(G_B110_1);
					DnsResponseException_set_AuditTrail_m979D8CFCDDB1458BF3532C68FDA008EF4C682C9E_inline(G_B110_1, G_B110_0, /*hidden argument*/NULL);
					IL2CPP_RAISE_MANAGED_EXCEPTION(G_B110_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54_RuntimeMethod_var)));
				}
			} // end catch (depth: 3)
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_06d0;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_06d3;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_06d6;
			}
			throw e;
		}

CATCH_06d0:
		{ // begin catch(System.ArgumentException)
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54_RuntimeMethod_var)));
		} // end catch (depth: 2)

CATCH_06d3:
		{ // begin catch(System.InvalidOperationException)
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54_RuntimeMethod_var)));
		} // end catch (depth: 2)

CATCH_06d6:
		{ // begin catch(System.Exception)
			{
				V_19 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
				LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_255 = __this->get_audit_6();
				LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_256 = L_255;
				G_B114_0 = L_256;
				if (L_256)
				{
					G_B115_0 = L_256;
					goto IL_06e4;
				}
			}

IL_06e1:
			{
				goto IL_06eb;
			}

IL_06e4:
			{
				Exception_t * L_257 = V_19;
				NullCheck(G_B115_0);
				LookupClientAudit_AuditException_m71328346EBE1506E5781E8ABC64A8BB5CB0B54CA(G_B115_0, L_257, /*hidden argument*/NULL);
			}

IL_06eb:
			{
				LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * L_258 = V_1;
				Exception_t * L_259 = V_19;
				DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_260 = __this->get_request_3();
				NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * L_261 = __this->get_U3CserverInfoU3E5__3_10();
				DnsMessageHandler_t233D6B8CFDA1F2FB767D4ACB69B1AE29A600D242 * L_262 = __this->get_handler_2();
				NullCheck(L_262);
				int32_t L_263;
				L_263 = VirtFuncInvoker0< int32_t >::Invoke(4 /* DnsClient.DnsMessageHandleType DnsClient.DnsMessageHandler::get_Type() */, L_262);
				bool L_264 = __this->get_U3CisLastServerU3E5__4_11();
				NullCheck(L_258);
				int32_t L_265;
				L_265 = LookupClient_HandleUnhandledException_mBF11848034C7243072EF157A7545659EFFE934DA(L_258, L_259, L_260, L_261, L_263, L_264, /*hidden argument*/NULL);
				V_20 = L_265;
				int32_t L_266 = V_20;
				if ((!(((uint32_t)L_266) == ((uint32_t)3))))
				{
					goto IL_0719;
				}
			}

IL_0717:
			{
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_078c;
			}

IL_0719:
			{
				int32_t L_267 = V_20;
				if ((!(((uint32_t)L_267) == ((uint32_t)2))))
				{
					goto IL_0720;
				}
			}

IL_071e:
			{
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0776;
			}

IL_0720:
			{
				DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_268 = __this->get_request_3();
				NullCheck(L_268);
				DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D * L_269;
				L_269 = DnsRequestMessage_get_Header_m5E0DF81C306F1A6AA04AF22708E461A0173E4F97_inline(L_268, /*hidden argument*/NULL);
				NullCheck(L_269);
				int32_t L_270;
				L_270 = DnsRequestHeader_get_Id_mC83131B795D3434BFC4B62C87D14895411564C16_inline(L_269, /*hidden argument*/NULL);
				int32_t L_271 = L_270;
				RuntimeObject * L_272 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_271);
				DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * L_273 = __this->get_request_3();
				NullCheck(L_273);
				DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B * L_274;
				L_274 = DnsRequestMessage_get_Question_m392023E498B19AB69ABA462F1307663BB4629795_inline(L_273, /*hidden argument*/NULL);
				NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * L_275 = __this->get_U3CserverInfoU3E5__3_10();
				String_t* L_276;
				L_276 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral28670253AAC028F1DB6FEA04B169B7855447E0D2)), L_272, L_274, L_275, /*hidden argument*/NULL);
				Exception_t * L_277 = V_19;
				DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * L_278 = (DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B_il2cpp_TypeInfo_var)));
				DnsResponseException__ctor_mBE3CAD8D28F1FD4B87FADB6E1B4EEF0B2720B7FA(L_278, ((int32_t)666), L_276, L_277, /*hidden argument*/NULL);
				DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * L_279 = L_278;
				LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_280 = __this->get_audit_6();
				LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_281 = L_280;
				G_B121_0 = L_281;
				G_B121_1 = L_279;
				G_B121_2 = L_279;
				if (L_281)
				{
					G_B122_0 = L_281;
					G_B122_1 = L_279;
					G_B122_2 = L_279;
					goto IL_076a;
				}
			}

IL_0766:
			{
				G_B123_0 = ((String_t*)(NULL));
				G_B123_1 = G_B121_1;
				G_B123_2 = G_B121_2;
				goto IL_0770;
			}

IL_076a:
			{
				NullCheck(G_B122_0);
				String_t* L_282;
				L_282 = LookupClientAudit_Build_mECD016096574A0C4F095D7509FD7A87CEAEF9D04(G_B122_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
				G_B123_0 = L_282;
				G_B123_1 = G_B122_1;
				G_B123_2 = G_B122_2;
			}

IL_0770:
			{
				NullCheck(G_B123_1);
				DnsResponseException_set_AuditTrail_m979D8CFCDDB1458BF3532C68FDA008EF4C682C9E_inline(G_B123_1, G_B123_0, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(G_B123_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54_RuntimeMethod_var)));
			}
		} // end catch (depth: 2)

IL_0776:
		{
			int32_t L_283 = __this->get_U3CtriesU3E5__6_13();
			DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * L_284 = __this->get_settings_5();
			NullCheck(L_284);
			int32_t L_285;
			L_285 = DnsQuerySettings_get_Retries_m4434254CF8888C2850632B5BFC1B7E59BF6F579C_inline(L_284, /*hidden argument*/NULL);
			if ((((int32_t)L_283) <= ((int32_t)L_285)))
			{
				goto IL_0122;
			}
		}

IL_078c:
		{
			__this->set_U3CserverInfoU3E5__3_10((NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E *)NULL);
			__this->set_U3CcacheKeyU3E5__5_12((String_t*)NULL);
			int32_t L_286 = __this->get_U3CserverIndexU3E5__2_9();
			V_4 = L_286;
			int32_t L_287 = V_4;
			__this->set_U3CserverIndexU3E5__2_9(((int32_t)il2cpp_codegen_add((int32_t)L_287, (int32_t)1)));
		}

IL_07ac:
		{
			int32_t L_288 = __this->get_U3CserverIndexU3E5__2_9();
			RuntimeObject* L_289 = __this->get_servers_4();
			NullCheck(L_289);
			int32_t L_290;
			L_290 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<DnsClient.NameServer>::get_Count() */, IReadOnlyCollection_1_t40D1FB56B357DE4B47E290F7BA5A849F53504038_il2cpp_TypeInfo_var, L_289);
			if ((((int32_t)L_288) < ((int32_t)L_290)))
			{
				goto IL_0047;
			}
		}

IL_07c2:
		{
			RuntimeObject* L_291 = __this->get_servers_4();
			String_t* L_292;
			L_292 = String_Join_TisNameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_m1EDA34289997CF907CFBC34291BB23ABE85F9BE8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D)), L_291, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Join_TisNameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_m1EDA34289997CF907CFBC34291BB23ABE85F9BE8_RuntimeMethod_var)));
			String_t* L_293;
			L_293 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9745D702C802CF9C9AB3EC53210169CD1D79B315)), L_292, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)), /*hidden argument*/NULL);
			DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * L_294 = (DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B_il2cpp_TypeInfo_var)));
			DnsResponseException__ctor_mAC5CC250016E672E6CDDE88B22E192A97F09C9BD(L_294, ((int32_t)999), L_293, /*hidden argument*/NULL);
			DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * L_295 = L_294;
			LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_296 = __this->get_audit_6();
			LookupClientAudit_tA3875C28B7E1D52930CE6B31B35FDB0ACC4554A3 * L_297 = L_296;
			G_B128_0 = L_297;
			G_B128_1 = L_295;
			G_B128_2 = L_295;
			if (L_297)
			{
				G_B129_0 = L_297;
				G_B129_1 = L_295;
				G_B129_2 = L_295;
				goto IL_07f9;
			}
		}

IL_07f5:
		{
			G_B130_0 = ((String_t*)(NULL));
			G_B130_1 = G_B128_1;
			G_B130_2 = G_B128_2;
			goto IL_07ff;
		}

IL_07f9:
		{
			NullCheck(G_B129_0);
			String_t* L_298;
			L_298 = LookupClientAudit_Build_mECD016096574A0C4F095D7509FD7A87CEAEF9D04(G_B129_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
			G_B130_0 = L_298;
			G_B130_1 = G_B129_1;
			G_B130_2 = G_B129_2;
		}

IL_07ff:
		{
			NullCheck(G_B130_1);
			DnsResponseException_set_AuditTrail_m979D8CFCDDB1458BF3532C68FDA008EF4C682C9E_inline(G_B130_1, G_B130_0, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(G_B130_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54_RuntimeMethod_var)));
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0805;
		}
		throw e;
	}

CATCH_0805:
	{ // begin catch(System.Exception)
		V_21 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 * L_299 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_300 = V_21;
		AsyncTaskMethodBuilder_1_SetException_mCC6263712051888BAB0E51D4687408F835926A80((AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 *)L_299, L_300, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mCC6263712051888BAB0E51D4687408F835926A80_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0832;
	} // end catch (depth: 1)

IL_081e:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 * L_301 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_302 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m1087C96370C903C960B4DD13032C34C99BBC20B9((AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 *)L_301, L_302, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m1087C96370C903C960B4DD13032C34C99BBC20B9_RuntimeMethod_var);
	}

IL_0832:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1 * _thisAdjusted = reinterpret_cast<U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1 *>(__this + _offset);
	U3CResolveQueryAsyncU3Ed__101_MoveNext_mD991DA8F0F35E2692DF72A5980C74B790BC76E54(_thisAdjusted, method);
}
// System.Void DnsClient.LookupClient/<ResolveQueryAsync>d__101::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResolveQueryAsyncU3Ed__101_SetStateMachine_m633AFFBCE83F9D348D2B952FF5352DE184CA4AD3 (U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m795CA528D6BC9854AFE044102C63F10BB8F22D7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m795CA528D6BC9854AFE044102C63F10BB8F22D7A((AsyncTaskMethodBuilder_1_t9274F3A1288A6E16A1447CBBCF8518EBB898F2F2 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m795CA528D6BC9854AFE044102C63F10BB8F22D7A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CResolveQueryAsyncU3Ed__101_SetStateMachine_m633AFFBCE83F9D348D2B952FF5352DE184CA4AD3_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1 * _thisAdjusted = reinterpret_cast<U3CResolveQueryAsyncU3Ed__101_tECD47757694547F72ADD6BAD4B076AA3A2DE41B1 *>(__this + _offset);
	U3CResolveQueryAsyncU3Ed__101_SetStateMachine_m633AFFBCE83F9D348D2B952FF5352DE184CA4AD3(_thisAdjusted, ___stateMachine0, method);
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
// System.Void DnsClient.LookupClient/SkipWorker::.ctor(System.Action,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipWorker__ctor_m51E4EDF2EA7775B19E392E0C273ADA36FBF0D869 (SkipWorker_tD9D2C20328DCE8F86E2B94A5230CCA5EC1FA2E4A * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___worker0, int32_t ___skip1, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	SkipWorker_tD9D2C20328DCE8F86E2B94A5230CCA5EC1FA2E4A * G_B2_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	SkipWorker_tD9D2C20328DCE8F86E2B94A5230CCA5EC1FA2E4A * G_B1_1 = NULL;
	{
		__this->set__skipFor_1(((int32_t)5000));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___worker0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral56C0D382AA01360686EC86280707D26099E2C9AD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkipWorker__ctor_m51E4EDF2EA7775B19E392E0C273ADA36FBF0D869_RuntimeMethod_var)));
	}

IL_0022:
	{
		NullCheck(G_B2_1);
		G_B2_1->set__worker_0(G_B2_0);
		int32_t L_3 = ___skip1;
		if ((((int32_t)L_3) > ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_4 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD46F0D83A0FFEB9F0B0ECB960630C2AE129F0445)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkipWorker__ctor_m51E4EDF2EA7775B19E392E0C273ADA36FBF0D869_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_5 = ___skip1;
		__this->set__skipFor_1(L_5);
		int32_t L_6;
		L_6 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
		__this->set__lastRun_2(((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647LL))));
		return;
	}
}
// System.Void DnsClient.LookupClient/SkipWorker::MaybeDoWork()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipWorker_MaybeDoWork_m0AF7ACF0D63DAF220D2D985C62262C27EA72BB2D (SkipWorker_tD9D2C20328DCE8F86E2B94A5230CCA5EC1FA2E4A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get__lastRun_2();
		int32_t L_1 = __this->get__skipFor_1();
		int32_t L_2;
		L_2 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))) < ((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647LL))))))
		{
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_001b:
	{
		int32_t L_3 = __this->get__lastRun_2();
		V_0 = L_3;
		int32_t* L_4 = __this->get_address_of__lastRun_2();
		int32_t L_5;
		L_5 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)L_4, ((int32_t)((int32_t)L_5&(int32_t)((int32_t)2147483647LL))), L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0047;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = __this->get__worker_0();
		NullCheck(L_9);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_9, /*hidden argument*/NULL);
	}

IL_0047:
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
// System.Void DnsClient.LookupClientAudit/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF97B3E187E3B224337540ACE55C68DA846DB6733 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9 * L_0 = (U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9 *)il2cpp_codegen_object_new(U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAB09E017A475A2BD16792C37EDB9BBBBA46694D7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void DnsClient.LookupClientAudit/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAB09E017A475A2BD16792C37EDB9BBBBA46694D7 (U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DnsClient.LookupClientAudit/<>c::<AuditEnd>b__16_0(DnsClient.Protocol.DnsResourceRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAuditEndU3Eb__16_0_m6A5FDC085DB26BC0B773C670A3F9C27E7ED063EA (U3CU3Ec_t4289B90E672FF59A4E5B57209230B3CB08EF02A9 * __this, DnsResourceRecord_tB777F2C5F97194975BB8561D94DBC213330828A4 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptRecord_t7166C5B33E5E73C4CA9508BB9EF7DEA6028DED1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DnsResourceRecord_tB777F2C5F97194975BB8561D94DBC213330828A4 * L_0 = ___p0;
		return (bool)((((int32_t)((!(((RuntimeObject*)(OptRecord_t7166C5B33E5E73C4CA9508BB9EF7DEA6028DED1D *)((OptRecord_t7166C5B33E5E73C4CA9508BB9EF7DEA6028DED1D *)IsInstClass((RuntimeObject*)L_0, OptRecord_t7166C5B33E5E73C4CA9508BB9EF7DEA6028DED1D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void DnsClient.NameServer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m67F828CEC83332E650DA70F9D2BB61B828B37FB6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A * L_0 = (U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A *)il2cpp_codegen_object_new(U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m884DAFBCDE71D04F7EDB1937B11133032C9BD135(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void DnsClient.NameServer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m884DAFBCDE71D04F7EDB1937B11133032C9BD135 (U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// DnsClient.NameServer DnsClient.NameServer/<>c::<ResolveNameServers>b__34_1(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * U3CU3Ec_U3CResolveNameServersU3Eb__34_1_m4638C8AB7AECA7B6F1B0FA92882D7BA52B163379 (U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_0 = ___p0;
		NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * L_1 = (NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E *)il2cpp_codegen_object_new(NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E_il2cpp_TypeInfo_var);
		NameServer__ctor_mDF17F4A154D3F3A6D82AEC1682542B1795D2915B(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean DnsClient.NameServer/<>c::<QueryNetworkInterfaces>b__35_0(System.Net.NetworkInformation.NetworkInterface)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CQueryNetworkInterfacesU3Eb__35_0_mA2D4891FAA49A708B988FB695E6AB7604EADEC9C (U3CU3Ec_t80E3E080DB9F684B5AA2863712D49906CAEBC29A * __this, NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * ___p0, const RuntimeMethod* method)
{
	{
		NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * L_0 = ___p0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_0);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * L_2 = ___p0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.NetworkInterface::get_OperationalStatus() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}

IL_0012:
	{
		NetworkInterface_tBCC292E547DEA78090B94E5A0B350C23BB9BC6CB * L_4 = ___p0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.NetworkInterface::get_NetworkInterfaceType() */, L_4);
		return (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)((int32_t)24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
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
// System.Void DnsClient.NameServer/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m6B2EBC622E68D3F2051D482B77DE9D00B5AF5A71 (U3CU3Ec__DisplayClass34_0_t90FA21695146462F09CA94F95C2A3D40106BA631 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DnsClient.NameServer/<>c__DisplayClass34_0::<ResolveNameServers>b__0(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass34_0_U3CResolveNameServersU3Eb__0_m08F44AE32FDA7DD2247E6D850751BFD203775D67 (U3CU3Ec__DisplayClass34_0_t90FA21695146462F09CA94F95C2A3D40106BA631 * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___p0, const RuntimeMethod* method)
{
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_0 = ___p0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_2 = ___p0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_0027;
		}
	}

IL_0013:
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_4 = ___p0;
		NullCheck(L_4);
		bool L_5;
		L_5 = IPAddress_get_IsIPv6SiteLocal_m881CFE5D9657870DBC04E05B2696C27CDF3F52C9(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		bool L_6 = __this->get_skipIPv6SiteLocal_0();
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0025:
	{
		return (bool)1;
	}

IL_0027:
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
// System.Void System.Linq.RecordCollectionExtension/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m9A98441D286905C2D3FC3E7FA7EBBB1741164A38 (U3CU3Ec__DisplayClass20_0_t8ECF2E793BE1F67217711285084AB62395589B9B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Linq.RecordCollectionExtension/<>c__DisplayClass20_0::<OfRecordType>b__0(DnsClient.Protocol.DnsResourceRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass20_0_U3COfRecordTypeU3Eb__0_m08BA88500EAD54E743CC6DDDE178A6BBE2A3672B (U3CU3Ec__DisplayClass20_0_t8ECF2E793BE1F67217711285084AB62395589B9B * __this, DnsResourceRecord_tB777F2C5F97194975BB8561D94DBC213330828A4 * ___p0, const RuntimeMethod* method)
{
	{
		DnsResourceRecord_tB777F2C5F97194975BB8561D94DBC213330828A4 * L_0 = ___p0;
		NullCheck(L_0);
		int16_t L_1;
		L_1 = ResourceRecordInfo_get_RecordType_m471894AB8C9C1EAE986EC621ACBDB5ED944A933D_inline(L_0, /*hidden argument*/NULL);
		int16_t L_2 = __this->get_type_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void DnsClient.ResponseCache/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4396F0B543B9D64483402AEBA6C3DA2C07688F94 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D * L_0 = (U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D *)il2cpp_codegen_object_new(U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE87853CC30ACB2DB79865A7EC0CD51A7A3028648(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void DnsClient.ResponseCache/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE87853CC30ACB2DB79865A7EC0CD51A7A3028648 (U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DnsClient.ResponseCache/<>c::<Add>b__25_0(DnsClient.Protocol.DnsResourceRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAddU3Eb__25_0_m359574053A0DA93ED32409ED53AD1F93CD58704E (U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D * __this, DnsResourceRecord_tB777F2C5F97194975BB8561D94DBC213330828A4 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptRecord_t7166C5B33E5E73C4CA9508BB9EF7DEA6028DED1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DnsResourceRecord_tB777F2C5F97194975BB8561D94DBC213330828A4 * L_0 = ___p0;
		return (bool)((((int32_t)((!(((RuntimeObject*)(OptRecord_t7166C5B33E5E73C4CA9508BB9EF7DEA6028DED1D *)((OptRecord_t7166C5B33E5E73C4CA9508BB9EF7DEA6028DED1D *)IsInstClass((RuntimeObject*)L_0, OptRecord_t7166C5B33E5E73C4CA9508BB9EF7DEA6028DED1D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 DnsClient.ResponseCache/<>c::<Add>b__25_1(DnsClient.Protocol.DnsResourceRecord)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CAddU3Eb__25_1_m0419DDD069D1EC25116A31B47452F1DAE6E187A0 (U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D * __this, DnsResourceRecord_tB777F2C5F97194975BB8561D94DBC213330828A4 * ___p0, const RuntimeMethod* method)
{
	{
		DnsResourceRecord_tB777F2C5F97194975BB8561D94DBC213330828A4 * L_0 = ___p0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ResourceRecordInfo_get_InitialTimeToLive_mE7A73038A2657262979A561E08AF451B189E4BBB_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DnsClient.ResponseCache/<>c::<StartCleanup>b__27_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartCleanupU3Eb__27_0_m110F16017F7E3B131135B339294F3CFD3D7198B5 (U3CU3Ec_t567DA833CFDF8243D21988C198BB0007A6A47A2D * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		IL2CPP_RUNTIME_CLASS_INIT(ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28_il2cpp_TypeInfo_var);
		ResponseCache_DoCleanup_mA907838A0BBB28D9F1F561F85C6633FB1F803EE2(((ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28 *)CastclassClass((RuntimeObject*)L_0, ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
// System.Boolean DnsClient.ResponseCache/ResponseEntry::IsExpiredFor(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResponseEntry_IsExpiredFor_m4196A2A9A33A6A4E4409658E75FACCCA73F2F491 (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___forDate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_0 = ___forDate0;
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1;
		L_1 = ResponseEntry_get_ExpiresAt_m3CD99B1D2B8DA52DB6DD6CB4337F5ED2DDC1FB25_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = DateTimeOffset_op_GreaterThanOrEqual_m328410C6ED97E4F75D0153CCA73E21E205210842(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.DateTimeOffset DnsClient.ResponseCache/ResponseEntry::get_ExpiresAt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ResponseEntry_get_ExpiresAt_m3CD99B1D2B8DA52DB6DD6CB4337F5ED2DDC1FB25 (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, const RuntimeMethod* method)
{
	{
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_0 = __this->get_U3CExpiresAtU3Ek__BackingField_0();
		return L_0;
	}
}
// System.DateTimeOffset DnsClient.ResponseCache/ResponseEntry::get_Created()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ResponseEntry_get_Created_m2D87E25288B8D3B3367CD81D14CCE0BCA8267865 (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, const RuntimeMethod* method)
{
	{
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_0 = __this->get_U3CCreatedU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Double DnsClient.ResponseCache/ResponseEntry::get_TTL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ResponseEntry_get_TTL_m98D2C3BC847B66FFC0E9A1DA591329031DB13A94 (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CTTLU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void DnsClient.ResponseCache/ResponseEntry::set_TTL(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseEntry_set_TTL_m3E5F4D5AA1FD157AFB8754670B5966D776A9DBF0 (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set_U3CTTLU3Ek__BackingField_2(L_0);
		return;
	}
}
// DnsClient.IDnsQueryResponse DnsClient.ResponseCache/ResponseEntry::get_Response()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResponseEntry_get_Response_mA39C16B42C80923309F83104FCA0A9CC35315AC5 (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CResponseU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void DnsClient.ResponseCache/ResponseEntry::.ctor(DnsClient.IDnsQueryResponse,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseEntry__ctor_mC78B47CDA9F5AD08E24E10CBA2DB574030987B0F (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, RuntimeObject* ___response0, double ___ttlInMS1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___response0;
		__this->set_U3CResponseU3Ek__BackingField_3(L_0);
		double L_1 = ___ttlInMS1;
		ResponseEntry_set_TTL_m3E5F4D5AA1FD157AFB8754670B5966D776A9DBF0_inline(__this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_2;
		L_2 = DateTimeOffset_get_UtcNow_m9ECEB6DAB05B153E7CDC0860E21C00F7562653AB(/*hidden argument*/NULL);
		__this->set_U3CCreatedU3Ek__BackingField_1(L_2);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_3;
		L_3 = ResponseEntry_get_Created_m2D87E25288B8D3B3367CD81D14CCE0BCA8267865_inline(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		double L_4;
		L_4 = ResponseEntry_get_TTL_m98D2C3BC847B66FFC0E9A1DA591329031DB13A94_inline(__this, /*hidden argument*/NULL);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_5;
		L_5 = DateTimeOffset_AddMilliseconds_m847143AE9F4D018AE6F7B36EA13A4F802755EE2F((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)(&V_0), L_4, /*hidden argument*/NULL);
		__this->set_U3CExpiresAtU3Ek__BackingField_0(L_5);
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
// DnsClient.Internal.ILogger DnsClient.Tracing/TraceLoggerFactory::CreateLogger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TraceLoggerFactory_CreateLogger_m554171FBC35FD95790A8771AA0D02264FEA92FCF (TraceLoggerFactory_tE000501B11CF1E465B0F7131FD3B5283523A4B8F * __this, String_t* ___categoryName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___categoryName0;
		TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F * L_1 = (TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F *)il2cpp_codegen_object_new(TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F_il2cpp_TypeInfo_var);
		TraceLogger__ctor_mCE26626E7E4015CFEE7707219FE43175270E96B9(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void DnsClient.Tracing/TraceLoggerFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceLoggerFactory__ctor_m626D3B5D017C273ECDE3E285153ED83D848984C0 (TraceLoggerFactory_tE000501B11CF1E465B0F7131FD3B5283523A4B8F * __this, const RuntimeMethod* method)
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
// System.Void DnsClient.Protocol.TxtRecord/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3445A23D8CBBEEA24B3B822BC96A2B9B138F3D63 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172 * L_0 = (U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172 *)il2cpp_codegen_object_new(U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8F6BB502588B25052DC19346D8E174B6C91F5979(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void DnsClient.Protocol.TxtRecord/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8F6BB502588B25052DC19346D8E174B6C91F5979 (U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String DnsClient.Protocol.TxtRecord/<>c::<RecordToString>b__7_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CRecordToStringU3Eb__7_0_mA0FB23FC1E82CED803FDFA0A2423EEA9CBABCCB2 (U3CU3Ec_tB901F612240D89845DFEC61B26D8853CCA3A8172 * __this, String_t* ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___p0;
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_0, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, /*hidden argument*/NULL);
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
// System.Void DnsClient.DnsTcpMessageHandler/ClientPool/<GetNextClient>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNextClientU3Ed__5_MoveNext_mEADDDCF02B0064AEA0BB0932C9E94F8E76551D88 (U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E_m203CC179A087A31DB9D221B0FE0FC20CFC90E903_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m46B01FB979A809E6C05E9C45B965319BD31B4618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LingerOption_t4E191E63AB49943D401B71B3E7830E6586CE0E34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * V_1 = NULL;
	ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * V_2 = NULL;
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00d5;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0199;
			}
		}

IL_001b:
		{
			ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = L_4->get_disposedValue_0();
			if (!L_5)
			{
				goto IL_002e;
			}
		}

IL_0023:
		{
			ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_6 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
			ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECB8D215DD88CA07BA4D287B2C583453ED16A5D1)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetNextClientU3Ed__5_MoveNext_mEADDDCF02B0064AEA0BB0932C9E94F8E76551D88_RuntimeMethod_var)));
		}

IL_002e:
		{
			__this->set_U3CentryU3E5__2_3((ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF *)NULL);
			ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = L_7->get__enablePool_1();
			if (!L_8)
			{
				goto IL_0119;
			}
		}

IL_0040:
		{
			goto IL_00f8;
		}

IL_0045:
		{
			ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * L_9 = V_1;
			NullCheck(L_9);
			IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_10 = L_9->get__endpoint_3();
			NullCheck(L_10);
			int32_t L_11;
			L_11 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily() */, L_10);
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_12 = (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE *)il2cpp_codegen_object_new(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE_il2cpp_TypeInfo_var);
			TcpClient__ctor_m67703F980AF859B47D938D2739C0E3D244659339(L_12, L_11, /*hidden argument*/NULL);
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_13 = L_12;
			LingerOption_t4E191E63AB49943D401B71B3E7830E6586CE0E34 * L_14 = (LingerOption_t4E191E63AB49943D401B71B3E7830E6586CE0E34 *)il2cpp_codegen_object_new(LingerOption_t4E191E63AB49943D401B71B3E7830E6586CE0E34_il2cpp_TypeInfo_var);
			LingerOption__ctor_m939C73C595D32F9A58592AC9FD8D66924C48E51A(L_14, (bool)1, 0, /*hidden argument*/NULL);
			NullCheck(L_13);
			TcpClient_set_LingerState_mEEA3F65E1D3C0A601F1DA4B31322F7F48F9F760B(L_13, L_14, /*hidden argument*/NULL);
			ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * L_15 = V_1;
			NullCheck(L_15);
			IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_16 = L_15->get__endpoint_3();
			ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * L_17 = (ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF *)il2cpp_codegen_object_new(ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF_il2cpp_TypeInfo_var);
			ClientEntry__ctor_mDB5303FC84905EB09076E373133CB504397B2360(L_17, L_13, L_16, /*hidden argument*/NULL);
			__this->set_U3CentryU3E5__2_3(L_17);
			ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * L_18 = __this->get_U3CentryU3E5__2_3();
			NullCheck(L_18);
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_19;
			L_19 = ClientEntry_get_Client_m6EF24B5BEF0CE943FA39DA24D3432F5ED1CD95F4_inline(L_18, /*hidden argument*/NULL);
			ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * L_20 = V_1;
			NullCheck(L_20);
			IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_21 = L_20->get__endpoint_3();
			NullCheck(L_21);
			IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_22;
			L_22 = IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline(L_21, /*hidden argument*/NULL);
			ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * L_23 = V_1;
			NullCheck(L_23);
			IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_24 = L_23->get__endpoint_3();
			NullCheck(L_24);
			int32_t L_25;
			L_25 = IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3_inline(L_24, /*hidden argument*/NULL);
			NullCheck(L_19);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_26;
			L_26 = TcpClient_ConnectAsync_mA5396B680DE36D2C9990339E962AD78536C4DB51(L_19, L_22, L_25, /*hidden argument*/NULL);
			NullCheck(L_26);
			ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_27;
			L_27 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_26, (bool)0, /*hidden argument*/NULL);
			V_4 = L_27;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_28;
			L_28 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_4), /*hidden argument*/NULL);
			V_3 = L_28;
			bool L_29;
			L_29 = ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), /*hidden argument*/NULL);
			if (L_29)
			{
				goto IL_00f1;
			}
		}

IL_00b2:
		{
			int32_t L_30 = 0;
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_31 = V_3;
			__this->set_U3CU3Eu__1_4(L_31);
			AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E_m203CC179A087A31DB9D221B0FE0FC20CFC90E903((AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 *)L_32, (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), (U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E_m203CC179A087A31DB9D221B0FE0FC20CFC90E903_RuntimeMethod_var);
			goto IL_01f2;
		}

IL_00d5:
		{
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_33 = __this->get_U3CU3Eu__1_4();
			V_3 = L_33;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * L_34 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_34, sizeof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C ));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->set_U3CU3E1__state_0(L_35);
		}

IL_00f1:
		{
			ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), /*hidden argument*/NULL);
		}

IL_00f8:
		{
			ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * L_36 = __this->get_U3CentryU3E5__2_3();
			if (L_36)
			{
				goto IL_01bc;
			}
		}

IL_0103:
		{
			ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * L_37 = V_1;
			ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF ** L_38 = __this->get_address_of_U3CentryU3E5__2_3();
			NullCheck(L_37);
			bool L_39;
			L_39 = ClientPool_TryDequeue_m7D214A65E2769D2CF8C8B8A6590A4A9EC2C7C7B0(L_37, (ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF **)L_38, /*hidden argument*/NULL);
			if (!L_39)
			{
				goto IL_0045;
			}
		}

IL_0114:
		{
			goto IL_01bc;
		}

IL_0119:
		{
			ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * L_40 = V_1;
			NullCheck(L_40);
			IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_41 = L_40->get__endpoint_3();
			NullCheck(L_41);
			int32_t L_42;
			L_42 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily() */, L_41);
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_43 = (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE *)il2cpp_codegen_object_new(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE_il2cpp_TypeInfo_var);
			TcpClient__ctor_m67703F980AF859B47D938D2739C0E3D244659339(L_43, L_42, /*hidden argument*/NULL);
			ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * L_44 = V_1;
			NullCheck(L_44);
			IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_45 = L_44->get__endpoint_3();
			ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * L_46 = (ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF *)il2cpp_codegen_object_new(ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF_il2cpp_TypeInfo_var);
			ClientEntry__ctor_mDB5303FC84905EB09076E373133CB504397B2360(L_46, L_43, L_45, /*hidden argument*/NULL);
			__this->set_U3CentryU3E5__2_3(L_46);
			ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * L_47 = __this->get_U3CentryU3E5__2_3();
			NullCheck(L_47);
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_48;
			L_48 = ClientEntry_get_Client_m6EF24B5BEF0CE943FA39DA24D3432F5ED1CD95F4_inline(L_47, /*hidden argument*/NULL);
			ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * L_49 = V_1;
			NullCheck(L_49);
			IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_50 = L_49->get__endpoint_3();
			NullCheck(L_50);
			IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_51;
			L_51 = IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline(L_50, /*hidden argument*/NULL);
			ClientPool_t6BE21EAC0C82E353F9CC2C5504D5AC2AE6D31160 * L_52 = V_1;
			NullCheck(L_52);
			IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_53 = L_52->get__endpoint_3();
			NullCheck(L_53);
			int32_t L_54;
			L_54 = IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3_inline(L_53, /*hidden argument*/NULL);
			NullCheck(L_48);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_55;
			L_55 = TcpClient_ConnectAsync_mA5396B680DE36D2C9990339E962AD78536C4DB51(L_48, L_51, L_54, /*hidden argument*/NULL);
			NullCheck(L_55);
			ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_56;
			L_56 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_55, (bool)0, /*hidden argument*/NULL);
			V_4 = L_56;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_57;
			L_57 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_4), /*hidden argument*/NULL);
			V_3 = L_57;
			bool L_58;
			L_58 = ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), /*hidden argument*/NULL);
			if (L_58)
			{
				goto IL_01b5;
			}
		}

IL_0179:
		{
			int32_t L_59 = 1;
			V_0 = L_59;
			__this->set_U3CU3E1__state_0(L_59);
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_60 = V_3;
			__this->set_U3CU3Eu__1_4(L_60);
			AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 * L_61 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E_m203CC179A087A31DB9D221B0FE0FC20CFC90E903((AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 *)L_61, (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), (U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E_m203CC179A087A31DB9D221B0FE0FC20CFC90E903_RuntimeMethod_var);
			goto IL_01f2;
		}

IL_0199:
		{
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_62 = __this->get_U3CU3Eu__1_4();
			V_3 = L_62;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * L_63 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_63, sizeof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C ));
			int32_t L_64 = (-1);
			V_0 = L_64;
			__this->set_U3CU3E1__state_0(L_64);
		}

IL_01b5:
		{
			ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), /*hidden argument*/NULL);
		}

IL_01bc:
		{
			ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * L_65 = __this->get_U3CentryU3E5__2_3();
			V_2 = L_65;
			goto IL_01de;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c5;
		}
		throw e;
	}

CATCH_01c5:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 * L_66 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_67 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mAEEAEF5A83D0A0781017DBFCD30D2D3813E9217B((AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 *)L_66, L_67, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mAEEAEF5A83D0A0781017DBFCD30D2D3813E9217B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01f2;
	} // end catch (depth: 1)

IL_01de:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 * L_68 = __this->get_address_of_U3CU3Et__builder_1();
		ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * L_69 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m46B01FB979A809E6C05E9C45B965319BD31B4618((AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 *)L_68, L_69, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m46B01FB979A809E6C05E9C45B965319BD31B4618_RuntimeMethod_var);
	}

IL_01f2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetNextClientU3Ed__5_MoveNext_mEADDDCF02B0064AEA0BB0932C9E94F8E76551D88_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E * _thisAdjusted = reinterpret_cast<U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E *>(__this + _offset);
	U3CGetNextClientU3Ed__5_MoveNext_mEADDDCF02B0064AEA0BB0932C9E94F8E76551D88(_thisAdjusted, method);
}
// System.Void DnsClient.DnsTcpMessageHandler/ClientPool/<GetNextClient>d__5::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNextClientU3Ed__5_SetStateMachine_m0C585ECB9B6062D378DB0CB8873935EBECACAA8D (U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m991CC36E8574C3467ECD880A62EF0BBCF2E282FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m991CC36E8574C3467ECD880A62EF0BBCF2E282FC((AsyncTaskMethodBuilder_1_tE7B64322F48A4C1399A4EB3B05B1839DEAD97BE6 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m991CC36E8574C3467ECD880A62EF0BBCF2E282FC_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetNextClientU3Ed__5_SetStateMachine_m0C585ECB9B6062D378DB0CB8873935EBECACAA8D_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E * _thisAdjusted = reinterpret_cast<U3CGetNextClientU3Ed__5_tE3C8B78F7152E9706430AD893FE9F236705C829E *>(__this + _offset);
	U3CGetNextClientU3Ed__5_SetStateMachine_m0C585ECB9B6062D378DB0CB8873935EBECACAA8D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry::.ctor(System.Net.Sockets.TcpClient,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientEntry__ctor_mDB5303FC84905EB09076E373133CB504397B2360 (ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * __this, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___client0, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___endpoint1, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
		__this->set_U3CStartMillisU3Ek__BackingField_2(((int32_t)((int32_t)L_0&(int32_t)((int32_t)2147483647LL))));
		__this->set_U3CMaxLiveTimeU3Ek__BackingField_3(((int32_t)5000));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_1 = ___client0;
		__this->set_U3CClientU3Ek__BackingField_0(L_1);
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_2 = ___endpoint1;
		__this->set_U3CEndpointU3Ek__BackingField_1(L_2);
		return;
	}
}
// System.Void DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry::DisposeClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientEntry_DisposeClient_m2030040B528BCC7C5FC5E7B7234ABF8B464C57B7 (ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * __this, const RuntimeMethod* method)
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0;
		L_0 = ClientEntry_get_Client_m6EF24B5BEF0CE943FA39DA24D3432F5ED1CD95F4_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(L_0, /*hidden argument*/NULL);
		goto IL_0010;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000d;
		}
		throw e;
	}

CATCH_000d:
	{ // begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0010;
	} // end catch (depth: 1)

IL_0010:
	{
		return;
	}
}
// System.Net.Sockets.TcpClient DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ClientEntry_get_Client_m6EF24B5BEF0CE943FA39DA24D3432F5ED1CD95F4 (ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * __this, const RuntimeMethod* method)
{
	{
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = __this->get_U3CClientU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Int32 DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry::get_StartMillis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientEntry_get_StartMillis_m2A0786B7223AB3E209158861B50F2601CD1D6BCE (ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStartMillisU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Int32 DnsClient.DnsTcpMessageHandler/ClientPool/ClientEntry::get_MaxLiveTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ClientEntry_get_MaxLiveTime_mF14CC2C7AE09CAE076B116CC7B1C54E492238EC1 (ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CMaxLiveTimeU3Ek__BackingField_3();
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
// System.Void DnsClient.Tracing/TraceLoggerFactory/TraceLogger::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceLogger__ctor_mCE26626E7E4015CFEE7707219FE43175270E96B9 (TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F * __this, String_t* ___name0, const RuntimeMethod* method)
{
	String_t* G_B2_0 = NULL;
	TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F * G_B1_1 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TraceLogger__ctor_mCE26626E7E4015CFEE7707219FE43175270E96B9_RuntimeMethod_var)));
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->set__name_0(G_B2_0);
		return;
	}
}
// System.Boolean DnsClient.Tracing/TraceLoggerFactory/TraceLogger::IsEnabled(DnsClient.Internal.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TraceLogger_IsEnabled_mC99CB1B44CF80D26A10CB277A9A78A8AE1460509 (TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F * __this, int32_t ___logLevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tracing_tC7FB30C589F90CD0B26A97CA9F0BCB4AEF1ACF8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tracing_tC7FB30C589F90CD0B26A97CA9F0BCB4AEF1ACF8D_il2cpp_TypeInfo_var);
		TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0 * L_0;
		L_0 = Tracing_get_Source_m3BAD09BD690CFBD86D983D9FE83BA286F3091DAF_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		SourceSwitch_tC1DEE6F688A13847CC249DEADD07D00178DE9ADC * L_1;
		L_1 = TraceSource_get_Switch_m8F7DB72267C1DF854A2013AE65B44842FDB8FAE4(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___logLevel0;
		int32_t L_3;
		L_3 = TraceLogger_GetTraceEventType_mF90FC336181E930790492588FD0D92FB10943990(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = SourceSwitch_ShouldTrace_mE8163BA8BD480300BD402629DE8AC9A0E9D04DD8(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void DnsClient.Tracing/TraceLoggerFactory/TraceLogger::Log(DnsClient.Internal.LogLevel,System.Int32,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceLogger_Log_m623C123411BA91D59FDC768732D590EB6BD0BB99 (TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F * __this, int32_t ___logLevel0, int32_t ___eventId1, Exception_t * ___exception2, String_t* ___message3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tracing_tC7FB30C589F90CD0B26A97CA9F0BCB4AEF1ACF8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	Exception_t * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	{
		String_t* L_0 = __this->get__name_0();
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_0, _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___message3;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_3 = V_0;
		String_t* L_4 = ___message3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = ___args4;
		String_t* L_6;
		L_6 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(L_4, L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_002a:
	{
		Exception_t * L_8 = ___exception2;
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		Exception_t * L_11 = ___exception2;
		Exception_t * L_12 = L_11;
		G_B4_0 = L_12;
		G_B4_1 = L_10;
		G_B4_2 = L_9;
		if (L_12)
		{
			G_B5_0 = L_12;
			G_B5_1 = L_10;
			G_B5_2 = L_9;
			goto IL_003b;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		goto IL_0040;
	}

IL_003b:
	{
		NullCheck(G_B5_0);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_13;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0040:
	{
		String_t* L_14;
		L_14 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B6_2, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tracing_tC7FB30C589F90CD0B26A97CA9F0BCB4AEF1ACF8D_il2cpp_TypeInfo_var);
		TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0 * L_15;
		L_15 = Tracing_get_Source_m3BAD09BD690CFBD86D983D9FE83BA286F3091DAF_inline(/*hidden argument*/NULL);
		int32_t L_16 = ___logLevel0;
		int32_t L_17;
		L_17 = TraceLogger_GetTraceEventType_mF90FC336181E930790492588FD0D92FB10943990(__this, L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___eventId1;
		String_t* L_19 = V_0;
		NullCheck(L_15);
		TraceSource_TraceEvent_mACEB20549F0CCB18513F6D5BB3F9BF4D3ED05551(L_15, L_17, L_18, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Diagnostics.TraceEventType DnsClient.Tracing/TraceLoggerFactory/TraceLogger::GetTraceEventType(DnsClient.Internal.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TraceLogger_GetTraceEventType_mF90FC336181E930790492588FD0D92FB10943990 (TraceLogger_tE93E22E320EEA1A0F972C0377DF8D84716B63F8F * __this, int32_t ___logLevel0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___logLevel0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0026;
			}
			case 3:
			{
				goto IL_0024;
			}
			case 4:
			{
				goto IL_0022;
			}
			case 5:
			{
				goto IL_0020;
			}
		}
	}
	{
		goto IL_002b;
	}

IL_0020:
	{
		return (int32_t)(1);
	}

IL_0022:
	{
		return (int32_t)(2);
	}

IL_0024:
	{
		return (int32_t)(4);
	}

IL_0026:
	{
		return (int32_t)(8);
	}

IL_0028:
	{
		return (int32_t)(((int32_t)16));
	}

IL_002b:
	{
		return (int32_t)(0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D * DnsRequestMessage_get_Header_m5E0DF81C306F1A6AA04AF22708E461A0173E4F97_inline (DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * __this, const RuntimeMethod* method)
{
	{
		DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D * L_0 = __this->get_U3CHeaderU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DnsQuerySettings_get_EnableAuditTrail_m38F4F92AFE8DE1D34C11079B0FE1EB8094A99DC1_inline (DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CEnableAuditTrailU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DnsQuerySettings_get_UseCache_m3DBA3D8AA74061DEDF1B99FA92A23DED5CAEE79B_inline (DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CUseCacheU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B * DnsRequestMessage_get_Question_m392023E498B19AB69ABA462F1307663BB4629795_inline (DnsRequestMessage_tECC41514176EB183D473D42BD1F8698D01390681 * __this, const RuntimeMethod* method)
{
	{
		DnsQuestion_tBC4A1F55F42288AAEC1FAB8D035CA93EDC7CFB8B * L_0 = __this->get_U3CQuestionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DnsQuerySettings_get_Retries_m4434254CF8888C2850632B5BFC1B7E59BF6F579C_inline (DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CRetriesU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DnsRequestHeader_get_Id_mC83131B795D3434BFC4B62C87D14895411564C16_inline (DnsRequestHeader_t473D407AD8FB2C46AC3A005F0A05D744A68C829D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * NameServer_get_IPEndPoint_mD8896AC6855B0A8AD8D887BAE6DAF4E9B1F4AF12_inline (NameServer_t6F84C34A977B627075F47239FE83E547C9DECD1E * __this, const RuntimeMethod* method)
{
	{
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = __this->get_U3CIPEndPointU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DnsQuerySettings_get_Timeout_m465467C5BC1883B0EA5E41FAC0F39A012879A05D_inline (DnsQuerySettings_tA876B9E51C087398F25D09BF7D81BF6013385A5D * __this, const RuntimeMethod* method)
{
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0 = __this->get_U3CTimeoutU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB * DnsResponseMessage_get_Header_m1A63428F26219396DC0DEEC343573C17244AF23E_inline (DnsResponseMessage_t95544900AC981AF7ACEA4A281106CA420EECA7F9 * __this, const RuntimeMethod* method)
{
	{
		DnsResponseHeader_tAF4E242101342BBCE14964D3621DAB515886A5BB * L_0 = __this->get_U3CHeaderU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnsResponseException_set_AuditTrail_m979D8CFCDDB1458BF3532C68FDA008EF4C682C9E_inline (DnsResponseException_t32EBA5883F3201691CA129BAF4D724CADDEBE68B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAuditTrailU3Ek__BackingField_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28 * LookupClient_get_Cache_m20F129FDC5DF706484B60877AA4CF114BE3E6759_inline (LookupClient_tAB723ECE7647381682349B2E04440B32DDE9EF1B * __this, const RuntimeMethod* method)
{
	{
		ResponseCache_t163C2227155653628F89C332FE2F5510EAB9FB28 * L_0 = __this->get_U3CCacheU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Family_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ResourceRecordInfo_get_RecordType_m471894AB8C9C1EAE986EC621ACBDB5ED944A933D_inline (ResourceRecordInfo_tFEB40ADCF4027A6A12E390090A94AB1155F57DEA * __this, const RuntimeMethod* method)
{
	{
		int16_t L_0 = __this->get_U3CRecordTypeU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResourceRecordInfo_get_InitialTimeToLive_mE7A73038A2657262979A561E08AF451B189E4BBB_inline (ResourceRecordInfo_tFEB40ADCF4027A6A12E390090A94AB1155F57DEA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CInitialTimeToLiveU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ResponseEntry_get_ExpiresAt_m3CD99B1D2B8DA52DB6DD6CB4337F5ED2DDC1FB25_inline (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, const RuntimeMethod* method)
{
	{
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_0 = __this->get_U3CExpiresAtU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResponseEntry_set_TTL_m3E5F4D5AA1FD157AFB8754670B5966D776A9DBF0_inline (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->set_U3CTTLU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ResponseEntry_get_Created_m2D87E25288B8D3B3367CD81D14CCE0BCA8267865_inline (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, const RuntimeMethod* method)
{
	{
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_0 = __this->get_U3CCreatedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ResponseEntry_get_TTL_m98D2C3BC847B66FFC0E9A1DA591329031DB13A94_inline (ResponseEntry_t8C9145EB82F34251079DC80D6B8BCB62C70CEB81 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->get_U3CTTLU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ClientEntry_get_Client_m6EF24B5BEF0CE943FA39DA24D3432F5ED1CD95F4_inline (ClientEntry_tA0ACDA7A2194C97018AC81BFCEC35DF3A9884BAF * __this, const RuntimeMethod* method)
{
	{
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = __this->get_U3CClientU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * IPEndPoint_get_Address_mD98DD9465D2DE39A73DD098B79062DBCE15C2A95_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method)
{
	{
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_0 = __this->get_m_Address_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_m442D84417A9E8942514FFBB9714FEE6BD094C6C3_inline (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Port_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_0 = __this->get_m_configuredTaskAwaiter_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0 * Tracing_get_Source_m3BAD09BD690CFBD86D983D9FE83BA286F3091DAF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tracing_tC7FB30C589F90CD0B26A97CA9F0BCB4AEF1ACF8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Tracing_tC7FB30C589F90CD0B26A97CA9F0BCB4AEF1ACF8D_il2cpp_TypeInfo_var);
		TraceSource_t9352669807550A52977BAD68AAECAAA3684D41F0 * L_0 = ((Tracing_tC7FB30C589F90CD0B26A97CA9F0BCB4AEF1ACF8D_StaticFields*)il2cpp_codegen_static_fields_for(Tracing_tC7FB30C589F90CD0B26A97CA9F0BCB4AEF1ACF8D_il2cpp_TypeInfo_var))->get_U3CSourceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  ConfiguredTaskAwaitable_1_GetAwaiter_mFCE2327CEE19607ABB1CDCC8A6B145BDCF9820BC_gshared_inline (ConfiguredTaskAwaitable_1_t226372B9DEDA3AA0FC1B43D6C03CEC9111045F18 * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED  L_0 = (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_t2CE498F9A6CE5405242AE2D77F03E58985B7C3ED )L_0;
	}
}
